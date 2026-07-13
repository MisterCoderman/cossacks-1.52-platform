#include "recomp.h"

/* FUN_10007fa0 @ 0x113d7fa0 (10 bytes, 5 insns) */
void f_113d7fa0(void) {
  FTRACE(0x113d7fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7fa1 mov ebp, esp */
  EBP = (ESP);
  /* 113d7fa3 mov eax, dword ptr [0x113fdc94] */
  EAX = (r32((uint32_t)(0x113fdc94)));
  /* 113d7fa8 pop ebp */
  EBP = (pop32());
  /* 113d7fa9 ret  */
  ESPCHK(0x113d7fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fb0 @ 0x113d7fb0 (31 bytes, 11 insns) */
void f_113d7fb0(void) {
  FTRACE(0x113d7fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7fb1 mov ebp, esp */
  EBP = (ESP);
  /* 113d7fb3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7fba jbe 0x113d7fc0 */
  if ((C.cf||C.zf)) goto L_113d7fc0;
  /* 113d7fbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d7fbe jmp 0x113d7fcd */
  goto L_113d7fcd;
L_113d7fc0:;
  /* 113d7fc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7fc3 mov dword ptr [0x113fdc94], eax */
  w32((uint32_t)(0x113fdc94), (EAX));
  /* 113d7fc8 mov eax, 1 */
  EAX = (0x1u);
L_113d7fcd:;
  /* 113d7fcd pop ebp */
  EBP = (pop32());
  /* 113d7fce ret  */
  ESPCHK(0x113d7fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fd0 @ 0x113d7fd0 (89 bytes, 20 insns) */
void f_113d7fd0(void) {
  FTRACE(0x113d7fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7fd1 mov ebp, esp */
  EBP = (ESP);
  /* 113d7fd3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 113d7fd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d7fda mov eax, dword ptr [0x11400ecc] */
  EAX = (r32((uint32_t)(0x11400ecc)));
  /* 113d7fdf push eax */
  push32((uint32_t)(EAX));
  /* 113d7fe0 call dword ptr [0x11402314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402314))), 0x113d7fe6u);
  /* 113d7fe6 mov dword ptr [0x11400ec8], eax */
  w32((uint32_t)(0x11400ec8), (EAX));
  /* 113d7feb cmp dword ptr [0x11400ec8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11400ec8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7ff2 jne 0x113d7ff8 */
  if (!C.zf) goto L_113d7ff8;
  /* 113d7ff4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d7ff6 jmp 0x113d8027 */
  goto L_113d8027;
L_113d7ff8:;
  /* 113d7ff8 mov ecx, dword ptr [0x11400ec8] */
  ECX = (r32((uint32_t)(0x11400ec8)));
  /* 113d7ffe mov dword ptr [0x11400ebc], ecx */
  w32((uint32_t)(0x11400ebc), (ECX));
  /* 113d8004 mov dword ptr [0x11400ec0], 0 */
  w32((uint32_t)(0x11400ec0), (0x0u));
  /* 113d800e mov dword ptr [0x11400ec4], 0 */
  w32((uint32_t)(0x11400ec4), (0x0u));
  /* 113d8018 mov dword ptr [0x11400ea8], 0x10 */
  w32((uint32_t)(0x11400ea8), (0x10u));
  /* 113d8022 mov eax, 1 */
  EAX = (0x1u);
L_113d8027:;
  /* 113d8027 pop ebp */
  EBP = (pop32());
  /* 113d8028 ret  */
  ESPCHK(0x113d7fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008030 @ 0x113d8030 (85 bytes, 29 insns) */
void f_113d8030(void) {
  FTRACE(0x113d8030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d8030 push ebp */
  push32((uint32_t)(EBP));
  /* 113d8031 mov ebp, esp */
  EBP = (ESP);
  /* 113d8033 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8036 mov eax, dword ptr [0x11400ec4] */
  EAX = (r32((uint32_t)(0x11400ec4)));
  /* 113d803b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d803e mov ecx, dword ptr [0x11400ec8] */
  ECX = (r32((uint32_t)(0x11400ec8)));
  /* 113d8044 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8046 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113d8049 mov edx, dword ptr [0x11400ec8] */
  EDX = (r32((uint32_t)(0x11400ec8)));
  /* 113d804f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_113d8052:;
  /* 113d8052 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d8055 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8058 jae 0x113d807f */
  if (!C.cf) goto L_113d807f;
  /* 113d805a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d805d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d8060 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8063 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d8066 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d806d jae 0x113d8074 */
  if (!C.cf) goto L_113d8074;
  /* 113d806f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d8072 jmp 0x113d8081 */
  goto L_113d8081;
L_113d8074:;
  /* 113d8074 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d8077 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d807a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d807d jmp 0x113d8052 */
  goto L_113d8052;
L_113d807f:;
  /* 113d807f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113d8081:;
  /* 113d8081 mov esp, ebp */
  ESP = (EBP);
  /* 113d8083 pop ebp */
  EBP = (pop32());
  /* 113d8084 ret  */
  ESPCHK(0x113d8030u, _esp0);
  ESP += 4; return;
}

/* FUN_10008090 @ 0x113d8090 (95 bytes, 33 insns) */
void f_113d8090(void) {
  FTRACE(0x113d8090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d8090 push ebp */
  push32((uint32_t)(EBP));
  /* 113d8091 mov ebp, esp */
  EBP = (ESP);
  /* 113d8093 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d8099 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d809c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d809f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113d80a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d80a5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 113d80a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d80ab mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d80b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d80b3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d80b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d80b8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113d80bb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 113d80bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d80bf jne 0x113d80e1 */
  if (!C.zf) goto L_113d80e1;
  /* 113d80c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d80c4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 113d80c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d80c9 jne 0x113d80e1 */
  if (!C.zf) goto L_113d80e1;
  /* 113d80cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d80ce and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d80d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d80d6 je 0x113d80e1 */
  if (C.zf) goto L_113d80e1;
  /* 113d80d8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 113d80df jmp 0x113d80e8 */
  goto L_113d80e8;
L_113d80e1:;
  /* 113d80e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_113d80e8:;
  /* 113d80e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d80eb mov esp, ebp */
  ESP = (EBP);
  /* 113d80ed pop ebp */
  EBP = (pop32());
  /* 113d80ee ret  */
  ESPCHK(0x113d8090u, _esp0);
  ESP += 4; return;
}

/* FUN_100080f0 @ 0x113d80f0 (1485 bytes, 453 insns) */
void f_113d80f0(void) {
  FTRACE(0x113d80f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d80f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d80f1 mov ebp, esp */
  EBP = (ESP);
  /* 113d80f3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d80f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d80f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113d80fc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 113d80ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d8102 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d8105 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8108 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113d810b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d810e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 113d8111 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113d8114 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8117 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d811d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d8120 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 113d8127 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113d812a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d812d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8130 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 113d8133 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d8136 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d8138 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d813b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 113d813e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d8141 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8144 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 113d8147 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d814a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d814c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113d814f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d8152 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 113d8155 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113d8158 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d815b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113d815e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d8160 jne 0x113d8288 */
  if (!C.zf) goto L_113d8288;
  /* 113d8166 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d8169 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 113d816c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d816f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 113d8172 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8176 jbe 0x113d817f */
  if ((C.cf||C.zf)) goto L_113d817f;
  /* 113d8178 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_113d817f:;
  /* 113d817f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8182 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8185 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d8188 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d818b jne 0x113d8261 */
  if (!C.zf) goto L_113d8261;
  /* 113d8191 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8195 jae 0x113d81f6 */
  if (!C.cf) goto L_113d81f6;
  /* 113d8197 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d819c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d819f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d81a1 not eax */
  EAX = (~(EAX));
  /* 113d81a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d81a6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d81a9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 113d81ad and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113d81af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d81b2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d81b5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 113d81b9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d81bc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d81bf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 113d81c2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113d81c5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d81c8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d81cb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 113d81ce mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d81d1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d81d4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 113d81d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d81da jne 0x113d81f4 */
  if (!C.zf) goto L_113d81f4;
  /* 113d81dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d81e1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d81e4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d81e6 not eax */
  EAX = (~(EAX));
  /* 113d81e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d81eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d81ed and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 113d81ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d81f2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_113d81f4:;
  /* 113d81f4 jmp 0x113d8261 */
  goto L_113d8261;
L_113d81f6:;
  /* 113d81f6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d81f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d81fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d8201 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d8203 not edx */
  EDX = (~(EDX));
  /* 113d8205 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8208 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d820b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 113d8212 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113d8214 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8217 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d821a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 113d8221 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d8224 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8227 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 113d822a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113d822d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d8230 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8233 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 113d8236 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d8239 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d823c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 113d8240 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d8242 jne 0x113d8261 */
  if (!C.zf) goto L_113d8261;
  /* 113d8244 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d8247 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d824a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d824f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d8251 not edx */
  EDX = (~(EDX));
  /* 113d8253 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d8256 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d8259 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 113d825b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d825e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_113d8261:;
  /* 113d8261 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8264 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113d8267 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d826a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 113d826d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 113d8270 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8273 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d8276 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8279 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113d827c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 113d827f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d8282 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8285 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_113d8288:;
  /* 113d8288 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d828b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 113d828e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8291 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 113d8294 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8298 jbe 0x113d82a1 */
  if ((C.cf||C.zf)) goto L_113d82a1;
  /* 113d829a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_113d82a1:;
  /* 113d82a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d82a4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113d82a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d82a9 jne 0x113d8405 */
  if (!C.zf) goto L_113d8405;
  /* 113d82af mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d82b2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d82b5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 113d82b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d82bb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 113d82be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d82c1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 113d82c4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d82c8 jbe 0x113d82d1 */
  if ((C.cf||C.zf)) goto L_113d82d1;
  /* 113d82ca mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_113d82d1:;
  /* 113d82d1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d82d4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d82d7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 113d82da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d82dd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 113d82e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d82e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 113d82e6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d82ea jbe 0x113d82f3 */
  if ((C.cf||C.zf)) goto L_113d82f3;
  /* 113d82ec mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_113d82f3:;
  /* 113d82f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d82f6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d82f9 je 0x113d83ff */
  if (C.zf) goto L_113d83ff;
  /* 113d82ff mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 113d8302 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 113d8305 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d8308 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d830b jne 0x113d83e1 */
  if (!C.zf) goto L_113d83e1;
  /* 113d8311 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8315 jae 0x113d8376 */
  if (!C.cf) goto L_113d8376;
  /* 113d8317 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d831c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d831f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d8321 not edx */
  EDX = (~(EDX));
  /* 113d8323 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8326 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d8329 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 113d832d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113d832f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8332 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d8335 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 113d8339 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d833c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d833f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 113d8342 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113d8345 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d8348 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d834b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 113d834e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d8351 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8354 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 113d8358 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d835a jne 0x113d8374 */
  if (!C.zf) goto L_113d8374;
  /* 113d835c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d8361 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d8364 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d8366 not edx */
  EDX = (~(EDX));
  /* 113d8368 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d836b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d836d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 113d836f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d8372 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_113d8374:;
  /* 113d8374 jmp 0x113d83e1 */
  goto L_113d83e1;
L_113d8376:;
  /* 113d8376 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d8379 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d837c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d8381 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d8383 not eax */
  EAX = (~(EAX));
  /* 113d8385 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8388 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d838b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 113d8392 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113d8394 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8397 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d839a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 113d83a1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d83a4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d83a7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 113d83aa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113d83ad mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d83b0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d83b3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 113d83b6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d83b9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d83bc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 113d83c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d83c2 jne 0x113d83e1 */
  if (!C.zf) goto L_113d83e1;
  /* 113d83c4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d83c7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d83ca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d83cf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d83d1 not eax */
  EAX = (~(EAX));
  /* 113d83d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d83d6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d83d9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 113d83db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d83de mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_113d83e1:;
  /* 113d83e1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 113d83e4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113d83e7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 113d83ea mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d83ed mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 113d83f0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 113d83f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 113d83f6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 113d83f9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113d83fc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_113d83ff:;
  /* 113d83ff mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 113d8402 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_113d8405:;
  /* 113d8405 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d8408 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113d840b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d840d jne 0x113d841b */
  if (!C.zf) goto L_113d841b;
  /* 113d840f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d8412 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8415 je 0x113d852b */
  if (C.zf) goto L_113d852b;
L_113d841b:;
  /* 113d841b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d841e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d8421 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 113d8424 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 113d8427 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d842a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d842d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d8430 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 113d8433 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d8436 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d8439 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 113d843c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d843f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d8442 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 113d8445 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d8448 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d844b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d844e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 113d8451 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d8454 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d8457 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d845a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d845d jne 0x113d852b */
  if (!C.zf) goto L_113d852b;
  /* 113d8463 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8467 jae 0x113d84c4 */
  if (!C.cf) goto L_113d84c4;
  /* 113d8469 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d846c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d846f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 113d8473 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d8476 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8479 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 113d847c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 113d847f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d8482 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8485 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 113d8488 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d848a jne 0x113d84a2 */
  if (!C.zf) goto L_113d84a2;
  /* 113d848c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d8491 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d8494 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d8496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d8499 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d849b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 113d849d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d84a0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_113d84a2:;
  /* 113d84a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d84a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d84aa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d84ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d84af mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d84b2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 113d84b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113d84b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d84bb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d84be mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 113d84c2 jmp 0x113d852b */
  goto L_113d852b;
L_113d84c4:;
  /* 113d84c4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d84c7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d84ca movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 113d84ce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d84d1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d84d4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 113d84d7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 113d84da mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d84dd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d84e0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 113d84e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d84e5 jne 0x113d8502 */
  if (!C.zf) goto L_113d8502;
  /* 113d84e7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d84ea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d84ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d84f2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d84f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d84f7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d84fa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 113d84fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d84ff mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_113d8502:;
  /* 113d8502 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d8505 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8508 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d850d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d850f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8512 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d8515 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 113d851c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113d851e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8521 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 113d8524 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_113d852b:;
  /* 113d852b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d852e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d8531 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 113d8533 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d8536 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8539 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d853c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 113d853f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d8542 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d8544 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8547 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d854a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113d854c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d854f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8552 jne 0x113d86b9 */
  if (!C.zf) goto L_113d86b9;
  /* 113d8558 cmp dword ptr [0x11400ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11400ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d855f je 0x113d86a8 */
  if (C.zf) goto L_113d86a8;
  /* 113d8565 mov eax, dword ptr [0x11400eb8] */
  EAX = (r32((uint32_t)(0x11400eb8)));
  /* 113d856a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 113d856d mov ecx, dword ptr [0x11400ec0] */
  ECX = (r32((uint32_t)(0x11400ec0)));
  /* 113d8573 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113d8576 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8578 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 113d857b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 113d8580 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 113d8585 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8588 push eax */
  push32((uint32_t)(EAX));
  /* 113d8589 call dword ptr [0x11402330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402330))), 0x113d858fu);
  /* 113d858f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d8594 mov ecx, dword ptr [0x11400eb8] */
  ECX = (r32((uint32_t)(0x11400eb8)));
  /* 113d859a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d859c mov eax, dword ptr [0x11400ec0] */
  EAX = (r32((uint32_t)(0x11400ec0)));
  /* 113d85a1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113d85a4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 113d85a6 mov edx, dword ptr [0x11400ec0] */
  EDX = (r32((uint32_t)(0x11400ec0)));
  /* 113d85ac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 113d85af mov eax, dword ptr [0x11400ec0] */
  EAX = (r32((uint32_t)(0x11400ec0)));
  /* 113d85b4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113d85b7 mov edx, dword ptr [0x11400eb8] */
  EDX = (r32((uint32_t)(0x11400eb8)));
  /* 113d85bd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 113d85c8 mov eax, dword ptr [0x11400ec0] */
  EAX = (r32((uint32_t)(0x11400ec0)));
  /* 113d85cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113d85d0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 113d85d3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113d85d6 mov eax, dword ptr [0x11400ec0] */
  EAX = (r32((uint32_t)(0x11400ec0)));
  /* 113d85db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113d85de mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 113d85e1 mov edx, dword ptr [0x11400ec0] */
  EDX = (r32((uint32_t)(0x11400ec0)));
  /* 113d85e7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113d85ea movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 113d85ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d85f0 jne 0x113d8606 */
  if (!C.zf) goto L_113d8606;
  /* 113d85f2 mov edx, dword ptr [0x11400ec0] */
  EDX = (r32((uint32_t)(0x11400ec0)));
  /* 113d85f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 113d85fb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 113d85fd mov ecx, dword ptr [0x11400ec0] */
  ECX = (r32((uint32_t)(0x11400ec0)));
  /* 113d8603 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_113d8606:;
  /* 113d8606 mov edx, dword ptr [0x11400ec0] */
  EDX = (r32((uint32_t)(0x11400ec0)));
  /* 113d860c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8610 jne 0x113d86a8 */
  if (!C.zf) goto L_113d86a8;
  /* 113d8616 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 113d861b push 0 */
  push32((uint32_t)(0x0u));
  /* 113d861d mov eax, dword ptr [0x11400ec0] */
  EAX = (r32((uint32_t)(0x11400ec0)));
  /* 113d8622 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113d8625 push ecx */
  push32((uint32_t)(ECX));
  /* 113d8626 call dword ptr [0x11402330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402330))), 0x113d862cu);
  /* 113d862c mov edx, dword ptr [0x11400ec0] */
  EDX = (r32((uint32_t)(0x11400ec0)));
  /* 113d8632 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113d8635 push eax */
  push32((uint32_t)(EAX));
  /* 113d8636 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d8638 mov ecx, dword ptr [0x11400ecc] */
  ECX = (r32((uint32_t)(0x11400ecc)));
  /* 113d863e push ecx */
  push32((uint32_t)(ECX));
  /* 113d863f call dword ptr [0x11402384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402384))), 0x113d8645u);
  /* 113d8645 mov edx, dword ptr [0x11400ec4] */
  EDX = (r32((uint32_t)(0x11400ec4)));
  /* 113d864b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d864e mov eax, dword ptr [0x11400ec8] */
  EAX = (r32((uint32_t)(0x11400ec8)));
  /* 113d8653 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8655 mov ecx, dword ptr [0x11400ec0] */
  ECX = (r32((uint32_t)(0x11400ec0)));
  /* 113d865b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d865e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8660 push eax */
  push32((uint32_t)(EAX));
  /* 113d8661 mov edx, dword ptr [0x11400ec0] */
  EDX = (r32((uint32_t)(0x11400ec0)));
  /* 113d8667 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d866a push edx */
  push32((uint32_t)(EDX));
  /* 113d866b mov eax, dword ptr [0x11400ec0] */
  EAX = (r32((uint32_t)(0x11400ec0)));
  /* 113d8670 push eax */
  push32((uint32_t)(EAX));
  /* 113d8671 call 0x113dbc20 */
  push32(0x113d8676u); f_113dbc20();
  /* 113d8676 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8679 mov ecx, dword ptr [0x11400ec4] */
  ECX = (r32((uint32_t)(0x11400ec4)));
  /* 113d867f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8682 mov dword ptr [0x11400ec4], ecx */
  w32((uint32_t)(0x11400ec4), (ECX));
  /* 113d8688 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d868b cmp edx, dword ptr [0x11400ec0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11400ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8691 jbe 0x113d869c */
  if ((C.cf||C.zf)) goto L_113d869c;
  /* 113d8693 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d8696 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8699 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_113d869c:;
  /* 113d869c mov ecx, dword ptr [0x11400ec8] */
  ECX = (r32((uint32_t)(0x11400ec8)));
  /* 113d86a2 mov dword ptr [0x11400ebc], ecx */
  w32((uint32_t)(0x11400ebc), (ECX));
L_113d86a8:;
  /* 113d86a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d86ab mov dword ptr [0x11400ec0], edx */
  w32((uint32_t)(0x11400ec0), (EDX));
  /* 113d86b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d86b4 mov dword ptr [0x11400eb8], eax */
  w32((uint32_t)(0x11400eb8), (EAX));
L_113d86b9:;
  /* 113d86b9 mov esp, ebp */
  ESP = (EBP);
  /* 113d86bb pop ebp */
  EBP = (pop32());
  /* 113d86bc ret  */
  ESPCHK(0x113d80f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100086c0 @ 0x113d86c0 (1334 bytes, 427 insns) */
void f_113d86c0(void) {
  FTRACE(0x113d86c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d86c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d86c1 mov ebp, esp */
  EBP = (ESP);
  /* 113d86c3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d86c6 push esi */
  push32((uint32_t)(ESI));
  /* 113d86c7 mov eax, dword ptr [0x11400ec4] */
  EAX = (r32((uint32_t)(0x11400ec4)));
  /* 113d86cc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d86cf mov ecx, dword ptr [0x11400ec8] */
  ECX = (r32((uint32_t)(0x11400ec8)));
  /* 113d86d5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d86d7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 113d86da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d86dd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d86e0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 113d86e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 113d86e6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d86e9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 113d86ec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d86ef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113d86f2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d86f6 jge 0x113d870c */
  if ((C.sf==C.of)) goto L_113d870c;
  /* 113d86f8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113d86fb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d86fe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d8700 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 113d8703 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 113d870a jmp 0x113d8721 */
  goto L_113d8721;
L_113d870c:;
  /* 113d870c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 113d8713 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d8716 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8719 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d871c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d871e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_113d8721:;
  /* 113d8721 mov ecx, dword ptr [0x11400ebc] */
  ECX = (r32((uint32_t)(0x11400ebc)));
  /* 113d8727 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_113d872a:;
  /* 113d872a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d872d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8730 jae 0x113d8756 */
  if (!C.cf) goto L_113d8756;
  /* 113d8732 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8735 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d8738 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 113d873a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d873d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 113d8740 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 113d8743 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113d8745 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d8747 je 0x113d874b */
  if (C.zf) goto L_113d874b;
  /* 113d8749 jmp 0x113d8756 */
  goto L_113d8756;
L_113d874b:;
  /* 113d874b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d874e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8751 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 113d8754 jmp 0x113d872a */
  goto L_113d872a;
L_113d8756:;
  /* 113d8756 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8759 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d875c jne 0x113d883d */
  if (!C.zf) goto L_113d883d;
  /* 113d8762 mov eax, dword ptr [0x11400ec8] */
  EAX = (r32((uint32_t)(0x11400ec8)));
  /* 113d8767 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_113d876a:;
  /* 113d876a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d876d cmp ecx, dword ptr [0x11400ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11400ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8773 jae 0x113d8799 */
  if (!C.cf) goto L_113d8799;
  /* 113d8775 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8778 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d877b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 113d877d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8780 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 113d8783 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 113d8786 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113d8788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d878a je 0x113d878e */
  if (C.zf) goto L_113d878e;
  /* 113d878c jmp 0x113d8799 */
  goto L_113d8799;
L_113d878e:;
  /* 113d878e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8791 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8794 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113d8797 jmp 0x113d876a */
  goto L_113d876a;
L_113d8799:;
  /* 113d8799 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d879c cmp ecx, dword ptr [0x11400ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11400ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d87a2 jne 0x113d883d */
  if (!C.zf) goto L_113d883d;
L_113d87a8:;
  /* 113d87a8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d87ab cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d87ae jae 0x113d87c6 */
  if (!C.cf) goto L_113d87c6;
  /* 113d87b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d87b3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d87b7 je 0x113d87bb */
  if (C.zf) goto L_113d87bb;
  /* 113d87b9 jmp 0x113d87c6 */
  goto L_113d87c6;
L_113d87bb:;
  /* 113d87bb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d87be add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d87c1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 113d87c4 jmp 0x113d87a8 */
  goto L_113d87a8;
L_113d87c6:;
  /* 113d87c6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d87c9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d87cc jne 0x113d8817 */
  if (!C.zf) goto L_113d8817;
  /* 113d87ce mov eax, dword ptr [0x11400ec8] */
  EAX = (r32((uint32_t)(0x11400ec8)));
  /* 113d87d3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_113d87d6:;
  /* 113d87d6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d87d9 cmp ecx, dword ptr [0x11400ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11400ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d87df jae 0x113d87f7 */
  if (!C.cf) goto L_113d87f7;
  /* 113d87e1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d87e4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d87e8 je 0x113d87ec */
  if (C.zf) goto L_113d87ec;
  /* 113d87ea jmp 0x113d87f7 */
  goto L_113d87f7;
L_113d87ec:;
  /* 113d87ec mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d87ef add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d87f2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113d87f5 jmp 0x113d87d6 */
  goto L_113d87d6;
L_113d87f7:;
  /* 113d87f7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d87fa cmp ecx, dword ptr [0x11400ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11400ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8800 jne 0x113d8817 */
  if (!C.zf) goto L_113d8817;
  /* 113d8802 call 0x113d8c00 */
  push32(0x113d8807u); f_113d8c00();
  /* 113d8807 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113d880a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d880e jne 0x113d8817 */
  if (!C.zf) goto L_113d8817;
  /* 113d8810 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d8812 jmp 0x113d8bf1 */
  goto L_113d8bf1;
L_113d8817:;
  /* 113d8817 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d881a push edx */
  push32((uint32_t)(EDX));
  /* 113d881b call 0x113d8d10 */
  push32(0x113d8820u); f_113d8d10();
  /* 113d8820 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8823 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8826 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 113d8829 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 113d882b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d882e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113d8831 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8834 jne 0x113d883d */
  if (!C.zf) goto L_113d883d;
  /* 113d8836 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d8838 jmp 0x113d8bf1 */
  goto L_113d8bf1;
L_113d883d:;
  /* 113d883d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8840 mov dword ptr [0x11400ebc], edx */
  w32((uint32_t)(0x11400ebc), (EDX));
  /* 113d8846 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8849 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113d884c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 113d884f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8852 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d8854 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 113d8857 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d885b je 0x113d8880 */
  if (C.zf) goto L_113d8880;
  /* 113d885d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d8860 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8863 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d8866 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 113d886a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d886d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8870 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 113d8873 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 113d887a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 113d887c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d887e jne 0x113d88b5 */
  if (!C.zf) goto L_113d88b5;
L_113d8880:;
  /* 113d8880 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_113d8887:;
  /* 113d8887 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d888a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d888d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d8890 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 113d8894 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d8897 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d889a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 113d889d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 113d88a4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 113d88a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d88a8 jne 0x113d88b5 */
  if (!C.zf) goto L_113d88b5;
  /* 113d88aa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d88ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d88b0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 113d88b3 jmp 0x113d8887 */
  goto L_113d8887;
L_113d88b5:;
  /* 113d88b5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d88b8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d88be mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d88c1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 113d88c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d88cb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 113d88d2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d88d5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d88d8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d88db and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 113d88df mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 113d88e2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d88e6 jne 0x113d8902 */
  if (!C.zf) goto L_113d8902;
  /* 113d88e8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 113d88ef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d88f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d88f5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 113d88f8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 113d88ff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_113d8902:;
  /* 113d8902 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8906 jl 0x113d891b */
  if ((C.sf!=C.of)) goto L_113d891b;
  /* 113d8908 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d890b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113d890d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 113d8910 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d8913 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8916 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 113d8919 jmp 0x113d8902 */
  goto L_113d8902;
L_113d891b:;
  /* 113d891b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d891e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8921 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 113d8925 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113d8928 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d892b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d892d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8930 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d8933 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d8936 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 113d8939 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d893c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113d893f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8943 jle 0x113d894c */
  if ((C.zf||C.sf!=C.of)) goto L_113d894c;
  /* 113d8945 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_113d894c:;
  /* 113d894c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d894f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8952 je 0x113d8b70 */
  if (C.zf) goto L_113d8b70;
  /* 113d8958 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d895b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d895e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d8961 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8964 jne 0x113d8a3a */
  if (!C.zf) goto L_113d8a3a;
  /* 113d896a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d896e jge 0x113d89cf */
  if ((C.sf==C.of)) goto L_113d89cf;
  /* 113d8970 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d8975 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d8978 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d897a not eax */
  EAX = (~(EAX));
  /* 113d897c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d897f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8982 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 113d8986 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113d8988 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d898b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d898e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 113d8992 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8995 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8998 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 113d899b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113d899e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d89a1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d89a4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 113d89a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d89aa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d89ad movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 113d89b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d89b3 jne 0x113d89cd */
  if (!C.zf) goto L_113d89cd;
  /* 113d89b5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d89ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d89bd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d89bf not eax */
  EAX = (~(EAX));
  /* 113d89c1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d89c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d89c6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 113d89c8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d89cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_113d89cd:;
  /* 113d89cd jmp 0x113d8a3a */
  goto L_113d8a3a;
L_113d89cf:;
  /* 113d89cf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d89d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d89d5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d89da shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d89dc not edx */
  EDX = (~(EDX));
  /* 113d89de mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d89e1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d89e4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 113d89eb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113d89ed mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d89f0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d89f3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 113d89fa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d89fd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8a00 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 113d8a03 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113d8a06 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8a09 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8a0c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 113d8a0f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8a12 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8a15 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 113d8a19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d8a1b jne 0x113d8a3a */
  if (!C.zf) goto L_113d8a3a;
  /* 113d8a1d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d8a20 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8a23 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d8a28 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d8a2a not edx */
  EDX = (~(EDX));
  /* 113d8a2c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8a2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d8a32 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 113d8a34 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8a37 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_113d8a3a:;
  /* 113d8a3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8a3d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113d8a40 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8a43 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 113d8a46 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 113d8a49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8a4c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d8a4f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8a52 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113d8a55 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 113d8a58 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8a5c je 0x113d8b70 */
  if (C.zf) goto L_113d8b70;
  /* 113d8a62 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d8a65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8a68 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 113d8a6b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113d8a6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8a71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d8a74 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d8a77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 113d8a7a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8a7d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d8a80 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 113d8a83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d8a86 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8a89 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 113d8a8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8a8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d8a92 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8a95 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 113d8a98 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8a9b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8a9e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d8aa1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8aa4 jne 0x113d8b70 */
  if (!C.zf) goto L_113d8b70;
  /* 113d8aaa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8aae jge 0x113d8b0a */
  if ((C.sf==C.of)) goto L_113d8b0a;
  /* 113d8ab0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8ab3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8ab6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 113d8aba mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8abd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8ac0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 113d8ac3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 113d8ac5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8ac8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8acb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 113d8ace test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d8ad0 jne 0x113d8ae8 */
  if (!C.zf) goto L_113d8ae8;
  /* 113d8ad2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d8ad7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d8ada shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d8adc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8adf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d8ae1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 113d8ae3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8ae6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_113d8ae8:;
  /* 113d8ae8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d8aed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d8af0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d8af2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d8af5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8af8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 113d8afc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113d8afe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d8b01 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8b04 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 113d8b08 jmp 0x113d8b70 */
  goto L_113d8b70;
L_113d8b0a:;
  /* 113d8b0a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8b0d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8b10 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 113d8b14 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8b17 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8b1a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 113d8b1d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 113d8b1f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8b22 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8b25 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 113d8b28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d8b2a jne 0x113d8b47 */
  if (!C.zf) goto L_113d8b47;
  /* 113d8b2c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d8b2f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8b32 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d8b37 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d8b39 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8b3c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d8b3f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 113d8b41 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8b44 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_113d8b47:;
  /* 113d8b47 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d8b4a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8b4d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d8b52 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d8b54 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d8b57 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8b5a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 113d8b61 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113d8b63 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d8b66 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8b69 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_113d8b70:;
  /* 113d8b70 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8b74 je 0x113d8b8a */
  if (C.zf) goto L_113d8b8a;
  /* 113d8b76 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8b79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d8b7c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 113d8b7e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8b81 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8b84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d8b87 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_113d8b8a:;
  /* 113d8b8a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8b8d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8b90 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113d8b93 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d8b96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8b99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8b9c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113d8b9e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d8ba1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8ba4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8ba7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8baa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 113d8bad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8bb0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d8bb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8bb5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d8bb7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8bba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8bbd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 113d8bbf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d8bc1 jne 0x113d8be3 */
  if (!C.zf) goto L_113d8be3;
  /* 113d8bc3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8bc6 cmp eax, dword ptr [0x11400ec0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11400ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8bcc jne 0x113d8be3 */
  if (!C.zf) goto L_113d8be3;
  /* 113d8bce mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d8bd1 cmp ecx, dword ptr [0x11400eb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11400eb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8bd7 jne 0x113d8be3 */
  if (!C.zf) goto L_113d8be3;
  /* 113d8bd9 mov dword ptr [0x11400ec0], 0 */
  w32((uint32_t)(0x11400ec0), (0x0u));
L_113d8be3:;
  /* 113d8be3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 113d8be6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d8be9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 113d8beb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8bee add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_113d8bf1:;
  /* 113d8bf1 pop esi */
  ESI = (pop32());
  /* 113d8bf2 mov esp, ebp */
  ESP = (EBP);
  /* 113d8bf4 pop ebp */
  EBP = (pop32());
  /* 113d8bf5 ret  */
  ESPCHK(0x113d86c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c00 @ 0x113d8c00 (271 bytes, 78 insns) */
void f_113d8c00(void) {
  FTRACE(0x113d8c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d8c00 push ebp */
  push32((uint32_t)(EBP));
  /* 113d8c01 mov ebp, esp */
  EBP = (ESP);
  /* 113d8c03 push ecx */
  push32((uint32_t)(ECX));
  /* 113d8c04 mov eax, dword ptr [0x11400ec4] */
  EAX = (r32((uint32_t)(0x11400ec4)));
  /* 113d8c09 cmp eax, dword ptr [0x11400ea8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11400ea8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8c0f jne 0x113d8c5b */
  if (!C.zf) goto L_113d8c5b;
  /* 113d8c11 mov ecx, dword ptr [0x11400ea8] */
  ECX = (r32((uint32_t)(0x11400ea8)));
  /* 113d8c17 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8c1a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d8c1d push ecx */
  push32((uint32_t)(ECX));
  /* 113d8c1e mov edx, dword ptr [0x11400ec8] */
  EDX = (r32((uint32_t)(0x11400ec8)));
  /* 113d8c24 push edx */
  push32((uint32_t)(EDX));
  /* 113d8c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d8c27 mov eax, dword ptr [0x11400ecc] */
  EAX = (r32((uint32_t)(0x11400ecc)));
  /* 113d8c2c push eax */
  push32((uint32_t)(EAX));
  /* 113d8c2d call dword ptr [0x1140231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140231c))), 0x113d8c33u);
  /* 113d8c33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d8c36 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8c3a jne 0x113d8c43 */
  if (!C.zf) goto L_113d8c43;
  /* 113d8c3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d8c3e jmp 0x113d8d0b */
  goto L_113d8d0b;
L_113d8c43:;
  /* 113d8c43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8c46 mov dword ptr [0x11400ec8], ecx */
  w32((uint32_t)(0x11400ec8), (ECX));
  /* 113d8c4c mov edx, dword ptr [0x11400ea8] */
  EDX = (r32((uint32_t)(0x11400ea8)));
  /* 113d8c52 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8c55 mov dword ptr [0x11400ea8], edx */
  w32((uint32_t)(0x11400ea8), (EDX));
L_113d8c5b:;
  /* 113d8c5b mov eax, dword ptr [0x11400ec4] */
  EAX = (r32((uint32_t)(0x11400ec4)));
  /* 113d8c60 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d8c63 mov ecx, dword ptr [0x11400ec8] */
  ECX = (r32((uint32_t)(0x11400ec8)));
  /* 113d8c69 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8c6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113d8c6e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 113d8c73 push 8 */
  push32((uint32_t)(0x8u));
  /* 113d8c75 mov edx, dword ptr [0x11400ecc] */
  EDX = (r32((uint32_t)(0x11400ecc)));
  /* 113d8c7b push edx */
  push32((uint32_t)(EDX));
  /* 113d8c7c call dword ptr [0x11402314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402314))), 0x113d8c82u);
  /* 113d8c82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8c85 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 113d8c88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8c8b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8c8f jne 0x113d8c95 */
  if (!C.zf) goto L_113d8c95;
  /* 113d8c91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d8c93 jmp 0x113d8d0b */
  goto L_113d8d0b;
L_113d8c95:;
  /* 113d8c95 push 4 */
  push32((uint32_t)(0x4u));
  /* 113d8c97 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 113d8c9c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 113d8ca1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d8ca3 call dword ptr [0x1140230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140230c))), 0x113d8ca9u);
  /* 113d8ca9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8cac mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 113d8caf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8cb2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8cb6 jne 0x113d8cd2 */
  if (!C.zf) goto L_113d8cd2;
  /* 113d8cb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8cbb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113d8cbe push ecx */
  push32((uint32_t)(ECX));
  /* 113d8cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 113d8cc1 mov edx, dword ptr [0x11400ecc] */
  EDX = (r32((uint32_t)(0x11400ecc)));
  /* 113d8cc7 push edx */
  push32((uint32_t)(EDX));
  /* 113d8cc8 call dword ptr [0x11402384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402384))), 0x113d8cceu);
  /* 113d8cce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d8cd0 jmp 0x113d8d0b */
  goto L_113d8d0b;
L_113d8cd2:;
  /* 113d8cd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8cd5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113d8cdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8cde mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 113d8ce5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8ce8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 113d8cef mov eax, dword ptr [0x11400ec4] */
  EAX = (r32((uint32_t)(0x11400ec4)));
  /* 113d8cf4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8cf7 mov dword ptr [0x11400ec4], eax */
  w32((uint32_t)(0x11400ec4), (EAX));
  /* 113d8cfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8cff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 113d8d02 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 113d8d08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113d8d0b:;
  /* 113d8d0b mov esp, ebp */
  ESP = (EBP);
  /* 113d8d0d pop ebp */
  EBP = (pop32());
  /* 113d8d0e ret  */
  ESPCHK(0x113d8c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d10 @ 0x113d8d10 (494 bytes, 149 insns) */
void f_113d8d10(void) {
  FTRACE(0x113d8d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d8d10 push ebp */
  push32((uint32_t)(EBP));
  /* 113d8d11 mov ebp, esp */
  EBP = (ESP);
  /* 113d8d13 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8d16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d8d19 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113d8d1c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 113d8d1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d8d22 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113d8d25 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d8d28 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_113d8d2f:;
  /* 113d8d2f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8d33 jl 0x113d8d48 */
  if ((C.sf!=C.of)) goto L_113d8d48;
  /* 113d8d35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d8d38 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 113d8d3a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113d8d3d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d8d40 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8d43 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 113d8d46 jmp 0x113d8d2f */
  goto L_113d8d2f;
L_113d8d48:;
  /* 113d8d48 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d8d4b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d8d51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d8d54 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 113d8d5b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113d8d5e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 113d8d65 jmp 0x113d8d70 */
  goto L_113d8d70;
L_113d8d67:;
  /* 113d8d67 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d8d6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8d6d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_113d8d70:;
  /* 113d8d70 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8d74 jge 0x113d8d96 */
  if ((C.sf==C.of)) goto L_113d8d96;
  /* 113d8d76 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d8d79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d8d7c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 113d8d7f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113d8d82 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8d85 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8d88 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 113d8d8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8d8e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8d91 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 113d8d94 jmp 0x113d8d67 */
  goto L_113d8d67;
L_113d8d96:;
  /* 113d8d96 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d8d99 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 113d8d9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d8d9f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113d8da2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8da4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113d8da7 push 4 */
  push32((uint32_t)(0x4u));
  /* 113d8da9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 113d8dae push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 113d8db3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8db6 push edx */
  push32((uint32_t)(EDX));
  /* 113d8db7 call dword ptr [0x1140230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140230c))), 0x113d8dbdu);
  /* 113d8dbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d8dbf jne 0x113d8dc9 */
  if (!C.zf) goto L_113d8dc9;
  /* 113d8dc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d8dc4 jmp 0x113d8efa */
  goto L_113d8efa;
L_113d8dc9:;
  /* 113d8dc9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8dcc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8dd1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 113d8dd4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8dd7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113d8dda jmp 0x113d8de8 */
  goto L_113d8de8;
L_113d8ddc:;
  /* 113d8ddc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8ddf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8de5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113d8de8:;
  /* 113d8de8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8deb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8dee ja 0x113d8e4d */
  if ((!C.cf&&!C.zf)) goto L_113d8e4d;
  /* 113d8df0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8df3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 113d8dfa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8dfd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 113d8e07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8e0a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8e0d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113d8e10 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8e13 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 113d8e19 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8e1c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8e22 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8e25 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 113d8e28 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8e2b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8e31 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8e34 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 113d8e37 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8e3a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8e3f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 113d8e42 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d8e45 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 113d8e4b jmp 0x113d8ddc */
  goto L_113d8ddc;
L_113d8e4d:;
  /* 113d8e4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d8e50 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8e56 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113d8e59 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8e5c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8e5f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d8e62 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 113d8e65 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d8e68 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 113d8e6b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113d8e6e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8e71 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d8e74 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 113d8e77 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d8e7a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8e7d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d8e80 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 113d8e83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d8e86 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113d8e89 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113d8e8c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d8e8f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d8e92 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 113d8e95 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d8e98 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d8e9b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 113d8ea3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d8ea6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d8ea9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 113d8eb4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d8eb7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 113d8ebb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d8ebe mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 113d8ec1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 113d8ec4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d8ec7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 113d8eca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d8ecc jne 0x113d8edd */
  if (!C.zf) goto L_113d8edd;
  /* 113d8ece mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d8ed1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d8ed4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 113d8ed7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d8eda mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_113d8edd:;
  /* 113d8edd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d8ee2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d8ee5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d8ee7 not edx */
  EDX = (~(EDX));
  /* 113d8ee9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d8eec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113d8eef and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 113d8ef1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d8ef4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 113d8ef7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_113d8efa:;
  /* 113d8efa mov esp, ebp */
  ESP = (EBP);
  /* 113d8efc pop ebp */
  EBP = (pop32());
  /* 113d8efd ret  */
  ESPCHK(0x113d8d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f00 @ 0x113d8f00 (1515 bytes, 489 insns) */
void f_113d8f00(void) {
  FTRACE(0x113d8f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d8f00 push ebp */
  push32((uint32_t)(EBP));
  /* 113d8f01 mov ebp, esp */
  EBP = (ESP);
  /* 113d8f03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8f06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d8f09 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8f0c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 113d8f0e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 113d8f11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d8f14 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 113d8f17 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 113d8f1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d8f1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d8f20 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8f23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113d8f26 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d8f29 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 113d8f2c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d8f2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8f32 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d8f38 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d8f3b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 113d8f42 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113d8f45 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d8f48 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8f4b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113d8f4e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d8f51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d8f53 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8f56 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 113d8f59 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d8f5c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8f5f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 113d8f62 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d8f65 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d8f67 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 113d8f6a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d8f6d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8f70 jle 0x113d9226 */
  if ((C.zf||C.sf!=C.of)) goto L_113d9226;
  /* 113d8f76 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8f79 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113d8f7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d8f7e jne 0x113d8f8b */
  if (!C.zf) goto L_113d8f8b;
  /* 113d8f80 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d8f83 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8f86 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8f89 jle 0x113d8f92 */
  if ((C.zf||C.sf!=C.of)) goto L_113d8f92;
L_113d8f8b:;
  /* 113d8f8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d8f8d jmp 0x113d94e7 */
  goto L_113d94e7;
L_113d8f92:;
  /* 113d8f92 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d8f95 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 113d8f98 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d8f9b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113d8f9e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8fa2 jbe 0x113d8fab */
  if ((C.cf||C.zf)) goto L_113d8fab;
  /* 113d8fa4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_113d8fab:;
  /* 113d8fab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d8fae mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d8fb1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d8fb4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8fb7 jne 0x113d908d */
  if (!C.zf) goto L_113d908d;
  /* 113d8fbd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d8fc1 jae 0x113d9022 */
  if (!C.cf) goto L_113d9022;
  /* 113d8fc3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d8fc8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d8fcb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d8fcd not edx */
  EDX = (~(EDX));
  /* 113d8fcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8fd2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d8fd5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 113d8fd9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113d8fdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d8fde mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d8fe1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 113d8fe5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d8fe8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8feb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 113d8fee sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113d8ff1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d8ff4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d8ff7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 113d8ffa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d8ffd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9000 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 113d9004 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d9006 jne 0x113d9020 */
  if (!C.zf) goto L_113d9020;
  /* 113d9008 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d900d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d9010 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d9012 not edx */
  EDX = (~(EDX));
  /* 113d9014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d9017 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d9019 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 113d901b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d901e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_113d9020:;
  /* 113d9020 jmp 0x113d908d */
  goto L_113d908d;
L_113d9022:;
  /* 113d9022 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d9025 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d9028 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d902d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d902f not eax */
  EAX = (~(EAX));
  /* 113d9031 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d9034 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d9037 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 113d903e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113d9040 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d9043 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d9046 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 113d904d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d9050 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9053 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 113d9056 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113d9059 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d905c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d905f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 113d9062 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d9065 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9068 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 113d906c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d906e jne 0x113d908d */
  if (!C.zf) goto L_113d908d;
  /* 113d9070 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d9073 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d9076 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d907b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d907d not eax */
  EAX = (~(EAX));
  /* 113d907f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d9082 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d9085 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 113d9087 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d908a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_113d908d:;
  /* 113d908d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d9090 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113d9093 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d9096 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d9099 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 113d909c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d909f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 113d90a2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d90a5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113d90a8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 113d90ab mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d90ae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d90b1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d90b4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113d90b7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d90bb jle 0x113d9207 */
  if ((C.zf||C.sf!=C.of)) goto L_113d9207;
  /* 113d90c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d90c4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d90c7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 113d90ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d90cd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 113d90d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d90d3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 113d90d6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d90da jbe 0x113d90e3 */
  if ((C.cf||C.zf)) goto L_113d90e3;
  /* 113d90dc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_113d90e3:;
  /* 113d90e3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d90e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d90e9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 113d90ec mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 113d90ef mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d90f2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d90f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d90f8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 113d90fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d90fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d9101 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 113d9104 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d9107 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d910a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 113d910d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d9110 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d9113 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d9116 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 113d9119 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d911c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d911f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d9122 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9125 jne 0x113d91f3 */
  if (!C.zf) goto L_113d91f3;
  /* 113d912b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d912f jae 0x113d918c */
  if (!C.cf) goto L_113d918c;
  /* 113d9131 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d9134 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9137 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 113d913b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d913e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9141 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 113d9144 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 113d9147 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d914a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d914d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 113d9150 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d9152 jne 0x113d916a */
  if (!C.zf) goto L_113d916a;
  /* 113d9154 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d9159 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d915c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d915e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d9161 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d9163 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 113d9165 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d9168 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_113d916a:;
  /* 113d916a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d916f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d9172 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d9174 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d9177 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d917a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 113d917e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113d9180 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d9183 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d9186 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 113d918a jmp 0x113d91f3 */
  goto L_113d91f3;
L_113d918c:;
  /* 113d918c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d918f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9192 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 113d9196 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d9199 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d919c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 113d919f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 113d91a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d91a5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d91a8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 113d91ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d91ad jne 0x113d91ca */
  if (!C.zf) goto L_113d91ca;
  /* 113d91af mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d91b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d91b5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d91ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d91bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d91bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d91c2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 113d91c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d91c7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_113d91ca:;
  /* 113d91ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d91cd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d91d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d91d5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d91d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d91da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d91dd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 113d91e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113d91e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d91e9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d91ec mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_113d91f3:;
  /* 113d91f3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d91f6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d91f9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 113d91fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d91fe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9201 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d9204 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_113d9207:;
  /* 113d9207 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d920a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d920d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d9210 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113d9212 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d9215 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9218 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d921b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d921e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 113d9221 jmp 0x113d94e2 */
  goto L_113d94e2;
L_113d9226:;
  /* 113d9226 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d9229 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d922c jge 0x113d94e2 */
  if ((C.sf==C.of)) goto L_113d94e2;
  /* 113d9232 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d9235 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9238 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d923b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113d923d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113d9240 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9243 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d9246 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9249 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 113d924c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d924f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9252 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113d9255 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d9258 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d925b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 113d925e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d9261 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 113d9264 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d9267 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 113d926a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d926e jbe 0x113d9277 */
  if ((C.cf||C.zf)) goto L_113d9277;
  /* 113d9270 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_113d9277:;
  /* 113d9277 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d927a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 113d927d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d927f jne 0x113d93c0 */
  if (!C.zf) goto L_113d93c0;
  /* 113d9285 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d9288 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 113d928b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d928e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113d9291 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9295 jbe 0x113d929e */
  if ((C.cf||C.zf)) goto L_113d929e;
  /* 113d9297 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_113d929e:;
  /* 113d929e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d92a1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d92a4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d92a7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d92aa jne 0x113d9380 */
  if (!C.zf) goto L_113d9380;
  /* 113d92b0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d92b4 jae 0x113d9315 */
  if (!C.cf) goto L_113d9315;
  /* 113d92b6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d92bb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d92be shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d92c0 not edx */
  EDX = (~(EDX));
  /* 113d92c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d92c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d92c8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 113d92cc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113d92ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d92d1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d92d4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 113d92d8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d92db add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d92de mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 113d92e1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113d92e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d92e7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d92ea mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 113d92ed mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d92f0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d92f3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 113d92f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d92f9 jne 0x113d9313 */
  if (!C.zf) goto L_113d9313;
  /* 113d92fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d9300 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d9303 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d9305 not edx */
  EDX = (~(EDX));
  /* 113d9307 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d930a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d930c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 113d930e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d9311 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_113d9313:;
  /* 113d9313 jmp 0x113d9380 */
  goto L_113d9380;
L_113d9315:;
  /* 113d9315 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d9318 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d931b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d9320 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d9322 not eax */
  EAX = (~(EAX));
  /* 113d9324 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d9327 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d932a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 113d9331 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113d9333 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d9336 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d9339 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 113d9340 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d9343 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9346 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 113d9349 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113d934c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d934f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9352 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 113d9355 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d9358 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d935b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 113d935f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d9361 jne 0x113d9380 */
  if (!C.zf) goto L_113d9380;
  /* 113d9363 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d9366 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d9369 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d936e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d9370 not eax */
  EAX = (~(EAX));
  /* 113d9372 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d9375 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d9378 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 113d937a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d937d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_113d9380:;
  /* 113d9380 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d9383 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113d9386 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d9389 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d938c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 113d938f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d9392 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 113d9395 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d9398 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113d939b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 113d939e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d93a1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d93a4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 113d93a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d93aa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 113d93ad sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d93b0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 113d93b3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d93b7 jbe 0x113d93c0 */
  if ((C.cf||C.zf)) goto L_113d93c0;
  /* 113d93b9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_113d93c0:;
  /* 113d93c0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d93c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d93c6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 113d93c9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 113d93cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d93cf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d93d2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d93d5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 113d93d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d93db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d93de mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 113d93e1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d93e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d93e7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 113d93ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d93ed mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d93f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d93f3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 113d93f6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d93f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d93fc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d93ff cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9402 jne 0x113d94ce */
  if (!C.zf) goto L_113d94ce;
  /* 113d9408 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d940c jae 0x113d9468 */
  if (!C.cf) goto L_113d9468;
  /* 113d940e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d9411 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9414 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 113d9418 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d941b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d941e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 113d9421 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 113d9423 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d9426 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9429 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 113d942c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d942e jne 0x113d9446 */
  if (!C.zf) goto L_113d9446;
  /* 113d9430 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d9435 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9438 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d943a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d943d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d943f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 113d9441 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d9444 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_113d9446:;
  /* 113d9446 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d944b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d944e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d9450 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d9453 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d9456 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 113d945a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113d945c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d945f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d9462 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 113d9466 jmp 0x113d94ce */
  goto L_113d94ce;
L_113d9468:;
  /* 113d9468 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d946b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d946e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 113d9472 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d9475 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9478 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 113d947b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 113d947d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d9480 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9483 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 113d9486 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d9488 jne 0x113d94a5 */
  if (!C.zf) goto L_113d94a5;
  /* 113d948a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d948d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d9490 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 113d9495 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113d9497 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d949a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d949d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 113d949f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d94a2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_113d94a5:;
  /* 113d94a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d94a8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d94ab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d94b0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d94b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d94b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d94b8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 113d94bf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113d94c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d94c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113d94c7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_113d94ce:;
  /* 113d94ce mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d94d1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d94d4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 113d94d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d94d9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d94dc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d94df mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_113d94e2:;
  /* 113d94e2 mov eax, 1 */
  EAX = (0x1u);
L_113d94e7:;
  /* 113d94e7 mov esp, ebp */
  ESP = (EBP);
  /* 113d94e9 pop ebp */
  EBP = (pop32());
  /* 113d94ea ret  */
  ESPCHK(0x113d8f00u, _esp0);
  ESP += 4; return;
}

/* FUN_100094f0 @ 0x113d94f0 (304 bytes, 79 insns) */
void f_113d94f0(void) {
  FTRACE(0x113d94f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d94f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d94f1 mov ebp, esp */
  EBP = (ESP);
  /* 113d94f3 push ecx */
  push32((uint32_t)(ECX));
  /* 113d94f4 cmp dword ptr [0x11400ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11400ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d94fb je 0x113d961c */
  if (C.zf) goto L_113d961c;
  /* 113d9501 mov eax, dword ptr [0x11400eb8] */
  EAX = (r32((uint32_t)(0x11400eb8)));
  /* 113d9506 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 113d9509 mov ecx, dword ptr [0x11400ec0] */
  ECX = (r32((uint32_t)(0x11400ec0)));
  /* 113d950f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113d9512 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9514 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d9517 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 113d951c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 113d9521 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d9524 push eax */
  push32((uint32_t)(EAX));
  /* 113d9525 call dword ptr [0x11402330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402330))), 0x113d952bu);
  /* 113d952b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d9530 mov ecx, dword ptr [0x11400eb8] */
  ECX = (r32((uint32_t)(0x11400eb8)));
  /* 113d9536 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d9538 mov eax, dword ptr [0x11400ec0] */
  EAX = (r32((uint32_t)(0x11400ec0)));
  /* 113d953d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113d9540 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 113d9542 mov edx, dword ptr [0x11400ec0] */
  EDX = (r32((uint32_t)(0x11400ec0)));
  /* 113d9548 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 113d954b mov eax, dword ptr [0x11400ec0] */
  EAX = (r32((uint32_t)(0x11400ec0)));
  /* 113d9550 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113d9553 mov edx, dword ptr [0x11400eb8] */
  EDX = (r32((uint32_t)(0x11400eb8)));
  /* 113d9559 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 113d9564 mov eax, dword ptr [0x11400ec0] */
  EAX = (r32((uint32_t)(0x11400ec0)));
  /* 113d9569 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113d956c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 113d956f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113d9572 mov eax, dword ptr [0x11400ec0] */
  EAX = (r32((uint32_t)(0x11400ec0)));
  /* 113d9577 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113d957a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 113d957d mov edx, dword ptr [0x11400ec0] */
  EDX = (r32((uint32_t)(0x11400ec0)));
  /* 113d9583 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113d9586 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 113d958a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d958c jne 0x113d95a2 */
  if (!C.zf) goto L_113d95a2;
  /* 113d958e mov edx, dword ptr [0x11400ec0] */
  EDX = (r32((uint32_t)(0x11400ec0)));
  /* 113d9594 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 113d9597 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 113d9599 mov ecx, dword ptr [0x11400ec0] */
  ECX = (r32((uint32_t)(0x11400ec0)));
  /* 113d959f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_113d95a2:;
  /* 113d95a2 mov edx, dword ptr [0x11400ec0] */
  EDX = (r32((uint32_t)(0x11400ec0)));
  /* 113d95a8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d95ac jne 0x113d9612 */
  if (!C.zf) goto L_113d9612;
  /* 113d95ae cmp dword ptr [0x11400ec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11400ec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d95b5 jle 0x113d9612 */
  if ((C.zf||C.sf!=C.of)) goto L_113d9612;
  /* 113d95b7 mov eax, dword ptr [0x11400ec0] */
  EAX = (r32((uint32_t)(0x11400ec0)));
  /* 113d95bc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113d95bf push ecx */
  push32((uint32_t)(ECX));
  /* 113d95c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d95c2 mov edx, dword ptr [0x11400ecc] */
  EDX = (r32((uint32_t)(0x11400ecc)));
  /* 113d95c8 push edx */
  push32((uint32_t)(EDX));
  /* 113d95c9 call dword ptr [0x11402384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402384))), 0x113d95cfu);
  /* 113d95cf mov eax, dword ptr [0x11400ec4] */
  EAX = (r32((uint32_t)(0x11400ec4)));
  /* 113d95d4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d95d7 mov ecx, dword ptr [0x11400ec8] */
  ECX = (r32((uint32_t)(0x11400ec8)));
  /* 113d95dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d95df mov edx, dword ptr [0x11400ec0] */
  EDX = (r32((uint32_t)(0x11400ec0)));
  /* 113d95e5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d95e8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d95ea push ecx */
  push32((uint32_t)(ECX));
  /* 113d95eb mov eax, dword ptr [0x11400ec0] */
  EAX = (r32((uint32_t)(0x11400ec0)));
  /* 113d95f0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d95f3 push eax */
  push32((uint32_t)(EAX));
  /* 113d95f4 mov ecx, dword ptr [0x11400ec0] */
  ECX = (r32((uint32_t)(0x11400ec0)));
  /* 113d95fa push ecx */
  push32((uint32_t)(ECX));
  /* 113d95fb call 0x113dbc20 */
  push32(0x113d9600u); f_113dbc20();
  /* 113d9600 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9603 mov edx, dword ptr [0x11400ec4] */
  EDX = (r32((uint32_t)(0x11400ec4)));
  /* 113d9609 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d960c mov dword ptr [0x11400ec4], edx */
  w32((uint32_t)(0x11400ec4), (EDX));
L_113d9612:;
  /* 113d9612 mov dword ptr [0x11400ec0], 0 */
  w32((uint32_t)(0x11400ec0), (0x0u));
L_113d961c:;
  /* 113d961c mov esp, ebp */
  ESP = (EBP);
  /* 113d961e pop ebp */
  EBP = (pop32());
  /* 113d961f ret  */
  ESPCHK(0x113d94f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009620 @ 0x113d9620 (1565 bytes, 343 insns) */
void f_113d9620(void) {
  FTRACE(0x113d9620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d9620 push ebp */
  push32((uint32_t)(EBP));
  /* 113d9621 mov ebp, esp */
  EBP = (ESP);
  /* 113d9623 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d9629 mov eax, dword ptr [0x11400ec4] */
  EAX = (r32((uint32_t)(0x11400ec4)));
  /* 113d962e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d9631 push eax */
  push32((uint32_t)(EAX));
  /* 113d9632 mov ecx, dword ptr [0x11400ec8] */
  ECX = (r32((uint32_t)(0x11400ec8)));
  /* 113d9638 push ecx */
  push32((uint32_t)(ECX));
  /* 113d9639 call dword ptr [0x114023a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023a8))), 0x113d963fu);
  /* 113d963f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d9641 je 0x113d964b */
  if (C.zf) goto L_113d964b;
  /* 113d9643 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d9646 jmp 0x113d9c39 */
  goto L_113d9c39;
L_113d964b:;
  /* 113d964b mov edx, dword ptr [0x11400ec8] */
  EDX = (r32((uint32_t)(0x11400ec8)));
  /* 113d9651 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 113d9657 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 113d9661 jmp 0x113d9672 */
  goto L_113d9672;
L_113d9663:;
  /* 113d9663 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 113d9669 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d966c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_113d9672:;
  /* 113d9672 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 113d9678 cmp ecx, dword ptr [0x11400ec4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11400ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d967e jge 0x113d9c37 */
  if ((C.sf==C.of)) goto L_113d9c37;
  /* 113d9684 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 113d968a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113d968d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 113d9693 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 113d9698 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 113d969e push ecx */
  push32((uint32_t)(ECX));
  /* 113d969f call dword ptr [0x114023a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023a8))), 0x113d96a5u);
  /* 113d96a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d96a7 je 0x113d96b3 */
  if (C.zf) goto L_113d96b3;
  /* 113d96a9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 113d96ae jmp 0x113d9c39 */
  goto L_113d9c39;
L_113d96b3:;
  /* 113d96b3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 113d96b9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 113d96bc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 113d96c2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 113d96c8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d96ce mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 113d96d1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 113d96d7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113d96da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d96dd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 113d96e7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 113d96f1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113d96f8 jmp 0x113d9703 */
  goto L_113d9703;
L_113d96fa:;
  /* 113d96fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d96fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9700 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_113d9703:;
  /* 113d9703 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9707 jge 0x113d9bfb */
  if ((C.sf==C.of)) goto L_113d9bfb;
  /* 113d970d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 113d9717 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 113d9721 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 113d972b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 113d9735 jmp 0x113d9746 */
  goto L_113d9746;
L_113d9737:;
  /* 113d9737 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 113d973d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9740 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_113d9746:;
  /* 113d9746 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d974d jge 0x113d9762 */
  if ((C.sf==C.of)) goto L_113d9762;
  /* 113d974f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 113d9755 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 113d9760 jmp 0x113d9737 */
  goto L_113d9737;
L_113d9762:;
  /* 113d9762 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9766 jl 0x113d9b9d */
  if ((C.sf!=C.of)) goto L_113d9b9d;
  /* 113d976c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 113d9771 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 113d9777 push ecx */
  push32((uint32_t)(ECX));
  /* 113d9778 call dword ptr [0x114023a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023a8))), 0x113d977eu);
  /* 113d977e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d9780 je 0x113d978c */
  if (C.zf) goto L_113d978c;
  /* 113d9782 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 113d9787 jmp 0x113d9c39 */
  goto L_113d9c39;
L_113d978c:;
  /* 113d978c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 113d9792 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113d9795 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 113d979f jmp 0x113d97b0 */
  goto L_113d97b0;
L_113d97a1:;
  /* 113d97a1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 113d97a7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d97aa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_113d97b0:;
  /* 113d97b0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d97b7 jge 0x113d9934 */
  if ((C.sf==C.of)) goto L_113d9934;
  /* 113d97bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d97c0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d97c3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 113d97c9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 113d97cf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d97d5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 113d97db mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 113d97e1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d97e5 jne 0x113d97f2 */
  if (!C.zf) goto L_113d97f2;
  /* 113d97e7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 113d97ed cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d97f0 je 0x113d97fc */
  if (C.zf) goto L_113d97fc;
L_113d97f2:;
  /* 113d97f2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 113d97f7 jmp 0x113d9c39 */
  goto L_113d9c39;
L_113d97fc:;
  /* 113d97fc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 113d9802 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d9804 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 113d980a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 113d9810 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 113d9816 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 113d981c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 113d981f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d9821 je 0x113d9859 */
  if (C.zf) goto L_113d9859;
  /* 113d9823 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 113d9829 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d982c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 113d9832 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d983c jle 0x113d9848 */
  if ((C.zf||C.sf!=C.of)) goto L_113d9848;
  /* 113d983e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 113d9843 jmp 0x113d9c39 */
  goto L_113d9c39;
L_113d9848:;
  /* 113d9848 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 113d984e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9851 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 113d9857 jmp 0x113d989b */
  goto L_113d989b;
L_113d9859:;
  /* 113d9859 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 113d985f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 113d9862 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d9865 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 113d986b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9872 jle 0x113d987e */
  if ((C.zf||C.sf!=C.of)) goto L_113d987e;
  /* 113d9874 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_113d987e:;
  /* 113d987e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 113d9884 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 113d988b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d988e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 113d9894 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_113d989b:;
  /* 113d989b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d98a2 jl 0x113d98bd */
  if ((C.sf!=C.of)) goto L_113d98bd;
  /* 113d98a4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 113d98aa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 113d98ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d98af jne 0x113d98bd */
  if (!C.zf) goto L_113d98bd;
  /* 113d98b1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d98bb jle 0x113d98c7 */
  if ((C.zf||C.sf!=C.of)) goto L_113d98c7;
L_113d98bd:;
  /* 113d98bd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 113d98c2 jmp 0x113d9c39 */
  goto L_113d9c39;
L_113d98c7:;
  /* 113d98c7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 113d98cd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d98d3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 113d98d6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d98dc je 0x113d98e8 */
  if (C.zf) goto L_113d98e8;
  /* 113d98de mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 113d98e3 jmp 0x113d9c39 */
  goto L_113d9c39;
L_113d98e8:;
  /* 113d98e8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 113d98ee add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d98f4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 113d98fa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 113d9900 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9906 jb 0x113d97fc */
  if (C.cf) goto L_113d97fc;
  /* 113d990c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 113d9912 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9918 je 0x113d9924 */
  if (C.zf) goto L_113d9924;
  /* 113d991a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 113d991f jmp 0x113d9c39 */
  goto L_113d9c39;
L_113d9924:;
  /* 113d9924 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d9927 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d992c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d992f jmp 0x113d97a1 */
  goto L_113d97a1;
L_113d9934:;
  /* 113d9934 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d9937 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d9939 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d993f je 0x113d994b */
  if (C.zf) goto L_113d994b;
  /* 113d9941 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 113d9946 jmp 0x113d9c39 */
  goto L_113d9c39;
L_113d994b:;
  /* 113d994b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d994e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 113d9954 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 113d995b jmp 0x113d9966 */
  goto L_113d9966;
L_113d995d:;
  /* 113d995d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d9960 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9963 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_113d9966:;
  /* 113d9966 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d996a jge 0x113d9b9d */
  if ((C.sf==C.of)) goto L_113d9b9d;
  /* 113d9970 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 113d997a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 113d9980 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_113d9986:;
  /* 113d9986 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 113d998c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d998f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 113d9995 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 113d999b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d99a1 je 0x113d9aca */
  if (C.zf) goto L_113d9aca;
  /* 113d99a7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d99aa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 113d99b0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d99b7 je 0x113d9aca */
  if (C.zf) goto L_113d9aca;
  /* 113d99bd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 113d99c3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d99c9 jb 0x113d99de */
  if (C.cf) goto L_113d99de;
  /* 113d99cb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 113d99d1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d99d6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d99dc jb 0x113d99e8 */
  if (C.cf) goto L_113d99e8;
L_113d99de:;
  /* 113d99de mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 113d99e3 jmp 0x113d9c39 */
  goto L_113d9c39;
L_113d99e8:;
  /* 113d99e8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 113d99ee and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 113d99f4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 113d99fa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 113d9a00 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9a03 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 113d9a06 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d9a09 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9a0e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_113d9a14:;
  /* 113d9a14 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d9a17 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9a1d je 0x113d9a3e */
  if (C.zf) goto L_113d9a3e;
  /* 113d9a1f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d9a22 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9a28 jne 0x113d9a2c */
  if (!C.zf) goto L_113d9a2c;
  /* 113d9a2a jmp 0x113d9a3e */
  goto L_113d9a3e;
L_113d9a2c:;
  /* 113d9a2c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d9a2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d9a31 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 113d9a34 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d9a37 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9a39 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 113d9a3c jmp 0x113d9a14 */
  goto L_113d9a14;
L_113d9a3e:;
  /* 113d9a3e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d9a41 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9a47 jne 0x113d9a53 */
  if (!C.zf) goto L_113d9a53;
  /* 113d9a49 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 113d9a4e jmp 0x113d9c39 */
  goto L_113d9c39;
L_113d9a53:;
  /* 113d9a53 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 113d9a59 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d9a5b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 113d9a5e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d9a61 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 113d9a67 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9a6e jle 0x113d9a7a */
  if ((C.zf||C.sf!=C.of)) goto L_113d9a7a;
  /* 113d9a70 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_113d9a7a:;
  /* 113d9a7a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 113d9a80 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9a83 je 0x113d9a8f */
  if (C.zf) goto L_113d9a8f;
  /* 113d9a85 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 113d9a8a jmp 0x113d9c39 */
  goto L_113d9c39;
L_113d9a8f:;
  /* 113d9a8f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 113d9a95 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113d9a98 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9a9e je 0x113d9aaa */
  if (C.zf) goto L_113d9aaa;
  /* 113d9aa0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 113d9aa5 jmp 0x113d9c39 */
  goto L_113d9c39;
L_113d9aaa:;
  /* 113d9aaa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 113d9ab0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 113d9ab6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 113d9abc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9abf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 113d9ac5 jmp 0x113d9986 */
  goto L_113d9986;
L_113d9aca:;
  /* 113d9aca cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9ad1 je 0x113d9b41 */
  if (C.zf) goto L_113d9b41;
  /* 113d9ad3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9ad7 jge 0x113d9b0b */
  if ((C.sf==C.of)) goto L_113d9b0b;
  /* 113d9ad9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d9ade mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d9ae1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d9ae3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 113d9ae9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113d9aeb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 113d9af1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d9af6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d9af9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d9afb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 113d9b01 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113d9b03 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 113d9b09 jmp 0x113d9b41 */
  goto L_113d9b41;
L_113d9b0b:;
  /* 113d9b0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d9b0e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d9b11 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d9b16 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d9b18 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 113d9b1e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113d9b20 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 113d9b26 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d9b29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d9b2c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113d9b31 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 113d9b33 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 113d9b39 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113d9b3b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_113d9b41:;
  /* 113d9b41 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 113d9b47 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d9b4a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9b50 jne 0x113d9b64 */
  if (!C.zf) goto L_113d9b64;
  /* 113d9b52 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d9b55 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 113d9b5b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9b62 je 0x113d9b6e */
  if (C.zf) goto L_113d9b6e;
L_113d9b64:;
  /* 113d9b64 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 113d9b69 jmp 0x113d9c39 */
  goto L_113d9c39;
L_113d9b6e:;
  /* 113d9b6e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 113d9b74 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113d9b77 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9b7d je 0x113d9b89 */
  if (C.zf) goto L_113d9b89;
  /* 113d9b7f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 113d9b84 jmp 0x113d9c39 */
  goto L_113d9c39;
L_113d9b89:;
  /* 113d9b89 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 113d9b8f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9b92 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 113d9b98 jmp 0x113d995d */
  goto L_113d995d;
L_113d9b9d:;
  /* 113d9b9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d9ba0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 113d9ba6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 113d9bac cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9bb0 jne 0x113d9bca */
  if (!C.zf) goto L_113d9bca;
  /* 113d9bb2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d9bb5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 113d9bbb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 113d9bc1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9bc8 je 0x113d9bd1 */
  if (C.zf) goto L_113d9bd1;
L_113d9bca:;
  /* 113d9bca mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 113d9bcf jmp 0x113d9c39 */
  goto L_113d9c39;
L_113d9bd1:;
  /* 113d9bd1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 113d9bd7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9bdd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 113d9be3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d9be6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9beb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113d9bee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d9bf1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 113d9bf3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113d9bf6 jmp 0x113d96fa */
  goto L_113d96fa;
L_113d9bfb:;
  /* 113d9bfb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 113d9c01 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 113d9c07 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9c09 jne 0x113d9c1c */
  if (!C.zf) goto L_113d9c1c;
  /* 113d9c0b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 113d9c11 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 113d9c17 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9c1a je 0x113d9c23 */
  if (C.zf) goto L_113d9c23;
L_113d9c1c:;
  /* 113d9c1c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 113d9c21 jmp 0x113d9c39 */
  goto L_113d9c39;
L_113d9c23:;
  /* 113d9c23 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 113d9c29 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9c2c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 113d9c32 jmp 0x113d9663 */
  goto L_113d9663;
L_113d9c37:;
  /* 113d9c37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113d9c39:;
  /* 113d9c39 mov esp, ebp */
  ESP = (EBP);
  /* 113d9c3b pop ebp */
  EBP = (pop32());
  /* 113d9c3c ret  */
  ESPCHK(0x113d9620u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c40 @ 0x113d9c40 (250 bytes, 92 insns) */
void f_113d9c40(void) {
  FTRACE(0x113d9c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d9c40 push ebp */
  push32((uint32_t)(EBP));
  /* 113d9c41 mov ebp, esp */
  EBP = (ESP);
  /* 113d9c43 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d9c46 push ebx */
  push32((uint32_t)(EBX));
  /* 113d9c47 push esi */
  push32((uint32_t)(ESI));
  /* 113d9c48 push edi */
  push32((uint32_t)(EDI));
  /* 113d9c49 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 113d9c4c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 113d9c4f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 113d9c52 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_113d9c55:;
  /* 113d9c55 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9c59 jne 0x113d9c79 */
  if (!C.zf) goto L_113d9c79;
  /* 113d9c5b push 0x113faea8 */
  push32((uint32_t)(0x113faea8u));
  /* 113d9c60 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d9c62 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 113d9c64 push 0x113fae9c */
  push32((uint32_t)(0x113fae9cu));
  /* 113d9c69 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d9c6b call 0x113d2df0 */
  push32(0x113d9c70u); f_113d2df0();
  /* 113d9c70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9c73 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9c76 jne 0x113d9c79 */
  if (!C.zf) goto L_113d9c79;
  /* 113d9c78 int3  */
  x86_unimpl("int3 @ 0x113d9c78");
L_113d9c79:;
  /* 113d9c79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d9c7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d9c7d jne 0x113d9c55 */
  if (!C.zf) goto L_113d9c55;
L_113d9c7f:;
  /* 113d9c7f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9c83 jne 0x113d9ca3 */
  if (!C.zf) goto L_113d9ca3;
  /* 113d9c85 push 0x113fae8c */
  push32((uint32_t)(0x113fae8cu));
  /* 113d9c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 113d9c8c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 113d9c8e push 0x113fae9c */
  push32((uint32_t)(0x113fae9cu));
  /* 113d9c93 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d9c95 call 0x113d2df0 */
  push32(0x113d9c9au); f_113d2df0();
  /* 113d9c9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9c9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9ca0 jne 0x113d9ca3 */
  if (!C.zf) goto L_113d9ca3;
  /* 113d9ca2 int3  */
  x86_unimpl("int3 @ 0x113d9ca2");
L_113d9ca3:;
  /* 113d9ca3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d9ca5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d9ca7 jne 0x113d9c7f */
  if (!C.zf) goto L_113d9c7f;
  /* 113d9ca9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9cac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 113d9cb3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9cb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d9cb9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 113d9cbc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9cbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d9cc2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 113d9cc4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9cc7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 113d9cce mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d9cd1 push ecx */
  push32((uint32_t)(ECX));
  /* 113d9cd2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d9cd5 push edx */
  push32((uint32_t)(EDX));
  /* 113d9cd6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9cd9 push eax */
  push32((uint32_t)(EAX));
  /* 113d9cda call 0x113dacc0 */
  push32(0x113d9cdfu); f_113dacc0();
  /* 113d9cdf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9ce2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 113d9ce5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9ce8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d9ceb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d9cee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9cf1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 113d9cf4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9cf7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9cfb jl 0x113d9d1f */
  if ((C.sf!=C.of)) goto L_113d9d1f;
  /* 113d9cfd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9d00 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d9d02 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 113d9d05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d9d07 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d9d0d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 113d9d10 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9d13 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d9d15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9d18 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9d1b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113d9d1d jmp 0x113d9d30 */
  goto L_113d9d30;
L_113d9d1f:;
  /* 113d9d1f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9d22 push edx */
  push32((uint32_t)(EDX));
  /* 113d9d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d9d25 call 0x113daa40 */
  push32(0x113d9d2au); f_113daa40();
  /* 113d9d2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9d2d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_113d9d30:;
  /* 113d9d30 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d9d33 pop edi */
  EDI = (pop32());
  /* 113d9d34 pop esi */
  ESI = (pop32());
  /* 113d9d35 pop ebx */
  EBX = (pop32());
  /* 113d9d36 mov esp, ebp */
  ESP = (EBP);
  /* 113d9d38 pop ebp */
  EBP = (pop32());
  /* 113d9d39 ret  */
  ESPCHK(0x113d9c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d40 @ 0x113d9d40 (183 bytes, 58 insns) */
void f_113d9d40(void) {
  FTRACE(0x113d9d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d9d40 push ebp */
  push32((uint32_t)(EBP));
  /* 113d9d41 mov ebp, esp */
  EBP = (ESP);
  /* 113d9d43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d9d46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d9d49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9d4c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9d51 ja 0x113d9d6a */
  if ((!C.cf&&!C.zf)) goto L_113d9d6a;
  /* 113d9d53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d9d56 mov edx, dword ptr [0x113fdc98] */
  EDX = (r32((uint32_t)(0x113fdc98)));
  /* 113d9d5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d9d5e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 113d9d62 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 113d9d65 jmp 0x113d9df3 */
  goto L_113d9df3;
L_113d9d6a:;
  /* 113d9d6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d9d6d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 113d9d70 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d9d76 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d9d7c mov edx, dword ptr [0x113fdc98] */
  EDX = (r32((uint32_t)(0x113fdc98)));
  /* 113d9d82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d9d84 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 113d9d88 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 113d9d8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d9d8f je 0x113d9db3 */
  if (C.zf) goto L_113d9db3;
  /* 113d9d91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d9d94 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 113d9d97 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d9d9d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 113d9da0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 113d9da3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 113d9da6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 113d9daa mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 113d9db1 jmp 0x113d9dc4 */
  goto L_113d9dc4;
L_113d9db3:;
  /* 113d9db3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 113d9db6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 113d9db9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 113d9dbd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_113d9dc4:;
  /* 113d9dc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d9dc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d9dc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d9dca lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 113d9dcd push ecx */
  push32((uint32_t)(ECX));
  /* 113d9dce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d9dd1 push edx */
  push32((uint32_t)(EDX));
  /* 113d9dd2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 113d9dd5 push eax */
  push32((uint32_t)(EAX));
  /* 113d9dd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d9dd8 call 0x113dbf60 */
  push32(0x113d9dddu); f_113dbf60();
  /* 113d9ddd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9de0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d9de2 jne 0x113d9de8 */
  if (!C.zf) goto L_113d9de8;
  /* 113d9de4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d9de6 jmp 0x113d9df3 */
  goto L_113d9df3;
L_113d9de8:;
  /* 113d9de8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d9deb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d9df0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_113d9df3:;
  /* 113d9df3 mov esp, ebp */
  ESP = (EBP);
  /* 113d9df5 pop ebp */
  EBP = (pop32());
  /* 113d9df6 ret  */
  ESPCHK(0x113d9d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e00 @ 0x113d9e00 (836 bytes, 238 insns) */
void f_113d9e00(void) {
  FTRACE(0x113d9e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d9e00 push ebp */
  push32((uint32_t)(EBP));
  /* 113d9e01 mov ebp, esp */
  EBP = (ESP);
  /* 113d9e03 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d9e06 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113d9e08 call 0x113d7730 */
  push32(0x113d9e0du); f_113d7730();
  /* 113d9e0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9e10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d9e13 push eax */
  push32((uint32_t)(EAX));
  /* 113d9e14 call 0x113da150 */
  push32(0x113d9e19u); f_113da150();
  /* 113d9e19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9e1c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113d9e1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d9e22 cmp ecx, dword ptr [0x11400c04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11400c04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9e28 jne 0x113d9e3b */
  if (!C.zf) goto L_113d9e3b;
  /* 113d9e2a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113d9e2c call 0x113d77d0 */
  push32(0x113d9e31u); f_113d77d0();
  /* 113d9e31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9e34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d9e36 jmp 0x113da140 */
  goto L_113da140;
L_113d9e3b:;
  /* 113d9e3b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9e3f jne 0x113d9e5c */
  if (!C.zf) goto L_113d9e5c;
  /* 113d9e41 call 0x113da230 */
  push32(0x113d9e46u); f_113da230();
  /* 113d9e46 call 0x113da2b0 */
  push32(0x113d9e4bu); f_113da2b0();
  /* 113d9e4b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113d9e4d call 0x113d77d0 */
  push32(0x113d9e52u); f_113d77d0();
  /* 113d9e52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9e55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d9e57 jmp 0x113da140 */
  goto L_113da140;
L_113d9e5c:;
  /* 113d9e5c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113d9e63 jmp 0x113d9e6e */
  goto L_113d9e6e;
L_113d9e65:;
  /* 113d9e65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d9e68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9e6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113d9e6e:;
  /* 113d9e6e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9e72 jae 0x113d9fbf */
  if (!C.cf) goto L_113d9fbf;
  /* 113d9e78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d9e7b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d9e7e mov ecx, dword ptr [eax + 0x113fdeb8] */
  ECX = (r32((uint32_t)(EAX + 0x113fdeb8)));
  /* 113d9e84 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9e87 jne 0x113d9fba */
  if (!C.zf) goto L_113d9fba;
  /* 113d9e8d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 113d9e94 jmp 0x113d9e9f */
  goto L_113d9e9f;
L_113d9e96:;
  /* 113d9e96 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9e99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9e9c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_113d9e9f:;
  /* 113d9e9f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9ea6 jae 0x113d9eb4 */
  if (!C.cf) goto L_113d9eb4;
  /* 113d9ea8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9eab mov byte ptr [eax + 0x11400da0], 0 */
  w8((uint32_t)(EAX + 0x11400da0), (0x0u));
  /* 113d9eb2 jmp 0x113d9e96 */
  goto L_113d9e96;
L_113d9eb4:;
  /* 113d9eb4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113d9ebb jmp 0x113d9ec6 */
  goto L_113d9ec6;
L_113d9ebd:;
  /* 113d9ebd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d9ec0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9ec3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_113d9ec6:;
  /* 113d9ec6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9eca jae 0x113d9f47 */
  if (!C.cf) goto L_113d9f47;
  /* 113d9ecc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d9ecf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d9ed2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d9ed5 lea ecx, [edx + eax*8 + 0x113fdec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x113fdec8));
  /* 113d9edc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113d9edf jmp 0x113d9eea */
  goto L_113d9eea;
L_113d9ee1:;
  /* 113d9ee1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d9ee4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9ee7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_113d9eea:;
  /* 113d9eea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d9eed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d9eef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113d9ef1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d9ef3 je 0x113d9f42 */
  if (C.zf) goto L_113d9f42;
  /* 113d9ef5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d9ef8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d9efa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 113d9efd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d9eff je 0x113d9f42 */
  if (C.zf) goto L_113d9f42;
  /* 113d9f01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d9f04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d9f06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113d9f08 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 113d9f0b jmp 0x113d9f16 */
  goto L_113d9f16;
L_113d9f0d:;
  /* 113d9f0d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9f10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9f13 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_113d9f16:;
  /* 113d9f16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d9f19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d9f1b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 113d9f1e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9f21 ja 0x113d9f40 */
  if ((!C.cf&&!C.zf)) goto L_113d9f40;
  /* 113d9f23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9f26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d9f29 mov dl, byte ptr [eax + 0x11400da1] */
  DL = (r8((uint32_t)(EAX + 0x11400da1)));
  /* 113d9f2f or dl, byte ptr [ecx + 0x113fdeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x113fdeb0))); DL = (_r); fl_logic(_r,8); }
  /* 113d9f35 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9f38 mov byte ptr [eax + 0x11400da1], dl */
  w8((uint32_t)(EAX + 0x11400da1), (DL));
  /* 113d9f3e jmp 0x113d9f0d */
  goto L_113d9f0d;
L_113d9f40:;
  /* 113d9f40 jmp 0x113d9ee1 */
  goto L_113d9ee1;
L_113d9f42:;
  /* 113d9f42 jmp 0x113d9ebd */
  goto L_113d9ebd;
L_113d9f47:;
  /* 113d9f47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d9f4a mov dword ptr [0x11400c04], ecx */
  w32((uint32_t)(0x11400c04), (ECX));
  /* 113d9f50 mov dword ptr [0x11400c8c], 1 */
  w32((uint32_t)(0x11400c8c), (0x1u));
  /* 113d9f5a mov edx, dword ptr [0x11400c04] */
  EDX = (r32((uint32_t)(0x11400c04)));
  /* 113d9f60 push edx */
  push32((uint32_t)(EDX));
  /* 113d9f61 call 0x113da1b0 */
  push32(0x113d9f66u); f_113da1b0();
  /* 113d9f66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9f69 mov dword ptr [0x11400ea4], eax */
  w32((uint32_t)(0x11400ea4), (EAX));
  /* 113d9f6e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113d9f75 jmp 0x113d9f80 */
  goto L_113d9f80;
L_113d9f77:;
  /* 113d9f77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d9f7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9f7d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_113d9f80:;
  /* 113d9f80 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9f84 jae 0x113d9fa4 */
  if (!C.cf) goto L_113d9fa4;
  /* 113d9f86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d9f89 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d9f8c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d9f8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d9f92 mov cx, word ptr [ecx + eax*2 + 0x113fdebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x113fdebc)));
  /* 113d9f9a mov word ptr [edx*2 + 0x11400c80], cx */
  w16((uint32_t)(EDX*2 + 0x11400c80), (CX));
  /* 113d9fa2 jmp 0x113d9f77 */
  goto L_113d9f77;
L_113d9fa4:;
  /* 113d9fa4 call 0x113da2b0 */
  push32(0x113d9fa9u); f_113da2b0();
  /* 113d9fa9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113d9fab call 0x113d77d0 */
  push32(0x113d9fb0u); f_113d77d0();
  /* 113d9fb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9fb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d9fb5 jmp 0x113da140 */
  goto L_113da140;
L_113d9fba:;
  /* 113d9fba jmp 0x113d9e65 */
  goto L_113d9e65;
L_113d9fbf:;
  /* 113d9fbf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 113d9fc2 push edx */
  push32((uint32_t)(EDX));
  /* 113d9fc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d9fc6 push eax */
  push32((uint32_t)(EAX));
  /* 113d9fc7 call dword ptr [0x11402308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402308))), 0x113d9fcdu);
  /* 113d9fcd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9fd0 jne 0x113da112 */
  if (!C.zf) goto L_113da112;
  /* 113d9fd6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 113d9fdd jmp 0x113d9fe8 */
  goto L_113d9fe8;
L_113d9fdf:;
  /* 113d9fdf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9fe2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d9fe5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_113d9fe8:;
  /* 113d9fe8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d9fef jae 0x113d9ffd */
  if (!C.cf) goto L_113d9ffd;
  /* 113d9ff1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d9ff4 mov byte ptr [edx + 0x11400da0], 0 */
  w8((uint32_t)(EDX + 0x11400da0), (0x0u));
  /* 113d9ffb jmp 0x113d9fdf */
  goto L_113d9fdf;
L_113d9ffd:;
  /* 113d9ffd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113da000 mov dword ptr [0x11400c04], eax */
  w32((uint32_t)(0x11400c04), (EAX));
  /* 113da005 mov dword ptr [0x11400ea4], 0 */
  w32((uint32_t)(0x11400ea4), (0x0u));
  /* 113da00f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da013 jbe 0x113da0ce */
  if ((C.cf||C.zf)) goto L_113da0ce;
  /* 113da019 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 113da01c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 113da01f jmp 0x113da02a */
  goto L_113da02a;
L_113da021:;
  /* 113da021 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113da024 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113da027 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_113da02a:;
  /* 113da02a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113da02d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113da02f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113da031 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113da033 je 0x113da07c */
  if (C.zf) goto L_113da07c;
  /* 113da035 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113da038 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113da03a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 113da03d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113da03f je 0x113da07c */
  if (C.zf) goto L_113da07c;
  /* 113da041 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113da044 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113da046 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113da048 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 113da04b jmp 0x113da056 */
  goto L_113da056;
L_113da04d:;
  /* 113da04d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113da050 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113da053 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_113da056:;
  /* 113da056 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113da059 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113da05b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 113da05e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da061 ja 0x113da07a */
  if ((!C.cf&&!C.zf)) goto L_113da07a;
  /* 113da063 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113da066 mov cl, byte ptr [eax + 0x11400da1] */
  CL = (r8((uint32_t)(EAX + 0x11400da1)));
  /* 113da06c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 113da06f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113da072 mov byte ptr [edx + 0x11400da1], cl */
  w8((uint32_t)(EDX + 0x11400da1), (CL));
  /* 113da078 jmp 0x113da04d */
  goto L_113da04d;
L_113da07a:;
  /* 113da07a jmp 0x113da021 */
  goto L_113da021;
L_113da07c:;
  /* 113da07c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 113da083 jmp 0x113da08e */
  goto L_113da08e;
L_113da085:;
  /* 113da085 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113da088 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113da08b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_113da08e:;
  /* 113da08e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da095 jae 0x113da0ae */
  if (!C.cf) goto L_113da0ae;
  /* 113da097 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113da09a mov dl, byte ptr [ecx + 0x11400da1] */
  DL = (r8((uint32_t)(ECX + 0x11400da1)));
  /* 113da0a0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 113da0a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113da0a6 mov byte ptr [eax + 0x11400da1], dl */
  w8((uint32_t)(EAX + 0x11400da1), (DL));
  /* 113da0ac jmp 0x113da085 */
  goto L_113da085;
L_113da0ae:;
  /* 113da0ae mov ecx, dword ptr [0x11400c04] */
  ECX = (r32((uint32_t)(0x11400c04)));
  /* 113da0b4 push ecx */
  push32((uint32_t)(ECX));
  /* 113da0b5 call 0x113da1b0 */
  push32(0x113da0bau); f_113da1b0();
  /* 113da0ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113da0bd mov dword ptr [0x11400ea4], eax */
  w32((uint32_t)(0x11400ea4), (EAX));
  /* 113da0c2 mov dword ptr [0x11400c8c], 1 */
  w32((uint32_t)(0x11400c8c), (0x1u));
  /* 113da0cc jmp 0x113da0d8 */
  goto L_113da0d8;
L_113da0ce:;
  /* 113da0ce mov dword ptr [0x11400c8c], 0 */
  w32((uint32_t)(0x11400c8c), (0x0u));
L_113da0d8:;
  /* 113da0d8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113da0df jmp 0x113da0ea */
  goto L_113da0ea;
L_113da0e1:;
  /* 113da0e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113da0e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113da0e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_113da0ea:;
  /* 113da0ea cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da0ee jae 0x113da0ff */
  if (!C.cf) goto L_113da0ff;
  /* 113da0f0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113da0f3 mov word ptr [eax*2 + 0x11400c80], 0 */
  w16((uint32_t)(EAX*2 + 0x11400c80), (0x0u));
  /* 113da0fd jmp 0x113da0e1 */
  goto L_113da0e1;
L_113da0ff:;
  /* 113da0ff call 0x113da2b0 */
  push32(0x113da104u); f_113da2b0();
  /* 113da104 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113da106 call 0x113d77d0 */
  push32(0x113da10bu); f_113d77d0();
  /* 113da10b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113da10e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113da110 jmp 0x113da140 */
  goto L_113da140;
L_113da112:;
  /* 113da112 cmp dword ptr [0x113ff708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da119 je 0x113da133 */
  if (C.zf) goto L_113da133;
  /* 113da11b call 0x113da230 */
  push32(0x113da120u); f_113da230();
  /* 113da120 call 0x113da2b0 */
  push32(0x113da125u); f_113da2b0();
  /* 113da125 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113da127 call 0x113d77d0 */
  push32(0x113da12cu); f_113d77d0();
  /* 113da12c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113da12f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113da131 jmp 0x113da140 */
  goto L_113da140;
L_113da133:;
  /* 113da133 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113da135 call 0x113d77d0 */
  push32(0x113da13au); f_113d77d0();
  /* 113da13a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113da13d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_113da140:;
  /* 113da140 mov esp, ebp */
  ESP = (EBP);
  /* 113da142 pop ebp */
  EBP = (pop32());
  /* 113da143 ret  */
  ESPCHK(0x113d9e00u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x113da150 (89 bytes, 21 insns) */
void f_113da150(void) {
  FTRACE(0x113da150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113da150 push ebp */
  push32((uint32_t)(EBP));
  /* 113da151 mov ebp, esp */
  EBP = (ESP);
  /* 113da153 mov dword ptr [0x113ff708], 0 */
  w32((uint32_t)(0x113ff708), (0x0u));
  /* 113da15d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da161 jne 0x113da175 */
  if (!C.zf) goto L_113da175;
  /* 113da163 mov dword ptr [0x113ff708], 1 */
  w32((uint32_t)(0x113ff708), (0x1u));
  /* 113da16d call dword ptr [0x11402300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402300))), 0x113da173u);
  /* 113da173 jmp 0x113da1a7 */
  goto L_113da1a7;
L_113da175:;
  /* 113da175 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da179 jne 0x113da18d */
  if (!C.zf) goto L_113da18d;
  /* 113da17b mov dword ptr [0x113ff708], 1 */
  w32((uint32_t)(0x113ff708), (0x1u));
  /* 113da185 call dword ptr [0x11402310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402310))), 0x113da18bu);
  /* 113da18b jmp 0x113da1a7 */
  goto L_113da1a7;
L_113da18d:;
  /* 113da18d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da191 jne 0x113da1a4 */
  if (!C.zf) goto L_113da1a4;
  /* 113da193 mov dword ptr [0x113ff708], 1 */
  w32((uint32_t)(0x113ff708), (0x1u));
  /* 113da19d mov eax, dword ptr [0x113ff728] */
  EAX = (r32((uint32_t)(0x113ff728)));
  /* 113da1a2 jmp 0x113da1a7 */
  goto L_113da1a7;
L_113da1a4:;
  /* 113da1a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_113da1a7:;
  /* 113da1a7 pop ebp */
  EBP = (pop32());
  /* 113da1a8 ret  */
  ESPCHK(0x113da150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1b0 @ 0x113da1b0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_113da1b0(void) {
  FTRACE(0x113da1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113da1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113da1b1 mov ebp, esp */
  EBP = (ESP);
  /* 113da1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 113da1b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113da1b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113da1ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113da1bd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113da1c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113da1c6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da1ca ja 0x113da1fa */
  if ((!C.cf&&!C.zf)) goto L_113da1fa;
  /* 113da1cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113da1cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113da1d1 mov dl, byte ptr [eax + 0x113da214] */
  DL = (r8((uint32_t)(EAX + 0x113da214)));
  /* 113da1d7 jmp dword ptr [edx*4 + 0x113da200] */
  switch (EDX) {
    case 0: goto L_113da1de;
    case 1: goto L_113da1e5;
    case 2: goto L_113da1ec;
    case 3: goto L_113da1f3;
    case 4: goto L_113da1fa;
    default: x86_unimpl("switch@0x113da1d7 out of table"); return;
  }
L_113da1de:;
  /* 113da1de mov eax, 0x411 */
  EAX = (0x411u);
  /* 113da1e3 jmp 0x113da1fc */
  goto L_113da1fc;
L_113da1e5:;
  /* 113da1e5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 113da1ea jmp 0x113da1fc */
  goto L_113da1fc;
L_113da1ec:;
  /* 113da1ec mov eax, 0x412 */
  EAX = (0x412u);
  /* 113da1f1 jmp 0x113da1fc */
  goto L_113da1fc;
L_113da1f3:;
  /* 113da1f3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 113da1f8 jmp 0x113da1fc */
  goto L_113da1fc;
L_113da1fa:;
  /* 113da1fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113da1fc:;
  /* 113da1fc mov esp, ebp */
  ESP = (EBP);
  /* 113da1fe pop ebp */
  EBP = (pop32());
  /* 113da1ff ret  */
  ESPCHK(0x113da1b0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x113da230 (116 bytes, 29 insns) */
void f_113da230(void) {
  FTRACE(0x113da230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113da230 push ebp */
  push32((uint32_t)(EBP));
  /* 113da231 mov ebp, esp */
  EBP = (ESP);
  /* 113da233 push ecx */
  push32((uint32_t)(ECX));
  /* 113da234 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113da23b jmp 0x113da246 */
  goto L_113da246;
L_113da23d:;
  /* 113da23d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113da240 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113da243 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113da246:;
  /* 113da246 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da24d jge 0x113da25b */
  if ((C.sf==C.of)) goto L_113da25b;
  /* 113da24f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113da252 mov byte ptr [ecx + 0x11400da0], 0 */
  w8((uint32_t)(ECX + 0x11400da0), (0x0u));
  /* 113da259 jmp 0x113da23d */
  goto L_113da23d;
L_113da25b:;
  /* 113da25b mov dword ptr [0x11400c04], 0 */
  w32((uint32_t)(0x11400c04), (0x0u));
  /* 113da265 mov dword ptr [0x11400c8c], 0 */
  w32((uint32_t)(0x11400c8c), (0x0u));
  /* 113da26f mov dword ptr [0x11400ea4], 0 */
  w32((uint32_t)(0x11400ea4), (0x0u));
  /* 113da279 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113da280 jmp 0x113da28b */
  goto L_113da28b;
L_113da282:;
  /* 113da282 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113da285 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113da288 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113da28b:;
  /* 113da28b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da28f jge 0x113da2a0 */
  if ((C.sf==C.of)) goto L_113da2a0;
  /* 113da291 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113da294 mov word ptr [eax*2 + 0x11400c80], 0 */
  w16((uint32_t)(EAX*2 + 0x11400c80), (0x0u));
  /* 113da29e jmp 0x113da282 */
  goto L_113da282;
L_113da2a0:;
  /* 113da2a0 mov esp, ebp */
  ESP = (EBP);
  /* 113da2a2 pop ebp */
  EBP = (pop32());
  /* 113da2a3 ret  */
  ESPCHK(0x113da230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2b0 @ 0x113da2b0 (770 bytes, 175 insns) */
void f_113da2b0(void) {
  FTRACE(0x113da2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113da2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113da2b1 mov ebp, esp */
  EBP = (ESP);
  /* 113da2b3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113da2b9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 113da2bf push eax */
  push32((uint32_t)(EAX));
  /* 113da2c0 mov ecx, dword ptr [0x11400c04] */
  ECX = (r32((uint32_t)(0x11400c04)));
  /* 113da2c6 push ecx */
  push32((uint32_t)(ECX));
  /* 113da2c7 call dword ptr [0x11402308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402308))), 0x113da2cdu);
  /* 113da2cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da2d0 jne 0x113da4e9 */
  if (!C.zf) goto L_113da4e9;
  /* 113da2d6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 113da2e0 jmp 0x113da2f1 */
  goto L_113da2f1;
L_113da2e2:;
  /* 113da2e2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da2e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113da2eb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_113da2f1:;
  /* 113da2f1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da2fb jae 0x113da312 */
  if (!C.cf) goto L_113da312;
  /* 113da2fd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da303 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 113da309 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 113da310 jmp 0x113da2e2 */
  goto L_113da2e2;
L_113da312:;
  /* 113da312 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 113da319 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 113da31f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113da322 jmp 0x113da32d */
  goto L_113da32d;
L_113da324:;
  /* 113da324 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113da327 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113da32a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113da32d:;
  /* 113da32d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113da330 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113da332 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113da334 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113da336 je 0x113da378 */
  if (C.zf) goto L_113da378;
  /* 113da338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113da33b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113da33d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113da33f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 113da345 jmp 0x113da356 */
  goto L_113da356;
L_113da347:;
  /* 113da347 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da34d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113da350 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_113da356:;
  /* 113da356 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113da359 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113da35b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 113da35e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da364 ja 0x113da376 */
  if ((!C.cf&&!C.zf)) goto L_113da376;
  /* 113da366 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da36c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 113da374 jmp 0x113da347 */
  goto L_113da347;
L_113da376:;
  /* 113da376 jmp 0x113da324 */
  goto L_113da324;
L_113da378:;
  /* 113da378 push 0 */
  push32((uint32_t)(0x0u));
  /* 113da37a mov eax, dword ptr [0x11400ea4] */
  EAX = (r32((uint32_t)(0x11400ea4)));
  /* 113da37f push eax */
  push32((uint32_t)(EAX));
  /* 113da380 mov ecx, dword ptr [0x11400c04] */
  ECX = (r32((uint32_t)(0x11400c04)));
  /* 113da386 push ecx */
  push32((uint32_t)(ECX));
  /* 113da387 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 113da38d push edx */
  push32((uint32_t)(EDX));
  /* 113da38e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113da393 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 113da399 push eax */
  push32((uint32_t)(EAX));
  /* 113da39a push 1 */
  push32((uint32_t)(0x1u));
  /* 113da39c call 0x113dbf60 */
  push32(0x113da3a1u); f_113dbf60();
  /* 113da3a1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113da3a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113da3a6 mov ecx, dword ptr [0x11400c04] */
  ECX = (r32((uint32_t)(0x11400c04)));
  /* 113da3ac push ecx */
  push32((uint32_t)(ECX));
  /* 113da3ad push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113da3b2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 113da3b8 push edx */
  push32((uint32_t)(EDX));
  /* 113da3b9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113da3be lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 113da3c4 push eax */
  push32((uint32_t)(EAX));
  /* 113da3c5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113da3ca mov ecx, dword ptr [0x11400ea4] */
  ECX = (r32((uint32_t)(0x11400ea4)));
  /* 113da3d0 push ecx */
  push32((uint32_t)(ECX));
  /* 113da3d1 call 0x113dc120 */
  push32(0x113da3d6u); f_113dc120();
  /* 113da3d6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113da3d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113da3db mov edx, dword ptr [0x11400c04] */
  EDX = (r32((uint32_t)(0x11400c04)));
  /* 113da3e1 push edx */
  push32((uint32_t)(EDX));
  /* 113da3e2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113da3e7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 113da3ed push eax */
  push32((uint32_t)(EAX));
  /* 113da3ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113da3f3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 113da3f9 push ecx */
  push32((uint32_t)(ECX));
  /* 113da3fa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 113da3ff mov edx, dword ptr [0x11400ea4] */
  EDX = (r32((uint32_t)(0x11400ea4)));
  /* 113da405 push edx */
  push32((uint32_t)(EDX));
  /* 113da406 call 0x113dc120 */
  push32(0x113da40bu); f_113dc120();
  /* 113da40b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113da40e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 113da418 jmp 0x113da429 */
  goto L_113da429;
L_113da41a:;
  /* 113da41a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da420 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113da423 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_113da429:;
  /* 113da429 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da433 jae 0x113da4e4 */
  if (!C.cf) goto L_113da4e4;
  /* 113da439 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da43f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113da441 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 113da449 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 113da44c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113da44e je 0x113da486 */
  if (C.zf) goto L_113da486;
  /* 113da450 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da456 mov cl, byte ptr [eax + 0x11400da1] */
  CL = (r8((uint32_t)(EAX + 0x11400da1)));
  /* 113da45c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 113da45f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da465 mov byte ptr [edx + 0x11400da1], cl */
  w8((uint32_t)(EDX + 0x11400da1), (CL));
  /* 113da46b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da471 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da477 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 113da47e mov byte ptr [eax + 0x11400ca0], dl */
  w8((uint32_t)(EAX + 0x11400ca0), (DL));
  /* 113da484 jmp 0x113da4df */
  goto L_113da4df;
L_113da486:;
  /* 113da486 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da48c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113da48e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 113da496 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 113da499 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113da49b je 0x113da4d2 */
  if (C.zf) goto L_113da4d2;
  /* 113da49d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da4a3 mov al, byte ptr [edx + 0x11400da1] */
  AL = (r8((uint32_t)(EDX + 0x11400da1)));
  /* 113da4a9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 113da4ab mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da4b1 mov byte ptr [ecx + 0x11400da1], al */
  w8((uint32_t)(ECX + 0x11400da1), (AL));
  /* 113da4b7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da4bd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da4c3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 113da4ca mov byte ptr [edx + 0x11400ca0], cl */
  w8((uint32_t)(EDX + 0x11400ca0), (CL));
  /* 113da4d0 jmp 0x113da4df */
  goto L_113da4df;
L_113da4d2:;
  /* 113da4d2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da4d8 mov byte ptr [edx + 0x11400ca0], 0 */
  w8((uint32_t)(EDX + 0x11400ca0), (0x0u));
L_113da4df:;
  /* 113da4df jmp 0x113da41a */
  goto L_113da41a;
L_113da4e4:;
  /* 113da4e4 jmp 0x113da5ae */
  goto L_113da5ae;
L_113da4e9:;
  /* 113da4e9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 113da4f3 jmp 0x113da504 */
  goto L_113da504;
L_113da4f5:;
  /* 113da4f5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da4fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113da4fe mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_113da504:;
  /* 113da504 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da50e jae 0x113da5ae */
  if (!C.cf) goto L_113da5ae;
  /* 113da514 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da51b jb 0x113da558 */
  if (C.cf) goto L_113da558;
  /* 113da51d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da524 ja 0x113da558 */
  if ((!C.cf&&!C.zf)) goto L_113da558;
  /* 113da526 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da52c mov dl, byte ptr [ecx + 0x11400da1] */
  DL = (r8((uint32_t)(ECX + 0x11400da1)));
  /* 113da532 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 113da535 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da53b mov byte ptr [eax + 0x11400da1], dl */
  w8((uint32_t)(EAX + 0x11400da1), (DL));
  /* 113da541 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da547 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113da54a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da550 mov byte ptr [edx + 0x11400ca0], cl */
  w8((uint32_t)(EDX + 0x11400ca0), (CL));
  /* 113da556 jmp 0x113da5a9 */
  goto L_113da5a9;
L_113da558:;
  /* 113da558 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da55f jb 0x113da59c */
  if (C.cf) goto L_113da59c;
  /* 113da561 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da568 ja 0x113da59c */
  if ((!C.cf&&!C.zf)) goto L_113da59c;
  /* 113da56a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da570 mov cl, byte ptr [eax + 0x11400da1] */
  CL = (r8((uint32_t)(EAX + 0x11400da1)));
  /* 113da576 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 113da579 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da57f mov byte ptr [edx + 0x11400da1], cl */
  w8((uint32_t)(EDX + 0x11400da1), (CL));
  /* 113da585 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da58b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113da58e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da594 mov byte ptr [ecx + 0x11400ca0], al */
  w8((uint32_t)(ECX + 0x11400ca0), (AL));
  /* 113da59a jmp 0x113da5a9 */
  goto L_113da5a9;
L_113da59c:;
  /* 113da59c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 113da5a2 mov byte ptr [edx + 0x11400ca0], 0 */
  w8((uint32_t)(EDX + 0x11400ca0), (0x0u));
L_113da5a9:;
  /* 113da5a9 jmp 0x113da4f5 */
  goto L_113da4f5;
L_113da5ae:;
  /* 113da5ae mov esp, ebp */
  ESP = (EBP);
  /* 113da5b0 pop ebp */
  EBP = (pop32());
  /* 113da5b1 ret  */
  ESPCHK(0x113da2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5c0 @ 0x113da5c0 (23 bytes, 9 insns) */
void f_113da5c0(void) {
  FTRACE(0x113da5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113da5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113da5c1 mov ebp, esp */
  EBP = (ESP);
  /* 113da5c3 cmp dword ptr [0x11400c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11400c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da5ca je 0x113da5d3 */
  if (C.zf) goto L_113da5d3;
  /* 113da5cc mov eax, dword ptr [0x11400c04] */
  EAX = (r32((uint32_t)(0x11400c04)));
  /* 113da5d1 jmp 0x113da5d5 */
  goto L_113da5d5;
L_113da5d3:;
  /* 113da5d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113da5d5:;
  /* 113da5d5 pop ebp */
  EBP = (pop32());
  /* 113da5d6 ret  */
  ESPCHK(0x113da5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5e0 @ 0x113da5e0 (34 bytes, 10 insns) */
void f_113da5e0(void) {
  FTRACE(0x113da5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113da5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113da5e1 mov ebp, esp */
  EBP = (ESP);
  /* 113da5e3 cmp dword ptr [0x11401050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11401050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da5ea jne 0x113da600 */
  if (!C.zf) goto L_113da600;
  /* 113da5ec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 113da5ee call 0x113d9e00 */
  push32(0x113da5f3u); f_113d9e00();
  /* 113da5f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113da5f6 mov dword ptr [0x11401050], 1 */
  w32((uint32_t)(0x11401050), (0x1u));
L_113da600:;
  /* 113da600 pop ebp */
  EBP = (pop32());
  /* 113da601 ret  */
  ESPCHK(0x113da5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a610 @ 0x113da610 (664 bytes, 261 insns) [15 switch table(s)] */
void f_113da610(void) {
  FTRACE(0x113da610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113da610 push ebp */
  push32((uint32_t)(EBP));
  /* 113da611 mov ebp, esp */
  EBP = (ESP);
  /* 113da613 push edi */
  push32((uint32_t)(EDI));
  /* 113da614 push esi */
  push32((uint32_t)(ESI));
  /* 113da615 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 113da618 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113da61b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 113da61e mov eax, ecx */
  EAX = (ECX);
  /* 113da620 mov edx, ecx */
  EDX = (ECX);
  /* 113da622 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113da624 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da626 jbe 0x113da630 */
  if ((C.cf||C.zf)) goto L_113da630;
  /* 113da628 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da62a jb 0x113da7a8 */
  if (C.cf) goto L_113da7a8;
L_113da630:;
  /* 113da630 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 113da636 jne 0x113da64c */
  if (!C.zf) goto L_113da64c;
  /* 113da638 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113da63b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 113da63e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da641 jb 0x113da66c */
  if (C.cf) goto L_113da66c;
  /* 113da643 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 113da645 jmp dword ptr [edx*4 + 0x113da758] */
  switch (EDX) {
    case 0: goto L_113da768;
    case 1: goto L_113da770;
    case 2: goto L_113da77c;
    case 3: goto L_113da790;
    default: x86_unimpl("switch@0x113da645 out of table"); return;
  }
L_113da64c:;
  /* 113da64c mov eax, edi */
  EAX = (EDI);
  /* 113da64e mov edx, 3 */
  EDX = (0x3u);
  /* 113da653 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113da656 jb 0x113da664 */
  if (C.cf) goto L_113da664;
  /* 113da658 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 113da65b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113da65d jmp dword ptr [eax*4 + 0x113da670] */
  switch (EAX) {
    case 1: goto L_113da680;
    case 2: goto L_113da6ac;
    case 3: goto L_113da6d0;
    default: x86_unimpl("switch@0x113da65d out of table"); return;
  }
L_113da664:;
  /* 113da664 jmp dword ptr [ecx*4 + 0x113da768] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x113da768)))); return;
  /* 113da66b nop  */
  /* nop */
L_113da66c:;
  /* 113da66c jmp dword ptr [ecx*4 + 0x113da6ec] */
  switch (ECX) {
    case 0: goto L_113da74f;
    case 1: goto L_113da73c;
    case 2: goto L_113da734;
    case 3: goto L_113da72c;
    case 4: goto L_113da724;
    case 5: goto L_113da71c;
    case 6: goto L_113da714;
    case 7: goto L_113da70c;
    default: x86_unimpl("switch@0x113da66c out of table"); return;
  }
  /* 113da673 nop  */
  /* nop */
L_113da680:;
  /* 113da680 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 113da682 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113da684 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113da686 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 113da689 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 113da68c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 113da68f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113da692 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 113da695 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 113da698 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 113da69b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da69e jb 0x113da66c */
  if (C.cf) goto L_113da66c;
  /* 113da6a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 113da6a2 jmp dword ptr [edx*4 + 0x113da758] */
  switch (EDX) {
    case 0: goto L_113da768;
    case 1: goto L_113da770;
    case 2: goto L_113da77c;
    case 3: goto L_113da790;
    default: x86_unimpl("switch@0x113da6a2 out of table"); return;
  }
  /* 113da6a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113da6ac:;
  /* 113da6ac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 113da6ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113da6b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113da6b2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 113da6b5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113da6b8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 113da6bb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 113da6be add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 113da6c1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da6c4 jb 0x113da66c */
  if (C.cf) goto L_113da66c;
  /* 113da6c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 113da6c8 jmp dword ptr [edx*4 + 0x113da758] */
  switch (EDX) {
    case 0: goto L_113da768;
    case 1: goto L_113da770;
    case 2: goto L_113da77c;
    case 3: goto L_113da790;
    default: x86_unimpl("switch@0x113da6c8 out of table"); return;
  }
  /* 113da6cf nop  */
  /* nop */
L_113da6d0:;
  /* 113da6d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 113da6d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113da6d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113da6d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 113da6d7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113da6da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113da6db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da6de jb 0x113da66c */
  if (C.cf) goto L_113da66c;
  /* 113da6e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 113da6e2 jmp dword ptr [edx*4 + 0x113da758] */
  switch (EDX) {
    case 0: goto L_113da768;
    case 1: goto L_113da770;
    case 2: goto L_113da77c;
    case 3: goto L_113da790;
    default: x86_unimpl("switch@0x113da6e2 out of table"); return;
  }
  /* 113da6e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113da70c:;
  /* 113da70c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 113da710 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_113da714:;
  /* 113da714 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 113da718 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_113da71c:;
  /* 113da71c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 113da720 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_113da724:;
  /* 113da724 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 113da728 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_113da72c:;
  /* 113da72c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 113da730 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_113da734:;
  /* 113da734 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 113da738 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_113da73c:;
  /* 113da73c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 113da740 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 113da744 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 113da74b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 113da74d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_113da74f:;
  /* 113da74f jmp dword ptr [edx*4 + 0x113da758] */
  switch (EDX) {
    case 0: goto L_113da768;
    case 1: goto L_113da770;
    case 2: goto L_113da77c;
    case 3: goto L_113da790;
    default: x86_unimpl("switch@0x113da74f out of table"); return;
  }
  /* 113da756 mov edi, edi */
  EDI = (EDI);
L_113da768:;
  /* 113da768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113da76b pop esi */
  ESI = (pop32());
  /* 113da76c pop edi */
  EDI = (pop32());
  /* 113da76d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113da76e ret  */
  ESPCHK(0x113da610u, _esp0);
  ESP += 4; return;
  /* 113da76f nop  */
  /* nop */
L_113da770:;
  /* 113da770 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113da772 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113da774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113da777 pop esi */
  ESI = (pop32());
  /* 113da778 pop edi */
  EDI = (pop32());
  /* 113da779 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113da77a ret  */
  ESPCHK(0x113da610u, _esp0);
  ESP += 4; return;
  /* 113da77b nop  */
  /* nop */
L_113da77c:;
  /* 113da77c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113da77e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113da780 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 113da783 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 113da786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113da789 pop esi */
  ESI = (pop32());
  /* 113da78a pop edi */
  EDI = (pop32());
  /* 113da78b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113da78c ret  */
  ESPCHK(0x113da610u, _esp0);
  ESP += 4; return;
  /* 113da78d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113da790:;
  /* 113da790 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113da792 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113da794 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 113da797 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 113da79a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 113da79d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 113da7a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113da7a3 pop esi */
  ESI = (pop32());
  /* 113da7a4 pop edi */
  EDI = (pop32());
  /* 113da7a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113da7a6 ret  */
  ESPCHK(0x113da610u, _esp0);
  ESP += 4; return;
  /* 113da7a7 nop  */
  /* nop */
L_113da7a8:;
  /* 113da7a8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 113da7ac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 113da7b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 113da7b6 jne 0x113da7dc */
  if (!C.zf) goto L_113da7dc;
  /* 113da7b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113da7bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 113da7be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da7c1 jb 0x113da7d0 */
  if (C.cf) goto L_113da7d0;
  /* 113da7c3 std  */
  C.df=1;
  /* 113da7c4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 113da7c6 cld  */
  C.df=0;
  /* 113da7c7 jmp dword ptr [edx*4 + 0x113da8f0] */
  switch (EDX) {
    case 0: goto L_113da900;
    case 1: goto L_113da908;
    case 2: goto L_113da918;
    case 3: goto L_113da92c;
    default: x86_unimpl("switch@0x113da7c7 out of table"); return;
  }
  /* 113da7ce mov edi, edi */
  EDI = (EDI);
L_113da7d0:;
  /* 113da7d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 113da7d2 jmp dword ptr [ecx*4 + 0x113da8a0] */
  switch (ECX) {
    case 0: goto L_113da8e7;
    default: x86_unimpl("switch@0x113da7d2 out of table"); return;
  }
  /* 113da7d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113da7dc:;
  /* 113da7dc mov eax, edi */
  EAX = (EDI);
  /* 113da7de mov edx, 3 */
  EDX = (0x3u);
  /* 113da7e3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da7e6 jb 0x113da7f4 */
  if (C.cf) goto L_113da7f4;
  /* 113da7e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 113da7eb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113da7ed jmp dword ptr [eax*4 + 0x113da7f8] */
  switch (EAX) {
    case 1: goto L_113da808;
    case 2: goto L_113da828;
    case 3: goto L_113da850;
    default: x86_unimpl("switch@0x113da7ed out of table"); return;
  }
L_113da7f4:;
  /* 113da7f4 jmp dword ptr [ecx*4 + 0x113da8f0] */
  switch (ECX) {
    case 0: goto L_113da900;
    case 1: goto L_113da908;
    case 2: goto L_113da918;
    case 3: goto L_113da92c;
    default: x86_unimpl("switch@0x113da7f4 out of table"); return;
  }
  /* 113da7fb nop  */
  /* nop */
L_113da808:;
  /* 113da808 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 113da80b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 113da80d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 113da810 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 113da811 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113da814 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 113da815 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da818 jb 0x113da7d0 */
  if (C.cf) goto L_113da7d0;
  /* 113da81a std  */
  C.df=1;
  /* 113da81b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 113da81d cld  */
  C.df=0;
  /* 113da81e jmp dword ptr [edx*4 + 0x113da8f0] */
  switch (EDX) {
    case 0: goto L_113da900;
    case 1: goto L_113da908;
    case 2: goto L_113da918;
    case 3: goto L_113da92c;
    default: x86_unimpl("switch@0x113da81e out of table"); return;
  }
  /* 113da825 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113da828:;
  /* 113da828 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 113da82b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 113da82d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 113da830 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 113da833 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113da836 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 113da839 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 113da83c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 113da83f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da842 jb 0x113da7d0 */
  if (C.cf) goto L_113da7d0;
  /* 113da844 std  */
  C.df=1;
  /* 113da845 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 113da847 cld  */
  C.df=0;
  /* 113da848 jmp dword ptr [edx*4 + 0x113da8f0] */
  switch (EDX) {
    case 0: goto L_113da900;
    case 1: goto L_113da908;
    case 2: goto L_113da918;
    case 3: goto L_113da92c;
    default: x86_unimpl("switch@0x113da848 out of table"); return;
  }
  /* 113da84f nop  */
  /* nop */
L_113da850:;
  /* 113da850 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 113da853 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 113da855 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 113da858 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 113da85b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 113da85e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 113da861 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113da864 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 113da867 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 113da86a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 113da86d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da870 jb 0x113da7d0 */
  if (C.cf) goto L_113da7d0;
  /* 113da876 std  */
  C.df=1;
  /* 113da877 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 113da879 cld  */
  C.df=0;
  /* 113da87a jmp dword ptr [edx*4 + 0x113da8f0] */
  switch (EDX) {
    case 0: goto L_113da900;
    case 1: goto L_113da908;
    case 2: goto L_113da918;
    case 3: goto L_113da92c;
    default: x86_unimpl("switch@0x113da87a out of table"); return;
  }
  /* 113da881 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 113da884 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 113da885 test al, 0x3d */
  { uint32_t _r=(AL)&(0x3du); fl_logic(_r,8); }
  /* 113da887 adc dword ptr [eax + ebp*4 - 0x574beec3], ebp */
  { uint32_t _a=(r32((uint32_t)(EAX + EBP*4 + -0x574beec3))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EAX + EBP*4 + -0x574beec3), (_r)); fl_add(_a,_b,_r,32); }
  /* 113da88e cmp eax, 0x3da8bc11 */
  { uint32_t _a=(EAX),_b=(0x3da8bc11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da893 adc esp, eax */
  { uint32_t _a=(ESP),_b=(EAX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113da895 test al, 0x3d */
  { uint32_t _r=(AL)&(0x3du); fl_logic(_r,8); }
  /* 113da897 adc esp, ecx */
  { uint32_t _a=(ESP),_b=(ECX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113da899 test al, 0x3d */
  { uint32_t _r=(AL)&(0x3du); fl_logic(_r,8); }
  /* 113da89b adc esp, edx */
  { uint32_t _a=(ESP),_b=(EDX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113da89d test al, 0x3d */
  { uint32_t _r=(AL)&(0x3du); fl_logic(_r,8); }
  /* 113da8a4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 113da8a8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 113da8ac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 113da8b0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 113da8b4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 113da8b8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 113da8bc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 113da8c0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 113da8c4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 113da8c8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 113da8cc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 113da8d0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 113da8d4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 113da8d8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 113da8dc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 113da8e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 113da8e5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_113da8e7:;
  /* 113da8e7 jmp dword ptr [edx*4 + 0x113da8f0] */
  switch (EDX) {
    case 0: goto L_113da900;
    case 1: goto L_113da908;
    case 2: goto L_113da918;
    case 3: goto L_113da92c;
    default: x86_unimpl("switch@0x113da8e7 out of table"); return;
  }
  /* 113da8ee mov edi, edi */
  EDI = (EDI);
L_113da900:;
  /* 113da900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113da903 pop esi */
  ESI = (pop32());
  /* 113da904 pop edi */
  EDI = (pop32());
  /* 113da905 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113da906 ret  */
  ESPCHK(0x113da610u, _esp0);
  ESP += 4; return;
  /* 113da907 nop  */
  /* nop */
L_113da908:;
  /* 113da908 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 113da90b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 113da90e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113da911 pop esi */
  ESI = (pop32());
  /* 113da912 pop edi */
  EDI = (pop32());
  /* 113da913 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113da914 ret  */
  ESPCHK(0x113da610u, _esp0);
  ESP += 4; return;
  /* 113da915 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113da918:;
  /* 113da918 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 113da91b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 113da91e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 113da921 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 113da924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113da927 pop esi */
  ESI = (pop32());
  /* 113da928 pop edi */
  EDI = (pop32());
  /* 113da929 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113da92a ret  */
  ESPCHK(0x113da610u, _esp0);
  ESP += 4; return;
  /* 113da92b nop  */
  /* nop */
L_113da92c:;
  /* 113da92c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 113da92f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 113da932 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 113da935 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 113da938 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 113da93b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 113da93e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113da941 pop esi */
  ESI = (pop32());
  /* 113da942 pop edi */
  EDI = (pop32());
  /* 113da943 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113da944 ret  */
  ESPCHK(0x113da610u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x113da950 (104 bytes, 43 insns) */
void f_113da950(void) {
  FTRACE(0x113da950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113da950 push ebx */
  push32((uint32_t)(EBX));
  /* 113da951 push esi */
  push32((uint32_t)(ESI));
  /* 113da952 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 113da956 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113da958 jne 0x113da972 */
  if (!C.zf) goto L_113da972;
  /* 113da95a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 113da95e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 113da962 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113da964 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113da966 mov ebx, eax */
  EBX = (EAX);
  /* 113da968 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 113da96c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113da96e mov edx, ebx */
  EDX = (EBX);
  /* 113da970 jmp 0x113da9b3 */
  goto L_113da9b3;
L_113da972:;
  /* 113da972 mov ecx, eax */
  ECX = (EAX);
  /* 113da974 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 113da978 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 113da97c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_113da980:;
  /* 113da980 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 113da982 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 113da984 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 113da986 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 113da988 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113da98a jne 0x113da980 */
  if (!C.zf) goto L_113da980;
  /* 113da98c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113da98e mov esi, eax */
  ESI = (EAX);
  /* 113da990 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 113da994 mov ecx, eax */
  ECX = (EAX);
  /* 113da996 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 113da99a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 113da99c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113da99e jb 0x113da9ae */
  if (C.cf) goto L_113da9ae;
  /* 113da9a0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da9a4 ja 0x113da9ae */
  if ((!C.cf&&!C.zf)) goto L_113da9ae;
  /* 113da9a6 jb 0x113da9af */
  if (C.cf) goto L_113da9af;
  /* 113da9a8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113da9ac jbe 0x113da9af */
  if ((C.cf||C.zf)) goto L_113da9af;
L_113da9ae:;
  /* 113da9ae dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_113da9af:;
  /* 113da9af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113da9b1 mov eax, esi */
  EAX = (ESI);
L_113da9b3:;
  /* 113da9b3 pop esi */
  ESI = (pop32());
  /* 113da9b4 pop ebx */
  EBX = (pop32());
  /* 113da9b5 ret 0x10 */
  ESPCHK(0x113da950u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x113da9c0 (117 bytes, 44 insns) */
void f_113da9c0(void) {
  FTRACE(0x113da9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113da9c0 push ebx */
  push32((uint32_t)(EBX));
  /* 113da9c1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 113da9c5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113da9c7 jne 0x113da9e1 */
  if (!C.zf) goto L_113da9e1;
  /* 113da9c9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 113da9cd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 113da9d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113da9d3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113da9d5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113da9d9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113da9db mov eax, edx */
  EAX = (EDX);
  /* 113da9dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113da9df jmp 0x113daa31 */
  goto L_113daa31;
L_113da9e1:;
  /* 113da9e1 mov ecx, eax */
  ECX = (EAX);
  /* 113da9e3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 113da9e7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 113da9eb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_113da9ef:;
  /* 113da9ef shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 113da9f1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 113da9f3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 113da9f5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 113da9f7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113da9f9 jne 0x113da9ef */
  if (!C.zf) goto L_113da9ef;
  /* 113da9fb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113da9fd mov ecx, eax */
  ECX = (EAX);
  /* 113da9ff mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 113daa03 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 113daa04 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 113daa08 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113daa0a jb 0x113daa1a */
  if (C.cf) goto L_113daa1a;
  /* 113daa0c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113daa10 ja 0x113daa1a */
  if ((!C.cf&&!C.zf)) goto L_113daa1a;
  /* 113daa12 jb 0x113daa22 */
  if (C.cf) goto L_113daa22;
  /* 113daa14 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113daa18 jbe 0x113daa22 */
  if ((C.cf||C.zf)) goto L_113daa22;
L_113daa1a:;
  /* 113daa1a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113daa1e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_113daa22:;
  /* 113daa22 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113daa26 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113daa2a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 113daa2c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113daa2e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_113daa31:;
  /* 113daa31 pop ebx */
  EBX = (pop32());
  /* 113daa32 ret 0x10 */
  ESPCHK(0x113da9c0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000aa40 @ 0x113daa40 (628 bytes, 214 insns) */
void f_113daa40(void) {
  FTRACE(0x113daa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113daa40 push ebp */
  push32((uint32_t)(EBP));
  /* 113daa41 mov ebp, esp */
  EBP = (ESP);
  /* 113daa43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113daa46 push ebx */
  push32((uint32_t)(EBX));
  /* 113daa47 push esi */
  push32((uint32_t)(ESI));
  /* 113daa48 push edi */
  push32((uint32_t)(EDI));
L_113daa49:;
  /* 113daa49 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113daa4d jne 0x113daa6d */
  if (!C.zf) goto L_113daa6d;
  /* 113daa4f push 0x113faf54 */
  push32((uint32_t)(0x113faf54u));
  /* 113daa54 push 0 */
  push32((uint32_t)(0x0u));
  /* 113daa56 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 113daa58 push 0x113faf48 */
  push32((uint32_t)(0x113faf48u));
  /* 113daa5d push 2 */
  push32((uint32_t)(0x2u));
  /* 113daa5f call 0x113d2df0 */
  push32(0x113daa64u); f_113d2df0();
  /* 113daa64 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113daa67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113daa6a jne 0x113daa6d */
  if (!C.zf) goto L_113daa6d;
  /* 113daa6c int3  */
  x86_unimpl("int3 @ 0x113daa6c");
L_113daa6d:;
  /* 113daa6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113daa6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113daa71 jne 0x113daa49 */
  if (!C.zf) goto L_113daa49;
  /* 113daa73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113daa76 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113daa79 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113daa7c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113daa7f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113daa82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113daa85 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113daa88 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 113daa8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113daa90 je 0x113daa9f */
  if (C.zf) goto L_113daa9f;
  /* 113daa92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113daa95 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113daa98 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 113daa9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113daa9d je 0x113daab5 */
  if (C.zf) goto L_113daab5;
L_113daa9f:;
  /* 113daa9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113daaa2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 113daaa5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 113daaa7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113daaaa mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 113daaad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113daab0 jmp 0x113dacad */
  goto L_113dacad;
L_113daab5:;
  /* 113daab5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113daab8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 113daabb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 113daabe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113daac0 je 0x113dab0c */
  if (C.zf) goto L_113dab0c;
  /* 113daac2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113daac5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 113daacc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113daacf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 113daad2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 113daad5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113daad7 je 0x113daaf5 */
  if (C.zf) goto L_113daaf5;
  /* 113daad9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113daadc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113daadf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113daae2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113daae4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113daae7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113daaea and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 113daaed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113daaf0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 113daaf3 jmp 0x113dab0c */
  goto L_113dab0c;
L_113daaf5:;
  /* 113daaf5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113daaf8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113daafb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 113daafe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dab01 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 113dab04 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113dab07 jmp 0x113dacad */
  goto L_113dacad;
L_113dab0c:;
  /* 113dab0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dab0f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113dab12 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 113dab15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dab18 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 113dab1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dab1e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113dab21 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 113dab24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dab27 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 113dab2a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dab2d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 113dab34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113dab3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dab3e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113dab41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dab44 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113dab47 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 113dab4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113dab4f jne 0x113dab7f */
  if (!C.zf) goto L_113dab7f;
  /* 113dab51 cmp dword ptr [ebp - 8], 0x113fe140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x113fe140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dab58 je 0x113dab63 */
  if (C.zf) goto L_113dab63;
  /* 113dab5a cmp dword ptr [ebp - 8], 0x113fe160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x113fe160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dab61 jne 0x113dab73 */
  if (!C.zf) goto L_113dab73;
L_113dab63:;
  /* 113dab63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113dab66 push edx */
  push32((uint32_t)(EDX));
  /* 113dab67 call 0x113dc9b0 */
  push32(0x113dab6cu); f_113dc9b0();
  /* 113dab6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dab6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dab71 jne 0x113dab7f */
  if (!C.zf) goto L_113dab7f;
L_113dab73:;
  /* 113dab73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dab76 push eax */
  push32((uint32_t)(EAX));
  /* 113dab77 call 0x113dc8e0 */
  push32(0x113dab7cu); f_113dc8e0();
  /* 113dab7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113dab7f:;
  /* 113dab7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dab82 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113dab85 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 113dab8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113dab8d je 0x113dac6b */
  if (C.zf) goto L_113dac6b;
L_113dab93:;
  /* 113dab93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dab96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dab99 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 113dab9b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dab9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113daba0 jge 0x113dabc3 */
  if ((C.sf==C.of)) goto L_113dabc3;
  /* 113daba2 push 0x113faf08 */
  push32((uint32_t)(0x113faf08u));
  /* 113daba7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113daba9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 113dabae push 0x113faf48 */
  push32((uint32_t)(0x113faf48u));
  /* 113dabb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dabb5 call 0x113d2df0 */
  push32(0x113dabbau); f_113d2df0();
  /* 113dabba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dabbd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dabc0 jne 0x113dabc3 */
  if (!C.zf) goto L_113dabc3;
  /* 113dabc2 int3  */
  x86_unimpl("int3 @ 0x113dabc2");
L_113dabc3:;
  /* 113dabc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dabc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dabc7 jne 0x113dab93 */
  if (!C.zf) goto L_113dab93;
  /* 113dabc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dabcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dabcf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 113dabd1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dabd4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113dabd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dabda mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113dabdd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dabe0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dabe3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113dabe5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dabe8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 113dabeb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dabee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dabf1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 113dabf4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dabf8 jle 0x113dac16 */
  if ((C.zf||C.sf!=C.of)) goto L_113dac16;
  /* 113dabfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dabfd push ecx */
  push32((uint32_t)(ECX));
  /* 113dabfe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dac01 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113dac04 push eax */
  push32((uint32_t)(EAX));
  /* 113dac05 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113dac08 push ecx */
  push32((uint32_t)(ECX));
  /* 113dac09 call 0x113dc5d0 */
  push32(0x113dac0eu); f_113dc5d0();
  /* 113dac0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dac11 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113dac14 jmp 0x113dac5e */
  goto L_113dac5e;
L_113dac16:;
  /* 113dac16 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dac1a je 0x113dac39 */
  if (C.zf) goto L_113dac39;
  /* 113dac1c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113dac1f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 113dac22 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113dac25 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 113dac28 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dac2b mov ecx, dword ptr [edx*4 + 0x11400f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11400f00)));
  /* 113dac32 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dac34 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113dac37 jmp 0x113dac40 */
  goto L_113dac40;
L_113dac39:;
  /* 113dac39 mov dword ptr [ebp - 0x14], 0x113fda60 */
  w32((uint32_t)(EBP + -0x14), (0x113fda60u));
L_113dac40:;
  /* 113dac40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113dac43 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 113dac47 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 113dac4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dac4c je 0x113dac5e */
  if (C.zf) goto L_113dac5e;
  /* 113dac4e push 2 */
  push32((uint32_t)(0x2u));
  /* 113dac50 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dac52 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113dac55 push ecx */
  push32((uint32_t)(ECX));
  /* 113dac56 call 0x113dc480 */
  push32(0x113dac5bu); f_113dc480();
  /* 113dac5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113dac5e:;
  /* 113dac5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dac61 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113dac64 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 113dac67 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 113dac69 jmp 0x113dac89 */
  goto L_113dac89;
L_113dac6b:;
  /* 113dac6b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113dac72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dac75 push edx */
  push32((uint32_t)(EDX));
  /* 113dac76 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 113dac79 push eax */
  push32((uint32_t)(EAX));
  /* 113dac7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113dac7d push ecx */
  push32((uint32_t)(ECX));
  /* 113dac7e call 0x113dc5d0 */
  push32(0x113dac83u); f_113dc5d0();
  /* 113dac83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dac86 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_113dac89:;
  /* 113dac89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dac8c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dac8f je 0x113daca5 */
  if (C.zf) goto L_113daca5;
  /* 113dac91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dac94 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113dac97 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 113dac9a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dac9d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 113daca0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113daca3 jmp 0x113dacad */
  goto L_113dacad;
L_113daca5:;
  /* 113daca5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113daca8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_113dacad:;
  /* 113dacad pop edi */
  EDI = (pop32());
  /* 113dacae pop esi */
  ESI = (pop32());
  /* 113dacaf pop ebx */
  EBX = (pop32());
  /* 113dacb0 mov esp, ebp */
  ESP = (EBP);
  /* 113dacb2 pop ebp */
  EBP = (pop32());
  /* 113dacb3 ret  */
  ESPCHK(0x113daa40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acc0 @ 0x113dacc0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_113dacc0(void) {
  FTRACE(0x113dacc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dacc0 push ebp */
  push32((uint32_t)(EBP));
  /* 113dacc1 mov ebp, esp */
  EBP = (ESP);
  /* 113dacc3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dacc9 push ebx */
  push32((uint32_t)(EBX));
  /* 113dacca push esi */
  push32((uint32_t)(ESI));
  /* 113daccb push edi */
  push32((uint32_t)(EDI));
  /* 113daccc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 113dacd3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 113dacdd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_113dace4:;
  /* 113dace4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dace7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113dace9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 113dacec movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 113dacf0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dacf3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dacf6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 113dacf9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113dacfb je 0x113db8d7 */
  if (C.zf) goto L_113db8d7;
  /* 113dad01 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dad08 jl 0x113db8d7 */
  if ((C.sf!=C.of)) goto L_113db8d7;
  /* 113dad0e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 113dad12 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dad15 jl 0x113dad36 */
  if ((C.sf!=C.of)) goto L_113dad36;
  /* 113dad17 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 113dad1b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dad1e jg 0x113dad36 */
  if ((!C.zf&&C.sf==C.of)) goto L_113dad36;
  /* 113dad20 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 113dad24 movsx ecx, byte ptr [eax + 0x113faf40] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x113faf40))));
  /* 113dad2b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 113dad2e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 113dad34 jmp 0x113dad40 */
  goto L_113dad40;
L_113dad36:;
  /* 113dad36 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_113dad40:;
  /* 113dad40 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 113dad46 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113dad49 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dad4c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113dad4f movsx edx, byte ptr [ecx + eax*8 + 0x113faf60] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x113faf60))));
  /* 113dad57 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 113dad5a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 113dad5d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113dad60 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 113dad66 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dad6d ja 0x113db8d2 */
  if ((!C.cf&&!C.zf)) goto L_113db8d2;
  /* 113dad73 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 113dad79 jmp dword ptr [ecx*4 + 0x113db8e4] */
  switch (ECX) {
    case 0: goto L_113dad80;
    case 1: goto L_113dae1a;
    case 2: goto L_113dae5c;
    case 3: goto L_113daecb;
    case 4: goto L_113daf23;
    case 5: goto L_113daf32;
    case 6: goto L_113daf7e;
    case 7: goto L_113db011;
    case 8: goto L_113daea8;
    case 9: goto L_113daeb3;
    case 10: goto L_113dae9e;
    case 11: goto L_113dae93;
    case 12: goto L_113daebe;
    case 13: goto L_113daec6;
    default: x86_unimpl("switch@0x113dad79 out of table"); return;
  }
L_113dad80:;
  /* 113dad80 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 113dad87 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113dad8a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113dad90 mov eax, dword ptr [0x113fdc98] */
  EAX = (r32((uint32_t)(0x113fdc98)));
  /* 113dad95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113dad97 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 113dad9b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 113dada1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113dada3 je 0x113dadfd */
  if (C.zf) goto L_113dadfd;
  /* 113dada5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 113dadab push edx */
  push32((uint32_t)(EDX));
  /* 113dadac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dadaf push eax */
  push32((uint32_t)(EAX));
  /* 113dadb0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 113dadb4 push ecx */
  push32((uint32_t)(ECX));
  /* 113dadb5 call 0x113db9f0 */
  push32(0x113dadbau); f_113db9f0();
  /* 113dadba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dadbd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dadc0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113dadc2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 113dadc5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dadc8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dadcb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_113dadce:;
  /* 113dadce movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 113dadd2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113dadd4 jne 0x113dadf7 */
  if (!C.zf) goto L_113dadf7;
  /* 113dadd6 push 0x113fafe0 */
  push32((uint32_t)(0x113fafe0u));
  /* 113daddb push 0 */
  push32((uint32_t)(0x0u));
  /* 113daddd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 113dade2 push 0x113fafd4 */
  push32((uint32_t)(0x113fafd4u));
  /* 113dade7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dade9 call 0x113d2df0 */
  push32(0x113dadeeu); f_113d2df0();
  /* 113dadee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dadf1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dadf4 jne 0x113dadf7 */
  if (!C.zf) goto L_113dadf7;
  /* 113dadf6 int3  */
  x86_unimpl("int3 @ 0x113dadf6");
L_113dadf7:;
  /* 113dadf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dadf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dadfb jne 0x113dadce */
  if (!C.zf) goto L_113dadce;
L_113dadfd:;
  /* 113dadfd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 113dae03 push ecx */
  push32((uint32_t)(ECX));
  /* 113dae04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dae07 push edx */
  push32((uint32_t)(EDX));
  /* 113dae08 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 113dae0c push eax */
  push32((uint32_t)(EAX));
  /* 113dae0d call 0x113db9f0 */
  push32(0x113dae12u); f_113db9f0();
  /* 113dae12 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dae15 jmp 0x113db8d2 */
  goto L_113db8d2;
L_113dae1a:;
  /* 113dae1a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113dae21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dae24 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 113dae2a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 113dae30 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 113dae36 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 113dae3c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113dae3f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113dae46 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 113dae50 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 113dae57 jmp 0x113db8d2 */
  goto L_113db8d2;
L_113dae5c:;
  /* 113dae5c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 113dae60 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 113dae66 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 113dae6c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dae6f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 113dae75 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dae7c ja 0x113daec6 */
  if ((!C.cf&&!C.zf)) goto L_113daec6;
  /* 113dae7e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 113dae84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dae86 mov al, byte ptr [ecx + 0x113db91c] */
  AL = (r8((uint32_t)(ECX + 0x113db91c)));
  /* 113dae8c jmp dword ptr [eax*4 + 0x113db904] */
  switch (EAX) {
    case 0: goto L_113daea8;
    case 1: goto L_113daeb3;
    case 2: goto L_113dae9e;
    case 3: goto L_113dae93;
    case 4: goto L_113daebe;
    case 5: goto L_113daec6;
    default: x86_unimpl("switch@0x113dae8c out of table"); return;
  }
L_113dae93:;
  /* 113dae93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dae96 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 113dae99 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113dae9c jmp 0x113daec6 */
  goto L_113daec6;
L_113dae9e:;
  /* 113dae9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113daea1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 113daea3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113daea6 jmp 0x113daec6 */
  goto L_113daec6;
L_113daea8:;
  /* 113daea8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113daeab or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 113daeae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113daeb1 jmp 0x113daec6 */
  goto L_113daec6;
L_113daeb3:;
  /* 113daeb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113daeb6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 113daeb9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113daebc jmp 0x113daec6 */
  goto L_113daec6;
L_113daebe:;
  /* 113daebe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113daec1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 113daec3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113daec6:;
  /* 113daec6 jmp 0x113db8d2 */
  goto L_113db8d2;
L_113daecb:;
  /* 113daecb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 113daecf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113daed2 jne 0x113daf07 */
  if (!C.zf) goto L_113daf07;
  /* 113daed4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 113daed7 push edx */
  push32((uint32_t)(EDX));
  /* 113daed8 call 0x113dbb00 */
  push32(0x113daeddu); f_113dbb00();
  /* 113daedd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113daee0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 113daee6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113daeed jge 0x113daf05 */
  if ((C.sf==C.of)) goto L_113daf05;
  /* 113daeef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113daef2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 113daef4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113daef7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 113daefd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 113daeff mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_113daf05:;
  /* 113daf05 jmp 0x113daf1e */
  goto L_113daf1e;
L_113daf07:;
  /* 113daf07 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 113daf0d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113daf10 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 113daf14 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 113daf18 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_113daf1e:;
  /* 113daf1e jmp 0x113db8d2 */
  goto L_113db8d2;
L_113daf23:;
  /* 113daf23 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 113daf2d jmp 0x113db8d2 */
  goto L_113db8d2;
L_113daf32:;
  /* 113daf32 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 113daf36 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113daf39 jne 0x113daf62 */
  if (!C.zf) goto L_113daf62;
  /* 113daf3b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 113daf3e push eax */
  push32((uint32_t)(EAX));
  /* 113daf3f call 0x113dbb00 */
  push32(0x113daf44u); f_113dbb00();
  /* 113daf44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113daf47 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 113daf4d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113daf54 jge 0x113daf60 */
  if ((C.sf==C.of)) goto L_113daf60;
  /* 113daf56 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_113daf60:;
  /* 113daf60 jmp 0x113daf79 */
  goto L_113daf79;
L_113daf62:;
  /* 113daf62 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 113daf68 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113daf6b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 113daf6f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 113daf73 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_113daf79:;
  /* 113daf79 jmp 0x113db8d2 */
  goto L_113db8d2;
L_113daf7e:;
  /* 113daf7e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 113daf82 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 113daf88 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 113daf8e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113daf91 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 113daf97 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113daf9e ja 0x113db00c */
  if ((!C.cf&&!C.zf)) goto L_113db00c;
  /* 113dafa0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 113dafa6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dafa8 mov al, byte ptr [ecx + 0x113db941] */
  AL = (r8((uint32_t)(ECX + 0x113db941)));
  /* 113dafae jmp dword ptr [eax*4 + 0x113db92d] */
  switch (EAX) {
    case 0: goto L_113dafc0;
    case 1: goto L_113daff9;
    case 2: goto L_113dafb5;
    case 3: goto L_113db003;
    case 4: goto L_113db00c;
    default: x86_unimpl("switch@0x113dafae out of table"); return;
  }
L_113dafb5:;
  /* 113dafb5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dafb8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 113dafbb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113dafbe jmp 0x113db00c */
  goto L_113db00c;
L_113dafc0:;
  /* 113dafc0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dafc3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113dafc6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dafc9 jne 0x113dafeb */
  if (!C.zf) goto L_113dafeb;
  /* 113dafcb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dafce movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 113dafd2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dafd5 jne 0x113dafeb */
  if (!C.zf) goto L_113dafeb;
  /* 113dafd7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dafda add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dafdd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 113dafe0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dafe3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 113dafe6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113dafe9 jmp 0x113daff7 */
  goto L_113daff7;
L_113dafeb:;
  /* 113dafeb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 113daff2 jmp 0x113dad80 */
  goto L_113dad80;
L_113daff7:;
  /* 113daff7 jmp 0x113db00c */
  goto L_113db00c;
L_113daff9:;
  /* 113daff9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113daffc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 113daffe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113db001 jmp 0x113db00c */
  goto L_113db00c;
L_113db003:;
  /* 113db003 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db006 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 113db009 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113db00c:;
  /* 113db00c jmp 0x113db8d2 */
  goto L_113db8d2;
L_113db011:;
  /* 113db011 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 113db015 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 113db01b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 113db021 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113db024 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 113db02a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db031 ja 0x113db6f7 */
  if ((!C.cf&&!C.zf)) goto L_113db6f7;
  /* 113db037 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 113db03d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113db03f mov cl, byte ptr [edx + 0x113db9ac] */
  CL = (r8((uint32_t)(EDX + 0x113db9ac)));
  /* 113db045 jmp dword ptr [ecx*4 + 0x113db970] */
  switch (ECX) {
    case 0: goto L_113db04c;
    case 1: goto L_113db2e0;
    case 2: goto L_113db170;
    case 3: goto L_113db419;
    case 4: goto L_113db0db;
    case 5: goto L_113db061;
    case 6: goto L_113db3eb;
    case 7: goto L_113db2f0;
    case 8: goto L_113db295;
    case 9: goto L_113db465;
    case 10: goto L_113db40f;
    case 11: goto L_113db186;
    case 12: goto L_113db403;
    case 13: goto L_113db425;
    case 14: goto L_113db6f7;
    default: x86_unimpl("switch@0x113db045 out of table"); return;
  }
L_113db04c:;
  /* 113db04c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db04f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 113db054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113db056 jne 0x113db061 */
  if (!C.zf) goto L_113db061;
  /* 113db058 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db05b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 113db05e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113db061:;
  /* 113db061 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db064 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 113db06a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113db06c je 0x113db0a7 */
  if (C.zf) goto L_113db0a7;
  /* 113db06e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 113db071 push eax */
  push32((uint32_t)(EAX));
  /* 113db072 call 0x113dbb40 */
  push32(0x113db077u); f_113dbb40();
  /* 113db077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113db07a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 113db07e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 113db082 push ecx */
  push32((uint32_t)(ECX));
  /* 113db083 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 113db089 push edx */
  push32((uint32_t)(EDX));
  /* 113db08a call 0x113dcc20 */
  push32(0x113db08fu); f_113dcc20();
  /* 113db08f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113db092 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 113db095 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db099 jge 0x113db0a5 */
  if ((C.sf==C.of)) goto L_113db0a5;
  /* 113db09b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_113db0a5:;
  /* 113db0a5 jmp 0x113db0cd */
  goto L_113db0cd;
L_113db0a7:;
  /* 113db0a7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 113db0aa push eax */
  push32((uint32_t)(EAX));
  /* 113db0ab call 0x113dbb00 */
  push32(0x113db0b0u); f_113dbb00();
  /* 113db0b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113db0b3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 113db0ba mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 113db0c0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 113db0c6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_113db0cd:;
  /* 113db0cd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 113db0d3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 113db0d6 jmp 0x113db6f7 */
  goto L_113db6f7;
L_113db0db:;
  /* 113db0db lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 113db0de push eax */
  push32((uint32_t)(EAX));
  /* 113db0df call 0x113dbb00 */
  push32(0x113db0e4u); f_113dbb00();
  /* 113db0e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113db0e7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 113db0ed cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db0f4 je 0x113db102 */
  if (C.zf) goto L_113db102;
  /* 113db0f6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 113db0fc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db100 jne 0x113db11c */
  if (!C.zf) goto L_113db11c;
L_113db102:;
  /* 113db102 mov edx, dword ptr [0x113fdfb0] */
  EDX = (r32((uint32_t)(0x113fdfb0)));
  /* 113db108 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 113db10b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113db10e push eax */
  push32((uint32_t)(EAX));
  /* 113db10f call 0x113d6b60 */
  push32(0x113db114u); f_113d6b60();
  /* 113db114 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113db117 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 113db11a jmp 0x113db16b */
  goto L_113db16b;
L_113db11c:;
  /* 113db11c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db11f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 113db125 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113db127 je 0x113db14c */
  if (C.zf) goto L_113db14c;
  /* 113db129 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 113db12f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 113db132 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113db135 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 113db13b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 113db13e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 113db140 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 113db143 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 113db14a jmp 0x113db16b */
  goto L_113db16b;
L_113db14c:;
  /* 113db14c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 113db153 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 113db159 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113db15c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 113db15f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 113db165 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 113db168 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_113db16b:;
  /* 113db16b jmp 0x113db6f7 */
  goto L_113db6f7;
L_113db170:;
  /* 113db170 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db173 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 113db179 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113db17b jne 0x113db186 */
  if (!C.zf) goto L_113db186;
  /* 113db17d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db180 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 113db183 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113db186:;
  /* 113db186 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db18d jne 0x113db19b */
  if (!C.zf) goto L_113db19b;
  /* 113db18f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 113db199 jmp 0x113db1a7 */
  goto L_113db1a7;
L_113db19b:;
  /* 113db19b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 113db1a1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_113db1a7:;
  /* 113db1a7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 113db1ad mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 113db1b3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 113db1b6 push edx */
  push32((uint32_t)(EDX));
  /* 113db1b7 call 0x113dbb00 */
  push32(0x113db1bcu); f_113dbb00();
  /* 113db1bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113db1bf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113db1c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db1c5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 113db1ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113db1cc je 0x113db236 */
  if (C.zf) goto L_113db236;
  /* 113db1ce cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db1d2 jne 0x113db1dd */
  if (!C.zf) goto L_113db1dd;
  /* 113db1d4 mov ecx, dword ptr [0x113fdfb4] */
  ECX = (r32((uint32_t)(0x113fdfb4)));
  /* 113db1da mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_113db1dd:;
  /* 113db1dd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 113db1e4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 113db1e7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_113db1ed:;
  /* 113db1ed mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 113db1f3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 113db1f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113db1fc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 113db202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113db204 je 0x113db226 */
  if (C.zf) goto L_113db226;
  /* 113db206 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 113db20c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113db20e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 113db211 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113db213 je 0x113db226 */
  if (C.zf) goto L_113db226;
  /* 113db215 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 113db21b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113db21e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 113db224 jmp 0x113db1ed */
  goto L_113db1ed;
L_113db226:;
  /* 113db226 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 113db22c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113db22f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 113db231 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 113db234 jmp 0x113db290 */
  goto L_113db290;
L_113db236:;
  /* 113db236 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db23a jne 0x113db244 */
  if (!C.zf) goto L_113db244;
  /* 113db23c mov eax, dword ptr [0x113fdfb0] */
  EAX = (r32((uint32_t)(0x113fdfb0)));
  /* 113db241 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_113db244:;
  /* 113db244 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113db247 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_113db24d:;
  /* 113db24d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 113db253 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 113db259 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113db25c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 113db262 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113db264 je 0x113db284 */
  if (C.zf) goto L_113db284;
  /* 113db266 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 113db26c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113db26f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113db271 je 0x113db284 */
  if (C.zf) goto L_113db284;
  /* 113db273 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 113db279 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113db27c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 113db282 jmp 0x113db24d */
  goto L_113db24d;
L_113db284:;
  /* 113db284 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 113db28a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113db28d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_113db290:;
  /* 113db290 jmp 0x113db6f7 */
  goto L_113db6f7;
L_113db295:;
  /* 113db295 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 113db298 push edx */
  push32((uint32_t)(EDX));
  /* 113db299 call 0x113dbb00 */
  push32(0x113db29eu); f_113dbb00();
  /* 113db29e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113db2a1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 113db2a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db2aa and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 113db2ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113db2af je 0x113db2c3 */
  if (C.zf) goto L_113db2c3;
  /* 113db2b1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 113db2b7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 113db2be mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 113db2c1 jmp 0x113db2d1 */
  goto L_113db2d1;
L_113db2c3:;
  /* 113db2c3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 113db2c9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 113db2cf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_113db2d1:;
  /* 113db2d1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 113db2db jmp 0x113db6f7 */
  goto L_113db6f7;
L_113db2e0:;
  /* 113db2e0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 113db2e7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 113db2ea add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 113db2ed mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_113db2f0:;
  /* 113db2f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db2f3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 113db2f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113db2f8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 113db2fe mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 113db301 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db308 jge 0x113db316 */
  if ((C.sf==C.of)) goto L_113db316;
  /* 113db30a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 113db314 jmp 0x113db332 */
  goto L_113db332;
L_113db316:;
  /* 113db316 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db31d jne 0x113db332 */
  if (!C.zf) goto L_113db332;
  /* 113db31f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 113db323 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db326 jne 0x113db332 */
  if (!C.zf) goto L_113db332;
  /* 113db328 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_113db332:;
  /* 113db332 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113db335 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113db338 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 113db33b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113db33e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113db341 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113db343 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 113db346 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 113db34c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 113db352 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113db355 push ecx */
  push32((uint32_t)(ECX));
  /* 113db356 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 113db35c push edx */
  push32((uint32_t)(EDX));
  /* 113db35d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 113db361 push eax */
  push32((uint32_t)(EAX));
  /* 113db362 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113db365 push ecx */
  push32((uint32_t)(ECX));
  /* 113db366 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 113db36c push edx */
  push32((uint32_t)(EDX));
  /* 113db36d call dword ptr [0x113fe3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113fe3a0))), 0x113db373u);
  /* 113db373 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113db376 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db379 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 113db37e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113db380 je 0x113db398 */
  if (C.zf) goto L_113db398;
  /* 113db382 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db389 jne 0x113db398 */
  if (!C.zf) goto L_113db398;
  /* 113db38b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113db38e push ecx */
  push32((uint32_t)(ECX));
  /* 113db38f call dword ptr [0x113fe3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113fe3ac))), 0x113db395u);
  /* 113db395 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113db398:;
  /* 113db398 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 113db39c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db39f jne 0x113db3ba */
  if (!C.zf) goto L_113db3ba;
  /* 113db3a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db3a4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 113db3a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113db3ab jne 0x113db3ba */
  if (!C.zf) goto L_113db3ba;
  /* 113db3ad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113db3b0 push ecx */
  push32((uint32_t)(ECX));
  /* 113db3b1 call dword ptr [0x113fe3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113fe3a4))), 0x113db3b7u);
  /* 113db3b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113db3ba:;
  /* 113db3ba mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 113db3bd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113db3c0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db3c3 jne 0x113db3d7 */
  if (!C.zf) goto L_113db3d7;
  /* 113db3c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db3c8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 113db3cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113db3ce mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 113db3d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113db3d4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_113db3d7:;
  /* 113db3d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113db3da push eax */
  push32((uint32_t)(EAX));
  /* 113db3db call 0x113d6b60 */
  push32(0x113db3e0u); f_113d6b60();
  /* 113db3e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113db3e3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 113db3e6 jmp 0x113db6f7 */
  goto L_113db6f7;
L_113db3eb:;
  /* 113db3eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db3ee or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 113db3f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113db3f4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 113db3fe jmp 0x113db485 */
  goto L_113db485;
L_113db403:;
  /* 113db403 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 113db40d jmp 0x113db485 */
  goto L_113db485;
L_113db40f:;
  /* 113db40f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_113db419:;
  /* 113db419 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 113db423 jmp 0x113db42f */
  goto L_113db42f;
L_113db425:;
  /* 113db425 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_113db42f:;
  /* 113db42f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 113db439 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db43c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 113db442 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113db444 je 0x113db463 */
  if (C.zf) goto L_113db463;
  /* 113db446 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 113db44d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 113db453 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113db456 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 113db45c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_113db463:;
  /* 113db463 jmp 0x113db485 */
  goto L_113db485;
L_113db465:;
  /* 113db465 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 113db46f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db472 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 113db478 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113db47a je 0x113db485 */
  if (C.zf) goto L_113db485;
  /* 113db47c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db47f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 113db482 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113db485:;
  /* 113db485 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db488 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 113db48d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113db48f je 0x113db4ae */
  if (C.zf) goto L_113db4ae;
  /* 113db491 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 113db494 push ecx */
  push32((uint32_t)(ECX));
  /* 113db495 call 0x113dbb20 */
  push32(0x113db49au); f_113dbb20();
  /* 113db49a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113db49d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 113db4a3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 113db4a9 jmp 0x113db53f */
  goto L_113db53f;
L_113db4ae:;
  /* 113db4ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db4b1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 113db4b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113db4b6 je 0x113db500 */
  if (C.zf) goto L_113db500;
  /* 113db4b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db4bb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 113db4be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113db4c0 je 0x113db4e0 */
  if (C.zf) goto L_113db4e0;
  /* 113db4c2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 113db4c5 push ecx */
  push32((uint32_t)(ECX));
  /* 113db4c6 call 0x113dbb00 */
  push32(0x113db4cbu); f_113dbb00();
  /* 113db4cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113db4ce movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 113db4d1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113db4d2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 113db4d8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 113db4de jmp 0x113db4fe */
  goto L_113db4fe;
L_113db4e0:;
  /* 113db4e0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 113db4e3 push edx */
  push32((uint32_t)(EDX));
  /* 113db4e4 call 0x113dbb00 */
  push32(0x113db4e9u); f_113dbb00();
  /* 113db4e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113db4ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113db4f1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113db4f2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 113db4f8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_113db4fe:;
  /* 113db4fe jmp 0x113db53f */
  goto L_113db53f;
L_113db500:;
  /* 113db500 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db503 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 113db506 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113db508 je 0x113db525 */
  if (C.zf) goto L_113db525;
  /* 113db50a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 113db50d push ecx */
  push32((uint32_t)(ECX));
  /* 113db50e call 0x113dbb00 */
  push32(0x113db513u); f_113dbb00();
  /* 113db513 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113db516 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113db517 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 113db51d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 113db523 jmp 0x113db53f */
  goto L_113db53f;
L_113db525:;
  /* 113db525 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 113db528 push edx */
  push32((uint32_t)(EDX));
  /* 113db529 call 0x113dbb00 */
  push32(0x113db52eu); f_113dbb00();
  /* 113db52e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113db531 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113db533 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 113db539 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_113db53f:;
  /* 113db53f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db542 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 113db545 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113db547 je 0x113db587 */
  if (C.zf) goto L_113db587;
  /* 113db549 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db550 jg 0x113db587 */
  if ((!C.zf&&C.sf==C.of)) goto L_113db587;
  /* 113db552 jl 0x113db55d */
  if ((C.sf!=C.of)) goto L_113db55d;
  /* 113db554 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db55b jae 0x113db587 */
  if (!C.cf) goto L_113db587;
L_113db55d:;
  /* 113db55d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 113db563 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113db565 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 113db56b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113db56e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 113db570 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 113db576 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 113db57c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db57f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 113db582 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113db585 jmp 0x113db59f */
  goto L_113db59f;
L_113db587:;
  /* 113db587 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 113db58d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 113db593 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 113db599 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_113db59f:;
  /* 113db59f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db5a2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 113db5a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113db5aa jne 0x113db5c7 */
  if (!C.zf) goto L_113db5c7;
  /* 113db5ac mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 113db5b2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 113db5b8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 113db5bb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 113db5c1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_113db5c7:;
  /* 113db5c7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db5ce jge 0x113db5dc */
  if ((C.sf==C.of)) goto L_113db5dc;
  /* 113db5d0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 113db5da jmp 0x113db5e5 */
  goto L_113db5e5;
L_113db5dc:;
  /* 113db5dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db5df and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 113db5e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113db5e5:;
  /* 113db5e5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 113db5eb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 113db5f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113db5f3 jne 0x113db5fc */
  if (!C.zf) goto L_113db5fc;
  /* 113db5f5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_113db5fc:;
  /* 113db5fc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 113db5ff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_113db602:;
  /* 113db602 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 113db608 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 113db60e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113db611 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 113db617 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113db619 jg 0x113db62f */
  if ((!C.zf&&C.sf==C.of)) goto L_113db62f;
  /* 113db61b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 113db621 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 113db627 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113db629 je 0x113db6b0 */
  if (C.zf) goto L_113db6b0;
L_113db62f:;
  /* 113db62f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 113db635 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113db636 push edx */
  push32((uint32_t)(EDX));
  /* 113db637 push eax */
  push32((uint32_t)(EAX));
  /* 113db638 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 113db63e push edx */
  push32((uint32_t)(EDX));
  /* 113db63f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 113db645 push eax */
  push32((uint32_t)(EAX));
  /* 113db646 call 0x113da9c0 */
  push32(0x113db64bu); f_113da9c0();
  /* 113db64b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113db64e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 113db654 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 113db65a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113db65b push edx */
  push32((uint32_t)(EDX));
  /* 113db65c push eax */
  push32((uint32_t)(EAX));
  /* 113db65d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 113db663 push ecx */
  push32((uint32_t)(ECX));
  /* 113db664 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 113db66a push edx */
  push32((uint32_t)(EDX));
  /* 113db66b call 0x113da950 */
  push32(0x113db670u); f_113da950();
  /* 113db670 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 113db676 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 113db67c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db683 jle 0x113db697 */
  if ((C.zf||C.sf!=C.of)) goto L_113db697;
  /* 113db685 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 113db68b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113db691 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_113db697:;
  /* 113db697 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113db69a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 113db6a0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 113db6a2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113db6a5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113db6a8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113db6ab jmp 0x113db602 */
  goto L_113db602;
L_113db6b0:;
  /* 113db6b0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 113db6b3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113db6b6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 113db6b9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 113db6bc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113db6bf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 113db6c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db6c5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 113db6ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113db6cc je 0x113db6f7 */
  if (C.zf) goto L_113db6f7;
  /* 113db6ce mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113db6d1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113db6d4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db6d7 jne 0x113db6df */
  if (!C.zf) goto L_113db6df;
  /* 113db6d9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db6dd jne 0x113db6f7 */
  if (!C.zf) goto L_113db6f7;
L_113db6df:;
  /* 113db6df mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113db6e2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113db6e5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113db6e8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113db6eb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 113db6ee mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113db6f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113db6f4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_113db6f7:;
  /* 113db6f7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db6fe jne 0x113db8d2 */
  if (!C.zf) goto L_113db8d2;
  /* 113db704 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db707 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 113db70a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113db70c je 0x113db75d */
  if (C.zf) goto L_113db75d;
  /* 113db70e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db711 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 113db717 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113db719 je 0x113db72b */
  if (C.zf) goto L_113db72b;
  /* 113db71b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 113db722 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 113db729 jmp 0x113db75d */
  goto L_113db75d;
L_113db72b:;
  /* 113db72b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db72e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 113db731 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113db733 je 0x113db745 */
  if (C.zf) goto L_113db745;
  /* 113db735 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 113db73c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 113db743 jmp 0x113db75d */
  goto L_113db75d;
L_113db745:;
  /* 113db745 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db748 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 113db74b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113db74d je 0x113db75d */
  if (C.zf) goto L_113db75d;
  /* 113db74f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 113db756 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_113db75d:;
  /* 113db75d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 113db763 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113db766 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113db769 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 113db76f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db772 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 113db775 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113db777 jne 0x113db795 */
  if (!C.zf) goto L_113db795;
  /* 113db779 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 113db77f push eax */
  push32((uint32_t)(EAX));
  /* 113db780 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113db783 push ecx */
  push32((uint32_t)(ECX));
  /* 113db784 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 113db78a push edx */
  push32((uint32_t)(EDX));
  /* 113db78b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 113db78d call 0x113dba70 */
  push32(0x113db792u); f_113dba70();
  /* 113db792 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113db795:;
  /* 113db795 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 113db79b push eax */
  push32((uint32_t)(EAX));
  /* 113db79c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113db79f push ecx */
  push32((uint32_t)(ECX));
  /* 113db7a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113db7a3 push edx */
  push32((uint32_t)(EDX));
  /* 113db7a4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 113db7aa push eax */
  push32((uint32_t)(EAX));
  /* 113db7ab call 0x113dbab0 */
  push32(0x113db7b0u); f_113dbab0();
  /* 113db7b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113db7b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db7b6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 113db7b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113db7bb je 0x113db7e3 */
  if (C.zf) goto L_113db7e3;
  /* 113db7bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db7c0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 113db7c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113db7c5 jne 0x113db7e3 */
  if (!C.zf) goto L_113db7e3;
  /* 113db7c7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 113db7cd push eax */
  push32((uint32_t)(EAX));
  /* 113db7ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113db7d1 push ecx */
  push32((uint32_t)(ECX));
  /* 113db7d2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 113db7d8 push edx */
  push32((uint32_t)(EDX));
  /* 113db7d9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 113db7db call 0x113dba70 */
  push32(0x113db7e0u); f_113dba70();
  /* 113db7e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113db7e3:;
  /* 113db7e3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db7e7 je 0x113db891 */
  if (C.zf) goto L_113db891;
  /* 113db7ed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db7f1 jle 0x113db891 */
  if ((C.zf||C.sf!=C.of)) goto L_113db891;
  /* 113db7f7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113db7fa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 113db800 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113db803 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_113db809:;
  /* 113db809 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 113db80f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 113db815 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113db818 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 113db81e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113db820 je 0x113db88f */
  if (C.zf) goto L_113db88f;
  /* 113db822 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 113db828 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 113db82b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 113db832 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 113db839 push eax */
  push32((uint32_t)(EAX));
  /* 113db83a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 113db840 push ecx */
  push32((uint32_t)(ECX));
  /* 113db841 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 113db847 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113db84a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 113db850 call 0x113dcc20 */
  push32(0x113db855u); f_113dcc20();
  /* 113db855 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113db858 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 113db85e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113db865 jg 0x113db869 */
  if ((!C.zf&&C.sf==C.of)) goto L_113db869;
  /* 113db867 jmp 0x113db88f */
  goto L_113db88f;
L_113db869:;
  /* 113db869 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 113db86f push eax */
  push32((uint32_t)(EAX));
  /* 113db870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113db873 push ecx */
  push32((uint32_t)(ECX));
  /* 113db874 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 113db87a push edx */
  push32((uint32_t)(EDX));
  /* 113db87b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 113db881 push eax */
  push32((uint32_t)(EAX));
  /* 113db882 call 0x113dbab0 */
  push32(0x113db887u); f_113dbab0();
  /* 113db887 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113db88a jmp 0x113db809 */
  goto L_113db809;
L_113db88f:;
  /* 113db88f jmp 0x113db8ac */
  goto L_113db8ac;
L_113db891:;
  /* 113db891 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 113db897 push ecx */
  push32((uint32_t)(ECX));
  /* 113db898 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113db89b push edx */
  push32((uint32_t)(EDX));
  /* 113db89c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113db89f push eax */
  push32((uint32_t)(EAX));
  /* 113db8a0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113db8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 113db8a4 call 0x113dbab0 */
  push32(0x113db8a9u); f_113dbab0();
  /* 113db8a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113db8ac:;
  /* 113db8ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113db8af and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 113db8b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113db8b4 je 0x113db8d2 */
  if (C.zf) goto L_113db8d2;
  /* 113db8b6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 113db8bc push eax */
  push32((uint32_t)(EAX));
  /* 113db8bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113db8c0 push ecx */
  push32((uint32_t)(ECX));
  /* 113db8c1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 113db8c7 push edx */
  push32((uint32_t)(EDX));
  /* 113db8c8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 113db8ca call 0x113dba70 */
  push32(0x113db8cfu); f_113dba70();
  /* 113db8cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113db8d2:;
  /* 113db8d2 jmp 0x113dace4 */
  goto L_113dace4;
L_113db8d7:;
  /* 113db8d7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 113db8dd pop edi */
  EDI = (pop32());
  /* 113db8de pop esi */
  ESI = (pop32());
  /* 113db8df pop ebx */
  EBX = (pop32());
  /* 113db8e0 mov esp, ebp */
  ESP = (EBP);
  /* 113db8e2 pop ebp */
  EBP = (pop32());
  /* 113db8e3 ret  */
  ESPCHK(0x113dacc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9f0 @ 0x113db9f0 (119 bytes, 44 insns) */
void f_113db9f0(void) {
  FTRACE(0x113db9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113db9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113db9f1 mov ebp, esp */
  EBP = (ESP);
  /* 113db9f3 push ecx */
  push32((uint32_t)(ECX));
  /* 113db9f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113db9f7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113db9fa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113db9fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dba00 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 113dba03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dba06 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dba0a jl 0x113dba32 */
  if ((C.sf!=C.of)) goto L_113dba32;
  /* 113dba0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dba0f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113dba11 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 113dba14 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 113dba16 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 113dba1a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113dba20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113dba23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dba26 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113dba28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dba2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dba2e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113dba30 jmp 0x113dba45 */
  goto L_113dba45;
L_113dba32:;
  /* 113dba32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dba35 push edx */
  push32((uint32_t)(EDX));
  /* 113dba36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dba39 push eax */
  push32((uint32_t)(EAX));
  /* 113dba3a call 0x113daa40 */
  push32(0x113dba3fu); f_113daa40();
  /* 113dba3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dba42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113dba45:;
  /* 113dba45 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dba49 jne 0x113dba56 */
  if (!C.zf) goto L_113dba56;
  /* 113dba4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dba4e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 113dba54 jmp 0x113dba63 */
  goto L_113dba63;
L_113dba56:;
  /* 113dba56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dba59 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113dba5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dba5e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dba61 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_113dba63:;
  /* 113dba63 mov esp, ebp */
  ESP = (EBP);
  /* 113dba65 pop ebp */
  EBP = (pop32());
  /* 113dba66 ret  */
  ESPCHK(0x113db9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba70 @ 0x113dba70 (53 bytes, 23 insns) */
void f_113dba70(void) {
  FTRACE(0x113dba70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dba70 push ebp */
  push32((uint32_t)(EBP));
  /* 113dba71 mov ebp, esp */
  EBP = (ESP);
L_113dba73:;
  /* 113dba73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dba76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dba79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dba7c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 113dba7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dba81 jle 0x113dbaa3 */
  if ((C.zf||C.sf!=C.of)) goto L_113dbaa3;
  /* 113dba83 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113dba86 push edx */
  push32((uint32_t)(EDX));
  /* 113dba87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dba8a push eax */
  push32((uint32_t)(EAX));
  /* 113dba8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dba8e push ecx */
  push32((uint32_t)(ECX));
  /* 113dba8f call 0x113db9f0 */
  push32(0x113dba94u); f_113db9f0();
  /* 113dba94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dba97 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113dba9a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dba9d jne 0x113dbaa1 */
  if (!C.zf) goto L_113dbaa1;
  /* 113dba9f jmp 0x113dbaa3 */
  goto L_113dbaa3;
L_113dbaa1:;
  /* 113dbaa1 jmp 0x113dba73 */
  goto L_113dba73;
L_113dbaa3:;
  /* 113dbaa3 pop ebp */
  EBP = (pop32());
  /* 113dbaa4 ret  */
  ESPCHK(0x113dba70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bab0 @ 0x113dbab0 (74 bytes, 31 insns) */
void f_113dbab0(void) {
  FTRACE(0x113dbab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dbab0 push ebp */
  push32((uint32_t)(EBP));
  /* 113dbab1 mov ebp, esp */
  EBP = (ESP);
  /* 113dbab3 push ecx */
  push32((uint32_t)(ECX));
L_113dbab4:;
  /* 113dbab4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dbab7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dbaba sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dbabd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 113dbac0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dbac2 jle 0x113dbaf6 */
  if ((C.zf||C.sf!=C.of)) goto L_113dbaf6;
  /* 113dbac4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113dbac7 push edx */
  push32((uint32_t)(EDX));
  /* 113dbac8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dbacb push eax */
  push32((uint32_t)(EAX));
  /* 113dbacc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbacf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113dbad2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113dbad5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dbad8 push eax */
  push32((uint32_t)(EAX));
  /* 113dbad9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbadc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbadf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 113dbae2 call 0x113db9f0 */
  push32(0x113dbae7u); f_113db9f0();
  /* 113dbae7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbaea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113dbaed cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbaf0 jne 0x113dbaf4 */
  if (!C.zf) goto L_113dbaf4;
  /* 113dbaf2 jmp 0x113dbaf6 */
  goto L_113dbaf6;
L_113dbaf4:;
  /* 113dbaf4 jmp 0x113dbab4 */
  goto L_113dbab4;
L_113dbaf6:;
  /* 113dbaf6 mov esp, ebp */
  ESP = (EBP);
  /* 113dbaf8 pop ebp */
  EBP = (pop32());
  /* 113dbaf9 ret  */
  ESPCHK(0x113dbab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb00 @ 0x113dbb00 (26 bytes, 12 insns) */
void f_113dbb00(void) {
  FTRACE(0x113dbb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dbb00 push ebp */
  push32((uint32_t)(EBP));
  /* 113dbb01 mov ebp, esp */
  EBP = (ESP);
  /* 113dbb03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbb06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113dbb08 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbb0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbb0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113dbb10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbb13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113dbb15 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 113dbb18 pop ebp */
  EBP = (pop32());
  /* 113dbb19 ret  */
  ESPCHK(0x113dbb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb20 @ 0x113dbb20 (31 bytes, 14 insns) */
void f_113dbb20(void) {
  FTRACE(0x113dbb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dbb20 push ebp */
  push32((uint32_t)(EBP));
  /* 113dbb21 mov ebp, esp */
  EBP = (ESP);
  /* 113dbb23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbb26 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113dbb28 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbb2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbb2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113dbb30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbb33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113dbb35 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dbb38 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 113dbb3a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113dbb3d pop ebp */
  EBP = (pop32());
  /* 113dbb3e ret  */
  ESPCHK(0x113dbb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb40 @ 0x113dbb40 (27 bytes, 12 insns) */
void f_113dbb40(void) {
  FTRACE(0x113dbb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dbb40 push ebp */
  push32((uint32_t)(EBP));
  /* 113dbb41 mov ebp, esp */
  EBP = (ESP);
  /* 113dbb43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbb46 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113dbb48 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbb4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbb4e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113dbb50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbb53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113dbb55 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 113dbb59 pop ebp */
  EBP = (pop32());
  /* 113dbb5a ret  */
  ESPCHK(0x113dbb40u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x113dbb60 (145 bytes, 42 insns) */
void f_113dbb60(void) {
  FTRACE(0x113dbb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dbb60 push ebp */
  push32((uint32_t)(EBP));
  /* 113dbb61 mov ebp, esp */
  EBP = (ESP);
  /* 113dbb63 push ecx */
  push32((uint32_t)(ECX));
  /* 113dbb64 call 0x113dbc10 */
  push32(0x113dbb69u); f_113dbc10();
  /* 113dbb69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbb6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 113dbb6e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113dbb75 jmp 0x113dbb80 */
  goto L_113dbb80;
L_113dbb77:;
  /* 113dbb77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dbb7a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbb7d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113dbb80:;
  /* 113dbb80 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbb84 jae 0x113dbbaa */
  if (!C.cf) goto L_113dbbaa;
  /* 113dbb86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dbb89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbb8c cmp ecx, dword ptr [eax*8 + 0x113fdfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x113fdfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbb93 jne 0x113dbba8 */
  if (!C.zf) goto L_113dbba8;
  /* 113dbb95 call 0x113dbc00 */
  push32(0x113dbb9au); f_113dbc00();
  /* 113dbb9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dbb9d mov ecx, dword ptr [edx*8 + 0x113fdfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x113fdfbc)));
  /* 113dbba4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 113dbba6 jmp 0x113dbbed */
  goto L_113dbbed;
L_113dbba8:;
  /* 113dbba8 jmp 0x113dbb77 */
  goto L_113dbb77;
L_113dbbaa:;
  /* 113dbbaa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbbae jb 0x113dbbc3 */
  if (C.cf) goto L_113dbbc3;
  /* 113dbbb0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbbb4 ja 0x113dbbc3 */
  if ((!C.cf&&!C.zf)) goto L_113dbbc3;
  /* 113dbbb6 call 0x113dbc00 */
  push32(0x113dbbbbu); f_113dbc00();
  /* 113dbbbb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 113dbbc1 jmp 0x113dbbed */
  goto L_113dbbed;
L_113dbbc3:;
  /* 113dbbc3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbbca jb 0x113dbbe2 */
  if (C.cf) goto L_113dbbe2;
  /* 113dbbcc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbbd3 ja 0x113dbbe2 */
  if ((!C.cf&&!C.zf)) goto L_113dbbe2;
  /* 113dbbd5 call 0x113dbc00 */
  push32(0x113dbbdau); f_113dbc00();
  /* 113dbbda mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 113dbbe0 jmp 0x113dbbed */
  goto L_113dbbed;
L_113dbbe2:;
  /* 113dbbe2 call 0x113dbc00 */
  push32(0x113dbbe7u); f_113dbc00();
  /* 113dbbe7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_113dbbed:;
  /* 113dbbed mov esp, ebp */
  ESP = (EBP);
  /* 113dbbef pop ebp */
  EBP = (pop32());
  /* 113dbbf0 ret  */
  ESPCHK(0x113dbb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc00 @ 0x113dbc00 (13 bytes, 6 insns) */
void f_113dbc00(void) {
  FTRACE(0x113dbc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dbc00 push ebp */
  push32((uint32_t)(EBP));
  /* 113dbc01 mov ebp, esp */
  EBP = (ESP);
  /* 113dbc03 call 0x113d3770 */
  push32(0x113dbc08u); f_113d3770();
  /* 113dbc08 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbc0b pop ebp */
  EBP = (pop32());
  /* 113dbc0c ret  */
  ESPCHK(0x113dbc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc10 @ 0x113dbc10 (13 bytes, 6 insns) */
void f_113dbc10(void) {
  FTRACE(0x113dbc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dbc10 push ebp */
  push32((uint32_t)(EBP));
  /* 113dbc11 mov ebp, esp */
  EBP = (ESP);
  /* 113dbc13 call 0x113d3770 */
  push32(0x113dbc18u); f_113d3770();
  /* 113dbc18 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbc1b pop ebp */
  EBP = (pop32());
  /* 113dbc1c ret  */
  ESPCHK(0x113dbc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc20 @ 0x113dbc20 (664 bytes, 258 insns) [15 switch table(s)] */
void f_113dbc20(void) {
  FTRACE(0x113dbc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dbc20 push ebp */
  push32((uint32_t)(EBP));
  /* 113dbc21 mov ebp, esp */
  EBP = (ESP);
  /* 113dbc23 push edi */
  push32((uint32_t)(EDI));
  /* 113dbc24 push esi */
  push32((uint32_t)(ESI));
  /* 113dbc25 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 113dbc28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dbc2b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbc2e mov eax, ecx */
  EAX = (ECX);
  /* 113dbc30 mov edx, ecx */
  EDX = (ECX);
  /* 113dbc32 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbc34 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbc36 jbe 0x113dbc40 */
  if ((C.cf||C.zf)) goto L_113dbc40;
  /* 113dbc38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbc3a jb 0x113dbdb8 */
  if (C.cf) goto L_113dbdb8;
L_113dbc40:;
  /* 113dbc40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 113dbc46 jne 0x113dbc5c */
  if (!C.zf) goto L_113dbc5c;
  /* 113dbc48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113dbc4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 113dbc4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbc51 jb 0x113dbc7c */
  if (C.cf) goto L_113dbc7c;
  /* 113dbc53 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 113dbc55 jmp dword ptr [edx*4 + 0x113dbd68] */
  switch (EDX) {
    case 0: goto L_113dbd78;
    case 1: goto L_113dbd80;
    case 2: goto L_113dbd8c;
    case 3: goto L_113dbda0;
    default: x86_unimpl("switch@0x113dbc55 out of table"); return;
  }
L_113dbc5c:;
  /* 113dbc5c mov eax, edi */
  EAX = (EDI);
  /* 113dbc5e mov edx, 3 */
  EDX = (0x3u);
  /* 113dbc63 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dbc66 jb 0x113dbc74 */
  if (C.cf) goto L_113dbc74;
  /* 113dbc68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 113dbc6b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbc6d jmp dword ptr [eax*4 + 0x113dbc80] */
  switch (EAX) {
    case 1: goto L_113dbc90;
    case 2: goto L_113dbcbc;
    case 3: goto L_113dbce0;
    default: x86_unimpl("switch@0x113dbc6d out of table"); return;
  }
L_113dbc74:;
  /* 113dbc74 jmp dword ptr [ecx*4 + 0x113dbd78] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x113dbd78)))); return;
  /* 113dbc7b nop  */
  /* nop */
L_113dbc7c:;
  /* 113dbc7c jmp dword ptr [ecx*4 + 0x113dbcfc] */
  switch (ECX) {
    case 0: goto L_113dbd5f;
    case 1: goto L_113dbd4c;
    case 2: goto L_113dbd44;
    case 3: goto L_113dbd3c;
    case 4: goto L_113dbd34;
    case 5: goto L_113dbd2c;
    case 6: goto L_113dbd24;
    case 7: goto L_113dbd1c;
    default: x86_unimpl("switch@0x113dbc7c out of table"); return;
  }
  /* 113dbc83 nop  */
  /* nop */
L_113dbc90:;
  /* 113dbc90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 113dbc92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113dbc94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113dbc96 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 113dbc99 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 113dbc9c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 113dbc9f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113dbca2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 113dbca5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbca8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbcab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbcae jb 0x113dbc7c */
  if (C.cf) goto L_113dbc7c;
  /* 113dbcb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 113dbcb2 jmp dword ptr [edx*4 + 0x113dbd68] */
  switch (EDX) {
    case 0: goto L_113dbd78;
    case 1: goto L_113dbd80;
    case 2: goto L_113dbd8c;
    case 3: goto L_113dbda0;
    default: x86_unimpl("switch@0x113dbcb2 out of table"); return;
  }
  /* 113dbcb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113dbcbc:;
  /* 113dbcbc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 113dbcbe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113dbcc0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113dbcc2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 113dbcc5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113dbcc8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 113dbccb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbcce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbcd1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbcd4 jb 0x113dbc7c */
  if (C.cf) goto L_113dbc7c;
  /* 113dbcd6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 113dbcd8 jmp dword ptr [edx*4 + 0x113dbd68] */
  switch (EDX) {
    case 0: goto L_113dbd78;
    case 1: goto L_113dbd80;
    case 2: goto L_113dbd8c;
    case 3: goto L_113dbda0;
    default: x86_unimpl("switch@0x113dbcd8 out of table"); return;
  }
  /* 113dbcdf nop  */
  /* nop */
L_113dbce0:;
  /* 113dbce0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 113dbce2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113dbce4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113dbce6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 113dbce7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113dbcea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113dbceb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbcee jb 0x113dbc7c */
  if (C.cf) goto L_113dbc7c;
  /* 113dbcf0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 113dbcf2 jmp dword ptr [edx*4 + 0x113dbd68] */
  switch (EDX) {
    case 0: goto L_113dbd78;
    case 1: goto L_113dbd80;
    case 2: goto L_113dbd8c;
    case 3: goto L_113dbda0;
    default: x86_unimpl("switch@0x113dbcf2 out of table"); return;
  }
  /* 113dbcf9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113dbd1c:;
  /* 113dbd1c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 113dbd20 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_113dbd24:;
  /* 113dbd24 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 113dbd28 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_113dbd2c:;
  /* 113dbd2c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 113dbd30 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_113dbd34:;
  /* 113dbd34 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 113dbd38 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_113dbd3c:;
  /* 113dbd3c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 113dbd40 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_113dbd44:;
  /* 113dbd44 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 113dbd48 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_113dbd4c:;
  /* 113dbd4c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 113dbd50 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 113dbd54 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 113dbd5b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbd5d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_113dbd5f:;
  /* 113dbd5f jmp dword ptr [edx*4 + 0x113dbd68] */
  switch (EDX) {
    case 0: goto L_113dbd78;
    case 1: goto L_113dbd80;
    case 2: goto L_113dbd8c;
    case 3: goto L_113dbda0;
    default: x86_unimpl("switch@0x113dbd5f out of table"); return;
  }
  /* 113dbd66 mov edi, edi */
  EDI = (EDI);
L_113dbd78:;
  /* 113dbd78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbd7b pop esi */
  ESI = (pop32());
  /* 113dbd7c pop edi */
  EDI = (pop32());
  /* 113dbd7d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113dbd7e ret  */
  ESPCHK(0x113dbc20u, _esp0);
  ESP += 4; return;
  /* 113dbd7f nop  */
  /* nop */
L_113dbd80:;
  /* 113dbd80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113dbd82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113dbd84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbd87 pop esi */
  ESI = (pop32());
  /* 113dbd88 pop edi */
  EDI = (pop32());
  /* 113dbd89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113dbd8a ret  */
  ESPCHK(0x113dbc20u, _esp0);
  ESP += 4; return;
  /* 113dbd8b nop  */
  /* nop */
L_113dbd8c:;
  /* 113dbd8c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113dbd8e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113dbd90 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 113dbd93 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 113dbd96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbd99 pop esi */
  ESI = (pop32());
  /* 113dbd9a pop edi */
  EDI = (pop32());
  /* 113dbd9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113dbd9c ret  */
  ESPCHK(0x113dbc20u, _esp0);
  ESP += 4; return;
  /* 113dbd9d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113dbda0:;
  /* 113dbda0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113dbda2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113dbda4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 113dbda7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 113dbdaa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 113dbdad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 113dbdb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbdb3 pop esi */
  ESI = (pop32());
  /* 113dbdb4 pop edi */
  EDI = (pop32());
  /* 113dbdb5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113dbdb6 ret  */
  ESPCHK(0x113dbc20u, _esp0);
  ESP += 4; return;
  /* 113dbdb7 nop  */
  /* nop */
L_113dbdb8:;
  /* 113dbdb8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 113dbdbc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 113dbdc0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 113dbdc6 jne 0x113dbdec */
  if (!C.zf) goto L_113dbdec;
  /* 113dbdc8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113dbdcb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 113dbdce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbdd1 jb 0x113dbde0 */
  if (C.cf) goto L_113dbde0;
  /* 113dbdd3 std  */
  C.df=1;
  /* 113dbdd4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 113dbdd6 cld  */
  C.df=0;
  /* 113dbdd7 jmp dword ptr [edx*4 + 0x113dbf00] */
  switch (EDX) {
    case 0: goto L_113dbf10;
    case 1: goto L_113dbf18;
    case 2: goto L_113dbf28;
    case 3: goto L_113dbf3c;
    default: x86_unimpl("switch@0x113dbdd7 out of table"); return;
  }
  /* 113dbdde mov edi, edi */
  EDI = (EDI);
L_113dbde0:;
  /* 113dbde0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 113dbde2 jmp dword ptr [ecx*4 + 0x113dbeb0] */
  switch (ECX) {
    case 0: goto L_113dbef7;
    default: x86_unimpl("switch@0x113dbde2 out of table"); return;
  }
  /* 113dbde9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113dbdec:;
  /* 113dbdec mov eax, edi */
  EAX = (EDI);
  /* 113dbdee mov edx, 3 */
  EDX = (0x3u);
  /* 113dbdf3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbdf6 jb 0x113dbe04 */
  if (C.cf) goto L_113dbe04;
  /* 113dbdf8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 113dbdfb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dbdfd jmp dword ptr [eax*4 + 0x113dbe08] */
  switch (EAX) {
    case 1: goto L_113dbe18;
    case 2: goto L_113dbe38;
    case 3: goto L_113dbe60;
    default: x86_unimpl("switch@0x113dbdfd out of table"); return;
  }
L_113dbe04:;
  /* 113dbe04 jmp dword ptr [ecx*4 + 0x113dbf00] */
  switch (ECX) {
    case 0: goto L_113dbf10;
    case 1: goto L_113dbf18;
    case 2: goto L_113dbf28;
    case 3: goto L_113dbf3c;
    default: x86_unimpl("switch@0x113dbe04 out of table"); return;
  }
  /* 113dbe0b nop  */
  /* nop */
L_113dbe18:;
  /* 113dbe18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 113dbe1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 113dbe1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 113dbe20 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 113dbe21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113dbe24 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 113dbe25 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbe28 jb 0x113dbde0 */
  if (C.cf) goto L_113dbde0;
  /* 113dbe2a std  */
  C.df=1;
  /* 113dbe2b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 113dbe2d cld  */
  C.df=0;
  /* 113dbe2e jmp dword ptr [edx*4 + 0x113dbf00] */
  switch (EDX) {
    case 0: goto L_113dbf10;
    case 1: goto L_113dbf18;
    case 2: goto L_113dbf28;
    case 3: goto L_113dbf3c;
    default: x86_unimpl("switch@0x113dbe2e out of table"); return;
  }
  /* 113dbe35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113dbe38:;
  /* 113dbe38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 113dbe3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 113dbe3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 113dbe40 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 113dbe43 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113dbe46 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 113dbe49 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dbe4c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dbe4f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbe52 jb 0x113dbde0 */
  if (C.cf) goto L_113dbde0;
  /* 113dbe54 std  */
  C.df=1;
  /* 113dbe55 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 113dbe57 cld  */
  C.df=0;
  /* 113dbe58 jmp dword ptr [edx*4 + 0x113dbf00] */
  switch (EDX) {
    case 0: goto L_113dbf10;
    case 1: goto L_113dbf18;
    case 2: goto L_113dbf28;
    case 3: goto L_113dbf3c;
    default: x86_unimpl("switch@0x113dbe58 out of table"); return;
  }
  /* 113dbe5f nop  */
  /* nop */
L_113dbe60:;
  /* 113dbe60 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 113dbe63 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 113dbe65 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 113dbe68 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 113dbe6b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 113dbe6e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 113dbe71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113dbe74 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 113dbe77 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dbe7a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dbe7d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbe80 jb 0x113dbde0 */
  if (C.cf) goto L_113dbde0;
  /* 113dbe86 std  */
  C.df=1;
  /* 113dbe87 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 113dbe89 cld  */
  C.df=0;
  /* 113dbe8a jmp dword ptr [edx*4 + 0x113dbf00] */
  switch (EDX) {
    case 0: goto L_113dbf10;
    case 1: goto L_113dbf18;
    case 2: goto L_113dbf28;
    case 3: goto L_113dbf3c;
    default: x86_unimpl("switch@0x113dbe8a out of table"); return;
  }
  /* 113dbe91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 113dbe94 mov ah, 0xbe */
  AH = (0xbeu);
  /* 113dbe96 cmp eax, 0x3dbebc11 */
  { uint32_t _a=(EAX),_b=(0x3dbebc11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbe9b adc esp, eax */
  { uint32_t _a=(ESP),_b=(EAX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbe9d mov esi, 0xbecc113d */
  ESI = (0xbecc113du);
  /* 113dbea2 cmp eax, 0x3dbed411 */
  { uint32_t _a=(EAX),_b=(0x3dbed411u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbea7 adc esp, ebx */
  { uint32_t _a=(ESP),_b=(EBX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbea9 mov esi, 0xbee4113d */
  ESI = (0xbee4113du);
  /* 113dbeb4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 113dbeb8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 113dbebc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 113dbec0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 113dbec4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 113dbec8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 113dbecc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 113dbed0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 113dbed4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 113dbed8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 113dbedc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 113dbee0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 113dbee4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 113dbee8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 113dbeec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 113dbef3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbef5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_113dbef7:;
  /* 113dbef7 jmp dword ptr [edx*4 + 0x113dbf00] */
  switch (EDX) {
    case 0: goto L_113dbf10;
    case 1: goto L_113dbf18;
    case 2: goto L_113dbf28;
    case 3: goto L_113dbf3c;
    default: x86_unimpl("switch@0x113dbef7 out of table"); return;
  }
  /* 113dbefe mov edi, edi */
  EDI = (EDI);
L_113dbf10:;
  /* 113dbf10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbf13 pop esi */
  ESI = (pop32());
  /* 113dbf14 pop edi */
  EDI = (pop32());
  /* 113dbf15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113dbf16 ret  */
  ESPCHK(0x113dbc20u, _esp0);
  ESP += 4; return;
  /* 113dbf17 nop  */
  /* nop */
L_113dbf18:;
  /* 113dbf18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 113dbf1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 113dbf1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbf21 pop esi */
  ESI = (pop32());
  /* 113dbf22 pop edi */
  EDI = (pop32());
  /* 113dbf23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113dbf24 ret  */
  ESPCHK(0x113dbc20u, _esp0);
  ESP += 4; return;
  /* 113dbf25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113dbf28:;
  /* 113dbf28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 113dbf2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 113dbf2e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 113dbf31 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 113dbf34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbf37 pop esi */
  ESI = (pop32());
  /* 113dbf38 pop edi */
  EDI = (pop32());
  /* 113dbf39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113dbf3a ret  */
  ESPCHK(0x113dbc20u, _esp0);
  ESP += 4; return;
  /* 113dbf3b nop  */
  /* nop */
L_113dbf3c:;
  /* 113dbf3c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 113dbf3f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 113dbf42 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 113dbf45 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 113dbf48 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 113dbf4b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 113dbf4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dbf51 pop esi */
  ESI = (pop32());
  /* 113dbf52 pop edi */
  EDI = (pop32());
  /* 113dbf53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113dbf54 ret  */
  ESPCHK(0x113dbc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf60 @ 0x113dbf60 (421 bytes, 148 insns) */
void f_113dbf60(void) {
  FTRACE(0x113dbf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dbf60 push ebp */
  push32((uint32_t)(EBP));
  /* 113dbf61 mov ebp, esp */
  EBP = (ESP);
  /* 113dbf63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113dbf65 push 0x113faff8 */
  push32((uint32_t)(0x113faff8u));
  /* 113dbf6a push 0x113dce38 */
  push32((uint32_t)(0x113dce38u));
  /* 113dbf6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 113dbf75 push eax */
  push32((uint32_t)(EAX));
  /* 113dbf76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 113dbf7d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dbf80 push ebx */
  push32((uint32_t)(EBX));
  /* 113dbf81 push esi */
  push32((uint32_t)(ESI));
  /* 113dbf82 push edi */
  push32((uint32_t)(EDI));
  /* 113dbf83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113dbf86 cmp dword ptr [0x113ff70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbf8d jne 0x113dbfde */
  if (!C.zf) goto L_113dbfde;
  /* 113dbf8f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 113dbf92 push eax */
  push32((uint32_t)(EAX));
  /* 113dbf93 push 1 */
  push32((uint32_t)(0x1u));
  /* 113dbf95 push 0x113faff4 */
  push32((uint32_t)(0x113faff4u));
  /* 113dbf9a push 1 */
  push32((uint32_t)(0x1u));
  /* 113dbf9c call dword ptr [0x114022f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022f4))), 0x113dbfa2u);
  /* 113dbfa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dbfa4 je 0x113dbfb2 */
  if (C.zf) goto L_113dbfb2;
  /* 113dbfa6 mov dword ptr [0x113ff70c], 1 */
  w32((uint32_t)(0x113ff70c), (0x1u));
  /* 113dbfb0 jmp 0x113dbfde */
  goto L_113dbfde;
L_113dbfb2:;
  /* 113dbfb2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 113dbfb5 push ecx */
  push32((uint32_t)(ECX));
  /* 113dbfb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113dbfb8 push 0x113faff0 */
  push32((uint32_t)(0x113faff0u));
  /* 113dbfbd push 1 */
  push32((uint32_t)(0x1u));
  /* 113dbfbf push 0 */
  push32((uint32_t)(0x0u));
  /* 113dbfc1 call dword ptr [0x11402304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402304))), 0x113dbfc7u);
  /* 113dbfc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dbfc9 je 0x113dbfd7 */
  if (C.zf) goto L_113dbfd7;
  /* 113dbfcb mov dword ptr [0x113ff70c], 2 */
  w32((uint32_t)(0x113ff70c), (0x2u));
  /* 113dbfd5 jmp 0x113dbfde */
  goto L_113dbfde;
L_113dbfd7:;
  /* 113dbfd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dbfd9 jmp 0x113dc108 */
  goto L_113dc108;
L_113dbfde:;
  /* 113dbfde cmp dword ptr [0x113ff70c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x113ff70c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbfe5 jne 0x113dc015 */
  if (!C.zf) goto L_113dc015;
  /* 113dbfe7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dbfeb jne 0x113dbff6 */
  if (!C.zf) goto L_113dbff6;
  /* 113dbfed mov edx, dword ptr [0x113ff718] */
  EDX = (r32((uint32_t)(0x113ff718)));
  /* 113dbff3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_113dbff6:;
  /* 113dbff6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113dbff9 push eax */
  push32((uint32_t)(EAX));
  /* 113dbffa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dbffd push ecx */
  push32((uint32_t)(ECX));
  /* 113dbffe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dc001 push edx */
  push32((uint32_t)(EDX));
  /* 113dc002 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc005 push eax */
  push32((uint32_t)(EAX));
  /* 113dc006 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 113dc009 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc00a call dword ptr [0x11402304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402304))), 0x113dc010u);
  /* 113dc010 jmp 0x113dc108 */
  goto L_113dc108;
L_113dc015:;
  /* 113dc015 cmp dword ptr [0x113ff70c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113ff70c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc01c jne 0x113dc106 */
  if (!C.zf) goto L_113dc106;
  /* 113dc022 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc026 jne 0x113dc031 */
  if (!C.zf) goto L_113dc031;
  /* 113dc028 mov edx, dword ptr [0x113ff728] */
  EDX = (r32((uint32_t)(0x113ff728)));
  /* 113dc02e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_113dc031:;
  /* 113dc031 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc033 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc035 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dc038 push eax */
  push32((uint32_t)(EAX));
  /* 113dc039 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dc03c push ecx */
  push32((uint32_t)(ECX));
  /* 113dc03d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 113dc040 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 113dc042 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dc044 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 113dc047 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc04a push edx */
  push32((uint32_t)(EDX));
  /* 113dc04b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113dc04e push eax */
  push32((uint32_t)(EAX));
  /* 113dc04f call dword ptr [0x114022fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022fc))), 0x113dc055u);
  /* 113dc055 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113dc058 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc05c jne 0x113dc065 */
  if (!C.zf) goto L_113dc065;
  /* 113dc05e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dc060 jmp 0x113dc108 */
  goto L_113dc108;
L_113dc065:;
  /* 113dc065 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113dc06c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113dc06f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113dc071 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc074 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 113dc076 call 0x113d6ed0 */
  push32(0x113dc07bu); f_113d6ed0();
  /* 113dc07b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 113dc07e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113dc081 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113dc084 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 113dc087 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 113dc08a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 113dc08c push edx */
  push32((uint32_t)(EDX));
  /* 113dc08d push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc08f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113dc092 push eax */
  push32((uint32_t)(EAX));
  /* 113dc093 call 0x113d7aa0 */
  push32(0x113dc098u); f_113d7aa0();
  /* 113dc098 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc09b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113dc0a2 jmp 0x113dc0bb */
  goto L_113dc0bb;
  /* 113dc0a4 mov eax, 1 */
  EAX = (0x1u);
  /* 113dc0a9 ret  */
  ESPCHK(0x113dbf60u, _esp0);
  ESP += 4; return;
  /* 113dc0aa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 113dc0ad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 113dc0b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113dc0bb:;
  /* 113dc0bb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc0bf jne 0x113dc0c5 */
  if (!C.zf) goto L_113dc0c5;
  /* 113dc0c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dc0c3 jmp 0x113dc108 */
  goto L_113dc108;
L_113dc0c5:;
  /* 113dc0c5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113dc0c8 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc0c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113dc0cc push edx */
  push32((uint32_t)(EDX));
  /* 113dc0cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dc0d0 push eax */
  push32((uint32_t)(EAX));
  /* 113dc0d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dc0d4 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc0d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 113dc0d7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113dc0da push edx */
  push32((uint32_t)(EDX));
  /* 113dc0db call dword ptr [0x114022fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022fc))), 0x113dc0e1u);
  /* 113dc0e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 113dc0e4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc0e8 jne 0x113dc0ee */
  if (!C.zf) goto L_113dc0ee;
  /* 113dc0ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dc0ec jmp 0x113dc108 */
  goto L_113dc108;
L_113dc0ee:;
  /* 113dc0ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113dc0f1 push eax */
  push32((uint32_t)(EAX));
  /* 113dc0f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113dc0f5 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc0f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113dc0f9 push edx */
  push32((uint32_t)(EDX));
  /* 113dc0fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc0fd push eax */
  push32((uint32_t)(EAX));
  /* 113dc0fe call dword ptr [0x114022f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022f4))), 0x113dc104u);
  /* 113dc104 jmp 0x113dc108 */
  goto L_113dc108;
L_113dc106:;
  /* 113dc106 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113dc108:;
  /* 113dc108 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 113dc10b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113dc10e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 113dc115 pop edi */
  EDI = (pop32());
  /* 113dc116 pop esi */
  ESI = (pop32());
  /* 113dc117 pop ebx */
  EBX = (pop32());
  /* 113dc118 mov esp, ebp */
  ESP = (EBP);
  /* 113dc11a pop ebp */
  EBP = (pop32());
  /* 113dc11b ret  */
  ESPCHK(0x113dbf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c120 @ 0x113dc120 (727 bytes, 263 insns) */
void f_113dc120(void) {
  FTRACE(0x113dc120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dc120 push ebp */
  push32((uint32_t)(EBP));
  /* 113dc121 mov ebp, esp */
  EBP = (ESP);
  /* 113dc123 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113dc125 push 0x113fb008 */
  push32((uint32_t)(0x113fb008u));
  /* 113dc12a push 0x113dce38 */
  push32((uint32_t)(0x113dce38u));
  /* 113dc12f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 113dc135 push eax */
  push32((uint32_t)(EAX));
  /* 113dc136 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 113dc13d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc140 push ebx */
  push32((uint32_t)(EBX));
  /* 113dc141 push esi */
  push32((uint32_t)(ESI));
  /* 113dc142 push edi */
  push32((uint32_t)(EDI));
  /* 113dc143 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113dc146 cmp dword ptr [0x113ff730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc14d jne 0x113dc1a6 */
  if (!C.zf) goto L_113dc1a6;
  /* 113dc14f push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc151 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc153 push 1 */
  push32((uint32_t)(0x1u));
  /* 113dc155 push 0x113faff4 */
  push32((uint32_t)(0x113faff4u));
  /* 113dc15a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113dc15f push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc161 call dword ptr [0x114022f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022f8))), 0x113dc167u);
  /* 113dc167 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dc169 je 0x113dc177 */
  if (C.zf) goto L_113dc177;
  /* 113dc16b mov dword ptr [0x113ff730], 1 */
  w32((uint32_t)(0x113ff730), (0x1u));
  /* 113dc175 jmp 0x113dc1a6 */
  goto L_113dc1a6;
L_113dc177:;
  /* 113dc177 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc179 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc17b push 1 */
  push32((uint32_t)(0x1u));
  /* 113dc17d push 0x113faff0 */
  push32((uint32_t)(0x113faff0u));
  /* 113dc182 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113dc187 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc189 call dword ptr [0x114022f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022f0))), 0x113dc18fu);
  /* 113dc18f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dc191 je 0x113dc19f */
  if (C.zf) goto L_113dc19f;
  /* 113dc193 mov dword ptr [0x113ff730], 2 */
  w32((uint32_t)(0x113ff730), (0x2u));
  /* 113dc19d jmp 0x113dc1a6 */
  goto L_113dc1a6;
L_113dc19f:;
  /* 113dc19f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dc1a1 jmp 0x113dc411 */
  goto L_113dc411;
L_113dc1a6:;
  /* 113dc1a6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc1aa jle 0x113dc1bf */
  if ((C.zf||C.sf!=C.of)) goto L_113dc1bf;
  /* 113dc1ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113dc1af push eax */
  push32((uint32_t)(EAX));
  /* 113dc1b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dc1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc1b4 call 0x113dc430 */
  push32(0x113dc1b9u); f_113dc430();
  /* 113dc1b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc1bc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_113dc1bf:;
  /* 113dc1bf cmp dword ptr [0x113ff730], 2 */
  { uint32_t _a=(r32((uint32_t)(0x113ff730))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc1c6 jne 0x113dc1eb */
  if (!C.zf) goto L_113dc1eb;
  /* 113dc1c8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 113dc1cb push edx */
  push32((uint32_t)(EDX));
  /* 113dc1cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113dc1cf push eax */
  push32((uint32_t)(EAX));
  /* 113dc1d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113dc1d3 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc1d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dc1d7 push edx */
  push32((uint32_t)(EDX));
  /* 113dc1d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dc1db push eax */
  push32((uint32_t)(EAX));
  /* 113dc1dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc1df push ecx */
  push32((uint32_t)(ECX));
  /* 113dc1e0 call dword ptr [0x114022f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022f0))), 0x113dc1e6u);
  /* 113dc1e6 jmp 0x113dc411 */
  goto L_113dc411;
L_113dc1eb:;
  /* 113dc1eb cmp dword ptr [0x113ff730], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113ff730))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc1f2 jne 0x113dc40f */
  if (!C.zf) goto L_113dc40f;
  /* 113dc1f8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc1fc jne 0x113dc207 */
  if (!C.zf) goto L_113dc207;
  /* 113dc1fe mov edx, dword ptr [0x113ff728] */
  EDX = (r32((uint32_t)(0x113ff728)));
  /* 113dc204 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_113dc207:;
  /* 113dc207 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc209 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc20b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113dc20e push eax */
  push32((uint32_t)(EAX));
  /* 113dc20f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dc212 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc213 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 113dc216 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 113dc218 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dc21a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 113dc21d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc220 push edx */
  push32((uint32_t)(EDX));
  /* 113dc221 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 113dc224 push eax */
  push32((uint32_t)(EAX));
  /* 113dc225 call dword ptr [0x114022fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022fc))), 0x113dc22bu);
  /* 113dc22b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 113dc22e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc232 jne 0x113dc23b */
  if (!C.zf) goto L_113dc23b;
  /* 113dc234 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dc236 jmp 0x113dc411 */
  goto L_113dc411;
L_113dc23b:;
  /* 113dc23b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113dc242 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113dc245 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113dc247 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc24a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 113dc24c call 0x113d6ed0 */
  push32(0x113dc251u); f_113d6ed0();
  /* 113dc251 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 113dc254 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113dc257 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113dc25a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 113dc25d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113dc264 jmp 0x113dc27d */
  goto L_113dc27d;
  /* 113dc266 mov eax, 1 */
  EAX = (0x1u);
  /* 113dc26b ret  */
  ESPCHK(0x113dc120u, _esp0);
  ESP += 4; return;
  /* 113dc26c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 113dc26f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 113dc276 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113dc27d:;
  /* 113dc27d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc281 jne 0x113dc28a */
  if (!C.zf) goto L_113dc28a;
  /* 113dc283 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dc285 jmp 0x113dc411 */
  goto L_113dc411;
L_113dc28a:;
  /* 113dc28a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113dc28d push edx */
  push32((uint32_t)(EDX));
  /* 113dc28e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113dc291 push eax */
  push32((uint32_t)(EAX));
  /* 113dc292 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113dc295 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc296 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dc299 push edx */
  push32((uint32_t)(EDX));
  /* 113dc29a push 1 */
  push32((uint32_t)(0x1u));
  /* 113dc29c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 113dc29f push eax */
  push32((uint32_t)(EAX));
  /* 113dc2a0 call dword ptr [0x114022fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022fc))), 0x113dc2a6u);
  /* 113dc2a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dc2a8 jne 0x113dc2b1 */
  if (!C.zf) goto L_113dc2b1;
  /* 113dc2aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dc2ac jmp 0x113dc411 */
  goto L_113dc411;
L_113dc2b1:;
  /* 113dc2b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc2b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc2b5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113dc2b8 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc2b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113dc2bc push edx */
  push32((uint32_t)(EDX));
  /* 113dc2bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dc2c0 push eax */
  push32((uint32_t)(EAX));
  /* 113dc2c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc2c4 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc2c5 call dword ptr [0x114022f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022f8))), 0x113dc2cbu);
  /* 113dc2cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 113dc2ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc2d2 jne 0x113dc2db */
  if (!C.zf) goto L_113dc2db;
  /* 113dc2d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dc2d6 jmp 0x113dc411 */
  goto L_113dc411;
L_113dc2db:;
  /* 113dc2db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dc2de and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 113dc2e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113dc2e6 je 0x113dc32b */
  if (C.zf) goto L_113dc32b;
  /* 113dc2e8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc2ec je 0x113dc326 */
  if (C.zf) goto L_113dc326;
  /* 113dc2ee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113dc2f1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc2f4 jle 0x113dc2fd */
  if ((C.zf||C.sf!=C.of)) goto L_113dc2fd;
  /* 113dc2f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dc2f8 jmp 0x113dc411 */
  goto L_113dc411;
L_113dc2fd:;
  /* 113dc2fd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 113dc300 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc301 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113dc304 push edx */
  push32((uint32_t)(EDX));
  /* 113dc305 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113dc308 push eax */
  push32((uint32_t)(EAX));
  /* 113dc309 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113dc30c push ecx */
  push32((uint32_t)(ECX));
  /* 113dc30d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dc310 push edx */
  push32((uint32_t)(EDX));
  /* 113dc311 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc314 push eax */
  push32((uint32_t)(EAX));
  /* 113dc315 call dword ptr [0x114022f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022f8))), 0x113dc31bu);
  /* 113dc31b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dc31d jne 0x113dc326 */
  if (!C.zf) goto L_113dc326;
  /* 113dc31f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dc321 jmp 0x113dc411 */
  goto L_113dc411;
L_113dc326:;
  /* 113dc326 jmp 0x113dc40a */
  goto L_113dc40a;
L_113dc32b:;
  /* 113dc32b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113dc32e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 113dc331 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113dc338 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113dc33b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113dc33d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc340 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 113dc342 call 0x113d6ed0 */
  push32(0x113dc347u); f_113d6ed0();
  /* 113dc347 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 113dc34a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113dc34d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 113dc350 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 113dc353 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113dc35a jmp 0x113dc373 */
  goto L_113dc373;
  /* 113dc35c mov eax, 1 */
  EAX = (0x1u);
  /* 113dc361 ret  */
  ESPCHK(0x113dc120u, _esp0);
  ESP += 4; return;
  /* 113dc362 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 113dc365 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 113dc36c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113dc373:;
  /* 113dc373 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc377 jne 0x113dc380 */
  if (!C.zf) goto L_113dc380;
  /* 113dc379 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dc37b jmp 0x113dc411 */
  goto L_113dc411;
L_113dc380:;
  /* 113dc380 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113dc383 push eax */
  push32((uint32_t)(EAX));
  /* 113dc384 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113dc387 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc388 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113dc38b push edx */
  push32((uint32_t)(EDX));
  /* 113dc38c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113dc38f push eax */
  push32((uint32_t)(EAX));
  /* 113dc390 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dc393 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc394 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc397 push edx */
  push32((uint32_t)(EDX));
  /* 113dc398 call dword ptr [0x114022f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022f8))), 0x113dc39eu);
  /* 113dc39e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dc3a0 jne 0x113dc3a6 */
  if (!C.zf) goto L_113dc3a6;
  /* 113dc3a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dc3a4 jmp 0x113dc411 */
  goto L_113dc411;
L_113dc3a6:;
  /* 113dc3a6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc3aa jne 0x113dc3da */
  if (!C.zf) goto L_113dc3da;
  /* 113dc3ac push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc3ae push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc3b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc3b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc3b4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113dc3b7 push eax */
  push32((uint32_t)(EAX));
  /* 113dc3b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113dc3bb push ecx */
  push32((uint32_t)(ECX));
  /* 113dc3bc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 113dc3c1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 113dc3c4 push edx */
  push32((uint32_t)(EDX));
  /* 113dc3c5 call dword ptr [0x114023b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023b8))), 0x113dc3cbu);
  /* 113dc3cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 113dc3ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc3d2 jne 0x113dc3d8 */
  if (!C.zf) goto L_113dc3d8;
  /* 113dc3d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dc3d6 jmp 0x113dc411 */
  goto L_113dc411;
L_113dc3d8:;
  /* 113dc3d8 jmp 0x113dc40a */
  goto L_113dc40a;
L_113dc3da:;
  /* 113dc3da push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc3dc push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc3de mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 113dc3e1 push eax */
  push32((uint32_t)(EAX));
  /* 113dc3e2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113dc3e5 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc3e6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113dc3e9 push edx */
  push32((uint32_t)(EDX));
  /* 113dc3ea mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113dc3ed push eax */
  push32((uint32_t)(EAX));
  /* 113dc3ee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 113dc3f3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 113dc3f6 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc3f7 call dword ptr [0x114023b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023b8))), 0x113dc3fdu);
  /* 113dc3fd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 113dc400 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc404 jne 0x113dc40a */
  if (!C.zf) goto L_113dc40a;
  /* 113dc406 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dc408 jmp 0x113dc411 */
  goto L_113dc411;
L_113dc40a:;
  /* 113dc40a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113dc40d jmp 0x113dc411 */
  goto L_113dc411;
L_113dc40f:;
  /* 113dc40f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113dc411:;
  /* 113dc411 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 113dc414 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113dc417 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 113dc41e pop edi */
  EDI = (pop32());
  /* 113dc41f pop esi */
  ESI = (pop32());
  /* 113dc420 pop ebx */
  EBX = (pop32());
  /* 113dc421 mov esp, ebp */
  ESP = (EBP);
  /* 113dc423 pop ebp */
  EBP = (pop32());
  /* 113dc424 ret  */
  ESPCHK(0x113dc120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c430 @ 0x113dc430 (80 bytes, 32 insns) */
void f_113dc430(void) {
  FTRACE(0x113dc430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dc430 push ebp */
  push32((uint32_t)(EBP));
  /* 113dc431 mov ebp, esp */
  EBP = (ESP);
  /* 113dc433 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dc436 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dc439 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113dc43c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc43f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113dc442:;
  /* 113dc442 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dc445 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dc448 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dc44b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113dc44e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113dc450 je 0x113dc467 */
  if (C.zf) goto L_113dc467;
  /* 113dc452 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc455 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113dc458 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113dc45a je 0x113dc467 */
  if (C.zf) goto L_113dc467;
  /* 113dc45c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc45f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc462 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113dc465 jmp 0x113dc442 */
  goto L_113dc442;
L_113dc467:;
  /* 113dc467 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc46a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113dc46d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113dc46f jne 0x113dc479 */
  if (!C.zf) goto L_113dc479;
  /* 113dc471 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc474 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dc477 jmp 0x113dc47c */
  goto L_113dc47c;
L_113dc479:;
  /* 113dc479 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_113dc47c:;
  /* 113dc47c mov esp, ebp */
  ESP = (EBP);
  /* 113dc47e pop ebp */
  EBP = (pop32());
  /* 113dc47f ret  */
  ESPCHK(0x113dc430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c480 @ 0x113dc480 (130 bytes, 43 insns) */
void f_113dc480(void) {
  FTRACE(0x113dc480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dc480 push ebp */
  push32((uint32_t)(EBP));
  /* 113dc481 mov ebp, esp */
  EBP = (ESP);
  /* 113dc483 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc484 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc487 cmp eax, dword ptr [0x1140103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1140103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc48d jae 0x113dc4b1 */
  if (!C.cf) goto L_113dc4b1;
  /* 113dc48f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc492 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113dc495 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc498 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113dc49b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dc49e mov eax, dword ptr [ecx*4 + 0x11400f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11400f00)));
  /* 113dc4a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 113dc4aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113dc4ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113dc4af jne 0x113dc4cc */
  if (!C.zf) goto L_113dc4cc;
L_113dc4b1:;
  /* 113dc4b1 call 0x113dbc00 */
  push32(0x113dc4b6u); f_113dbc00();
  /* 113dc4b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 113dc4bc call 0x113dbc10 */
  push32(0x113dc4c1u); f_113dbc10();
  /* 113dc4c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113dc4c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113dc4ca jmp 0x113dc4fe */
  goto L_113dc4fe;
L_113dc4cc:;
  /* 113dc4cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc4cf push edx */
  push32((uint32_t)(EDX));
  /* 113dc4d0 call 0x113dd420 */
  push32(0x113dc4d5u); f_113dd420();
  /* 113dc4d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc4d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dc4db push eax */
  push32((uint32_t)(EAX));
  /* 113dc4dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dc4df push ecx */
  push32((uint32_t)(ECX));
  /* 113dc4e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc4e3 push edx */
  push32((uint32_t)(EDX));
  /* 113dc4e4 call 0x113dc510 */
  push32(0x113dc4e9u); f_113dc510();
  /* 113dc4e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc4ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113dc4ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc4f2 push eax */
  push32((uint32_t)(EAX));
  /* 113dc4f3 call 0x113dd4b0 */
  push32(0x113dc4f8u); f_113dd4b0();
  /* 113dc4f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc4fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113dc4fe:;
  /* 113dc4fe mov esp, ebp */
  ESP = (EBP);
  /* 113dc500 pop ebp */
  EBP = (pop32());
  /* 113dc501 ret  */
  ESPCHK(0x113dc480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c510 @ 0x113dc510 (178 bytes, 56 insns) */
void f_113dc510(void) {
  FTRACE(0x113dc510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dc510 push ebp */
  push32((uint32_t)(EBP));
  /* 113dc511 mov ebp, esp */
  EBP = (ESP);
  /* 113dc513 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dc516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc519 push eax */
  push32((uint32_t)(EAX));
  /* 113dc51a call 0x113dd2a0 */
  push32(0x113dc51fu); f_113dd2a0();
  /* 113dc51f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc522 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113dc525 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc529 jne 0x113dc53e */
  if (!C.zf) goto L_113dc53e;
  /* 113dc52b call 0x113dbc00 */
  push32(0x113dc530u); f_113dbc00();
  /* 113dc530 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 113dc536 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113dc539 jmp 0x113dc5be */
  goto L_113dc5be;
L_113dc53e:;
  /* 113dc53e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dc541 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc542 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc544 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dc547 push edx */
  push32((uint32_t)(EDX));
  /* 113dc548 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dc54b push eax */
  push32((uint32_t)(EAX));
  /* 113dc54c call dword ptr [0x114022e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022e8))), 0x113dc552u);
  /* 113dc552 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113dc555 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc559 jne 0x113dc566 */
  if (!C.zf) goto L_113dc566;
  /* 113dc55b call dword ptr [0x11402390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402390))), 0x113dc561u);
  /* 113dc561 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113dc564 jmp 0x113dc56d */
  goto L_113dc56d;
L_113dc566:;
  /* 113dc566 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113dc56d:;
  /* 113dc56d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc571 je 0x113dc584 */
  if (C.zf) goto L_113dc584;
  /* 113dc573 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc576 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc577 call 0x113dbb60 */
  push32(0x113dc57cu); f_113dbb60();
  /* 113dc57c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc57f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113dc582 jmp 0x113dc5be */
  goto L_113dc5be;
L_113dc584:;
  /* 113dc584 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc587 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 113dc58a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc58d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 113dc590 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dc593 mov ecx, dword ptr [edx*4 + 0x11400f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11400f00)));
  /* 113dc59a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 113dc59e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 113dc5a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc5a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113dc5a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc5aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113dc5ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dc5b0 mov eax, dword ptr [eax*4 + 0x11400f00] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11400f00)));
  /* 113dc5b7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 113dc5bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_113dc5be:;
  /* 113dc5be mov esp, ebp */
  ESP = (EBP);
  /* 113dc5c0 pop ebp */
  EBP = (pop32());
  /* 113dc5c1 ret  */
  ESPCHK(0x113dc510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5d0 @ 0x113dc5d0 (130 bytes, 43 insns) */
void f_113dc5d0(void) {
  FTRACE(0x113dc5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dc5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113dc5d1 mov ebp, esp */
  EBP = (ESP);
  /* 113dc5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc5d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc5d7 cmp eax, dword ptr [0x1140103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1140103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc5dd jae 0x113dc601 */
  if (!C.cf) goto L_113dc601;
  /* 113dc5df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc5e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113dc5e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc5e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113dc5eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dc5ee mov eax, dword ptr [ecx*4 + 0x11400f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11400f00)));
  /* 113dc5f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 113dc5fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113dc5fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113dc5ff jne 0x113dc61c */
  if (!C.zf) goto L_113dc61c;
L_113dc601:;
  /* 113dc601 call 0x113dbc00 */
  push32(0x113dc606u); f_113dbc00();
  /* 113dc606 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 113dc60c call 0x113dbc10 */
  push32(0x113dc611u); f_113dbc10();
  /* 113dc611 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113dc617 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113dc61a jmp 0x113dc64e */
  goto L_113dc64e;
L_113dc61c:;
  /* 113dc61c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc61f push edx */
  push32((uint32_t)(EDX));
  /* 113dc620 call 0x113dd420 */
  push32(0x113dc625u); f_113dd420();
  /* 113dc625 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc628 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dc62b push eax */
  push32((uint32_t)(EAX));
  /* 113dc62c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dc62f push ecx */
  push32((uint32_t)(ECX));
  /* 113dc630 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc633 push edx */
  push32((uint32_t)(EDX));
  /* 113dc634 call 0x113dc660 */
  push32(0x113dc639u); f_113dc660();
  /* 113dc639 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc63c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113dc63f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc642 push eax */
  push32((uint32_t)(EAX));
  /* 113dc643 call 0x113dd4b0 */
  push32(0x113dc648u); f_113dd4b0();
  /* 113dc648 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc64b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113dc64e:;
  /* 113dc64e mov esp, ebp */
  ESP = (EBP);
  /* 113dc650 pop ebp */
  EBP = (pop32());
  /* 113dc651 ret  */
  ESPCHK(0x113dc5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c660 @ 0x113dc660 (627 bytes, 182 insns) */
void f_113dc660(void) {
  FTRACE(0x113dc660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dc660 push ebp */
  push32((uint32_t)(EBP));
  /* 113dc661 mov ebp, esp */
  EBP = (ESP);
  /* 113dc663 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dc669 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113dc670 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113dc673 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 113dc679 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc67d jne 0x113dc686 */
  if (!C.zf) goto L_113dc686;
  /* 113dc67f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dc681 jmp 0x113dc8cf */
  goto L_113dc8cf;
L_113dc686:;
  /* 113dc686 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc689 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113dc68c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc68f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113dc692 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dc695 mov eax, dword ptr [ecx*4 + 0x11400f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11400f00)));
  /* 113dc69c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 113dc6a1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 113dc6a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113dc6a6 je 0x113dc6b8 */
  if (C.zf) goto L_113dc6b8;
  /* 113dc6a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dc6aa push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc6ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc6af push edx */
  push32((uint32_t)(EDX));
  /* 113dc6b0 call 0x113dc510 */
  push32(0x113dc6b5u); f_113dc510();
  /* 113dc6b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113dc6b8:;
  /* 113dc6b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc6bb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113dc6be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc6c1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113dc6c4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dc6c7 mov edx, dword ptr [eax*4 + 0x11400f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11400f00)));
  /* 113dc6ce movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 113dc6d3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 113dc6d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dc6da je 0x113dc7ec */
  if (C.zf) goto L_113dc7ec;
  /* 113dc6e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dc6e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113dc6e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_113dc6ed:;
  /* 113dc6ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc6f0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dc6f3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc6f6 jae 0x113dc7ea */
  if (!C.cf) goto L_113dc7ea;
  /* 113dc6fc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 113dc702 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113dc705:;
  /* 113dc705 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dc708 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 113dc70e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dc710 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc716 jge 0x113dc777 */
  if ((C.sf==C.of)) goto L_113dc777;
  /* 113dc718 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc71b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dc71e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc721 jae 0x113dc777 */
  if (!C.cf) goto L_113dc777;
  /* 113dc723 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc726 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113dc728 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 113dc72e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc731 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc734 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113dc737 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 113dc73e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc741 jne 0x113dc761 */
  if (!C.zf) goto L_113dc761;
  /* 113dc743 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 113dc749 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc74c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 113dc752 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dc755 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 113dc758 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dc75b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc75e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_113dc761:;
  /* 113dc761 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dc764 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 113dc76a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 113dc76c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dc76f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc772 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113dc775 jmp 0x113dc705 */
  goto L_113dc705;
L_113dc777:;
  /* 113dc777 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc779 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 113dc77f push edx */
  push32((uint32_t)(EDX));
  /* 113dc780 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dc783 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 113dc789 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dc78b push eax */
  push32((uint32_t)(EAX));
  /* 113dc78c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 113dc792 push edx */
  push32((uint32_t)(EDX));
  /* 113dc793 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc796 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113dc799 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc79c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113dc79f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dc7a2 mov edx, dword ptr [eax*4 + 0x11400f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11400f00)));
  /* 113dc7a9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 113dc7ac push eax */
  push32((uint32_t)(EAX));
  /* 113dc7ad call dword ptr [0x11402350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402350))), 0x113dc7b3u);
  /* 113dc7b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dc7b5 je 0x113dc7da */
  if (C.zf) goto L_113dc7da;
  /* 113dc7b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113dc7ba add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc7c0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113dc7c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dc7c6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 113dc7cc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dc7ce cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc7d4 jge 0x113dc7d8 */
  if ((C.sf==C.of)) goto L_113dc7d8;
  /* 113dc7d6 jmp 0x113dc7ea */
  goto L_113dc7ea;
L_113dc7d8:;
  /* 113dc7d8 jmp 0x113dc7e5 */
  goto L_113dc7e5;
L_113dc7da:;
  /* 113dc7da call dword ptr [0x11402390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402390))), 0x113dc7e0u);
  /* 113dc7e0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113dc7e3 jmp 0x113dc7ea */
  goto L_113dc7ea;
L_113dc7e5:;
  /* 113dc7e5 jmp 0x113dc6ed */
  goto L_113dc6ed;
L_113dc7ea:;
  /* 113dc7ea jmp 0x113dc83c */
  goto L_113dc83c;
L_113dc7ec:;
  /* 113dc7ec push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc7ee lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 113dc7f4 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc7f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dc7f8 push edx */
  push32((uint32_t)(EDX));
  /* 113dc7f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dc7fc push eax */
  push32((uint32_t)(EAX));
  /* 113dc7fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc800 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113dc803 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc806 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113dc809 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dc80c mov eax, dword ptr [ecx*4 + 0x11400f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11400f00)));
  /* 113dc813 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 113dc816 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc817 call dword ptr [0x11402350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402350))), 0x113dc81du);
  /* 113dc81d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dc81f je 0x113dc833 */
  if (C.zf) goto L_113dc833;
  /* 113dc821 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113dc828 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 113dc82e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 113dc831 jmp 0x113dc83c */
  goto L_113dc83c;
L_113dc833:;
  /* 113dc833 call dword ptr [0x11402390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402390))), 0x113dc839u);
  /* 113dc839 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_113dc83c:;
  /* 113dc83c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc840 jne 0x113dc8c6 */
  if (!C.zf) goto L_113dc8c6;
  /* 113dc846 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc84a je 0x113dc87a */
  if (C.zf) goto L_113dc87a;
  /* 113dc84c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc850 jne 0x113dc869 */
  if (!C.zf) goto L_113dc869;
  /* 113dc852 call 0x113dbc00 */
  push32(0x113dc857u); f_113dbc00();
  /* 113dc857 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 113dc85d call 0x113dbc10 */
  push32(0x113dc862u); f_113dbc10();
  /* 113dc862 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dc865 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 113dc867 jmp 0x113dc875 */
  goto L_113dc875;
L_113dc869:;
  /* 113dc869 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dc86c push edx */
  push32((uint32_t)(EDX));
  /* 113dc86d call 0x113dbb60 */
  push32(0x113dc872u); f_113dbb60();
  /* 113dc872 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113dc875:;
  /* 113dc875 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113dc878 jmp 0x113dc8cf */
  goto L_113dc8cf;
L_113dc87a:;
  /* 113dc87a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc87d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113dc880 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc883 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113dc886 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dc889 mov edx, dword ptr [eax*4 + 0x11400f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11400f00)));
  /* 113dc890 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 113dc895 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 113dc898 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dc89a je 0x113dc8ab */
  if (C.zf) goto L_113dc8ab;
  /* 113dc89c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dc89f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113dc8a2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc8a5 jne 0x113dc8ab */
  if (!C.zf) goto L_113dc8ab;
  /* 113dc8a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dc8a9 jmp 0x113dc8cf */
  goto L_113dc8cf;
L_113dc8ab:;
  /* 113dc8ab call 0x113dbc00 */
  push32(0x113dc8b0u); f_113dbc00();
  /* 113dc8b0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 113dc8b6 call 0x113dbc10 */
  push32(0x113dc8bbu); f_113dbc10();
  /* 113dc8bb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113dc8c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113dc8c4 jmp 0x113dc8cf */
  goto L_113dc8cf;
L_113dc8c6:;
  /* 113dc8c6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113dc8c9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_113dc8cf:;
  /* 113dc8cf mov esp, ebp */
  ESP = (EBP);
  /* 113dc8d1 pop ebp */
  EBP = (pop32());
  /* 113dc8d2 ret  */
  ESPCHK(0x113dc660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8e0 @ 0x113dc8e0 (199 bytes, 68 insns) */
void f_113dc8e0(void) {
  FTRACE(0x113dc8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dc8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113dc8e1 mov ebp, esp */
  EBP = (ESP);
  /* 113dc8e3 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc8e4 push ebx */
  push32((uint32_t)(EBX));
  /* 113dc8e5 push esi */
  push32((uint32_t)(ESI));
  /* 113dc8e6 push edi */
  push32((uint32_t)(EDI));
L_113dc8e7:;
  /* 113dc8e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc8eb jne 0x113dc90b */
  if (!C.zf) goto L_113dc90b;
  /* 113dc8ed push 0x113faf54 */
  push32((uint32_t)(0x113faf54u));
  /* 113dc8f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dc8f4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 113dc8f6 push 0x113fb020 */
  push32((uint32_t)(0x113fb020u));
  /* 113dc8fb push 2 */
  push32((uint32_t)(0x2u));
  /* 113dc8fd call 0x113d2df0 */
  push32(0x113dc902u); f_113d2df0();
  /* 113dc902 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc905 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc908 jne 0x113dc90b */
  if (!C.zf) goto L_113dc90b;
  /* 113dc90a int3  */
  x86_unimpl("int3 @ 0x113dc90a");
L_113dc90b:;
  /* 113dc90b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dc90d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dc90f jne 0x113dc8e7 */
  if (!C.zf) goto L_113dc8e7;
  /* 113dc911 mov ecx, dword ptr [0x113ff734] */
  ECX = (r32((uint32_t)(0x113ff734)));
  /* 113dc917 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc91a mov dword ptr [0x113ff734], ecx */
  w32((uint32_t)(0x113ff734), (ECX));
  /* 113dc920 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc923 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113dc926 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 113dc928 push 0x113fb020 */
  push32((uint32_t)(0x113fb020u));
  /* 113dc92d push 2 */
  push32((uint32_t)(0x2u));
  /* 113dc92f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 113dc934 call 0x113d3d30 */
  push32(0x113dc939u); f_113d3d30();
  /* 113dc939 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc93c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc93f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 113dc942 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc945 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc949 je 0x113dc966 */
  if (C.zf) goto L_113dc966;
  /* 113dc94b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc94e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113dc951 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 113dc954 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc957 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 113dc95a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc95d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 113dc964 jmp 0x113dc98b */
  goto L_113dc98b;
L_113dc966:;
  /* 113dc966 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc969 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113dc96c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 113dc96f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc972 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 113dc975 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc978 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dc97b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc97e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 113dc981 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc984 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_113dc98b:;
  /* 113dc98b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc98e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc991 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113dc994 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113dc996 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dc999 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 113dc9a0 pop edi */
  EDI = (pop32());
  /* 113dc9a1 pop esi */
  ESI = (pop32());
  /* 113dc9a2 pop ebx */
  EBX = (pop32());
  /* 113dc9a3 mov esp, ebp */
  ESP = (EBP);
  /* 113dc9a5 pop ebp */
  EBP = (pop32());
  /* 113dc9a6 ret  */
  ESPCHK(0x113dc8e0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x113dc9b0 (50 bytes, 17 insns) */
void f_113dc9b0(void) {
  FTRACE(0x113dc9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dc9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113dc9b1 mov ebp, esp */
  EBP = (ESP);
  /* 113dc9b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc9b6 cmp eax, dword ptr [0x1140103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1140103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc9bc jb 0x113dc9c2 */
  if (C.cf) goto L_113dc9c2;
  /* 113dc9be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dc9c0 jmp 0x113dc9e0 */
  goto L_113dc9e0;
L_113dc9c2:;
  /* 113dc9c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc9c5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113dc9c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dc9cb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113dc9ce imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dc9d1 mov eax, dword ptr [ecx*4 + 0x11400f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11400f00)));
  /* 113dc9d8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 113dc9dd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_113dc9e0:;
  /* 113dc9e0 pop ebp */
  EBP = (pop32());
  /* 113dc9e1 ret  */
  ESPCHK(0x113dc9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9f0 @ 0x113dc9f0 (300 bytes, 80 insns) */
void f_113dc9f0(void) {
  FTRACE(0x113dc9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dc9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113dc9f1 mov ebp, esp */
  EBP = (ESP);
  /* 113dc9f3 push ecx */
  push32((uint32_t)(ECX));
  /* 113dc9f4 cmp dword ptr [0x11400c00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11400c00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dc9fb jne 0x113dca09 */
  if (!C.zf) goto L_113dca09;
  /* 113dc9fd mov dword ptr [0x11400c00], 0x200 */
  w32((uint32_t)(0x11400c00), (0x200u));
  /* 113dca07 jmp 0x113dca1c */
  goto L_113dca1c;
L_113dca09:;
  /* 113dca09 cmp dword ptr [0x11400c00], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11400c00))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dca10 jge 0x113dca1c */
  if ((C.sf==C.of)) goto L_113dca1c;
  /* 113dca12 mov dword ptr [0x11400c00], 0x14 */
  w32((uint32_t)(0x11400c00), (0x14u));
L_113dca1c:;
  /* 113dca1c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 113dca21 push 0x113fb02c */
  push32((uint32_t)(0x113fb02cu));
  /* 113dca26 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dca28 push 4 */
  push32((uint32_t)(0x4u));
  /* 113dca2a mov eax, dword ptr [0x11400c00] */
  EAX = (r32((uint32_t)(0x11400c00)));
  /* 113dca2f push eax */
  push32((uint32_t)(EAX));
  /* 113dca30 call 0x113d4140 */
  push32(0x113dca35u); f_113d4140();
  /* 113dca35 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dca38 mov dword ptr [0x113ff8a8], eax */
  w32((uint32_t)(0x113ff8a8), (EAX));
  /* 113dca3d cmp dword ptr [0x113ff8a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff8a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dca44 jne 0x113dca85 */
  if (!C.zf) goto L_113dca85;
  /* 113dca46 mov dword ptr [0x11400c00], 0x14 */
  w32((uint32_t)(0x11400c00), (0x14u));
  /* 113dca50 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 113dca55 push 0x113fb02c */
  push32((uint32_t)(0x113fb02cu));
  /* 113dca5a push 2 */
  push32((uint32_t)(0x2u));
  /* 113dca5c push 4 */
  push32((uint32_t)(0x4u));
  /* 113dca5e mov ecx, dword ptr [0x11400c00] */
  ECX = (r32((uint32_t)(0x11400c00)));
  /* 113dca64 push ecx */
  push32((uint32_t)(ECX));
  /* 113dca65 call 0x113d4140 */
  push32(0x113dca6au); f_113d4140();
  /* 113dca6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dca6d mov dword ptr [0x113ff8a8], eax */
  w32((uint32_t)(0x113ff8a8), (EAX));
  /* 113dca72 cmp dword ptr [0x113ff8a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff8a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dca79 jne 0x113dca85 */
  if (!C.zf) goto L_113dca85;
  /* 113dca7b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 113dca7d call 0x113d2ca0 */
  push32(0x113dca82u); f_113d2ca0();
  /* 113dca82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113dca85:;
  /* 113dca85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113dca8c jmp 0x113dca97 */
  goto L_113dca97;
L_113dca8e:;
  /* 113dca8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dca91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dca94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113dca97:;
  /* 113dca97 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dca9b jge 0x113dcab6 */
  if ((C.sf==C.of)) goto L_113dcab6;
  /* 113dca9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dcaa0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113dcaa3 add eax, 0x113fe120 */
  { uint32_t _a=(EAX),_b=(0x113fe120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcaa8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dcaab mov edx, dword ptr [0x113ff8a8] */
  EDX = (r32((uint32_t)(0x113ff8a8)));
  /* 113dcab1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 113dcab4 jmp 0x113dca8e */
  goto L_113dca8e;
L_113dcab6:;
  /* 113dcab6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113dcabd jmp 0x113dcac8 */
  goto L_113dcac8;
L_113dcabf:;
  /* 113dcabf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dcac2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcac5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113dcac8:;
  /* 113dcac8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcacc jge 0x113dcb18 */
  if ((C.sf==C.of)) goto L_113dcb18;
  /* 113dcace mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dcad1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113dcad4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dcad7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113dcada imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dcadd mov eax, dword ptr [ecx*4 + 0x11400f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11400f00)));
  /* 113dcae4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcae8 je 0x113dcb06 */
  if (C.zf) goto L_113dcb06;
  /* 113dcaea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dcaed sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113dcaf0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dcaf3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113dcaf6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dcaf9 mov eax, dword ptr [ecx*4 + 0x11400f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11400f00)));
  /* 113dcb00 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcb04 jne 0x113dcb16 */
  if (!C.zf) goto L_113dcb16;
L_113dcb06:;
  /* 113dcb06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dcb09 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113dcb0c mov dword ptr [ecx + 0x113fe130], 0xffffffff */
  w32((uint32_t)(ECX + 0x113fe130), (0xffffffffu));
L_113dcb16:;
  /* 113dcb16 jmp 0x113dcabf */
  goto L_113dcabf;
L_113dcb18:;
  /* 113dcb18 mov esp, ebp */
  ESP = (EBP);
  /* 113dcb1a pop ebp */
  EBP = (pop32());
  /* 113dcb1b ret  */
  ESPCHK(0x113dc9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb20 @ 0x113dcb20 (26 bytes, 9 insns) */
void f_113dcb20(void) {
  FTRACE(0x113dcb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dcb20 push ebp */
  push32((uint32_t)(EBP));
  /* 113dcb21 mov ebp, esp */
  EBP = (ESP);
  /* 113dcb23 call 0x113dd720 */
  push32(0x113dcb28u); f_113dd720();
  /* 113dcb28 movsx eax, byte ptr [0x113ff54c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x113ff54c))));
  /* 113dcb2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dcb31 je 0x113dcb38 */
  if (C.zf) goto L_113dcb38;
  /* 113dcb33 call 0x113dd4e0 */
  push32(0x113dcb38u); f_113dd4e0();
L_113dcb38:;
  /* 113dcb38 pop ebp */
  EBP = (pop32());
  /* 113dcb39 ret  */
  ESPCHK(0x113dcb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb40 @ 0x113dcb40 (61 bytes, 20 insns) */
void f_113dcb40(void) {
  FTRACE(0x113dcb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dcb40 push ebp */
  push32((uint32_t)(EBP));
  /* 113dcb41 mov ebp, esp */
  EBP = (ESP);
  /* 113dcb43 cmp dword ptr [ebp + 8], 0x113fe120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x113fe120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcb4a jb 0x113dcb6e */
  if (C.cf) goto L_113dcb6e;
  /* 113dcb4c cmp dword ptr [ebp + 8], 0x113fe380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x113fe380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcb53 ja 0x113dcb6e */
  if ((!C.cf&&!C.zf)) goto L_113dcb6e;
  /* 113dcb55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dcb58 sub eax, 0x113fe120 */
  { uint32_t _a=(EAX),_b=(0x113fe120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dcb5d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113dcb60 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcb63 push eax */
  push32((uint32_t)(EAX));
  /* 113dcb64 call 0x113d7730 */
  push32(0x113dcb69u); f_113d7730();
  /* 113dcb69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcb6c jmp 0x113dcb7b */
  goto L_113dcb7b;
L_113dcb6e:;
  /* 113dcb6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dcb71 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcb74 push ecx */
  push32((uint32_t)(ECX));
  /* 113dcb75 call dword ptr [0x11402324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402324))), 0x113dcb7bu);
L_113dcb7b:;
  /* 113dcb7b pop ebp */
  EBP = (pop32());
  /* 113dcb7c ret  */
  ESPCHK(0x113dcb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb80 @ 0x113dcb80 (41 bytes, 16 insns) */
void f_113dcb80(void) {
  FTRACE(0x113dcb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dcb80 push ebp */
  push32((uint32_t)(EBP));
  /* 113dcb81 mov ebp, esp */
  EBP = (ESP);
  /* 113dcb83 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcb87 jge 0x113dcb9a */
  if ((C.sf==C.of)) goto L_113dcb9a;
  /* 113dcb89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dcb8c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcb8f push eax */
  push32((uint32_t)(EAX));
  /* 113dcb90 call 0x113d7730 */
  push32(0x113dcb95u); f_113d7730();
  /* 113dcb95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcb98 jmp 0x113dcba7 */
  goto L_113dcba7;
L_113dcb9a:;
  /* 113dcb9a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dcb9d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcba0 push ecx */
  push32((uint32_t)(ECX));
  /* 113dcba1 call dword ptr [0x11402324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402324))), 0x113dcba7u);
L_113dcba7:;
  /* 113dcba7 pop ebp */
  EBP = (pop32());
  /* 113dcba8 ret  */
  ESPCHK(0x113dcb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbb0 @ 0x113dcbb0 (61 bytes, 20 insns) */
void f_113dcbb0(void) {
  FTRACE(0x113dcbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dcbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 113dcbb1 mov ebp, esp */
  EBP = (ESP);
  /* 113dcbb3 cmp dword ptr [ebp + 8], 0x113fe120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x113fe120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcbba jb 0x113dcbde */
  if (C.cf) goto L_113dcbde;
  /* 113dcbbc cmp dword ptr [ebp + 8], 0x113fe380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x113fe380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcbc3 ja 0x113dcbde */
  if ((!C.cf&&!C.zf)) goto L_113dcbde;
  /* 113dcbc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dcbc8 sub eax, 0x113fe120 */
  { uint32_t _a=(EAX),_b=(0x113fe120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dcbcd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113dcbd0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcbd3 push eax */
  push32((uint32_t)(EAX));
  /* 113dcbd4 call 0x113d77d0 */
  push32(0x113dcbd9u); f_113d77d0();
  /* 113dcbd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcbdc jmp 0x113dcbeb */
  goto L_113dcbeb;
L_113dcbde:;
  /* 113dcbde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dcbe1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcbe4 push ecx */
  push32((uint32_t)(ECX));
  /* 113dcbe5 call dword ptr [0x11402320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402320))), 0x113dcbebu);
L_113dcbeb:;
  /* 113dcbeb pop ebp */
  EBP = (pop32());
  /* 113dcbec ret  */
  ESPCHK(0x113dcbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbf0 @ 0x113dcbf0 (41 bytes, 16 insns) */
void f_113dcbf0(void) {
  FTRACE(0x113dcbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dcbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 113dcbf1 mov ebp, esp */
  EBP = (ESP);
  /* 113dcbf3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcbf7 jge 0x113dcc0a */
  if ((C.sf==C.of)) goto L_113dcc0a;
  /* 113dcbf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dcbfc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcbff push eax */
  push32((uint32_t)(EAX));
  /* 113dcc00 call 0x113d77d0 */
  push32(0x113dcc05u); f_113d77d0();
  /* 113dcc05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcc08 jmp 0x113dcc17 */
  goto L_113dcc17;
L_113dcc0a:;
  /* 113dcc0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dcc0d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcc10 push ecx */
  push32((uint32_t)(ECX));
  /* 113dcc11 call dword ptr [0x11402320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402320))), 0x113dcc17u);
L_113dcc17:;
  /* 113dcc17 pop ebp */
  EBP = (pop32());
  /* 113dcc18 ret  */
  ESPCHK(0x113dcbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc20 @ 0x113dcc20 (119 bytes, 34 insns) */
void f_113dcc20(void) {
  FTRACE(0x113dcc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dcc20 push ebp */
  push32((uint32_t)(EBP));
  /* 113dcc21 mov ebp, esp */
  EBP = (ESP);
  /* 113dcc23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dcc26 push 0x113ff8a4 */
  push32((uint32_t)(0x113ff8a4u));
  /* 113dcc2b call dword ptr [0x11402364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402364))), 0x113dcc31u);
  /* 113dcc31 cmp dword ptr [0x113ff894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcc38 je 0x113dcc58 */
  if (C.zf) goto L_113dcc58;
  /* 113dcc3a push 0x113ff8a4 */
  push32((uint32_t)(0x113ff8a4u));
  /* 113dcc3f call dword ptr [0x11402354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402354))), 0x113dcc45u);
  /* 113dcc45 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113dcc47 call 0x113d7730 */
  push32(0x113dcc4cu); f_113d7730();
  /* 113dcc4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcc4f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113dcc56 jmp 0x113dcc5f */
  goto L_113dcc5f;
L_113dcc58:;
  /* 113dcc58 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113dcc5f:;
  /* 113dcc5f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 113dcc63 push eax */
  push32((uint32_t)(EAX));
  /* 113dcc64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dcc67 push ecx */
  push32((uint32_t)(ECX));
  /* 113dcc68 call 0x113dcca0 */
  push32(0x113dcc6du); f_113dcca0();
  /* 113dcc6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcc70 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113dcc73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcc77 je 0x113dcc85 */
  if (C.zf) goto L_113dcc85;
  /* 113dcc79 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113dcc7b call 0x113d77d0 */
  push32(0x113dcc80u); f_113d77d0();
  /* 113dcc80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcc83 jmp 0x113dcc90 */
  goto L_113dcc90;
L_113dcc85:;
  /* 113dcc85 push 0x113ff8a4 */
  push32((uint32_t)(0x113ff8a4u));
  /* 113dcc8a call dword ptr [0x11402354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402354))), 0x113dcc90u);
L_113dcc90:;
  /* 113dcc90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dcc93 mov esp, ebp */
  ESP = (EBP);
  /* 113dcc95 pop ebp */
  EBP = (pop32());
  /* 113dcc96 ret  */
  ESPCHK(0x113dcc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cca0 @ 0x113dcca0 (160 bytes, 50 insns) */
void f_113dcca0(void) {
  FTRACE(0x113dcca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dcca0 push ebp */
  push32((uint32_t)(EBP));
  /* 113dcca1 mov ebp, esp */
  EBP = (ESP);
  /* 113dcca3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dcca6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dccaa jne 0x113dccb3 */
  if (!C.zf) goto L_113dccb3;
  /* 113dccac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dccae jmp 0x113dcd3c */
  goto L_113dcd3c;
L_113dccb3:;
  /* 113dccb3 cmp dword ptr [0x113ff718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dccba jne 0x113dccea */
  if (!C.zf) goto L_113dccea;
  /* 113dccbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dccbf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113dccc4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dccc9 jle 0x113dccdb */
  if ((C.zf||C.sf!=C.of)) goto L_113dccdb;
  /* 113dcccb call 0x113dbc00 */
  push32(0x113dccd0u); f_113dbc00();
  /* 113dccd0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 113dccd6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113dccd9 jmp 0x113dcd3c */
  goto L_113dcd3c;
L_113dccdb:;
  /* 113dccdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dccde mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 113dcce1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 113dcce3 mov eax, 1 */
  EAX = (0x1u);
  /* 113dcce8 jmp 0x113dcd3c */
  goto L_113dcd3c;
L_113dccea:;
  /* 113dccea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113dccf1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 113dccf4 push eax */
  push32((uint32_t)(EAX));
  /* 113dccf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dccf7 mov ecx, dword ptr [0x113fdea4] */
  ECX = (r32((uint32_t)(0x113fdea4)));
  /* 113dccfd push ecx */
  push32((uint32_t)(ECX));
  /* 113dccfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dcd01 push edx */
  push32((uint32_t)(EDX));
  /* 113dcd02 push 1 */
  push32((uint32_t)(0x1u));
  /* 113dcd04 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 113dcd07 push eax */
  push32((uint32_t)(EAX));
  /* 113dcd08 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 113dcd0d mov ecx, dword ptr [0x113ff728] */
  ECX = (r32((uint32_t)(0x113ff728)));
  /* 113dcd13 push ecx */
  push32((uint32_t)(ECX));
  /* 113dcd14 call dword ptr [0x114023b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023b8))), 0x113dcd1au);
  /* 113dcd1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113dcd1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcd21 je 0x113dcd29 */
  if (C.zf) goto L_113dcd29;
  /* 113dcd23 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcd27 je 0x113dcd39 */
  if (C.zf) goto L_113dcd39;
L_113dcd29:;
  /* 113dcd29 call 0x113dbc00 */
  push32(0x113dcd2eu); f_113dbc00();
  /* 113dcd2e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 113dcd34 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113dcd37 jmp 0x113dcd3c */
  goto L_113dcd3c;
L_113dcd39:;
  /* 113dcd39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113dcd3c:;
  /* 113dcd3c mov esp, ebp */
  ESP = (EBP);
  /* 113dcd3e pop ebp */
  EBP = (pop32());
  /* 113dcd3f ret  */
  ESPCHK(0x113dcca0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x113dcd40 (32 bytes, 18 insns) */
void f_113dcd40(void) {
  FTRACE(0x113dcd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dcd40 push ebp */
  push32((uint32_t)(EBP));
  /* 113dcd41 mov ebp, esp */
  EBP = (ESP);
  /* 113dcd43 push ebx */
  push32((uint32_t)(EBX));
  /* 113dcd44 push esi */
  push32((uint32_t)(ESI));
  /* 113dcd45 push edi */
  push32((uint32_t)(EDI));
  /* 113dcd46 push ebp */
  push32((uint32_t)(EBP));
  /* 113dcd47 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dcd49 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dcd4b push 0x113dcd58 */
  push32((uint32_t)(0x113dcd58u));
  /* 113dcd50 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 113dcd53 call 0x113e448c */
  push32(0x113dcd58u); f_113e448c();
  /* 113dcd58 pop ebp */
  EBP = (pop32());
  /* 113dcd59 pop edi */
  EDI = (pop32());
  /* 113dcd5a pop esi */
  ESI = (pop32());
  /* 113dcd5b pop ebx */
  EBX = (pop32());
  /* 113dcd5c mov esp, ebp */
  ESP = (EBP);
  /* 113dcd5e pop ebp */
  EBP = (pop32());
  /* 113dcd5f ret  */
  ESPCHK(0x113dcd40u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x113dcd82 (104 bytes, 33 insns) */
void f_113dcd82(void) {
  FTRACE(0x113dcd82u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dcd82 push ebx */
  push32((uint32_t)(EBX));
  /* 113dcd83 push esi */
  push32((uint32_t)(ESI));
  /* 113dcd84 push edi */
  push32((uint32_t)(EDI));
  /* 113dcd85 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 113dcd89 push eax */
  push32((uint32_t)(EAX));
  /* 113dcd8a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 113dcd8c push 0x113dcd60 */
  push32((uint32_t)(0x113dcd60u));
  /* 113dcd91 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 113dcd98 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_113dcd9f:;
  /* 113dcd9f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 113dcda3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 113dcda6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 113dcda9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcdac je 0x113dcddc */
  if (C.zf) goto L_113dcddc;
  /* 113dcdae cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcdb2 je 0x113dcddc */
  if (C.zf) goto L_113dcddc;
  /* 113dcdb4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 113dcdb7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 113dcdba mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 113dcdbe mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 113dcdc1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcdc6 jne 0x113dcdda */
  if (!C.zf) goto L_113dcdda;
  /* 113dcdc8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 113dcdcd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 113dcdd1 call 0x113dce16 */
  push32(0x113dcdd6u); f_113dce16();
  /* 113dcdd6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x113dcddau);
L_113dcdda:;
  /* 113dcdda jmp 0x113dcd9f */
  goto L_113dcd9f;
L_113dcddc:;
  /* 113dcddc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 113dcde3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcde6 pop edi */
  EDI = (pop32());
  /* 113dcde7 pop esi */
  ESI = (pop32());
  /* 113dcde8 pop ebx */
  EBX = (pop32());
  /* 113dcde9 ret  */
  ESPCHK(0x113dcd82u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce16 @ 0x113dce16 (24 bytes, 10 insns) */
void f_113dce16(void) {
  FTRACE(0x113dce16u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dce16 push ebx */
  push32((uint32_t)(EBX));
  /* 113dce17 push ecx */
  push32((uint32_t)(ECX));
  /* 113dce18 mov ebx, 0x113fe3b8 */
  EBX = (0x113fe3b8u);
  /* 113dce1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dce20 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 113dce23 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 113dce26 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 113dce29 pop ecx */
  ECX = (pop32());
  /* 113dce2a pop ebx */
  EBX = (pop32());
  /* 113dce2b ret 4 */
  ESPCHK(0x113dce16u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cef5 @ 0x113dcef5 (27 bytes, 11 insns) */
void f_113dcef5(void) {
  FTRACE(0x113dcef5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dcef5 push ebp */
  push32((uint32_t)(EBP));
  /* 113dcef6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 113dcefa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 113dcefc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 113dceff push eax */
  push32((uint32_t)(EAX));
  /* 113dcf00 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 113dcf03 push eax */
  push32((uint32_t)(EAX));
  /* 113dcf04 call 0x113dcd82 */
  push32(0x113dcf09u); f_113dcd82();
  /* 113dcf09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcf0c pop ebp */
  EBP = (pop32());
  /* 113dcf0d ret 4 */
  ESPCHK(0x113dcef5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cf10 @ 0x113dcf10 (482 bytes, 138 insns) */
void f_113dcf10(void) {
  FTRACE(0x113dcf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dcf10 push ebp */
  push32((uint32_t)(EBP));
  /* 113dcf11 mov ebp, esp */
  EBP = (ESP);
  /* 113dcf13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dcf16 push esi */
  push32((uint32_t)(ESI));
  /* 113dcf17 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 113dcf1e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 113dcf20 call 0x113d7730 */
  push32(0x113dcf25u); f_113d7730();
  /* 113dcf25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcf28 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113dcf2f jmp 0x113dcf3a */
  goto L_113dcf3a;
L_113dcf31:;
  /* 113dcf31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dcf34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcf37 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_113dcf3a:;
  /* 113dcf3a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcf3e jge 0x113dd0e0 */
  if ((C.sf==C.of)) goto L_113dd0e0;
  /* 113dcf44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dcf47 cmp dword ptr [ecx*4 + 0x11400f00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11400f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcf4f je 0x113dd046 */
  if (C.zf) goto L_113dd046;
  /* 113dcf55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dcf58 mov eax, dword ptr [edx*4 + 0x11400f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11400f00)));
  /* 113dcf5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113dcf62 jmp 0x113dcf6d */
  goto L_113dcf6d;
L_113dcf64:;
  /* 113dcf64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dcf67 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcf6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113dcf6d:;
  /* 113dcf6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dcf70 mov eax, dword ptr [edx*4 + 0x11400f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11400f00)));
  /* 113dcf77 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcf7c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcf7f jae 0x113dd036 */
  if (!C.cf) goto L_113dd036;
  /* 113dcf85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dcf88 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 113dcf8c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 113dcf8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113dcf91 jne 0x113dd031 */
  if (!C.zf) goto L_113dd031;
  /* 113dcf97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dcf9a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcf9e jne 0x113dcfd9 */
  if (!C.zf) goto L_113dcfd9;
  /* 113dcfa0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 113dcfa2 call 0x113d7730 */
  push32(0x113dcfa7u); f_113d7730();
  /* 113dcfa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcfaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dcfad cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dcfb1 jne 0x113dcfcf */
  if (!C.zf) goto L_113dcfcf;
  /* 113dcfb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dcfb6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcfb9 push edx */
  push32((uint32_t)(EDX));
  /* 113dcfba call dword ptr [0x11402334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402334))), 0x113dcfc0u);
  /* 113dcfc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dcfc3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113dcfc6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcfc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dcfcc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_113dcfcf:;
  /* 113dcfcf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 113dcfd1 call 0x113d77d0 */
  push32(0x113dcfd6u); f_113d77d0();
  /* 113dcfd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113dcfd9:;
  /* 113dcfd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dcfdc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcfdf push eax */
  push32((uint32_t)(EAX));
  /* 113dcfe0 call dword ptr [0x11402324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402324))), 0x113dcfe6u);
  /* 113dcfe6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dcfe9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 113dcfed and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 113dcff0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113dcff2 je 0x113dd006 */
  if (C.zf) goto L_113dd006;
  /* 113dcff4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dcff7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dcffa push eax */
  push32((uint32_t)(EAX));
  /* 113dcffb call dword ptr [0x11402320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402320))), 0x113dd001u);
  /* 113dd001 jmp 0x113dcf64 */
  goto L_113dcf64;
L_113dd006:;
  /* 113dd006 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dd009 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 113dd00f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dd012 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113dd015 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dd018 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dd01b sub eax, dword ptr [edx*4 + 0x11400f00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11400f00))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dd022 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113dd023 mov esi, 0x24 */
  ESI = (0x24u);
  /* 113dd028 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113dd02a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd02c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113dd02f jmp 0x113dd036 */
  goto L_113dd036;
L_113dd031:;
  /* 113dd031 jmp 0x113dcf64 */
  goto L_113dcf64;
L_113dd036:;
  /* 113dd036 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd03a je 0x113dd041 */
  if (C.zf) goto L_113dd041;
  /* 113dd03c jmp 0x113dd0e0 */
  goto L_113dd0e0;
L_113dd041:;
  /* 113dd041 jmp 0x113dd0db */
  goto L_113dd0db;
L_113dd046:;
  /* 113dd046 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 113dd048 push 0x113fb034 */
  push32((uint32_t)(0x113fb034u));
  /* 113dd04d push 2 */
  push32((uint32_t)(0x2u));
  /* 113dd04f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 113dd054 call 0x113d3d30 */
  push32(0x113dd059u); f_113d3d30();
  /* 113dd059 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd05c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113dd05f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd063 je 0x113dd0d9 */
  if (C.zf) goto L_113dd0d9;
  /* 113dd065 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dd068 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dd06b mov dword ptr [eax*4 + 0x11400f00], ecx */
  w32((uint32_t)(EAX*4 + 0x11400f00), (ECX));
  /* 113dd072 mov edx, dword ptr [0x1140103c] */
  EDX = (r32((uint32_t)(0x1140103c)));
  /* 113dd078 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd07b mov dword ptr [0x1140103c], edx */
  w32((uint32_t)(0x1140103c), (EDX));
  /* 113dd081 jmp 0x113dd08c */
  goto L_113dd08c;
L_113dd083:;
  /* 113dd083 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dd086 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd089 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113dd08c:;
  /* 113dd08c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dd08f mov edx, dword ptr [ecx*4 + 0x11400f00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11400f00)));
  /* 113dd096 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd09c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd09f jae 0x113dd0c4 */
  if (!C.cf) goto L_113dd0c4;
  /* 113dd0a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dd0a4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 113dd0a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dd0ab mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 113dd0b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dd0b4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 113dd0b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dd0bb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 113dd0c2 jmp 0x113dd083 */
  goto L_113dd083;
L_113dd0c4:;
  /* 113dd0c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dd0c7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113dd0ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113dd0cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd0d0 push edx */
  push32((uint32_t)(EDX));
  /* 113dd0d1 call 0x113dd420 */
  push32(0x113dd0d6u); f_113dd420();
  /* 113dd0d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113dd0d9:;
  /* 113dd0d9 jmp 0x113dd0e0 */
  goto L_113dd0e0;
L_113dd0db:;
  /* 113dd0db jmp 0x113dcf31 */
  goto L_113dcf31;
L_113dd0e0:;
  /* 113dd0e0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 113dd0e2 call 0x113d77d0 */
  push32(0x113dd0e7u); f_113d77d0();
  /* 113dd0e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd0ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd0ed pop esi */
  ESI = (pop32());
  /* 113dd0ee mov esp, ebp */
  ESP = (EBP);
  /* 113dd0f0 pop ebp */
  EBP = (pop32());
  /* 113dd0f1 ret  */
  ESPCHK(0x113dcf10u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x113dd100 (183 bytes, 57 insns) */
void f_113dd100(void) {
  FTRACE(0x113dd100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dd100 push ebp */
  push32((uint32_t)(EBP));
  /* 113dd101 mov ebp, esp */
  EBP = (ESP);
  /* 113dd103 push ecx */
  push32((uint32_t)(ECX));
  /* 113dd104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd107 cmp eax, dword ptr [0x1140103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1140103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd10d jae 0x113dd19a */
  if (!C.cf) goto L_113dd19a;
  /* 113dd113 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd116 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113dd119 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd11c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113dd11f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dd122 mov eax, dword ptr [ecx*4 + 0x11400f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11400f00)));
  /* 113dd129 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd12d jne 0x113dd19a */
  if (!C.zf) goto L_113dd19a;
  /* 113dd12f cmp dword ptr [0x113ff50c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113ff50c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd136 jne 0x113dd17a */
  if (!C.zf) goto L_113dd17a;
  /* 113dd138 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd13b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113dd13e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd142 je 0x113dd152 */
  if (C.zf) goto L_113dd152;
  /* 113dd144 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd148 je 0x113dd160 */
  if (C.zf) goto L_113dd160;
  /* 113dd14a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd14e je 0x113dd16e */
  if (C.zf) goto L_113dd16e;
  /* 113dd150 jmp 0x113dd17a */
  goto L_113dd17a;
L_113dd152:;
  /* 113dd152 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dd155 push edx */
  push32((uint32_t)(EDX));
  /* 113dd156 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 113dd158 call dword ptr [0x114022ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022ec))), 0x113dd15eu);
  /* 113dd15e jmp 0x113dd17a */
  goto L_113dd17a;
L_113dd160:;
  /* 113dd160 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dd163 push eax */
  push32((uint32_t)(EAX));
  /* 113dd164 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 113dd166 call dword ptr [0x114022ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022ec))), 0x113dd16cu);
  /* 113dd16c jmp 0x113dd17a */
  goto L_113dd17a;
L_113dd16e:;
  /* 113dd16e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dd171 push ecx */
  push32((uint32_t)(ECX));
  /* 113dd172 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 113dd174 call dword ptr [0x114022ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022ec))), 0x113dd17au);
L_113dd17a:;
  /* 113dd17a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd17d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 113dd180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd183 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 113dd186 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dd189 mov ecx, dword ptr [edx*4 + 0x11400f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11400f00)));
  /* 113dd190 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dd193 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 113dd196 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dd198 jmp 0x113dd1b3 */
  goto L_113dd1b3;
L_113dd19a:;
  /* 113dd19a call 0x113dbc00 */
  push32(0x113dd19fu); f_113dbc00();
  /* 113dd19f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 113dd1a5 call 0x113dbc10 */
  push32(0x113dd1aau); f_113dbc10();
  /* 113dd1aa mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113dd1b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_113dd1b3:;
  /* 113dd1b3 mov esp, ebp */
  ESP = (EBP);
  /* 113dd1b5 pop ebp */
  EBP = (pop32());
  /* 113dd1b6 ret  */
  ESPCHK(0x113dd100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1c0 @ 0x113dd1c0 (216 bytes, 63 insns) */
void f_113dd1c0(void) {
  FTRACE(0x113dd1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dd1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113dd1c1 mov ebp, esp */
  EBP = (ESP);
  /* 113dd1c3 push ecx */
  push32((uint32_t)(ECX));
  /* 113dd1c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd1c7 cmp eax, dword ptr [0x1140103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1140103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd1cd jae 0x113dd27b */
  if (!C.cf) goto L_113dd27b;
  /* 113dd1d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd1d6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113dd1d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd1dc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113dd1df imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dd1e2 mov eax, dword ptr [ecx*4 + 0x11400f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11400f00)));
  /* 113dd1e9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 113dd1ee and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113dd1f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113dd1f3 je 0x113dd27b */
  if (C.zf) goto L_113dd27b;
  /* 113dd1f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd1fc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 113dd1ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd202 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 113dd205 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dd208 mov ecx, dword ptr [edx*4 + 0x11400f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11400f00)));
  /* 113dd20f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd213 je 0x113dd27b */
  if (C.zf) goto L_113dd27b;
  /* 113dd215 cmp dword ptr [0x113ff50c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113ff50c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd21c jne 0x113dd25a */
  if (!C.zf) goto L_113dd25a;
  /* 113dd21e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd221 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113dd224 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd228 je 0x113dd238 */
  if (C.zf) goto L_113dd238;
  /* 113dd22a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd22e je 0x113dd244 */
  if (C.zf) goto L_113dd244;
  /* 113dd230 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd234 je 0x113dd250 */
  if (C.zf) goto L_113dd250;
  /* 113dd236 jmp 0x113dd25a */
  goto L_113dd25a;
L_113dd238:;
  /* 113dd238 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dd23a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 113dd23c call dword ptr [0x114022ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022ec))), 0x113dd242u);
  /* 113dd242 jmp 0x113dd25a */
  goto L_113dd25a;
L_113dd244:;
  /* 113dd244 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dd246 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 113dd248 call dword ptr [0x114022ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022ec))), 0x113dd24eu);
  /* 113dd24e jmp 0x113dd25a */
  goto L_113dd25a;
L_113dd250:;
  /* 113dd250 push 0 */
  push32((uint32_t)(0x0u));
  /* 113dd252 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 113dd254 call dword ptr [0x114022ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022ec))), 0x113dd25au);
L_113dd25a:;
  /* 113dd25a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd25d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113dd260 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd263 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113dd266 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dd269 mov edx, dword ptr [eax*4 + 0x11400f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11400f00)));
  /* 113dd270 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 113dd277 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dd279 jmp 0x113dd294 */
  goto L_113dd294;
L_113dd27b:;
  /* 113dd27b call 0x113dbc00 */
  push32(0x113dd280u); f_113dbc00();
  /* 113dd280 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 113dd286 call 0x113dbc10 */
  push32(0x113dd28bu); f_113dbc10();
  /* 113dd28b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113dd291 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_113dd294:;
  /* 113dd294 mov esp, ebp */
  ESP = (EBP);
  /* 113dd296 pop ebp */
  EBP = (pop32());
  /* 113dd297 ret  */
  ESPCHK(0x113dd1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2a0 @ 0x113dd2a0 (102 bytes, 30 insns) */
void f_113dd2a0(void) {
  FTRACE(0x113dd2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dd2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113dd2a1 mov ebp, esp */
  EBP = (ESP);
  /* 113dd2a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd2a6 cmp eax, dword ptr [0x1140103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1140103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd2ac jae 0x113dd2eb */
  if (!C.cf) goto L_113dd2eb;
  /* 113dd2ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd2b1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113dd2b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd2b7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113dd2ba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dd2bd mov eax, dword ptr [ecx*4 + 0x11400f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11400f00)));
  /* 113dd2c4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 113dd2c9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113dd2cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113dd2ce je 0x113dd2eb */
  if (C.zf) goto L_113dd2eb;
  /* 113dd2d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd2d3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 113dd2d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd2d9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 113dd2dc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dd2df mov ecx, dword ptr [edx*4 + 0x11400f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11400f00)));
  /* 113dd2e6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 113dd2e9 jmp 0x113dd304 */
  goto L_113dd304;
L_113dd2eb:;
  /* 113dd2eb call 0x113dbc00 */
  push32(0x113dd2f0u); f_113dbc00();
  /* 113dd2f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 113dd2f6 call 0x113dbc10 */
  push32(0x113dd2fbu); f_113dbc10();
  /* 113dd2fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113dd301 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_113dd304:;
  /* 113dd304 pop ebp */
  EBP = (pop32());
  /* 113dd305 ret  */
  ESPCHK(0x113dd2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d310 @ 0x113dd310 (260 bytes, 83 insns) */
void f_113dd310(void) {
  FTRACE(0x113dd310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dd310 push ebp */
  push32((uint32_t)(EBP));
  /* 113dd311 mov ebp, esp */
  EBP = (ESP);
  /* 113dd313 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dd316 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 113dd31a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dd31d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 113dd320 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dd322 je 0x113dd32d */
  if (C.zf) goto L_113dd32d;
  /* 113dd324 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 113dd327 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 113dd32a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_113dd32d:;
  /* 113dd32d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dd330 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 113dd336 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113dd338 je 0x113dd342 */
  if (C.zf) goto L_113dd342;
  /* 113dd33a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 113dd33d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 113dd33f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_113dd342:;
  /* 113dd342 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dd345 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 113dd34b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113dd34d je 0x113dd358 */
  if (C.zf) goto L_113dd358;
  /* 113dd34f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 113dd352 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 113dd355 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_113dd358:;
  /* 113dd358 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd35b push eax */
  push32((uint32_t)(EAX));
  /* 113dd35c call dword ptr [0x1140239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140239c))), 0x113dd362u);
  /* 113dd362 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113dd365 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd369 jne 0x113dd382 */
  if (!C.zf) goto L_113dd382;
  /* 113dd36b call dword ptr [0x11402390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402390))), 0x113dd371u);
  /* 113dd371 push eax */
  push32((uint32_t)(EAX));
  /* 113dd372 call 0x113dbb60 */
  push32(0x113dd377u); f_113dbb60();
  /* 113dd377 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd37a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113dd37d jmp 0x113dd410 */
  goto L_113dd410;
L_113dd382:;
  /* 113dd382 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd386 jne 0x113dd393 */
  if (!C.zf) goto L_113dd393;
  /* 113dd388 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 113dd38b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 113dd38e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 113dd391 jmp 0x113dd3a2 */
  goto L_113dd3a2;
L_113dd393:;
  /* 113dd393 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd397 jne 0x113dd3a2 */
  if (!C.zf) goto L_113dd3a2;
  /* 113dd399 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 113dd39c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 113dd39f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_113dd3a2:;
  /* 113dd3a2 call 0x113dcf10 */
  push32(0x113dd3a7u); f_113dcf10();
  /* 113dd3a7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113dd3aa cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd3ae jne 0x113dd3cb */
  if (!C.zf) goto L_113dd3cb;
  /* 113dd3b0 call 0x113dbc00 */
  push32(0x113dd3b5u); f_113dbc00();
  /* 113dd3b5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 113dd3bb call 0x113dbc10 */
  push32(0x113dd3c0u); f_113dbc10();
  /* 113dd3c0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113dd3c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113dd3c9 jmp 0x113dd410 */
  goto L_113dd410;
L_113dd3cb:;
  /* 113dd3cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd3ce push eax */
  push32((uint32_t)(EAX));
  /* 113dd3cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd3d2 push ecx */
  push32((uint32_t)(ECX));
  /* 113dd3d3 call 0x113dd100 */
  push32(0x113dd3d8u); f_113dd100();
  /* 113dd3d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd3db mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 113dd3de or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 113dd3e1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 113dd3e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd3e7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113dd3ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd3ed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113dd3f0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dd3f3 mov edx, dword ptr [eax*4 + 0x11400f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11400f00)));
  /* 113dd3fa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 113dd3fd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 113dd401 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd404 push ecx */
  push32((uint32_t)(ECX));
  /* 113dd405 call 0x113dd4b0 */
  push32(0x113dd40au); f_113dd4b0();
  /* 113dd40a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd40d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_113dd410:;
  /* 113dd410 mov esp, ebp */
  ESP = (EBP);
  /* 113dd412 pop ebp */
  EBP = (pop32());
  /* 113dd413 ret  */
  ESPCHK(0x113dd310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d420 @ 0x113dd420 (134 bytes, 44 insns) */
void f_113dd420(void) {
  FTRACE(0x113dd420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dd420 push ebp */
  push32((uint32_t)(EBP));
  /* 113dd421 mov ebp, esp */
  EBP = (ESP);
  /* 113dd423 push ecx */
  push32((uint32_t)(ECX));
  /* 113dd424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd427 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113dd42a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd42d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113dd430 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dd433 mov edx, dword ptr [eax*4 + 0x11400f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11400f00)));
  /* 113dd43a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd43c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113dd43f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dd442 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd446 jne 0x113dd481 */
  if (!C.zf) goto L_113dd481;
  /* 113dd448 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 113dd44a call 0x113d7730 */
  push32(0x113dd44fu); f_113d7730();
  /* 113dd44f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd452 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dd455 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd459 jne 0x113dd477 */
  if (!C.zf) goto L_113dd477;
  /* 113dd45b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dd45e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd461 push edx */
  push32((uint32_t)(EDX));
  /* 113dd462 call dword ptr [0x11402334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402334))), 0x113dd468u);
  /* 113dd468 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dd46b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113dd46e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd471 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dd474 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_113dd477:;
  /* 113dd477 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 113dd479 call 0x113d77d0 */
  push32(0x113dd47eu); f_113d77d0();
  /* 113dd47e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113dd481:;
  /* 113dd481 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd484 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113dd487 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd48a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113dd48d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dd490 mov edx, dword ptr [eax*4 + 0x11400f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11400f00)));
  /* 113dd497 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 113dd49b push eax */
  push32((uint32_t)(EAX));
  /* 113dd49c call dword ptr [0x11402324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402324))), 0x113dd4a2u);
  /* 113dd4a2 mov esp, ebp */
  ESP = (EBP);
  /* 113dd4a4 pop ebp */
  EBP = (pop32());
  /* 113dd4a5 ret  */
  ESPCHK(0x113dd420u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x113dd4b0 (38 bytes, 13 insns) */
void f_113dd4b0(void) {
  FTRACE(0x113dd4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dd4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113dd4b1 mov ebp, esp */
  EBP = (ESP);
  /* 113dd4b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd4b6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113dd4b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd4bc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113dd4bf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dd4c2 mov edx, dword ptr [eax*4 + 0x11400f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11400f00)));
  /* 113dd4c9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 113dd4cd push eax */
  push32((uint32_t)(EAX));
  /* 113dd4ce call dword ptr [0x11402320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402320))), 0x113dd4d4u);
  /* 113dd4d4 pop ebp */
  EBP = (pop32());
  /* 113dd4d5 ret  */
  ESPCHK(0x113dd4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4e0 @ 0x113dd4e0 (218 bytes, 63 insns) */
void f_113dd4e0(void) {
  FTRACE(0x113dd4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dd4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113dd4e1 mov ebp, esp */
  EBP = (ESP);
  /* 113dd4e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dd4e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113dd4ed push 2 */
  push32((uint32_t)(0x2u));
  /* 113dd4ef call 0x113d7730 */
  push32(0x113dd4f4u); f_113d7730();
  /* 113dd4f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd4f7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 113dd4fe jmp 0x113dd509 */
  goto L_113dd509;
L_113dd500:;
  /* 113dd500 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd503 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd506 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113dd509:;
  /* 113dd509 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd50c cmp ecx, dword ptr [0x11400c00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11400c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd512 jge 0x113dd5a9 */
  if ((C.sf==C.of)) goto L_113dd5a9;
  /* 113dd518 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd51b mov eax, dword ptr [0x113ff8a8] */
  EAX = (r32((uint32_t)(0x113ff8a8)));
  /* 113dd520 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd524 je 0x113dd5a4 */
  if (C.zf) goto L_113dd5a4;
  /* 113dd526 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd529 mov edx, dword ptr [0x113ff8a8] */
  EDX = (r32((uint32_t)(0x113ff8a8)));
  /* 113dd52f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 113dd532 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113dd535 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 113dd53b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113dd53d je 0x113dd561 */
  if (C.zf) goto L_113dd561;
  /* 113dd53f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd542 mov eax, dword ptr [0x113ff8a8] */
  EAX = (r32((uint32_t)(0x113ff8a8)));
  /* 113dd547 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 113dd54a push ecx */
  push32((uint32_t)(ECX));
  /* 113dd54b call 0x113de2d0 */
  push32(0x113dd550u); f_113de2d0();
  /* 113dd550 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd553 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd556 je 0x113dd561 */
  if (C.zf) goto L_113dd561;
  /* 113dd558 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dd55b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd55e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113dd561:;
  /* 113dd561 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd565 jl 0x113dd5a4 */
  if ((C.sf!=C.of)) goto L_113dd5a4;
  /* 113dd567 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd56a mov ecx, dword ptr [0x113ff8a8] */
  ECX = (r32((uint32_t)(0x113ff8a8)));
  /* 113dd570 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 113dd573 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd576 push edx */
  push32((uint32_t)(EDX));
  /* 113dd577 call dword ptr [0x11402380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402380))), 0x113dd57du);
  /* 113dd57d push 2 */
  push32((uint32_t)(0x2u));
  /* 113dd57f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd582 mov ecx, dword ptr [0x113ff8a8] */
  ECX = (r32((uint32_t)(0x113ff8a8)));
  /* 113dd588 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 113dd58b push edx */
  push32((uint32_t)(EDX));
  /* 113dd58c call 0x113d47c0 */
  push32(0x113dd591u); f_113d47c0();
  /* 113dd591 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd594 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd597 mov ecx, dword ptr [0x113ff8a8] */
  ECX = (r32((uint32_t)(0x113ff8a8)));
  /* 113dd59d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_113dd5a4:;
  /* 113dd5a4 jmp 0x113dd500 */
  goto L_113dd500;
L_113dd5a9:;
  /* 113dd5a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dd5ab call 0x113d77d0 */
  push32(0x113dd5b0u); f_113d77d0();
  /* 113dd5b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd5b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dd5b6 mov esp, ebp */
  ESP = (EBP);
  /* 113dd5b8 pop ebp */
  EBP = (pop32());
  /* 113dd5b9 ret  */
  ESPCHK(0x113dd4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5c0 @ 0x113dd5c0 (68 bytes, 26 insns) */
void f_113dd5c0(void) {
  FTRACE(0x113dd5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dd5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113dd5c1 mov ebp, esp */
  EBP = (ESP);
  /* 113dd5c3 push ecx */
  push32((uint32_t)(ECX));
  /* 113dd5c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd5c8 jne 0x113dd5d6 */
  if (!C.zf) goto L_113dd5d6;
  /* 113dd5ca push 0 */
  push32((uint32_t)(0x0u));
  /* 113dd5cc call 0x113dd730 */
  push32(0x113dd5d1u); f_113dd730();
  /* 113dd5d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd5d4 jmp 0x113dd600 */
  goto L_113dd600;
L_113dd5d6:;
  /* 113dd5d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd5d9 push eax */
  push32((uint32_t)(EAX));
  /* 113dd5da call 0x113dcb40 */
  push32(0x113dd5dfu); f_113dcb40();
  /* 113dd5df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd5e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd5e5 push ecx */
  push32((uint32_t)(ECX));
  /* 113dd5e6 call 0x113dd610 */
  push32(0x113dd5ebu); f_113dd610();
  /* 113dd5eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd5ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113dd5f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd5f4 push edx */
  push32((uint32_t)(EDX));
  /* 113dd5f5 call 0x113dcbb0 */
  push32(0x113dd5fau); f_113dcbb0();
  /* 113dd5fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd5fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113dd600:;
  /* 113dd600 mov esp, ebp */
  ESP = (EBP);
  /* 113dd602 pop ebp */
  EBP = (pop32());
  /* 113dd603 ret  */
  ESPCHK(0x113dd5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d610 @ 0x113dd610 (65 bytes, 26 insns) */
void f_113dd610(void) {
  FTRACE(0x113dd610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dd610 push ebp */
  push32((uint32_t)(EBP));
  /* 113dd611 mov ebp, esp */
  EBP = (ESP);
  /* 113dd613 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd616 push eax */
  push32((uint32_t)(EAX));
  /* 113dd617 call 0x113dd660 */
  push32(0x113dd61cu); f_113dd660();
  /* 113dd61c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd61f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dd621 je 0x113dd628 */
  if (C.zf) goto L_113dd628;
  /* 113dd623 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113dd626 jmp 0x113dd64f */
  goto L_113dd64f;
L_113dd628:;
  /* 113dd628 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd62b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113dd62e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 113dd634 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113dd636 je 0x113dd64d */
  if (C.zf) goto L_113dd64d;
  /* 113dd638 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd63b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113dd63e push ecx */
  push32((uint32_t)(ECX));
  /* 113dd63f call 0x113de420 */
  push32(0x113dd644u); f_113de420();
  /* 113dd644 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd647 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113dd649 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dd64b jmp 0x113dd64f */
  goto L_113dd64f;
L_113dd64d:;
  /* 113dd64d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113dd64f:;
  /* 113dd64f pop ebp */
  EBP = (pop32());
  /* 113dd650 ret  */
  ESPCHK(0x113dd610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d660 @ 0x113dd660 (183 bytes, 62 insns) */
void f_113dd660(void) {
  FTRACE(0x113dd660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dd660 push ebp */
  push32((uint32_t)(EBP));
  /* 113dd661 mov ebp, esp */
  EBP = (ESP);
  /* 113dd663 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dd666 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113dd66d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd670 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113dd673 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd676 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113dd679 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 113dd67c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd67f jne 0x113dd6fb */
  if (!C.zf) goto L_113dd6fb;
  /* 113dd681 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd684 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113dd687 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 113dd68d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113dd68f je 0x113dd6fb */
  if (C.zf) goto L_113dd6fb;
  /* 113dd691 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd694 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd697 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 113dd699 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dd69c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113dd69f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd6a3 jle 0x113dd6fb */
  if ((C.zf||C.sf!=C.of)) goto L_113dd6fb;
  /* 113dd6a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dd6a8 push edx */
  push32((uint32_t)(EDX));
  /* 113dd6a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd6ac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113dd6af push ecx */
  push32((uint32_t)(ECX));
  /* 113dd6b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd6b3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113dd6b6 push eax */
  push32((uint32_t)(EAX));
  /* 113dd6b7 call 0x113dc5d0 */
  push32(0x113dd6bcu); f_113dc5d0();
  /* 113dd6bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd6bf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd6c2 jne 0x113dd6e5 */
  if (!C.zf) goto L_113dd6e5;
  /* 113dd6c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd6c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113dd6ca and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 113dd6d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113dd6d2 je 0x113dd6e3 */
  if (C.zf) goto L_113dd6e3;
  /* 113dd6d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd6d7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113dd6da and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 113dd6dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd6e0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_113dd6e3:;
  /* 113dd6e3 jmp 0x113dd6fb */
  goto L_113dd6fb;
L_113dd6e5:;
  /* 113dd6e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd6e8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113dd6eb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 113dd6ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd6f1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 113dd6f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113dd6fb:;
  /* 113dd6fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd6fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd701 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113dd704 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113dd706 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dd709 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 113dd710 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dd713 mov esp, ebp */
  ESP = (EBP);
  /* 113dd715 pop ebp */
  EBP = (pop32());
  /* 113dd716 ret  */
  ESPCHK(0x113dd660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d720 @ 0x113dd720 (15 bytes, 7 insns) */
void f_113dd720(void) {
  FTRACE(0x113dd720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dd720 push ebp */
  push32((uint32_t)(EBP));
  /* 113dd721 mov ebp, esp */
  EBP = (ESP);
  /* 113dd723 push 1 */
  push32((uint32_t)(0x1u));
  /* 113dd725 call 0x113dd730 */
  push32(0x113dd72au); f_113dd730();
  /* 113dd72a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd72d pop ebp */
  EBP = (pop32());
  /* 113dd72e ret  */
  ESPCHK(0x113dd720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d730 @ 0x113dd730 (319 bytes, 94 insns) */
void f_113dd730(void) {
  FTRACE(0x113dd730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dd730 push ebp */
  push32((uint32_t)(EBP));
  /* 113dd731 mov ebp, esp */
  EBP = (ESP);
  /* 113dd733 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dd736 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113dd73d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113dd744 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dd746 call 0x113d7730 */
  push32(0x113dd74bu); f_113d7730();
  /* 113dd74b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd74e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113dd755 jmp 0x113dd760 */
  goto L_113dd760;
L_113dd757:;
  /* 113dd757 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dd75a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd75d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_113dd760:;
  /* 113dd760 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dd763 cmp ecx, dword ptr [0x11400c00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11400c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd769 jge 0x113dd853 */
  if ((C.sf==C.of)) goto L_113dd853;
  /* 113dd76f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dd772 mov eax, dword ptr [0x113ff8a8] */
  EAX = (r32((uint32_t)(0x113ff8a8)));
  /* 113dd777 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd77b je 0x113dd84e */
  if (C.zf) goto L_113dd84e;
  /* 113dd781 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dd784 mov edx, dword ptr [0x113ff8a8] */
  EDX = (r32((uint32_t)(0x113ff8a8)));
  /* 113dd78a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 113dd78d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113dd790 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 113dd796 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113dd798 je 0x113dd84e */
  if (C.zf) goto L_113dd84e;
  /* 113dd79e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dd7a1 mov eax, dword ptr [0x113ff8a8] */
  EAX = (r32((uint32_t)(0x113ff8a8)));
  /* 113dd7a6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 113dd7a9 push ecx */
  push32((uint32_t)(ECX));
  /* 113dd7aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dd7ad push edx */
  push32((uint32_t)(EDX));
  /* 113dd7ae call 0x113dcb80 */
  push32(0x113dd7b3u); f_113dcb80();
  /* 113dd7b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd7b6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dd7b9 mov ecx, dword ptr [0x113ff8a8] */
  ECX = (r32((uint32_t)(0x113ff8a8)));
  /* 113dd7bf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 113dd7c2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 113dd7c5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 113dd7ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dd7cc je 0x113dd835 */
  if (C.zf) goto L_113dd835;
  /* 113dd7ce cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd7d2 jne 0x113dd7f9 */
  if (!C.zf) goto L_113dd7f9;
  /* 113dd7d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dd7d7 mov edx, dword ptr [0x113ff8a8] */
  EDX = (r32((uint32_t)(0x113ff8a8)));
  /* 113dd7dd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 113dd7e0 push eax */
  push32((uint32_t)(EAX));
  /* 113dd7e1 call 0x113dd610 */
  push32(0x113dd7e6u); f_113dd610();
  /* 113dd7e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd7e9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd7ec je 0x113dd7f7 */
  if (C.zf) goto L_113dd7f7;
  /* 113dd7ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dd7f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd7f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113dd7f7:;
  /* 113dd7f7 jmp 0x113dd835 */
  goto L_113dd835;
L_113dd7f9:;
  /* 113dd7f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd7fd jne 0x113dd835 */
  if (!C.zf) goto L_113dd835;
  /* 113dd7ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dd802 mov eax, dword ptr [0x113ff8a8] */
  EAX = (r32((uint32_t)(0x113ff8a8)));
  /* 113dd807 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 113dd80a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113dd80d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 113dd810 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113dd812 je 0x113dd835 */
  if (C.zf) goto L_113dd835;
  /* 113dd814 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dd817 mov ecx, dword ptr [0x113ff8a8] */
  ECX = (r32((uint32_t)(0x113ff8a8)));
  /* 113dd81d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 113dd820 push edx */
  push32((uint32_t)(EDX));
  /* 113dd821 call 0x113dd610 */
  push32(0x113dd826u); f_113dd610();
  /* 113dd826 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd829 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd82c jne 0x113dd835 */
  if (!C.zf) goto L_113dd835;
  /* 113dd82e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_113dd835:;
  /* 113dd835 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dd838 mov ecx, dword ptr [0x113ff8a8] */
  ECX = (r32((uint32_t)(0x113ff8a8)));
  /* 113dd83e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 113dd841 push edx */
  push32((uint32_t)(EDX));
  /* 113dd842 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dd845 push eax */
  push32((uint32_t)(EAX));
  /* 113dd846 call 0x113dcbf0 */
  push32(0x113dd84bu); f_113dcbf0();
  /* 113dd84b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113dd84e:;
  /* 113dd84e jmp 0x113dd757 */
  goto L_113dd757;
L_113dd853:;
  /* 113dd853 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dd855 call 0x113d77d0 */
  push32(0x113dd85au); f_113d77d0();
  /* 113dd85a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd85d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd861 jne 0x113dd868 */
  if (!C.zf) goto L_113dd868;
  /* 113dd863 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dd866 jmp 0x113dd86b */
  goto L_113dd86b;
L_113dd868:;
  /* 113dd868 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_113dd86b:;
  /* 113dd86b mov esp, ebp */
  ESP = (EBP);
  /* 113dd86d pop ebp */
  EBP = (pop32());
  /* 113dd86e ret  */
  ESPCHK(0x113dd730u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x113dd870 (15 bytes, 7 insns) */
void f_113dd870(void) {
  FTRACE(0x113dd870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dd870 push ebp */
  push32((uint32_t)(EBP));
  /* 113dd871 mov ebp, esp */
  EBP = (ESP);
  /* 113dd873 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dd875 call 0x113d2ca0 */
  push32(0x113dd87au); f_113d2ca0();
  /* 113dd87a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd87d pop ebp */
  EBP = (pop32());
  /* 113dd87e ret  */
  ESPCHK(0x113dd870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d880 @ 0x113dd880 (1007 bytes, 269 insns) */
void f_113dd880(void) {
  FTRACE(0x113dd880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dd880 push ebp */
  push32((uint32_t)(EBP));
  /* 113dd881 mov ebp, esp */
  EBP = (ESP);
  /* 113dd883 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dd889 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd88d jl 0x113dd895 */
  if ((C.sf!=C.of)) goto L_113dd895;
  /* 113dd88f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd893 jle 0x113dd89c */
  if ((C.zf||C.sf!=C.of)) goto L_113dd89c;
L_113dd895:;
  /* 113dd895 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dd897 jmp 0x113ddc6b */
  goto L_113ddc6b;
L_113dd89c:;
  /* 113dd89c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113dd89e call 0x113d7730 */
  push32(0x113dd8a3u); f_113d7730();
  /* 113dd8a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd8a6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113dd8ad mov eax, dword ptr [0x113ff894] */
  EAX = (r32((uint32_t)(0x113ff894)));
  /* 113dd8b2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd8b5 mov dword ptr [0x113ff894], eax */
  w32((uint32_t)(0x113ff894), (EAX));
L_113dd8ba:;
  /* 113dd8ba cmp dword ptr [0x113ff8a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff8a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd8c1 je 0x113dd8cd */
  if (C.zf) goto L_113dd8cd;
  /* 113dd8c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113dd8c5 call dword ptr [0x114022dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022dc))), 0x113dd8cbu);
  /* 113dd8cb jmp 0x113dd8ba */
  goto L_113dd8ba;
L_113dd8cd:;
  /* 113dd8cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd8d1 je 0x113dd911 */
  if (C.zf) goto L_113dd911;
  /* 113dd8d3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd8d7 je 0x113dd8f1 */
  if (C.zf) goto L_113dd8f1;
  /* 113dd8d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dd8dc push ecx */
  push32((uint32_t)(ECX));
  /* 113dd8dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd8e0 push edx */
  push32((uint32_t)(EDX));
  /* 113dd8e1 call 0x113ddc70 */
  push32(0x113dd8e6u); f_113ddc70();
  /* 113dd8e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd8e9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 113dd8ef jmp 0x113dd903 */
  goto L_113dd903;
L_113dd8f1:;
  /* 113dd8f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dd8f4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dd8f7 mov ecx, dword ptr [eax + 0x113fe4dc] */
  ECX = (r32((uint32_t)(EAX + 0x113fe4dc)));
  /* 113dd8fd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_113dd903:;
  /* 113dd903 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 113dd909 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113dd90c jmp 0x113ddc4b */
  goto L_113ddc4b;
L_113dd911:;
  /* 113dd911 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 113dd918 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113dd91f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd923 je 0x113ddc43 */
  if (C.zf) goto L_113ddc43;
  /* 113dd929 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dd92c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113dd92f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd932 jne 0x113ddb54 */
  if (!C.zf) goto L_113ddb54;
  /* 113dd938 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dd93b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 113dd93f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd942 jne 0x113ddb54 */
  if (!C.zf) goto L_113ddb54;
  /* 113dd948 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dd94b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 113dd94f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd952 jne 0x113ddb54 */
  if (!C.zf) goto L_113ddb54;
  /* 113dd958 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dd95b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_113dd961:;
  /* 113dd961 push 0x113fb084 */
  push32((uint32_t)(0x113fb084u));
  /* 113dd966 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113dd96c push ecx */
  push32((uint32_t)(ECX));
  /* 113dd96d call 0x113dfad0 */
  push32(0x113dd972u); f_113dfad0();
  /* 113dd972 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd975 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 113dd97b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd982 je 0x113dd9ad */
  if (C.zf) goto L_113dd9ad;
  /* 113dd984 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113dd98a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dd990 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 113dd996 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd99d je 0x113dd9ad */
  if (C.zf) goto L_113dd9ad;
  /* 113dd99f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113dd9a5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113dd9a8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd9ab jne 0x113dd9d3 */
  if (!C.zf) goto L_113dd9d3;
L_113dd9ad:;
  /* 113dd9ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd9b1 je 0x113dd9cc */
  if (C.zf) goto L_113dd9cc;
  /* 113dd9b3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113dd9b5 call 0x113d77d0 */
  push32(0x113dd9bau); f_113d77d0();
  /* 113dd9ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd9bd mov edx, dword ptr [0x113ff894] */
  EDX = (r32((uint32_t)(0x113ff894)));
  /* 113dd9c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dd9c6 mov dword ptr [0x113ff894], edx */
  w32((uint32_t)(0x113ff894), (EDX));
L_113dd9cc:;
  /* 113dd9cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dd9ce jmp 0x113ddc6b */
  goto L_113ddc6b;
L_113dd9d3:;
  /* 113dd9d3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 113dd9da jmp 0x113dd9e5 */
  goto L_113dd9e5;
L_113dd9dc:;
  /* 113dd9dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113dd9df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dd9e2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_113dd9e5:;
  /* 113dd9e5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dd9e9 jg 0x113dda33 */
  if ((!C.zf&&C.sf==C.of)) goto L_113dda33;
  /* 113dd9eb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 113dd9f1 push ecx */
  push32((uint32_t)(ECX));
  /* 113dd9f2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113dd9f8 push edx */
  push32((uint32_t)(EDX));
  /* 113dd9f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113dd9fc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dd9ff mov ecx, dword ptr [eax + 0x113fe4d8] */
  ECX = (r32((uint32_t)(EAX + 0x113fe4d8)));
  /* 113dda05 push ecx */
  push32((uint32_t)(ECX));
  /* 113dda06 call 0x113dfa90 */
  push32(0x113dda0bu); f_113dfa90();
  /* 113dda0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dda0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dda10 jne 0x113dda31 */
  if (!C.zf) goto L_113dda31;
  /* 113dda12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113dda15 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dda18 mov eax, dword ptr [edx + 0x113fe4d8] */
  EAX = (r32((uint32_t)(EDX + 0x113fe4d8)));
  /* 113dda1e push eax */
  push32((uint32_t)(EAX));
  /* 113dda1f call 0x113d6b60 */
  push32(0x113dda24u); f_113d6b60();
  /* 113dda24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dda27 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dda2d jne 0x113dda31 */
  if (!C.zf) goto L_113dda31;
  /* 113dda2f jmp 0x113dda33 */
  goto L_113dda33;
L_113dda31:;
  /* 113dda31 jmp 0x113dd9dc */
  goto L_113dd9dc;
L_113dda33:;
  /* 113dda33 push 0x113fb080 */
  push32((uint32_t)(0x113fb080u));
  /* 113dda38 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113dda3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dda41 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 113dda47 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113dda4d push edx */
  push32((uint32_t)(EDX));
  /* 113dda4e call 0x113dfa50 */
  push32(0x113dda53u); f_113dfa50();
  /* 113dda53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dda56 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 113dda5c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dda63 jne 0x113dda99 */
  if (!C.zf) goto L_113dda99;
  /* 113dda65 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113dda6b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113dda6e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dda71 je 0x113dda99 */
  if (C.zf) goto L_113dda99;
  /* 113dda73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dda77 je 0x113dda92 */
  if (C.zf) goto L_113dda92;
  /* 113dda79 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113dda7b call 0x113d77d0 */
  push32(0x113dda80u); f_113d77d0();
  /* 113dda80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dda83 mov edx, dword ptr [0x113ff894] */
  EDX = (r32((uint32_t)(0x113ff894)));
  /* 113dda89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dda8c mov dword ptr [0x113ff894], edx */
  w32((uint32_t)(0x113ff894), (EDX));
L_113dda92:;
  /* 113dda92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dda94 jmp 0x113ddc6b */
  goto L_113ddc6b;
L_113dda99:;
  /* 113dda99 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dda9d jg 0x113ddaea */
  if ((!C.zf&&C.sf==C.of)) goto L_113ddaea;
  /* 113dda9f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 113ddaa5 push eax */
  push32((uint32_t)(EAX));
  /* 113ddaa6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113ddaac push ecx */
  push32((uint32_t)(ECX));
  /* 113ddaad lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 113ddab3 push edx */
  push32((uint32_t)(EDX));
  /* 113ddab4 call 0x113d7550 */
  push32(0x113ddab9u); f_113d7550();
  /* 113ddab9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddabc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 113ddac2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 113ddaca lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 113ddad0 push ecx */
  push32((uint32_t)(ECX));
  /* 113ddad1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113ddad4 push edx */
  push32((uint32_t)(EDX));
  /* 113ddad5 call 0x113ddc70 */
  push32(0x113ddadau); f_113ddc70();
  /* 113ddada add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddadd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113ddadf je 0x113ddaea */
  if (C.zf) goto L_113ddaea;
  /* 113ddae1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113ddae4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddae7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_113ddaea:;
  /* 113ddaea mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113ddaf0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddaf6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 113ddafc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113ddb02 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113ddb05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113ddb07 je 0x113ddb18 */
  if (C.zf) goto L_113ddb18;
  /* 113ddb09 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113ddb0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddb12 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_113ddb18:;
  /* 113ddb18 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113ddb1e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113ddb21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113ddb23 jne 0x113dd961 */
  if (!C.zf) goto L_113dd961;
  /* 113ddb29 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113ddb2d je 0x113ddb3c */
  if (C.zf) goto L_113ddb3c;
  /* 113ddb2f call 0x113dde10 */
  push32(0x113ddb34u); f_113dde10();
  /* 113ddb34 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 113ddb3a jmp 0x113ddb46 */
  goto L_113ddb46;
L_113ddb3c:;
  /* 113ddb3c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_113ddb46:;
  /* 113ddb46 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 113ddb4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113ddb4f jmp 0x113ddc41 */
  goto L_113ddc41;
L_113ddb54:;
  /* 113ddb54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ddb57 push edx */
  push32((uint32_t)(EDX));
  /* 113ddb58 push 0 */
  push32((uint32_t)(0x0u));
  /* 113ddb5a push 0 */
  push32((uint32_t)(0x0u));
  /* 113ddb5c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 113ddb62 push eax */
  push32((uint32_t)(EAX));
  /* 113ddb63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113ddb66 push ecx */
  push32((uint32_t)(ECX));
  /* 113ddb67 call 0x113ddf10 */
  push32(0x113ddb6cu); f_113ddf10();
  /* 113ddb6c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddb6f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113ddb72 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113ddb76 je 0x113ddc41 */
  if (C.zf) goto L_113ddc41;
  /* 113ddb7c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113ddb83 jmp 0x113ddb8e */
  goto L_113ddb8e;
L_113ddb85:;
  /* 113ddb85 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113ddb88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddb8b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_113ddb8e:;
  /* 113ddb8e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113ddb92 jg 0x113ddbf0 */
  if ((!C.zf&&C.sf==C.of)) goto L_113ddbf0;
  /* 113ddb94 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113ddb98 je 0x113ddbee */
  if (C.zf) goto L_113ddbee;
  /* 113ddb9a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113ddb9d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113ddba0 mov ecx, dword ptr [eax + 0x113fe4dc] */
  ECX = (r32((uint32_t)(EAX + 0x113fe4dc)));
  /* 113ddba6 push ecx */
  push32((uint32_t)(ECX));
  /* 113ddba7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 113ddbad push edx */
  push32((uint32_t)(EDX));
  /* 113ddbae call 0x113df9c0 */
  push32(0x113ddbb3u); f_113df9c0();
  /* 113ddbb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddbb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113ddbb8 je 0x113ddbe5 */
  if (C.zf) goto L_113ddbe5;
  /* 113ddbba lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 113ddbc0 push eax */
  push32((uint32_t)(EAX));
  /* 113ddbc1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113ddbc4 push ecx */
  push32((uint32_t)(ECX));
  /* 113ddbc5 call 0x113ddc70 */
  push32(0x113ddbcau); f_113ddc70();
  /* 113ddbca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddbcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113ddbcf je 0x113ddbdc */
  if (C.zf) goto L_113ddbdc;
  /* 113ddbd1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113ddbd4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddbd7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113ddbda jmp 0x113ddbe3 */
  goto L_113ddbe3;
L_113ddbdc:;
  /* 113ddbdc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_113ddbe3:;
  /* 113ddbe3 jmp 0x113ddbee */
  goto L_113ddbee;
L_113ddbe5:;
  /* 113ddbe5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113ddbe8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddbeb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_113ddbee:;
  /* 113ddbee jmp 0x113ddb85 */
  goto L_113ddb85;
L_113ddbf0:;
  /* 113ddbf0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113ddbf4 je 0x113ddc1b */
  if (C.zf) goto L_113ddc1b;
  /* 113ddbf6 call 0x113dde10 */
  push32(0x113ddbfbu); f_113dde10();
  /* 113ddbfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113ddbfe push 2 */
  push32((uint32_t)(0x2u));
  /* 113ddc00 mov ecx, dword ptr [0x113fe4dc] */
  ECX = (r32((uint32_t)(0x113fe4dc)));
  /* 113ddc06 push ecx */
  push32((uint32_t)(ECX));
  /* 113ddc07 call 0x113d47c0 */
  push32(0x113ddc0cu); f_113d47c0();
  /* 113ddc0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddc0f mov dword ptr [0x113fe4dc], 0 */
  w32((uint32_t)(0x113fe4dc), (0x0u));
  /* 113ddc19 jmp 0x113ddc41 */
  goto L_113ddc41;
L_113ddc1b:;
  /* 113ddc1b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113ddc1f je 0x113ddc2e */
  if (C.zf) goto L_113ddc2e;
  /* 113ddc21 call 0x113dde10 */
  push32(0x113ddc26u); f_113dde10();
  /* 113ddc26 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 113ddc2c jmp 0x113ddc38 */
  goto L_113ddc38;
L_113ddc2e:;
  /* 113ddc2e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_113ddc38:;
  /* 113ddc38 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 113ddc3e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_113ddc41:;
  /* 113ddc41 jmp 0x113ddc4b */
  goto L_113ddc4b;
L_113ddc43:;
  /* 113ddc43 call 0x113dde10 */
  push32(0x113ddc48u); f_113dde10();
  /* 113ddc48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113ddc4b:;
  /* 113ddc4b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113ddc4f je 0x113ddc68 */
  if (C.zf) goto L_113ddc68;
  /* 113ddc51 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113ddc53 call 0x113d77d0 */
  push32(0x113ddc58u); f_113d77d0();
  /* 113ddc58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddc5b mov eax, dword ptr [0x113ff894] */
  EAX = (r32((uint32_t)(0x113ff894)));
  /* 113ddc60 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113ddc63 mov dword ptr [0x113ff894], eax */
  w32((uint32_t)(0x113ff894), (EAX));
L_113ddc68:;
  /* 113ddc68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_113ddc6b:;
  /* 113ddc6b mov esp, ebp */
  ESP = (EBP);
  /* 113ddc6d pop ebp */
  EBP = (pop32());
  /* 113ddc6e ret  */
  ESPCHK(0x113dd880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc70 @ 0x113ddc70 (403 bytes, 117 insns) */
void f_113ddc70(void) {
  FTRACE(0x113ddc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113ddc70 push ebp */
  push32((uint32_t)(EBP));
  /* 113ddc71 mov ebp, esp */
  EBP = (ESP);
  /* 113ddc73 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113ddc79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ddc7c push eax */
  push32((uint32_t)(EAX));
  /* 113ddc7d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 113ddc83 push ecx */
  push32((uint32_t)(ECX));
  /* 113ddc84 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 113ddc8a push edx */
  push32((uint32_t)(EDX));
  /* 113ddc8b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 113ddc91 push eax */
  push32((uint32_t)(EAX));
  /* 113ddc92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113ddc95 push ecx */
  push32((uint32_t)(ECX));
  /* 113ddc96 call 0x113ddf10 */
  push32(0x113ddc9bu); f_113ddf10();
  /* 113ddc9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddc9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113ddca0 jne 0x113ddca9 */
  if (!C.zf) goto L_113ddca9;
  /* 113ddca2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113ddca4 jmp 0x113dddff */
  goto L_113dddff;
L_113ddca9:;
  /* 113ddca9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 113ddcae push 0x113fb088 */
  push32((uint32_t)(0x113fb088u));
  /* 113ddcb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113ddcb5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 113ddcbb push edx */
  push32((uint32_t)(EDX));
  /* 113ddcbc call 0x113d6b60 */
  push32(0x113ddcc1u); f_113d6b60();
  /* 113ddcc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddcc4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddcc7 push eax */
  push32((uint32_t)(EAX));
  /* 113ddcc8 call 0x113d3d30 */
  push32(0x113ddccdu); f_113d3d30();
  /* 113ddccd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddcd0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113ddcd3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113ddcd7 jne 0x113ddce0 */
  if (!C.zf) goto L_113ddce0;
  /* 113ddcd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113ddcdb jmp 0x113dddff */
  goto L_113dddff;
L_113ddce0:;
  /* 113ddce0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ddce3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113ddce6 mov ecx, dword ptr [eax + 0x113fe4dc] */
  ECX = (r32((uint32_t)(EAX + 0x113fe4dc)));
  /* 113ddcec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113ddcef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ddcf2 mov eax, dword ptr [edx*4 + 0x113ff710] */
  EAX = (r32((uint32_t)(EDX*4 + 0x113ff710)));
  /* 113ddcf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113ddcfc push 6 */
  push32((uint32_t)(0x6u));
  /* 113ddcfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ddd01 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113ddd04 add ecx, 0x113ff760 */
  { uint32_t _a=(ECX),_b=(0x113ff760u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddd0a push ecx */
  push32((uint32_t)(ECX));
  /* 113ddd0b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 113ddd0e push edx */
  push32((uint32_t)(EDX));
  /* 113ddd0f call 0x113da610 */
  push32(0x113ddd14u); f_113da610();
  /* 113ddd14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddd17 mov eax, dword ptr [0x113ff728] */
  EAX = (r32((uint32_t)(0x113ff728)));
  /* 113ddd1c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113ddd1f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 113ddd25 push ecx */
  push32((uint32_t)(ECX));
  /* 113ddd26 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113ddd29 push edx */
  push32((uint32_t)(EDX));
  /* 113ddd2a call 0x113d6ce0 */
  push32(0x113ddd2fu); f_113d6ce0();
  /* 113ddd2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddd32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ddd35 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113ddd38 mov dword ptr [ecx + 0x113fe4dc], eax */
  w32((uint32_t)(ECX + 0x113fe4dc), (EAX));
  /* 113ddd3e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 113ddd44 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113ddd4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ddd4d mov dword ptr [eax*4 + 0x113ff710], edx */
  w32((uint32_t)(EAX*4 + 0x113ff710), (EDX));
  /* 113ddd54 push 6 */
  push32((uint32_t)(0x6u));
  /* 113ddd56 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 113ddd5c push ecx */
  push32((uint32_t)(ECX));
  /* 113ddd5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ddd60 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113ddd63 add edx, 0x113ff760 */
  { uint32_t _a=(EDX),_b=(0x113ff760u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddd69 push edx */
  push32((uint32_t)(EDX));
  /* 113ddd6a call 0x113da610 */
  push32(0x113ddd6fu); f_113da610();
  /* 113ddd6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddd72 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113ddd76 jne 0x113ddd83 */
  if (!C.zf) goto L_113ddd83;
  /* 113ddd78 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113ddd7e mov dword ptr [0x113ff728], eax */
  w32((uint32_t)(0x113ff728), (EAX));
L_113ddd83:;
  /* 113ddd83 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113ddd87 jne 0x113ddd95 */
  if (!C.zf) goto L_113ddd95;
  /* 113ddd89 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113ddd8f mov dword ptr [0x113ff72c], ecx */
  w32((uint32_t)(0x113ff72c), (ECX));
L_113ddd95:;
  /* 113ddd95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ddd98 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113ddd9b call dword ptr [edx + 0x113fe4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x113fe4e0))), 0x113ddda1u);
  /* 113ddda1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113ddda3 je 0x113ddddc */
  if (C.zf) goto L_113ddddc;
  /* 113ddda5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ddda8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dddab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dddae mov dword ptr [eax + 0x113fe4dc], ecx */
  w32((uint32_t)(EAX + 0x113fe4dc), (ECX));
  /* 113dddb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dddb6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dddb9 push edx */
  push32((uint32_t)(EDX));
  /* 113dddba call 0x113d47c0 */
  push32(0x113dddbfu); f_113d47c0();
  /* 113dddbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dddc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dddc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dddc8 mov dword ptr [eax*4 + 0x113ff710], ecx */
  w32((uint32_t)(EAX*4 + 0x113ff710), (ECX));
  /* 113dddcf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113dddd2 mov dword ptr [0x113ff728], edx */
  w32((uint32_t)(0x113ff728), (EDX));
  /* 113dddd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dddda jmp 0x113dddff */
  goto L_113dddff;
L_113ddddc:;
  /* 113ddddc cmp dword ptr [ebp - 0xc], 0x113fe3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x113fe3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113ddde3 je 0x113dddf3 */
  if (C.zf) goto L_113dddf3;
  /* 113ddde5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113ddde7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dddea push eax */
  push32((uint32_t)(EAX));
  /* 113dddeb call 0x113d47c0 */
  push32(0x113dddf0u); f_113d47c0();
  /* 113dddf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113dddf3:;
  /* 113dddf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dddf6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dddf9 mov eax, dword ptr [ecx + 0x113fe4dc] */
  EAX = (r32((uint32_t)(ECX + 0x113fe4dc)));
L_113dddff:;
  /* 113dddff mov esp, ebp */
  ESP = (EBP);
  /* 113dde01 pop ebp */
  EBP = (pop32());
  /* 113dde02 ret  */
  ESPCHK(0x113ddc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de10 @ 0x113dde10 (256 bytes, 72 insns) */
void f_113dde10(void) {
  FTRACE(0x113dde10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dde10 push ebp */
  push32((uint32_t)(EBP));
  /* 113dde11 mov ebp, esp */
  EBP = (ESP);
  /* 113dde13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dde16 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 113dde1d cmp dword ptr [0x113fe4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113fe4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dde24 jne 0x113dde44 */
  if (!C.zf) goto L_113dde44;
  /* 113dde26 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 113dde2b push 0x113fb088 */
  push32((uint32_t)(0x113fb088u));
  /* 113dde30 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dde32 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 113dde37 call 0x113d3d30 */
  push32(0x113dde3cu); f_113d3d30();
  /* 113dde3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dde3f mov dword ptr [0x113fe4dc], eax */
  w32((uint32_t)(0x113fe4dc), (EAX));
L_113dde44:;
  /* 113dde44 mov eax, dword ptr [0x113fe4dc] */
  EAX = (r32((uint32_t)(0x113fe4dc)));
  /* 113dde49 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 113dde4c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113dde53 jmp 0x113dde5e */
  goto L_113dde5e;
L_113dde55:;
  /* 113dde55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dde58 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dde5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113dde5e:;
  /* 113dde5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dde61 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dde64 mov eax, dword ptr [edx + 0x113fe4dc] */
  EAX = (r32((uint32_t)(EDX + 0x113fe4dc)));
  /* 113dde6a push eax */
  push32((uint32_t)(EAX));
  /* 113dde6b push 0x113fb094 */
  push32((uint32_t)(0x113fb094u));
  /* 113dde70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dde73 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113dde76 mov edx, dword ptr [ecx + 0x113fe4d8] */
  EDX = (r32((uint32_t)(ECX + 0x113fe4d8)));
  /* 113dde7c push edx */
  push32((uint32_t)(EDX));
  /* 113dde7d push 3 */
  push32((uint32_t)(0x3u));
  /* 113dde7f mov eax, dword ptr [0x113fe4dc] */
  EAX = (r32((uint32_t)(0x113fe4dc)));
  /* 113dde84 push eax */
  push32((uint32_t)(EAX));
  /* 113dde85 call 0x113de0b0 */
  push32(0x113dde8au); f_113de0b0();
  /* 113dde8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dde8d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dde91 jge 0x113dded9 */
  if ((C.sf==C.of)) goto L_113dded9;
  /* 113dde93 push 0x113fb080 */
  push32((uint32_t)(0x113fb080u));
  /* 113dde98 mov ecx, dword ptr [0x113fe4dc] */
  ECX = (r32((uint32_t)(0x113fe4dc)));
  /* 113dde9e push ecx */
  push32((uint32_t)(ECX));
  /* 113dde9f call 0x113d6cf0 */
  push32(0x113ddea4u); f_113d6cf0();
  /* 113ddea4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddea7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113ddeaa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddead imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113ddeb0 mov eax, dword ptr [edx + 0x113fe4dc] */
  EAX = (r32((uint32_t)(EDX + 0x113fe4dc)));
  /* 113ddeb6 push eax */
  push32((uint32_t)(EAX));
  /* 113ddeb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113ddeba imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113ddebd mov edx, dword ptr [ecx + 0x113fe4dc] */
  EDX = (r32((uint32_t)(ECX + 0x113fe4dc)));
  /* 113ddec3 push edx */
  push32((uint32_t)(EDX));
  /* 113ddec4 call 0x113df9c0 */
  push32(0x113ddec9u); f_113df9c0();
  /* 113ddec9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddecc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113ddece je 0x113dded7 */
  if (C.zf) goto L_113dded7;
  /* 113dded0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_113dded7:;
  /* 113dded7 jmp 0x113ddf07 */
  goto L_113ddf07;
L_113dded9:;
  /* 113dded9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113ddedd jne 0x113ddee6 */
  if (!C.zf) goto L_113ddee6;
  /* 113ddedf mov eax, dword ptr [0x113fe4dc] */
  EAX = (r32((uint32_t)(0x113fe4dc)));
  /* 113ddee4 jmp 0x113ddf0c */
  goto L_113ddf0c;
L_113ddee6:;
  /* 113ddee6 push 2 */
  push32((uint32_t)(0x2u));
  /* 113ddee8 mov eax, dword ptr [0x113fe4dc] */
  EAX = (r32((uint32_t)(0x113fe4dc)));
  /* 113ddeed push eax */
  push32((uint32_t)(EAX));
  /* 113ddeee call 0x113d47c0 */
  push32(0x113ddef3u); f_113d47c0();
  /* 113ddef3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddef6 mov dword ptr [0x113fe4dc], 0 */
  w32((uint32_t)(0x113fe4dc), (0x0u));
  /* 113ddf00 mov eax, dword ptr [0x113fe4f4] */
  EAX = (r32((uint32_t)(0x113fe4f4)));
  /* 113ddf05 jmp 0x113ddf0c */
  goto L_113ddf0c;
L_113ddf07:;
  /* 113ddf07 jmp 0x113dde55 */
  goto L_113dde55;
L_113ddf0c:;
  /* 113ddf0c mov esp, ebp */
  ESP = (EBP);
  /* 113ddf0e pop ebp */
  EBP = (pop32());
  /* 113ddf0f ret  */
  ESPCHK(0x113dde10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df10 @ 0x113ddf10 (388 bytes, 115 insns) */
void f_113ddf10(void) {
  FTRACE(0x113ddf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113ddf10 push ebp */
  push32((uint32_t)(EBP));
  /* 113ddf11 mov ebp, esp */
  EBP = (ESP);
  /* 113ddf13 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113ddf19 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113ddf1d jne 0x113ddf26 */
  if (!C.zf) goto L_113ddf26;
  /* 113ddf1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113ddf21 jmp 0x113de090 */
  goto L_113de090;
L_113ddf26:;
  /* 113ddf26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ddf29 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113ddf2c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113ddf2f jne 0x113ddf80 */
  if (!C.zf) goto L_113ddf80;
  /* 113ddf31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ddf34 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 113ddf38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113ddf3a jne 0x113ddf80 */
  if (!C.zf) goto L_113ddf80;
  /* 113ddf3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113ddf3f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 113ddf42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113ddf45 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 113ddf49 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113ddf4d je 0x113ddf69 */
  if (C.zf) goto L_113ddf69;
  /* 113ddf4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113ddf52 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 113ddf57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113ddf5a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 113ddf60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113ddf63 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_113ddf69:;
  /* 113ddf69 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113ddf6d je 0x113ddf78 */
  if (C.zf) goto L_113ddf78;
  /* 113ddf6f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113ddf72 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_113ddf78:;
  /* 113ddf78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113ddf7b jmp 0x113de090 */
  goto L_113de090;
L_113ddf80:;
  /* 113ddf80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ddf83 push ecx */
  push32((uint32_t)(ECX));
  /* 113ddf84 push 0x113fe450 */
  push32((uint32_t)(0x113fe450u));
  /* 113ddf89 call 0x113df9c0 */
  push32(0x113ddf8eu); f_113df9c0();
  /* 113ddf8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddf91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113ddf93 je 0x113de048 */
  if (C.zf) goto L_113de048;
  /* 113ddf99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ddf9c push edx */
  push32((uint32_t)(EDX));
  /* 113ddf9d push 0x113fe3cc */
  push32((uint32_t)(0x113fe3ccu));
  /* 113ddfa2 call 0x113df9c0 */
  push32(0x113ddfa7u); f_113df9c0();
  /* 113ddfa7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddfaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113ddfac je 0x113de048 */
  if (C.zf) goto L_113de048;
  /* 113ddfb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ddfb5 push eax */
  push32((uint32_t)(EAX));
  /* 113ddfb6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 113ddfbc push ecx */
  push32((uint32_t)(ECX));
  /* 113ddfbd call 0x113de100 */
  push32(0x113ddfc2u); f_113de100();
  /* 113ddfc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddfc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113ddfc7 je 0x113ddfd0 */
  if (C.zf) goto L_113ddfd0;
  /* 113ddfc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113ddfcb jmp 0x113de090 */
  goto L_113de090;
L_113ddfd0:;
  /* 113ddfd0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 113ddfd6 push edx */
  push32((uint32_t)(EDX));
  /* 113ddfd7 push 0x113ff738 */
  push32((uint32_t)(0x113ff738u));
  /* 113ddfdc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 113ddfe2 push eax */
  push32((uint32_t)(EAX));
  /* 113ddfe3 call 0x113dfb10 */
  push32(0x113ddfe8u); f_113dfb10();
  /* 113ddfe8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ddfeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113ddfed jne 0x113ddff6 */
  if (!C.zf) goto L_113ddff6;
  /* 113ddfef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113ddff1 jmp 0x113de090 */
  goto L_113de090;
L_113ddff6:;
  /* 113ddff6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113ddff8 mov cx, word ptr [0x113ff73c] */
  CX = (r16((uint32_t)(0x113ff73c)));
  /* 113ddfff mov dword ptr [0x113ff740], ecx */
  w32((uint32_t)(0x113ff740), (ECX));
  /* 113de005 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 113de00b push edx */
  push32((uint32_t)(EDX));
  /* 113de00c push 0x113fe450 */
  push32((uint32_t)(0x113fe450u));
  /* 113de011 call 0x113de260 */
  push32(0x113de016u); f_113de260();
  /* 113de016 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de019 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de01c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113de01f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113de021 je 0x113de036 */
  if (C.zf) goto L_113de036;
  /* 113de023 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de026 push edx */
  push32((uint32_t)(EDX));
  /* 113de027 push 0x113fe3cc */
  push32((uint32_t)(0x113fe3ccu));
  /* 113de02c call 0x113d6ce0 */
  push32(0x113de031u); f_113d6ce0();
  /* 113de031 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de034 jmp 0x113de048 */
  goto L_113de048;
L_113de036:;
  /* 113de036 push 0x113fe450 */
  push32((uint32_t)(0x113fe450u));
  /* 113de03b push 0x113fe3cc */
  push32((uint32_t)(0x113fe3ccu));
  /* 113de040 call 0x113d6ce0 */
  push32(0x113de045u); f_113d6ce0();
  /* 113de045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113de048:;
  /* 113de048 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de04c je 0x113de061 */
  if (C.zf) goto L_113de061;
  /* 113de04e push 6 */
  push32((uint32_t)(0x6u));
  /* 113de050 push 0x113ff738 */
  push32((uint32_t)(0x113ff738u));
  /* 113de055 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113de058 push eax */
  push32((uint32_t)(EAX));
  /* 113de059 call 0x113da610 */
  push32(0x113de05eu); f_113da610();
  /* 113de05e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113de061:;
  /* 113de061 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de065 je 0x113de07a */
  if (C.zf) goto L_113de07a;
  /* 113de067 push 4 */
  push32((uint32_t)(0x4u));
  /* 113de069 push 0x113ff740 */
  push32((uint32_t)(0x113ff740u));
  /* 113de06e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113de071 push ecx */
  push32((uint32_t)(ECX));
  /* 113de072 call 0x113da610 */
  push32(0x113de077u); f_113da610();
  /* 113de077 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113de07a:;
  /* 113de07a push 0x113fe450 */
  push32((uint32_t)(0x113fe450u));
  /* 113de07f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113de082 push edx */
  push32((uint32_t)(EDX));
  /* 113de083 call 0x113d6ce0 */
  push32(0x113de088u); f_113d6ce0();
  /* 113de088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de08b mov eax, 0x113fe450 */
  EAX = (0x113fe450u);
L_113de090:;
  /* 113de090 mov esp, ebp */
  ESP = (EBP);
  /* 113de092 pop ebp */
  EBP = (pop32());
  /* 113de093 ret  */
  ESPCHK(0x113ddf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0a0 @ 0x113de0a0 (7 bytes, 5 insns) */
void f_113de0a0(void) {
  FTRACE(0x113de0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113de0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113de0a1 mov ebp, esp */
  EBP = (ESP);
  /* 113de0a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113de0a5 pop ebp */
  EBP = (pop32());
  /* 113de0a6 ret  */
  ESPCHK(0x113de0a0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x113de0b0 (79 bytes, 28 insns) */
void f_113de0b0(void) {
  FTRACE(0x113de0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113de0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113de0b1 mov ebp, esp */
  EBP = (ESP);
  /* 113de0b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113de0b6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 113de0b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113de0bc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113de0c3 jmp 0x113de0ce */
  goto L_113de0ce;
L_113de0c5:;
  /* 113de0c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113de0c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de0cb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_113de0ce:;
  /* 113de0ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113de0d1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de0d4 jge 0x113de0f4 */
  if ((C.sf==C.of)) goto L_113de0f4;
  /* 113de0d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de0d9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de0dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113de0df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de0e2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 113de0e5 push edx */
  push32((uint32_t)(EDX));
  /* 113de0e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de0e9 push eax */
  push32((uint32_t)(EAX));
  /* 113de0ea call 0x113d6cf0 */
  push32(0x113de0efu); f_113d6cf0();
  /* 113de0ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de0f2 jmp 0x113de0c5 */
  goto L_113de0c5;
L_113de0f4:;
  /* 113de0f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113de0fb mov esp, ebp */
  ESP = (EBP);
  /* 113de0fd pop ebp */
  EBP = (pop32());
  /* 113de0fe ret  */
  ESPCHK(0x113de0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e100 @ 0x113de100 (349 bytes, 122 insns) */
void f_113de100(void) {
  FTRACE(0x113de100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113de100 push ebp */
  push32((uint32_t)(EBP));
  /* 113de101 mov ebp, esp */
  EBP = (ESP);
  /* 113de103 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113de106 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 113de10b push 0 */
  push32((uint32_t)(0x0u));
  /* 113de10d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de110 push eax */
  push32((uint32_t)(EAX));
  /* 113de111 call 0x113d7aa0 */
  push32(0x113de116u); f_113d7aa0();
  /* 113de116 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de119 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113de11c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113de11f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113de121 jne 0x113de12a */
  if (!C.zf) goto L_113de12a;
  /* 113de123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113de125 jmp 0x113de259 */
  goto L_113de259;
L_113de12a:;
  /* 113de12a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113de12d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113de130 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de133 jne 0x113de160 */
  if (!C.zf) goto L_113de160;
  /* 113de135 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113de138 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 113de13c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113de13e je 0x113de160 */
  if (C.zf) goto L_113de160;
  /* 113de140 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113de143 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de146 push ecx */
  push32((uint32_t)(ECX));
  /* 113de147 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de14a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de150 push edx */
  push32((uint32_t)(EDX));
  /* 113de151 call 0x113d6ce0 */
  push32(0x113de156u); f_113d6ce0();
  /* 113de156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de159 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113de15b jmp 0x113de259 */
  goto L_113de259;
L_113de160:;
  /* 113de160 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113de167 jmp 0x113de172 */
  goto L_113de172;
L_113de169:;
  /* 113de169 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de16c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de16f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113de172:;
  /* 113de172 push 0x113fb098 */
  push32((uint32_t)(0x113fb098u));
  /* 113de177 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113de17a push ecx */
  push32((uint32_t)(ECX));
  /* 113de17b call 0x113dfa50 */
  push32(0x113de180u); f_113dfa50();
  /* 113de180 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de183 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113de186 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de18a jne 0x113de194 */
  if (!C.zf) goto L_113de194;
  /* 113de18c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113de18f jmp 0x113de259 */
  goto L_113de259;
L_113de194:;
  /* 113de194 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113de197 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de19a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113de19c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 113de19f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de1a3 jne 0x113de1ca */
  if (!C.zf) goto L_113de1ca;
  /* 113de1a5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de1a9 jge 0x113de1ca */
  if ((C.sf==C.of)) goto L_113de1ca;
  /* 113de1ab movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113de1af cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de1b2 je 0x113de1ca */
  if (C.zf) goto L_113de1ca;
  /* 113de1b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de1b7 push edx */
  push32((uint32_t)(EDX));
  /* 113de1b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113de1bb push eax */
  push32((uint32_t)(EAX));
  /* 113de1bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de1bf push ecx */
  push32((uint32_t)(ECX));
  /* 113de1c0 call 0x113d7550 */
  push32(0x113de1c5u); f_113d7550();
  /* 113de1c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de1c8 jmp 0x113de230 */
  goto L_113de230;
L_113de1ca:;
  /* 113de1ca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de1ce jne 0x113de1f8 */
  if (!C.zf) goto L_113de1f8;
  /* 113de1d0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de1d4 jge 0x113de1f8 */
  if ((C.sf==C.of)) goto L_113de1f8;
  /* 113de1d6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113de1da cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de1dd je 0x113de1f8 */
  if (C.zf) goto L_113de1f8;
  /* 113de1df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de1e2 push eax */
  push32((uint32_t)(EAX));
  /* 113de1e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113de1e6 push ecx */
  push32((uint32_t)(ECX));
  /* 113de1e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de1ea add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de1ed push edx */
  push32((uint32_t)(EDX));
  /* 113de1ee call 0x113d7550 */
  push32(0x113de1f3u); f_113d7550();
  /* 113de1f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de1f6 jmp 0x113de230 */
  goto L_113de230;
L_113de1f8:;
  /* 113de1f8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de1fc jne 0x113de22b */
  if (!C.zf) goto L_113de22b;
  /* 113de1fe movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113de202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113de204 je 0x113de20f */
  if (C.zf) goto L_113de20f;
  /* 113de206 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113de20a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de20d jne 0x113de22b */
  if (!C.zf) goto L_113de22b;
L_113de20f:;
  /* 113de20f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de212 push edx */
  push32((uint32_t)(EDX));
  /* 113de213 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113de216 push eax */
  push32((uint32_t)(EAX));
  /* 113de217 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de21a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de220 push ecx */
  push32((uint32_t)(ECX));
  /* 113de221 call 0x113d7550 */
  push32(0x113de226u); f_113d7550();
  /* 113de226 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de229 jmp 0x113de230 */
  goto L_113de230;
L_113de22b:;
  /* 113de22b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113de22e jmp 0x113de259 */
  goto L_113de259;
L_113de230:;
  /* 113de230 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113de234 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de237 jne 0x113de23b */
  if (!C.zf) goto L_113de23b;
  /* 113de239 jmp 0x113de257 */
  goto L_113de257;
L_113de23b:;
  /* 113de23b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113de23f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113de241 jne 0x113de245 */
  if (!C.zf) goto L_113de245;
  /* 113de243 jmp 0x113de257 */
  goto L_113de257;
L_113de245:;
  /* 113de245 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de248 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113de24b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 113de24f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 113de252 jmp 0x113de169 */
  goto L_113de169;
L_113de257:;
  /* 113de257 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113de259:;
  /* 113de259 mov esp, ebp */
  ESP = (EBP);
  /* 113de25b pop ebp */
  EBP = (pop32());
  /* 113de25c ret  */
  ESPCHK(0x113de100u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x113de260 (101 bytes, 36 insns) */
void f_113de260(void) {
  FTRACE(0x113de260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113de260 push ebp */
  push32((uint32_t)(EBP));
  /* 113de261 mov ebp, esp */
  EBP = (ESP);
  /* 113de263 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113de266 push eax */
  push32((uint32_t)(EAX));
  /* 113de267 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de26a push ecx */
  push32((uint32_t)(ECX));
  /* 113de26b call 0x113d6ce0 */
  push32(0x113de270u); f_113d6ce0();
  /* 113de270 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de273 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113de276 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 113de27a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113de27c je 0x113de298 */
  if (C.zf) goto L_113de298;
  /* 113de27e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113de281 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de284 push ecx */
  push32((uint32_t)(ECX));
  /* 113de285 push 0x113fb0a0 */
  push32((uint32_t)(0x113fb0a0u));
  /* 113de28a push 2 */
  push32((uint32_t)(0x2u));
  /* 113de28c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de28f push edx */
  push32((uint32_t)(EDX));
  /* 113de290 call 0x113de0b0 */
  push32(0x113de295u); f_113de0b0();
  /* 113de295 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113de298:;
  /* 113de298 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113de29b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 113de2a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113de2a4 je 0x113de2c3 */
  if (C.zf) goto L_113de2c3;
  /* 113de2a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113de2a9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de2af push edx */
  push32((uint32_t)(EDX));
  /* 113de2b0 push 0x113fb09c */
  push32((uint32_t)(0x113fb09cu));
  /* 113de2b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113de2b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de2ba push eax */
  push32((uint32_t)(EAX));
  /* 113de2bb call 0x113de0b0 */
  push32(0x113de2c0u); f_113de0b0();
  /* 113de2c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113de2c3:;
  /* 113de2c3 pop ebp */
  EBP = (pop32());
  /* 113de2c4 ret  */
  ESPCHK(0x113de260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2d0 @ 0x113de2d0 (130 bytes, 50 insns) */
void f_113de2d0(void) {
  FTRACE(0x113de2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113de2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113de2d1 mov ebp, esp */
  EBP = (ESP);
  /* 113de2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 113de2d4 push ebx */
  push32((uint32_t)(EBX));
  /* 113de2d5 push esi */
  push32((uint32_t)(ESI));
  /* 113de2d6 push edi */
  push32((uint32_t)(EDI));
  /* 113de2d7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113de2de:;
  /* 113de2de cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de2e2 jne 0x113de302 */
  if (!C.zf) goto L_113de302;
  /* 113de2e4 push 0x113fb0b0 */
  push32((uint32_t)(0x113fb0b0u));
  /* 113de2e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113de2eb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 113de2ed push 0x113fb0a4 */
  push32((uint32_t)(0x113fb0a4u));
  /* 113de2f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113de2f4 call 0x113d2df0 */
  push32(0x113de2f9u); f_113d2df0();
  /* 113de2f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de2fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de2ff jne 0x113de302 */
  if (!C.zf) goto L_113de302;
  /* 113de301 int3  */
  x86_unimpl("int3 @ 0x113de301");
L_113de302:;
  /* 113de302 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113de304 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113de306 jne 0x113de2de */
  if (!C.zf) goto L_113de2de;
  /* 113de308 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de30b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113de30e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 113de311 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113de313 je 0x113de321 */
  if (C.zf) goto L_113de321;
  /* 113de315 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de318 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 113de31f jmp 0x113de348 */
  goto L_113de348;
L_113de321:;
  /* 113de321 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de324 push ecx */
  push32((uint32_t)(ECX));
  /* 113de325 call 0x113dcb40 */
  push32(0x113de32au); f_113dcb40();
  /* 113de32a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de32d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de330 push edx */
  push32((uint32_t)(EDX));
  /* 113de331 call 0x113de360 */
  push32(0x113de336u); f_113de360();
  /* 113de336 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de339 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113de33c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de33f push eax */
  push32((uint32_t)(EAX));
  /* 113de340 call 0x113dcbb0 */
  push32(0x113de345u); f_113dcbb0();
  /* 113de345 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113de348:;
  /* 113de348 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de34b pop edi */
  EDI = (pop32());
  /* 113de34c pop esi */
  ESI = (pop32());
  /* 113de34d pop ebx */
  EBX = (pop32());
  /* 113de34e mov esp, ebp */
  ESP = (EBP);
  /* 113de350 pop ebp */
  EBP = (pop32());
  /* 113de351 ret  */
  ESPCHK(0x113de2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e360 @ 0x113de360 (190 bytes, 67 insns) */
void f_113de360(void) {
  FTRACE(0x113de360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113de360 push ebp */
  push32((uint32_t)(EBP));
  /* 113de361 mov ebp, esp */
  EBP = (ESP);
  /* 113de363 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113de366 push ebx */
  push32((uint32_t)(EBX));
  /* 113de367 push esi */
  push32((uint32_t)(ESI));
  /* 113de368 push edi */
  push32((uint32_t)(EDI));
  /* 113de369 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113de370 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de373 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113de376:;
  /* 113de376 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de37a jne 0x113de39a */
  if (!C.zf) goto L_113de39a;
  /* 113de37c push 0x113faf54 */
  push32((uint32_t)(0x113faf54u));
  /* 113de381 push 0 */
  push32((uint32_t)(0x0u));
  /* 113de383 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 113de385 push 0x113fb0a4 */
  push32((uint32_t)(0x113fb0a4u));
  /* 113de38a push 2 */
  push32((uint32_t)(0x2u));
  /* 113de38c call 0x113d2df0 */
  push32(0x113de391u); f_113d2df0();
  /* 113de391 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de394 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de397 jne 0x113de39a */
  if (!C.zf) goto L_113de39a;
  /* 113de399 int3  */
  x86_unimpl("int3 @ 0x113de399");
L_113de39a:;
  /* 113de39a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113de39c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113de39e jne 0x113de376 */
  if (!C.zf) goto L_113de376;
  /* 113de3a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113de3a3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 113de3a6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 113de3ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113de3ad je 0x113de40a */
  if (C.zf) goto L_113de40a;
  /* 113de3af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113de3b2 push ecx */
  push32((uint32_t)(ECX));
  /* 113de3b3 call 0x113dd660 */
  push32(0x113de3b8u); f_113dd660();
  /* 113de3b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de3bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113de3be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113de3c1 push edx */
  push32((uint32_t)(EDX));
  /* 113de3c2 call 0x113e09e0 */
  push32(0x113de3c7u); f_113e09e0();
  /* 113de3c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de3ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113de3cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113de3d0 push ecx */
  push32((uint32_t)(ECX));
  /* 113de3d1 call 0x113e08b0 */
  push32(0x113de3d6u); f_113e08b0();
  /* 113de3d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de3d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113de3db jge 0x113de3e6 */
  if ((C.sf==C.of)) goto L_113de3e6;
  /* 113de3dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113de3e4 jmp 0x113de40a */
  goto L_113de40a;
L_113de3e6:;
  /* 113de3e6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113de3e9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de3ed je 0x113de40a */
  if (C.zf) goto L_113de40a;
  /* 113de3ef push 2 */
  push32((uint32_t)(0x2u));
  /* 113de3f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113de3f4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 113de3f7 push ecx */
  push32((uint32_t)(ECX));
  /* 113de3f8 call 0x113d47c0 */
  push32(0x113de3fdu); f_113d47c0();
  /* 113de3fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de400 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113de403 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_113de40a:;
  /* 113de40a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113de40d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 113de414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de417 pop edi */
  EDI = (pop32());
  /* 113de418 pop esi */
  ESI = (pop32());
  /* 113de419 pop ebx */
  EBX = (pop32());
  /* 113de41a mov esp, ebp */
  ESP = (EBP);
  /* 113de41c pop ebp */
  EBP = (pop32());
  /* 113de41d ret  */
  ESPCHK(0x113de360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e420 @ 0x113de420 (210 bytes, 63 insns) */
void f_113de420(void) {
  FTRACE(0x113de420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113de420 push ebp */
  push32((uint32_t)(EBP));
  /* 113de421 mov ebp, esp */
  EBP = (ESP);
  /* 113de423 push ecx */
  push32((uint32_t)(ECX));
  /* 113de424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de427 cmp eax, dword ptr [0x1140103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1140103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de42d jae 0x113de451 */
  if (!C.cf) goto L_113de451;
  /* 113de42f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de432 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113de435 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de438 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113de43b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113de43e mov eax, dword ptr [ecx*4 + 0x11400f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11400f00)));
  /* 113de445 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 113de44a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113de44d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113de44f jne 0x113de464 */
  if (!C.zf) goto L_113de464;
L_113de451:;
  /* 113de451 call 0x113dbc00 */
  push32(0x113de456u); f_113dbc00();
  /* 113de456 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 113de45c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113de45f jmp 0x113de4ee */
  goto L_113de4ee;
L_113de464:;
  /* 113de464 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de467 push edx */
  push32((uint32_t)(EDX));
  /* 113de468 call 0x113dd420 */
  push32(0x113de46du); f_113dd420();
  /* 113de46d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de470 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de473 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113de476 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de479 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113de47c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113de47f mov edx, dword ptr [eax*4 + 0x11400f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11400f00)));
  /* 113de486 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 113de48b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 113de48e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113de490 je 0x113de4cd */
  if (C.zf) goto L_113de4cd;
  /* 113de492 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de495 push ecx */
  push32((uint32_t)(ECX));
  /* 113de496 call 0x113dd2a0 */
  push32(0x113de49bu); f_113dd2a0();
  /* 113de49b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de49e push eax */
  push32((uint32_t)(EAX));
  /* 113de49f call dword ptr [0x114022d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022d8))), 0x113de4a5u);
  /* 113de4a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113de4a7 jne 0x113de4b4 */
  if (!C.zf) goto L_113de4b4;
  /* 113de4a9 call dword ptr [0x11402390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402390))), 0x113de4afu);
  /* 113de4af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113de4b2 jmp 0x113de4bb */
  goto L_113de4bb;
L_113de4b4:;
  /* 113de4b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113de4bb:;
  /* 113de4bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de4bf jne 0x113de4c3 */
  if (!C.zf) goto L_113de4c3;
  /* 113de4c1 jmp 0x113de4df */
  goto L_113de4df;
L_113de4c3:;
  /* 113de4c3 call 0x113dbc10 */
  push32(0x113de4c8u); f_113dbc10();
  /* 113de4c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de4cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_113de4cd:;
  /* 113de4cd call 0x113dbc00 */
  push32(0x113de4d2u); f_113dbc00();
  /* 113de4d2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 113de4d8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113de4df:;
  /* 113de4df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de4e2 push eax */
  push32((uint32_t)(EAX));
  /* 113de4e3 call 0x113dd4b0 */
  push32(0x113de4e8u); f_113dd4b0();
  /* 113de4e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de4eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113de4ee:;
  /* 113de4ee mov esp, ebp */
  ESP = (EBP);
  /* 113de4f0 pop ebp */
  EBP = (pop32());
  /* 113de4f1 ret  */
  ESPCHK(0x113de420u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x113de500 (219 bytes, 64 insns) */
void f_113de500(void) {
  FTRACE(0x113de500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113de500 push ebp */
  push32((uint32_t)(EBP));
  /* 113de501 mov ebp, esp */
  EBP = (ESP);
  /* 113de503 push ecx */
  push32((uint32_t)(ECX));
  /* 113de504 cmp dword ptr [0x113ff724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de50b je 0x113de5a1 */
  if (C.zf) goto L_113de5a1;
  /* 113de511 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 113de513 push 0x113fb0c0 */
  push32((uint32_t)(0x113fb0c0u));
  /* 113de518 push 2 */
  push32((uint32_t)(0x2u));
  /* 113de51a push 0xac */
  push32((uint32_t)(0xacu));
  /* 113de51f push 1 */
  push32((uint32_t)(0x1u));
  /* 113de521 call 0x113d4140 */
  push32(0x113de526u); f_113d4140();
  /* 113de526 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de529 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113de52c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de530 jne 0x113de53c */
  if (!C.zf) goto L_113de53c;
  /* 113de532 mov eax, 1 */
  EAX = (0x1u);
  /* 113de537 jmp 0x113de5d7 */
  goto L_113de5d7;
L_113de53c:;
  /* 113de53c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de53f push eax */
  push32((uint32_t)(EAX));
  /* 113de540 call 0x113de5e0 */
  push32(0x113de545u); f_113de5e0();
  /* 113de545 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de548 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113de54a je 0x113de56d */
  if (C.zf) goto L_113de56d;
  /* 113de54c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de54f push ecx */
  push32((uint32_t)(ECX));
  /* 113de550 call 0x113deb70 */
  push32(0x113de555u); f_113deb70();
  /* 113de555 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de558 push 2 */
  push32((uint32_t)(0x2u));
  /* 113de55a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de55d push edx */
  push32((uint32_t)(EDX));
  /* 113de55e call 0x113d47c0 */
  push32(0x113de563u); f_113d47c0();
  /* 113de563 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de566 mov eax, 1 */
  EAX = (0x1u);
  /* 113de56b jmp 0x113de5d7 */
  goto L_113de5d7;
L_113de56d:;
  /* 113de56d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de570 mov dword ptr [0x113fec98], eax */
  w32((uint32_t)(0x113fec98), (EAX));
  /* 113de575 mov ecx, dword ptr [0x113ff744] */
  ECX = (r32((uint32_t)(0x113ff744)));
  /* 113de57b push ecx */
  push32((uint32_t)(ECX));
  /* 113de57c call 0x113deb70 */
  push32(0x113de581u); f_113deb70();
  /* 113de581 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de584 push 2 */
  push32((uint32_t)(0x2u));
  /* 113de586 mov edx, dword ptr [0x113ff744] */
  EDX = (r32((uint32_t)(0x113ff744)));
  /* 113de58c push edx */
  push32((uint32_t)(EDX));
  /* 113de58d call 0x113d47c0 */
  push32(0x113de592u); f_113d47c0();
  /* 113de592 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de595 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de598 mov dword ptr [0x113ff744], eax */
  w32((uint32_t)(0x113ff744), (EAX));
  /* 113de59d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113de59f jmp 0x113de5d7 */
  goto L_113de5d7;
L_113de5a1:;
  /* 113de5a1 mov dword ptr [0x113fec98], 0x113feca0 */
  w32((uint32_t)(0x113fec98), (0x113feca0u));
  /* 113de5ab mov ecx, dword ptr [0x113ff744] */
  ECX = (r32((uint32_t)(0x113ff744)));
  /* 113de5b1 push ecx */
  push32((uint32_t)(ECX));
  /* 113de5b2 call 0x113deb70 */
  push32(0x113de5b7u); f_113deb70();
  /* 113de5b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de5ba push 2 */
  push32((uint32_t)(0x2u));
  /* 113de5bc mov edx, dword ptr [0x113ff744] */
  EDX = (r32((uint32_t)(0x113ff744)));
  /* 113de5c2 push edx */
  push32((uint32_t)(EDX));
  /* 113de5c3 call 0x113d47c0 */
  push32(0x113de5c8u); f_113d47c0();
  /* 113de5c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de5cb mov dword ptr [0x113ff744], 0 */
  w32((uint32_t)(0x113ff744), (0x0u));
  /* 113de5d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113de5d7:;
  /* 113de5d7 mov esp, ebp */
  ESP = (EBP);
  /* 113de5d9 pop ebp */
  EBP = (pop32());
  /* 113de5da ret  */
  ESPCHK(0x113de500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5e0 @ 0x113de5e0 (1423 bytes, 533 insns) */
void f_113de5e0(void) {
  FTRACE(0x113de5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113de5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113de5e1 mov ebp, esp */
  EBP = (ESP);
  /* 113de5e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113de5e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113de5ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113de5ef mov ax, word ptr [0x113ff77e] */
  AX = (r16((uint32_t)(0x113ff77e)));
  /* 113de5f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113de5f8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113de5fa mov cx, word ptr [0x113ff780] */
  CX = (r16((uint32_t)(0x113ff780)));
  /* 113de601 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113de604 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113de608 jne 0x113de612 */
  if (!C.zf) goto L_113de612;
  /* 113de60a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113de60d jmp 0x113deb6b */
  goto L_113deb6b;
L_113de612:;
  /* 113de612 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de615 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de618 push edx */
  push32((uint32_t)(EDX));
  /* 113de619 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 113de61b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de61e push eax */
  push32((uint32_t)(EAX));
  /* 113de61f push 1 */
  push32((uint32_t)(0x1u));
  /* 113de621 call 0x113e1ef0 */
  push32(0x113de626u); f_113e1ef0();
  /* 113de626 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de629 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de62c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de62e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de631 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de634 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de637 push edx */
  push32((uint32_t)(EDX));
  /* 113de638 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 113de63a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de63d push eax */
  push32((uint32_t)(EAX));
  /* 113de63e push 1 */
  push32((uint32_t)(0x1u));
  /* 113de640 call 0x113e1ef0 */
  push32(0x113de645u); f_113e1ef0();
  /* 113de645 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de648 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de64b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de64d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de650 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de653 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de656 push edx */
  push32((uint32_t)(EDX));
  /* 113de657 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 113de659 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de65c push eax */
  push32((uint32_t)(EAX));
  /* 113de65d push 1 */
  push32((uint32_t)(0x1u));
  /* 113de65f call 0x113e1ef0 */
  push32(0x113de664u); f_113e1ef0();
  /* 113de664 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de667 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de66a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de66c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de66f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de672 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de675 push edx */
  push32((uint32_t)(EDX));
  /* 113de676 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 113de678 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de67b push eax */
  push32((uint32_t)(EAX));
  /* 113de67c push 1 */
  push32((uint32_t)(0x1u));
  /* 113de67e call 0x113e1ef0 */
  push32(0x113de683u); f_113e1ef0();
  /* 113de683 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de686 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de689 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de68b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de68e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de691 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de694 push edx */
  push32((uint32_t)(EDX));
  /* 113de695 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 113de697 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de69a push eax */
  push32((uint32_t)(EAX));
  /* 113de69b push 1 */
  push32((uint32_t)(0x1u));
  /* 113de69d call 0x113e1ef0 */
  push32(0x113de6a2u); f_113e1ef0();
  /* 113de6a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de6a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de6a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de6aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de6ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de6b0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de6b3 push edx */
  push32((uint32_t)(EDX));
  /* 113de6b4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 113de6b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de6b9 push eax */
  push32((uint32_t)(EAX));
  /* 113de6ba push 1 */
  push32((uint32_t)(0x1u));
  /* 113de6bc call 0x113e1ef0 */
  push32(0x113de6c1u); f_113e1ef0();
  /* 113de6c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de6c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de6c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de6c9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de6cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de6cf push edx */
  push32((uint32_t)(EDX));
  /* 113de6d0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 113de6d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de6d5 push eax */
  push32((uint32_t)(EAX));
  /* 113de6d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113de6d8 call 0x113e1ef0 */
  push32(0x113de6ddu); f_113e1ef0();
  /* 113de6dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de6e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de6e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de6e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de6e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de6eb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de6ee push edx */
  push32((uint32_t)(EDX));
  /* 113de6ef push 0x2a */
  push32((uint32_t)(0x2au));
  /* 113de6f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de6f4 push eax */
  push32((uint32_t)(EAX));
  /* 113de6f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 113de6f7 call 0x113e1ef0 */
  push32(0x113de6fcu); f_113e1ef0();
  /* 113de6fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de6ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de702 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de704 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de707 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de70a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de70d push edx */
  push32((uint32_t)(EDX));
  /* 113de70e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 113de710 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de713 push eax */
  push32((uint32_t)(EAX));
  /* 113de714 push 1 */
  push32((uint32_t)(0x1u));
  /* 113de716 call 0x113e1ef0 */
  push32(0x113de71bu); f_113e1ef0();
  /* 113de71b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de71e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de721 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de723 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de726 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de729 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de72c push edx */
  push32((uint32_t)(EDX));
  /* 113de72d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 113de72f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de732 push eax */
  push32((uint32_t)(EAX));
  /* 113de733 push 1 */
  push32((uint32_t)(0x1u));
  /* 113de735 call 0x113e1ef0 */
  push32(0x113de73au); f_113e1ef0();
  /* 113de73a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de73d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de740 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de742 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de745 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de748 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de74b push edx */
  push32((uint32_t)(EDX));
  /* 113de74c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 113de74e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de751 push eax */
  push32((uint32_t)(EAX));
  /* 113de752 push 1 */
  push32((uint32_t)(0x1u));
  /* 113de754 call 0x113e1ef0 */
  push32(0x113de759u); f_113e1ef0();
  /* 113de759 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de75c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de75f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de761 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de764 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de767 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de76a push edx */
  push32((uint32_t)(EDX));
  /* 113de76b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 113de76d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de770 push eax */
  push32((uint32_t)(EAX));
  /* 113de771 push 1 */
  push32((uint32_t)(0x1u));
  /* 113de773 call 0x113e1ef0 */
  push32(0x113de778u); f_113e1ef0();
  /* 113de778 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de77b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de77e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de780 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de783 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de786 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de789 push edx */
  push32((uint32_t)(EDX));
  /* 113de78a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 113de78c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de78f push eax */
  push32((uint32_t)(EAX));
  /* 113de790 push 1 */
  push32((uint32_t)(0x1u));
  /* 113de792 call 0x113e1ef0 */
  push32(0x113de797u); f_113e1ef0();
  /* 113de797 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de79a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de79d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de79f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de7a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de7a5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de7a8 push edx */
  push32((uint32_t)(EDX));
  /* 113de7a9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 113de7ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de7ae push eax */
  push32((uint32_t)(EAX));
  /* 113de7af push 1 */
  push32((uint32_t)(0x1u));
  /* 113de7b1 call 0x113e1ef0 */
  push32(0x113de7b6u); f_113e1ef0();
  /* 113de7b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de7b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de7bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de7be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de7c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de7c4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de7c7 push edx */
  push32((uint32_t)(EDX));
  /* 113de7c8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 113de7ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de7cd push eax */
  push32((uint32_t)(EAX));
  /* 113de7ce push 1 */
  push32((uint32_t)(0x1u));
  /* 113de7d0 call 0x113e1ef0 */
  push32(0x113de7d5u); f_113e1ef0();
  /* 113de7d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de7d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de7db or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de7dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de7e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de7e3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de7e6 push edx */
  push32((uint32_t)(EDX));
  /* 113de7e7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 113de7e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de7ec push eax */
  push32((uint32_t)(EAX));
  /* 113de7ed push 1 */
  push32((uint32_t)(0x1u));
  /* 113de7ef call 0x113e1ef0 */
  push32(0x113de7f4u); f_113e1ef0();
  /* 113de7f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de7f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de7fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de7fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de7ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de802 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de805 push edx */
  push32((uint32_t)(EDX));
  /* 113de806 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 113de808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de80b push eax */
  push32((uint32_t)(EAX));
  /* 113de80c push 1 */
  push32((uint32_t)(0x1u));
  /* 113de80e call 0x113e1ef0 */
  push32(0x113de813u); f_113e1ef0();
  /* 113de813 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de816 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de819 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de81b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de81e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de821 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de824 push edx */
  push32((uint32_t)(EDX));
  /* 113de825 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 113de827 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de82a push eax */
  push32((uint32_t)(EAX));
  /* 113de82b push 1 */
  push32((uint32_t)(0x1u));
  /* 113de82d call 0x113e1ef0 */
  push32(0x113de832u); f_113e1ef0();
  /* 113de832 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de835 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de838 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de83a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de83d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de840 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de843 push edx */
  push32((uint32_t)(EDX));
  /* 113de844 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 113de846 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de849 push eax */
  push32((uint32_t)(EAX));
  /* 113de84a push 1 */
  push32((uint32_t)(0x1u));
  /* 113de84c call 0x113e1ef0 */
  push32(0x113de851u); f_113e1ef0();
  /* 113de851 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de854 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de857 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de859 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de85c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de85f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de862 push edx */
  push32((uint32_t)(EDX));
  /* 113de863 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 113de865 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de868 push eax */
  push32((uint32_t)(EAX));
  /* 113de869 push 1 */
  push32((uint32_t)(0x1u));
  /* 113de86b call 0x113e1ef0 */
  push32(0x113de870u); f_113e1ef0();
  /* 113de870 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de873 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de876 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de878 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de87b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de87e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de881 push edx */
  push32((uint32_t)(EDX));
  /* 113de882 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 113de884 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de887 push eax */
  push32((uint32_t)(EAX));
  /* 113de888 push 1 */
  push32((uint32_t)(0x1u));
  /* 113de88a call 0x113e1ef0 */
  push32(0x113de88fu); f_113e1ef0();
  /* 113de88f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de892 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de895 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de897 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de89a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de89d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de8a0 push edx */
  push32((uint32_t)(EDX));
  /* 113de8a1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 113de8a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de8a6 push eax */
  push32((uint32_t)(EAX));
  /* 113de8a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 113de8a9 call 0x113e1ef0 */
  push32(0x113de8aeu); f_113e1ef0();
  /* 113de8ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de8b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de8b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de8b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de8b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de8bc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de8bf push edx */
  push32((uint32_t)(EDX));
  /* 113de8c0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 113de8c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de8c5 push eax */
  push32((uint32_t)(EAX));
  /* 113de8c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113de8c8 call 0x113e1ef0 */
  push32(0x113de8cdu); f_113e1ef0();
  /* 113de8cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de8d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de8d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de8d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de8d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de8db add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de8de push edx */
  push32((uint32_t)(EDX));
  /* 113de8df push 0x4d */
  push32((uint32_t)(0x4du));
  /* 113de8e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de8e4 push eax */
  push32((uint32_t)(EAX));
  /* 113de8e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 113de8e7 call 0x113e1ef0 */
  push32(0x113de8ecu); f_113e1ef0();
  /* 113de8ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de8ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de8f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de8f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de8f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de8fa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de8fd push edx */
  push32((uint32_t)(EDX));
  /* 113de8fe push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 113de900 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de903 push eax */
  push32((uint32_t)(EAX));
  /* 113de904 push 1 */
  push32((uint32_t)(0x1u));
  /* 113de906 call 0x113e1ef0 */
  push32(0x113de90bu); f_113e1ef0();
  /* 113de90b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de90e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de911 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de913 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de916 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de919 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de91c push edx */
  push32((uint32_t)(EDX));
  /* 113de91d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 113de91f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de922 push eax */
  push32((uint32_t)(EAX));
  /* 113de923 push 1 */
  push32((uint32_t)(0x1u));
  /* 113de925 call 0x113e1ef0 */
  push32(0x113de92au); f_113e1ef0();
  /* 113de92a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de92d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de930 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de932 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de935 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de938 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de93b push edx */
  push32((uint32_t)(EDX));
  /* 113de93c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 113de93e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de941 push eax */
  push32((uint32_t)(EAX));
  /* 113de942 push 1 */
  push32((uint32_t)(0x1u));
  /* 113de944 call 0x113e1ef0 */
  push32(0x113de949u); f_113e1ef0();
  /* 113de949 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de94c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de94f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de951 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de954 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de957 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de95a push edx */
  push32((uint32_t)(EDX));
  /* 113de95b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 113de95d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de960 push eax */
  push32((uint32_t)(EAX));
  /* 113de961 push 1 */
  push32((uint32_t)(0x1u));
  /* 113de963 call 0x113e1ef0 */
  push32(0x113de968u); f_113e1ef0();
  /* 113de968 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de96b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de96e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de970 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de973 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de976 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de979 push edx */
  push32((uint32_t)(EDX));
  /* 113de97a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 113de97c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de97f push eax */
  push32((uint32_t)(EAX));
  /* 113de980 push 1 */
  push32((uint32_t)(0x1u));
  /* 113de982 call 0x113e1ef0 */
  push32(0x113de987u); f_113e1ef0();
  /* 113de987 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de98a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de98d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de98f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de992 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de995 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de998 push edx */
  push32((uint32_t)(EDX));
  /* 113de999 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 113de99b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de99e push eax */
  push32((uint32_t)(EAX));
  /* 113de99f push 1 */
  push32((uint32_t)(0x1u));
  /* 113de9a1 call 0x113e1ef0 */
  push32(0x113de9a6u); f_113e1ef0();
  /* 113de9a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de9a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de9ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de9ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de9b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de9b4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de9b7 push edx */
  push32((uint32_t)(EDX));
  /* 113de9b8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 113de9ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de9bd push eax */
  push32((uint32_t)(EAX));
  /* 113de9be push 1 */
  push32((uint32_t)(0x1u));
  /* 113de9c0 call 0x113e1ef0 */
  push32(0x113de9c5u); f_113e1ef0();
  /* 113de9c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de9c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de9cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de9cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de9d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de9d3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de9d6 push edx */
  push32((uint32_t)(EDX));
  /* 113de9d7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 113de9d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de9dc push eax */
  push32((uint32_t)(EAX));
  /* 113de9dd push 1 */
  push32((uint32_t)(0x1u));
  /* 113de9df call 0x113e1ef0 */
  push32(0x113de9e4u); f_113e1ef0();
  /* 113de9e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113de9e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113de9ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113de9ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113de9ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113de9f2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113de9f8 push edx */
  push32((uint32_t)(EDX));
  /* 113de9f9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 113de9fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113de9fe push eax */
  push32((uint32_t)(EAX));
  /* 113de9ff push 1 */
  push32((uint32_t)(0x1u));
  /* 113dea01 call 0x113e1ef0 */
  push32(0x113dea06u); f_113e1ef0();
  /* 113dea06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dea09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dea0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113dea0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113dea11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dea14 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dea1a push edx */
  push32((uint32_t)(EDX));
  /* 113dea1b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 113dea1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dea20 push eax */
  push32((uint32_t)(EAX));
  /* 113dea21 push 1 */
  push32((uint32_t)(0x1u));
  /* 113dea23 call 0x113e1ef0 */
  push32(0x113dea28u); f_113e1ef0();
  /* 113dea28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dea2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dea2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113dea30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113dea33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dea36 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dea3c push edx */
  push32((uint32_t)(EDX));
  /* 113dea3d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 113dea3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dea42 push eax */
  push32((uint32_t)(EAX));
  /* 113dea43 push 1 */
  push32((uint32_t)(0x1u));
  /* 113dea45 call 0x113e1ef0 */
  push32(0x113dea4au); f_113e1ef0();
  /* 113dea4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dea4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dea50 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113dea52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113dea55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dea58 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dea5e push edx */
  push32((uint32_t)(EDX));
  /* 113dea5f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 113dea61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dea64 push eax */
  push32((uint32_t)(EAX));
  /* 113dea65 push 1 */
  push32((uint32_t)(0x1u));
  /* 113dea67 call 0x113e1ef0 */
  push32(0x113dea6cu); f_113e1ef0();
  /* 113dea6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dea6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dea72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113dea74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113dea77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dea7a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dea80 push edx */
  push32((uint32_t)(EDX));
  /* 113dea81 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 113dea83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dea86 push eax */
  push32((uint32_t)(EAX));
  /* 113dea87 push 1 */
  push32((uint32_t)(0x1u));
  /* 113dea89 call 0x113e1ef0 */
  push32(0x113dea8eu); f_113e1ef0();
  /* 113dea8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dea91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dea94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113dea96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113dea99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dea9c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113deaa2 push edx */
  push32((uint32_t)(EDX));
  /* 113deaa3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 113deaa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113deaa8 push eax */
  push32((uint32_t)(EAX));
  /* 113deaa9 push 1 */
  push32((uint32_t)(0x1u));
  /* 113deaab call 0x113e1ef0 */
  push32(0x113deab0u); f_113e1ef0();
  /* 113deab0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113deab3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113deab6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113deab8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113deabb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113deabe add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113deac4 push edx */
  push32((uint32_t)(EDX));
  /* 113deac5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 113deac7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113deaca push eax */
  push32((uint32_t)(EAX));
  /* 113deacb push 1 */
  push32((uint32_t)(0x1u));
  /* 113deacd call 0x113e1ef0 */
  push32(0x113dead2u); f_113e1ef0();
  /* 113dead2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dead5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dead8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113deada mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113deadd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113deae0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113deae6 push edx */
  push32((uint32_t)(EDX));
  /* 113deae7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 113deae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113deaec push eax */
  push32((uint32_t)(EAX));
  /* 113deaed push 1 */
  push32((uint32_t)(0x1u));
  /* 113deaef call 0x113e1ef0 */
  push32(0x113deaf4u); f_113e1ef0();
  /* 113deaf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113deaf7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113deafa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113deafc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113deaff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113deb02 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113deb08 push edx */
  push32((uint32_t)(EDX));
  /* 113deb09 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 113deb0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113deb0e push eax */
  push32((uint32_t)(EAX));
  /* 113deb0f push 1 */
  push32((uint32_t)(0x1u));
  /* 113deb11 call 0x113e1ef0 */
  push32(0x113deb16u); f_113e1ef0();
  /* 113deb16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113deb19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113deb1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113deb1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113deb21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113deb24 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113deb2a push edx */
  push32((uint32_t)(EDX));
  /* 113deb2b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 113deb2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113deb30 push eax */
  push32((uint32_t)(EAX));
  /* 113deb31 push 1 */
  push32((uint32_t)(0x1u));
  /* 113deb33 call 0x113e1ef0 */
  push32(0x113deb38u); f_113e1ef0();
  /* 113deb38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113deb3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113deb3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113deb40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113deb43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113deb46 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113deb4c push edx */
  push32((uint32_t)(EDX));
  /* 113deb4d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 113deb52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113deb55 push eax */
  push32((uint32_t)(EAX));
  /* 113deb56 push 1 */
  push32((uint32_t)(0x1u));
  /* 113deb58 call 0x113e1ef0 */
  push32(0x113deb5du); f_113e1ef0();
  /* 113deb5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113deb60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113deb63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113deb65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113deb68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_113deb6b:;
  /* 113deb6b mov esp, ebp */
  ESP = (EBP);
  /* 113deb6d pop ebp */
  EBP = (pop32());
  /* 113deb6e ret  */
  ESPCHK(0x113de5e0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x113deb70 (779 bytes, 265 insns) */
void f_113deb70(void) {
  FTRACE(0x113deb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113deb70 push ebp */
  push32((uint32_t)(EBP));
  /* 113deb71 mov ebp, esp */
  EBP = (ESP);
  /* 113deb73 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113deb77 jne 0x113deb7e */
  if (!C.zf) goto L_113deb7e;
  /* 113deb79 jmp 0x113dee79 */
  goto L_113dee79;
L_113deb7e:;
  /* 113deb7e push 2 */
  push32((uint32_t)(0x2u));
  /* 113deb80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113deb83 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113deb86 push ecx */
  push32((uint32_t)(ECX));
  /* 113deb87 call 0x113d47c0 */
  push32(0x113deb8cu); f_113d47c0();
  /* 113deb8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113deb8f push 2 */
  push32((uint32_t)(0x2u));
  /* 113deb91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113deb94 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113deb97 push eax */
  push32((uint32_t)(EAX));
  /* 113deb98 call 0x113d47c0 */
  push32(0x113deb9du); f_113d47c0();
  /* 113deb9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113deba0 push 2 */
  push32((uint32_t)(0x2u));
  /* 113deba2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113deba5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113deba8 push edx */
  push32((uint32_t)(EDX));
  /* 113deba9 call 0x113d47c0 */
  push32(0x113debaeu); f_113d47c0();
  /* 113debae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113debb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 113debb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113debb6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113debb9 push ecx */
  push32((uint32_t)(ECX));
  /* 113debba call 0x113d47c0 */
  push32(0x113debbfu); f_113d47c0();
  /* 113debbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113debc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113debc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113debc7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113debca push eax */
  push32((uint32_t)(EAX));
  /* 113debcb call 0x113d47c0 */
  push32(0x113debd0u); f_113d47c0();
  /* 113debd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113debd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113debd5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113debd8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 113debdb push edx */
  push32((uint32_t)(EDX));
  /* 113debdc call 0x113d47c0 */
  push32(0x113debe1u); f_113d47c0();
  /* 113debe1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113debe4 push 2 */
  push32((uint32_t)(0x2u));
  /* 113debe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113debe9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113debeb push ecx */
  push32((uint32_t)(ECX));
  /* 113debec call 0x113d47c0 */
  push32(0x113debf1u); f_113d47c0();
  /* 113debf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113debf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 113debf6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113debf9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 113debfc push eax */
  push32((uint32_t)(EAX));
  /* 113debfd call 0x113d47c0 */
  push32(0x113dec02u); f_113d47c0();
  /* 113dec02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dec05 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dec07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dec0a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 113dec0d push edx */
  push32((uint32_t)(EDX));
  /* 113dec0e call 0x113d47c0 */
  push32(0x113dec13u); f_113d47c0();
  /* 113dec13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dec16 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dec18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dec1b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 113dec1e push ecx */
  push32((uint32_t)(ECX));
  /* 113dec1f call 0x113d47c0 */
  push32(0x113dec24u); f_113d47c0();
  /* 113dec24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dec27 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dec29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dec2c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 113dec2f push eax */
  push32((uint32_t)(EAX));
  /* 113dec30 call 0x113d47c0 */
  push32(0x113dec35u); f_113d47c0();
  /* 113dec35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dec38 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dec3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dec3d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 113dec40 push edx */
  push32((uint32_t)(EDX));
  /* 113dec41 call 0x113d47c0 */
  push32(0x113dec46u); f_113d47c0();
  /* 113dec46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dec49 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dec4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dec4e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 113dec51 push ecx */
  push32((uint32_t)(ECX));
  /* 113dec52 call 0x113d47c0 */
  push32(0x113dec57u); f_113d47c0();
  /* 113dec57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dec5a push 2 */
  push32((uint32_t)(0x2u));
  /* 113dec5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dec5f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 113dec62 push eax */
  push32((uint32_t)(EAX));
  /* 113dec63 call 0x113d47c0 */
  push32(0x113dec68u); f_113d47c0();
  /* 113dec68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dec6b push 2 */
  push32((uint32_t)(0x2u));
  /* 113dec6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dec70 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 113dec73 push edx */
  push32((uint32_t)(EDX));
  /* 113dec74 call 0x113d47c0 */
  push32(0x113dec79u); f_113d47c0();
  /* 113dec79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dec7c push 2 */
  push32((uint32_t)(0x2u));
  /* 113dec7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dec81 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 113dec84 push ecx */
  push32((uint32_t)(ECX));
  /* 113dec85 call 0x113d47c0 */
  push32(0x113dec8au); f_113d47c0();
  /* 113dec8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dec8d push 2 */
  push32((uint32_t)(0x2u));
  /* 113dec8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dec92 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 113dec95 push eax */
  push32((uint32_t)(EAX));
  /* 113dec96 call 0x113d47c0 */
  push32(0x113dec9bu); f_113d47c0();
  /* 113dec9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dec9e push 2 */
  push32((uint32_t)(0x2u));
  /* 113deca0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113deca3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 113deca6 push edx */
  push32((uint32_t)(EDX));
  /* 113deca7 call 0x113d47c0 */
  push32(0x113decacu); f_113d47c0();
  /* 113decac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113decaf push 2 */
  push32((uint32_t)(0x2u));
  /* 113decb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113decb4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 113decb7 push ecx */
  push32((uint32_t)(ECX));
  /* 113decb8 call 0x113d47c0 */
  push32(0x113decbdu); f_113d47c0();
  /* 113decbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113decc0 push 2 */
  push32((uint32_t)(0x2u));
  /* 113decc2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113decc5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 113decc8 push eax */
  push32((uint32_t)(EAX));
  /* 113decc9 call 0x113d47c0 */
  push32(0x113decceu); f_113d47c0();
  /* 113decce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113decd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 113decd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113decd6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 113decd9 push edx */
  push32((uint32_t)(EDX));
  /* 113decda call 0x113d47c0 */
  push32(0x113decdfu); f_113d47c0();
  /* 113decdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dece2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dece4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dece7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 113decea push ecx */
  push32((uint32_t)(ECX));
  /* 113deceb call 0x113d47c0 */
  push32(0x113decf0u); f_113d47c0();
  /* 113decf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113decf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113decf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113decf8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 113decfb push eax */
  push32((uint32_t)(EAX));
  /* 113decfc call 0x113d47c0 */
  push32(0x113ded01u); f_113d47c0();
  /* 113ded01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ded04 push 2 */
  push32((uint32_t)(0x2u));
  /* 113ded06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ded09 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 113ded0c push edx */
  push32((uint32_t)(EDX));
  /* 113ded0d call 0x113d47c0 */
  push32(0x113ded12u); f_113d47c0();
  /* 113ded12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ded15 push 2 */
  push32((uint32_t)(0x2u));
  /* 113ded17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ded1a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 113ded1d push ecx */
  push32((uint32_t)(ECX));
  /* 113ded1e call 0x113d47c0 */
  push32(0x113ded23u); f_113d47c0();
  /* 113ded23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ded26 push 2 */
  push32((uint32_t)(0x2u));
  /* 113ded28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ded2b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 113ded2e push eax */
  push32((uint32_t)(EAX));
  /* 113ded2f call 0x113d47c0 */
  push32(0x113ded34u); f_113d47c0();
  /* 113ded34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ded37 push 2 */
  push32((uint32_t)(0x2u));
  /* 113ded39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ded3c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 113ded3f push edx */
  push32((uint32_t)(EDX));
  /* 113ded40 call 0x113d47c0 */
  push32(0x113ded45u); f_113d47c0();
  /* 113ded45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ded48 push 2 */
  push32((uint32_t)(0x2u));
  /* 113ded4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ded4d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 113ded50 push ecx */
  push32((uint32_t)(ECX));
  /* 113ded51 call 0x113d47c0 */
  push32(0x113ded56u); f_113d47c0();
  /* 113ded56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ded59 push 2 */
  push32((uint32_t)(0x2u));
  /* 113ded5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ded5e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 113ded61 push eax */
  push32((uint32_t)(EAX));
  /* 113ded62 call 0x113d47c0 */
  push32(0x113ded67u); f_113d47c0();
  /* 113ded67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ded6a push 2 */
  push32((uint32_t)(0x2u));
  /* 113ded6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ded6f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 113ded72 push edx */
  push32((uint32_t)(EDX));
  /* 113ded73 call 0x113d47c0 */
  push32(0x113ded78u); f_113d47c0();
  /* 113ded78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ded7b push 2 */
  push32((uint32_t)(0x2u));
  /* 113ded7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ded80 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 113ded83 push ecx */
  push32((uint32_t)(ECX));
  /* 113ded84 call 0x113d47c0 */
  push32(0x113ded89u); f_113d47c0();
  /* 113ded89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ded8c push 2 */
  push32((uint32_t)(0x2u));
  /* 113ded8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113ded91 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 113ded94 push eax */
  push32((uint32_t)(EAX));
  /* 113ded95 call 0x113d47c0 */
  push32(0x113ded9au); f_113d47c0();
  /* 113ded9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113ded9d push 2 */
  push32((uint32_t)(0x2u));
  /* 113ded9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113deda2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 113deda8 push edx */
  push32((uint32_t)(EDX));
  /* 113deda9 call 0x113d47c0 */
  push32(0x113dedaeu); f_113d47c0();
  /* 113dedae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dedb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dedb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dedb6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 113dedbc push ecx */
  push32((uint32_t)(ECX));
  /* 113dedbd call 0x113d47c0 */
  push32(0x113dedc2u); f_113d47c0();
  /* 113dedc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dedc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dedc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dedca mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 113dedd0 push eax */
  push32((uint32_t)(EAX));
  /* 113dedd1 call 0x113d47c0 */
  push32(0x113dedd6u); f_113d47c0();
  /* 113dedd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dedd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 113deddb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dedde mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 113dede4 push edx */
  push32((uint32_t)(EDX));
  /* 113dede5 call 0x113d47c0 */
  push32(0x113dedeau); f_113d47c0();
  /* 113dedea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113deded push 2 */
  push32((uint32_t)(0x2u));
  /* 113dedef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dedf2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 113dedf8 push ecx */
  push32((uint32_t)(ECX));
  /* 113dedf9 call 0x113d47c0 */
  push32(0x113dedfeu); f_113d47c0();
  /* 113dedfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dee01 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dee03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dee06 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 113dee0c push eax */
  push32((uint32_t)(EAX));
  /* 113dee0d call 0x113d47c0 */
  push32(0x113dee12u); f_113d47c0();
  /* 113dee12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dee15 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dee17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dee1a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 113dee20 push edx */
  push32((uint32_t)(EDX));
  /* 113dee21 call 0x113d47c0 */
  push32(0x113dee26u); f_113d47c0();
  /* 113dee26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dee29 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dee2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dee2e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 113dee34 push ecx */
  push32((uint32_t)(ECX));
  /* 113dee35 call 0x113d47c0 */
  push32(0x113dee3au); f_113d47c0();
  /* 113dee3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dee3d push 2 */
  push32((uint32_t)(0x2u));
  /* 113dee3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dee42 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 113dee48 push eax */
  push32((uint32_t)(EAX));
  /* 113dee49 call 0x113d47c0 */
  push32(0x113dee4eu); f_113d47c0();
  /* 113dee4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dee51 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dee53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dee56 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 113dee5c push edx */
  push32((uint32_t)(EDX));
  /* 113dee5d call 0x113d47c0 */
  push32(0x113dee62u); f_113d47c0();
  /* 113dee62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dee65 push 2 */
  push32((uint32_t)(0x2u));
  /* 113dee67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dee6a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 113dee70 push ecx */
  push32((uint32_t)(ECX));
  /* 113dee71 call 0x113d47c0 */
  push32(0x113dee76u); f_113d47c0();
  /* 113dee76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113dee79:;
  /* 113dee79 pop ebp */
  EBP = (pop32());
  /* 113dee7a ret  */
  ESPCHK(0x113deb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee80 @ 0x113dee80 (678 bytes, 180 insns) */
void f_113dee80(void) {
  FTRACE(0x113dee80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dee80 push ebp */
  push32((uint32_t)(EBP));
  /* 113dee81 mov ebp, esp */
  EBP = (ESP);
  /* 113dee83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dee86 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113dee8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dee8f mov ax, word ptr [0x113ff77a] */
  AX = (r16((uint32_t)(0x113ff77a)));
  /* 113dee95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113dee98 cmp dword ptr [0x113ff720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dee9f je 0x113deffa */
  if (C.zf) goto L_113deffa;
  /* 113deea5 push 0x113ff748 */
  push32((uint32_t)(0x113ff748u));
  /* 113deeaa push 0xe */
  push32((uint32_t)(0xeu));
  /* 113deeac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113deeaf push ecx */
  push32((uint32_t)(ECX));
  /* 113deeb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 113deeb2 call 0x113e1ef0 */
  push32(0x113deeb7u); f_113e1ef0();
  /* 113deeb7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113deeba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113deebd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 113deebf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113deec2 push 0x113ff74c */
  push32((uint32_t)(0x113ff74cu));
  /* 113deec7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 113deec9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113deecc push eax */
  push32((uint32_t)(EAX));
  /* 113deecd push 1 */
  push32((uint32_t)(0x1u));
  /* 113deecf call 0x113e1ef0 */
  push32(0x113deed4u); f_113e1ef0();
  /* 113deed4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113deed7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113deeda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113deedc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113deedf push 0x113ff750 */
  push32((uint32_t)(0x113ff750u));
  /* 113deee4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 113deee6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113deee9 push edx */
  push32((uint32_t)(EDX));
  /* 113deeea push 1 */
  push32((uint32_t)(0x1u));
  /* 113deeec call 0x113e1ef0 */
  push32(0x113deef1u); f_113e1ef0();
  /* 113deef1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113deef4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113deef7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113deef9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113deefc mov edx, dword ptr [0x113ff750] */
  EDX = (r32((uint32_t)(0x113ff750)));
  /* 113def02 push edx */
  push32((uint32_t)(EDX));
  /* 113def03 call 0x113df130 */
  push32(0x113def08u); f_113df130();
  /* 113def08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113def0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113def0f je 0x113def69 */
  if (C.zf) goto L_113def69;
  /* 113def11 push 2 */
  push32((uint32_t)(0x2u));
  /* 113def13 mov eax, dword ptr [0x113ff748] */
  EAX = (r32((uint32_t)(0x113ff748)));
  /* 113def18 push eax */
  push32((uint32_t)(EAX));
  /* 113def19 call 0x113d47c0 */
  push32(0x113def1eu); f_113d47c0();
  /* 113def1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113def21 push 2 */
  push32((uint32_t)(0x2u));
  /* 113def23 mov ecx, dword ptr [0x113ff74c] */
  ECX = (r32((uint32_t)(0x113ff74c)));
  /* 113def29 push ecx */
  push32((uint32_t)(ECX));
  /* 113def2a call 0x113d47c0 */
  push32(0x113def2fu); f_113d47c0();
  /* 113def2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113def32 push 2 */
  push32((uint32_t)(0x2u));
  /* 113def34 mov edx, dword ptr [0x113ff750] */
  EDX = (r32((uint32_t)(0x113ff750)));
  /* 113def3a push edx */
  push32((uint32_t)(EDX));
  /* 113def3b call 0x113d47c0 */
  push32(0x113def40u); f_113d47c0();
  /* 113def40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113def43 mov dword ptr [0x113ff748], 0 */
  w32((uint32_t)(0x113ff748), (0x0u));
  /* 113def4d mov dword ptr [0x113ff74c], 0 */
  w32((uint32_t)(0x113ff74c), (0x0u));
  /* 113def57 mov dword ptr [0x113ff750], 0 */
  w32((uint32_t)(0x113ff750), (0x0u));
  /* 113def61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113def64 jmp 0x113df122 */
  goto L_113df122;
L_113def69:;
  /* 113def69 mov eax, dword ptr [0x113fed88] */
  EAX = (r32((uint32_t)(0x113fed88)));
  /* 113def6e cmp dword ptr [eax], 0x113fed50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x113fed50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113def74 je 0x113defb0 */
  if (C.zf) goto L_113defb0;
  /* 113def76 push 2 */
  push32((uint32_t)(0x2u));
  /* 113def78 mov ecx, dword ptr [0x113fed88] */
  ECX = (r32((uint32_t)(0x113fed88)));
  /* 113def7e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113def80 push edx */
  push32((uint32_t)(EDX));
  /* 113def81 call 0x113d47c0 */
  push32(0x113def86u); f_113d47c0();
  /* 113def86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113def89 push 2 */
  push32((uint32_t)(0x2u));
  /* 113def8b mov eax, dword ptr [0x113fed88] */
  EAX = (r32((uint32_t)(0x113fed88)));
  /* 113def90 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113def93 push ecx */
  push32((uint32_t)(ECX));
  /* 113def94 call 0x113d47c0 */
  push32(0x113def99u); f_113d47c0();
  /* 113def99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113def9c push 2 */
  push32((uint32_t)(0x2u));
  /* 113def9e mov edx, dword ptr [0x113fed88] */
  EDX = (r32((uint32_t)(0x113fed88)));
  /* 113defa4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113defa7 push eax */
  push32((uint32_t)(EAX));
  /* 113defa8 call 0x113d47c0 */
  push32(0x113defadu); f_113d47c0();
  /* 113defad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113defb0:;
  /* 113defb0 mov ecx, dword ptr [0x113fed88] */
  ECX = (r32((uint32_t)(0x113fed88)));
  /* 113defb6 mov edx, dword ptr [0x113ff748] */
  EDX = (r32((uint32_t)(0x113ff748)));
  /* 113defbc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 113defbe mov eax, dword ptr [0x113fed88] */
  EAX = (r32((uint32_t)(0x113fed88)));
  /* 113defc3 mov ecx, dword ptr [0x113ff74c] */
  ECX = (r32((uint32_t)(0x113ff74c)));
  /* 113defc9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 113defcc mov edx, dword ptr [0x113fed88] */
  EDX = (r32((uint32_t)(0x113fed88)));
  /* 113defd2 mov eax, dword ptr [0x113ff750] */
  EAX = (r32((uint32_t)(0x113ff750)));
  /* 113defd7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 113defda mov ecx, dword ptr [0x113fed88] */
  ECX = (r32((uint32_t)(0x113fed88)));
  /* 113defe0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113defe2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113defe4 mov byte ptr [0x113fdea8], al */
  w8((uint32_t)(0x113fdea8), (AL));
  /* 113defe9 mov dword ptr [0x113fdeac], 1 */
  w32((uint32_t)(0x113fdeac), (0x1u));
  /* 113deff3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113deff5 jmp 0x113df122 */
  goto L_113df122;
L_113deffa:;
  /* 113deffa push 2 */
  push32((uint32_t)(0x2u));
  /* 113deffc mov ecx, dword ptr [0x113ff748] */
  ECX = (r32((uint32_t)(0x113ff748)));
  /* 113df002 push ecx */
  push32((uint32_t)(ECX));
  /* 113df003 call 0x113d47c0 */
  push32(0x113df008u); f_113d47c0();
  /* 113df008 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df00b push 2 */
  push32((uint32_t)(0x2u));
  /* 113df00d mov edx, dword ptr [0x113ff74c] */
  EDX = (r32((uint32_t)(0x113ff74c)));
  /* 113df013 push edx */
  push32((uint32_t)(EDX));
  /* 113df014 call 0x113d47c0 */
  push32(0x113df019u); f_113d47c0();
  /* 113df019 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df01c push 2 */
  push32((uint32_t)(0x2u));
  /* 113df01e mov eax, dword ptr [0x113ff750] */
  EAX = (r32((uint32_t)(0x113ff750)));
  /* 113df023 push eax */
  push32((uint32_t)(EAX));
  /* 113df024 call 0x113d47c0 */
  push32(0x113df029u); f_113d47c0();
  /* 113df029 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df02c mov dword ptr [0x113ff748], 0 */
  w32((uint32_t)(0x113ff748), (0x0u));
  /* 113df036 mov dword ptr [0x113ff74c], 0 */
  w32((uint32_t)(0x113ff74c), (0x0u));
  /* 113df040 mov dword ptr [0x113ff750], 0 */
  w32((uint32_t)(0x113ff750), (0x0u));
  /* 113df04a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 113df04f push 0x113fb0cc */
  push32((uint32_t)(0x113fb0ccu));
  /* 113df054 push 2 */
  push32((uint32_t)(0x2u));
  /* 113df056 push 2 */
  push32((uint32_t)(0x2u));
  /* 113df058 call 0x113d3d30 */
  push32(0x113df05du); f_113d3d30();
  /* 113df05d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df060 mov ecx, dword ptr [0x113fed88] */
  ECX = (r32((uint32_t)(0x113fed88)));
  /* 113df066 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113df068 mov edx, dword ptr [0x113fed88] */
  EDX = (r32((uint32_t)(0x113fed88)));
  /* 113df06e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df071 jne 0x113df07b */
  if (!C.zf) goto L_113df07b;
  /* 113df073 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113df076 jmp 0x113df122 */
  goto L_113df122;
L_113df07b:;
  /* 113df07b push 0x113fb09c */
  push32((uint32_t)(0x113fb09cu));
  /* 113df080 mov eax, dword ptr [0x113fed88] */
  EAX = (r32((uint32_t)(0x113fed88)));
  /* 113df085 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113df087 push ecx */
  push32((uint32_t)(ECX));
  /* 113df088 call 0x113d6ce0 */
  push32(0x113df08du); f_113d6ce0();
  /* 113df08d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df090 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 113df095 push 0x113fb0cc */
  push32((uint32_t)(0x113fb0ccu));
  /* 113df09a push 2 */
  push32((uint32_t)(0x2u));
  /* 113df09c push 2 */
  push32((uint32_t)(0x2u));
  /* 113df09e call 0x113d3d30 */
  push32(0x113df0a3u); f_113d3d30();
  /* 113df0a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df0a6 mov edx, dword ptr [0x113fed88] */
  EDX = (r32((uint32_t)(0x113fed88)));
  /* 113df0ac mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 113df0af mov eax, dword ptr [0x113fed88] */
  EAX = (r32((uint32_t)(0x113fed88)));
  /* 113df0b4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df0b8 jne 0x113df0bf */
  if (!C.zf) goto L_113df0bf;
  /* 113df0ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113df0bd jmp 0x113df122 */
  goto L_113df122;
L_113df0bf:;
  /* 113df0bf mov ecx, dword ptr [0x113fed88] */
  ECX = (r32((uint32_t)(0x113fed88)));
  /* 113df0c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113df0c8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 113df0cb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 113df0d0 push 0x113fb0cc */
  push32((uint32_t)(0x113fb0ccu));
  /* 113df0d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113df0d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113df0d9 call 0x113d3d30 */
  push32(0x113df0deu); f_113d3d30();
  /* 113df0de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df0e1 mov ecx, dword ptr [0x113fed88] */
  ECX = (r32((uint32_t)(0x113fed88)));
  /* 113df0e7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 113df0ea mov edx, dword ptr [0x113fed88] */
  EDX = (r32((uint32_t)(0x113fed88)));
  /* 113df0f0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df0f4 jne 0x113df0fb */
  if (!C.zf) goto L_113df0fb;
  /* 113df0f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113df0f9 jmp 0x113df122 */
  goto L_113df122;
L_113df0fb:;
  /* 113df0fb mov eax, dword ptr [0x113fed88] */
  EAX = (r32((uint32_t)(0x113fed88)));
  /* 113df100 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113df103 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 113df106 mov edx, dword ptr [0x113fed88] */
  EDX = (r32((uint32_t)(0x113fed88)));
  /* 113df10c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113df10e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113df110 mov byte ptr [0x113fdea8], cl */
  w8((uint32_t)(0x113fdea8), (CL));
  /* 113df116 mov dword ptr [0x113fdeac], 1 */
  w32((uint32_t)(0x113fdeac), (0x1u));
  /* 113df120 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113df122:;
  /* 113df122 mov esp, ebp */
  ESP = (EBP);
  /* 113df124 pop ebp */
  EBP = (pop32());
  /* 113df125 ret  */
  ESPCHK(0x113dee80u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x113df130 (125 bytes, 49 insns) */
void f_113df130(void) {
  FTRACE(0x113df130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113df130 push ebp */
  push32((uint32_t)(EBP));
  /* 113df131 mov ebp, esp */
  EBP = (ESP);
  /* 113df133 push ecx */
  push32((uint32_t)(ECX));
L_113df134:;
  /* 113df134 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df137 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113df13a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113df13c je 0x113df1a9 */
  if (C.zf) goto L_113df1a9;
  /* 113df13e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df141 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113df144 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df147 jl 0x113df16d */
  if ((C.sf!=C.of)) goto L_113df16d;
  /* 113df149 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df14c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113df14f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df152 jg 0x113df16d */
  if ((!C.zf&&C.sf==C.of)) goto L_113df16d;
  /* 113df154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df157 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113df15a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113df15d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df160 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 113df162 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df165 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df168 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113df16b jmp 0x113df1a7 */
  goto L_113df1a7;
L_113df16d:;
  /* 113df16d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df170 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113df173 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df176 jne 0x113df19e */
  if (!C.zf) goto L_113df19e;
  /* 113df178 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df17b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113df17e:;
  /* 113df17e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df181 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df184 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 113df187 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113df189 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df18c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df18f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113df192 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df195 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113df198 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113df19a jne 0x113df17e */
  if (!C.zf) goto L_113df17e;
  /* 113df19c jmp 0x113df1a7 */
  goto L_113df1a7;
L_113df19e:;
  /* 113df19e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df1a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df1a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_113df1a7:;
  /* 113df1a7 jmp 0x113df134 */
  goto L_113df134;
L_113df1a9:;
  /* 113df1a9 mov esp, ebp */
  ESP = (EBP);
  /* 113df1ab pop ebp */
  EBP = (pop32());
  /* 113df1ac ret  */
  ESPCHK(0x113df130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1b0 @ 0x113df1b0 (304 bytes, 85 insns) */
void f_113df1b0(void) {
  FTRACE(0x113df1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113df1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113df1b1 mov ebp, esp */
  EBP = (ESP);
  /* 113df1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 113df1b4 cmp dword ptr [0x113ff71c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff71c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df1bb je 0x113df27c */
  if (C.zf) goto L_113df27c;
  /* 113df1c1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 113df1c3 push 0x113fb0d8 */
  push32((uint32_t)(0x113fb0d8u));
  /* 113df1c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 113df1ca push 0x30 */
  push32((uint32_t)(0x30u));
  /* 113df1cc push 1 */
  push32((uint32_t)(0x1u));
  /* 113df1ce call 0x113d4140 */
  push32(0x113df1d3u); f_113d4140();
  /* 113df1d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df1d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113df1d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df1dd jne 0x113df1e9 */
  if (!C.zf) goto L_113df1e9;
  /* 113df1df mov eax, 1 */
  EAX = (0x1u);
  /* 113df1e4 jmp 0x113df2dc */
  goto L_113df2dc;
L_113df1e9:;
  /* 113df1e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df1ec push eax */
  push32((uint32_t)(EAX));
  /* 113df1ed call 0x113df2e0 */
  push32(0x113df1f2u); f_113df2e0();
  /* 113df1f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df1f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113df1f7 je 0x113df21d */
  if (C.zf) goto L_113df21d;
  /* 113df1f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df1fc push ecx */
  push32((uint32_t)(ECX));
  /* 113df1fd call 0x113df570 */
  push32(0x113df202u); f_113df570();
  /* 113df202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df205 push 2 */
  push32((uint32_t)(0x2u));
  /* 113df207 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df20a push edx */
  push32((uint32_t)(EDX));
  /* 113df20b call 0x113d47c0 */
  push32(0x113df210u); f_113d47c0();
  /* 113df210 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df213 mov eax, 1 */
  EAX = (0x1u);
  /* 113df218 jmp 0x113df2dc */
  goto L_113df2dc;
L_113df21d:;
  /* 113df21d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df220 mov ecx, dword ptr [0x113fed88] */
  ECX = (r32((uint32_t)(0x113fed88)));
  /* 113df226 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113df228 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113df22a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df22d mov ecx, dword ptr [0x113fed88] */
  ECX = (r32((uint32_t)(0x113fed88)));
  /* 113df233 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113df236 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 113df239 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df23c mov ecx, dword ptr [0x113fed88] */
  ECX = (r32((uint32_t)(0x113fed88)));
  /* 113df242 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113df245 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 113df248 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df24b mov dword ptr [0x113fed88], eax */
  w32((uint32_t)(0x113fed88), (EAX));
  /* 113df250 mov ecx, dword ptr [0x113ff754] */
  ECX = (r32((uint32_t)(0x113ff754)));
  /* 113df256 push ecx */
  push32((uint32_t)(ECX));
  /* 113df257 call 0x113df570 */
  push32(0x113df25cu); f_113df570();
  /* 113df25c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df25f push 2 */
  push32((uint32_t)(0x2u));
  /* 113df261 mov edx, dword ptr [0x113ff754] */
  EDX = (r32((uint32_t)(0x113ff754)));
  /* 113df267 push edx */
  push32((uint32_t)(EDX));
  /* 113df268 call 0x113d47c0 */
  push32(0x113df26du); f_113d47c0();
  /* 113df26d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df270 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df273 mov dword ptr [0x113ff754], eax */
  w32((uint32_t)(0x113ff754), (EAX));
  /* 113df278 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113df27a jmp 0x113df2dc */
  goto L_113df2dc;
L_113df27c:;
  /* 113df27c mov ecx, dword ptr [0x113fed88] */
  ECX = (r32((uint32_t)(0x113fed88)));
  /* 113df282 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113df284 mov dword ptr [0x113fed58], edx */
  w32((uint32_t)(0x113fed58), (EDX));
  /* 113df28a mov eax, dword ptr [0x113fed88] */
  EAX = (r32((uint32_t)(0x113fed88)));
  /* 113df28f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113df292 mov dword ptr [0x113fed5c], ecx */
  w32((uint32_t)(0x113fed5c), (ECX));
  /* 113df298 mov edx, dword ptr [0x113fed88] */
  EDX = (r32((uint32_t)(0x113fed88)));
  /* 113df29e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113df2a1 mov dword ptr [0x113fed60], eax */
  w32((uint32_t)(0x113fed60), (EAX));
  /* 113df2a6 mov dword ptr [0x113fed88], 0x113fed58 */
  w32((uint32_t)(0x113fed88), (0x113fed58u));
  /* 113df2b0 mov ecx, dword ptr [0x113ff754] */
  ECX = (r32((uint32_t)(0x113ff754)));
  /* 113df2b6 push ecx */
  push32((uint32_t)(ECX));
  /* 113df2b7 call 0x113df570 */
  push32(0x113df2bcu); f_113df570();
  /* 113df2bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df2bf push 2 */
  push32((uint32_t)(0x2u));
  /* 113df2c1 mov edx, dword ptr [0x113ff754] */
  EDX = (r32((uint32_t)(0x113ff754)));
  /* 113df2c7 push edx */
  push32((uint32_t)(EDX));
  /* 113df2c8 call 0x113d47c0 */
  push32(0x113df2cdu); f_113d47c0();
  /* 113df2cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df2d0 mov dword ptr [0x113ff754], 0 */
  w32((uint32_t)(0x113ff754), (0x0u));
  /* 113df2da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113df2dc:;
  /* 113df2dc mov esp, ebp */
  ESP = (EBP);
  /* 113df2de pop ebp */
  EBP = (pop32());
  /* 113df2df ret  */
  ESPCHK(0x113df1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2e0 @ 0x113df2e0 (525 bytes, 200 insns) */
void f_113df2e0(void) {
  FTRACE(0x113df2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113df2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113df2e1 mov ebp, esp */
  EBP = (ESP);
  /* 113df2e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113df2e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113df2ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113df2ef mov ax, word ptr [0x113ff774] */
  AX = (r16((uint32_t)(0x113ff774)));
  /* 113df2f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113df2f8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df2fc jne 0x113df306 */
  if (!C.zf) goto L_113df306;
  /* 113df2fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113df301 jmp 0x113df4e9 */
  goto L_113df4e9;
L_113df306:;
  /* 113df306 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df309 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df30c push ecx */
  push32((uint32_t)(ECX));
  /* 113df30d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 113df30f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df312 push edx */
  push32((uint32_t)(EDX));
  /* 113df313 push 1 */
  push32((uint32_t)(0x1u));
  /* 113df315 call 0x113e1ef0 */
  push32(0x113df31au); f_113e1ef0();
  /* 113df31a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df31d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113df320 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113df322 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113df325 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df328 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df32b push edx */
  push32((uint32_t)(EDX));
  /* 113df32c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 113df32e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df331 push eax */
  push32((uint32_t)(EAX));
  /* 113df332 push 1 */
  push32((uint32_t)(0x1u));
  /* 113df334 call 0x113e1ef0 */
  push32(0x113df339u); f_113e1ef0();
  /* 113df339 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df33c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113df33f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113df341 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113df344 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df347 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df34a push edx */
  push32((uint32_t)(EDX));
  /* 113df34b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 113df34d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df350 push eax */
  push32((uint32_t)(EAX));
  /* 113df351 push 1 */
  push32((uint32_t)(0x1u));
  /* 113df353 call 0x113e1ef0 */
  push32(0x113df358u); f_113e1ef0();
  /* 113df358 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df35b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113df35e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113df360 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113df363 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df366 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df369 push edx */
  push32((uint32_t)(EDX));
  /* 113df36a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 113df36c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df36f push eax */
  push32((uint32_t)(EAX));
  /* 113df370 push 1 */
  push32((uint32_t)(0x1u));
  /* 113df372 call 0x113e1ef0 */
  push32(0x113df377u); f_113e1ef0();
  /* 113df377 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df37a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113df37d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113df37f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113df382 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df385 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df388 push edx */
  push32((uint32_t)(EDX));
  /* 113df389 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 113df38b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df38e push eax */
  push32((uint32_t)(EAX));
  /* 113df38f push 1 */
  push32((uint32_t)(0x1u));
  /* 113df391 call 0x113e1ef0 */
  push32(0x113df396u); f_113e1ef0();
  /* 113df396 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df399 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113df39c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113df39e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113df3a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df3a4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 113df3a7 push eax */
  push32((uint32_t)(EAX));
  /* 113df3a8 call 0x113df4f0 */
  push32(0x113df3adu); f_113df4f0();
  /* 113df3ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df3b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df3b3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df3b6 push ecx */
  push32((uint32_t)(ECX));
  /* 113df3b7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 113df3b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df3bc push edx */
  push32((uint32_t)(EDX));
  /* 113df3bd push 1 */
  push32((uint32_t)(0x1u));
  /* 113df3bf call 0x113e1ef0 */
  push32(0x113df3c4u); f_113e1ef0();
  /* 113df3c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df3c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113df3ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113df3cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113df3cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df3d2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df3d5 push edx */
  push32((uint32_t)(EDX));
  /* 113df3d6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 113df3d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df3db push eax */
  push32((uint32_t)(EAX));
  /* 113df3dc push 1 */
  push32((uint32_t)(0x1u));
  /* 113df3de call 0x113e1ef0 */
  push32(0x113df3e3u); f_113e1ef0();
  /* 113df3e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df3e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113df3e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113df3eb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113df3ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df3f1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df3f4 push edx */
  push32((uint32_t)(EDX));
  /* 113df3f5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 113df3f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df3fa push eax */
  push32((uint32_t)(EAX));
  /* 113df3fb push 0 */
  push32((uint32_t)(0x0u));
  /* 113df3fd call 0x113e1ef0 */
  push32(0x113df402u); f_113e1ef0();
  /* 113df402 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df405 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113df408 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113df40a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113df40d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df410 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df413 push edx */
  push32((uint32_t)(EDX));
  /* 113df414 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113df416 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df419 push eax */
  push32((uint32_t)(EAX));
  /* 113df41a push 0 */
  push32((uint32_t)(0x0u));
  /* 113df41c call 0x113e1ef0 */
  push32(0x113df421u); f_113e1ef0();
  /* 113df421 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df424 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113df427 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113df429 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113df42c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df42f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df432 push edx */
  push32((uint32_t)(EDX));
  /* 113df433 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 113df435 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df438 push eax */
  push32((uint32_t)(EAX));
  /* 113df439 push 0 */
  push32((uint32_t)(0x0u));
  /* 113df43b call 0x113e1ef0 */
  push32(0x113df440u); f_113e1ef0();
  /* 113df440 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df443 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113df446 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113df448 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113df44b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df44e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df451 push edx */
  push32((uint32_t)(EDX));
  /* 113df452 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 113df454 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df457 push eax */
  push32((uint32_t)(EAX));
  /* 113df458 push 0 */
  push32((uint32_t)(0x0u));
  /* 113df45a call 0x113e1ef0 */
  push32(0x113df45fu); f_113e1ef0();
  /* 113df45f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df462 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113df465 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113df467 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113df46a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df46d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df470 push edx */
  push32((uint32_t)(EDX));
  /* 113df471 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 113df473 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df476 push eax */
  push32((uint32_t)(EAX));
  /* 113df477 push 0 */
  push32((uint32_t)(0x0u));
  /* 113df479 call 0x113e1ef0 */
  push32(0x113df47eu); f_113e1ef0();
  /* 113df47e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df481 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113df484 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113df486 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113df489 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df48c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df48f push edx */
  push32((uint32_t)(EDX));
  /* 113df490 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 113df492 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df495 push eax */
  push32((uint32_t)(EAX));
  /* 113df496 push 0 */
  push32((uint32_t)(0x0u));
  /* 113df498 call 0x113e1ef0 */
  push32(0x113df49du); f_113e1ef0();
  /* 113df49d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df4a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113df4a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113df4a5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113df4a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df4ab add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df4ae push edx */
  push32((uint32_t)(EDX));
  /* 113df4af push 0x52 */
  push32((uint32_t)(0x52u));
  /* 113df4b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df4b4 push eax */
  push32((uint32_t)(EAX));
  /* 113df4b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113df4b7 call 0x113e1ef0 */
  push32(0x113df4bcu); f_113e1ef0();
  /* 113df4bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df4bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113df4c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113df4c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113df4c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df4ca add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df4cd push edx */
  push32((uint32_t)(EDX));
  /* 113df4ce push 0x53 */
  push32((uint32_t)(0x53u));
  /* 113df4d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df4d3 push eax */
  push32((uint32_t)(EAX));
  /* 113df4d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113df4d6 call 0x113e1ef0 */
  push32(0x113df4dbu); f_113e1ef0();
  /* 113df4db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df4de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113df4e1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113df4e3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113df4e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_113df4e9:;
  /* 113df4e9 mov esp, ebp */
  ESP = (EBP);
  /* 113df4eb pop ebp */
  EBP = (pop32());
  /* 113df4ec ret  */
  ESPCHK(0x113df2e0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x113df4f0 (125 bytes, 49 insns) */
void f_113df4f0(void) {
  FTRACE(0x113df4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113df4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113df4f1 mov ebp, esp */
  EBP = (ESP);
  /* 113df4f3 push ecx */
  push32((uint32_t)(ECX));
L_113df4f4:;
  /* 113df4f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df4f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113df4fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113df4fc je 0x113df569 */
  if (C.zf) goto L_113df569;
  /* 113df4fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df501 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113df504 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df507 jl 0x113df52d */
  if ((C.sf!=C.of)) goto L_113df52d;
  /* 113df509 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df50c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113df50f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df512 jg 0x113df52d */
  if ((!C.zf&&C.sf==C.of)) goto L_113df52d;
  /* 113df514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df517 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113df51a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113df51d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df520 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 113df522 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df525 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df528 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113df52b jmp 0x113df567 */
  goto L_113df567;
L_113df52d:;
  /* 113df52d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df530 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113df533 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df536 jne 0x113df55e */
  if (!C.zf) goto L_113df55e;
  /* 113df538 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df53b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113df53e:;
  /* 113df53e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df541 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df544 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 113df547 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113df549 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df54c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df54f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113df552 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113df555 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113df558 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113df55a jne 0x113df53e */
  if (!C.zf) goto L_113df53e;
  /* 113df55c jmp 0x113df567 */
  goto L_113df567;
L_113df55e:;
  /* 113df55e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df561 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df564 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_113df567:;
  /* 113df567 jmp 0x113df4f4 */
  goto L_113df4f4;
L_113df569:;
  /* 113df569 mov esp, ebp */
  ESP = (EBP);
  /* 113df56b pop ebp */
  EBP = (pop32());
  /* 113df56c ret  */
  ESPCHK(0x113df4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f570 @ 0x113df570 (147 bytes, 52 insns) */
void f_113df570(void) {
  FTRACE(0x113df570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113df570 push ebp */
  push32((uint32_t)(EBP));
  /* 113df571 mov ebp, esp */
  EBP = (ESP);
  /* 113df573 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df577 jne 0x113df57e */
  if (!C.zf) goto L_113df57e;
  /* 113df579 jmp 0x113df601 */
  goto L_113df601;
L_113df57e:;
  /* 113df57e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df581 cmp dword ptr [eax + 0xc], 0x113ff7b0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x113ff7b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df588 je 0x113df601 */
  if (C.zf) goto L_113df601;
  /* 113df58a push 2 */
  push32((uint32_t)(0x2u));
  /* 113df58c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df58f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113df592 push edx */
  push32((uint32_t)(EDX));
  /* 113df593 call 0x113d47c0 */
  push32(0x113df598u); f_113d47c0();
  /* 113df598 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df59b push 2 */
  push32((uint32_t)(0x2u));
  /* 113df59d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df5a0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113df5a3 push ecx */
  push32((uint32_t)(ECX));
  /* 113df5a4 call 0x113d47c0 */
  push32(0x113df5a9u); f_113d47c0();
  /* 113df5a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df5ac push 2 */
  push32((uint32_t)(0x2u));
  /* 113df5ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df5b1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113df5b4 push eax */
  push32((uint32_t)(EAX));
  /* 113df5b5 call 0x113d47c0 */
  push32(0x113df5bau); f_113d47c0();
  /* 113df5ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df5bd push 2 */
  push32((uint32_t)(0x2u));
  /* 113df5bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df5c2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 113df5c5 push edx */
  push32((uint32_t)(EDX));
  /* 113df5c6 call 0x113d47c0 */
  push32(0x113df5cbu); f_113d47c0();
  /* 113df5cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df5ce push 2 */
  push32((uint32_t)(0x2u));
  /* 113df5d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df5d3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 113df5d6 push ecx */
  push32((uint32_t)(ECX));
  /* 113df5d7 call 0x113d47c0 */
  push32(0x113df5dcu); f_113d47c0();
  /* 113df5dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df5df push 2 */
  push32((uint32_t)(0x2u));
  /* 113df5e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df5e4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 113df5e7 push eax */
  push32((uint32_t)(EAX));
  /* 113df5e8 call 0x113d47c0 */
  push32(0x113df5edu); f_113d47c0();
  /* 113df5ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df5f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 113df5f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113df5f5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 113df5f8 push edx */
  push32((uint32_t)(EDX));
  /* 113df5f9 call 0x113d47c0 */
  push32(0x113df5feu); f_113d47c0();
  /* 113df5fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113df601:;
  /* 113df601 pop ebp */
  EBP = (pop32());
  /* 113df602 ret  */
  ESPCHK(0x113df570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f610 @ 0x113df610 (928 bytes, 284 insns) */
void f_113df610(void) {
  FTRACE(0x113df610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113df610 push ebp */
  push32((uint32_t)(EBP));
  /* 113df611 mov ebp, esp */
  EBP = (ESP);
  /* 113df613 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113df616 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 113df61d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 113df624 cmp dword ptr [0x113ff718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df62b je 0x113df961 */
  if (C.zf) goto L_113df961;
  /* 113df631 cmp dword ptr [0x113ff728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df638 jne 0x113df660 */
  if (!C.zf) goto L_113df660;
  /* 113df63a push 0x113ff728 */
  push32((uint32_t)(0x113ff728u));
  /* 113df63f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 113df644 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113df646 mov ax, word ptr [0x113ff76c] */
  AX = (r16((uint32_t)(0x113ff76c)));
  /* 113df64c push eax */
  push32((uint32_t)(EAX));
  /* 113df64d push 0 */
  push32((uint32_t)(0x0u));
  /* 113df64f call 0x113e1ef0 */
  push32(0x113df654u); f_113e1ef0();
  /* 113df654 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df657 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113df659 je 0x113df660 */
  if (C.zf) goto L_113df660;
  /* 113df65b jmp 0x113df922 */
  goto L_113df922;
L_113df660:;
  /* 113df660 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 113df662 push 0x113fb0e4 */
  push32((uint32_t)(0x113fb0e4u));
  /* 113df667 push 2 */
  push32((uint32_t)(0x2u));
  /* 113df669 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 113df66e call 0x113d3d30 */
  push32(0x113df673u); f_113d3d30();
  /* 113df673 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df676 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 113df679 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 113df67b push 0x113fb0e4 */
  push32((uint32_t)(0x113fb0e4u));
  /* 113df680 push 2 */
  push32((uint32_t)(0x2u));
  /* 113df682 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 113df687 call 0x113d3d30 */
  push32(0x113df68cu); f_113d3d30();
  /* 113df68c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df68f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 113df692 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 113df694 push 0x113fb0e4 */
  push32((uint32_t)(0x113fb0e4u));
  /* 113df699 push 2 */
  push32((uint32_t)(0x2u));
  /* 113df69b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 113df6a0 call 0x113d3d30 */
  push32(0x113df6a5u); f_113d3d30();
  /* 113df6a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df6a8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 113df6ab push 0x62 */
  push32((uint32_t)(0x62u));
  /* 113df6ad push 0x113fb0e4 */
  push32((uint32_t)(0x113fb0e4u));
  /* 113df6b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113df6b4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 113df6b9 call 0x113d3d30 */
  push32(0x113df6beu); f_113d3d30();
  /* 113df6be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df6c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 113df6c4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df6c8 je 0x113df6dc */
  if (C.zf) goto L_113df6dc;
  /* 113df6ca cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df6ce je 0x113df6dc */
  if (C.zf) goto L_113df6dc;
  /* 113df6d0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df6d4 je 0x113df6dc */
  if (C.zf) goto L_113df6dc;
  /* 113df6d6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df6da jne 0x113df6e1 */
  if (!C.zf) goto L_113df6e1;
L_113df6dc:;
  /* 113df6dc jmp 0x113df922 */
  goto L_113df922;
L_113df6e1:;
  /* 113df6e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113df6e4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 113df6e7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 113df6ee jmp 0x113df6f9 */
  goto L_113df6f9;
L_113df6f0:;
  /* 113df6f0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 113df6f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df6f6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_113df6f9:;
  /* 113df6f9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df700 jge 0x113df715 */
  if ((C.sf==C.of)) goto L_113df715;
  /* 113df702 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113df705 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 113df708 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 113df70a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113df70d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df710 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 113df713 jmp 0x113df6f0 */
  goto L_113df6f0;
L_113df715:;
  /* 113df715 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 113df718 push eax */
  push32((uint32_t)(EAX));
  /* 113df719 mov ecx, dword ptr [0x113ff728] */
  ECX = (r32((uint32_t)(0x113ff728)));
  /* 113df71f push ecx */
  push32((uint32_t)(ECX));
  /* 113df720 call dword ptr [0x11402308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402308))), 0x113df726u);
  /* 113df726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113df728 jne 0x113df72f */
  if (!C.zf) goto L_113df72f;
  /* 113df72a jmp 0x113df922 */
  goto L_113df922;
L_113df72f:;
  /* 113df72f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df733 jbe 0x113df73a */
  if ((C.cf||C.zf)) goto L_113df73a;
  /* 113df735 jmp 0x113df922 */
  goto L_113df922;
L_113df73a:;
  /* 113df73a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113df73d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113df743 mov dword ptr [0x113fdea4], edx */
  w32((uint32_t)(0x113fdea4), (EDX));
  /* 113df749 cmp dword ptr [0x113fdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113fdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df750 jle 0x113df7a9 */
  if ((C.zf||C.sf!=C.of)) goto L_113df7a9;
  /* 113df752 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 113df755 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113df758 jmp 0x113df763 */
  goto L_113df763;
L_113df75a:;
  /* 113df75a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113df75d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df760 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_113df763:;
  /* 113df763 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113df766 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113df768 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113df76a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113df76c je 0x113df7a9 */
  if (C.zf) goto L_113df7a9;
  /* 113df76e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113df771 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113df773 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 113df776 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113df778 je 0x113df7a9 */
  if (C.zf) goto L_113df7a9;
  /* 113df77a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113df77d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113df77f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113df781 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 113df784 jmp 0x113df78f */
  goto L_113df78f;
L_113df786:;
  /* 113df786 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 113df789 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df78c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_113df78f:;
  /* 113df78f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113df792 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113df794 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 113df797 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df79a jg 0x113df7a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_113df7a7;
  /* 113df79c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113df79f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df7a2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 113df7a5 jmp 0x113df786 */
  goto L_113df786;
L_113df7a7:;
  /* 113df7a7 jmp 0x113df75a */
  goto L_113df75a;
L_113df7a9:;
  /* 113df7a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113df7ab push 0 */
  push32((uint32_t)(0x0u));
  /* 113df7ad push 0 */
  push32((uint32_t)(0x0u));
  /* 113df7af mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113df7b2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df7b5 push eax */
  push32((uint32_t)(EAX));
  /* 113df7b6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113df7bb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113df7be push ecx */
  push32((uint32_t)(ECX));
  /* 113df7bf push 1 */
  push32((uint32_t)(0x1u));
  /* 113df7c1 call 0x113dbf60 */
  push32(0x113df7c6u); f_113dbf60();
  /* 113df7c6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df7c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113df7cb jne 0x113df7d2 */
  if (!C.zf) goto L_113df7d2;
  /* 113df7cd jmp 0x113df922 */
  goto L_113df922;
L_113df7d2:;
  /* 113df7d2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113df7d5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 113df7da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113df7dd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 113df7e0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 113df7e7 jmp 0x113df7f2 */
  goto L_113df7f2;
L_113df7e9:;
  /* 113df7e9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113df7ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df7ef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_113df7f2:;
  /* 113df7f2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df7f9 jge 0x113df810 */
  if ((C.sf==C.of)) goto L_113df810;
  /* 113df7fb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113df7fe mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 113df802 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 113df805 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113df808 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df80b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 113df80e jmp 0x113df7e9 */
  goto L_113df7e9;
L_113df810:;
  /* 113df810 push 0 */
  push32((uint32_t)(0x0u));
  /* 113df812 push 0 */
  push32((uint32_t)(0x0u));
  /* 113df814 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113df817 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df81a push edx */
  push32((uint32_t)(EDX));
  /* 113df81b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113df820 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113df823 push eax */
  push32((uint32_t)(EAX));
  /* 113df824 push 1 */
  push32((uint32_t)(0x1u));
  /* 113df826 call 0x113e2190 */
  push32(0x113df82bu); f_113e2190();
  /* 113df82b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df82e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113df830 jne 0x113df837 */
  if (!C.zf) goto L_113df837;
  /* 113df832 jmp 0x113df922 */
  goto L_113df922;
L_113df837:;
  /* 113df837 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113df83a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 113df83f cmp dword ptr [0x113fdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113fdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df846 jle 0x113df8a3 */
  if ((C.zf||C.sf!=C.of)) goto L_113df8a3;
  /* 113df848 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 113df84b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 113df84e jmp 0x113df859 */
  goto L_113df859;
L_113df850:;
  /* 113df850 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113df853 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df856 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_113df859:;
  /* 113df859 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113df85c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113df85e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113df860 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113df862 je 0x113df8a3 */
  if (C.zf) goto L_113df8a3;
  /* 113df864 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113df867 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113df869 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 113df86c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113df86e je 0x113df8a3 */
  if (C.zf) goto L_113df8a3;
  /* 113df870 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113df873 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113df875 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113df877 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113df87a jmp 0x113df885 */
  goto L_113df885;
L_113df87c:;
  /* 113df87c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113df87f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df882 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_113df885:;
  /* 113df885 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113df888 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113df88a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 113df88d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df890 jg 0x113df8a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_113df8a1;
  /* 113df892 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113df895 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113df898 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 113df89f jmp 0x113df87c */
  goto L_113df87c;
L_113df8a1:;
  /* 113df8a1 jmp 0x113df850 */
  goto L_113df850;
L_113df8a3:;
  /* 113df8a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113df8a6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df8a9 mov dword ptr [0x113fdc98], eax */
  w32((uint32_t)(0x113fdc98), (EAX));
  /* 113df8ae mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113df8b1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df8b4 mov dword ptr [0x113fdc9c], ecx */
  w32((uint32_t)(0x113fdc9c), (ECX));
  /* 113df8ba cmp dword ptr [0x113ff758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df8c1 je 0x113df8d4 */
  if (C.zf) goto L_113df8d4;
  /* 113df8c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113df8c5 mov edx, dword ptr [0x113ff758] */
  EDX = (r32((uint32_t)(0x113ff758)));
  /* 113df8cb push edx */
  push32((uint32_t)(EDX));
  /* 113df8cc call 0x113d47c0 */
  push32(0x113df8d1u); f_113d47c0();
  /* 113df8d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113df8d4:;
  /* 113df8d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113df8d7 mov dword ptr [0x113ff758], eax */
  w32((uint32_t)(0x113ff758), (EAX));
  /* 113df8dc cmp dword ptr [0x113ff75c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff75c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113df8e3 je 0x113df8f6 */
  if (C.zf) goto L_113df8f6;
  /* 113df8e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113df8e7 mov ecx, dword ptr [0x113ff75c] */
  ECX = (r32((uint32_t)(0x113ff75c)));
  /* 113df8ed push ecx */
  push32((uint32_t)(ECX));
  /* 113df8ee call 0x113d47c0 */
  push32(0x113df8f3u); f_113d47c0();
  /* 113df8f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113df8f6:;
  /* 113df8f6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113df8f9 mov dword ptr [0x113ff75c], edx */
  w32((uint32_t)(0x113ff75c), (EDX));
  /* 113df8ff push 2 */
  push32((uint32_t)(0x2u));
  /* 113df901 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113df904 push eax */
  push32((uint32_t)(EAX));
  /* 113df905 call 0x113d47c0 */
  push32(0x113df90au); f_113d47c0();
  /* 113df90a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df90d push 2 */
  push32((uint32_t)(0x2u));
  /* 113df90f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113df912 push ecx */
  push32((uint32_t)(ECX));
  /* 113df913 call 0x113d47c0 */
  push32(0x113df918u); f_113d47c0();
  /* 113df918 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df91b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113df91d jmp 0x113df9ac */
  goto L_113df9ac;
L_113df922:;
  /* 113df922 push 2 */
  push32((uint32_t)(0x2u));
  /* 113df924 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113df927 push edx */
  push32((uint32_t)(EDX));
  /* 113df928 call 0x113d47c0 */
  push32(0x113df92du); f_113d47c0();
  /* 113df92d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df930 push 2 */
  push32((uint32_t)(0x2u));
  /* 113df932 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113df935 push eax */
  push32((uint32_t)(EAX));
  /* 113df936 call 0x113d47c0 */
  push32(0x113df93bu); f_113d47c0();
  /* 113df93b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df93e push 2 */
  push32((uint32_t)(0x2u));
  /* 113df940 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113df943 push ecx */
  push32((uint32_t)(ECX));
  /* 113df944 call 0x113d47c0 */
  push32(0x113df949u); f_113d47c0();
  /* 113df949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df94c push 2 */
  push32((uint32_t)(0x2u));
  /* 113df94e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113df951 push edx */
  push32((uint32_t)(EDX));
  /* 113df952 call 0x113d47c0 */
  push32(0x113df957u); f_113d47c0();
  /* 113df957 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df95a mov eax, 1 */
  EAX = (0x1u);
  /* 113df95f jmp 0x113df9ac */
  goto L_113df9ac;
L_113df961:;
  /* 113df961 mov dword ptr [0x113fdc98], 0x113fdca2 */
  w32((uint32_t)(0x113fdc98), (0x113fdca2u));
  /* 113df96b mov dword ptr [0x113fdc9c], 0x113fdca2 */
  w32((uint32_t)(0x113fdc9c), (0x113fdca2u));
  /* 113df975 push 2 */
  push32((uint32_t)(0x2u));
  /* 113df977 mov eax, dword ptr [0x113ff758] */
  EAX = (r32((uint32_t)(0x113ff758)));
  /* 113df97c push eax */
  push32((uint32_t)(EAX));
  /* 113df97d call 0x113d47c0 */
  push32(0x113df982u); f_113d47c0();
  /* 113df982 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df985 push 2 */
  push32((uint32_t)(0x2u));
  /* 113df987 mov ecx, dword ptr [0x113ff75c] */
  ECX = (r32((uint32_t)(0x113ff75c)));
  /* 113df98d push ecx */
  push32((uint32_t)(ECX));
  /* 113df98e call 0x113d47c0 */
  push32(0x113df993u); f_113d47c0();
  /* 113df993 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113df996 mov dword ptr [0x113ff758], 0 */
  w32((uint32_t)(0x113ff758), (0x0u));
  /* 113df9a0 mov dword ptr [0x113ff75c], 0 */
  w32((uint32_t)(0x113ff75c), (0x0u));
  /* 113df9aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113df9ac:;
  /* 113df9ac mov esp, ebp */
  ESP = (EBP);
  /* 113df9ae pop ebp */
  EBP = (pop32());
  /* 113df9af ret  */
  ESPCHK(0x113df610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9b0 @ 0x113df9b0 (7 bytes, 5 insns) */
void f_113df9b0(void) {
  FTRACE(0x113df9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113df9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113df9b1 mov ebp, esp */
  EBP = (ESP);
  /* 113df9b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113df9b5 pop ebp */
  EBP = (pop32());
  /* 113df9b6 ret  */
  ESPCHK(0x113df9b0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x113df9c0 (129 bytes, 56 insns) */
void f_113df9c0(void) {
  FTRACE(0x113df9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113df9c0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 113df9c4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 113df9c8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 113df9ce jne 0x113dfa0c */
  if (!C.zf) goto L_113dfa0c;
L_113df9d0:;
  /* 113df9d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113df9d2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113df9d4 jne 0x113dfa04 */
  if (!C.zf) goto L_113dfa04;
  /* 113df9d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113df9d8 je 0x113dfa00 */
  if (C.zf) goto L_113dfa00;
  /* 113df9da cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113df9dd jne 0x113dfa04 */
  if (!C.zf) goto L_113dfa04;
  /* 113df9df or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 113df9e1 je 0x113dfa00 */
  if (C.zf) goto L_113dfa00;
  /* 113df9e3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 113df9e6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113df9e9 jne 0x113dfa04 */
  if (!C.zf) goto L_113dfa04;
  /* 113df9eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113df9ed je 0x113dfa00 */
  if (C.zf) goto L_113dfa00;
  /* 113df9ef cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113df9f2 jne 0x113dfa04 */
  if (!C.zf) goto L_113dfa04;
  /* 113df9f4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df9f7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113df9fa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 113df9fc jne 0x113df9d0 */
  if (!C.zf) goto L_113df9d0;
  /* 113df9fe mov edi, edi */
  EDI = (EDI);
L_113dfa00:;
  /* 113dfa00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dfa02 ret  */
  ESPCHK(0x113df9c0u, _esp0);
  ESP += 4; return;
  /* 113dfa03 nop  */
  /* nop */
L_113dfa04:;
  /* 113dfa04 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dfa06 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113dfa08 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 113dfa09 ret  */
  ESPCHK(0x113df9c0u, _esp0);
  ESP += 4; return;
  /* 113dfa0a mov edi, edi */
  EDI = (EDI);
L_113dfa0c:;
  /* 113dfa0c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 113dfa12 je 0x113dfa28 */
  if (C.zf) goto L_113dfa28;
  /* 113dfa14 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113dfa16 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 113dfa17 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113dfa19 jne 0x113dfa04 */
  if (!C.zf) goto L_113dfa04;
  /* 113dfa1b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 113dfa1c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113dfa1e je 0x113dfa00 */
  if (C.zf) goto L_113dfa00;
  /* 113dfa20 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 113dfa26 je 0x113df9d0 */
  if (C.zf) goto L_113df9d0;
L_113dfa28:;
  /* 113dfa28 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 113dfa2b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfa2e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113dfa30 jne 0x113dfa04 */
  if (!C.zf) goto L_113dfa04;
  /* 113dfa32 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113dfa34 je 0x113dfa00 */
  if (C.zf) goto L_113dfa00;
  /* 113dfa36 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113dfa39 jne 0x113dfa04 */
  if (!C.zf) goto L_113dfa04;
  /* 113dfa3b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 113dfa3d je 0x113dfa00 */
  if (C.zf) goto L_113dfa00;
  /* 113dfa3f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfa42 jmp 0x113df9d0 */
  goto L_113df9d0;
}

/* FUN_1000fa50 @ 0x113dfa50 (62 bytes, 35 insns) */
void f_113dfa50(void) {
  FTRACE(0x113dfa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dfa50 push ebp */
  push32((uint32_t)(EBP));
  /* 113dfa51 mov ebp, esp */
  EBP = (ESP);
  /* 113dfa53 push esi */
  push32((uint32_t)(ESI));
  /* 113dfa54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dfa56 push eax */
  push32((uint32_t)(EAX));
  /* 113dfa57 push eax */
  push32((uint32_t)(EAX));
  /* 113dfa58 push eax */
  push32((uint32_t)(EAX));
  /* 113dfa59 push eax */
  push32((uint32_t)(EAX));
  /* 113dfa5a push eax */
  push32((uint32_t)(EAX));
  /* 113dfa5b push eax */
  push32((uint32_t)(EAX));
  /* 113dfa5c push eax */
  push32((uint32_t)(EAX));
  /* 113dfa5d push eax */
  push32((uint32_t)(EAX));
  /* 113dfa5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dfa61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113dfa64:;
  /* 113dfa64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113dfa66 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113dfa68 je 0x113dfa71 */
  if (C.zf) goto L_113dfa71;
  /* 113dfa6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 113dfa6b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x113dfa6b");
  /* 113dfa6f jmp 0x113dfa64 */
  goto L_113dfa64;
L_113dfa71:;
  /* 113dfa71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 113dfa74 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113dfa77 nop  */
  /* nop */
L_113dfa78:;
  /* 113dfa78 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 113dfa79 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113dfa7b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113dfa7d je 0x113dfa86 */
  if (C.zf) goto L_113dfa86;
  /* 113dfa7f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 113dfa80 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x113dfa80");
  /* 113dfa84 jae 0x113dfa78 */
  if (!C.cf) goto L_113dfa78;
L_113dfa86:;
  /* 113dfa86 mov eax, ecx */
  EAX = (ECX);
  /* 113dfa88 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfa8b pop esi */
  ESI = (pop32());
  /* 113dfa8c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113dfa8d ret  */
  ESPCHK(0x113dfa50u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x113dfa90 (56 bytes, 31 insns) */
void f_113dfa90(void) {
  FTRACE(0x113dfa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dfa90 push ebp */
  push32((uint32_t)(EBP));
  /* 113dfa91 mov ebp, esp */
  EBP = (ESP);
  /* 113dfa93 push edi */
  push32((uint32_t)(EDI));
  /* 113dfa94 push esi */
  push32((uint32_t)(ESI));
  /* 113dfa95 push ebx */
  push32((uint32_t)(EBX));
  /* 113dfa96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dfa99 jecxz 0x113dfac1 */
  x86_unimpl("jecxz @ 0x113dfa99");
  /* 113dfa9b mov ebx, ecx */
  EBX = (ECX);
  /* 113dfa9d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 113dfaa0 mov esi, edi */
  ESI = (EDI);
  /* 113dfaa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dfaa4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 113dfaa6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 113dfaa8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfaaa mov edi, esi */
  EDI = (ESI);
  /* 113dfaac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 113dfaaf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 113dfab1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 113dfab4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113dfab6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113dfab9 ja 0x113dfabf */
  if ((!C.cf&&!C.zf)) goto L_113dfabf;
  /* 113dfabb je 0x113dfac1 */
  if (C.zf) goto L_113dfac1;
  /* 113dfabd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 113dfabe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_113dfabf:;
  /* 113dfabf not ecx */
  ECX = (~(ECX));
L_113dfac1:;
  /* 113dfac1 mov eax, ecx */
  EAX = (ECX);
  /* 113dfac3 pop ebx */
  EBX = (pop32());
  /* 113dfac4 pop esi */
  ESI = (pop32());
  /* 113dfac5 pop edi */
  EDI = (pop32());
  /* 113dfac6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113dfac7 ret  */
  ESPCHK(0x113dfa90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fad0 @ 0x113dfad0 (58 bytes, 32 insns) */
void f_113dfad0(void) {
  FTRACE(0x113dfad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dfad0 push ebp */
  push32((uint32_t)(EBP));
  /* 113dfad1 mov ebp, esp */
  EBP = (ESP);
  /* 113dfad3 push esi */
  push32((uint32_t)(ESI));
  /* 113dfad4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dfad6 push eax */
  push32((uint32_t)(EAX));
  /* 113dfad7 push eax */
  push32((uint32_t)(EAX));
  /* 113dfad8 push eax */
  push32((uint32_t)(EAX));
  /* 113dfad9 push eax */
  push32((uint32_t)(EAX));
  /* 113dfada push eax */
  push32((uint32_t)(EAX));
  /* 113dfadb push eax */
  push32((uint32_t)(EAX));
  /* 113dfadc push eax */
  push32((uint32_t)(EAX));
  /* 113dfadd push eax */
  push32((uint32_t)(EAX));
  /* 113dfade mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dfae1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113dfae4:;
  /* 113dfae4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113dfae6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113dfae8 je 0x113dfaf1 */
  if (C.zf) goto L_113dfaf1;
  /* 113dfaea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 113dfaeb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x113dfaeb");
  /* 113dfaef jmp 0x113dfae4 */
  goto L_113dfae4;
L_113dfaf1:;
  /* 113dfaf1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_113dfaf4:;
  /* 113dfaf4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113dfaf6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113dfaf8 je 0x113dfb04 */
  if (C.zf) goto L_113dfb04;
  /* 113dfafa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 113dfafb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x113dfafb");
  /* 113dfaff jae 0x113dfaf4 */
  if (!C.cf) goto L_113dfaf4;
  /* 113dfb01 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_113dfb04:;
  /* 113dfb04 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfb07 pop esi */
  ESI = (pop32());
  /* 113dfb08 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113dfb09 ret  */
  ESPCHK(0x113dfad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb10 @ 0x113dfb10 (512 bytes, 147 insns) */
void f_113dfb10(void) {
  FTRACE(0x113dfb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dfb10 push ebp */
  push32((uint32_t)(EBP));
  /* 113dfb11 mov ebp, esp */
  EBP = (ESP);
  /* 113dfb13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dfb16 cmp dword ptr [0x113ff7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dfb1d jne 0x113dfb42 */
  if (!C.zf) goto L_113dfb42;
  /* 113dfb1f call 0x113e05e0 */
  push32(0x113dfb24u); f_113e05e0();
  /* 113dfb24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dfb26 je 0x113dfb32 */
  if (C.zf) goto L_113dfb32;
  /* 113dfb28 mov eax, dword ptr [0x114022cc] */
  EAX = (r32((uint32_t)(0x114022cc)));
  /* 113dfb2d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113dfb30 jmp 0x113dfb39 */
  goto L_113dfb39;
L_113dfb32:;
  /* 113dfb32 mov dword ptr [ebp - 8], 0x113e0630 */
  w32((uint32_t)(EBP + -0x8), (0x113e0630u));
L_113dfb39:;
  /* 113dfb39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113dfb3c mov dword ptr [0x113ff7a4], ecx */
  w32((uint32_t)(0x113ff7a4), (ECX));
L_113dfb42:;
  /* 113dfb42 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dfb46 jne 0x113dfb52 */
  if (!C.zf) goto L_113dfb52;
  /* 113dfb48 call 0x113e0430 */
  push32(0x113dfb4du); f_113e0430();
  /* 113dfb4d jmp 0x113dfc1e */
  goto L_113dfc1e;
L_113dfb52:;
  /* 113dfb52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dfb55 mov dword ptr [0x113ff794], edx */
  w32((uint32_t)(0x113ff794), (EDX));
  /* 113dfb5b cmp dword ptr [0x113ff794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dfb62 je 0x113dfb84 */
  if (C.zf) goto L_113dfb84;
  /* 113dfb64 mov eax, dword ptr [0x113ff794] */
  EAX = (r32((uint32_t)(0x113ff794)));
  /* 113dfb69 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113dfb6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113dfb6e je 0x113dfb84 */
  if (C.zf) goto L_113dfb84;
  /* 113dfb70 push 0x113ff794 */
  push32((uint32_t)(0x113ff794u));
  /* 113dfb75 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 113dfb77 push 0x113fea90 */
  push32((uint32_t)(0x113fea90u));
  /* 113dfb7c call 0x113dfd10 */
  push32(0x113dfb81u); f_113dfd10();
  /* 113dfb81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113dfb84:;
  /* 113dfb84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dfb87 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfb8a mov dword ptr [0x113ff798], edx */
  w32((uint32_t)(0x113ff798), (EDX));
  /* 113dfb90 cmp dword ptr [0x113ff798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dfb97 je 0x113dfbb9 */
  if (C.zf) goto L_113dfbb9;
  /* 113dfb99 mov eax, dword ptr [0x113ff798] */
  EAX = (r32((uint32_t)(0x113ff798)));
  /* 113dfb9e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113dfba1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113dfba3 je 0x113dfbb9 */
  if (C.zf) goto L_113dfbb9;
  /* 113dfba5 push 0x113ff798 */
  push32((uint32_t)(0x113ff798u));
  /* 113dfbaa push 0x16 */
  push32((uint32_t)(0x16u));
  /* 113dfbac push 0x113fe9d8 */
  push32((uint32_t)(0x113fe9d8u));
  /* 113dfbb1 call 0x113dfd10 */
  push32(0x113dfbb6u); f_113dfd10();
  /* 113dfbb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113dfbb9:;
  /* 113dfbb9 mov dword ptr [0x113ff79c], 0 */
  w32((uint32_t)(0x113ff79c), (0x0u));
  /* 113dfbc3 cmp dword ptr [0x113ff794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dfbca je 0x113dfbfd */
  if (C.zf) goto L_113dfbfd;
  /* 113dfbcc mov edx, dword ptr [0x113ff794] */
  EDX = (r32((uint32_t)(0x113ff794)));
  /* 113dfbd2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113dfbd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dfbd7 je 0x113dfbfd */
  if (C.zf) goto L_113dfbfd;
  /* 113dfbd9 cmp dword ptr [0x113ff798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dfbe0 je 0x113dfbf6 */
  if (C.zf) goto L_113dfbf6;
  /* 113dfbe2 mov ecx, dword ptr [0x113ff798] */
  ECX = (r32((uint32_t)(0x113ff798)));
  /* 113dfbe8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113dfbeb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113dfbed je 0x113dfbf6 */
  if (C.zf) goto L_113dfbf6;
  /* 113dfbef call 0x113dfda0 */
  push32(0x113dfbf4u); f_113dfda0();
  /* 113dfbf4 jmp 0x113dfbfb */
  goto L_113dfbfb;
L_113dfbf6:;
  /* 113dfbf6 call 0x113e0190 */
  push32(0x113dfbfbu); f_113e0190();
L_113dfbfb:;
  /* 113dfbfb jmp 0x113dfc1e */
  goto L_113dfc1e;
L_113dfbfd:;
  /* 113dfbfd cmp dword ptr [0x113ff798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dfc04 je 0x113dfc19 */
  if (C.zf) goto L_113dfc19;
  /* 113dfc06 mov eax, dword ptr [0x113ff798] */
  EAX = (r32((uint32_t)(0x113ff798)));
  /* 113dfc0b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113dfc0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113dfc10 je 0x113dfc19 */
  if (C.zf) goto L_113dfc19;
  /* 113dfc12 call 0x113e0330 */
  push32(0x113dfc17u); f_113e0330();
  /* 113dfc17 jmp 0x113dfc1e */
  goto L_113dfc1e;
L_113dfc19:;
  /* 113dfc19 call 0x113e0430 */
  push32(0x113dfc1eu); f_113e0430();
L_113dfc1e:;
  /* 113dfc1e cmp dword ptr [0x113ff79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dfc25 jne 0x113dfc2e */
  if (!C.zf) goto L_113dfc2e;
  /* 113dfc27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dfc29 jmp 0x113dfd0c */
  goto L_113dfd0c;
L_113dfc2e:;
  /* 113dfc2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dfc31 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfc37 push edx */
  push32((uint32_t)(EDX));
  /* 113dfc38 call 0x113e0460 */
  push32(0x113dfc3du); f_113e0460();
  /* 113dfc3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfc40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113dfc43 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dfc47 je 0x113dfc5c */
  if (C.zf) goto L_113dfc5c;
  /* 113dfc49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dfc4c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113dfc51 push eax */
  push32((uint32_t)(EAX));
  /* 113dfc52 call dword ptr [0x114022d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022d0))), 0x113dfc58u);
  /* 113dfc58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dfc5a jne 0x113dfc63 */
  if (!C.zf) goto L_113dfc63;
L_113dfc5c:;
  /* 113dfc5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dfc5e jmp 0x113dfd0c */
  goto L_113dfd0c;
L_113dfc63:;
  /* 113dfc63 push 1 */
  push32((uint32_t)(0x1u));
  /* 113dfc65 mov ecx, dword ptr [0x113ff784] */
  ECX = (r32((uint32_t)(0x113ff784)));
  /* 113dfc6b push ecx */
  push32((uint32_t)(ECX));
  /* 113dfc6c call dword ptr [0x114022e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022e0))), 0x113dfc72u);
  /* 113dfc72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dfc74 jne 0x113dfc7d */
  if (!C.zf) goto L_113dfc7d;
  /* 113dfc76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dfc78 jmp 0x113dfd0c */
  goto L_113dfd0c;
L_113dfc7d:;
  /* 113dfc7d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dfc81 je 0x113dfca8 */
  if (C.zf) goto L_113dfca8;
  /* 113dfc83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dfc86 mov ax, word ptr [0x113ff784] */
  AX = (r16((uint32_t)(0x113ff784)));
  /* 113dfc8c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 113dfc8f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dfc92 mov dx, word ptr [0x113ff7a0] */
  DX = (r16((uint32_t)(0x113ff7a0)));
  /* 113dfc99 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 113dfc9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113dfca0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 113dfca4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_113dfca8:;
  /* 113dfca8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dfcac je 0x113dfd07 */
  if (C.zf) goto L_113dfd07;
  /* 113dfcae push 0x40 */
  push32((uint32_t)(0x40u));
  /* 113dfcb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dfcb3 push edx */
  push32((uint32_t)(EDX));
  /* 113dfcb4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 113dfcb9 mov eax, dword ptr [0x113ff784] */
  EAX = (r32((uint32_t)(0x113ff784)));
  /* 113dfcbe push eax */
  push32((uint32_t)(EAX));
  /* 113dfcbf call dword ptr [0x113ff7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113ff7a4))), 0x113dfcc5u);
  /* 113dfcc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dfcc7 jne 0x113dfccd */
  if (!C.zf) goto L_113dfccd;
  /* 113dfcc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dfccb jmp 0x113dfd0c */
  goto L_113dfd0c;
L_113dfccd:;
  /* 113dfccd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 113dfccf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dfcd2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfcd5 push ecx */
  push32((uint32_t)(ECX));
  /* 113dfcd6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 113dfcdb mov edx, dword ptr [0x113ff7a0] */
  EDX = (r32((uint32_t)(0x113ff7a0)));
  /* 113dfce1 push edx */
  push32((uint32_t)(EDX));
  /* 113dfce2 call dword ptr [0x113ff7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113ff7a4))), 0x113dfce8u);
  /* 113dfce8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dfcea jne 0x113dfcf0 */
  if (!C.zf) goto L_113dfcf0;
  /* 113dfcec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113dfcee jmp 0x113dfd0c */
  goto L_113dfd0c;
L_113dfcf0:;
  /* 113dfcf0 push 0xa */
  push32((uint32_t)(0xau));
  /* 113dfcf2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dfcf5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfcfa push eax */
  push32((uint32_t)(EAX));
  /* 113dfcfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dfcfe push ecx */
  push32((uint32_t)(ECX));
  /* 113dfcff call 0x113d6870 */
  push32(0x113dfd04u); f_113d6870();
  /* 113dfd04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113dfd07:;
  /* 113dfd07 mov eax, 1 */
  EAX = (0x1u);
L_113dfd0c:;
  /* 113dfd0c mov esp, ebp */
  ESP = (EBP);
  /* 113dfd0e pop ebp */
  EBP = (pop32());
  /* 113dfd0f ret  */
  ESPCHK(0x113dfb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd10 @ 0x113dfd10 (130 bytes, 47 insns) */
void f_113dfd10(void) {
  FTRACE(0x113dfd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dfd10 push ebp */
  push32((uint32_t)(EBP));
  /* 113dfd11 mov ebp, esp */
  EBP = (ESP);
  /* 113dfd13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dfd16 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 113dfd1d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_113dfd24:;
  /* 113dfd24 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dfd27 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dfd2a jg 0x113dfd8e */
  if ((!C.zf&&C.sf==C.of)) goto L_113dfd8e;
  /* 113dfd2c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dfd30 je 0x113dfd8e */
  if (C.zf) goto L_113dfd8e;
  /* 113dfd32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113dfd35 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfd38 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113dfd39 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dfd3b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113dfd3d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113dfd40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dfd43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dfd46 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 113dfd49 push eax */
  push32((uint32_t)(EAX));
  /* 113dfd4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dfd4d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113dfd4f push edx */
  push32((uint32_t)(EDX));
  /* 113dfd50 call 0x113e2400 */
  push32(0x113dfd55u); f_113e2400();
  /* 113dfd55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfd58 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113dfd5b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dfd5f jne 0x113dfd72 */
  if (!C.zf) goto L_113dfd72;
  /* 113dfd61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dfd64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dfd67 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 113dfd6b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113dfd6e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113dfd70 jmp 0x113dfd8c */
  goto L_113dfd8c;
L_113dfd72:;
  /* 113dfd72 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dfd76 jge 0x113dfd83 */
  if ((C.sf==C.of)) goto L_113dfd83;
  /* 113dfd78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dfd7b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dfd7e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 113dfd81 jmp 0x113dfd8c */
  goto L_113dfd8c;
L_113dfd83:;
  /* 113dfd83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dfd86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfd89 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_113dfd8c:;
  /* 113dfd8c jmp 0x113dfd24 */
  goto L_113dfd24;
L_113dfd8e:;
  /* 113dfd8e mov esp, ebp */
  ESP = (EBP);
  /* 113dfd90 pop ebp */
  EBP = (pop32());
  /* 113dfd91 ret  */
  ESPCHK(0x113dfd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fda0 @ 0x113dfda0 (186 bytes, 50 insns) */
void f_113dfda0(void) {
  FTRACE(0x113dfda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dfda0 push ebp */
  push32((uint32_t)(EBP));
  /* 113dfda1 mov ebp, esp */
  EBP = (ESP);
  /* 113dfda3 push ecx */
  push32((uint32_t)(ECX));
  /* 113dfda4 mov eax, dword ptr [0x113ff794] */
  EAX = (r32((uint32_t)(0x113ff794)));
  /* 113dfda9 push eax */
  push32((uint32_t)(EAX));
  /* 113dfdaa call 0x113d6b60 */
  push32(0x113dfdafu); f_113d6b60();
  /* 113dfdaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfdb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113dfdb4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dfdb7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 113dfdba mov dword ptr [0x113ff790], ecx */
  w32((uint32_t)(0x113ff790), (ECX));
  /* 113dfdc0 mov edx, dword ptr [0x113ff798] */
  EDX = (r32((uint32_t)(0x113ff798)));
  /* 113dfdc6 push edx */
  push32((uint32_t)(EDX));
  /* 113dfdc7 call 0x113d6b60 */
  push32(0x113dfdccu); f_113d6b60();
  /* 113dfdcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfdcf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113dfdd1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dfdd4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 113dfdd7 mov dword ptr [0x113ff788], ecx */
  w32((uint32_t)(0x113ff788), (ECX));
  /* 113dfddd mov dword ptr [0x113ff784], 0 */
  w32((uint32_t)(0x113ff784), (0x0u));
  /* 113dfde7 cmp dword ptr [0x113ff790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dfdee je 0x113dfdf9 */
  if (C.zf) goto L_113dfdf9;
  /* 113dfdf0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 113dfdf7 jmp 0x113dfe0b */
  goto L_113dfe0b;
L_113dfdf9:;
  /* 113dfdf9 mov edx, dword ptr [0x113ff794] */
  EDX = (r32((uint32_t)(0x113ff794)));
  /* 113dfdff push edx */
  push32((uint32_t)(EDX));
  /* 113dfe00 call 0x113e0840 */
  push32(0x113dfe05u); f_113e0840();
  /* 113dfe05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfe08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113dfe0b:;
  /* 113dfe0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113dfe0e mov dword ptr [0x113ff78c], eax */
  w32((uint32_t)(0x113ff78c), (EAX));
  /* 113dfe13 push 1 */
  push32((uint32_t)(0x1u));
  /* 113dfe15 push 0x113dfe60 */
  push32((uint32_t)(0x113dfe60u));
  /* 113dfe1a call dword ptr [0x114022d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022d4))), 0x113dfe20u);
  /* 113dfe20 mov ecx, dword ptr [0x113ff79c] */
  ECX = (r32((uint32_t)(0x113ff79c)));
  /* 113dfe26 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 113dfe2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113dfe2e je 0x113dfe4c */
  if (C.zf) goto L_113dfe4c;
  /* 113dfe30 mov edx, dword ptr [0x113ff79c] */
  EDX = (r32((uint32_t)(0x113ff79c)));
  /* 113dfe36 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 113dfe3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113dfe3e je 0x113dfe4c */
  if (C.zf) goto L_113dfe4c;
  /* 113dfe40 mov eax, dword ptr [0x113ff79c] */
  EAX = (r32((uint32_t)(0x113ff79c)));
  /* 113dfe45 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 113dfe48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dfe4a jne 0x113dfe56 */
  if (!C.zf) goto L_113dfe56;
L_113dfe4c:;
  /* 113dfe4c mov dword ptr [0x113ff79c], 0 */
  w32((uint32_t)(0x113ff79c), (0x0u));
L_113dfe56:;
  /* 113dfe56 mov esp, ebp */
  ESP = (EBP);
  /* 113dfe58 pop ebp */
  EBP = (pop32());
  /* 113dfe59 ret  */
  ESPCHK(0x113dfda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe60 @ 0x113dfe60 (804 bytes, 220 insns) */
void f_113dfe60(void) {
  FTRACE(0x113dfe60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113dfe60 push ebp */
  push32((uint32_t)(EBP));
  /* 113dfe61 mov ebp, esp */
  EBP = (ESP);
  /* 113dfe63 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dfe66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113dfe69 push eax */
  push32((uint32_t)(EAX));
  /* 113dfe6a call 0x113e07c0 */
  push32(0x113dfe6fu); f_113e07c0();
  /* 113dfe6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfe72 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 113dfe75 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 113dfe77 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 113dfe7a push ecx */
  push32((uint32_t)(ECX));
  /* 113dfe7b mov edx, dword ptr [0x113ff788] */
  EDX = (r32((uint32_t)(0x113ff788)));
  /* 113dfe81 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 113dfe83 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dfe85 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 113dfe8b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfe91 push edx */
  push32((uint32_t)(EDX));
  /* 113dfe92 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113dfe95 push eax */
  push32((uint32_t)(EAX));
  /* 113dfe96 call dword ptr [0x113ff7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113ff7a4))), 0x113dfe9cu);
  /* 113dfe9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dfe9e jne 0x113dfeb4 */
  if (!C.zf) goto L_113dfeb4;
  /* 113dfea0 mov dword ptr [0x113ff79c], 0 */
  w32((uint32_t)(0x113ff79c), (0x0u));
  /* 113dfeaa mov eax, 1 */
  EAX = (0x1u);
  /* 113dfeaf jmp 0x113e017e */
  goto L_113e017e;
L_113dfeb4:;
  /* 113dfeb4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 113dfeb7 push ecx */
  push32((uint32_t)(ECX));
  /* 113dfeb8 mov edx, dword ptr [0x113ff798] */
  EDX = (r32((uint32_t)(0x113ff798)));
  /* 113dfebe push edx */
  push32((uint32_t)(EDX));
  /* 113dfebf call 0x113e2400 */
  push32(0x113dfec4u); f_113e2400();
  /* 113dfec4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfec7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dfec9 jne 0x113dffef */
  if (!C.zf) goto L_113dffef;
  /* 113dfecf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 113dfed1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 113dfed4 push eax */
  push32((uint32_t)(EAX));
  /* 113dfed5 mov ecx, dword ptr [0x113ff790] */
  ECX = (r32((uint32_t)(0x113ff790)));
  /* 113dfedb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 113dfedd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113dfedf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 113dfee5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113dfeeb push ecx */
  push32((uint32_t)(ECX));
  /* 113dfeec mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113dfeef push edx */
  push32((uint32_t)(EDX));
  /* 113dfef0 call dword ptr [0x113ff7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113ff7a4))), 0x113dfef6u);
  /* 113dfef6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dfef8 jne 0x113dff0e */
  if (!C.zf) goto L_113dff0e;
  /* 113dfefa mov dword ptr [0x113ff79c], 0 */
  w32((uint32_t)(0x113ff79c), (0x0u));
  /* 113dff04 mov eax, 1 */
  EAX = (0x1u);
  /* 113dff09 jmp 0x113e017e */
  goto L_113e017e;
L_113dff0e:;
  /* 113dff0e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 113dff11 push eax */
  push32((uint32_t)(EAX));
  /* 113dff12 mov ecx, dword ptr [0x113ff794] */
  ECX = (r32((uint32_t)(0x113ff794)));
  /* 113dff18 push ecx */
  push32((uint32_t)(ECX));
  /* 113dff19 call 0x113e2400 */
  push32(0x113dff1eu); f_113e2400();
  /* 113dff1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dff21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dff23 jne 0x113dff50 */
  if (!C.zf) goto L_113dff50;
  /* 113dff25 mov edx, dword ptr [0x113ff79c] */
  EDX = (r32((uint32_t)(0x113ff79c)));
  /* 113dff2b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 113dff31 mov dword ptr [0x113ff79c], edx */
  w32((uint32_t)(0x113ff79c), (EDX));
  /* 113dff37 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113dff3a mov dword ptr [0x113ff7a0], eax */
  w32((uint32_t)(0x113ff7a0), (EAX));
  /* 113dff3f mov ecx, dword ptr [0x113ff7a0] */
  ECX = (r32((uint32_t)(0x113ff7a0)));
  /* 113dff45 mov dword ptr [0x113ff784], ecx */
  w32((uint32_t)(0x113ff784), (ECX));
  /* 113dff4b jmp 0x113dffef */
  goto L_113dffef;
L_113dff50:;
  /* 113dff50 mov edx, dword ptr [0x113ff79c] */
  EDX = (r32((uint32_t)(0x113ff79c)));
  /* 113dff56 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 113dff59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113dff5b jne 0x113dffef */
  if (!C.zf) goto L_113dffef;
  /* 113dff61 cmp dword ptr [0x113ff78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dff68 je 0x113dffbd */
  if (C.zf) goto L_113dffbd;
  /* 113dff6a mov eax, dword ptr [0x113ff78c] */
  EAX = (r32((uint32_t)(0x113ff78c)));
  /* 113dff6f push eax */
  push32((uint32_t)(EAX));
  /* 113dff70 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 113dff73 push ecx */
  push32((uint32_t)(ECX));
  /* 113dff74 mov edx, dword ptr [0x113ff794] */
  EDX = (r32((uint32_t)(0x113ff794)));
  /* 113dff7a push edx */
  push32((uint32_t)(EDX));
  /* 113dff7b call 0x113e24d0 */
  push32(0x113dff80u); f_113e24d0();
  /* 113dff80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dff83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dff85 jne 0x113dffbd */
  if (!C.zf) goto L_113dffbd;
  /* 113dff87 mov eax, dword ptr [0x113ff79c] */
  EAX = (r32((uint32_t)(0x113ff79c)));
  /* 113dff8c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 113dff8e mov dword ptr [0x113ff79c], eax */
  w32((uint32_t)(0x113ff79c), (EAX));
  /* 113dff93 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113dff96 mov dword ptr [0x113ff7a0], ecx */
  w32((uint32_t)(0x113ff7a0), (ECX));
  /* 113dff9c mov edx, dword ptr [0x113ff794] */
  EDX = (r32((uint32_t)(0x113ff794)));
  /* 113dffa2 push edx */
  push32((uint32_t)(EDX));
  /* 113dffa3 call 0x113d6b60 */
  push32(0x113dffa8u); f_113d6b60();
  /* 113dffa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dffab cmp eax, dword ptr [0x113ff78c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113ff78c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113dffb1 jne 0x113dffbb */
  if (!C.zf) goto L_113dffbb;
  /* 113dffb3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113dffb6 mov dword ptr [0x113ff784], eax */
  w32((uint32_t)(0x113ff784), (EAX));
L_113dffbb:;
  /* 113dffbb jmp 0x113dffef */
  goto L_113dffef;
L_113dffbd:;
  /* 113dffbd mov ecx, dword ptr [0x113ff79c] */
  ECX = (r32((uint32_t)(0x113ff79c)));
  /* 113dffc3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113dffc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113dffc8 jne 0x113dffef */
  if (!C.zf) goto L_113dffef;
  /* 113dffca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113dffcd push edx */
  push32((uint32_t)(EDX));
  /* 113dffce call 0x113e0500 */
  push32(0x113dffd3u); f_113e0500();
  /* 113dffd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113dffd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113dffd8 je 0x113dffef */
  if (C.zf) goto L_113dffef;
  /* 113dffda mov eax, dword ptr [0x113ff79c] */
  EAX = (r32((uint32_t)(0x113ff79c)));
  /* 113dffdf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 113dffe1 mov dword ptr [0x113ff79c], eax */
  w32((uint32_t)(0x113ff79c), (EAX));
  /* 113dffe6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113dffe9 mov dword ptr [0x113ff7a0], ecx */
  w32((uint32_t)(0x113ff7a0), (ECX));
L_113dffef:;
  /* 113dffef mov edx, dword ptr [0x113ff79c] */
  EDX = (r32((uint32_t)(0x113ff79c)));
  /* 113dfff5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 113dfffb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0001 je 0x113e0171 */
  if (C.zf) goto L_113e0171;
  /* 113e0007 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 113e0009 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 113e000c push eax */
  push32((uint32_t)(EAX));
  /* 113e000d mov ecx, dword ptr [0x113ff790] */
  ECX = (r32((uint32_t)(0x113ff790)));
  /* 113e0013 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 113e0015 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e0017 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 113e001d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0023 push ecx */
  push32((uint32_t)(ECX));
  /* 113e0024 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113e0027 push edx */
  push32((uint32_t)(EDX));
  /* 113e0028 call dword ptr [0x113ff7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113ff7a4))), 0x113e002eu);
  /* 113e002e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e0030 jne 0x113e0046 */
  if (!C.zf) goto L_113e0046;
  /* 113e0032 mov dword ptr [0x113ff79c], 0 */
  w32((uint32_t)(0x113ff79c), (0x0u));
  /* 113e003c mov eax, 1 */
  EAX = (0x1u);
  /* 113e0041 jmp 0x113e017e */
  goto L_113e017e;
L_113e0046:;
  /* 113e0046 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 113e0049 push eax */
  push32((uint32_t)(EAX));
  /* 113e004a mov ecx, dword ptr [0x113ff794] */
  ECX = (r32((uint32_t)(0x113ff794)));
  /* 113e0050 push ecx */
  push32((uint32_t)(ECX));
  /* 113e0051 call 0x113e2400 */
  push32(0x113e0056u); f_113e2400();
  /* 113e0056 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0059 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e005b jne 0x113e0110 */
  if (!C.zf) goto L_113e0110;
  /* 113e0061 mov edx, dword ptr [0x113ff79c] */
  EDX = (r32((uint32_t)(0x113ff79c)));
  /* 113e0067 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 113e006a mov dword ptr [0x113ff79c], edx */
  w32((uint32_t)(0x113ff79c), (EDX));
  /* 113e0070 cmp dword ptr [0x113ff790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0077 je 0x113e009a */
  if (C.zf) goto L_113e009a;
  /* 113e0079 mov eax, dword ptr [0x113ff79c] */
  EAX = (r32((uint32_t)(0x113ff79c)));
  /* 113e007e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 113e0081 mov dword ptr [0x113ff79c], eax */
  w32((uint32_t)(0x113ff79c), (EAX));
  /* 113e0086 cmp dword ptr [0x113ff784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e008d jne 0x113e0098 */
  if (!C.zf) goto L_113e0098;
  /* 113e008f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113e0092 mov dword ptr [0x113ff784], ecx */
  w32((uint32_t)(0x113ff784), (ECX));
L_113e0098:;
  /* 113e0098 jmp 0x113e010e */
  goto L_113e010e;
L_113e009a:;
  /* 113e009a cmp dword ptr [0x113ff78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e00a1 je 0x113e00ef */
  if (C.zf) goto L_113e00ef;
  /* 113e00a3 mov edx, dword ptr [0x113ff794] */
  EDX = (r32((uint32_t)(0x113ff794)));
  /* 113e00a9 push edx */
  push32((uint32_t)(EDX));
  /* 113e00aa call 0x113d6b60 */
  push32(0x113e00afu); f_113d6b60();
  /* 113e00af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e00b2 cmp eax, dword ptr [0x113ff78c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113ff78c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e00b8 jne 0x113e00ef */
  if (!C.zf) goto L_113e00ef;
  /* 113e00ba push 1 */
  push32((uint32_t)(0x1u));
  /* 113e00bc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113e00bf push eax */
  push32((uint32_t)(EAX));
  /* 113e00c0 call 0x113e0550 */
  push32(0x113e00c5u); f_113e0550();
  /* 113e00c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e00c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e00ca je 0x113e00ed */
  if (C.zf) goto L_113e00ed;
  /* 113e00cc mov ecx, dword ptr [0x113ff79c] */
  ECX = (r32((uint32_t)(0x113ff79c)));
  /* 113e00d2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 113e00d5 mov dword ptr [0x113ff79c], ecx */
  w32((uint32_t)(0x113ff79c), (ECX));
  /* 113e00db cmp dword ptr [0x113ff784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e00e2 jne 0x113e00ed */
  if (!C.zf) goto L_113e00ed;
  /* 113e00e4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113e00e7 mov dword ptr [0x113ff784], edx */
  w32((uint32_t)(0x113ff784), (EDX));
L_113e00ed:;
  /* 113e00ed jmp 0x113e010e */
  goto L_113e010e;
L_113e00ef:;
  /* 113e00ef mov eax, dword ptr [0x113ff79c] */
  EAX = (r32((uint32_t)(0x113ff79c)));
  /* 113e00f4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 113e00f7 mov dword ptr [0x113ff79c], eax */
  w32((uint32_t)(0x113ff79c), (EAX));
  /* 113e00fc cmp dword ptr [0x113ff784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0103 jne 0x113e010e */
  if (!C.zf) goto L_113e010e;
  /* 113e0105 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113e0108 mov dword ptr [0x113ff784], ecx */
  w32((uint32_t)(0x113ff784), (ECX));
L_113e010e:;
  /* 113e010e jmp 0x113e0171 */
  goto L_113e0171;
L_113e0110:;
  /* 113e0110 cmp dword ptr [0x113ff790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0117 jne 0x113e0171 */
  if (!C.zf) goto L_113e0171;
  /* 113e0119 cmp dword ptr [0x113ff78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0120 je 0x113e0171 */
  if (C.zf) goto L_113e0171;
  /* 113e0122 mov edx, dword ptr [0x113ff78c] */
  EDX = (r32((uint32_t)(0x113ff78c)));
  /* 113e0128 push edx */
  push32((uint32_t)(EDX));
  /* 113e0129 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 113e012c push eax */
  push32((uint32_t)(EAX));
  /* 113e012d mov ecx, dword ptr [0x113ff794] */
  ECX = (r32((uint32_t)(0x113ff794)));
  /* 113e0133 push ecx */
  push32((uint32_t)(ECX));
  /* 113e0134 call 0x113e24d0 */
  push32(0x113e0139u); f_113e24d0();
  /* 113e0139 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e013c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e013e jne 0x113e0171 */
  if (!C.zf) goto L_113e0171;
  /* 113e0140 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e0142 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113e0145 push edx */
  push32((uint32_t)(EDX));
  /* 113e0146 call 0x113e0550 */
  push32(0x113e014bu); f_113e0550();
  /* 113e014b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e014e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e0150 je 0x113e0171 */
  if (C.zf) goto L_113e0171;
  /* 113e0152 mov eax, dword ptr [0x113ff79c] */
  EAX = (r32((uint32_t)(0x113ff79c)));
  /* 113e0157 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 113e015a mov dword ptr [0x113ff79c], eax */
  w32((uint32_t)(0x113ff79c), (EAX));
  /* 113e015f cmp dword ptr [0x113ff784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0166 jne 0x113e0171 */
  if (!C.zf) goto L_113e0171;
  /* 113e0168 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113e016b mov dword ptr [0x113ff784], ecx */
  w32((uint32_t)(0x113ff784), (ECX));
L_113e0171:;
  /* 113e0171 mov eax, dword ptr [0x113ff79c] */
  EAX = (r32((uint32_t)(0x113ff79c)));
  /* 113e0176 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 113e0179 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113e017b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e017d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_113e017e:;
  /* 113e017e mov esp, ebp */
  ESP = (EBP);
  /* 113e0180 pop ebp */
  EBP = (pop32());
  /* 113e0181 ret 4 */
  ESPCHK(0x113dfe60u, _esp0);
  ESP += 8; return;
}

/* FUN_10010190 @ 0x113e0190 (116 bytes, 33 insns) */
void f_113e0190(void) {
  FTRACE(0x113e0190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e0190 push ebp */
  push32((uint32_t)(EBP));
  /* 113e0191 mov ebp, esp */
  EBP = (ESP);
  /* 113e0193 push ecx */
  push32((uint32_t)(ECX));
  /* 113e0194 mov eax, dword ptr [0x113ff794] */
  EAX = (r32((uint32_t)(0x113ff794)));
  /* 113e0199 push eax */
  push32((uint32_t)(EAX));
  /* 113e019a call 0x113d6b60 */
  push32(0x113e019fu); f_113d6b60();
  /* 113e019f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e01a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e01a4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e01a7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 113e01aa mov dword ptr [0x113ff790], ecx */
  w32((uint32_t)(0x113ff790), (ECX));
  /* 113e01b0 cmp dword ptr [0x113ff790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e01b7 je 0x113e01c2 */
  if (C.zf) goto L_113e01c2;
  /* 113e01b9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 113e01c0 jmp 0x113e01d4 */
  goto L_113e01d4;
L_113e01c2:;
  /* 113e01c2 mov edx, dword ptr [0x113ff794] */
  EDX = (r32((uint32_t)(0x113ff794)));
  /* 113e01c8 push edx */
  push32((uint32_t)(EDX));
  /* 113e01c9 call 0x113e0840 */
  push32(0x113e01ceu); f_113e0840();
  /* 113e01ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e01d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113e01d4:;
  /* 113e01d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e01d7 mov dword ptr [0x113ff78c], eax */
  w32((uint32_t)(0x113ff78c), (EAX));
  /* 113e01dc push 1 */
  push32((uint32_t)(0x1u));
  /* 113e01de push 0x113e0210 */
  push32((uint32_t)(0x113e0210u));
  /* 113e01e3 call dword ptr [0x114022d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022d4))), 0x113e01e9u);
  /* 113e01e9 mov ecx, dword ptr [0x113ff79c] */
  ECX = (r32((uint32_t)(0x113ff79c)));
  /* 113e01ef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 113e01f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113e01f4 jne 0x113e0200 */
  if (!C.zf) goto L_113e0200;
  /* 113e01f6 mov dword ptr [0x113ff79c], 0 */
  w32((uint32_t)(0x113ff79c), (0x0u));
L_113e0200:;
  /* 113e0200 mov esp, ebp */
  ESP = (EBP);
  /* 113e0202 pop ebp */
  EBP = (pop32());
  /* 113e0203 ret  */
  ESPCHK(0x113e0190u, _esp0);
  ESP += 4; return;
}

/* FUN_10010210 @ 0x113e0210 (287 bytes, 86 insns) */
void f_113e0210(void) {
  FTRACE(0x113e0210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e0210 push ebp */
  push32((uint32_t)(EBP));
  /* 113e0211 mov ebp, esp */
  EBP = (ESP);
  /* 113e0213 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e0216 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e0219 push eax */
  push32((uint32_t)(EAX));
  /* 113e021a call 0x113e07c0 */
  push32(0x113e021fu); f_113e07c0();
  /* 113e021f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0222 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 113e0225 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 113e0227 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 113e022a push ecx */
  push32((uint32_t)(ECX));
  /* 113e022b mov edx, dword ptr [0x113ff790] */
  EDX = (r32((uint32_t)(0x113ff790)));
  /* 113e0231 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 113e0233 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e0235 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 113e023b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0241 push edx */
  push32((uint32_t)(EDX));
  /* 113e0242 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113e0245 push eax */
  push32((uint32_t)(EAX));
  /* 113e0246 call dword ptr [0x113ff7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113ff7a4))), 0x113e024cu);
  /* 113e024c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e024e jne 0x113e0264 */
  if (!C.zf) goto L_113e0264;
  /* 113e0250 mov dword ptr [0x113ff79c], 0 */
  w32((uint32_t)(0x113ff79c), (0x0u));
  /* 113e025a mov eax, 1 */
  EAX = (0x1u);
  /* 113e025f jmp 0x113e0329 */
  goto L_113e0329;
L_113e0264:;
  /* 113e0264 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 113e0267 push ecx */
  push32((uint32_t)(ECX));
  /* 113e0268 mov edx, dword ptr [0x113ff794] */
  EDX = (r32((uint32_t)(0x113ff794)));
  /* 113e026e push edx */
  push32((uint32_t)(EDX));
  /* 113e026f call 0x113e2400 */
  push32(0x113e0274u); f_113e2400();
  /* 113e0274 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0277 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e0279 jne 0x113e02b9 */
  if (!C.zf) goto L_113e02b9;
  /* 113e027b cmp dword ptr [0x113ff790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0282 jne 0x113e0296 */
  if (!C.zf) goto L_113e0296;
  /* 113e0284 push 1 */
  push32((uint32_t)(0x1u));
  /* 113e0286 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113e0289 push eax */
  push32((uint32_t)(EAX));
  /* 113e028a call 0x113e0550 */
  push32(0x113e028fu); f_113e0550();
  /* 113e028f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0292 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e0294 je 0x113e02b7 */
  if (C.zf) goto L_113e02b7;
L_113e0296:;
  /* 113e0296 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113e0299 mov dword ptr [0x113ff7a0], ecx */
  w32((uint32_t)(0x113ff7a0), (ECX));
  /* 113e029f mov edx, dword ptr [0x113ff7a0] */
  EDX = (r32((uint32_t)(0x113ff7a0)));
  /* 113e02a5 mov dword ptr [0x113ff784], edx */
  w32((uint32_t)(0x113ff784), (EDX));
  /* 113e02ab mov eax, dword ptr [0x113ff79c] */
  EAX = (r32((uint32_t)(0x113ff79c)));
  /* 113e02b0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 113e02b2 mov dword ptr [0x113ff79c], eax */
  w32((uint32_t)(0x113ff79c), (EAX));
L_113e02b7:;
  /* 113e02b7 jmp 0x113e031c */
  goto L_113e031c;
L_113e02b9:;
  /* 113e02b9 cmp dword ptr [0x113ff790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e02c0 jne 0x113e031c */
  if (!C.zf) goto L_113e031c;
  /* 113e02c2 cmp dword ptr [0x113ff78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e02c9 je 0x113e031c */
  if (C.zf) goto L_113e031c;
  /* 113e02cb mov ecx, dword ptr [0x113ff78c] */
  ECX = (r32((uint32_t)(0x113ff78c)));
  /* 113e02d1 push ecx */
  push32((uint32_t)(ECX));
  /* 113e02d2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 113e02d5 push edx */
  push32((uint32_t)(EDX));
  /* 113e02d6 mov eax, dword ptr [0x113ff794] */
  EAX = (r32((uint32_t)(0x113ff794)));
  /* 113e02db push eax */
  push32((uint32_t)(EAX));
  /* 113e02dc call 0x113e24d0 */
  push32(0x113e02e1u); f_113e24d0();
  /* 113e02e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e02e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e02e6 jne 0x113e031c */
  if (!C.zf) goto L_113e031c;
  /* 113e02e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e02ea mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113e02ed push ecx */
  push32((uint32_t)(ECX));
  /* 113e02ee call 0x113e0550 */
  push32(0x113e02f3u); f_113e0550();
  /* 113e02f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e02f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e02f8 je 0x113e031c */
  if (C.zf) goto L_113e031c;
  /* 113e02fa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113e02fd mov dword ptr [0x113ff7a0], edx */
  w32((uint32_t)(0x113ff7a0), (EDX));
  /* 113e0303 mov eax, dword ptr [0x113ff7a0] */
  EAX = (r32((uint32_t)(0x113ff7a0)));
  /* 113e0308 mov dword ptr [0x113ff784], eax */
  w32((uint32_t)(0x113ff784), (EAX));
  /* 113e030d mov ecx, dword ptr [0x113ff79c] */
  ECX = (r32((uint32_t)(0x113ff79c)));
  /* 113e0313 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 113e0316 mov dword ptr [0x113ff79c], ecx */
  w32((uint32_t)(0x113ff79c), (ECX));
L_113e031c:;
  /* 113e031c mov eax, dword ptr [0x113ff79c] */
  EAX = (r32((uint32_t)(0x113ff79c)));
  /* 113e0321 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 113e0324 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113e0326 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e0328 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_113e0329:;
  /* 113e0329 mov esp, ebp */
  ESP = (EBP);
  /* 113e032b pop ebp */
  EBP = (pop32());
  /* 113e032c ret 4 */
  ESPCHK(0x113e0210u, _esp0);
  ESP += 8; return;
}

/* FUN_10010330 @ 0x113e0330 (69 bytes, 20 insns) */
void f_113e0330(void) {
  FTRACE(0x113e0330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e0330 push ebp */
  push32((uint32_t)(EBP));
  /* 113e0331 mov ebp, esp */
  EBP = (ESP);
  /* 113e0333 mov eax, dword ptr [0x113ff798] */
  EAX = (r32((uint32_t)(0x113ff798)));
  /* 113e0338 push eax */
  push32((uint32_t)(EAX));
  /* 113e0339 call 0x113d6b60 */
  push32(0x113e033eu); f_113d6b60();
  /* 113e033e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0341 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e0343 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0346 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 113e0349 mov dword ptr [0x113ff788], ecx */
  w32((uint32_t)(0x113ff788), (ECX));
  /* 113e034f push 1 */
  push32((uint32_t)(0x1u));
  /* 113e0351 push 0x113e0380 */
  push32((uint32_t)(0x113e0380u));
  /* 113e0356 call dword ptr [0x114022d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022d4))), 0x113e035cu);
  /* 113e035c mov edx, dword ptr [0x113ff79c] */
  EDX = (r32((uint32_t)(0x113ff79c)));
  /* 113e0362 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 113e0365 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e0367 jne 0x113e0373 */
  if (!C.zf) goto L_113e0373;
  /* 113e0369 mov dword ptr [0x113ff79c], 0 */
  w32((uint32_t)(0x113ff79c), (0x0u));
L_113e0373:;
  /* 113e0373 pop ebp */
  EBP = (pop32());
  /* 113e0374 ret  */
  ESPCHK(0x113e0330u, _esp0);
  ESP += 4; return;
}

/* FUN_10010380 @ 0x113e0380 (172 bytes, 54 insns) */
void f_113e0380(void) {
  FTRACE(0x113e0380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e0380 push ebp */
  push32((uint32_t)(EBP));
  /* 113e0381 mov ebp, esp */
  EBP = (ESP);
  /* 113e0383 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e0386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e0389 push eax */
  push32((uint32_t)(EAX));
  /* 113e038a call 0x113e07c0 */
  push32(0x113e038fu); f_113e07c0();
  /* 113e038f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0392 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 113e0395 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 113e0397 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 113e039a push ecx */
  push32((uint32_t)(ECX));
  /* 113e039b mov edx, dword ptr [0x113ff788] */
  EDX = (r32((uint32_t)(0x113ff788)));
  /* 113e03a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 113e03a3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e03a5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 113e03ab add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e03b1 push edx */
  push32((uint32_t)(EDX));
  /* 113e03b2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113e03b5 push eax */
  push32((uint32_t)(EAX));
  /* 113e03b6 call dword ptr [0x113ff7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113ff7a4))), 0x113e03bcu);
  /* 113e03bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e03be jne 0x113e03d1 */
  if (!C.zf) goto L_113e03d1;
  /* 113e03c0 mov dword ptr [0x113ff79c], 0 */
  w32((uint32_t)(0x113ff79c), (0x0u));
  /* 113e03ca mov eax, 1 */
  EAX = (0x1u);
  /* 113e03cf jmp 0x113e0426 */
  goto L_113e0426;
L_113e03d1:;
  /* 113e03d1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 113e03d4 push ecx */
  push32((uint32_t)(ECX));
  /* 113e03d5 mov edx, dword ptr [0x113ff798] */
  EDX = (r32((uint32_t)(0x113ff798)));
  /* 113e03db push edx */
  push32((uint32_t)(EDX));
  /* 113e03dc call 0x113e2400 */
  push32(0x113e03e1u); f_113e2400();
  /* 113e03e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e03e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e03e6 jne 0x113e0419 */
  if (!C.zf) goto L_113e0419;
  /* 113e03e8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113e03eb push eax */
  push32((uint32_t)(EAX));
  /* 113e03ec call 0x113e0500 */
  push32(0x113e03f1u); f_113e0500();
  /* 113e03f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e03f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e03f6 je 0x113e0419 */
  if (C.zf) goto L_113e0419;
  /* 113e03f8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113e03fb mov dword ptr [0x113ff7a0], ecx */
  w32((uint32_t)(0x113ff7a0), (ECX));
  /* 113e0401 mov edx, dword ptr [0x113ff7a0] */
  EDX = (r32((uint32_t)(0x113ff7a0)));
  /* 113e0407 mov dword ptr [0x113ff784], edx */
  w32((uint32_t)(0x113ff784), (EDX));
  /* 113e040d mov eax, dword ptr [0x113ff79c] */
  EAX = (r32((uint32_t)(0x113ff79c)));
  /* 113e0412 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 113e0414 mov dword ptr [0x113ff79c], eax */
  w32((uint32_t)(0x113ff79c), (EAX));
L_113e0419:;
  /* 113e0419 mov eax, dword ptr [0x113ff79c] */
  EAX = (r32((uint32_t)(0x113ff79c)));
  /* 113e041e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 113e0421 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113e0423 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e0425 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_113e0426:;
  /* 113e0426 mov esp, ebp */
  ESP = (EBP);
  /* 113e0428 pop ebp */
  EBP = (pop32());
  /* 113e0429 ret 4 */
  ESPCHK(0x113e0380u, _esp0);
  ESP += 8; return;
}

/* FUN_10010430 @ 0x113e0430 (43 bytes, 11 insns) */
void f_113e0430(void) {
  FTRACE(0x113e0430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e0430 push ebp */
  push32((uint32_t)(EBP));
  /* 113e0431 mov ebp, esp */
  EBP = (ESP);
  /* 113e0433 mov eax, dword ptr [0x113ff79c] */
  EAX = (r32((uint32_t)(0x113ff79c)));
  /* 113e0438 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 113e043d mov dword ptr [0x113ff79c], eax */
  w32((uint32_t)(0x113ff79c), (EAX));
  /* 113e0442 call dword ptr [0x114022c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022c4))), 0x113e0448u);
  /* 113e0448 mov dword ptr [0x113ff7a0], eax */
  w32((uint32_t)(0x113ff7a0), (EAX));
  /* 113e044d mov ecx, dword ptr [0x113ff7a0] */
  ECX = (r32((uint32_t)(0x113ff7a0)));
  /* 113e0453 mov dword ptr [0x113ff784], ecx */
  w32((uint32_t)(0x113ff784), (ECX));
  /* 113e0459 pop ebp */
  EBP = (pop32());
  /* 113e045a ret  */
  ESPCHK(0x113e0430u, _esp0);
  ESP += 4; return;
}

/* FUN_10010460 @ 0x113e0460 (155 bytes, 57 insns) */
void f_113e0460(void) {
  FTRACE(0x113e0460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e0460 push ebp */
  push32((uint32_t)(EBP));
  /* 113e0461 mov ebp, esp */
  EBP = (ESP);
  /* 113e0463 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e0466 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e046a je 0x113e048b */
  if (C.zf) goto L_113e048b;
  /* 113e046c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e046f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113e0472 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113e0474 je 0x113e048b */
  if (C.zf) goto L_113e048b;
  /* 113e0476 push 0x113fb774 */
  push32((uint32_t)(0x113fb774u));
  /* 113e047b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e047e push edx */
  push32((uint32_t)(EDX));
  /* 113e047f call 0x113df9c0 */
  push32(0x113e0484u); f_113df9c0();
  /* 113e0484 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0487 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e0489 jne 0x113e04b3 */
  if (!C.zf) goto L_113e04b3;
L_113e048b:;
  /* 113e048b push 8 */
  push32((uint32_t)(0x8u));
  /* 113e048d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 113e0490 push eax */
  push32((uint32_t)(EAX));
  /* 113e0491 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 113e0496 mov ecx, dword ptr [0x113ff7a0] */
  ECX = (r32((uint32_t)(0x113ff7a0)));
  /* 113e049c push ecx */
  push32((uint32_t)(ECX));
  /* 113e049d call dword ptr [0x113ff7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113ff7a4))), 0x113e04a3u);
  /* 113e04a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e04a5 jne 0x113e04ab */
  if (!C.zf) goto L_113e04ab;
  /* 113e04a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e04a9 jmp 0x113e04f7 */
  goto L_113e04f7;
L_113e04ab:;
  /* 113e04ab lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 113e04ae mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 113e04b1 jmp 0x113e04eb */
  goto L_113e04eb;
L_113e04b3:;
  /* 113e04b3 push 0x113fb770 */
  push32((uint32_t)(0x113fb770u));
  /* 113e04b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e04bb push eax */
  push32((uint32_t)(EAX));
  /* 113e04bc call 0x113df9c0 */
  push32(0x113e04c1u); f_113df9c0();
  /* 113e04c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e04c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e04c6 jne 0x113e04eb */
  if (!C.zf) goto L_113e04eb;
  /* 113e04c8 push 8 */
  push32((uint32_t)(0x8u));
  /* 113e04ca lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 113e04cd push ecx */
  push32((uint32_t)(ECX));
  /* 113e04ce push 0xb */
  push32((uint32_t)(0xbu));
  /* 113e04d0 mov edx, dword ptr [0x113ff7a0] */
  EDX = (r32((uint32_t)(0x113ff7a0)));
  /* 113e04d6 push edx */
  push32((uint32_t)(EDX));
  /* 113e04d7 call dword ptr [0x113ff7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113ff7a4))), 0x113e04ddu);
  /* 113e04dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e04df jne 0x113e04e5 */
  if (!C.zf) goto L_113e04e5;
  /* 113e04e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e04e3 jmp 0x113e04f7 */
  goto L_113e04f7;
L_113e04e5:;
  /* 113e04e5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 113e04e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_113e04eb:;
  /* 113e04eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e04ee push ecx */
  push32((uint32_t)(ECX));
  /* 113e04ef call 0x113e25e0 */
  push32(0x113e04f4u); f_113e25e0();
  /* 113e04f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113e04f7:;
  /* 113e04f7 mov esp, ebp */
  ESP = (EBP);
  /* 113e04f9 pop ebp */
  EBP = (pop32());
  /* 113e04fa ret  */
  ESPCHK(0x113e0460u, _esp0);
  ESP += 4; return;
}

/* FUN_10010500 @ 0x113e0500 (79 bytes, 26 insns) */
void f_113e0500(void) {
  FTRACE(0x113e0500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e0500 push ebp */
  push32((uint32_t)(EBP));
  /* 113e0501 mov ebp, esp */
  EBP = (ESP);
  /* 113e0503 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e0506 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 113e050a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 113e050e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113e0515 jmp 0x113e0520 */
  goto L_113e0520;
L_113e0517:;
  /* 113e0517 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e051a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e051d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_113e0520:;
  /* 113e0520 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0524 jae 0x113e0546 */
  if (!C.cf) goto L_113e0546;
  /* 113e0526 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e0529 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113e052f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e0532 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113e0534 mov cx, word ptr [eax*2 + 0x113fe9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x113fe9c4)));
  /* 113e053c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e053e jne 0x113e0544 */
  if (!C.zf) goto L_113e0544;
  /* 113e0540 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e0542 jmp 0x113e054b */
  goto L_113e054b;
L_113e0544:;
  /* 113e0544 jmp 0x113e0517 */
  goto L_113e0517;
L_113e0546:;
  /* 113e0546 mov eax, 1 */
  EAX = (0x1u);
L_113e054b:;
  /* 113e054b mov esp, ebp */
  ESP = (EBP);
  /* 113e054d pop ebp */
  EBP = (pop32());
  /* 113e054e ret  */
  ESPCHK(0x113e0500u, _esp0);
  ESP += 4; return;
}

/* FUN_10010550 @ 0x113e0550 (135 bytes, 48 insns) */
void f_113e0550(void) {
  FTRACE(0x113e0550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e0550 push ebp */
  push32((uint32_t)(EBP));
  /* 113e0551 mov ebp, esp */
  EBP = (ESP);
  /* 113e0553 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e0556 push esi */
  push32((uint32_t)(ESI));
  /* 113e0557 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e055a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e055f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e0564 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e0569 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 113e056c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e0571 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113e0574 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 113e0576 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 113e0579 push ecx */
  push32((uint32_t)(ECX));
  /* 113e057a push 1 */
  push32((uint32_t)(0x1u));
  /* 113e057c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e057f push edx */
  push32((uint32_t)(EDX));
  /* 113e0580 call dword ptr [0x113ff7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113ff7a4))), 0x113e0586u);
  /* 113e0586 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e0588 jne 0x113e058e */
  if (!C.zf) goto L_113e058e;
  /* 113e058a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e058c jmp 0x113e05d2 */
  goto L_113e05d2;
L_113e058e:;
  /* 113e058e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 113e0591 push eax */
  push32((uint32_t)(EAX));
  /* 113e0592 call 0x113e07c0 */
  push32(0x113e0597u); f_113e07c0();
  /* 113e0597 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e059a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e059d je 0x113e05cd */
  if (C.zf) goto L_113e05cd;
  /* 113e059f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e05a3 je 0x113e05cd */
  if (C.zf) goto L_113e05cd;
  /* 113e05a5 mov ecx, dword ptr [0x113ff794] */
  ECX = (r32((uint32_t)(0x113ff794)));
  /* 113e05ab push ecx */
  push32((uint32_t)(ECX));
  /* 113e05ac call 0x113e0840 */
  push32(0x113e05b1u); f_113e0840();
  /* 113e05b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e05b4 mov esi, eax */
  ESI = (EAX);
  /* 113e05b6 mov edx, dword ptr [0x113ff794] */
  EDX = (r32((uint32_t)(0x113ff794)));
  /* 113e05bc push edx */
  push32((uint32_t)(EDX));
  /* 113e05bd call 0x113d6b60 */
  push32(0x113e05c2u); f_113d6b60();
  /* 113e05c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e05c5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e05c7 jne 0x113e05cd */
  if (!C.zf) goto L_113e05cd;
  /* 113e05c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e05cb jmp 0x113e05d2 */
  goto L_113e05d2;
L_113e05cd:;
  /* 113e05cd mov eax, 1 */
  EAX = (0x1u);
L_113e05d2:;
  /* 113e05d2 pop esi */
  ESI = (pop32());
  /* 113e05d3 mov esp, ebp */
  ESP = (EBP);
  /* 113e05d5 pop ebp */
  EBP = (pop32());
  /* 113e05d6 ret  */
  ESPCHK(0x113e0550u, _esp0);
  ESP += 4; return;
}

/* FUN_100105e0 @ 0x113e05e0 (77 bytes, 18 insns) */
void f_113e05e0(void) {
  FTRACE(0x113e05e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e05e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113e05e1 mov ebp, esp */
  EBP = (ESP);
  /* 113e05e3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e05e9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 113e05f3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 113e05f9 push eax */
  push32((uint32_t)(EAX));
  /* 113e05fa call dword ptr [0x114022c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022c0))), 0x113e0600u);
  /* 113e0600 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e0602 je 0x113e0619 */
  if (C.zf) goto L_113e0619;
  /* 113e0604 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e060b jne 0x113e0619 */
  if (!C.zf) goto L_113e0619;
  /* 113e060d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 113e0617 jmp 0x113e0623 */
  goto L_113e0623;
L_113e0619:;
  /* 113e0619 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_113e0623:;
  /* 113e0623 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 113e0629 mov esp, ebp */
  ESP = (EBP);
  /* 113e062b pop ebp */
  EBP = (pop32());
  /* 113e062c ret  */
  ESPCHK(0x113e05e0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x113e0630 (388 bytes, 118 insns) */
void f_113e0630(void) {
  FTRACE(0x113e0630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e0630 push ebp */
  push32((uint32_t)(EBP));
  /* 113e0631 mov ebp, esp */
  EBP = (ESP);
  /* 113e0633 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e0636 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113e063d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 113e0644 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_113e064b:;
  /* 113e064b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e064e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0651 jg 0x113e0798 */
  if ((!C.zf&&C.sf==C.of)) goto L_113e0798;
  /* 113e0657 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e065a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e065d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113e065e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e0660 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113e0662 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113e0665 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0668 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e066b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e066e cmp edx, dword ptr [ecx + 0x113fe520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x113fe520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0674 jne 0x113e076e */
  if (!C.zf) goto L_113e076e;
  /* 113e067a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e067d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113e0680 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0684 ja 0x113e06a7 */
  if ((!C.cf&&!C.zf)) goto L_113e06a7;
  /* 113e0686 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e068a je 0x113e0719 */
  if (C.zf) goto L_113e0719;
  /* 113e0690 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0694 je 0x113e06c4 */
  if (C.zf) goto L_113e06c4;
  /* 113e0696 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e069a je 0x113e06e6 */
  if (C.zf) goto L_113e06e6;
  /* 113e069c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e06a0 je 0x113e0708 */
  if (C.zf) goto L_113e0708;
  /* 113e06a2 jmp 0x113e0738 */
  goto L_113e0738;
L_113e06a7:;
  /* 113e06a7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e06ae je 0x113e06d5 */
  if (C.zf) goto L_113e06d5;
  /* 113e06b0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e06b7 je 0x113e06f7 */
  if (C.zf) goto L_113e06f7;
  /* 113e06b9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e06c0 je 0x113e072a */
  if (C.zf) goto L_113e072a;
  /* 113e06c2 jmp 0x113e0738 */
  goto L_113e0738;
L_113e06c4:;
  /* 113e06c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e06c7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e06ca add ecx, 0x113fe524 */
  { uint32_t _a=(ECX),_b=(0x113fe524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e06d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113e06d3 jmp 0x113e0738 */
  goto L_113e0738;
L_113e06d5:;
  /* 113e06d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e06d8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e06db mov eax, dword ptr [edx + 0x113fe52c] */
  EAX = (r32((uint32_t)(EDX + 0x113fe52c)));
  /* 113e06e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113e06e4 jmp 0x113e0738 */
  goto L_113e0738;
L_113e06e6:;
  /* 113e06e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e06e9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e06ec add ecx, 0x113fe530 */
  { uint32_t _a=(ECX),_b=(0x113fe530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e06f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113e06f5 jmp 0x113e0738 */
  goto L_113e0738;
L_113e06f7:;
  /* 113e06f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e06fa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e06fd mov eax, dword ptr [edx + 0x113fe534] */
  EAX = (r32((uint32_t)(EDX + 0x113fe534)));
  /* 113e0703 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113e0706 jmp 0x113e0738 */
  goto L_113e0738;
L_113e0708:;
  /* 113e0708 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e070b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e070e add ecx, 0x113fe538 */
  { uint32_t _a=(ECX),_b=(0x113fe538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0714 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113e0717 jmp 0x113e0738 */
  goto L_113e0738;
L_113e0719:;
  /* 113e0719 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e071c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e071f add edx, 0x113fe53c */
  { uint32_t _a=(EDX),_b=(0x113fe53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0725 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113e0728 jmp 0x113e0738 */
  goto L_113e0738;
L_113e072a:;
  /* 113e072a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e072d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e0730 add eax, 0x113fe544 */
  { uint32_t _a=(EAX),_b=(0x113fe544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0735 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113e0738:;
  /* 113e0738 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e073c je 0x113e0744 */
  if (C.zf) goto L_113e0744;
  /* 113e073e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0742 jge 0x113e0746 */
  if ((C.sf==C.of)) goto L_113e0746;
L_113e0744:;
  /* 113e0744 jmp 0x113e0798 */
  goto L_113e0798;
L_113e0746:;
  /* 113e0746 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e0749 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e074c push ecx */
  push32((uint32_t)(ECX));
  /* 113e074d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e0750 push edx */
  push32((uint32_t)(EDX));
  /* 113e0751 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e0754 push eax */
  push32((uint32_t)(EAX));
  /* 113e0755 call 0x113d7550 */
  push32(0x113e075au); f_113d7550();
  /* 113e075a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e075d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e0760 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0763 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 113e0767 mov eax, 1 */
  EAX = (0x1u);
  /* 113e076c jmp 0x113e07ae */
  goto L_113e07ae;
L_113e076e:;
  /* 113e076e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0771 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e0774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e0777 cmp eax, dword ptr [edx + 0x113fe520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x113fe520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e077d jae 0x113e078a */
  if (!C.cf) goto L_113e078a;
  /* 113e077f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0782 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e0785 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113e0788 jmp 0x113e0793 */
  goto L_113e0793;
L_113e078a:;
  /* 113e078a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e078d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0790 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_113e0793:;
  /* 113e0793 jmp 0x113e064b */
  goto L_113e064b;
L_113e0798:;
  /* 113e0798 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e079b push eax */
  push32((uint32_t)(EAX));
  /* 113e079c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e079f push ecx */
  push32((uint32_t)(ECX));
  /* 113e07a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e07a3 push edx */
  push32((uint32_t)(EDX));
  /* 113e07a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e07a7 push eax */
  push32((uint32_t)(EAX));
  /* 113e07a8 call dword ptr [0x114022cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022cc))), 0x113e07aeu);
L_113e07ae:;
  /* 113e07ae mov esp, ebp */
  ESP = (EBP);
  /* 113e07b0 pop ebp */
  EBP = (pop32());
  /* 113e07b1 ret 0x10 */
  ESPCHK(0x113e0630u, _esp0);
  ESP += 20; return;
}

/* FUN_100107c0 @ 0x113e07c0 (118 bytes, 42 insns) */
void f_113e07c0(void) {
  FTRACE(0x113e07c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e07c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113e07c1 mov ebp, esp */
  EBP = (ESP);
  /* 113e07c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e07c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113e07cd:;
  /* 113e07cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e07d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113e07d2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 113e07d5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113e07d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e07dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e07df mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113e07e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e07e4 je 0x113e082f */
  if (C.zf) goto L_113e082f;
  /* 113e07e6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113e07ea cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e07ed jl 0x113e0802 */
  if ((C.sf!=C.of)) goto L_113e0802;
  /* 113e07ef movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113e07f3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e07f6 jg 0x113e0802 */
  if ((!C.zf&&C.sf==C.of)) goto L_113e0802;
  /* 113e07f8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 113e07fb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 113e07fd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 113e0800 jmp 0x113e081c */
  goto L_113e081c;
L_113e0802:;
  /* 113e0802 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113e0806 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0809 jl 0x113e081c */
  if ((C.sf!=C.of)) goto L_113e081c;
  /* 113e080b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113e080f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0812 jg 0x113e081c */
  if ((!C.zf&&C.sf==C.of)) goto L_113e081c;
  /* 113e0814 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 113e0817 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 113e0819 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_113e081c:;
  /* 113e081c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e081f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 113e0822 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113e0826 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 113e082a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113e082d jmp 0x113e07cd */
  goto L_113e07cd;
L_113e082f:;
  /* 113e082f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e0832 mov esp, ebp */
  ESP = (EBP);
  /* 113e0834 pop ebp */
  EBP = (pop32());
  /* 113e0835 ret  */
  ESPCHK(0x113e07c0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x113e0840 (101 bytes, 36 insns) */
void f_113e0840(void) {
  FTRACE(0x113e0840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e0840 push ebp */
  push32((uint32_t)(EBP));
  /* 113e0841 mov ebp, esp */
  EBP = (ESP);
  /* 113e0843 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e0846 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113e084d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e0850 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113e0852 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 113e0855 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e0858 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e085b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_113e085e:;
  /* 113e085e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 113e0862 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0865 jl 0x113e0870 */
  if ((C.sf!=C.of)) goto L_113e0870;
  /* 113e0867 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 113e086b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e086e jle 0x113e0882 */
  if ((C.zf||C.sf!=C.of)) goto L_113e0882;
L_113e0870:;
  /* 113e0870 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 113e0874 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0877 jl 0x113e089e */
  if ((C.sf!=C.of)) goto L_113e089e;
  /* 113e0879 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 113e087d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0880 jg 0x113e089e */
  if ((!C.zf&&C.sf==C.of)) goto L_113e089e;
L_113e0882:;
  /* 113e0882 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e0885 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0888 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113e088b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e088e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113e0890 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 113e0893 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e0896 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0899 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 113e089c jmp 0x113e085e */
  goto L_113e085e;
L_113e089e:;
  /* 113e089e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e08a1 mov esp, ebp */
  ESP = (EBP);
  /* 113e08a3 pop ebp */
  EBP = (pop32());
  /* 113e08a4 ret  */
  ESPCHK(0x113e0840u, _esp0);
  ESP += 4; return;
}

/* FUN_100108b0 @ 0x113e08b0 (122 bytes, 39 insns) */
void f_113e08b0(void) {
  FTRACE(0x113e08b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e08b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113e08b1 mov ebp, esp */
  EBP = (ESP);
  /* 113e08b3 push ecx */
  push32((uint32_t)(ECX));
  /* 113e08b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e08b7 cmp eax, dword ptr [0x1140103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1140103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e08bd jae 0x113e08e1 */
  if (!C.cf) goto L_113e08e1;
  /* 113e08bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e08c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113e08c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e08c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113e08cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e08ce mov eax, dword ptr [ecx*4 + 0x11400f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11400f00)));
  /* 113e08d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 113e08da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113e08dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113e08df jne 0x113e08fc */
  if (!C.zf) goto L_113e08fc;
L_113e08e1:;
  /* 113e08e1 call 0x113dbc00 */
  push32(0x113e08e6u); f_113dbc00();
  /* 113e08e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 113e08ec call 0x113dbc10 */
  push32(0x113e08f1u); f_113dbc10();
  /* 113e08f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113e08f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e08fa jmp 0x113e0926 */
  goto L_113e0926;
L_113e08fc:;
  /* 113e08fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e08ff push edx */
  push32((uint32_t)(EDX));
  /* 113e0900 call 0x113dd420 */
  push32(0x113e0905u); f_113dd420();
  /* 113e0905 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0908 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e090b push eax */
  push32((uint32_t)(EAX));
  /* 113e090c call 0x113e0930 */
  push32(0x113e0911u); f_113e0930();
  /* 113e0911 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0914 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113e0917 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e091a push ecx */
  push32((uint32_t)(ECX));
  /* 113e091b call 0x113dd4b0 */
  push32(0x113e0920u); f_113dd4b0();
  /* 113e0920 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0923 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113e0926:;
  /* 113e0926 mov esp, ebp */
  ESP = (EBP);
  /* 113e0928 pop ebp */
  EBP = (pop32());
  /* 113e0929 ret  */
  ESPCHK(0x113e08b0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x113e0930 (170 bytes, 59 insns) */
void f_113e0930(void) {
  FTRACE(0x113e0930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e0930 push ebp */
  push32((uint32_t)(EBP));
  /* 113e0931 mov ebp, esp */
  EBP = (ESP);
  /* 113e0933 push ecx */
  push32((uint32_t)(ECX));
  /* 113e0934 push esi */
  push32((uint32_t)(ESI));
  /* 113e0935 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e0938 push eax */
  push32((uint32_t)(EAX));
  /* 113e0939 call 0x113dd2a0 */
  push32(0x113e093eu); f_113dd2a0();
  /* 113e093e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0941 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0944 je 0x113e0983 */
  if (C.zf) goto L_113e0983;
  /* 113e0946 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e094a je 0x113e0952 */
  if (C.zf) goto L_113e0952;
  /* 113e094c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0950 jne 0x113e096c */
  if (!C.zf) goto L_113e096c;
L_113e0952:;
  /* 113e0952 push 1 */
  push32((uint32_t)(0x1u));
  /* 113e0954 call 0x113dd2a0 */
  push32(0x113e0959u); f_113dd2a0();
  /* 113e0959 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e095c mov esi, eax */
  ESI = (EAX);
  /* 113e095e push 2 */
  push32((uint32_t)(0x2u));
  /* 113e0960 call 0x113dd2a0 */
  push32(0x113e0965u); f_113dd2a0();
  /* 113e0965 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0968 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e096a je 0x113e0983 */
  if (C.zf) goto L_113e0983;
L_113e096c:;
  /* 113e096c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e096f push ecx */
  push32((uint32_t)(ECX));
  /* 113e0970 call 0x113dd2a0 */
  push32(0x113e0975u); f_113dd2a0();
  /* 113e0975 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0978 push eax */
  push32((uint32_t)(EAX));
  /* 113e0979 call dword ptr [0x114022c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022c8))), 0x113e097fu);
  /* 113e097f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e0981 je 0x113e098c */
  if (C.zf) goto L_113e098c;
L_113e0983:;
  /* 113e0983 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113e098a jmp 0x113e0995 */
  goto L_113e0995;
L_113e098c:;
  /* 113e098c call dword ptr [0x11402390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402390))), 0x113e0992u);
  /* 113e0992 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113e0995:;
  /* 113e0995 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e0998 push edx */
  push32((uint32_t)(EDX));
  /* 113e0999 call 0x113dd1c0 */
  push32(0x113e099eu); f_113dd1c0();
  /* 113e099e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e09a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e09a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113e09a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e09aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113e09ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113e09b0 mov edx, dword ptr [eax*4 + 0x11400f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11400f00)));
  /* 113e09b7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 113e09bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e09c0 je 0x113e09d3 */
  if (C.zf) goto L_113e09d3;
  /* 113e09c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e09c5 push eax */
  push32((uint32_t)(EAX));
  /* 113e09c6 call 0x113dbb60 */
  push32(0x113e09cbu); f_113dbb60();
  /* 113e09cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e09ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113e09d1 jmp 0x113e09d5 */
  goto L_113e09d5;
L_113e09d3:;
  /* 113e09d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113e09d5:;
  /* 113e09d5 pop esi */
  ESI = (pop32());
  /* 113e09d6 mov esp, ebp */
  ESP = (EBP);
  /* 113e09d8 pop ebp */
  EBP = (pop32());
  /* 113e09d9 ret  */
  ESPCHK(0x113e0930u, _esp0);
  ESP += 4; return;
}

/* FUN_100109e0 @ 0x113e09e0 (146 bytes, 52 insns) */
void f_113e09e0(void) {
  FTRACE(0x113e09e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e09e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113e09e1 mov ebp, esp */
  EBP = (ESP);
  /* 113e09e3 push ebx */
  push32((uint32_t)(EBX));
  /* 113e09e4 push esi */
  push32((uint32_t)(ESI));
  /* 113e09e5 push edi */
  push32((uint32_t)(EDI));
L_113e09e6:;
  /* 113e09e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e09ea jne 0x113e0a0a */
  if (!C.zf) goto L_113e0a0a;
  /* 113e09ec push 0x113fb0b0 */
  push32((uint32_t)(0x113fb0b0u));
  /* 113e09f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e09f3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 113e09f5 push 0x113fb778 */
  push32((uint32_t)(0x113fb778u));
  /* 113e09fa push 2 */
  push32((uint32_t)(0x2u));
  /* 113e09fc call 0x113d2df0 */
  push32(0x113e0a01u); f_113d2df0();
  /* 113e0a01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0a04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0a07 jne 0x113e0a0a */
  if (!C.zf) goto L_113e0a0a;
  /* 113e0a09 int3  */
  x86_unimpl("int3 @ 0x113e0a09");
L_113e0a0a:;
  /* 113e0a0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113e0a0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113e0a0e jne 0x113e09e6 */
  if (!C.zf) goto L_113e09e6;
  /* 113e0a10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e0a13 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113e0a16 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 113e0a1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113e0a1e je 0x113e0a6d */
  if (C.zf) goto L_113e0a6d;
  /* 113e0a20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e0a23 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113e0a26 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 113e0a29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113e0a2b je 0x113e0a6d */
  if (C.zf) goto L_113e0a6d;
  /* 113e0a2d push 2 */
  push32((uint32_t)(0x2u));
  /* 113e0a2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e0a32 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113e0a35 push eax */
  push32((uint32_t)(EAX));
  /* 113e0a36 call 0x113d47c0 */
  push32(0x113e0a3bu); f_113d47c0();
  /* 113e0a3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0a3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e0a41 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113e0a44 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 113e0a4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e0a4d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 113e0a50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e0a53 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 113e0a59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e0a5c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 113e0a63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e0a66 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_113e0a6d:;
  /* 113e0a6d pop edi */
  EDI = (pop32());
  /* 113e0a6e pop esi */
  ESI = (pop32());
  /* 113e0a6f pop ebx */
  EBX = (pop32());
  /* 113e0a70 pop ebp */
  EBP = (pop32());
  /* 113e0a71 ret  */
  ESPCHK(0x113e09e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a80 @ 0x113e0a80 (289 bytes, 97 insns) */
void f_113e0a80(void) {
  FTRACE(0x113e0a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e0a80 push ebp */
  push32((uint32_t)(EBP));
  /* 113e0a81 mov ebp, esp */
  EBP = (ESP);
  /* 113e0a83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e0a86 push esi */
  push32((uint32_t)(ESI));
  /* 113e0a87 mov eax, dword ptr [0x113fec98] */
  EAX = (r32((uint32_t)(0x113fec98)));
  /* 113e0a8c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113e0a8f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113e0a96 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113e0a9d jmp 0x113e0aa8 */
  goto L_113e0aa8;
L_113e0a9f:;
  /* 113e0a9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0aa2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0aa5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_113e0aa8:;
  /* 113e0aa8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0aac jae 0x113e0ae1 */
  if (!C.cf) goto L_113e0ae1;
  /* 113e0aae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0ab1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0ab4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 113e0ab7 push ecx */
  push32((uint32_t)(ECX));
  /* 113e0ab8 call 0x113d6b60 */
  push32(0x113e0abdu); f_113d6b60();
  /* 113e0abd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0ac0 mov esi, eax */
  ESI = (EAX);
  /* 113e0ac2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0ac5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0ac8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 113e0acc push ecx */
  push32((uint32_t)(ECX));
  /* 113e0acd call 0x113d6b60 */
  push32(0x113e0ad2u); f_113d6b60();
  /* 113e0ad2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0ad5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0ad8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 113e0adc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113e0adf jmp 0x113e0a9f */
  goto L_113e0a9f;
L_113e0ae1:;
  /* 113e0ae1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e0ae4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0ae7 push eax */
  push32((uint32_t)(EAX));
  /* 113e0ae8 call 0x113d3d10 */
  push32(0x113e0aedu); f_113d3d10();
  /* 113e0aed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0af0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113e0af3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0af7 je 0x113e0b99 */
  if (C.zf) goto L_113e0b99;
  /* 113e0afd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e0b00 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113e0b03 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113e0b0a jmp 0x113e0b15 */
  goto L_113e0b15;
L_113e0b0c:;
  /* 113e0b0c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0b0f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0b12 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_113e0b15:;
  /* 113e0b15 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0b19 jae 0x113e0b8a */
  if (!C.cf) goto L_113e0b8a;
  /* 113e0b1b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0b1e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 113e0b21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0b24 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0b27 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113e0b2a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0b2d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0b30 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 113e0b33 push ecx */
  push32((uint32_t)(ECX));
  /* 113e0b34 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0b37 push edx */
  push32((uint32_t)(EDX));
  /* 113e0b38 call 0x113d6ce0 */
  push32(0x113e0b3du); f_113d6ce0();
  /* 113e0b3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0b40 push eax */
  push32((uint32_t)(EAX));
  /* 113e0b41 call 0x113d6b60 */
  push32(0x113e0b46u); f_113d6b60();
  /* 113e0b46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0b49 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0b4c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0b4e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113e0b51 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0b54 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 113e0b57 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0b5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0b5d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113e0b60 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0b63 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0b66 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 113e0b6a push eax */
  push32((uint32_t)(EAX));
  /* 113e0b6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0b6e push ecx */
  push32((uint32_t)(ECX));
  /* 113e0b6f call 0x113d6ce0 */
  push32(0x113e0b74u); f_113d6ce0();
  /* 113e0b74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0b77 push eax */
  push32((uint32_t)(EAX));
  /* 113e0b78 call 0x113d6b60 */
  push32(0x113e0b7du); f_113d6b60();
  /* 113e0b7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0b80 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0b83 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0b85 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113e0b88 jmp 0x113e0b0c */
  goto L_113e0b0c;
L_113e0b8a:;
  /* 113e0b8a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0b8d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 113e0b90 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0b93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0b96 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_113e0b99:;
  /* 113e0b99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e0b9c pop esi */
  ESI = (pop32());
  /* 113e0b9d mov esp, ebp */
  ESP = (EBP);
  /* 113e0b9f pop ebp */
  EBP = (pop32());
  /* 113e0ba0 ret  */
  ESPCHK(0x113e0a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bb0 @ 0x113e0bb0 (291 bytes, 97 insns) */
void f_113e0bb0(void) {
  FTRACE(0x113e0bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e0bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 113e0bb1 mov ebp, esp */
  EBP = (ESP);
  /* 113e0bb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e0bb6 push esi */
  push32((uint32_t)(ESI));
  /* 113e0bb7 mov eax, dword ptr [0x113fec98] */
  EAX = (r32((uint32_t)(0x113fec98)));
  /* 113e0bbc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113e0bbf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113e0bc6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113e0bcd jmp 0x113e0bd8 */
  goto L_113e0bd8;
L_113e0bcf:;
  /* 113e0bcf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0bd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0bd5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_113e0bd8:;
  /* 113e0bd8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0bdc jae 0x113e0c12 */
  if (!C.cf) goto L_113e0c12;
  /* 113e0bde mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0be1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0be4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 113e0be8 push ecx */
  push32((uint32_t)(ECX));
  /* 113e0be9 call 0x113d6b60 */
  push32(0x113e0beeu); f_113d6b60();
  /* 113e0bee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0bf1 mov esi, eax */
  ESI = (EAX);
  /* 113e0bf3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0bf6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0bf9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 113e0bfd push ecx */
  push32((uint32_t)(ECX));
  /* 113e0bfe call 0x113d6b60 */
  push32(0x113e0c03u); f_113d6b60();
  /* 113e0c03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0c06 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0c09 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 113e0c0d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113e0c10 jmp 0x113e0bcf */
  goto L_113e0bcf;
L_113e0c12:;
  /* 113e0c12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e0c15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0c18 push eax */
  push32((uint32_t)(EAX));
  /* 113e0c19 call 0x113d3d10 */
  push32(0x113e0c1eu); f_113d3d10();
  /* 113e0c1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0c21 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113e0c24 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0c28 je 0x113e0ccb */
  if (C.zf) goto L_113e0ccb;
  /* 113e0c2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e0c31 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113e0c34 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113e0c3b jmp 0x113e0c46 */
  goto L_113e0c46;
L_113e0c3d:;
  /* 113e0c3d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0c40 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0c43 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_113e0c46:;
  /* 113e0c46 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0c4a jae 0x113e0cbc */
  if (!C.cf) goto L_113e0cbc;
  /* 113e0c4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0c4f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 113e0c52 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0c55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0c58 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113e0c5b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0c5e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0c61 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 113e0c65 push ecx */
  push32((uint32_t)(ECX));
  /* 113e0c66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0c69 push edx */
  push32((uint32_t)(EDX));
  /* 113e0c6a call 0x113d6ce0 */
  push32(0x113e0c6fu); f_113d6ce0();
  /* 113e0c6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0c72 push eax */
  push32((uint32_t)(EAX));
  /* 113e0c73 call 0x113d6b60 */
  push32(0x113e0c78u); f_113d6b60();
  /* 113e0c78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0c7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0c7e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0c80 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113e0c83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0c86 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 113e0c89 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0c8c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0c8f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113e0c92 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0c95 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0c98 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 113e0c9c push eax */
  push32((uint32_t)(EAX));
  /* 113e0c9d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0ca0 push ecx */
  push32((uint32_t)(ECX));
  /* 113e0ca1 call 0x113d6ce0 */
  push32(0x113e0ca6u); f_113d6ce0();
  /* 113e0ca6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0ca9 push eax */
  push32((uint32_t)(EAX));
  /* 113e0caa call 0x113d6b60 */
  push32(0x113e0cafu); f_113d6b60();
  /* 113e0caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0cb2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0cb5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0cb7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113e0cba jmp 0x113e0c3d */
  goto L_113e0c3d;
L_113e0cbc:;
  /* 113e0cbc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0cbf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 113e0cc2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0cc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0cc8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_113e0ccb:;
  /* 113e0ccb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e0cce pop esi */
  ESI = (pop32());
  /* 113e0ccf mov esp, ebp */
  ESP = (EBP);
  /* 113e0cd1 pop ebp */
  EBP = (pop32());
  /* 113e0cd2 ret  */
  ESPCHK(0x113e0bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ce0 @ 0x113e0ce0 (878 bytes, 273 insns) */
void f_113e0ce0(void) {
  FTRACE(0x113e0ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e0ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 113e0ce1 mov ebp, esp */
  EBP = (ESP);
  /* 113e0ce3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113e0ce6 push esi */
  push32((uint32_t)(ESI));
  /* 113e0ce7 mov eax, dword ptr [0x113fec98] */
  EAX = (r32((uint32_t)(0x113fec98)));
  /* 113e0cec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113e0cef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113e0cf6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113e0cfd jmp 0x113e0d08 */
  goto L_113e0d08;
L_113e0cff:;
  /* 113e0cff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0d02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0d05 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_113e0d08:;
  /* 113e0d08 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0d0c jae 0x113e0d41 */
  if (!C.cf) goto L_113e0d41;
  /* 113e0d0e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0d11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0d14 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 113e0d17 push ecx */
  push32((uint32_t)(ECX));
  /* 113e0d18 call 0x113d6b60 */
  push32(0x113e0d1du); f_113d6b60();
  /* 113e0d1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0d20 mov esi, eax */
  ESI = (EAX);
  /* 113e0d22 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0d25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0d28 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 113e0d2c push ecx */
  push32((uint32_t)(ECX));
  /* 113e0d2d call 0x113d6b60 */
  push32(0x113e0d32u); f_113d6b60();
  /* 113e0d32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0d35 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0d38 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 113e0d3c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113e0d3f jmp 0x113e0cff */
  goto L_113e0cff;
L_113e0d41:;
  /* 113e0d41 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113e0d48 jmp 0x113e0d53 */
  goto L_113e0d53;
L_113e0d4a:;
  /* 113e0d4a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0d4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0d50 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_113e0d53:;
  /* 113e0d53 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0d57 jae 0x113e0d8d */
  if (!C.cf) goto L_113e0d8d;
  /* 113e0d59 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0d5c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0d5f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 113e0d63 push eax */
  push32((uint32_t)(EAX));
  /* 113e0d64 call 0x113d6b60 */
  push32(0x113e0d69u); f_113d6b60();
  /* 113e0d69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0d6c mov esi, eax */
  ESI = (EAX);
  /* 113e0d6e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0d71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0d74 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 113e0d78 push eax */
  push32((uint32_t)(EAX));
  /* 113e0d79 call 0x113d6b60 */
  push32(0x113e0d7eu); f_113d6b60();
  /* 113e0d7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0d81 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0d84 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 113e0d88 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113e0d8b jmp 0x113e0d4a */
  goto L_113e0d4a;
L_113e0d8d:;
  /* 113e0d8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0d90 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 113e0d96 push eax */
  push32((uint32_t)(EAX));
  /* 113e0d97 call 0x113d6b60 */
  push32(0x113e0d9cu); f_113d6b60();
  /* 113e0d9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0d9f mov esi, eax */
  ESI = (EAX);
  /* 113e0da1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0da4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 113e0daa push edx */
  push32((uint32_t)(EDX));
  /* 113e0dab call 0x113d6b60 */
  push32(0x113e0db0u); f_113d6b60();
  /* 113e0db0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0db3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0db6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 113e0dba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113e0dbd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0dc0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 113e0dc6 push edx */
  push32((uint32_t)(EDX));
  /* 113e0dc7 call 0x113d6b60 */
  push32(0x113e0dccu); f_113d6b60();
  /* 113e0dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0dcf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e0dd2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 113e0dd6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113e0dd9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0ddc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 113e0de2 push ecx */
  push32((uint32_t)(ECX));
  /* 113e0de3 call 0x113d6b60 */
  push32(0x113e0de8u); f_113d6b60();
  /* 113e0de8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0deb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e0dee lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 113e0df2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113e0df5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0df8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 113e0dfe push edx */
  push32((uint32_t)(EDX));
  /* 113e0dff call 0x113d6b60 */
  push32(0x113e0e04u); f_113d6b60();
  /* 113e0e04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0e07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e0e0a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 113e0e0e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113e0e11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113e0e14 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0e19 push eax */
  push32((uint32_t)(EAX));
  /* 113e0e1a call 0x113d3d10 */
  push32(0x113e0e1fu); f_113d3d10();
  /* 113e0e1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0e22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113e0e25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0e29 je 0x113e1046 */
  if (C.zf) goto L_113e1046;
  /* 113e0e2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e0e32 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 113e0e35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e0e38 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0e3e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113e0e41 push 0xac */
  push32((uint32_t)(0xacu));
  /* 113e0e46 mov eax, dword ptr [0x113fec98] */
  EAX = (r32((uint32_t)(0x113fec98)));
  /* 113e0e4b push eax */
  push32((uint32_t)(EAX));
  /* 113e0e4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e0e4f push ecx */
  push32((uint32_t)(ECX));
  /* 113e0e50 call 0x113da610 */
  push32(0x113e0e55u); f_113da610();
  /* 113e0e55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0e58 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113e0e5f jmp 0x113e0e6a */
  goto L_113e0e6a;
L_113e0e61:;
  /* 113e0e61 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0e64 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0e67 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_113e0e6a:;
  /* 113e0e6a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0e6e jae 0x113e0ede */
  if (!C.cf) goto L_113e0ede;
  /* 113e0e70 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0e73 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113e0e76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0e79 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 113e0e7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0e7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0e82 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 113e0e85 push edx */
  push32((uint32_t)(EDX));
  /* 113e0e86 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0e89 push eax */
  push32((uint32_t)(EAX));
  /* 113e0e8a call 0x113d6ce0 */
  push32(0x113e0e8fu); f_113d6ce0();
  /* 113e0e8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0e92 push eax */
  push32((uint32_t)(EAX));
  /* 113e0e93 call 0x113d6b60 */
  push32(0x113e0e98u); f_113d6b60();
  /* 113e0e98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0e9b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0e9e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 113e0ea2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113e0ea5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0ea8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113e0eab mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0eae mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 113e0eb2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0eb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0eb8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 113e0ebc push edx */
  push32((uint32_t)(EDX));
  /* 113e0ebd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0ec0 push eax */
  push32((uint32_t)(EAX));
  /* 113e0ec1 call 0x113d6ce0 */
  push32(0x113e0ec6u); f_113d6ce0();
  /* 113e0ec6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0ec9 push eax */
  push32((uint32_t)(EAX));
  /* 113e0eca call 0x113d6b60 */
  push32(0x113e0ecfu); f_113d6b60();
  /* 113e0ecf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0ed2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0ed5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 113e0ed9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113e0edc jmp 0x113e0e61 */
  goto L_113e0e61;
L_113e0ede:;
  /* 113e0ede mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113e0ee5 jmp 0x113e0ef0 */
  goto L_113e0ef0;
L_113e0ee7:;
  /* 113e0ee7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0eea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0eed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_113e0ef0:;
  /* 113e0ef0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113e0ef4 jae 0x113e0f66 */
  if (!C.cf) goto L_113e0f66;
  /* 113e0ef6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0ef9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113e0efc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0eff mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 113e0f03 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0f06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0f09 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 113e0f0d push eax */
  push32((uint32_t)(EAX));
  /* 113e0f0e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0f11 push ecx */
  push32((uint32_t)(ECX));
  /* 113e0f12 call 0x113d6ce0 */
  push32(0x113e0f17u); f_113d6ce0();
  /* 113e0f17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0f1a push eax */
  push32((uint32_t)(EAX));
  /* 113e0f1b call 0x113d6b60 */
  push32(0x113e0f20u); f_113d6b60();
  /* 113e0f20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0f23 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0f26 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 113e0f2a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113e0f2d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0f30 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113e0f33 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0f36 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 113e0f3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113e0f3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0f40 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 113e0f44 push eax */
  push32((uint32_t)(EAX));
  /* 113e0f45 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0f48 push ecx */
  push32((uint32_t)(ECX));
  /* 113e0f49 call 0x113d6ce0 */
  push32(0x113e0f4eu); f_113d6ce0();
  /* 113e0f4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0f51 push eax */
  push32((uint32_t)(EAX));
  /* 113e0f52 call 0x113d6b60 */
  push32(0x113e0f57u); f_113d6b60();
  /* 113e0f57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0f5a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0f5d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 113e0f61 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113e0f64 jmp 0x113e0ee7 */
  goto L_113e0ee7;
L_113e0f66:;
  /* 113e0f66 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113e0f69 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0f6c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 113e0f72 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0f75 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 113e0f7b push ecx */
  push32((uint32_t)(ECX));
  /* 113e0f7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0f7f push edx */
  push32((uint32_t)(EDX));
  /* 113e0f80 call 0x113d6ce0 */
  push32(0x113e0f85u); f_113d6ce0();
  /* 113e0f85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0f88 push eax */
  push32((uint32_t)(EAX));
  /* 113e0f89 call 0x113d6b60 */
  push32(0x113e0f8eu); f_113d6b60();
  /* 113e0f8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0f91 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0f94 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 113e0f98 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113e0f9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113e0f9e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0fa1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 113e0fa7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0faa mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 113e0fb0 push eax */
  push32((uint32_t)(EAX));
  /* 113e0fb1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0fb4 push ecx */
  push32((uint32_t)(ECX));
  /* 113e0fb5 call 0x113d6ce0 */
  push32(0x113e0fbau); f_113d6ce0();
  /* 113e0fba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0fbd push eax */
  push32((uint32_t)(EAX));
  /* 113e0fbe call 0x113d6b60 */
  push32(0x113e0fc3u); f_113d6b60();
  /* 113e0fc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0fc6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0fc9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 113e0fcd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113e0fd0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113e0fd3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0fd6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 113e0fdc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e0fdf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 113e0fe5 push ecx */
  push32((uint32_t)(ECX));
  /* 113e0fe6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0fe9 push edx */
  push32((uint32_t)(EDX));
  /* 113e0fea call 0x113d6ce0 */
  push32(0x113e0fefu); f_113d6ce0();
  /* 113e0fef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0ff2 push eax */
  push32((uint32_t)(EAX));
  /* 113e0ff3 call 0x113d6b60 */
  push32(0x113e0ff8u); f_113d6b60();
  /* 113e0ff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e0ffb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e0ffe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 113e1002 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113e1005 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113e1008 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e100b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 113e1011 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113e1014 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 113e101a push eax */
  push32((uint32_t)(EAX));
  /* 113e101b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e101e push ecx */
  push32((uint32_t)(ECX));
  /* 113e101f call 0x113d6ce0 */
  push32(0x113e1024u); f_113d6ce0();
  /* 113e1024 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1027 push eax */
  push32((uint32_t)(EAX));
  /* 113e1028 call 0x113d6b60 */
  push32(0x113e102du); f_113d6b60();
  /* 113e102d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e1030 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e1033 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 113e1037 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113e103a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113e103d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113e1040 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_113e1046:;
  /* 113e1046 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113e1049 pop esi */
  ESI = (pop32());
  /* 113e104a mov esp, ebp */
  ESP = (EBP);
  /* 113e104c pop ebp */
  EBP = (pop32());
  /* 113e104d ret  */
  ESPCHK(0x113e0ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011050 @ 0x113e1050 (31 bytes, 15 insns) */
void f_113e1050(void) {
  FTRACE(0x113e1050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113e1050 push ebp */
  push32((uint32_t)(EBP));
  /* 113e1051 mov ebp, esp */
  EBP = (ESP);
  /* 113e1053 push 0 */
  push32((uint32_t)(0x0u));
  /* 113e1055 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113e1058 push eax */
  push32((uint32_t)(EAX));
  /* 113e1059 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113e105c push ecx */
  push32((uint32_t)(ECX));
  /* 113e105d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113e1060 push edx */
  push32((uint32_t)(EDX));
  /* 113e1061 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113e1064 push eax */
  push32((uint32_t)(EAX));
  /* 113e1065 call 0x113e1070 */
  push32(0x113e106au); f_113e1070();
  /* 113e106a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113e106d pop ebp */
  EBP = (pop32());
  /* 113e106e ret  */
  ESPCHK(0x113e1050u, _esp0);
  ESP += 4; return;
}

