#include "recomp.h"

/* FUN_10005b00 @ 0x11645b00 (118 bytes, 49 insns) */
void f_11645b00(void) {
  FTRACE(0x11645b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11645b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11645b01 mov ebp, esp */
  EBP = (ESP);
  /* 11645b03 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11645b06 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11645b09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11645b0c lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11645b0f push ecx */
  push32((uint32_t)(ECX));
  /* 11645b10 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11645b13 push edx */
  push32((uint32_t)(EDX));
  /* 11645b14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11645b17 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11645b1a push ecx */
  push32((uint32_t)(ECX));
  /* 11645b1b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11645b1d push edx */
  push32((uint32_t)(EDX));
  /* 11645b1e call 0x1164b200 */
  push32(0x11645b23u); f_1164b200();
  /* 11645b23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11645b26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645b29 push eax */
  push32((uint32_t)(EAX));
  /* 11645b2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11645b2d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645b30 push ecx */
  push32((uint32_t)(ECX));
  /* 11645b31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645b34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11645b36 cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645b39 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11645b3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11645b3f add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645b41 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11645b43 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645b47 setg dl */
  DL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11645b4a add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645b4c push ecx */
  push32((uint32_t)(ECX));
  /* 11645b4d call 0x1164b100 */
  push32(0x11645b52u); f_1164b100();
  /* 11645b52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11645b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11645b57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645b5a push eax */
  push32((uint32_t)(EAX));
  /* 11645b5b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11645b5e push ecx */
  push32((uint32_t)(ECX));
  /* 11645b5f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11645b62 push edx */
  push32((uint32_t)(EDX));
  /* 11645b63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11645b66 push eax */
  push32((uint32_t)(EAX));
  /* 11645b67 call 0x11645b80 */
  push32(0x11645b6cu); f_11645b80();
  /* 11645b6c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11645b6f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11645b72 mov esp, ebp */
  ESP = (EBP);
  /* 11645b74 pop ebp */
  EBP = (pop32());
  /* 11645b75 ret  */
  ESPCHK(0x11645b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b80 @ 0x11645b80 (358 bytes, 128 insns) */
void f_11645b80(void) {
  FTRACE(0x11645b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11645b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11645b81 mov ebp, esp */
  EBP = (ESP);
  /* 11645b83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11645b86 movsx eax, byte ptr [ebp + 0x18] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 11645b8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11645b8c je 0x11645bb7 */
  if (C.zf) goto L_11645bb7;
  /* 11645b8e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11645b91 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11645b93 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645b96 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11645b99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11645b9c add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645b9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11645ba1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11645ba3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645ba7 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11645baa push ecx */
  push32((uint32_t)(ECX));
  /* 11645bab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645bae push edx */
  push32((uint32_t)(EDX));
  /* 11645baf call 0x11645ff0 */
  push32(0x11645bb4u); f_11645ff0();
  /* 11645bb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11645bb7:;
  /* 11645bb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11645bba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11645bbd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11645bc0 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645bc3 jne 0x11645bd4 */
  if (!C.zf) goto L_11645bd4;
  /* 11645bc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645bc8 mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
  /* 11645bcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645bce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645bd1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11645bd4:;
  /* 11645bd4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645bd8 jle 0x11645bf8 */
  if ((C.zf||C.sf!=C.of)) goto L_11645bf8;
  /* 11645bda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645bdd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645be0 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11645be3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11645be5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645be8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645beb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11645bee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645bf1 mov al, byte ptr [0x11673c94] */
  AL = (r8((uint32_t)(0x11673c94)));
  /* 11645bf6 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
L_11645bf8:;
  /* 11645bf8 push 0x11670578 */
  push32((uint32_t)(0x11670578u));
  /* 11645bfd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645c00 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645c03 movsx edx, byte ptr [ebp + 0x18] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 11645c07 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11645c09 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11645c0b inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11645c0c add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645c0e push ecx */
  push32((uint32_t)(ECX));
  /* 11645c0f call 0x11649870 */
  push32(0x11645c14u); f_11649870();
  /* 11645c14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11645c17 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11645c1a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645c1e je 0x11645c26 */
  if (C.zf) goto L_11645c26;
  /* 11645c20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645c23 mov byte ptr [eax], 0x45 */
  w8((uint32_t)(EAX), (0x45u));
L_11645c26:;
  /* 11645c26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645c29 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645c2c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11645c2f mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11645c32 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11645c35 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11645c38 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645c3b je 0x11645cdf */
  if (C.zf) goto L_11645cdf;
  /* 11645c41 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11645c44 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11645c47 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11645c4a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11645c4d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645c51 jge 0x11645c61 */
  if ((C.sf==C.of)) goto L_11645c61;
  /* 11645c53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11645c56 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11645c58 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11645c5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645c5e mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
L_11645c61:;
  /* 11645c61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645c64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645c67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11645c6a cmp dword ptr [ebp - 8], 0x64 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645c6e jl 0x11645c95 */
  if ((C.sf!=C.of)) goto L_11645c95;
  /* 11645c70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11645c73 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11645c74 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11645c79 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11645c7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645c7e mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11645c80 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11645c82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645c85 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11645c87 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11645c8a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11645c8b mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11645c90 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11645c92 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11645c95:;
  /* 11645c95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645c98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645c9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11645c9e cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645ca2 jl 0x11645cc9 */
  if ((C.sf!=C.of)) goto L_11645cc9;
  /* 11645ca4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11645ca7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11645ca8 mov ecx, 0xa */
  ECX = (0xau);
  /* 11645cad idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11645caf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645cb2 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11645cb4 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11645cb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645cb9 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11645cbb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11645cbe cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11645cbf mov ecx, 0xa */
  ECX = (0xau);
  /* 11645cc4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11645cc6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11645cc9:;
  /* 11645cc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645ccc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645ccf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11645cd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645cd5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11645cd7 add cl, byte ptr [ebp - 8] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + -0x8))),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11645cda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645cdd mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
L_11645cdf:;
  /* 11645cdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11645ce2 mov esp, ebp */
  ESP = (EBP);
  /* 11645ce4 pop ebp */
  EBP = (pop32());
  /* 11645ce5 ret  */
  ESPCHK(0x11645b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cf0 @ 0x11645cf0 (106 bytes, 44 insns) */
void f_11645cf0(void) {
  FTRACE(0x11645cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11645cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11645cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11645cf3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11645cf6 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11645cf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11645cfc lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11645cff push ecx */
  push32((uint32_t)(ECX));
  /* 11645d00 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11645d03 push edx */
  push32((uint32_t)(EDX));
  /* 11645d04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11645d07 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11645d0a push ecx */
  push32((uint32_t)(ECX));
  /* 11645d0b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11645d0d push edx */
  push32((uint32_t)(EDX));
  /* 11645d0e call 0x1164b200 */
  push32(0x11645d13u); f_1164b200();
  /* 11645d13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11645d16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645d19 push eax */
  push32((uint32_t)(EAX));
  /* 11645d1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645d1d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11645d20 add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645d23 push edx */
  push32((uint32_t)(EDX));
  /* 11645d24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645d27 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11645d29 cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645d2c sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11645d2f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11645d32 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645d34 push edx */
  push32((uint32_t)(EDX));
  /* 11645d35 call 0x1164b100 */
  push32(0x11645d3au); f_1164b100();
  /* 11645d3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11645d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11645d3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645d42 push eax */
  push32((uint32_t)(EAX));
  /* 11645d43 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11645d46 push ecx */
  push32((uint32_t)(ECX));
  /* 11645d47 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11645d4a push edx */
  push32((uint32_t)(EDX));
  /* 11645d4b call 0x11645d60 */
  push32(0x11645d50u); f_11645d60();
  /* 11645d50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11645d53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11645d56 mov esp, ebp */
  ESP = (EBP);
  /* 11645d58 pop ebp */
  EBP = (pop32());
  /* 11645d59 ret  */
  ESPCHK(0x11645cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d60 @ 0x11645d60 (317 bytes, 113 insns) */
void f_11645d60(void) {
  FTRACE(0x11645d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11645d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11645d61 mov ebp, esp */
  EBP = (ESP);
  /* 11645d63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11645d66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11645d69 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11645d6c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11645d6f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11645d72 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 11645d76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11645d78 je 0x11645db3 */
  if (C.zf) goto L_11645db3;
  /* 11645d7a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11645d7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11645d7f cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645d82 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11645d85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11645d88 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645d8a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11645d8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11645d90 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645d93 jne 0x11645db3 */
  if (!C.zf) goto L_11645db3;
  /* 11645d95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645d98 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645d9b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11645d9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11645da1 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11645da4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11645da7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645daa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11645dad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11645db0 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11645db3:;
  /* 11645db3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11645db6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11645db9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11645dbc cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645dbf jne 0x11645dd0 */
  if (!C.zf) goto L_11645dd0;
  /* 11645dc1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645dc4 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11645dc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645dca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645dcd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11645dd0:;
  /* 11645dd0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11645dd3 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645dd7 jg 0x11645df8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11645df8;
  /* 11645dd9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11645ddb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645dde push ecx */
  push32((uint32_t)(ECX));
  /* 11645ddf call 0x11645ff0 */
  push32(0x11645de4u); f_11645ff0();
  /* 11645de4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11645de7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645dea mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11645ded mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645df0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645df3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11645df6 jmp 0x11645e04 */
  goto L_11645e04;
L_11645df8:;
  /* 11645df8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11645dfb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645dfe add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645e01 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11645e04:;
  /* 11645e04 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645e08 jle 0x11645e96 */
  if ((C.zf||C.sf!=C.of)) goto L_11645e96;
  /* 11645e0e push 1 */
  push32((uint32_t)(0x1u));
  /* 11645e10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645e13 push eax */
  push32((uint32_t)(EAX));
  /* 11645e14 call 0x11645ff0 */
  push32(0x11645e19u); f_11645ff0();
  /* 11645e19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11645e1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645e1f mov dl, byte ptr [0x11673c94] */
  DL = (r8((uint32_t)(0x11673c94)));
  /* 11645e25 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11645e27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645e2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645e2d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11645e30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11645e33 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645e37 jge 0x11645e96 */
  if ((C.sf==C.of)) goto L_11645e96;
  /* 11645e39 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 11645e3d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11645e3f je 0x11645e4e */
  if (C.zf) goto L_11645e4e;
  /* 11645e41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11645e44 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11645e47 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11645e49 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11645e4c jmp 0x11645e74 */
  goto L_11645e74;
L_11645e4e:;
  /* 11645e4e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11645e51 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11645e54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11645e56 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645e59 jge 0x11645e63 */
  if ((C.sf==C.of)) goto L_11645e63;
  /* 11645e5b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11645e5e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11645e61 jmp 0x11645e6e */
  goto L_11645e6e;
L_11645e63:;
  /* 11645e63 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11645e66 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11645e69 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11645e6b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11645e6e:;
  /* 11645e6e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11645e71 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11645e74:;
  /* 11645e74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11645e77 push edx */
  push32((uint32_t)(EDX));
  /* 11645e78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645e7b push eax */
  push32((uint32_t)(EAX));
  /* 11645e7c call 0x11645ff0 */
  push32(0x11645e81u); f_11645ff0();
  /* 11645e81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11645e84 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11645e87 push ecx */
  push32((uint32_t)(ECX));
  /* 11645e88 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11645e8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645e8d push edx */
  push32((uint32_t)(EDX));
  /* 11645e8e call 0x1164b3f0 */
  push32(0x11645e93u); f_1164b3f0();
  /* 11645e93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11645e96:;
  /* 11645e96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11645e99 mov esp, ebp */
  ESP = (EBP);
  /* 11645e9b pop ebp */
  EBP = (pop32());
  /* 11645e9c ret  */
  ESPCHK(0x11645d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ea0 @ 0x11645ea0 (229 bytes, 89 insns) */
void f_11645ea0(void) {
  FTRACE(0x11645ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11645ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11645ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11645ea3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11645ea6 mov byte ptr [ebp - 0x30], 0 */
  w8((uint32_t)(EBP + -0x30), (0x0u));
  /* 11645eaa lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11645ead mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11645eb0 lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11645eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11645eb4 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11645eb7 push edx */
  push32((uint32_t)(EDX));
  /* 11645eb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11645ebb mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11645ebe push ecx */
  push32((uint32_t)(ECX));
  /* 11645ebf mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11645ec1 push edx */
  push32((uint32_t)(EDX));
  /* 11645ec2 call 0x1164b200 */
  push32(0x11645ec7u); f_1164b200();
  /* 11645ec7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11645eca mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11645ecd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11645ed0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11645ed3 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 11645ed6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11645ed9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11645edb cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645ede sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11645ee1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11645ee4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645ee6 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11645ee9 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11645eec push edx */
  push32((uint32_t)(EDX));
  /* 11645eed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11645ef0 push eax */
  push32((uint32_t)(EAX));
  /* 11645ef1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645ef4 push ecx */
  push32((uint32_t)(ECX));
  /* 11645ef5 call 0x1164b100 */
  push32(0x11645efau); f_1164b100();
  /* 11645efa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11645efd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11645f00 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11645f03 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11645f06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11645f08 cmp dword ptr [ebp - 0x34], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645f0b setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11645f0e mov byte ptr [ebp - 0x30], cl */
  w8((uint32_t)(EBP + -0x30), (CL));
  /* 11645f11 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11645f14 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11645f17 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11645f1a mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11645f1d cmp dword ptr [ebp - 0x34], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645f21 jl 0x11645f2b */
  if ((C.sf!=C.of)) goto L_11645f2b;
  /* 11645f23 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11645f26 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645f29 jl 0x11645f47 */
  if ((C.sf!=C.of)) goto L_11645f47;
L_11645f2b:;
  /* 11645f2b push 1 */
  push32((uint32_t)(0x1u));
  /* 11645f2d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11645f30 push edx */
  push32((uint32_t)(EDX));
  /* 11645f31 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11645f34 push eax */
  push32((uint32_t)(EAX));
  /* 11645f35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11645f38 push ecx */
  push32((uint32_t)(ECX));
  /* 11645f39 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11645f3c push edx */
  push32((uint32_t)(EDX));
  /* 11645f3d call 0x11645b80 */
  push32(0x11645f42u); f_11645b80();
  /* 11645f42 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11645f45 jmp 0x11645f81 */
  goto L_11645f81;
L_11645f47:;
  /* 11645f47 movsx eax, byte ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x30))));
  /* 11645f4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11645f4d je 0x11645f6b */
  if (C.zf) goto L_11645f6b;
L_11645f4f:;
  /* 11645f4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645f52 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11645f55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645f58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11645f5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11645f5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11645f60 je 0x11645f64 */
  if (C.zf) goto L_11645f64;
  /* 11645f62 jmp 0x11645f4f */
  goto L_11645f4f;
L_11645f64:;
  /* 11645f64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11645f67 mov byte ptr [ecx - 2], 0 */
  w8((uint32_t)(ECX + -0x2), (0x0u));
L_11645f6b:;
  /* 11645f6b push 1 */
  push32((uint32_t)(0x1u));
  /* 11645f6d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11645f70 push edx */
  push32((uint32_t)(EDX));
  /* 11645f71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11645f74 push eax */
  push32((uint32_t)(EAX));
  /* 11645f75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11645f78 push ecx */
  push32((uint32_t)(ECX));
  /* 11645f79 call 0x11645d60 */
  push32(0x11645f7eu); f_11645d60();
  /* 11645f7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11645f81:;
  /* 11645f81 mov esp, ebp */
  ESP = (EBP);
  /* 11645f83 pop ebp */
  EBP = (pop32());
  /* 11645f84 ret  */
  ESPCHK(0x11645ea0u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x11645f90 (95 bytes, 40 insns) */
void f_11645f90(void) {
  FTRACE(0x11645f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11645f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11645f91 mov ebp, esp */
  EBP = (ESP);
  /* 11645f93 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645f97 je 0x11645f9f */
  if (C.zf) goto L_11645f9f;
  /* 11645f99 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645f9d jne 0x11645fb9 */
  if (!C.zf) goto L_11645fb9;
L_11645f9f:;
  /* 11645f9f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11645fa2 push eax */
  push32((uint32_t)(EAX));
  /* 11645fa3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11645fa6 push ecx */
  push32((uint32_t)(ECX));
  /* 11645fa7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11645faa push edx */
  push32((uint32_t)(EDX));
  /* 11645fab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11645fae push eax */
  push32((uint32_t)(EAX));
  /* 11645faf call 0x11645b00 */
  push32(0x11645fb4u); f_11645b00();
  /* 11645fb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11645fb7 jmp 0x11645fed */
  goto L_11645fed;
L_11645fb9:;
  /* 11645fb9 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645fbd jne 0x11645fd5 */
  if (!C.zf) goto L_11645fd5;
  /* 11645fbf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11645fc2 push ecx */
  push32((uint32_t)(ECX));
  /* 11645fc3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11645fc6 push edx */
  push32((uint32_t)(EDX));
  /* 11645fc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11645fca push eax */
  push32((uint32_t)(EAX));
  /* 11645fcb call 0x11645cf0 */
  push32(0x11645fd0u); f_11645cf0();
  /* 11645fd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11645fd3 jmp 0x11645fed */
  goto L_11645fed;
L_11645fd5:;
  /* 11645fd5 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11645fd8 push ecx */
  push32((uint32_t)(ECX));
  /* 11645fd9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11645fdc push edx */
  push32((uint32_t)(EDX));
  /* 11645fdd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11645fe0 push eax */
  push32((uint32_t)(EAX));
  /* 11645fe1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11645fe4 push ecx */
  push32((uint32_t)(ECX));
  /* 11645fe5 call 0x11645ea0 */
  push32(0x11645feau); f_11645ea0();
  /* 11645fea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11645fed:;
  /* 11645fed pop ebp */
  EBP = (pop32());
  /* 11645fee ret  */
  ESPCHK(0x11645f90u, _esp0);
  ESP += 4; return;
}

/* __shift @ 0x11645ff0 (46 bytes, 19 insns) */
void f_11645ff0(void) {
  FTRACE(0x11645ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11645ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11645ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11645ff3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11645ff7 je 0x1164601c */
  if (C.zf) goto L_1164601c;
  /* 11645ff9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11645ffc push eax */
  push32((uint32_t)(EAX));
  /* 11645ffd call 0x116496f0 */
  push32(0x11646002u); f_116496f0();
  /* 11646002 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646005 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646008 push eax */
  push32((uint32_t)(EAX));
  /* 11646009 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164600c push ecx */
  push32((uint32_t)(ECX));
  /* 1164600d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646010 add edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646013 push edx */
  push32((uint32_t)(EDX));
  /* 11646014 call 0x1164b450 */
  push32(0x11646019u); f_1164b450();
  /* 11646019 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164601c:;
  /* 1164601c pop ebp */
  EBP = (pop32());
  /* 1164601d ret  */
  ESPCHK(0x11645ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006020 @ 0x11646020 (56 bytes, 15 insns) */
void f_11646020(void) {
  FTRACE(0x11646020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11646020 push ebp */
  push32((uint32_t)(EBP));
  /* 11646021 mov ebp, esp */
  EBP = (ESP);
  /* 11646023 cmp dword ptr [0x11673b58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11673b58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164602a je 0x11646032 */
  if (C.zf) goto L_11646032;
  /* 1164602c call dword ptr [0x11673b58] */
  call_ind((uint32_t)(r32((uint32_t)(0x11673b58))), 0x11646032u);
L_11646032:;
  /* 11646032 push 0x1167352c */
  push32((uint32_t)(0x1167352cu));
  /* 11646037 push 0x1167331c */
  push32((uint32_t)(0x1167331cu));
  /* 1164603c call 0x116461f0 */
  push32(0x11646041u); f_116461f0();
  /* 11646041 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646044 push 0x11673218 */
  push32((uint32_t)(0x11673218u));
  /* 11646049 push 0x11673000 */
  push32((uint32_t)(0x11673000u));
  /* 1164604e call 0x116461f0 */
  push32(0x11646053u); f_116461f0();
  /* 11646053 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646056 pop ebp */
  EBP = (pop32());
  /* 11646057 ret  */
  ESPCHK(0x11646020u, _esp0);
  ESP += 4; return;
}

/* FUN_10006060 @ 0x11646060 (21 bytes, 10 insns) */
void f_11646060(void) {
  FTRACE(0x11646060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11646060 push ebp */
  push32((uint32_t)(EBP));
  /* 11646061 mov ebp, esp */
  EBP = (ESP);
  /* 11646063 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646065 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646067 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164606a push eax */
  push32((uint32_t)(EAX));
  /* 1164606b call 0x116460e0 */
  push32(0x11646070u); f_116460e0();
  /* 11646070 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646073 pop ebp */
  EBP = (pop32());
  /* 11646074 ret  */
  ESPCHK(0x11646060u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11646080 (21 bytes, 10 insns) */
void f_11646080(void) {
  FTRACE(0x11646080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11646080 push ebp */
  push32((uint32_t)(EBP));
  /* 11646081 mov ebp, esp */
  EBP = (ESP);
  /* 11646083 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646085 push 1 */
  push32((uint32_t)(0x1u));
  /* 11646087 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164608a push eax */
  push32((uint32_t)(EAX));
  /* 1164608b call 0x116460e0 */
  push32(0x11646090u); f_116460e0();
  /* 11646090 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646093 pop ebp */
  EBP = (pop32());
  /* 11646094 ret  */
  ESPCHK(0x11646080u, _esp0);
  ESP += 4; return;
}

/* FUN_100060a0 @ 0x116460a0 (19 bytes, 9 insns) */
void f_116460a0(void) {
  FTRACE(0x116460a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116460a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116460a1 mov ebp, esp */
  EBP = (ESP);
  /* 116460a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 116460a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116460a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116460a9 call 0x116460e0 */
  push32(0x116460aeu); f_116460e0();
  /* 116460ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116460b1 pop ebp */
  EBP = (pop32());
  /* 116460b2 ret  */
  ESPCHK(0x116460a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060c0 @ 0x116460c0 (19 bytes, 9 insns) */
void f_116460c0(void) {
  FTRACE(0x116460c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116460c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116460c1 mov ebp, esp */
  EBP = (ESP);
  /* 116460c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 116460c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 116460c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116460c9 call 0x116460e0 */
  push32(0x116460ceu); f_116460e0();
  /* 116460ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116460d1 pop ebp */
  EBP = (pop32());
  /* 116460d2 ret  */
  ESPCHK(0x116460c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060e0 @ 0x116460e0 (227 bytes, 61 insns) */
void f_116460e0(void) {
  FTRACE(0x116460e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116460e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116460e1 mov ebp, esp */
  EBP = (ESP);
  /* 116460e3 push ecx */
  push32((uint32_t)(ECX));
  /* 116460e4 call 0x116461d0 */
  push32(0x116460e9u); f_116461d0();
  /* 116460e9 cmp dword ptr [0x11675fe4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11675fe4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116460f0 jne 0x11646103 */
  if (!C.zf) goto L_11646103;
  /* 116460f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116460f5 push eax */
  push32((uint32_t)(EAX));
  /* 116460f6 call dword ptr [0x11678374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678374))), 0x116460fcu);
  /* 116460fc push eax */
  push32((uint32_t)(EAX));
  /* 116460fd call dword ptr [0x11678370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678370))), 0x11646103u);
L_11646103:;
  /* 11646103 mov dword ptr [0x11675fe0], 1 */
  w32((uint32_t)(0x11675fe0), (0x1u));
  /* 1164610d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11646110 mov byte ptr [0x11675fdc], cl */
  w8((uint32_t)(0x11675fdc), (CL));
  /* 11646116 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164611a jne 0x11646163 */
  if (!C.zf) goto L_11646163;
  /* 1164611c cmp dword ptr [0x11677ad8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11677ad8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646123 je 0x11646151 */
  if (C.zf) goto L_11646151;
  /* 11646125 mov edx, dword ptr [0x11677ad4] */
  EDX = (r32((uint32_t)(0x11677ad4)));
  /* 1164612b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1164612e:;
  /* 1164612e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646131 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11646134 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11646137 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164613a cmp ecx, dword ptr [0x11677ad8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11677ad8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646140 jb 0x11646151 */
  if (C.cf) goto L_11646151;
  /* 11646142 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646145 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646148 je 0x1164614f */
  if (C.zf) goto L_1164614f;
  /* 1164614a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164614d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1164614fu);
L_1164614f:;
  /* 1164614f jmp 0x1164612e */
  goto L_1164612e;
L_11646151:;
  /* 11646151 push 0x11673838 */
  push32((uint32_t)(0x11673838u));
  /* 11646156 push 0x11673630 */
  push32((uint32_t)(0x11673630u));
  /* 1164615b call 0x116461f0 */
  push32(0x11646160u); f_116461f0();
  /* 11646160 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11646163:;
  /* 11646163 push 0x11673a40 */
  push32((uint32_t)(0x11673a40u));
  /* 11646168 push 0x1167393c */
  push32((uint32_t)(0x1167393cu));
  /* 1164616d call 0x116461f0 */
  push32(0x11646172u); f_116461f0();
  /* 11646172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646175 cmp dword ptr [0x11675fe8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11675fe8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164617c jne 0x1164619e */
  if (!C.zf) goto L_1164619e;
  /* 1164617e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11646180 call 0x11647dd0 */
  push32(0x11646185u); f_11647dd0();
  /* 11646185 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646188 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1164618b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164618d je 0x1164619e */
  if (C.zf) goto L_1164619e;
  /* 1164618f mov dword ptr [0x11675fe8], 1 */
  w32((uint32_t)(0x11675fe8), (0x1u));
  /* 11646199 call 0x116486e0 */
  push32(0x1164619eu); f_116486e0();
L_1164619e:;
  /* 1164619e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116461a2 je 0x116461ab */
  if (C.zf) goto L_116461ab;
  /* 116461a4 call 0x116461e0 */
  push32(0x116461a9u); f_116461e0();
  /* 116461a9 jmp 0x116461bf */
  goto L_116461bf;
L_116461ab:;
  /* 116461ab mov dword ptr [0x11675fe4], 1 */
  w32((uint32_t)(0x11675fe4), (0x1u));
  /* 116461b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116461b8 push ecx */
  push32((uint32_t)(ECX));
  /* 116461b9 call dword ptr [0x1167836c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167836c))), 0x116461bfu);
L_116461bf:;
  /* 116461bf mov esp, ebp */
  ESP = (EBP);
  /* 116461c1 pop ebp */
  EBP = (pop32());
  /* 116461c2 ret  */
  ESPCHK(0x116460e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061d0 @ 0x116461d0 (15 bytes, 7 insns) */
void f_116461d0(void) {
  FTRACE(0x116461d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116461d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116461d1 mov ebp, esp */
  EBP = (ESP);
  /* 116461d3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 116461d5 call 0x1164b880 */
  push32(0x116461dau); f_1164b880();
  /* 116461da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116461dd pop ebp */
  EBP = (pop32());
  /* 116461de ret  */
  ESPCHK(0x116461d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061e0 @ 0x116461e0 (15 bytes, 7 insns) */
void f_116461e0(void) {
  FTRACE(0x116461e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116461e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116461e1 mov ebp, esp */
  EBP = (ESP);
  /* 116461e3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 116461e5 call 0x1164b920 */
  push32(0x116461eau); f_1164b920();
  /* 116461ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116461ed pop ebp */
  EBP = (pop32());
  /* 116461ee ret  */
  ESPCHK(0x116461e0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x116461f0 (37 bytes, 16 insns) */
void f_116461f0(void) {
  FTRACE(0x116461f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116461f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116461f1 mov ebp, esp */
  EBP = (ESP);
L_116461f3:;
  /* 116461f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116461f6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116461f9 jae 0x11646213 */
  if (!C.cf) goto L_11646213;
  /* 116461fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116461fe cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646201 je 0x11646208 */
  if (C.zf) goto L_11646208;
  /* 11646203 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646206 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11646208u);
L_11646208:;
  /* 11646208 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164620b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164620e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11646211 jmp 0x116461f3 */
  goto L_116461f3;
L_11646213:;
  /* 11646213 pop ebp */
  EBP = (pop32());
  /* 11646214 ret  */
  ESPCHK(0x116461f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006220 @ 0x11646220 (130 bytes, 42 insns) */
void f_11646220(void) {
  FTRACE(0x11646220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11646220 push ebp */
  push32((uint32_t)(EBP));
  /* 11646221 mov ebp, esp */
  EBP = (ESP);
  /* 11646223 push ecx */
  push32((uint32_t)(ECX));
  /* 11646224 call 0x1164b7a0 */
  push32(0x11646229u); f_1164b7a0();
  /* 11646229 call dword ptr [0x116782a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782a4))), 0x1164622fu);
  /* 1164622f mov dword ptr [0x11673ba8], eax */
  w32((uint32_t)(0x11673ba8), (EAX));
  /* 11646234 cmp dword ptr [0x11673ba8], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11673ba8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164623b jne 0x11646241 */
  if (!C.zf) goto L_11646241;
  /* 1164623d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164623f jmp 0x1164629e */
  goto L_1164629e;
L_11646241:;
  /* 11646241 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11646243 push 0x11670580 */
  push32((uint32_t)(0x11670580u));
  /* 11646248 push 2 */
  push32((uint32_t)(0x2u));
  /* 1164624a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1164624c push 1 */
  push32((uint32_t)(0x1u));
  /* 1164624e call 0x11646cd0 */
  push32(0x11646253u); f_11646cd0();
  /* 11646253 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646256 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11646259 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164625d je 0x11646274 */
  if (C.zf) goto L_11646274;
  /* 1164625f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646262 push eax */
  push32((uint32_t)(EAX));
  /* 11646263 mov ecx, dword ptr [0x11673ba8] */
  ECX = (r32((uint32_t)(0x11673ba8)));
  /* 11646269 push ecx */
  push32((uint32_t)(ECX));
  /* 1164626a call dword ptr [0x1167837c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167837c))), 0x11646270u);
  /* 11646270 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11646272 jne 0x11646278 */
  if (!C.zf) goto L_11646278;
L_11646274:;
  /* 11646274 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11646276 jmp 0x1164629e */
  goto L_1164629e;
L_11646278:;
  /* 11646278 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164627b push edx */
  push32((uint32_t)(EDX));
  /* 1164627c call 0x116462e0 */
  push32(0x11646281u); f_116462e0();
  /* 11646281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646284 call dword ptr [0x11678378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678378))), 0x1164628au);
  /* 1164628a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164628d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1164628f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646292 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11646299 mov eax, 1 */
  EAX = (0x1u);
L_1164629e:;
  /* 1164629e mov esp, ebp */
  ESP = (EBP);
  /* 116462a0 pop ebp */
  EBP = (pop32());
  /* 116462a1 ret  */
  ESPCHK(0x11646220u, _esp0);
  ESP += 4; return;
}

/* FUN_100062b0 @ 0x116462b0 (41 bytes, 11 insns) */
void f_116462b0(void) {
  FTRACE(0x116462b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116462b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116462b1 mov ebp, esp */
  EBP = (ESP);
  /* 116462b3 call 0x1164b7e0 */
  push32(0x116462b8u); f_1164b7e0();
  /* 116462b8 cmp dword ptr [0x11673ba8], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11673ba8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116462bf je 0x116462d7 */
  if (C.zf) goto L_116462d7;
  /* 116462c1 mov eax, dword ptr [0x11673ba8] */
  EAX = (r32((uint32_t)(0x11673ba8)));
  /* 116462c6 push eax */
  push32((uint32_t)(EAX));
  /* 116462c7 call dword ptr [0x116782a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782a8))), 0x116462cdu);
  /* 116462cd mov dword ptr [0x11673ba8], 0xffffffff */
  w32((uint32_t)(0x11673ba8), (0xffffffffu));
L_116462d7:;
  /* 116462d7 pop ebp */
  EBP = (pop32());
  /* 116462d8 ret  */
  ESPCHK(0x116462b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062e0 @ 0x116462e0 (25 bytes, 8 insns) */
void f_116462e0(void) {
  FTRACE(0x116462e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116462e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116462e1 mov ebp, esp */
  EBP = (ESP);
  /* 116462e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116462e6 mov dword ptr [eax + 0x50], 0x11673fa0 */
  w32((uint32_t)(EAX + 0x50), (0x11673fa0u));
  /* 116462ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116462f0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 116462f7 pop ebp */
  EBP = (pop32());
  /* 116462f8 ret  */
  ESPCHK(0x116462e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006300 @ 0x11646300 (152 bytes, 48 insns) */
void f_11646300(void) {
  FTRACE(0x11646300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11646300 push ebp */
  push32((uint32_t)(EBP));
  /* 11646301 mov ebp, esp */
  EBP = (ESP);
  /* 11646303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11646306 call dword ptr [0x11678390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678390))), 0x1164630cu);
  /* 1164630c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1164630f mov eax, dword ptr [0x11673ba8] */
  EAX = (r32((uint32_t)(0x11673ba8)));
  /* 11646314 push eax */
  push32((uint32_t)(EAX));
  /* 11646315 call dword ptr [0x1167838c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167838c))), 0x1164631bu);
  /* 1164631b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164631e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646322 jne 0x11646387 */
  if (!C.zf) goto L_11646387;
  /* 11646324 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11646329 push 0x11670580 */
  push32((uint32_t)(0x11670580u));
  /* 1164632e push 2 */
  push32((uint32_t)(0x2u));
  /* 11646330 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11646332 push 1 */
  push32((uint32_t)(0x1u));
  /* 11646334 call 0x11646cd0 */
  push32(0x11646339u); f_11646cd0();
  /* 11646339 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164633c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164633f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646343 je 0x1164637d */
  if (C.zf) goto L_1164637d;
  /* 11646345 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646348 push ecx */
  push32((uint32_t)(ECX));
  /* 11646349 mov edx, dword ptr [0x11673ba8] */
  EDX = (r32((uint32_t)(0x11673ba8)));
  /* 1164634f push edx */
  push32((uint32_t)(EDX));
  /* 11646350 call dword ptr [0x1167837c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167837c))), 0x11646356u);
  /* 11646356 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11646358 je 0x1164637d */
  if (C.zf) goto L_1164637d;
  /* 1164635a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164635d push eax */
  push32((uint32_t)(EAX));
  /* 1164635e call 0x116462e0 */
  push32(0x11646363u); f_116462e0();
  /* 11646363 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646366 call dword ptr [0x11678378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678378))), 0x1164636cu);
  /* 1164636c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164636f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11646371 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646374 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1164637b jmp 0x11646387 */
  goto L_11646387;
L_1164637d:;
  /* 1164637d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1164637f call 0x11645030 */
  push32(0x11646384u); f_11645030();
  /* 11646384 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11646387:;
  /* 11646387 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164638a push eax */
  push32((uint32_t)(EAX));
  /* 1164638b call dword ptr [0x11678388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678388))), 0x11646391u);
  /* 11646391 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646394 mov esp, ebp */
  ESP = (EBP);
  /* 11646396 pop ebp */
  EBP = (pop32());
  /* 11646397 ret  */
  ESPCHK(0x11646300u, _esp0);
  ESP += 4; return;
}

/* FUN_100063a0 @ 0x116463a0 (263 bytes, 86 insns) */
void f_116463a0(void) {
  FTRACE(0x116463a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116463a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116463a1 mov ebp, esp */
  EBP = (ESP);
  /* 116463a3 cmp dword ptr [0x11673ba8], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11673ba8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116463aa je 0x116464a5 */
  if (C.zf) goto L_116464a5;
  /* 116463b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116463b4 jne 0x116463c5 */
  if (!C.zf) goto L_116463c5;
  /* 116463b6 mov eax, dword ptr [0x11673ba8] */
  EAX = (r32((uint32_t)(0x11673ba8)));
  /* 116463bb push eax */
  push32((uint32_t)(EAX));
  /* 116463bc call dword ptr [0x1167838c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167838c))), 0x116463c2u);
  /* 116463c2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_116463c5:;
  /* 116463c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116463c9 je 0x11646496 */
  if (C.zf) goto L_11646496;
  /* 116463cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116463d2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116463d6 je 0x116463e9 */
  if (C.zf) goto L_116463e9;
  /* 116463d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 116463da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116463dd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 116463e0 push eax */
  push32((uint32_t)(EAX));
  /* 116463e1 call 0x11647350 */
  push32(0x116463e6u); f_11647350();
  /* 116463e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116463e9:;
  /* 116463e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116463ec cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116463f0 je 0x11646403 */
  if (C.zf) goto L_11646403;
  /* 116463f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116463f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116463f7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 116463fa push eax */
  push32((uint32_t)(EAX));
  /* 116463fb call 0x11647350 */
  push32(0x11646400u); f_11647350();
  /* 11646400 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11646403:;
  /* 11646403 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646406 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164640a je 0x1164641d */
  if (C.zf) goto L_1164641d;
  /* 1164640c push 2 */
  push32((uint32_t)(0x2u));
  /* 1164640e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646411 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11646414 push eax */
  push32((uint32_t)(EAX));
  /* 11646415 call 0x11647350 */
  push32(0x1164641au); f_11647350();
  /* 1164641a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164641d:;
  /* 1164641d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646420 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646424 je 0x11646437 */
  if (C.zf) goto L_11646437;
  /* 11646426 push 2 */
  push32((uint32_t)(0x2u));
  /* 11646428 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164642b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1164642e push eax */
  push32((uint32_t)(EAX));
  /* 1164642f call 0x11647350 */
  push32(0x11646434u); f_11647350();
  /* 11646434 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11646437:;
  /* 11646437 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164643a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164643e je 0x11646451 */
  if (C.zf) goto L_11646451;
  /* 11646440 push 2 */
  push32((uint32_t)(0x2u));
  /* 11646442 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646445 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11646448 push eax */
  push32((uint32_t)(EAX));
  /* 11646449 call 0x11647350 */
  push32(0x1164644eu); f_11647350();
  /* 1164644e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11646451:;
  /* 11646451 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646454 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646458 je 0x1164646b */
  if (C.zf) goto L_1164646b;
  /* 1164645a push 2 */
  push32((uint32_t)(0x2u));
  /* 1164645c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164645f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11646462 push eax */
  push32((uint32_t)(EAX));
  /* 11646463 call 0x11647350 */
  push32(0x11646468u); f_11647350();
  /* 11646468 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164646b:;
  /* 1164646b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164646e cmp dword ptr [ecx + 0x50], 0x11673fa0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x11673fa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646475 je 0x11646488 */
  if (C.zf) goto L_11646488;
  /* 11646477 push 2 */
  push32((uint32_t)(0x2u));
  /* 11646479 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164647c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1164647f push eax */
  push32((uint32_t)(EAX));
  /* 11646480 call 0x11647350 */
  push32(0x11646485u); f_11647350();
  /* 11646485 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11646488:;
  /* 11646488 push 2 */
  push32((uint32_t)(0x2u));
  /* 1164648a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164648d push ecx */
  push32((uint32_t)(ECX));
  /* 1164648e call 0x11647350 */
  push32(0x11646493u); f_11647350();
  /* 11646493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11646496:;
  /* 11646496 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646498 mov edx, dword ptr [0x11673ba8] */
  EDX = (r32((uint32_t)(0x11673ba8)));
  /* 1164649e push edx */
  push32((uint32_t)(EDX));
  /* 1164649f call dword ptr [0x1167837c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167837c))), 0x116464a5u);
L_116464a5:;
  /* 116464a5 pop ebp */
  EBP = (pop32());
  /* 116464a6 ret  */
  ESPCHK(0x116463a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064b0 @ 0x116464b0 (11 bytes, 5 insns) */
void f_116464b0(void) {
  FTRACE(0x116464b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116464b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116464b1 mov ebp, esp */
  EBP = (ESP);
  /* 116464b3 call dword ptr [0x11678378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678378))), 0x116464b9u);
  /* 116464b9 pop ebp */
  EBP = (pop32());
  /* 116464ba ret  */
  ESPCHK(0x116464b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064c0 @ 0x116464c0 (11 bytes, 5 insns) */
void f_116464c0(void) {
  FTRACE(0x116464c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116464c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116464c1 mov ebp, esp */
  EBP = (ESP);
  /* 116464c3 call dword ptr [0x11678394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678394))), 0x116464c9u);
  /* 116464c9 pop ebp */
  EBP = (pop32());
  /* 116464ca ret  */
  ESPCHK(0x116464c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064d0 @ 0x116464d0 (804 bytes, 236 insns) */
void f_116464d0(void) {
  FTRACE(0x116464d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116464d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116464d1 mov ebp, esp */
  EBP = (ESP);
  /* 116464d3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116464d6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 116464db push 0x1167058c */
  push32((uint32_t)(0x1167058cu));
  /* 116464e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 116464e2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 116464e7 call 0x116468c0 */
  push32(0x116464ecu); f_116468c0();
  /* 116464ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116464ef mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 116464f2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116464f6 jne 0x11646502 */
  if (!C.zf) goto L_11646502;
  /* 116464f8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 116464fa call 0x11645030 */
  push32(0x116464ffu); f_11645030();
  /* 116464ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11646502:;
  /* 11646502 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11646505 mov dword ptr [0x11677980], eax */
  w32((uint32_t)(0x11677980), (EAX));
  /* 1164650a mov dword ptr [0x11677abc], 0x20 */
  w32((uint32_t)(0x11677abc), (0x20u));
  /* 11646514 jmp 0x1164651f */
  goto L_1164651f;
L_11646516:;
  /* 11646516 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11646519 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164651c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1164651f:;
  /* 1164651f mov edx, dword ptr [0x11677980] */
  EDX = (r32((uint32_t)(0x11677980)));
  /* 11646525 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164652b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164652e jae 0x11646553 */
  if (!C.cf) goto L_11646553;
  /* 11646530 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11646533 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11646537 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1164653a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11646540 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11646543 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11646547 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1164654a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11646551 jmp 0x11646516 */
  goto L_11646516;
L_11646553:;
  /* 11646553 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11646556 push ecx */
  push32((uint32_t)(ECX));
  /* 11646557 call dword ptr [0x116783a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783a0))), 0x1164655du);
  /* 1164655d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11646560 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11646566 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11646568 je 0x116466f5 */
  if (C.zf) goto L_116466f5;
  /* 1164656e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646572 je 0x116466f5 */
  if (C.zf) goto L_116466f5;
  /* 11646578 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164657b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1164657d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11646580 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11646583 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646586 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11646589 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164658c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164658f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11646592 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646599 jge 0x116465a3 */
  if ((C.sf==C.of)) goto L_116465a3;
  /* 1164659b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1164659e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 116465a1 jmp 0x116465aa */
  goto L_116465aa;
L_116465a3:;
  /* 116465a3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_116465aa:;
  /* 116465aa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 116465ad mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 116465b0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 116465b7 jmp 0x116465c2 */
  goto L_116465c2;
L_116465b9:;
  /* 116465b9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 116465bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116465bf mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_116465c2:;
  /* 116465c2 mov ecx, dword ptr [0x11677abc] */
  ECX = (r32((uint32_t)(0x11677abc)));
  /* 116465c8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116465cb jge 0x11646662 */
  if ((C.sf==C.of)) goto L_11646662;
  /* 116465d1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 116465d6 push 0x1167058c */
  push32((uint32_t)(0x1167058cu));
  /* 116465db push 2 */
  push32((uint32_t)(0x2u));
  /* 116465dd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 116465e2 call 0x116468c0 */
  push32(0x116465e7u); f_116468c0();
  /* 116465e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116465ea mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 116465ed cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116465f1 jne 0x116465fe */
  if (!C.zf) goto L_116465fe;
  /* 116465f3 mov edx, dword ptr [0x11677abc] */
  EDX = (r32((uint32_t)(0x11677abc)));
  /* 116465f9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 116465fc jmp 0x11646662 */
  goto L_11646662;
L_116465fe:;
  /* 116465fe mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11646601 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11646604 mov dword ptr [eax*4 + 0x11677980], ecx */
  w32((uint32_t)(EAX*4 + 0x11677980), (ECX));
  /* 1164660b mov edx, dword ptr [0x11677abc] */
  EDX = (r32((uint32_t)(0x11677abc)));
  /* 11646611 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646614 mov dword ptr [0x11677abc], edx */
  w32((uint32_t)(0x11677abc), (EDX));
  /* 1164661a jmp 0x11646625 */
  goto L_11646625;
L_1164661c:;
  /* 1164661c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1164661f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646622 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11646625:;
  /* 11646625 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11646628 mov edx, dword ptr [ecx*4 + 0x11677980] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11677980)));
  /* 1164662f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646635 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646638 jae 0x1164665d */
  if (!C.cf) goto L_1164665d;
  /* 1164663a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1164663d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11646641 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11646644 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1164664a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1164664d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11646651 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11646654 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1164665b jmp 0x1164661c */
  goto L_1164661c;
L_1164665d:;
  /* 1164665d jmp 0x116465b9 */
  goto L_116465b9;
L_11646662:;
  /* 11646662 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11646669 jmp 0x11646686 */
  goto L_11646686;
L_1164666b:;
  /* 1164666b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1164666e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646671 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11646674 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646677 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164667a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1164667d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11646680 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646683 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11646686:;
  /* 11646686 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11646689 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164668c jge 0x116466f5 */
  if ((C.sf==C.of)) goto L_116466f5;
  /* 1164668e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11646691 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646694 je 0x116466f0 */
  if (C.zf) goto L_116466f0;
  /* 11646696 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646699 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1164669c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1164669f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116466a1 je 0x116466f0 */
  if (C.zf) goto L_116466f0;
  /* 116466a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116466a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116466a9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 116466ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116466ae jne 0x116466c0 */
  if (!C.zf) goto L_116466c0;
  /* 116466b0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 116466b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116466b5 push edx */
  push32((uint32_t)(EDX));
  /* 116466b6 call dword ptr [0x1167839c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167839c))), 0x116466bcu);
  /* 116466bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116466be je 0x116466f0 */
  if (C.zf) goto L_116466f0;
L_116466c0:;
  /* 116466c0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 116466c3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116466c6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 116466c9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116466cc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116466cf mov edx, dword ptr [eax*4 + 0x11677980] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11677980)));
  /* 116466d6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116466d8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 116466db mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116466de mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 116466e1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116466e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116466e5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116466e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116466eb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116466ed mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_116466f0:;
  /* 116466f0 jmp 0x1164666b */
  goto L_1164666b;
L_116466f5:;
  /* 116466f5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 116466fc jmp 0x11646707 */
  goto L_11646707;
L_116466fe:;
  /* 116466fe mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11646701 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646704 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11646707:;
  /* 11646707 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164670b jge 0x116467e4 */
  if ((C.sf==C.of)) goto L_116467e4;
  /* 11646711 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11646714 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11646717 mov edx, dword ptr [0x11677980] */
  EDX = (r32((uint32_t)(0x11677980)));
  /* 1164671d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164671f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11646722 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11646725 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646728 jne 0x116467d0 */
  if (!C.zf) goto L_116467d0;
  /* 1164672e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11646731 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11646735 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646739 jne 0x11646744 */
  if (!C.zf) goto L_11646744;
  /* 1164673b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11646742 jmp 0x11646754 */
  goto L_11646754;
L_11646744:;
  /* 11646744 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11646747 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164674a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1164674c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164674e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646751 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11646754:;
  /* 11646754 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11646757 push eax */
  push32((uint32_t)(EAX));
  /* 11646758 call dword ptr [0x11678348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678348))), 0x1164675eu);
  /* 1164675e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11646761 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646765 je 0x116467bf */
  if (C.zf) goto L_116467bf;
  /* 11646767 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1164676a push ecx */
  push32((uint32_t)(ECX));
  /* 1164676b call dword ptr [0x1167839c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167839c))), 0x11646771u);
  /* 11646771 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11646774 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646778 je 0x116467bf */
  if (C.zf) goto L_116467bf;
  /* 1164677a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1164677d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11646780 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11646782 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11646785 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1164678b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164678e jne 0x116467a0 */
  if (!C.zf) goto L_116467a0;
  /* 11646790 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11646793 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11646796 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11646798 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1164679b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1164679e jmp 0x116467bd */
  goto L_116467bd;
L_116467a0:;
  /* 116467a0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 116467a3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116467a9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116467ac jne 0x116467bd */
  if (!C.zf) goto L_116467bd;
  /* 116467ae mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116467b1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116467b4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 116467b7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 116467ba mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_116467bd:;
  /* 116467bd jmp 0x116467ce */
  goto L_116467ce;
L_116467bf:;
  /* 116467bf mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116467c2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116467c5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 116467c8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 116467cb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_116467ce:;
  /* 116467ce jmp 0x116467df */
  goto L_116467df;
L_116467d0:;
  /* 116467d0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116467d3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116467d6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 116467d9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 116467dc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_116467df:;
  /* 116467df jmp 0x116466fe */
  goto L_116466fe;
L_116467e4:;
  /* 116467e4 mov eax, dword ptr [0x11677abc] */
  EAX = (r32((uint32_t)(0x11677abc)));
  /* 116467e9 push eax */
  push32((uint32_t)(EAX));
  /* 116467ea call dword ptr [0x11678398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678398))), 0x116467f0u);
  /* 116467f0 mov esp, ebp */
  ESP = (EBP);
  /* 116467f2 pop ebp */
  EBP = (pop32());
  /* 116467f3 ret  */
  ESPCHK(0x116464d0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11646800 (155 bytes, 45 insns) */
void f_11646800(void) {
  FTRACE(0x11646800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11646800 push ebp */
  push32((uint32_t)(EBP));
  /* 11646801 mov ebp, esp */
  EBP = (ESP);
  /* 11646803 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11646806 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1164680d jmp 0x11646818 */
  goto L_11646818;
L_1164680f:;
  /* 1164680f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11646812 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646815 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11646818:;
  /* 11646818 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164681c jge 0x11646897 */
  if ((C.sf==C.of)) goto L_11646897;
  /* 1164681e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11646821 cmp dword ptr [ecx*4 + 0x11677980], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11677980))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646829 je 0x11646892 */
  if (C.zf) goto L_11646892;
  /* 1164682b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164682e mov eax, dword ptr [edx*4 + 0x11677980] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11677980)));
  /* 11646835 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11646838 jmp 0x11646843 */
  goto L_11646843;
L_1164683a:;
  /* 1164683a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164683d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646840 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11646843:;
  /* 11646843 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11646846 mov eax, dword ptr [edx*4 + 0x11677980] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11677980)));
  /* 1164684d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646852 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646855 jae 0x1164686f */
  if (!C.cf) goto L_1164686f;
  /* 11646857 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164685a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164685e je 0x1164686d */
  if (C.zf) goto L_1164686d;
  /* 11646860 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646863 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646866 push edx */
  push32((uint32_t)(EDX));
  /* 11646867 call dword ptr [0x116783a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783a4))), 0x1164686du);
L_1164686d:;
  /* 1164686d jmp 0x1164683a */
  goto L_1164683a;
L_1164686f:;
  /* 1164686f push 2 */
  push32((uint32_t)(0x2u));
  /* 11646871 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11646874 mov ecx, dword ptr [eax*4 + 0x11677980] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11677980)));
  /* 1164687b push ecx */
  push32((uint32_t)(ECX));
  /* 1164687c call 0x11647350 */
  push32(0x11646881u); f_11647350();
  /* 11646881 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646884 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11646887 mov dword ptr [edx*4 + 0x11677980], 0 */
  w32((uint32_t)(EDX*4 + 0x11677980), (0x0u));
L_11646892:;
  /* 11646892 jmp 0x1164680f */
  goto L_1164680f;
L_11646897:;
  /* 11646897 mov esp, ebp */
  ESP = (EBP);
  /* 11646899 pop ebp */
  EBP = (pop32());
  /* 1164689a ret  */
  ESPCHK(0x11646800u, _esp0);
  ESP += 4; return;
}

/* FUN_100068a0 @ 0x116468a0 (29 bytes, 13 insns) */
void f_116468a0(void) {
  FTRACE(0x116468a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116468a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116468a1 mov ebp, esp */
  EBP = (ESP);
  /* 116468a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116468a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116468a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 116468a9 mov eax, dword ptr [0x11676190] */
  EAX = (r32((uint32_t)(0x11676190)));
  /* 116468ae push eax */
  push32((uint32_t)(EAX));
  /* 116468af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116468b2 push ecx */
  push32((uint32_t)(ECX));
  /* 116468b3 call 0x11646910 */
  push32(0x116468b8u); f_11646910();
  /* 116468b8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116468bb pop ebp */
  EBP = (pop32());
  /* 116468bc ret  */
  ESPCHK(0x116468a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068c0 @ 0x116468c0 (35 bytes, 16 insns) */
void f_116468c0(void) {
  FTRACE(0x116468c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116468c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116468c1 mov ebp, esp */
  EBP = (ESP);
  /* 116468c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116468c6 push eax */
  push32((uint32_t)(EAX));
  /* 116468c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116468ca push ecx */
  push32((uint32_t)(ECX));
  /* 116468cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116468ce push edx */
  push32((uint32_t)(EDX));
  /* 116468cf mov eax, dword ptr [0x11676190] */
  EAX = (r32((uint32_t)(0x11676190)));
  /* 116468d4 push eax */
  push32((uint32_t)(EAX));
  /* 116468d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116468d8 push ecx */
  push32((uint32_t)(ECX));
  /* 116468d9 call 0x11646910 */
  push32(0x116468deu); f_11646910();
  /* 116468de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116468e1 pop ebp */
  EBP = (pop32());
  /* 116468e2 ret  */
  ESPCHK(0x116468c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068f0 @ 0x116468f0 (27 bytes, 13 insns) */
void f_116468f0(void) {
  FTRACE(0x116468f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116468f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116468f1 mov ebp, esp */
  EBP = (ESP);
  /* 116468f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116468f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116468f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 116468f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116468fc push eax */
  push32((uint32_t)(EAX));
  /* 116468fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646900 push ecx */
  push32((uint32_t)(ECX));
  /* 11646901 call 0x11646910 */
  push32(0x11646906u); f_11646910();
  /* 11646906 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646909 pop ebp */
  EBP = (pop32());
  /* 1164690a ret  */
  ESPCHK(0x116468f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006910 @ 0x11646910 (94 bytes, 38 insns) */
void f_11646910(void) {
  FTRACE(0x11646910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11646910 push ebp */
  push32((uint32_t)(EBP));
  /* 11646911 mov ebp, esp */
  EBP = (ESP);
  /* 11646913 push ecx */
  push32((uint32_t)(ECX));
L_11646914:;
  /* 11646914 push 9 */
  push32((uint32_t)(0x9u));
  /* 11646916 call 0x1164b880 */
  push32(0x1164691bu); f_1164b880();
  /* 1164691b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164691e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11646921 push eax */
  push32((uint32_t)(EAX));
  /* 11646922 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11646925 push ecx */
  push32((uint32_t)(ECX));
  /* 11646926 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11646929 push edx */
  push32((uint32_t)(EDX));
  /* 1164692a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164692d push eax */
  push32((uint32_t)(EAX));
  /* 1164692e call 0x11646990 */
  push32(0x11646933u); f_11646990();
  /* 11646933 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646936 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11646939 push 9 */
  push32((uint32_t)(0x9u));
  /* 1164693b call 0x1164b920 */
  push32(0x11646940u); f_1164b920();
  /* 11646940 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646943 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646947 jne 0x1164694f */
  if (!C.zf) goto L_1164694f;
  /* 11646949 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164694d jne 0x11646954 */
  if (!C.zf) goto L_11646954;
L_1164694f:;
  /* 1164694f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646952 jmp 0x1164696a */
  goto L_1164696a;
L_11646954:;
  /* 11646954 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646957 push ecx */
  push32((uint32_t)(ECX));
  /* 11646958 call 0x1164bbc0 */
  push32(0x1164695du); f_1164bbc0();
  /* 1164695d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646960 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11646962 jne 0x11646968 */
  if (!C.zf) goto L_11646968;
  /* 11646964 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11646966 jmp 0x1164696a */
  goto L_1164696a;
L_11646968:;
  /* 11646968 jmp 0x11646914 */
  goto L_11646914;
L_1164696a:;
  /* 1164696a mov esp, ebp */
  ESP = (EBP);
  /* 1164696c pop ebp */
  EBP = (pop32());
  /* 1164696d ret  */
  ESPCHK(0x11646910u, _esp0);
  ESP += 4; return;
}

/* FUN_10006970 @ 0x11646970 (23 bytes, 11 insns) */
void f_11646970(void) {
  FTRACE(0x11646970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11646970 push ebp */
  push32((uint32_t)(EBP));
  /* 11646971 mov ebp, esp */
  EBP = (ESP);
  /* 11646973 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646975 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646977 push 1 */
  push32((uint32_t)(0x1u));
  /* 11646979 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164697c push eax */
  push32((uint32_t)(EAX));
  /* 1164697d call 0x11646990 */
  push32(0x11646982u); f_11646990();
  /* 11646982 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646985 pop ebp */
  EBP = (pop32());
  /* 11646986 ret  */
  ESPCHK(0x11646970u, _esp0);
  ESP += 4; return;
}

/* FUN_10006990 @ 0x11646990 (787 bytes, 254 insns) */
void f_11646990(void) {
  FTRACE(0x11646990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11646990 push ebp */
  push32((uint32_t)(EBP));
  /* 11646991 mov ebp, esp */
  EBP = (ESP);
  /* 11646993 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11646996 push ebx */
  push32((uint32_t)(EBX));
  /* 11646997 push esi */
  push32((uint32_t)(ESI));
  /* 11646998 push edi */
  push32((uint32_t)(EDI));
  /* 11646999 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116469a0 mov eax, dword ptr [0x11673bd4] */
  EAX = (r32((uint32_t)(0x11673bd4)));
  /* 116469a5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116469a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116469aa je 0x116469dc */
  if (C.zf) goto L_116469dc;
L_116469ac:;
  /* 116469ac call 0x11647a60 */
  push32(0x116469b1u); f_11647a60();
  /* 116469b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116469b3 jne 0x116469d6 */
  if (!C.zf) goto L_116469d6;
  /* 116469b5 push 0x11670680 */
  push32((uint32_t)(0x11670680u));
  /* 116469ba push 0 */
  push32((uint32_t)(0x0u));
  /* 116469bc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 116469c1 push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 116469c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 116469c8 call 0x11645180 */
  push32(0x116469cdu); f_11645180();
  /* 116469cd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116469d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116469d3 jne 0x116469d6 */
  if (!C.zf) goto L_116469d6;
  /* 116469d5 int3  */
  x86_unimpl("int3 @ 0x116469d5");
L_116469d6:;
  /* 116469d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116469d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116469da jne 0x116469ac */
  if (!C.zf) goto L_116469ac;
L_116469dc:;
  /* 116469dc mov edx, dword ptr [0x11673bd8] */
  EDX = (r32((uint32_t)(0x11673bd8)));
  /* 116469e2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116469e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116469e8 cmp eax, dword ptr [0x11673bdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11673bdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116469ee jne 0x116469f1 */
  if (!C.zf) goto L_116469f1;
  /* 116469f0 int3  */
  x86_unimpl("int3 @ 0x116469f0");
L_116469f1:;
  /* 116469f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116469f4 push ecx */
  push32((uint32_t)(ECX));
  /* 116469f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116469f8 push edx */
  push32((uint32_t)(EDX));
  /* 116469f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116469fc push eax */
  push32((uint32_t)(EAX));
  /* 116469fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11646a00 push ecx */
  push32((uint32_t)(ECX));
  /* 11646a01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646a04 push edx */
  push32((uint32_t)(EDX));
  /* 11646a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646a07 push 1 */
  push32((uint32_t)(0x1u));
  /* 11646a09 call dword ptr [0x11674028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11674028))), 0x11646a0fu);
  /* 11646a0f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646a12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11646a14 jne 0x11646a74 */
  if (!C.zf) goto L_11646a74;
  /* 11646a16 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646a1a je 0x11646a47 */
  if (C.zf) goto L_11646a47;
L_11646a1c:;
  /* 11646a1c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11646a1f push eax */
  push32((uint32_t)(EAX));
  /* 11646a20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11646a23 push ecx */
  push32((uint32_t)(ECX));
  /* 11646a24 push 0x1167063c */
  push32((uint32_t)(0x1167063cu));
  /* 11646a29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646a2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11646a2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11646a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11646a31 call 0x11645180 */
  push32(0x11646a36u); f_11645180();
  /* 11646a36 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646a39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646a3c jne 0x11646a3f */
  if (!C.zf) goto L_11646a3f;
  /* 11646a3e int3  */
  x86_unimpl("int3 @ 0x11646a3e");
L_11646a3f:;
  /* 11646a3f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11646a41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11646a43 jne 0x11646a1c */
  if (!C.zf) goto L_11646a1c;
  /* 11646a45 jmp 0x11646a6d */
  goto L_11646a6d;
L_11646a47:;
  /* 11646a47 push 0x11670618 */
  push32((uint32_t)(0x11670618u));
  /* 11646a4c push 0x11670614 */
  push32((uint32_t)(0x11670614u));
  /* 11646a51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646a57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646a59 call 0x11645180 */
  push32(0x11646a5eu); f_11645180();
  /* 11646a5e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646a61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646a64 jne 0x11646a67 */
  if (!C.zf) goto L_11646a67;
  /* 11646a66 int3  */
  x86_unimpl("int3 @ 0x11646a66");
L_11646a67:;
  /* 11646a67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11646a69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11646a6b jne 0x11646a47 */
  if (!C.zf) goto L_11646a47;
L_11646a6d:;
  /* 11646a6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11646a6f jmp 0x11646c9c */
  goto L_11646c9c;
L_11646a74:;
  /* 11646a74 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11646a77 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11646a7d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646a80 je 0x11646a96 */
  if (C.zf) goto L_11646a96;
  /* 11646a82 mov edx, dword ptr [0x11673bd4] */
  EDX = (r32((uint32_t)(0x11673bd4)));
  /* 11646a88 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11646a8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11646a8d jne 0x11646a96 */
  if (!C.zf) goto L_11646a96;
  /* 11646a8f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11646a96:;
  /* 11646a96 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646a9a ja 0x11646aa7 */
  if ((!C.cf&&!C.zf)) goto L_11646aa7;
  /* 11646a9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646a9f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646aa2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646aa5 jbe 0x11646ad3 */
  if ((C.cf||C.zf)) goto L_11646ad3;
L_11646aa7:;
  /* 11646aa7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646aaa push ecx */
  push32((uint32_t)(ECX));
  /* 11646aab push 0x116705f0 */
  push32((uint32_t)(0x116705f0u));
  /* 11646ab0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646ab2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646ab4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646ab6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11646ab8 call 0x11645180 */
  push32(0x11646abdu); f_11645180();
  /* 11646abd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646ac0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646ac3 jne 0x11646ac6 */
  if (!C.zf) goto L_11646ac6;
  /* 11646ac5 int3  */
  x86_unimpl("int3 @ 0x11646ac5");
L_11646ac6:;
  /* 11646ac6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11646ac8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11646aca jne 0x11646aa7 */
  if (!C.zf) goto L_11646aa7;
  /* 11646acc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11646ace jmp 0x11646c9c */
  goto L_11646c9c;
L_11646ad3:;
  /* 11646ad3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11646ad6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11646adb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646ade je 0x11646b20 */
  if (C.zf) goto L_11646b20;
  /* 11646ae0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646ae4 je 0x11646b20 */
  if (C.zf) goto L_11646b20;
  /* 11646ae6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11646ae9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11646aef cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646af2 je 0x11646b20 */
  if (C.zf) goto L_11646b20;
  /* 11646af4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646af8 je 0x11646b20 */
  if (C.zf) goto L_11646b20;
L_11646afa:;
  /* 11646afa push 0x116705bc */
  push32((uint32_t)(0x116705bcu));
  /* 11646aff push 0x11670614 */
  push32((uint32_t)(0x11670614u));
  /* 11646b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646b0a push 1 */
  push32((uint32_t)(0x1u));
  /* 11646b0c call 0x11645180 */
  push32(0x11646b11u); f_11645180();
  /* 11646b11 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646b14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646b17 jne 0x11646b1a */
  if (!C.zf) goto L_11646b1a;
  /* 11646b19 int3  */
  x86_unimpl("int3 @ 0x11646b19");
L_11646b1a:;
  /* 11646b1a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11646b1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11646b1e jne 0x11646afa */
  if (!C.zf) goto L_11646afa;
L_11646b20:;
  /* 11646b20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646b23 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646b26 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11646b29 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11646b2c push ecx */
  push32((uint32_t)(ECX));
  /* 11646b2d call 0x1164bc70 */
  push32(0x11646b32u); f_1164bc70();
  /* 11646b32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646b35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11646b38 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646b3c jne 0x11646b45 */
  if (!C.zf) goto L_11646b45;
  /* 11646b3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11646b40 jmp 0x11646c9c */
  goto L_11646c9c;
L_11646b45:;
  /* 11646b45 mov edx, dword ptr [0x11673bd8] */
  EDX = (r32((uint32_t)(0x11673bd8)));
  /* 11646b4b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646b4e mov dword ptr [0x11673bd8], edx */
  w32((uint32_t)(0x11673bd8), (EDX));
  /* 11646b54 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646b58 je 0x11646ba3 */
  if (C.zf) goto L_11646ba3;
  /* 11646b5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646b5d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11646b63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646b66 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11646b6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646b70 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11646b77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646b7a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11646b81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646b84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646b87 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11646b8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646b8d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11646b94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646b97 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 11646b9e jmp 0x11646c43 */
  goto L_11646c43;
L_11646ba3:;
  /* 11646ba3 mov edx, dword ptr [0x11675ff0] */
  EDX = (r32((uint32_t)(0x11675ff0)));
  /* 11646ba9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646bac mov dword ptr [0x11675ff0], edx */
  w32((uint32_t)(0x11675ff0), (EDX));
  /* 11646bb2 mov eax, dword ptr [0x11675ff8] */
  EAX = (r32((uint32_t)(0x11675ff8)));
  /* 11646bb7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646bba mov dword ptr [0x11675ff8], eax */
  w32((uint32_t)(0x11675ff8), (EAX));
  /* 11646bbf mov ecx, dword ptr [0x11675ff8] */
  ECX = (r32((uint32_t)(0x11675ff8)));
  /* 11646bc5 cmp ecx, dword ptr [0x11675ffc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11675ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646bcb jbe 0x11646bd9 */
  if ((C.cf||C.zf)) goto L_11646bd9;
  /* 11646bcd mov edx, dword ptr [0x11675ff8] */
  EDX = (r32((uint32_t)(0x11675ff8)));
  /* 11646bd3 mov dword ptr [0x11675ffc], edx */
  w32((uint32_t)(0x11675ffc), (EDX));
L_11646bd9:;
  /* 11646bd9 cmp dword ptr [0x11675ff4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11675ff4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646be0 je 0x11646bef */
  if (C.zf) goto L_11646bef;
  /* 11646be2 mov eax, dword ptr [0x11675ff4] */
  EAX = (r32((uint32_t)(0x11675ff4)));
  /* 11646be7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646bea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11646bed jmp 0x11646bf8 */
  goto L_11646bf8;
L_11646bef:;
  /* 11646bef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646bf2 mov dword ptr [0x11675fec], edx */
  w32((uint32_t)(0x11675fec), (EDX));
L_11646bf8:;
  /* 11646bf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646bfb mov ecx, dword ptr [0x11675ff4] */
  ECX = (r32((uint32_t)(0x11675ff4)));
  /* 11646c01 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11646c03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646c06 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11646c0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646c10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11646c13 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11646c16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646c19 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11646c1c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 11646c1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646c22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646c25 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11646c28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646c2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11646c2e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11646c31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646c34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11646c37 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 11646c3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646c3d mov dword ptr [0x11675ff4], ecx */
  w32((uint32_t)(0x11675ff4), (ECX));
L_11646c43:;
  /* 11646c43 push 4 */
  push32((uint32_t)(0x4u));
  /* 11646c45 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11646c47 mov dl, byte ptr [0x11673be0] */
  DL = (r8((uint32_t)(0x11673be0)));
  /* 11646c4d push edx */
  push32((uint32_t)(EDX));
  /* 11646c4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646c51 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646c54 push eax */
  push32((uint32_t)(EAX));
  /* 11646c55 call 0x1164b3f0 */
  push32(0x11646c5au); f_1164b3f0();
  /* 11646c5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646c5d push 4 */
  push32((uint32_t)(0x4u));
  /* 11646c5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11646c61 mov cl, byte ptr [0x11673be0] */
  CL = (r8((uint32_t)(0x11673be0)));
  /* 11646c67 push ecx */
  push32((uint32_t)(ECX));
  /* 11646c68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646c6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646c6e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11646c72 push ecx */
  push32((uint32_t)(ECX));
  /* 11646c73 call 0x1164b3f0 */
  push32(0x11646c78u); f_1164b3f0();
  /* 11646c78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646c7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646c7e push edx */
  push32((uint32_t)(EDX));
  /* 11646c7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11646c81 mov al, byte ptr [0x11673be2] */
  AL = (r8((uint32_t)(0x11673be2)));
  /* 11646c86 push eax */
  push32((uint32_t)(EAX));
  /* 11646c87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646c8a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646c8d push ecx */
  push32((uint32_t)(ECX));
  /* 11646c8e call 0x1164b3f0 */
  push32(0x11646c93u); f_1164b3f0();
  /* 11646c93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646c96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646c99 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11646c9c:;
  /* 11646c9c pop edi */
  EDI = (pop32());
  /* 11646c9d pop esi */
  ESI = (pop32());
  /* 11646c9e pop ebx */
  EBX = (pop32());
  /* 11646c9f mov esp, ebp */
  ESP = (EBP);
  /* 11646ca1 pop ebp */
  EBP = (pop32());
  /* 11646ca2 ret  */
  ESPCHK(0x11646990u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cb0 @ 0x11646cb0 (27 bytes, 13 insns) */
void f_11646cb0(void) {
  FTRACE(0x11646cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11646cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11646cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11646cb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646cb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646cb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11646cb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11646cbc push eax */
  push32((uint32_t)(EAX));
  /* 11646cbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646cc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11646cc1 call 0x11646cd0 */
  push32(0x11646cc6u); f_11646cd0();
  /* 11646cc6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646cc9 pop ebp */
  EBP = (pop32());
  /* 11646cca ret  */
  ESPCHK(0x11646cb0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11646cd0 (96 bytes, 37 insns) */
void f_11646cd0(void) {
  FTRACE(0x11646cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11646cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11646cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11646cd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11646cd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11646cd9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11646cdd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11646ce0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11646ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 11646ce4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11646ce7 push edx */
  push32((uint32_t)(EDX));
  /* 11646ce8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11646ceb push eax */
  push32((uint32_t)(EAX));
  /* 11646cec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11646cef push ecx */
  push32((uint32_t)(ECX));
  /* 11646cf0 call 0x116468c0 */
  push32(0x11646cf5u); f_116468c0();
  /* 11646cf5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646cf8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11646cfb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646cff je 0x11646d29 */
  if (C.zf) goto L_11646d29;
  /* 11646d01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11646d04 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11646d07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11646d0a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646d0d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11646d10:;
  /* 11646d10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11646d13 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646d16 jae 0x11646d29 */
  if (!C.cf) goto L_11646d29;
  /* 11646d18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11646d1b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11646d1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11646d21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11646d24 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11646d27 jmp 0x11646d10 */
  goto L_11646d10;
L_11646d29:;
  /* 11646d29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11646d2c mov esp, ebp */
  ESP = (EBP);
  /* 11646d2e pop ebp */
  EBP = (pop32());
  /* 11646d2f ret  */
  ESPCHK(0x11646cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d30 @ 0x11646d30 (27 bytes, 13 insns) */
void f_11646d30(void) {
  FTRACE(0x11646d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11646d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11646d31 mov ebp, esp */
  EBP = (ESP);
  /* 11646d33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646d35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646d37 push 1 */
  push32((uint32_t)(0x1u));
  /* 11646d39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11646d3c push eax */
  push32((uint32_t)(EAX));
  /* 11646d3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646d40 push ecx */
  push32((uint32_t)(ECX));
  /* 11646d41 call 0x11646d50 */
  push32(0x11646d46u); f_11646d50();
  /* 11646d46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646d49 pop ebp */
  EBP = (pop32());
  /* 11646d4a ret  */
  ESPCHK(0x11646d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d50 @ 0x11646d50 (64 bytes, 27 insns) */
void f_11646d50(void) {
  FTRACE(0x11646d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11646d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11646d51 mov ebp, esp */
  EBP = (ESP);
  /* 11646d53 push ecx */
  push32((uint32_t)(ECX));
  /* 11646d54 push 9 */
  push32((uint32_t)(0x9u));
  /* 11646d56 call 0x1164b880 */
  push32(0x11646d5bu); f_1164b880();
  /* 11646d5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646d5e push 1 */
  push32((uint32_t)(0x1u));
  /* 11646d60 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11646d63 push eax */
  push32((uint32_t)(EAX));
  /* 11646d64 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11646d67 push ecx */
  push32((uint32_t)(ECX));
  /* 11646d68 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11646d6b push edx */
  push32((uint32_t)(EDX));
  /* 11646d6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11646d6f push eax */
  push32((uint32_t)(EAX));
  /* 11646d70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646d73 push ecx */
  push32((uint32_t)(ECX));
  /* 11646d74 call 0x11646d90 */
  push32(0x11646d79u); f_11646d90();
  /* 11646d79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646d7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11646d7f push 9 */
  push32((uint32_t)(0x9u));
  /* 11646d81 call 0x1164b920 */
  push32(0x11646d86u); f_1164b920();
  /* 11646d86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646d89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11646d8c mov esp, ebp */
  ESP = (EBP);
  /* 11646d8e pop ebp */
  EBP = (pop32());
  /* 11646d8f ret  */
  ESPCHK(0x11646d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d90 @ 0x11646d90 (1297 bytes, 431 insns) */
void f_11646d90(void) {
  FTRACE(0x11646d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11646d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11646d91 mov ebp, esp */
  EBP = (ESP);
  /* 11646d93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11646d96 push ebx */
  push32((uint32_t)(EBX));
  /* 11646d97 push esi */
  push32((uint32_t)(ESI));
  /* 11646d98 push edi */
  push32((uint32_t)(EDI));
  /* 11646d99 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11646da0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646da4 jne 0x11646dc3 */
  if (!C.zf) goto L_11646dc3;
  /* 11646da6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11646da9 push eax */
  push32((uint32_t)(EAX));
  /* 11646daa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11646dad push ecx */
  push32((uint32_t)(ECX));
  /* 11646dae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11646db1 push edx */
  push32((uint32_t)(EDX));
  /* 11646db2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11646db5 push eax */
  push32((uint32_t)(EAX));
  /* 11646db6 call 0x116468c0 */
  push32(0x11646dbbu); f_116468c0();
  /* 11646dbb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646dbe jmp 0x1164729a */
  goto L_1164729a;
L_11646dc3:;
  /* 11646dc3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646dc7 je 0x11646de6 */
  if (C.zf) goto L_11646de6;
  /* 11646dc9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646dcd jne 0x11646de6 */
  if (!C.zf) goto L_11646de6;
  /* 11646dcf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11646dd2 push ecx */
  push32((uint32_t)(ECX));
  /* 11646dd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646dd6 push edx */
  push32((uint32_t)(EDX));
  /* 11646dd7 call 0x11647350 */
  push32(0x11646ddcu); f_11647350();
  /* 11646ddc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646ddf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11646de1 jmp 0x1164729a */
  goto L_1164729a;
L_11646de6:;
  /* 11646de6 mov eax, dword ptr [0x11673bd4] */
  EAX = (r32((uint32_t)(0x11673bd4)));
  /* 11646deb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11646dee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11646df0 je 0x11646e22 */
  if (C.zf) goto L_11646e22;
L_11646df2:;
  /* 11646df2 call 0x11647a60 */
  push32(0x11646df7u); f_11647a60();
  /* 11646df7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11646df9 jne 0x11646e1c */
  if (!C.zf) goto L_11646e1c;
  /* 11646dfb push 0x11670680 */
  push32((uint32_t)(0x11670680u));
  /* 11646e00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646e02 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11646e07 push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 11646e0c push 2 */
  push32((uint32_t)(0x2u));
  /* 11646e0e call 0x11645180 */
  push32(0x11646e13u); f_11645180();
  /* 11646e13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646e16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646e19 jne 0x11646e1c */
  if (!C.zf) goto L_11646e1c;
  /* 11646e1b int3  */
  x86_unimpl("int3 @ 0x11646e1b");
L_11646e1c:;
  /* 11646e1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11646e1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11646e20 jne 0x11646df2 */
  if (!C.zf) goto L_11646df2;
L_11646e22:;
  /* 11646e22 mov edx, dword ptr [0x11673bd8] */
  EDX = (r32((uint32_t)(0x11673bd8)));
  /* 11646e28 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11646e2b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11646e2e cmp eax, dword ptr [0x11673bdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11673bdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646e34 jne 0x11646e37 */
  if (!C.zf) goto L_11646e37;
  /* 11646e36 int3  */
  x86_unimpl("int3 @ 0x11646e36");
L_11646e37:;
  /* 11646e37 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11646e3a push ecx */
  push32((uint32_t)(ECX));
  /* 11646e3b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11646e3e push edx */
  push32((uint32_t)(EDX));
  /* 11646e3f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11646e42 push eax */
  push32((uint32_t)(EAX));
  /* 11646e43 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11646e46 push ecx */
  push32((uint32_t)(ECX));
  /* 11646e47 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11646e4a push edx */
  push32((uint32_t)(EDX));
  /* 11646e4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646e4e push eax */
  push32((uint32_t)(EAX));
  /* 11646e4f push 2 */
  push32((uint32_t)(0x2u));
  /* 11646e51 call dword ptr [0x11674028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11674028))), 0x11646e57u);
  /* 11646e57 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646e5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11646e5c jne 0x11646ebc */
  if (!C.zf) goto L_11646ebc;
  /* 11646e5e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646e62 je 0x11646e8f */
  if (C.zf) goto L_11646e8f;
L_11646e64:;
  /* 11646e64 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11646e67 push ecx */
  push32((uint32_t)(ECX));
  /* 11646e68 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11646e6b push edx */
  push32((uint32_t)(EDX));
  /* 11646e6c push 0x116707fc */
  push32((uint32_t)(0x116707fcu));
  /* 11646e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646e73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646e75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646e77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646e79 call 0x11645180 */
  push32(0x11646e7eu); f_11645180();
  /* 11646e7e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646e81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646e84 jne 0x11646e87 */
  if (!C.zf) goto L_11646e87;
  /* 11646e86 int3  */
  x86_unimpl("int3 @ 0x11646e86");
L_11646e87:;
  /* 11646e87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11646e89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11646e8b jne 0x11646e64 */
  if (!C.zf) goto L_11646e64;
  /* 11646e8d jmp 0x11646eb5 */
  goto L_11646eb5;
L_11646e8f:;
  /* 11646e8f push 0x116707d8 */
  push32((uint32_t)(0x116707d8u));
  /* 11646e94 push 0x11670614 */
  push32((uint32_t)(0x11670614u));
  /* 11646e99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11646e9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11646e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11646ea1 call 0x11645180 */
  push32(0x11646ea6u); f_11645180();
  /* 11646ea6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646ea9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646eac jne 0x11646eaf */
  if (!C.zf) goto L_11646eaf;
  /* 11646eae int3  */
  x86_unimpl("int3 @ 0x11646eae");
L_11646eaf:;
  /* 11646eaf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11646eb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11646eb3 jne 0x11646e8f */
  if (!C.zf) goto L_11646e8f;
L_11646eb5:;
  /* 11646eb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11646eb7 jmp 0x1164729a */
  goto L_1164729a;
L_11646ebc:;
  /* 11646ebc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646ec0 jbe 0x11646eee */
  if ((C.cf||C.zf)) goto L_11646eee;
L_11646ec2:;
  /* 11646ec2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11646ec5 push edx */
  push32((uint32_t)(EDX));
  /* 11646ec6 push 0x116707a8 */
  push32((uint32_t)(0x116707a8u));
  /* 11646ecb push 0 */
  push32((uint32_t)(0x0u));
  /* 11646ecd push 0 */
  push32((uint32_t)(0x0u));
  /* 11646ecf push 0 */
  push32((uint32_t)(0x0u));
  /* 11646ed1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11646ed3 call 0x11645180 */
  push32(0x11646ed8u); f_11645180();
  /* 11646ed8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646edb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646ede jne 0x11646ee1 */
  if (!C.zf) goto L_11646ee1;
  /* 11646ee0 int3  */
  x86_unimpl("int3 @ 0x11646ee0");
L_11646ee1:;
  /* 11646ee1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11646ee3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11646ee5 jne 0x11646ec2 */
  if (!C.zf) goto L_11646ec2;
  /* 11646ee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11646ee9 jmp 0x1164729a */
  goto L_1164729a;
L_11646eee:;
  /* 11646eee cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646ef2 je 0x11646f36 */
  if (C.zf) goto L_11646f36;
  /* 11646ef4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11646ef7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11646efd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646f00 je 0x11646f36 */
  if (C.zf) goto L_11646f36;
  /* 11646f02 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11646f05 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11646f0b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646f0e je 0x11646f36 */
  if (C.zf) goto L_11646f36;
L_11646f10:;
  /* 11646f10 push 0x116705bc */
  push32((uint32_t)(0x116705bcu));
  /* 11646f15 push 0x11670614 */
  push32((uint32_t)(0x11670614u));
  /* 11646f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11646f1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11646f1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11646f20 push 1 */
  push32((uint32_t)(0x1u));
  /* 11646f22 call 0x11645180 */
  push32(0x11646f27u); f_11645180();
  /* 11646f27 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646f2a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646f2d jne 0x11646f30 */
  if (!C.zf) goto L_11646f30;
  /* 11646f2f int3  */
  x86_unimpl("int3 @ 0x11646f2f");
L_11646f30:;
  /* 11646f30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11646f32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11646f34 jne 0x11646f10 */
  if (!C.zf) goto L_11646f10;
L_11646f36:;
  /* 11646f36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646f39 push ecx */
  push32((uint32_t)(ECX));
  /* 11646f3a call 0x11647ec0 */
  push32(0x11646f3fu); f_11647ec0();
  /* 11646f3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646f42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11646f44 jne 0x11646f67 */
  if (!C.zf) goto L_11646f67;
  /* 11646f46 push 0x11670784 */
  push32((uint32_t)(0x11670784u));
  /* 11646f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11646f4d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11646f52 push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 11646f57 push 2 */
  push32((uint32_t)(0x2u));
  /* 11646f59 call 0x11645180 */
  push32(0x11646f5eu); f_11645180();
  /* 11646f5e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646f61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646f64 jne 0x11646f67 */
  if (!C.zf) goto L_11646f67;
  /* 11646f66 int3  */
  x86_unimpl("int3 @ 0x11646f66");
L_11646f67:;
  /* 11646f67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11646f69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11646f6b jne 0x11646f36 */
  if (!C.zf) goto L_11646f36;
  /* 11646f6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11646f70 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11646f73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11646f76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11646f79 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646f7d jne 0x11646f86 */
  if (!C.zf) goto L_11646f86;
  /* 11646f7f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11646f86:;
  /* 11646f86 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646f8a je 0x11646fca */
  if (C.zf) goto L_11646fca;
L_11646f8c:;
  /* 11646f8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11646f8f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646f96 jne 0x11646fa1 */
  if (!C.zf) goto L_11646fa1;
  /* 11646f98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11646f9b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646f9f je 0x11646fc2 */
  if (C.zf) goto L_11646fc2;
L_11646fa1:;
  /* 11646fa1 push 0x1167073c */
  push32((uint32_t)(0x1167073cu));
  /* 11646fa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11646fa8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11646fad push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 11646fb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11646fb4 call 0x11645180 */
  push32(0x11646fb9u); f_11645180();
  /* 11646fb9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11646fbc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646fbf jne 0x11646fc2 */
  if (!C.zf) goto L_11646fc2;
  /* 11646fc1 int3  */
  x86_unimpl("int3 @ 0x11646fc1");
L_11646fc2:;
  /* 11646fc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11646fc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11646fc6 jne 0x11646f8c */
  if (!C.zf) goto L_11646f8c;
  /* 11646fc8 jmp 0x1164702e */
  goto L_1164702e;
L_11646fca:;
  /* 11646fca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11646fcd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11646fd0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11646fd5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646fd8 jne 0x11646fef */
  if (!C.zf) goto L_11646fef;
  /* 11646fda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11646fdd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11646fe3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11646fe6 jne 0x11646fef */
  if (!C.zf) goto L_11646fef;
  /* 11646fe8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11646fef:;
  /* 11646fef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11646ff2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11646ff5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11646ffa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11646ffd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11647003 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647005 je 0x11647028 */
  if (C.zf) goto L_11647028;
  /* 11647007 push 0x11670700 */
  push32((uint32_t)(0x11670700u));
  /* 1164700c push 0 */
  push32((uint32_t)(0x0u));
  /* 1164700e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11647013 push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 11647018 push 2 */
  push32((uint32_t)(0x2u));
  /* 1164701a call 0x11645180 */
  push32(0x1164701fu); f_11645180();
  /* 1164701f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647022 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647025 jne 0x11647028 */
  if (!C.zf) goto L_11647028;
  /* 11647027 int3  */
  x86_unimpl("int3 @ 0x11647027");
L_11647028:;
  /* 11647028 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1164702a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164702c jne 0x11646fef */
  if (!C.zf) goto L_11646fef;
L_1164702e:;
  /* 1164702e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647032 je 0x11647059 */
  if (C.zf) goto L_11647059;
  /* 11647034 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11647037 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164703a push eax */
  push32((uint32_t)(EAX));
  /* 1164703b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164703e push ecx */
  push32((uint32_t)(ECX));
  /* 1164703f call 0x1164bda0 */
  push32(0x11647044u); f_1164bda0();
  /* 11647044 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647047 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1164704a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164704e jne 0x11647057 */
  if (!C.zf) goto L_11647057;
  /* 11647050 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11647052 jmp 0x1164729a */
  goto L_1164729a;
L_11647057:;
  /* 11647057 jmp 0x1164707c */
  goto L_1164707c;
L_11647059:;
  /* 11647059 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164705c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164705f push edx */
  push32((uint32_t)(EDX));
  /* 11647060 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647063 push eax */
  push32((uint32_t)(EAX));
  /* 11647064 call 0x1164bcf0 */
  push32(0x11647069u); f_1164bcf0();
  /* 11647069 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164706c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1164706f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647073 jne 0x1164707c */
  if (!C.zf) goto L_1164707c;
  /* 11647075 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11647077 jmp 0x1164729a */
  goto L_1164729a;
L_1164707c:;
  /* 1164707c mov ecx, dword ptr [0x11673bd8] */
  ECX = (r32((uint32_t)(0x11673bd8)));
  /* 11647082 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11647085 mov dword ptr [0x11673bd8], ecx */
  w32((uint32_t)(0x11673bd8), (ECX));
  /* 1164708b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164708f jne 0x116470e7 */
  if (!C.zf) goto L_116470e7;
  /* 11647091 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11647094 mov eax, dword ptr [0x11675ff0] */
  EAX = (r32((uint32_t)(0x11675ff0)));
  /* 11647099 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164709c mov dword ptr [0x11675ff0], eax */
  w32((uint32_t)(0x11675ff0), (EAX));
  /* 116470a1 mov ecx, dword ptr [0x11675ff0] */
  ECX = (r32((uint32_t)(0x11675ff0)));
  /* 116470a7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116470aa mov dword ptr [0x11675ff0], ecx */
  w32((uint32_t)(0x11675ff0), (ECX));
  /* 116470b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116470b3 mov eax, dword ptr [0x11675ff8] */
  EAX = (r32((uint32_t)(0x11675ff8)));
  /* 116470b8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116470bb mov dword ptr [0x11675ff8], eax */
  w32((uint32_t)(0x11675ff8), (EAX));
  /* 116470c0 mov ecx, dword ptr [0x11675ff8] */
  ECX = (r32((uint32_t)(0x11675ff8)));
  /* 116470c6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116470c9 mov dword ptr [0x11675ff8], ecx */
  w32((uint32_t)(0x11675ff8), (ECX));
  /* 116470cf mov edx, dword ptr [0x11675ff8] */
  EDX = (r32((uint32_t)(0x11675ff8)));
  /* 116470d5 cmp edx, dword ptr [0x11675ffc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11675ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116470db jbe 0x116470e7 */
  if ((C.cf||C.zf)) goto L_116470e7;
  /* 116470dd mov eax, dword ptr [0x11675ff8] */
  EAX = (r32((uint32_t)(0x11675ff8)));
  /* 116470e2 mov dword ptr [0x11675ffc], eax */
  w32((uint32_t)(0x11675ffc), (EAX));
L_116470e7:;
  /* 116470e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116470ea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116470ed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116470f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116470f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116470f6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116470f9 jbe 0x1164711f */
  if ((C.cf||C.zf)) goto L_1164711f;
  /* 116470fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116470fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11647101 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11647104 push edx */
  push32((uint32_t)(EDX));
  /* 11647105 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11647107 mov al, byte ptr [0x11673be2] */
  AL = (r8((uint32_t)(0x11673be2)));
  /* 1164710c push eax */
  push32((uint32_t)(EAX));
  /* 1164710d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11647110 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647113 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11647116 push edx */
  push32((uint32_t)(EDX));
  /* 11647117 call 0x1164b3f0 */
  push32(0x1164711cu); f_1164b3f0();
  /* 1164711c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164711f:;
  /* 1164711f push 4 */
  push32((uint32_t)(0x4u));
  /* 11647121 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11647123 mov al, byte ptr [0x11673be0] */
  AL = (r8((uint32_t)(0x11673be0)));
  /* 11647128 push eax */
  push32((uint32_t)(EAX));
  /* 11647129 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164712c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164712f push ecx */
  push32((uint32_t)(ECX));
  /* 11647130 call 0x1164b3f0 */
  push32(0x11647135u); f_1164b3f0();
  /* 11647135 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647138 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164713c jne 0x11647159 */
  if (!C.zf) goto L_11647159;
  /* 1164713e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11647141 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11647144 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11647147 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164714a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1164714d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11647150 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11647153 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11647156 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11647159:;
  /* 11647159 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164715c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164715f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11647162:;
  /* 11647162 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647166 jne 0x11647197 */
  if (!C.zf) goto L_11647197;
  /* 11647168 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164716c jne 0x11647176 */
  if (!C.zf) goto L_11647176;
  /* 1164716e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11647171 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647174 je 0x11647197 */
  if (C.zf) goto L_11647197;
L_11647176:;
  /* 11647176 push 0x116706cc */
  push32((uint32_t)(0x116706ccu));
  /* 1164717b push 0 */
  push32((uint32_t)(0x0u));
  /* 1164717d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11647182 push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 11647187 push 2 */
  push32((uint32_t)(0x2u));
  /* 11647189 call 0x11645180 */
  push32(0x1164718eu); f_11645180();
  /* 1164718e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647191 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647194 jne 0x11647197 */
  if (!C.zf) goto L_11647197;
  /* 11647196 int3  */
  x86_unimpl("int3 @ 0x11647196");
L_11647197:;
  /* 11647197 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11647199 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164719b jne 0x11647162 */
  if (!C.zf) goto L_11647162;
  /* 1164719d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116471a0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116471a3 je 0x116471ab */
  if (C.zf) goto L_116471ab;
  /* 116471a5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116471a9 je 0x116471b3 */
  if (C.zf) goto L_116471b3;
L_116471ab:;
  /* 116471ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116471ae jmp 0x1164729a */
  goto L_1164729a;
L_116471b3:;
  /* 116471b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116471b6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116471b9 je 0x116471cb */
  if (C.zf) goto L_116471cb;
  /* 116471bb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116471be mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116471c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116471c3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116471c6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116471c9 jmp 0x11647207 */
  goto L_11647207;
L_116471cb:;
  /* 116471cb mov eax, dword ptr [0x11675fec] */
  EAX = (r32((uint32_t)(0x11675fec)));
  /* 116471d0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116471d3 je 0x116471f6 */
  if (C.zf) goto L_116471f6;
  /* 116471d5 push 0x116706b0 */
  push32((uint32_t)(0x116706b0u));
  /* 116471da push 0 */
  push32((uint32_t)(0x0u));
  /* 116471dc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 116471e1 push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 116471e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 116471e8 call 0x11645180 */
  push32(0x116471edu); f_11645180();
  /* 116471ed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116471f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116471f3 jne 0x116471f6 */
  if (!C.zf) goto L_116471f6;
  /* 116471f5 int3  */
  x86_unimpl("int3 @ 0x116471f5");
L_116471f6:;
  /* 116471f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116471f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116471fa jne 0x116471cb */
  if (!C.zf) goto L_116471cb;
  /* 116471fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116471ff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11647202 mov dword ptr [0x11675fec], eax */
  w32((uint32_t)(0x11675fec), (EAX));
L_11647207:;
  /* 11647207 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164720a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164720e je 0x1164721f */
  if (C.zf) goto L_1164721f;
  /* 11647210 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11647213 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11647216 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11647219 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1164721b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1164721d jmp 0x1164725a */
  goto L_1164725a;
L_1164721f:;
  /* 1164721f mov eax, dword ptr [0x11675ff4] */
  EAX = (r32((uint32_t)(0x11675ff4)));
  /* 11647224 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647227 je 0x1164724a */
  if (C.zf) goto L_1164724a;
  /* 11647229 push 0x11670694 */
  push32((uint32_t)(0x11670694u));
  /* 1164722e push 0 */
  push32((uint32_t)(0x0u));
  /* 11647230 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11647235 push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 1164723a push 2 */
  push32((uint32_t)(0x2u));
  /* 1164723c call 0x11645180 */
  push32(0x11647241u); f_11645180();
  /* 11647241 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647244 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647247 jne 0x1164724a */
  if (!C.zf) goto L_1164724a;
  /* 11647249 int3  */
  x86_unimpl("int3 @ 0x11647249");
L_1164724a:;
  /* 1164724a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164724c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164724e jne 0x1164721f */
  if (!C.zf) goto L_1164721f;
  /* 11647250 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11647253 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11647255 mov dword ptr [0x11675ff4], eax */
  w32((uint32_t)(0x11675ff4), (EAX));
L_1164725a:;
  /* 1164725a cmp dword ptr [0x11675ff4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11675ff4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647261 je 0x11647271 */
  if (C.zf) goto L_11647271;
  /* 11647263 mov ecx, dword ptr [0x11675ff4] */
  ECX = (r32((uint32_t)(0x11675ff4)));
  /* 11647269 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164726c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1164726f jmp 0x11647279 */
  goto L_11647279;
L_11647271:;
  /* 11647271 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11647274 mov dword ptr [0x11675fec], eax */
  w32((uint32_t)(0x11675fec), (EAX));
L_11647279:;
  /* 11647279 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164727c mov edx, dword ptr [0x11675ff4] */
  EDX = (r32((uint32_t)(0x11675ff4)));
  /* 11647282 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11647284 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11647287 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1164728e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11647291 mov dword ptr [0x11675ff4], ecx */
  w32((uint32_t)(0x11675ff4), (ECX));
  /* 11647297 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1164729a:;
  /* 1164729a pop edi */
  EDI = (pop32());
  /* 1164729b pop esi */
  ESI = (pop32());
  /* 1164729c pop ebx */
  EBX = (pop32());
  /* 1164729d mov esp, ebp */
  ESP = (EBP);
  /* 1164729f pop ebp */
  EBP = (pop32());
  /* 116472a0 ret  */
  ESPCHK(0x11646d90u, _esp0);
  ESP += 4; return;
}

/* FUN_100072b0 @ 0x116472b0 (27 bytes, 13 insns) */
void f_116472b0(void) {
  FTRACE(0x116472b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116472b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116472b1 mov ebp, esp */
  EBP = (ESP);
  /* 116472b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116472b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116472b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 116472b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116472bc push eax */
  push32((uint32_t)(EAX));
  /* 116472bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116472c0 push ecx */
  push32((uint32_t)(ECX));
  /* 116472c1 call 0x116472d0 */
  push32(0x116472c6u); f_116472d0();
  /* 116472c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116472c9 pop ebp */
  EBP = (pop32());
  /* 116472ca ret  */
  ESPCHK(0x116472b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072d0 @ 0x116472d0 (64 bytes, 27 insns) */
void f_116472d0(void) {
  FTRACE(0x116472d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116472d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116472d1 mov ebp, esp */
  EBP = (ESP);
  /* 116472d3 push ecx */
  push32((uint32_t)(ECX));
  /* 116472d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 116472d6 call 0x1164b880 */
  push32(0x116472dbu); f_1164b880();
  /* 116472db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116472de push 0 */
  push32((uint32_t)(0x0u));
  /* 116472e0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116472e3 push eax */
  push32((uint32_t)(EAX));
  /* 116472e4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116472e7 push ecx */
  push32((uint32_t)(ECX));
  /* 116472e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116472eb push edx */
  push32((uint32_t)(EDX));
  /* 116472ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116472ef push eax */
  push32((uint32_t)(EAX));
  /* 116472f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116472f3 push ecx */
  push32((uint32_t)(ECX));
  /* 116472f4 call 0x11646d90 */
  push32(0x116472f9u); f_11646d90();
  /* 116472f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116472fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116472ff push 9 */
  push32((uint32_t)(0x9u));
  /* 11647301 call 0x1164b920 */
  push32(0x11647306u); f_1164b920();
  /* 11647306 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647309 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164730c mov esp, ebp */
  ESP = (EBP);
  /* 1164730e pop ebp */
  EBP = (pop32());
  /* 1164730f ret  */
  ESPCHK(0x116472d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007310 @ 0x11647310 (19 bytes, 9 insns) */
void f_11647310(void) {
  FTRACE(0x11647310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11647310 push ebp */
  push32((uint32_t)(EBP));
  /* 11647311 mov ebp, esp */
  EBP = (ESP);
  /* 11647313 push 1 */
  push32((uint32_t)(0x1u));
  /* 11647315 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647318 push eax */
  push32((uint32_t)(EAX));
  /* 11647319 call 0x11647350 */
  push32(0x1164731eu); f_11647350();
  /* 1164731e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647321 pop ebp */
  EBP = (pop32());
  /* 11647322 ret  */
  ESPCHK(0x11647310u, _esp0);
  ESP += 4; return;
}

/* FUN_10007330 @ 0x11647330 (19 bytes, 9 insns) */
void f_11647330(void) {
  FTRACE(0x11647330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11647330 push ebp */
  push32((uint32_t)(EBP));
  /* 11647331 mov ebp, esp */
  EBP = (ESP);
  /* 11647333 push 1 */
  push32((uint32_t)(0x1u));
  /* 11647335 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647338 push eax */
  push32((uint32_t)(EAX));
  /* 11647339 call 0x11647380 */
  push32(0x1164733eu); f_11647380();
  /* 1164733e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647341 pop ebp */
  EBP = (pop32());
  /* 11647342 ret  */
  ESPCHK(0x11647330u, _esp0);
  ESP += 4; return;
}

/* FUN_10007350 @ 0x11647350 (41 bytes, 16 insns) */
void f_11647350(void) {
  FTRACE(0x11647350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11647350 push ebp */
  push32((uint32_t)(EBP));
  /* 11647351 mov ebp, esp */
  EBP = (ESP);
  /* 11647353 push 9 */
  push32((uint32_t)(0x9u));
  /* 11647355 call 0x1164b880 */
  push32(0x1164735au); f_1164b880();
  /* 1164735a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164735d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11647360 push eax */
  push32((uint32_t)(EAX));
  /* 11647361 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647364 push ecx */
  push32((uint32_t)(ECX));
  /* 11647365 call 0x11647380 */
  push32(0x1164736au); f_11647380();
  /* 1164736a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164736d push 9 */
  push32((uint32_t)(0x9u));
  /* 1164736f call 0x1164b920 */
  push32(0x11647374u); f_1164b920();
  /* 11647374 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647377 pop ebp */
  EBP = (pop32());
  /* 11647378 ret  */
  ESPCHK(0x11647350u, _esp0);
  ESP += 4; return;
}

/* FUN_10007380 @ 0x11647380 (1004 bytes, 342 insns) */
void f_11647380(void) {
  FTRACE(0x11647380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11647380 push ebp */
  push32((uint32_t)(EBP));
  /* 11647381 mov ebp, esp */
  EBP = (ESP);
  /* 11647383 push ecx */
  push32((uint32_t)(ECX));
  /* 11647384 push ebx */
  push32((uint32_t)(EBX));
  /* 11647385 push esi */
  push32((uint32_t)(ESI));
  /* 11647386 push edi */
  push32((uint32_t)(EDI));
  /* 11647387 mov eax, dword ptr [0x11673bd4] */
  EAX = (r32((uint32_t)(0x11673bd4)));
  /* 1164738c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1164738f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11647391 je 0x116473c3 */
  if (C.zf) goto L_116473c3;
L_11647393:;
  /* 11647393 call 0x11647a60 */
  push32(0x11647398u); f_11647a60();
  /* 11647398 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164739a jne 0x116473bd */
  if (!C.zf) goto L_116473bd;
  /* 1164739c push 0x11670680 */
  push32((uint32_t)(0x11670680u));
  /* 116473a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116473a3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 116473a8 push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 116473ad push 2 */
  push32((uint32_t)(0x2u));
  /* 116473af call 0x11645180 */
  push32(0x116473b4u); f_11645180();
  /* 116473b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116473b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116473ba jne 0x116473bd */
  if (!C.zf) goto L_116473bd;
  /* 116473bc int3  */
  x86_unimpl("int3 @ 0x116473bc");
L_116473bd:;
  /* 116473bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116473bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116473c1 jne 0x11647393 */
  if (!C.zf) goto L_11647393;
L_116473c3:;
  /* 116473c3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116473c7 jne 0x116473ce */
  if (!C.zf) goto L_116473ce;
  /* 116473c9 jmp 0x11647765 */
  goto L_11647765;
L_116473ce:;
  /* 116473ce push 0 */
  push32((uint32_t)(0x0u));
  /* 116473d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116473d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116473d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116473d7 push edx */
  push32((uint32_t)(EDX));
  /* 116473d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116473da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116473dd push eax */
  push32((uint32_t)(EAX));
  /* 116473de push 3 */
  push32((uint32_t)(0x3u));
  /* 116473e0 call dword ptr [0x11674028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11674028))), 0x116473e6u);
  /* 116473e6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116473e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116473eb jne 0x11647418 */
  if (!C.zf) goto L_11647418;
L_116473ed:;
  /* 116473ed push 0x11670944 */
  push32((uint32_t)(0x11670944u));
  /* 116473f2 push 0x11670614 */
  push32((uint32_t)(0x11670614u));
  /* 116473f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116473f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116473fb push 0 */
  push32((uint32_t)(0x0u));
  /* 116473fd push 0 */
  push32((uint32_t)(0x0u));
  /* 116473ff call 0x11645180 */
  push32(0x11647404u); f_11645180();
  /* 11647404 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647407 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164740a jne 0x1164740d */
  if (!C.zf) goto L_1164740d;
  /* 1164740c int3  */
  x86_unimpl("int3 @ 0x1164740c");
L_1164740d:;
  /* 1164740d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164740f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11647411 jne 0x116473ed */
  if (!C.zf) goto L_116473ed;
  /* 11647413 jmp 0x11647765 */
  goto L_11647765;
L_11647418:;
  /* 11647418 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164741b push edx */
  push32((uint32_t)(EDX));
  /* 1164741c call 0x11647ec0 */
  push32(0x11647421u); f_11647ec0();
  /* 11647421 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647424 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11647426 jne 0x11647449 */
  if (!C.zf) goto L_11647449;
  /* 11647428 push 0x11670784 */
  push32((uint32_t)(0x11670784u));
  /* 1164742d push 0 */
  push32((uint32_t)(0x0u));
  /* 1164742f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11647434 push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 11647439 push 2 */
  push32((uint32_t)(0x2u));
  /* 1164743b call 0x11645180 */
  push32(0x11647440u); f_11645180();
  /* 11647440 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647443 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647446 jne 0x11647449 */
  if (!C.zf) goto L_11647449;
  /* 11647448 int3  */
  x86_unimpl("int3 @ 0x11647448");
L_11647449:;
  /* 11647449 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164744b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164744d jne 0x11647418 */
  if (!C.zf) goto L_11647418;
  /* 1164744f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647452 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11647455 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11647458:;
  /* 11647458 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164745b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1164745e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11647463 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647466 je 0x116474ab */
  if (C.zf) goto L_116474ab;
  /* 11647468 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164746b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164746f je 0x116474ab */
  if (C.zf) goto L_116474ab;
  /* 11647471 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647474 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11647477 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164747c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164747f je 0x116474ab */
  if (C.zf) goto L_116474ab;
  /* 11647481 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647484 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647488 je 0x116474ab */
  if (C.zf) goto L_116474ab;
  /* 1164748a push 0x1167091c */
  push32((uint32_t)(0x1167091cu));
  /* 1164748f push 0 */
  push32((uint32_t)(0x0u));
  /* 11647491 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11647496 push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 1164749b push 2 */
  push32((uint32_t)(0x2u));
  /* 1164749d call 0x11645180 */
  push32(0x116474a2u); f_11645180();
  /* 116474a2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116474a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116474a8 jne 0x116474ab */
  if (!C.zf) goto L_116474ab;
  /* 116474aa int3  */
  x86_unimpl("int3 @ 0x116474aa");
L_116474ab:;
  /* 116474ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116474ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116474af jne 0x11647458 */
  if (!C.zf) goto L_11647458;
  /* 116474b1 mov eax, dword ptr [0x11673bd4] */
  EAX = (r32((uint32_t)(0x11673bd4)));
  /* 116474b6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116474b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116474bb jne 0x11647586 */
  if (!C.zf) goto L_11647586;
  /* 116474c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 116474c3 mov cl, byte ptr [0x11673be0] */
  CL = (r8((uint32_t)(0x11673be0)));
  /* 116474c9 push ecx */
  push32((uint32_t)(ECX));
  /* 116474ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116474cd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116474d0 push edx */
  push32((uint32_t)(EDX));
  /* 116474d1 call 0x116479d0 */
  push32(0x116474d6u); f_116479d0();
  /* 116474d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116474d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116474db jne 0x11647520 */
  if (!C.zf) goto L_11647520;
L_116474dd:;
  /* 116474dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116474e0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116474e3 push eax */
  push32((uint32_t)(EAX));
  /* 116474e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116474e7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 116474ea push edx */
  push32((uint32_t)(EDX));
  /* 116474eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116474ee mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 116474f1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116474f7 mov edx, dword ptr [ecx*4 + 0x11673be4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11673be4)));
  /* 116474fe push edx */
  push32((uint32_t)(EDX));
  /* 116474ff push 0x116708f0 */
  push32((uint32_t)(0x116708f0u));
  /* 11647504 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647506 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647508 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164750a push 1 */
  push32((uint32_t)(0x1u));
  /* 1164750c call 0x11645180 */
  push32(0x11647511u); f_11645180();
  /* 11647511 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647514 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647517 jne 0x1164751a */
  if (!C.zf) goto L_1164751a;
  /* 11647519 int3  */
  x86_unimpl("int3 @ 0x11647519");
L_1164751a:;
  /* 1164751a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164751c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164751e jne 0x116474dd */
  if (!C.zf) goto L_116474dd;
L_11647520:;
  /* 11647520 push 4 */
  push32((uint32_t)(0x4u));
  /* 11647522 mov cl, byte ptr [0x11673be0] */
  CL = (r8((uint32_t)(0x11673be0)));
  /* 11647528 push ecx */
  push32((uint32_t)(ECX));
  /* 11647529 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164752c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1164752f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647532 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11647536 push edx */
  push32((uint32_t)(EDX));
  /* 11647537 call 0x116479d0 */
  push32(0x1164753cu); f_116479d0();
  /* 1164753c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164753f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11647541 jne 0x11647586 */
  if (!C.zf) goto L_11647586;
L_11647543:;
  /* 11647543 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647546 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11647549 push eax */
  push32((uint32_t)(EAX));
  /* 1164754a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164754d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11647550 push edx */
  push32((uint32_t)(EDX));
  /* 11647551 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647554 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11647557 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1164755d mov edx, dword ptr [ecx*4 + 0x11673be4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11673be4)));
  /* 11647564 push edx */
  push32((uint32_t)(EDX));
  /* 11647565 push 0x116708c4 */
  push32((uint32_t)(0x116708c4u));
  /* 1164756a push 0 */
  push32((uint32_t)(0x0u));
  /* 1164756c push 0 */
  push32((uint32_t)(0x0u));
  /* 1164756e push 0 */
  push32((uint32_t)(0x0u));
  /* 11647570 push 1 */
  push32((uint32_t)(0x1u));
  /* 11647572 call 0x11645180 */
  push32(0x11647577u); f_11645180();
  /* 11647577 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164757a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164757d jne 0x11647580 */
  if (!C.zf) goto L_11647580;
  /* 1164757f int3  */
  x86_unimpl("int3 @ 0x1164757f");
L_11647580:;
  /* 11647580 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11647582 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11647584 jne 0x11647543 */
  if (!C.zf) goto L_11647543;
L_11647586:;
  /* 11647586 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647589 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164758d jne 0x116475fb */
  if (!C.zf) goto L_116475fb;
L_1164758f:;
  /* 1164758f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647592 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647599 jne 0x116475a4 */
  if (!C.zf) goto L_116475a4;
  /* 1164759b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164759e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116475a2 je 0x116475c5 */
  if (C.zf) goto L_116475c5;
L_116475a4:;
  /* 116475a4 push 0x11670884 */
  push32((uint32_t)(0x11670884u));
  /* 116475a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116475ab push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 116475b0 push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 116475b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 116475b7 call 0x11645180 */
  push32(0x116475bcu); f_11645180();
  /* 116475bc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116475bf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116475c2 jne 0x116475c5 */
  if (!C.zf) goto L_116475c5;
  /* 116475c4 int3  */
  x86_unimpl("int3 @ 0x116475c4");
L_116475c5:;
  /* 116475c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116475c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116475c9 jne 0x1164758f */
  if (!C.zf) goto L_1164758f;
  /* 116475cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116475ce mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116475d1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116475d4 push eax */
  push32((uint32_t)(EAX));
  /* 116475d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116475d7 mov cl, byte ptr [0x11673be1] */
  CL = (r8((uint32_t)(0x11673be1)));
  /* 116475dd push ecx */
  push32((uint32_t)(ECX));
  /* 116475de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116475e1 push edx */
  push32((uint32_t)(EDX));
  /* 116475e2 call 0x1164b3f0 */
  push32(0x116475e7u); f_1164b3f0();
  /* 116475e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116475ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116475ed push eax */
  push32((uint32_t)(EAX));
  /* 116475ee call 0x1164bf90 */
  push32(0x116475f3u); f_1164bf90();
  /* 116475f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116475f6 jmp 0x11647765 */
  goto L_11647765;
L_116475fb:;
  /* 116475fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116475fe cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647602 jne 0x11647611 */
  if (!C.zf) goto L_11647611;
  /* 11647604 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647608 jne 0x11647611 */
  if (!C.zf) goto L_11647611;
  /* 1164760a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11647611:;
  /* 11647611 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647614 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11647617 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164761a je 0x1164763d */
  if (C.zf) goto L_1164763d;
  /* 1164761c push 0x11670864 */
  push32((uint32_t)(0x11670864u));
  /* 11647621 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647623 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11647628 push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 1164762d push 2 */
  push32((uint32_t)(0x2u));
  /* 1164762f call 0x11645180 */
  push32(0x11647634u); f_11645180();
  /* 11647634 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647637 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164763a jne 0x1164763d */
  if (!C.zf) goto L_1164763d;
  /* 1164763c int3  */
  x86_unimpl("int3 @ 0x1164763c");
L_1164763d:;
  /* 1164763d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164763f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11647641 jne 0x11647611 */
  if (!C.zf) goto L_11647611;
  /* 11647643 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647646 mov eax, dword ptr [0x11675ff8] */
  EAX = (r32((uint32_t)(0x11675ff8)));
  /* 1164764b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164764e mov dword ptr [0x11675ff8], eax */
  w32((uint32_t)(0x11675ff8), (EAX));
  /* 11647653 mov ecx, dword ptr [0x11673bd4] */
  ECX = (r32((uint32_t)(0x11673bd4)));
  /* 11647659 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1164765c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164765e jne 0x1164773c */
  if (!C.zf) goto L_1164773c;
  /* 11647664 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647667 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164766a je 0x1164767c */
  if (C.zf) goto L_1164767c;
  /* 1164766c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164766f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11647671 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647674 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11647677 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1164767a jmp 0x116476ba */
  goto L_116476ba;
L_1164767c:;
  /* 1164767c mov ecx, dword ptr [0x11675fec] */
  ECX = (r32((uint32_t)(0x11675fec)));
  /* 11647682 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647685 je 0x116476a8 */
  if (C.zf) goto L_116476a8;
  /* 11647687 push 0x1167084c */
  push32((uint32_t)(0x1167084cu));
  /* 1164768c push 0 */
  push32((uint32_t)(0x0u));
  /* 1164768e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11647693 push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 11647698 push 2 */
  push32((uint32_t)(0x2u));
  /* 1164769a call 0x11645180 */
  push32(0x1164769fu); f_11645180();
  /* 1164769f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116476a2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116476a5 jne 0x116476a8 */
  if (!C.zf) goto L_116476a8;
  /* 116476a7 int3  */
  x86_unimpl("int3 @ 0x116476a7");
L_116476a8:;
  /* 116476a8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116476aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116476ac jne 0x1164767c */
  if (!C.zf) goto L_1164767c;
  /* 116476ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116476b1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116476b4 mov dword ptr [0x11675fec], ecx */
  w32((uint32_t)(0x11675fec), (ECX));
L_116476ba:;
  /* 116476ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116476bd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116476c1 je 0x116476d2 */
  if (C.zf) goto L_116476d2;
  /* 116476c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116476c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116476c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116476cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116476ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116476d0 jmp 0x1164770f */
  goto L_1164770f;
L_116476d2:;
  /* 116476d2 mov ecx, dword ptr [0x11675ff4] */
  ECX = (r32((uint32_t)(0x11675ff4)));
  /* 116476d8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116476db je 0x116476fe */
  if (C.zf) goto L_116476fe;
  /* 116476dd push 0x11670834 */
  push32((uint32_t)(0x11670834u));
  /* 116476e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116476e4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 116476e9 push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 116476ee push 2 */
  push32((uint32_t)(0x2u));
  /* 116476f0 call 0x11645180 */
  push32(0x116476f5u); f_11645180();
  /* 116476f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116476f8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116476fb jne 0x116476fe */
  if (!C.zf) goto L_116476fe;
  /* 116476fd int3  */
  x86_unimpl("int3 @ 0x116476fd");
L_116476fe:;
  /* 116476fe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11647700 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11647702 jne 0x116476d2 */
  if (!C.zf) goto L_116476d2;
  /* 11647704 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647707 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11647709 mov dword ptr [0x11675ff4], ecx */
  w32((uint32_t)(0x11675ff4), (ECX));
L_1164770f:;
  /* 1164770f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647712 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11647715 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11647718 push eax */
  push32((uint32_t)(EAX));
  /* 11647719 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164771b mov cl, byte ptr [0x11673be1] */
  CL = (r8((uint32_t)(0x11673be1)));
  /* 11647721 push ecx */
  push32((uint32_t)(ECX));
  /* 11647722 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647725 push edx */
  push32((uint32_t)(EDX));
  /* 11647726 call 0x1164b3f0 */
  push32(0x1164772bu); f_1164b3f0();
  /* 1164772b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164772e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647731 push eax */
  push32((uint32_t)(EAX));
  /* 11647732 call 0x1164bf90 */
  push32(0x11647737u); f_1164bf90();
  /* 11647737 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164773a jmp 0x11647765 */
  goto L_11647765;
L_1164773c:;
  /* 1164773c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164773f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11647746 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647749 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1164774c push eax */
  push32((uint32_t)(EAX));
  /* 1164774d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164774f mov cl, byte ptr [0x11673be1] */
  CL = (r8((uint32_t)(0x11673be1)));
  /* 11647755 push ecx */
  push32((uint32_t)(ECX));
  /* 11647756 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647759 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164775c push edx */
  push32((uint32_t)(EDX));
  /* 1164775d call 0x1164b3f0 */
  push32(0x11647762u); f_1164b3f0();
  /* 11647762 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11647765:;
  /* 11647765 pop edi */
  EDI = (pop32());
  /* 11647766 pop esi */
  ESI = (pop32());
  /* 11647767 pop ebx */
  EBX = (pop32());
  /* 11647768 mov esp, ebp */
  ESP = (EBP);
  /* 1164776a pop ebp */
  EBP = (pop32());
  /* 1164776b ret  */
  ESPCHK(0x11647380u, _esp0);
  ESP += 4; return;
}

/* FUN_10007770 @ 0x11647770 (19 bytes, 9 insns) */
void f_11647770(void) {
  FTRACE(0x11647770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11647770 push ebp */
  push32((uint32_t)(EBP));
  /* 11647771 mov ebp, esp */
  EBP = (ESP);
  /* 11647773 push 1 */
  push32((uint32_t)(0x1u));
  /* 11647775 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647778 push eax */
  push32((uint32_t)(EAX));
  /* 11647779 call 0x11647790 */
  push32(0x1164777eu); f_11647790();
  /* 1164777e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647781 pop ebp */
  EBP = (pop32());
  /* 11647782 ret  */
  ESPCHK(0x11647770u, _esp0);
  ESP += 4; return;
}

/* FUN_10007790 @ 0x11647790 (342 bytes, 119 insns) */
void f_11647790(void) {
  FTRACE(0x11647790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11647790 push ebp */
  push32((uint32_t)(EBP));
  /* 11647791 mov ebp, esp */
  EBP = (ESP);
  /* 11647793 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11647796 push ebx */
  push32((uint32_t)(EBX));
  /* 11647797 push esi */
  push32((uint32_t)(ESI));
  /* 11647798 push edi */
  push32((uint32_t)(EDI));
  /* 11647799 mov eax, dword ptr [0x11673bd4] */
  EAX = (r32((uint32_t)(0x11673bd4)));
  /* 1164779e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116477a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116477a3 je 0x116477d5 */
  if (C.zf) goto L_116477d5;
L_116477a5:;
  /* 116477a5 call 0x11647a60 */
  push32(0x116477aau); f_11647a60();
  /* 116477aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116477ac jne 0x116477cf */
  if (!C.zf) goto L_116477cf;
  /* 116477ae push 0x11670680 */
  push32((uint32_t)(0x11670680u));
  /* 116477b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116477b5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 116477ba push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 116477bf push 2 */
  push32((uint32_t)(0x2u));
  /* 116477c1 call 0x11645180 */
  push32(0x116477c6u); f_11645180();
  /* 116477c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116477c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116477cc jne 0x116477cf */
  if (!C.zf) goto L_116477cf;
  /* 116477ce int3  */
  x86_unimpl("int3 @ 0x116477ce");
L_116477cf:;
  /* 116477cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116477d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116477d3 jne 0x116477a5 */
  if (!C.zf) goto L_116477a5;
L_116477d5:;
  /* 116477d5 push 9 */
  push32((uint32_t)(0x9u));
  /* 116477d7 call 0x1164b880 */
  push32(0x116477dcu); f_1164b880();
  /* 116477dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116477df:;
  /* 116477df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116477e2 push edx */
  push32((uint32_t)(EDX));
  /* 116477e3 call 0x11647ec0 */
  push32(0x116477e8u); f_11647ec0();
  /* 116477e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116477eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116477ed jne 0x11647810 */
  if (!C.zf) goto L_11647810;
  /* 116477ef push 0x11670784 */
  push32((uint32_t)(0x11670784u));
  /* 116477f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116477f6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 116477fb push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 11647800 push 2 */
  push32((uint32_t)(0x2u));
  /* 11647802 call 0x11645180 */
  push32(0x11647807u); f_11645180();
  /* 11647807 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164780a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164780d jne 0x11647810 */
  if (!C.zf) goto L_11647810;
  /* 1164780f int3  */
  x86_unimpl("int3 @ 0x1164780f");
L_11647810:;
  /* 11647810 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11647812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11647814 jne 0x116477df */
  if (!C.zf) goto L_116477df;
  /* 11647816 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647819 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164781c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1164781f:;
  /* 1164781f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647822 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11647825 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164782a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164782d je 0x11647872 */
  if (C.zf) goto L_11647872;
  /* 1164782f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647832 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647836 je 0x11647872 */
  if (C.zf) goto L_11647872;
  /* 11647838 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164783b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1164783e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11647843 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647846 je 0x11647872 */
  if (C.zf) goto L_11647872;
  /* 11647848 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164784b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164784f je 0x11647872 */
  if (C.zf) goto L_11647872;
  /* 11647851 push 0x1167091c */
  push32((uint32_t)(0x1167091cu));
  /* 11647856 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647858 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1164785d push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 11647862 push 2 */
  push32((uint32_t)(0x2u));
  /* 11647864 call 0x11645180 */
  push32(0x11647869u); f_11645180();
  /* 11647869 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164786c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164786f jne 0x11647872 */
  if (!C.zf) goto L_11647872;
  /* 11647871 int3  */
  x86_unimpl("int3 @ 0x11647871");
L_11647872:;
  /* 11647872 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11647874 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11647876 jne 0x1164781f */
  if (!C.zf) goto L_1164781f;
  /* 11647878 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164787b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164787f jne 0x1164788e */
  if (!C.zf) goto L_1164788e;
  /* 11647881 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647885 jne 0x1164788e */
  if (!C.zf) goto L_1164788e;
  /* 11647887 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1164788e:;
  /* 1164788e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647891 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647895 je 0x116478c9 */
  if (C.zf) goto L_116478c9;
L_11647897:;
  /* 11647897 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164789a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1164789d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116478a0 je 0x116478c3 */
  if (C.zf) goto L_116478c3;
  /* 116478a2 push 0x11670864 */
  push32((uint32_t)(0x11670864u));
  /* 116478a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116478a9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 116478ae push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 116478b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 116478b5 call 0x11645180 */
  push32(0x116478bau); f_11645180();
  /* 116478ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116478bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116478c0 jne 0x116478c3 */
  if (!C.zf) goto L_116478c3;
  /* 116478c2 int3  */
  x86_unimpl("int3 @ 0x116478c2");
L_116478c3:;
  /* 116478c3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116478c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116478c7 jne 0x11647897 */
  if (!C.zf) goto L_11647897;
L_116478c9:;
  /* 116478c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116478cc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116478cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116478d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 116478d4 call 0x1164b920 */
  push32(0x116478d9u); f_1164b920();
  /* 116478d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116478dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116478df pop edi */
  EDI = (pop32());
  /* 116478e0 pop esi */
  ESI = (pop32());
  /* 116478e1 pop ebx */
  EBX = (pop32());
  /* 116478e2 mov esp, ebp */
  ESP = (EBP);
  /* 116478e4 pop ebp */
  EBP = (pop32());
  /* 116478e5 ret  */
  ESPCHK(0x11647790u, _esp0);
  ESP += 4; return;
}

/* FUN_100078f0 @ 0x116478f0 (28 bytes, 11 insns) */
void f_116478f0(void) {
  FTRACE(0x116478f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116478f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116478f1 mov ebp, esp */
  EBP = (ESP);
  /* 116478f3 push ecx */
  push32((uint32_t)(ECX));
  /* 116478f4 mov eax, dword ptr [0x11673bdc] */
  EAX = (r32((uint32_t)(0x11673bdc)));
  /* 116478f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116478fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116478ff mov dword ptr [0x11673bdc], ecx */
  w32((uint32_t)(0x11673bdc), (ECX));
  /* 11647905 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647908 mov esp, ebp */
  ESP = (EBP);
  /* 1164790a pop ebp */
  EBP = (pop32());
  /* 1164790b ret  */
  ESPCHK(0x116478f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007910 @ 0x11647910 (157 bytes, 59 insns) */
void f_11647910(void) {
  FTRACE(0x11647910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11647910 push ebp */
  push32((uint32_t)(EBP));
  /* 11647911 mov ebp, esp */
  EBP = (ESP);
  /* 11647913 push ecx */
  push32((uint32_t)(ECX));
  /* 11647914 push ebx */
  push32((uint32_t)(EBX));
  /* 11647915 push esi */
  push32((uint32_t)(ESI));
  /* 11647916 push edi */
  push32((uint32_t)(EDI));
  /* 11647917 push 9 */
  push32((uint32_t)(0x9u));
  /* 11647919 call 0x1164b880 */
  push32(0x1164791eu); f_1164b880();
  /* 1164791e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647921 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647924 push eax */
  push32((uint32_t)(EAX));
  /* 11647925 call 0x11647ec0 */
  push32(0x1164792au); f_11647ec0();
  /* 1164792a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164792d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164792f je 0x1164799c */
  if (C.zf) goto L_1164799c;
  /* 11647931 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647934 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11647937 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1164793a:;
  /* 1164793a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164793d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11647940 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11647945 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647948 je 0x1164798d */
  if (C.zf) goto L_1164798d;
  /* 1164794a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164794d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647951 je 0x1164798d */
  if (C.zf) goto L_1164798d;
  /* 11647953 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647956 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11647959 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164795e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647961 je 0x1164798d */
  if (C.zf) goto L_1164798d;
  /* 11647963 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647966 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164796a je 0x1164798d */
  if (C.zf) goto L_1164798d;
  /* 1164796c push 0x1167091c */
  push32((uint32_t)(0x1167091cu));
  /* 11647971 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647973 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11647978 push 0x11670674 */
  push32((uint32_t)(0x11670674u));
  /* 1164797d push 2 */
  push32((uint32_t)(0x2u));
  /* 1164797f call 0x11645180 */
  push32(0x11647984u); f_11645180();
  /* 11647984 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647987 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164798a jne 0x1164798d */
  if (!C.zf) goto L_1164798d;
  /* 1164798c int3  */
  x86_unimpl("int3 @ 0x1164798c");
L_1164798d:;
  /* 1164798d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1164798f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11647991 jne 0x1164793a */
  if (!C.zf) goto L_1164793a;
  /* 11647993 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647996 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11647999 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1164799c:;
  /* 1164799c push 9 */
  push32((uint32_t)(0x9u));
  /* 1164799e call 0x1164b920 */
  push32(0x116479a3u); f_1164b920();
  /* 116479a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116479a6 pop edi */
  EDI = (pop32());
  /* 116479a7 pop esi */
  ESI = (pop32());
  /* 116479a8 pop ebx */
  EBX = (pop32());
  /* 116479a9 mov esp, ebp */
  ESP = (EBP);
  /* 116479ab pop ebp */
  EBP = (pop32());
  /* 116479ac ret  */
  ESPCHK(0x11647910u, _esp0);
  ESP += 4; return;
}

/* FUN_100079b0 @ 0x116479b0 (28 bytes, 11 insns) */
void f_116479b0(void) {
  FTRACE(0x116479b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116479b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116479b1 mov ebp, esp */
  EBP = (ESP);
  /* 116479b3 push ecx */
  push32((uint32_t)(ECX));
  /* 116479b4 mov eax, dword ptr [0x11674028] */
  EAX = (r32((uint32_t)(0x11674028)));
  /* 116479b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116479bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116479bf mov dword ptr [0x11674028], ecx */
  w32((uint32_t)(0x11674028), (ECX));
  /* 116479c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116479c8 mov esp, ebp */
  ESP = (EBP);
  /* 116479ca pop ebp */
  EBP = (pop32());
  /* 116479cb ret  */
  ESPCHK(0x116479b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100079d0 @ 0x116479d0 (136 bytes, 55 insns) */
void f_116479d0(void) {
  FTRACE(0x116479d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116479d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116479d1 mov ebp, esp */
  EBP = (ESP);
  /* 116479d3 push ecx */
  push32((uint32_t)(ECX));
  /* 116479d4 push ebx */
  push32((uint32_t)(EBX));
  /* 116479d5 push esi */
  push32((uint32_t)(ESI));
  /* 116479d6 push edi */
  push32((uint32_t)(EDI));
  /* 116479d7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_116479de:;
  /* 116479de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116479e1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116479e4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116479e7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 116479ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116479ec je 0x11647a4e */
  if (C.zf) goto L_11647a4e;
  /* 116479ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116479f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116479f3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116479f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116479f8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116479fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647a01 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11647a04 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11647a07 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647a09 je 0x11647a4c */
  if (C.zf) goto L_11647a4c;
L_11647a0b:;
  /* 11647a0b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11647a0e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11647a13 push eax */
  push32((uint32_t)(EAX));
  /* 11647a14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647a17 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11647a19 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 11647a1c push edx */
  push32((uint32_t)(EDX));
  /* 11647a1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647a20 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11647a23 push eax */
  push32((uint32_t)(EAX));
  /* 11647a24 push 0x11670960 */
  push32((uint32_t)(0x11670960u));
  /* 11647a29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647a2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11647a2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11647a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11647a31 call 0x11645180 */
  push32(0x11647a36u); f_11645180();
  /* 11647a36 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647a39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647a3c jne 0x11647a3f */
  if (!C.zf) goto L_11647a3f;
  /* 11647a3e int3  */
  x86_unimpl("int3 @ 0x11647a3e");
L_11647a3f:;
  /* 11647a3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11647a41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11647a43 jne 0x11647a0b */
  if (!C.zf) goto L_11647a0b;
  /* 11647a45 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11647a4c:;
  /* 11647a4c jmp 0x116479de */
  goto L_116479de;
L_11647a4e:;
  /* 11647a4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647a51 pop edi */
  EDI = (pop32());
  /* 11647a52 pop esi */
  ESI = (pop32());
  /* 11647a53 pop ebx */
  EBX = (pop32());
  /* 11647a54 mov esp, ebp */
  ESP = (EBP);
  /* 11647a56 pop ebp */
  EBP = (pop32());
  /* 11647a57 ret  */
  ESPCHK(0x116479d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a60 @ 0x11647a60 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11647a60(void) {
  FTRACE(0x11647a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11647a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11647a61 mov ebp, esp */
  EBP = (ESP);
  /* 11647a63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11647a66 push ebx */
  push32((uint32_t)(EBX));
  /* 11647a67 push esi */
  push32((uint32_t)(ESI));
  /* 11647a68 push edi */
  push32((uint32_t)(EDI));
  /* 11647a69 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11647a70 mov eax, dword ptr [0x11673bd4] */
  EAX = (r32((uint32_t)(0x11673bd4)));
  /* 11647a75 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11647a78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11647a7a jne 0x11647a86 */
  if (!C.zf) goto L_11647a86;
  /* 11647a7c mov eax, 1 */
  EAX = (0x1u);
  /* 11647a81 jmp 0x11647db8 */
  goto L_11647db8;
L_11647a86:;
  /* 11647a86 push 9 */
  push32((uint32_t)(0x9u));
  /* 11647a88 call 0x1164b880 */
  push32(0x11647a8du); f_1164b880();
  /* 11647a8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647a90 call 0x1164c000 */
  push32(0x11647a95u); f_1164c000();
  /* 11647a95 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11647a98 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647a9c je 0x11647ba9 */
  if (C.zf) goto L_11647ba9;
  /* 11647aa2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647aa6 je 0x11647ba9 */
  if (C.zf) goto L_11647ba9;
  /* 11647aac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11647aaf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11647ab2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11647ab5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11647ab8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11647abb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647abf ja 0x11647b72 */
  if ((!C.cf&&!C.zf)) goto L_11647b72;
  /* 11647ac5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11647ac8 jmp dword ptr [eax*4 + 0x11647dbf] */
  switch (EAX) {
    case 0: goto L_11647b4a;
    case 1: goto L_11647b22;
    case 2: goto L_11647afa;
    case 3: goto L_11647acf;
    default: x86_unimpl("switch@0x11647ac8 out of table"); return;
  }
L_11647acf:;
  /* 11647acf push 0x11670ab4 */
  push32((uint32_t)(0x11670ab4u));
  /* 11647ad4 push 0x11670614 */
  push32((uint32_t)(0x11670614u));
  /* 11647ad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647adb push 0 */
  push32((uint32_t)(0x0u));
  /* 11647add push 0 */
  push32((uint32_t)(0x0u));
  /* 11647adf push 0 */
  push32((uint32_t)(0x0u));
  /* 11647ae1 call 0x11645180 */
  push32(0x11647ae6u); f_11645180();
  /* 11647ae6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647ae9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647aec jne 0x11647aef */
  if (!C.zf) goto L_11647aef;
  /* 11647aee int3  */
  x86_unimpl("int3 @ 0x11647aee");
L_11647aef:;
  /* 11647aef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11647af1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11647af3 jne 0x11647acf */
  if (!C.zf) goto L_11647acf;
  /* 11647af5 jmp 0x11647b98 */
  goto L_11647b98;
L_11647afa:;
  /* 11647afa push 0x11670a90 */
  push32((uint32_t)(0x11670a90u));
  /* 11647aff push 0x11670614 */
  push32((uint32_t)(0x11670614u));
  /* 11647b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647b0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11647b0c call 0x11645180 */
  push32(0x11647b11u); f_11645180();
  /* 11647b11 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647b14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647b17 jne 0x11647b1a */
  if (!C.zf) goto L_11647b1a;
  /* 11647b19 int3  */
  x86_unimpl("int3 @ 0x11647b19");
L_11647b1a:;
  /* 11647b1a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11647b1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11647b1e jne 0x11647afa */
  if (!C.zf) goto L_11647afa;
  /* 11647b20 jmp 0x11647b98 */
  goto L_11647b98;
L_11647b22:;
  /* 11647b22 push 0x11670a6c */
  push32((uint32_t)(0x11670a6cu));
  /* 11647b27 push 0x11670614 */
  push32((uint32_t)(0x11670614u));
  /* 11647b2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11647b2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11647b30 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647b34 call 0x11645180 */
  push32(0x11647b39u); f_11645180();
  /* 11647b39 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647b3c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647b3f jne 0x11647b42 */
  if (!C.zf) goto L_11647b42;
  /* 11647b41 int3  */
  x86_unimpl("int3 @ 0x11647b41");
L_11647b42:;
  /* 11647b42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11647b44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11647b46 jne 0x11647b22 */
  if (!C.zf) goto L_11647b22;
  /* 11647b48 jmp 0x11647b98 */
  goto L_11647b98;
L_11647b4a:;
  /* 11647b4a push 0x11670a48 */
  push32((uint32_t)(0x11670a48u));
  /* 11647b4f push 0x11670614 */
  push32((uint32_t)(0x11670614u));
  /* 11647b54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647b56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647b58 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647b5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11647b5c call 0x11645180 */
  push32(0x11647b61u); f_11645180();
  /* 11647b61 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647b64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647b67 jne 0x11647b6a */
  if (!C.zf) goto L_11647b6a;
  /* 11647b69 int3  */
  x86_unimpl("int3 @ 0x11647b69");
L_11647b6a:;
  /* 11647b6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11647b6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11647b6e jne 0x11647b4a */
  if (!C.zf) goto L_11647b4a;
  /* 11647b70 jmp 0x11647b98 */
  goto L_11647b98;
L_11647b72:;
  /* 11647b72 push 0x11670a1c */
  push32((uint32_t)(0x11670a1cu));
  /* 11647b77 push 0x11670614 */
  push32((uint32_t)(0x11670614u));
  /* 11647b7c push 0 */
  push32((uint32_t)(0x0u));
  /* 11647b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11647b80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647b82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647b84 call 0x11645180 */
  push32(0x11647b89u); f_11645180();
  /* 11647b89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647b8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647b8f jne 0x11647b92 */
  if (!C.zf) goto L_11647b92;
  /* 11647b91 int3  */
  x86_unimpl("int3 @ 0x11647b91");
L_11647b92:;
  /* 11647b92 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11647b94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11647b96 jne 0x11647b72 */
  if (!C.zf) goto L_11647b72;
L_11647b98:;
  /* 11647b98 push 9 */
  push32((uint32_t)(0x9u));
  /* 11647b9a call 0x1164b920 */
  push32(0x11647b9fu); f_1164b920();
  /* 11647b9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647ba2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11647ba4 jmp 0x11647db8 */
  goto L_11647db8;
L_11647ba9:;
  /* 11647ba9 mov eax, dword ptr [0x11675ff4] */
  EAX = (r32((uint32_t)(0x11675ff4)));
  /* 11647bae mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11647bb1 jmp 0x11647bbb */
  goto L_11647bbb;
L_11647bb3:;
  /* 11647bb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647bb6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11647bb8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11647bbb:;
  /* 11647bbb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647bbf je 0x11647dab */
  if (C.zf) goto L_11647dab;
  /* 11647bc5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11647bcc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647bcf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11647bd2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11647bd8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647bdb je 0x11647c00 */
  if (C.zf) goto L_11647c00;
  /* 11647bdd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647be0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647be4 je 0x11647c00 */
  if (C.zf) goto L_11647c00;
  /* 11647be6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647be9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11647bec and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11647bf2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647bf5 je 0x11647c00 */
  if (C.zf) goto L_11647c00;
  /* 11647bf7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647bfa cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647bfe jne 0x11647c18 */
  if (!C.zf) goto L_11647c18;
L_11647c00:;
  /* 11647c00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647c03 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11647c06 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11647c0c mov edx, dword ptr [ecx*4 + 0x11673be4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11673be4)));
  /* 11647c13 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11647c16 jmp 0x11647c1f */
  goto L_11647c1f;
L_11647c18:;
  /* 11647c18 mov dword ptr [ebp - 0x14], 0x11670a14 */
  w32((uint32_t)(EBP + -0x14), (0x11670a14u));
L_11647c1f:;
  /* 11647c1f push 4 */
  push32((uint32_t)(0x4u));
  /* 11647c21 mov al, byte ptr [0x11673be0] */
  AL = (r8((uint32_t)(0x11673be0)));
  /* 11647c26 push eax */
  push32((uint32_t)(EAX));
  /* 11647c27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647c2a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11647c2d push ecx */
  push32((uint32_t)(ECX));
  /* 11647c2e call 0x116479d0 */
  push32(0x11647c33u); f_116479d0();
  /* 11647c33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647c36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11647c38 jne 0x11647c74 */
  if (!C.zf) goto L_11647c74;
L_11647c3a:;
  /* 11647c3a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647c3d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11647c40 push edx */
  push32((uint32_t)(EDX));
  /* 11647c41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647c44 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11647c47 push ecx */
  push32((uint32_t)(ECX));
  /* 11647c48 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11647c4b push edx */
  push32((uint32_t)(EDX));
  /* 11647c4c push 0x116708f0 */
  push32((uint32_t)(0x116708f0u));
  /* 11647c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647c57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647c59 call 0x11645180 */
  push32(0x11647c5eu); f_11645180();
  /* 11647c5e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647c61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647c64 jne 0x11647c67 */
  if (!C.zf) goto L_11647c67;
  /* 11647c66 int3  */
  x86_unimpl("int3 @ 0x11647c66");
L_11647c67:;
  /* 11647c67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11647c69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11647c6b jne 0x11647c3a */
  if (!C.zf) goto L_11647c3a;
  /* 11647c6d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11647c74:;
  /* 11647c74 push 4 */
  push32((uint32_t)(0x4u));
  /* 11647c76 mov cl, byte ptr [0x11673be0] */
  CL = (r8((uint32_t)(0x11673be0)));
  /* 11647c7c push ecx */
  push32((uint32_t)(ECX));
  /* 11647c7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647c80 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11647c83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647c86 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11647c8a push edx */
  push32((uint32_t)(EDX));
  /* 11647c8b call 0x116479d0 */
  push32(0x11647c90u); f_116479d0();
  /* 11647c90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647c93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11647c95 jne 0x11647cd1 */
  if (!C.zf) goto L_11647cd1;
L_11647c97:;
  /* 11647c97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647c9a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11647c9d push eax */
  push32((uint32_t)(EAX));
  /* 11647c9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647ca1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11647ca4 push edx */
  push32((uint32_t)(EDX));
  /* 11647ca5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11647ca8 push eax */
  push32((uint32_t)(EAX));
  /* 11647ca9 push 0x116708c4 */
  push32((uint32_t)(0x116708c4u));
  /* 11647cae push 0 */
  push32((uint32_t)(0x0u));
  /* 11647cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647cb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647cb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647cb6 call 0x11645180 */
  push32(0x11647cbbu); f_11645180();
  /* 11647cbb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647cbe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647cc1 jne 0x11647cc4 */
  if (!C.zf) goto L_11647cc4;
  /* 11647cc3 int3  */
  x86_unimpl("int3 @ 0x11647cc3");
L_11647cc4:;
  /* 11647cc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11647cc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11647cc8 jne 0x11647c97 */
  if (!C.zf) goto L_11647c97;
  /* 11647cca mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11647cd1:;
  /* 11647cd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647cd4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647cd8 jne 0x11647d2a */
  if (!C.zf) goto L_11647d2a;
  /* 11647cda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647cdd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11647ce0 push ecx */
  push32((uint32_t)(ECX));
  /* 11647ce1 mov dl, byte ptr [0x11673be1] */
  DL = (r8((uint32_t)(0x11673be1)));
  /* 11647ce7 push edx */
  push32((uint32_t)(EDX));
  /* 11647ce8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647ceb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11647cee push eax */
  push32((uint32_t)(EAX));
  /* 11647cef call 0x116479d0 */
  push32(0x11647cf4u); f_116479d0();
  /* 11647cf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647cf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11647cf9 jne 0x11647d2a */
  if (!C.zf) goto L_11647d2a;
L_11647cfb:;
  /* 11647cfb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647cfe add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11647d01 push ecx */
  push32((uint32_t)(ECX));
  /* 11647d02 push 0x116709e8 */
  push32((uint32_t)(0x116709e8u));
  /* 11647d07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647d0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11647d0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11647d0f call 0x11645180 */
  push32(0x11647d14u); f_11645180();
  /* 11647d14 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647d17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647d1a jne 0x11647d1d */
  if (!C.zf) goto L_11647d1d;
  /* 11647d1c int3  */
  x86_unimpl("int3 @ 0x11647d1c");
L_11647d1d:;
  /* 11647d1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11647d1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11647d21 jne 0x11647cfb */
  if (!C.zf) goto L_11647cfb;
  /* 11647d23 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11647d2a:;
  /* 11647d2a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647d2e jne 0x11647da6 */
  if (!C.zf) goto L_11647da6;
  /* 11647d30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647d33 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647d37 je 0x11647d6c */
  if (C.zf) goto L_11647d6c;
L_11647d39:;
  /* 11647d39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647d3c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11647d3f push edx */
  push32((uint32_t)(EDX));
  /* 11647d40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647d43 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11647d46 push ecx */
  push32((uint32_t)(ECX));
  /* 11647d47 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11647d4a push edx */
  push32((uint32_t)(EDX));
  /* 11647d4b push 0x116709c8 */
  push32((uint32_t)(0x116709c8u));
  /* 11647d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647d56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647d58 call 0x11645180 */
  push32(0x11647d5du); f_11645180();
  /* 11647d5d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647d60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647d63 jne 0x11647d66 */
  if (!C.zf) goto L_11647d66;
  /* 11647d65 int3  */
  x86_unimpl("int3 @ 0x11647d65");
L_11647d66:;
  /* 11647d66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11647d68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11647d6a jne 0x11647d39 */
  if (!C.zf) goto L_11647d39;
L_11647d6c:;
  /* 11647d6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647d6f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11647d72 push edx */
  push32((uint32_t)(EDX));
  /* 11647d73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11647d76 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11647d79 push eax */
  push32((uint32_t)(EAX));
  /* 11647d7a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11647d7d push ecx */
  push32((uint32_t)(ECX));
  /* 11647d7e push 0x1167099c */
  push32((uint32_t)(0x1167099cu));
  /* 11647d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647d89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647d8b call 0x11645180 */
  push32(0x11647d90u); f_11645180();
  /* 11647d90 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647d93 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647d96 jne 0x11647d99 */
  if (!C.zf) goto L_11647d99;
  /* 11647d98 int3  */
  x86_unimpl("int3 @ 0x11647d98");
L_11647d99:;
  /* 11647d99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11647d9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11647d9d jne 0x11647d6c */
  if (!C.zf) goto L_11647d6c;
  /* 11647d9f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11647da6:;
  /* 11647da6 jmp 0x11647bb3 */
  goto L_11647bb3;
L_11647dab:;
  /* 11647dab push 9 */
  push32((uint32_t)(0x9u));
  /* 11647dad call 0x1164b920 */
  push32(0x11647db2u); f_1164b920();
  /* 11647db2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11647db8:;
  /* 11647db8 pop edi */
  EDI = (pop32());
  /* 11647db9 pop esi */
  ESI = (pop32());
  /* 11647dba pop ebx */
  EBX = (pop32());
  /* 11647dbb mov esp, ebp */
  ESP = (EBP);
  /* 11647dbd pop ebp */
  EBP = (pop32());
  /* 11647dbe ret  */
  ESPCHK(0x11647a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007dd0 @ 0x11647dd0 (34 bytes, 13 insns) */
void f_11647dd0(void) {
  FTRACE(0x11647dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11647dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11647dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11647dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11647dd4 mov eax, dword ptr [0x11673bd4] */
  EAX = (r32((uint32_t)(0x11673bd4)));
  /* 11647dd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11647ddc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647de0 je 0x11647deb */
  if (C.zf) goto L_11647deb;
  /* 11647de2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647de5 mov dword ptr [0x11673bd4], ecx */
  w32((uint32_t)(0x11673bd4), (ECX));
L_11647deb:;
  /* 11647deb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647dee mov esp, ebp */
  ESP = (EBP);
  /* 11647df0 pop ebp */
  EBP = (pop32());
  /* 11647df1 ret  */
  ESPCHK(0x11647dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e00 @ 0x11647e00 (103 bytes, 38 insns) */
void f_11647e00(void) {
  FTRACE(0x11647e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11647e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11647e01 mov ebp, esp */
  EBP = (ESP);
  /* 11647e03 push ecx */
  push32((uint32_t)(ECX));
  /* 11647e04 mov eax, dword ptr [0x11673bd4] */
  EAX = (r32((uint32_t)(0x11673bd4)));
  /* 11647e09 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11647e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11647e0e jne 0x11647e12 */
  if (!C.zf) goto L_11647e12;
  /* 11647e10 jmp 0x11647e63 */
  goto L_11647e63;
L_11647e12:;
  /* 11647e12 push 9 */
  push32((uint32_t)(0x9u));
  /* 11647e14 call 0x1164b880 */
  push32(0x11647e19u); f_1164b880();
  /* 11647e19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647e1c mov ecx, dword ptr [0x11675ff4] */
  ECX = (r32((uint32_t)(0x11675ff4)));
  /* 11647e22 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11647e25 jmp 0x11647e2f */
  goto L_11647e2f;
L_11647e27:;
  /* 11647e27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647e2a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11647e2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11647e2f:;
  /* 11647e2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647e33 je 0x11647e59 */
  if (C.zf) goto L_11647e59;
  /* 11647e35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647e38 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11647e3b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11647e41 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647e44 jne 0x11647e57 */
  if (!C.zf) goto L_11647e57;
  /* 11647e46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11647e49 push eax */
  push32((uint32_t)(EAX));
  /* 11647e4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647e4d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11647e50 push ecx */
  push32((uint32_t)(ECX));
  /* 11647e51 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11647e54u);
  /* 11647e54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11647e57:;
  /* 11647e57 jmp 0x11647e27 */
  goto L_11647e27;
L_11647e59:;
  /* 11647e59 push 9 */
  push32((uint32_t)(0x9u));
  /* 11647e5b call 0x1164b920 */
  push32(0x11647e60u); f_1164b920();
  /* 11647e60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11647e63:;
  /* 11647e63 mov esp, ebp */
  ESP = (EBP);
  /* 11647e65 pop ebp */
  EBP = (pop32());
  /* 11647e66 ret  */
  ESPCHK(0x11647e00u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11647e70 (75 bytes, 28 insns) */
void f_11647e70(void) {
  FTRACE(0x11647e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11647e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11647e71 mov ebp, esp */
  EBP = (ESP);
  /* 11647e73 push ecx */
  push32((uint32_t)(ECX));
  /* 11647e74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647e78 je 0x11647ead */
  if (C.zf) goto L_11647ead;
  /* 11647e7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11647e7d push eax */
  push32((uint32_t)(EAX));
  /* 11647e7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647e81 push ecx */
  push32((uint32_t)(ECX));
  /* 11647e82 call dword ptr [0x116783ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783ac))), 0x11647e88u);
  /* 11647e88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11647e8a jne 0x11647ead */
  if (!C.zf) goto L_11647ead;
  /* 11647e8c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647e90 je 0x11647ea4 */
  if (C.zf) goto L_11647ea4;
  /* 11647e92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11647e95 push edx */
  push32((uint32_t)(EDX));
  /* 11647e96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647e99 push eax */
  push32((uint32_t)(EAX));
  /* 11647e9a call dword ptr [0x116783a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783a8))), 0x11647ea0u);
  /* 11647ea0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11647ea2 jne 0x11647ead */
  if (!C.zf) goto L_11647ead;
L_11647ea4:;
  /* 11647ea4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11647eab jmp 0x11647eb4 */
  goto L_11647eb4;
L_11647ead:;
  /* 11647ead mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11647eb4:;
  /* 11647eb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647eb7 mov esp, ebp */
  ESP = (EBP);
  /* 11647eb9 pop ebp */
  EBP = (pop32());
  /* 11647eba ret  */
  ESPCHK(0x11647e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ec0 @ 0x11647ec0 (134 bytes, 50 insns) */
void f_11647ec0(void) {
  FTRACE(0x11647ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11647ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11647ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11647ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 11647ec4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647ec8 jne 0x11647ece */
  if (!C.zf) goto L_11647ece;
  /* 11647eca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11647ecc jmp 0x11647f42 */
  goto L_11647f42;
L_11647ece:;
  /* 11647ece push 1 */
  push32((uint32_t)(0x1u));
  /* 11647ed0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11647ed2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647ed5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11647ed8 push eax */
  push32((uint32_t)(EAX));
  /* 11647ed9 call 0x11647e70 */
  push32(0x11647edeu); f_11647e70();
  /* 11647ede add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647ee1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11647ee3 jne 0x11647ee9 */
  if (!C.zf) goto L_11647ee9;
  /* 11647ee5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11647ee7 jmp 0x11647f42 */
  goto L_11647f42;
L_11647ee9:;
  /* 11647ee9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647eec sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11647eef push ecx */
  push32((uint32_t)(ECX));
  /* 11647ef0 call 0x1164c120 */
  push32(0x11647ef5u); f_1164c120();
  /* 11647ef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647ef8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11647efb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647eff je 0x11647f16 */
  if (C.zf) goto L_11647f16;
  /* 11647f01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647f04 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11647f07 push edx */
  push32((uint32_t)(EDX));
  /* 11647f08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647f0b push eax */
  push32((uint32_t)(EAX));
  /* 11647f0c call 0x1164c180 */
  push32(0x11647f11u); f_1164c180();
  /* 11647f11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647f14 jmp 0x11647f42 */
  goto L_11647f42;
L_11647f16:;
  /* 11647f16 mov ecx, dword ptr [0x11675fa8] */
  ECX = (r32((uint32_t)(0x11675fa8)));
  /* 11647f1c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11647f22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11647f24 je 0x11647f2d */
  if (C.zf) goto L_11647f2d;
  /* 11647f26 mov eax, 1 */
  EAX = (0x1u);
  /* 11647f2b jmp 0x11647f42 */
  goto L_11647f42;
L_11647f2d:;
  /* 11647f2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647f30 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11647f33 push edx */
  push32((uint32_t)(EDX));
  /* 11647f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11647f36 mov eax, dword ptr [0x1167794c] */
  EAX = (r32((uint32_t)(0x1167794c)));
  /* 11647f3b push eax */
  push32((uint32_t)(EAX));
  /* 11647f3c call dword ptr [0x116783b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783b0))), 0x11647f42u);
L_11647f42:;
  /* 11647f42 mov esp, ebp */
  ESP = (EBP);
  /* 11647f44 pop ebp */
  EBP = (pop32());
  /* 11647f45 ret  */
  ESPCHK(0x11647ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f50 @ 0x11647f50 (227 bytes, 80 insns) */
void f_11647f50(void) {
  FTRACE(0x11647f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11647f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11647f51 mov ebp, esp */
  EBP = (ESP);
  /* 11647f53 push ecx */
  push32((uint32_t)(ECX));
  /* 11647f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647f57 push eax */
  push32((uint32_t)(EAX));
  /* 11647f58 call 0x11647ec0 */
  push32(0x11647f5du); f_11647ec0();
  /* 11647f5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647f60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11647f62 jne 0x11647f6b */
  if (!C.zf) goto L_11647f6b;
  /* 11647f64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11647f66 jmp 0x1164802f */
  goto L_1164802f;
L_11647f6b:;
  /* 11647f6b push 9 */
  push32((uint32_t)(0x9u));
  /* 11647f6d call 0x1164b880 */
  push32(0x11647f72u); f_1164b880();
  /* 11647f72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647f75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647f78 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11647f7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11647f7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647f81 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11647f84 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11647f89 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647f8c je 0x11647fb0 */
  if (C.zf) goto L_11647fb0;
  /* 11647f8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647f91 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647f95 je 0x11647fb0 */
  if (C.zf) goto L_11647fb0;
  /* 11647f97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647f9a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11647f9d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11647fa2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647fa5 je 0x11647fb0 */
  if (C.zf) goto L_11647fb0;
  /* 11647fa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647faa cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647fae jne 0x11648023 */
  if (!C.zf) goto L_11648023;
L_11647fb0:;
  /* 11647fb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11647fb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11647fb5 push edx */
  push32((uint32_t)(EDX));
  /* 11647fb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11647fb9 push eax */
  push32((uint32_t)(EAX));
  /* 11647fba call 0x11647e70 */
  push32(0x11647fbfu); f_11647e70();
  /* 11647fbf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11647fc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11647fc4 je 0x11648023 */
  if (C.zf) goto L_11648023;
  /* 11647fc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647fc9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11647fcc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647fcf jne 0x11648023 */
  if (!C.zf) goto L_11648023;
  /* 11647fd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647fd4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11647fd7 cmp ecx, dword ptr [0x11673bd8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11673bd8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647fdd jg 0x11648023 */
  if ((!C.zf&&C.sf==C.of)) goto L_11648023;
  /* 11647fdf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647fe3 je 0x11647ff0 */
  if (C.zf) goto L_11647ff0;
  /* 11647fe5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11647fe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647feb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11647fee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11647ff0:;
  /* 11647ff0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11647ff4 je 0x11648001 */
  if (C.zf) goto L_11648001;
  /* 11647ff6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11647ff9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11647ffc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11647fff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11648001:;
  /* 11648001 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648005 je 0x11648012 */
  if (C.zf) goto L_11648012;
  /* 11648007 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1164800a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164800d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11648010 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11648012:;
  /* 11648012 push 9 */
  push32((uint32_t)(0x9u));
  /* 11648014 call 0x1164b920 */
  push32(0x11648019u); f_1164b920();
  /* 11648019 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164801c mov eax, 1 */
  EAX = (0x1u);
  /* 11648021 jmp 0x1164802f */
  goto L_1164802f;
L_11648023:;
  /* 11648023 push 9 */
  push32((uint32_t)(0x9u));
  /* 11648025 call 0x1164b920 */
  push32(0x1164802au); f_1164b920();
  /* 1164802a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164802d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1164802f:;
  /* 1164802f mov esp, ebp */
  ESP = (EBP);
  /* 11648031 pop ebp */
  EBP = (pop32());
  /* 11648032 ret  */
  ESPCHK(0x11647f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008040 @ 0x11648040 (28 bytes, 11 insns) */
void f_11648040(void) {
  FTRACE(0x11648040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11648040 push ebp */
  push32((uint32_t)(EBP));
  /* 11648041 mov ebp, esp */
  EBP = (ESP);
  /* 11648043 push ecx */
  push32((uint32_t)(ECX));
  /* 11648044 mov eax, dword ptr [0x11677958] */
  EAX = (r32((uint32_t)(0x11677958)));
  /* 11648049 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164804c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164804f mov dword ptr [0x11677958], ecx */
  w32((uint32_t)(0x11677958), (ECX));
  /* 11648055 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648058 mov esp, ebp */
  ESP = (EBP);
  /* 1164805a pop ebp */
  EBP = (pop32());
  /* 1164805b ret  */
  ESPCHK(0x11648040u, _esp0);
  ESP += 4; return;
}

/* FUN_10008060 @ 0x11648060 (362 bytes, 116 insns) */
void f_11648060(void) {
  FTRACE(0x11648060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11648060 push ebp */
  push32((uint32_t)(EBP));
  /* 11648061 mov ebp, esp */
  EBP = (ESP);
  /* 11648063 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11648066 push ebx */
  push32((uint32_t)(EBX));
  /* 11648067 push esi */
  push32((uint32_t)(ESI));
  /* 11648068 push edi */
  push32((uint32_t)(EDI));
  /* 11648069 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164806d jne 0x1164809a */
  if (!C.zf) goto L_1164809a;
L_1164806f:;
  /* 1164806f push 0x11670afc */
  push32((uint32_t)(0x11670afcu));
  /* 11648074 push 0x11670614 */
  push32((uint32_t)(0x11670614u));
  /* 11648079 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164807b push 0 */
  push32((uint32_t)(0x0u));
  /* 1164807d push 0 */
  push32((uint32_t)(0x0u));
  /* 1164807f push 0 */
  push32((uint32_t)(0x0u));
  /* 11648081 call 0x11645180 */
  push32(0x11648086u); f_11645180();
  /* 11648086 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11648089 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164808c jne 0x1164808f */
  if (!C.zf) goto L_1164808f;
  /* 1164808e int3  */
  x86_unimpl("int3 @ 0x1164808e");
L_1164808f:;
  /* 1164808f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11648091 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11648093 jne 0x1164806f */
  if (!C.zf) goto L_1164806f;
  /* 11648095 jmp 0x116481c3 */
  goto L_116481c3;
L_1164809a:;
  /* 1164809a push 9 */
  push32((uint32_t)(0x9u));
  /* 1164809c call 0x1164b880 */
  push32(0x116480a1u); f_1164b880();
  /* 116480a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116480a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116480a7 mov edx, dword ptr [0x11675ff4] */
  EDX = (r32((uint32_t)(0x11675ff4)));
  /* 116480ad mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116480af mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116480b6 jmp 0x116480c1 */
  goto L_116480c1;
L_116480b8:;
  /* 116480b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116480bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116480be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116480c1:;
  /* 116480c1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116480c5 jge 0x116480e5 */
  if ((C.sf==C.of)) goto L_116480e5;
  /* 116480c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116480ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116480cd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 116480d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116480d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116480db mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 116480e3 jmp 0x116480b8 */
  goto L_116480b8;
L_116480e5:;
  /* 116480e5 mov edx, dword ptr [0x11675ff4] */
  EDX = (r32((uint32_t)(0x11675ff4)));
  /* 116480eb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116480ee jmp 0x116480f8 */
  goto L_116480f8;
L_116480f0:;
  /* 116480f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116480f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116480f5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116480f8:;
  /* 116480f8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116480fc je 0x116481a1 */
  if (C.zf) goto L_116481a1;
  /* 11648102 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11648105 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11648108 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164810d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164810f jl 0x11648177 */
  if ((C.sf!=C.of)) goto L_11648177;
  /* 11648111 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11648114 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11648117 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164811d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648120 jge 0x11648177 */
  if ((C.sf==C.of)) goto L_11648177;
  /* 11648122 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11648125 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11648128 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1164812e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11648131 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11648135 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648138 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164813b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1164813e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11648144 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11648147 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1164814b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164814e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11648151 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11648156 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11648159 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1164815d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11648160 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648163 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11648166 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11648169 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164816e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11648171 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11648175 jmp 0x1164819c */
  goto L_1164819c;
L_11648177:;
  /* 11648177 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164817a push edx */
  push32((uint32_t)(EDX));
  /* 1164817b push 0x11670ad8 */
  push32((uint32_t)(0x11670ad8u));
  /* 11648180 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648182 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648184 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648186 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648188 call 0x11645180 */
  push32(0x1164818du); f_11645180();
  /* 1164818d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11648190 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648193 jne 0x11648196 */
  if (!C.zf) goto L_11648196;
  /* 11648195 int3  */
  x86_unimpl("int3 @ 0x11648195");
L_11648196:;
  /* 11648196 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11648198 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164819a jne 0x11648177 */
  if (!C.zf) goto L_11648177;
L_1164819c:;
  /* 1164819c jmp 0x116480f0 */
  goto L_116480f0;
L_116481a1:;
  /* 116481a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116481a4 mov edx, dword ptr [0x11675ffc] */
  EDX = (r32((uint32_t)(0x11675ffc)));
  /* 116481aa mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 116481ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116481b0 mov ecx, dword ptr [0x11675ff0] */
  ECX = (r32((uint32_t)(0x11675ff0)));
  /* 116481b6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 116481b9 push 9 */
  push32((uint32_t)(0x9u));
  /* 116481bb call 0x1164b920 */
  push32(0x116481c0u); f_1164b920();
  /* 116481c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116481c3:;
  /* 116481c3 pop edi */
  EDI = (pop32());
  /* 116481c4 pop esi */
  ESI = (pop32());
  /* 116481c5 pop ebx */
  EBX = (pop32());
  /* 116481c6 mov esp, ebp */
  ESP = (EBP);
  /* 116481c8 pop ebp */
  EBP = (pop32());
  /* 116481c9 ret  */
  ESPCHK(0x11648060u, _esp0);
  ESP += 4; return;
}

/* FUN_100081d0 @ 0x116481d0 (291 bytes, 95 insns) */
void f_116481d0(void) {
  FTRACE(0x116481d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116481d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116481d1 mov ebp, esp */
  EBP = (ESP);
  /* 116481d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116481d6 push ebx */
  push32((uint32_t)(EBX));
  /* 116481d7 push esi */
  push32((uint32_t)(ESI));
  /* 116481d8 push edi */
  push32((uint32_t)(EDI));
  /* 116481d9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116481e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116481e4 je 0x116481f2 */
  if (C.zf) goto L_116481f2;
  /* 116481e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116481ea je 0x116481f2 */
  if (C.zf) goto L_116481f2;
  /* 116481ec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116481f0 jne 0x11648220 */
  if (!C.zf) goto L_11648220;
L_116481f2:;
  /* 116481f2 push 0x11670b24 */
  push32((uint32_t)(0x11670b24u));
  /* 116481f7 push 0x11670614 */
  push32((uint32_t)(0x11670614u));
  /* 116481fc push 0 */
  push32((uint32_t)(0x0u));
  /* 116481fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11648200 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648202 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648204 call 0x11645180 */
  push32(0x11648209u); f_11645180();
  /* 11648209 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164820c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164820f jne 0x11648212 */
  if (!C.zf) goto L_11648212;
  /* 11648211 int3  */
  x86_unimpl("int3 @ 0x11648211");
L_11648212:;
  /* 11648212 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11648214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11648216 jne 0x116481f2 */
  if (!C.zf) goto L_116481f2;
  /* 11648218 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164821b jmp 0x116482ec */
  goto L_116482ec;
L_11648220:;
  /* 11648220 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11648227 jmp 0x11648232 */
  goto L_11648232;
L_11648229:;
  /* 11648229 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164822c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164822f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11648232:;
  /* 11648232 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648236 jge 0x116482bc */
  if ((C.sf==C.of)) goto L_116482bc;
  /* 1164823c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164823f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648242 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648245 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11648248 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1164824c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11648250 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648253 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11648256 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1164825a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164825d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648260 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648263 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11648266 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1164826a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164826e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648271 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11648274 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11648278 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164827b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164827e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648283 jne 0x11648292 */
  if (!C.zf) goto L_11648292;
  /* 11648285 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648288 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164828b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648290 je 0x116482b7 */
  if (C.zf) goto L_116482b7;
L_11648292:;
  /* 11648292 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648296 je 0x116482b7 */
  if (C.zf) goto L_116482b7;
  /* 11648298 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164829c jne 0x116482b0 */
  if (!C.zf) goto L_116482b0;
  /* 1164829e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116482a2 jne 0x116482b7 */
  if (!C.zf) goto L_116482b7;
  /* 116482a4 mov eax, dword ptr [0x11673bd4] */
  EAX = (r32((uint32_t)(0x11673bd4)));
  /* 116482a9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 116482ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116482ae je 0x116482b7 */
  if (C.zf) goto L_116482b7;
L_116482b0:;
  /* 116482b0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_116482b7:;
  /* 116482b7 jmp 0x11648229 */
  goto L_11648229;
L_116482bc:;
  /* 116482bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116482bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116482c2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 116482c5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116482c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116482cb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 116482ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116482d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116482d4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 116482d7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116482da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116482dd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 116482e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116482e3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116482e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_116482ec:;
  /* 116482ec pop edi */
  EDI = (pop32());
  /* 116482ed pop esi */
  ESI = (pop32());
  /* 116482ee pop ebx */
  EBX = (pop32());
  /* 116482ef mov esp, ebp */
  ESP = (EBP);
  /* 116482f1 pop ebp */
  EBP = (pop32());
  /* 116482f2 ret  */
  ESPCHK(0x116481d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008300 @ 0x11648300 (697 bytes, 253 insns) */
void f_11648300(void) {
  FTRACE(0x11648300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11648300 push ebp */
  push32((uint32_t)(EBP));
  /* 11648301 mov ebp, esp */
  EBP = (ESP);
  /* 11648303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11648306 push ebx */
  push32((uint32_t)(EBX));
  /* 11648307 push esi */
  push32((uint32_t)(ESI));
  /* 11648308 push edi */
  push32((uint32_t)(EDI));
  /* 11648309 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11648310 push 9 */
  push32((uint32_t)(0x9u));
  /* 11648312 call 0x1164b880 */
  push32(0x11648317u); f_1164b880();
  /* 11648317 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164831a:;
  /* 1164831a push 0x11670c1c */
  push32((uint32_t)(0x11670c1cu));
  /* 1164831f push 0x11670614 */
  push32((uint32_t)(0x11670614u));
  /* 11648324 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648326 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648328 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164832a push 0 */
  push32((uint32_t)(0x0u));
  /* 1164832c call 0x11645180 */
  push32(0x11648331u); f_11645180();
  /* 11648331 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11648334 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648337 jne 0x1164833a */
  if (!C.zf) goto L_1164833a;
  /* 11648339 int3  */
  x86_unimpl("int3 @ 0x11648339");
L_1164833a:;
  /* 1164833a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164833c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164833e jne 0x1164831a */
  if (!C.zf) goto L_1164831a;
  /* 11648340 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648344 je 0x1164834e */
  if (C.zf) goto L_1164834e;
  /* 11648346 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11648349 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1164834b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1164834e:;
  /* 1164834e mov eax, dword ptr [0x11675ff4] */
  EAX = (r32((uint32_t)(0x11675ff4)));
  /* 11648353 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11648356 jmp 0x11648360 */
  goto L_11648360;
L_11648358:;
  /* 11648358 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164835b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1164835d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11648360:;
  /* 11648360 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648364 je 0x11648582 */
  if (C.zf) goto L_11648582;
  /* 1164836a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164836d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648370 je 0x11648582 */
  if (C.zf) goto L_11648582;
  /* 11648376 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648379 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1164837c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11648382 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648385 je 0x116483b4 */
  if (C.zf) goto L_116483b4;
  /* 11648387 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164838a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1164838d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11648393 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11648395 je 0x116483b4 */
  if (C.zf) goto L_116483b4;
  /* 11648397 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164839a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1164839d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116483a2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116483a5 jne 0x116483b9 */
  if (!C.zf) goto L_116483b9;
  /* 116483a7 mov ecx, dword ptr [0x11673bd4] */
  ECX = (r32((uint32_t)(0x11673bd4)));
  /* 116483ad and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 116483b0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116483b2 jne 0x116483b9 */
  if (!C.zf) goto L_116483b9;
L_116483b4:;
  /* 116483b4 jmp 0x1164857d */
  goto L_1164857d;
L_116483b9:;
  /* 116483b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116483bc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116483c0 je 0x11648432 */
  if (C.zf) goto L_11648432;
  /* 116483c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116483c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 116483c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116483c9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116483cc push ecx */
  push32((uint32_t)(ECX));
  /* 116483cd call 0x11647e70 */
  push32(0x116483d2u); f_11647e70();
  /* 116483d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116483d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116483d7 jne 0x11648403 */
  if (!C.zf) goto L_11648403;
L_116483d9:;
  /* 116483d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116483dc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116483df push eax */
  push32((uint32_t)(EAX));
  /* 116483e0 push 0x11670c08 */
  push32((uint32_t)(0x11670c08u));
  /* 116483e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116483e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116483e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116483eb push 0 */
  push32((uint32_t)(0x0u));
  /* 116483ed call 0x11645180 */
  push32(0x116483f2u); f_11645180();
  /* 116483f2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116483f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116483f8 jne 0x116483fb */
  if (!C.zf) goto L_116483fb;
  /* 116483fa int3  */
  x86_unimpl("int3 @ 0x116483fa");
L_116483fb:;
  /* 116483fb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116483fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116483ff jne 0x116483d9 */
  if (!C.zf) goto L_116483d9;
  /* 11648401 jmp 0x11648432 */
  goto L_11648432;
L_11648403:;
  /* 11648403 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648406 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11648409 push eax */
  push32((uint32_t)(EAX));
  /* 1164840a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164840d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11648410 push edx */
  push32((uint32_t)(EDX));
  /* 11648411 push 0x11670bfc */
  push32((uint32_t)(0x11670bfcu));
  /* 11648416 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648418 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164841a push 0 */
  push32((uint32_t)(0x0u));
  /* 1164841c push 0 */
  push32((uint32_t)(0x0u));
  /* 1164841e call 0x11645180 */
  push32(0x11648423u); f_11645180();
  /* 11648423 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11648426 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648429 jne 0x1164842c */
  if (!C.zf) goto L_1164842c;
  /* 1164842b int3  */
  x86_unimpl("int3 @ 0x1164842b");
L_1164842c:;
  /* 1164842c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164842e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11648430 jne 0x11648403 */
  if (!C.zf) goto L_11648403;
L_11648432:;
  /* 11648432 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648435 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11648438 push edx */
  push32((uint32_t)(EDX));
  /* 11648439 push 0x11670bf4 */
  push32((uint32_t)(0x11670bf4u));
  /* 1164843e push 0 */
  push32((uint32_t)(0x0u));
  /* 11648440 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648442 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648444 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648446 call 0x11645180 */
  push32(0x1164844bu); f_11645180();
  /* 1164844b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164844e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648451 jne 0x11648454 */
  if (!C.zf) goto L_11648454;
  /* 11648453 int3  */
  x86_unimpl("int3 @ 0x11648453");
L_11648454:;
  /* 11648454 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11648456 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11648458 jne 0x11648432 */
  if (!C.zf) goto L_11648432;
  /* 1164845a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164845d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11648460 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11648466 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648469 jne 0x116484dc */
  if (!C.zf) goto L_116484dc;
L_1164846b:;
  /* 1164846b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164846e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11648471 push ecx */
  push32((uint32_t)(ECX));
  /* 11648472 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648475 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11648478 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1164847b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11648480 push eax */
  push32((uint32_t)(EAX));
  /* 11648481 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648484 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648487 push ecx */
  push32((uint32_t)(ECX));
  /* 11648488 push 0x11670bc0 */
  push32((uint32_t)(0x11670bc0u));
  /* 1164848d push 0 */
  push32((uint32_t)(0x0u));
  /* 1164848f push 0 */
  push32((uint32_t)(0x0u));
  /* 11648491 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648493 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648495 call 0x11645180 */
  push32(0x1164849au); f_11645180();
  /* 1164849a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164849d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116484a0 jne 0x116484a3 */
  if (!C.zf) goto L_116484a3;
  /* 116484a2 int3  */
  x86_unimpl("int3 @ 0x116484a2");
L_116484a3:;
  /* 116484a3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116484a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116484a7 jne 0x1164846b */
  if (!C.zf) goto L_1164846b;
  /* 116484a9 cmp dword ptr [0x11677958], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11677958))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116484b0 je 0x116484cb */
  if (C.zf) goto L_116484cb;
  /* 116484b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116484b5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116484b8 push ecx */
  push32((uint32_t)(ECX));
  /* 116484b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116484bc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116484bf push edx */
  push32((uint32_t)(EDX));
  /* 116484c0 call dword ptr [0x11677958] */
  call_ind((uint32_t)(r32((uint32_t)(0x11677958))), 0x116484c6u);
  /* 116484c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116484c9 jmp 0x116484d7 */
  goto L_116484d7;
L_116484cb:;
  /* 116484cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116484ce push eax */
  push32((uint32_t)(EAX));
  /* 116484cf call 0x116485c0 */
  push32(0x116484d4u); f_116485c0();
  /* 116484d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116484d7:;
  /* 116484d7 jmp 0x1164857d */
  goto L_1164857d;
L_116484dc:;
  /* 116484dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116484df cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116484e3 jne 0x11648522 */
  if (!C.zf) goto L_11648522;
L_116484e5:;
  /* 116484e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116484e8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116484eb push eax */
  push32((uint32_t)(EAX));
  /* 116484ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116484ef add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116484f2 push ecx */
  push32((uint32_t)(ECX));
  /* 116484f3 push 0x11670b98 */
  push32((uint32_t)(0x11670b98u));
  /* 116484f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116484fa push 0 */
  push32((uint32_t)(0x0u));
  /* 116484fc push 0 */
  push32((uint32_t)(0x0u));
  /* 116484fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11648500 call 0x11645180 */
  push32(0x11648505u); f_11645180();
  /* 11648505 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11648508 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164850b jne 0x1164850e */
  if (!C.zf) goto L_1164850e;
  /* 1164850d int3  */
  x86_unimpl("int3 @ 0x1164850d");
L_1164850e:;
  /* 1164850e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11648510 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11648512 jne 0x116484e5 */
  if (!C.zf) goto L_116484e5;
  /* 11648514 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648517 push eax */
  push32((uint32_t)(EAX));
  /* 11648518 call 0x116485c0 */
  push32(0x1164851du); f_116485c0();
  /* 1164851d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11648520 jmp 0x1164857d */
  goto L_1164857d;
L_11648522:;
  /* 11648522 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648525 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11648528 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164852e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648531 jne 0x1164857d */
  if (!C.zf) goto L_1164857d;
L_11648533:;
  /* 11648533 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648536 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11648539 push ecx */
  push32((uint32_t)(ECX));
  /* 1164853a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164853d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11648540 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11648543 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11648548 push eax */
  push32((uint32_t)(EAX));
  /* 11648549 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164854c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164854f push ecx */
  push32((uint32_t)(ECX));
  /* 11648550 push 0x11670b64 */
  push32((uint32_t)(0x11670b64u));
  /* 11648555 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648557 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648559 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164855b push 0 */
  push32((uint32_t)(0x0u));
  /* 1164855d call 0x11645180 */
  push32(0x11648562u); f_11645180();
  /* 11648562 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11648565 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648568 jne 0x1164856b */
  if (!C.zf) goto L_1164856b;
  /* 1164856a int3  */
  x86_unimpl("int3 @ 0x1164856a");
L_1164856b:;
  /* 1164856b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1164856d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164856f jne 0x11648533 */
  if (!C.zf) goto L_11648533;
  /* 11648571 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648574 push eax */
  push32((uint32_t)(EAX));
  /* 11648575 call 0x116485c0 */
  push32(0x1164857au); f_116485c0();
  /* 1164857a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164857d:;
  /* 1164857d jmp 0x11648358 */
  goto L_11648358;
L_11648582:;
  /* 11648582 push 9 */
  push32((uint32_t)(0x9u));
  /* 11648584 call 0x1164b920 */
  push32(0x11648589u); f_1164b920();
  /* 11648589 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164858c:;
  /* 1164858c push 0x11670b4c */
  push32((uint32_t)(0x11670b4cu));
  /* 11648591 push 0x11670614 */
  push32((uint32_t)(0x11670614u));
  /* 11648596 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648598 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164859a push 0 */
  push32((uint32_t)(0x0u));
  /* 1164859c push 0 */
  push32((uint32_t)(0x0u));
  /* 1164859e call 0x11645180 */
  push32(0x116485a3u); f_11645180();
  /* 116485a3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116485a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116485a9 jne 0x116485ac */
  if (!C.zf) goto L_116485ac;
  /* 116485ab int3  */
  x86_unimpl("int3 @ 0x116485ab");
L_116485ac:;
  /* 116485ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116485ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116485b0 jne 0x1164858c */
  if (!C.zf) goto L_1164858c;
  /* 116485b2 pop edi */
  EDI = (pop32());
  /* 116485b3 pop esi */
  ESI = (pop32());
  /* 116485b4 pop ebx */
  EBX = (pop32());
  /* 116485b5 mov esp, ebp */
  ESP = (EBP);
  /* 116485b7 pop ebp */
  EBP = (pop32());
  /* 116485b8 ret  */
  ESPCHK(0x11648300u, _esp0);
  ESP += 4; return;
}

/* FUN_100085c0 @ 0x116485c0 (276 bytes, 89 insns) */
void f_116485c0(void) {
  FTRACE(0x116485c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116485c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116485c1 mov ebp, esp */
  EBP = (ESP);
  /* 116485c3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116485c6 push ebx */
  push32((uint32_t)(EBX));
  /* 116485c7 push esi */
  push32((uint32_t)(ESI));
  /* 116485c8 push edi */
  push32((uint32_t)(EDI));
  /* 116485c9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 116485d0 jmp 0x116485db */
  goto L_116485db;
L_116485d2:;
  /* 116485d2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 116485d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116485d8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_116485db:;
  /* 116485db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116485de cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116485e2 jge 0x116485ef */
  if ((C.sf==C.of)) goto L_116485ef;
  /* 116485e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116485e7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116485ea mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 116485ed jmp 0x116485f6 */
  goto L_116485f6;
L_116485ef:;
  /* 116485ef mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_116485f6:;
  /* 116485f6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 116485f9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116485fc jge 0x1164869c */
  if ((C.sf==C.of)) goto L_1164869c;
  /* 11648602 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11648605 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648608 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1164860b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1164860e cmp dword ptr [0x11673c90], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11673c90))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648615 jle 0x11648633 */
  if ((C.zf||C.sf!=C.of)) goto L_11648633;
  /* 11648617 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1164861c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1164861f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11648625 push ecx */
  push32((uint32_t)(ECX));
  /* 11648626 call 0x1164a680 */
  push32(0x1164862bu); f_1164a680();
  /* 1164862b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164862e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11648631 jmp 0x11648650 */
  goto L_11648650;
L_11648633:;
  /* 11648633 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11648636 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164863c mov eax, dword ptr [0x11673c9c] */
  EAX = (r32((uint32_t)(0x11673c9c)));
  /* 11648641 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11648643 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11648647 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1164864d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11648650:;
  /* 11648650 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648654 je 0x11648664 */
  if (C.zf) goto L_11648664;
  /* 11648656 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11648659 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164865f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11648662 jmp 0x1164866b */
  goto L_1164866b;
L_11648664:;
  /* 11648664 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1164866b:;
  /* 1164866b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1164866e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11648671 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11648675 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11648678 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164867e push edx */
  push32((uint32_t)(EDX));
  /* 1164867f push 0x11670c40 */
  push32((uint32_t)(0x11670c40u));
  /* 11648684 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11648687 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164868a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1164868e push ecx */
  push32((uint32_t)(ECX));
  /* 1164868f call 0x1164dd30 */
  push32(0x11648694u); f_1164dd30();
  /* 11648694 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11648697 jmp 0x116485d2 */
  goto L_116485d2;
L_1164869c:;
  /* 1164869c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1164869f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_116486a4:;
  /* 116486a4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 116486a7 push eax */
  push32((uint32_t)(EAX));
  /* 116486a8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 116486ab push ecx */
  push32((uint32_t)(ECX));
  /* 116486ac push 0x11670c30 */
  push32((uint32_t)(0x11670c30u));
  /* 116486b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116486b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116486b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116486b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116486b9 call 0x11645180 */
  push32(0x116486beu); f_11645180();
  /* 116486be add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116486c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116486c4 jne 0x116486c7 */
  if (!C.zf) goto L_116486c7;
  /* 116486c6 int3  */
  x86_unimpl("int3 @ 0x116486c6");
L_116486c7:;
  /* 116486c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116486c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116486cb jne 0x116486a4 */
  if (!C.zf) goto L_116486a4;
  /* 116486cd pop edi */
  EDI = (pop32());
  /* 116486ce pop esi */
  ESI = (pop32());
  /* 116486cf pop ebx */
  EBX = (pop32());
  /* 116486d0 mov esp, ebp */
  ESP = (EBP);
  /* 116486d2 pop ebp */
  EBP = (pop32());
  /* 116486d3 ret  */
  ESPCHK(0x116485c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100086e0 @ 0x116486e0 (116 bytes, 46 insns) */
void f_116486e0(void) {
  FTRACE(0x116486e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116486e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116486e1 mov ebp, esp */
  EBP = (ESP);
  /* 116486e3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116486e6 push ebx */
  push32((uint32_t)(EBX));
  /* 116486e7 push esi */
  push32((uint32_t)(ESI));
  /* 116486e8 push edi */
  push32((uint32_t)(EDI));
  /* 116486e9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 116486ec push eax */
  push32((uint32_t)(EAX));
  /* 116486ed call 0x11648060 */
  push32(0x116486f2u); f_11648060();
  /* 116486f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116486f5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116486f9 jne 0x11648714 */
  if (!C.zf) goto L_11648714;
  /* 116486fb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116486ff jne 0x11648714 */
  if (!C.zf) goto L_11648714;
  /* 11648701 mov ecx, dword ptr [0x11673bd4] */
  ECX = (r32((uint32_t)(0x11673bd4)));
  /* 11648707 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1164870a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164870c je 0x1164874b */
  if (C.zf) goto L_1164874b;
  /* 1164870e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648712 je 0x1164874b */
  if (C.zf) goto L_1164874b;
L_11648714:;
  /* 11648714 push 0x11670c48 */
  push32((uint32_t)(0x11670c48u));
  /* 11648719 push 0x11670614 */
  push32((uint32_t)(0x11670614u));
  /* 1164871e push 0 */
  push32((uint32_t)(0x0u));
  /* 11648720 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648722 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648724 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648726 call 0x11645180 */
  push32(0x1164872bu); f_11645180();
  /* 1164872b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164872e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648731 jne 0x11648734 */
  if (!C.zf) goto L_11648734;
  /* 11648733 int3  */
  x86_unimpl("int3 @ 0x11648733");
L_11648734:;
  /* 11648734 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11648736 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11648738 jne 0x11648714 */
  if (!C.zf) goto L_11648714;
  /* 1164873a push 0 */
  push32((uint32_t)(0x0u));
  /* 1164873c call 0x11648300 */
  push32(0x11648741u); f_11648300();
  /* 11648741 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11648744 mov eax, 1 */
  EAX = (0x1u);
  /* 11648749 jmp 0x1164874d */
  goto L_1164874d;
L_1164874b:;
  /* 1164874b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1164874d:;
  /* 1164874d pop edi */
  EDI = (pop32());
  /* 1164874e pop esi */
  ESI = (pop32());
  /* 1164874f pop ebx */
  EBX = (pop32());
  /* 11648750 mov esp, ebp */
  ESP = (EBP);
  /* 11648752 pop ebp */
  EBP = (pop32());
  /* 11648753 ret  */
  ESPCHK(0x116486e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008760 @ 0x11648760 (197 bytes, 79 insns) */
void f_11648760(void) {
  FTRACE(0x11648760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11648760 push ebp */
  push32((uint32_t)(EBP));
  /* 11648761 mov ebp, esp */
  EBP = (ESP);
  /* 11648763 push ecx */
  push32((uint32_t)(ECX));
  /* 11648764 push ebx */
  push32((uint32_t)(EBX));
  /* 11648765 push esi */
  push32((uint32_t)(ESI));
  /* 11648766 push edi */
  push32((uint32_t)(EDI));
  /* 11648767 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164876b jne 0x11648772 */
  if (!C.zf) goto L_11648772;
  /* 1164876d jmp 0x1164881e */
  goto L_1164881e;
L_11648772:;
  /* 11648772 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11648779 jmp 0x11648784 */
  goto L_11648784;
L_1164877b:;
  /* 1164877b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164877e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648781 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11648784:;
  /* 11648784 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648788 jge 0x116487ce */
  if ((C.sf==C.of)) goto L_116487ce;
L_1164878a:;
  /* 1164878a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164878d mov edx, dword ptr [ecx*4 + 0x11673be4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11673be4)));
  /* 11648794 push edx */
  push32((uint32_t)(EDX));
  /* 11648795 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648798 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164879b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1164879f push edx */
  push32((uint32_t)(EDX));
  /* 116487a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116487a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116487a6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 116487aa push edx */
  push32((uint32_t)(EDX));
  /* 116487ab push 0x11670ca4 */
  push32((uint32_t)(0x11670ca4u));
  /* 116487b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116487b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116487b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116487b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116487b8 call 0x11645180 */
  push32(0x116487bdu); f_11645180();
  /* 116487bd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116487c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116487c3 jne 0x116487c6 */
  if (!C.zf) goto L_116487c6;
  /* 116487c5 int3  */
  x86_unimpl("int3 @ 0x116487c5");
L_116487c6:;
  /* 116487c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116487c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116487ca jne 0x1164878a */
  if (!C.zf) goto L_1164878a;
  /* 116487cc jmp 0x1164877b */
  goto L_1164877b;
L_116487ce:;
  /* 116487ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116487d1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 116487d4 push edx */
  push32((uint32_t)(EDX));
  /* 116487d5 push 0x11670c80 */
  push32((uint32_t)(0x11670c80u));
  /* 116487da push 0 */
  push32((uint32_t)(0x0u));
  /* 116487dc push 0 */
  push32((uint32_t)(0x0u));
  /* 116487de push 0 */
  push32((uint32_t)(0x0u));
  /* 116487e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116487e2 call 0x11645180 */
  push32(0x116487e7u); f_11645180();
  /* 116487e7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116487ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116487ed jne 0x116487f0 */
  if (!C.zf) goto L_116487f0;
  /* 116487ef int3  */
  x86_unimpl("int3 @ 0x116487ef");
L_116487f0:;
  /* 116487f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116487f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116487f4 jne 0x116487ce */
  if (!C.zf) goto L_116487ce;
L_116487f6:;
  /* 116487f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116487f9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 116487fc push edx */
  push32((uint32_t)(EDX));
  /* 116487fd push 0x11670c60 */
  push32((uint32_t)(0x11670c60u));
  /* 11648802 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648804 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648806 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648808 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164880a call 0x11645180 */
  push32(0x1164880fu); f_11645180();
  /* 1164880f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11648812 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648815 jne 0x11648818 */
  if (!C.zf) goto L_11648818;
  /* 11648817 int3  */
  x86_unimpl("int3 @ 0x11648817");
L_11648818:;
  /* 11648818 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164881a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164881c jne 0x116487f6 */
  if (!C.zf) goto L_116487f6;
L_1164881e:;
  /* 1164881e pop edi */
  EDI = (pop32());
  /* 1164881f pop esi */
  ESI = (pop32());
  /* 11648820 pop ebx */
  EBX = (pop32());
  /* 11648821 mov esp, ebp */
  ESP = (EBP);
  /* 11648823 pop ebp */
  EBP = (pop32());
  /* 11648824 ret  */
  ESPCHK(0x11648760u, _esp0);
  ESP += 4; return;
}

/* FUN_10008830 @ 0x11648830 (329 bytes, 102 insns) */
void f_11648830(void) {
  FTRACE(0x11648830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11648830 push ebp */
  push32((uint32_t)(EBP));
  /* 11648831 mov ebp, esp */
  EBP = (ESP);
  /* 11648833 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11648836 cmp dword ptr [0x11677ad0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11677ad0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164883d jne 0x11648844 */
  if (!C.zf) goto L_11648844;
  /* 1164883f call 0x1164e610 */
  push32(0x11648844u); f_1164e610();
L_11648844:;
  /* 11648844 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1164884b mov eax, dword ptr [0x11675f90] */
  EAX = (r32((uint32_t)(0x11675f90)));
  /* 11648850 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11648853:;
  /* 11648853 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648856 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11648859 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164885b je 0x11648889 */
  if (C.zf) goto L_11648889;
  /* 1164885d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648860 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11648863 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648866 je 0x11648871 */
  if (C.zf) goto L_11648871;
  /* 11648868 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164886b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164886e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11648871:;
  /* 11648871 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648874 push eax */
  push32((uint32_t)(EAX));
  /* 11648875 call 0x116496f0 */
  push32(0x1164887au); f_116496f0();
  /* 1164887a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164887d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648880 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11648884 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11648887 jmp 0x11648853 */
  goto L_11648853;
L_11648889:;
  /* 11648889 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1164888b push 0x11670cc4 */
  push32((uint32_t)(0x11670cc4u));
  /* 11648890 push 2 */
  push32((uint32_t)(0x2u));
  /* 11648892 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11648895 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1164889c push ecx */
  push32((uint32_t)(ECX));
  /* 1164889d call 0x116468c0 */
  push32(0x116488a2u); f_116468c0();
  /* 116488a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116488a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116488a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116488ab mov dword ptr [0x11675fc4], edx */
  w32((uint32_t)(0x11675fc4), (EDX));
  /* 116488b1 cmp dword ptr [0x11675fc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11675fc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116488b8 jne 0x116488c4 */
  if (!C.zf) goto L_116488c4;
  /* 116488ba push 9 */
  push32((uint32_t)(0x9u));
  /* 116488bc call 0x11645030 */
  push32(0x116488c1u); f_11645030();
  /* 116488c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116488c4:;
  /* 116488c4 mov eax, dword ptr [0x11675f90] */
  EAX = (r32((uint32_t)(0x11675f90)));
  /* 116488c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116488cc jmp 0x116488d7 */
  goto L_116488d7;
L_116488ce:;
  /* 116488ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116488d1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116488d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116488d7:;
  /* 116488d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116488da movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116488dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116488df je 0x11648947 */
  if (C.zf) goto L_11648947;
  /* 116488e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116488e4 push ecx */
  push32((uint32_t)(ECX));
  /* 116488e5 call 0x116496f0 */
  push32(0x116488eau); f_116496f0();
  /* 116488ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116488ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116488f0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116488f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116488f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116488f9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116488fc je 0x11648945 */
  if (C.zf) goto L_11648945;
  /* 116488fe push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11648900 push 0x11670cc4 */
  push32((uint32_t)(0x11670cc4u));
  /* 11648905 push 2 */
  push32((uint32_t)(0x2u));
  /* 11648907 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164890a push ecx */
  push32((uint32_t)(ECX));
  /* 1164890b call 0x116468c0 */
  push32(0x11648910u); f_116468c0();
  /* 11648910 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11648913 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11648916 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11648918 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164891b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164891e jne 0x1164892a */
  if (!C.zf) goto L_1164892a;
  /* 11648920 push 9 */
  push32((uint32_t)(0x9u));
  /* 11648922 call 0x11645030 */
  push32(0x11648927u); f_11645030();
  /* 11648927 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164892a:;
  /* 1164892a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164892d push ecx */
  push32((uint32_t)(ECX));
  /* 1164892e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11648931 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11648933 push eax */
  push32((uint32_t)(EAX));
  /* 11648934 call 0x11649870 */
  push32(0x11648939u); f_11649870();
  /* 11648939 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164893c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164893f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648942 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11648945:;
  /* 11648945 jmp 0x116488ce */
  goto L_116488ce;
L_11648947:;
  /* 11648947 push 2 */
  push32((uint32_t)(0x2u));
  /* 11648949 mov edx, dword ptr [0x11675f90] */
  EDX = (r32((uint32_t)(0x11675f90)));
  /* 1164894f push edx */
  push32((uint32_t)(EDX));
  /* 11648950 call 0x11647350 */
  push32(0x11648955u); f_11647350();
  /* 11648955 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11648958 mov dword ptr [0x11675f90], 0 */
  w32((uint32_t)(0x11675f90), (0x0u));
  /* 11648962 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11648965 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1164896b mov dword ptr [0x11677ac0], 1 */
  w32((uint32_t)(0x11677ac0), (0x1u));
  /* 11648975 mov esp, ebp */
  ESP = (EBP);
  /* 11648977 pop ebp */
  EBP = (pop32());
  /* 11648978 ret  */
  ESPCHK(0x11648830u, _esp0);
  ESP += 4; return;
}

/* FUN_10008980 @ 0x11648980 (216 bytes, 69 insns) */
void f_11648980(void) {
  FTRACE(0x11648980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11648980 push ebp */
  push32((uint32_t)(EBP));
  /* 11648981 mov ebp, esp */
  EBP = (ESP);
  /* 11648983 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11648986 cmp dword ptr [0x11677ad0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11677ad0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164898d jne 0x11648994 */
  if (!C.zf) goto L_11648994;
  /* 1164898f call 0x1164e610 */
  push32(0x11648994u); f_1164e610();
L_11648994:;
  /* 11648994 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11648999 push 0x11676000 */
  push32((uint32_t)(0x11676000u));
  /* 1164899e push 0 */
  push32((uint32_t)(0x0u));
  /* 116489a0 call dword ptr [0x11678364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678364))), 0x116489a6u);
  /* 116489a6 mov dword ptr [0x11675fd4], 0x11676000 */
  w32((uint32_t)(0x11675fd4), (0x11676000u));
  /* 116489b0 mov eax, dword ptr [0x11677ae8] */
  EAX = (r32((uint32_t)(0x11677ae8)));
  /* 116489b5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116489b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116489ba jne 0x116489c7 */
  if (!C.zf) goto L_116489c7;
  /* 116489bc mov edx, dword ptr [0x11675fd4] */
  EDX = (r32((uint32_t)(0x11675fd4)));
  /* 116489c2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116489c5 jmp 0x116489cf */
  goto L_116489cf;
L_116489c7:;
  /* 116489c7 mov eax, dword ptr [0x11677ae8] */
  EAX = (r32((uint32_t)(0x11677ae8)));
  /* 116489cc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_116489cf:;
  /* 116489cf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116489d2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116489d5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 116489d8 push edx */
  push32((uint32_t)(EDX));
  /* 116489d9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 116489dc push eax */
  push32((uint32_t)(EAX));
  /* 116489dd push 0 */
  push32((uint32_t)(0x0u));
  /* 116489df push 0 */
  push32((uint32_t)(0x0u));
  /* 116489e1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116489e4 push ecx */
  push32((uint32_t)(ECX));
  /* 116489e5 call 0x11648a60 */
  push32(0x116489eau); f_11648a60();
  /* 116489ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116489ed push 0x80 */
  push32((uint32_t)(0x80u));
  /* 116489f2 push 0x11670cd0 */
  push32((uint32_t)(0x11670cd0u));
  /* 116489f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 116489f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116489fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116489ff lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11648a02 push ecx */
  push32((uint32_t)(ECX));
  /* 11648a03 call 0x116468c0 */
  push32(0x11648a08u); f_116468c0();
  /* 11648a08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11648a0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11648a0e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648a12 jne 0x11648a1e */
  if (!C.zf) goto L_11648a1e;
  /* 11648a14 push 8 */
  push32((uint32_t)(0x8u));
  /* 11648a16 call 0x11645030 */
  push32(0x11648a1bu); f_11645030();
  /* 11648a1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11648a1e:;
  /* 11648a1e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11648a21 push edx */
  push32((uint32_t)(EDX));
  /* 11648a22 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11648a25 push eax */
  push32((uint32_t)(EAX));
  /* 11648a26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11648a29 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11648a2c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11648a2f push eax */
  push32((uint32_t)(EAX));
  /* 11648a30 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11648a33 push ecx */
  push32((uint32_t)(ECX));
  /* 11648a34 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11648a37 push edx */
  push32((uint32_t)(EDX));
  /* 11648a38 call 0x11648a60 */
  push32(0x11648a3du); f_11648a60();
  /* 11648a3d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11648a40 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11648a43 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11648a46 mov dword ptr [0x11675fb8], eax */
  w32((uint32_t)(0x11675fb8), (EAX));
  /* 11648a4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11648a4e mov dword ptr [0x11675fbc], ecx */
  w32((uint32_t)(0x11675fbc), (ECX));
  /* 11648a54 mov esp, ebp */
  ESP = (EBP);
  /* 11648a56 pop ebp */
  EBP = (pop32());
  /* 11648a57 ret  */
  ESPCHK(0x11648980u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a60 @ 0x11648a60 (1060 bytes, 360 insns) */
void f_11648a60(void) {
  FTRACE(0x11648a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11648a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11648a61 mov ebp, esp */
  EBP = (ESP);
  /* 11648a63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11648a66 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648a69 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11648a6f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11648a72 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11648a78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11648a7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11648a7e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648a82 je 0x11648a95 */
  if (C.zf) goto L_11648a95;
  /* 11648a84 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11648a87 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648a8a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11648a8c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11648a8f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648a92 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11648a95:;
  /* 11648a95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648a98 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11648a9b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648a9e jne 0x11648b6d */
  if (!C.zf) goto L_11648b6d;
L_11648aa4:;
  /* 11648aa4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648aa7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648aaa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11648aad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648ab0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11648ab3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648ab6 je 0x11648b32 */
  if (C.zf) goto L_11648b32;
  /* 11648ab8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648abb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11648abe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11648ac0 je 0x11648b32 */
  if (C.zf) goto L_11648b32;
  /* 11648ac2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648ac5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11648ac7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11648ac9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11648acb mov al, byte ptr [edx + 0x11677821] */
  AL = (r8((uint32_t)(EDX + 0x11677821)));
  /* 11648ad1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11648ad4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11648ad6 je 0x11648b07 */
  if (C.zf) goto L_11648b07;
  /* 11648ad8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648adb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11648add add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648ae0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648ae3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11648ae5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648ae9 je 0x11648b07 */
  if (C.zf) goto L_11648b07;
  /* 11648aeb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648aee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648af1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11648af3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11648af5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648af8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648afb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11648afe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648b01 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648b04 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11648b07:;
  /* 11648b07 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648b0a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11648b0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648b0f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648b12 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11648b14 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648b18 je 0x11648b2d */
  if (C.zf) goto L_11648b2d;
  /* 11648b1a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648b1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648b20 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11648b22 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11648b24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648b27 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648b2a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11648b2d:;
  /* 11648b2d jmp 0x11648aa4 */
  goto L_11648aa4;
L_11648b32:;
  /* 11648b32 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648b35 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11648b37 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648b3a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648b3d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11648b3f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648b43 je 0x11648b54 */
  if (C.zf) goto L_11648b54;
  /* 11648b45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648b48 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11648b4b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648b4e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648b51 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11648b54:;
  /* 11648b54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648b57 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11648b5a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648b5d jne 0x11648b68 */
  if (!C.zf) goto L_11648b68;
  /* 11648b5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648b62 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648b65 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11648b68:;
  /* 11648b68 jmp 0x11648c3c */
  goto L_11648c3c;
L_11648b6d:;
  /* 11648b6d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648b70 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11648b72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648b75 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648b78 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11648b7a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648b7e je 0x11648b93 */
  if (C.zf) goto L_11648b93;
  /* 11648b80 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648b83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648b86 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11648b88 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11648b8a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648b8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648b90 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11648b93:;
  /* 11648b93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648b96 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11648b98 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11648b9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648b9e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648ba1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11648ba4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11648ba7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11648bad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11648baf mov dl, byte ptr [ecx + 0x11677821] */
  DL = (r8((uint32_t)(ECX + 0x11677821)));
  /* 11648bb5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11648bb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11648bba je 0x11648beb */
  if (C.zf) goto L_11648beb;
  /* 11648bbc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648bbf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11648bc1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648bc4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648bc7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11648bc9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648bcd je 0x11648be2 */
  if (C.zf) goto L_11648be2;
  /* 11648bcf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648bd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648bd5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11648bd7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11648bd9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648bdc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648bdf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11648be2:;
  /* 11648be2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648be5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648be8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11648beb:;
  /* 11648beb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11648bee and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11648bf4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648bf7 je 0x11648c17 */
  if (C.zf) goto L_11648c17;
  /* 11648bf9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11648bfc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11648c01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11648c03 je 0x11648c17 */
  if (C.zf) goto L_11648c17;
  /* 11648c05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11648c08 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11648c0e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648c11 jne 0x11648b6d */
  if (!C.zf) goto L_11648b6d;
L_11648c17:;
  /* 11648c17 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11648c1a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11648c20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11648c22 jne 0x11648c2f */
  if (!C.zf) goto L_11648c2f;
  /* 11648c24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648c27 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11648c2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11648c2d jmp 0x11648c3c */
  goto L_11648c3c;
L_11648c2f:;
  /* 11648c2f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648c33 je 0x11648c3c */
  if (C.zf) goto L_11648c3c;
  /* 11648c35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648c38 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_11648c3c:;
  /* 11648c3c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11648c43:;
  /* 11648c43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648c46 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11648c49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11648c4b je 0x11648c6e */
  if (C.zf) goto L_11648c6e;
L_11648c4d:;
  /* 11648c4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648c50 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11648c53 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648c56 je 0x11648c63 */
  if (C.zf) goto L_11648c63;
  /* 11648c58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648c5b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11648c5e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648c61 jne 0x11648c6e */
  if (!C.zf) goto L_11648c6e;
L_11648c63:;
  /* 11648c63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648c66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648c69 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11648c6c jmp 0x11648c4d */
  goto L_11648c4d;
L_11648c6e:;
  /* 11648c6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648c71 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11648c74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11648c76 jne 0x11648c7d */
  if (!C.zf) goto L_11648c7d;
  /* 11648c78 jmp 0x11648e5b */
  goto L_11648e5b;
L_11648c7d:;
  /* 11648c7d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648c81 je 0x11648c94 */
  if (C.zf) goto L_11648c94;
  /* 11648c83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11648c86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648c89 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11648c8b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11648c8e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648c91 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11648c94:;
  /* 11648c94 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11648c97 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11648c99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648c9c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11648c9f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11648ca1:;
  /* 11648ca1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11648ca8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11648caf:;
  /* 11648caf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648cb2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11648cb5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648cb8 jne 0x11648cce */
  if (!C.zf) goto L_11648cce;
  /* 11648cba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648cbd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648cc0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11648cc3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11648cc6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648cc9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11648ccc jmp 0x11648caf */
  goto L_11648caf;
L_11648cce:;
  /* 11648cce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648cd1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11648cd4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648cd7 jne 0x11648d2a */
  if (!C.zf) goto L_11648d2a;
  /* 11648cd9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11648cdc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11648cde mov ecx, 2 */
  ECX = (0x2u);
  /* 11648ce3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11648ce5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11648ce7 jne 0x11648d22 */
  if (!C.zf) goto L_11648d22;
  /* 11648ce9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648ced je 0x11648d0f */
  if (C.zf) goto L_11648d0f;
  /* 11648cef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648cf2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11648cf6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648cf9 jne 0x11648d06 */
  if (!C.zf) goto L_11648d06;
  /* 11648cfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648cfe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648d01 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11648d04 jmp 0x11648d0d */
  goto L_11648d0d;
L_11648d06:;
  /* 11648d06 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11648d0d:;
  /* 11648d0d jmp 0x11648d16 */
  goto L_11648d16;
L_11648d0f:;
  /* 11648d0f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11648d16:;
  /* 11648d16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11648d18 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648d1c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11648d1f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11648d22:;
  /* 11648d22 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11648d25 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11648d27 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11648d2a:;
  /* 11648d2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11648d2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11648d30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11648d33 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11648d36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11648d38 je 0x11648d5e */
  if (C.zf) goto L_11648d5e;
  /* 11648d3a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648d3e je 0x11648d4f */
  if (C.zf) goto L_11648d4f;
  /* 11648d40 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648d43 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11648d46 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648d49 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648d4c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11648d4f:;
  /* 11648d4f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648d52 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11648d54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648d57 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648d5a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11648d5c jmp 0x11648d2a */
  goto L_11648d2a;
L_11648d5e:;
  /* 11648d5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648d61 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11648d64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11648d66 je 0x11648d84 */
  if (C.zf) goto L_11648d84;
  /* 11648d68 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648d6c jne 0x11648d89 */
  if (!C.zf) goto L_11648d89;
  /* 11648d6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648d71 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11648d74 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648d77 je 0x11648d84 */
  if (C.zf) goto L_11648d84;
  /* 11648d79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648d7c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11648d7f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648d82 jne 0x11648d89 */
  if (!C.zf) goto L_11648d89;
L_11648d84:;
  /* 11648d84 jmp 0x11648e34 */
  goto L_11648e34;
L_11648d89:;
  /* 11648d89 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648d8d je 0x11648e26 */
  if (C.zf) goto L_11648e26;
  /* 11648d93 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648d97 je 0x11648ded */
  if (C.zf) goto L_11648ded;
  /* 11648d99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648d9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11648d9e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11648da0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11648da2 mov cl, byte ptr [eax + 0x11677821] */
  CL = (r8((uint32_t)(EAX + 0x11677821)));
  /* 11648da8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11648dab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11648dad je 0x11648dd8 */
  if (C.zf) goto L_11648dd8;
  /* 11648daf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648db2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648db5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11648db7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11648db9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648dbc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648dbf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11648dc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648dc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648dc8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11648dcb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648dce mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11648dd0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648dd3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648dd6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11648dd8:;
  /* 11648dd8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648ddb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648dde mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11648de0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11648de2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648de5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648de8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11648deb jmp 0x11648e19 */
  goto L_11648e19;
L_11648ded:;
  /* 11648ded mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648df0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11648df2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11648df4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11648df6 mov cl, byte ptr [eax + 0x11677821] */
  CL = (r8((uint32_t)(EAX + 0x11677821)));
  /* 11648dfc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11648dff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11648e01 je 0x11648e19 */
  if (C.zf) goto L_11648e19;
  /* 11648e03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648e06 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648e09 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11648e0c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648e0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11648e11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648e14 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648e17 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11648e19:;
  /* 11648e19 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648e1c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11648e1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648e21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648e24 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11648e26:;
  /* 11648e26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648e29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648e2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11648e2f jmp 0x11648ca1 */
  goto L_11648ca1;
L_11648e34:;
  /* 11648e34 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648e38 je 0x11648e49 */
  if (C.zf) goto L_11648e49;
  /* 11648e3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648e3d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11648e40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11648e43 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648e46 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11648e49:;
  /* 11648e49 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648e4c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11648e4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648e51 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11648e54 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11648e56 jmp 0x11648c43 */
  goto L_11648c43;
L_11648e5b:;
  /* 11648e5b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648e5f je 0x11648e73 */
  if (C.zf) goto L_11648e73;
  /* 11648e61 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11648e64 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11648e6a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11648e6d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648e70 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11648e73:;
  /* 11648e73 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11648e76 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11648e78 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648e7b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11648e7e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11648e80 mov esp, ebp */
  ESP = (EBP);
  /* 11648e82 pop ebp */
  EBP = (pop32());
  /* 11648e83 ret  */
  ESPCHK(0x11648a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e90 @ 0x11648e90 (537 bytes, 173 insns) */
void f_11648e90(void) {
  FTRACE(0x11648e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11648e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11648e91 mov ebp, esp */
  EBP = (ESP);
  /* 11648e93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11648e96 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11648e9d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11648ea4 cmp dword ptr [0x11676104], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676104))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648eab jne 0x11648eea */
  if (!C.zf) goto L_11648eea;
  /* 11648ead call dword ptr [0x116783c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783c4))), 0x11648eb3u);
  /* 11648eb3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11648eb6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648eba je 0x11648ec8 */
  if (C.zf) goto L_11648ec8;
  /* 11648ebc mov dword ptr [0x11676104], 1 */
  w32((uint32_t)(0x11676104), (0x1u));
  /* 11648ec6 jmp 0x11648eea */
  goto L_11648eea;
L_11648ec8:;
  /* 11648ec8 call dword ptr [0x116783c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783c0))), 0x11648eceu);
  /* 11648ece mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11648ed1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648ed5 je 0x11648ee3 */
  if (C.zf) goto L_11648ee3;
  /* 11648ed7 mov dword ptr [0x11676104], 2 */
  w32((uint32_t)(0x11676104), (0x2u));
  /* 11648ee1 jmp 0x11648eea */
  goto L_11648eea;
L_11648ee3:;
  /* 11648ee3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11648ee5 jmp 0x116490a5 */
  goto L_116490a5;
L_11648eea:;
  /* 11648eea cmp dword ptr [0x11676104], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11676104))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648ef1 jne 0x11648fee */
  if (!C.zf) goto L_11648fee;
  /* 11648ef7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648efb jne 0x11648f13 */
  if (!C.zf) goto L_11648f13;
  /* 11648efd call dword ptr [0x116783c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783c4))), 0x11648f03u);
  /* 11648f03 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11648f06 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648f0a jne 0x11648f13 */
  if (!C.zf) goto L_11648f13;
  /* 11648f0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11648f0e jmp 0x116490a5 */
  goto L_116490a5;
L_11648f13:;
  /* 11648f13 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11648f16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11648f19:;
  /* 11648f19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11648f1c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11648f1e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11648f21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11648f23 je 0x11648f45 */
  if (C.zf) goto L_11648f45;
  /* 11648f25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11648f28 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648f2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11648f2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11648f31 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11648f33 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11648f36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11648f38 jne 0x11648f43 */
  if (!C.zf) goto L_11648f43;
  /* 11648f3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11648f3d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648f40 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11648f43:;
  /* 11648f43 jmp 0x11648f19 */
  goto L_11648f19;
L_11648f45:;
  /* 11648f45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11648f48 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11648f4b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11648f4d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11648f50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11648f53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648f55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648f57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648f59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648f5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648f5e push edx */
  push32((uint32_t)(EDX));
  /* 11648f5f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11648f62 push eax */
  push32((uint32_t)(EAX));
  /* 11648f63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648f67 call dword ptr [0x116783bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783bc))), 0x11648f6du);
  /* 11648f6d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11648f70 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648f74 je 0x11648f94 */
  if (C.zf) goto L_11648f94;
  /* 11648f76 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11648f78 push 0x11670cdc */
  push32((uint32_t)(0x11670cdcu));
  /* 11648f7d push 2 */
  push32((uint32_t)(0x2u));
  /* 11648f7f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11648f82 push ecx */
  push32((uint32_t)(ECX));
  /* 11648f83 call 0x116468c0 */
  push32(0x11648f88u); f_116468c0();
  /* 11648f88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11648f8b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11648f8e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648f92 jne 0x11648fa5 */
  if (!C.zf) goto L_11648fa5;
L_11648f94:;
  /* 11648f94 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11648f97 push edx */
  push32((uint32_t)(EDX));
  /* 11648f98 call dword ptr [0x116783b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783b8))), 0x11648f9eu);
  /* 11648f9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11648fa0 jmp 0x116490a5 */
  goto L_116490a5;
L_11648fa5:;
  /* 11648fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648fa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648fa9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11648fac push eax */
  push32((uint32_t)(EAX));
  /* 11648fad mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11648fb0 push ecx */
  push32((uint32_t)(ECX));
  /* 11648fb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11648fb4 push edx */
  push32((uint32_t)(EDX));
  /* 11648fb5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11648fb8 push eax */
  push32((uint32_t)(EAX));
  /* 11648fb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11648fbb push 0 */
  push32((uint32_t)(0x0u));
  /* 11648fbd call dword ptr [0x116783bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783bc))), 0x11648fc3u);
  /* 11648fc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11648fc5 jne 0x11648fdc */
  if (!C.zf) goto L_11648fdc;
  /* 11648fc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11648fc9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11648fcc push ecx */
  push32((uint32_t)(ECX));
  /* 11648fcd call 0x11647350 */
  push32(0x11648fd2u); f_11647350();
  /* 11648fd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11648fd5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11648fdc:;
  /* 11648fdc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11648fdf push edx */
  push32((uint32_t)(EDX));
  /* 11648fe0 call dword ptr [0x116783b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783b8))), 0x11648fe6u);
  /* 11648fe6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11648fe9 jmp 0x116490a5 */
  goto L_116490a5;
L_11648fee:;
  /* 11648fee cmp dword ptr [0x11676104], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11676104))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648ff5 jne 0x116490a3 */
  if (!C.zf) goto L_116490a3;
  /* 11648ffb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11648fff jne 0x11649017 */
  if (!C.zf) goto L_11649017;
  /* 11649001 call dword ptr [0x116783c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783c0))), 0x11649007u);
  /* 11649007 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1164900a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164900e jne 0x11649017 */
  if (!C.zf) goto L_11649017;
  /* 11649010 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11649012 jmp 0x116490a5 */
  goto L_116490a5;
L_11649017:;
  /* 11649017 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164901a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1164901d:;
  /* 1164901d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11649020 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11649023 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11649025 je 0x11649045 */
  if (C.zf) goto L_11649045;
  /* 11649027 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164902a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164902d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11649030 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11649033 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11649036 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11649038 jne 0x11649043 */
  if (!C.zf) goto L_11649043;
  /* 1164903a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164903d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649040 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11649043:;
  /* 11649043 jmp 0x1164901d */
  goto L_1164901d;
L_11649045:;
  /* 11649045 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11649048 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164904b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164904e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11649051 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11649056 push 0x11670cdc */
  push32((uint32_t)(0x11670cdcu));
  /* 1164905b push 2 */
  push32((uint32_t)(0x2u));
  /* 1164905d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11649060 push edx */
  push32((uint32_t)(EDX));
  /* 11649061 call 0x116468c0 */
  push32(0x11649066u); f_116468c0();
  /* 11649066 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649069 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1164906c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649070 jne 0x11649080 */
  if (!C.zf) goto L_11649080;
  /* 11649072 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11649075 push eax */
  push32((uint32_t)(EAX));
  /* 11649076 call dword ptr [0x116783b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783b4))), 0x1164907cu);
  /* 1164907c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164907e jmp 0x116490a5 */
  goto L_116490a5;
L_11649080:;
  /* 11649080 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11649083 push ecx */
  push32((uint32_t)(ECX));
  /* 11649084 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11649087 push edx */
  push32((uint32_t)(EDX));
  /* 11649088 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164908b push eax */
  push32((uint32_t)(EAX));
  /* 1164908c call 0x1164e640 */
  push32(0x11649091u); f_1164e640();
  /* 11649091 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649094 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11649097 push ecx */
  push32((uint32_t)(ECX));
  /* 11649098 call dword ptr [0x116783b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783b4))), 0x1164909eu);
  /* 1164909e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116490a1 jmp 0x116490a5 */
  goto L_116490a5;
L_116490a3:;
  /* 116490a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116490a5:;
  /* 116490a5 mov esp, ebp */
  ESP = (EBP);
  /* 116490a7 pop ebp */
  EBP = (pop32());
  /* 116490a8 ret  */
  ESPCHK(0x11648e90u, _esp0);
  ESP += 4; return;
}

/* FUN_100090b0 @ 0x116490b0 (77 bytes, 25 insns) */
void f_116490b0(void) {
  FTRACE(0x116490b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116490b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116490b1 mov ebp, esp */
  EBP = (ESP);
  /* 116490b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116490b5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 116490ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116490bc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116490c0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 116490c3 push eax */
  push32((uint32_t)(EAX));
  /* 116490c4 call dword ptr [0x11678338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678338))), 0x116490cau);
  /* 116490ca mov dword ptr [0x1167794c], eax */
  w32((uint32_t)(0x1167794c), (EAX));
  /* 116490cf cmp dword ptr [0x1167794c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1167794c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116490d6 jne 0x116490dc */
  if (!C.zf) goto L_116490dc;
  /* 116490d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116490da jmp 0x116490fb */
  goto L_116490fb;
L_116490dc:;
  /* 116490dc call 0x1164c0c0 */
  push32(0x116490e1u); f_1164c0c0();
  /* 116490e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116490e3 jne 0x116490f6 */
  if (!C.zf) goto L_116490f6;
  /* 116490e5 mov ecx, dword ptr [0x1167794c] */
  ECX = (r32((uint32_t)(0x1167794c)));
  /* 116490eb push ecx */
  push32((uint32_t)(ECX));
  /* 116490ec call dword ptr [0x11678380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678380))), 0x116490f2u);
  /* 116490f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116490f4 jmp 0x116490fb */
  goto L_116490fb;
L_116490f6:;
  /* 116490f6 mov eax, 1 */
  EAX = (0x1u);
L_116490fb:;
  /* 116490fb pop ebp */
  EBP = (pop32());
  /* 116490fc ret  */
  ESPCHK(0x116490b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009100 @ 0x11649100 (156 bytes, 48 insns) */
void f_11649100(void) {
  FTRACE(0x11649100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11649100 push ebp */
  push32((uint32_t)(EBP));
  /* 11649101 mov ebp, esp */
  EBP = (ESP);
  /* 11649103 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11649106 mov eax, dword ptr [0x11677948] */
  EAX = (r32((uint32_t)(0x11677948)));
  /* 1164910b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1164910e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11649115 jmp 0x11649120 */
  goto L_11649120;
L_11649117:;
  /* 11649117 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164911a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164911d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11649120:;
  /* 11649120 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649123 cmp edx, dword ptr [0x11677944] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11677944))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649129 jge 0x11649176 */
  if ((C.sf==C.of)) goto L_11649176;
  /* 1164912b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11649130 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11649135 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11649138 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1164913b push ecx */
  push32((uint32_t)(ECX));
  /* 1164913c call dword ptr [0x11678330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678330))), 0x11649142u);
  /* 11649142 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11649147 push 0 */
  push32((uint32_t)(0x0u));
  /* 11649149 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164914c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1164914f push eax */
  push32((uint32_t)(EAX));
  /* 11649150 call dword ptr [0x11678330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678330))), 0x11649156u);
  /* 11649156 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11649159 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1164915c push edx */
  push32((uint32_t)(EDX));
  /* 1164915d push 0 */
  push32((uint32_t)(0x0u));
  /* 1164915f mov eax, dword ptr [0x1167794c] */
  EAX = (r32((uint32_t)(0x1167794c)));
  /* 11649164 push eax */
  push32((uint32_t)(EAX));
  /* 11649165 call dword ptr [0x11678384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678384))), 0x1164916bu);
  /* 1164916b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164916e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649171 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11649174 jmp 0x11649117 */
  goto L_11649117;
L_11649176:;
  /* 11649176 mov edx, dword ptr [0x11677948] */
  EDX = (r32((uint32_t)(0x11677948)));
  /* 1164917c push edx */
  push32((uint32_t)(EDX));
  /* 1164917d push 0 */
  push32((uint32_t)(0x0u));
  /* 1164917f mov eax, dword ptr [0x1167794c] */
  EAX = (r32((uint32_t)(0x1167794c)));
  /* 11649184 push eax */
  push32((uint32_t)(EAX));
  /* 11649185 call dword ptr [0x11678384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678384))), 0x1164918bu);
  /* 1164918b mov ecx, dword ptr [0x1167794c] */
  ECX = (r32((uint32_t)(0x1167794c)));
  /* 11649191 push ecx */
  push32((uint32_t)(ECX));
  /* 11649192 call dword ptr [0x11678380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678380))), 0x11649198u);
  /* 11649198 mov esp, ebp */
  ESP = (EBP);
  /* 1164919a pop ebp */
  EBP = (pop32());
  /* 1164919b ret  */
  ESPCHK(0x11649100u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x116491a0 (73 bytes, 19 insns) */
void f_116491a0(void) {
  FTRACE(0x116491a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116491a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116491a1 mov ebp, esp */
  EBP = (ESP);
  /* 116491a3 cmp dword ptr [0x11675f98], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11675f98))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116491aa je 0x116491be */
  if (C.zf) goto L_116491be;
  /* 116491ac cmp dword ptr [0x11675f98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11675f98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116491b3 jne 0x116491e7 */
  if (!C.zf) goto L_116491e7;
  /* 116491b5 cmp dword ptr [0x11675f9c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11675f9c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116491bc jne 0x116491e7 */
  if (!C.zf) goto L_116491e7;
L_116491be:;
  /* 116491be push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 116491c3 call 0x116491f0 */
  push32(0x116491c8u); f_116491f0();
  /* 116491c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116491cb cmp dword ptr [0x11676108], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676108))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116491d2 je 0x116491da */
  if (C.zf) goto L_116491da;
  /* 116491d4 call dword ptr [0x11676108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11676108))), 0x116491dau);
L_116491da:;
  /* 116491da push 0xff */
  push32((uint32_t)(0xffu));
  /* 116491df call 0x116491f0 */
  push32(0x116491e4u); f_116491f0();
  /* 116491e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116491e7:;
  /* 116491e7 pop ebp */
  EBP = (pop32());
  /* 116491e8 ret  */
  ESPCHK(0x116491a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100091f0 @ 0x116491f0 (447 bytes, 131 insns) */
void f_116491f0(void) {
  FTRACE(0x116491f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116491f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116491f1 mov ebp, esp */
  EBP = (ESP);
  /* 116491f3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116491f9 push ebx */
  push32((uint32_t)(EBX));
  /* 116491fa push esi */
  push32((uint32_t)(ESI));
  /* 116491fb push edi */
  push32((uint32_t)(EDI));
  /* 116491fc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11649203 jmp 0x1164920e */
  goto L_1164920e;
L_11649205:;
  /* 11649205 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11649208 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164920b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1164920e:;
  /* 1164920e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649212 jae 0x11649227 */
  if (!C.cf) goto L_11649227;
  /* 11649214 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11649217 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164921a cmp edx, dword ptr [ecx*8 + 0x11673c00] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11673c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649221 jne 0x11649225 */
  if (!C.zf) goto L_11649225;
  /* 11649223 jmp 0x11649227 */
  goto L_11649227;
L_11649225:;
  /* 11649225 jmp 0x11649205 */
  goto L_11649205;
L_11649227:;
  /* 11649227 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164922a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164922d cmp ecx, dword ptr [eax*8 + 0x11673c00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11673c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649234 jne 0x116493a8 */
  if (!C.zf) goto L_116493a8;
  /* 1164923a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649241 je 0x11649264 */
  if (C.zf) goto L_11649264;
  /* 11649243 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11649246 mov eax, dword ptr [edx*8 + 0x11673c04] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11673c04)));
  /* 1164924d push eax */
  push32((uint32_t)(EAX));
  /* 1164924e push 0 */
  push32((uint32_t)(0x0u));
  /* 11649250 push 0 */
  push32((uint32_t)(0x0u));
  /* 11649252 push 0 */
  push32((uint32_t)(0x0u));
  /* 11649254 push 1 */
  push32((uint32_t)(0x1u));
  /* 11649256 call 0x11645180 */
  push32(0x1164925bu); f_11645180();
  /* 1164925b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164925e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649261 jne 0x11649264 */
  if (!C.zf) goto L_11649264;
  /* 11649263 int3  */
  x86_unimpl("int3 @ 0x11649263");
L_11649264:;
  /* 11649264 cmp dword ptr [0x11675f98], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11675f98))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164926b je 0x1164927f */
  if (C.zf) goto L_1164927f;
  /* 1164926d cmp dword ptr [0x11675f98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11675f98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649274 jne 0x116492b8 */
  if (!C.zf) goto L_116492b8;
  /* 11649276 cmp dword ptr [0x11675f9c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11675f9c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164927d jne 0x116492b8 */
  if (!C.zf) goto L_116492b8;
L_1164927f:;
  /* 1164927f push 0 */
  push32((uint32_t)(0x0u));
  /* 11649281 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11649284 push ecx */
  push32((uint32_t)(ECX));
  /* 11649285 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11649288 mov eax, dword ptr [edx*8 + 0x11673c04] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11673c04)));
  /* 1164928f push eax */
  push32((uint32_t)(EAX));
  /* 11649290 call 0x116496f0 */
  push32(0x11649295u); f_116496f0();
  /* 11649295 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649298 push eax */
  push32((uint32_t)(EAX));
  /* 11649299 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164929c mov edx, dword ptr [ecx*8 + 0x11673c04] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11673c04)));
  /* 116492a3 push edx */
  push32((uint32_t)(EDX));
  /* 116492a4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 116492a6 call dword ptr [0x11678348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678348))), 0x116492acu);
  /* 116492ac push eax */
  push32((uint32_t)(EAX));
  /* 116492ad call dword ptr [0x1167834c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167834c))), 0x116492b3u);
  /* 116492b3 jmp 0x116493a8 */
  goto L_116493a8;
L_116492b8:;
  /* 116492b8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116492bf je 0x116493a8 */
  if (C.zf) goto L_116493a8;
  /* 116492c5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 116492ca lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 116492d0 push eax */
  push32((uint32_t)(EAX));
  /* 116492d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116492d3 call dword ptr [0x11678364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678364))), 0x116492d9u);
  /* 116492d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116492db jne 0x116492f1 */
  if (!C.zf) goto L_116492f1;
  /* 116492dd push 0x11670504 */
  push32((uint32_t)(0x11670504u));
  /* 116492e2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 116492e8 push ecx */
  push32((uint32_t)(ECX));
  /* 116492e9 call 0x11649870 */
  push32(0x116492eeu); f_11649870();
  /* 116492ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116492f1:;
  /* 116492f1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 116492f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116492fa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116492fd push eax */
  push32((uint32_t)(EAX));
  /* 116492fe call 0x116496f0 */
  push32(0x11649303u); f_116496f0();
  /* 11649303 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649306 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649309 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164930c jbe 0x1164933a */
  if ((C.cf||C.zf)) goto L_1164933a;
  /* 1164930e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11649314 push ecx */
  push32((uint32_t)(ECX));
  /* 11649315 call 0x116496f0 */
  push32(0x1164931au); f_116496f0();
  /* 1164931a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164931d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11649320 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11649324 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11649327 push 3 */
  push32((uint32_t)(0x3u));
  /* 11649329 push 0x11670500 */
  push32((uint32_t)(0x11670500u));
  /* 1164932e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11649331 push ecx */
  push32((uint32_t)(ECX));
  /* 11649332 call 0x1164a0e0 */
  push32(0x11649337u); f_1164a0e0();
  /* 11649337 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164933a:;
  /* 1164933a push 0x11670f98 */
  push32((uint32_t)(0x11670f98u));
  /* 1164933f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11649345 push edx */
  push32((uint32_t)(EDX));
  /* 11649346 call 0x11649870 */
  push32(0x1164934bu); f_11649870();
  /* 1164934b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164934e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11649351 push eax */
  push32((uint32_t)(EAX));
  /* 11649352 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11649358 push ecx */
  push32((uint32_t)(ECX));
  /* 11649359 call 0x11649880 */
  push32(0x1164935eu); f_11649880();
  /* 1164935e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649361 push 0x11670478 */
  push32((uint32_t)(0x11670478u));
  /* 11649366 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1164936c push edx */
  push32((uint32_t)(EDX));
  /* 1164936d call 0x11649880 */
  push32(0x11649372u); f_11649880();
  /* 11649372 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649375 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11649378 mov ecx, dword ptr [eax*8 + 0x11673c04] */
  ECX = (r32((uint32_t)(EAX*8 + 0x11673c04)));
  /* 1164937f push ecx */
  push32((uint32_t)(ECX));
  /* 11649380 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11649386 push edx */
  push32((uint32_t)(EDX));
  /* 11649387 call 0x11649880 */
  push32(0x1164938cu); f_11649880();
  /* 1164938c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164938f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11649394 push 0x11670f70 */
  push32((uint32_t)(0x11670f70u));
  /* 11649399 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1164939f push eax */
  push32((uint32_t)(EAX));
  /* 116493a0 call 0x1164a020 */
  push32(0x116493a5u); f_1164a020();
  /* 116493a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116493a8:;
  /* 116493a8 pop edi */
  EDI = (pop32());
  /* 116493a9 pop esi */
  ESI = (pop32());
  /* 116493aa pop ebx */
  EBX = (pop32());
  /* 116493ab mov esp, ebp */
  ESP = (EBP);
  /* 116493ad pop ebp */
  EBP = (pop32());
  /* 116493ae ret  */
  ESPCHK(0x116491f0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x116493b0 (80 bytes, 27 insns) */
void f_116493b0(void) {
  FTRACE(0x116493b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116493b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116493b1 mov ebp, esp */
  EBP = (ESP);
  /* 116493b3 push ecx */
  push32((uint32_t)(ECX));
  /* 116493b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116493bb jmp 0x116493c6 */
  goto L_116493c6;
L_116493bd:;
  /* 116493bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116493c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116493c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116493c6:;
  /* 116493c6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116493ca jae 0x116493df */
  if (!C.cf) goto L_116493df;
  /* 116493cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116493cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116493d2 cmp edx, dword ptr [ecx*8 + 0x11673c00] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11673c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116493d9 jne 0x116493dd */
  if (!C.zf) goto L_116493dd;
  /* 116493db jmp 0x116493df */
  goto L_116493df;
L_116493dd:;
  /* 116493dd jmp 0x116493bd */
  goto L_116493bd;
L_116493df:;
  /* 116493df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116493e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116493e5 cmp ecx, dword ptr [eax*8 + 0x11673c00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11673c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116493ec jne 0x116493fa */
  if (!C.zf) goto L_116493fa;
  /* 116493ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116493f1 mov eax, dword ptr [edx*8 + 0x11673c04] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11673c04)));
  /* 116493f8 jmp 0x116493fc */
  goto L_116493fc;
L_116493fa:;
  /* 116493fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116493fc:;
  /* 116493fc mov esp, ebp */
  ESP = (EBP);
  /* 116493fe pop ebp */
  EBP = (pop32());
  /* 116493ff ret  */
  ESPCHK(0x116493b0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11649400 (66 bytes, 28 insns) */
void f_11649400(void) {
  FTRACE(0x11649400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11649400 push ebp */
  push32((uint32_t)(EBP));
  /* 11649401 mov ebp, esp */
  EBP = (ESP);
  /* 11649403 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649407 jne 0x11649427 */
  if (!C.zf) goto L_11649427;
  /* 11649409 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164940d jge 0x11649427 */
  if ((C.sf==C.of)) goto L_11649427;
  /* 1164940f push 1 */
  push32((uint32_t)(0x1u));
  /* 11649411 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11649414 push eax */
  push32((uint32_t)(EAX));
  /* 11649415 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11649418 push ecx */
  push32((uint32_t)(ECX));
  /* 11649419 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164941c push edx */
  push32((uint32_t)(EDX));
  /* 1164941d call 0x11649450 */
  push32(0x11649422u); f_11649450();
  /* 11649422 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649425 jmp 0x1164943d */
  goto L_1164943d;
L_11649427:;
  /* 11649427 push 0 */
  push32((uint32_t)(0x0u));
  /* 11649429 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164942c push eax */
  push32((uint32_t)(EAX));
  /* 1164942d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11649430 push ecx */
  push32((uint32_t)(ECX));
  /* 11649431 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11649434 push edx */
  push32((uint32_t)(EDX));
  /* 11649435 call 0x11649450 */
  push32(0x1164943au); f_11649450();
  /* 1164943a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164943d:;
  /* 1164943d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11649440 pop ebp */
  EBP = (pop32());
  /* 11649441 ret  */
  ESPCHK(0x11649400u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11649450 (194 bytes, 71 insns) */
void f_11649450(void) {
  FTRACE(0x11649450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11649450 push ebp */
  push32((uint32_t)(EBP));
  /* 11649451 mov ebp, esp */
  EBP = (ESP);
  /* 11649453 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11649456 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11649459 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164945c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649460 je 0x11649479 */
  if (C.zf) goto L_11649479;
  /* 11649462 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649465 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11649468 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164946b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164946e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11649471 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11649474 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11649476 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11649479:;
  /* 11649479 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164947c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1164947f:;
  /* 1164947f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11649482 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11649484 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11649487 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1164948a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164948d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1164948f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11649492 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11649495 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649499 jbe 0x116494b1 */
  if ((C.cf||C.zf)) goto L_116494b1;
  /* 1164949b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164949e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116494a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116494a4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116494a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116494a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116494ac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116494af jmp 0x116494c5 */
  goto L_116494c5;
L_116494b1:;
  /* 116494b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116494b4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116494b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116494ba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116494bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116494bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116494c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116494c5:;
  /* 116494c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116494c9 ja 0x1164947f */
  if ((!C.cf&&!C.zf)) goto L_1164947f;
  /* 116494cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116494ce mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 116494d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116494d4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116494d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116494da:;
  /* 116494da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116494dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116494df mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 116494e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116494e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116494e8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116494ea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116494ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116494ef mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 116494f2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 116494f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116494f7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116494fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116494fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11649500 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649503 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11649506 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11649509 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164950c jb 0x116494da */
  if (C.cf) goto L_116494da;
  /* 1164950e mov esp, ebp */
  ESP = (EBP);
  /* 11649510 pop ebp */
  EBP = (pop32());
  /* 11649511 ret  */
  ESPCHK(0x11649450u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11649520 (63 bytes, 24 insns) */
void f_11649520(void) {
  FTRACE(0x11649520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11649520 push ebp */
  push32((uint32_t)(EBP));
  /* 11649521 mov ebp, esp */
  EBP = (ESP);
  /* 11649523 push ecx */
  push32((uint32_t)(ECX));
  /* 11649524 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649528 jne 0x11649539 */
  if (!C.zf) goto L_11649539;
  /* 1164952a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164952e jge 0x11649539 */
  if ((C.sf==C.of)) goto L_11649539;
  /* 11649530 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11649537 jmp 0x11649540 */
  goto L_11649540;
L_11649539:;
  /* 11649539 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11649540:;
  /* 11649540 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649543 push eax */
  push32((uint32_t)(EAX));
  /* 11649544 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11649547 push ecx */
  push32((uint32_t)(ECX));
  /* 11649548 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164954b push edx */
  push32((uint32_t)(EDX));
  /* 1164954c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164954f push eax */
  push32((uint32_t)(EAX));
  /* 11649550 call 0x11649450 */
  push32(0x11649555u); f_11649450();
  /* 11649555 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649558 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164955b mov esp, ebp */
  ESP = (EBP);
  /* 1164955d pop ebp */
  EBP = (pop32());
  /* 1164955e ret  */
  ESPCHK(0x11649520u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11649560 (30 bytes, 14 insns) */
void f_11649560(void) {
  FTRACE(0x11649560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11649560 push ebp */
  push32((uint32_t)(EBP));
  /* 11649561 mov ebp, esp */
  EBP = (ESP);
  /* 11649563 push 0 */
  push32((uint32_t)(0x0u));
  /* 11649565 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11649568 push eax */
  push32((uint32_t)(EAX));
  /* 11649569 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164956c push ecx */
  push32((uint32_t)(ECX));
  /* 1164956d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11649570 push edx */
  push32((uint32_t)(EDX));
  /* 11649571 call 0x11649450 */
  push32(0x11649576u); f_11649450();
  /* 11649576 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649579 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164957c pop ebp */
  EBP = (pop32());
  /* 1164957d ret  */
  ESPCHK(0x11649560u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11649580 (72 bytes, 28 insns) */
void f_11649580(void) {
  FTRACE(0x11649580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11649580 push ebp */
  push32((uint32_t)(EBP));
  /* 11649581 mov ebp, esp */
  EBP = (ESP);
  /* 11649583 push ecx */
  push32((uint32_t)(ECX));
  /* 11649584 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649588 jne 0x116495a1 */
  if (!C.zf) goto L_116495a1;
  /* 1164958a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164958e jg 0x116495a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_116495a1;
  /* 11649590 jl 0x11649598 */
  if ((C.sf!=C.of)) goto L_11649598;
  /* 11649592 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649596 jae 0x116495a1 */
  if (!C.cf) goto L_116495a1;
L_11649598:;
  /* 11649598 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1164959f jmp 0x116495a8 */
  goto L_116495a8;
L_116495a1:;
  /* 116495a1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116495a8:;
  /* 116495a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116495ab push eax */
  push32((uint32_t)(EAX));
  /* 116495ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116495af push ecx */
  push32((uint32_t)(ECX));
  /* 116495b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116495b3 push edx */
  push32((uint32_t)(EDX));
  /* 116495b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116495b7 push eax */
  push32((uint32_t)(EAX));
  /* 116495b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116495bb push ecx */
  push32((uint32_t)(ECX));
  /* 116495bc call 0x116495d0 */
  push32(0x116495c1u); f_116495d0();
  /* 116495c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116495c4 mov esp, ebp */
  ESP = (EBP);
  /* 116495c6 pop ebp */
  EBP = (pop32());
  /* 116495c7 ret  */
  ESPCHK(0x11649580u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x116495d0 (242 bytes, 91 insns) */
void f_116495d0(void) {
  FTRACE(0x116495d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116495d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116495d1 mov ebp, esp */
  EBP = (ESP);
  /* 116495d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116495d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116495d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116495dc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116495e0 je 0x11649604 */
  if (C.zf) goto L_11649604;
  /* 116495e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116495e5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 116495e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116495eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116495ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116495f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116495f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116495f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116495f9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116495fc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116495fe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11649601 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11649604:;
  /* 11649604 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649607 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1164960a:;
  /* 1164960a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1164960d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164960f push ecx */
  push32((uint32_t)(ECX));
  /* 11649610 push eax */
  push32((uint32_t)(EAX));
  /* 11649611 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11649614 push edx */
  push32((uint32_t)(EDX));
  /* 11649615 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11649618 push eax */
  push32((uint32_t)(EAX));
  /* 11649619 call 0x1164e9f0 */
  push32(0x1164961eu); f_1164e9f0();
  /* 1164961e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11649621 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11649624 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11649626 push edx */
  push32((uint32_t)(EDX));
  /* 11649627 push ecx */
  push32((uint32_t)(ECX));
  /* 11649628 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164962b push eax */
  push32((uint32_t)(EAX));
  /* 1164962c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164962f push ecx */
  push32((uint32_t)(ECX));
  /* 11649630 call 0x1164e980 */
  push32(0x11649635u); f_1164e980();
  /* 11649635 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11649638 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1164963b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164963f jbe 0x11649657 */
  if ((C.cf||C.zf)) goto L_11649657;
  /* 11649641 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11649644 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649647 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164964a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1164964c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164964f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649652 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11649655 jmp 0x1164966b */
  goto L_1164966b;
L_11649657:;
  /* 11649657 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164965a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164965d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649660 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11649662 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649665 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649668 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1164966b:;
  /* 1164966b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164966f ja 0x1164960a */
  if ((!C.cf&&!C.zf)) goto L_1164960a;
  /* 11649671 jb 0x11649679 */
  if (C.cf) goto L_11649679;
  /* 11649673 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649677 ja 0x1164960a */
  if ((!C.cf&&!C.zf)) goto L_1164960a;
L_11649679:;
  /* 11649679 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164967c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1164967f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649682 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11649685 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11649688:;
  /* 11649688 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164968b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1164968d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11649690 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649693 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11649696 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11649698 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1164969a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164969d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 116496a0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 116496a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116496a5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116496a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116496ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116496ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116496b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116496b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116496b7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116496ba jb 0x11649688 */
  if (C.cf) goto L_11649688;
  /* 116496bc mov esp, ebp */
  ESP = (EBP);
  /* 116496be pop ebp */
  EBP = (pop32());
  /* 116496bf ret 0x14 */
  ESPCHK(0x116495d0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x116496d0 (31 bytes, 15 insns) */
void f_116496d0(void) {
  FTRACE(0x116496d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116496d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116496d1 mov ebp, esp */
  EBP = (ESP);
  /* 116496d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116496d5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116496d8 push eax */
  push32((uint32_t)(EAX));
  /* 116496d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116496dc push ecx */
  push32((uint32_t)(ECX));
  /* 116496dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116496e0 push edx */
  push32((uint32_t)(EDX));
  /* 116496e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116496e4 push eax */
  push32((uint32_t)(EAX));
  /* 116496e5 call 0x116495d0 */
  push32(0x116496eau); f_116495d0();
  /* 116496ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116496ed pop ebp */
  EBP = (pop32());
  /* 116496ee ret  */
  ESPCHK(0x116496d0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x116496f0 (123 bytes, 44 insns) */
void f_116496f0(void) {
  FTRACE(0x116496f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116496f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 116496f4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 116496fa je 0x11649710 */
  if (C.zf) goto L_11649710;
L_116496fc:;
  /* 116496fc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 116496fe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116496ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11649701 je 0x11649743 */
  if (C.zf) goto L_11649743;
  /* 11649703 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11649709 jne 0x116496fc */
  if (!C.zf) goto L_116496fc;
  /* 1164970b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11649710:;
  /* 11649710 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11649712 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11649717 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649719 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164971c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164971e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649721 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11649726 je 0x11649710 */
  if (C.zf) goto L_11649710;
  /* 11649728 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1164972b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1164972d je 0x11649761 */
  if (C.zf) goto L_11649761;
  /* 1164972f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11649731 je 0x11649757 */
  if (C.zf) goto L_11649757;
  /* 11649733 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11649738 je 0x1164974d */
  if (C.zf) goto L_1164974d;
  /* 1164973a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1164973f je 0x11649743 */
  if (C.zf) goto L_11649743;
  /* 11649741 jmp 0x11649710 */
  goto L_11649710;
L_11649743:;
  /* 11649743 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11649746 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1164974a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164974c ret  */
  ESPCHK(0x116496f0u, _esp0);
  ESP += 4; return;
L_1164974d:;
  /* 1164974d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11649750 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11649754 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11649756 ret  */
  ESPCHK(0x116496f0u, _esp0);
  ESP += 4; return;
L_11649757:;
  /* 11649757 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1164975a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1164975e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11649760 ret  */
  ESPCHK(0x116496f0u, _esp0);
  ESP += 4; return;
L_11649761:;
  /* 11649761 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11649764 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11649768 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164976a ret  */
  ESPCHK(0x116496f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009770 @ 0x11649770 (249 bytes, 93 insns) */
void f_11649770(void) {
  FTRACE(0x11649770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11649770 push ebp */
  push32((uint32_t)(EBP));
  /* 11649771 mov ebp, esp */
  EBP = (ESP);
  /* 11649773 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11649776 push ebx */
  push32((uint32_t)(EBX));
  /* 11649777 push esi */
  push32((uint32_t)(ESI));
  /* 11649778 push edi */
  push32((uint32_t)(EDI));
  /* 11649779 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1164977c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1164977f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11649782 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11649785:;
  /* 11649785 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649789 jne 0x116497a9 */
  if (!C.zf) goto L_116497a9;
  /* 1164978b push 0x11670fd0 */
  push32((uint32_t)(0x11670fd0u));
  /* 11649790 push 0 */
  push32((uint32_t)(0x0u));
  /* 11649792 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11649794 push 0x11670fc4 */
  push32((uint32_t)(0x11670fc4u));
  /* 11649799 push 2 */
  push32((uint32_t)(0x2u));
  /* 1164979b call 0x11645180 */
  push32(0x116497a0u); f_11645180();
  /* 116497a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116497a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116497a6 jne 0x116497a9 */
  if (!C.zf) goto L_116497a9;
  /* 116497a8 int3  */
  x86_unimpl("int3 @ 0x116497a8");
L_116497a9:;
  /* 116497a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116497ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116497ad jne 0x11649785 */
  if (!C.zf) goto L_11649785;
L_116497af:;
  /* 116497af cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116497b3 jne 0x116497d3 */
  if (!C.zf) goto L_116497d3;
  /* 116497b5 push 0x11670fb4 */
  push32((uint32_t)(0x11670fb4u));
  /* 116497ba push 0 */
  push32((uint32_t)(0x0u));
  /* 116497bc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 116497be push 0x11670fc4 */
  push32((uint32_t)(0x11670fc4u));
  /* 116497c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 116497c5 call 0x11645180 */
  push32(0x116497cau); f_11645180();
  /* 116497ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116497cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116497d0 jne 0x116497d3 */
  if (!C.zf) goto L_116497d3;
  /* 116497d2 int3  */
  x86_unimpl("int3 @ 0x116497d2");
L_116497d3:;
  /* 116497d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116497d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116497d7 jne 0x116497af */
  if (!C.zf) goto L_116497af;
  /* 116497d9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116497dc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 116497e3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116497e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116497e9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116497ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116497ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116497f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116497f4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116497f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116497fa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 116497fd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11649800 push edx */
  push32((uint32_t)(EDX));
  /* 11649801 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11649804 push eax */
  push32((uint32_t)(EAX));
  /* 11649805 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11649808 push ecx */
  push32((uint32_t)(ECX));
  /* 11649809 call 0x1164ecf0 */
  push32(0x1164980eu); f_1164ecf0();
  /* 1164980e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649811 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11649814 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11649817 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1164981a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164981d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11649820 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11649823 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11649826 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164982a jl 0x1164984e */
  if ((C.sf!=C.of)) goto L_1164984e;
  /* 1164982c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164982f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11649831 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11649834 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11649836 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164983c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1164983f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11649842 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11649844 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649847 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164984a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1164984c jmp 0x1164985f */
  goto L_1164985f;
L_1164984e:;
  /* 1164984e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11649851 push eax */
  push32((uint32_t)(EAX));
  /* 11649852 push 0 */
  push32((uint32_t)(0x0u));
  /* 11649854 call 0x1164ea70 */
  push32(0x11649859u); f_1164ea70();
  /* 11649859 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164985c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1164985f:;
  /* 1164985f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11649862 pop edi */
  EDI = (pop32());
  /* 11649863 pop esi */
  ESI = (pop32());
  /* 11649864 pop ebx */
  EBX = (pop32());
  /* 11649865 mov esp, ebp */
  ESP = (EBP);
  /* 11649867 pop ebp */
  EBP = (pop32());
  /* 11649868 ret  */
  ESPCHK(0x11649770u, _esp0);
  ESP += 4; return;
}

/* FUN_10009870 @ 0x11649870 (7 bytes, 3 insns) */
void f_11649870(void) {
  FTRACE(0x11649870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11649870 push edi */
  push32((uint32_t)(EDI));
  /* 11649871 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11649875 jmp 0x116498e1 */
  jmp_ind(0x116498e1u); return;
}

/* FUN_10009880 @ 0x11649880 (224 bytes, 84 insns) */
void f_11649880(void) {
  FTRACE(0x11649880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11649880 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11649884 push edi */
  push32((uint32_t)(EDI));
  /* 11649885 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1164988b je 0x1164989c */
  if (C.zf) goto L_1164989c;
L_1164988d:;
  /* 1164988d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1164988f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11649890 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11649892 je 0x116498cf */
  if (C.zf) goto L_116498cf;
  /* 11649894 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1164989a jne 0x1164988d */
  if (!C.zf) goto L_1164988d;
L_1164989c:;
  /* 1164989c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1164989e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 116498a3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116498a5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116498a8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116498aa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116498ad test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 116498b2 je 0x1164989c */
  if (C.zf) goto L_1164989c;
  /* 116498b4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 116498b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116498b9 je 0x116498de */
  if (C.zf) goto L_116498de;
  /* 116498bb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 116498bd je 0x116498d9 */
  if (C.zf) goto L_116498d9;
  /* 116498bf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 116498c4 je 0x116498d4 */
  if (C.zf) goto L_116498d4;
  /* 116498c6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 116498cb je 0x116498cf */
  if (C.zf) goto L_116498cf;
  /* 116498cd jmp 0x1164989c */
  goto L_1164989c;
L_116498cf:;
  /* 116498cf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 116498d2 jmp 0x116498e1 */
  goto L_116498e1;
L_116498d4:;
  /* 116498d4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 116498d7 jmp 0x116498e1 */
  goto L_116498e1;
L_116498d9:;
  /* 116498d9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 116498dc jmp 0x116498e1 */
  goto L_116498e1;
L_116498de:;
  /* 116498de lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_116498e1:;
  /* 116498e1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 116498e5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 116498eb je 0x11649906 */
  if (C.zf) goto L_11649906;
L_116498ed:;
  /* 116498ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116498ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116498f0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 116498f2 je 0x11649958 */
  if (C.zf) goto L_11649958;
  /* 116498f4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 116498f6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116498f7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 116498fd jne 0x116498ed */
  if (!C.zf) goto L_116498ed;
  /* 116498ff jmp 0x11649906 */
  goto L_11649906;
L_11649901:;
  /* 11649901 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11649903 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11649906:;
  /* 11649906 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1164990b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1164990d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164990f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11649912 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11649914 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11649916 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649919 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1164991e je 0x11649901 */
  if (C.zf) goto L_11649901;
  /* 11649920 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11649922 je 0x11649958 */
  if (C.zf) goto L_11649958;
  /* 11649924 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11649926 je 0x1164994f */
  if (C.zf) goto L_1164994f;
  /* 11649928 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1164992e je 0x11649942 */
  if (C.zf) goto L_11649942;
  /* 11649930 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11649936 je 0x1164993a */
  if (C.zf) goto L_1164993a;
  /* 11649938 jmp 0x11649901 */
  goto L_11649901;
L_1164993a:;
  /* 1164993a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1164993c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11649940 pop edi */
  EDI = (pop32());
  /* 11649941 ret  */
  ESPCHK(0x11649880u, _esp0);
  ESP += 4; return;
L_11649942:;
  /* 11649942 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11649945 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11649949 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1164994d pop edi */
  EDI = (pop32());
  /* 1164994e ret  */
  ESPCHK(0x11649880u, _esp0);
  ESP += 4; return;
L_1164994f:;
  /* 1164994f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11649952 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11649956 pop edi */
  EDI = (pop32());
  /* 11649957 ret  */
  ESPCHK(0x11649880u, _esp0);
  ESP += 4; return;
L_11649958:;
  /* 11649958 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1164995a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1164995e pop edi */
  EDI = (pop32());
  /* 1164995f ret  */
  ESPCHK(0x11649880u, _esp0);
  ESP += 4; return;
}

/* FUN_10009960 @ 0x11649960 (243 bytes, 91 insns) */
void f_11649960(void) {
  FTRACE(0x11649960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11649960 push ebp */
  push32((uint32_t)(EBP));
  /* 11649961 mov ebp, esp */
  EBP = (ESP);
  /* 11649963 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11649966 push ebx */
  push32((uint32_t)(EBX));
  /* 11649967 push esi */
  push32((uint32_t)(ESI));
  /* 11649968 push edi */
  push32((uint32_t)(EDI));
  /* 11649969 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1164996c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1164996f:;
  /* 1164996f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649973 jne 0x11649993 */
  if (!C.zf) goto L_11649993;
  /* 11649975 push 0x11670fd0 */
  push32((uint32_t)(0x11670fd0u));
  /* 1164997a push 0 */
  push32((uint32_t)(0x0u));
  /* 1164997c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1164997e push 0x11670fe0 */
  push32((uint32_t)(0x11670fe0u));
  /* 11649983 push 2 */
  push32((uint32_t)(0x2u));
  /* 11649985 call 0x11645180 */
  push32(0x1164998au); f_11645180();
  /* 1164998a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164998d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649990 jne 0x11649993 */
  if (!C.zf) goto L_11649993;
  /* 11649992 int3  */
  x86_unimpl("int3 @ 0x11649992");
L_11649993:;
  /* 11649993 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11649995 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11649997 jne 0x1164996f */
  if (!C.zf) goto L_1164996f;
L_11649999:;
  /* 11649999 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164999d jne 0x116499bd */
  if (!C.zf) goto L_116499bd;
  /* 1164999f push 0x11670fb4 */
  push32((uint32_t)(0x11670fb4u));
  /* 116499a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116499a6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 116499a8 push 0x11670fe0 */
  push32((uint32_t)(0x11670fe0u));
  /* 116499ad push 2 */
  push32((uint32_t)(0x2u));
  /* 116499af call 0x11645180 */
  push32(0x116499b4u); f_11645180();
  /* 116499b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116499b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116499ba jne 0x116499bd */
  if (!C.zf) goto L_116499bd;
  /* 116499bc int3  */
  x86_unimpl("int3 @ 0x116499bc");
L_116499bd:;
  /* 116499bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116499bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116499c1 jne 0x11649999 */
  if (!C.zf) goto L_11649999;
  /* 116499c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116499c6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 116499cd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116499d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116499d3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 116499d6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116499d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116499dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116499de mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116499e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116499e4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 116499e7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116499ea push ecx */
  push32((uint32_t)(ECX));
  /* 116499eb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116499ee push edx */
  push32((uint32_t)(EDX));
  /* 116499ef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116499f2 push eax */
  push32((uint32_t)(EAX));
  /* 116499f3 call 0x1164ecf0 */
  push32(0x116499f8u); f_1164ecf0();
  /* 116499f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116499fb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116499fe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11649a01 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11649a04 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11649a07 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11649a0a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11649a0d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11649a10 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649a14 jl 0x11649a38 */
  if ((C.sf!=C.of)) goto L_11649a38;
  /* 11649a16 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11649a19 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11649a1b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11649a1e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11649a20 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11649a26 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11649a29 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11649a2c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11649a2e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649a31 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11649a34 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11649a36 jmp 0x11649a49 */
  goto L_11649a49;
L_11649a38:;
  /* 11649a38 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11649a3b push edx */
  push32((uint32_t)(EDX));
  /* 11649a3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11649a3e call 0x1164ea70 */
  push32(0x11649a43u); f_1164ea70();
  /* 11649a43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649a46 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11649a49:;
  /* 11649a49 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11649a4c pop edi */
  EDI = (pop32());
  /* 11649a4d pop esi */
  ESI = (pop32());
  /* 11649a4e pop ebx */
  EBX = (pop32());
  /* 11649a4f mov esp, ebp */
  ESP = (EBP);
  /* 11649a51 pop ebp */
  EBP = (pop32());
  /* 11649a52 ret  */
  ESPCHK(0x11649960u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a60 @ 0x11649a60 (47 bytes, 17 insns) */
void f_11649a60(void) {
  FTRACE(0x11649a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11649a60 push ecx */
  push32((uint32_t)(ECX));
  /* 11649a61 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649a66 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11649a6a jb 0x11649a80 */
  if (C.cf) goto L_11649a80;
L_11649a6c:;
  /* 11649a6c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11649a72 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11649a77 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11649a79 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649a7e jae 0x11649a6c */
  if (!C.cf) goto L_11649a6c;
L_11649a80:;
  /* 11649a80 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11649a82 mov eax, esp */
  EAX = (ESP);
  /* 11649a84 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11649a86 mov esp, ecx */
  ESP = (ECX);
  /* 11649a88 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11649a8a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11649a8d push eax */
  push32((uint32_t)(EAX));
  /* 11649a8e ret  */
  ESPCHK(0x11649a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a90 @ 0x11649a90 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11649a90(void) {
  FTRACE(0x11649a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11649a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11649a91 mov ebp, esp */
  EBP = (ESP);
  /* 11649a93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11649a96 push esi */
  push32((uint32_t)(ESI));
  /* 11649a97 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649a9b je 0x11649aa3 */
  if (C.zf) goto L_11649aa3;
  /* 11649a9d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649aa1 jne 0x11649aa8 */
  if (!C.zf) goto L_11649aa8;
L_11649aa3:;
  /* 11649aa3 jmp 0x11649c78 */
  goto L_11649c78;
L_11649aa8:;
  /* 11649aa8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649aac je 0x11649ac4 */
  if (C.zf) goto L_11649ac4;
  /* 11649aae cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649ab2 je 0x11649ac4 */
  if (C.zf) goto L_11649ac4;
  /* 11649ab4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649ab8 je 0x11649ac4 */
  if (C.zf) goto L_11649ac4;
  /* 11649aba cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649abe jne 0x11649ba1 */
  if (!C.zf) goto L_11649ba1;
L_11649ac4:;
  /* 11649ac4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11649ac6 call 0x1164b880 */
  push32(0x11649acbu); f_1164b880();
  /* 11649acb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649ace cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649ad2 je 0x11649ada */
  if (C.zf) goto L_11649ada;
  /* 11649ad4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649ad8 jne 0x11649b1f */
  if (!C.zf) goto L_11649b1f;
L_11649ada:;
  /* 11649ada cmp dword ptr [0x1167611c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1167611c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649ae1 jne 0x11649b1f */
  if (!C.zf) goto L_11649b1f;
  /* 11649ae3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11649ae5 push 0x11649cc0 */
  push32((uint32_t)(0x11649cc0u));
  /* 11649aea call dword ptr [0x1167832c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167832c))), 0x11649af0u);
  /* 11649af0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649af3 jne 0x11649b01 */
  if (!C.zf) goto L_11649b01;
  /* 11649af5 mov dword ptr [0x1167611c], 1 */
  w32((uint32_t)(0x1167611c), (0x1u));
  /* 11649aff jmp 0x11649b1f */
  goto L_11649b1f;
L_11649b01:;
  /* 11649b01 call dword ptr [0x11678390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678390))), 0x11649b07u);
  /* 11649b07 mov esi, eax */
  ESI = (EAX);
  /* 11649b09 call 0x1164fc40 */
  push32(0x11649b0eu); f_1164fc40();
  /* 11649b0e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11649b10 push 1 */
  push32((uint32_t)(0x1u));
  /* 11649b12 call 0x1164b920 */
  push32(0x11649b17u); f_1164b920();
  /* 11649b17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649b1a jmp 0x11649c78 */
  goto L_11649c78;
L_11649b1f:;
  /* 11649b1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11649b22 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11649b25 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11649b28 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11649b2b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11649b2e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649b32 ja 0x11649b92 */
  if ((!C.cf&&!C.zf)) goto L_11649b92;
  /* 11649b34 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11649b37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11649b39 mov dl, byte ptr [eax + 0x11649c9f] */
  DL = (r8((uint32_t)(EAX + 0x11649c9f)));
  /* 11649b3f jmp dword ptr [edx*4 + 0x11649c8b] */
  switch (EDX) {
    case 0: goto L_11649b46;
    case 1: goto L_11649b80;
    case 2: goto L_11649b5a;
    case 3: goto L_11649b6d;
    case 4: goto L_11649b92;
    default: x86_unimpl("switch@0x11649b3f out of table"); return;
  }
L_11649b46:;
  /* 11649b46 mov ecx, dword ptr [0x1167610c] */
  ECX = (r32((uint32_t)(0x1167610c)));
  /* 11649b4c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11649b4f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11649b52 mov dword ptr [0x1167610c], edx */
  w32((uint32_t)(0x1167610c), (EDX));
  /* 11649b58 jmp 0x11649b92 */
  goto L_11649b92;
L_11649b5a:;
  /* 11649b5a mov eax, dword ptr [0x11676110] */
  EAX = (r32((uint32_t)(0x11676110)));
  /* 11649b5f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11649b62 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11649b65 mov dword ptr [0x11676110], ecx */
  w32((uint32_t)(0x11676110), (ECX));
  /* 11649b6b jmp 0x11649b92 */
  goto L_11649b92;
L_11649b6d:;
  /* 11649b6d mov edx, dword ptr [0x11676114] */
  EDX = (r32((uint32_t)(0x11676114)));
  /* 11649b73 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11649b76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11649b79 mov dword ptr [0x11676114], eax */
  w32((uint32_t)(0x11676114), (EAX));
  /* 11649b7e jmp 0x11649b92 */
  goto L_11649b92;
L_11649b80:;
  /* 11649b80 mov ecx, dword ptr [0x11676118] */
  ECX = (r32((uint32_t)(0x11676118)));
  /* 11649b86 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11649b89 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11649b8c mov dword ptr [0x11676118], edx */
  w32((uint32_t)(0x11676118), (EDX));
L_11649b92:;
  /* 11649b92 push 1 */
  push32((uint32_t)(0x1u));
  /* 11649b94 call 0x1164b920 */
  push32(0x11649b99u); f_1164b920();
  /* 11649b99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649b9c jmp 0x11649c73 */
  goto L_11649c73;
L_11649ba1:;
  /* 11649ba1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649ba5 je 0x11649bb8 */
  if (C.zf) goto L_11649bb8;
  /* 11649ba7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649bab je 0x11649bb8 */
  if (C.zf) goto L_11649bb8;
  /* 11649bad cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649bb1 je 0x11649bb8 */
  if (C.zf) goto L_11649bb8;
  /* 11649bb3 jmp 0x11649c78 */
  goto L_11649c78;
L_11649bb8:;
  /* 11649bb8 call 0x11646300 */
  push32(0x11649bbdu); f_11646300();
  /* 11649bbd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11649bc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649bc3 cmp dword ptr [eax + 0x50], 0x11673fa0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x11673fa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649bca jne 0x11649c15 */
  if (!C.zf) goto L_11649c15;
  /* 11649bcc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11649bd1 push 0x11670fec */
  push32((uint32_t)(0x11670fecu));
  /* 11649bd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11649bd8 mov ecx, dword ptr [0x11674020] */
  ECX = (r32((uint32_t)(0x11674020)));
  /* 11649bde push ecx */
  push32((uint32_t)(ECX));
  /* 11649bdf call 0x116468c0 */
  push32(0x11649be4u); f_116468c0();
  /* 11649be4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649be7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649bea mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 11649bed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649bf0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649bf4 je 0x11649c13 */
  if (C.zf) goto L_11649c13;
  /* 11649bf6 mov ecx, dword ptr [0x11674020] */
  ECX = (r32((uint32_t)(0x11674020)));
  /* 11649bfc push ecx */
  push32((uint32_t)(ECX));
  /* 11649bfd push 0x11673fa0 */
  push32((uint32_t)(0x11673fa0u));
  /* 11649c02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649c05 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11649c08 push eax */
  push32((uint32_t)(EAX));
  /* 11649c09 call 0x1164e640 */
  push32(0x11649c0eu); f_1164e640();
  /* 11649c0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649c11 jmp 0x11649c15 */
  goto L_11649c15;
L_11649c13:;
  /* 11649c13 jmp 0x11649c78 */
  goto L_11649c78;
L_11649c15:;
  /* 11649c15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649c18 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11649c1b push edx */
  push32((uint32_t)(EDX));
  /* 11649c1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11649c1f push eax */
  push32((uint32_t)(EAX));
  /* 11649c20 call 0x11649fa0 */
  push32(0x11649c25u); f_11649fa0();
  /* 11649c25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649c28 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11649c2b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649c2f jne 0x11649c33 */
  if (!C.zf) goto L_11649c33;
  /* 11649c31 jmp 0x11649c78 */
  goto L_11649c78;
L_11649c33:;
  /* 11649c33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11649c36 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11649c39 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11649c3c:;
  /* 11649c3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11649c3f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11649c42 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649c45 jne 0x11649c73 */
  if (!C.zf) goto L_11649c73;
  /* 11649c47 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11649c4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11649c4d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11649c50 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11649c53 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649c56 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11649c59 mov edx, dword ptr [0x11674024] */
  EDX = (r32((uint32_t)(0x11674024)));
  /* 11649c5f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11649c62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649c65 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11649c68 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649c6a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649c6d jb 0x11649c71 */
  if (C.cf) goto L_11649c71;
  /* 11649c6f jmp 0x11649c73 */
  goto L_11649c73;
L_11649c71:;
  /* 11649c71 jmp 0x11649c3c */
  goto L_11649c3c;
L_11649c73:;
  /* 11649c73 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11649c76 jmp 0x11649c86 */
  goto L_11649c86;
L_11649c78:;
  /* 11649c78 call 0x1164fc30 */
  push32(0x11649c7du); f_1164fc30();
  /* 11649c7d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11649c83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11649c86:;
  /* 11649c86 pop esi */
  ESI = (pop32());
  /* 11649c87 mov esp, ebp */
  ESP = (EBP);
  /* 11649c89 pop ebp */
  EBP = (pop32());
  /* 11649c8a ret  */
  ESPCHK(0x11649a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009cc0 @ 0x11649cc0 (146 bytes, 45 insns) */
void f_11649cc0(void) {
  FTRACE(0x11649cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11649cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11649cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11649cc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11649cc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11649cc8 call 0x1164b880 */
  push32(0x11649ccdu); f_1164b880();
  /* 11649ccd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649cd0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649cd4 jne 0x11649cee */
  if (!C.zf) goto L_11649cee;
  /* 11649cd6 mov dword ptr [ebp - 8], 0x1167610c */
  w32((uint32_t)(EBP + -0x8), (0x1167610cu));
  /* 11649cdd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11649ce0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11649ce2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11649ce5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11649cec jmp 0x11649d04 */
  goto L_11649d04;
L_11649cee:;
  /* 11649cee mov dword ptr [ebp - 8], 0x11676110 */
  w32((uint32_t)(EBP + -0x8), (0x11676110u));
  /* 11649cf5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11649cf8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11649cfa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11649cfd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11649d04:;
  /* 11649d04 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649d08 jne 0x11649d18 */
  if (!C.zf) goto L_11649d18;
  /* 11649d0a push 1 */
  push32((uint32_t)(0x1u));
  /* 11649d0c call 0x1164b920 */
  push32(0x11649d11u); f_1164b920();
  /* 11649d11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649d14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11649d16 jmp 0x11649d4c */
  goto L_11649d4c;
L_11649d18:;
  /* 11649d18 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649d1c je 0x11649d3d */
  if (C.zf) goto L_11649d3d;
  /* 11649d1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11649d21 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11649d27 push 1 */
  push32((uint32_t)(0x1u));
  /* 11649d29 call 0x1164b920 */
  push32(0x11649d2eu); f_1164b920();
  /* 11649d2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649d31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649d34 push edx */
  push32((uint32_t)(EDX));
  /* 11649d35 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x11649d38u);
  /* 11649d38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649d3b jmp 0x11649d47 */
  goto L_11649d47;
L_11649d3d:;
  /* 11649d3d push 1 */
  push32((uint32_t)(0x1u));
  /* 11649d3f call 0x1164b920 */
  push32(0x11649d44u); f_1164b920();
  /* 11649d44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11649d47:;
  /* 11649d47 mov eax, 1 */
  EAX = (0x1u);
L_11649d4c:;
  /* 11649d4c mov esp, ebp */
  ESP = (EBP);
  /* 11649d4e pop ebp */
  EBP = (pop32());
  /* 11649d4f ret 4 */
  ESPCHK(0x11649cc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10009d60 @ 0x11649d60 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11649d60(void) {
  FTRACE(0x11649d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11649d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11649d61 mov ebp, esp */
  EBP = (ESP);
  /* 11649d63 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11649d66 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11649d6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11649d70 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11649d73 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11649d76 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11649d79 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11649d7c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649d80 ja 0x11649e2e */
  if ((!C.cf&&!C.zf)) goto L_11649e2e;
  /* 11649d86 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11649d89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11649d8b mov dl, byte ptr [eax + 0x11649f82] */
  DL = (r8((uint32_t)(EAX + 0x11649f82)));
  /* 11649d91 jmp dword ptr [edx*4 + 0x11649f6a] */
  switch (EDX) {
    case 0: goto L_11649d98;
    case 1: goto L_11649e03;
    case 2: goto L_11649de9;
    case 3: goto L_11649db5;
    case 4: goto L_11649dcf;
    case 5: goto L_11649e2e;
    default: x86_unimpl("switch@0x11649d91 out of table"); return;
  }
L_11649d98:;
  /* 11649d98 mov dword ptr [ebp - 0x18], 0x1167610c */
  w32((uint32_t)(EBP + -0x18), (0x1167610cu));
  /* 11649d9f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11649da2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11649da4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11649da7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11649daa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649dad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11649db0 jmp 0x11649e36 */
  goto L_11649e36;
L_11649db5:;
  /* 11649db5 mov dword ptr [ebp - 0x18], 0x11676110 */
  w32((uint32_t)(EBP + -0x18), (0x11676110u));
  /* 11649dbc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11649dbf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11649dc1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11649dc4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11649dc7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649dca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11649dcd jmp 0x11649e36 */
  goto L_11649e36;
L_11649dcf:;
  /* 11649dcf mov dword ptr [ebp - 0x18], 0x11676114 */
  w32((uint32_t)(EBP + -0x18), (0x11676114u));
  /* 11649dd6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11649dd9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11649ddb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11649dde mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11649de1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649de4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11649de7 jmp 0x11649e36 */
  goto L_11649e36;
L_11649de9:;
  /* 11649de9 mov dword ptr [ebp - 0x18], 0x11676118 */
  w32((uint32_t)(EBP + -0x18), (0x11676118u));
  /* 11649df0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11649df3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11649df5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11649df8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11649dfb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649dfe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11649e01 jmp 0x11649e36 */
  goto L_11649e36;
L_11649e03:;
  /* 11649e03 call 0x11646300 */
  push32(0x11649e08u); f_11646300();
  /* 11649e08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11649e0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649e0e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11649e11 push edx */
  push32((uint32_t)(EDX));
  /* 11649e12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11649e15 push eax */
  push32((uint32_t)(EAX));
  /* 11649e16 call 0x11649fa0 */
  push32(0x11649e1bu); f_11649fa0();
  /* 11649e1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649e1e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649e21 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11649e24 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11649e27 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11649e29 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11649e2c jmp 0x11649e36 */
  goto L_11649e36;
L_11649e2e:;
  /* 11649e2e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11649e31 jmp 0x11649f66 */
  goto L_11649f66;
L_11649e36:;
  /* 11649e36 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649e3a je 0x11649e46 */
  if (C.zf) goto L_11649e46;
  /* 11649e3c push 1 */
  push32((uint32_t)(0x1u));
  /* 11649e3e call 0x1164b880 */
  push32(0x11649e43u); f_1164b880();
  /* 11649e43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11649e46:;
  /* 11649e46 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649e4a jne 0x11649e63 */
  if (!C.zf) goto L_11649e63;
  /* 11649e4c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649e50 je 0x11649e5c */
  if (C.zf) goto L_11649e5c;
  /* 11649e52 push 1 */
  push32((uint32_t)(0x1u));
  /* 11649e54 call 0x1164b920 */
  push32(0x11649e59u); f_1164b920();
  /* 11649e59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11649e5c:;
  /* 11649e5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11649e5e jmp 0x11649f66 */
  goto L_11649f66;
L_11649e63:;
  /* 11649e63 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649e67 jne 0x11649e80 */
  if (!C.zf) goto L_11649e80;
  /* 11649e69 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649e6d je 0x11649e79 */
  if (C.zf) goto L_11649e79;
  /* 11649e6f push 1 */
  push32((uint32_t)(0x1u));
  /* 11649e71 call 0x1164b920 */
  push32(0x11649e76u); f_1164b920();
  /* 11649e76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11649e79:;
  /* 11649e79 push 3 */
  push32((uint32_t)(0x3u));
  /* 11649e7b call 0x11646080 */
  push32(0x11649e80u); f_11646080();
L_11649e80:;
  /* 11649e80 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649e84 je 0x11649e92 */
  if (C.zf) goto L_11649e92;
  /* 11649e86 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649e8a je 0x11649e92 */
  if (C.zf) goto L_11649e92;
  /* 11649e8c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649e90 jne 0x11649ebe */
  if (!C.zf) goto L_11649ebe;
L_11649e92:;
  /* 11649e92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649e95 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11649e98 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11649e9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649e9e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11649ea5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649ea9 jne 0x11649ebe */
  if (!C.zf) goto L_11649ebe;
  /* 11649eab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649eae mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11649eb1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11649eb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649eb7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_11649ebe:;
  /* 11649ebe cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649ec2 jne 0x11649f00 */
  if (!C.zf) goto L_11649f00;
  /* 11649ec4 mov eax, dword ptr [0x11674018] */
  EAX = (r32((uint32_t)(0x11674018)));
  /* 11649ec9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11649ecc jmp 0x11649ed7 */
  goto L_11649ed7;
L_11649ece:;
  /* 11649ece mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11649ed1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649ed4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11649ed7:;
  /* 11649ed7 mov edx, dword ptr [0x11674018] */
  EDX = (r32((uint32_t)(0x11674018)));
  /* 11649edd add edx, dword ptr [0x1167401c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1167401c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649ee3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649ee6 jge 0x11649efe */
  if ((C.sf==C.of)) goto L_11649efe;
  /* 11649ee8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11649eeb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11649eee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649ef1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11649ef4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11649efc jmp 0x11649ece */
  goto L_11649ece;
L_11649efe:;
  /* 11649efe jmp 0x11649f09 */
  goto L_11649f09;
L_11649f00:;
  /* 11649f00 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11649f03 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11649f09:;
  /* 11649f09 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649f0d je 0x11649f19 */
  if (C.zf) goto L_11649f19;
  /* 11649f0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11649f11 call 0x1164b920 */
  push32(0x11649f16u); f_1164b920();
  /* 11649f16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11649f19:;
  /* 11649f19 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649f1d jne 0x11649f30 */
  if (!C.zf) goto L_11649f30;
  /* 11649f1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649f22 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11649f25 push edx */
  push32((uint32_t)(EDX));
  /* 11649f26 push 8 */
  push32((uint32_t)(0x8u));
  /* 11649f28 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11649f2bu);
  /* 11649f2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11649f2e jmp 0x11649f3a */
  goto L_11649f3a;
L_11649f30:;
  /* 11649f30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11649f33 push eax */
  push32((uint32_t)(EAX));
  /* 11649f34 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11649f37u);
  /* 11649f37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11649f3a:;
  /* 11649f3a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649f3e je 0x11649f4c */
  if (C.zf) goto L_11649f4c;
  /* 11649f40 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649f44 je 0x11649f4c */
  if (C.zf) goto L_11649f4c;
  /* 11649f46 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649f4a jne 0x11649f64 */
  if (!C.zf) goto L_11649f64;
L_11649f4c:;
  /* 11649f4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649f4f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11649f52 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11649f55 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649f59 jne 0x11649f64 */
  if (!C.zf) goto L_11649f64;
  /* 11649f5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649f5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11649f61 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11649f64:;
  /* 11649f64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11649f66:;
  /* 11649f66 mov esp, ebp */
  ESP = (EBP);
  /* 11649f68 pop ebp */
  EBP = (pop32());
  /* 11649f69 ret  */
  ESPCHK(0x11649d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fa0 @ 0x11649fa0 (91 bytes, 35 insns) */
void f_11649fa0(void) {
  FTRACE(0x11649fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11649fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11649fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11649fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11649fa4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11649fa7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11649faa:;
  /* 11649faa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649fad mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11649fb0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649fb3 je 0x11649fd3 */
  if (C.zf) goto L_11649fd3;
  /* 11649fb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649fb8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649fbb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11649fbe mov ecx, dword ptr [0x11674024] */
  ECX = (r32((uint32_t)(0x11674024)));
  /* 11649fc4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11649fc7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11649fca add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649fcc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649fcf jae 0x11649fd3 */
  if (!C.cf) goto L_11649fd3;
  /* 11649fd1 jmp 0x11649faa */
  goto L_11649faa;
L_11649fd3:;
  /* 11649fd3 mov eax, dword ptr [0x11674024] */
  EAX = (r32((uint32_t)(0x11674024)));
  /* 11649fd8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11649fdb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11649fde add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11649fe0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649fe3 jae 0x11649ff5 */
  if (!C.cf) goto L_11649ff5;
  /* 11649fe5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649fe8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11649feb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11649fee jne 0x11649ff5 */
  if (!C.zf) goto L_11649ff5;
  /* 11649ff0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11649ff3 jmp 0x11649ff7 */
  goto L_11649ff7;
L_11649ff5:;
  /* 11649ff5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11649ff7:;
  /* 11649ff7 mov esp, ebp */
  ESP = (EBP);
  /* 11649ff9 pop ebp */
  EBP = (pop32());
  /* 11649ffa ret  */
  ESPCHK(0x11649fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a000 @ 0x1164a000 (13 bytes, 6 insns) */
void f_1164a000(void) {
  FTRACE(0x1164a000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164a000 push ebp */
  push32((uint32_t)(EBP));
  /* 1164a001 mov ebp, esp */
  EBP = (ESP);
  /* 1164a003 call 0x11646300 */
  push32(0x1164a008u); f_11646300();
  /* 1164a008 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a00b pop ebp */
  EBP = (pop32());
  /* 1164a00c ret  */
  ESPCHK(0x1164a000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a010 @ 0x1164a010 (13 bytes, 6 insns) */
void f_1164a010(void) {
  FTRACE(0x1164a010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164a010 push ebp */
  push32((uint32_t)(EBP));
  /* 1164a011 mov ebp, esp */
  EBP = (ESP);
  /* 1164a013 call 0x11646300 */
  push32(0x1164a018u); f_11646300();
  /* 1164a018 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a01b pop ebp */
  EBP = (pop32());
  /* 1164a01c ret  */
  ESPCHK(0x1164a010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a020 @ 0x1164a020 (187 bytes, 54 insns) */
void f_1164a020(void) {
  FTRACE(0x1164a020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164a020 push ebp */
  push32((uint32_t)(EBP));
  /* 1164a021 mov ebp, esp */
  EBP = (ESP);
  /* 1164a023 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164a026 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1164a02d cmp dword ptr [0x11676120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a034 jne 0x1164a093 */
  if (!C.zf) goto L_1164a093;
  /* 1164a036 push 0x116703d8 */
  push32((uint32_t)(0x116703d8u));
  /* 1164a03b call dword ptr [0x1167835c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167835c))), 0x1164a041u);
  /* 1164a041 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1164a044 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a048 je 0x1164a067 */
  if (C.zf) goto L_1164a067;
  /* 1164a04a push 0x1167101c */
  push32((uint32_t)(0x1167101cu));
  /* 1164a04f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164a052 push eax */
  push32((uint32_t)(EAX));
  /* 1164a053 call dword ptr [0x11678358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678358))), 0x1164a059u);
  /* 1164a059 mov dword ptr [0x11676120], eax */
  w32((uint32_t)(0x11676120), (EAX));
  /* 1164a05e cmp dword ptr [0x11676120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a065 jne 0x1164a06b */
  if (!C.zf) goto L_1164a06b;
L_1164a067:;
  /* 1164a067 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164a069 jmp 0x1164a0d7 */
  goto L_1164a0d7;
L_1164a06b:;
  /* 1164a06b push 0x1167100c */
  push32((uint32_t)(0x1167100cu));
  /* 1164a070 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164a073 push ecx */
  push32((uint32_t)(ECX));
  /* 1164a074 call dword ptr [0x11678358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678358))), 0x1164a07au);
  /* 1164a07a mov dword ptr [0x11676124], eax */
  w32((uint32_t)(0x11676124), (EAX));
  /* 1164a07f push 0x11670ff8 */
  push32((uint32_t)(0x11670ff8u));
  /* 1164a084 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164a087 push edx */
  push32((uint32_t)(EDX));
  /* 1164a088 call dword ptr [0x11678358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678358))), 0x1164a08eu);
  /* 1164a08e mov dword ptr [0x11676128], eax */
  w32((uint32_t)(0x11676128), (EAX));
L_1164a093:;
  /* 1164a093 cmp dword ptr [0x11676124], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676124))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a09a je 0x1164a0a5 */
  if (C.zf) goto L_1164a0a5;
  /* 1164a09c call dword ptr [0x11676124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11676124))), 0x1164a0a2u);
  /* 1164a0a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1164a0a5:;
  /* 1164a0a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a0a9 je 0x1164a0c1 */
  if (C.zf) goto L_1164a0c1;
  /* 1164a0ab cmp dword ptr [0x11676128], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676128))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a0b2 je 0x1164a0c1 */
  if (C.zf) goto L_1164a0c1;
  /* 1164a0b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a0b7 push eax */
  push32((uint32_t)(EAX));
  /* 1164a0b8 call dword ptr [0x11676128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11676128))), 0x1164a0beu);
  /* 1164a0be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1164a0c1:;
  /* 1164a0c1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164a0c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1164a0c5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164a0c8 push edx */
  push32((uint32_t)(EDX));
  /* 1164a0c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a0cc push eax */
  push32((uint32_t)(EAX));
  /* 1164a0cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a0d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1164a0d1 call dword ptr [0x11676120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11676120))), 0x1164a0d7u);
L_1164a0d7:;
  /* 1164a0d7 mov esp, ebp */
  ESP = (EBP);
  /* 1164a0d9 pop ebp */
  EBP = (pop32());
  /* 1164a0da ret  */
  ESPCHK(0x1164a020u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x1164a0e0 (254 bytes, 109 insns) */
void f_1164a0e0(void) {
  FTRACE(0x1164a0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164a0e0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1164a0e4 push edi */
  push32((uint32_t)(EDI));
  /* 1164a0e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164a0e7 je 0x1164a163 */
  if (C.zf) goto L_1164a163;
  /* 1164a0e9 push esi */
  push32((uint32_t)(ESI));
  /* 1164a0ea push ebx */
  push32((uint32_t)(EBX));
  /* 1164a0eb mov ebx, ecx */
  EBX = (ECX);
  /* 1164a0ed mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1164a0f1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1164a0f7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1164a0fb jne 0x1164a104 */
  if (!C.zf) goto L_1164a104;
  /* 1164a0fd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164a100 jne 0x1164a171 */
  if (!C.zf) goto L_1164a171;
  /* 1164a102 jmp 0x1164a125 */
  goto L_1164a125;
L_1164a104:;
  /* 1164a104 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1164a106 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1164a107 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1164a109 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1164a10a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1164a10b je 0x1164a132 */
  if (C.zf) goto L_1164a132;
  /* 1164a10d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1164a10f je 0x1164a13a */
  if (C.zf) goto L_1164a13a;
  /* 1164a111 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1164a117 jne 0x1164a104 */
  if (!C.zf) goto L_1164a104;
  /* 1164a119 mov ebx, ecx */
  EBX = (ECX);
  /* 1164a11b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164a11e jne 0x1164a171 */
  if (!C.zf) goto L_1164a171;
L_1164a120:;
  /* 1164a120 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1164a123 je 0x1164a132 */
  if (C.zf) goto L_1164a132;
L_1164a125:;
  /* 1164a125 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1164a127 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1164a128 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1164a12a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1164a12b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1164a12d je 0x1164a15e */
  if (C.zf) goto L_1164a15e;
  /* 1164a12f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1164a130 jne 0x1164a125 */
  if (!C.zf) goto L_1164a125;
L_1164a132:;
  /* 1164a132 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1164a136 pop ebx */
  EBX = (pop32());
  /* 1164a137 pop esi */
  ESI = (pop32());
  /* 1164a138 pop edi */
  EDI = (pop32());
  /* 1164a139 ret  */
  ESPCHK(0x1164a0e0u, _esp0);
  ESP += 4; return;
L_1164a13a:;
  /* 1164a13a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1164a140 je 0x1164a154 */
  if (C.zf) goto L_1164a154;
L_1164a142:;
  /* 1164a142 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1164a144 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1164a145 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1164a146 je 0x1164a1d6 */
  if (C.zf) goto L_1164a1d6;
  /* 1164a14c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1164a152 jne 0x1164a142 */
  if (!C.zf) goto L_1164a142;
L_1164a154:;
  /* 1164a154 mov ebx, ecx */
  EBX = (ECX);
  /* 1164a156 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164a159 jne 0x1164a1c7 */
  if (!C.zf) goto L_1164a1c7;
L_1164a15b:;
  /* 1164a15b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1164a15d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1164a15e:;
  /* 1164a15e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1164a15f jne 0x1164a15b */
  if (!C.zf) goto L_1164a15b;
  /* 1164a161 pop ebx */
  EBX = (pop32());
  /* 1164a162 pop esi */
  ESI = (pop32());
L_1164a163:;
  /* 1164a163 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1164a167 pop edi */
  EDI = (pop32());
  /* 1164a168 ret  */
  ESPCHK(0x1164a0e0u, _esp0);
  ESP += 4; return;
L_1164a169:;
  /* 1164a169 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1164a16b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a16e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1164a16f je 0x1164a120 */
  if (C.zf) goto L_1164a120;
L_1164a171:;
  /* 1164a171 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1164a176 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1164a178 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a17a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164a17d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164a17f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1164a181 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a184 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1164a189 je 0x1164a169 */
  if (C.zf) goto L_1164a169;
  /* 1164a18b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1164a18d je 0x1164a1bb */
  if (C.zf) goto L_1164a1bb;
  /* 1164a18f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1164a191 je 0x1164a1b1 */
  if (C.zf) goto L_1164a1b1;
  /* 1164a193 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1164a199 je 0x1164a1a7 */
  if (C.zf) goto L_1164a1a7;
  /* 1164a19b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1164a1a1 jne 0x1164a169 */
  if (!C.zf) goto L_1164a169;
  /* 1164a1a3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1164a1a5 jmp 0x1164a1bf */
  goto L_1164a1bf;
L_1164a1a7:;
  /* 1164a1a7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164a1ad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1164a1af jmp 0x1164a1bf */
  goto L_1164a1bf;
L_1164a1b1:;
  /* 1164a1b1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164a1b7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1164a1b9 jmp 0x1164a1bf */
  goto L_1164a1bf;
L_1164a1bb:;
  /* 1164a1bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1164a1bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1164a1bf:;
  /* 1164a1bf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a1c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164a1c4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1164a1c5 je 0x1164a1d1 */
  if (C.zf) goto L_1164a1d1;
L_1164a1c7:;
  /* 1164a1c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1164a1c9:;
  /* 1164a1c9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1164a1cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a1ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1164a1cf jne 0x1164a1c9 */
  if (!C.zf) goto L_1164a1c9;
L_1164a1d1:;
  /* 1164a1d1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1164a1d4 jne 0x1164a15b */
  if (!C.zf) goto L_1164a15b;
L_1164a1d6:;
  /* 1164a1d6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1164a1da pop ebx */
  EBX = (pop32());
  /* 1164a1db pop esi */
  ESI = (pop32());
  /* 1164a1dc pop edi */
  EDI = (pop32());
  /* 1164a1dd ret  */
  ESPCHK(0x1164a0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1e0 @ 0x1164a1e0 (31 bytes, 18 insns) */
void f_1164a1e0(void) {
  FTRACE(0x1164a1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164a1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164a1e1 mov ebp, esp */
  EBP = (ESP);
  /* 1164a1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1164a1e4 push ebx */
  push32((uint32_t)(EBX));
  /* 1164a1e5 push esi */
  push32((uint32_t)(ESI));
  /* 1164a1e6 push edi */
  push32((uint32_t)(EDI));
  /* 1164a1e7 wait  */
  /* wait (no observable integer/reg state) */
  /* 1164a1e8 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 1164a1eb mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164a1ef push eax */
  push32((uint32_t)(EAX));
  /* 1164a1f0 call 0x1164a5d0 */
  push32(0x1164a1f5u); f_1164a5d0();
  /* 1164a1f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a1f8 pop edi */
  EDI = (pop32());
  /* 1164a1f9 pop esi */
  ESI = (pop32());
  /* 1164a1fa pop ebx */
  EBX = (pop32());
  /* 1164a1fb mov esp, ebp */
  ESP = (EBP);
  /* 1164a1fd pop ebp */
  EBP = (pop32());
  /* 1164a1fe ret  */
  ESPCHK(0x1164a1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a200 @ 0x1164a200 (32 bytes, 18 insns) */
void f_1164a200(void) {
  FTRACE(0x1164a200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164a200 push ebp */
  push32((uint32_t)(EBP));
  /* 1164a201 mov ebp, esp */
  EBP = (ESP);
  /* 1164a203 push ecx */
  push32((uint32_t)(ECX));
  /* 1164a204 push ebx */
  push32((uint32_t)(EBX));
  /* 1164a205 push esi */
  push32((uint32_t)(ESI));
  /* 1164a206 push edi */
  push32((uint32_t)(EDI));
  /* 1164a207 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 1164a20a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 1164a20c mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164a210 push eax */
  push32((uint32_t)(EAX));
  /* 1164a211 call 0x1164a5d0 */
  push32(0x1164a216u); f_1164a5d0();
  /* 1164a216 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a219 pop edi */
  EDI = (pop32());
  /* 1164a21a pop esi */
  ESI = (pop32());
  /* 1164a21b pop ebx */
  EBX = (pop32());
  /* 1164a21c mov esp, ebp */
  ESP = (EBP);
  /* 1164a21e pop ebp */
  EBP = (pop32());
  /* 1164a21f ret  */
  ESPCHK(0x1164a200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a220 @ 0x1164a220 (79 bytes, 34 insns) */
void f_1164a220(void) {
  FTRACE(0x1164a220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164a220 push ebp */
  push32((uint32_t)(EBP));
  /* 1164a221 mov ebp, esp */
  EBP = (ESP);
  /* 1164a223 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164a226 push ebx */
  push32((uint32_t)(EBX));
  /* 1164a227 push esi */
  push32((uint32_t)(ESI));
  /* 1164a228 push edi */
  push32((uint32_t)(EDI));
  /* 1164a229 wait  */
  /* wait (no observable integer/reg state) */
  /* 1164a22a fnstcw word ptr [ebp - 0x10] */
  w16((uint32_t)(EBP + -0x10), C.fcw);
  /* 1164a22d mov ax, word ptr [ebp - 0x10] */
  AX = (r16((uint32_t)(EBP + -0x10)));
  /* 1164a231 push eax */
  push32((uint32_t)(EAX));
  /* 1164a232 call 0x1164a2f0 */
  push32(0x1164a237u); f_1164a2f0();
  /* 1164a237 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a23a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1164a23d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a240 and ecx, dword ptr [ebp + 0xc] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0xc))); ECX = (_r); fl_logic(_r,32); }
  /* 1164a243 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164a246 not edx */
  EDX = (~(EDX));
  /* 1164a248 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164a24b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164a24d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1164a24f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1164a252 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164a255 push ecx */
  push32((uint32_t)(ECX));
  /* 1164a256 call 0x1164a470 */
  push32(0x1164a25bu); f_1164a470();
  /* 1164a25b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a25e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1164a262 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 1164a265 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164a268 pop edi */
  EDI = (pop32());
  /* 1164a269 pop esi */
  ESI = (pop32());
  /* 1164a26a pop ebx */
  EBX = (pop32());
  /* 1164a26b mov esp, ebp */
  ESP = (EBP);
  /* 1164a26d pop ebp */
  EBP = (pop32());
  /* 1164a26e ret  */
  ESPCHK(0x1164a220u, _esp0);
  ESP += 4; return;
}

/* __controlfp @ 0x1164a270 (26 bytes, 11 insns) */
void f_1164a270(void) {
  FTRACE(0x1164a270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164a270 push ebp */
  push32((uint32_t)(EBP));
  /* 1164a271 mov ebp, esp */
  EBP = (ESP);
  /* 1164a273 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164a276 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164a27b push eax */
  push32((uint32_t)(EAX));
  /* 1164a27c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a27f push ecx */
  push32((uint32_t)(ECX));
  /* 1164a280 call 0x1164a220 */
  push32(0x1164a285u); f_1164a220();
  /* 1164a285 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a288 pop ebp */
  EBP = (pop32());
  /* 1164a289 ret  */
  ESPCHK(0x1164a270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a290 @ 0x1164a290 (88 bytes, 33 insns) */
void f_1164a290(void) {
  FTRACE(0x1164a290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164a290 push ebp */
  push32((uint32_t)(EBP));
  /* 1164a291 mov ebp, esp */
  EBP = (ESP);
  /* 1164a293 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164a296 push ebx */
  push32((uint32_t)(EBX));
  /* 1164a297 push esi */
  push32((uint32_t)(ESI));
  /* 1164a298 push edi */
  push32((uint32_t)(EDI));
  /* 1164a299 call 0x1164a010 */
  push32(0x1164a29eu); f_1164a010();
  /* 1164a29e mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 1164a2a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164a2a3 fninit  */
  C.fptop=0; C.fcw=0x037f; C.fsw_c0=C.fsw_c1=C.fsw_c2=C.fsw_c3=0;
  /* 1164a2a5 call 0x11645820 */
  push32(0x1164a2aau); f_11645820();
  /* 1164a2aa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a2ae je 0x1164a2e1 */
  if (C.zf) goto L_1164a2e1;
  /* 1164a2b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a2b3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164a2b6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1164a2b8 and eax, 0x10008 */
  { uint32_t _r=(EAX)&(0x10008u); EAX = (_r); fl_logic(_r,32); }
  /* 1164a2bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164a2bf je 0x1164a2e1 */
  if (C.zf) goto L_1164a2e1;
  /* 1164a2c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a2c4 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164a2c7 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a2ca mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1164a2cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164a2d0 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1164a2d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164a2da mov dword ptr [ecx + 8], 0xffff */
  w32((uint32_t)(ECX + 0x8), (0xffffu));
L_1164a2e1:;
  /* 1164a2e1 pop edi */
  EDI = (pop32());
  /* 1164a2e2 pop esi */
  ESI = (pop32());
  /* 1164a2e3 pop ebx */
  EBX = (pop32());
  /* 1164a2e4 mov esp, ebp */
  ESP = (EBP);
  /* 1164a2e6 pop ebp */
  EBP = (pop32());
  /* 1164a2e7 ret  */
  ESPCHK(0x1164a290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2f0 @ 0x1164a2f0 (377 bytes, 115 insns) */
void f_1164a2f0(void) {
  FTRACE(0x1164a2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164a2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164a2f1 mov ebp, esp */
  EBP = (ESP);
  /* 1164a2f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164a2f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1164a2fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a300 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164a305 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1164a308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164a30a je 0x1164a315 */
  if (C.zf) goto L_1164a315;
  /* 1164a30c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a30f or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1164a312 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1164a315:;
  /* 1164a315 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a318 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164a31e and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1164a321 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164a323 je 0x1164a32d */
  if (C.zf) goto L_1164a32d;
  /* 1164a325 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a328 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1164a32a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1164a32d:;
  /* 1164a32d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a330 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1164a336 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1164a339 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164a33b je 0x1164a346 */
  if (C.zf) goto L_1164a346;
  /* 1164a33d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a340 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1164a343 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1164a346:;
  /* 1164a346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a349 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164a34e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1164a351 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164a353 je 0x1164a35e */
  if (C.zf) goto L_1164a35e;
  /* 1164a355 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a358 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1164a35b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1164a35e:;
  /* 1164a35e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a361 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164a367 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1164a36a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164a36c je 0x1164a376 */
  if (C.zf) goto L_1164a376;
  /* 1164a36e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a371 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1164a373 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1164a376:;
  /* 1164a376 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a379 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1164a37f and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1164a382 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164a384 je 0x1164a392 */
  if (C.zf) goto L_1164a392;
  /* 1164a386 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a389 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 1164a38f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1164a392:;
  /* 1164a392 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a395 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164a39a and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 1164a39f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1164a3a2 cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a3a9 jg 0x1164a3c5 */
  if ((!C.zf&&C.sf==C.of)) goto L_1164a3c5;
  /* 1164a3ab cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a3b2 je 0x1164a3d8 */
  if (C.zf) goto L_1164a3d8;
  /* 1164a3b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a3b8 je 0x1164a3d0 */
  if (C.zf) goto L_1164a3d0;
  /* 1164a3ba cmp dword ptr [ebp - 8], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a3c1 je 0x1164a3e3 */
  if (C.zf) goto L_1164a3e3;
  /* 1164a3c3 jmp 0x1164a3f7 */
  goto L_1164a3f7;
L_1164a3c5:;
  /* 1164a3c5 cmp dword ptr [ebp - 8], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a3cc je 0x1164a3ee */
  if (C.zf) goto L_1164a3ee;
  /* 1164a3ce jmp 0x1164a3f7 */
  goto L_1164a3f7;
L_1164a3d0:;
  /* 1164a3d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a3d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1164a3d6 jmp 0x1164a3f7 */
  goto L_1164a3f7;
L_1164a3d8:;
  /* 1164a3d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a3db or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1164a3de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1164a3e1 jmp 0x1164a3f7 */
  goto L_1164a3f7;
L_1164a3e3:;
  /* 1164a3e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a3e6 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1164a3e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164a3ec jmp 0x1164a3f7 */
  goto L_1164a3f7;
L_1164a3ee:;
  /* 1164a3ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a3f1 or ch, 3 */
  { uint32_t _r=(C.c.b.h)|(0x3u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1164a3f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1164a3f7:;
  /* 1164a3f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a3fa and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164a400 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1164a406 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1164a409 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a40d je 0x1164a439 */
  if (C.zf) goto L_1164a439;
  /* 1164a40f cmp dword ptr [ebp - 0xc], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a416 je 0x1164a42b */
  if (C.zf) goto L_1164a42b;
  /* 1164a418 cmp dword ptr [ebp - 0xc], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a41f je 0x1164a423 */
  if (C.zf) goto L_1164a423;
  /* 1164a421 jmp 0x1164a445 */
  goto L_1164a445;
L_1164a423:;
  /* 1164a423 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a426 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164a429 jmp 0x1164a445 */
  goto L_1164a445;
L_1164a42b:;
  /* 1164a42b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a42e or ecx, 0x10000 */
  { uint32_t _r=(ECX)|(0x10000u); ECX = (_r); fl_logic(_r,32); }
  /* 1164a434 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1164a437 jmp 0x1164a445 */
  goto L_1164a445;
L_1164a439:;
  /* 1164a439 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a43c or edx, 0x20000 */
  { uint32_t _r=(EDX)|(0x20000u); EDX = (_r); fl_logic(_r,32); }
  /* 1164a442 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1164a445:;
  /* 1164a445 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a448 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164a44d and eax, 0x1000 */
  { uint32_t _r=(EAX)&(0x1000u); EAX = (_r); fl_logic(_r,32); }
  /* 1164a452 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164a454 je 0x1164a462 */
  if (C.zf) goto L_1164a462;
  /* 1164a456 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a459 or ecx, 0x40000 */
  { uint32_t _r=(ECX)|(0x40000u); ECX = (_r); fl_logic(_r,32); }
  /* 1164a45f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1164a462:;
  /* 1164a462 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a465 mov esp, ebp */
  ESP = (EBP);
  /* 1164a467 pop ebp */
  EBP = (pop32());
  /* 1164a468 ret  */
  ESPCHK(0x1164a2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a470 @ 0x1164a470 (346 bytes, 106 insns) */
void f_1164a470(void) {
  FTRACE(0x1164a470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164a470 push ebp */
  push32((uint32_t)(EBP));
  /* 1164a471 mov ebp, esp */
  EBP = (ESP);
  /* 1164a473 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164a476 mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 1164a47c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a47f and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1164a482 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164a484 je 0x1164a491 */
  if (C.zf) goto L_1164a491;
  /* 1164a486 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164a48a or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 1164a48d mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_1164a491:;
  /* 1164a491 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a494 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1164a497 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164a499 je 0x1164a4a5 */
  if (C.zf) goto L_1164a4a5;
  /* 1164a49b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164a49f or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1164a4a1 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_1164a4a5:;
  /* 1164a4a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a4a8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1164a4ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164a4ad je 0x1164a4ba */
  if (C.zf) goto L_1164a4ba;
  /* 1164a4af mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164a4b3 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1164a4b6 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_1164a4ba:;
  /* 1164a4ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a4bd and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1164a4c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164a4c2 je 0x1164a4cf */
  if (C.zf) goto L_1164a4cf;
  /* 1164a4c4 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164a4c8 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1164a4cb mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_1164a4cf:;
  /* 1164a4cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a4d2 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1164a4d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164a4d7 je 0x1164a4e3 */
  if (C.zf) goto L_1164a4e3;
  /* 1164a4d9 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164a4dd or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1164a4df mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_1164a4e3:;
  /* 1164a4e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a4e6 and ecx, 0x80000 */
  { uint32_t _r=(ECX)&(0x80000u); ECX = (_r); fl_logic(_r,32); }
  /* 1164a4ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164a4ee je 0x1164a4fb */
  if (C.zf) goto L_1164a4fb;
  /* 1164a4f0 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164a4f4 or dl, 2 */
  { uint32_t _r=(DL)|(0x2u); DL = (_r); fl_logic(_r,8); }
  /* 1164a4f7 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_1164a4fb:;
  /* 1164a4fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a4fe and eax, 0x300 */
  { uint32_t _r=(EAX)&(0x300u); EAX = (_r); fl_logic(_r,32); }
  /* 1164a503 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1164a506 cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a50d ja 0x1164a529 */
  if ((!C.cf&&!C.zf)) goto L_1164a529;
  /* 1164a50f cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a516 je 0x1164a53e */
  if (C.zf) goto L_1164a53e;
  /* 1164a518 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a51c je 0x1164a534 */
  if (C.zf) goto L_1164a534;
  /* 1164a51e cmp dword ptr [ebp - 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a525 je 0x1164a54b */
  if (C.zf) goto L_1164a54b;
  /* 1164a527 jmp 0x1164a563 */
  goto L_1164a563;
L_1164a529:;
  /* 1164a529 cmp dword ptr [ebp - 8], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a530 je 0x1164a558 */
  if (C.zf) goto L_1164a558;
  /* 1164a532 jmp 0x1164a563 */
  goto L_1164a563;
L_1164a534:;
  /* 1164a534 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164a538 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 1164a53c jmp 0x1164a563 */
  goto L_1164a563;
L_1164a53e:;
  /* 1164a53e mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164a542 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1164a545 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 1164a549 jmp 0x1164a563 */
  goto L_1164a563;
L_1164a54b:;
  /* 1164a54b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164a54f or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1164a552 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1164a556 jmp 0x1164a563 */
  goto L_1164a563;
L_1164a558:;
  /* 1164a558 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164a55c or ch, 0xc */
  { uint32_t _r=(C.c.b.h)|(0xcu); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1164a55f mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_1164a563:;
  /* 1164a563 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a566 and edx, 0x30000 */
  { uint32_t _r=(EDX)&(0x30000u); EDX = (_r); fl_logic(_r,32); }
  /* 1164a56c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1164a56f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a573 je 0x1164a589 */
  if (C.zf) goto L_1164a589;
  /* 1164a575 cmp dword ptr [ebp - 0xc], 0x10000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a57c je 0x1164a596 */
  if (C.zf) goto L_1164a596;
  /* 1164a57e cmp dword ptr [ebp - 0xc], 0x20000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a585 je 0x1164a5a3 */
  if (C.zf) goto L_1164a5a3;
  /* 1164a587 jmp 0x1164a5ab */
  goto L_1164a5ab;
L_1164a589:;
  /* 1164a589 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164a58d or ah, 3 */
  { uint32_t _r=(AH)|(0x3u); AH = (_r); fl_logic(_r,8); }
  /* 1164a590 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1164a594 jmp 0x1164a5ab */
  goto L_1164a5ab;
L_1164a596:;
  /* 1164a596 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164a59a or ch, 2 */
  { uint32_t _r=(C.c.b.h)|(0x2u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1164a59d mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 1164a5a1 jmp 0x1164a5ab */
  goto L_1164a5ab;
L_1164a5a3:;
  /* 1164a5a3 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164a5a7 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_1164a5ab:;
  /* 1164a5ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a5ae and eax, 0x40000 */
  { uint32_t _r=(EAX)&(0x40000u); EAX = (_r); fl_logic(_r,32); }
  /* 1164a5b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164a5b5 je 0x1164a5c2 */
  if (C.zf) goto L_1164a5c2;
  /* 1164a5b7 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164a5bb or ch, 0x10 */
  { uint32_t _r=(C.c.b.h)|(0x10u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1164a5be mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_1164a5c2:;
  /* 1164a5c2 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164a5c6 mov esp, ebp */
  ESP = (EBP);
  /* 1164a5c8 pop ebp */
  EBP = (pop32());
  /* 1164a5c9 ret  */
  ESPCHK(0x1164a470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5d0 @ 0x1164a5d0 (167 bytes, 56 insns) */
void f_1164a5d0(void) {
  FTRACE(0x1164a5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164a5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164a5d1 mov ebp, esp */
  EBP = (ESP);
  /* 1164a5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1164a5d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1164a5db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a5de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164a5e3 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1164a5e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164a5e8 je 0x1164a5f3 */
  if (C.zf) goto L_1164a5f3;
  /* 1164a5ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a5ed or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1164a5f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1164a5f3:;
  /* 1164a5f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a5f6 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164a5fc and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1164a5ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164a601 je 0x1164a60b */
  if (C.zf) goto L_1164a60b;
  /* 1164a603 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a606 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1164a608 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1164a60b:;
  /* 1164a60b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a60e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1164a614 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1164a617 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164a619 je 0x1164a624 */
  if (C.zf) goto L_1164a624;
  /* 1164a61b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a61e or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1164a621 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1164a624:;
  /* 1164a624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a627 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164a62c and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1164a62f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164a631 je 0x1164a63c */
  if (C.zf) goto L_1164a63c;
  /* 1164a633 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a636 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1164a639 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1164a63c:;
  /* 1164a63c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a63f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164a645 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1164a648 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164a64a je 0x1164a654 */
  if (C.zf) goto L_1164a654;
  /* 1164a64c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a64f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1164a651 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1164a654:;
  /* 1164a654 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a657 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1164a65d and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1164a660 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164a662 je 0x1164a670 */
  if (C.zf) goto L_1164a670;
  /* 1164a664 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a667 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 1164a66d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1164a670:;
  /* 1164a670 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a673 mov esp, ebp */
  ESP = (EBP);
  /* 1164a675 pop ebp */
  EBP = (pop32());
  /* 1164a676 ret  */
  ESPCHK(0x1164a5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a680 @ 0x1164a680 (183 bytes, 58 insns) */
void f_1164a680(void) {
  FTRACE(0x1164a680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164a680 push ebp */
  push32((uint32_t)(EBP));
  /* 1164a681 mov ebp, esp */
  EBP = (ESP);
  /* 1164a683 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164a686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a689 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a68c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a691 ja 0x1164a6aa */
  if ((!C.cf&&!C.zf)) goto L_1164a6aa;
  /* 1164a693 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a696 mov edx, dword ptr [0x11673c9c] */
  EDX = (r32((uint32_t)(0x11673c9c)));
  /* 1164a69c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164a69e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1164a6a2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1164a6a5 jmp 0x1164a733 */
  goto L_1164a733;
L_1164a6aa:;
  /* 1164a6aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a6ad sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1164a6b0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1164a6b6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1164a6bc mov edx, dword ptr [0x11673c9c] */
  EDX = (r32((uint32_t)(0x11673c9c)));
  /* 1164a6c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164a6c4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1164a6c8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1164a6cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164a6cf je 0x1164a6f3 */
  if (C.zf) goto L_1164a6f3;
  /* 1164a6d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a6d4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1164a6d7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1164a6dd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1164a6e0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1164a6e3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1164a6e6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1164a6ea mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1164a6f1 jmp 0x1164a704 */
  goto L_1164a704;
L_1164a6f3:;
  /* 1164a6f3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1164a6f6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1164a6f9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1164a6fd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1164a704:;
  /* 1164a704 push 1 */
  push32((uint32_t)(0x1u));
  /* 1164a706 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164a708 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164a70a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1164a70d push ecx */
  push32((uint32_t)(ECX));
  /* 1164a70e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164a711 push edx */
  push32((uint32_t)(EDX));
  /* 1164a712 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1164a715 push eax */
  push32((uint32_t)(EAX));
  /* 1164a716 push 1 */
  push32((uint32_t)(0x1u));
  /* 1164a718 call 0x1164fc50 */
  push32(0x1164a71du); f_1164fc50();
  /* 1164a71d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a720 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164a722 jne 0x1164a728 */
  if (!C.zf) goto L_1164a728;
  /* 1164a724 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164a726 jmp 0x1164a733 */
  goto L_1164a733;
L_1164a728:;
  /* 1164a728 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a72b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164a730 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1164a733:;
  /* 1164a733 mov esp, ebp */
  ESP = (EBP);
  /* 1164a735 pop ebp */
  EBP = (pop32());
  /* 1164a736 ret  */
  ESPCHK(0x1164a680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a740 @ 0x1164a740 (11 bytes, 6 insns) */
void f_1164a740(void) {
  FTRACE(0x1164a740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164a740 push ebp */
  push32((uint32_t)(EBP));
  /* 1164a741 mov ebp, esp */
  EBP = (ESP);
  /* 1164a743 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a746 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a749 pop ebp */
  EBP = (pop32());
  /* 1164a74a ret  */
  ESPCHK(0x1164a740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a750 @ 0x1164a750 (147 bytes, 43 insns) */
void f_1164a750(void) {
  FTRACE(0x1164a750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164a750 push ebp */
  push32((uint32_t)(EBP));
  /* 1164a751 mov ebp, esp */
  EBP = (ESP);
  /* 1164a753 push ecx */
  push32((uint32_t)(ECX));
  /* 1164a754 cmp dword ptr [0x116761b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116761b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a75b jne 0x1164a777 */
  if (!C.zf) goto L_1164a777;
  /* 1164a75d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a761 jl 0x1164a772 */
  if ((C.sf!=C.of)) goto L_1164a772;
  /* 1164a763 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a767 jg 0x1164a772 */
  if ((!C.zf&&C.sf==C.of)) goto L_1164a772;
  /* 1164a769 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a76c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a76f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1164a772:;
  /* 1164a772 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a775 jmp 0x1164a7df */
  goto L_1164a7df;
L_1164a777:;
  /* 1164a777 push 0x11677694 */
  push32((uint32_t)(0x11677694u));
  /* 1164a77c call dword ptr [0x11678360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678360))), 0x1164a782u);
  /* 1164a782 cmp dword ptr [0x11677684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11677684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a789 je 0x1164a7a9 */
  if (C.zf) goto L_1164a7a9;
  /* 1164a78b push 0x11677694 */
  push32((uint32_t)(0x11677694u));
  /* 1164a790 call dword ptr [0x11678350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678350))), 0x1164a796u);
  /* 1164a796 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1164a798 call 0x1164b880 */
  push32(0x1164a79du); f_1164b880();
  /* 1164a79d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a7a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1164a7a7 jmp 0x1164a7b0 */
  goto L_1164a7b0;
L_1164a7a9:;
  /* 1164a7a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1164a7b0:;
  /* 1164a7b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a7b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1164a7b4 call 0x1164a7f0 */
  push32(0x1164a7b9u); f_1164a7f0();
  /* 1164a7b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a7bc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1164a7bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a7c3 je 0x1164a7d1 */
  if (C.zf) goto L_1164a7d1;
  /* 1164a7c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1164a7c7 call 0x1164b920 */
  push32(0x1164a7ccu); f_1164b920();
  /* 1164a7cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a7cf jmp 0x1164a7dc */
  goto L_1164a7dc;
L_1164a7d1:;
  /* 1164a7d1 push 0x11677694 */
  push32((uint32_t)(0x11677694u));
  /* 1164a7d6 call dword ptr [0x11678350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678350))), 0x1164a7dcu);
L_1164a7dc:;
  /* 1164a7dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1164a7df:;
  /* 1164a7df mov esp, ebp */
  ESP = (EBP);
  /* 1164a7e1 pop ebp */
  EBP = (pop32());
  /* 1164a7e2 ret  */
  ESPCHK(0x1164a750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7f0 @ 0x1164a7f0 (299 bytes, 91 insns) */
void f_1164a7f0(void) {
  FTRACE(0x1164a7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164a7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164a7f1 mov ebp, esp */
  EBP = (ESP);
  /* 1164a7f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164a7f6 cmp dword ptr [0x116761b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116761b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a7fd jne 0x1164a81c */
  if (!C.zf) goto L_1164a81c;
  /* 1164a7ff cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a803 jl 0x1164a814 */
  if ((C.sf!=C.of)) goto L_1164a814;
  /* 1164a805 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a809 jg 0x1164a814 */
  if ((!C.zf&&C.sf==C.of)) goto L_1164a814;
  /* 1164a80b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a80e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a811 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1164a814:;
  /* 1164a814 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a817 jmp 0x1164a917 */
  goto L_1164a917;
L_1164a81c:;
  /* 1164a81c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a823 jge 0x1164a863 */
  if ((C.sf==C.of)) goto L_1164a863;
  /* 1164a825 cmp dword ptr [0x11673c90], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11673c90))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a82c jle 0x1164a841 */
  if ((C.zf||C.sf!=C.of)) goto L_1164a841;
  /* 1164a82e push 1 */
  push32((uint32_t)(0x1u));
  /* 1164a830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a833 push ecx */
  push32((uint32_t)(ECX));
  /* 1164a834 call 0x1164a680 */
  push32(0x1164a839u); f_1164a680();
  /* 1164a839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a83c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1164a83f jmp 0x1164a855 */
  goto L_1164a855;
L_1164a841:;
  /* 1164a841 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a844 mov eax, dword ptr [0x11673c9c] */
  EAX = (r32((uint32_t)(0x11673c9c)));
  /* 1164a849 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164a84b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1164a84f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1164a852 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1164a855:;
  /* 1164a855 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a859 jne 0x1164a863 */
  if (!C.zf) goto L_1164a863;
  /* 1164a85b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a85e jmp 0x1164a917 */
  goto L_1164a917;
L_1164a863:;
  /* 1164a863 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a866 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1164a869 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164a86f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164a875 mov eax, dword ptr [0x11673c9c] */
  EAX = (r32((uint32_t)(0x11673c9c)));
  /* 1164a87a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164a87c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1164a880 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1164a886 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164a888 je 0x1164a8ac */
  if (C.zf) goto L_1164a8ac;
  /* 1164a88a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a88d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1164a890 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164a896 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 1164a899 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1164a89c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 1164a89f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 1164a8a3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1164a8aa jmp 0x1164a8bd */
  goto L_1164a8bd;
L_1164a8ac:;
  /* 1164a8ac mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1164a8af mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 1164a8b2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 1164a8b6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1164a8bd:;
  /* 1164a8bd push 1 */
  push32((uint32_t)(0x1u));
  /* 1164a8bf push 0 */
  push32((uint32_t)(0x0u));
  /* 1164a8c1 push 3 */
  push32((uint32_t)(0x3u));
  /* 1164a8c3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1164a8c6 push edx */
  push32((uint32_t)(EDX));
  /* 1164a8c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a8ca push eax */
  push32((uint32_t)(EAX));
  /* 1164a8cb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1164a8ce push ecx */
  push32((uint32_t)(ECX));
  /* 1164a8cf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1164a8d4 mov edx, dword ptr [0x116761b4] */
  EDX = (r32((uint32_t)(0x116761b4)));
  /* 1164a8da push edx */
  push32((uint32_t)(EDX));
  /* 1164a8db call 0x11650860 */
  push32(0x1164a8e0u); f_11650860();
  /* 1164a8e0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a8e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164a8e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a8ea jne 0x1164a8f1 */
  if (!C.zf) goto L_1164a8f1;
  /* 1164a8ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a8ef jmp 0x1164a917 */
  goto L_1164a917;
L_1164a8f1:;
  /* 1164a8f1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a8f5 jne 0x1164a901 */
  if (!C.zf) goto L_1164a901;
  /* 1164a8f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164a8fa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164a8ff jmp 0x1164a917 */
  goto L_1164a917;
L_1164a901:;
  /* 1164a901 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164a904 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164a909 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1164a90c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1164a912 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1164a915 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_1164a917:;
  /* 1164a917 mov esp, ebp */
  ESP = (EBP);
  /* 1164a919 pop ebp */
  EBP = (pop32());
  /* 1164a91a ret  */
  ESPCHK(0x1164a7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a920 @ 0x1164a920 (132 bytes, 51 insns) */
void f_1164a920(void) {
  FTRACE(0x1164a920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164a920 push ebp */
  push32((uint32_t)(EBP));
  /* 1164a921 mov ebp, esp */
  EBP = (ESP);
  /* 1164a923 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164a926 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164a929 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1164a92a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1164a92d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a92f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1164a932 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1164a935 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164a938 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 1164a93d jns 0x1164a944 */
  if (!C.sf) goto L_1164a944;
  /* 1164a93f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1164a940 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 1164a943 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1164a944:;
  /* 1164a944 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 1164a949 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164a94b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1164a94e or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164a951 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a954 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164a956 not edx */
  EDX = (~(EDX));
  /* 1164a958 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1164a95b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164a95e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a961 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1164a964 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1164a967 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164a969 je 0x1164a96f */
  if (C.zf) goto L_1164a96f;
  /* 1164a96b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164a96d jmp 0x1164a9a0 */
  goto L_1164a9a0;
L_1164a96f:;
  /* 1164a96f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164a972 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a975 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1164a978 jmp 0x1164a983 */
  goto L_1164a983;
L_1164a97a:;
  /* 1164a97a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164a97d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a980 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1164a983:;
  /* 1164a983 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a987 jge 0x1164a99b */
  if ((C.sf==C.of)) goto L_1164a99b;
  /* 1164a989 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164a98c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a98f cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164a993 je 0x1164a999 */
  if (C.zf) goto L_1164a999;
  /* 1164a995 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164a997 jmp 0x1164a9a0 */
  goto L_1164a9a0;
L_1164a999:;
  /* 1164a999 jmp 0x1164a97a */
  goto L_1164a97a;
L_1164a99b:;
  /* 1164a99b mov eax, 1 */
  EAX = (0x1u);
L_1164a9a0:;
  /* 1164a9a0 mov esp, ebp */
  ESP = (EBP);
  /* 1164a9a2 pop ebp */
  EBP = (pop32());
  /* 1164a9a3 ret  */
  ESPCHK(0x1164a920u, _esp0);
  ESP += 4; return;
}

/* __IncMan @ 0x1164a9b0 (168 bytes, 63 insns) */
void f_1164a9b0(void) {
  FTRACE(0x1164a9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164a9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164a9b1 mov ebp, esp */
  EBP = (ESP);
  /* 1164a9b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164a9b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164a9b9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1164a9ba and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1164a9bd add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164a9bf sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1164a9c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1164a9c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164a9c8 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 1164a9cd jns 0x1164a9d4 */
  if (!C.sf) goto L_1164a9d4;
  /* 1164a9cf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1164a9d0 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 1164a9d3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1164a9d4:;
  /* 1164a9d4 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 1164a9d9 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164a9db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1164a9de mov edx, 1 */
  EDX = (0x1u);
  /* 1164a9e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164a9e6 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164a9e8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1164a9eb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164a9ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a9f1 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 1164a9f4 push edx */
  push32((uint32_t)(EDX));
  /* 1164a9f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164a9f8 push eax */
  push32((uint32_t)(EAX));
  /* 1164a9f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164a9fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164a9ff mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1164aa02 push eax */
  push32((uint32_t)(EAX));
  /* 1164aa03 call 0x11650bc0 */
  push32(0x1164aa08u); f_11650bc0();
  /* 1164aa08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164aa0b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1164aa0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164aa11 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164aa14 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1164aa17 jmp 0x1164aa22 */
  goto L_1164aa22;
L_1164aa19:;
  /* 1164aa19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164aa1c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164aa1f mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1164aa22:;
  /* 1164aa22 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164aa26 jl 0x1164aa51 */
  if ((C.sf!=C.of)) goto L_1164aa51;
  /* 1164aa28 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164aa2c je 0x1164aa51 */
  if (C.zf) goto L_1164aa51;
  /* 1164aa2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164aa31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164aa34 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 1164aa37 push edx */
  push32((uint32_t)(EDX));
  /* 1164aa38 push 1 */
  push32((uint32_t)(0x1u));
  /* 1164aa3a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164aa3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164aa40 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1164aa43 push edx */
  push32((uint32_t)(EDX));
  /* 1164aa44 call 0x11650bc0 */
  push32(0x1164aa49u); f_11650bc0();
  /* 1164aa49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164aa4c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1164aa4f jmp 0x1164aa19 */
  goto L_1164aa19;
L_1164aa51:;
  /* 1164aa51 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164aa54 mov esp, ebp */
  ESP = (EBP);
  /* 1164aa56 pop ebp */
  EBP = (pop32());
  /* 1164aa57 ret  */
  ESPCHK(0x1164a9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa60 @ 0x1164aa60 (219 bytes, 78 insns) */
void f_1164aa60(void) {
  FTRACE(0x1164aa60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164aa60 push ebp */
  push32((uint32_t)(EBP));
  /* 1164aa61 mov ebp, esp */
  EBP = (ESP);
  /* 1164aa63 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164aa66 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1164aa6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164aa70 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164aa73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164aa76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164aa79 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164aa7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1164aa7f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164aa82 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1164aa83 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1164aa86 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164aa88 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1164aa8b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1164aa8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164aa91 and edx, 0x8000001f */
  { uint32_t _r=(EDX)&(0x8000001fu); EDX = (_r); fl_logic(_r,32); }
  /* 1164aa97 jns 0x1164aa9e */
  if (!C.sf) goto L_1164aa9e;
  /* 1164aa99 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1164aa9a or edx, 0xffffffe0 */
  { uint32_t _r=(EDX)|(0xffffffe0u); EDX = (_r); fl_logic(_r,32); }
  /* 1164aa9d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
L_1164aa9e:;
  /* 1164aa9e mov eax, 0x1f */
  EAX = (0x1fu);
  /* 1164aaa3 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164aaa5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1164aaa8 mov edx, 1 */
  EDX = (0x1u);
  /* 1164aaad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164aab0 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164aab2 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1164aab5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164aab8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164aabb mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1164aabe and edx, dword ptr [ebp - 0x1c] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x1c))); EDX = (_r); fl_logic(_r,32); }
  /* 1164aac1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164aac3 je 0x1164aaef */
  if (C.zf) goto L_1164aaef;
  /* 1164aac5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164aac8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164aacb push eax */
  push32((uint32_t)(EAX));
  /* 1164aacc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164aacf push ecx */
  push32((uint32_t)(ECX));
  /* 1164aad0 call 0x1164a920 */
  push32(0x1164aad5u); f_1164a920();
  /* 1164aad5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164aad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164aada jne 0x1164aaef */
  if (!C.zf) goto L_1164aaef;
  /* 1164aadc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164aadf push edx */
  push32((uint32_t)(EDX));
  /* 1164aae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164aae3 push eax */
  push32((uint32_t)(EAX));
  /* 1164aae4 call 0x1164a9b0 */
  push32(0x1164aae9u); f_1164a9b0();
  /* 1164aae9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164aaec mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1164aaef:;
  /* 1164aaef or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164aaf2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164aaf5 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164aaf7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164aafa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164aafd mov eax, dword ptr [ecx + eax*4] */
  EAX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1164ab00 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164ab02 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164ab05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164ab08 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1164ab0b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164ab0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ab11 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1164ab14 jmp 0x1164ab1f */
  goto L_1164ab1f;
L_1164ab16:;
  /* 1164ab16 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ab19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ab1c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1164ab1f:;
  /* 1164ab1f cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ab23 jge 0x1164ab34 */
  if ((C.sf==C.of)) goto L_1164ab34;
  /* 1164ab25 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ab28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164ab2b mov dword ptr [eax + edx*4], 0 */
  w32((uint32_t)(EAX + EDX*4), (0x0u));
  /* 1164ab32 jmp 0x1164ab16 */
  goto L_1164ab16;
L_1164ab34:;
  /* 1164ab34 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164ab37 mov esp, ebp */
  ESP = (EBP);
  /* 1164ab39 pop ebp */
  EBP = (pop32());
  /* 1164ab3a ret  */
  ESPCHK(0x1164aa60u, _esp0);
  ESP += 4; return;
}

/* __CopyMan @ 0x1164ab40 (76 bytes, 28 insns) */
void f_1164ab40(void) {
  FTRACE(0x1164ab40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164ab40 push ebp */
  push32((uint32_t)(EBP));
  /* 1164ab41 mov ebp, esp */
  EBP = (ESP);
  /* 1164ab43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ab46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164ab49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164ab4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164ab4f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1164ab52 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1164ab59 jmp 0x1164ab64 */
  goto L_1164ab64;
L_1164ab5b:;
  /* 1164ab5b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164ab5e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ab61 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1164ab64:;
  /* 1164ab64 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ab68 jge 0x1164ab88 */
  if ((C.sf==C.of)) goto L_1164ab88;
  /* 1164ab6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ab6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164ab70 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1164ab72 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1164ab74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ab77 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ab7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1164ab7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164ab80 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ab83 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1164ab86 jmp 0x1164ab5b */
  goto L_1164ab5b;
L_1164ab88:;
  /* 1164ab88 mov esp, ebp */
  ESP = (EBP);
  /* 1164ab8a pop ebp */
  EBP = (pop32());
  /* 1164ab8b ret  */
  ESPCHK(0x1164ab40u, _esp0);
  ESP += 4; return;
}

/* __FillZeroMan @ 0x1164ab90 (47 bytes, 17 insns) */
void f_1164ab90(void) {
  FTRACE(0x1164ab90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164ab90 push ebp */
  push32((uint32_t)(EBP));
  /* 1164ab91 mov ebp, esp */
  EBP = (ESP);
  /* 1164ab93 push ecx */
  push32((uint32_t)(ECX));
  /* 1164ab94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1164ab9b jmp 0x1164aba6 */
  goto L_1164aba6;
L_1164ab9d:;
  /* 1164ab9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164aba0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164aba3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1164aba6:;
  /* 1164aba6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164abaa jge 0x1164abbb */
  if ((C.sf==C.of)) goto L_1164abbb;
  /* 1164abac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164abaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164abb2 mov dword ptr [edx + ecx*4], 0 */
  w32((uint32_t)(EDX + ECX*4), (0x0u));
  /* 1164abb9 jmp 0x1164ab9d */
  goto L_1164ab9d;
L_1164abbb:;
  /* 1164abbb mov esp, ebp */
  ESP = (EBP);
  /* 1164abbd pop ebp */
  EBP = (pop32());
  /* 1164abbe ret  */
  ESPCHK(0x1164ab90u, _esp0);
  ESP += 4; return;
}

/* __IsZeroMan @ 0x1164abc0 (55 bytes, 21 insns) */
void f_1164abc0(void) {
  FTRACE(0x1164abc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164abc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164abc1 mov ebp, esp */
  EBP = (ESP);
  /* 1164abc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1164abc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1164abcb jmp 0x1164abd6 */
  goto L_1164abd6;
L_1164abcd:;
  /* 1164abcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164abd0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164abd3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1164abd6:;
  /* 1164abd6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164abda jge 0x1164abee */
  if ((C.sf==C.of)) goto L_1164abee;
  /* 1164abdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164abdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164abe2 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164abe6 je 0x1164abec */
  if (C.zf) goto L_1164abec;
  /* 1164abe8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164abea jmp 0x1164abf3 */
  goto L_1164abf3;
L_1164abec:;
  /* 1164abec jmp 0x1164abcd */
  goto L_1164abcd;
L_1164abee:;
  /* 1164abee mov eax, 1 */
  EAX = (0x1u);
L_1164abf3:;
  /* 1164abf3 mov esp, ebp */
  ESP = (EBP);
  /* 1164abf5 pop ebp */
  EBP = (pop32());
  /* 1164abf6 ret  */
  ESPCHK(0x1164abc0u, _esp0);
  ESP += 4; return;
}

/* __ShrMan @ 0x1164ac00 (236 bytes, 82 insns) */
void f_1164ac00(void) {
  FTRACE(0x1164ac00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164ac00 push ebp */
  push32((uint32_t)(EBP));
  /* 1164ac01 mov ebp, esp */
  EBP = (ESP);
  /* 1164ac03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ac06 push esi */
  push32((uint32_t)(ESI));
  /* 1164ac07 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164ac0a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1164ac0b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1164ac0e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ac10 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1164ac13 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1164ac16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164ac19 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 1164ac1e jns 0x1164ac25 */
  if (!C.sf) goto L_1164ac25;
  /* 1164ac20 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1164ac21 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 1164ac24 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1164ac25:;
  /* 1164ac25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164ac28 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164ac2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164ac2e shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164ac30 not edx */
  EDX = (~(EDX));
  /* 1164ac32 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1164ac35 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1164ac3c mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1164ac43 jmp 0x1164ac4e */
  goto L_1164ac4e;
L_1164ac45:;
  /* 1164ac45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164ac48 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ac4b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1164ac4e:;
  /* 1164ac4e cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ac52 jge 0x1164aca1 */
  if ((C.sf==C.of)) goto L_1164aca1;
  /* 1164ac54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164ac57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164ac5a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1164ac5d and eax, dword ptr [ebp - 0x14] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + -0x14))); EAX = (_r); fl_logic(_r,32); }
  /* 1164ac60 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1164ac63 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164ac66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164ac69 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1164ac6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164ac6f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164ac71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164ac74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164ac77 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1164ac7a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164ac7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164ac80 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1164ac83 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1164ac86 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164ac89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164ac8c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1164ac8f mov ecx, 0x20 */
  ECX = (0x20u);
  /* 1164ac94 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ac97 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ac9a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164ac9c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1164ac9f jmp 0x1164ac45 */
  goto L_1164ac45;
L_1164aca1:;
  /* 1164aca1 mov dword ptr [ebp - 0xc], 2 */
  w32((uint32_t)(EBP + -0xc), (0x2u));
  /* 1164aca8 jmp 0x1164acb3 */
  goto L_1164acb3;
L_1164acaa:;
  /* 1164acaa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164acad sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164acb0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1164acb3:;
  /* 1164acb3 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164acb7 jl 0x1164ace7 */
  if ((C.sf!=C.of)) goto L_1164ace7;
  /* 1164acb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164acbc cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164acbf jl 0x1164acd8 */
  if ((C.sf!=C.of)) goto L_1164acd8;
  /* 1164acc1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164acc4 sub edx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164acc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164acca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164accd mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1164acd0 mov edx, dword ptr [esi + edx*4] */
  EDX = (r32((uint32_t)(ESI + EDX*4)));
  /* 1164acd3 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1164acd6 jmp 0x1164ace5 */
  goto L_1164ace5;
L_1164acd8:;
  /* 1164acd8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164acdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164acde mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1164ace5:;
  /* 1164ace5 jmp 0x1164acaa */
  goto L_1164acaa;
L_1164ace7:;
  /* 1164ace7 pop esi */
  ESI = (pop32());
  /* 1164ace8 mov esp, ebp */
  ESP = (EBP);
  /* 1164acea pop ebp */
  EBP = (pop32());
  /* 1164aceb ret  */
  ESPCHK(0x1164ac00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acf0 @ 0x1164acf0 (578 bytes, 188 insns) */
void f_1164acf0(void) {
  FTRACE(0x1164acf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164acf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164acf1 mov ebp, esp */
  EBP = (ESP);
  /* 1164acf3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164acf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164acf9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164acfb mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 1164acff and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 1164ad05 sub ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ad0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1164ad0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164ad11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164ad13 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 1164ad17 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1164ad1c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1164ad1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164ad22 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 1164ad25 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1164ad28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164ad2b mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 1164ad2e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1164ad31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164ad34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164ad36 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1164ad39 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1164ad3c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1164ad3f cmp dword ptr [ebp - 4], 0xffffc001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ad46 jne 0x1164ad80 */
  if (!C.zf) goto L_1164ad80;
  /* 1164ad48 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1164ad4f lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 1164ad52 push ecx */
  push32((uint32_t)(ECX));
  /* 1164ad53 call 0x1164abc0 */
  push32(0x1164ad58u); f_1164abc0();
  /* 1164ad58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ad5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164ad5d je 0x1164ad68 */
  if (C.zf) goto L_1164ad68;
  /* 1164ad5f mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1164ad66 jmp 0x1164ad7b */
  goto L_1164ad7b;
L_1164ad68:;
  /* 1164ad68 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 1164ad6b push edx */
  push32((uint32_t)(EDX));
  /* 1164ad6c call 0x1164ab90 */
  push32(0x1164ad71u); f_1164ab90();
  /* 1164ad71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ad74 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
L_1164ad7b:;
  /* 1164ad7b jmp 0x1164aecc */
  goto L_1164aecc;
L_1164ad80:;
  /* 1164ad80 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1164ad83 push eax */
  push32((uint32_t)(EAX));
  /* 1164ad84 lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 1164ad87 push ecx */
  push32((uint32_t)(ECX));
  /* 1164ad88 call 0x1164ab40 */
  push32(0x1164ad8du); f_1164ab40();
  /* 1164ad8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ad90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164ad93 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1164ad96 push eax */
  push32((uint32_t)(EAX));
  /* 1164ad97 lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 1164ad9a push ecx */
  push32((uint32_t)(ECX));
  /* 1164ad9b call 0x1164aa60 */
  push32(0x1164ada0u); f_1164aa60();
  /* 1164ada0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ada3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164ada5 je 0x1164adb0 */
  if (C.zf) goto L_1164adb0;
  /* 1164ada7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164adaa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164adad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1164adb0:;
  /* 1164adb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164adb3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164adb6 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164adb9 sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164adbc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164adbf jge 0x1164ade0 */
  if ((C.sf==C.of)) goto L_1164ade0;
  /* 1164adc1 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1164adc4 push eax */
  push32((uint32_t)(EAX));
  /* 1164adc5 call 0x1164ab90 */
  push32(0x1164adcau); f_1164ab90();
  /* 1164adca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164adcd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1164add4 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 1164addb jmp 0x1164aecc */
  goto L_1164aecc;
L_1164ade0:;
  /* 1164ade0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164ade3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164ade6 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ade9 jg 0x1164ae50 */
  if ((!C.zf&&C.sf==C.of)) goto L_1164ae50;
  /* 1164adeb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164adee mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164adf1 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164adf4 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 1164adf7 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 1164adfa push edx */
  push32((uint32_t)(EDX));
  /* 1164adfb lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1164adfe push eax */
  push32((uint32_t)(EAX));
  /* 1164adff call 0x1164ab40 */
  push32(0x1164ae04u); f_1164ab40();
  /* 1164ae04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ae07 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1164ae0a push ecx */
  push32((uint32_t)(ECX));
  /* 1164ae0b lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 1164ae0e push edx */
  push32((uint32_t)(EDX));
  /* 1164ae0f call 0x1164ac00 */
  push32(0x1164ae14u); f_1164ac00();
  /* 1164ae14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ae17 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164ae1a mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1164ae1d push ecx */
  push32((uint32_t)(ECX));
  /* 1164ae1e lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 1164ae21 push edx */
  push32((uint32_t)(EDX));
  /* 1164ae22 call 0x1164aa60 */
  push32(0x1164ae27u); f_1164aa60();
  /* 1164ae27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ae2a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164ae2d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1164ae30 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ae33 push ecx */
  push32((uint32_t)(ECX));
  /* 1164ae34 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 1164ae37 push edx */
  push32((uint32_t)(EDX));
  /* 1164ae38 call 0x1164ac00 */
  push32(0x1164ae3du); f_1164ac00();
  /* 1164ae3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ae40 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1164ae47 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 1164ae4e jmp 0x1164aecc */
  goto L_1164aecc;
L_1164ae50:;
  /* 1164ae50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164ae53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164ae56 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ae58 jl 0x1164ae9b */
  if ((C.sf!=C.of)) goto L_1164ae9b;
  /* 1164ae5a lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 1164ae5d push edx */
  push32((uint32_t)(EDX));
  /* 1164ae5e call 0x1164ab90 */
  push32(0x1164ae63u); f_1164ab90();
  /* 1164ae63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ae66 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164ae69 or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 1164ae6e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1164ae71 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164ae74 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1164ae77 push edx */
  push32((uint32_t)(EDX));
  /* 1164ae78 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1164ae7b push eax */
  push32((uint32_t)(EAX));
  /* 1164ae7c call 0x1164ac00 */
  push32(0x1164ae81u); f_1164ac00();
  /* 1164ae81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ae84 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164ae87 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1164ae89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164ae8c add edx, dword ptr [eax + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ae8f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1164ae92 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1164ae99 jmp 0x1164aecc */
  goto L_1164aecc;
L_1164ae9b:;
  /* 1164ae9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164ae9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164aea1 add edx, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164aea4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1164aea7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164aeaa and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164aeaf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1164aeb2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164aeb5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1164aeb8 push edx */
  push32((uint32_t)(EDX));
  /* 1164aeb9 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1164aebc push eax */
  push32((uint32_t)(EAX));
  /* 1164aebd call 0x1164ac00 */
  push32(0x1164aec2u); f_1164ac00();
  /* 1164aec2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164aec5 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_1164aecc:;
  /* 1164aecc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164aecf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1164aed2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164aed5 mov eax, 0x20 */
  EAX = (0x20u);
  /* 1164aeda sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164aedc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1164aedf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164aee2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164aee5 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164aee7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164aeea or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164aeec mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164aeef neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1164aef1 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164aef3 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 1164aef9 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1164aefb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1164aefe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164af01 cmp dword ptr [edx + 0x10], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164af05 jne 0x1164af1a */
  if (!C.zf) goto L_1164af1a;
  /* 1164af07 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164af0a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164af0d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1164af10 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164af13 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164af16 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1164af18 jmp 0x1164af2b */
  goto L_1164af2b;
L_1164af1a:;
  /* 1164af1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164af1d cmp dword ptr [ecx + 0x10], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164af21 jne 0x1164af2b */
  if (!C.zf) goto L_1164af2b;
  /* 1164af23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164af26 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164af29 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
L_1164af2b:;
  /* 1164af2b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164af2e mov esp, ebp */
  ESP = (EBP);
  /* 1164af30 pop ebp */
  EBP = (pop32());
  /* 1164af31 ret  */
  ESPCHK(0x1164acf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af40 @ 0x1164af40 (26 bytes, 11 insns) */
void f_1164af40(void) {
  FTRACE(0x1164af40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164af40 push ebp */
  push32((uint32_t)(EBP));
  /* 1164af41 mov ebp, esp */
  EBP = (ESP);
  /* 1164af43 push 0x11673ea8 */
  push32((uint32_t)(0x11673ea8u));
  /* 1164af48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164af4b push eax */
  push32((uint32_t)(EAX));
  /* 1164af4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164af4f push ecx */
  push32((uint32_t)(ECX));
  /* 1164af50 call 0x1164acf0 */
  push32(0x1164af55u); f_1164acf0();
  /* 1164af55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164af58 pop ebp */
  EBP = (pop32());
  /* 1164af59 ret  */
  ESPCHK(0x1164af40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af60 @ 0x1164af60 (26 bytes, 11 insns) */
void f_1164af60(void) {
  FTRACE(0x1164af60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164af60 push ebp */
  push32((uint32_t)(EBP));
  /* 1164af61 mov ebp, esp */
  EBP = (ESP);
  /* 1164af63 push 0x11673ec0 */
  push32((uint32_t)(0x11673ec0u));
  /* 1164af68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164af6b push eax */
  push32((uint32_t)(EAX));
  /* 1164af6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164af6f push ecx */
  push32((uint32_t)(ECX));
  /* 1164af70 call 0x1164acf0 */
  push32(0x1164af75u); f_1164acf0();
  /* 1164af75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164af78 pop ebp */
  EBP = (pop32());
  /* 1164af79 ret  */
  ESPCHK(0x1164af60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af80 @ 0x1164af80 (191 bytes, 58 insns) */
void f_1164af80(void) {
  FTRACE(0x1164af80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164af80 push ebp */
  push32((uint32_t)(EBP));
  /* 1164af81 mov ebp, esp */
  EBP = (ESP);
  /* 1164af83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164af86 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1164af8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164af90 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164af92 mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 1164af96 and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 1164af9c mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 1164afa0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164afa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164afa5 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 1164afa9 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1164afae mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 1164afb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164afb5 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 1164afb8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1164afbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164afbe mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 1164afc1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1164afc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164afc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164afc9 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1164afcc shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1164afcf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1164afd2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1164afd4 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 1164afd7 push ecx */
  push32((uint32_t)(ECX));
  /* 1164afd8 call 0x1164aa60 */
  push32(0x1164afddu); f_1164aa60();
  /* 1164afdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164afe0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164afe2 je 0x1164aff7 */
  if (C.zf) goto L_1164aff7;
  /* 1164afe4 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 1164afeb mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164afef add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 1164aff3 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_1164aff7:;
  /* 1164aff7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164affa and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164afff cmp eax, 0x7fff */
  { uint32_t _a=(EAX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b004 jne 0x1164b00d */
  if (!C.zf) goto L_1164b00d;
  /* 1164b006 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_1164b00d:;
  /* 1164b00d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164b010 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164b013 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1164b016 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164b019 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164b01c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1164b01e mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164b021 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164b027 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b02a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164b02f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1164b031 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164b034 mov word ptr [ecx + 8], dx */
  w16((uint32_t)(ECX + 0x8), (DX));
  /* 1164b038 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164b03b mov esp, ebp */
  ESP = (EBP);
  /* 1164b03d pop ebp */
  EBP = (pop32());
  /* 1164b03e ret  */
  ESPCHK(0x1164af80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b040 @ 0x1164b040 (54 bytes, 24 insns) */
void f_1164b040(void) {
  FTRACE(0x1164b040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164b040 push ebp */
  push32((uint32_t)(EBP));
  /* 1164b041 mov ebp, esp */
  EBP = (ESP);
  /* 1164b043 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164b046 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164b048 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164b04a push 0 */
  push32((uint32_t)(0x0u));
  /* 1164b04c push 0 */
  push32((uint32_t)(0x0u));
  /* 1164b04e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164b051 push eax */
  push32((uint32_t)(EAX));
  /* 1164b052 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 1164b055 push ecx */
  push32((uint32_t)(ECX));
  /* 1164b056 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1164b059 push edx */
  push32((uint32_t)(EDX));
  /* 1164b05a call 0x11650ec0 */
  push32(0x1164b05fu); f_11650ec0();
  /* 1164b05f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b062 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b065 push eax */
  push32((uint32_t)(EAX));
  /* 1164b066 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 1164b069 push ecx */
  push32((uint32_t)(ECX));
  /* 1164b06a call 0x1164af40 */
  push32(0x1164b06fu); f_1164af40();
  /* 1164b06f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b072 mov esp, ebp */
  ESP = (EBP);
  /* 1164b074 pop ebp */
  EBP = (pop32());
  /* 1164b075 ret  */
  ESPCHK(0x1164b040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b080 @ 0x1164b080 (54 bytes, 24 insns) */
void f_1164b080(void) {
  FTRACE(0x1164b080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164b080 push ebp */
  push32((uint32_t)(EBP));
  /* 1164b081 mov ebp, esp */
  EBP = (ESP);
  /* 1164b083 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164b086 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164b088 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164b08a push 0 */
  push32((uint32_t)(0x0u));
  /* 1164b08c push 1 */
  push32((uint32_t)(0x1u));
  /* 1164b08e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164b091 push eax */
  push32((uint32_t)(EAX));
  /* 1164b092 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 1164b095 push ecx */
  push32((uint32_t)(ECX));
  /* 1164b096 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1164b099 push edx */
  push32((uint32_t)(EDX));
  /* 1164b09a call 0x11650ec0 */
  push32(0x1164b09fu); f_11650ec0();
  /* 1164b09f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b0a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b0a5 push eax */
  push32((uint32_t)(EAX));
  /* 1164b0a6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 1164b0a9 push ecx */
  push32((uint32_t)(ECX));
  /* 1164b0aa call 0x1164af80 */
  push32(0x1164b0afu); f_1164af80();
  /* 1164b0af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b0b2 mov esp, ebp */
  ESP = (EBP);
  /* 1164b0b4 pop ebp */
  EBP = (pop32());
  /* 1164b0b5 ret  */
  ESPCHK(0x1164b080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0c0 @ 0x1164b0c0 (54 bytes, 24 insns) */
void f_1164b0c0(void) {
  FTRACE(0x1164b0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164b0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164b0c1 mov ebp, esp */
  EBP = (ESP);
  /* 1164b0c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164b0c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164b0c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164b0ca push 0 */
  push32((uint32_t)(0x0u));
  /* 1164b0cc push 0 */
  push32((uint32_t)(0x0u));
  /* 1164b0ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164b0d1 push eax */
  push32((uint32_t)(EAX));
  /* 1164b0d2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 1164b0d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1164b0d6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1164b0d9 push edx */
  push32((uint32_t)(EDX));
  /* 1164b0da call 0x11650ec0 */
  push32(0x1164b0dfu); f_11650ec0();
  /* 1164b0df add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b0e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b0e5 push eax */
  push32((uint32_t)(EAX));
  /* 1164b0e6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 1164b0e9 push ecx */
  push32((uint32_t)(ECX));
  /* 1164b0ea call 0x1164af60 */
  push32(0x1164b0efu); f_1164af60();
  /* 1164b0ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b0f2 mov esp, ebp */
  ESP = (EBP);
  /* 1164b0f4 pop ebp */
  EBP = (pop32());
  /* 1164b0f5 ret  */
  ESPCHK(0x1164b0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b100 @ 0x1164b100 (250 bytes, 90 insns) */
void f_1164b100(void) {
  FTRACE(0x1164b100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164b100 push ebp */
  push32((uint32_t)(EBP));
  /* 1164b101 mov ebp, esp */
  EBP = (ESP);
  /* 1164b103 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164b106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b109 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164b10c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164b10f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1164b112 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1164b115 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b118 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 1164b11b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b11e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b121 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1164b124:;
  /* 1164b124 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b128 jle 0x1164b16b */
  if ((C.zf||C.sf!=C.of)) goto L_1164b16b;
  /* 1164b12a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164b12d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1164b130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164b132 je 0x1164b148 */
  if (C.zf) goto L_1164b148;
  /* 1164b134 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164b137 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1164b13a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1164b13d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164b140 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b143 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1164b146 jmp 0x1164b14f */
  goto L_1164b14f;
L_1164b148:;
  /* 1164b148 mov dword ptr [ebp - 0xc], 0x30 */
  w32((uint32_t)(EBP + -0xc), (0x30u));
L_1164b14f:;
  /* 1164b14f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b152 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1164b155 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1164b157 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b15a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b15d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164b160 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164b163 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164b166 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1164b169 jmp 0x1164b124 */
  goto L_1164b124;
L_1164b16b:;
  /* 1164b16b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b16e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1164b171 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b175 jl 0x1164b1b4 */
  if ((C.sf!=C.of)) goto L_1164b1b4;
  /* 1164b177 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164b17a movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1164b17d cmp ecx, 0x35 */
  { uint32_t _a=(ECX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b180 jl 0x1164b1b4 */
  if ((C.sf!=C.of)) goto L_1164b1b4;
  /* 1164b182 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b185 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164b188 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1164b18b:;
  /* 1164b18b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b18e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1164b191 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b194 jne 0x1164b1a7 */
  if (!C.zf) goto L_1164b1a7;
  /* 1164b196 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b199 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 1164b19c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b19f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164b1a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164b1a5 jmp 0x1164b18b */
  goto L_1164b18b;
L_1164b1a7:;
  /* 1164b1a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b1aa mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1164b1ac add dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1164b1af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b1b2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
L_1164b1b4:;
  /* 1164b1b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b1b7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1164b1ba cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b1bd jne 0x1164b1d0 */
  if (!C.zf) goto L_1164b1d0;
  /* 1164b1bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164b1c2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164b1c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b1c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164b1cb mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1164b1ce jmp 0x1164b1f6 */
  goto L_1164b1f6;
L_1164b1d0:;
  /* 1164b1d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b1d3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b1d6 push eax */
  push32((uint32_t)(EAX));
  /* 1164b1d7 call 0x116496f0 */
  push32(0x1164b1dcu); f_116496f0();
  /* 1164b1dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b1df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b1e2 push eax */
  push32((uint32_t)(EAX));
  /* 1164b1e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b1e6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b1e9 push ecx */
  push32((uint32_t)(ECX));
  /* 1164b1ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b1ed push edx */
  push32((uint32_t)(EDX));
  /* 1164b1ee call 0x1164b450 */
  push32(0x1164b1f3u); f_1164b450();
  /* 1164b1f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164b1f6:;
  /* 1164b1f6 mov esp, ebp */
  ESP = (EBP);
  /* 1164b1f8 pop ebp */
  EBP = (pop32());
  /* 1164b1f9 ret  */
  ESPCHK(0x1164b100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b200 @ 0x1164b200 (119 bytes, 44 insns) */
void f_1164b200(void) {
  FTRACE(0x1164b200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164b200 push ebp */
  push32((uint32_t)(EBP));
  /* 1164b201 mov ebp, esp */
  EBP = (ESP);
  /* 1164b203 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164b206 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1164b209 push eax */
  push32((uint32_t)(EAX));
  /* 1164b20a lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 1164b20d push ecx */
  push32((uint32_t)(ECX));
  /* 1164b20e call 0x1164b280 */
  push32(0x1164b213u); f_1164b280();
  /* 1164b213 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b216 lea edx, [ebp - 0x28] */
  EDX = ((uint32_t)(EBP + -0x28));
  /* 1164b219 push edx */
  push32((uint32_t)(EDX));
  /* 1164b21a push 0 */
  push32((uint32_t)(0x0u));
  /* 1164b21c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1164b21e sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164b221 mov eax, esp */
  EAX = (ESP);
  /* 1164b223 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164b226 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1164b228 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164b22b mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1164b22e mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164b232 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
  /* 1164b236 call 0x11651a40 */
  push32(0x1164b23bu); f_11651a40();
  /* 1164b23b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b23e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164b241 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1164b244 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 1164b248 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164b24b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1164b24d movsx edx, word ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 1164b251 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164b254 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1164b257 lea ecx, [ebp - 0x24] */
  ECX = ((uint32_t)(EBP + -0x24));
  /* 1164b25a push ecx */
  push32((uint32_t)(ECX));
  /* 1164b25b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1164b25e push edx */
  push32((uint32_t)(EDX));
  /* 1164b25f call 0x11649870 */
  push32(0x1164b264u); f_11649870();
  /* 1164b264 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b267 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164b26a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1164b26d mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1164b270 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164b273 mov esp, ebp */
  ESP = (EBP);
  /* 1164b275 pop ebp */
  EBP = (pop32());
  /* 1164b276 ret  */
  ESPCHK(0x1164b200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b280 @ 0x1164b280 (354 bytes, 104 insns) */
void f_1164b280(void) {
  FTRACE(0x1164b280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164b280 push ebp */
  push32((uint32_t)(EBP));
  /* 1164b281 mov ebp, esp */
  EBP = (ESP);
  /* 1164b283 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164b286 mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
  /* 1164b28d mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 1164b293 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164b296 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164b298 mov cx, word ptr [eax + 6] */
  CX = (r16((uint32_t)(EAX + 0x6)));
  /* 1164b29c and ecx, 0x7ff0 */
  { uint32_t _r=(ECX)&(0x7ff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1164b2a2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1164b2a5 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 1164b2a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164b2ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164b2ae mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 1164b2b2 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1164b2b7 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 1164b2bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164b2be mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164b2c1 and edx, 0xfffff */
  { uint32_t _r=(EDX)&(0xfffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164b2c7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1164b2ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164b2cd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1164b2cf mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1164b2d2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164b2d5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164b2db mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1164b2de cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b2e2 je 0x1164b2f7 */
  if (C.zf) goto L_1164b2f7;
  /* 1164b2e4 cmp dword ptr [ebp - 0x1c], 0x7ff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x7ffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b2eb je 0x1164b2ef */
  if (C.zf) goto L_1164b2ef;
  /* 1164b2ed jmp 0x1164b33a */
  goto L_1164b33a;
L_1164b2ef:;
  /* 1164b2ef mov word ptr [ebp - 4], 0x7fff */
  w16((uint32_t)(EBP + -0x4), (0x7fffu));
  /* 1164b2f5 jmp 0x1164b355 */
  goto L_1164b355;
L_1164b2f7:;
  /* 1164b2f7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b2fb jne 0x1164b324 */
  if (!C.zf) goto L_1164b324;
  /* 1164b2fd cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b301 jne 0x1164b324 */
  if (!C.zf) goto L_1164b324;
  /* 1164b303 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b306 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1164b30d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b310 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1164b316 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b319 mov word ptr [edx + 8], 0 */
  w16((uint32_t)(EDX + 0x8), (0x0u));
  /* 1164b31f jmp 0x1164b3de */
  goto L_1164b3de;
L_1164b324:;
  /* 1164b324 movsx eax, word ptr [ebp - 0x14] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 1164b328 add eax, 0x3c01 */
  { uint32_t _a=(EAX),_b=(0x3c01u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b32d mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1164b331 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1164b338 jmp 0x1164b355 */
  goto L_1164b355;
L_1164b33a:;
  /* 1164b33a mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1164b33e sub cx, 0x3ff */
  { uint32_t _a=(CX),_b=(0x3ffu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 1164b343 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 1164b347 movsx edx, word ptr [ebp - 0x14] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 1164b34b add edx, 0x3fff */
  { uint32_t _a=(EDX),_b=(0x3fffu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b351 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_1164b355:;
  /* 1164b355 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164b358 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 1164b35b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164b35e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1164b360 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164b363 shr edx, 0x15 */
  EDX = (sh_shr((uint32_t)(EDX), (0x15u)&0x1f, 32));
  /* 1164b366 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1164b368 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b36b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1164b36e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164b371 shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 1164b374 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b377 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1164b379:;
  /* 1164b379 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b37c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164b37f and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 1164b385 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164b387 jne 0x1164b3c4 */
  if (!C.zf) goto L_1164b3c4;
  /* 1164b389 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b38c mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1164b38f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1164b391 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b394 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1164b396 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 1164b39c neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1164b39e sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164b3a0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1164b3a2 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164b3a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b3a7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1164b3aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b3ad mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1164b3af shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1164b3b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b3b4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1164b3b6 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 1164b3ba sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 1164b3be mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 1164b3c2 jmp 0x1164b379 */
  goto L_1164b379;
L_1164b3c4:;
  /* 1164b3c4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164b3c7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164b3cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b3cf and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1164b3d5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1164b3d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b3da mov word ptr [edx + 8], ax */
  w16((uint32_t)(EDX + 0x8), (AX));
L_1164b3de:;
  /* 1164b3de mov esp, ebp */
  ESP = (EBP);
  /* 1164b3e0 pop ebp */
  EBP = (pop32());
  /* 1164b3e1 ret  */
  ESPCHK(0x1164b280u, _esp0);
  ESP += 4; return;
}

