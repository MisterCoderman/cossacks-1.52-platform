#include "recomp.h"

/* FUN_10015969 @ 0x120b5969 (27 bytes, 11 insns) */
void f_120b5969(void) {
  FTRACE(0x120b5969u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b5969 push ebp */
  push32((uint32_t)(EBP));
  /* 120b596a mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 120b596e mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 120b5970 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 120b5973 push eax */
  push32((uint32_t)(EAX));
  /* 120b5974 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 120b5977 push eax */
  push32((uint32_t)(EAX));
  /* 120b5978 call 0x120ab0f2 */
  push32(0x120b597du); f_120ab0f2();
  /* 120b597d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5980 pop ebp */
  EBP = (pop32());
  /* 120b5981 ret 4 */
  ESPCHK(0x120b5969u, _esp0);
  ESP += 8; return;
}

/* __XcptFilter @ 0x120b5990 (446 bytes, 130 insns) */
void f_120b5990(void) {
  FTRACE(0x120b5990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b5990 push ebp */
  push32((uint32_t)(EBP));
  /* 120b5991 mov ebp, esp */
  EBP = (ESP);
  /* 120b5993 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b5996 call 0x120af980 */
  push32(0x120b599bu); f_120af980();
  /* 120b599b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b599e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b59a1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 120b59a4 push ecx */
  push32((uint32_t)(ECX));
  /* 120b59a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b59a8 push edx */
  push32((uint32_t)(EDX));
  /* 120b59a9 call 0x120b5b50 */
  push32(0x120b59aeu); f_120b5b50();
  /* 120b59ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b59b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120b59b4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b59b8 je 0x120b59c3 */
  if (C.zf) goto L_120b59c3;
  /* 120b59ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b59bd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b59c1 jne 0x120b59d2 */
  if (!C.zf) goto L_120b59d2;
L_120b59c3:;
  /* 120b59c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b59c6 push ecx */
  push32((uint32_t)(ECX));
  /* 120b59c7 call dword ptr [0x120e3390] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3390))), 0x120b59cdu);
  /* 120b59cd jmp 0x120b5b4a */
  goto L_120b5b4a;
L_120b59d2:;
  /* 120b59d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b59d5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b59d9 jne 0x120b59ef */
  if (!C.zf) goto L_120b59ef;
  /* 120b59db mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b59de mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 120b59e5 mov eax, 1 */
  EAX = (0x1u);
  /* 120b59ea jmp 0x120b5b4a */
  goto L_120b5b4a;
L_120b59ef:;
  /* 120b59ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b59f2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b59f6 jne 0x120b5a00 */
  if (!C.zf) goto L_120b5a00;
  /* 120b59f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b59fb jmp 0x120b5b4a */
  goto L_120b5b4a;
L_120b5a00:;
  /* 120b5a00 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b5a03 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120b5a06 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b5a09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b5a0c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 120b5a0f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 120b5a12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b5a15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b5a18 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 120b5a1b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b5a1e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5a22 jne 0x120b5b27 */
  if (!C.zf) goto L_120b5b27;
  /* 120b5a28 mov eax, dword ptr [0x120df2e8] */
  EAX = (r32((uint32_t)(0x120df2e8)));
  /* 120b5a2d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120b5a30 jmp 0x120b5a3b */
  goto L_120b5a3b;
L_120b5a32:;
  /* 120b5a32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b5a35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5a38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_120b5a3b:;
  /* 120b5a3b mov edx, dword ptr [0x120df2e8] */
  EDX = (r32((uint32_t)(0x120df2e8)));
  /* 120b5a41 add edx, dword ptr [0x120df2ec] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x120df2ec))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5a47 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5a4a jge 0x120b5a62 */
  if ((C.sf==C.of)) goto L_120b5a62;
  /* 120b5a4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b5a4f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b5a52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b5a55 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 120b5a58 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 120b5a60 jmp 0x120b5a32 */
  goto L_120b5a32;
L_120b5a62:;
  /* 120b5a62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b5a65 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 120b5a68 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120b5a6b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b5a6e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5a74 jne 0x120b5a85 */
  if (!C.zf) goto L_120b5a85;
  /* 120b5a76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b5a79 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 120b5a80 jmp 0x120b5b0d */
  goto L_120b5b0d;
L_120b5a85:;
  /* 120b5a85 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b5a88 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5a8e jne 0x120b5a9c */
  if (!C.zf) goto L_120b5a9c;
  /* 120b5a90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b5a93 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 120b5a9a jmp 0x120b5b0d */
  goto L_120b5b0d;
L_120b5a9c:;
  /* 120b5a9c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b5a9f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5aa5 jne 0x120b5ab3 */
  if (!C.zf) goto L_120b5ab3;
  /* 120b5aa7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b5aaa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 120b5ab1 jmp 0x120b5b0d */
  goto L_120b5b0d;
L_120b5ab3:;
  /* 120b5ab3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b5ab6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5abc jne 0x120b5aca */
  if (!C.zf) goto L_120b5aca;
  /* 120b5abe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b5ac1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 120b5ac8 jmp 0x120b5b0d */
  goto L_120b5b0d;
L_120b5aca:;
  /* 120b5aca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b5acd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5ad3 jne 0x120b5ae1 */
  if (!C.zf) goto L_120b5ae1;
  /* 120b5ad5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b5ad8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 120b5adf jmp 0x120b5b0d */
  goto L_120b5b0d;
L_120b5ae1:;
  /* 120b5ae1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b5ae4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5aea jne 0x120b5af8 */
  if (!C.zf) goto L_120b5af8;
  /* 120b5aec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b5aef mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 120b5af6 jmp 0x120b5b0d */
  goto L_120b5b0d;
L_120b5af8:;
  /* 120b5af8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b5afb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5b01 jne 0x120b5b0d */
  if (!C.zf) goto L_120b5b0d;
  /* 120b5b03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b5b06 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_120b5b0d:;
  /* 120b5b0d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b5b10 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 120b5b13 push edx */
  push32((uint32_t)(EDX));
  /* 120b5b14 push 8 */
  push32((uint32_t)(0x8u));
  /* 120b5b16 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x120b5b19u);
  /* 120b5b19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5b1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b5b1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5b22 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 120b5b25 jmp 0x120b5b3e */
  goto L_120b5b3e;
L_120b5b27:;
  /* 120b5b27 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b5b2a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 120b5b31 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b5b34 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b5b37 push ecx */
  push32((uint32_t)(ECX));
  /* 120b5b38 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x120b5b3bu);
  /* 120b5b3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b5b3e:;
  /* 120b5b3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b5b41 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b5b44 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 120b5b47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_120b5b4a:;
  /* 120b5b4a mov esp, ebp */
  ESP = (EBP);
  /* 120b5b4c pop ebp */
  EBP = (pop32());
  /* 120b5b4d ret  */
  ESPCHK(0x120b5990u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b50 @ 0x120b5b50 (89 bytes, 35 insns) */
void f_120b5b50(void) {
  FTRACE(0x120b5b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b5b50 push ebp */
  push32((uint32_t)(EBP));
  /* 120b5b51 mov ebp, esp */
  EBP = (ESP);
  /* 120b5b53 push ecx */
  push32((uint32_t)(ECX));
  /* 120b5b54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b5b57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b5b5a:;
  /* 120b5b5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b5b5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b5b5f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5b62 je 0x120b5b82 */
  if (C.zf) goto L_120b5b82;
  /* 120b5b64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b5b67 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5b6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b5b6d mov ecx, dword ptr [0x120df2f4] */
  ECX = (r32((uint32_t)(0x120df2f4)));
  /* 120b5b73 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b5b76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b5b79 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5b7b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5b7e jae 0x120b5b82 */
  if (!C.cf) goto L_120b5b82;
  /* 120b5b80 jmp 0x120b5b5a */
  goto L_120b5b5a;
L_120b5b82:;
  /* 120b5b82 mov eax, dword ptr [0x120df2f4] */
  EAX = (r32((uint32_t)(0x120df2f4)));
  /* 120b5b87 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b5b8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b5b8d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5b8f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5b92 jae 0x120b5b9e */
  if (!C.cf) goto L_120b5b9e;
  /* 120b5b94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b5b97 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b5b99 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5b9c je 0x120b5ba2 */
  if (C.zf) goto L_120b5ba2;
L_120b5b9e:;
  /* 120b5b9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b5ba0 jmp 0x120b5ba5 */
  goto L_120b5ba5;
L_120b5ba2:;
  /* 120b5ba2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120b5ba5:;
  /* 120b5ba5 mov esp, ebp */
  ESP = (EBP);
  /* 120b5ba7 pop ebp */
  EBP = (pop32());
  /* 120b5ba8 ret  */
  ESPCHK(0x120b5b50u, _esp0);
  ESP += 4; return;
}

/* _abort @ 0x120b5bb0 (30 bytes, 12 insns) */
void f_120b5bb0(void) {
  FTRACE(0x120b5bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b5bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b5bb1 mov ebp, esp */
  EBP = (ESP);
  /* 120b5bb3 push 0xa */
  push32((uint32_t)(0xau));
  /* 120b5bb5 call 0x120b0d10 */
  push32(0x120b5bbau); f_120b0d10();
  /* 120b5bba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5bbd push 0x16 */
  push32((uint32_t)(0x16u));
  /* 120b5bbf call 0x120b1880 */
  push32(0x120b5bc4u); f_120b1880();
  /* 120b5bc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5bc7 push 3 */
  push32((uint32_t)(0x3u));
  /* 120b5bc9 call 0x120afcf0 */
  push32(0x120b5bceu); f_120afcf0();
  /* 120b5bce pop ebp */
  EBP = (pop32());
  /* 120b5bcf ret  */
  ESPCHK(0x120b5bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015bd0 @ 0x120b5bd0 (61 bytes, 18 insns) */
void f_120b5bd0(void) {
  FTRACE(0x120b5bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b5bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b5bd1 mov ebp, esp */
  EBP = (ESP);
  /* 120b5bd3 cmp dword ptr [0x120e13c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e13c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5bda jne 0x120b5c0b */
  if (!C.zf) goto L_120b5c0b;
  /* 120b5bdc push 0xb */
  push32((uint32_t)(0xbu));
  /* 120b5bde call 0x120acb80 */
  push32(0x120b5be3u); f_120acb80();
  /* 120b5be3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5be6 cmp dword ptr [0x120e13c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e13c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5bed jne 0x120b5c01 */
  if (!C.zf) goto L_120b5c01;
  /* 120b5bef call 0x120b5c30 */
  push32(0x120b5bf4u); f_120b5c30();
  /* 120b5bf4 mov eax, dword ptr [0x120e13c0] */
  EAX = (r32((uint32_t)(0x120e13c0)));
  /* 120b5bf9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5bfc mov dword ptr [0x120e13c0], eax */
  w32((uint32_t)(0x120e13c0), (EAX));
L_120b5c01:;
  /* 120b5c01 push 0xb */
  push32((uint32_t)(0xbu));
  /* 120b5c03 call 0x120acc20 */
  push32(0x120b5c08u); f_120acc20();
  /* 120b5c08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b5c0b:;
  /* 120b5c0b pop ebp */
  EBP = (pop32());
  /* 120b5c0c ret  */
  ESPCHK(0x120b5bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c10 @ 0x120b5c10 (30 bytes, 11 insns) */
void f_120b5c10(void) {
  FTRACE(0x120b5c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b5c10 push ebp */
  push32((uint32_t)(EBP));
  /* 120b5c11 mov ebp, esp */
  EBP = (ESP);
  /* 120b5c13 push 0xb */
  push32((uint32_t)(0xbu));
  /* 120b5c15 call 0x120acb80 */
  push32(0x120b5c1au); f_120acb80();
  /* 120b5c1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5c1d call 0x120b5c30 */
  push32(0x120b5c22u); f_120b5c30();
  /* 120b5c22 push 0xb */
  push32((uint32_t)(0xbu));
  /* 120b5c24 call 0x120acc20 */
  push32(0x120b5c29u); f_120acc20();
  /* 120b5c29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5c2c pop ebp */
  EBP = (pop32());
  /* 120b5c2d ret  */
  ESPCHK(0x120b5c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c30 @ 0x120b5c30 (939 bytes, 266 insns) */
void f_120b5c30(void) {
  FTRACE(0x120b5c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b5c30 push ebp */
  push32((uint32_t)(EBP));
  /* 120b5c31 mov ebp, esp */
  EBP = (ESP);
  /* 120b5c33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b5c36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b5c3d push 0xc */
  push32((uint32_t)(0xcu));
  /* 120b5c3f call 0x120acb80 */
  push32(0x120b5c44u); f_120acb80();
  /* 120b5c44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5c47 mov dword ptr [0x120e1308], 0 */
  w32((uint32_t)(0x120e1308), (0x0u));
  /* 120b5c51 mov dword ptr [0x120df3a0], 0xffffffff */
  w32((uint32_t)(0x120df3a0), (0xffffffffu));
  /* 120b5c5b mov eax, dword ptr [0x120df3a0] */
  EAX = (r32((uint32_t)(0x120df3a0)));
  /* 120b5c60 mov dword ptr [0x120df390], eax */
  w32((uint32_t)(0x120df390), (EAX));
  /* 120b5c65 push 0x120dc1f0 */
  push32((uint32_t)(0x120dc1f0u));
  /* 120b5c6a call 0x120bb620 */
  push32(0x120b5c6fu); f_120bb620();
  /* 120b5c6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5c72 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b5c75 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5c79 jne 0x120b5db3 */
  if (!C.zf) goto L_120b5db3;
  /* 120b5c7f push 0xc */
  push32((uint32_t)(0xcu));
  /* 120b5c81 call 0x120acc20 */
  push32(0x120b5c86u); f_120acc20();
  /* 120b5c86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5c89 push 0x120e1310 */
  push32((uint32_t)(0x120e1310u));
  /* 120b5c8e call dword ptr [0x120e341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e341c))), 0x120b5c94u);
  /* 120b5c94 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5c97 je 0x120b5dae */
  if (C.zf) goto L_120b5dae;
  /* 120b5c9d mov dword ptr [0x120e1308], 1 */
  w32((uint32_t)(0x120e1308), (0x1u));
  /* 120b5ca7 mov ecx, dword ptr [0x120e1310] */
  ECX = (r32((uint32_t)(0x120e1310)));
  /* 120b5cad imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b5cb0 mov dword ptr [0x120df2f8], ecx */
  w32((uint32_t)(0x120df2f8), (ECX));
  /* 120b5cb6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b5cb8 mov dx, word ptr [0x120e1356] */
  DX = (r16((uint32_t)(0x120e1356)));
  /* 120b5cbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b5cc1 je 0x120b5cd9 */
  if (C.zf) goto L_120b5cd9;
  /* 120b5cc3 mov eax, dword ptr [0x120e1364] */
  EAX = (r32((uint32_t)(0x120e1364)));
  /* 120b5cc8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b5ccb mov ecx, dword ptr [0x120df2f8] */
  ECX = (r32((uint32_t)(0x120df2f8)));
  /* 120b5cd1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5cd3 mov dword ptr [0x120df2f8], ecx */
  w32((uint32_t)(0x120df2f8), (ECX));
L_120b5cd9:;
  /* 120b5cd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b5cdb mov dx, word ptr [0x120e13aa] */
  DX = (r16((uint32_t)(0x120e13aa)));
  /* 120b5ce2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b5ce4 je 0x120b5d0e */
  if (C.zf) goto L_120b5d0e;
  /* 120b5ce6 cmp dword ptr [0x120e13b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e13b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5ced je 0x120b5d0e */
  if (C.zf) goto L_120b5d0e;
  /* 120b5cef mov dword ptr [0x120df2fc], 1 */
  w32((uint32_t)(0x120df2fc), (0x1u));
  /* 120b5cf9 mov eax, dword ptr [0x120e13b8] */
  EAX = (r32((uint32_t)(0x120e13b8)));
  /* 120b5cfe sub eax, dword ptr [0x120e1364] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120e1364))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b5d04 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b5d07 mov dword ptr [0x120df300], eax */
  w32((uint32_t)(0x120df300), (EAX));
  /* 120b5d0c jmp 0x120b5d22 */
  goto L_120b5d22;
L_120b5d0e:;
  /* 120b5d0e mov dword ptr [0x120df2fc], 0 */
  w32((uint32_t)(0x120df2fc), (0x0u));
  /* 120b5d18 mov dword ptr [0x120df300], 0 */
  w32((uint32_t)(0x120df300), (0x0u));
L_120b5d22:;
  /* 120b5d22 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 120b5d25 push ecx */
  push32((uint32_t)(ECX));
  /* 120b5d26 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b5d28 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 120b5d2a mov edx, dword ptr [0x120df384] */
  EDX = (r32((uint32_t)(0x120df384)));
  /* 120b5d30 push edx */
  push32((uint32_t)(EDX));
  /* 120b5d31 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120b5d33 push 0x120e1314 */
  push32((uint32_t)(0x120e1314u));
  /* 120b5d38 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 120b5d3d mov eax, dword ptr [0x120e13f0] */
  EAX = (r32((uint32_t)(0x120e13f0)));
  /* 120b5d42 push eax */
  push32((uint32_t)(EAX));
  /* 120b5d43 call dword ptr [0x120e33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33c4))), 0x120b5d49u);
  /* 120b5d49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b5d4b je 0x120b5d5f */
  if (C.zf) goto L_120b5d5f;
  /* 120b5d4d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5d51 jne 0x120b5d5f */
  if (!C.zf) goto L_120b5d5f;
  /* 120b5d53 mov ecx, dword ptr [0x120df384] */
  ECX = (r32((uint32_t)(0x120df384)));
  /* 120b5d59 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 120b5d5d jmp 0x120b5d68 */
  goto L_120b5d68;
L_120b5d5f:;
  /* 120b5d5f mov edx, dword ptr [0x120df384] */
  EDX = (r32((uint32_t)(0x120df384)));
  /* 120b5d65 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_120b5d68:;
  /* 120b5d68 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 120b5d6b push eax */
  push32((uint32_t)(EAX));
  /* 120b5d6c push 0 */
  push32((uint32_t)(0x0u));
  /* 120b5d6e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 120b5d70 mov ecx, dword ptr [0x120df388] */
  ECX = (r32((uint32_t)(0x120df388)));
  /* 120b5d76 push ecx */
  push32((uint32_t)(ECX));
  /* 120b5d77 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120b5d79 push 0x120e1368 */
  push32((uint32_t)(0x120e1368u));
  /* 120b5d7e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 120b5d83 mov edx, dword ptr [0x120e13f0] */
  EDX = (r32((uint32_t)(0x120e13f0)));
  /* 120b5d89 push edx */
  push32((uint32_t)(EDX));
  /* 120b5d8a call dword ptr [0x120e33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33c4))), 0x120b5d90u);
  /* 120b5d90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b5d92 je 0x120b5da5 */
  if (C.zf) goto L_120b5da5;
  /* 120b5d94 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5d98 jne 0x120b5da5 */
  if (!C.zf) goto L_120b5da5;
  /* 120b5d9a mov eax, dword ptr [0x120df388] */
  EAX = (r32((uint32_t)(0x120df388)));
  /* 120b5d9f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 120b5da3 jmp 0x120b5dae */
  goto L_120b5dae;
L_120b5da5:;
  /* 120b5da5 mov ecx, dword ptr [0x120df388] */
  ECX = (r32((uint32_t)(0x120df388)));
  /* 120b5dab mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_120b5dae:;
  /* 120b5dae jmp 0x120b5fd7 */
  goto L_120b5fd7;
L_120b5db3:;
  /* 120b5db3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5db6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120b5db9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b5dbb je 0x120b5ddd */
  if (C.zf) goto L_120b5ddd;
  /* 120b5dbd cmp dword ptr [0x120e13bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e13bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5dc4 je 0x120b5dec */
  if (C.zf) goto L_120b5dec;
  /* 120b5dc6 mov ecx, dword ptr [0x120e13bc] */
  ECX = (r32((uint32_t)(0x120e13bc)));
  /* 120b5dcc push ecx */
  push32((uint32_t)(ECX));
  /* 120b5dcd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5dd0 push edx */
  push32((uint32_t)(EDX));
  /* 120b5dd1 call 0x120b5820 */
  push32(0x120b5dd6u); f_120b5820();
  /* 120b5dd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5dd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b5ddb jne 0x120b5dec */
  if (!C.zf) goto L_120b5dec;
L_120b5ddd:;
  /* 120b5ddd push 0xc */
  push32((uint32_t)(0xcu));
  /* 120b5ddf call 0x120acc20 */
  push32(0x120b5de4u); f_120acc20();
  /* 120b5de4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5de7 jmp 0x120b5fd7 */
  goto L_120b5fd7;
L_120b5dec:;
  /* 120b5dec push 2 */
  push32((uint32_t)(0x2u));
  /* 120b5dee mov eax, dword ptr [0x120e13bc] */
  EAX = (r32((uint32_t)(0x120e13bc)));
  /* 120b5df3 push eax */
  push32((uint32_t)(EAX));
  /* 120b5df4 call 0x120ad710 */
  push32(0x120b5df9u); f_120ad710();
  /* 120b5df9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5dfc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 120b5e01 push 0x120dc1e8 */
  push32((uint32_t)(0x120dc1e8u));
  /* 120b5e06 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b5e08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5e0b push ecx */
  push32((uint32_t)(ECX));
  /* 120b5e0c call 0x120b1210 */
  push32(0x120b5e11u); f_120b1210();
  /* 120b5e11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5e14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5e17 push eax */
  push32((uint32_t)(EAX));
  /* 120b5e18 call 0x120acc80 */
  push32(0x120b5e1du); f_120acc80();
  /* 120b5e1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5e20 mov dword ptr [0x120e13bc], eax */
  w32((uint32_t)(0x120e13bc), (EAX));
  /* 120b5e25 cmp dword ptr [0x120e13bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e13bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5e2c jne 0x120b5e3d */
  if (!C.zf) goto L_120b5e3d;
  /* 120b5e2e push 0xc */
  push32((uint32_t)(0xcu));
  /* 120b5e30 call 0x120acc20 */
  push32(0x120b5e35u); f_120acc20();
  /* 120b5e35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5e38 jmp 0x120b5fd7 */
  goto L_120b5fd7;
L_120b5e3d:;
  /* 120b5e3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5e40 push edx */
  push32((uint32_t)(EDX));
  /* 120b5e41 mov eax, dword ptr [0x120e13bc] */
  EAX = (r32((uint32_t)(0x120e13bc)));
  /* 120b5e46 push eax */
  push32((uint32_t)(EAX));
  /* 120b5e47 call 0x120b1390 */
  push32(0x120b5e4cu); f_120b1390();
  /* 120b5e4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5e4f push 0xc */
  push32((uint32_t)(0xcu));
  /* 120b5e51 call 0x120acc20 */
  push32(0x120b5e56u); f_120acc20();
  /* 120b5e56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5e59 push 3 */
  push32((uint32_t)(0x3u));
  /* 120b5e5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5e5e push ecx */
  push32((uint32_t)(ECX));
  /* 120b5e5f mov edx, dword ptr [0x120df384] */
  EDX = (r32((uint32_t)(0x120df384)));
  /* 120b5e65 push edx */
  push32((uint32_t)(EDX));
  /* 120b5e66 call 0x120b1c00 */
  push32(0x120b5e6bu); f_120b1c00();
  /* 120b5e6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5e6e mov eax, dword ptr [0x120df384] */
  EAX = (r32((uint32_t)(0x120df384)));
  /* 120b5e73 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 120b5e77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5e7a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5e7d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120b5e80 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5e83 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120b5e86 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5e89 jne 0x120b5e9d */
  if (!C.zf) goto L_120b5e9d;
  /* 120b5e8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b5e8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5e91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b5e94 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5e97 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5e9a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_120b5e9d:;
  /* 120b5e9d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5ea0 push eax */
  push32((uint32_t)(EAX));
  /* 120b5ea1 call 0x120bb3a0 */
  push32(0x120b5ea6u); f_120bb3a0();
  /* 120b5ea6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5ea9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b5eaf mov dword ptr [0x120df2f8], eax */
  w32((uint32_t)(0x120df2f8), (EAX));
L_120b5eb4:;
  /* 120b5eb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5eb7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120b5eba cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5ebd je 0x120b5ed5 */
  if (C.zf) goto L_120b5ed5;
  /* 120b5ebf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5ec2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b5ec5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5ec8 jl 0x120b5ee0 */
  if ((C.sf!=C.of)) goto L_120b5ee0;
  /* 120b5eca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5ecd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120b5ed0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5ed3 jg 0x120b5ee0 */
  if ((!C.zf&&C.sf==C.of)) goto L_120b5ee0;
L_120b5ed5:;
  /* 120b5ed5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5ed8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5edb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120b5ede jmp 0x120b5eb4 */
  goto L_120b5eb4;
L_120b5ee0:;
  /* 120b5ee0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5ee3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120b5ee6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5ee9 jne 0x120b5f85 */
  if (!C.zf) goto L_120b5f85;
  /* 120b5eef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5ef2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5ef5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120b5ef8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5efb push edx */
  push32((uint32_t)(EDX));
  /* 120b5efc call 0x120bb3a0 */
  push32(0x120b5f01u); f_120bb3a0();
  /* 120b5f01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5f04 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b5f07 mov ecx, dword ptr [0x120df2f8] */
  ECX = (r32((uint32_t)(0x120df2f8)));
  /* 120b5f0d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5f0f mov dword ptr [0x120df2f8], ecx */
  w32((uint32_t)(0x120df2f8), (ECX));
L_120b5f15:;
  /* 120b5f15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5f18 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120b5f1b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5f1e jl 0x120b5f36 */
  if ((C.sf!=C.of)) goto L_120b5f36;
  /* 120b5f20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5f23 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120b5f26 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5f29 jg 0x120b5f36 */
  if ((!C.zf&&C.sf==C.of)) goto L_120b5f36;
  /* 120b5f2b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5f2e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5f31 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b5f34 jmp 0x120b5f15 */
  goto L_120b5f15;
L_120b5f36:;
  /* 120b5f36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5f39 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120b5f3c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5f3f jne 0x120b5f85 */
  if (!C.zf) goto L_120b5f85;
  /* 120b5f41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5f44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5f47 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b5f4a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5f4d push ecx */
  push32((uint32_t)(ECX));
  /* 120b5f4e call 0x120bb3a0 */
  push32(0x120b5f53u); f_120bb3a0();
  /* 120b5f53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5f56 mov edx, dword ptr [0x120df2f8] */
  EDX = (r32((uint32_t)(0x120df2f8)));
  /* 120b5f5c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5f5e mov dword ptr [0x120df2f8], edx */
  w32((uint32_t)(0x120df2f8), (EDX));
L_120b5f64:;
  /* 120b5f64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5f67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b5f6a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5f6d jl 0x120b5f85 */
  if ((C.sf!=C.of)) goto L_120b5f85;
  /* 120b5f6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5f72 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120b5f75 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5f78 jg 0x120b5f85 */
  if ((!C.zf&&C.sf==C.of)) goto L_120b5f85;
  /* 120b5f7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5f7d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5f80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120b5f83 jmp 0x120b5f64 */
  goto L_120b5f64;
L_120b5f85:;
  /* 120b5f85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5f89 je 0x120b5f99 */
  if (C.zf) goto L_120b5f99;
  /* 120b5f8b mov edx, dword ptr [0x120df2f8] */
  EDX = (r32((uint32_t)(0x120df2f8)));
  /* 120b5f91 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b5f93 mov dword ptr [0x120df2f8], edx */
  w32((uint32_t)(0x120df2f8), (EDX));
L_120b5f99:;
  /* 120b5f99 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5f9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b5f9f mov dword ptr [0x120df2fc], ecx */
  w32((uint32_t)(0x120df2fc), (ECX));
  /* 120b5fa5 cmp dword ptr [0x120df2fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120df2fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5fac je 0x120b5fce */
  if (C.zf) goto L_120b5fce;
  /* 120b5fae push 3 */
  push32((uint32_t)(0x3u));
  /* 120b5fb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5fb3 push edx */
  push32((uint32_t)(EDX));
  /* 120b5fb4 mov eax, dword ptr [0x120df388] */
  EAX = (r32((uint32_t)(0x120df388)));
  /* 120b5fb9 push eax */
  push32((uint32_t)(EAX));
  /* 120b5fba call 0x120b1c00 */
  push32(0x120b5fbfu); f_120b1c00();
  /* 120b5fbf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5fc2 mov ecx, dword ptr [0x120df388] */
  ECX = (r32((uint32_t)(0x120df388)));
  /* 120b5fc8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 120b5fcc jmp 0x120b5fd7 */
  goto L_120b5fd7;
L_120b5fce:;
  /* 120b5fce mov edx, dword ptr [0x120df388] */
  EDX = (r32((uint32_t)(0x120df388)));
  /* 120b5fd4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_120b5fd7:;
  /* 120b5fd7 mov esp, ebp */
  ESP = (EBP);
  /* 120b5fd9 pop ebp */
  EBP = (pop32());
  /* 120b5fda ret  */
  ESPCHK(0x120b5c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10015fe0 @ 0x120b5fe0 (46 bytes, 18 insns) */
void f_120b5fe0(void) {
  FTRACE(0x120b5fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b5fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b5fe1 mov ebp, esp */
  EBP = (ESP);
  /* 120b5fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b5fe4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 120b5fe6 call 0x120acb80 */
  push32(0x120b5febu); f_120acb80();
  /* 120b5feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5fee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b5ff1 push eax */
  push32((uint32_t)(EAX));
  /* 120b5ff2 call 0x120b6010 */
  push32(0x120b5ff7u); f_120b6010();
  /* 120b5ff7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5ffa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b5ffd push 0xb */
  push32((uint32_t)(0xbu));
  /* 120b5fff call 0x120acc20 */
  push32(0x120b6004u); f_120acc20();
  /* 120b6004 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6007 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b600a mov esp, ebp */
  ESP = (EBP);
  /* 120b600c pop ebp */
  EBP = (pop32());
  /* 120b600d ret  */
  ESPCHK(0x120b5fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016010 @ 0x120b6010 (762 bytes, 246 insns) */
void f_120b6010(void) {
  FTRACE(0x120b6010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b6010 push ebp */
  push32((uint32_t)(EBP));
  /* 120b6011 mov ebp, esp */
  EBP = (ESP);
  /* 120b6013 push ecx */
  push32((uint32_t)(ECX));
  /* 120b6014 cmp dword ptr [0x120df2fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120df2fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b601b jne 0x120b6024 */
  if (!C.zf) goto L_120b6024;
  /* 120b601d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b601f jmp 0x120b6306 */
  goto L_120b6306;
L_120b6024:;
  /* 120b6024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b6027 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120b602a cmp ecx, dword ptr [0x120df390] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120df390))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6030 jne 0x120b6044 */
  if (!C.zf) goto L_120b6044;
  /* 120b6032 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b6035 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120b6038 cmp eax, dword ptr [0x120df3a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120df3a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b603e je 0x120b620b */
  if (C.zf) goto L_120b620b;
L_120b6044:;
  /* 120b6044 cmp dword ptr [0x120e1308], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1308))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b604b je 0x120b61c5 */
  if (C.zf) goto L_120b61c5;
  /* 120b6051 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b6053 mov cx, word ptr [0x120e13a8] */
  CX = (r16((uint32_t)(0x120e13a8)));
  /* 120b605a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b605c jne 0x120b60b9 */
  if (!C.zf) goto L_120b60b9;
  /* 120b605e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b6060 mov dx, word ptr [0x120e13b6] */
  DX = (r16((uint32_t)(0x120e13b6)));
  /* 120b6067 push edx */
  push32((uint32_t)(EDX));
  /* 120b6068 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b606a mov ax, word ptr [0x120e13b4] */
  AX = (r16((uint32_t)(0x120e13b4)));
  /* 120b6070 push eax */
  push32((uint32_t)(EAX));
  /* 120b6071 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b6073 mov cx, word ptr [0x120e13b2] */
  CX = (r16((uint32_t)(0x120e13b2)));
  /* 120b607a push ecx */
  push32((uint32_t)(ECX));
  /* 120b607b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b607d mov dx, word ptr [0x120e13b0] */
  DX = (r16((uint32_t)(0x120e13b0)));
  /* 120b6084 push edx */
  push32((uint32_t)(EDX));
  /* 120b6085 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b6087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b6089 mov ax, word ptr [0x120e13ac] */
  AX = (r16((uint32_t)(0x120e13ac)));
  /* 120b608f push eax */
  push32((uint32_t)(EAX));
  /* 120b6090 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b6092 mov cx, word ptr [0x120e13ae] */
  CX = (r16((uint32_t)(0x120e13ae)));
  /* 120b6099 push ecx */
  push32((uint32_t)(ECX));
  /* 120b609a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b609c mov dx, word ptr [0x120e13aa] */
  DX = (r16((uint32_t)(0x120e13aa)));
  /* 120b60a3 push edx */
  push32((uint32_t)(EDX));
  /* 120b60a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b60a7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120b60aa push ecx */
  push32((uint32_t)(ECX));
  /* 120b60ab push 1 */
  push32((uint32_t)(0x1u));
  /* 120b60ad push 1 */
  push32((uint32_t)(0x1u));
  /* 120b60af call 0x120b6310 */
  push32(0x120b60b4u); f_120b6310();
  /* 120b60b4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b60b7 jmp 0x120b610a */
  goto L_120b610a;
L_120b60b9:;
  /* 120b60b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b60bb mov dx, word ptr [0x120e13b6] */
  DX = (r16((uint32_t)(0x120e13b6)));
  /* 120b60c2 push edx */
  push32((uint32_t)(EDX));
  /* 120b60c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b60c5 mov ax, word ptr [0x120e13b4] */
  AX = (r16((uint32_t)(0x120e13b4)));
  /* 120b60cb push eax */
  push32((uint32_t)(EAX));
  /* 120b60cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b60ce mov cx, word ptr [0x120e13b2] */
  CX = (r16((uint32_t)(0x120e13b2)));
  /* 120b60d5 push ecx */
  push32((uint32_t)(ECX));
  /* 120b60d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b60d8 mov dx, word ptr [0x120e13b0] */
  DX = (r16((uint32_t)(0x120e13b0)));
  /* 120b60df push edx */
  push32((uint32_t)(EDX));
  /* 120b60e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b60e2 mov ax, word ptr [0x120e13ae] */
  AX = (r16((uint32_t)(0x120e13ae)));
  /* 120b60e8 push eax */
  push32((uint32_t)(EAX));
  /* 120b60e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b60eb push 0 */
  push32((uint32_t)(0x0u));
  /* 120b60ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b60ef mov cx, word ptr [0x120e13aa] */
  CX = (r16((uint32_t)(0x120e13aa)));
  /* 120b60f6 push ecx */
  push32((uint32_t)(ECX));
  /* 120b60f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b60fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120b60fd push eax */
  push32((uint32_t)(EAX));
  /* 120b60fe push 0 */
  push32((uint32_t)(0x0u));
  /* 120b6100 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b6102 call 0x120b6310 */
  push32(0x120b6107u); f_120b6310();
  /* 120b6107 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b610a:;
  /* 120b610a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b610c mov cx, word ptr [0x120e1354] */
  CX = (r16((uint32_t)(0x120e1354)));
  /* 120b6113 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b6115 jne 0x120b6172 */
  if (!C.zf) goto L_120b6172;
  /* 120b6117 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b6119 mov dx, word ptr [0x120e1362] */
  DX = (r16((uint32_t)(0x120e1362)));
  /* 120b6120 push edx */
  push32((uint32_t)(EDX));
  /* 120b6121 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b6123 mov ax, word ptr [0x120e1360] */
  AX = (r16((uint32_t)(0x120e1360)));
  /* 120b6129 push eax */
  push32((uint32_t)(EAX));
  /* 120b612a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b612c mov cx, word ptr [0x120e135e] */
  CX = (r16((uint32_t)(0x120e135e)));
  /* 120b6133 push ecx */
  push32((uint32_t)(ECX));
  /* 120b6134 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b6136 mov dx, word ptr [0x120e135c] */
  DX = (r16((uint32_t)(0x120e135c)));
  /* 120b613d push edx */
  push32((uint32_t)(EDX));
  /* 120b613e push 0 */
  push32((uint32_t)(0x0u));
  /* 120b6140 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b6142 mov ax, word ptr [0x120e1358] */
  AX = (r16((uint32_t)(0x120e1358)));
  /* 120b6148 push eax */
  push32((uint32_t)(EAX));
  /* 120b6149 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b614b mov cx, word ptr [0x120e135a] */
  CX = (r16((uint32_t)(0x120e135a)));
  /* 120b6152 push ecx */
  push32((uint32_t)(ECX));
  /* 120b6153 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b6155 mov dx, word ptr [0x120e1356] */
  DX = (r16((uint32_t)(0x120e1356)));
  /* 120b615c push edx */
  push32((uint32_t)(EDX));
  /* 120b615d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b6160 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120b6163 push ecx */
  push32((uint32_t)(ECX));
  /* 120b6164 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b6166 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b6168 call 0x120b6310 */
  push32(0x120b616du); f_120b6310();
  /* 120b616d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6170 jmp 0x120b61c3 */
  goto L_120b61c3;
L_120b6172:;
  /* 120b6172 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b6174 mov dx, word ptr [0x120e1362] */
  DX = (r16((uint32_t)(0x120e1362)));
  /* 120b617b push edx */
  push32((uint32_t)(EDX));
  /* 120b617c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b617e mov ax, word ptr [0x120e1360] */
  AX = (r16((uint32_t)(0x120e1360)));
  /* 120b6184 push eax */
  push32((uint32_t)(EAX));
  /* 120b6185 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b6187 mov cx, word ptr [0x120e135e] */
  CX = (r16((uint32_t)(0x120e135e)));
  /* 120b618e push ecx */
  push32((uint32_t)(ECX));
  /* 120b618f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b6191 mov dx, word ptr [0x120e135c] */
  DX = (r16((uint32_t)(0x120e135c)));
  /* 120b6198 push edx */
  push32((uint32_t)(EDX));
  /* 120b6199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b619b mov ax, word ptr [0x120e135a] */
  AX = (r16((uint32_t)(0x120e135a)));
  /* 120b61a1 push eax */
  push32((uint32_t)(EAX));
  /* 120b61a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b61a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b61a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b61a8 mov cx, word ptr [0x120e1356] */
  CX = (r16((uint32_t)(0x120e1356)));
  /* 120b61af push ecx */
  push32((uint32_t)(ECX));
  /* 120b61b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b61b3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120b61b6 push eax */
  push32((uint32_t)(EAX));
  /* 120b61b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b61b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b61bb call 0x120b6310 */
  push32(0x120b61c0u); f_120b6310();
  /* 120b61c0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b61c3:;
  /* 120b61c3 jmp 0x120b620b */
  goto L_120b620b;
L_120b61c5:;
  /* 120b61c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b61c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b61c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b61cb push 2 */
  push32((uint32_t)(0x2u));
  /* 120b61cd push 0 */
  push32((uint32_t)(0x0u));
  /* 120b61cf push 0 */
  push32((uint32_t)(0x0u));
  /* 120b61d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b61d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 120b61d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b61d8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 120b61db push edx */
  push32((uint32_t)(EDX));
  /* 120b61dc push 1 */
  push32((uint32_t)(0x1u));
  /* 120b61de push 1 */
  push32((uint32_t)(0x1u));
  /* 120b61e0 call 0x120b6310 */
  push32(0x120b61e5u); f_120b6310();
  /* 120b61e5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b61e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b61ea push 0 */
  push32((uint32_t)(0x0u));
  /* 120b61ec push 0 */
  push32((uint32_t)(0x0u));
  /* 120b61ee push 2 */
  push32((uint32_t)(0x2u));
  /* 120b61f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b61f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b61f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 120b61f6 push 0xa */
  push32((uint32_t)(0xau));
  /* 120b61f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b61fb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120b61fe push ecx */
  push32((uint32_t)(ECX));
  /* 120b61ff push 1 */
  push32((uint32_t)(0x1u));
  /* 120b6201 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b6203 call 0x120b6310 */
  push32(0x120b6208u); f_120b6310();
  /* 120b6208 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b620b:;
  /* 120b620b mov edx, dword ptr [0x120df394] */
  EDX = (r32((uint32_t)(0x120df394)));
  /* 120b6211 cmp edx, dword ptr [0x120df3a4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x120df3a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6217 jge 0x120b6264 */
  if ((C.sf==C.of)) goto L_120b6264;
  /* 120b6219 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b621c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120b621f cmp ecx, dword ptr [0x120df394] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120df394))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6225 jl 0x120b6235 */
  if ((C.sf!=C.of)) goto L_120b6235;
  /* 120b6227 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b622a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120b622d cmp eax, dword ptr [0x120df3a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120df3a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6233 jle 0x120b623c */
  if ((C.zf||C.sf!=C.of)) goto L_120b623c;
L_120b6235:;
  /* 120b6235 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b6237 jmp 0x120b6306 */
  goto L_120b6306;
L_120b623c:;
  /* 120b623c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b623f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 120b6242 cmp edx, dword ptr [0x120df394] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x120df394))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6248 jle 0x120b6262 */
  if ((C.zf||C.sf!=C.of)) goto L_120b6262;
  /* 120b624a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b624d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120b6250 cmp ecx, dword ptr [0x120df3a4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120df3a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6256 jge 0x120b6262 */
  if ((C.sf==C.of)) goto L_120b6262;
  /* 120b6258 mov eax, 1 */
  EAX = (0x1u);
  /* 120b625d jmp 0x120b6306 */
  goto L_120b6306;
L_120b6262:;
  /* 120b6262 jmp 0x120b62a7 */
  goto L_120b62a7;
L_120b6264:;
  /* 120b6264 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b6267 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120b626a cmp eax, dword ptr [0x120df3a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120df3a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6270 jl 0x120b6280 */
  if ((C.sf!=C.of)) goto L_120b6280;
  /* 120b6272 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b6275 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 120b6278 cmp edx, dword ptr [0x120df394] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x120df394))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b627e jle 0x120b6287 */
  if ((C.zf||C.sf!=C.of)) goto L_120b6287;
L_120b6280:;
  /* 120b6280 mov eax, 1 */
  EAX = (0x1u);
  /* 120b6285 jmp 0x120b6306 */
  goto L_120b6306;
L_120b6287:;
  /* 120b6287 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b628a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120b628d cmp ecx, dword ptr [0x120df3a4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120df3a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6293 jle 0x120b62a7 */
  if ((C.zf||C.sf!=C.of)) goto L_120b62a7;
  /* 120b6295 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b6298 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120b629b cmp eax, dword ptr [0x120df394] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120df394))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b62a1 jge 0x120b62a7 */
  if ((C.sf==C.of)) goto L_120b62a7;
  /* 120b62a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b62a5 jmp 0x120b6306 */
  goto L_120b6306;
L_120b62a7:;
  /* 120b62a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b62aa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b62ad imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b62b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b62b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b62b5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b62b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b62ba mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120b62bd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b62c3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b62c5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b62cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b62ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b62d1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 120b62d4 cmp edx, dword ptr [0x120df394] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x120df394))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b62da jne 0x120b62f2 */
  if (!C.zf) goto L_120b62f2;
  /* 120b62dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b62df cmp eax, dword ptr [0x120df398] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120df398))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b62e5 jl 0x120b62ee */
  if ((C.sf!=C.of)) goto L_120b62ee;
  /* 120b62e7 mov eax, 1 */
  EAX = (0x1u);
  /* 120b62ec jmp 0x120b6306 */
  goto L_120b6306;
L_120b62ee:;
  /* 120b62ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b62f0 jmp 0x120b6306 */
  goto L_120b6306;
L_120b62f2:;
  /* 120b62f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b62f5 cmp ecx, dword ptr [0x120df3a8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120df3a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b62fb jge 0x120b6304 */
  if ((C.sf==C.of)) goto L_120b6304;
  /* 120b62fd mov eax, 1 */
  EAX = (0x1u);
  /* 120b6302 jmp 0x120b6306 */
  goto L_120b6306;
L_120b6304:;
  /* 120b6304 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120b6306:;
  /* 120b6306 mov esp, ebp */
  ESP = (EBP);
  /* 120b6308 pop ebp */
  EBP = (pop32());
  /* 120b6309 ret  */
  ESPCHK(0x120b6010u, _esp0);
  ESP += 4; return;
}

/* FUN_10016310 @ 0x120b6310 (504 bytes, 145 insns) */
void f_120b6310(void) {
  FTRACE(0x120b6310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b6310 push ebp */
  push32((uint32_t)(EBP));
  /* 120b6311 mov ebp, esp */
  EBP = (ESP);
  /* 120b6313 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b6316 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b631a jne 0x120b63ec */
  if (!C.zf) goto L_120b63ec;
  /* 120b6320 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b6323 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 120b6326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b6328 jne 0x120b6339 */
  if (!C.zf) goto L_120b6339;
  /* 120b632a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b632d mov edx, dword ptr [ecx*4 + 0x120df3a8] */
  EDX = (r32((uint32_t)(ECX*4 + 0x120df3a8)));
  /* 120b6334 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120b6337 jmp 0x120b6346 */
  goto L_120b6346;
L_120b6339:;
  /* 120b6339 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b633c mov ecx, dword ptr [eax*4 + 0x120df3dc] */
  ECX = (r32((uint32_t)(EAX*4 + 0x120df3dc)));
  /* 120b6343 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_120b6346:;
  /* 120b6346 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b6349 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b634c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120b634f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b6352 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b6355 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b635b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b635e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6360 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b6363 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b6366 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 120b6369 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 120b636d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120b636e mov ecx, 7 */
  ECX = (0x7u);
  /* 120b6373 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120b6375 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b6378 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b637b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b637e jge 0x120b6399 */
  if ((C.sf==C.of)) goto L_120b6399;
  /* 120b6380 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120b6383 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b6386 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b6389 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b638c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b638f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6392 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6394 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120b6397 jmp 0x120b63ad */
  goto L_120b63ad;
L_120b6399:;
  /* 120b6399 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120b639c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b639f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b63a2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b63a5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b63a8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b63aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120b63ad:;
  /* 120b63ad cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b63b1 jne 0x120b63ea */
  if (!C.zf) goto L_120b63ea;
  /* 120b63b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b63b6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 120b63b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b63bb jne 0x120b63cc */
  if (!C.zf) goto L_120b63cc;
  /* 120b63bd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b63c0 mov eax, dword ptr [edx*4 + 0x120df3ac] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120df3ac)));
  /* 120b63c7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120b63ca jmp 0x120b63d9 */
  goto L_120b63d9;
L_120b63cc:;
  /* 120b63cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b63cf mov edx, dword ptr [ecx*4 + 0x120df3e0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x120df3e0)));
  /* 120b63d6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_120b63d9:;
  /* 120b63d9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b63dc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b63df jle 0x120b63ea */
  if ((C.zf||C.sf!=C.of)) goto L_120b63ea;
  /* 120b63e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b63e4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b63e7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_120b63ea:;
  /* 120b63ea jmp 0x120b6421 */
  goto L_120b6421;
L_120b63ec:;
  /* 120b63ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b63ef and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 120b63f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b63f4 jne 0x120b6405 */
  if (!C.zf) goto L_120b6405;
  /* 120b63f6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b63f9 mov ecx, dword ptr [eax*4 + 0x120df3a8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x120df3a8)));
  /* 120b6400 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120b6403 jmp 0x120b6412 */
  goto L_120b6412;
L_120b6405:;
  /* 120b6405 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b6408 mov eax, dword ptr [edx*4 + 0x120df3dc] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120df3dc)));
  /* 120b640f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_120b6412:;
  /* 120b6412 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b6415 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120b6418 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b641b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b641e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_120b6421:;
  /* 120b6421 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6425 jne 0x120b6461 */
  if (!C.zf) goto L_120b6461;
  /* 120b6427 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b642a mov dword ptr [0x120df394], eax */
  w32((uint32_t)(0x120df394), (EAX));
  /* 120b642f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 120b6432 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b6435 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 120b6438 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b643a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b643d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 120b6440 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6442 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b6448 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 120b644b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b644d mov dword ptr [0x120df398], ecx */
  w32((uint32_t)(0x120df398), (ECX));
  /* 120b6453 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b6456 mov dword ptr [0x120df390], edx */
  w32((uint32_t)(0x120df390), (EDX));
  /* 120b645c jmp 0x120b6504 */
  goto L_120b6504;
L_120b6461:;
  /* 120b6461 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b6464 mov dword ptr [0x120df3a4], eax */
  w32((uint32_t)(0x120df3a4), (EAX));
  /* 120b6469 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 120b646c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b646f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 120b6472 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6474 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b6477 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 120b647a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b647c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b6482 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 120b6485 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6487 mov dword ptr [0x120df3a8], ecx */
  w32((uint32_t)(0x120df3a8), (ECX));
  /* 120b648d mov edx, dword ptr [0x120df300] */
  EDX = (r32((uint32_t)(0x120df300)));
  /* 120b6493 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b6499 mov eax, dword ptr [0x120df3a8] */
  EAX = (r32((uint32_t)(0x120df3a8)));
  /* 120b649e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b64a0 mov dword ptr [0x120df3a8], eax */
  w32((uint32_t)(0x120df3a8), (EAX));
  /* 120b64a5 cmp dword ptr [0x120df3a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120df3a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b64ac jge 0x120b64d1 */
  if ((C.sf==C.of)) goto L_120b64d1;
  /* 120b64ae mov ecx, dword ptr [0x120df3a8] */
  ECX = (r32((uint32_t)(0x120df3a8)));
  /* 120b64b4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b64ba mov dword ptr [0x120df3a8], ecx */
  w32((uint32_t)(0x120df3a8), (ECX));
  /* 120b64c0 mov edx, dword ptr [0x120df3a4] */
  EDX = (r32((uint32_t)(0x120df3a4)));
  /* 120b64c6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b64c9 mov dword ptr [0x120df3a4], edx */
  w32((uint32_t)(0x120df3a4), (EDX));
  /* 120b64cf jmp 0x120b64fb */
  goto L_120b64fb;
L_120b64d1:;
  /* 120b64d1 cmp dword ptr [0x120df3a8], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x120df3a8))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b64db jl 0x120b64fb */
  if ((C.sf!=C.of)) goto L_120b64fb;
  /* 120b64dd mov eax, dword ptr [0x120df3a8] */
  EAX = (r32((uint32_t)(0x120df3a8)));
  /* 120b64e2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b64e7 mov dword ptr [0x120df3a8], eax */
  w32((uint32_t)(0x120df3a8), (EAX));
  /* 120b64ec mov ecx, dword ptr [0x120df3a4] */
  ECX = (r32((uint32_t)(0x120df3a4)));
  /* 120b64f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b64f5 mov dword ptr [0x120df3a4], ecx */
  w32((uint32_t)(0x120df3a4), (ECX));
L_120b64fb:;
  /* 120b64fb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b64fe mov dword ptr [0x120df3a0], edx */
  w32((uint32_t)(0x120df3a0), (EDX));
L_120b6504:;
  /* 120b6504 mov esp, ebp */
  ESP = (EBP);
  /* 120b6506 pop ebp */
  EBP = (pop32());
  /* 120b6507 ret  */
  ESPCHK(0x120b6310u, _esp0);
  ESP += 4; return;
}

/* FUN_10016510 @ 0x120b6510 (836 bytes, 238 insns) */
void f_120b6510(void) {
  FTRACE(0x120b6510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b6510 push ebp */
  push32((uint32_t)(EBP));
  /* 120b6511 mov ebp, esp */
  EBP = (ESP);
  /* 120b6513 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b6516 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120b6518 call 0x120acb80 */
  push32(0x120b651du); f_120acb80();
  /* 120b651d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6520 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b6523 push eax */
  push32((uint32_t)(EAX));
  /* 120b6524 call 0x120b6860 */
  push32(0x120b6529u); f_120b6860();
  /* 120b6529 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b652c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120b652f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b6532 cmp ecx, dword ptr [0x120e27f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120e27f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6538 jne 0x120b654b */
  if (!C.zf) goto L_120b654b;
  /* 120b653a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120b653c call 0x120acc20 */
  push32(0x120b6541u); f_120acc20();
  /* 120b6541 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6544 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b6546 jmp 0x120b6850 */
  goto L_120b6850;
L_120b654b:;
  /* 120b654b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b654f jne 0x120b656c */
  if (!C.zf) goto L_120b656c;
  /* 120b6551 call 0x120b6940 */
  push32(0x120b6556u); f_120b6940();
  /* 120b6556 call 0x120b69c0 */
  push32(0x120b655bu); f_120b69c0();
  /* 120b655b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120b655d call 0x120acc20 */
  push32(0x120b6562u); f_120acc20();
  /* 120b6562 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6565 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b6567 jmp 0x120b6850 */
  goto L_120b6850;
L_120b656c:;
  /* 120b656c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b6573 jmp 0x120b657e */
  goto L_120b657e;
L_120b6575:;
  /* 120b6575 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b6578 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b657b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b657e:;
  /* 120b657e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6582 jae 0x120b66cf */
  if (!C.cf) goto L_120b66cf;
  /* 120b6588 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b658b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b658e mov ecx, dword ptr [eax + 0x120df420] */
  ECX = (r32((uint32_t)(EAX + 0x120df420)));
  /* 120b6594 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6597 jne 0x120b66ca */
  if (!C.zf) goto L_120b66ca;
  /* 120b659d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 120b65a4 jmp 0x120b65af */
  goto L_120b65af;
L_120b65a6:;
  /* 120b65a6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b65a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b65ac mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_120b65af:;
  /* 120b65af cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b65b6 jae 0x120b65c4 */
  if (!C.cf) goto L_120b65c4;
  /* 120b65b8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b65bb mov byte ptr [eax + 0x120e2980], 0 */
  w8((uint32_t)(EAX + 0x120e2980), (0x0u));
  /* 120b65c2 jmp 0x120b65a6 */
  goto L_120b65a6;
L_120b65c4:;
  /* 120b65c4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120b65cb jmp 0x120b65d6 */
  goto L_120b65d6;
L_120b65cd:;
  /* 120b65cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b65d0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b65d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_120b65d6:;
  /* 120b65d6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b65da jae 0x120b6657 */
  if (!C.cf) goto L_120b6657;
  /* 120b65dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b65df imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b65e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b65e5 lea ecx, [edx + eax*8 + 0x120df430] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x120df430));
  /* 120b65ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120b65ef jmp 0x120b65fa */
  goto L_120b65fa;
L_120b65f1:;
  /* 120b65f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b65f4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b65f7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_120b65fa:;
  /* 120b65fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b65fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b65ff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120b6601 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b6603 je 0x120b6652 */
  if (C.zf) goto L_120b6652;
  /* 120b6605 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b6608 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b660a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 120b660d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b660f je 0x120b6652 */
  if (C.zf) goto L_120b6652;
  /* 120b6611 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b6614 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b6616 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120b6618 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 120b661b jmp 0x120b6626 */
  goto L_120b6626;
L_120b661d:;
  /* 120b661d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b6620 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6623 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_120b6626:;
  /* 120b6626 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b6629 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b662b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 120b662e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6631 ja 0x120b6650 */
  if ((!C.cf&&!C.zf)) goto L_120b6650;
  /* 120b6633 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b6636 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b6639 mov dl, byte ptr [eax + 0x120e2981] */
  DL = (r8((uint32_t)(EAX + 0x120e2981)));
  /* 120b663f or dl, byte ptr [ecx + 0x120df418] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x120df418))); DL = (_r); fl_logic(_r,8); }
  /* 120b6645 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b6648 mov byte ptr [eax + 0x120e2981], dl */
  w8((uint32_t)(EAX + 0x120e2981), (DL));
  /* 120b664e jmp 0x120b661d */
  goto L_120b661d;
L_120b6650:;
  /* 120b6650 jmp 0x120b65f1 */
  goto L_120b65f1;
L_120b6652:;
  /* 120b6652 jmp 0x120b65cd */
  goto L_120b65cd;
L_120b6657:;
  /* 120b6657 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b665a mov dword ptr [0x120e27f8], ecx */
  w32((uint32_t)(0x120e27f8), (ECX));
  /* 120b6660 mov dword ptr [0x120e287c], 1 */
  w32((uint32_t)(0x120e287c), (0x1u));
  /* 120b666a mov edx, dword ptr [0x120e27f8] */
  EDX = (r32((uint32_t)(0x120e27f8)));
  /* 120b6670 push edx */
  push32((uint32_t)(EDX));
  /* 120b6671 call 0x120b68c0 */
  push32(0x120b6676u); f_120b68c0();
  /* 120b6676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6679 mov dword ptr [0x120e2a84], eax */
  w32((uint32_t)(0x120e2a84), (EAX));
  /* 120b667e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120b6685 jmp 0x120b6690 */
  goto L_120b6690;
L_120b6687:;
  /* 120b6687 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b668a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b668d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_120b6690:;
  /* 120b6690 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6694 jae 0x120b66b4 */
  if (!C.cf) goto L_120b66b4;
  /* 120b6696 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b6699 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b669c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b669f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b66a2 mov cx, word ptr [ecx + eax*2 + 0x120df424] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x120df424)));
  /* 120b66aa mov word ptr [edx*2 + 0x120e2870], cx */
  w16((uint32_t)(EDX*2 + 0x120e2870), (CX));
  /* 120b66b2 jmp 0x120b6687 */
  goto L_120b6687;
L_120b66b4:;
  /* 120b66b4 call 0x120b69c0 */
  push32(0x120b66b9u); f_120b69c0();
  /* 120b66b9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120b66bb call 0x120acc20 */
  push32(0x120b66c0u); f_120acc20();
  /* 120b66c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b66c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b66c5 jmp 0x120b6850 */
  goto L_120b6850;
L_120b66ca:;
  /* 120b66ca jmp 0x120b6575 */
  goto L_120b6575;
L_120b66cf:;
  /* 120b66cf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 120b66d2 push edx */
  push32((uint32_t)(EDX));
  /* 120b66d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b66d6 push eax */
  push32((uint32_t)(EAX));
  /* 120b66d7 call dword ptr [0x120e338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e338c))), 0x120b66ddu);
  /* 120b66dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b66e0 jne 0x120b6822 */
  if (!C.zf) goto L_120b6822;
  /* 120b66e6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 120b66ed jmp 0x120b66f8 */
  goto L_120b66f8;
L_120b66ef:;
  /* 120b66ef mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b66f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b66f5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_120b66f8:;
  /* 120b66f8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b66ff jae 0x120b670d */
  if (!C.cf) goto L_120b670d;
  /* 120b6701 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b6704 mov byte ptr [edx + 0x120e2980], 0 */
  w8((uint32_t)(EDX + 0x120e2980), (0x0u));
  /* 120b670b jmp 0x120b66ef */
  goto L_120b66ef;
L_120b670d:;
  /* 120b670d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b6710 mov dword ptr [0x120e27f8], eax */
  w32((uint32_t)(0x120e27f8), (EAX));
  /* 120b6715 mov dword ptr [0x120e2a84], 0 */
  w32((uint32_t)(0x120e2a84), (0x0u));
  /* 120b671f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6723 jbe 0x120b67de */
  if ((C.cf||C.zf)) goto L_120b67de;
  /* 120b6729 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 120b672c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 120b672f jmp 0x120b673a */
  goto L_120b673a;
L_120b6731:;
  /* 120b6731 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b6734 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6737 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_120b673a:;
  /* 120b673a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b673d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b673f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120b6741 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b6743 je 0x120b678c */
  if (C.zf) goto L_120b678c;
  /* 120b6745 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b6748 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b674a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 120b674d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b674f je 0x120b678c */
  if (C.zf) goto L_120b678c;
  /* 120b6751 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b6754 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b6756 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120b6758 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 120b675b jmp 0x120b6766 */
  goto L_120b6766;
L_120b675d:;
  /* 120b675d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b6760 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6763 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_120b6766:;
  /* 120b6766 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b6769 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b676b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 120b676e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6771 ja 0x120b678a */
  if ((!C.cf&&!C.zf)) goto L_120b678a;
  /* 120b6773 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b6776 mov cl, byte ptr [eax + 0x120e2981] */
  CL = (r8((uint32_t)(EAX + 0x120e2981)));
  /* 120b677c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 120b677f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b6782 mov byte ptr [edx + 0x120e2981], cl */
  w8((uint32_t)(EDX + 0x120e2981), (CL));
  /* 120b6788 jmp 0x120b675d */
  goto L_120b675d;
L_120b678a:;
  /* 120b678a jmp 0x120b6731 */
  goto L_120b6731;
L_120b678c:;
  /* 120b678c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 120b6793 jmp 0x120b679e */
  goto L_120b679e;
L_120b6795:;
  /* 120b6795 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b6798 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b679b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_120b679e:;
  /* 120b679e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b67a5 jae 0x120b67be */
  if (!C.cf) goto L_120b67be;
  /* 120b67a7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b67aa mov dl, byte ptr [ecx + 0x120e2981] */
  DL = (r8((uint32_t)(ECX + 0x120e2981)));
  /* 120b67b0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 120b67b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b67b6 mov byte ptr [eax + 0x120e2981], dl */
  w8((uint32_t)(EAX + 0x120e2981), (DL));
  /* 120b67bc jmp 0x120b6795 */
  goto L_120b6795;
L_120b67be:;
  /* 120b67be mov ecx, dword ptr [0x120e27f8] */
  ECX = (r32((uint32_t)(0x120e27f8)));
  /* 120b67c4 push ecx */
  push32((uint32_t)(ECX));
  /* 120b67c5 call 0x120b68c0 */
  push32(0x120b67cau); f_120b68c0();
  /* 120b67ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b67cd mov dword ptr [0x120e2a84], eax */
  w32((uint32_t)(0x120e2a84), (EAX));
  /* 120b67d2 mov dword ptr [0x120e287c], 1 */
  w32((uint32_t)(0x120e287c), (0x1u));
  /* 120b67dc jmp 0x120b67e8 */
  goto L_120b67e8;
L_120b67de:;
  /* 120b67de mov dword ptr [0x120e287c], 0 */
  w32((uint32_t)(0x120e287c), (0x0u));
L_120b67e8:;
  /* 120b67e8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120b67ef jmp 0x120b67fa */
  goto L_120b67fa;
L_120b67f1:;
  /* 120b67f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b67f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b67f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_120b67fa:;
  /* 120b67fa cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b67fe jae 0x120b680f */
  if (!C.cf) goto L_120b680f;
  /* 120b6800 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b6803 mov word ptr [eax*2 + 0x120e2870], 0 */
  w16((uint32_t)(EAX*2 + 0x120e2870), (0x0u));
  /* 120b680d jmp 0x120b67f1 */
  goto L_120b67f1;
L_120b680f:;
  /* 120b680f call 0x120b69c0 */
  push32(0x120b6814u); f_120b69c0();
  /* 120b6814 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120b6816 call 0x120acc20 */
  push32(0x120b681bu); f_120acc20();
  /* 120b681b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b681e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b6820 jmp 0x120b6850 */
  goto L_120b6850;
L_120b6822:;
  /* 120b6822 cmp dword ptr [0x120e13c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e13c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6829 je 0x120b6843 */
  if (C.zf) goto L_120b6843;
  /* 120b682b call 0x120b6940 */
  push32(0x120b6830u); f_120b6940();
  /* 120b6830 call 0x120b69c0 */
  push32(0x120b6835u); f_120b69c0();
  /* 120b6835 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120b6837 call 0x120acc20 */
  push32(0x120b683cu); f_120acc20();
  /* 120b683c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b683f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b6841 jmp 0x120b6850 */
  goto L_120b6850;
L_120b6843:;
  /* 120b6843 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120b6845 call 0x120acc20 */
  push32(0x120b684au); f_120acc20();
  /* 120b684a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b684d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_120b6850:;
  /* 120b6850 mov esp, ebp */
  ESP = (EBP);
  /* 120b6852 pop ebp */
  EBP = (pop32());
  /* 120b6853 ret  */
  ESPCHK(0x120b6510u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x120b6860 (89 bytes, 21 insns) */
void f_120b6860(void) {
  FTRACE(0x120b6860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b6860 push ebp */
  push32((uint32_t)(EBP));
  /* 120b6861 mov ebp, esp */
  EBP = (ESP);
  /* 120b6863 mov dword ptr [0x120e13c4], 0 */
  w32((uint32_t)(0x120e13c4), (0x0u));
  /* 120b686d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6871 jne 0x120b6885 */
  if (!C.zf) goto L_120b6885;
  /* 120b6873 mov dword ptr [0x120e13c4], 1 */
  w32((uint32_t)(0x120e13c4), (0x1u));
  /* 120b687d call dword ptr [0x120e3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3384))), 0x120b6883u);
  /* 120b6883 jmp 0x120b68b7 */
  goto L_120b68b7;
L_120b6885:;
  /* 120b6885 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6889 jne 0x120b689d */
  if (!C.zf) goto L_120b689d;
  /* 120b688b mov dword ptr [0x120e13c4], 1 */
  w32((uint32_t)(0x120e13c4), (0x1u));
  /* 120b6895 call dword ptr [0x120e3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3388))), 0x120b689bu);
  /* 120b689b jmp 0x120b68b7 */
  goto L_120b68b7;
L_120b689d:;
  /* 120b689d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b68a1 jne 0x120b68b4 */
  if (!C.zf) goto L_120b68b4;
  /* 120b68a3 mov dword ptr [0x120e13c4], 1 */
  w32((uint32_t)(0x120e13c4), (0x1u));
  /* 120b68ad mov eax, dword ptr [0x120e13f0] */
  EAX = (r32((uint32_t)(0x120e13f0)));
  /* 120b68b2 jmp 0x120b68b7 */
  goto L_120b68b7;
L_120b68b4:;
  /* 120b68b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_120b68b7:;
  /* 120b68b7 pop ebp */
  EBP = (pop32());
  /* 120b68b8 ret  */
  ESPCHK(0x120b6860u, _esp0);
  ESP += 4; return;
}

/* FUN_100168c0 @ 0x120b68c0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_120b68c0(void) {
  FTRACE(0x120b68c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b68c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b68c1 mov ebp, esp */
  EBP = (ESP);
  /* 120b68c3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b68c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b68c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b68ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b68cd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b68d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b68d6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b68da ja 0x120b690a */
  if ((!C.cf&&!C.zf)) goto L_120b690a;
  /* 120b68dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b68df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b68e1 mov dl, byte ptr [eax + 0x120b6924] */
  DL = (r8((uint32_t)(EAX + 0x120b6924)));
  /* 120b68e7 jmp dword ptr [edx*4 + 0x120b6910] */
  switch (EDX) {
    case 0: goto L_120b68ee;
    case 1: goto L_120b68f5;
    case 2: goto L_120b68fc;
    case 3: goto L_120b6903;
    case 4: goto L_120b690a;
    default: x86_unimpl("switch@0x120b68e7 out of table"); return;
  }
L_120b68ee:;
  /* 120b68ee mov eax, 0x411 */
  EAX = (0x411u);
  /* 120b68f3 jmp 0x120b690c */
  goto L_120b690c;
L_120b68f5:;
  /* 120b68f5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 120b68fa jmp 0x120b690c */
  goto L_120b690c;
L_120b68fc:;
  /* 120b68fc mov eax, 0x412 */
  EAX = (0x412u);
  /* 120b6901 jmp 0x120b690c */
  goto L_120b690c;
L_120b6903:;
  /* 120b6903 mov eax, 0x404 */
  EAX = (0x404u);
  /* 120b6908 jmp 0x120b690c */
  goto L_120b690c;
L_120b690a:;
  /* 120b690a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120b690c:;
  /* 120b690c mov esp, ebp */
  ESP = (EBP);
  /* 120b690e pop ebp */
  EBP = (pop32());
  /* 120b690f ret  */
  ESPCHK(0x120b68c0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x120b6940 (116 bytes, 29 insns) */
void f_120b6940(void) {
  FTRACE(0x120b6940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b6940 push ebp */
  push32((uint32_t)(EBP));
  /* 120b6941 mov ebp, esp */
  EBP = (ESP);
  /* 120b6943 push ecx */
  push32((uint32_t)(ECX));
  /* 120b6944 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b694b jmp 0x120b6956 */
  goto L_120b6956;
L_120b694d:;
  /* 120b694d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b6950 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6953 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b6956:;
  /* 120b6956 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b695d jge 0x120b696b */
  if ((C.sf==C.of)) goto L_120b696b;
  /* 120b695f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b6962 mov byte ptr [ecx + 0x120e2980], 0 */
  w8((uint32_t)(ECX + 0x120e2980), (0x0u));
  /* 120b6969 jmp 0x120b694d */
  goto L_120b694d;
L_120b696b:;
  /* 120b696b mov dword ptr [0x120e27f8], 0 */
  w32((uint32_t)(0x120e27f8), (0x0u));
  /* 120b6975 mov dword ptr [0x120e287c], 0 */
  w32((uint32_t)(0x120e287c), (0x0u));
  /* 120b697f mov dword ptr [0x120e2a84], 0 */
  w32((uint32_t)(0x120e2a84), (0x0u));
  /* 120b6989 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b6990 jmp 0x120b699b */
  goto L_120b699b;
L_120b6992:;
  /* 120b6992 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b6995 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6998 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b699b:;
  /* 120b699b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b699f jge 0x120b69b0 */
  if ((C.sf==C.of)) goto L_120b69b0;
  /* 120b69a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b69a4 mov word ptr [eax*2 + 0x120e2870], 0 */
  w16((uint32_t)(EAX*2 + 0x120e2870), (0x0u));
  /* 120b69ae jmp 0x120b6992 */
  goto L_120b6992;
L_120b69b0:;
  /* 120b69b0 mov esp, ebp */
  ESP = (EBP);
  /* 120b69b2 pop ebp */
  EBP = (pop32());
  /* 120b69b3 ret  */
  ESPCHK(0x120b6940u, _esp0);
  ESP += 4; return;
}

/* FUN_100169c0 @ 0x120b69c0 (770 bytes, 175 insns) */
void f_120b69c0(void) {
  FTRACE(0x120b69c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b69c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b69c1 mov ebp, esp */
  EBP = (ESP);
  /* 120b69c3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b69c9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 120b69cf push eax */
  push32((uint32_t)(EAX));
  /* 120b69d0 mov ecx, dword ptr [0x120e27f8] */
  ECX = (r32((uint32_t)(0x120e27f8)));
  /* 120b69d6 push ecx */
  push32((uint32_t)(ECX));
  /* 120b69d7 call dword ptr [0x120e338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e338c))), 0x120b69ddu);
  /* 120b69dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b69e0 jne 0x120b6bf9 */
  if (!C.zf) goto L_120b6bf9;
  /* 120b69e6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 120b69f0 jmp 0x120b6a01 */
  goto L_120b6a01;
L_120b69f2:;
  /* 120b69f2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b69f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b69fb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_120b6a01:;
  /* 120b6a01 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6a0b jae 0x120b6a22 */
  if (!C.cf) goto L_120b6a22;
  /* 120b6a0d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6a13 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 120b6a19 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 120b6a20 jmp 0x120b69f2 */
  goto L_120b69f2;
L_120b6a22:;
  /* 120b6a22 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 120b6a29 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 120b6a2f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b6a32 jmp 0x120b6a3d */
  goto L_120b6a3d;
L_120b6a34:;
  /* 120b6a34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b6a37 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6a3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b6a3d:;
  /* 120b6a3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b6a40 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b6a42 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120b6a44 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b6a46 je 0x120b6a88 */
  if (C.zf) goto L_120b6a88;
  /* 120b6a48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b6a4b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b6a4d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120b6a4f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 120b6a55 jmp 0x120b6a66 */
  goto L_120b6a66;
L_120b6a57:;
  /* 120b6a57 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6a5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6a60 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_120b6a66:;
  /* 120b6a66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b6a69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b6a6b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 120b6a6e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6a74 ja 0x120b6a86 */
  if ((!C.cf&&!C.zf)) goto L_120b6a86;
  /* 120b6a76 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6a7c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 120b6a84 jmp 0x120b6a57 */
  goto L_120b6a57;
L_120b6a86:;
  /* 120b6a86 jmp 0x120b6a34 */
  goto L_120b6a34;
L_120b6a88:;
  /* 120b6a88 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b6a8a mov eax, dword ptr [0x120e2a84] */
  EAX = (r32((uint32_t)(0x120e2a84)));
  /* 120b6a8f push eax */
  push32((uint32_t)(EAX));
  /* 120b6a90 mov ecx, dword ptr [0x120e27f8] */
  ECX = (r32((uint32_t)(0x120e27f8)));
  /* 120b6a96 push ecx */
  push32((uint32_t)(ECX));
  /* 120b6a97 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 120b6a9d push edx */
  push32((uint32_t)(EDX));
  /* 120b6a9e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 120b6aa3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 120b6aa9 push eax */
  push32((uint32_t)(EAX));
  /* 120b6aaa push 1 */
  push32((uint32_t)(0x1u));
  /* 120b6aac call 0x120b9090 */
  push32(0x120b6ab1u); f_120b9090();
  /* 120b6ab1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6ab4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b6ab6 mov ecx, dword ptr [0x120e27f8] */
  ECX = (r32((uint32_t)(0x120e27f8)));
  /* 120b6abc push ecx */
  push32((uint32_t)(ECX));
  /* 120b6abd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 120b6ac2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 120b6ac8 push edx */
  push32((uint32_t)(EDX));
  /* 120b6ac9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 120b6ace lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 120b6ad4 push eax */
  push32((uint32_t)(EAX));
  /* 120b6ad5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 120b6ada mov ecx, dword ptr [0x120e2a84] */
  ECX = (r32((uint32_t)(0x120e2a84)));
  /* 120b6ae0 push ecx */
  push32((uint32_t)(ECX));
  /* 120b6ae1 call 0x120b9ca0 */
  push32(0x120b6ae6u); f_120b9ca0();
  /* 120b6ae6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6ae9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b6aeb mov edx, dword ptr [0x120e27f8] */
  EDX = (r32((uint32_t)(0x120e27f8)));
  /* 120b6af1 push edx */
  push32((uint32_t)(EDX));
  /* 120b6af2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 120b6af7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 120b6afd push eax */
  push32((uint32_t)(EAX));
  /* 120b6afe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 120b6b03 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 120b6b09 push ecx */
  push32((uint32_t)(ECX));
  /* 120b6b0a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 120b6b0f mov edx, dword ptr [0x120e2a84] */
  EDX = (r32((uint32_t)(0x120e2a84)));
  /* 120b6b15 push edx */
  push32((uint32_t)(EDX));
  /* 120b6b16 call 0x120b9ca0 */
  push32(0x120b6b1bu); f_120b9ca0();
  /* 120b6b1b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6b1e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 120b6b28 jmp 0x120b6b39 */
  goto L_120b6b39;
L_120b6b2a:;
  /* 120b6b2a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6b30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6b33 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_120b6b39:;
  /* 120b6b39 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6b43 jae 0x120b6bf4 */
  if (!C.cf) goto L_120b6bf4;
  /* 120b6b49 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6b4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b6b51 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 120b6b59 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120b6b5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b6b5e je 0x120b6b96 */
  if (C.zf) goto L_120b6b96;
  /* 120b6b60 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6b66 mov cl, byte ptr [eax + 0x120e2981] */
  CL = (r8((uint32_t)(EAX + 0x120e2981)));
  /* 120b6b6c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 120b6b6f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6b75 mov byte ptr [edx + 0x120e2981], cl */
  w8((uint32_t)(EDX + 0x120e2981), (CL));
  /* 120b6b7b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6b81 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6b87 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 120b6b8e mov byte ptr [eax + 0x120e2880], dl */
  w8((uint32_t)(EAX + 0x120e2880), (DL));
  /* 120b6b94 jmp 0x120b6bef */
  goto L_120b6bef;
L_120b6b96:;
  /* 120b6b96 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6b9c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b6b9e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 120b6ba6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 120b6ba9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b6bab je 0x120b6be2 */
  if (C.zf) goto L_120b6be2;
  /* 120b6bad mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6bb3 mov al, byte ptr [edx + 0x120e2981] */
  AL = (r8((uint32_t)(EDX + 0x120e2981)));
  /* 120b6bb9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 120b6bbb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6bc1 mov byte ptr [ecx + 0x120e2981], al */
  w8((uint32_t)(ECX + 0x120e2981), (AL));
  /* 120b6bc7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6bcd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6bd3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 120b6bda mov byte ptr [edx + 0x120e2880], cl */
  w8((uint32_t)(EDX + 0x120e2880), (CL));
  /* 120b6be0 jmp 0x120b6bef */
  goto L_120b6bef;
L_120b6be2:;
  /* 120b6be2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6be8 mov byte ptr [edx + 0x120e2880], 0 */
  w8((uint32_t)(EDX + 0x120e2880), (0x0u));
L_120b6bef:;
  /* 120b6bef jmp 0x120b6b2a */
  goto L_120b6b2a;
L_120b6bf4:;
  /* 120b6bf4 jmp 0x120b6cbe */
  goto L_120b6cbe;
L_120b6bf9:;
  /* 120b6bf9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 120b6c03 jmp 0x120b6c14 */
  goto L_120b6c14;
L_120b6c05:;
  /* 120b6c05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6c0b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6c0e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_120b6c14:;
  /* 120b6c14 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6c1e jae 0x120b6cbe */
  if (!C.cf) goto L_120b6cbe;
  /* 120b6c24 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6c2b jb 0x120b6c68 */
  if (C.cf) goto L_120b6c68;
  /* 120b6c2d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6c34 ja 0x120b6c68 */
  if ((!C.cf&&!C.zf)) goto L_120b6c68;
  /* 120b6c36 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6c3c mov dl, byte ptr [ecx + 0x120e2981] */
  DL = (r8((uint32_t)(ECX + 0x120e2981)));
  /* 120b6c42 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 120b6c45 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6c4b mov byte ptr [eax + 0x120e2981], dl */
  w8((uint32_t)(EAX + 0x120e2981), (DL));
  /* 120b6c51 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6c57 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6c5a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6c60 mov byte ptr [edx + 0x120e2880], cl */
  w8((uint32_t)(EDX + 0x120e2880), (CL));
  /* 120b6c66 jmp 0x120b6cb9 */
  goto L_120b6cb9;
L_120b6c68:;
  /* 120b6c68 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6c6f jb 0x120b6cac */
  if (C.cf) goto L_120b6cac;
  /* 120b6c71 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6c78 ja 0x120b6cac */
  if ((!C.cf&&!C.zf)) goto L_120b6cac;
  /* 120b6c7a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6c80 mov cl, byte ptr [eax + 0x120e2981] */
  CL = (r8((uint32_t)(EAX + 0x120e2981)));
  /* 120b6c86 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 120b6c89 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6c8f mov byte ptr [edx + 0x120e2981], cl */
  w8((uint32_t)(EDX + 0x120e2981), (CL));
  /* 120b6c95 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6c9b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b6c9e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6ca4 mov byte ptr [ecx + 0x120e2880], al */
  w8((uint32_t)(ECX + 0x120e2880), (AL));
  /* 120b6caa jmp 0x120b6cb9 */
  goto L_120b6cb9;
L_120b6cac:;
  /* 120b6cac mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 120b6cb2 mov byte ptr [edx + 0x120e2880], 0 */
  w8((uint32_t)(EDX + 0x120e2880), (0x0u));
L_120b6cb9:;
  /* 120b6cb9 jmp 0x120b6c05 */
  goto L_120b6c05;
L_120b6cbe:;
  /* 120b6cbe mov esp, ebp */
  ESP = (EBP);
  /* 120b6cc0 pop ebp */
  EBP = (pop32());
  /* 120b6cc1 ret  */
  ESPCHK(0x120b69c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016cd0 @ 0x120b6cd0 (23 bytes, 9 insns) */
void f_120b6cd0(void) {
  FTRACE(0x120b6cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b6cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b6cd1 mov ebp, esp */
  EBP = (ESP);
  /* 120b6cd3 cmp dword ptr [0x120e287c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e287c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6cda je 0x120b6ce3 */
  if (C.zf) goto L_120b6ce3;
  /* 120b6cdc mov eax, dword ptr [0x120e27f8] */
  EAX = (r32((uint32_t)(0x120e27f8)));
  /* 120b6ce1 jmp 0x120b6ce5 */
  goto L_120b6ce5;
L_120b6ce3:;
  /* 120b6ce3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120b6ce5:;
  /* 120b6ce5 pop ebp */
  EBP = (pop32());
  /* 120b6ce6 ret  */
  ESPCHK(0x120b6cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016cf0 @ 0x120b6cf0 (34 bytes, 10 insns) */
void f_120b6cf0(void) {
  FTRACE(0x120b6cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b6cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b6cf1 mov ebp, esp */
  EBP = (ESP);
  /* 120b6cf3 cmp dword ptr [0x120e2c10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e2c10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6cfa jne 0x120b6d10 */
  if (!C.zf) goto L_120b6d10;
  /* 120b6cfc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 120b6cfe call 0x120b6510 */
  push32(0x120b6d03u); f_120b6510();
  /* 120b6d03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6d06 mov dword ptr [0x120e2c10], 1 */
  w32((uint32_t)(0x120e2c10), (0x1u));
L_120b6d10:;
  /* 120b6d10 pop ebp */
  EBP = (pop32());
  /* 120b6d11 ret  */
  ESPCHK(0x120b6cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016d20 @ 0x120b6d20 (664 bytes, 265 insns) [15 switch table(s)] */
void f_120b6d20(void) {
  FTRACE(0x120b6d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b6d20 push ebp */
  push32((uint32_t)(EBP));
  /* 120b6d21 mov ebp, esp */
  EBP = (ESP);
  /* 120b6d23 push edi */
  push32((uint32_t)(EDI));
  /* 120b6d24 push esi */
  push32((uint32_t)(ESI));
  /* 120b6d25 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120b6d28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b6d2b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 120b6d2e mov eax, ecx */
  EAX = (ECX);
  /* 120b6d30 mov edx, ecx */
  EDX = (ECX);
  /* 120b6d32 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6d34 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6d36 jbe 0x120b6d40 */
  if ((C.cf||C.zf)) goto L_120b6d40;
  /* 120b6d38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6d3a jb 0x120b6eb8 */
  if (C.cf) goto L_120b6eb8;
L_120b6d40:;
  /* 120b6d40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 120b6d46 jne 0x120b6d5c */
  if (!C.zf) goto L_120b6d5c;
  /* 120b6d48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b6d4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 120b6d4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6d51 jb 0x120b6d7c */
  if (C.cf) goto L_120b6d7c;
  /* 120b6d53 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120b6d55 jmp dword ptr [edx*4 + 0x120b6e68] */
  switch (EDX) {
    case 0: goto L_120b6e78;
    case 1: goto L_120b6e80;
    case 2: goto L_120b6e8c;
    case 3: goto L_120b6ea0;
    default: x86_unimpl("switch@0x120b6d55 out of table"); return;
  }
L_120b6d5c:;
  /* 120b6d5c mov eax, edi */
  EAX = (EDI);
  /* 120b6d5e mov edx, 3 */
  EDX = (0x3u);
  /* 120b6d63 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b6d66 jb 0x120b6d74 */
  if (C.cf) goto L_120b6d74;
  /* 120b6d68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 120b6d6b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6d6d jmp dword ptr [eax*4 + 0x120b6d80] */
  switch (EAX) {
    case 1: goto L_120b6d90;
    case 2: goto L_120b6dbc;
    case 3: goto L_120b6de0;
    default: x86_unimpl("switch@0x120b6d6d out of table"); return;
  }
L_120b6d74:;
  /* 120b6d74 jmp dword ptr [ecx*4 + 0x120b6e78] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x120b6e78)))); return;
  /* 120b6d7b nop  */
  /* nop */
L_120b6d7c:;
  /* 120b6d7c jmp dword ptr [ecx*4 + 0x120b6dfc] */
  switch (ECX) {
    case 0: goto L_120b6e5f;
    case 1: goto L_120b6e4c;
    case 2: goto L_120b6e44;
    case 3: goto L_120b6e3c;
    case 4: goto L_120b6e34;
    case 5: goto L_120b6e2c;
    case 6: goto L_120b6e24;
    case 7: goto L_120b6e1c;
    default: x86_unimpl("switch@0x120b6d7c out of table"); return;
  }
  /* 120b6d83 nop  */
  /* nop */
L_120b6d90:;
  /* 120b6d90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120b6d92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120b6d94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120b6d96 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120b6d99 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120b6d9c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120b6d9f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b6da2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120b6da5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6da8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6dab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6dae jb 0x120b6d7c */
  if (C.cf) goto L_120b6d7c;
  /* 120b6db0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120b6db2 jmp dword ptr [edx*4 + 0x120b6e68] */
  switch (EDX) {
    case 0: goto L_120b6e78;
    case 1: goto L_120b6e80;
    case 2: goto L_120b6e8c;
    case 3: goto L_120b6ea0;
    default: x86_unimpl("switch@0x120b6db2 out of table"); return;
  }
  /* 120b6db9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120b6dbc:;
  /* 120b6dbc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120b6dbe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120b6dc0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120b6dc2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120b6dc5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b6dc8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120b6dcb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6dce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6dd1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6dd4 jb 0x120b6d7c */
  if (C.cf) goto L_120b6d7c;
  /* 120b6dd6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120b6dd8 jmp dword ptr [edx*4 + 0x120b6e68] */
  switch (EDX) {
    case 0: goto L_120b6e78;
    case 1: goto L_120b6e80;
    case 2: goto L_120b6e8c;
    case 3: goto L_120b6ea0;
    default: x86_unimpl("switch@0x120b6dd8 out of table"); return;
  }
  /* 120b6ddf nop  */
  /* nop */
L_120b6de0:;
  /* 120b6de0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120b6de2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120b6de4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120b6de6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120b6de7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b6dea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120b6deb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6dee jb 0x120b6d7c */
  if (C.cf) goto L_120b6d7c;
  /* 120b6df0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120b6df2 jmp dword ptr [edx*4 + 0x120b6e68] */
  switch (EDX) {
    case 0: goto L_120b6e78;
    case 1: goto L_120b6e80;
    case 2: goto L_120b6e8c;
    case 3: goto L_120b6ea0;
    default: x86_unimpl("switch@0x120b6df2 out of table"); return;
  }
  /* 120b6df9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120b6e1c:;
  /* 120b6e1c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 120b6e20 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_120b6e24:;
  /* 120b6e24 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 120b6e28 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_120b6e2c:;
  /* 120b6e2c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 120b6e30 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_120b6e34:;
  /* 120b6e34 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 120b6e38 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_120b6e3c:;
  /* 120b6e3c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 120b6e40 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_120b6e44:;
  /* 120b6e44 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 120b6e48 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_120b6e4c:;
  /* 120b6e4c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 120b6e50 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 120b6e54 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 120b6e5b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6e5d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_120b6e5f:;
  /* 120b6e5f jmp dword ptr [edx*4 + 0x120b6e68] */
  switch (EDX) {
    case 0: goto L_120b6e78;
    case 1: goto L_120b6e80;
    case 2: goto L_120b6e8c;
    case 3: goto L_120b6ea0;
    default: x86_unimpl("switch@0x120b6e5f out of table"); return;
  }
  /* 120b6e66 mov edi, edi */
  EDI = (EDI);
L_120b6e78:;
  /* 120b6e78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b6e7b pop esi */
  ESI = (pop32());
  /* 120b6e7c pop edi */
  EDI = (pop32());
  /* 120b6e7d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120b6e7e ret  */
  ESPCHK(0x120b6d20u, _esp0);
  ESP += 4; return;
  /* 120b6e7f nop  */
  /* nop */
L_120b6e80:;
  /* 120b6e80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120b6e82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120b6e84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b6e87 pop esi */
  ESI = (pop32());
  /* 120b6e88 pop edi */
  EDI = (pop32());
  /* 120b6e89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120b6e8a ret  */
  ESPCHK(0x120b6d20u, _esp0);
  ESP += 4; return;
  /* 120b6e8b nop  */
  /* nop */
L_120b6e8c:;
  /* 120b6e8c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120b6e8e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120b6e90 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120b6e93 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120b6e96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b6e99 pop esi */
  ESI = (pop32());
  /* 120b6e9a pop edi */
  EDI = (pop32());
  /* 120b6e9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120b6e9c ret  */
  ESPCHK(0x120b6d20u, _esp0);
  ESP += 4; return;
  /* 120b6e9d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120b6ea0:;
  /* 120b6ea0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120b6ea2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120b6ea4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120b6ea7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120b6eaa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120b6ead mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120b6eb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b6eb3 pop esi */
  ESI = (pop32());
  /* 120b6eb4 pop edi */
  EDI = (pop32());
  /* 120b6eb5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120b6eb6 ret  */
  ESPCHK(0x120b6d20u, _esp0);
  ESP += 4; return;
  /* 120b6eb7 nop  */
  /* nop */
L_120b6eb8:;
  /* 120b6eb8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 120b6ebc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 120b6ec0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 120b6ec6 jne 0x120b6eec */
  if (!C.zf) goto L_120b6eec;
  /* 120b6ec8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b6ecb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 120b6ece cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6ed1 jb 0x120b6ee0 */
  if (C.cf) goto L_120b6ee0;
  /* 120b6ed3 std  */
  C.df=1;
  /* 120b6ed4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120b6ed6 cld  */
  C.df=0;
  /* 120b6ed7 jmp dword ptr [edx*4 + 0x120b7000] */
  switch (EDX) {
    case 0: goto L_120b7010;
    case 1: goto L_120b7018;
    case 2: goto L_120b7028;
    case 3: goto L_120b703c;
    default: x86_unimpl("switch@0x120b6ed7 out of table"); return;
  }
  /* 120b6ede mov edi, edi */
  EDI = (EDI);
L_120b6ee0:;
  /* 120b6ee0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b6ee2 jmp dword ptr [ecx*4 + 0x120b6fb0] */
  switch (ECX) {
    case 0: goto L_120b6ff7;
    default: x86_unimpl("switch@0x120b6ee2 out of table"); return;
  }
  /* 120b6ee9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120b6eec:;
  /* 120b6eec mov eax, edi */
  EAX = (EDI);
  /* 120b6eee mov edx, 3 */
  EDX = (0x3u);
  /* 120b6ef3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6ef6 jb 0x120b6f04 */
  if (C.cf) goto L_120b6f04;
  /* 120b6ef8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 120b6efb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b6efd jmp dword ptr [eax*4 + 0x120b6f08] */
  switch (EAX) {
    case 1: goto L_120b6f18;
    case 2: goto L_120b6f38;
    case 3: goto L_120b6f60;
    default: x86_unimpl("switch@0x120b6efd out of table"); return;
  }
L_120b6f04:;
  /* 120b6f04 jmp dword ptr [ecx*4 + 0x120b7000] */
  switch (ECX) {
    case 0: goto L_120b7010;
    case 1: goto L_120b7018;
    case 2: goto L_120b7028;
    case 3: goto L_120b703c;
    default: x86_unimpl("switch@0x120b6f04 out of table"); return;
  }
  /* 120b6f0b nop  */
  /* nop */
L_120b6f18:;
  /* 120b6f18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120b6f1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120b6f1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120b6f20 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 120b6f21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b6f24 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 120b6f25 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6f28 jb 0x120b6ee0 */
  if (C.cf) goto L_120b6ee0;
  /* 120b6f2a std  */
  C.df=1;
  /* 120b6f2b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120b6f2d cld  */
  C.df=0;
  /* 120b6f2e jmp dword ptr [edx*4 + 0x120b7000] */
  switch (EDX) {
    case 0: goto L_120b7010;
    case 1: goto L_120b7018;
    case 2: goto L_120b7028;
    case 3: goto L_120b703c;
    default: x86_unimpl("switch@0x120b6f2e out of table"); return;
  }
  /* 120b6f35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120b6f38:;
  /* 120b6f38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120b6f3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120b6f3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120b6f40 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120b6f43 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b6f46 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120b6f49 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b6f4c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b6f4f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6f52 jb 0x120b6ee0 */
  if (C.cf) goto L_120b6ee0;
  /* 120b6f54 std  */
  C.df=1;
  /* 120b6f55 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120b6f57 cld  */
  C.df=0;
  /* 120b6f58 jmp dword ptr [edx*4 + 0x120b7000] */
  switch (EDX) {
    case 0: goto L_120b7010;
    case 1: goto L_120b7018;
    case 2: goto L_120b7028;
    case 3: goto L_120b703c;
    default: x86_unimpl("switch@0x120b6f58 out of table"); return;
  }
  /* 120b6f5f nop  */
  /* nop */
L_120b6f60:;
  /* 120b6f60 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120b6f63 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120b6f65 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120b6f68 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120b6f6b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120b6f6e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120b6f71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b6f74 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120b6f77 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b6f7a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b6f7d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b6f80 jb 0x120b6ee0 */
  if (C.cf) goto L_120b6ee0;
  /* 120b6f86 std  */
  C.df=1;
  /* 120b6f87 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120b6f89 cld  */
  C.df=0;
  /* 120b6f8a jmp dword ptr [edx*4 + 0x120b7000] */
  switch (EDX) {
    case 0: goto L_120b7010;
    case 1: goto L_120b7018;
    case 2: goto L_120b7028;
    case 3: goto L_120b703c;
    default: x86_unimpl("switch@0x120b6f8a out of table"); return;
  }
  /* 120b6f91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 120b6f94 mov ah, 0x6f */
  AH = (0x6fu);
  /* 120b6f96 or edx, dword ptr [edx] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EDX))); EDX = (_r); fl_logic(_r,32); }
  /* 120b6f98 mov esp, 0xc4120b6f */
  ESP = (0xc4120b6fu);
  /* 120b6f9d outsd dx, dword ptr [esi] */
  x86_unimpl("outsd @ 0x120b6f9d");
  /* 120b6f9e or edx, dword ptr [edx] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EDX))); EDX = (_r); fl_logic(_r,32); }
  /* 120b6fa0 int3  */
  x86_unimpl("int3 @ 0x120b6fa0");
  /* 120b6fa1 outsd dx, dword ptr [esi] */
  x86_unimpl("outsd @ 0x120b6fa1");
  /* 120b6fa2 or edx, dword ptr [edx] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EDX))); EDX = (_r); fl_logic(_r,32); }
  /* 120b6fa4 aam 0x6f */
  x86_unimpl("aam @ 0x120b6fa4");
  /* 120b6fa6 or edx, dword ptr [edx] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EDX))); EDX = (_r); fl_logic(_r,32); }
  /* 120b6fa8 fsubr qword ptr [edi + 0xb] */
  FPU_ST(0) = (rf64((uint32_t)(EDI + 0xb))) - FPU_ST(0);
  /* 120b6fab adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 120b6fad outsd dx, dword ptr [esi] */
  x86_unimpl("outsd @ 0x120b6fad");
  /* 120b6fae or edx, dword ptr [edx] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EDX))); EDX = (_r); fl_logic(_r,32); }
  /* 120b6fb4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 120b6fb8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 120b6fbc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 120b6fc0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 120b6fc4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 120b6fc8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 120b6fcc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 120b6fd0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 120b6fd4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 120b6fd8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 120b6fdc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 120b6fe0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 120b6fe4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 120b6fe8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 120b6fec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 120b6ff3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120b6ff5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_120b6ff7:;
  /* 120b6ff7 jmp dword ptr [edx*4 + 0x120b7000] */
  switch (EDX) {
    case 0: goto L_120b7010;
    case 1: goto L_120b7018;
    case 2: goto L_120b7028;
    case 3: goto L_120b703c;
    default: x86_unimpl("switch@0x120b6ff7 out of table"); return;
  }
  /* 120b6ffe mov edi, edi */
  EDI = (EDI);
L_120b7010:;
  /* 120b7010 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b7013 pop esi */
  ESI = (pop32());
  /* 120b7014 pop edi */
  EDI = (pop32());
  /* 120b7015 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120b7016 ret  */
  ESPCHK(0x120b6d20u, _esp0);
  ESP += 4; return;
  /* 120b7017 nop  */
  /* nop */
L_120b7018:;
  /* 120b7018 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120b701b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120b701e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b7021 pop esi */
  ESI = (pop32());
  /* 120b7022 pop edi */
  EDI = (pop32());
  /* 120b7023 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120b7024 ret  */
  ESPCHK(0x120b6d20u, _esp0);
  ESP += 4; return;
  /* 120b7025 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120b7028:;
  /* 120b7028 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120b702b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120b702e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120b7031 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120b7034 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b7037 pop esi */
  ESI = (pop32());
  /* 120b7038 pop edi */
  EDI = (pop32());
  /* 120b7039 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120b703a ret  */
  ESPCHK(0x120b6d20u, _esp0);
  ESP += 4; return;
  /* 120b703b nop  */
  /* nop */
L_120b703c:;
  /* 120b703c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120b703f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120b7042 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120b7045 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120b7048 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120b704b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120b704e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b7051 pop esi */
  ESI = (pop32());
  /* 120b7052 pop edi */
  EDI = (pop32());
  /* 120b7053 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120b7054 ret  */
  ESPCHK(0x120b6d20u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x120b7060 (104 bytes, 43 insns) */
void f_120b7060(void) {
  FTRACE(0x120b7060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b7060 push ebx */
  push32((uint32_t)(EBX));
  /* 120b7061 push esi */
  push32((uint32_t)(ESI));
  /* 120b7062 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 120b7066 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b7068 jne 0x120b7082 */
  if (!C.zf) goto L_120b7082;
  /* 120b706a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 120b706e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 120b7072 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b7074 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120b7076 mov ebx, eax */
  EBX = (EAX);
  /* 120b7078 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 120b707c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120b707e mov edx, ebx */
  EDX = (EBX);
  /* 120b7080 jmp 0x120b70c3 */
  goto L_120b70c3;
L_120b7082:;
  /* 120b7082 mov ecx, eax */
  ECX = (EAX);
  /* 120b7084 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 120b7088 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 120b708c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_120b7090:;
  /* 120b7090 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120b7092 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 120b7094 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 120b7096 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 120b7098 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b709a jne 0x120b7090 */
  if (!C.zf) goto L_120b7090;
  /* 120b709c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120b709e mov esi, eax */
  ESI = (EAX);
  /* 120b70a0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 120b70a4 mov ecx, eax */
  ECX = (EAX);
  /* 120b70a6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 120b70aa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 120b70ac add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b70ae jb 0x120b70be */
  if (C.cf) goto L_120b70be;
  /* 120b70b0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b70b4 ja 0x120b70be */
  if ((!C.cf&&!C.zf)) goto L_120b70be;
  /* 120b70b6 jb 0x120b70bf */
  if (C.cf) goto L_120b70bf;
  /* 120b70b8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b70bc jbe 0x120b70bf */
  if ((C.cf||C.zf)) goto L_120b70bf;
L_120b70be:;
  /* 120b70be dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_120b70bf:;
  /* 120b70bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b70c1 mov eax, esi */
  EAX = (ESI);
L_120b70c3:;
  /* 120b70c3 pop esi */
  ESI = (pop32());
  /* 120b70c4 pop ebx */
  EBX = (pop32());
  /* 120b70c5 ret 0x10 */
  ESPCHK(0x120b7060u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x120b70d0 (117 bytes, 44 insns) */
void f_120b70d0(void) {
  FTRACE(0x120b70d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b70d0 push ebx */
  push32((uint32_t)(EBX));
  /* 120b70d1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 120b70d5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b70d7 jne 0x120b70f1 */
  if (!C.zf) goto L_120b70f1;
  /* 120b70d9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 120b70dd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 120b70e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b70e3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120b70e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120b70e9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120b70eb mov eax, edx */
  EAX = (EDX);
  /* 120b70ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b70ef jmp 0x120b7141 */
  goto L_120b7141;
L_120b70f1:;
  /* 120b70f1 mov ecx, eax */
  ECX = (EAX);
  /* 120b70f3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 120b70f7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 120b70fb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_120b70ff:;
  /* 120b70ff shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120b7101 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 120b7103 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 120b7105 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 120b7107 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b7109 jne 0x120b70ff */
  if (!C.zf) goto L_120b70ff;
  /* 120b710b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120b710d mov ecx, eax */
  ECX = (EAX);
  /* 120b710f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 120b7113 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 120b7114 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 120b7118 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b711a jb 0x120b712a */
  if (C.cf) goto L_120b712a;
  /* 120b711c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7120 ja 0x120b712a */
  if ((!C.cf&&!C.zf)) goto L_120b712a;
  /* 120b7122 jb 0x120b7132 */
  if (C.cf) goto L_120b7132;
  /* 120b7124 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7128 jbe 0x120b7132 */
  if ((C.cf||C.zf)) goto L_120b7132;
L_120b712a:;
  /* 120b712a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b712e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_120b7132:;
  /* 120b7132 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b7136 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b713a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b713c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b713e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_120b7141:;
  /* 120b7141 pop ebx */
  EBX = (pop32());
  /* 120b7142 ret 0x10 */
  ESPCHK(0x120b70d0u, _esp0);
  ESP += 20; return;
}

/* FUN_10017150 @ 0x120b7150 (628 bytes, 214 insns) */
void f_120b7150(void) {
  FTRACE(0x120b7150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b7150 push ebp */
  push32((uint32_t)(EBP));
  /* 120b7151 mov ebp, esp */
  EBP = (ESP);
  /* 120b7153 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b7156 push ebx */
  push32((uint32_t)(EBX));
  /* 120b7157 push esi */
  push32((uint32_t)(ESI));
  /* 120b7158 push edi */
  push32((uint32_t)(EDI));
L_120b7159:;
  /* 120b7159 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b715d jne 0x120b717d */
  if (!C.zf) goto L_120b717d;
  /* 120b715f push 0x120dc240 */
  push32((uint32_t)(0x120dc240u));
  /* 120b7164 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b7166 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 120b7168 push 0x120dc234 */
  push32((uint32_t)(0x120dc234u));
  /* 120b716d push 2 */
  push32((uint32_t)(0x2u));
  /* 120b716f call 0x120ab840 */
  push32(0x120b7174u); f_120ab840();
  /* 120b7174 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7177 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b717a jne 0x120b717d */
  if (!C.zf) goto L_120b717d;
  /* 120b717c int3  */
  x86_unimpl("int3 @ 0x120b717c");
L_120b717d:;
  /* 120b717d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b717f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b7181 jne 0x120b7159 */
  if (!C.zf) goto L_120b7159;
  /* 120b7183 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b7186 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120b7189 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b718c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 120b718f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120b7192 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b7195 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120b7198 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 120b719e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b71a0 je 0x120b71af */
  if (C.zf) goto L_120b71af;
  /* 120b71a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b71a5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120b71a8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 120b71ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b71ad je 0x120b71c5 */
  if (C.zf) goto L_120b71c5;
L_120b71af:;
  /* 120b71af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b71b2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120b71b5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 120b71b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b71ba mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 120b71bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b71c0 jmp 0x120b73bd */
  goto L_120b73bd;
L_120b71c5:;
  /* 120b71c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b71c8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120b71cb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120b71ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b71d0 je 0x120b721c */
  if (C.zf) goto L_120b721c;
  /* 120b71d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b71d5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 120b71dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b71df mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120b71e2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 120b71e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b71e7 je 0x120b7205 */
  if (C.zf) goto L_120b7205;
  /* 120b71e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b71ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b71ef mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120b71f2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120b71f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b71f7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120b71fa and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 120b71fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b7200 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 120b7203 jmp 0x120b721c */
  goto L_120b721c;
L_120b7205:;
  /* 120b7205 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b7208 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120b720b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 120b720e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b7211 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 120b7214 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b7217 jmp 0x120b73bd */
  goto L_120b73bd;
L_120b721c:;
  /* 120b721c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b721f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120b7222 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 120b7225 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b7228 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 120b722b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b722e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120b7231 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 120b7234 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b7237 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 120b723a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b723d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 120b7244 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b724b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b724e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120b7251 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b7254 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120b7257 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 120b725d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b725f jne 0x120b728f */
  if (!C.zf) goto L_120b728f;
  /* 120b7261 cmp dword ptr [ebp - 8], 0x120df8e8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x120df8e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7268 je 0x120b7273 */
  if (C.zf) goto L_120b7273;
  /* 120b726a cmp dword ptr [ebp - 8], 0x120df908 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x120df908u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7271 jne 0x120b7283 */
  if (!C.zf) goto L_120b7283;
L_120b7273:;
  /* 120b7273 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b7276 push edx */
  push32((uint32_t)(EDX));
  /* 120b7277 call 0x120bbc20 */
  push32(0x120b727cu); f_120bbc20();
  /* 120b727c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b727f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b7281 jne 0x120b728f */
  if (!C.zf) goto L_120b728f;
L_120b7283:;
  /* 120b7283 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b7286 push eax */
  push32((uint32_t)(EAX));
  /* 120b7287 call 0x120bbb50 */
  push32(0x120b728cu); f_120bbb50();
  /* 120b728c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b728f:;
  /* 120b728f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b7292 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120b7295 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 120b729b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b729d je 0x120b737b */
  if (C.zf) goto L_120b737b;
L_120b72a3:;
  /* 120b72a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b72a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b72a9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 120b72ab sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b72ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b72b0 jge 0x120b72d3 */
  if ((C.sf==C.of)) goto L_120b72d3;
  /* 120b72b2 push 0x120dc1f4 */
  push32((uint32_t)(0x120dc1f4u));
  /* 120b72b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b72b9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 120b72be push 0x120dc234 */
  push32((uint32_t)(0x120dc234u));
  /* 120b72c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b72c5 call 0x120ab840 */
  push32(0x120b72cau); f_120ab840();
  /* 120b72ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b72cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b72d0 jne 0x120b72d3 */
  if (!C.zf) goto L_120b72d3;
  /* 120b72d2 int3  */
  x86_unimpl("int3 @ 0x120b72d2");
L_120b72d3:;
  /* 120b72d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b72d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b72d7 jne 0x120b72a3 */
  if (!C.zf) goto L_120b72a3;
  /* 120b72d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b72dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b72df mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 120b72e1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b72e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b72e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b72ea mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120b72ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b72f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b72f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120b72f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b72f8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 120b72fb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b72fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b7301 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 120b7304 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7308 jle 0x120b7326 */
  if ((C.zf||C.sf!=C.of)) goto L_120b7326;
  /* 120b730a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b730d push ecx */
  push32((uint32_t)(ECX));
  /* 120b730e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b7311 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120b7314 push eax */
  push32((uint32_t)(EAX));
  /* 120b7315 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b7318 push ecx */
  push32((uint32_t)(ECX));
  /* 120b7319 call 0x120bb840 */
  push32(0x120b731eu); f_120bb840();
  /* 120b731e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7321 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b7324 jmp 0x120b736e */
  goto L_120b736e;
L_120b7326:;
  /* 120b7326 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b732a je 0x120b7349 */
  if (C.zf) goto L_120b7349;
  /* 120b732c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b732f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 120b7332 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b7335 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 120b7338 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b733b mov ecx, dword ptr [edx*4 + 0x120e2ac0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x120e2ac0)));
  /* 120b7342 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7344 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120b7347 jmp 0x120b7350 */
  goto L_120b7350;
L_120b7349:;
  /* 120b7349 mov dword ptr [ebp - 0x14], 0x120def58 */
  w32((uint32_t)(EBP + -0x14), (0x120def58u));
L_120b7350:;
  /* 120b7350 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b7353 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 120b7357 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 120b735a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b735c je 0x120b736e */
  if (C.zf) goto L_120b736e;
  /* 120b735e push 2 */
  push32((uint32_t)(0x2u));
  /* 120b7360 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b7362 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b7365 push ecx */
  push32((uint32_t)(ECX));
  /* 120b7366 call 0x120bb6f0 */
  push32(0x120b736bu); f_120bb6f0();
  /* 120b736b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b736e:;
  /* 120b736e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b7371 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120b7374 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 120b7377 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 120b7379 jmp 0x120b7399 */
  goto L_120b7399;
L_120b737b:;
  /* 120b737b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120b7382 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7385 push edx */
  push32((uint32_t)(EDX));
  /* 120b7386 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 120b7389 push eax */
  push32((uint32_t)(EAX));
  /* 120b738a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b738d push ecx */
  push32((uint32_t)(ECX));
  /* 120b738e call 0x120bb840 */
  push32(0x120b7393u); f_120bb840();
  /* 120b7393 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7396 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_120b7399:;
  /* 120b7399 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b739c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b739f je 0x120b73b5 */
  if (C.zf) goto L_120b73b5;
  /* 120b73a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b73a4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120b73a7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 120b73aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b73ad mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 120b73b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b73b3 jmp 0x120b73bd */
  goto L_120b73bd;
L_120b73b5:;
  /* 120b73b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b73b8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_120b73bd:;
  /* 120b73bd pop edi */
  EDI = (pop32());
  /* 120b73be pop esi */
  ESI = (pop32());
  /* 120b73bf pop ebx */
  EBX = (pop32());
  /* 120b73c0 mov esp, ebp */
  ESP = (EBP);
  /* 120b73c2 pop ebp */
  EBP = (pop32());
  /* 120b73c3 ret  */
  ESPCHK(0x120b7150u, _esp0);
  ESP += 4; return;
}

/* FUN_100173d0 @ 0x120b73d0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_120b73d0(void) {
  FTRACE(0x120b73d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b73d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b73d1 mov ebp, esp */
  EBP = (ESP);
  /* 120b73d3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b73d9 push ebx */
  push32((uint32_t)(EBX));
  /* 120b73da push esi */
  push32((uint32_t)(ESI));
  /* 120b73db push edi */
  push32((uint32_t)(EDI));
  /* 120b73dc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 120b73e3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 120b73ed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_120b73f4:;
  /* 120b73f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b73f7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120b73f9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 120b73fc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 120b7400 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b7403 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7406 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 120b7409 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b740b je 0x120b7fe7 */
  if (C.zf) goto L_120b7fe7;
  /* 120b7411 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7418 jl 0x120b7fe7 */
  if ((C.sf!=C.of)) goto L_120b7fe7;
  /* 120b741e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 120b7422 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7425 jl 0x120b7446 */
  if ((C.sf!=C.of)) goto L_120b7446;
  /* 120b7427 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 120b742b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b742e jg 0x120b7446 */
  if ((!C.zf&&C.sf==C.of)) goto L_120b7446;
  /* 120b7430 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 120b7434 movsx ecx, byte ptr [eax + 0x120dc22c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x120dc22c))));
  /* 120b743b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 120b743e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 120b7444 jmp 0x120b7450 */
  goto L_120b7450;
L_120b7446:;
  /* 120b7446 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_120b7450:;
  /* 120b7450 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 120b7456 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120b7459 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b745c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b745f movsx edx, byte ptr [ecx + eax*8 + 0x120dc24c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x120dc24c))));
  /* 120b7467 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 120b746a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 120b746d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b7470 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 120b7476 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b747d ja 0x120b7fe2 */
  if ((!C.cf&&!C.zf)) goto L_120b7fe2;
  /* 120b7483 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 120b7489 jmp dword ptr [ecx*4 + 0x120b7ff4] */
  switch (ECX) {
    case 0: goto L_120b7490;
    case 1: goto L_120b752a;
    case 2: goto L_120b756c;
    case 3: goto L_120b75db;
    case 4: goto L_120b7633;
    case 5: goto L_120b7642;
    case 6: goto L_120b768e;
    case 7: goto L_120b7721;
    case 8: goto L_120b75b8;
    case 9: goto L_120b75c3;
    case 10: goto L_120b75ae;
    case 11: goto L_120b75a3;
    case 12: goto L_120b75ce;
    case 13: goto L_120b75d6;
    default: x86_unimpl("switch@0x120b7489 out of table"); return;
  }
L_120b7490:;
  /* 120b7490 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 120b7497 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b749a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b74a0 mov eax, dword ptr [0x120df01c] */
  EAX = (r32((uint32_t)(0x120df01c)));
  /* 120b74a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b74a7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 120b74ab and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 120b74b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b74b3 je 0x120b750d */
  if (C.zf) goto L_120b750d;
  /* 120b74b5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 120b74bb push edx */
  push32((uint32_t)(EDX));
  /* 120b74bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b74bf push eax */
  push32((uint32_t)(EAX));
  /* 120b74c0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 120b74c4 push ecx */
  push32((uint32_t)(ECX));
  /* 120b74c5 call 0x120b8100 */
  push32(0x120b74cau); f_120b8100();
  /* 120b74ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b74cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b74d0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120b74d2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 120b74d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b74d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b74db mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_120b74de:;
  /* 120b74de movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 120b74e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b74e4 jne 0x120b7507 */
  if (!C.zf) goto L_120b7507;
  /* 120b74e6 push 0x120dc2cc */
  push32((uint32_t)(0x120dc2ccu));
  /* 120b74eb push 0 */
  push32((uint32_t)(0x0u));
  /* 120b74ed push 0x186 */
  push32((uint32_t)(0x186u));
  /* 120b74f2 push 0x120dc2c0 */
  push32((uint32_t)(0x120dc2c0u));
  /* 120b74f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b74f9 call 0x120ab840 */
  push32(0x120b74feu); f_120ab840();
  /* 120b74fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7501 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7504 jne 0x120b7507 */
  if (!C.zf) goto L_120b7507;
  /* 120b7506 int3  */
  x86_unimpl("int3 @ 0x120b7506");
L_120b7507:;
  /* 120b7507 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b7509 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b750b jne 0x120b74de */
  if (!C.zf) goto L_120b74de;
L_120b750d:;
  /* 120b750d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 120b7513 push ecx */
  push32((uint32_t)(ECX));
  /* 120b7514 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b7517 push edx */
  push32((uint32_t)(EDX));
  /* 120b7518 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 120b751c push eax */
  push32((uint32_t)(EAX));
  /* 120b751d call 0x120b8100 */
  push32(0x120b7522u); f_120b8100();
  /* 120b7522 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7525 jmp 0x120b7fe2 */
  goto L_120b7fe2;
L_120b752a:;
  /* 120b752a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120b7531 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b7534 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 120b753a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 120b7540 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 120b7546 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 120b754c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120b754f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b7556 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 120b7560 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 120b7567 jmp 0x120b7fe2 */
  goto L_120b7fe2;
L_120b756c:;
  /* 120b756c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 120b7570 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 120b7576 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 120b757c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b757f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 120b7585 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b758c ja 0x120b75d6 */
  if ((!C.cf&&!C.zf)) goto L_120b75d6;
  /* 120b758e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 120b7594 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b7596 mov al, byte ptr [ecx + 0x120b802c] */
  AL = (r8((uint32_t)(ECX + 0x120b802c)));
  /* 120b759c jmp dword ptr [eax*4 + 0x120b8014] */
  switch (EAX) {
    case 0: goto L_120b75b8;
    case 1: goto L_120b75c3;
    case 2: goto L_120b75ae;
    case 3: goto L_120b75a3;
    case 4: goto L_120b75ce;
    case 5: goto L_120b75d6;
    default: x86_unimpl("switch@0x120b759c out of table"); return;
  }
L_120b75a3:;
  /* 120b75a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b75a6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120b75a9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b75ac jmp 0x120b75d6 */
  goto L_120b75d6;
L_120b75ae:;
  /* 120b75ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b75b1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 120b75b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b75b6 jmp 0x120b75d6 */
  goto L_120b75d6;
L_120b75b8:;
  /* 120b75b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b75bb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 120b75be mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b75c1 jmp 0x120b75d6 */
  goto L_120b75d6;
L_120b75c3:;
  /* 120b75c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b75c6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 120b75c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b75cc jmp 0x120b75d6 */
  goto L_120b75d6;
L_120b75ce:;
  /* 120b75ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b75d1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 120b75d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b75d6:;
  /* 120b75d6 jmp 0x120b7fe2 */
  goto L_120b7fe2;
L_120b75db:;
  /* 120b75db movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 120b75df cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b75e2 jne 0x120b7617 */
  if (!C.zf) goto L_120b7617;
  /* 120b75e4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 120b75e7 push edx */
  push32((uint32_t)(EDX));
  /* 120b75e8 call 0x120b8210 */
  push32(0x120b75edu); f_120b8210();
  /* 120b75ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b75f0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 120b75f6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b75fd jge 0x120b7615 */
  if ((C.sf==C.of)) goto L_120b7615;
  /* 120b75ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7602 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 120b7604 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b7607 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 120b760d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b760f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_120b7615:;
  /* 120b7615 jmp 0x120b762e */
  goto L_120b762e;
L_120b7617:;
  /* 120b7617 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 120b761d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b7620 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 120b7624 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 120b7628 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_120b762e:;
  /* 120b762e jmp 0x120b7fe2 */
  goto L_120b7fe2;
L_120b7633:;
  /* 120b7633 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 120b763d jmp 0x120b7fe2 */
  goto L_120b7fe2;
L_120b7642:;
  /* 120b7642 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 120b7646 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7649 jne 0x120b7672 */
  if (!C.zf) goto L_120b7672;
  /* 120b764b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 120b764e push eax */
  push32((uint32_t)(EAX));
  /* 120b764f call 0x120b8210 */
  push32(0x120b7654u); f_120b8210();
  /* 120b7654 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7657 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 120b765d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7664 jge 0x120b7670 */
  if ((C.sf==C.of)) goto L_120b7670;
  /* 120b7666 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_120b7670:;
  /* 120b7670 jmp 0x120b7689 */
  goto L_120b7689;
L_120b7672:;
  /* 120b7672 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 120b7678 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b767b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 120b767f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 120b7683 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_120b7689:;
  /* 120b7689 jmp 0x120b7fe2 */
  goto L_120b7fe2;
L_120b768e:;
  /* 120b768e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 120b7692 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 120b7698 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 120b769e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b76a1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 120b76a7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b76ae ja 0x120b771c */
  if ((!C.cf&&!C.zf)) goto L_120b771c;
  /* 120b76b0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 120b76b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b76b8 mov al, byte ptr [ecx + 0x120b8051] */
  AL = (r8((uint32_t)(ECX + 0x120b8051)));
  /* 120b76be jmp dword ptr [eax*4 + 0x120b803d] */
  switch (EAX) {
    case 0: goto L_120b76d0;
    case 1: goto L_120b7709;
    case 2: goto L_120b76c5;
    case 3: goto L_120b7713;
    case 4: goto L_120b771c;
    default: x86_unimpl("switch@0x120b76be out of table"); return;
  }
L_120b76c5:;
  /* 120b76c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b76c8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 120b76cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b76ce jmp 0x120b771c */
  goto L_120b771c;
L_120b76d0:;
  /* 120b76d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b76d3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b76d6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b76d9 jne 0x120b76fb */
  if (!C.zf) goto L_120b76fb;
  /* 120b76db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b76de movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 120b76e2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b76e5 jne 0x120b76fb */
  if (!C.zf) goto L_120b76fb;
  /* 120b76e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b76ea add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b76ed mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 120b76f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b76f3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 120b76f6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b76f9 jmp 0x120b7707 */
  goto L_120b7707;
L_120b76fb:;
  /* 120b76fb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 120b7702 jmp 0x120b7490 */
  goto L_120b7490;
L_120b7707:;
  /* 120b7707 jmp 0x120b771c */
  goto L_120b771c;
L_120b7709:;
  /* 120b7709 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b770c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 120b770e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b7711 jmp 0x120b771c */
  goto L_120b771c;
L_120b7713:;
  /* 120b7713 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7716 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 120b7719 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120b771c:;
  /* 120b771c jmp 0x120b7fe2 */
  goto L_120b7fe2;
L_120b7721:;
  /* 120b7721 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 120b7725 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 120b772b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 120b7731 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b7734 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 120b773a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7741 ja 0x120b7e07 */
  if ((!C.cf&&!C.zf)) goto L_120b7e07;
  /* 120b7747 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 120b774d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b774f mov cl, byte ptr [edx + 0x120b80bc] */
  CL = (r8((uint32_t)(EDX + 0x120b80bc)));
  /* 120b7755 jmp dword ptr [ecx*4 + 0x120b8080] */
  switch (ECX) {
    case 0: goto L_120b775c;
    case 1: goto L_120b79f0;
    case 2: goto L_120b7880;
    case 3: goto L_120b7b29;
    case 4: goto L_120b77eb;
    case 5: goto L_120b7771;
    case 6: goto L_120b7afb;
    case 7: goto L_120b7a00;
    case 8: goto L_120b79a5;
    case 9: goto L_120b7b75;
    case 10: goto L_120b7b1f;
    case 11: goto L_120b7896;
    case 12: goto L_120b7b13;
    case 13: goto L_120b7b35;
    case 14: goto L_120b7e07;
    default: x86_unimpl("switch@0x120b7755 out of table"); return;
  }
L_120b775c:;
  /* 120b775c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b775f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 120b7764 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b7766 jne 0x120b7771 */
  if (!C.zf) goto L_120b7771;
  /* 120b7768 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b776b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 120b776e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120b7771:;
  /* 120b7771 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7774 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 120b777a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b777c je 0x120b77b7 */
  if (C.zf) goto L_120b77b7;
  /* 120b777e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 120b7781 push eax */
  push32((uint32_t)(EAX));
  /* 120b7782 call 0x120b8250 */
  push32(0x120b7787u); f_120b8250();
  /* 120b7787 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b778a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 120b778e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 120b7792 push ecx */
  push32((uint32_t)(ECX));
  /* 120b7793 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 120b7799 push edx */
  push32((uint32_t)(EDX));
  /* 120b779a call 0x120bbe90 */
  push32(0x120b779fu); f_120bbe90();
  /* 120b779f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b77a2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120b77a5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b77a9 jge 0x120b77b5 */
  if ((C.sf==C.of)) goto L_120b77b5;
  /* 120b77ab mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_120b77b5:;
  /* 120b77b5 jmp 0x120b77dd */
  goto L_120b77dd;
L_120b77b7:;
  /* 120b77b7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 120b77ba push eax */
  push32((uint32_t)(EAX));
  /* 120b77bb call 0x120b8210 */
  push32(0x120b77c0u); f_120b8210();
  /* 120b77c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b77c3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 120b77ca mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 120b77d0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 120b77d6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_120b77dd:;
  /* 120b77dd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 120b77e3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 120b77e6 jmp 0x120b7e07 */
  goto L_120b7e07;
L_120b77eb:;
  /* 120b77eb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 120b77ee push eax */
  push32((uint32_t)(EAX));
  /* 120b77ef call 0x120b8210 */
  push32(0x120b77f4u); f_120b8210();
  /* 120b77f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b77f7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 120b77fd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7804 je 0x120b7812 */
  if (C.zf) goto L_120b7812;
  /* 120b7806 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 120b780c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7810 jne 0x120b782c */
  if (!C.zf) goto L_120b782c;
L_120b7812:;
  /* 120b7812 mov edx, dword ptr [0x120df510] */
  EDX = (r32((uint32_t)(0x120df510)));
  /* 120b7818 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 120b781b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b781e push eax */
  push32((uint32_t)(EAX));
  /* 120b781f call 0x120b1210 */
  push32(0x120b7824u); f_120b1210();
  /* 120b7824 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7827 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120b782a jmp 0x120b787b */
  goto L_120b787b;
L_120b782c:;
  /* 120b782c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b782f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 120b7835 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b7837 je 0x120b785c */
  if (C.zf) goto L_120b785c;
  /* 120b7839 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 120b783f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120b7842 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120b7845 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 120b784b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 120b784e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 120b7850 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 120b7853 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 120b785a jmp 0x120b787b */
  goto L_120b787b;
L_120b785c:;
  /* 120b785c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 120b7863 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 120b7869 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b786c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 120b786f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 120b7875 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 120b7878 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_120b787b:;
  /* 120b787b jmp 0x120b7e07 */
  goto L_120b7e07;
L_120b7880:;
  /* 120b7880 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7883 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 120b7889 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b788b jne 0x120b7896 */
  if (!C.zf) goto L_120b7896;
  /* 120b788d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7890 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 120b7893 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b7896:;
  /* 120b7896 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b789d jne 0x120b78ab */
  if (!C.zf) goto L_120b78ab;
  /* 120b789f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 120b78a9 jmp 0x120b78b7 */
  goto L_120b78b7;
L_120b78ab:;
  /* 120b78ab mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 120b78b1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_120b78b7:;
  /* 120b78b7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 120b78bd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 120b78c3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 120b78c6 push edx */
  push32((uint32_t)(EDX));
  /* 120b78c7 call 0x120b8210 */
  push32(0x120b78ccu); f_120b8210();
  /* 120b78cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b78cf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120b78d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b78d5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 120b78da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b78dc je 0x120b7946 */
  if (C.zf) goto L_120b7946;
  /* 120b78de cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b78e2 jne 0x120b78ed */
  if (!C.zf) goto L_120b78ed;
  /* 120b78e4 mov ecx, dword ptr [0x120df514] */
  ECX = (r32((uint32_t)(0x120df514)));
  /* 120b78ea mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_120b78ed:;
  /* 120b78ed mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 120b78f4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b78f7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_120b78fd:;
  /* 120b78fd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 120b7903 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 120b7909 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b790c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 120b7912 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b7914 je 0x120b7936 */
  if (C.zf) goto L_120b7936;
  /* 120b7916 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 120b791c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b791e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 120b7921 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b7923 je 0x120b7936 */
  if (C.zf) goto L_120b7936;
  /* 120b7925 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 120b792b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b792e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 120b7934 jmp 0x120b78fd */
  goto L_120b78fd;
L_120b7936:;
  /* 120b7936 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 120b793c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b793f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 120b7941 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 120b7944 jmp 0x120b79a0 */
  goto L_120b79a0;
L_120b7946:;
  /* 120b7946 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b794a jne 0x120b7954 */
  if (!C.zf) goto L_120b7954;
  /* 120b794c mov eax, dword ptr [0x120df510] */
  EAX = (r32((uint32_t)(0x120df510)));
  /* 120b7951 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_120b7954:;
  /* 120b7954 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b7957 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_120b795d:;
  /* 120b795d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 120b7963 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 120b7969 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b796c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 120b7972 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b7974 je 0x120b7994 */
  if (C.zf) goto L_120b7994;
  /* 120b7976 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 120b797c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120b797f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b7981 je 0x120b7994 */
  if (C.zf) goto L_120b7994;
  /* 120b7983 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 120b7989 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b798c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 120b7992 jmp 0x120b795d */
  goto L_120b795d;
L_120b7994:;
  /* 120b7994 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 120b799a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b799d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_120b79a0:;
  /* 120b79a0 jmp 0x120b7e07 */
  goto L_120b7e07;
L_120b79a5:;
  /* 120b79a5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 120b79a8 push edx */
  push32((uint32_t)(EDX));
  /* 120b79a9 call 0x120b8210 */
  push32(0x120b79aeu); f_120b8210();
  /* 120b79ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b79b1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 120b79b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b79ba and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 120b79bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b79bf je 0x120b79d3 */
  if (C.zf) goto L_120b79d3;
  /* 120b79c1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 120b79c7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 120b79ce mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 120b79d1 jmp 0x120b79e1 */
  goto L_120b79e1;
L_120b79d3:;
  /* 120b79d3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 120b79d9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 120b79df mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_120b79e1:;
  /* 120b79e1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 120b79eb jmp 0x120b7e07 */
  goto L_120b7e07;
L_120b79f0:;
  /* 120b79f0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 120b79f7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 120b79fa add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 120b79fd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_120b7a00:;
  /* 120b7a00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7a03 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 120b7a05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b7a08 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 120b7a0e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 120b7a11 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7a18 jge 0x120b7a26 */
  if ((C.sf==C.of)) goto L_120b7a26;
  /* 120b7a1a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 120b7a24 jmp 0x120b7a42 */
  goto L_120b7a42;
L_120b7a26:;
  /* 120b7a26 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7a2d jne 0x120b7a42 */
  if (!C.zf) goto L_120b7a42;
  /* 120b7a2f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 120b7a33 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7a36 jne 0x120b7a42 */
  if (!C.zf) goto L_120b7a42;
  /* 120b7a38 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_120b7a42:;
  /* 120b7a42 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b7a45 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7a48 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 120b7a4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b7a4e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b7a51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b7a53 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b7a56 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 120b7a5c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 120b7a62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b7a65 push ecx */
  push32((uint32_t)(ECX));
  /* 120b7a66 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 120b7a6c push edx */
  push32((uint32_t)(EDX));
  /* 120b7a6d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 120b7a71 push eax */
  push32((uint32_t)(EAX));
  /* 120b7a72 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b7a75 push ecx */
  push32((uint32_t)(ECX));
  /* 120b7a76 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 120b7a7c push edx */
  push32((uint32_t)(EDX));
  /* 120b7a7d call dword ptr [0x120dee50] */
  call_ind((uint32_t)(r32((uint32_t)(0x120dee50))), 0x120b7a83u);
  /* 120b7a83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7a86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7a89 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 120b7a8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b7a90 je 0x120b7aa8 */
  if (C.zf) goto L_120b7aa8;
  /* 120b7a92 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7a99 jne 0x120b7aa8 */
  if (!C.zf) goto L_120b7aa8;
  /* 120b7a9b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b7a9e push ecx */
  push32((uint32_t)(ECX));
  /* 120b7a9f call dword ptr [0x120dee5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120dee5c))), 0x120b7aa5u);
  /* 120b7aa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b7aa8:;
  /* 120b7aa8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 120b7aac cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7aaf jne 0x120b7aca */
  if (!C.zf) goto L_120b7aca;
  /* 120b7ab1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7ab4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 120b7ab9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b7abb jne 0x120b7aca */
  if (!C.zf) goto L_120b7aca;
  /* 120b7abd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b7ac0 push ecx */
  push32((uint32_t)(ECX));
  /* 120b7ac1 call dword ptr [0x120dee54] */
  call_ind((uint32_t)(r32((uint32_t)(0x120dee54))), 0x120b7ac7u);
  /* 120b7ac7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b7aca:;
  /* 120b7aca mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b7acd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120b7ad0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7ad3 jne 0x120b7ae7 */
  if (!C.zf) goto L_120b7ae7;
  /* 120b7ad5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7ad8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 120b7adb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b7ade mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b7ae1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7ae4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_120b7ae7:;
  /* 120b7ae7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b7aea push eax */
  push32((uint32_t)(EAX));
  /* 120b7aeb call 0x120b1210 */
  push32(0x120b7af0u); f_120b1210();
  /* 120b7af0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7af3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120b7af6 jmp 0x120b7e07 */
  goto L_120b7e07;
L_120b7afb:;
  /* 120b7afb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7afe or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 120b7b01 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b7b04 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 120b7b0e jmp 0x120b7b95 */
  goto L_120b7b95;
L_120b7b13:;
  /* 120b7b13 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 120b7b1d jmp 0x120b7b95 */
  goto L_120b7b95;
L_120b7b1f:;
  /* 120b7b1f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_120b7b29:;
  /* 120b7b29 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 120b7b33 jmp 0x120b7b3f */
  goto L_120b7b3f;
L_120b7b35:;
  /* 120b7b35 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_120b7b3f:;
  /* 120b7b3f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 120b7b49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7b4c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 120b7b52 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b7b54 je 0x120b7b73 */
  if (C.zf) goto L_120b7b73;
  /* 120b7b56 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 120b7b5d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 120b7b63 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7b66 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 120b7b6c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_120b7b73:;
  /* 120b7b73 jmp 0x120b7b95 */
  goto L_120b7b95;
L_120b7b75:;
  /* 120b7b75 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 120b7b7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7b82 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 120b7b88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b7b8a je 0x120b7b95 */
  if (C.zf) goto L_120b7b95;
  /* 120b7b8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7b8f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 120b7b92 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b7b95:;
  /* 120b7b95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7b98 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 120b7b9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b7b9f je 0x120b7bbe */
  if (C.zf) goto L_120b7bbe;
  /* 120b7ba1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 120b7ba4 push ecx */
  push32((uint32_t)(ECX));
  /* 120b7ba5 call 0x120b8230 */
  push32(0x120b7baau); f_120b8230();
  /* 120b7baa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7bad mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 120b7bb3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 120b7bb9 jmp 0x120b7c4f */
  goto L_120b7c4f;
L_120b7bbe:;
  /* 120b7bbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7bc1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 120b7bc4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b7bc6 je 0x120b7c10 */
  if (C.zf) goto L_120b7c10;
  /* 120b7bc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7bcb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 120b7bce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b7bd0 je 0x120b7bf0 */
  if (C.zf) goto L_120b7bf0;
  /* 120b7bd2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 120b7bd5 push ecx */
  push32((uint32_t)(ECX));
  /* 120b7bd6 call 0x120b8210 */
  push32(0x120b7bdbu); f_120b8210();
  /* 120b7bdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7bde movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 120b7be1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120b7be2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 120b7be8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 120b7bee jmp 0x120b7c0e */
  goto L_120b7c0e;
L_120b7bf0:;
  /* 120b7bf0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 120b7bf3 push edx */
  push32((uint32_t)(EDX));
  /* 120b7bf4 call 0x120b8210 */
  push32(0x120b7bf9u); f_120b8210();
  /* 120b7bf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7bfc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b7c01 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120b7c02 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 120b7c08 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_120b7c0e:;
  /* 120b7c0e jmp 0x120b7c4f */
  goto L_120b7c4f;
L_120b7c10:;
  /* 120b7c10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7c13 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 120b7c16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b7c18 je 0x120b7c35 */
  if (C.zf) goto L_120b7c35;
  /* 120b7c1a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 120b7c1d push ecx */
  push32((uint32_t)(ECX));
  /* 120b7c1e call 0x120b8210 */
  push32(0x120b7c23u); f_120b8210();
  /* 120b7c23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7c26 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120b7c27 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 120b7c2d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 120b7c33 jmp 0x120b7c4f */
  goto L_120b7c4f;
L_120b7c35:;
  /* 120b7c35 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 120b7c38 push edx */
  push32((uint32_t)(EDX));
  /* 120b7c39 call 0x120b8210 */
  push32(0x120b7c3eu); f_120b8210();
  /* 120b7c3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7c41 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b7c43 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 120b7c49 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_120b7c4f:;
  /* 120b7c4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7c52 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 120b7c55 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b7c57 je 0x120b7c97 */
  if (C.zf) goto L_120b7c97;
  /* 120b7c59 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7c60 jg 0x120b7c97 */
  if ((!C.zf&&C.sf==C.of)) goto L_120b7c97;
  /* 120b7c62 jl 0x120b7c6d */
  if ((C.sf!=C.of)) goto L_120b7c6d;
  /* 120b7c64 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7c6b jae 0x120b7c97 */
  if (!C.cf) goto L_120b7c97;
L_120b7c6d:;
  /* 120b7c6d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 120b7c73 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b7c75 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 120b7c7b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7c7e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b7c80 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 120b7c86 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 120b7c8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7c8f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 120b7c92 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b7c95 jmp 0x120b7caf */
  goto L_120b7caf;
L_120b7c97:;
  /* 120b7c97 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 120b7c9d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 120b7ca3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 120b7ca9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_120b7caf:;
  /* 120b7caf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7cb2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 120b7cb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b7cba jne 0x120b7cd7 */
  if (!C.zf) goto L_120b7cd7;
  /* 120b7cbc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 120b7cc2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 120b7cc8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 120b7ccb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 120b7cd1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_120b7cd7:;
  /* 120b7cd7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7cde jge 0x120b7cec */
  if ((C.sf==C.of)) goto L_120b7cec;
  /* 120b7ce0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 120b7cea jmp 0x120b7cf5 */
  goto L_120b7cf5;
L_120b7cec:;
  /* 120b7cec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7cef and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 120b7cf2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b7cf5:;
  /* 120b7cf5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 120b7cfb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 120b7d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b7d03 jne 0x120b7d0c */
  if (!C.zf) goto L_120b7d0c;
  /* 120b7d05 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_120b7d0c:;
  /* 120b7d0c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 120b7d0f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_120b7d12:;
  /* 120b7d12 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 120b7d18 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 120b7d1e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b7d21 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 120b7d27 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b7d29 jg 0x120b7d3f */
  if ((!C.zf&&C.sf==C.of)) goto L_120b7d3f;
  /* 120b7d2b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 120b7d31 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 120b7d37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b7d39 je 0x120b7dc0 */
  if (C.zf) goto L_120b7dc0;
L_120b7d3f:;
  /* 120b7d3f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 120b7d45 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120b7d46 push edx */
  push32((uint32_t)(EDX));
  /* 120b7d47 push eax */
  push32((uint32_t)(EAX));
  /* 120b7d48 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 120b7d4e push edx */
  push32((uint32_t)(EDX));
  /* 120b7d4f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 120b7d55 push eax */
  push32((uint32_t)(EAX));
  /* 120b7d56 call 0x120b70d0 */
  push32(0x120b7d5bu); f_120b70d0();
  /* 120b7d5b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7d5e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 120b7d64 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 120b7d6a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120b7d6b push edx */
  push32((uint32_t)(EDX));
  /* 120b7d6c push eax */
  push32((uint32_t)(EAX));
  /* 120b7d6d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 120b7d73 push ecx */
  push32((uint32_t)(ECX));
  /* 120b7d74 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 120b7d7a push edx */
  push32((uint32_t)(EDX));
  /* 120b7d7b call 0x120b7060 */
  push32(0x120b7d80u); f_120b7060();
  /* 120b7d80 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 120b7d86 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 120b7d8c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7d93 jle 0x120b7da7 */
  if ((C.zf||C.sf!=C.of)) goto L_120b7da7;
  /* 120b7d95 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 120b7d9b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7da1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_120b7da7:;
  /* 120b7da7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b7daa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 120b7db0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 120b7db2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b7db5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b7db8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120b7dbb jmp 0x120b7d12 */
  goto L_120b7d12;
L_120b7dc0:;
  /* 120b7dc0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 120b7dc3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b7dc6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 120b7dc9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b7dcc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7dcf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 120b7dd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7dd5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 120b7dda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b7ddc je 0x120b7e07 */
  if (C.zf) goto L_120b7e07;
  /* 120b7dde mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b7de1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120b7de4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7de7 jne 0x120b7def */
  if (!C.zf) goto L_120b7def;
  /* 120b7de9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7ded jne 0x120b7e07 */
  if (!C.zf) goto L_120b7e07;
L_120b7def:;
  /* 120b7def mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b7df2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b7df5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120b7df8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b7dfb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 120b7dfe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b7e01 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7e04 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_120b7e07:;
  /* 120b7e07 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7e0e jne 0x120b7fe2 */
  if (!C.zf) goto L_120b7fe2;
  /* 120b7e14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7e17 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 120b7e1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b7e1c je 0x120b7e6d */
  if (C.zf) goto L_120b7e6d;
  /* 120b7e1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7e21 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 120b7e27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b7e29 je 0x120b7e3b */
  if (C.zf) goto L_120b7e3b;
  /* 120b7e2b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 120b7e32 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 120b7e39 jmp 0x120b7e6d */
  goto L_120b7e6d;
L_120b7e3b:;
  /* 120b7e3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7e3e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120b7e41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b7e43 je 0x120b7e55 */
  if (C.zf) goto L_120b7e55;
  /* 120b7e45 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 120b7e4c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 120b7e53 jmp 0x120b7e6d */
  goto L_120b7e6d;
L_120b7e55:;
  /* 120b7e55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7e58 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 120b7e5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b7e5d je 0x120b7e6d */
  if (C.zf) goto L_120b7e6d;
  /* 120b7e5f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 120b7e66 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_120b7e6d:;
  /* 120b7e6d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 120b7e73 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b7e76 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b7e79 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 120b7e7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7e82 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 120b7e85 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b7e87 jne 0x120b7ea5 */
  if (!C.zf) goto L_120b7ea5;
  /* 120b7e89 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 120b7e8f push eax */
  push32((uint32_t)(EAX));
  /* 120b7e90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b7e93 push ecx */
  push32((uint32_t)(ECX));
  /* 120b7e94 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 120b7e9a push edx */
  push32((uint32_t)(EDX));
  /* 120b7e9b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 120b7e9d call 0x120b8180 */
  push32(0x120b7ea2u); f_120b8180();
  /* 120b7ea2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b7ea5:;
  /* 120b7ea5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 120b7eab push eax */
  push32((uint32_t)(EAX));
  /* 120b7eac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b7eaf push ecx */
  push32((uint32_t)(ECX));
  /* 120b7eb0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b7eb3 push edx */
  push32((uint32_t)(EDX));
  /* 120b7eb4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 120b7eba push eax */
  push32((uint32_t)(EAX));
  /* 120b7ebb call 0x120b81c0 */
  push32(0x120b7ec0u); f_120b81c0();
  /* 120b7ec0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7ec3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7ec6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 120b7ec9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b7ecb je 0x120b7ef3 */
  if (C.zf) goto L_120b7ef3;
  /* 120b7ecd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7ed0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120b7ed3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b7ed5 jne 0x120b7ef3 */
  if (!C.zf) goto L_120b7ef3;
  /* 120b7ed7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 120b7edd push eax */
  push32((uint32_t)(EAX));
  /* 120b7ede mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b7ee1 push ecx */
  push32((uint32_t)(ECX));
  /* 120b7ee2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 120b7ee8 push edx */
  push32((uint32_t)(EDX));
  /* 120b7ee9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 120b7eeb call 0x120b8180 */
  push32(0x120b7ef0u); f_120b8180();
  /* 120b7ef0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b7ef3:;
  /* 120b7ef3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7ef7 je 0x120b7fa1 */
  if (C.zf) goto L_120b7fa1;
  /* 120b7efd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7f01 jle 0x120b7fa1 */
  if ((C.zf||C.sf!=C.of)) goto L_120b7fa1;
  /* 120b7f07 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b7f0a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 120b7f10 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b7f13 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_120b7f19:;
  /* 120b7f19 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 120b7f1f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 120b7f25 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b7f28 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 120b7f2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b7f30 je 0x120b7f9f */
  if (C.zf) goto L_120b7f9f;
  /* 120b7f32 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 120b7f38 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 120b7f3b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 120b7f42 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 120b7f49 push eax */
  push32((uint32_t)(EAX));
  /* 120b7f4a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 120b7f50 push ecx */
  push32((uint32_t)(ECX));
  /* 120b7f51 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 120b7f57 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7f5a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 120b7f60 call 0x120bbe90 */
  push32(0x120b7f65u); f_120bbe90();
  /* 120b7f65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7f68 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 120b7f6e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b7f75 jg 0x120b7f79 */
  if ((!C.zf&&C.sf==C.of)) goto L_120b7f79;
  /* 120b7f77 jmp 0x120b7f9f */
  goto L_120b7f9f;
L_120b7f79:;
  /* 120b7f79 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 120b7f7f push eax */
  push32((uint32_t)(EAX));
  /* 120b7f80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b7f83 push ecx */
  push32((uint32_t)(ECX));
  /* 120b7f84 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 120b7f8a push edx */
  push32((uint32_t)(EDX));
  /* 120b7f8b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 120b7f91 push eax */
  push32((uint32_t)(EAX));
  /* 120b7f92 call 0x120b81c0 */
  push32(0x120b7f97u); f_120b81c0();
  /* 120b7f97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b7f9a jmp 0x120b7f19 */
  goto L_120b7f19;
L_120b7f9f:;
  /* 120b7f9f jmp 0x120b7fbc */
  goto L_120b7fbc;
L_120b7fa1:;
  /* 120b7fa1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 120b7fa7 push ecx */
  push32((uint32_t)(ECX));
  /* 120b7fa8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b7fab push edx */
  push32((uint32_t)(EDX));
  /* 120b7fac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b7faf push eax */
  push32((uint32_t)(EAX));
  /* 120b7fb0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b7fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b7fb4 call 0x120b81c0 */
  push32(0x120b7fb9u); f_120b81c0();
  /* 120b7fb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b7fbc:;
  /* 120b7fbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b7fbf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120b7fc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b7fc4 je 0x120b7fe2 */
  if (C.zf) goto L_120b7fe2;
  /* 120b7fc6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 120b7fcc push eax */
  push32((uint32_t)(EAX));
  /* 120b7fcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b7fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 120b7fd1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 120b7fd7 push edx */
  push32((uint32_t)(EDX));
  /* 120b7fd8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 120b7fda call 0x120b8180 */
  push32(0x120b7fdfu); f_120b8180();
  /* 120b7fdf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b7fe2:;
  /* 120b7fe2 jmp 0x120b73f4 */
  goto L_120b73f4;
L_120b7fe7:;
  /* 120b7fe7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 120b7fed pop edi */
  EDI = (pop32());
  /* 120b7fee pop esi */
  ESI = (pop32());
  /* 120b7fef pop ebx */
  EBX = (pop32());
  /* 120b7ff0 mov esp, ebp */
  ESP = (EBP);
  /* 120b7ff2 pop ebp */
  EBP = (pop32());
  /* 120b7ff3 ret  */
  ESPCHK(0x120b73d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018100 @ 0x120b8100 (119 bytes, 44 insns) */
void f_120b8100(void) {
  FTRACE(0x120b8100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8100 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8101 mov ebp, esp */
  EBP = (ESP);
  /* 120b8103 push ecx */
  push32((uint32_t)(ECX));
  /* 120b8104 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8107 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b810a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b810d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8110 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 120b8113 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8116 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b811a jl 0x120b8142 */
  if ((C.sf!=C.of)) goto L_120b8142;
  /* 120b811c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b811f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b8121 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 120b8124 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 120b8126 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 120b812a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120b8130 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b8133 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8136 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b8138 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b813b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b813e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120b8140 jmp 0x120b8155 */
  goto L_120b8155;
L_120b8142:;
  /* 120b8142 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8145 push edx */
  push32((uint32_t)(EDX));
  /* 120b8146 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8149 push eax */
  push32((uint32_t)(EAX));
  /* 120b814a call 0x120b7150 */
  push32(0x120b814fu); f_120b7150();
  /* 120b814f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8152 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b8155:;
  /* 120b8155 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8159 jne 0x120b8166 */
  if (!C.zf) goto L_120b8166;
  /* 120b815b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b815e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 120b8164 jmp 0x120b8173 */
  goto L_120b8173;
L_120b8166:;
  /* 120b8166 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b8169 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b816b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b816e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b8171 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_120b8173:;
  /* 120b8173 mov esp, ebp */
  ESP = (EBP);
  /* 120b8175 pop ebp */
  EBP = (pop32());
  /* 120b8176 ret  */
  ESPCHK(0x120b8100u, _esp0);
  ESP += 4; return;
}

/* FUN_10018180 @ 0x120b8180 (53 bytes, 23 insns) */
void f_120b8180(void) {
  FTRACE(0x120b8180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8180 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8181 mov ebp, esp */
  EBP = (ESP);
L_120b8183:;
  /* 120b8183 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8186 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8189 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b818c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 120b818f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b8191 jle 0x120b81b3 */
  if ((C.zf||C.sf!=C.of)) goto L_120b81b3;
  /* 120b8193 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b8196 push edx */
  push32((uint32_t)(EDX));
  /* 120b8197 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b819a push eax */
  push32((uint32_t)(EAX));
  /* 120b819b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b819e push ecx */
  push32((uint32_t)(ECX));
  /* 120b819f call 0x120b8100 */
  push32(0x120b81a4u); f_120b8100();
  /* 120b81a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b81a7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b81aa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b81ad jne 0x120b81b1 */
  if (!C.zf) goto L_120b81b1;
  /* 120b81af jmp 0x120b81b3 */
  goto L_120b81b3;
L_120b81b1:;
  /* 120b81b1 jmp 0x120b8183 */
  goto L_120b8183;
L_120b81b3:;
  /* 120b81b3 pop ebp */
  EBP = (pop32());
  /* 120b81b4 ret  */
  ESPCHK(0x120b8180u, _esp0);
  ESP += 4; return;
}

/* FUN_100181c0 @ 0x120b81c0 (74 bytes, 31 insns) */
void f_120b81c0(void) {
  FTRACE(0x120b81c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b81c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b81c1 mov ebp, esp */
  EBP = (ESP);
  /* 120b81c3 push ecx */
  push32((uint32_t)(ECX));
L_120b81c4:;
  /* 120b81c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b81c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b81ca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b81cd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 120b81d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b81d2 jle 0x120b8206 */
  if ((C.zf||C.sf!=C.of)) goto L_120b8206;
  /* 120b81d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b81d7 push edx */
  push32((uint32_t)(EDX));
  /* 120b81d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b81db push eax */
  push32((uint32_t)(EAX));
  /* 120b81dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b81df movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120b81e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b81e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b81e8 push eax */
  push32((uint32_t)(EAX));
  /* 120b81e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b81ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b81ef mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 120b81f2 call 0x120b8100 */
  push32(0x120b81f7u); f_120b8100();
  /* 120b81f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b81fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b81fd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8200 jne 0x120b8204 */
  if (!C.zf) goto L_120b8204;
  /* 120b8202 jmp 0x120b8206 */
  goto L_120b8206;
L_120b8204:;
  /* 120b8204 jmp 0x120b81c4 */
  goto L_120b81c4;
L_120b8206:;
  /* 120b8206 mov esp, ebp */
  ESP = (EBP);
  /* 120b8208 pop ebp */
  EBP = (pop32());
  /* 120b8209 ret  */
  ESPCHK(0x120b81c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018210 @ 0x120b8210 (26 bytes, 12 insns) */
void f_120b8210(void) {
  FTRACE(0x120b8210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8210 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8211 mov ebp, esp */
  EBP = (ESP);
  /* 120b8213 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8216 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b8218 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b821b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b821e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120b8220 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8223 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b8225 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 120b8228 pop ebp */
  EBP = (pop32());
  /* 120b8229 ret  */
  ESPCHK(0x120b8210u, _esp0);
  ESP += 4; return;
}

/* FUN_10018230 @ 0x120b8230 (31 bytes, 14 insns) */
void f_120b8230(void) {
  FTRACE(0x120b8230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8230 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8231 mov ebp, esp */
  EBP = (ESP);
  /* 120b8233 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8236 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b8238 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b823b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b823e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120b8240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8243 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b8245 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b8248 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 120b824a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b824d pop ebp */
  EBP = (pop32());
  /* 120b824e ret  */
  ESPCHK(0x120b8230u, _esp0);
  ESP += 4; return;
}

/* FUN_10018250 @ 0x120b8250 (27 bytes, 12 insns) */
void f_120b8250(void) {
  FTRACE(0x120b8250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8250 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8251 mov ebp, esp */
  EBP = (ESP);
  /* 120b8253 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8256 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b8258 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b825b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b825e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120b8260 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8263 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b8265 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 120b8269 pop ebp */
  EBP = (pop32());
  /* 120b826a ret  */
  ESPCHK(0x120b8250u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x120b8270 (145 bytes, 42 insns) */
void f_120b8270(void) {
  FTRACE(0x120b8270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8270 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8271 mov ebp, esp */
  EBP = (ESP);
  /* 120b8273 push ecx */
  push32((uint32_t)(ECX));
  /* 120b8274 call 0x120b8320 */
  push32(0x120b8279u); f_120b8320();
  /* 120b8279 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b827c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120b827e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b8285 jmp 0x120b8290 */
  goto L_120b8290;
L_120b8287:;
  /* 120b8287 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b828a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b828d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b8290:;
  /* 120b8290 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8294 jae 0x120b82ba */
  if (!C.cf) goto L_120b82ba;
  /* 120b8296 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b8299 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b829c cmp ecx, dword ptr [eax*8 + 0x120df518] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x120df518))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b82a3 jne 0x120b82b8 */
  if (!C.zf) goto L_120b82b8;
  /* 120b82a5 call 0x120b8310 */
  push32(0x120b82aau); f_120b8310();
  /* 120b82aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b82ad mov ecx, dword ptr [edx*8 + 0x120df51c] */
  ECX = (r32((uint32_t)(EDX*8 + 0x120df51c)));
  /* 120b82b4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120b82b6 jmp 0x120b82fd */
  goto L_120b82fd;
L_120b82b8:;
  /* 120b82b8 jmp 0x120b8287 */
  goto L_120b8287;
L_120b82ba:;
  /* 120b82ba cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b82be jb 0x120b82d3 */
  if (C.cf) goto L_120b82d3;
  /* 120b82c0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b82c4 ja 0x120b82d3 */
  if ((!C.cf&&!C.zf)) goto L_120b82d3;
  /* 120b82c6 call 0x120b8310 */
  push32(0x120b82cbu); f_120b8310();
  /* 120b82cb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 120b82d1 jmp 0x120b82fd */
  goto L_120b82fd;
L_120b82d3:;
  /* 120b82d3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b82da jb 0x120b82f2 */
  if (C.cf) goto L_120b82f2;
  /* 120b82dc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b82e3 ja 0x120b82f2 */
  if ((!C.cf&&!C.zf)) goto L_120b82f2;
  /* 120b82e5 call 0x120b8310 */
  push32(0x120b82eau); f_120b8310();
  /* 120b82ea mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 120b82f0 jmp 0x120b82fd */
  goto L_120b82fd;
L_120b82f2:;
  /* 120b82f2 call 0x120b8310 */
  push32(0x120b82f7u); f_120b8310();
  /* 120b82f7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_120b82fd:;
  /* 120b82fd mov esp, ebp */
  ESP = (EBP);
  /* 120b82ff pop ebp */
  EBP = (pop32());
  /* 120b8300 ret  */
  ESPCHK(0x120b8270u, _esp0);
  ESP += 4; return;
}

/* FUN_10018310 @ 0x120b8310 (13 bytes, 6 insns) */
void f_120b8310(void) {
  FTRACE(0x120b8310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8310 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8311 mov ebp, esp */
  EBP = (ESP);
  /* 120b8313 call 0x120af980 */
  push32(0x120b8318u); f_120af980();
  /* 120b8318 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b831b pop ebp */
  EBP = (pop32());
  /* 120b831c ret  */
  ESPCHK(0x120b8310u, _esp0);
  ESP += 4; return;
}

/* FUN_10018320 @ 0x120b8320 (13 bytes, 6 insns) */
void f_120b8320(void) {
  FTRACE(0x120b8320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8320 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8321 mov ebp, esp */
  EBP = (ESP);
  /* 120b8323 call 0x120af980 */
  push32(0x120b8328u); f_120af980();
  /* 120b8328 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b832b pop ebp */
  EBP = (pop32());
  /* 120b832c ret  */
  ESPCHK(0x120b8320u, _esp0);
  ESP += 4; return;
}

/* FUN_10018330 @ 0x120b8330 (85 bytes, 32 insns) */
void f_120b8330(void) {
  FTRACE(0x120b8330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8330 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8331 mov ebp, esp */
  EBP = (ESP);
  /* 120b8333 cmp dword ptr [0x120df758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120df758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b833a jne 0x120b8364 */
  if (!C.zf) goto L_120b8364;
  /* 120b833c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b833f push eax */
  push32((uint32_t)(EAX));
  /* 120b8340 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b8343 push ecx */
  push32((uint32_t)(ECX));
  /* 120b8344 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8347 push edx */
  push32((uint32_t)(EDX));
  /* 120b8348 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b834a push 0 */
  push32((uint32_t)(0x0u));
  /* 120b834c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b834f push eax */
  push32((uint32_t)(EAX));
  /* 120b8350 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8353 push ecx */
  push32((uint32_t)(ECX));
  /* 120b8354 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8357 push edx */
  push32((uint32_t)(EDX));
  /* 120b8358 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b835a call 0x120b8de0 */
  push32(0x120b835fu); f_120b8de0();
  /* 120b835f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8362 jmp 0x120b8383 */
  goto L_120b8383;
L_120b8364:;
  /* 120b8364 call 0x120b8310 */
  push32(0x120b8369u); f_120b8310();
  /* 120b8369 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 120b836f push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 120b8374 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b8377 push eax */
  push32((uint32_t)(EAX));
  /* 120b8378 call 0x120b8fd0 */
  push32(0x120b837du); f_120b8fd0();
  /* 120b837d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8380 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
L_120b8383:;
  /* 120b8383 pop ebp */
  EBP = (pop32());
  /* 120b8384 ret  */
  ESPCHK(0x120b8330u, _esp0);
  ESP += 4; return;
}

/* FUN_10018390 @ 0x120b8390 (103 bytes, 39 insns) */
void f_120b8390(void) {
  FTRACE(0x120b8390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8390 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8391 mov ebp, esp */
  EBP = (ESP);
  /* 120b8393 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b8396 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
  /* 120b8399 fadd qword ptr [ebp + 0x14] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + 0x14)));
  /* 120b839c fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 120b839f cmp dword ptr [0x120df758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120df758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b83a6 jne 0x120b83d4 */
  if (!C.zf) goto L_120b83d4;
  /* 120b83a8 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120b83ab push eax */
  push32((uint32_t)(EAX));
  /* 120b83ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b83af push ecx */
  push32((uint32_t)(ECX));
  /* 120b83b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b83b3 push edx */
  push32((uint32_t)(EDX));
  /* 120b83b4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b83b7 push eax */
  push32((uint32_t)(EAX));
  /* 120b83b8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b83bb push ecx */
  push32((uint32_t)(ECX));
  /* 120b83bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b83bf push edx */
  push32((uint32_t)(EDX));
  /* 120b83c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b83c3 push eax */
  push32((uint32_t)(EAX));
  /* 120b83c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b83c7 push ecx */
  push32((uint32_t)(ECX));
  /* 120b83c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b83ca call 0x120b8de0 */
  push32(0x120b83cfu); f_120b8de0();
  /* 120b83cf add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b83d2 jmp 0x120b83f3 */
  goto L_120b83f3;
L_120b83d4:;
  /* 120b83d4 call 0x120b8310 */
  push32(0x120b83d9u); f_120b8310();
  /* 120b83d9 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 120b83df push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 120b83e4 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120b83e7 push edx */
  push32((uint32_t)(EDX));
  /* 120b83e8 call 0x120b8fd0 */
  push32(0x120b83edu); f_120b8fd0();
  /* 120b83ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b83f0 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
L_120b83f3:;
  /* 120b83f3 mov esp, ebp */
  ESP = (EBP);
  /* 120b83f5 pop ebp */
  EBP = (pop32());
  /* 120b83f6 ret  */
  ESPCHK(0x120b8390u, _esp0);
  ESP += 4; return;
}

/* FUN_10018400 @ 0x120b8400 (178 bytes, 71 insns) */
void f_120b8400(void) {
  FTRACE(0x120b8400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8400 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8401 mov ebp, esp */
  EBP = (ESP);
  /* 120b8403 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b8406 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 120b8409 push eax */
  push32((uint32_t)(EAX));
  /* 120b840a lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 120b840d push ecx */
  push32((uint32_t)(ECX));
  /* 120b840e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8411 push edx */
  push32((uint32_t)(EDX));
  /* 120b8412 call 0x120b8a60 */
  push32(0x120b8417u); f_120b8a60();
  /* 120b8417 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b841a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b841c jne 0x120b8446 */
  if (!C.zf) goto L_120b8446;
  /* 120b841e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b8421 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 120b8423 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120b8426 lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 120b8429 push ecx */
  push32((uint32_t)(ECX));
  /* 120b842a lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 120b842d push edx */
  push32((uint32_t)(EDX));
  /* 120b842e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8431 push eax */
  push32((uint32_t)(EAX));
  /* 120b8432 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8435 push ecx */
  push32((uint32_t)(ECX));
  /* 120b8436 lea edx, [ebp + 0x20] */
  EDX = ((uint32_t)(EBP + 0x20));
  /* 120b8439 push edx */
  push32((uint32_t)(EDX));
  /* 120b843a lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 120b843d push eax */
  push32((uint32_t)(EAX));
  /* 120b843e call 0x120b8590 */
  push32(0x120b8443u); f_120b8590();
  /* 120b8443 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b8446:;
  /* 120b8446 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8449 push ecx */
  push32((uint32_t)(ECX));
  /* 120b844a call 0x120b8f00 */
  push32(0x120b844fu); f_120b8f00();
  /* 120b844f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8452 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b8455 cmp dword ptr [0x120df758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120df758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b845c jne 0x120b848e */
  if (!C.zf) goto L_120b848e;
  /* 120b845e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8462 je 0x120b848e */
  if (C.zf) goto L_120b848e;
  /* 120b8464 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 120b8467 push edx */
  push32((uint32_t)(EDX));
  /* 120b8468 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120b846b push eax */
  push32((uint32_t)(EAX));
  /* 120b846c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b846f push ecx */
  push32((uint32_t)(ECX));
  /* 120b8470 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b8472 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b8474 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b8477 push edx */
  push32((uint32_t)(EDX));
  /* 120b8478 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b847b push eax */
  push32((uint32_t)(EAX));
  /* 120b847c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b847f push ecx */
  push32((uint32_t)(ECX));
  /* 120b8480 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b8483 push edx */
  push32((uint32_t)(EDX));
  /* 120b8484 call 0x120b8de0 */
  push32(0x120b8489u); f_120b8de0();
  /* 120b8489 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b848c jmp 0x120b84ae */
  goto L_120b84ae;
L_120b848e:;
  /* 120b848e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b8491 push eax */
  push32((uint32_t)(EAX));
  /* 120b8492 call 0x120b8e80 */
  push32(0x120b8497u); f_120b8e80();
  /* 120b8497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b849a push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 120b849f mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 120b84a2 push ecx */
  push32((uint32_t)(ECX));
  /* 120b84a3 call 0x120b8fd0 */
  push32(0x120b84a8u); f_120b8fd0();
  /* 120b84a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b84ab fld qword ptr [ebp + 0x18] */
  fpu_push(rf64((uint32_t)(EBP + 0x18)));
L_120b84ae:;
  /* 120b84ae mov esp, ebp */
  ESP = (EBP);
  /* 120b84b0 pop ebp */
  EBP = (pop32());
  /* 120b84b1 ret  */
  ESPCHK(0x120b8400u, _esp0);
  ESP += 4; return;
}

/* FUN_100184c0 @ 0x120b84c0 (206 bytes, 81 insns) */
void f_120b84c0(void) {
  FTRACE(0x120b84c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b84c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b84c1 mov ebp, esp */
  EBP = (ESP);
  /* 120b84c3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b84c6 mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 120b84c9 push eax */
  push32((uint32_t)(EAX));
  /* 120b84ca lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 120b84cd push ecx */
  push32((uint32_t)(ECX));
  /* 120b84ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b84d1 push edx */
  push32((uint32_t)(EDX));
  /* 120b84d2 call 0x120b8a60 */
  push32(0x120b84d7u); f_120b8a60();
  /* 120b84d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b84da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b84dc jne 0x120b851e */
  if (!C.zf) goto L_120b851e;
  /* 120b84de mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b84e1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 120b84e3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120b84e6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b84e9 and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 120b84ec or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 120b84ef mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 120b84f2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b84f5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 120b84f8 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120b84fb mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 120b84fe lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 120b8501 push ecx */
  push32((uint32_t)(ECX));
  /* 120b8502 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 120b8505 push edx */
  push32((uint32_t)(EDX));
  /* 120b8506 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8509 push eax */
  push32((uint32_t)(EAX));
  /* 120b850a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b850d push ecx */
  push32((uint32_t)(ECX));
  /* 120b850e lea edx, [ebp + 0x28] */
  EDX = ((uint32_t)(EBP + 0x28));
  /* 120b8511 push edx */
  push32((uint32_t)(EDX));
  /* 120b8512 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 120b8515 push eax */
  push32((uint32_t)(EAX));
  /* 120b8516 call 0x120b8590 */
  push32(0x120b851bu); f_120b8590();
  /* 120b851b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b851e:;
  /* 120b851e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8521 push ecx */
  push32((uint32_t)(ECX));
  /* 120b8522 call 0x120b8f00 */
  push32(0x120b8527u); f_120b8f00();
  /* 120b8527 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b852a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b852d cmp dword ptr [0x120df758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120df758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8534 jne 0x120b856a */
  if (!C.zf) goto L_120b856a;
  /* 120b8536 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b853a je 0x120b856a */
  if (C.zf) goto L_120b856a;
  /* 120b853c mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 120b853f push edx */
  push32((uint32_t)(EDX));
  /* 120b8540 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 120b8543 push eax */
  push32((uint32_t)(EAX));
  /* 120b8544 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 120b8547 push ecx */
  push32((uint32_t)(ECX));
  /* 120b8548 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120b854b push edx */
  push32((uint32_t)(EDX));
  /* 120b854c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b854f push eax */
  push32((uint32_t)(EAX));
  /* 120b8550 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b8553 push ecx */
  push32((uint32_t)(ECX));
  /* 120b8554 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b8557 push edx */
  push32((uint32_t)(EDX));
  /* 120b8558 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b855b push eax */
  push32((uint32_t)(EAX));
  /* 120b855c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b855f push ecx */
  push32((uint32_t)(ECX));
  /* 120b8560 call 0x120b8de0 */
  push32(0x120b8565u); f_120b8de0();
  /* 120b8565 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8568 jmp 0x120b858a */
  goto L_120b858a;
L_120b856a:;
  /* 120b856a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b856d push edx */
  push32((uint32_t)(EDX));
  /* 120b856e call 0x120b8e80 */
  push32(0x120b8573u); f_120b8e80();
  /* 120b8573 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8576 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 120b857b mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 120b857e push eax */
  push32((uint32_t)(EAX));
  /* 120b857f call 0x120b8fd0 */
  push32(0x120b8584u); f_120b8fd0();
  /* 120b8584 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8587 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_120b858a:;
  /* 120b858a mov esp, ebp */
  ESP = (EBP);
  /* 120b858c pop ebp */
  EBP = (pop32());
  /* 120b858d ret  */
  ESPCHK(0x120b84c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018590 @ 0x120b8590 (1201 bytes, 425 insns) [1 switch table(s)] */
void f_120b8590(void) {
  FTRACE(0x120b8590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8590 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8591 mov ebp, esp */
  EBP = (ESP);
  /* 120b8593 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b8596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8599 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 120b85a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b85a3 mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 120b85aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b85ad mov dword ptr [edx + 0xc], 0 */
  w32((uint32_t)(EDX + 0xc), (0x0u));
  /* 120b85b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b85b7 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 120b85ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b85bc je 0x120b85d4 */
  if (C.zf) goto L_120b85d4;
  /* 120b85be mov dword ptr [ebp - 4], 0xc000008f */
  w32((uint32_t)(EBP + -0x4), (0xc000008fu));
  /* 120b85c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b85c8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b85cb or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120b85ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b85d1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_120b85d4:;
  /* 120b85d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b85d7 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 120b85da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b85dc je 0x120b85f3 */
  if (C.zf) goto L_120b85f3;
  /* 120b85de mov dword ptr [ebp - 4], 0xc0000093 */
  w32((uint32_t)(EBP + -0x4), (0xc0000093u));
  /* 120b85e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b85e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120b85eb or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 120b85ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b85f0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_120b85f3:;
  /* 120b85f3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b85f6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120b85f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b85fb je 0x120b8613 */
  if (C.zf) goto L_120b8613;
  /* 120b85fd mov dword ptr [ebp - 4], 0xc0000091 */
  w32((uint32_t)(EBP + -0x4), (0xc0000091u));
  /* 120b8604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8607 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b860a or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 120b860d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8610 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_120b8613:;
  /* 120b8613 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b8616 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 120b8619 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b861b je 0x120b8633 */
  if (C.zf) goto L_120b8633;
  /* 120b861d mov dword ptr [ebp - 4], 0xc000008e */
  w32((uint32_t)(EBP + -0x4), (0xc000008eu));
  /* 120b8624 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8627 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b862a or edx, 8 */
  { uint32_t _r=(EDX)|(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 120b862d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8630 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_120b8633:;
  /* 120b8633 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b8636 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 120b8639 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b863b je 0x120b8652 */
  if (C.zf) goto L_120b8652;
  /* 120b863d mov dword ptr [ebp - 4], 0xc0000090 */
  w32((uint32_t)(EBP + -0x4), (0xc0000090u));
  /* 120b8644 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8647 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120b864a or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 120b864c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b864f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_120b8652:;
  /* 120b8652 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8655 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b8657 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120b865a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b865c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b865e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120b865f and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120b8662 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120b8665 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8668 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120b866b and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 120b866e or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 120b8670 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8673 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 120b8676 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8679 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b867b and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120b867e neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b8680 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b8682 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 120b8683 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120b8686 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 120b8689 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b868c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120b868f and ecx, 0xfffffff7 */
  { uint32_t _r=(ECX)&(0xfffffff7u); ECX = (_r); fl_logic(_r,32); }
  /* 120b8692 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120b8694 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8697 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 120b869a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b869d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b869f and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 120b86a2 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b86a4 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b86a6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120b86a7 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120b86aa shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b86ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b86b0 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120b86b3 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 120b86b5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 120b86b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b86ba mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 120b86bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b86c0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b86c2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 120b86c5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b86c7 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b86c9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120b86ca and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120b86cd shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120b86cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b86d2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120b86d5 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 120b86d8 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 120b86da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b86dd mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 120b86e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b86e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b86e5 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 120b86e8 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b86ea sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b86ec inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 120b86ed and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120b86f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b86f3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120b86f6 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 120b86f9 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120b86fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b86fe mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 120b8701 call 0x120b8f90 */
  push32(0x120b8706u); f_120b8f90();
  /* 120b8706 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b8709 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b870c and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120b870f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b8711 je 0x120b8722 */
  if (C.zf) goto L_120b8722;
  /* 120b8713 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8716 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120b8719 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 120b871c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b871f mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_120b8722:;
  /* 120b8722 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b8725 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 120b8728 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b872a je 0x120b873a */
  if (C.zf) goto L_120b873a;
  /* 120b872c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b872f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120b8732 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 120b8734 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8737 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_120b873a:;
  /* 120b873a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b873d and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 120b8740 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b8742 je 0x120b8753 */
  if (C.zf) goto L_120b8753;
  /* 120b8744 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8747 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120b874a or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 120b874d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8750 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_120b8753:;
  /* 120b8753 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b8756 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 120b8759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b875b je 0x120b876c */
  if (C.zf) goto L_120b876c;
  /* 120b875d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8760 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120b8763 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 120b8766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8769 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_120b876c:;
  /* 120b876c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b876f and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 120b8772 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b8774 je 0x120b8784 */
  if (C.zf) goto L_120b8784;
  /* 120b8776 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8779 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120b877c or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 120b877e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8781 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_120b8784:;
  /* 120b8784 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8787 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b8789 and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 120b878e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b8791 cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8798 ja 0x120b87b4 */
  if ((!C.cf&&!C.zf)) goto L_120b87b4;
  /* 120b879a cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b87a1 je 0x120b87ce */
  if (C.zf) goto L_120b87ce;
  /* 120b87a3 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b87a7 je 0x120b87f2 */
  if (C.zf) goto L_120b87f2;
  /* 120b87a9 cmp dword ptr [ebp - 0xc], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b87b0 je 0x120b87e0 */
  if (C.zf) goto L_120b87e0;
  /* 120b87b2 jmp 0x120b87ff */
  goto L_120b87ff;
L_120b87b4:;
  /* 120b87b4 cmp dword ptr [ebp - 0xc], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b87bb je 0x120b87bf */
  if (C.zf) goto L_120b87bf;
  /* 120b87bd jmp 0x120b87ff */
  goto L_120b87ff;
L_120b87bf:;
  /* 120b87bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b87c2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b87c4 or edx, 3 */
  { uint32_t _r=(EDX)|(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 120b87c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b87ca mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120b87cc jmp 0x120b87ff */
  goto L_120b87ff;
L_120b87ce:;
  /* 120b87ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b87d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b87d3 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 120b87d6 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 120b87d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b87dc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120b87de jmp 0x120b87ff */
  goto L_120b87ff;
L_120b87e0:;
  /* 120b87e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b87e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b87e5 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 120b87e8 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120b87eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b87ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120b87f0 jmp 0x120b87ff */
  goto L_120b87ff;
L_120b87f2:;
  /* 120b87f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b87f5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b87f7 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 120b87fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b87fd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_120b87ff:;
  /* 120b87ff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8802 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b8804 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 120b880a mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 120b880d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8811 je 0x120b8848 */
  if (C.zf) goto L_120b8848;
  /* 120b8813 cmp dword ptr [ebp - 0x10], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b881a je 0x120b8836 */
  if (C.zf) goto L_120b8836;
  /* 120b881c cmp dword ptr [ebp - 0x10], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8823 je 0x120b8827 */
  if (C.zf) goto L_120b8827;
  /* 120b8825 jmp 0x120b8858 */
  goto L_120b8858;
L_120b8827:;
  /* 120b8827 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b882a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b882c and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 120b882f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8832 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120b8834 jmp 0x120b8858 */
  goto L_120b8858;
L_120b8836:;
  /* 120b8836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8839 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b883b and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 120b883e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 120b8841 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8844 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120b8846 jmp 0x120b8858 */
  goto L_120b8858;
L_120b8848:;
  /* 120b8848 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b884b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b884d and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 120b8850 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 120b8853 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8856 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120b8858:;
  /* 120b8858 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b885b and eax, 0xfff */
  { uint32_t _r=(EAX)&(0xfffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b8860 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120b8863 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8866 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b8868 and edx, 0xfffe001f */
  { uint32_t _r=(EDX)&(0xfffe001fu); EDX = (_r); fl_logic(_r,32); }
  /* 120b886e or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 120b8870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8873 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120b8875 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8878 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 120b887b or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120b887e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8881 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 120b8884 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8887 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 120b888a and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 120b888d or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 120b8890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8893 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 120b8896 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8899 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b889c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b889e mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 120b88a1 mov edx, dword ptr [edx + 4] */
  EDX = (r32((uint32_t)(EDX + 0x4)));
  /* 120b88a4 mov dword ptr [ecx + 0x14], edx */
  w32((uint32_t)(ECX + 0x14), (EDX));
  /* 120b88a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b88aa mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 120b88ad or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120b88b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b88b3 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 120b88b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b88b9 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 120b88bc and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 120b88bf or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 120b88c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b88c5 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 120b88c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b88cb mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120b88ce mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b88d0 mov dword ptr [eax + 0x40], edx */
  w32((uint32_t)(EAX + 0x40), (EDX));
  /* 120b88d3 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b88d6 mov dword ptr [eax + 0x44], ecx */
  w32((uint32_t)(EAX + 0x44), (ECX));
  /* 120b88d9 call 0x120b8fb0 */
  push32(0x120b88deu); f_120b8fb0();
  /* 120b88de lea edx, [ebp + 8] */
  EDX = ((uint32_t)(EBP + 0x8));
  /* 120b88e1 push edx */
  push32((uint32_t)(EDX));
  /* 120b88e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b88e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b88e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b88e9 push eax */
  push32((uint32_t)(EAX));
  /* 120b88ea call dword ptr [0x120e3380] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3380))), 0x120b88f0u);
  /* 120b88f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b88f3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120b88f6 shr edx, 4 */
  EDX = (sh_shr((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 120b88f9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120b88fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b88fe je 0x120b890d */
  if (C.zf) goto L_120b890d;
  /* 120b8900 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8903 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b8905 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 120b8908 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b890b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120b890d:;
  /* 120b890d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8910 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120b8913 shr ecx, 3 */
  ECX = (sh_shr((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 120b8916 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120b8919 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b891b je 0x120b8929 */
  if (C.zf) goto L_120b8929;
  /* 120b891d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8920 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b8922 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 120b8924 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8927 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_120b8929:;
  /* 120b8929 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b892c mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120b892f shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 120b8932 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120b8935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b8937 je 0x120b8946 */
  if (C.zf) goto L_120b8946;
  /* 120b8939 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b893c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b893e and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 120b8941 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8944 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_120b8946:;
  /* 120b8946 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8949 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120b894c shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 120b894e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120b8951 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b8953 je 0x120b8962 */
  if (C.zf) goto L_120b8962;
  /* 120b8955 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8958 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b895a and ecx, 0xffffffef */
  { uint32_t _r=(ECX)&(0xffffffefu); ECX = (_r); fl_logic(_r,32); }
  /* 120b895d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8960 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120b8962:;
  /* 120b8962 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8965 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120b8968 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120b896b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b896d je 0x120b897b */
  if (C.zf) goto L_120b897b;
  /* 120b896f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8972 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b8974 and al, 0xdf */
  { uint32_t _r=(AL)&(0xdfu); AL = (_r); fl_logic(_r,8); }
  /* 120b8976 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8979 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_120b897b:;
  /* 120b897b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b897e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b8980 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 120b8983 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120b8986 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b898a ja 0x120b89d9 */
  if ((!C.cf&&!C.zf)) goto L_120b89d9;
  /* 120b898c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b898f jmp dword ptr [ecx*4 + 0x120b8a41] */
  switch (ECX) {
    case 0: goto L_120b89cc;
    case 1: goto L_120b89ba;
    case 2: goto L_120b89a8;
    case 3: goto L_120b8996;
    default: x86_unimpl("switch@0x120b898f out of table"); return;
  }
L_120b8996:;
  /* 120b8996 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8999 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b899b and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 120b899e or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 120b89a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b89a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120b89a6 jmp 0x120b89d9 */
  goto L_120b89d9;
L_120b89a8:;
  /* 120b89a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b89ab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b89ad and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 120b89b0 or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 120b89b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b89b6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120b89b8 jmp 0x120b89d9 */
  goto L_120b89d9;
L_120b89ba:;
  /* 120b89ba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b89bd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b89bf and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 120b89c2 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 120b89c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b89c8 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120b89ca jmp 0x120b89d9 */
  goto L_120b89d9;
L_120b89cc:;
  /* 120b89cc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b89cf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b89d1 and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 120b89d4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b89d7 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_120b89d9:;
  /* 120b89d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b89dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b89de shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 120b89e1 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 120b89e4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120b89e7 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b89eb je 0x120b89fb */
  if (C.zf) goto L_120b89fb;
  /* 120b89ed cmp dword ptr [ebp - 0x18], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b89f1 je 0x120b8a0d */
  if (C.zf) goto L_120b8a0d;
  /* 120b89f3 cmp dword ptr [ebp - 0x18], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b89f7 je 0x120b8a1f */
  if (C.zf) goto L_120b8a1f;
  /* 120b89f9 jmp 0x120b8a2c */
  goto L_120b8a2c;
L_120b89fb:;
  /* 120b89fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b89fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b8a00 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 120b8a03 or dh, 3 */
  { uint32_t _r=(C.d.b.h)|(0x3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 120b8a06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8a09 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120b8a0b jmp 0x120b8a2c */
  goto L_120b8a2c;
L_120b8a0d:;
  /* 120b8a0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8a10 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b8a12 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 120b8a15 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 120b8a18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8a1b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120b8a1d jmp 0x120b8a2c */
  goto L_120b8a2c;
L_120b8a1f:;
  /* 120b8a1f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8a22 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b8a24 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 120b8a27 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8a2a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_120b8a2c:;
  /* 120b8a2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8a2f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120b8a32 mov eax, dword ptr [ecx + 0x40] */
  EAX = (r32((uint32_t)(ECX + 0x40)));
  /* 120b8a35 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120b8a37 mov ecx, dword ptr [ecx + 0x44] */
  ECX = (r32((uint32_t)(ECX + 0x44)));
  /* 120b8a3a mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 120b8a3d mov esp, ebp */
  ESP = (EBP);
  /* 120b8a3f pop ebp */
  EBP = (pop32());
  /* 120b8a40 ret  */
  ESPCHK(0x120b8590u, _esp0);
  ESP += 4; return;
}

/* FUN_10018a60 @ 0x120b8a60 (882 bytes, 268 insns) */
void f_120b8a60(void) {
  FTRACE(0x120b8a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8a60 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8a61 mov ebp, esp */
  EBP = (ESP);
  /* 120b8a63 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b8a66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8a69 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 120b8a6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b8a6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8a72 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 120b8a75 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b8a77 je 0x120b8a9a */
  if (C.zf) goto L_120b8a9a;
  /* 120b8a79 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b8a7c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120b8a7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b8a81 je 0x120b8a9a */
  if (C.zf) goto L_120b8a9a;
  /* 120b8a83 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b8a85 call 0x120b9010 */
  push32(0x120b8a8au); f_120b9010();
  /* 120b8a8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8a8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b8a90 and al, 0xf7 */
  { uint32_t _r=(AL)&(0xf7u); AL = (_r); fl_logic(_r,8); }
  /* 120b8a92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b8a95 jmp 0x120b8d9e */
  goto L_120b8d9e;
L_120b8a9a:;
  /* 120b8a9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8a9d and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 120b8aa0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b8aa2 je 0x120b8ac5 */
  if (C.zf) goto L_120b8ac5;
  /* 120b8aa4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b8aa7 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120b8aaa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b8aac je 0x120b8ac5 */
  if (C.zf) goto L_120b8ac5;
  /* 120b8aae push 4 */
  push32((uint32_t)(0x4u));
  /* 120b8ab0 call 0x120b9010 */
  push32(0x120b8ab5u); f_120b9010();
  /* 120b8ab5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8ab8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b8abb and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 120b8abd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b8ac0 jmp 0x120b8d9e */
  goto L_120b8d9e;
L_120b8ac5:;
  /* 120b8ac5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8ac8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120b8acb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b8acd je 0x120b8c41 */
  if (C.zf) goto L_120b8c41;
  /* 120b8ad3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b8ad6 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 120b8ad9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b8adb je 0x120b8c41 */
  if (C.zf) goto L_120b8c41;
  /* 120b8ae1 push 8 */
  push32((uint32_t)(0x8u));
  /* 120b8ae3 call 0x120b9010 */
  push32(0x120b8ae8u); f_120b9010();
  /* 120b8ae8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8aeb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b8aee and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 120b8af3 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120b8af6 cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8afd ja 0x120b8b20 */
  if ((!C.cf&&!C.zf)) goto L_120b8b20;
  /* 120b8aff cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8b06 je 0x120b8b75 */
  if (C.zf) goto L_120b8b75;
  /* 120b8b08 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8b0c je 0x120b8b32 */
  if (C.zf) goto L_120b8b32;
  /* 120b8b0e cmp dword ptr [ebp - 0x20], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8b15 je 0x120b8bb5 */
  if (C.zf) goto L_120b8bb5;
  /* 120b8b1b jmp 0x120b8c33 */
  goto L_120b8c33;
L_120b8b20:;
  /* 120b8b20 cmp dword ptr [ebp - 0x20], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8b27 je 0x120b8bf5 */
  if (C.zf) goto L_120b8bf5;
  /* 120b8b2d jmp 0x120b8c33 */
  goto L_120b8c33;
L_120b8b32:;
  /* 120b8b32 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8b35 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 120b8b37 fcomp qword ptr [0x120db698] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x120db698)));
  (void)fpu_pop();
  /* 120b8b3d fnstsw ax */
  AX = fpu_status();
  /* 120b8b3f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 120b8b42 jne 0x120b8b57 */
  if (!C.zf) goto L_120b8b57;
  /* 120b8b44 mov edx, dword ptr [0x120dfb48] */
  EDX = (r32((uint32_t)(0x120dfb48)));
  /* 120b8b4a mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 120b8b4d mov eax, dword ptr [0x120dfb4c] */
  EAX = (r32((uint32_t)(0x120dfb4c)));
  /* 120b8b52 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120b8b55 jmp 0x120b8b62 */
  goto L_120b8b62;
L_120b8b57:;
  /* 120b8b57 fld qword ptr [0x120dfb48] */
  fpu_push(rf64((uint32_t)(0x120dfb48)));
  /* 120b8b5d fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 120b8b5f fstp qword ptr [ebp - 0x28] */
  wf64((uint32_t)(EBP + -0x28), FPU_ST(0));
  (void)fpu_pop();
L_120b8b62:;
  /* 120b8b62 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8b65 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b8b68 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120b8b6a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b8b6d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 120b8b70 jmp 0x120b8c33 */
  goto L_120b8c33;
L_120b8b75:;
  /* 120b8b75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8b78 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 120b8b7a fcomp qword ptr [0x120db698] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x120db698)));
  (void)fpu_pop();
  /* 120b8b80 fnstsw ax */
  AX = fpu_status();
  /* 120b8b82 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 120b8b85 jne 0x120b8b9a */
  if (!C.zf) goto L_120b8b9a;
  /* 120b8b87 mov edx, dword ptr [0x120dfb48] */
  EDX = (r32((uint32_t)(0x120dfb48)));
  /* 120b8b8d mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 120b8b90 mov eax, dword ptr [0x120dfb4c] */
  EAX = (r32((uint32_t)(0x120dfb4c)));
  /* 120b8b95 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 120b8b98 jmp 0x120b8ba5 */
  goto L_120b8ba5;
L_120b8b9a:;
  /* 120b8b9a fld qword ptr [0x120dfb58] */
  fpu_push(rf64((uint32_t)(0x120dfb58)));
  /* 120b8ba0 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 120b8ba2 fstp qword ptr [ebp - 0x30] */
  wf64((uint32_t)(EBP + -0x30), FPU_ST(0));
  (void)fpu_pop();
L_120b8ba5:;
  /* 120b8ba5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8ba8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b8bab mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120b8bad mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b8bb0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 120b8bb3 jmp 0x120b8c33 */
  goto L_120b8c33;
L_120b8bb5:;
  /* 120b8bb5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8bb8 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 120b8bba fcomp qword ptr [0x120db698] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x120db698)));
  (void)fpu_pop();
  /* 120b8bc0 fnstsw ax */
  AX = fpu_status();
  /* 120b8bc2 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 120b8bc5 jne 0x120b8bda */
  if (!C.zf) goto L_120b8bda;
  /* 120b8bc7 mov edx, dword ptr [0x120dfb58] */
  EDX = (r32((uint32_t)(0x120dfb58)));
  /* 120b8bcd mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 120b8bd0 mov eax, dword ptr [0x120dfb5c] */
  EAX = (r32((uint32_t)(0x120dfb5c)));
  /* 120b8bd5 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 120b8bd8 jmp 0x120b8be5 */
  goto L_120b8be5;
L_120b8bda:;
  /* 120b8bda fld qword ptr [0x120dfb48] */
  fpu_push(rf64((uint32_t)(0x120dfb48)));
  /* 120b8be0 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 120b8be2 fstp qword ptr [ebp - 0x38] */
  wf64((uint32_t)(EBP + -0x38), FPU_ST(0));
  (void)fpu_pop();
L_120b8be5:;
  /* 120b8be5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8be8 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b8beb mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120b8bed mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 120b8bf0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 120b8bf3 jmp 0x120b8c33 */
  goto L_120b8c33;
L_120b8bf5:;
  /* 120b8bf5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8bf8 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 120b8bfa fcomp qword ptr [0x120db698] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x120db698)));
  (void)fpu_pop();
  /* 120b8c00 fnstsw ax */
  AX = fpu_status();
  /* 120b8c02 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 120b8c05 jne 0x120b8c1a */
  if (!C.zf) goto L_120b8c1a;
  /* 120b8c07 mov edx, dword ptr [0x120dfb58] */
  EDX = (r32((uint32_t)(0x120dfb58)));
  /* 120b8c0d mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 120b8c10 mov eax, dword ptr [0x120dfb5c] */
  EAX = (r32((uint32_t)(0x120dfb5c)));
  /* 120b8c15 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 120b8c18 jmp 0x120b8c25 */
  goto L_120b8c25;
L_120b8c1a:;
  /* 120b8c1a fld qword ptr [0x120dfb58] */
  fpu_push(rf64((uint32_t)(0x120dfb58)));
  /* 120b8c20 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 120b8c22 fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
L_120b8c25:;
  /* 120b8c25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8c28 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 120b8c2b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120b8c2d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b8c30 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_120b8c33:;
  /* 120b8c33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b8c36 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 120b8c39 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b8c3c jmp 0x120b8d9e */
  goto L_120b8d9e;
L_120b8c41:;
  /* 120b8c41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8c44 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 120b8c47 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b8c49 je 0x120b8d9e */
  if (C.zf) goto L_120b8d9e;
  /* 120b8c4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b8c52 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 120b8c55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b8c57 je 0x120b8d9e */
  if (C.zf) goto L_120b8d9e;
  /* 120b8c5d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120b8c64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8c67 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 120b8c6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b8c6c je 0x120b8c75 */
  if (C.zf) goto L_120b8c75;
  /* 120b8c6e mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_120b8c75:;
  /* 120b8c75 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8c78 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 120b8c7a fcomp qword ptr [0x120db698] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x120db698)));
  (void)fpu_pop();
  /* 120b8c80 fnstsw ax */
  AX = fpu_status();
  /* 120b8c82 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 120b8c85 jne 0x120b8d7e */
  if (!C.zf) goto L_120b8d7e;
  /* 120b8c8b lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 120b8c8e push eax */
  push32((uint32_t)(EAX));
  /* 120b8c8f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8c92 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b8c95 push edx */
  push32((uint32_t)(EDX));
  /* 120b8c96 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 120b8c98 push eax */
  push32((uint32_t)(EAX));
  /* 120b8c99 call 0x120bc120 */
  push32(0x120b8c9eu); f_120bc120();
  /* 120b8c9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8ca1 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 120b8ca4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b8ca7 sub ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b8cad mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120b8cb0 cmp dword ptr [ebp - 0x14], 0xfffffbce */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffbceu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8cb7 jge 0x120b8cd1 */
  if ((C.sf==C.of)) goto L_120b8cd1;
  /* 120b8cb9 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 120b8cbc fmul qword ptr [0x120db698] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x120db698)));
  /* 120b8cc2 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 120b8cc5 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 120b8ccc jmp 0x120b8d6e */
  goto L_120b8d6e;
L_120b8cd1:;
  /* 120b8cd1 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 120b8cd4 fcomp qword ptr [0x120db698] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x120db698)));
  (void)fpu_pop();
  /* 120b8cda fnstsw ax */
  AX = fpu_status();
  /* 120b8cdc test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 120b8cdf je 0x120b8cea */
  if (C.zf) goto L_120b8cea;
  /* 120b8ce1 mov dword ptr [ebp - 0x44], 1 */
  w32((uint32_t)(EBP + -0x44), (0x1u));
  /* 120b8ce8 jmp 0x120b8cf1 */
  goto L_120b8cf1;
L_120b8cea:;
  /* 120b8cea mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
L_120b8cf1:;
  /* 120b8cf1 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 120b8cf4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 120b8cf7 mov ax, word ptr [ebp - 0xa] */
  AX = (r16((uint32_t)(EBP + -0xa)));
  /* 120b8cfb and ax, 0xf */
  { uint32_t _r=(AX)&(0xfu); AX = (_r); fl_logic(_r,16); }
  /* 120b8cff mov word ptr [ebp - 0xa], ax */
  w16((uint32_t)(EBP + -0xa), (AX));
  /* 120b8d03 mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 120b8d07 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 120b8d0a mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
  /* 120b8d0e jmp 0x120b8d19 */
  goto L_120b8d19;
L_120b8d10:;
  /* 120b8d10 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b8d13 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8d16 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_120b8d19:;
  /* 120b8d19 cmp dword ptr [ebp - 0x14], 0xfffffc03 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffc03u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8d20 jge 0x120b8d60 */
  if ((C.sf==C.of)) goto L_120b8d60;
  /* 120b8d22 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b8d25 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120b8d28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b8d2a je 0x120b8d39 */
  if (C.zf) goto L_120b8d39;
  /* 120b8d2c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8d30 jne 0x120b8d39 */
  if (!C.zf) goto L_120b8d39;
  /* 120b8d32 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_120b8d39:;
  /* 120b8d39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b8d3c shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120b8d3e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120b8d41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b8d44 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120b8d47 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b8d49 je 0x120b8d56 */
  if (C.zf) goto L_120b8d56;
  /* 120b8d4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b8d4e or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 120b8d53 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_120b8d56:;
  /* 120b8d56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b8d59 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120b8d5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120b8d5e jmp 0x120b8d10 */
  goto L_120b8d10;
L_120b8d60:;
  /* 120b8d60 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8d64 je 0x120b8d6e */
  if (C.zf) goto L_120b8d6e;
  /* 120b8d66 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 120b8d69 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 120b8d6b fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
L_120b8d6e:;
  /* 120b8d6e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8d71 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b8d74 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120b8d76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b8d79 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 120b8d7c jmp 0x120b8d85 */
  goto L_120b8d85;
L_120b8d7e:;
  /* 120b8d7e mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_120b8d85:;
  /* 120b8d85 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8d89 je 0x120b8d95 */
  if (C.zf) goto L_120b8d95;
  /* 120b8d8b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 120b8d8d call 0x120b9010 */
  push32(0x120b8d92u); f_120b9010();
  /* 120b8d92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b8d95:;
  /* 120b8d95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b8d98 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 120b8d9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b8d9e:;
  /* 120b8d9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8da1 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 120b8da4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b8da6 je 0x120b8dc5 */
  if (C.zf) goto L_120b8dc5;
  /* 120b8da8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b8dab and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 120b8dae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b8db0 je 0x120b8dc5 */
  if (C.zf) goto L_120b8dc5;
  /* 120b8db2 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 120b8db4 call 0x120b9010 */
  push32(0x120b8db9u); f_120b9010();
  /* 120b8db9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8dbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b8dbf and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 120b8dc2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b8dc5:;
  /* 120b8dc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b8dc7 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8dcb sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 120b8dce mov esp, ebp */
  ESP = (EBP);
  /* 120b8dd0 pop ebp */
  EBP = (pop32());
  /* 120b8dd1 ret  */
  ESPCHK(0x120b8a60u, _esp0);
  ESP += 4; return;
}

/* __umatherr @ 0x120b8de0 (155 bytes, 54 insns) */
void f_120b8de0(void) {
  FTRACE(0x120b8de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8de0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8de1 mov ebp, esp */
  EBP = (ESP);
  /* 120b8de3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b8de6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8de9 push eax */
  push32((uint32_t)(EAX));
  /* 120b8dea call 0x120b8ec0 */
  push32(0x120b8defu); f_120b8ec0();
  /* 120b8def add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8df2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120b8df5 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8df9 je 0x120b8e57 */
  if (C.zf) goto L_120b8e57;
  /* 120b8dfb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8dfe mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 120b8e01 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b8e04 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 120b8e07 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b8e0a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120b8e0d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b8e10 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120b8e13 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120b8e16 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120b8e19 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 120b8e1c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b8e1f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 120b8e22 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b8e25 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 120b8e2a mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 120b8e2d push edx */
  push32((uint32_t)(EDX));
  /* 120b8e2e call 0x120b8fd0 */
  push32(0x120b8e33u); f_120b8fd0();
  /* 120b8e33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8e36 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 120b8e39 push eax */
  push32((uint32_t)(EAX));
  /* 120b8e3a call 0x120b8f80 */
  push32(0x120b8e3fu); f_120b8f80();
  /* 120b8e3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8e42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b8e44 jne 0x120b8e52 */
  if (!C.zf) goto L_120b8e52;
  /* 120b8e46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8e49 push ecx */
  push32((uint32_t)(ECX));
  /* 120b8e4a call 0x120b8e80 */
  push32(0x120b8e4fu); f_120b8e80();
  /* 120b8e4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b8e52:;
  /* 120b8e52 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 120b8e55 jmp 0x120b8e77 */
  goto L_120b8e77;
L_120b8e57:;
  /* 120b8e57 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 120b8e5c mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 120b8e5f push edx */
  push32((uint32_t)(EDX));
  /* 120b8e60 call 0x120b8fd0 */
  push32(0x120b8e65u); f_120b8fd0();
  /* 120b8e65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8e68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8e6b push eax */
  push32((uint32_t)(EAX));
  /* 120b8e6c call 0x120b8e80 */
  push32(0x120b8e71u); f_120b8e80();
  /* 120b8e71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8e74 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_120b8e77:;
  /* 120b8e77 mov esp, ebp */
  ESP = (EBP);
  /* 120b8e79 pop ebp */
  EBP = (pop32());
  /* 120b8e7a ret  */
  ESPCHK(0x120b8de0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__set_errno_from_matherr @ 0x120b8e80 (58 bytes, 20 insns) */
void f_120b8e80(void) {
  FTRACE(0x120b8e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8e80 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8e81 mov ebp, esp */
  EBP = (ESP);
  /* 120b8e83 push ecx */
  push32((uint32_t)(ECX));
  /* 120b8e84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8e87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b8e8a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8e8e je 0x120b8e9e */
  if (C.zf) goto L_120b8e9e;
  /* 120b8e90 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8e94 jle 0x120b8eb6 */
  if ((C.zf||C.sf!=C.of)) goto L_120b8eb6;
  /* 120b8e96 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8e9a jle 0x120b8eab */
  if ((C.zf||C.sf!=C.of)) goto L_120b8eab;
  /* 120b8e9c jmp 0x120b8eb6 */
  goto L_120b8eb6;
L_120b8e9e:;
  /* 120b8e9e call 0x120b8310 */
  push32(0x120b8ea3u); f_120b8310();
  /* 120b8ea3 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 120b8ea9 jmp 0x120b8eb6 */
  goto L_120b8eb6;
L_120b8eab:;
  /* 120b8eab call 0x120b8310 */
  push32(0x120b8eb0u); f_120b8310();
  /* 120b8eb0 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
L_120b8eb6:;
  /* 120b8eb6 mov esp, ebp */
  ESP = (EBP);
  /* 120b8eb8 pop ebp */
  EBP = (pop32());
  /* 120b8eb9 ret  */
  ESPCHK(0x120b8e80u, _esp0);
  ESP += 4; return;
}

/* __get_fname @ 0x120b8ec0 (63 bytes, 22 insns) */
void f_120b8ec0(void) {
  FTRACE(0x120b8ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8ec1 mov ebp, esp */
  EBP = (ESP);
  /* 120b8ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b8ec4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b8ecb jmp 0x120b8ed6 */
  goto L_120b8ed6;
L_120b8ecd:;
  /* 120b8ecd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b8ed0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b8ed3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b8ed6:;
  /* 120b8ed6 cmp dword ptr [ebp - 4], 0x1b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8eda jge 0x120b8ef9 */
  if ((C.sf==C.of)) goto L_120b8ef9;
  /* 120b8edc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b8edf mov edx, dword ptr [ecx*8 + 0x120df680] */
  EDX = (r32((uint32_t)(ECX*8 + 0x120df680)));
  /* 120b8ee6 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b8ee9 jne 0x120b8ef7 */
  if (!C.zf) goto L_120b8ef7;
  /* 120b8eeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b8eee mov eax, dword ptr [eax*8 + 0x120df684] */
  EAX = (r32((uint32_t)(EAX*8 + 0x120df684)));
  /* 120b8ef5 jmp 0x120b8efb */
  goto L_120b8efb;
L_120b8ef7:;
  /* 120b8ef7 jmp 0x120b8ecd */
  goto L_120b8ecd;
L_120b8ef9:;
  /* 120b8ef9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120b8efb:;
  /* 120b8efb mov esp, ebp */
  ESP = (EBP);
  /* 120b8efd pop ebp */
  EBP = (pop32());
  /* 120b8efe ret  */
  ESPCHK(0x120b8ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018f00 @ 0x120b8f00 (113 bytes, 38 insns) */
void f_120b8f00(void) {
  FTRACE(0x120b8f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8f00 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8f01 mov ebp, esp */
  EBP = (ESP);
  /* 120b8f03 push ecx */
  push32((uint32_t)(ECX));
  /* 120b8f04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8f07 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 120b8f0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b8f0c je 0x120b8f17 */
  if (C.zf) goto L_120b8f17;
  /* 120b8f0e mov dword ptr [ebp - 4], 5 */
  w32((uint32_t)(EBP + -0x4), (0x5u));
  /* 120b8f15 jmp 0x120b8f6a */
  goto L_120b8f6a;
L_120b8f17:;
  /* 120b8f17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8f1a and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 120b8f1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b8f1f je 0x120b8f2a */
  if (C.zf) goto L_120b8f2a;
  /* 120b8f21 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120b8f28 jmp 0x120b8f6a */
  goto L_120b8f6a;
L_120b8f2a:;
  /* 120b8f2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8f2d and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120b8f30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b8f32 je 0x120b8f3d */
  if (C.zf) goto L_120b8f3d;
  /* 120b8f34 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 120b8f3b jmp 0x120b8f6a */
  goto L_120b8f6a;
L_120b8f3d:;
  /* 120b8f3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8f40 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120b8f43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b8f45 je 0x120b8f50 */
  if (C.zf) goto L_120b8f50;
  /* 120b8f47 mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 120b8f4e jmp 0x120b8f6a */
  goto L_120b8f6a;
L_120b8f50:;
  /* 120b8f50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8f53 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 120b8f56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b8f58 je 0x120b8f63 */
  if (C.zf) goto L_120b8f63;
  /* 120b8f5a mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 120b8f61 jmp 0x120b8f6a */
  goto L_120b8f6a;
L_120b8f63:;
  /* 120b8f63 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120b8f6a:;
  /* 120b8f6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b8f6d mov esp, ebp */
  ESP = (EBP);
  /* 120b8f6f pop ebp */
  EBP = (pop32());
  /* 120b8f70 ret  */
  ESPCHK(0x120b8f00u, _esp0);
  ESP += 4; return;
}

/* __matherr @ 0x120b8f80 (7 bytes, 5 insns) */
void f_120b8f80(void) {
  FTRACE(0x120b8f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8f80 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8f81 mov ebp, esp */
  EBP = (ESP);
  /* 120b8f83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b8f85 pop ebp */
  EBP = (pop32());
  /* 120b8f86 ret  */
  ESPCHK(0x120b8f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10018f90 @ 0x120b8f90 (22 bytes, 15 insns) */
void f_120b8f90(void) {
  FTRACE(0x120b8f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8f90 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8f91 mov ebp, esp */
  EBP = (ESP);
  /* 120b8f93 push ecx */
  push32((uint32_t)(ECX));
  /* 120b8f94 push ebx */
  push32((uint32_t)(EBX));
  /* 120b8f95 push esi */
  push32((uint32_t)(ESI));
  /* 120b8f96 push edi */
  push32((uint32_t)(EDI));
  /* 120b8f97 wait  */
  /* wait (no observable integer/reg state) */
  /* 120b8f98 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 120b8f9b movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 120b8f9f pop edi */
  EDI = (pop32());
  /* 120b8fa0 pop esi */
  ESI = (pop32());
  /* 120b8fa1 pop ebx */
  EBX = (pop32());
  /* 120b8fa2 mov esp, ebp */
  ESP = (EBP);
  /* 120b8fa4 pop ebp */
  EBP = (pop32());
  /* 120b8fa5 ret  */
  ESPCHK(0x120b8f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10018fb0 @ 0x120b8fb0 (23 bytes, 15 insns) */
void f_120b8fb0(void) {
  FTRACE(0x120b8fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8fb1 mov ebp, esp */
  EBP = (ESP);
  /* 120b8fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b8fb4 push ebx */
  push32((uint32_t)(EBX));
  /* 120b8fb5 push esi */
  push32((uint32_t)(ESI));
  /* 120b8fb6 push edi */
  push32((uint32_t)(EDI));
  /* 120b8fb7 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 120b8fba fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 120b8fbc movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 120b8fc0 pop edi */
  EDI = (pop32());
  /* 120b8fc1 pop esi */
  ESI = (pop32());
  /* 120b8fc2 pop ebx */
  EBX = (pop32());
  /* 120b8fc3 mov esp, ebp */
  ESP = (EBP);
  /* 120b8fc5 pop ebp */
  EBP = (pop32());
  /* 120b8fc6 ret  */
  ESPCHK(0x120b8fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018fd0 @ 0x120b8fd0 (50 bytes, 24 insns) */
void f_120b8fd0(void) {
  FTRACE(0x120b8fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b8fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b8fd1 mov ebp, esp */
  EBP = (ESP);
  /* 120b8fd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b8fd6 push ebx */
  push32((uint32_t)(EBX));
  /* 120b8fd7 push esi */
  push32((uint32_t)(ESI));
  /* 120b8fd8 push edi */
  push32((uint32_t)(EDI));
  /* 120b8fd9 wait  */
  /* wait (no observable integer/reg state) */
  /* 120b8fda fnstcw word ptr [ebp - 8] */
  w16((uint32_t)(EBP + -0x8), C.fcw);
  /* 120b8fdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b8fe0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 120b8fe3 movsx ecx, word ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 120b8fe7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b8fea not edx */
  EDX = (~(EDX));
  /* 120b8fec and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120b8fee or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 120b8ff0 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 120b8ff4 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 120b8ff7 movsx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 120b8ffb pop edi */
  EDI = (pop32());
  /* 120b8ffc pop esi */
  ESI = (pop32());
  /* 120b8ffd pop ebx */
  EBX = (pop32());
  /* 120b8ffe mov esp, ebp */
  ESP = (EBP);
  /* 120b9000 pop ebp */
  EBP = (pop32());
  /* 120b9001 ret  */
  ESPCHK(0x120b8fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019010 @ 0x120b9010 (117 bytes, 53 insns) */
void f_120b9010(void) {
  FTRACE(0x120b9010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b9010 push ebp */
  push32((uint32_t)(EBP));
  /* 120b9011 mov ebp, esp */
  EBP = (ESP);
  /* 120b9013 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b9016 push ebx */
  push32((uint32_t)(EBX));
  /* 120b9017 push esi */
  push32((uint32_t)(ESI));
  /* 120b9018 push edi */
  push32((uint32_t)(EDI));
  /* 120b9019 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b901c and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120b901f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b9021 je 0x120b902d */
  if (C.zf) goto L_120b902d;
  /* 120b9023 fld xword ptr [0x120df75c] */
  fpu_push(rf80((uint32_t)(0x120df75c)));
  /* 120b9029 fistp dword ptr [ebp - 0xc] */
  w32((uint32_t)(EBP + -0xc), (uint32_t)fpu_to_i32(FPU_ST(0)));
  (void)fpu_pop();
  /* 120b902c wait  */
  /* wait (no observable integer/reg state) */
L_120b902d:;
  /* 120b902d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9030 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 120b9033 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b9035 je 0x120b9047 */
  if (C.zf) goto L_120b9047;
  /* 120b9037 wait  */
  /* wait (no observable integer/reg state) */
  /* 120b9038 fnstsw ax */
  AX = fpu_status();
  /* 120b903a fld xword ptr [0x120df75c] */
  fpu_push(rf80((uint32_t)(0x120df75c)));
  /* 120b9040 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 120b9043 wait  */
  /* wait (no observable integer/reg state) */
  /* 120b9044 wait  */
  /* wait (no observable integer/reg state) */
  /* 120b9045 fnstsw ax */
  AX = fpu_status();
L_120b9047:;
  /* 120b9047 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b904a and edx, 0x10 */
  { uint32_t _r=(EDX)&(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 120b904d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b904f je 0x120b905b */
  if (C.zf) goto L_120b905b;
  /* 120b9051 fld xword ptr [0x120df768] */
  fpu_push(rf80((uint32_t)(0x120df768)));
  /* 120b9057 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 120b905a wait  */
  /* wait (no observable integer/reg state) */
L_120b905b:;
  /* 120b905b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b905e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 120b9061 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b9063 je 0x120b906e */
  if (C.zf) goto L_120b906e;
  /* 120b9065 fldz  */
  fpu_push(0.0);
  /* 120b9067 fld1  */
  fpu_push(1.0);
  /* 120b9069 fdivrp st(1) */
  FPU_ST(1) = FPU_ST(0) / FPU_ST(1);
  (void)fpu_pop();
  /* 120b906b fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 120b906d wait  */
  /* wait (no observable integer/reg state) */
L_120b906e:;
  /* 120b906e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9071 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 120b9074 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b9076 je 0x120b907e */
  if (C.zf) goto L_120b907e;
  /* 120b9078 fldpi  */
  fpu_push(3.14159265358979311599796346854);
  /* 120b907a fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 120b907d wait  */
  /* wait (no observable integer/reg state) */
L_120b907e:;
  /* 120b907e pop edi */
  EDI = (pop32());
  /* 120b907f pop esi */
  ESI = (pop32());
  /* 120b9080 pop ebx */
  EBX = (pop32());
  /* 120b9081 mov esp, ebp */
  ESP = (EBP);
  /* 120b9083 pop ebp */
  EBP = (pop32());
  /* 120b9084 ret  */
  ESPCHK(0x120b9010u, _esp0);
  ESP += 4; return;
}

/* FUN_10019090 @ 0x120b9090 (421 bytes, 148 insns) */
void f_120b9090(void) {
  FTRACE(0x120b9090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b9090 push ebp */
  push32((uint32_t)(EBP));
  /* 120b9091 mov ebp, esp */
  EBP = (ESP);
  /* 120b9093 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120b9095 push 0x120dc398 */
  push32((uint32_t)(0x120dc398u));
  /* 120b909a push 0x120b58ac */
  push32((uint32_t)(0x120b58acu));
  /* 120b909f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120b90a5 push eax */
  push32((uint32_t)(EAX));
  /* 120b90a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120b90ad add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b90b0 push ebx */
  push32((uint32_t)(EBX));
  /* 120b90b1 push esi */
  push32((uint32_t)(ESI));
  /* 120b90b2 push edi */
  push32((uint32_t)(EDI));
  /* 120b90b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120b90b6 cmp dword ptr [0x120e13c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e13c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b90bd jne 0x120b910e */
  if (!C.zf) goto L_120b910e;
  /* 120b90bf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 120b90c2 push eax */
  push32((uint32_t)(EAX));
  /* 120b90c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b90c5 push 0x120dc394 */
  push32((uint32_t)(0x120dc394u));
  /* 120b90ca push 1 */
  push32((uint32_t)(0x1u));
  /* 120b90cc call dword ptr [0x120e3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3374))), 0x120b90d2u);
  /* 120b90d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b90d4 je 0x120b90e2 */
  if (C.zf) goto L_120b90e2;
  /* 120b90d6 mov dword ptr [0x120e13c8], 1 */
  w32((uint32_t)(0x120e13c8), (0x1u));
  /* 120b90e0 jmp 0x120b910e */
  goto L_120b910e;
L_120b90e2:;
  /* 120b90e2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 120b90e5 push ecx */
  push32((uint32_t)(ECX));
  /* 120b90e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b90e8 push 0x120dc390 */
  push32((uint32_t)(0x120dc390u));
  /* 120b90ed push 1 */
  push32((uint32_t)(0x1u));
  /* 120b90ef push 0 */
  push32((uint32_t)(0x0u));
  /* 120b90f1 call dword ptr [0x120e3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3378))), 0x120b90f7u);
  /* 120b90f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b90f9 je 0x120b9107 */
  if (C.zf) goto L_120b9107;
  /* 120b90fb mov dword ptr [0x120e13c8], 2 */
  w32((uint32_t)(0x120e13c8), (0x2u));
  /* 120b9105 jmp 0x120b910e */
  goto L_120b910e;
L_120b9107:;
  /* 120b9107 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9109 jmp 0x120b9238 */
  goto L_120b9238;
L_120b910e:;
  /* 120b910e cmp dword ptr [0x120e13c8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x120e13c8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9115 jne 0x120b9145 */
  if (!C.zf) goto L_120b9145;
  /* 120b9117 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b911b jne 0x120b9126 */
  if (!C.zf) goto L_120b9126;
  /* 120b911d mov edx, dword ptr [0x120e13e0] */
  EDX = (r32((uint32_t)(0x120e13e0)));
  /* 120b9123 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_120b9126:;
  /* 120b9126 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b9129 push eax */
  push32((uint32_t)(EAX));
  /* 120b912a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b912d push ecx */
  push32((uint32_t)(ECX));
  /* 120b912e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9131 push edx */
  push32((uint32_t)(EDX));
  /* 120b9132 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9135 push eax */
  push32((uint32_t)(EAX));
  /* 120b9136 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120b9139 push ecx */
  push32((uint32_t)(ECX));
  /* 120b913a call dword ptr [0x120e3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3378))), 0x120b9140u);
  /* 120b9140 jmp 0x120b9238 */
  goto L_120b9238;
L_120b9145:;
  /* 120b9145 cmp dword ptr [0x120e13c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120e13c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b914c jne 0x120b9236 */
  if (!C.zf) goto L_120b9236;
  /* 120b9152 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9156 jne 0x120b9161 */
  if (!C.zf) goto L_120b9161;
  /* 120b9158 mov edx, dword ptr [0x120e13f0] */
  EDX = (r32((uint32_t)(0x120e13f0)));
  /* 120b915e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_120b9161:;
  /* 120b9161 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9163 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9165 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b9168 push eax */
  push32((uint32_t)(EAX));
  /* 120b9169 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b916c push ecx */
  push32((uint32_t)(ECX));
  /* 120b916d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 120b9170 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b9172 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b9174 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 120b9177 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b917a push edx */
  push32((uint32_t)(EDX));
  /* 120b917b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b917e push eax */
  push32((uint32_t)(EAX));
  /* 120b917f call dword ptr [0x120e337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e337c))), 0x120b9185u);
  /* 120b9185 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120b9188 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b918c jne 0x120b9195 */
  if (!C.zf) goto L_120b9195;
  /* 120b918e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9190 jmp 0x120b9238 */
  goto L_120b9238;
L_120b9195:;
  /* 120b9195 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b919c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b919f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120b91a1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b91a4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 120b91a6 call 0x120b1580 */
  push32(0x120b91abu); f_120b1580();
  /* 120b91ab mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 120b91ae mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120b91b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b91b4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 120b91b7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b91ba shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 120b91bc push edx */
  push32((uint32_t)(EDX));
  /* 120b91bd push 0 */
  push32((uint32_t)(0x0u));
  /* 120b91bf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b91c2 push eax */
  push32((uint32_t)(EAX));
  /* 120b91c3 call 0x120b3090 */
  push32(0x120b91c8u); f_120b3090();
  /* 120b91c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b91cb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120b91d2 jmp 0x120b91eb */
  goto L_120b91eb;
  /* 120b91d4 mov eax, 1 */
  EAX = (0x1u);
  /* 120b91d9 ret  */
  ESPCHK(0x120b9090u, _esp0);
  ESP += 4; return;
  /* 120b91da mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120b91dd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 120b91e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_120b91eb:;
  /* 120b91eb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b91ef jne 0x120b91f5 */
  if (!C.zf) goto L_120b91f5;
  /* 120b91f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b91f3 jmp 0x120b9238 */
  goto L_120b9238;
L_120b91f5:;
  /* 120b91f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b91f8 push ecx */
  push32((uint32_t)(ECX));
  /* 120b91f9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b91fc push edx */
  push32((uint32_t)(EDX));
  /* 120b91fd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b9200 push eax */
  push32((uint32_t)(EAX));
  /* 120b9201 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9204 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9205 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b9207 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b920a push edx */
  push32((uint32_t)(EDX));
  /* 120b920b call dword ptr [0x120e337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e337c))), 0x120b9211u);
  /* 120b9211 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120b9214 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9218 jne 0x120b921e */
  if (!C.zf) goto L_120b921e;
  /* 120b921a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b921c jmp 0x120b9238 */
  goto L_120b9238;
L_120b921e:;
  /* 120b921e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b9221 push eax */
  push32((uint32_t)(EAX));
  /* 120b9222 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b9225 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9226 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b9229 push edx */
  push32((uint32_t)(EDX));
  /* 120b922a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b922d push eax */
  push32((uint32_t)(EAX));
  /* 120b922e call dword ptr [0x120e3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3374))), 0x120b9234u);
  /* 120b9234 jmp 0x120b9238 */
  goto L_120b9238;
L_120b9236:;
  /* 120b9236 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120b9238:;
  /* 120b9238 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 120b923b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b923e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120b9245 pop edi */
  EDI = (pop32());
  /* 120b9246 pop esi */
  ESI = (pop32());
  /* 120b9247 pop ebx */
  EBX = (pop32());
  /* 120b9248 mov esp, ebp */
  ESP = (EBP);
  /* 120b924a pop ebp */
  EBP = (pop32());
  /* 120b924b ret  */
  ESPCHK(0x120b9090u, _esp0);
  ESP += 4; return;
}

/* FUN_10019250 @ 0x120b9250 (1007 bytes, 269 insns) */
void f_120b9250(void) {
  FTRACE(0x120b9250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b9250 push ebp */
  push32((uint32_t)(EBP));
  /* 120b9251 mov ebp, esp */
  EBP = (ESP);
  /* 120b9253 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b9259 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b925d jl 0x120b9265 */
  if ((C.sf!=C.of)) goto L_120b9265;
  /* 120b925f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9263 jle 0x120b926c */
  if ((C.zf||C.sf!=C.of)) goto L_120b926c;
L_120b9265:;
  /* 120b9265 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9267 jmp 0x120b963b */
  goto L_120b963b;
L_120b926c:;
  /* 120b926c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120b926e call 0x120acb80 */
  push32(0x120b9273u); f_120acb80();
  /* 120b9273 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9276 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120b927d mov eax, dword ptr [0x120e27e4] */
  EAX = (r32((uint32_t)(0x120e27e4)));
  /* 120b9282 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9285 mov dword ptr [0x120e27e4], eax */
  w32((uint32_t)(0x120e27e4), (EAX));
L_120b928a:;
  /* 120b928a cmp dword ptr [0x120e27f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e27f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9291 je 0x120b929d */
  if (C.zf) goto L_120b929d;
  /* 120b9293 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b9295 call dword ptr [0x120e3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3370))), 0x120b929bu);
  /* 120b929b jmp 0x120b928a */
  goto L_120b928a;
L_120b929d:;
  /* 120b929d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b92a1 je 0x120b92e1 */
  if (C.zf) goto L_120b92e1;
  /* 120b92a3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b92a7 je 0x120b92c1 */
  if (C.zf) goto L_120b92c1;
  /* 120b92a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b92ac push ecx */
  push32((uint32_t)(ECX));
  /* 120b92ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b92b0 push edx */
  push32((uint32_t)(EDX));
  /* 120b92b1 call 0x120b9640 */
  push32(0x120b92b6u); f_120b9640();
  /* 120b92b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b92b9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 120b92bf jmp 0x120b92d3 */
  goto L_120b92d3;
L_120b92c1:;
  /* 120b92c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b92c4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b92c7 mov ecx, dword ptr [eax + 0x120df884] */
  ECX = (r32((uint32_t)(EAX + 0x120df884)));
  /* 120b92cd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_120b92d3:;
  /* 120b92d3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 120b92d9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120b92dc jmp 0x120b961b */
  goto L_120b961b;
L_120b92e1:;
  /* 120b92e1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 120b92e8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120b92ef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b92f3 je 0x120b9613 */
  if (C.zf) goto L_120b9613;
  /* 120b92f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b92fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b92ff cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9302 jne 0x120b9524 */
  if (!C.zf) goto L_120b9524;
  /* 120b9308 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b930b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 120b930f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9312 jne 0x120b9524 */
  if (!C.zf) goto L_120b9524;
  /* 120b9318 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b931b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 120b931f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9322 jne 0x120b9524 */
  if (!C.zf) goto L_120b9524;
  /* 120b9328 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b932b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_120b9331:;
  /* 120b9331 push 0x120dc3e8 */
  push32((uint32_t)(0x120dc3e8u));
  /* 120b9336 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 120b933c push ecx */
  push32((uint32_t)(ECX));
  /* 120b933d call 0x120bd7a0 */
  push32(0x120b9342u); f_120bd7a0();
  /* 120b9342 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9345 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 120b934b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9352 je 0x120b937d */
  if (C.zf) goto L_120b937d;
  /* 120b9354 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 120b935a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b9360 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 120b9366 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b936d je 0x120b937d */
  if (C.zf) goto L_120b937d;
  /* 120b936f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 120b9375 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b9378 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b937b jne 0x120b93a3 */
  if (!C.zf) goto L_120b93a3;
L_120b937d:;
  /* 120b937d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9381 je 0x120b939c */
  if (C.zf) goto L_120b939c;
  /* 120b9383 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120b9385 call 0x120acc20 */
  push32(0x120b938au); f_120acc20();
  /* 120b938a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b938d mov edx, dword ptr [0x120e27e4] */
  EDX = (r32((uint32_t)(0x120e27e4)));
  /* 120b9393 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b9396 mov dword ptr [0x120e27e4], edx */
  w32((uint32_t)(0x120e27e4), (EDX));
L_120b939c:;
  /* 120b939c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b939e jmp 0x120b963b */
  goto L_120b963b;
L_120b93a3:;
  /* 120b93a3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 120b93aa jmp 0x120b93b5 */
  goto L_120b93b5;
L_120b93ac:;
  /* 120b93ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b93af add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b93b2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_120b93b5:;
  /* 120b93b5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b93b9 jg 0x120b9403 */
  if ((!C.zf&&C.sf==C.of)) goto L_120b9403;
  /* 120b93bb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 120b93c1 push ecx */
  push32((uint32_t)(ECX));
  /* 120b93c2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 120b93c8 push edx */
  push32((uint32_t)(EDX));
  /* 120b93c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b93cc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b93cf mov ecx, dword ptr [eax + 0x120df880] */
  ECX = (r32((uint32_t)(EAX + 0x120df880)));
  /* 120b93d5 push ecx */
  push32((uint32_t)(ECX));
  /* 120b93d6 call 0x120bd760 */
  push32(0x120b93dbu); f_120bd760();
  /* 120b93db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b93de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b93e0 jne 0x120b9401 */
  if (!C.zf) goto L_120b9401;
  /* 120b93e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b93e5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b93e8 mov eax, dword ptr [edx + 0x120df880] */
  EAX = (r32((uint32_t)(EDX + 0x120df880)));
  /* 120b93ee push eax */
  push32((uint32_t)(EAX));
  /* 120b93ef call 0x120b1210 */
  push32(0x120b93f4u); f_120b1210();
  /* 120b93f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b93f7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b93fd jne 0x120b9401 */
  if (!C.zf) goto L_120b9401;
  /* 120b93ff jmp 0x120b9403 */
  goto L_120b9403;
L_120b9401:;
  /* 120b9401 jmp 0x120b93ac */
  goto L_120b93ac;
L_120b9403:;
  /* 120b9403 push 0x120dc3e4 */
  push32((uint32_t)(0x120dc3e4u));
  /* 120b9408 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 120b940e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9411 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 120b9417 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 120b941d push edx */
  push32((uint32_t)(EDX));
  /* 120b941e call 0x120bd720 */
  push32(0x120b9423u); f_120bd720();
  /* 120b9423 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9426 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 120b942c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9433 jne 0x120b9469 */
  if (!C.zf) goto L_120b9469;
  /* 120b9435 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 120b943b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b943e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9441 je 0x120b9469 */
  if (C.zf) goto L_120b9469;
  /* 120b9443 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9447 je 0x120b9462 */
  if (C.zf) goto L_120b9462;
  /* 120b9449 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120b944b call 0x120acc20 */
  push32(0x120b9450u); f_120acc20();
  /* 120b9450 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9453 mov edx, dword ptr [0x120e27e4] */
  EDX = (r32((uint32_t)(0x120e27e4)));
  /* 120b9459 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b945c mov dword ptr [0x120e27e4], edx */
  w32((uint32_t)(0x120e27e4), (EDX));
L_120b9462:;
  /* 120b9462 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9464 jmp 0x120b963b */
  goto L_120b963b;
L_120b9469:;
  /* 120b9469 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b946d jg 0x120b94ba */
  if ((!C.zf&&C.sf==C.of)) goto L_120b94ba;
  /* 120b946f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 120b9475 push eax */
  push32((uint32_t)(EAX));
  /* 120b9476 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 120b947c push ecx */
  push32((uint32_t)(ECX));
  /* 120b947d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 120b9483 push edx */
  push32((uint32_t)(EDX));
  /* 120b9484 call 0x120b1c00 */
  push32(0x120b9489u); f_120b1c00();
  /* 120b9489 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b948c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 120b9492 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 120b949a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 120b94a0 push ecx */
  push32((uint32_t)(ECX));
  /* 120b94a1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b94a4 push edx */
  push32((uint32_t)(EDX));
  /* 120b94a5 call 0x120b9640 */
  push32(0x120b94aau); f_120b9640();
  /* 120b94aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b94ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b94af je 0x120b94ba */
  if (C.zf) goto L_120b94ba;
  /* 120b94b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b94b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b94b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_120b94ba:;
  /* 120b94ba mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 120b94c0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b94c6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 120b94cc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 120b94d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120b94d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b94d7 je 0x120b94e8 */
  if (C.zf) goto L_120b94e8;
  /* 120b94d9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 120b94df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b94e2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_120b94e8:;
  /* 120b94e8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 120b94ee movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120b94f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b94f3 jne 0x120b9331 */
  if (!C.zf) goto L_120b9331;
  /* 120b94f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b94fd je 0x120b950c */
  if (C.zf) goto L_120b950c;
  /* 120b94ff call 0x120b97e0 */
  push32(0x120b9504u); f_120b97e0();
  /* 120b9504 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 120b950a jmp 0x120b9516 */
  goto L_120b9516;
L_120b950c:;
  /* 120b950c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_120b9516:;
  /* 120b9516 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 120b951c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120b951f jmp 0x120b9611 */
  goto L_120b9611;
L_120b9524:;
  /* 120b9524 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9527 push edx */
  push32((uint32_t)(EDX));
  /* 120b9528 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b952a push 0 */
  push32((uint32_t)(0x0u));
  /* 120b952c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 120b9532 push eax */
  push32((uint32_t)(EAX));
  /* 120b9533 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9536 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9537 call 0x120b98e0 */
  push32(0x120b953cu); f_120b98e0();
  /* 120b953c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b953f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b9542 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9546 je 0x120b9611 */
  if (C.zf) goto L_120b9611;
  /* 120b954c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120b9553 jmp 0x120b955e */
  goto L_120b955e;
L_120b9555:;
  /* 120b9555 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b9558 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b955b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_120b955e:;
  /* 120b955e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9562 jg 0x120b95c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_120b95c0;
  /* 120b9564 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9568 je 0x120b95be */
  if (C.zf) goto L_120b95be;
  /* 120b956a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b956d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b9570 mov ecx, dword ptr [eax + 0x120df884] */
  ECX = (r32((uint32_t)(EAX + 0x120df884)));
  /* 120b9576 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9577 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 120b957d push edx */
  push32((uint32_t)(EDX));
  /* 120b957e call 0x120b5820 */
  push32(0x120b9583u); f_120b5820();
  /* 120b9583 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9586 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b9588 je 0x120b95b5 */
  if (C.zf) goto L_120b95b5;
  /* 120b958a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 120b9590 push eax */
  push32((uint32_t)(EAX));
  /* 120b9591 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b9594 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9595 call 0x120b9640 */
  push32(0x120b959au); f_120b9640();
  /* 120b959a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b959d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b959f je 0x120b95ac */
  if (C.zf) goto L_120b95ac;
  /* 120b95a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b95a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b95a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120b95aa jmp 0x120b95b3 */
  goto L_120b95b3;
L_120b95ac:;
  /* 120b95ac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_120b95b3:;
  /* 120b95b3 jmp 0x120b95be */
  goto L_120b95be;
L_120b95b5:;
  /* 120b95b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b95b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b95bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_120b95be:;
  /* 120b95be jmp 0x120b9555 */
  goto L_120b9555;
L_120b95c0:;
  /* 120b95c0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b95c4 je 0x120b95eb */
  if (C.zf) goto L_120b95eb;
  /* 120b95c6 call 0x120b97e0 */
  push32(0x120b95cbu); f_120b97e0();
  /* 120b95cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b95ce push 2 */
  push32((uint32_t)(0x2u));
  /* 120b95d0 mov ecx, dword ptr [0x120df884] */
  ECX = (r32((uint32_t)(0x120df884)));
  /* 120b95d6 push ecx */
  push32((uint32_t)(ECX));
  /* 120b95d7 call 0x120ad710 */
  push32(0x120b95dcu); f_120ad710();
  /* 120b95dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b95df mov dword ptr [0x120df884], 0 */
  w32((uint32_t)(0x120df884), (0x0u));
  /* 120b95e9 jmp 0x120b9611 */
  goto L_120b9611;
L_120b95eb:;
  /* 120b95eb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b95ef je 0x120b95fe */
  if (C.zf) goto L_120b95fe;
  /* 120b95f1 call 0x120b97e0 */
  push32(0x120b95f6u); f_120b97e0();
  /* 120b95f6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 120b95fc jmp 0x120b9608 */
  goto L_120b9608;
L_120b95fe:;
  /* 120b95fe mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_120b9608:;
  /* 120b9608 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 120b960e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_120b9611:;
  /* 120b9611 jmp 0x120b961b */
  goto L_120b961b;
L_120b9613:;
  /* 120b9613 call 0x120b97e0 */
  push32(0x120b9618u); f_120b97e0();
  /* 120b9618 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120b961b:;
  /* 120b961b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b961f je 0x120b9638 */
  if (C.zf) goto L_120b9638;
  /* 120b9621 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120b9623 call 0x120acc20 */
  push32(0x120b9628u); f_120acc20();
  /* 120b9628 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b962b mov eax, dword ptr [0x120e27e4] */
  EAX = (r32((uint32_t)(0x120e27e4)));
  /* 120b9630 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b9633 mov dword ptr [0x120e27e4], eax */
  w32((uint32_t)(0x120e27e4), (EAX));
L_120b9638:;
  /* 120b9638 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_120b963b:;
  /* 120b963b mov esp, ebp */
  ESP = (EBP);
  /* 120b963d pop ebp */
  EBP = (pop32());
  /* 120b963e ret  */
  ESPCHK(0x120b9250u, _esp0);
  ESP += 4; return;
}

/* FUN_10019640 @ 0x120b9640 (403 bytes, 117 insns) */
void f_120b9640(void) {
  FTRACE(0x120b9640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b9640 push ebp */
  push32((uint32_t)(EBP));
  /* 120b9641 mov ebp, esp */
  EBP = (ESP);
  /* 120b9643 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b9649 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b964c push eax */
  push32((uint32_t)(EAX));
  /* 120b964d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 120b9653 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9654 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 120b965a push edx */
  push32((uint32_t)(EDX));
  /* 120b965b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 120b9661 push eax */
  push32((uint32_t)(EAX));
  /* 120b9662 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9665 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9666 call 0x120b98e0 */
  push32(0x120b966bu); f_120b98e0();
  /* 120b966b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b966e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b9670 jne 0x120b9679 */
  if (!C.zf) goto L_120b9679;
  /* 120b9672 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9674 jmp 0x120b97cf */
  goto L_120b97cf;
L_120b9679:;
  /* 120b9679 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 120b967e push 0x120dc3ec */
  push32((uint32_t)(0x120dc3ecu));
  /* 120b9683 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b9685 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 120b968b push edx */
  push32((uint32_t)(EDX));
  /* 120b968c call 0x120b1210 */
  push32(0x120b9691u); f_120b1210();
  /* 120b9691 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9694 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9697 push eax */
  push32((uint32_t)(EAX));
  /* 120b9698 call 0x120acc80 */
  push32(0x120b969du); f_120acc80();
  /* 120b969d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b96a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b96a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b96a7 jne 0x120b96b0 */
  if (!C.zf) goto L_120b96b0;
  /* 120b96a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b96ab jmp 0x120b97cf */
  goto L_120b97cf;
L_120b96b0:;
  /* 120b96b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b96b3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b96b6 mov ecx, dword ptr [eax + 0x120df884] */
  ECX = (r32((uint32_t)(EAX + 0x120df884)));
  /* 120b96bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120b96bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b96c2 mov eax, dword ptr [edx*4 + 0x120e13d8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120e13d8)));
  /* 120b96c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b96cc push 6 */
  push32((uint32_t)(0x6u));
  /* 120b96ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b96d1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b96d4 add ecx, 0x120e141c */
  { uint32_t _a=(ECX),_b=(0x120e141cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b96da push ecx */
  push32((uint32_t)(ECX));
  /* 120b96db lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 120b96de push edx */
  push32((uint32_t)(EDX));
  /* 120b96df call 0x120b6d20 */
  push32(0x120b96e4u); f_120b6d20();
  /* 120b96e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b96e7 mov eax, dword ptr [0x120e13f0] */
  EAX = (r32((uint32_t)(0x120e13f0)));
  /* 120b96ec mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120b96ef lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 120b96f5 push ecx */
  push32((uint32_t)(ECX));
  /* 120b96f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b96f9 push edx */
  push32((uint32_t)(EDX));
  /* 120b96fa call 0x120b1390 */
  push32(0x120b96ffu); f_120b1390();
  /* 120b96ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9702 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9705 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b9708 mov dword ptr [ecx + 0x120df884], eax */
  w32((uint32_t)(ECX + 0x120df884), (EAX));
  /* 120b970e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 120b9714 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b971a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b971d mov dword ptr [eax*4 + 0x120e13d8], edx */
  w32((uint32_t)(EAX*4 + 0x120e13d8), (EDX));
  /* 120b9724 push 6 */
  push32((uint32_t)(0x6u));
  /* 120b9726 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 120b972c push ecx */
  push32((uint32_t)(ECX));
  /* 120b972d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9730 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b9733 add edx, 0x120e141c */
  { uint32_t _a=(EDX),_b=(0x120e141cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9739 push edx */
  push32((uint32_t)(EDX));
  /* 120b973a call 0x120b6d20 */
  push32(0x120b973fu); f_120b6d20();
  /* 120b973f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9742 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9746 jne 0x120b9753 */
  if (!C.zf) goto L_120b9753;
  /* 120b9748 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 120b974e mov dword ptr [0x120e13f0], eax */
  w32((uint32_t)(0x120e13f0), (EAX));
L_120b9753:;
  /* 120b9753 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9757 jne 0x120b9765 */
  if (!C.zf) goto L_120b9765;
  /* 120b9759 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 120b975f mov dword ptr [0x120e13f4], ecx */
  w32((uint32_t)(0x120e13f4), (ECX));
L_120b9765:;
  /* 120b9765 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9768 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b976b call dword ptr [edx + 0x120df888] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x120df888))), 0x120b9771u);
  /* 120b9771 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b9773 je 0x120b97ac */
  if (C.zf) goto L_120b97ac;
  /* 120b9775 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9778 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b977b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b977e mov dword ptr [eax + 0x120df884], ecx */
  w32((uint32_t)(EAX + 0x120df884), (ECX));
  /* 120b9784 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b9786 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b9789 push edx */
  push32((uint32_t)(EDX));
  /* 120b978a call 0x120ad710 */
  push32(0x120b978fu); f_120ad710();
  /* 120b978f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9792 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9795 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b9798 mov dword ptr [eax*4 + 0x120e13d8], ecx */
  w32((uint32_t)(EAX*4 + 0x120e13d8), (ECX));
  /* 120b979f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b97a2 mov dword ptr [0x120e13f0], edx */
  w32((uint32_t)(0x120e13f0), (EDX));
  /* 120b97a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b97aa jmp 0x120b97cf */
  goto L_120b97cf;
L_120b97ac:;
  /* 120b97ac cmp dword ptr [ebp - 0xc], 0x120df774 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x120df774u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b97b3 je 0x120b97c3 */
  if (C.zf) goto L_120b97c3;
  /* 120b97b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b97b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b97ba push eax */
  push32((uint32_t)(EAX));
  /* 120b97bb call 0x120ad710 */
  push32(0x120b97c0u); f_120ad710();
  /* 120b97c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b97c3:;
  /* 120b97c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b97c6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b97c9 mov eax, dword ptr [ecx + 0x120df884] */
  EAX = (r32((uint32_t)(ECX + 0x120df884)));
L_120b97cf:;
  /* 120b97cf mov esp, ebp */
  ESP = (EBP);
  /* 120b97d1 pop ebp */
  EBP = (pop32());
  /* 120b97d2 ret  */
  ESPCHK(0x120b9640u, _esp0);
  ESP += 4; return;
}

/* FUN_100197e0 @ 0x120b97e0 (256 bytes, 72 insns) */
void f_120b97e0(void) {
  FTRACE(0x120b97e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b97e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b97e1 mov ebp, esp */
  EBP = (ESP);
  /* 120b97e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b97e6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 120b97ed cmp dword ptr [0x120df884], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120df884))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b97f4 jne 0x120b9814 */
  if (!C.zf) goto L_120b9814;
  /* 120b97f6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 120b97fb push 0x120dc3ec */
  push32((uint32_t)(0x120dc3ecu));
  /* 120b9800 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b9802 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 120b9807 call 0x120acc80 */
  push32(0x120b980cu); f_120acc80();
  /* 120b980c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b980f mov dword ptr [0x120df884], eax */
  w32((uint32_t)(0x120df884), (EAX));
L_120b9814:;
  /* 120b9814 mov eax, dword ptr [0x120df884] */
  EAX = (r32((uint32_t)(0x120df884)));
  /* 120b9819 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 120b981c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120b9823 jmp 0x120b982e */
  goto L_120b982e;
L_120b9825:;
  /* 120b9825 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b9828 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b982b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120b982e:;
  /* 120b982e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b9831 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b9834 mov eax, dword ptr [edx + 0x120df884] */
  EAX = (r32((uint32_t)(EDX + 0x120df884)));
  /* 120b983a push eax */
  push32((uint32_t)(EAX));
  /* 120b983b push 0x120dc3f8 */
  push32((uint32_t)(0x120dc3f8u));
  /* 120b9840 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b9843 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b9846 mov edx, dword ptr [ecx + 0x120df880] */
  EDX = (r32((uint32_t)(ECX + 0x120df880)));
  /* 120b984c push edx */
  push32((uint32_t)(EDX));
  /* 120b984d push 3 */
  push32((uint32_t)(0x3u));
  /* 120b984f mov eax, dword ptr [0x120df884] */
  EAX = (r32((uint32_t)(0x120df884)));
  /* 120b9854 push eax */
  push32((uint32_t)(EAX));
  /* 120b9855 call 0x120b9a80 */
  push32(0x120b985au); f_120b9a80();
  /* 120b985a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b985d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9861 jge 0x120b98a9 */
  if ((C.sf==C.of)) goto L_120b98a9;
  /* 120b9863 push 0x120dc3e4 */
  push32((uint32_t)(0x120dc3e4u));
  /* 120b9868 mov ecx, dword ptr [0x120df884] */
  ECX = (r32((uint32_t)(0x120df884)));
  /* 120b986e push ecx */
  push32((uint32_t)(ECX));
  /* 120b986f call 0x120b13a0 */
  push32(0x120b9874u); f_120b13a0();
  /* 120b9874 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9877 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b987a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b987d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b9880 mov eax, dword ptr [edx + 0x120df884] */
  EAX = (r32((uint32_t)(EDX + 0x120df884)));
  /* 120b9886 push eax */
  push32((uint32_t)(EAX));
  /* 120b9887 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b988a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b988d mov edx, dword ptr [ecx + 0x120df884] */
  EDX = (r32((uint32_t)(ECX + 0x120df884)));
  /* 120b9893 push edx */
  push32((uint32_t)(EDX));
  /* 120b9894 call 0x120b5820 */
  push32(0x120b9899u); f_120b5820();
  /* 120b9899 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b989c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b989e je 0x120b98a7 */
  if (C.zf) goto L_120b98a7;
  /* 120b98a0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_120b98a7:;
  /* 120b98a7 jmp 0x120b98d7 */
  goto L_120b98d7;
L_120b98a9:;
  /* 120b98a9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b98ad jne 0x120b98b6 */
  if (!C.zf) goto L_120b98b6;
  /* 120b98af mov eax, dword ptr [0x120df884] */
  EAX = (r32((uint32_t)(0x120df884)));
  /* 120b98b4 jmp 0x120b98dc */
  goto L_120b98dc;
L_120b98b6:;
  /* 120b98b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b98b8 mov eax, dword ptr [0x120df884] */
  EAX = (r32((uint32_t)(0x120df884)));
  /* 120b98bd push eax */
  push32((uint32_t)(EAX));
  /* 120b98be call 0x120ad710 */
  push32(0x120b98c3u); f_120ad710();
  /* 120b98c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b98c6 mov dword ptr [0x120df884], 0 */
  w32((uint32_t)(0x120df884), (0x0u));
  /* 120b98d0 mov eax, dword ptr [0x120df89c] */
  EAX = (r32((uint32_t)(0x120df89c)));
  /* 120b98d5 jmp 0x120b98dc */
  goto L_120b98dc;
L_120b98d7:;
  /* 120b98d7 jmp 0x120b9825 */
  goto L_120b9825;
L_120b98dc:;
  /* 120b98dc mov esp, ebp */
  ESP = (EBP);
  /* 120b98de pop ebp */
  EBP = (pop32());
  /* 120b98df ret  */
  ESPCHK(0x120b97e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100198e0 @ 0x120b98e0 (388 bytes, 115 insns) */
void f_120b98e0(void) {
  FTRACE(0x120b98e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b98e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b98e1 mov ebp, esp */
  EBP = (ESP);
  /* 120b98e3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b98e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b98ed jne 0x120b98f6 */
  if (!C.zf) goto L_120b98f6;
  /* 120b98ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b98f1 jmp 0x120b9a60 */
  goto L_120b9a60;
L_120b98f6:;
  /* 120b98f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b98f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b98fc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b98ff jne 0x120b9950 */
  if (!C.zf) goto L_120b9950;
  /* 120b9901 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9904 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 120b9908 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b990a jne 0x120b9950 */
  if (!C.zf) goto L_120b9950;
  /* 120b990c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b990f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 120b9912 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9915 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 120b9919 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b991d je 0x120b9939 */
  if (C.zf) goto L_120b9939;
  /* 120b991f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b9922 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 120b9927 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b992a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 120b9930 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b9933 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_120b9939:;
  /* 120b9939 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b993d je 0x120b9948 */
  if (C.zf) goto L_120b9948;
  /* 120b993f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b9942 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_120b9948:;
  /* 120b9948 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b994b jmp 0x120b9a60 */
  goto L_120b9a60;
L_120b9950:;
  /* 120b9950 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9953 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9954 push 0x120df7fc */
  push32((uint32_t)(0x120df7fcu));
  /* 120b9959 call 0x120b5820 */
  push32(0x120b995eu); f_120b5820();
  /* 120b995e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9961 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b9963 je 0x120b9a18 */
  if (C.zf) goto L_120b9a18;
  /* 120b9969 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b996c push edx */
  push32((uint32_t)(EDX));
  /* 120b996d push 0x120df778 */
  push32((uint32_t)(0x120df778u));
  /* 120b9972 call 0x120b5820 */
  push32(0x120b9977u); f_120b5820();
  /* 120b9977 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b997a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b997c je 0x120b9a18 */
  if (C.zf) goto L_120b9a18;
  /* 120b9982 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9985 push eax */
  push32((uint32_t)(EAX));
  /* 120b9986 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 120b998c push ecx */
  push32((uint32_t)(ECX));
  /* 120b998d call 0x120b9ad0 */
  push32(0x120b9992u); f_120b9ad0();
  /* 120b9992 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9995 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b9997 je 0x120b99a0 */
  if (C.zf) goto L_120b99a0;
  /* 120b9999 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b999b jmp 0x120b9a60 */
  goto L_120b9a60;
L_120b99a0:;
  /* 120b99a0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 120b99a6 push edx */
  push32((uint32_t)(EDX));
  /* 120b99a7 push 0x120e13cc */
  push32((uint32_t)(0x120e13ccu));
  /* 120b99ac lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 120b99b2 push eax */
  push32((uint32_t)(EAX));
  /* 120b99b3 call 0x120bd7e0 */
  push32(0x120b99b8u); f_120bd7e0();
  /* 120b99b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b99bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b99bd jne 0x120b99c6 */
  if (!C.zf) goto L_120b99c6;
  /* 120b99bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b99c1 jmp 0x120b9a60 */
  goto L_120b9a60;
L_120b99c6:;
  /* 120b99c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b99c8 mov cx, word ptr [0x120e13d0] */
  CX = (r16((uint32_t)(0x120e13d0)));
  /* 120b99cf mov dword ptr [0x120e13d4], ecx */
  w32((uint32_t)(0x120e13d4), (ECX));
  /* 120b99d5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 120b99db push edx */
  push32((uint32_t)(EDX));
  /* 120b99dc push 0x120df7fc */
  push32((uint32_t)(0x120df7fcu));
  /* 120b99e1 call 0x120b9c30 */
  push32(0x120b99e6u); f_120b9c30();
  /* 120b99e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b99e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b99ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b99ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b99f1 je 0x120b9a06 */
  if (C.zf) goto L_120b9a06;
  /* 120b99f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b99f6 push edx */
  push32((uint32_t)(EDX));
  /* 120b99f7 push 0x120df778 */
  push32((uint32_t)(0x120df778u));
  /* 120b99fc call 0x120b1390 */
  push32(0x120b9a01u); f_120b1390();
  /* 120b9a01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9a04 jmp 0x120b9a18 */
  goto L_120b9a18;
L_120b9a06:;
  /* 120b9a06 push 0x120df7fc */
  push32((uint32_t)(0x120df7fcu));
  /* 120b9a0b push 0x120df778 */
  push32((uint32_t)(0x120df778u));
  /* 120b9a10 call 0x120b1390 */
  push32(0x120b9a15u); f_120b1390();
  /* 120b9a15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b9a18:;
  /* 120b9a18 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9a1c je 0x120b9a31 */
  if (C.zf) goto L_120b9a31;
  /* 120b9a1e push 6 */
  push32((uint32_t)(0x6u));
  /* 120b9a20 push 0x120e13cc */
  push32((uint32_t)(0x120e13ccu));
  /* 120b9a25 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b9a28 push eax */
  push32((uint32_t)(EAX));
  /* 120b9a29 call 0x120b6d20 */
  push32(0x120b9a2eu); f_120b6d20();
  /* 120b9a2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b9a31:;
  /* 120b9a31 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9a35 je 0x120b9a4a */
  if (C.zf) goto L_120b9a4a;
  /* 120b9a37 push 4 */
  push32((uint32_t)(0x4u));
  /* 120b9a39 push 0x120e13d4 */
  push32((uint32_t)(0x120e13d4u));
  /* 120b9a3e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b9a41 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9a42 call 0x120b6d20 */
  push32(0x120b9a47u); f_120b6d20();
  /* 120b9a47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b9a4a:;
  /* 120b9a4a push 0x120df7fc */
  push32((uint32_t)(0x120df7fcu));
  /* 120b9a4f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9a52 push edx */
  push32((uint32_t)(EDX));
  /* 120b9a53 call 0x120b1390 */
  push32(0x120b9a58u); f_120b1390();
  /* 120b9a58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9a5b mov eax, 0x120df7fc */
  EAX = (0x120df7fcu);
L_120b9a60:;
  /* 120b9a60 mov esp, ebp */
  ESP = (EBP);
  /* 120b9a62 pop ebp */
  EBP = (pop32());
  /* 120b9a63 ret  */
  ESPCHK(0x120b98e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019a70 @ 0x120b9a70 (7 bytes, 5 insns) */
void f_120b9a70(void) {
  FTRACE(0x120b9a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b9a70 push ebp */
  push32((uint32_t)(EBP));
  /* 120b9a71 mov ebp, esp */
  EBP = (ESP);
  /* 120b9a73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9a75 pop ebp */
  EBP = (pop32());
  /* 120b9a76 ret  */
  ESPCHK(0x120b9a70u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x120b9a80 (79 bytes, 28 insns) */
void f_120b9a80(void) {
  FTRACE(0x120b9a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b9a80 push ebp */
  push32((uint32_t)(EBP));
  /* 120b9a81 mov ebp, esp */
  EBP = (ESP);
  /* 120b9a83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b9a86 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 120b9a89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b9a8c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120b9a93 jmp 0x120b9a9e */
  goto L_120b9a9e;
L_120b9a95:;
  /* 120b9a95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b9a98 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9a9b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_120b9a9e:;
  /* 120b9a9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b9aa1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9aa4 jge 0x120b9ac4 */
  if ((C.sf==C.of)) goto L_120b9ac4;
  /* 120b9aa6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b9aa9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9aac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b9aaf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b9ab2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 120b9ab5 push edx */
  push32((uint32_t)(EDX));
  /* 120b9ab6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9ab9 push eax */
  push32((uint32_t)(EAX));
  /* 120b9aba call 0x120b13a0 */
  push32(0x120b9abfu); f_120b13a0();
  /* 120b9abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9ac2 jmp 0x120b9a95 */
  goto L_120b9a95;
L_120b9ac4:;
  /* 120b9ac4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b9acb mov esp, ebp */
  ESP = (EBP);
  /* 120b9acd pop ebp */
  EBP = (pop32());
  /* 120b9ace ret  */
  ESPCHK(0x120b9a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10019ad0 @ 0x120b9ad0 (349 bytes, 122 insns) */
void f_120b9ad0(void) {
  FTRACE(0x120b9ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b9ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b9ad1 mov ebp, esp */
  EBP = (ESP);
  /* 120b9ad3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b9ad6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 120b9adb push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9add mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9ae0 push eax */
  push32((uint32_t)(EAX));
  /* 120b9ae1 call 0x120b3090 */
  push32(0x120b9ae6u); f_120b3090();
  /* 120b9ae6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9ae9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9aec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120b9aef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b9af1 jne 0x120b9afa */
  if (!C.zf) goto L_120b9afa;
  /* 120b9af3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9af5 jmp 0x120b9c29 */
  goto L_120b9c29;
L_120b9afa:;
  /* 120b9afa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9afd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b9b00 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9b03 jne 0x120b9b30 */
  if (!C.zf) goto L_120b9b30;
  /* 120b9b05 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9b08 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 120b9b0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b9b0e je 0x120b9b30 */
  if (C.zf) goto L_120b9b30;
  /* 120b9b10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9b13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9b16 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9b17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9b1a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9b20 push edx */
  push32((uint32_t)(EDX));
  /* 120b9b21 call 0x120b1390 */
  push32(0x120b9b26u); f_120b1390();
  /* 120b9b26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9b29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9b2b jmp 0x120b9c29 */
  goto L_120b9c29;
L_120b9b30:;
  /* 120b9b30 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b9b37 jmp 0x120b9b42 */
  goto L_120b9b42;
L_120b9b39:;
  /* 120b9b39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b9b3c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9b3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b9b42:;
  /* 120b9b42 push 0x120dc3fc */
  push32((uint32_t)(0x120dc3fcu));
  /* 120b9b47 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9b4a push ecx */
  push32((uint32_t)(ECX));
  /* 120b9b4b call 0x120bd720 */
  push32(0x120b9b50u); f_120bd720();
  /* 120b9b50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9b53 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b9b56 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9b5a jne 0x120b9b64 */
  if (!C.zf) goto L_120b9b64;
  /* 120b9b5c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b9b5f jmp 0x120b9c29 */
  goto L_120b9c29;
L_120b9b64:;
  /* 120b9b64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9b67 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9b6a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120b9b6c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 120b9b6f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9b73 jne 0x120b9b9a */
  if (!C.zf) goto L_120b9b9a;
  /* 120b9b75 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9b79 jge 0x120b9b9a */
  if ((C.sf==C.of)) goto L_120b9b9a;
  /* 120b9b7b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120b9b7f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9b82 je 0x120b9b9a */
  if (C.zf) goto L_120b9b9a;
  /* 120b9b84 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b9b87 push edx */
  push32((uint32_t)(EDX));
  /* 120b9b88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9b8b push eax */
  push32((uint32_t)(EAX));
  /* 120b9b8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9b8f push ecx */
  push32((uint32_t)(ECX));
  /* 120b9b90 call 0x120b1c00 */
  push32(0x120b9b95u); f_120b1c00();
  /* 120b9b95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9b98 jmp 0x120b9c00 */
  goto L_120b9c00;
L_120b9b9a:;
  /* 120b9b9a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9b9e jne 0x120b9bc8 */
  if (!C.zf) goto L_120b9bc8;
  /* 120b9ba0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9ba4 jge 0x120b9bc8 */
  if ((C.sf==C.of)) goto L_120b9bc8;
  /* 120b9ba6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120b9baa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9bad je 0x120b9bc8 */
  if (C.zf) goto L_120b9bc8;
  /* 120b9baf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b9bb2 push eax */
  push32((uint32_t)(EAX));
  /* 120b9bb3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9bb6 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9bb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9bba add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9bbd push edx */
  push32((uint32_t)(EDX));
  /* 120b9bbe call 0x120b1c00 */
  push32(0x120b9bc3u); f_120b1c00();
  /* 120b9bc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9bc6 jmp 0x120b9c00 */
  goto L_120b9c00;
L_120b9bc8:;
  /* 120b9bc8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9bcc jne 0x120b9bfb */
  if (!C.zf) goto L_120b9bfb;
  /* 120b9bce movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120b9bd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b9bd4 je 0x120b9bdf */
  if (C.zf) goto L_120b9bdf;
  /* 120b9bd6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120b9bda cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9bdd jne 0x120b9bfb */
  if (!C.zf) goto L_120b9bfb;
L_120b9bdf:;
  /* 120b9bdf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b9be2 push edx */
  push32((uint32_t)(EDX));
  /* 120b9be3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9be6 push eax */
  push32((uint32_t)(EAX));
  /* 120b9be7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9bea add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9bf0 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9bf1 call 0x120b1c00 */
  push32(0x120b9bf6u); f_120b1c00();
  /* 120b9bf6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9bf9 jmp 0x120b9c00 */
  goto L_120b9c00;
L_120b9bfb:;
  /* 120b9bfb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b9bfe jmp 0x120b9c29 */
  goto L_120b9c29;
L_120b9c00:;
  /* 120b9c00 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120b9c04 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9c07 jne 0x120b9c0b */
  if (!C.zf) goto L_120b9c0b;
  /* 120b9c09 jmp 0x120b9c27 */
  goto L_120b9c27;
L_120b9c0b:;
  /* 120b9c0b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120b9c0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b9c11 jne 0x120b9c15 */
  if (!C.zf) goto L_120b9c15;
  /* 120b9c13 jmp 0x120b9c27 */
  goto L_120b9c27;
L_120b9c15:;
  /* 120b9c15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b9c18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9c1b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 120b9c1f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 120b9c22 jmp 0x120b9b39 */
  goto L_120b9b39;
L_120b9c27:;
  /* 120b9c27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120b9c29:;
  /* 120b9c29 mov esp, ebp */
  ESP = (EBP);
  /* 120b9c2b pop ebp */
  EBP = (pop32());
  /* 120b9c2c ret  */
  ESPCHK(0x120b9ad0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x120b9c30 (101 bytes, 36 insns) */
void f_120b9c30(void) {
  FTRACE(0x120b9c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b9c30 push ebp */
  push32((uint32_t)(EBP));
  /* 120b9c31 mov ebp, esp */
  EBP = (ESP);
  /* 120b9c33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9c36 push eax */
  push32((uint32_t)(EAX));
  /* 120b9c37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9c3a push ecx */
  push32((uint32_t)(ECX));
  /* 120b9c3b call 0x120b1390 */
  push32(0x120b9c40u); f_120b1390();
  /* 120b9c40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9c43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9c46 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 120b9c4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b9c4c je 0x120b9c68 */
  if (C.zf) goto L_120b9c68;
  /* 120b9c4e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9c51 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9c54 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9c55 push 0x120dc404 */
  push32((uint32_t)(0x120dc404u));
  /* 120b9c5a push 2 */
  push32((uint32_t)(0x2u));
  /* 120b9c5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9c5f push edx */
  push32((uint32_t)(EDX));
  /* 120b9c60 call 0x120b9a80 */
  push32(0x120b9c65u); f_120b9a80();
  /* 120b9c65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b9c68:;
  /* 120b9c68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9c6b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 120b9c72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b9c74 je 0x120b9c93 */
  if (C.zf) goto L_120b9c93;
  /* 120b9c76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9c79 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9c7f push edx */
  push32((uint32_t)(EDX));
  /* 120b9c80 push 0x120dc400 */
  push32((uint32_t)(0x120dc400u));
  /* 120b9c85 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b9c87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9c8a push eax */
  push32((uint32_t)(EAX));
  /* 120b9c8b call 0x120b9a80 */
  push32(0x120b9c90u); f_120b9a80();
  /* 120b9c90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b9c93:;
  /* 120b9c93 pop ebp */
  EBP = (pop32());
  /* 120b9c94 ret  */
  ESPCHK(0x120b9c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10019ca0 @ 0x120b9ca0 (727 bytes, 263 insns) */
void f_120b9ca0(void) {
  FTRACE(0x120b9ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b9ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b9ca1 mov ebp, esp */
  EBP = (ESP);
  /* 120b9ca3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120b9ca5 push 0x120dc408 */
  push32((uint32_t)(0x120dc408u));
  /* 120b9caa push 0x120b58ac */
  push32((uint32_t)(0x120b58acu));
  /* 120b9caf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120b9cb5 push eax */
  push32((uint32_t)(EAX));
  /* 120b9cb6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120b9cbd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9cc0 push ebx */
  push32((uint32_t)(EBX));
  /* 120b9cc1 push esi */
  push32((uint32_t)(ESI));
  /* 120b9cc2 push edi */
  push32((uint32_t)(EDI));
  /* 120b9cc3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120b9cc6 cmp dword ptr [0x120e13f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e13f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9ccd jne 0x120b9d26 */
  if (!C.zf) goto L_120b9d26;
  /* 120b9ccf push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9cd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9cd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b9cd5 push 0x120dc394 */
  push32((uint32_t)(0x120dc394u));
  /* 120b9cda push 0x100 */
  push32((uint32_t)(0x100u));
  /* 120b9cdf push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9ce1 call dword ptr [0x120e3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3368))), 0x120b9ce7u);
  /* 120b9ce7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b9ce9 je 0x120b9cf7 */
  if (C.zf) goto L_120b9cf7;
  /* 120b9ceb mov dword ptr [0x120e13f8], 1 */
  w32((uint32_t)(0x120e13f8), (0x1u));
  /* 120b9cf5 jmp 0x120b9d26 */
  goto L_120b9d26;
L_120b9cf7:;
  /* 120b9cf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9cf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9cfb push 1 */
  push32((uint32_t)(0x1u));
  /* 120b9cfd push 0x120dc390 */
  push32((uint32_t)(0x120dc390u));
  /* 120b9d02 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 120b9d07 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9d09 call dword ptr [0x120e336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e336c))), 0x120b9d0fu);
  /* 120b9d0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b9d11 je 0x120b9d1f */
  if (C.zf) goto L_120b9d1f;
  /* 120b9d13 mov dword ptr [0x120e13f8], 2 */
  w32((uint32_t)(0x120e13f8), (0x2u));
  /* 120b9d1d jmp 0x120b9d26 */
  goto L_120b9d26;
L_120b9d1f:;
  /* 120b9d1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9d21 jmp 0x120b9f91 */
  goto L_120b9f91;
L_120b9d26:;
  /* 120b9d26 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9d2a jle 0x120b9d3f */
  if ((C.zf||C.sf!=C.of)) goto L_120b9d3f;
  /* 120b9d2c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b9d2f push eax */
  push32((uint32_t)(EAX));
  /* 120b9d30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b9d33 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9d34 call 0x120b9fb0 */
  push32(0x120b9d39u); f_120b9fb0();
  /* 120b9d39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9d3c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_120b9d3f:;
  /* 120b9d3f cmp dword ptr [0x120e13f8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x120e13f8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9d46 jne 0x120b9d6b */
  if (!C.zf) goto L_120b9d6b;
  /* 120b9d48 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120b9d4b push edx */
  push32((uint32_t)(EDX));
  /* 120b9d4c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b9d4f push eax */
  push32((uint32_t)(EAX));
  /* 120b9d50 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b9d53 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9d54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b9d57 push edx */
  push32((uint32_t)(EDX));
  /* 120b9d58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9d5b push eax */
  push32((uint32_t)(EAX));
  /* 120b9d5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9d5f push ecx */
  push32((uint32_t)(ECX));
  /* 120b9d60 call dword ptr [0x120e336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e336c))), 0x120b9d66u);
  /* 120b9d66 jmp 0x120b9f91 */
  goto L_120b9f91;
L_120b9d6b:;
  /* 120b9d6b cmp dword ptr [0x120e13f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120e13f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9d72 jne 0x120b9f8f */
  if (!C.zf) goto L_120b9f8f;
  /* 120b9d78 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9d7c jne 0x120b9d87 */
  if (!C.zf) goto L_120b9d87;
  /* 120b9d7e mov edx, dword ptr [0x120e13f0] */
  EDX = (r32((uint32_t)(0x120e13f0)));
  /* 120b9d84 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_120b9d87:;
  /* 120b9d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9d89 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9d8b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b9d8e push eax */
  push32((uint32_t)(EAX));
  /* 120b9d8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b9d92 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9d93 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 120b9d96 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b9d98 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b9d9a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 120b9d9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9da0 push edx */
  push32((uint32_t)(EDX));
  /* 120b9da1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 120b9da4 push eax */
  push32((uint32_t)(EAX));
  /* 120b9da5 call dword ptr [0x120e337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e337c))), 0x120b9dabu);
  /* 120b9dab mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120b9dae cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9db2 jne 0x120b9dbb */
  if (!C.zf) goto L_120b9dbb;
  /* 120b9db4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9db6 jmp 0x120b9f91 */
  goto L_120b9f91;
L_120b9dbb:;
  /* 120b9dbb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b9dc2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b9dc5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120b9dc7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9dca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 120b9dcc call 0x120b1580 */
  push32(0x120b9dd1u); f_120b1580();
  /* 120b9dd1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 120b9dd4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120b9dd7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b9dda mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 120b9ddd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120b9de4 jmp 0x120b9dfd */
  goto L_120b9dfd;
  /* 120b9de6 mov eax, 1 */
  EAX = (0x1u);
  /* 120b9deb ret  */
  ESPCHK(0x120b9ca0u, _esp0);
  ESP += 4; return;
  /* 120b9dec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120b9def mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 120b9df6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_120b9dfd:;
  /* 120b9dfd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9e01 jne 0x120b9e0a */
  if (!C.zf) goto L_120b9e0a;
  /* 120b9e03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9e05 jmp 0x120b9f91 */
  goto L_120b9f91;
L_120b9e0a:;
  /* 120b9e0a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b9e0d push edx */
  push32((uint32_t)(EDX));
  /* 120b9e0e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b9e11 push eax */
  push32((uint32_t)(EAX));
  /* 120b9e12 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b9e15 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9e16 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b9e19 push edx */
  push32((uint32_t)(EDX));
  /* 120b9e1a push 1 */
  push32((uint32_t)(0x1u));
  /* 120b9e1c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 120b9e1f push eax */
  push32((uint32_t)(EAX));
  /* 120b9e20 call dword ptr [0x120e337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e337c))), 0x120b9e26u);
  /* 120b9e26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b9e28 jne 0x120b9e31 */
  if (!C.zf) goto L_120b9e31;
  /* 120b9e2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9e2c jmp 0x120b9f91 */
  goto L_120b9f91;
L_120b9e31:;
  /* 120b9e31 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9e33 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9e35 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b9e38 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9e39 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b9e3c push edx */
  push32((uint32_t)(EDX));
  /* 120b9e3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9e40 push eax */
  push32((uint32_t)(EAX));
  /* 120b9e41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9e44 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9e45 call dword ptr [0x120e3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3368))), 0x120b9e4bu);
  /* 120b9e4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120b9e4e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9e52 jne 0x120b9e5b */
  if (!C.zf) goto L_120b9e5b;
  /* 120b9e54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9e56 jmp 0x120b9f91 */
  goto L_120b9f91;
L_120b9e5b:;
  /* 120b9e5b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9e5e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 120b9e64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b9e66 je 0x120b9eab */
  if (C.zf) goto L_120b9eab;
  /* 120b9e68 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9e6c je 0x120b9ea6 */
  if (C.zf) goto L_120b9ea6;
  /* 120b9e6e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b9e71 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9e74 jle 0x120b9e7d */
  if ((C.zf||C.sf!=C.of)) goto L_120b9e7d;
  /* 120b9e76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9e78 jmp 0x120b9f91 */
  goto L_120b9f91;
L_120b9e7d:;
  /* 120b9e7d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120b9e80 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9e81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b9e84 push edx */
  push32((uint32_t)(EDX));
  /* 120b9e85 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b9e88 push eax */
  push32((uint32_t)(EAX));
  /* 120b9e89 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b9e8c push ecx */
  push32((uint32_t)(ECX));
  /* 120b9e8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9e90 push edx */
  push32((uint32_t)(EDX));
  /* 120b9e91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9e94 push eax */
  push32((uint32_t)(EAX));
  /* 120b9e95 call dword ptr [0x120e3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3368))), 0x120b9e9bu);
  /* 120b9e9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b9e9d jne 0x120b9ea6 */
  if (!C.zf) goto L_120b9ea6;
  /* 120b9e9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9ea1 jmp 0x120b9f91 */
  goto L_120b9f91;
L_120b9ea6:;
  /* 120b9ea6 jmp 0x120b9f8a */
  goto L_120b9f8a;
L_120b9eab:;
  /* 120b9eab mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b9eae mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 120b9eb1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120b9eb8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b9ebb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120b9ebd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9ec0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 120b9ec2 call 0x120b1580 */
  push32(0x120b9ec7u); f_120b1580();
  /* 120b9ec7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 120b9eca mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120b9ecd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 120b9ed0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 120b9ed3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120b9eda jmp 0x120b9ef3 */
  goto L_120b9ef3;
  /* 120b9edc mov eax, 1 */
  EAX = (0x1u);
  /* 120b9ee1 ret  */
  ESPCHK(0x120b9ca0u, _esp0);
  ESP += 4; return;
  /* 120b9ee2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120b9ee5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 120b9eec mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_120b9ef3:;
  /* 120b9ef3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9ef7 jne 0x120b9f00 */
  if (!C.zf) goto L_120b9f00;
  /* 120b9ef9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9efb jmp 0x120b9f91 */
  goto L_120b9f91;
L_120b9f00:;
  /* 120b9f00 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b9f03 push eax */
  push32((uint32_t)(EAX));
  /* 120b9f04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b9f07 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9f08 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b9f0b push edx */
  push32((uint32_t)(EDX));
  /* 120b9f0c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b9f0f push eax */
  push32((uint32_t)(EAX));
  /* 120b9f10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9f13 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9f14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9f17 push edx */
  push32((uint32_t)(EDX));
  /* 120b9f18 call dword ptr [0x120e3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3368))), 0x120b9f1eu);
  /* 120b9f1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b9f20 jne 0x120b9f26 */
  if (!C.zf) goto L_120b9f26;
  /* 120b9f22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9f24 jmp 0x120b9f91 */
  goto L_120b9f91;
L_120b9f26:;
  /* 120b9f26 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9f2a jne 0x120b9f5a */
  if (!C.zf) goto L_120b9f5a;
  /* 120b9f2c push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9f2e push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9f30 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9f34 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b9f37 push eax */
  push32((uint32_t)(EAX));
  /* 120b9f38 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b9f3b push ecx */
  push32((uint32_t)(ECX));
  /* 120b9f3c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 120b9f41 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 120b9f44 push edx */
  push32((uint32_t)(EDX));
  /* 120b9f45 call dword ptr [0x120e33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33c4))), 0x120b9f4bu);
  /* 120b9f4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120b9f4e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9f52 jne 0x120b9f58 */
  if (!C.zf) goto L_120b9f58;
  /* 120b9f54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9f56 jmp 0x120b9f91 */
  goto L_120b9f91;
L_120b9f58:;
  /* 120b9f58 jmp 0x120b9f8a */
  goto L_120b9f8a;
L_120b9f5a:;
  /* 120b9f5a push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9f5c push 0 */
  push32((uint32_t)(0x0u));
  /* 120b9f5e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120b9f61 push eax */
  push32((uint32_t)(EAX));
  /* 120b9f62 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b9f65 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9f66 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b9f69 push edx */
  push32((uint32_t)(EDX));
  /* 120b9f6a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b9f6d push eax */
  push32((uint32_t)(EAX));
  /* 120b9f6e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 120b9f73 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 120b9f76 push ecx */
  push32((uint32_t)(ECX));
  /* 120b9f77 call dword ptr [0x120e33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33c4))), 0x120b9f7du);
  /* 120b9f7d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120b9f80 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b9f84 jne 0x120b9f8a */
  if (!C.zf) goto L_120b9f8a;
  /* 120b9f86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b9f88 jmp 0x120b9f91 */
  goto L_120b9f91;
L_120b9f8a:;
  /* 120b9f8a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b9f8d jmp 0x120b9f91 */
  goto L_120b9f91;
L_120b9f8f:;
  /* 120b9f8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120b9f91:;
  /* 120b9f91 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 120b9f94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b9f97 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120b9f9e pop edi */
  EDI = (pop32());
  /* 120b9f9f pop esi */
  ESI = (pop32());
  /* 120b9fa0 pop ebx */
  EBX = (pop32());
  /* 120b9fa1 mov esp, ebp */
  ESP = (EBP);
  /* 120b9fa3 pop ebp */
  EBP = (pop32());
  /* 120b9fa4 ret  */
  ESPCHK(0x120b9ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019fb0 @ 0x120b9fb0 (80 bytes, 32 insns) */
void f_120b9fb0(void) {
  FTRACE(0x120b9fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b9fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b9fb1 mov ebp, esp */
  EBP = (ESP);
  /* 120b9fb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b9fb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b9fb9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b9fbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b9fbf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120b9fc2:;
  /* 120b9fc2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b9fc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b9fc8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b9fcb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b9fce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b9fd0 je 0x120b9fe7 */
  if (C.zf) goto L_120b9fe7;
  /* 120b9fd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b9fd5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120b9fd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b9fda je 0x120b9fe7 */
  if (C.zf) goto L_120b9fe7;
  /* 120b9fdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b9fdf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b9fe2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b9fe5 jmp 0x120b9fc2 */
  goto L_120b9fc2;
L_120b9fe7:;
  /* 120b9fe7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b9fea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120b9fed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b9fef jne 0x120b9ff9 */
  if (!C.zf) goto L_120b9ff9;
  /* 120b9ff1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b9ff4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b9ff7 jmp 0x120b9ffc */
  goto L_120b9ffc;
L_120b9ff9:;
  /* 120b9ff9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_120b9ffc:;
  /* 120b9ffc mov esp, ebp */
  ESP = (EBP);
  /* 120b9ffe pop ebp */
  EBP = (pop32());
  /* 120b9fff ret  */
  ESPCHK(0x120b9fb0u, _esp0);
  ESP += 4; return;
}

/* ___addl @ 0x120ba000 (62 bytes, 23 insns) */
void f_120ba000(void) {
  FTRACE(0x120ba000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ba000 push ebp */
  push32((uint32_t)(EBP));
  /* 120ba001 mov ebp, esp */
  EBP = (ESP);
  /* 120ba003 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba006 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120ba00d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba010 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba013 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ba016 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba019 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba01c jb 0x120ba026 */
  if (C.cf) goto L_120ba026;
  /* 120ba01e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba021 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba024 jae 0x120ba02f */
  if (!C.cf) goto L_120ba02f;
L_120ba026:;
  /* 120ba026 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ba029 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba02c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120ba02f:;
  /* 120ba02f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba032 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba035 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120ba037 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ba03a mov esp, ebp */
  ESP = (EBP);
  /* 120ba03c pop ebp */
  EBP = (pop32());
  /* 120ba03d ret  */
  ESPCHK(0x120ba000u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x120ba040 (173 bytes, 66 insns) */
void f_120ba040(void) {
  FTRACE(0x120ba040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ba040 push ebp */
  push32((uint32_t)(EBP));
  /* 120ba041 mov ebp, esp */
  EBP = (ESP);
  /* 120ba043 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba046 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba049 push eax */
  push32((uint32_t)(EAX));
  /* 120ba04a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ba04d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120ba04f push edx */
  push32((uint32_t)(EDX));
  /* 120ba050 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba053 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120ba055 push ecx */
  push32((uint32_t)(ECX));
  /* 120ba056 call 0x120ba000 */
  push32(0x120ba05bu); f_120ba000();
  /* 120ba05b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba05e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ba061 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba065 je 0x120ba097 */
  if (C.zf) goto L_120ba097;
  /* 120ba067 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba06a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba06d push edx */
  push32((uint32_t)(EDX));
  /* 120ba06e push 1 */
  push32((uint32_t)(0x1u));
  /* 120ba070 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba073 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120ba076 push ecx */
  push32((uint32_t)(ECX));
  /* 120ba077 call 0x120ba000 */
  push32(0x120ba07cu); f_120ba000();
  /* 120ba07c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba07f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120ba082 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba086 je 0x120ba097 */
  if (C.zf) goto L_120ba097;
  /* 120ba088 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba08b mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120ba08e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba091 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba094 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
L_120ba097:;
  /* 120ba097 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba09a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba09d push edx */
  push32((uint32_t)(EDX));
  /* 120ba09e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ba0a1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120ba0a4 push ecx */
  push32((uint32_t)(ECX));
  /* 120ba0a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba0a8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120ba0ab push eax */
  push32((uint32_t)(EAX));
  /* 120ba0ac call 0x120ba000 */
  push32(0x120ba0b1u); f_120ba000();
  /* 120ba0b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba0b4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120ba0b7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba0bb je 0x120ba0cc */
  if (C.zf) goto L_120ba0cc;
  /* 120ba0bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba0c0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120ba0c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba0c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba0c9 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_120ba0cc:;
  /* 120ba0cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba0cf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba0d2 push ecx */
  push32((uint32_t)(ECX));
  /* 120ba0d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ba0d6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120ba0d9 push eax */
  push32((uint32_t)(EAX));
  /* 120ba0da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba0dd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120ba0e0 push edx */
  push32((uint32_t)(EDX));
  /* 120ba0e1 call 0x120ba000 */
  push32(0x120ba0e6u); f_120ba000();
  /* 120ba0e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba0e9 mov esp, ebp */
  ESP = (EBP);
  /* 120ba0eb pop ebp */
  EBP = (pop32());
  /* 120ba0ec ret  */
  ESPCHK(0x120ba040u, _esp0);
  ESP += 4; return;
}

/* ___shl_12 @ 0x120ba0f0 (96 bytes, 37 insns) */
void f_120ba0f0(void) {
  FTRACE(0x120ba0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ba0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120ba0f1 mov ebp, esp */
  EBP = (ESP);
  /* 120ba0f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba0f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba0f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120ba0fb and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 120ba101 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120ba103 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba105 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120ba107 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120ba10a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba10d mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120ba110 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 120ba115 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120ba117 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba119 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120ba11b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120ba11e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba121 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120ba123 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 120ba125 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba128 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120ba12a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba12d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120ba130 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 120ba132 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 120ba135 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba138 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 120ba13b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba13e mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120ba141 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 120ba143 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 120ba146 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba149 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 120ba14c mov esp, ebp */
  ESP = (EBP);
  /* 120ba14e pop ebp */
  EBP = (pop32());
  /* 120ba14f ret  */
  ESPCHK(0x120ba0f0u, _esp0);
  ESP += 4; return;
}

/* ___shr_12 @ 0x120ba150 (99 bytes, 37 insns) */
void f_120ba150(void) {
  FTRACE(0x120ba150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ba150 push ebp */
  push32((uint32_t)(EBP));
  /* 120ba151 mov ebp, esp */
  EBP = (ESP);
  /* 120ba153 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba159 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120ba15c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120ba15f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120ba161 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba163 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 120ba169 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120ba16c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba16f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120ba172 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120ba175 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120ba177 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba179 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 120ba17e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ba181 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba184 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120ba187 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 120ba189 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba18c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 120ba18f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba192 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120ba195 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 120ba197 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 120ba19a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba19d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 120ba1a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba1a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120ba1a5 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 120ba1a7 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 120ba1aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba1ad mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120ba1af mov esp, ebp */
  ESP = (EBP);
  /* 120ba1b1 pop ebp */
  EBP = (pop32());
  /* 120ba1b2 ret  */
  ESPCHK(0x120ba150u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a1c0 @ 0x120ba1c0 (315 bytes, 101 insns) */
void f_120ba1c0(void) {
  FTRACE(0x120ba1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ba1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120ba1c1 mov ebp, esp */
  EBP = (ESP);
  /* 120ba1c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba1c6 mov word ptr [ebp - 0x10], 0x404e */
  w16((uint32_t)(EBP + -0x10), (0x404eu));
  /* 120ba1cc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba1cf mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120ba1d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba1d8 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 120ba1df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba1e2 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 120ba1e9 jmp 0x120ba1fd */
  goto L_120ba1fd;
L_120ba1eb:;
  /* 120ba1eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ba1ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba1f1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 120ba1f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba1f7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba1fa mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_120ba1fd:;
  /* 120ba1fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba201 jbe 0x120ba277 */
  if ((C.cf||C.zf)) goto L_120ba277;
  /* 120ba203 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba206 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120ba208 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120ba20b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 120ba20e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120ba211 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 120ba214 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120ba217 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba21a push eax */
  push32((uint32_t)(EAX));
  /* 120ba21b call 0x120ba0f0 */
  push32(0x120ba220u); f_120ba0f0();
  /* 120ba220 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba223 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba226 push ecx */
  push32((uint32_t)(ECX));
  /* 120ba227 call 0x120ba0f0 */
  push32(0x120ba22cu); f_120ba0f0();
  /* 120ba22c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba22f lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 120ba232 push edx */
  push32((uint32_t)(EDX));
  /* 120ba233 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba236 push eax */
  push32((uint32_t)(EAX));
  /* 120ba237 call 0x120ba040 */
  push32(0x120ba23cu); f_120ba040();
  /* 120ba23c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba23f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba242 push ecx */
  push32((uint32_t)(ECX));
  /* 120ba243 call 0x120ba0f0 */
  push32(0x120ba248u); f_120ba0f0();
  /* 120ba248 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba24b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ba24e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120ba251 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120ba254 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120ba25b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120ba262 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 120ba265 push ecx */
  push32((uint32_t)(ECX));
  /* 120ba266 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba269 push edx */
  push32((uint32_t)(EDX));
  /* 120ba26a call 0x120ba040 */
  push32(0x120ba26fu); f_120ba040();
  /* 120ba26f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba272 jmp 0x120ba1eb */
  goto L_120ba1eb;
L_120ba277:;
  /* 120ba277 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba27a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba27e jne 0x120ba2c3 */
  if (!C.zf) goto L_120ba2c3;
  /* 120ba280 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba283 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120ba286 shr edx, 0x10 */
  EDX = (sh_shr((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 120ba289 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba28c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 120ba28f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba292 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120ba295 shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 120ba298 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba29b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120ba29d shr ecx, 0x10 */
  ECX = (sh_shr((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 120ba2a0 or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120ba2a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba2a5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 120ba2a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba2ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120ba2ad shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 120ba2b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba2b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120ba2b5 mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 120ba2b9 sub cx, 0x10 */
  { uint32_t _a=(CX),_b=(0x10u),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 120ba2bd mov word ptr [ebp - 0x10], cx */
  w16((uint32_t)(EBP + -0x10), (CX));
  /* 120ba2c1 jmp 0x120ba277 */
  goto L_120ba277;
L_120ba2c3:;
  /* 120ba2c3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba2c6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120ba2c9 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 120ba2ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ba2d0 jne 0x120ba2ec */
  if (!C.zf) goto L_120ba2ec;
  /* 120ba2d2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba2d5 push ecx */
  push32((uint32_t)(ECX));
  /* 120ba2d6 call 0x120ba0f0 */
  push32(0x120ba2dbu); f_120ba0f0();
  /* 120ba2db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba2de mov dx, word ptr [ebp - 0x10] */
  DX = (r16((uint32_t)(EBP + -0x10)));
  /* 120ba2e2 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 120ba2e6 mov word ptr [ebp - 0x10], dx */
  w16((uint32_t)(EBP + -0x10), (DX));
  /* 120ba2ea jmp 0x120ba2c3 */
  goto L_120ba2c3;
L_120ba2ec:;
  /* 120ba2ec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba2ef mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 120ba2f3 mov word ptr [eax + 0xa], cx */
  w16((uint32_t)(EAX + 0xa), (CX));
  /* 120ba2f7 mov esp, ebp */
  ESP = (EBP);
  /* 120ba2f9 pop ebp */
  EBP = (pop32());
  /* 120ba2fa ret  */
  ESPCHK(0x120ba1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a300 @ 0x120ba300 (2586 bytes, 690 insns) [4 switch table(s)] */
void f_120ba300(void) {
  FTRACE(0x120ba300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ba300 push ebp */
  push32((uint32_t)(EBP));
  /* 120ba301 mov ebp, esp */
  EBP = (ESP);
  /* 120ba303 sub esp, 0xb4 */
  { uint32_t _a=(ESP),_b=(0xb4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba309 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 120ba30c mov dword ptr [ebp - 0x68], eax */
  w32((uint32_t)(EBP + -0x68), (EAX));
  /* 120ba30f mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 120ba315 mov dword ptr [ebp - 0x74], 1 */
  w32((uint32_t)(EBP + -0x74), (0x1u));
  /* 120ba31c mov dword ptr [ebp - 0x70], 0 */
  w32((uint32_t)(EBP + -0x70), (0x0u));
  /* 120ba323 mov dword ptr [ebp - 0x54], 0 */
  w32((uint32_t)(EBP + -0x54), (0x0u));
  /* 120ba32a mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120ba331 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 120ba338 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 120ba33f mov dword ptr [ebp - 0x78], 0 */
  w32((uint32_t)(EBP + -0x78), (0x0u));
  /* 120ba346 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 120ba34d mov dword ptr [ebp - 0x6c], 0 */
  w32((uint32_t)(EBP + -0x6c), (0x0u));
  /* 120ba354 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 120ba35b mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 120ba362 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ba365 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120ba368 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba36b mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 120ba36e jmp 0x120ba379 */
  goto L_120ba379;
L_120ba370:;
  /* 120ba370 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba373 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba376 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120ba379:;
  /* 120ba379 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba37c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120ba37f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba382 je 0x120ba3a5 */
  if (C.zf) goto L_120ba3a5;
  /* 120ba384 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba387 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120ba38a cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba38d je 0x120ba3a5 */
  if (C.zf) goto L_120ba3a5;
  /* 120ba38f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba392 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120ba395 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba398 je 0x120ba3a5 */
  if (C.zf) goto L_120ba3a5;
  /* 120ba39a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba39d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120ba3a0 cmp edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba3a3 jne 0x120ba3a7 */
  if (!C.zf) goto L_120ba3a7;
L_120ba3a5:;
  /* 120ba3a5 jmp 0x120ba370 */
  goto L_120ba370;
L_120ba3a7:;
  /* 120ba3a7 cmp dword ptr [ebp - 0x4c], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba3ab je 0x120bab08 */
  if (C.zf) goto L_120bab08;
  /* 120ba3b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba3b4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120ba3b6 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 120ba3b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba3bc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba3bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120ba3c2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 120ba3c5 mov dword ptr [ebp - 0x80], eax */
  w32((uint32_t)(EBP + -0x80), (EAX));
  /* 120ba3c8 cmp dword ptr [ebp - 0x80], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x80))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba3cc ja 0x120bab03 */
  if ((!C.cf&&!C.zf)) goto L_120bab03;
  /* 120ba3d2 mov ecx, dword ptr [ebp - 0x80] */
  ECX = (r32((uint32_t)(EBP + -0x80)));
  /* 120ba3d5 jmp dword ptr [ecx*4 + 0x120bad1a] */
  switch (ECX) {
    case 0: goto L_120ba3dc;
    case 1: goto L_120ba47a;
    case 2: goto L_120ba530;
    case 3: goto L_120ba59b;
    case 4: goto L_120ba6b3;
    case 5: goto L_120ba7e5;
    case 6: goto L_120ba85b;
    case 7: goto L_120ba940;
    case 8: goto L_120ba8e2;
    case 9: goto L_120ba993;
    case 10: goto L_120bab03;
    case 11: goto L_120baa9f;
    case 12: goto L_120ba509;
    case 13: goto L_120ba4f7;
    case 14: goto L_120ba500;
    case 15: goto L_120ba51b;
    default: x86_unimpl("switch@0x120ba3d5 out of table"); return;
  }
L_120ba3dc:;
  /* 120ba3dc movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba3e0 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba3e3 jl 0x120ba400 */
  if ((C.sf!=C.of)) goto L_120ba400;
  /* 120ba3e5 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba3e9 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba3ec jg 0x120ba400 */
  if ((!C.zf&&C.sf==C.of)) goto L_120ba400;
  /* 120ba3ee mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 120ba3f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba3f8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba3fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120ba3fe jmp 0x120ba475 */
  goto L_120ba475;
L_120ba400:;
  /* 120ba400 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba404 movsx eax, byte ptr [0x120df014] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x120df014))));
  /* 120ba40b cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba40d jne 0x120ba418 */
  if (!C.zf) goto L_120ba418;
  /* 120ba40f mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 120ba416 jmp 0x120ba475 */
  goto L_120ba475;
L_120ba418:;
  /* 120ba418 mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 120ba41b mov byte ptr [ebp - 0x84], cl */
  w8((uint32_t)(EBP + -0x84), (CL));
  /* 120ba421 cmp byte ptr [ebp - 0x84], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120ba428 je 0x120ba447 */
  if (C.zf) goto L_120ba447;
  /* 120ba42a cmp byte ptr [ebp - 0x84], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120ba431 je 0x120ba456 */
  if (C.zf) goto L_120ba456;
  /* 120ba433 cmp byte ptr [ebp - 0x84], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120ba43a je 0x120ba43e */
  if (C.zf) goto L_120ba43e;
  /* 120ba43c jmp 0x120ba465 */
  goto L_120ba465;
L_120ba43e:;
  /* 120ba43e mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 120ba445 jmp 0x120ba475 */
  goto L_120ba475;
L_120ba447:;
  /* 120ba447 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 120ba44e mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 120ba454 jmp 0x120ba475 */
  goto L_120ba475;
L_120ba456:;
  /* 120ba456 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 120ba45d mov word ptr [ebp - 0x1c], 0x8000 */
  w16((uint32_t)(EBP + -0x1c), (0x8000u));
  /* 120ba463 jmp 0x120ba475 */
  goto L_120ba475;
L_120ba465:;
  /* 120ba465 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 120ba46c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba46f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba472 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120ba475:;
  /* 120ba475 jmp 0x120bab03 */
  goto L_120bab03;
L_120ba47a:;
  /* 120ba47a mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 120ba481 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba485 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba488 jl 0x120ba4a8 */
  if ((C.sf!=C.of)) goto L_120ba4a8;
  /* 120ba48a movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba48e cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba491 jg 0x120ba4a8 */
  if ((!C.zf&&C.sf==C.of)) goto L_120ba4a8;
  /* 120ba493 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 120ba49a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba49d sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba4a0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120ba4a3 jmp 0x120ba52b */
  goto L_120ba52b;
L_120ba4a8:;
  /* 120ba4a8 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba4ac movsx ecx, byte ptr [0x120df014] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x120df014))));
  /* 120ba4b3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba4b5 jne 0x120ba4c0 */
  if (!C.zf) goto L_120ba4c0;
  /* 120ba4b7 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 120ba4be jmp 0x120ba52b */
  goto L_120ba52b;
L_120ba4c0:;
  /* 120ba4c0 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba4c4 mov dword ptr [ebp - 0x88], edx */
  w32((uint32_t)(EBP + -0x88), (EDX));
  /* 120ba4ca mov eax, dword ptr [ebp - 0x88] */
  EAX = (r32((uint32_t)(EBP + -0x88)));
  /* 120ba4d0 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba4d3 mov dword ptr [ebp - 0x88], eax */
  w32((uint32_t)(EBP + -0x88), (EAX));
  /* 120ba4d9 cmp dword ptr [ebp - 0x88], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba4e0 ja 0x120ba51b */
  if ((!C.cf&&!C.zf)) goto L_120ba51b;
  /* 120ba4e2 mov edx, dword ptr [ebp - 0x88] */
  EDX = (r32((uint32_t)(EBP + -0x88)));
  /* 120ba4e8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ba4ea mov cl, byte ptr [edx + 0x120bad5a] */
  CL = (r8((uint32_t)(EDX + 0x120bad5a)));
  /* 120ba4f0 jmp dword ptr [ecx*4 + 0x120bad4a] */
  switch (ECX) {
    case 0: goto L_120ba509;
    case 1: goto L_120ba4f7;
    case 2: goto L_120ba500;
    case 3: goto L_120ba51b;
    default: x86_unimpl("switch@0x120ba4f0 out of table"); return;
  }
L_120ba4f7:;
  /* 120ba4f7 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 120ba4fe jmp 0x120ba52b */
  goto L_120ba52b;
L_120ba500:;
  /* 120ba500 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 120ba507 jmp 0x120ba52b */
  goto L_120ba52b;
L_120ba509:;
  /* 120ba509 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba50c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba50f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ba512 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 120ba519 jmp 0x120ba52b */
  goto L_120ba52b;
L_120ba51b:;
  /* 120ba51b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 120ba522 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba525 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba528 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120ba52b:;
  /* 120ba52b jmp 0x120bab03 */
  goto L_120bab03;
L_120ba530:;
  /* 120ba530 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba534 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba537 jl 0x120ba554 */
  if ((C.sf!=C.of)) goto L_120ba554;
  /* 120ba539 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba53d cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba540 jg 0x120ba554 */
  if ((!C.zf&&C.sf==C.of)) goto L_120ba554;
  /* 120ba542 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 120ba549 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba54c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba54f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120ba552 jmp 0x120ba596 */
  goto L_120ba596;
L_120ba554:;
  /* 120ba554 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba558 movsx eax, byte ptr [0x120df014] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x120df014))));
  /* 120ba55f cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba561 jne 0x120ba56c */
  if (!C.zf) goto L_120ba56c;
  /* 120ba563 mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 120ba56a jmp 0x120ba596 */
  goto L_120ba596;
L_120ba56c:;
  /* 120ba56c mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 120ba56f mov byte ptr [ebp - 0x8c], cl */
  w8((uint32_t)(EBP + -0x8c), (CL));
  /* 120ba575 cmp byte ptr [ebp - 0x8c], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8c))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120ba57c je 0x120ba580 */
  if (C.zf) goto L_120ba580;
  /* 120ba57e jmp 0x120ba589 */
  goto L_120ba589;
L_120ba580:;
  /* 120ba580 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 120ba587 jmp 0x120ba596 */
  goto L_120ba596;
L_120ba589:;
  /* 120ba589 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 120ba590 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 120ba593 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120ba596:;
  /* 120ba596 jmp 0x120bab03 */
  goto L_120bab03;
L_120ba59b:;
  /* 120ba59b mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 120ba5a2 jmp 0x120ba5b5 */
  goto L_120ba5b5;
L_120ba5a4:;
  /* 120ba5a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba5a7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120ba5a9 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 120ba5ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba5af add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba5b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120ba5b5:;
  /* 120ba5b5 cmp dword ptr [0x120df010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120df010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba5bc jle 0x120ba5d9 */
  if ((C.zf||C.sf!=C.of)) goto L_120ba5d9;
  /* 120ba5be push 4 */
  push32((uint32_t)(0x4u));
  /* 120ba5c0 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120ba5c3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ba5c8 push eax */
  push32((uint32_t)(EAX));
  /* 120ba5c9 call 0x120b2320 */
  push32(0x120ba5ceu); f_120b2320();
  /* 120ba5ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba5d1 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 120ba5d7 jmp 0x120ba5f7 */
  goto L_120ba5f7;
L_120ba5d9:;
  /* 120ba5d9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120ba5dc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120ba5e2 mov edx, dword ptr [0x120df01c] */
  EDX = (r32((uint32_t)(0x120df01c)));
  /* 120ba5e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ba5ea mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 120ba5ee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 120ba5f1 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
L_120ba5f7:;
  /* 120ba5f7 cmp dword ptr [ebp - 0x90], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba5fe je 0x120ba634 */
  if (C.zf) goto L_120ba634;
  /* 120ba600 cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba604 jae 0x120ba626 */
  if (!C.cf) goto L_120ba626;
  /* 120ba606 mov ecx, dword ptr [ebp - 0x70] */
  ECX = (r32((uint32_t)(EBP + -0x70)));
  /* 120ba609 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba60c mov dword ptr [ebp - 0x70], ecx */
  w32((uint32_t)(EBP + -0x70), (ECX));
  /* 120ba60f movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba613 sub edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba616 mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 120ba619 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120ba61b mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 120ba61e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba621 mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 120ba624 jmp 0x120ba62f */
  goto L_120ba62f;
L_120ba626:;
  /* 120ba626 mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 120ba629 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba62c mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_120ba62f:;
  /* 120ba62f jmp 0x120ba5a4 */
  goto L_120ba5a4;
L_120ba634:;
  /* 120ba634 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba638 movsx ecx, byte ptr [0x120df014] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x120df014))));
  /* 120ba63f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba641 jne 0x120ba64c */
  if (!C.zf) goto L_120ba64c;
  /* 120ba643 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 120ba64a jmp 0x120ba6ae */
  goto L_120ba6ae;
L_120ba64c:;
  /* 120ba64c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba650 mov dword ptr [ebp - 0x94], edx */
  w32((uint32_t)(EBP + -0x94), (EDX));
  /* 120ba656 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 120ba65c sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba65f mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 120ba665 cmp dword ptr [ebp - 0x94], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba66c ja 0x120ba69e */
  if ((!C.cf&&!C.zf)) goto L_120ba69e;
  /* 120ba66e mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 120ba674 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ba676 mov cl, byte ptr [edx + 0x120bada1] */
  CL = (r8((uint32_t)(EDX + 0x120bada1)));
  /* 120ba67c jmp dword ptr [ecx*4 + 0x120bad95] */
  switch (ECX) {
    case 0: goto L_120ba68c;
    case 1: goto L_120ba683;
    case 2: goto L_120ba69e;
    default: x86_unimpl("switch@0x120ba67c out of table"); return;
  }
L_120ba683:;
  /* 120ba683 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 120ba68a jmp 0x120ba6ae */
  goto L_120ba6ae;
L_120ba68c:;
  /* 120ba68c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba68f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba692 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ba695 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 120ba69c jmp 0x120ba6ae */
  goto L_120ba6ae;
L_120ba69e:;
  /* 120ba69e mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 120ba6a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba6a8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba6ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120ba6ae:;
  /* 120ba6ae jmp 0x120bab03 */
  goto L_120bab03;
L_120ba6b3:;
  /* 120ba6b3 mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 120ba6ba mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 120ba6c1 cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba6c5 jne 0x120ba6ee */
  if (!C.zf) goto L_120ba6ee;
  /* 120ba6c7 jmp 0x120ba6da */
  goto L_120ba6da;
L_120ba6c9:;
  /* 120ba6c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba6cc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120ba6ce mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 120ba6d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba6d4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba6d7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120ba6da:;
  /* 120ba6da movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba6de cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba6e1 jne 0x120ba6ee */
  if (!C.zf) goto L_120ba6ee;
  /* 120ba6e3 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 120ba6e6 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba6e9 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 120ba6ec jmp 0x120ba6c9 */
  goto L_120ba6c9;
L_120ba6ee:;
  /* 120ba6ee jmp 0x120ba701 */
  goto L_120ba701;
L_120ba6f0:;
  /* 120ba6f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba6f3 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120ba6f5 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 120ba6f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba6fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba6fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120ba701:;
  /* 120ba701 cmp dword ptr [0x120df010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120df010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba708 jle 0x120ba726 */
  if ((C.zf||C.sf!=C.of)) goto L_120ba726;
  /* 120ba70a push 4 */
  push32((uint32_t)(0x4u));
  /* 120ba70c mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120ba70f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120ba715 push ecx */
  push32((uint32_t)(ECX));
  /* 120ba716 call 0x120b2320 */
  push32(0x120ba71bu); f_120b2320();
  /* 120ba71b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba71e mov dword ptr [ebp - 0x98], eax */
  w32((uint32_t)(EBP + -0x98), (EAX));
  /* 120ba724 jmp 0x120ba743 */
  goto L_120ba743;
L_120ba726:;
  /* 120ba726 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120ba729 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120ba72f mov eax, dword ptr [0x120df01c] */
  EAX = (r32((uint32_t)(0x120df01c)));
  /* 120ba734 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ba736 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 120ba73a and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 120ba73d mov dword ptr [ebp - 0x98], ecx */
  w32((uint32_t)(EBP + -0x98), (ECX));
L_120ba743:;
  /* 120ba743 cmp dword ptr [ebp - 0x98], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba74a je 0x120ba77e */
  if (C.zf) goto L_120ba77e;
  /* 120ba74c cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba750 jae 0x120ba779 */
  if (!C.cf) goto L_120ba779;
  /* 120ba752 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 120ba755 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba758 mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 120ba75b movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba75f sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba762 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 120ba765 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 120ba767 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 120ba76a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba76d mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 120ba770 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 120ba773 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba776 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_120ba779:;
  /* 120ba779 jmp 0x120ba6f0 */
  goto L_120ba6f0;
L_120ba77e:;
  /* 120ba77e movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba782 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 120ba788 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 120ba78e sub edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba791 mov dword ptr [ebp - 0x9c], edx */
  w32((uint32_t)(EBP + -0x9c), (EDX));
  /* 120ba797 cmp dword ptr [ebp - 0x9c], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x9c))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba79e ja 0x120ba7d0 */
  if ((!C.cf&&!C.zf)) goto L_120ba7d0;
  /* 120ba7a0 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 120ba7a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ba7a8 mov al, byte ptr [ecx + 0x120bade8] */
  AL = (r8((uint32_t)(ECX + 0x120bade8)));
  /* 120ba7ae jmp dword ptr [eax*4 + 0x120baddc] */
  switch (EAX) {
    case 0: goto L_120ba7be;
    case 1: goto L_120ba7b5;
    case 2: goto L_120ba7d0;
    default: x86_unimpl("switch@0x120ba7ae out of table"); return;
  }
L_120ba7b5:;
  /* 120ba7b5 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 120ba7bc jmp 0x120ba7e0 */
  goto L_120ba7e0;
L_120ba7be:;
  /* 120ba7be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba7c1 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba7c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120ba7c7 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 120ba7ce jmp 0x120ba7e0 */
  goto L_120ba7e0;
L_120ba7d0:;
  /* 120ba7d0 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 120ba7d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba7da sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba7dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120ba7e0:;
  /* 120ba7e0 jmp 0x120bab03 */
  goto L_120bab03;
L_120ba7e5:;
  /* 120ba7e5 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 120ba7ec cmp dword ptr [0x120df010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120df010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba7f3 jle 0x120ba811 */
  if ((C.zf||C.sf!=C.of)) goto L_120ba811;
  /* 120ba7f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 120ba7f7 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120ba7fa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120ba800 push ecx */
  push32((uint32_t)(ECX));
  /* 120ba801 call 0x120b2320 */
  push32(0x120ba806u); f_120b2320();
  /* 120ba806 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba809 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 120ba80f jmp 0x120ba82e */
  goto L_120ba82e;
L_120ba811:;
  /* 120ba811 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120ba814 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120ba81a mov eax, dword ptr [0x120df01c] */
  EAX = (r32((uint32_t)(0x120df01c)));
  /* 120ba81f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ba821 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 120ba825 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 120ba828 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
L_120ba82e:;
  /* 120ba82e cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba835 je 0x120ba849 */
  if (C.zf) goto L_120ba849;
  /* 120ba837 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 120ba83e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba841 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba844 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120ba847 jmp 0x120ba856 */
  goto L_120ba856;
L_120ba849:;
  /* 120ba849 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 120ba850 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 120ba853 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120ba856:;
  /* 120ba856 jmp 0x120bab03 */
  goto L_120bab03;
L_120ba85b:;
  /* 120ba85b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba85e sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba861 mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 120ba864 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba868 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba86b jl 0x120ba888 */
  if ((C.sf!=C.of)) goto L_120ba888;
  /* 120ba86d movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba871 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba874 jg 0x120ba888 */
  if ((!C.zf&&C.sf==C.of)) goto L_120ba888;
  /* 120ba876 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 120ba87d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba880 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba883 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120ba886 jmp 0x120ba8dd */
  goto L_120ba8dd;
L_120ba888:;
  /* 120ba888 mov dl, byte ptr [ebp - 0x3c] */
  DL = (r8((uint32_t)(EBP + -0x3c)));
  /* 120ba88b mov byte ptr [ebp - 0xa4], dl */
  w8((uint32_t)(EBP + -0xa4), (DL));
  /* 120ba891 cmp byte ptr [ebp - 0xa4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120ba898 je 0x120ba8c7 */
  if (C.zf) goto L_120ba8c7;
  /* 120ba89a cmp byte ptr [ebp - 0xa4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120ba8a1 je 0x120ba8b7 */
  if (C.zf) goto L_120ba8b7;
  /* 120ba8a3 cmp byte ptr [ebp - 0xa4], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120ba8aa je 0x120ba8ae */
  if (C.zf) goto L_120ba8ae;
  /* 120ba8ac jmp 0x120ba8d0 */
  goto L_120ba8d0;
L_120ba8ae:;
  /* 120ba8ae mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 120ba8b5 jmp 0x120ba8dd */
  goto L_120ba8dd;
L_120ba8b7:;
  /* 120ba8b7 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 120ba8be mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 120ba8c5 jmp 0x120ba8dd */
  goto L_120ba8dd;
L_120ba8c7:;
  /* 120ba8c7 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 120ba8ce jmp 0x120ba8dd */
  goto L_120ba8dd;
L_120ba8d0:;
  /* 120ba8d0 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 120ba8d7 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 120ba8da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120ba8dd:;
  /* 120ba8dd jmp 0x120bab03 */
  goto L_120bab03;
L_120ba8e2:;
  /* 120ba8e2 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 120ba8e9 jmp 0x120ba8fc */
  goto L_120ba8fc;
L_120ba8eb:;
  /* 120ba8eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba8ee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120ba8f0 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 120ba8f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba8f6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba8f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120ba8fc:;
  /* 120ba8fc movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba900 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba903 jne 0x120ba907 */
  if (!C.zf) goto L_120ba907;
  /* 120ba905 jmp 0x120ba8eb */
  goto L_120ba8eb;
L_120ba907:;
  /* 120ba907 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba90b cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba90e jl 0x120ba92b */
  if ((C.sf!=C.of)) goto L_120ba92b;
  /* 120ba910 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba914 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba917 jg 0x120ba92b */
  if ((!C.zf&&C.sf==C.of)) goto L_120ba92b;
  /* 120ba919 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 120ba920 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba923 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba926 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120ba929 jmp 0x120ba93b */
  goto L_120ba93b;
L_120ba92b:;
  /* 120ba92b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 120ba932 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba935 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba938 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120ba93b:;
  /* 120ba93b jmp 0x120bab03 */
  goto L_120bab03;
L_120ba940:;
  /* 120ba940 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba944 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba947 jl 0x120ba964 */
  if ((C.sf!=C.of)) goto L_120ba964;
  /* 120ba949 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120ba94d cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba950 jg 0x120ba964 */
  if ((!C.zf&&C.sf==C.of)) goto L_120ba964;
  /* 120ba952 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 120ba959 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba95c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ba95f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120ba962 jmp 0x120ba98e */
  goto L_120ba98e;
L_120ba964:;
  /* 120ba964 mov al, byte ptr [ebp - 0x3c] */
  AL = (r8((uint32_t)(EBP + -0x3c)));
  /* 120ba967 mov byte ptr [ebp - 0xa8], al */
  w8((uint32_t)(EBP + -0xa8), (AL));
  /* 120ba96d cmp byte ptr [ebp - 0xa8], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa8))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120ba974 je 0x120ba978 */
  if (C.zf) goto L_120ba978;
  /* 120ba976 jmp 0x120ba981 */
  goto L_120ba981;
L_120ba978:;
  /* 120ba978 mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 120ba97f jmp 0x120ba98e */
  goto L_120ba98e;
L_120ba981:;
  /* 120ba981 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 120ba988 mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 120ba98b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120ba98e:;
  /* 120ba98e jmp 0x120bab03 */
  goto L_120bab03;
L_120ba993:;
  /* 120ba993 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 120ba99a mov dword ptr [ebp - 0x7c], 0 */
  w32((uint32_t)(EBP + -0x7c), (0x0u));
  /* 120ba9a1 jmp 0x120ba9b4 */
  goto L_120ba9b4;
L_120ba9a3:;
  /* 120ba9a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba9a6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120ba9a8 mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 120ba9ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ba9ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba9b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120ba9b4:;
  /* 120ba9b4 cmp dword ptr [0x120df010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120df010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba9bb jle 0x120ba9d9 */
  if ((C.zf||C.sf!=C.of)) goto L_120ba9d9;
  /* 120ba9bd push 4 */
  push32((uint32_t)(0x4u));
  /* 120ba9bf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120ba9c2 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120ba9c8 push edx */
  push32((uint32_t)(EDX));
  /* 120ba9c9 call 0x120b2320 */
  push32(0x120ba9ceu); f_120b2320();
  /* 120ba9ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ba9d1 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 120ba9d7 jmp 0x120ba9f6 */
  goto L_120ba9f6;
L_120ba9d9:;
  /* 120ba9d9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120ba9dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ba9e1 mov ecx, dword ptr [0x120df01c] */
  ECX = (r32((uint32_t)(0x120df01c)));
  /* 120ba9e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ba9e9 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 120ba9ed and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120ba9f0 mov dword ptr [ebp - 0xac], edx */
  w32((uint32_t)(EBP + -0xac), (EDX));
L_120ba9f6:;
  /* 120ba9f6 cmp dword ptr [ebp - 0xac], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ba9fd je 0x120baa27 */
  if (C.zf) goto L_120baa27;
  /* 120ba9ff mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120baa02 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120baa05 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 120baa09 lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 120baa0d mov dword ptr [ebp - 0x7c], edx */
  w32((uint32_t)(EBP + -0x7c), (EDX));
  /* 120baa10 cmp dword ptr [ebp - 0x7c], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x7c))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120baa17 jle 0x120baa22 */
  if ((C.zf||C.sf!=C.of)) goto L_120baa22;
  /* 120baa19 mov dword ptr [ebp - 0x7c], 0x1451 */
  w32((uint32_t)(EBP + -0x7c), (0x1451u));
  /* 120baa20 jmp 0x120baa27 */
  goto L_120baa27;
L_120baa22:;
  /* 120baa22 jmp 0x120ba9a3 */
  goto L_120ba9a3;
L_120baa27:;
  /* 120baa27 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120baa2a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120baa2d jmp 0x120baa40 */
  goto L_120baa40;
L_120baa2f:;
  /* 120baa2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120baa32 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120baa34 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 120baa37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120baa3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120baa3d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120baa40:;
  /* 120baa40 cmp dword ptr [0x120df010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120df010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120baa47 jle 0x120baa65 */
  if ((C.zf||C.sf!=C.of)) goto L_120baa65;
  /* 120baa49 push 4 */
  push32((uint32_t)(0x4u));
  /* 120baa4b mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120baa4e and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120baa54 push ecx */
  push32((uint32_t)(ECX));
  /* 120baa55 call 0x120b2320 */
  push32(0x120baa5au); f_120b2320();
  /* 120baa5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120baa5d mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 120baa63 jmp 0x120baa82 */
  goto L_120baa82;
L_120baa65:;
  /* 120baa65 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120baa68 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120baa6e mov eax, dword ptr [0x120df01c] */
  EAX = (r32((uint32_t)(0x120df01c)));
  /* 120baa73 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120baa75 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 120baa79 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 120baa7c mov dword ptr [ebp - 0xb0], ecx */
  w32((uint32_t)(EBP + -0xb0), (ECX));
L_120baa82:;
  /* 120baa82 cmp dword ptr [ebp - 0xb0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120baa89 je 0x120baa8d */
  if (C.zf) goto L_120baa8d;
  /* 120baa8b jmp 0x120baa2f */
  goto L_120baa2f;
L_120baa8d:;
  /* 120baa8d mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 120baa94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120baa97 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120baa9a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120baa9d jmp 0x120bab03 */
  goto L_120bab03;
L_120baa9f:;
  /* 120baa9f cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120baaa3 je 0x120baaf3 */
  if (C.zf) goto L_120baaf3;
  /* 120baaa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120baaa8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120baaab mov dword ptr [ebp - 0x64], eax */
  w32((uint32_t)(EBP + -0x64), (EAX));
  /* 120baaae mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 120baab1 mov byte ptr [ebp - 0xb4], cl */
  w8((uint32_t)(EBP + -0xb4), (CL));
  /* 120baab7 cmp byte ptr [ebp - 0xb4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120baabe je 0x120baadb */
  if (C.zf) goto L_120baadb;
  /* 120baac0 cmp byte ptr [ebp - 0xb4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120baac7 je 0x120baacb */
  if (C.zf) goto L_120baacb;
  /* 120baac9 jmp 0x120baae4 */
  goto L_120baae4;
L_120baacb:;
  /* 120baacb mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 120baad2 mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 120baad9 jmp 0x120baaf1 */
  goto L_120baaf1;
L_120baadb:;
  /* 120baadb mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 120baae2 jmp 0x120baaf1 */
  goto L_120baaf1;
L_120baae4:;
  /* 120baae4 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 120baaeb mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 120baaee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120baaf1:;
  /* 120baaf1 jmp 0x120bab03 */
  goto L_120bab03;
L_120baaf3:;
  /* 120baaf3 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 120baafa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120baafd sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bab00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120bab03:;
  /* 120bab03 jmp 0x120ba3a7 */
  goto L_120ba3a7;
L_120bab08:;
  /* 120bab08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bab0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bab0e mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120bab10 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bab14 je 0x120bac57 */
  if (C.zf) goto L_120bac57;
  /* 120bab1a cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bab1e jne 0x120bac57 */
  if (!C.zf) goto L_120bac57;
  /* 120bab24 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bab28 jne 0x120bac57 */
  if (!C.zf) goto L_120bac57;
  /* 120bab2e cmp dword ptr [ebp - 0x70], 0x18 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bab32 jbe 0x120bab5f */
  if ((C.cf||C.zf)) goto L_120bab5f;
  /* 120bab34 movsx eax, byte ptr [ebp - 0x21] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x21))));
  /* 120bab38 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bab3b jl 0x120bab46 */
  if ((C.sf!=C.of)) goto L_120bab46;
  /* 120bab3d mov cl, byte ptr [ebp - 0x21] */
  CL = (r8((uint32_t)(EBP + -0x21)));
  /* 120bab40 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 120bab43 mov byte ptr [ebp - 0x21], cl */
  w8((uint32_t)(EBP + -0x21), (CL));
L_120bab46:;
  /* 120bab46 mov dword ptr [ebp - 0x70], 0x18 */
  w32((uint32_t)(EBP + -0x70), (0x18u));
  /* 120bab4d mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 120bab50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bab53 mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 120bab56 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 120bab59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bab5c mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_120bab5f:;
  /* 120bab5f cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bab63 jbe 0x120bac3a */
  if ((C.cf||C.zf)) goto L_120bac3a;
  /* 120bab69 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 120bab6c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bab6f mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 120bab72 jmp 0x120bab7d */
  goto L_120bab7d;
L_120bab74:;
  /* 120bab74 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 120bab77 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bab7a mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
L_120bab7d:;
  /* 120bab7d mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 120bab80 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120bab83 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bab85 jne 0x120bab9b */
  if (!C.zf) goto L_120bab9b;
  /* 120bab87 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 120bab8a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bab8d mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 120bab90 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 120bab93 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bab96 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 120bab99 jmp 0x120bab74 */
  goto L_120bab74;
L_120bab9b:;
  /* 120bab9b lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 120bab9e push ecx */
  push32((uint32_t)(ECX));
  /* 120bab9f mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 120baba2 push edx */
  push32((uint32_t)(EDX));
  /* 120baba3 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 120baba6 push eax */
  push32((uint32_t)(EAX));
  /* 120baba7 call 0x120ba1c0 */
  push32(0x120babacu); f_120ba1c0();
  /* 120babac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120babaf cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120babb3 jge 0x120babbd */
  if ((C.sf==C.of)) goto L_120babbd;
  /* 120babb5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120babb8 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120babba mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_120babbd:;
  /* 120babbd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120babc0 add edx, dword ptr [ebp - 0x6c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x6c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120babc3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120babc6 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120babca jne 0x120babd5 */
  if (!C.zf) goto L_120babd5;
  /* 120babcc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120babcf add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120babd2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_120babd5:;
  /* 120babd5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120babd9 jne 0x120babe4 */
  if (!C.zf) goto L_120babe4;
  /* 120babdb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120babde sub ecx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120babe1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_120babe4:;
  /* 120babe4 cmp dword ptr [ebp - 0x14], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120babeb jle 0x120babf6 */
  if ((C.zf||C.sf!=C.of)) goto L_120babf6;
  /* 120babed mov dword ptr [ebp - 0x40], 1 */
  w32((uint32_t)(EBP + -0x40), (0x1u));
  /* 120babf4 jmp 0x120bac38 */
  goto L_120bac38;
L_120babf6:;
  /* 120babf6 cmp dword ptr [ebp - 0x14], 0xffffebb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120babfd jge 0x120bac08 */
  if ((C.sf==C.of)) goto L_120bac08;
  /* 120babff mov dword ptr [ebp - 0x78], 1 */
  w32((uint32_t)(EBP + -0x78), (0x1u));
  /* 120bac06 jmp 0x120bac38 */
  goto L_120bac38;
L_120bac08:;
  /* 120bac08 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bac0b push edx */
  push32((uint32_t)(EDX));
  /* 120bac0c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bac0f push eax */
  push32((uint32_t)(EAX));
  /* 120bac10 lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 120bac13 push ecx */
  push32((uint32_t)(ECX));
  /* 120bac14 call 0x120be9c0 */
  push32(0x120bac19u); f_120be9c0();
  /* 120bac19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bac1c mov dx, word ptr [ebp - 0x60] */
  DX = (r16((uint32_t)(EBP + -0x60)));
  /* 120bac20 mov word ptr [ebp - 0x48], dx */
  w16((uint32_t)(EBP + -0x48), (DX));
  /* 120bac24 mov eax, dword ptr [ebp - 0x5e] */
  EAX = (r32((uint32_t)(EBP + -0x5e)));
  /* 120bac27 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120bac2a mov ecx, dword ptr [ebp - 0x5a] */
  ECX = (r32((uint32_t)(EBP + -0x5a)));
  /* 120bac2d mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120bac30 mov dx, word ptr [ebp - 0x56] */
  DX = (r16((uint32_t)(EBP + -0x56)));
  /* 120bac34 mov word ptr [ebp - 0x50], dx */
  w16((uint32_t)(EBP + -0x50), (DX));
L_120bac38:;
  /* 120bac38 jmp 0x120bac57 */
  goto L_120bac57;
L_120bac3a:;
  /* 120bac3a mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 120bac40 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 120bac46 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 120bac49 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bac4e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120bac51 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bac54 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_120bac57:;
  /* 120bac57 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bac5b jne 0x120bac86 */
  if (!C.zf) goto L_120bac86;
  /* 120bac5d mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 120bac63 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 120bac69 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 120bac6c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120bac72 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 120bac75 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bac78 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120bac7b mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 120bac7e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 120bac81 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 120bac84 jmp 0x120bacdd */
  goto L_120bacdd;
L_120bac86:;
  /* 120bac86 cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bac8a je 0x120bacb1 */
  if (C.zf) goto L_120bacb1;
  /* 120bac8c mov word ptr [ebp - 0x50], 0x7fff */
  w16((uint32_t)(EBP + -0x50), (0x7fffu));
  /* 120bac92 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 120bac99 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120baca0 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 120baca6 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 120baca9 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 120bacac mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
  /* 120bacaf jmp 0x120bacdd */
  goto L_120bacdd;
L_120bacb1:;
  /* 120bacb1 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bacb5 je 0x120bacdd */
  if (C.zf) goto L_120bacdd;
  /* 120bacb7 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 120bacbd mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 120bacc3 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 120bacc6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120baccb mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120bacce mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bacd1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bacd4 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 120bacd7 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120bacda mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
L_120bacdd:;
  /* 120bacdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bace0 mov cx, word ptr [ebp - 0x48] */
  CX = (r16((uint32_t)(EBP + -0x48)));
  /* 120bace4 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 120bace7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bacea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120baced mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 120bacf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bacf3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bacf6 mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 120bacf9 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 120bacfc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bad01 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120bad04 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120bad0a or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 120bad0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bad0f mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
  /* 120bad13 mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 120bad16 mov esp, ebp */
  ESP = (EBP);
  /* 120bad18 pop ebp */
  EBP = (pop32());
  /* 120bad19 ret  */
  ESPCHK(0x120ba300u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ae30 @ 0x120bae30 (79 bytes, 33 insns) */
void f_120bae30(void) {
  FTRACE(0x120bae30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bae30 push ebp */
  push32((uint32_t)(EBP));
  /* 120bae31 mov ebp, esp */
  EBP = (ESP);
  /* 120bae33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bae36 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bae38 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bae3a push 0 */
  push32((uint32_t)(0x0u));
  /* 120bae3c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bae3f push eax */
  push32((uint32_t)(EAX));
  /* 120bae40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bae43 push ecx */
  push32((uint32_t)(ECX));
  /* 120bae44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bae47 push edx */
  push32((uint32_t)(EDX));
  /* 120bae48 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120bae4b push eax */
  push32((uint32_t)(EAX));
  /* 120bae4c call 0x120ba300 */
  push32(0x120bae51u); f_120ba300();
  /* 120bae51 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bae54 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120bae57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bae5a push ecx */
  push32((uint32_t)(ECX));
  /* 120bae5b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 120bae5e push edx */
  push32((uint32_t)(EDX));
  /* 120bae5f call 0x120b2c20 */
  push32(0x120bae64u); f_120b2c20();
  /* 120bae64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bae67 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120bae6a cmp dword ptr [ebp - 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bae6e jne 0x120bae78 */
  if (!C.zf) goto L_120bae78;
  /* 120bae70 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bae73 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 120bae75 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_120bae78:;
  /* 120bae78 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bae7b mov esp, ebp */
  ESP = (EBP);
  /* 120bae7d pop ebp */
  EBP = (pop32());
  /* 120bae7e ret  */
  ESPCHK(0x120bae30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ae80 @ 0x120bae80 (1302 bytes, 386 insns) */
void f_120bae80(void) {
  FTRACE(0x120bae80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bae80 push ebp */
  push32((uint32_t)(EBP));
  /* 120bae81 mov ebp, esp */
  EBP = (ESP);
  /* 120bae83 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bae86 mov word ptr [ebp - 0x64], 0x4d10 */
  w16((uint32_t)(EBP + -0x64), (0x4d10u));
  /* 120bae8c mov word ptr [ebp - 0x3c], 0x4d */
  w16((uint32_t)(EBP + -0x3c), (0x4du));
  /* 120bae92 mov word ptr [ebp - 0x60], 0x9a */
  w16((uint32_t)(EBP + -0x60), (0x9au));
  /* 120bae98 mov dword ptr [ebp - 0x20], 0x134312f4 */
  w32((uint32_t)(EBP + -0x20), (0x134312f4u));
  /* 120bae9f mov byte ptr [ebp - 0x54], 0xcc */
  w8((uint32_t)(EBP + -0x54), (0xccu));
  /* 120baea3 mov byte ptr [ebp - 0x53], 0xcc */
  w8((uint32_t)(EBP + -0x53), (0xccu));
  /* 120baea7 mov byte ptr [ebp - 0x52], 0xcc */
  w8((uint32_t)(EBP + -0x52), (0xccu));
  /* 120baeab mov byte ptr [ebp - 0x51], 0xcc */
  w8((uint32_t)(EBP + -0x51), (0xccu));
  /* 120baeaf mov byte ptr [ebp - 0x50], 0xcc */
  w8((uint32_t)(EBP + -0x50), (0xccu));
  /* 120baeb3 mov byte ptr [ebp - 0x4f], 0xcc */
  w8((uint32_t)(EBP + -0x4f), (0xccu));
  /* 120baeb7 mov byte ptr [ebp - 0x4e], 0xcc */
  w8((uint32_t)(EBP + -0x4e), (0xccu));
  /* 120baebb mov byte ptr [ebp - 0x4d], 0xcc */
  w8((uint32_t)(EBP + -0x4d), (0xccu));
  /* 120baebf mov byte ptr [ebp - 0x4c], 0xcc */
  w8((uint32_t)(EBP + -0x4c), (0xccu));
  /* 120baec3 mov byte ptr [ebp - 0x4b], 0xcc */
  w8((uint32_t)(EBP + -0x4b), (0xccu));
  /* 120baec7 mov byte ptr [ebp - 0x4a], 0xfb */
  w8((uint32_t)(EBP + -0x4a), (0xfbu));
  /* 120baecb mov byte ptr [ebp - 0x49], 0x3f */
  w8((uint32_t)(EBP + -0x49), (0x3fu));
  /* 120baecf mov dword ptr [ebp - 0x58], 1 */
  w32((uint32_t)(EBP + -0x58), (0x1u));
  /* 120baed6 mov ax, word ptr [ebp + 0x10] */
  AX = (r16((uint32_t)(EBP + 0x10)));
  /* 120baeda mov word ptr [ebp - 0x70], ax */
  w16((uint32_t)(EBP + -0x70), (AX));
  /* 120baede mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120baee1 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 120baee4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120baee7 mov dword ptr [ebp - 0x48], edx */
  w32((uint32_t)(EBP + -0x48), (EDX));
  /* 120baeea mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 120baeed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120baef2 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 120baef7 mov word ptr [ebp - 0x68], ax */
  w16((uint32_t)(EBP + -0x68), (AX));
  /* 120baefb mov cx, word ptr [ebp - 0x70] */
  CX = (r16((uint32_t)(EBP + -0x70)));
  /* 120baeff and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 120baf04 mov word ptr [ebp - 0x70], cx */
  w16((uint32_t)(EBP + -0x70), (CX));
  /* 120baf08 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 120baf0b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120baf11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120baf13 je 0x120baf1e */
  if (C.zf) goto L_120baf1e;
  /* 120baf15 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120baf18 mov byte ptr [eax + 2], 0x2d */
  w8((uint32_t)(EAX + 0x2), (0x2du));
  /* 120baf1c jmp 0x120baf25 */
  goto L_120baf25;
L_120baf1e:;
  /* 120baf1e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120baf21 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
L_120baf25:;
  /* 120baf25 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 120baf28 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120baf2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120baf30 jne 0x120baf6c */
  if (!C.zf) goto L_120baf6c;
  /* 120baf32 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120baf36 jne 0x120baf6c */
  if (!C.zf) goto L_120baf6c;
  /* 120baf38 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120baf3c jne 0x120baf6c */
  if (!C.zf) goto L_120baf6c;
  /* 120baf3e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120baf41 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 120baf46 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120baf49 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
  /* 120baf4d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120baf50 mov byte ptr [edx + 3], 1 */
  w8((uint32_t)(EDX + 0x3), (0x1u));
  /* 120baf54 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120baf57 mov byte ptr [eax + 4], 0x30 */
  w8((uint32_t)(EAX + 0x4), (0x30u));
  /* 120baf5b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120baf5e mov byte ptr [ecx + 5], 0 */
  w8((uint32_t)(ECX + 0x5), (0x0u));
  /* 120baf62 mov eax, 1 */
  EAX = (0x1u);
  /* 120baf67 jmp 0x120bb392 */
  goto L_120bb392;
L_120baf6c:;
  /* 120baf6c mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 120baf6f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120baf75 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120baf7b jne 0x120bb066 */
  if (!C.zf) goto L_120bb066;
  /* 120baf81 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120baf84 mov word ptr [eax], 1 */
  w16((uint32_t)(EAX), (0x1u));
  /* 120baf89 cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120baf90 jne 0x120baf98 */
  if (!C.zf) goto L_120baf98;
  /* 120baf92 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120baf96 je 0x120bafcc */
  if (C.zf) goto L_120bafcc;
L_120baf98:;
  /* 120baf98 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120baf9b and ecx, 0x40000000 */
  { uint32_t _r=(ECX)&(0x40000000u); ECX = (_r); fl_logic(_r,32); }
  /* 120bafa1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bafa3 jne 0x120bafcc */
  if (!C.zf) goto L_120bafcc;
  /* 120bafa5 push 0x120dc438 */
  push32((uint32_t)(0x120dc438u));
  /* 120bafaa mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bafad add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bafb0 push edx */
  push32((uint32_t)(EDX));
  /* 120bafb1 call 0x120b1390 */
  push32(0x120bafb6u); f_120b1390();
  /* 120bafb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bafb9 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bafbc mov byte ptr [eax + 3], 6 */
  w8((uint32_t)(EAX + 0x3), (0x6u));
  /* 120bafc0 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 120bafc7 jmp 0x120bb061 */
  goto L_120bb061;
L_120bafcc:;
  /* 120bafcc mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 120bafcf and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120bafd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bafd7 je 0x120bb00c */
  if (C.zf) goto L_120bb00c;
  /* 120bafd9 cmp dword ptr [ebp - 0x24], 0xc0000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bafe0 jne 0x120bb00c */
  if (!C.zf) goto L_120bb00c;
  /* 120bafe2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bafe6 jne 0x120bb00c */
  if (!C.zf) goto L_120bb00c;
  /* 120bafe8 push 0x120dc430 */
  push32((uint32_t)(0x120dc430u));
  /* 120bafed mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120baff0 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120baff3 push edx */
  push32((uint32_t)(EDX));
  /* 120baff4 call 0x120b1390 */
  push32(0x120baff9u); f_120b1390();
  /* 120baff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120baffc mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bafff mov byte ptr [eax + 3], 5 */
  w8((uint32_t)(EAX + 0x3), (0x5u));
  /* 120bb003 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 120bb00a jmp 0x120bb061 */
  goto L_120bb061;
L_120bb00c:;
  /* 120bb00c cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb013 jne 0x120bb03f */
  if (!C.zf) goto L_120bb03f;
  /* 120bb015 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb019 jne 0x120bb03f */
  if (!C.zf) goto L_120bb03f;
  /* 120bb01b push 0x120dc428 */
  push32((uint32_t)(0x120dc428u));
  /* 120bb020 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb023 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb026 push ecx */
  push32((uint32_t)(ECX));
  /* 120bb027 call 0x120b1390 */
  push32(0x120bb02cu); f_120b1390();
  /* 120bb02c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb02f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb032 mov byte ptr [edx + 3], 5 */
  w8((uint32_t)(EDX + 0x3), (0x5u));
  /* 120bb036 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 120bb03d jmp 0x120bb061 */
  goto L_120bb061;
L_120bb03f:;
  /* 120bb03f push 0x120dc420 */
  push32((uint32_t)(0x120dc420u));
  /* 120bb044 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb047 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb04a push eax */
  push32((uint32_t)(EAX));
  /* 120bb04b call 0x120b1390 */
  push32(0x120bb050u); f_120b1390();
  /* 120bb050 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb053 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb056 mov byte ptr [ecx + 3], 6 */
  w8((uint32_t)(ECX + 0x3), (0x6u));
  /* 120bb05a mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
L_120bb061:;
  /* 120bb061 jmp 0x120bb38f */
  goto L_120bb38f;
L_120bb066:;
  /* 120bb066 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 120bb069 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120bb06f sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 120bb072 mov word ptr [ebp - 0x6c], dx */
  w16((uint32_t)(EBP + -0x6c), (DX));
  /* 120bb076 mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 120bb079 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bb07e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bb083 mov word ptr [ebp - 0xc], ax */
  w16((uint32_t)(EBP + -0xc), (AX));
  /* 120bb087 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120bb08a shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 120bb08d mov word ptr [ebp - 0x40], cx */
  w16((uint32_t)(EBP + -0x40), (CX));
  /* 120bb091 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 120bb094 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120bb09a mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 120bb09d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bb0a2 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bb0a5 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120bb0a8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120bb0ae mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 120bb0b1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bb0b6 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bb0b9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb0bb mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 120bb0be and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120bb0c4 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 120bb0c7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bb0cc imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bb0cf add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb0d1 sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bb0d4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120bb0d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bb0da sar ecx, 0x10 */
  ECX = (sh_sar((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 120bb0dd mov word ptr [ebp - 0x5c], cx */
  w16((uint32_t)(EBP + -0x5c), (CX));
  /* 120bb0e1 mov dx, word ptr [ebp - 0x70] */
  DX = (r16((uint32_t)(EBP + -0x70)));
  /* 120bb0e5 mov word ptr [ebp - 0x2e], dx */
  w16((uint32_t)(EBP + -0x2e), (DX));
  /* 120bb0e9 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120bb0ec mov dword ptr [ebp - 0x32], eax */
  w32((uint32_t)(EBP + -0x32), (EAX));
  /* 120bb0ef mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 120bb0f2 mov dword ptr [ebp - 0x36], ecx */
  w32((uint32_t)(EBP + -0x36), (ECX));
  /* 120bb0f5 mov word ptr [ebp - 0x38], 0 */
  w16((uint32_t)(EBP + -0x38), (0x0u));
  /* 120bb0fb push 1 */
  push32((uint32_t)(0x1u));
  /* 120bb0fd movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 120bb101 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120bb103 push edx */
  push32((uint32_t)(EDX));
  /* 120bb104 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 120bb107 push eax */
  push32((uint32_t)(EAX));
  /* 120bb108 call 0x120be9c0 */
  push32(0x120bb10du); f_120be9c0();
  /* 120bb10d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb110 mov ecx, dword ptr [ebp - 0x2e] */
  ECX = (r32((uint32_t)(EBP + -0x2e)));
  /* 120bb113 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120bb119 cmp ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb11f jl 0x120bb13d */
  if ((C.sf!=C.of)) goto L_120bb13d;
  /* 120bb121 mov dx, word ptr [ebp - 0x5c] */
  DX = (r16((uint32_t)(EBP + -0x5c)));
  /* 120bb125 add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 120bb129 mov word ptr [ebp - 0x5c], dx */
  w16((uint32_t)(EBP + -0x5c), (DX));
  /* 120bb12d lea eax, [ebp - 0x54] */
  EAX = ((uint32_t)(EBP + -0x54));
  /* 120bb130 push eax */
  push32((uint32_t)(EAX));
  /* 120bb131 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 120bb134 push ecx */
  push32((uint32_t)(ECX));
  /* 120bb135 call 0x120be580 */
  push32(0x120bb13au); f_120be580();
  /* 120bb13a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120bb13d:;
  /* 120bb13d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb140 mov ax, word ptr [ebp - 0x5c] */
  AX = (r16((uint32_t)(EBP + -0x5c)));
  /* 120bb144 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 120bb147 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120bb14a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120bb14d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bb14f je 0x120bb191 */
  if (C.zf) goto L_120bb191;
  /* 120bb151 movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 120bb155 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bb158 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb15a mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 120bb15d cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb161 jg 0x120bb191 */
  if ((!C.zf&&C.sf==C.of)) goto L_120bb191;
  /* 120bb163 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb166 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 120bb16b mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb16e mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 120bb172 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb175 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 120bb179 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb17c mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 120bb180 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb183 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 120bb187 mov eax, 1 */
  EAX = (0x1u);
  /* 120bb18c jmp 0x120bb392 */
  goto L_120bb392;
L_120bb191:;
  /* 120bb191 cmp dword ptr [ebp + 0x14], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb195 jle 0x120bb19e */
  if ((C.zf||C.sf!=C.of)) goto L_120bb19e;
  /* 120bb197 mov dword ptr [ebp + 0x14], 0x15 */
  w32((uint32_t)(EBP + 0x14), (0x15u));
L_120bb19e:;
  /* 120bb19e mov eax, dword ptr [ebp - 0x2e] */
  EAX = (r32((uint32_t)(EBP + -0x2e)));
  /* 120bb1a1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bb1a6 sub eax, 0x3ffe */
  { uint32_t _a=(EAX),_b=(0x3ffeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bb1ab mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 120bb1ae mov word ptr [ebp - 0x2e], 0 */
  w16((uint32_t)(EBP + -0x2e), (0x0u));
  /* 120bb1b4 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 120bb1bb jmp 0x120bb1c6 */
  goto L_120bb1c6;
L_120bb1bd:;
  /* 120bb1bd mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 120bb1c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb1c3 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
L_120bb1c6:;
  /* 120bb1c6 cmp dword ptr [ebp - 0x44], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x44))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb1ca jge 0x120bb1da */
  if ((C.sf==C.of)) goto L_120bb1da;
  /* 120bb1cc lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 120bb1cf push edx */
  push32((uint32_t)(EDX));
  /* 120bb1d0 call 0x120ba0f0 */
  push32(0x120bb1d5u); f_120ba0f0();
  /* 120bb1d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb1d8 jmp 0x120bb1bd */
  goto L_120bb1bd;
L_120bb1da:;
  /* 120bb1da cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb1de jge 0x120bb20c */
  if ((C.sf==C.of)) goto L_120bb20c;
  /* 120bb1e0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120bb1e3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120bb1e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bb1ea mov dword ptr [ebp - 0x74], eax */
  w32((uint32_t)(EBP + -0x74), (EAX));
  /* 120bb1ed jmp 0x120bb1f8 */
  goto L_120bb1f8;
L_120bb1ef:;
  /* 120bb1ef mov ecx, dword ptr [ebp - 0x74] */
  ECX = (r32((uint32_t)(EBP + -0x74)));
  /* 120bb1f2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bb1f5 mov dword ptr [ebp - 0x74], ecx */
  w32((uint32_t)(EBP + -0x74), (ECX));
L_120bb1f8:;
  /* 120bb1f8 cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb1fc jle 0x120bb20c */
  if ((C.zf||C.sf!=C.of)) goto L_120bb20c;
  /* 120bb1fe lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 120bb201 push edx */
  push32((uint32_t)(EDX));
  /* 120bb202 call 0x120ba150 */
  push32(0x120bb207u); f_120ba150();
  /* 120bb207 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb20a jmp 0x120bb1ef */
  goto L_120bb1ef;
L_120bb20c:;
  /* 120bb20c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb20f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb212 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bb215 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bb218 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb21b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120bb21e jmp 0x120bb229 */
  goto L_120bb229;
L_120bb220:;
  /* 120bb220 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bb223 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bb226 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_120bb229:;
  /* 120bb229 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb22d jle 0x120bb295 */
  if ((C.zf||C.sf!=C.of)) goto L_120bb295;
  /* 120bb22f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 120bb232 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120bb235 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 120bb238 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 120bb23b mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120bb23e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120bb241 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 120bb244 push eax */
  push32((uint32_t)(EAX));
  /* 120bb245 call 0x120ba0f0 */
  push32(0x120bb24au); f_120ba0f0();
  /* 120bb24a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb24d lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 120bb250 push ecx */
  push32((uint32_t)(ECX));
  /* 120bb251 call 0x120ba0f0 */
  push32(0x120bb256u); f_120ba0f0();
  /* 120bb256 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb259 lea edx, [ebp - 0x1c] */
  EDX = ((uint32_t)(EBP + -0x1c));
  /* 120bb25c push edx */
  push32((uint32_t)(EDX));
  /* 120bb25d lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 120bb260 push eax */
  push32((uint32_t)(EAX));
  /* 120bb261 call 0x120ba040 */
  push32(0x120bb266u); f_120ba040();
  /* 120bb266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb269 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 120bb26c push ecx */
  push32((uint32_t)(ECX));
  /* 120bb26d call 0x120ba0f0 */
  push32(0x120bb272u); f_120ba0f0();
  /* 120bb272 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb275 mov edx, dword ptr [ebp - 0x2d] */
  EDX = (r32((uint32_t)(EBP + -0x2d)));
  /* 120bb278 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120bb27e add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb284 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120bb286 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb289 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb28c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120bb28f mov byte ptr [ebp - 0x2d], 0 */
  w8((uint32_t)(EBP + -0x2d), (0x0u));
  /* 120bb293 jmp 0x120bb220 */
  goto L_120bb220;
L_120bb295:;
  /* 120bb295 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb298 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bb29b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120bb29e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb2a1 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120bb2a3 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 120bb2a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb2a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bb2ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120bb2af movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 120bb2b3 cmp eax, 0x35 */
  { uint32_t _a=(EAX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb2b6 jl 0x120bb313 */
  if ((C.sf!=C.of)) goto L_120bb313;
  /* 120bb2b8 jmp 0x120bb2c3 */
  goto L_120bb2c3;
L_120bb2ba:;
  /* 120bb2ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb2bd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bb2c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120bb2c3:;
  /* 120bb2c3 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb2c6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb2c9 cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb2cc jb 0x120bb2e1 */
  if (C.cf) goto L_120bb2e1;
  /* 120bb2ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb2d1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120bb2d4 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb2d7 jne 0x120bb2e1 */
  if (!C.zf) goto L_120bb2e1;
  /* 120bb2d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb2dc mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 120bb2df jmp 0x120bb2ba */
  goto L_120bb2ba;
L_120bb2e1:;
  /* 120bb2e1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb2e4 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb2e7 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb2ea jae 0x120bb305 */
  if (!C.cf) goto L_120bb305;
  /* 120bb2ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb2ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb2f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120bb2f5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb2f8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 120bb2fb add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 120bb2ff mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb302 mov word ptr [ecx], ax */
  w16((uint32_t)(ECX), (AX));
L_120bb305:;
  /* 120bb305 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb308 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120bb30a add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120bb30c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb30f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 120bb311 jmp 0x120bb36c */
  goto L_120bb36c;
L_120bb313:;
  /* 120bb313 jmp 0x120bb31e */
  goto L_120bb31e;
L_120bb315:;
  /* 120bb315 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb318 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bb31b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120bb31e:;
  /* 120bb31e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb321 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb324 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb327 jb 0x120bb336 */
  if (C.cf) goto L_120bb336;
  /* 120bb329 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb32c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120bb32f cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb332 jne 0x120bb336 */
  if (!C.zf) goto L_120bb336;
  /* 120bb334 jmp 0x120bb315 */
  goto L_120bb315;
L_120bb336:;
  /* 120bb336 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb339 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb33c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb33f jae 0x120bb36c */
  if (!C.cf) goto L_120bb36c;
  /* 120bb341 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb344 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 120bb349 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb34c mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 120bb350 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb353 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 120bb357 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb35a mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 120bb35e mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb361 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 120bb365 mov eax, 1 */
  EAX = (0x1u);
  /* 120bb36a jmp 0x120bb392 */
  goto L_120bb392;
L_120bb36c:;
  /* 120bb36c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb36f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb372 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb375 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bb377 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb37a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb37d mov byte ptr [edx + 3], cl */
  w8((uint32_t)(EDX + 0x3), (CL));
  /* 120bb380 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb383 movsx ecx, byte ptr [eax + 3] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x3))));
  /* 120bb387 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120bb38a mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
L_120bb38f:;
  /* 120bb38f mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
L_120bb392:;
  /* 120bb392 mov esp, ebp */
  ESP = (EBP);
  /* 120bb394 pop ebp */
  EBP = (pop32());
  /* 120bb395 ret  */
  ESPCHK(0x120bae80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b3a0 @ 0x120bb3a0 (255 bytes, 88 insns) */
void f_120bb3a0(void) {
  FTRACE(0x120bb3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bb3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bb3a1 mov ebp, esp */
  EBP = (ESP);
  /* 120bb3a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_120bb3a6:;
  /* 120bb3a6 cmp dword ptr [0x120df010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120df010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb3ad jle 0x120bb3c6 */
  if ((C.zf||C.sf!=C.of)) goto L_120bb3c6;
  /* 120bb3af push 8 */
  push32((uint32_t)(0x8u));
  /* 120bb3b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb3b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120bb3b6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120bb3b8 push ecx */
  push32((uint32_t)(ECX));
  /* 120bb3b9 call 0x120b2320 */
  push32(0x120bb3beu); f_120b2320();
  /* 120bb3be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb3c1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120bb3c4 jmp 0x120bb3df */
  goto L_120bb3df;
L_120bb3c6:;
  /* 120bb3c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb3c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bb3cb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120bb3cd mov ecx, dword ptr [0x120df01c] */
  ECX = (r32((uint32_t)(0x120df01c)));
  /* 120bb3d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120bb3d5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 120bb3d9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 120bb3dc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_120bb3df:;
  /* 120bb3df cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb3e3 je 0x120bb3f0 */
  if (C.zf) goto L_120bb3f0;
  /* 120bb3e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb3e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb3eb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120bb3ee jmp 0x120bb3a6 */
  goto L_120bb3a6;
L_120bb3f0:;
  /* 120bb3f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb3f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120bb3f5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120bb3f7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120bb3fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb3fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb400 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120bb403 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb406 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bb409 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb40d je 0x120bb415 */
  if (C.zf) goto L_120bb415;
  /* 120bb40f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb413 jne 0x120bb428 */
  if (!C.zf) goto L_120bb428;
L_120bb415:;
  /* 120bb415 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb418 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bb41a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120bb41c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bb41f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb422 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb425 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_120bb428:;
  /* 120bb428 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_120bb42f:;
  /* 120bb42f cmp dword ptr [0x120df010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120df010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb436 jle 0x120bb44b */
  if ((C.zf||C.sf!=C.of)) goto L_120bb44b;
  /* 120bb438 push 4 */
  push32((uint32_t)(0x4u));
  /* 120bb43a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb43d push edx */
  push32((uint32_t)(EDX));
  /* 120bb43e call 0x120b2320 */
  push32(0x120bb443u); f_120b2320();
  /* 120bb443 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb446 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120bb449 jmp 0x120bb460 */
  goto L_120bb460;
L_120bb44b:;
  /* 120bb44b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb44e mov ecx, dword ptr [0x120df01c] */
  ECX = (r32((uint32_t)(0x120df01c)));
  /* 120bb454 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120bb456 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 120bb45a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120bb45d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_120bb460:;
  /* 120bb460 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb464 je 0x120bb48b */
  if (C.zf) goto L_120bb48b;
  /* 120bb466 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bb469 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bb46c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb46f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 120bb473 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120bb476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb479 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120bb47b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120bb47d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120bb480 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb483 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb486 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120bb489 jmp 0x120bb42f */
  goto L_120bb42f;
L_120bb48b:;
  /* 120bb48b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb48f jne 0x120bb498 */
  if (!C.zf) goto L_120bb498;
  /* 120bb491 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bb494 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120bb496 jmp 0x120bb49b */
  goto L_120bb49b;
L_120bb498:;
  /* 120bb498 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_120bb49b:;
  /* 120bb49b mov esp, ebp */
  ESP = (EBP);
  /* 120bb49d pop ebp */
  EBP = (pop32());
  /* 120bb49e ret  */
  ESPCHK(0x120bb3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b4a0 @ 0x120bb4a0 (17 bytes, 8 insns) */
void f_120bb4a0(void) {
  FTRACE(0x120bb4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bb4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bb4a1 mov ebp, esp */
  EBP = (ESP);
  /* 120bb4a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb4a6 push eax */
  push32((uint32_t)(EAX));
  /* 120bb4a7 call 0x120bb3a0 */
  push32(0x120bb4acu); f_120bb3a0();
  /* 120bb4ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb4af pop ebp */
  EBP = (pop32());
  /* 120bb4b0 ret  */
  ESPCHK(0x120bb4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b4c0 @ 0x120bb4c0 (297 bytes, 106 insns) */
void f_120bb4c0(void) {
  FTRACE(0x120bb4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bb4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bb4c1 mov ebp, esp */
  EBP = (ESP);
  /* 120bb4c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bb4c6 push esi */
  push32((uint32_t)(ESI));
L_120bb4c7:;
  /* 120bb4c7 cmp dword ptr [0x120df010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120df010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb4ce jle 0x120bb4e7 */
  if ((C.zf||C.sf!=C.of)) goto L_120bb4e7;
  /* 120bb4d0 push 8 */
  push32((uint32_t)(0x8u));
  /* 120bb4d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb4d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120bb4d7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120bb4d9 push ecx */
  push32((uint32_t)(ECX));
  /* 120bb4da call 0x120b2320 */
  push32(0x120bb4dfu); f_120b2320();
  /* 120bb4df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb4e2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120bb4e5 jmp 0x120bb500 */
  goto L_120bb500;
L_120bb4e7:;
  /* 120bb4e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb4ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bb4ec mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120bb4ee mov ecx, dword ptr [0x120df01c] */
  ECX = (r32((uint32_t)(0x120df01c)));
  /* 120bb4f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120bb4f6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 120bb4fa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 120bb4fd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_120bb500:;
  /* 120bb500 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb504 je 0x120bb511 */
  if (C.zf) goto L_120bb511;
  /* 120bb506 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb509 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb50c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120bb50f jmp 0x120bb4c7 */
  goto L_120bb4c7;
L_120bb511:;
  /* 120bb511 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb514 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120bb516 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120bb518 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120bb51b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb51e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb521 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120bb524 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb527 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120bb52a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb52e je 0x120bb536 */
  if (C.zf) goto L_120bb536;
  /* 120bb530 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb534 jne 0x120bb549 */
  if (!C.zf) goto L_120bb549;
L_120bb536:;
  /* 120bb536 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb539 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bb53b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120bb53d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bb540 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb543 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb546 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_120bb549:;
  /* 120bb549 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120bb550 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_120bb557:;
  /* 120bb557 cmp dword ptr [0x120df010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120df010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb55e jle 0x120bb573 */
  if ((C.zf||C.sf!=C.of)) goto L_120bb573;
  /* 120bb560 push 4 */
  push32((uint32_t)(0x4u));
  /* 120bb562 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb565 push edx */
  push32((uint32_t)(EDX));
  /* 120bb566 call 0x120b2320 */
  push32(0x120bb56bu); f_120b2320();
  /* 120bb56b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb56e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120bb571 jmp 0x120bb588 */
  goto L_120bb588;
L_120bb573:;
  /* 120bb573 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb576 mov ecx, dword ptr [0x120df01c] */
  ECX = (r32((uint32_t)(0x120df01c)));
  /* 120bb57c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120bb57e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 120bb582 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120bb585 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_120bb588:;
  /* 120bb588 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb58c je 0x120bb5c9 */
  if (C.zf) goto L_120bb5c9;
  /* 120bb58e push 0 */
  push32((uint32_t)(0x0u));
  /* 120bb590 push 0xa */
  push32((uint32_t)(0xau));
  /* 120bb592 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bb595 push eax */
  push32((uint32_t)(EAX));
  /* 120bb596 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bb599 push ecx */
  push32((uint32_t)(ECX));
  /* 120bb59a call 0x120bea90 */
  push32(0x120bb59fu); f_120bea90();
  /* 120bb59f mov ecx, eax */
  ECX = (EAX);
  /* 120bb5a1 mov esi, edx */
  ESI = (EDX);
  /* 120bb5a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb5a6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bb5a9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120bb5aa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb5ac adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb5ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bb5b1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 120bb5b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb5b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bb5b9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120bb5bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bb5be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb5c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb5c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 120bb5c7 jmp 0x120bb557 */
  goto L_120bb557;
L_120bb5c9:;
  /* 120bb5c9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb5cd jne 0x120bb5de */
  if (!C.zf) goto L_120bb5de;
  /* 120bb5cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bb5d2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120bb5d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bb5d7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb5da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120bb5dc jmp 0x120bb5e4 */
  goto L_120bb5e4;
L_120bb5de:;
  /* 120bb5de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bb5e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_120bb5e4:;
  /* 120bb5e4 pop esi */
  ESI = (pop32());
  /* 120bb5e5 mov esp, ebp */
  ESP = (EBP);
  /* 120bb5e7 pop ebp */
  EBP = (pop32());
  /* 120bb5e8 ret  */
  ESPCHK(0x120bb4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b5f0 @ 0x120bb5f0 (46 bytes, 18 insns) */
void f_120bb5f0(void) {
  FTRACE(0x120bb5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bb5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bb5f1 mov ebp, esp */
  EBP = (ESP);
  /* 120bb5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 120bb5f4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 120bb5f6 call 0x120acb80 */
  push32(0x120bb5fbu); f_120acb80();
  /* 120bb5fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb5fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb601 push eax */
  push32((uint32_t)(EAX));
  /* 120bb602 call 0x120bb620 */
  push32(0x120bb607u); f_120bb620();
  /* 120bb607 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb60a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bb60d push 0xc */
  push32((uint32_t)(0xcu));
  /* 120bb60f call 0x120acc20 */
  push32(0x120bb614u); f_120acc20();
  /* 120bb614 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb617 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb61a mov esp, ebp */
  ESP = (EBP);
  /* 120bb61c pop ebp */
  EBP = (pop32());
  /* 120bb61d ret  */
  ESPCHK(0x120bb5f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x120bb620 (198 bytes, 69 insns) */
void f_120bb620(void) {
  FTRACE(0x120bb620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bb620 push ebp */
  push32((uint32_t)(EBP));
  /* 120bb621 mov ebp, esp */
  EBP = (ESP);
  /* 120bb623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bb626 mov eax, dword ptr [0x120e11a4] */
  EAX = (r32((uint32_t)(0x120e11a4)));
  /* 120bb62b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120bb62e cmp dword ptr [0x120e2c00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e2c00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb635 jne 0x120bb63e */
  if (!C.zf) goto L_120bb63e;
  /* 120bb637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bb639 jmp 0x120bb6e2 */
  goto L_120bb6e2;
L_120bb63e:;
  /* 120bb63e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb642 jne 0x120bb666 */
  if (!C.zf) goto L_120bb666;
  /* 120bb644 cmp dword ptr [0x120e11ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e11ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb64b je 0x120bb666 */
  if (C.zf) goto L_120bb666;
  /* 120bb64d call 0x120beb20 */
  push32(0x120bb652u); f_120beb20();
  /* 120bb652 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bb654 je 0x120bb65d */
  if (C.zf) goto L_120bb65d;
  /* 120bb656 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bb658 jmp 0x120bb6e2 */
  goto L_120bb6e2;
L_120bb65d:;
  /* 120bb65d mov ecx, dword ptr [0x120e11a4] */
  ECX = (r32((uint32_t)(0x120e11a4)));
  /* 120bb663 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_120bb666:;
  /* 120bb666 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb66a je 0x120bb6e0 */
  if (C.zf) goto L_120bb6e0;
  /* 120bb66c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb670 je 0x120bb6e0 */
  if (C.zf) goto L_120bb6e0;
  /* 120bb672 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb675 push edx */
  push32((uint32_t)(EDX));
  /* 120bb676 call 0x120b1210 */
  push32(0x120bb67bu); f_120b1210();
  /* 120bb67b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb67e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120bb681:;
  /* 120bb681 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bb684 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb687 je 0x120bb6e0 */
  if (C.zf) goto L_120bb6e0;
  /* 120bb689 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bb68c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120bb68e push edx */
  push32((uint32_t)(EDX));
  /* 120bb68f call 0x120b1210 */
  push32(0x120bb694u); f_120b1210();
  /* 120bb694 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb697 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb69a jbe 0x120bb6d5 */
  if ((C.cf||C.zf)) goto L_120bb6d5;
  /* 120bb69c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bb69f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120bb6a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb6a4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 120bb6a8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb6ab jne 0x120bb6d5 */
  if (!C.zf) goto L_120bb6d5;
  /* 120bb6ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb6b0 push ecx */
  push32((uint32_t)(ECX));
  /* 120bb6b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb6b4 push edx */
  push32((uint32_t)(EDX));
  /* 120bb6b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bb6b8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120bb6ba push ecx */
  push32((uint32_t)(ECX));
  /* 120bb6bb call 0x120bead0 */
  push32(0x120bb6c0u); f_120bead0();
  /* 120bb6c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb6c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bb6c5 jne 0x120bb6d5 */
  if (!C.zf) goto L_120bb6d5;
  /* 120bb6c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bb6ca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120bb6cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb6cf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 120bb6d3 jmp 0x120bb6e2 */
  goto L_120bb6e2;
L_120bb6d5:;
  /* 120bb6d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bb6d8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb6db mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120bb6de jmp 0x120bb681 */
  goto L_120bb681;
L_120bb6e0:;
  /* 120bb6e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120bb6e2:;
  /* 120bb6e2 mov esp, ebp */
  ESP = (EBP);
  /* 120bb6e4 pop ebp */
  EBP = (pop32());
  /* 120bb6e5 ret  */
  ESPCHK(0x120bb620u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b6f0 @ 0x120bb6f0 (130 bytes, 43 insns) */
void f_120bb6f0(void) {
  FTRACE(0x120bb6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bb6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bb6f1 mov ebp, esp */
  EBP = (ESP);
  /* 120bb6f3 push ecx */
  push32((uint32_t)(ECX));
  /* 120bb6f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb6f7 cmp eax, dword ptr [0x120e2bfc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120e2bfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb6fd jae 0x120bb721 */
  if (!C.cf) goto L_120bb721;
  /* 120bb6ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb702 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120bb705 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb708 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 120bb70b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bb70e mov eax, dword ptr [ecx*4 + 0x120e2ac0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120e2ac0)));
  /* 120bb715 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 120bb71a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120bb71d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bb71f jne 0x120bb73c */
  if (!C.zf) goto L_120bb73c;
L_120bb721:;
  /* 120bb721 call 0x120b8310 */
  push32(0x120bb726u); f_120b8310();
  /* 120bb726 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120bb72c call 0x120b8320 */
  push32(0x120bb731u); f_120b8320();
  /* 120bb731 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120bb737 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bb73a jmp 0x120bb76e */
  goto L_120bb76e;
L_120bb73c:;
  /* 120bb73c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb73f push edx */
  push32((uint32_t)(EDX));
  /* 120bb740 call 0x120bf0e0 */
  push32(0x120bb745u); f_120bf0e0();
  /* 120bb745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb748 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bb74b push eax */
  push32((uint32_t)(EAX));
  /* 120bb74c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bb74f push ecx */
  push32((uint32_t)(ECX));
  /* 120bb750 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb753 push edx */
  push32((uint32_t)(EDX));
  /* 120bb754 call 0x120bb780 */
  push32(0x120bb759u); f_120bb780();
  /* 120bb759 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb75c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bb75f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb762 push eax */
  push32((uint32_t)(EAX));
  /* 120bb763 call 0x120bf170 */
  push32(0x120bb768u); f_120bf170();
  /* 120bb768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb76b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120bb76e:;
  /* 120bb76e mov esp, ebp */
  ESP = (EBP);
  /* 120bb770 pop ebp */
  EBP = (pop32());
  /* 120bb771 ret  */
  ESPCHK(0x120bb6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b780 @ 0x120bb780 (178 bytes, 56 insns) */
void f_120bb780(void) {
  FTRACE(0x120bb780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bb780 push ebp */
  push32((uint32_t)(EBP));
  /* 120bb781 mov ebp, esp */
  EBP = (ESP);
  /* 120bb783 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bb786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb789 push eax */
  push32((uint32_t)(EAX));
  /* 120bb78a call 0x120bef60 */
  push32(0x120bb78fu); f_120bef60();
  /* 120bb78f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb792 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120bb795 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb799 jne 0x120bb7ae */
  if (!C.zf) goto L_120bb7ae;
  /* 120bb79b call 0x120b8310 */
  push32(0x120bb7a0u); f_120b8310();
  /* 120bb7a0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120bb7a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bb7a9 jmp 0x120bb82e */
  goto L_120bb82e;
L_120bb7ae:;
  /* 120bb7ae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bb7b1 push ecx */
  push32((uint32_t)(ECX));
  /* 120bb7b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bb7b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bb7b7 push edx */
  push32((uint32_t)(EDX));
  /* 120bb7b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bb7bb push eax */
  push32((uint32_t)(EAX));
  /* 120bb7bc call dword ptr [0x120e3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3364))), 0x120bb7c2u);
  /* 120bb7c2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120bb7c5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb7c9 jne 0x120bb7d6 */
  if (!C.zf) goto L_120bb7d6;
  /* 120bb7cb call dword ptr [0x120e33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33e8))), 0x120bb7d1u);
  /* 120bb7d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bb7d4 jmp 0x120bb7dd */
  goto L_120bb7dd;
L_120bb7d6:;
  /* 120bb7d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120bb7dd:;
  /* 120bb7dd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb7e1 je 0x120bb7f4 */
  if (C.zf) goto L_120bb7f4;
  /* 120bb7e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb7e6 push ecx */
  push32((uint32_t)(ECX));
  /* 120bb7e7 call 0x120b8270 */
  push32(0x120bb7ecu); f_120b8270();
  /* 120bb7ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb7ef or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bb7f2 jmp 0x120bb82e */
  goto L_120bb82e;
L_120bb7f4:;
  /* 120bb7f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb7f7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 120bb7fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb7fd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 120bb800 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bb803 mov ecx, dword ptr [edx*4 + 0x120e2ac0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x120e2ac0)));
  /* 120bb80a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 120bb80e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 120bb811 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb814 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120bb817 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb81a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 120bb81d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bb820 mov eax, dword ptr [eax*4 + 0x120e2ac0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x120e2ac0)));
  /* 120bb827 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 120bb82b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_120bb82e:;
  /* 120bb82e mov esp, ebp */
  ESP = (EBP);
  /* 120bb830 pop ebp */
  EBP = (pop32());
  /* 120bb831 ret  */
  ESPCHK(0x120bb780u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b840 @ 0x120bb840 (130 bytes, 43 insns) */
void f_120bb840(void) {
  FTRACE(0x120bb840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bb840 push ebp */
  push32((uint32_t)(EBP));
  /* 120bb841 mov ebp, esp */
  EBP = (ESP);
  /* 120bb843 push ecx */
  push32((uint32_t)(ECX));
  /* 120bb844 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb847 cmp eax, dword ptr [0x120e2bfc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120e2bfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb84d jae 0x120bb871 */
  if (!C.cf) goto L_120bb871;
  /* 120bb84f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb852 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120bb855 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb858 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 120bb85b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bb85e mov eax, dword ptr [ecx*4 + 0x120e2ac0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120e2ac0)));
  /* 120bb865 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 120bb86a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120bb86d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bb86f jne 0x120bb88c */
  if (!C.zf) goto L_120bb88c;
L_120bb871:;
  /* 120bb871 call 0x120b8310 */
  push32(0x120bb876u); f_120b8310();
  /* 120bb876 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120bb87c call 0x120b8320 */
  push32(0x120bb881u); f_120b8320();
  /* 120bb881 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120bb887 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bb88a jmp 0x120bb8be */
  goto L_120bb8be;
L_120bb88c:;
  /* 120bb88c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb88f push edx */
  push32((uint32_t)(EDX));
  /* 120bb890 call 0x120bf0e0 */
  push32(0x120bb895u); f_120bf0e0();
  /* 120bb895 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb898 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bb89b push eax */
  push32((uint32_t)(EAX));
  /* 120bb89c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bb89f push ecx */
  push32((uint32_t)(ECX));
  /* 120bb8a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb8a3 push edx */
  push32((uint32_t)(EDX));
  /* 120bb8a4 call 0x120bb8d0 */
  push32(0x120bb8a9u); f_120bb8d0();
  /* 120bb8a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb8ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bb8af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb8b2 push eax */
  push32((uint32_t)(EAX));
  /* 120bb8b3 call 0x120bf170 */
  push32(0x120bb8b8u); f_120bf170();
  /* 120bb8b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb8bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120bb8be:;
  /* 120bb8be mov esp, ebp */
  ESP = (EBP);
  /* 120bb8c0 pop ebp */
  EBP = (pop32());
  /* 120bb8c1 ret  */
  ESPCHK(0x120bb840u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b8d0 @ 0x120bb8d0 (627 bytes, 182 insns) */
void f_120bb8d0(void) {
  FTRACE(0x120bb8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bb8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bb8d1 mov ebp, esp */
  EBP = (ESP);
  /* 120bb8d3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bb8d9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120bb8e0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bb8e3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 120bb8e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb8ed jne 0x120bb8f6 */
  if (!C.zf) goto L_120bb8f6;
  /* 120bb8ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bb8f1 jmp 0x120bbb3f */
  goto L_120bbb3f;
L_120bb8f6:;
  /* 120bb8f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb8f9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120bb8fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb8ff and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 120bb902 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bb905 mov eax, dword ptr [ecx*4 + 0x120e2ac0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120e2ac0)));
  /* 120bb90c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 120bb911 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 120bb914 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bb916 je 0x120bb928 */
  if (C.zf) goto L_120bb928;
  /* 120bb918 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bb91a push 0 */
  push32((uint32_t)(0x0u));
  /* 120bb91c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb91f push edx */
  push32((uint32_t)(EDX));
  /* 120bb920 call 0x120bb780 */
  push32(0x120bb925u); f_120bb780();
  /* 120bb925 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120bb928:;
  /* 120bb928 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb92b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120bb92e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bb931 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 120bb934 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bb937 mov edx, dword ptr [eax*4 + 0x120e2ac0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120e2ac0)));
  /* 120bb93e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 120bb943 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 120bb948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bb94a je 0x120bba5c */
  if (C.zf) goto L_120bba5c;
  /* 120bb950 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bb953 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120bb956 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_120bb95d:;
  /* 120bb95d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb960 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bb963 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb966 jae 0x120bba5a */
  if (!C.cf) goto L_120bba5a;
  /* 120bb96c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 120bb972 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120bb975:;
  /* 120bb975 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bb978 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 120bb97e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bb980 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb986 jge 0x120bb9e7 */
  if ((C.sf==C.of)) goto L_120bb9e7;
  /* 120bb988 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb98b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bb98e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb991 jae 0x120bb9e7 */
  if (!C.cf) goto L_120bb9e7;
  /* 120bb993 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb996 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120bb998 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 120bb99e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bb9a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb9a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bb9a7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 120bb9ae cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bb9b1 jne 0x120bb9d1 */
  if (!C.zf) goto L_120bb9d1;
  /* 120bb9b3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 120bb9b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb9bc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 120bb9c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bb9c5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 120bb9c8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bb9cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb9ce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_120bb9d1:;
  /* 120bb9d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bb9d4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 120bb9da mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 120bb9dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bb9df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bb9e2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bb9e5 jmp 0x120bb975 */
  goto L_120bb975;
L_120bb9e7:;
  /* 120bb9e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bb9e9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 120bb9ef push edx */
  push32((uint32_t)(EDX));
  /* 120bb9f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bb9f3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 120bb9f9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bb9fb push eax */
  push32((uint32_t)(EAX));
  /* 120bb9fc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 120bba02 push edx */
  push32((uint32_t)(EDX));
  /* 120bba03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bba06 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120bba09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bba0c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 120bba0f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bba12 mov edx, dword ptr [eax*4 + 0x120e2ac0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120e2ac0)));
  /* 120bba19 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 120bba1c push eax */
  push32((uint32_t)(EAX));
  /* 120bba1d call dword ptr [0x120e332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e332c))), 0x120bba23u);
  /* 120bba23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bba25 je 0x120bba4a */
  if (C.zf) goto L_120bba4a;
  /* 120bba27 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bba2a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bba30 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120bba33 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bba36 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 120bba3c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bba3e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bba44 jge 0x120bba48 */
  if ((C.sf==C.of)) goto L_120bba48;
  /* 120bba46 jmp 0x120bba5a */
  goto L_120bba5a;
L_120bba48:;
  /* 120bba48 jmp 0x120bba55 */
  goto L_120bba55;
L_120bba4a:;
  /* 120bba4a call dword ptr [0x120e33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33e8))), 0x120bba50u);
  /* 120bba50 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120bba53 jmp 0x120bba5a */
  goto L_120bba5a;
L_120bba55:;
  /* 120bba55 jmp 0x120bb95d */
  goto L_120bb95d;
L_120bba5a:;
  /* 120bba5a jmp 0x120bbaac */
  goto L_120bbaac;
L_120bba5c:;
  /* 120bba5c push 0 */
  push32((uint32_t)(0x0u));
  /* 120bba5e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 120bba64 push ecx */
  push32((uint32_t)(ECX));
  /* 120bba65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bba68 push edx */
  push32((uint32_t)(EDX));
  /* 120bba69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bba6c push eax */
  push32((uint32_t)(EAX));
  /* 120bba6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bba70 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120bba73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bba76 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 120bba79 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bba7c mov eax, dword ptr [ecx*4 + 0x120e2ac0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120e2ac0)));
  /* 120bba83 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 120bba86 push ecx */
  push32((uint32_t)(ECX));
  /* 120bba87 call dword ptr [0x120e332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e332c))), 0x120bba8du);
  /* 120bba8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bba8f je 0x120bbaa3 */
  if (C.zf) goto L_120bbaa3;
  /* 120bba91 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120bba98 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 120bba9e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 120bbaa1 jmp 0x120bbaac */
  goto L_120bbaac;
L_120bbaa3:;
  /* 120bbaa3 call dword ptr [0x120e33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33e8))), 0x120bbaa9u);
  /* 120bbaa9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_120bbaac:;
  /* 120bbaac cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbab0 jne 0x120bbb36 */
  if (!C.zf) goto L_120bbb36;
  /* 120bbab6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbaba je 0x120bbaea */
  if (C.zf) goto L_120bbaea;
  /* 120bbabc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbac0 jne 0x120bbad9 */
  if (!C.zf) goto L_120bbad9;
  /* 120bbac2 call 0x120b8310 */
  push32(0x120bbac7u); f_120b8310();
  /* 120bbac7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120bbacd call 0x120b8320 */
  push32(0x120bbad2u); f_120b8320();
  /* 120bbad2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bbad5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120bbad7 jmp 0x120bbae5 */
  goto L_120bbae5;
L_120bbad9:;
  /* 120bbad9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bbadc push edx */
  push32((uint32_t)(EDX));
  /* 120bbadd call 0x120b8270 */
  push32(0x120bbae2u); f_120b8270();
  /* 120bbae2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120bbae5:;
  /* 120bbae5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bbae8 jmp 0x120bbb3f */
  goto L_120bbb3f;
L_120bbaea:;
  /* 120bbaea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bbaed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120bbaf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bbaf3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 120bbaf6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bbaf9 mov edx, dword ptr [eax*4 + 0x120e2ac0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120e2ac0)));
  /* 120bbb00 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 120bbb05 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 120bbb08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bbb0a je 0x120bbb1b */
  if (C.zf) goto L_120bbb1b;
  /* 120bbb0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bbb0f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120bbb12 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbb15 jne 0x120bbb1b */
  if (!C.zf) goto L_120bbb1b;
  /* 120bbb17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bbb19 jmp 0x120bbb3f */
  goto L_120bbb3f;
L_120bbb1b:;
  /* 120bbb1b call 0x120b8310 */
  push32(0x120bbb20u); f_120b8310();
  /* 120bbb20 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 120bbb26 call 0x120b8320 */
  push32(0x120bbb2bu); f_120b8320();
  /* 120bbb2b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120bbb31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bbb34 jmp 0x120bbb3f */
  goto L_120bbb3f;
L_120bbb36:;
  /* 120bbb36 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bbb39 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_120bbb3f:;
  /* 120bbb3f mov esp, ebp */
  ESP = (EBP);
  /* 120bbb41 pop ebp */
  EBP = (pop32());
  /* 120bbb42 ret  */
  ESPCHK(0x120bb8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bb50 @ 0x120bbb50 (199 bytes, 68 insns) */
void f_120bbb50(void) {
  FTRACE(0x120bbb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bbb50 push ebp */
  push32((uint32_t)(EBP));
  /* 120bbb51 mov ebp, esp */
  EBP = (ESP);
  /* 120bbb53 push ecx */
  push32((uint32_t)(ECX));
  /* 120bbb54 push ebx */
  push32((uint32_t)(EBX));
  /* 120bbb55 push esi */
  push32((uint32_t)(ESI));
  /* 120bbb56 push edi */
  push32((uint32_t)(EDI));
L_120bbb57:;
  /* 120bbb57 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbb5b jne 0x120bbb7b */
  if (!C.zf) goto L_120bbb7b;
  /* 120bbb5d push 0x120dc240 */
  push32((uint32_t)(0x120dc240u));
  /* 120bbb62 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bbb64 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 120bbb66 push 0x120dc440 */
  push32((uint32_t)(0x120dc440u));
  /* 120bbb6b push 2 */
  push32((uint32_t)(0x2u));
  /* 120bbb6d call 0x120ab840 */
  push32(0x120bbb72u); f_120ab840();
  /* 120bbb72 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbb75 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbb78 jne 0x120bbb7b */
  if (!C.zf) goto L_120bbb7b;
  /* 120bbb7a int3  */
  x86_unimpl("int3 @ 0x120bbb7a");
L_120bbb7b:;
  /* 120bbb7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bbb7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bbb7f jne 0x120bbb57 */
  if (!C.zf) goto L_120bbb57;
  /* 120bbb81 mov ecx, dword ptr [0x120e13fc] */
  ECX = (r32((uint32_t)(0x120e13fc)));
  /* 120bbb87 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbb8a mov dword ptr [0x120e13fc], ecx */
  w32((uint32_t)(0x120e13fc), (ECX));
  /* 120bbb90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bbb93 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120bbb96 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 120bbb98 push 0x120dc440 */
  push32((uint32_t)(0x120dc440u));
  /* 120bbb9d push 2 */
  push32((uint32_t)(0x2u));
  /* 120bbb9f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 120bbba4 call 0x120acc80 */
  push32(0x120bbba9u); f_120acc80();
  /* 120bbba9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbbac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbbaf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 120bbbb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbbb5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbbb9 je 0x120bbbd6 */
  if (C.zf) goto L_120bbbd6;
  /* 120bbbbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbbbe mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120bbbc1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 120bbbc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbbc7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 120bbbca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbbcd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 120bbbd4 jmp 0x120bbbfb */
  goto L_120bbbfb;
L_120bbbd6:;
  /* 120bbbd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbbd9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120bbbdc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120bbbdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbbe2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 120bbbe5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbbe8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbbeb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbbee mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 120bbbf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbbf4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_120bbbfb:;
  /* 120bbbfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbbfe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbc01 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120bbc04 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120bbc06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbc09 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 120bbc10 pop edi */
  EDI = (pop32());
  /* 120bbc11 pop esi */
  ESI = (pop32());
  /* 120bbc12 pop ebx */
  EBX = (pop32());
  /* 120bbc13 mov esp, ebp */
  ESP = (EBP);
  /* 120bbc15 pop ebp */
  EBP = (pop32());
  /* 120bbc16 ret  */
  ESPCHK(0x120bbb50u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x120bbc20 (50 bytes, 17 insns) */
void f_120bbc20(void) {
  FTRACE(0x120bbc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bbc20 push ebp */
  push32((uint32_t)(EBP));
  /* 120bbc21 mov ebp, esp */
  EBP = (ESP);
  /* 120bbc23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bbc26 cmp eax, dword ptr [0x120e2bfc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120e2bfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbc2c jb 0x120bbc32 */
  if (C.cf) goto L_120bbc32;
  /* 120bbc2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bbc30 jmp 0x120bbc50 */
  goto L_120bbc50;
L_120bbc32:;
  /* 120bbc32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bbc35 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120bbc38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bbc3b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 120bbc3e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bbc41 mov eax, dword ptr [ecx*4 + 0x120e2ac0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120e2ac0)));
  /* 120bbc48 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 120bbc4d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_120bbc50:;
  /* 120bbc50 pop ebp */
  EBP = (pop32());
  /* 120bbc51 ret  */
  ESPCHK(0x120bbc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bc60 @ 0x120bbc60 (300 bytes, 80 insns) */
void f_120bbc60(void) {
  FTRACE(0x120bbc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bbc60 push ebp */
  push32((uint32_t)(EBP));
  /* 120bbc61 mov ebp, esp */
  EBP = (ESP);
  /* 120bbc63 push ecx */
  push32((uint32_t)(ECX));
  /* 120bbc64 cmp dword ptr [0x120e27e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e27e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbc6b jne 0x120bbc79 */
  if (!C.zf) goto L_120bbc79;
  /* 120bbc6d mov dword ptr [0x120e27e0], 0x200 */
  w32((uint32_t)(0x120e27e0), (0x200u));
  /* 120bbc77 jmp 0x120bbc8c */
  goto L_120bbc8c;
L_120bbc79:;
  /* 120bbc79 cmp dword ptr [0x120e27e0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x120e27e0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbc80 jge 0x120bbc8c */
  if ((C.sf==C.of)) goto L_120bbc8c;
  /* 120bbc82 mov dword ptr [0x120e27e0], 0x14 */
  w32((uint32_t)(0x120e27e0), (0x14u));
L_120bbc8c:;
  /* 120bbc8c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 120bbc91 push 0x120dc44c */
  push32((uint32_t)(0x120dc44cu));
  /* 120bbc96 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bbc98 push 4 */
  push32((uint32_t)(0x4u));
  /* 120bbc9a mov eax, dword ptr [0x120e27e0] */
  EAX = (r32((uint32_t)(0x120e27e0)));
  /* 120bbc9f push eax */
  push32((uint32_t)(EAX));
  /* 120bbca0 call 0x120ad090 */
  push32(0x120bbca5u); f_120ad090();
  /* 120bbca5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbca8 mov dword ptr [0x120e1494], eax */
  w32((uint32_t)(0x120e1494), (EAX));
  /* 120bbcad cmp dword ptr [0x120e1494], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1494))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbcb4 jne 0x120bbcf5 */
  if (!C.zf) goto L_120bbcf5;
  /* 120bbcb6 mov dword ptr [0x120e27e0], 0x14 */
  w32((uint32_t)(0x120e27e0), (0x14u));
  /* 120bbcc0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 120bbcc5 push 0x120dc44c */
  push32((uint32_t)(0x120dc44cu));
  /* 120bbcca push 2 */
  push32((uint32_t)(0x2u));
  /* 120bbccc push 4 */
  push32((uint32_t)(0x4u));
  /* 120bbcce mov ecx, dword ptr [0x120e27e0] */
  ECX = (r32((uint32_t)(0x120e27e0)));
  /* 120bbcd4 push ecx */
  push32((uint32_t)(ECX));
  /* 120bbcd5 call 0x120ad090 */
  push32(0x120bbcdau); f_120ad090();
  /* 120bbcda add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbcdd mov dword ptr [0x120e1494], eax */
  w32((uint32_t)(0x120e1494), (EAX));
  /* 120bbce2 cmp dword ptr [0x120e1494], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1494))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbce9 jne 0x120bbcf5 */
  if (!C.zf) goto L_120bbcf5;
  /* 120bbceb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 120bbced call 0x120ab6f0 */
  push32(0x120bbcf2u); f_120ab6f0();
  /* 120bbcf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120bbcf5:;
  /* 120bbcf5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120bbcfc jmp 0x120bbd07 */
  goto L_120bbd07;
L_120bbcfe:;
  /* 120bbcfe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbd01 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbd04 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120bbd07:;
  /* 120bbd07 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbd0b jge 0x120bbd26 */
  if ((C.sf==C.of)) goto L_120bbd26;
  /* 120bbd0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbd10 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120bbd13 add eax, 0x120df8c8 */
  { uint32_t _a=(EAX),_b=(0x120df8c8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbd18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbd1b mov edx, dword ptr [0x120e1494] */
  EDX = (r32((uint32_t)(0x120e1494)));
  /* 120bbd21 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 120bbd24 jmp 0x120bbcfe */
  goto L_120bbcfe;
L_120bbd26:;
  /* 120bbd26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120bbd2d jmp 0x120bbd38 */
  goto L_120bbd38;
L_120bbd2f:;
  /* 120bbd2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbd32 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbd35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120bbd38:;
  /* 120bbd38 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbd3c jge 0x120bbd88 */
  if ((C.sf==C.of)) goto L_120bbd88;
  /* 120bbd3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbd41 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120bbd44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbd47 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 120bbd4a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bbd4d mov eax, dword ptr [ecx*4 + 0x120e2ac0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120e2ac0)));
  /* 120bbd54 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbd58 je 0x120bbd76 */
  if (C.zf) goto L_120bbd76;
  /* 120bbd5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbd5d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120bbd60 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbd63 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 120bbd66 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bbd69 mov eax, dword ptr [ecx*4 + 0x120e2ac0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120e2ac0)));
  /* 120bbd70 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbd74 jne 0x120bbd86 */
  if (!C.zf) goto L_120bbd86;
L_120bbd76:;
  /* 120bbd76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbd79 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120bbd7c mov dword ptr [ecx + 0x120df8d8], 0xffffffff */
  w32((uint32_t)(ECX + 0x120df8d8), (0xffffffffu));
L_120bbd86:;
  /* 120bbd86 jmp 0x120bbd2f */
  goto L_120bbd2f;
L_120bbd88:;
  /* 120bbd88 mov esp, ebp */
  ESP = (EBP);
  /* 120bbd8a pop ebp */
  EBP = (pop32());
  /* 120bbd8b ret  */
  ESPCHK(0x120bbc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bd90 @ 0x120bbd90 (26 bytes, 9 insns) */
void f_120bbd90(void) {
  FTRACE(0x120bbd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bbd90 push ebp */
  push32((uint32_t)(EBP));
  /* 120bbd91 mov ebp, esp */
  EBP = (ESP);
  /* 120bbd93 call 0x120bf3e0 */
  push32(0x120bbd98u); f_120bf3e0();
  /* 120bbd98 movsx eax, byte ptr [0x120e11bc] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x120e11bc))));
  /* 120bbd9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bbda1 je 0x120bbda8 */
  if (C.zf) goto L_120bbda8;
  /* 120bbda3 call 0x120bf1a0 */
  push32(0x120bbda8u); f_120bf1a0();
L_120bbda8:;
  /* 120bbda8 pop ebp */
  EBP = (pop32());
  /* 120bbda9 ret  */
  ESPCHK(0x120bbd90u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bdb0 @ 0x120bbdb0 (61 bytes, 20 insns) */
void f_120bbdb0(void) {
  FTRACE(0x120bbdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bbdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bbdb1 mov ebp, esp */
  EBP = (ESP);
  /* 120bbdb3 cmp dword ptr [ebp + 8], 0x120df8c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x120df8c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbdba jb 0x120bbdde */
  if (C.cf) goto L_120bbdde;
  /* 120bbdbc cmp dword ptr [ebp + 8], 0x120dfb28 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x120dfb28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbdc3 ja 0x120bbdde */
  if ((!C.cf&&!C.zf)) goto L_120bbdde;
  /* 120bbdc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bbdc8 sub eax, 0x120df8c8 */
  { uint32_t _a=(EAX),_b=(0x120df8c8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bbdcd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120bbdd0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbdd3 push eax */
  push32((uint32_t)(EAX));
  /* 120bbdd4 call 0x120acb80 */
  push32(0x120bbdd9u); f_120acb80();
  /* 120bbdd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbddc jmp 0x120bbdeb */
  goto L_120bbdeb;
L_120bbdde:;
  /* 120bbdde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bbde1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbde4 push ecx */
  push32((uint32_t)(ECX));
  /* 120bbde5 call dword ptr [0x120e345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e345c))), 0x120bbdebu);
L_120bbdeb:;
  /* 120bbdeb pop ebp */
  EBP = (pop32());
  /* 120bbdec ret  */
  ESPCHK(0x120bbdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bdf0 @ 0x120bbdf0 (41 bytes, 16 insns) */
void f_120bbdf0(void) {
  FTRACE(0x120bbdf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bbdf0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bbdf1 mov ebp, esp */
  EBP = (ESP);
  /* 120bbdf3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbdf7 jge 0x120bbe0a */
  if ((C.sf==C.of)) goto L_120bbe0a;
  /* 120bbdf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bbdfc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbdff push eax */
  push32((uint32_t)(EAX));
  /* 120bbe00 call 0x120acb80 */
  push32(0x120bbe05u); f_120acb80();
  /* 120bbe05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbe08 jmp 0x120bbe17 */
  goto L_120bbe17;
L_120bbe0a:;
  /* 120bbe0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bbe0d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbe10 push ecx */
  push32((uint32_t)(ECX));
  /* 120bbe11 call dword ptr [0x120e345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e345c))), 0x120bbe17u);
L_120bbe17:;
  /* 120bbe17 pop ebp */
  EBP = (pop32());
  /* 120bbe18 ret  */
  ESPCHK(0x120bbdf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001be20 @ 0x120bbe20 (61 bytes, 20 insns) */
void f_120bbe20(void) {
  FTRACE(0x120bbe20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bbe20 push ebp */
  push32((uint32_t)(EBP));
  /* 120bbe21 mov ebp, esp */
  EBP = (ESP);
  /* 120bbe23 cmp dword ptr [ebp + 8], 0x120df8c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x120df8c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbe2a jb 0x120bbe4e */
  if (C.cf) goto L_120bbe4e;
  /* 120bbe2c cmp dword ptr [ebp + 8], 0x120dfb28 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x120dfb28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbe33 ja 0x120bbe4e */
  if ((!C.cf&&!C.zf)) goto L_120bbe4e;
  /* 120bbe35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bbe38 sub eax, 0x120df8c8 */
  { uint32_t _a=(EAX),_b=(0x120df8c8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bbe3d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120bbe40 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbe43 push eax */
  push32((uint32_t)(EAX));
  /* 120bbe44 call 0x120acc20 */
  push32(0x120bbe49u); f_120acc20();
  /* 120bbe49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbe4c jmp 0x120bbe5b */
  goto L_120bbe5b;
L_120bbe4e:;
  /* 120bbe4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bbe51 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbe54 push ecx */
  push32((uint32_t)(ECX));
  /* 120bbe55 call dword ptr [0x120e3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3438))), 0x120bbe5bu);
L_120bbe5b:;
  /* 120bbe5b pop ebp */
  EBP = (pop32());
  /* 120bbe5c ret  */
  ESPCHK(0x120bbe20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001be60 @ 0x120bbe60 (41 bytes, 16 insns) */
void f_120bbe60(void) {
  FTRACE(0x120bbe60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bbe60 push ebp */
  push32((uint32_t)(EBP));
  /* 120bbe61 mov ebp, esp */
  EBP = (ESP);
  /* 120bbe63 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbe67 jge 0x120bbe7a */
  if ((C.sf==C.of)) goto L_120bbe7a;
  /* 120bbe69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bbe6c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbe6f push eax */
  push32((uint32_t)(EAX));
  /* 120bbe70 call 0x120acc20 */
  push32(0x120bbe75u); f_120acc20();
  /* 120bbe75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbe78 jmp 0x120bbe87 */
  goto L_120bbe87;
L_120bbe7a:;
  /* 120bbe7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bbe7d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbe80 push ecx */
  push32((uint32_t)(ECX));
  /* 120bbe81 call dword ptr [0x120e3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3438))), 0x120bbe87u);
L_120bbe87:;
  /* 120bbe87 pop ebp */
  EBP = (pop32());
  /* 120bbe88 ret  */
  ESPCHK(0x120bbe60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001be90 @ 0x120bbe90 (119 bytes, 34 insns) */
void f_120bbe90(void) {
  FTRACE(0x120bbe90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bbe90 push ebp */
  push32((uint32_t)(EBP));
  /* 120bbe91 mov ebp, esp */
  EBP = (ESP);
  /* 120bbe93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bbe96 push 0x120e27f4 */
  push32((uint32_t)(0x120e27f4u));
  /* 120bbe9b call dword ptr [0x120e344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e344c))), 0x120bbea1u);
  /* 120bbea1 cmp dword ptr [0x120e27e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e27e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbea8 je 0x120bbec8 */
  if (C.zf) goto L_120bbec8;
  /* 120bbeaa push 0x120e27f4 */
  push32((uint32_t)(0x120e27f4u));
  /* 120bbeaf call dword ptr [0x120e3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3328))), 0x120bbeb5u);
  /* 120bbeb5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120bbeb7 call 0x120acb80 */
  push32(0x120bbebcu); f_120acb80();
  /* 120bbebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbebf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120bbec6 jmp 0x120bbecf */
  goto L_120bbecf;
L_120bbec8:;
  /* 120bbec8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120bbecf:;
  /* 120bbecf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 120bbed3 push eax */
  push32((uint32_t)(EAX));
  /* 120bbed4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bbed7 push ecx */
  push32((uint32_t)(ECX));
  /* 120bbed8 call 0x120bbf10 */
  push32(0x120bbeddu); f_120bbf10();
  /* 120bbedd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbee0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120bbee3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbee7 je 0x120bbef5 */
  if (C.zf) goto L_120bbef5;
  /* 120bbee9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120bbeeb call 0x120acc20 */
  push32(0x120bbef0u); f_120acc20();
  /* 120bbef0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbef3 jmp 0x120bbf00 */
  goto L_120bbf00;
L_120bbef5:;
  /* 120bbef5 push 0x120e27f4 */
  push32((uint32_t)(0x120e27f4u));
  /* 120bbefa call dword ptr [0x120e3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3328))), 0x120bbf00u);
L_120bbf00:;
  /* 120bbf00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bbf03 mov esp, ebp */
  ESP = (EBP);
  /* 120bbf05 pop ebp */
  EBP = (pop32());
  /* 120bbf06 ret  */
  ESPCHK(0x120bbe90u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bf10 @ 0x120bbf10 (160 bytes, 50 insns) */
void f_120bbf10(void) {
  FTRACE(0x120bbf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bbf10 push ebp */
  push32((uint32_t)(EBP));
  /* 120bbf11 mov ebp, esp */
  EBP = (ESP);
  /* 120bbf13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bbf16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbf1a jne 0x120bbf23 */
  if (!C.zf) goto L_120bbf23;
  /* 120bbf1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bbf1e jmp 0x120bbfac */
  goto L_120bbfac;
L_120bbf23:;
  /* 120bbf23 cmp dword ptr [0x120e13e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e13e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbf2a jne 0x120bbf5a */
  if (!C.zf) goto L_120bbf5a;
  /* 120bbf2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bbf2f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bbf34 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbf39 jle 0x120bbf4b */
  if ((C.zf||C.sf!=C.of)) goto L_120bbf4b;
  /* 120bbf3b call 0x120b8310 */
  push32(0x120bbf40u); f_120b8310();
  /* 120bbf40 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 120bbf46 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bbf49 jmp 0x120bbfac */
  goto L_120bbfac;
L_120bbf4b:;
  /* 120bbf4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bbf4e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 120bbf51 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 120bbf53 mov eax, 1 */
  EAX = (0x1u);
  /* 120bbf58 jmp 0x120bbfac */
  goto L_120bbfac;
L_120bbf5a:;
  /* 120bbf5a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120bbf61 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 120bbf64 push eax */
  push32((uint32_t)(EAX));
  /* 120bbf65 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bbf67 mov ecx, dword ptr [0x120df010] */
  ECX = (r32((uint32_t)(0x120df010)));
  /* 120bbf6d push ecx */
  push32((uint32_t)(ECX));
  /* 120bbf6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bbf71 push edx */
  push32((uint32_t)(EDX));
  /* 120bbf72 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bbf74 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 120bbf77 push eax */
  push32((uint32_t)(EAX));
  /* 120bbf78 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 120bbf7d mov ecx, dword ptr [0x120e13f0] */
  ECX = (r32((uint32_t)(0x120e13f0)));
  /* 120bbf83 push ecx */
  push32((uint32_t)(ECX));
  /* 120bbf84 call dword ptr [0x120e33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33c4))), 0x120bbf8au);
  /* 120bbf8a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bbf8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbf91 je 0x120bbf99 */
  if (C.zf) goto L_120bbf99;
  /* 120bbf93 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bbf97 je 0x120bbfa9 */
  if (C.zf) goto L_120bbfa9;
L_120bbf99:;
  /* 120bbf99 call 0x120b8310 */
  push32(0x120bbf9eu); f_120b8310();
  /* 120bbf9e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 120bbfa4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bbfa7 jmp 0x120bbfac */
  goto L_120bbfac;
L_120bbfa9:;
  /* 120bbfa9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120bbfac:;
  /* 120bbfac mov esp, ebp */
  ESP = (EBP);
  /* 120bbfae pop ebp */
  EBP = (pop32());
  /* 120bbfaf ret  */
  ESPCHK(0x120bbf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bfb0 @ 0x120bbfb0 (62 bytes, 21 insns) */
void f_120bbfb0(void) {
  FTRACE(0x120bbfb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bbfb0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bbfb1 mov ebp, esp */
  EBP = (ESP);
  /* 120bbfb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bbfb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bbfb9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120bbfbc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bbfbf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bbfc2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bbfc5 add edx, 0x3fe */
  { uint32_t _a=(EDX),_b=(0x3feu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bbfcb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120bbfce mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 120bbfd1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bbfd6 and eax, 0x800f */
  { uint32_t _r=(EAX)&(0x800fu); EAX = (_r); fl_logic(_r,32); }
  /* 120bbfdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bbfde shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 120bbfe1 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 120bbfe3 mov word ptr [ebp - 6], ax */
  w16((uint32_t)(EBP + -0x6), (AX));
  /* 120bbfe7 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 120bbfea mov esp, ebp */
  ESP = (EBP);
  /* 120bbfec pop ebp */
  EBP = (pop32());
  /* 120bbfed ret  */
  ESPCHK(0x120bbfb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bff0 @ 0x120bbff0 (45 bytes, 15 insns) */
void f_120bbff0(void) {
  FTRACE(0x120bbff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bbff0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bbff1 mov ebp, esp */
  EBP = (ESP);
  /* 120bbff3 push ecx */
  push32((uint32_t)(ECX));
  /* 120bbff4 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 120bbff7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bbffc and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 120bc001 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120bc004 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 120bc008 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 120bc00c sub cx, 0x3fe */
  { uint32_t _a=(CX),_b=(0x3feu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 120bc011 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 120bc015 movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 120bc019 mov esp, ebp */
  ESP = (EBP);
  /* 120bc01b pop ebp */
  EBP = (pop32());
  /* 120bc01c ret  */
  ESPCHK(0x120bbff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c020 @ 0x120bc020 (51 bytes, 18 insns) */
void f_120bc020(void) {
  FTRACE(0x120bc020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bc020 push ebp */
  push32((uint32_t)(EBP));
  /* 120bc021 mov ebp, esp */
  EBP = (ESP);
  /* 120bc023 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 120bc026 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bc02b and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 120bc030 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120bc033 movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 120bc036 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bc039 lea eax, [ecx + edx - 0x3fe] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x3fe));
  /* 120bc040 push eax */
  push32((uint32_t)(EAX));
  /* 120bc041 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bc044 push ecx */
  push32((uint32_t)(ECX));
  /* 120bc045 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc048 push edx */
  push32((uint32_t)(EDX));
  /* 120bc049 call 0x120bbfb0 */
  push32(0x120bc04eu); f_120bbfb0();
  /* 120bc04e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc051 pop ebp */
  EBP = (pop32());
  /* 120bc052 ret  */
  ESPCHK(0x120bc020u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c060 @ 0x120bc060 (52 bytes, 18 insns) */
void f_120bc060(void) {
  FTRACE(0x120bc060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bc060 push ebp */
  push32((uint32_t)(EBP));
  /* 120bc061 mov ebp, esp */
  EBP = (ESP);
  /* 120bc063 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bc066 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc069 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120bc06c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bc06f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120bc072 mov edx, dword ptr [ebp + 0xe] */
  EDX = (r32((uint32_t)(EBP + 0xe)));
  /* 120bc075 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120bc07b and edx, 0x800f */
  { uint32_t _r=(EDX)&(0x800fu); EDX = (_r); fl_logic(_r,32); }
  /* 120bc081 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bc084 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120bc087 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 120bc089 mov word ptr [ebp - 2], dx */
  w16((uint32_t)(EBP + -0x2), (DX));
  /* 120bc08d fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 120bc090 mov esp, ebp */
  ESP = (EBP);
  /* 120bc092 pop ebp */
  EBP = (pop32());
  /* 120bc093 ret  */
  ESPCHK(0x120bc060u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c0a0 @ 0x120bc0a0 (124 bytes, 37 insns) */
void f_120bc0a0(void) {
  FTRACE(0x120bc0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bc0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bc0a1 mov ebp, esp */
  EBP = (ESP);
  /* 120bc0a3 cmp dword ptr [ebp + 0xc], 0x7ff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bc0aa jne 0x120bc0b9 */
  if (!C.zf) goto L_120bc0b9;
  /* 120bc0ac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bc0b0 jne 0x120bc0b9 */
  if (!C.zf) goto L_120bc0b9;
  /* 120bc0b2 mov eax, 1 */
  EAX = (0x1u);
  /* 120bc0b7 jmp 0x120bc11a */
  goto L_120bc11a;
L_120bc0b9:;
  /* 120bc0b9 cmp dword ptr [ebp + 0xc], 0xfff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bc0c0 jne 0x120bc0cf */
  if (!C.zf) goto L_120bc0cf;
  /* 120bc0c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bc0c6 jne 0x120bc0cf */
  if (!C.zf) goto L_120bc0cf;
  /* 120bc0c8 mov eax, 2 */
  EAX = (0x2u);
  /* 120bc0cd jmp 0x120bc11a */
  goto L_120bc11a;
L_120bc0cf:;
  /* 120bc0cf mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 120bc0d2 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bc0d7 and eax, 0x7ff8 */
  { uint32_t _r=(EAX)&(0x7ff8u); EAX = (_r); fl_logic(_r,32); }
  /* 120bc0dc cmp eax, 0x7ff8 */
  { uint32_t _a=(EAX),_b=(0x7ff8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bc0e1 jne 0x120bc0ea */
  if (!C.zf) goto L_120bc0ea;
  /* 120bc0e3 mov eax, 3 */
  EAX = (0x3u);
  /* 120bc0e8 jmp 0x120bc11a */
  goto L_120bc11a;
L_120bc0ea:;
  /* 120bc0ea mov ecx, dword ptr [ebp + 0xe] */
  ECX = (r32((uint32_t)(EBP + 0xe)));
  /* 120bc0ed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120bc0f3 and ecx, 0x7ff8 */
  { uint32_t _r=(ECX)&(0x7ff8u); ECX = (_r); fl_logic(_r,32); }
  /* 120bc0f9 cmp ecx, 0x7ff0 */
  { uint32_t _a=(ECX),_b=(0x7ff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bc0ff jne 0x120bc118 */
  if (!C.zf) goto L_120bc118;
  /* 120bc101 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bc104 shl edx, 0xd */
  EDX = (sh_shl((uint32_t)(EDX), (0xdu)&0x1f, 32));
  /* 120bc107 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120bc109 jne 0x120bc111 */
  if (!C.zf) goto L_120bc111;
  /* 120bc10b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bc10f je 0x120bc118 */
  if (C.zf) goto L_120bc118;
L_120bc111:;
  /* 120bc111 mov eax, 4 */
  EAX = (0x4u);
  /* 120bc116 jmp 0x120bc11a */
  goto L_120bc11a;
L_120bc118:;
  /* 120bc118 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120bc11a:;
  /* 120bc11a pop ebp */
  EBP = (pop32());
  /* 120bc11b ret  */
  ESPCHK(0x120bc0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c120 @ 0x120bc120 (313 bytes, 95 insns) */
void f_120bc120(void) {
  FTRACE(0x120bc120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bc120 push ebp */
  push32((uint32_t)(EBP));
  /* 120bc121 mov ebp, esp */
  EBP = (ESP);
  /* 120bc123 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bc126 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 120bc129 fcomp qword ptr [0x120db698] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x120db698)));
  (void)fpu_pop();
  /* 120bc12f fnstsw ax */
  AX = fpu_status();
  /* 120bc131 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 120bc134 je 0x120bc150 */
  if (C.zf) goto L_120bc150;
  /* 120bc136 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120bc13d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120bc144 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120bc14b jmp 0x120bc24a */
  goto L_120bc24a;
L_120bc150:;
  /* 120bc150 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 120bc153 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bc158 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 120bc15d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bc15f jne 0x120bc219 */
  if (!C.zf) goto L_120bc219;
  /* 120bc165 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bc168 shl ecx, 0xc */
  ECX = (sh_shl((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 120bc16b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bc16d jne 0x120bc179 */
  if (!C.zf) goto L_120bc179;
  /* 120bc16f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bc173 je 0x120bc219 */
  if (C.zf) goto L_120bc219;
L_120bc179:;
  /* 120bc179 mov dword ptr [ebp - 4], 0xfffffc03 */
  w32((uint32_t)(EBP + -0x4), (0xfffffc03u));
  /* 120bc180 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 120bc183 fcomp qword ptr [0x120db698] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x120db698)));
  (void)fpu_pop();
  /* 120bc189 fnstsw ax */
  AX = fpu_status();
  /* 120bc18b test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 120bc18e je 0x120bc199 */
  if (C.zf) goto L_120bc199;
  /* 120bc190 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 120bc197 jmp 0x120bc1a0 */
  goto L_120bc1a0;
L_120bc199:;
  /* 120bc199 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_120bc1a0:;
  /* 120bc1a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bc1a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_120bc1a6:;
  /* 120bc1a6 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 120bc1a9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bc1ae and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 120bc1b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bc1b3 jne 0x120bc1e5 */
  if (!C.zf) goto L_120bc1e5;
  /* 120bc1b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bc1b8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120bc1ba mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 120bc1bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc1c0 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 120bc1c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120bc1c8 je 0x120bc1d2 */
  if (C.zf) goto L_120bc1d2;
  /* 120bc1ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bc1cd or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 120bc1cf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_120bc1d2:;
  /* 120bc1d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc1d5 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120bc1d7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 120bc1da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc1dd sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bc1e0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120bc1e3 jmp 0x120bc1a6 */
  goto L_120bc1a6;
L_120bc1e5:;
  /* 120bc1e5 mov ax, word ptr [ebp + 0xe] */
  AX = (r16((uint32_t)(EBP + 0xe)));
  /* 120bc1e9 and ax, 0xffef */
  { uint32_t _r=(AX)&(0xffefu); AX = (_r); fl_logic(_r,16); }
  /* 120bc1ed mov word ptr [ebp + 0xe], ax */
  w16((uint32_t)(EBP + 0xe), (AX));
  /* 120bc1f1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bc1f5 je 0x120bc202 */
  if (C.zf) goto L_120bc202;
  /* 120bc1f7 mov cx, word ptr [ebp + 0xe] */
  CX = (r16((uint32_t)(EBP + 0xe)));
  /* 120bc1fb or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 120bc1fe mov word ptr [ebp + 0xe], cx */
  w16((uint32_t)(EBP + 0xe), (CX));
L_120bc202:;
  /* 120bc202 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bc204 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bc207 push edx */
  push32((uint32_t)(EDX));
  /* 120bc208 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc20b push eax */
  push32((uint32_t)(EAX));
  /* 120bc20c call 0x120bbfb0 */
  push32(0x120bc211u); f_120bbfb0();
  /* 120bc211 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc214 fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 120bc217 jmp 0x120bc24a */
  goto L_120bc24a;
L_120bc219:;
  /* 120bc219 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bc21b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bc21e push ecx */
  push32((uint32_t)(ECX));
  /* 120bc21f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc222 push edx */
  push32((uint32_t)(EDX));
  /* 120bc223 call 0x120bbfb0 */
  push32(0x120bc228u); f_120bbfb0();
  /* 120bc228 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc22b fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 120bc22e mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 120bc231 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bc236 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 120bc23b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120bc23e movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 120bc241 sub ecx, 0x3fe */
  { uint32_t _a=(ECX),_b=(0x3feu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bc247 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120bc24a:;
  /* 120bc24a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bc24d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc250 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120bc252 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 120bc255 mov esp, ebp */
  ESP = (EBP);
  /* 120bc257 pop ebp */
  EBP = (pop32());
  /* 120bc258 ret  */
  ESPCHK(0x120bc120u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x120bc260 (219 bytes, 64 insns) */
void f_120bc260(void) {
  FTRACE(0x120bc260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bc260 push ebp */
  push32((uint32_t)(EBP));
  /* 120bc261 mov ebp, esp */
  EBP = (ESP);
  /* 120bc263 push ecx */
  push32((uint32_t)(ECX));
  /* 120bc264 cmp dword ptr [0x120e13ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e13ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bc26b je 0x120bc301 */
  if (C.zf) goto L_120bc301;
  /* 120bc271 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 120bc273 push 0x120dc454 */
  push32((uint32_t)(0x120dc454u));
  /* 120bc278 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc27a push 0xac */
  push32((uint32_t)(0xacu));
  /* 120bc27f push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc281 call 0x120ad090 */
  push32(0x120bc286u); f_120ad090();
  /* 120bc286 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc289 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bc28c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bc290 jne 0x120bc29c */
  if (!C.zf) goto L_120bc29c;
  /* 120bc292 mov eax, 1 */
  EAX = (0x1u);
  /* 120bc297 jmp 0x120bc337 */
  goto L_120bc337;
L_120bc29c:;
  /* 120bc29c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc29f push eax */
  push32((uint32_t)(EAX));
  /* 120bc2a0 call 0x120bc340 */
  push32(0x120bc2a5u); f_120bc340();
  /* 120bc2a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc2a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bc2aa je 0x120bc2cd */
  if (C.zf) goto L_120bc2cd;
  /* 120bc2ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc2af push ecx */
  push32((uint32_t)(ECX));
  /* 120bc2b0 call 0x120bc8d0 */
  push32(0x120bc2b5u); f_120bc8d0();
  /* 120bc2b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc2b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc2ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc2bd push edx */
  push32((uint32_t)(EDX));
  /* 120bc2be call 0x120ad710 */
  push32(0x120bc2c3u); f_120ad710();
  /* 120bc2c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc2c6 mov eax, 1 */
  EAX = (0x1u);
  /* 120bc2cb jmp 0x120bc337 */
  goto L_120bc337;
L_120bc2cd:;
  /* 120bc2cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc2d0 mov dword ptr [0x120e02f0], eax */
  w32((uint32_t)(0x120e02f0), (EAX));
  /* 120bc2d5 mov ecx, dword ptr [0x120e1400] */
  ECX = (r32((uint32_t)(0x120e1400)));
  /* 120bc2db push ecx */
  push32((uint32_t)(ECX));
  /* 120bc2dc call 0x120bc8d0 */
  push32(0x120bc2e1u); f_120bc8d0();
  /* 120bc2e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc2e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc2e6 mov edx, dword ptr [0x120e1400] */
  EDX = (r32((uint32_t)(0x120e1400)));
  /* 120bc2ec push edx */
  push32((uint32_t)(EDX));
  /* 120bc2ed call 0x120ad710 */
  push32(0x120bc2f2u); f_120ad710();
  /* 120bc2f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc2f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc2f8 mov dword ptr [0x120e1400], eax */
  w32((uint32_t)(0x120e1400), (EAX));
  /* 120bc2fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bc2ff jmp 0x120bc337 */
  goto L_120bc337;
L_120bc301:;
  /* 120bc301 mov dword ptr [0x120e02f0], 0x120e02f8 */
  w32((uint32_t)(0x120e02f0), (0x120e02f8u));
  /* 120bc30b mov ecx, dword ptr [0x120e1400] */
  ECX = (r32((uint32_t)(0x120e1400)));
  /* 120bc311 push ecx */
  push32((uint32_t)(ECX));
  /* 120bc312 call 0x120bc8d0 */
  push32(0x120bc317u); f_120bc8d0();
  /* 120bc317 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc31a push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc31c mov edx, dword ptr [0x120e1400] */
  EDX = (r32((uint32_t)(0x120e1400)));
  /* 120bc322 push edx */
  push32((uint32_t)(EDX));
  /* 120bc323 call 0x120ad710 */
  push32(0x120bc328u); f_120ad710();
  /* 120bc328 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc32b mov dword ptr [0x120e1400], 0 */
  w32((uint32_t)(0x120e1400), (0x0u));
  /* 120bc335 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120bc337:;
  /* 120bc337 mov esp, ebp */
  ESP = (EBP);
  /* 120bc339 pop ebp */
  EBP = (pop32());
  /* 120bc33a ret  */
  ESPCHK(0x120bc260u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c340 @ 0x120bc340 (1423 bytes, 533 insns) */
void f_120bc340(void) {
  FTRACE(0x120bc340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bc340 push ebp */
  push32((uint32_t)(EBP));
  /* 120bc341 mov ebp, esp */
  EBP = (ESP);
  /* 120bc343 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bc346 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120bc34d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bc34f mov ax, word ptr [0x120e143a] */
  AX = (r16((uint32_t)(0x120e143a)));
  /* 120bc355 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bc358 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc35a mov cx, word ptr [0x120e143c] */
  CX = (r16((uint32_t)(0x120e143c)));
  /* 120bc361 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bc364 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bc368 jne 0x120bc372 */
  if (!C.zf) goto L_120bc372;
  /* 120bc36a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bc36d jmp 0x120bc8cb */
  goto L_120bc8cb;
L_120bc372:;
  /* 120bc372 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc375 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc378 push edx */
  push32((uint32_t)(EDX));
  /* 120bc379 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 120bc37b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc37e push eax */
  push32((uint32_t)(EAX));
  /* 120bc37f push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc381 call 0x120c09a0 */
  push32(0x120bc386u); f_120c09a0();
  /* 120bc386 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc389 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc38c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc38e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc391 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc394 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc397 push edx */
  push32((uint32_t)(EDX));
  /* 120bc398 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 120bc39a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc39d push eax */
  push32((uint32_t)(EAX));
  /* 120bc39e push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc3a0 call 0x120c09a0 */
  push32(0x120bc3a5u); f_120c09a0();
  /* 120bc3a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc3a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc3ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc3ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc3b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc3b3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc3b6 push edx */
  push32((uint32_t)(EDX));
  /* 120bc3b7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 120bc3b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc3bc push eax */
  push32((uint32_t)(EAX));
  /* 120bc3bd push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc3bf call 0x120c09a0 */
  push32(0x120bc3c4u); f_120c09a0();
  /* 120bc3c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc3c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc3ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc3cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc3cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc3d2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc3d5 push edx */
  push32((uint32_t)(EDX));
  /* 120bc3d6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 120bc3d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc3db push eax */
  push32((uint32_t)(EAX));
  /* 120bc3dc push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc3de call 0x120c09a0 */
  push32(0x120bc3e3u); f_120c09a0();
  /* 120bc3e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc3e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc3e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc3eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc3ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc3f1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc3f4 push edx */
  push32((uint32_t)(EDX));
  /* 120bc3f5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 120bc3f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc3fa push eax */
  push32((uint32_t)(EAX));
  /* 120bc3fb push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc3fd call 0x120c09a0 */
  push32(0x120bc402u); f_120c09a0();
  /* 120bc402 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc405 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc408 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc40a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc40d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc410 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc413 push edx */
  push32((uint32_t)(EDX));
  /* 120bc414 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 120bc416 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc419 push eax */
  push32((uint32_t)(EAX));
  /* 120bc41a push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc41c call 0x120c09a0 */
  push32(0x120bc421u); f_120c09a0();
  /* 120bc421 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc424 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc427 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc429 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc42c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc42f push edx */
  push32((uint32_t)(EDX));
  /* 120bc430 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 120bc432 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc435 push eax */
  push32((uint32_t)(EAX));
  /* 120bc436 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc438 call 0x120c09a0 */
  push32(0x120bc43du); f_120c09a0();
  /* 120bc43d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc440 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc443 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc445 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc448 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc44b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc44e push edx */
  push32((uint32_t)(EDX));
  /* 120bc44f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 120bc451 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc454 push eax */
  push32((uint32_t)(EAX));
  /* 120bc455 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc457 call 0x120c09a0 */
  push32(0x120bc45cu); f_120c09a0();
  /* 120bc45c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc45f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc462 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc464 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc467 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc46a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc46d push edx */
  push32((uint32_t)(EDX));
  /* 120bc46e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 120bc470 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc473 push eax */
  push32((uint32_t)(EAX));
  /* 120bc474 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc476 call 0x120c09a0 */
  push32(0x120bc47bu); f_120c09a0();
  /* 120bc47b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc47e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc481 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc483 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc486 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc489 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc48c push edx */
  push32((uint32_t)(EDX));
  /* 120bc48d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 120bc48f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc492 push eax */
  push32((uint32_t)(EAX));
  /* 120bc493 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc495 call 0x120c09a0 */
  push32(0x120bc49au); f_120c09a0();
  /* 120bc49a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc49d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc4a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc4a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc4a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc4a8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc4ab push edx */
  push32((uint32_t)(EDX));
  /* 120bc4ac push 0x2d */
  push32((uint32_t)(0x2du));
  /* 120bc4ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc4b1 push eax */
  push32((uint32_t)(EAX));
  /* 120bc4b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc4b4 call 0x120c09a0 */
  push32(0x120bc4b9u); f_120c09a0();
  /* 120bc4b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc4bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc4bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc4c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc4c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc4c7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc4ca push edx */
  push32((uint32_t)(EDX));
  /* 120bc4cb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 120bc4cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc4d0 push eax */
  push32((uint32_t)(EAX));
  /* 120bc4d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc4d3 call 0x120c09a0 */
  push32(0x120bc4d8u); f_120c09a0();
  /* 120bc4d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc4db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc4de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc4e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc4e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc4e6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc4e9 push edx */
  push32((uint32_t)(EDX));
  /* 120bc4ea push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 120bc4ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc4ef push eax */
  push32((uint32_t)(EAX));
  /* 120bc4f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc4f2 call 0x120c09a0 */
  push32(0x120bc4f7u); f_120c09a0();
  /* 120bc4f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc4fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc4fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc4ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc502 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc505 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc508 push edx */
  push32((uint32_t)(EDX));
  /* 120bc509 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 120bc50b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc50e push eax */
  push32((uint32_t)(EAX));
  /* 120bc50f push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc511 call 0x120c09a0 */
  push32(0x120bc516u); f_120c09a0();
  /* 120bc516 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc519 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc51c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc51e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc521 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc524 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc527 push edx */
  push32((uint32_t)(EDX));
  /* 120bc528 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 120bc52a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc52d push eax */
  push32((uint32_t)(EAX));
  /* 120bc52e push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc530 call 0x120c09a0 */
  push32(0x120bc535u); f_120c09a0();
  /* 120bc535 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc538 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc53b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc53d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc540 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc543 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc546 push edx */
  push32((uint32_t)(EDX));
  /* 120bc547 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 120bc549 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc54c push eax */
  push32((uint32_t)(EAX));
  /* 120bc54d push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc54f call 0x120c09a0 */
  push32(0x120bc554u); f_120c09a0();
  /* 120bc554 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc557 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc55a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc55c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc55f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc562 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc565 push edx */
  push32((uint32_t)(EDX));
  /* 120bc566 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 120bc568 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc56b push eax */
  push32((uint32_t)(EAX));
  /* 120bc56c push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc56e call 0x120c09a0 */
  push32(0x120bc573u); f_120c09a0();
  /* 120bc573 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc576 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc579 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc57b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc57e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc581 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc584 push edx */
  push32((uint32_t)(EDX));
  /* 120bc585 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 120bc587 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc58a push eax */
  push32((uint32_t)(EAX));
  /* 120bc58b push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc58d call 0x120c09a0 */
  push32(0x120bc592u); f_120c09a0();
  /* 120bc592 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc595 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc598 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc59a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc59d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc5a0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc5a3 push edx */
  push32((uint32_t)(EDX));
  /* 120bc5a4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 120bc5a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc5a9 push eax */
  push32((uint32_t)(EAX));
  /* 120bc5aa push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc5ac call 0x120c09a0 */
  push32(0x120bc5b1u); f_120c09a0();
  /* 120bc5b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc5b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc5b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc5b9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc5bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc5bf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc5c2 push edx */
  push32((uint32_t)(EDX));
  /* 120bc5c3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 120bc5c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc5c8 push eax */
  push32((uint32_t)(EAX));
  /* 120bc5c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc5cb call 0x120c09a0 */
  push32(0x120bc5d0u); f_120c09a0();
  /* 120bc5d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc5d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc5d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc5d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc5db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc5de add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc5e1 push edx */
  push32((uint32_t)(EDX));
  /* 120bc5e2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 120bc5e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc5e7 push eax */
  push32((uint32_t)(EAX));
  /* 120bc5e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc5ea call 0x120c09a0 */
  push32(0x120bc5efu); f_120c09a0();
  /* 120bc5ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc5f2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc5f5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc5f7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc5fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc5fd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc600 push edx */
  push32((uint32_t)(EDX));
  /* 120bc601 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 120bc603 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc606 push eax */
  push32((uint32_t)(EAX));
  /* 120bc607 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc609 call 0x120c09a0 */
  push32(0x120bc60eu); f_120c09a0();
  /* 120bc60e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc611 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc614 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc616 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc619 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc61c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc61f push edx */
  push32((uint32_t)(EDX));
  /* 120bc620 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 120bc622 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc625 push eax */
  push32((uint32_t)(EAX));
  /* 120bc626 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc628 call 0x120c09a0 */
  push32(0x120bc62du); f_120c09a0();
  /* 120bc62d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc630 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc633 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc635 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc638 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc63b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc63e push edx */
  push32((uint32_t)(EDX));
  /* 120bc63f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 120bc641 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc644 push eax */
  push32((uint32_t)(EAX));
  /* 120bc645 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc647 call 0x120c09a0 */
  push32(0x120bc64cu); f_120c09a0();
  /* 120bc64c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc64f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc652 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc654 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc657 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc65a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc65d push edx */
  push32((uint32_t)(EDX));
  /* 120bc65e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 120bc660 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc663 push eax */
  push32((uint32_t)(EAX));
  /* 120bc664 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc666 call 0x120c09a0 */
  push32(0x120bc66bu); f_120c09a0();
  /* 120bc66b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc66e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc671 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc673 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc676 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc679 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc67c push edx */
  push32((uint32_t)(EDX));
  /* 120bc67d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 120bc67f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc682 push eax */
  push32((uint32_t)(EAX));
  /* 120bc683 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc685 call 0x120c09a0 */
  push32(0x120bc68au); f_120c09a0();
  /* 120bc68a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc68d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc690 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc692 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc695 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc698 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc69b push edx */
  push32((uint32_t)(EDX));
  /* 120bc69c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 120bc69e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc6a1 push eax */
  push32((uint32_t)(EAX));
  /* 120bc6a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc6a4 call 0x120c09a0 */
  push32(0x120bc6a9u); f_120c09a0();
  /* 120bc6a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc6ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc6af or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc6b1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc6b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc6b7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc6ba push edx */
  push32((uint32_t)(EDX));
  /* 120bc6bb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 120bc6bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc6c0 push eax */
  push32((uint32_t)(EAX));
  /* 120bc6c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc6c3 call 0x120c09a0 */
  push32(0x120bc6c8u); f_120c09a0();
  /* 120bc6c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc6cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc6ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc6d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc6d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc6d6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc6d9 push edx */
  push32((uint32_t)(EDX));
  /* 120bc6da push 0x3a */
  push32((uint32_t)(0x3au));
  /* 120bc6dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc6df push eax */
  push32((uint32_t)(EAX));
  /* 120bc6e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc6e2 call 0x120c09a0 */
  push32(0x120bc6e7u); f_120c09a0();
  /* 120bc6e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc6ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc6ed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc6ef mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc6f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc6f5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc6f8 push edx */
  push32((uint32_t)(EDX));
  /* 120bc6f9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 120bc6fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc6fe push eax */
  push32((uint32_t)(EAX));
  /* 120bc6ff push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc701 call 0x120c09a0 */
  push32(0x120bc706u); f_120c09a0();
  /* 120bc706 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc709 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc70c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc70e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc711 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc714 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc717 push edx */
  push32((uint32_t)(EDX));
  /* 120bc718 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 120bc71a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc71d push eax */
  push32((uint32_t)(EAX));
  /* 120bc71e push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc720 call 0x120c09a0 */
  push32(0x120bc725u); f_120c09a0();
  /* 120bc725 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc728 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc72b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc72d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc730 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc733 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc736 push edx */
  push32((uint32_t)(EDX));
  /* 120bc737 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 120bc739 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc73c push eax */
  push32((uint32_t)(EAX));
  /* 120bc73d push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc73f call 0x120c09a0 */
  push32(0x120bc744u); f_120c09a0();
  /* 120bc744 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc747 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc74a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc74c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc74f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc752 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc758 push edx */
  push32((uint32_t)(EDX));
  /* 120bc759 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 120bc75b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc75e push eax */
  push32((uint32_t)(EAX));
  /* 120bc75f push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc761 call 0x120c09a0 */
  push32(0x120bc766u); f_120c09a0();
  /* 120bc766 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc769 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc76c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc76e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc771 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc774 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc77a push edx */
  push32((uint32_t)(EDX));
  /* 120bc77b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 120bc77d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc780 push eax */
  push32((uint32_t)(EAX));
  /* 120bc781 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc783 call 0x120c09a0 */
  push32(0x120bc788u); f_120c09a0();
  /* 120bc788 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc78b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc78e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc790 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc793 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc796 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc79c push edx */
  push32((uint32_t)(EDX));
  /* 120bc79d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 120bc79f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc7a2 push eax */
  push32((uint32_t)(EAX));
  /* 120bc7a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc7a5 call 0x120c09a0 */
  push32(0x120bc7aau); f_120c09a0();
  /* 120bc7aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc7ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc7b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc7b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc7b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc7b8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc7be push edx */
  push32((uint32_t)(EDX));
  /* 120bc7bf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 120bc7c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc7c4 push eax */
  push32((uint32_t)(EAX));
  /* 120bc7c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc7c7 call 0x120c09a0 */
  push32(0x120bc7ccu); f_120c09a0();
  /* 120bc7cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc7cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc7d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc7d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc7d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc7da add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc7e0 push edx */
  push32((uint32_t)(EDX));
  /* 120bc7e1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 120bc7e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc7e6 push eax */
  push32((uint32_t)(EAX));
  /* 120bc7e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc7e9 call 0x120c09a0 */
  push32(0x120bc7eeu); f_120c09a0();
  /* 120bc7ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc7f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc7f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc7f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc7f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc7fc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc802 push edx */
  push32((uint32_t)(EDX));
  /* 120bc803 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 120bc805 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc808 push eax */
  push32((uint32_t)(EAX));
  /* 120bc809 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc80b call 0x120c09a0 */
  push32(0x120bc810u); f_120c09a0();
  /* 120bc810 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc813 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc816 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc818 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc81b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc81e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc824 push edx */
  push32((uint32_t)(EDX));
  /* 120bc825 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 120bc827 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc82a push eax */
  push32((uint32_t)(EAX));
  /* 120bc82b push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc82d call 0x120c09a0 */
  push32(0x120bc832u); f_120c09a0();
  /* 120bc832 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc835 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc838 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc83a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc83d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc840 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc846 push edx */
  push32((uint32_t)(EDX));
  /* 120bc847 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 120bc849 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bc84c push eax */
  push32((uint32_t)(EAX));
  /* 120bc84d push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc84f call 0x120c09a0 */
  push32(0x120bc854u); f_120c09a0();
  /* 120bc854 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc857 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc85a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc85c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc85f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc862 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc868 push edx */
  push32((uint32_t)(EDX));
  /* 120bc869 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 120bc86b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bc86e push eax */
  push32((uint32_t)(EAX));
  /* 120bc86f push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc871 call 0x120c09a0 */
  push32(0x120bc876u); f_120c09a0();
  /* 120bc876 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc879 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc87c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc87e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc881 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc884 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc88a push edx */
  push32((uint32_t)(EDX));
  /* 120bc88b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 120bc88d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bc890 push eax */
  push32((uint32_t)(EAX));
  /* 120bc891 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc893 call 0x120c09a0 */
  push32(0x120bc898u); f_120c09a0();
  /* 120bc898 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc89b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc89e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc8a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc8a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc8a6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc8ac push edx */
  push32((uint32_t)(EDX));
  /* 120bc8ad push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 120bc8b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bc8b5 push eax */
  push32((uint32_t)(EAX));
  /* 120bc8b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bc8b8 call 0x120c09a0 */
  push32(0x120bc8bdu); f_120c09a0();
  /* 120bc8bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc8c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bc8c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bc8c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bc8c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_120bc8cb:;
  /* 120bc8cb mov esp, ebp */
  ESP = (EBP);
  /* 120bc8cd pop ebp */
  EBP = (pop32());
  /* 120bc8ce ret  */
  ESPCHK(0x120bc340u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x120bc8d0 (779 bytes, 265 insns) */
void f_120bc8d0(void) {
  FTRACE(0x120bc8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bc8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bc8d1 mov ebp, esp */
  EBP = (ESP);
  /* 120bc8d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bc8d7 jne 0x120bc8de */
  if (!C.zf) goto L_120bc8de;
  /* 120bc8d9 jmp 0x120bcbd9 */
  goto L_120bcbd9;
L_120bc8de:;
  /* 120bc8de push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc8e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc8e3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120bc8e6 push ecx */
  push32((uint32_t)(ECX));
  /* 120bc8e7 call 0x120ad710 */
  push32(0x120bc8ecu); f_120ad710();
  /* 120bc8ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc8ef push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc8f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc8f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120bc8f7 push eax */
  push32((uint32_t)(EAX));
  /* 120bc8f8 call 0x120ad710 */
  push32(0x120bc8fdu); f_120ad710();
  /* 120bc8fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc900 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc902 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc905 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120bc908 push edx */
  push32((uint32_t)(EDX));
  /* 120bc909 call 0x120ad710 */
  push32(0x120bc90eu); f_120ad710();
  /* 120bc90e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc911 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc916 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120bc919 push ecx */
  push32((uint32_t)(ECX));
  /* 120bc91a call 0x120ad710 */
  push32(0x120bc91fu); f_120ad710();
  /* 120bc91f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc922 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc924 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc927 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120bc92a push eax */
  push32((uint32_t)(EAX));
  /* 120bc92b call 0x120ad710 */
  push32(0x120bc930u); f_120ad710();
  /* 120bc930 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc933 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc935 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc938 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 120bc93b push edx */
  push32((uint32_t)(EDX));
  /* 120bc93c call 0x120ad710 */
  push32(0x120bc941u); f_120ad710();
  /* 120bc941 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc944 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc949 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120bc94b push ecx */
  push32((uint32_t)(ECX));
  /* 120bc94c call 0x120ad710 */
  push32(0x120bc951u); f_120ad710();
  /* 120bc951 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc954 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc956 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc959 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 120bc95c push eax */
  push32((uint32_t)(EAX));
  /* 120bc95d call 0x120ad710 */
  push32(0x120bc962u); f_120ad710();
  /* 120bc962 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc965 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc967 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc96a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 120bc96d push edx */
  push32((uint32_t)(EDX));
  /* 120bc96e call 0x120ad710 */
  push32(0x120bc973u); f_120ad710();
  /* 120bc973 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc976 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc978 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc97b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 120bc97e push ecx */
  push32((uint32_t)(ECX));
  /* 120bc97f call 0x120ad710 */
  push32(0x120bc984u); f_120ad710();
  /* 120bc984 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc987 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc989 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc98c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 120bc98f push eax */
  push32((uint32_t)(EAX));
  /* 120bc990 call 0x120ad710 */
  push32(0x120bc995u); f_120ad710();
  /* 120bc995 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc998 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc99a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc99d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 120bc9a0 push edx */
  push32((uint32_t)(EDX));
  /* 120bc9a1 call 0x120ad710 */
  push32(0x120bc9a6u); f_120ad710();
  /* 120bc9a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc9a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc9ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc9ae mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 120bc9b1 push ecx */
  push32((uint32_t)(ECX));
  /* 120bc9b2 call 0x120ad710 */
  push32(0x120bc9b7u); f_120ad710();
  /* 120bc9b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc9ba push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc9bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc9bf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120bc9c2 push eax */
  push32((uint32_t)(EAX));
  /* 120bc9c3 call 0x120ad710 */
  push32(0x120bc9c8u); f_120ad710();
  /* 120bc9c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc9cb push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc9cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc9d0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 120bc9d3 push edx */
  push32((uint32_t)(EDX));
  /* 120bc9d4 call 0x120ad710 */
  push32(0x120bc9d9u); f_120ad710();
  /* 120bc9d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc9dc push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc9de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc9e1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 120bc9e4 push ecx */
  push32((uint32_t)(ECX));
  /* 120bc9e5 call 0x120ad710 */
  push32(0x120bc9eau); f_120ad710();
  /* 120bc9ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc9ed push 2 */
  push32((uint32_t)(0x2u));
  /* 120bc9ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bc9f2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 120bc9f5 push eax */
  push32((uint32_t)(EAX));
  /* 120bc9f6 call 0x120ad710 */
  push32(0x120bc9fbu); f_120ad710();
  /* 120bc9fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bc9fe push 2 */
  push32((uint32_t)(0x2u));
  /* 120bca00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bca03 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 120bca06 push edx */
  push32((uint32_t)(EDX));
  /* 120bca07 call 0x120ad710 */
  push32(0x120bca0cu); f_120ad710();
  /* 120bca0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bca0f push 2 */
  push32((uint32_t)(0x2u));
  /* 120bca11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bca14 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 120bca17 push ecx */
  push32((uint32_t)(ECX));
  /* 120bca18 call 0x120ad710 */
  push32(0x120bca1du); f_120ad710();
  /* 120bca1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bca20 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bca22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bca25 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 120bca28 push eax */
  push32((uint32_t)(EAX));
  /* 120bca29 call 0x120ad710 */
  push32(0x120bca2eu); f_120ad710();
  /* 120bca2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bca31 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bca33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bca36 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 120bca39 push edx */
  push32((uint32_t)(EDX));
  /* 120bca3a call 0x120ad710 */
  push32(0x120bca3fu); f_120ad710();
  /* 120bca3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bca42 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bca44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bca47 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 120bca4a push ecx */
  push32((uint32_t)(ECX));
  /* 120bca4b call 0x120ad710 */
  push32(0x120bca50u); f_120ad710();
  /* 120bca50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bca53 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bca55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bca58 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 120bca5b push eax */
  push32((uint32_t)(EAX));
  /* 120bca5c call 0x120ad710 */
  push32(0x120bca61u); f_120ad710();
  /* 120bca61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bca64 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bca66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bca69 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 120bca6c push edx */
  push32((uint32_t)(EDX));
  /* 120bca6d call 0x120ad710 */
  push32(0x120bca72u); f_120ad710();
  /* 120bca72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bca75 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bca77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bca7a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 120bca7d push ecx */
  push32((uint32_t)(ECX));
  /* 120bca7e call 0x120ad710 */
  push32(0x120bca83u); f_120ad710();
  /* 120bca83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bca86 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bca88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bca8b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 120bca8e push eax */
  push32((uint32_t)(EAX));
  /* 120bca8f call 0x120ad710 */
  push32(0x120bca94u); f_120ad710();
  /* 120bca94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bca97 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bca99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bca9c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 120bca9f push edx */
  push32((uint32_t)(EDX));
  /* 120bcaa0 call 0x120ad710 */
  push32(0x120bcaa5u); f_120ad710();
  /* 120bcaa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcaa8 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcaaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcaad mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 120bcab0 push ecx */
  push32((uint32_t)(ECX));
  /* 120bcab1 call 0x120ad710 */
  push32(0x120bcab6u); f_120ad710();
  /* 120bcab6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcab9 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcabb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcabe mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 120bcac1 push eax */
  push32((uint32_t)(EAX));
  /* 120bcac2 call 0x120ad710 */
  push32(0x120bcac7u); f_120ad710();
  /* 120bcac7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcaca push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcacc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcacf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 120bcad2 push edx */
  push32((uint32_t)(EDX));
  /* 120bcad3 call 0x120ad710 */
  push32(0x120bcad8u); f_120ad710();
  /* 120bcad8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcadb push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcadd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcae0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 120bcae3 push ecx */
  push32((uint32_t)(ECX));
  /* 120bcae4 call 0x120ad710 */
  push32(0x120bcae9u); f_120ad710();
  /* 120bcae9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcaec push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcaee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcaf1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 120bcaf4 push eax */
  push32((uint32_t)(EAX));
  /* 120bcaf5 call 0x120ad710 */
  push32(0x120bcafau); f_120ad710();
  /* 120bcafa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcafd push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcaff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcb02 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 120bcb08 push edx */
  push32((uint32_t)(EDX));
  /* 120bcb09 call 0x120ad710 */
  push32(0x120bcb0eu); f_120ad710();
  /* 120bcb0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcb11 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcb13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcb16 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 120bcb1c push ecx */
  push32((uint32_t)(ECX));
  /* 120bcb1d call 0x120ad710 */
  push32(0x120bcb22u); f_120ad710();
  /* 120bcb22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcb25 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcb27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcb2a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 120bcb30 push eax */
  push32((uint32_t)(EAX));
  /* 120bcb31 call 0x120ad710 */
  push32(0x120bcb36u); f_120ad710();
  /* 120bcb36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcb39 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcb3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcb3e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 120bcb44 push edx */
  push32((uint32_t)(EDX));
  /* 120bcb45 call 0x120ad710 */
  push32(0x120bcb4au); f_120ad710();
  /* 120bcb4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcb4d push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcb4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcb52 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 120bcb58 push ecx */
  push32((uint32_t)(ECX));
  /* 120bcb59 call 0x120ad710 */
  push32(0x120bcb5eu); f_120ad710();
  /* 120bcb5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcb61 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcb63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcb66 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 120bcb6c push eax */
  push32((uint32_t)(EAX));
  /* 120bcb6d call 0x120ad710 */
  push32(0x120bcb72u); f_120ad710();
  /* 120bcb72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcb75 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcb77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcb7a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 120bcb80 push edx */
  push32((uint32_t)(EDX));
  /* 120bcb81 call 0x120ad710 */
  push32(0x120bcb86u); f_120ad710();
  /* 120bcb86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcb89 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcb8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcb8e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 120bcb94 push ecx */
  push32((uint32_t)(ECX));
  /* 120bcb95 call 0x120ad710 */
  push32(0x120bcb9au); f_120ad710();
  /* 120bcb9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcb9d push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcb9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcba2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 120bcba8 push eax */
  push32((uint32_t)(EAX));
  /* 120bcba9 call 0x120ad710 */
  push32(0x120bcbaeu); f_120ad710();
  /* 120bcbae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcbb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcbb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcbb6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 120bcbbc push edx */
  push32((uint32_t)(EDX));
  /* 120bcbbd call 0x120ad710 */
  push32(0x120bcbc2u); f_120ad710();
  /* 120bcbc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcbc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcbc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcbca mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 120bcbd0 push ecx */
  push32((uint32_t)(ECX));
  /* 120bcbd1 call 0x120ad710 */
  push32(0x120bcbd6u); f_120ad710();
  /* 120bcbd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120bcbd9:;
  /* 120bcbd9 pop ebp */
  EBP = (pop32());
  /* 120bcbda ret  */
  ESPCHK(0x120bc8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cbe0 @ 0x120bcbe0 (678 bytes, 180 insns) */
void f_120bcbe0(void) {
  FTRACE(0x120bcbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bcbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bcbe1 mov ebp, esp */
  EBP = (ESP);
  /* 120bcbe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bcbe6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120bcbed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bcbef mov ax, word ptr [0x120e1436] */
  AX = (r16((uint32_t)(0x120e1436)));
  /* 120bcbf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bcbf8 cmp dword ptr [0x120e13e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e13e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bcbff je 0x120bcd5a */
  if (C.zf) goto L_120bcd5a;
  /* 120bcc05 push 0x120e1404 */
  push32((uint32_t)(0x120e1404u));
  /* 120bcc0a push 0xe */
  push32((uint32_t)(0xeu));
  /* 120bcc0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bcc0f push ecx */
  push32((uint32_t)(ECX));
  /* 120bcc10 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bcc12 call 0x120c09a0 */
  push32(0x120bcc17u); f_120c09a0();
  /* 120bcc17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcc1a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bcc1d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 120bcc1f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120bcc22 push 0x120e1408 */
  push32((uint32_t)(0x120e1408u));
  /* 120bcc27 push 0xf */
  push32((uint32_t)(0xfu));
  /* 120bcc29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bcc2c push eax */
  push32((uint32_t)(EAX));
  /* 120bcc2d push 1 */
  push32((uint32_t)(0x1u));
  /* 120bcc2f call 0x120c09a0 */
  push32(0x120bcc34u); f_120c09a0();
  /* 120bcc34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcc37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bcc3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bcc3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bcc3f push 0x120e140c */
  push32((uint32_t)(0x120e140cu));
  /* 120bcc44 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 120bcc46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bcc49 push edx */
  push32((uint32_t)(EDX));
  /* 120bcc4a push 1 */
  push32((uint32_t)(0x1u));
  /* 120bcc4c call 0x120c09a0 */
  push32(0x120bcc51u); f_120c09a0();
  /* 120bcc51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcc54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bcc57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bcc59 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bcc5c mov edx, dword ptr [0x120e140c] */
  EDX = (r32((uint32_t)(0x120e140c)));
  /* 120bcc62 push edx */
  push32((uint32_t)(EDX));
  /* 120bcc63 call 0x120bce90 */
  push32(0x120bcc68u); f_120bce90();
  /* 120bcc68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcc6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bcc6f je 0x120bccc9 */
  if (C.zf) goto L_120bccc9;
  /* 120bcc71 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcc73 mov eax, dword ptr [0x120e1404] */
  EAX = (r32((uint32_t)(0x120e1404)));
  /* 120bcc78 push eax */
  push32((uint32_t)(EAX));
  /* 120bcc79 call 0x120ad710 */
  push32(0x120bcc7eu); f_120ad710();
  /* 120bcc7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcc81 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcc83 mov ecx, dword ptr [0x120e1408] */
  ECX = (r32((uint32_t)(0x120e1408)));
  /* 120bcc89 push ecx */
  push32((uint32_t)(ECX));
  /* 120bcc8a call 0x120ad710 */
  push32(0x120bcc8fu); f_120ad710();
  /* 120bcc8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcc92 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcc94 mov edx, dword ptr [0x120e140c] */
  EDX = (r32((uint32_t)(0x120e140c)));
  /* 120bcc9a push edx */
  push32((uint32_t)(EDX));
  /* 120bcc9b call 0x120ad710 */
  push32(0x120bcca0u); f_120ad710();
  /* 120bcca0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcca3 mov dword ptr [0x120e1404], 0 */
  w32((uint32_t)(0x120e1404), (0x0u));
  /* 120bccad mov dword ptr [0x120e1408], 0 */
  w32((uint32_t)(0x120e1408), (0x0u));
  /* 120bccb7 mov dword ptr [0x120e140c], 0 */
  w32((uint32_t)(0x120e140c), (0x0u));
  /* 120bccc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bccc4 jmp 0x120bce82 */
  goto L_120bce82;
L_120bccc9:;
  /* 120bccc9 mov eax, dword ptr [0x120e03e0] */
  EAX = (r32((uint32_t)(0x120e03e0)));
  /* 120bccce cmp dword ptr [eax], 0x120e03a8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x120e03a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bccd4 je 0x120bcd10 */
  if (C.zf) goto L_120bcd10;
  /* 120bccd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bccd8 mov ecx, dword ptr [0x120e03e0] */
  ECX = (r32((uint32_t)(0x120e03e0)));
  /* 120bccde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120bcce0 push edx */
  push32((uint32_t)(EDX));
  /* 120bcce1 call 0x120ad710 */
  push32(0x120bcce6u); f_120ad710();
  /* 120bcce6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcce9 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcceb mov eax, dword ptr [0x120e03e0] */
  EAX = (r32((uint32_t)(0x120e03e0)));
  /* 120bccf0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120bccf3 push ecx */
  push32((uint32_t)(ECX));
  /* 120bccf4 call 0x120ad710 */
  push32(0x120bccf9u); f_120ad710();
  /* 120bccf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bccfc push 2 */
  push32((uint32_t)(0x2u));
  /* 120bccfe mov edx, dword ptr [0x120e03e0] */
  EDX = (r32((uint32_t)(0x120e03e0)));
  /* 120bcd04 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120bcd07 push eax */
  push32((uint32_t)(EAX));
  /* 120bcd08 call 0x120ad710 */
  push32(0x120bcd0du); f_120ad710();
  /* 120bcd0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120bcd10:;
  /* 120bcd10 mov ecx, dword ptr [0x120e03e0] */
  ECX = (r32((uint32_t)(0x120e03e0)));
  /* 120bcd16 mov edx, dword ptr [0x120e1404] */
  EDX = (r32((uint32_t)(0x120e1404)));
  /* 120bcd1c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120bcd1e mov eax, dword ptr [0x120e03e0] */
  EAX = (r32((uint32_t)(0x120e03e0)));
  /* 120bcd23 mov ecx, dword ptr [0x120e1408] */
  ECX = (r32((uint32_t)(0x120e1408)));
  /* 120bcd29 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 120bcd2c mov edx, dword ptr [0x120e03e0] */
  EDX = (r32((uint32_t)(0x120e03e0)));
  /* 120bcd32 mov eax, dword ptr [0x120e140c] */
  EAX = (r32((uint32_t)(0x120e140c)));
  /* 120bcd37 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 120bcd3a mov ecx, dword ptr [0x120e03e0] */
  ECX = (r32((uint32_t)(0x120e03e0)));
  /* 120bcd40 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120bcd42 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120bcd44 mov byte ptr [0x120df014], al */
  w8((uint32_t)(0x120df014), (AL));
  /* 120bcd49 mov dword ptr [0x120df018], 1 */
  w32((uint32_t)(0x120df018), (0x1u));
  /* 120bcd53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bcd55 jmp 0x120bce82 */
  goto L_120bce82;
L_120bcd5a:;
  /* 120bcd5a push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcd5c mov ecx, dword ptr [0x120e1404] */
  ECX = (r32((uint32_t)(0x120e1404)));
  /* 120bcd62 push ecx */
  push32((uint32_t)(ECX));
  /* 120bcd63 call 0x120ad710 */
  push32(0x120bcd68u); f_120ad710();
  /* 120bcd68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcd6b push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcd6d mov edx, dword ptr [0x120e1408] */
  EDX = (r32((uint32_t)(0x120e1408)));
  /* 120bcd73 push edx */
  push32((uint32_t)(EDX));
  /* 120bcd74 call 0x120ad710 */
  push32(0x120bcd79u); f_120ad710();
  /* 120bcd79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcd7c push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcd7e mov eax, dword ptr [0x120e140c] */
  EAX = (r32((uint32_t)(0x120e140c)));
  /* 120bcd83 push eax */
  push32((uint32_t)(EAX));
  /* 120bcd84 call 0x120ad710 */
  push32(0x120bcd89u); f_120ad710();
  /* 120bcd89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcd8c mov dword ptr [0x120e1404], 0 */
  w32((uint32_t)(0x120e1404), (0x0u));
  /* 120bcd96 mov dword ptr [0x120e1408], 0 */
  w32((uint32_t)(0x120e1408), (0x0u));
  /* 120bcda0 mov dword ptr [0x120e140c], 0 */
  w32((uint32_t)(0x120e140c), (0x0u));
  /* 120bcdaa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 120bcdaf push 0x120dc460 */
  push32((uint32_t)(0x120dc460u));
  /* 120bcdb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcdb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcdb8 call 0x120acc80 */
  push32(0x120bcdbdu); f_120acc80();
  /* 120bcdbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcdc0 mov ecx, dword ptr [0x120e03e0] */
  ECX = (r32((uint32_t)(0x120e03e0)));
  /* 120bcdc6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120bcdc8 mov edx, dword ptr [0x120e03e0] */
  EDX = (r32((uint32_t)(0x120e03e0)));
  /* 120bcdce cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bcdd1 jne 0x120bcddb */
  if (!C.zf) goto L_120bcddb;
  /* 120bcdd3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bcdd6 jmp 0x120bce82 */
  goto L_120bce82;
L_120bcddb:;
  /* 120bcddb push 0x120dc400 */
  push32((uint32_t)(0x120dc400u));
  /* 120bcde0 mov eax, dword ptr [0x120e03e0] */
  EAX = (r32((uint32_t)(0x120e03e0)));
  /* 120bcde5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120bcde7 push ecx */
  push32((uint32_t)(ECX));
  /* 120bcde8 call 0x120b1390 */
  push32(0x120bcdedu); f_120b1390();
  /* 120bcded add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcdf0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 120bcdf5 push 0x120dc460 */
  push32((uint32_t)(0x120dc460u));
  /* 120bcdfa push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcdfc push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcdfe call 0x120acc80 */
  push32(0x120bce03u); f_120acc80();
  /* 120bce03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bce06 mov edx, dword ptr [0x120e03e0] */
  EDX = (r32((uint32_t)(0x120e03e0)));
  /* 120bce0c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 120bce0f mov eax, dword ptr [0x120e03e0] */
  EAX = (r32((uint32_t)(0x120e03e0)));
  /* 120bce14 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bce18 jne 0x120bce1f */
  if (!C.zf) goto L_120bce1f;
  /* 120bce1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bce1d jmp 0x120bce82 */
  goto L_120bce82;
L_120bce1f:;
  /* 120bce1f mov ecx, dword ptr [0x120e03e0] */
  ECX = (r32((uint32_t)(0x120e03e0)));
  /* 120bce25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120bce28 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 120bce2b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 120bce30 push 0x120dc460 */
  push32((uint32_t)(0x120dc460u));
  /* 120bce35 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bce37 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bce39 call 0x120acc80 */
  push32(0x120bce3eu); f_120acc80();
  /* 120bce3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bce41 mov ecx, dword ptr [0x120e03e0] */
  ECX = (r32((uint32_t)(0x120e03e0)));
  /* 120bce47 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 120bce4a mov edx, dword ptr [0x120e03e0] */
  EDX = (r32((uint32_t)(0x120e03e0)));
  /* 120bce50 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bce54 jne 0x120bce5b */
  if (!C.zf) goto L_120bce5b;
  /* 120bce56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bce59 jmp 0x120bce82 */
  goto L_120bce82;
L_120bce5b:;
  /* 120bce5b mov eax, dword ptr [0x120e03e0] */
  EAX = (r32((uint32_t)(0x120e03e0)));
  /* 120bce60 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120bce63 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 120bce66 mov edx, dword ptr [0x120e03e0] */
  EDX = (r32((uint32_t)(0x120e03e0)));
  /* 120bce6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120bce6e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120bce70 mov byte ptr [0x120df014], cl */
  w8((uint32_t)(0x120df014), (CL));
  /* 120bce76 mov dword ptr [0x120df018], 1 */
  w32((uint32_t)(0x120df018), (0x1u));
  /* 120bce80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120bce82:;
  /* 120bce82 mov esp, ebp */
  ESP = (EBP);
  /* 120bce84 pop ebp */
  EBP = (pop32());
  /* 120bce85 ret  */
  ESPCHK(0x120bcbe0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x120bce90 (125 bytes, 49 insns) */
void f_120bce90(void) {
  FTRACE(0x120bce90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bce90 push ebp */
  push32((uint32_t)(EBP));
  /* 120bce91 mov ebp, esp */
  EBP = (ESP);
  /* 120bce93 push ecx */
  push32((uint32_t)(ECX));
L_120bce94:;
  /* 120bce94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bce97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120bce9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bce9c je 0x120bcf09 */
  if (C.zf) goto L_120bcf09;
  /* 120bce9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcea1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120bcea4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bcea7 jl 0x120bcecd */
  if ((C.sf!=C.of)) goto L_120bcecd;
  /* 120bcea9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bceac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120bceaf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bceb2 jg 0x120bcecd */
  if ((!C.zf&&C.sf==C.of)) goto L_120bcecd;
  /* 120bceb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bceb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120bceba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bcebd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcec0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 120bcec2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcec5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcec8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120bcecb jmp 0x120bcf07 */
  goto L_120bcf07;
L_120bcecd:;
  /* 120bcecd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bced0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120bced3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bced6 jne 0x120bcefe */
  if (!C.zf) goto L_120bcefe;
  /* 120bced8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcedb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120bcede:;
  /* 120bcede mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bcee1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bcee4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 120bcee7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 120bcee9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bceec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bceef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120bcef2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bcef5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120bcef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bcefa jne 0x120bcede */
  if (!C.zf) goto L_120bcede;
  /* 120bcefc jmp 0x120bcf07 */
  goto L_120bcf07;
L_120bcefe:;
  /* 120bcefe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bcf01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcf04 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_120bcf07:;
  /* 120bcf07 jmp 0x120bce94 */
  goto L_120bce94;
L_120bcf09:;
  /* 120bcf09 mov esp, ebp */
  ESP = (EBP);
  /* 120bcf0b pop ebp */
  EBP = (pop32());
  /* 120bcf0c ret  */
  ESPCHK(0x120bce90u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cf10 @ 0x120bcf10 (304 bytes, 85 insns) */
void f_120bcf10(void) {
  FTRACE(0x120bcf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bcf10 push ebp */
  push32((uint32_t)(EBP));
  /* 120bcf11 mov ebp, esp */
  EBP = (ESP);
  /* 120bcf13 push ecx */
  push32((uint32_t)(ECX));
  /* 120bcf14 cmp dword ptr [0x120e13e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e13e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bcf1b je 0x120bcfdc */
  if (C.zf) goto L_120bcfdc;
  /* 120bcf21 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 120bcf23 push 0x120dc46c */
  push32((uint32_t)(0x120dc46cu));
  /* 120bcf28 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcf2a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 120bcf2c push 1 */
  push32((uint32_t)(0x1u));
  /* 120bcf2e call 0x120ad090 */
  push32(0x120bcf33u); f_120ad090();
  /* 120bcf33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcf36 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bcf39 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bcf3d jne 0x120bcf49 */
  if (!C.zf) goto L_120bcf49;
  /* 120bcf3f mov eax, 1 */
  EAX = (0x1u);
  /* 120bcf44 jmp 0x120bd03c */
  goto L_120bd03c;
L_120bcf49:;
  /* 120bcf49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bcf4c push eax */
  push32((uint32_t)(EAX));
  /* 120bcf4d call 0x120bd040 */
  push32(0x120bcf52u); f_120bd040();
  /* 120bcf52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcf55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bcf57 je 0x120bcf7d */
  if (C.zf) goto L_120bcf7d;
  /* 120bcf59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bcf5c push ecx */
  push32((uint32_t)(ECX));
  /* 120bcf5d call 0x120bd2d0 */
  push32(0x120bcf62u); f_120bd2d0();
  /* 120bcf62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcf65 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcf67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bcf6a push edx */
  push32((uint32_t)(EDX));
  /* 120bcf6b call 0x120ad710 */
  push32(0x120bcf70u); f_120ad710();
  /* 120bcf70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcf73 mov eax, 1 */
  EAX = (0x1u);
  /* 120bcf78 jmp 0x120bd03c */
  goto L_120bd03c;
L_120bcf7d:;
  /* 120bcf7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bcf80 mov ecx, dword ptr [0x120e03e0] */
  ECX = (r32((uint32_t)(0x120e03e0)));
  /* 120bcf86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120bcf88 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120bcf8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bcf8d mov ecx, dword ptr [0x120e03e0] */
  ECX = (r32((uint32_t)(0x120e03e0)));
  /* 120bcf93 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120bcf96 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 120bcf99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bcf9c mov ecx, dword ptr [0x120e03e0] */
  ECX = (r32((uint32_t)(0x120e03e0)));
  /* 120bcfa2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120bcfa5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 120bcfa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bcfab mov dword ptr [0x120e03e0], eax */
  w32((uint32_t)(0x120e03e0), (EAX));
  /* 120bcfb0 mov ecx, dword ptr [0x120e1410] */
  ECX = (r32((uint32_t)(0x120e1410)));
  /* 120bcfb6 push ecx */
  push32((uint32_t)(ECX));
  /* 120bcfb7 call 0x120bd2d0 */
  push32(0x120bcfbcu); f_120bd2d0();
  /* 120bcfbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcfbf push 2 */
  push32((uint32_t)(0x2u));
  /* 120bcfc1 mov edx, dword ptr [0x120e1410] */
  EDX = (r32((uint32_t)(0x120e1410)));
  /* 120bcfc7 push edx */
  push32((uint32_t)(EDX));
  /* 120bcfc8 call 0x120ad710 */
  push32(0x120bcfcdu); f_120ad710();
  /* 120bcfcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bcfd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bcfd3 mov dword ptr [0x120e1410], eax */
  w32((uint32_t)(0x120e1410), (EAX));
  /* 120bcfd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bcfda jmp 0x120bd03c */
  goto L_120bd03c;
L_120bcfdc:;
  /* 120bcfdc mov ecx, dword ptr [0x120e03e0] */
  ECX = (r32((uint32_t)(0x120e03e0)));
  /* 120bcfe2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120bcfe4 mov dword ptr [0x120e03b0], edx */
  w32((uint32_t)(0x120e03b0), (EDX));
  /* 120bcfea mov eax, dword ptr [0x120e03e0] */
  EAX = (r32((uint32_t)(0x120e03e0)));
  /* 120bcfef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120bcff2 mov dword ptr [0x120e03b4], ecx */
  w32((uint32_t)(0x120e03b4), (ECX));
  /* 120bcff8 mov edx, dword ptr [0x120e03e0] */
  EDX = (r32((uint32_t)(0x120e03e0)));
  /* 120bcffe mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120bd001 mov dword ptr [0x120e03b8], eax */
  w32((uint32_t)(0x120e03b8), (EAX));
  /* 120bd006 mov dword ptr [0x120e03e0], 0x120e03b0 */
  w32((uint32_t)(0x120e03e0), (0x120e03b0u));
  /* 120bd010 mov ecx, dword ptr [0x120e1410] */
  ECX = (r32((uint32_t)(0x120e1410)));
  /* 120bd016 push ecx */
  push32((uint32_t)(ECX));
  /* 120bd017 call 0x120bd2d0 */
  push32(0x120bd01cu); f_120bd2d0();
  /* 120bd01c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd01f push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd021 mov edx, dword ptr [0x120e1410] */
  EDX = (r32((uint32_t)(0x120e1410)));
  /* 120bd027 push edx */
  push32((uint32_t)(EDX));
  /* 120bd028 call 0x120ad710 */
  push32(0x120bd02du); f_120ad710();
  /* 120bd02d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd030 mov dword ptr [0x120e1410], 0 */
  w32((uint32_t)(0x120e1410), (0x0u));
  /* 120bd03a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120bd03c:;
  /* 120bd03c mov esp, ebp */
  ESP = (EBP);
  /* 120bd03e pop ebp */
  EBP = (pop32());
  /* 120bd03f ret  */
  ESPCHK(0x120bcf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d040 @ 0x120bd040 (525 bytes, 200 insns) */
void f_120bd040(void) {
  FTRACE(0x120bd040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bd040 push ebp */
  push32((uint32_t)(EBP));
  /* 120bd041 mov ebp, esp */
  EBP = (ESP);
  /* 120bd043 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bd046 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120bd04d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bd04f mov ax, word ptr [0x120e1430] */
  AX = (r16((uint32_t)(0x120e1430)));
  /* 120bd055 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bd058 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd05c jne 0x120bd066 */
  if (!C.zf) goto L_120bd066;
  /* 120bd05e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bd061 jmp 0x120bd249 */
  goto L_120bd249;
L_120bd066:;
  /* 120bd066 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd069 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd06c push ecx */
  push32((uint32_t)(ECX));
  /* 120bd06d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 120bd06f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd072 push edx */
  push32((uint32_t)(EDX));
  /* 120bd073 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bd075 call 0x120c09a0 */
  push32(0x120bd07au); f_120c09a0();
  /* 120bd07a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd07d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bd080 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd082 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bd085 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd088 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd08b push edx */
  push32((uint32_t)(EDX));
  /* 120bd08c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 120bd08e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd091 push eax */
  push32((uint32_t)(EAX));
  /* 120bd092 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bd094 call 0x120c09a0 */
  push32(0x120bd099u); f_120c09a0();
  /* 120bd099 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd09c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bd09f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd0a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bd0a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd0a7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd0aa push edx */
  push32((uint32_t)(EDX));
  /* 120bd0ab push 0x16 */
  push32((uint32_t)(0x16u));
  /* 120bd0ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd0b0 push eax */
  push32((uint32_t)(EAX));
  /* 120bd0b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bd0b3 call 0x120c09a0 */
  push32(0x120bd0b8u); f_120c09a0();
  /* 120bd0b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd0bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bd0be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd0c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bd0c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd0c6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd0c9 push edx */
  push32((uint32_t)(EDX));
  /* 120bd0ca push 0x17 */
  push32((uint32_t)(0x17u));
  /* 120bd0cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd0cf push eax */
  push32((uint32_t)(EAX));
  /* 120bd0d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bd0d2 call 0x120c09a0 */
  push32(0x120bd0d7u); f_120c09a0();
  /* 120bd0d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd0da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bd0dd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd0df mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bd0e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd0e5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd0e8 push edx */
  push32((uint32_t)(EDX));
  /* 120bd0e9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 120bd0eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd0ee push eax */
  push32((uint32_t)(EAX));
  /* 120bd0ef push 1 */
  push32((uint32_t)(0x1u));
  /* 120bd0f1 call 0x120c09a0 */
  push32(0x120bd0f6u); f_120c09a0();
  /* 120bd0f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd0f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bd0fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd0fe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bd101 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd104 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120bd107 push eax */
  push32((uint32_t)(EAX));
  /* 120bd108 call 0x120bd250 */
  push32(0x120bd10du); f_120bd250();
  /* 120bd10d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd110 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd113 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd116 push ecx */
  push32((uint32_t)(ECX));
  /* 120bd117 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 120bd119 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd11c push edx */
  push32((uint32_t)(EDX));
  /* 120bd11d push 1 */
  push32((uint32_t)(0x1u));
  /* 120bd11f call 0x120c09a0 */
  push32(0x120bd124u); f_120c09a0();
  /* 120bd124 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd127 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bd12a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd12c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bd12f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd132 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd135 push edx */
  push32((uint32_t)(EDX));
  /* 120bd136 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 120bd138 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd13b push eax */
  push32((uint32_t)(EAX));
  /* 120bd13c push 1 */
  push32((uint32_t)(0x1u));
  /* 120bd13e call 0x120c09a0 */
  push32(0x120bd143u); f_120c09a0();
  /* 120bd143 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd146 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bd149 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd14b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bd14e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd151 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd154 push edx */
  push32((uint32_t)(EDX));
  /* 120bd155 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 120bd157 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd15a push eax */
  push32((uint32_t)(EAX));
  /* 120bd15b push 0 */
  push32((uint32_t)(0x0u));
  /* 120bd15d call 0x120c09a0 */
  push32(0x120bd162u); f_120c09a0();
  /* 120bd162 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd165 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bd168 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd16a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bd16d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd170 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd173 push edx */
  push32((uint32_t)(EDX));
  /* 120bd174 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120bd176 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd179 push eax */
  push32((uint32_t)(EAX));
  /* 120bd17a push 0 */
  push32((uint32_t)(0x0u));
  /* 120bd17c call 0x120c09a0 */
  push32(0x120bd181u); f_120c09a0();
  /* 120bd181 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd184 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bd187 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd189 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bd18c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd18f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd192 push edx */
  push32((uint32_t)(EDX));
  /* 120bd193 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 120bd195 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd198 push eax */
  push32((uint32_t)(EAX));
  /* 120bd199 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bd19b call 0x120c09a0 */
  push32(0x120bd1a0u); f_120c09a0();
  /* 120bd1a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd1a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bd1a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd1a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bd1ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd1ae add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd1b1 push edx */
  push32((uint32_t)(EDX));
  /* 120bd1b2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 120bd1b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd1b7 push eax */
  push32((uint32_t)(EAX));
  /* 120bd1b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bd1ba call 0x120c09a0 */
  push32(0x120bd1bfu); f_120c09a0();
  /* 120bd1bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd1c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bd1c5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd1c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bd1ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd1cd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd1d0 push edx */
  push32((uint32_t)(EDX));
  /* 120bd1d1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 120bd1d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd1d6 push eax */
  push32((uint32_t)(EAX));
  /* 120bd1d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bd1d9 call 0x120c09a0 */
  push32(0x120bd1deu); f_120c09a0();
  /* 120bd1de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd1e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bd1e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd1e6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bd1e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd1ec add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd1ef push edx */
  push32((uint32_t)(EDX));
  /* 120bd1f0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 120bd1f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd1f5 push eax */
  push32((uint32_t)(EAX));
  /* 120bd1f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bd1f8 call 0x120c09a0 */
  push32(0x120bd1fdu); f_120c09a0();
  /* 120bd1fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd200 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bd203 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd205 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bd208 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd20b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd20e push edx */
  push32((uint32_t)(EDX));
  /* 120bd20f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 120bd211 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd214 push eax */
  push32((uint32_t)(EAX));
  /* 120bd215 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bd217 call 0x120c09a0 */
  push32(0x120bd21cu); f_120c09a0();
  /* 120bd21c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd21f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bd222 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd224 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bd227 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd22a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd22d push edx */
  push32((uint32_t)(EDX));
  /* 120bd22e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 120bd230 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd233 push eax */
  push32((uint32_t)(EAX));
  /* 120bd234 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bd236 call 0x120c09a0 */
  push32(0x120bd23bu); f_120c09a0();
  /* 120bd23b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd23e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bd241 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd243 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bd246 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_120bd249:;
  /* 120bd249 mov esp, ebp */
  ESP = (EBP);
  /* 120bd24b pop ebp */
  EBP = (pop32());
  /* 120bd24c ret  */
  ESPCHK(0x120bd040u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x120bd250 (125 bytes, 49 insns) */
void f_120bd250(void) {
  FTRACE(0x120bd250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bd250 push ebp */
  push32((uint32_t)(EBP));
  /* 120bd251 mov ebp, esp */
  EBP = (ESP);
  /* 120bd253 push ecx */
  push32((uint32_t)(ECX));
L_120bd254:;
  /* 120bd254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd257 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120bd25a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bd25c je 0x120bd2c9 */
  if (C.zf) goto L_120bd2c9;
  /* 120bd25e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd261 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120bd264 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd267 jl 0x120bd28d */
  if ((C.sf!=C.of)) goto L_120bd28d;
  /* 120bd269 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd26c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120bd26f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd272 jg 0x120bd28d */
  if ((!C.zf&&C.sf==C.of)) goto L_120bd28d;
  /* 120bd274 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd277 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120bd27a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bd27d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd280 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 120bd282 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd285 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd288 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120bd28b jmp 0x120bd2c7 */
  goto L_120bd2c7;
L_120bd28d:;
  /* 120bd28d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd290 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120bd293 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd296 jne 0x120bd2be */
  if (!C.zf) goto L_120bd2be;
  /* 120bd298 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd29b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120bd29e:;
  /* 120bd29e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd2a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd2a4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 120bd2a7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 120bd2a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd2ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd2af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120bd2b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd2b5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120bd2b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bd2ba jne 0x120bd29e */
  if (!C.zf) goto L_120bd29e;
  /* 120bd2bc jmp 0x120bd2c7 */
  goto L_120bd2c7;
L_120bd2be:;
  /* 120bd2be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd2c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd2c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_120bd2c7:;
  /* 120bd2c7 jmp 0x120bd254 */
  goto L_120bd254;
L_120bd2c9:;
  /* 120bd2c9 mov esp, ebp */
  ESP = (EBP);
  /* 120bd2cb pop ebp */
  EBP = (pop32());
  /* 120bd2cc ret  */
  ESPCHK(0x120bd250u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d2d0 @ 0x120bd2d0 (147 bytes, 52 insns) */
void f_120bd2d0(void) {
  FTRACE(0x120bd2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bd2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bd2d1 mov ebp, esp */
  EBP = (ESP);
  /* 120bd2d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd2d7 jne 0x120bd2de */
  if (!C.zf) goto L_120bd2de;
  /* 120bd2d9 jmp 0x120bd361 */
  goto L_120bd361;
L_120bd2de:;
  /* 120bd2de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd2e1 cmp dword ptr [eax + 0xc], 0x120e146c */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x120e146cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd2e8 je 0x120bd361 */
  if (C.zf) goto L_120bd361;
  /* 120bd2ea push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd2ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd2ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120bd2f2 push edx */
  push32((uint32_t)(EDX));
  /* 120bd2f3 call 0x120ad710 */
  push32(0x120bd2f8u); f_120ad710();
  /* 120bd2f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd2fb push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd2fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd300 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120bd303 push ecx */
  push32((uint32_t)(ECX));
  /* 120bd304 call 0x120ad710 */
  push32(0x120bd309u); f_120ad710();
  /* 120bd309 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd30c push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd30e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd311 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120bd314 push eax */
  push32((uint32_t)(EAX));
  /* 120bd315 call 0x120ad710 */
  push32(0x120bd31au); f_120ad710();
  /* 120bd31a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd31d push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd31f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd322 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 120bd325 push edx */
  push32((uint32_t)(EDX));
  /* 120bd326 call 0x120ad710 */
  push32(0x120bd32bu); f_120ad710();
  /* 120bd32b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd32e push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd330 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd333 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120bd336 push ecx */
  push32((uint32_t)(ECX));
  /* 120bd337 call 0x120ad710 */
  push32(0x120bd33cu); f_120ad710();
  /* 120bd33c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd33f push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd341 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd344 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 120bd347 push eax */
  push32((uint32_t)(EAX));
  /* 120bd348 call 0x120ad710 */
  push32(0x120bd34du); f_120ad710();
  /* 120bd34d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd350 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd352 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd355 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 120bd358 push edx */
  push32((uint32_t)(EDX));
  /* 120bd359 call 0x120ad710 */
  push32(0x120bd35eu); f_120ad710();
  /* 120bd35e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120bd361:;
  /* 120bd361 pop ebp */
  EBP = (pop32());
  /* 120bd362 ret  */
  ESPCHK(0x120bd2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d370 @ 0x120bd370 (928 bytes, 284 insns) */
void f_120bd370(void) {
  FTRACE(0x120bd370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bd370 push ebp */
  push32((uint32_t)(EBP));
  /* 120bd371 mov ebp, esp */
  EBP = (ESP);
  /* 120bd373 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bd376 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 120bd37d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 120bd384 cmp dword ptr [0x120e13e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e13e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd38b je 0x120bd6c1 */
  if (C.zf) goto L_120bd6c1;
  /* 120bd391 cmp dword ptr [0x120e13f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e13f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd398 jne 0x120bd3c0 */
  if (!C.zf) goto L_120bd3c0;
  /* 120bd39a push 0x120e13f0 */
  push32((uint32_t)(0x120e13f0u));
  /* 120bd39f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 120bd3a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bd3a6 mov ax, word ptr [0x120e1428] */
  AX = (r16((uint32_t)(0x120e1428)));
  /* 120bd3ac push eax */
  push32((uint32_t)(EAX));
  /* 120bd3ad push 0 */
  push32((uint32_t)(0x0u));
  /* 120bd3af call 0x120c09a0 */
  push32(0x120bd3b4u); f_120c09a0();
  /* 120bd3b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd3b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bd3b9 je 0x120bd3c0 */
  if (C.zf) goto L_120bd3c0;
  /* 120bd3bb jmp 0x120bd682 */
  goto L_120bd682;
L_120bd3c0:;
  /* 120bd3c0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 120bd3c2 push 0x120dc478 */
  push32((uint32_t)(0x120dc478u));
  /* 120bd3c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd3c9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 120bd3ce call 0x120acc80 */
  push32(0x120bd3d3u); f_120acc80();
  /* 120bd3d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd3d6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 120bd3d9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 120bd3db push 0x120dc478 */
  push32((uint32_t)(0x120dc478u));
  /* 120bd3e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd3e2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 120bd3e7 call 0x120acc80 */
  push32(0x120bd3ecu); f_120acc80();
  /* 120bd3ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd3ef mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120bd3f2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 120bd3f4 push 0x120dc478 */
  push32((uint32_t)(0x120dc478u));
  /* 120bd3f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd3fb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 120bd400 call 0x120acc80 */
  push32(0x120bd405u); f_120acc80();
  /* 120bd405 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd408 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 120bd40b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 120bd40d push 0x120dc478 */
  push32((uint32_t)(0x120dc478u));
  /* 120bd412 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd414 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 120bd419 call 0x120acc80 */
  push32(0x120bd41eu); f_120acc80();
  /* 120bd41e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd421 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120bd424 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd428 je 0x120bd43c */
  if (C.zf) goto L_120bd43c;
  /* 120bd42a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd42e je 0x120bd43c */
  if (C.zf) goto L_120bd43c;
  /* 120bd430 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd434 je 0x120bd43c */
  if (C.zf) goto L_120bd43c;
  /* 120bd436 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd43a jne 0x120bd441 */
  if (!C.zf) goto L_120bd441;
L_120bd43c:;
  /* 120bd43c jmp 0x120bd682 */
  goto L_120bd682;
L_120bd441:;
  /* 120bd441 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120bd444 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 120bd447 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 120bd44e jmp 0x120bd459 */
  goto L_120bd459;
L_120bd450:;
  /* 120bd450 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 120bd453 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd456 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_120bd459:;
  /* 120bd459 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd460 jge 0x120bd475 */
  if ((C.sf==C.of)) goto L_120bd475;
  /* 120bd462 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bd465 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 120bd468 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 120bd46a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bd46d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd470 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 120bd473 jmp 0x120bd450 */
  goto L_120bd450;
L_120bd475:;
  /* 120bd475 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 120bd478 push eax */
  push32((uint32_t)(EAX));
  /* 120bd479 mov ecx, dword ptr [0x120e13f0] */
  ECX = (r32((uint32_t)(0x120e13f0)));
  /* 120bd47f push ecx */
  push32((uint32_t)(ECX));
  /* 120bd480 call dword ptr [0x120e338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e338c))), 0x120bd486u);
  /* 120bd486 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bd488 jne 0x120bd48f */
  if (!C.zf) goto L_120bd48f;
  /* 120bd48a jmp 0x120bd682 */
  goto L_120bd682;
L_120bd48f:;
  /* 120bd48f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd493 jbe 0x120bd49a */
  if ((C.cf||C.zf)) goto L_120bd49a;
  /* 120bd495 jmp 0x120bd682 */
  goto L_120bd682;
L_120bd49a:;
  /* 120bd49a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bd49d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120bd4a3 mov dword ptr [0x120df010], edx */
  w32((uint32_t)(0x120df010), (EDX));
  /* 120bd4a9 cmp dword ptr [0x120df010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120df010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd4b0 jle 0x120bd509 */
  if ((C.zf||C.sf!=C.of)) goto L_120bd509;
  /* 120bd4b2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 120bd4b5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120bd4b8 jmp 0x120bd4c3 */
  goto L_120bd4c3;
L_120bd4ba:;
  /* 120bd4ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bd4bd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd4c0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_120bd4c3:;
  /* 120bd4c3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bd4c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bd4c8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120bd4ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bd4cc je 0x120bd509 */
  if (C.zf) goto L_120bd509;
  /* 120bd4ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bd4d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120bd4d3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 120bd4d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120bd4d8 je 0x120bd509 */
  if (C.zf) goto L_120bd509;
  /* 120bd4da mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bd4dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd4df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120bd4e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 120bd4e4 jmp 0x120bd4ef */
  goto L_120bd4ef;
L_120bd4e6:;
  /* 120bd4e6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 120bd4e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd4ec mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_120bd4ef:;
  /* 120bd4ef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bd4f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd4f4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 120bd4f7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd4fa jg 0x120bd507 */
  if ((!C.zf&&C.sf==C.of)) goto L_120bd507;
  /* 120bd4fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120bd4ff add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd502 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 120bd505 jmp 0x120bd4e6 */
  goto L_120bd4e6;
L_120bd507:;
  /* 120bd507 jmp 0x120bd4ba */
  goto L_120bd4ba;
L_120bd509:;
  /* 120bd509 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bd50b push 0 */
  push32((uint32_t)(0x0u));
  /* 120bd50d push 0 */
  push32((uint32_t)(0x0u));
  /* 120bd50f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120bd512 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd515 push eax */
  push32((uint32_t)(EAX));
  /* 120bd516 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 120bd51b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120bd51e push ecx */
  push32((uint32_t)(ECX));
  /* 120bd51f push 1 */
  push32((uint32_t)(0x1u));
  /* 120bd521 call 0x120b9090 */
  push32(0x120bd526u); f_120b9090();
  /* 120bd526 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bd52b jne 0x120bd532 */
  if (!C.zf) goto L_120bd532;
  /* 120bd52d jmp 0x120bd682 */
  goto L_120bd682;
L_120bd532:;
  /* 120bd532 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120bd535 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 120bd53a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120bd53d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120bd540 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 120bd547 jmp 0x120bd552 */
  goto L_120bd552;
L_120bd549:;
  /* 120bd549 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120bd54c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd54f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_120bd552:;
  /* 120bd552 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd559 jge 0x120bd570 */
  if ((C.sf==C.of)) goto L_120bd570;
  /* 120bd55b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120bd55e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 120bd562 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 120bd565 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120bd568 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd56b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 120bd56e jmp 0x120bd549 */
  goto L_120bd549;
L_120bd570:;
  /* 120bd570 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bd572 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bd574 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120bd577 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd57a push edx */
  push32((uint32_t)(EDX));
  /* 120bd57b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 120bd580 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120bd583 push eax */
  push32((uint32_t)(EAX));
  /* 120bd584 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bd586 call 0x120c0c40 */
  push32(0x120bd58bu); f_120c0c40();
  /* 120bd58b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd58e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bd590 jne 0x120bd597 */
  if (!C.zf) goto L_120bd597;
  /* 120bd592 jmp 0x120bd682 */
  goto L_120bd682;
L_120bd597:;
  /* 120bd597 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120bd59a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 120bd59f cmp dword ptr [0x120df010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120df010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd5a6 jle 0x120bd603 */
  if ((C.zf||C.sf!=C.of)) goto L_120bd603;
  /* 120bd5a8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 120bd5ab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 120bd5ae jmp 0x120bd5b9 */
  goto L_120bd5b9;
L_120bd5b0:;
  /* 120bd5b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bd5b3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd5b6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_120bd5b9:;
  /* 120bd5b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bd5bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120bd5be mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120bd5c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120bd5c2 je 0x120bd603 */
  if (C.zf) goto L_120bd603;
  /* 120bd5c4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bd5c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd5c9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 120bd5cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bd5ce je 0x120bd603 */
  if (C.zf) goto L_120bd603;
  /* 120bd5d0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bd5d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bd5d5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120bd5d7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120bd5da jmp 0x120bd5e5 */
  goto L_120bd5e5;
L_120bd5dc:;
  /* 120bd5dc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120bd5df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd5e2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_120bd5e5:;
  /* 120bd5e5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bd5e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bd5ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 120bd5ed cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd5f0 jg 0x120bd601 */
  if ((!C.zf&&C.sf==C.of)) goto L_120bd601;
  /* 120bd5f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120bd5f5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120bd5f8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 120bd5ff jmp 0x120bd5dc */
  goto L_120bd5dc;
L_120bd601:;
  /* 120bd601 jmp 0x120bd5b0 */
  goto L_120bd5b0;
L_120bd603:;
  /* 120bd603 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120bd606 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd609 mov dword ptr [0x120df01c], eax */
  w32((uint32_t)(0x120df01c), (EAX));
  /* 120bd60e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120bd611 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd614 mov dword ptr [0x120df020], ecx */
  w32((uint32_t)(0x120df020), (ECX));
  /* 120bd61a cmp dword ptr [0x120e1414], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1414))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd621 je 0x120bd634 */
  if (C.zf) goto L_120bd634;
  /* 120bd623 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd625 mov edx, dword ptr [0x120e1414] */
  EDX = (r32((uint32_t)(0x120e1414)));
  /* 120bd62b push edx */
  push32((uint32_t)(EDX));
  /* 120bd62c call 0x120ad710 */
  push32(0x120bd631u); f_120ad710();
  /* 120bd631 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120bd634:;
  /* 120bd634 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120bd637 mov dword ptr [0x120e1414], eax */
  w32((uint32_t)(0x120e1414), (EAX));
  /* 120bd63c cmp dword ptr [0x120e1418], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1418))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd643 je 0x120bd656 */
  if (C.zf) goto L_120bd656;
  /* 120bd645 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd647 mov ecx, dword ptr [0x120e1418] */
  ECX = (r32((uint32_t)(0x120e1418)));
  /* 120bd64d push ecx */
  push32((uint32_t)(ECX));
  /* 120bd64e call 0x120ad710 */
  push32(0x120bd653u); f_120ad710();
  /* 120bd653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120bd656:;
  /* 120bd656 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120bd659 mov dword ptr [0x120e1418], edx */
  w32((uint32_t)(0x120e1418), (EDX));
  /* 120bd65f push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd661 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120bd664 push eax */
  push32((uint32_t)(EAX));
  /* 120bd665 call 0x120ad710 */
  push32(0x120bd66au); f_120ad710();
  /* 120bd66a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd66d push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd66f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120bd672 push ecx */
  push32((uint32_t)(ECX));
  /* 120bd673 call 0x120ad710 */
  push32(0x120bd678u); f_120ad710();
  /* 120bd678 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd67b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bd67d jmp 0x120bd70c */
  goto L_120bd70c;
L_120bd682:;
  /* 120bd682 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd684 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120bd687 push edx */
  push32((uint32_t)(EDX));
  /* 120bd688 call 0x120ad710 */
  push32(0x120bd68du); f_120ad710();
  /* 120bd68d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd690 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd692 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120bd695 push eax */
  push32((uint32_t)(EAX));
  /* 120bd696 call 0x120ad710 */
  push32(0x120bd69bu); f_120ad710();
  /* 120bd69b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd69e push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd6a0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120bd6a3 push ecx */
  push32((uint32_t)(ECX));
  /* 120bd6a4 call 0x120ad710 */
  push32(0x120bd6a9u); f_120ad710();
  /* 120bd6a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd6ac push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd6ae mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 120bd6b1 push edx */
  push32((uint32_t)(EDX));
  /* 120bd6b2 call 0x120ad710 */
  push32(0x120bd6b7u); f_120ad710();
  /* 120bd6b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd6ba mov eax, 1 */
  EAX = (0x1u);
  /* 120bd6bf jmp 0x120bd70c */
  goto L_120bd70c;
L_120bd6c1:;
  /* 120bd6c1 mov dword ptr [0x120df01c], 0x120df026 */
  w32((uint32_t)(0x120df01c), (0x120df026u));
  /* 120bd6cb mov dword ptr [0x120df020], 0x120df026 */
  w32((uint32_t)(0x120df020), (0x120df026u));
  /* 120bd6d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd6d7 mov eax, dword ptr [0x120e1414] */
  EAX = (r32((uint32_t)(0x120e1414)));
  /* 120bd6dc push eax */
  push32((uint32_t)(EAX));
  /* 120bd6dd call 0x120ad710 */
  push32(0x120bd6e2u); f_120ad710();
  /* 120bd6e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd6e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bd6e7 mov ecx, dword ptr [0x120e1418] */
  ECX = (r32((uint32_t)(0x120e1418)));
  /* 120bd6ed push ecx */
  push32((uint32_t)(ECX));
  /* 120bd6ee call 0x120ad710 */
  push32(0x120bd6f3u); f_120ad710();
  /* 120bd6f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd6f6 mov dword ptr [0x120e1414], 0 */
  w32((uint32_t)(0x120e1414), (0x0u));
  /* 120bd700 mov dword ptr [0x120e1418], 0 */
  w32((uint32_t)(0x120e1418), (0x0u));
  /* 120bd70a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120bd70c:;
  /* 120bd70c mov esp, ebp */
  ESP = (EBP);
  /* 120bd70e pop ebp */
  EBP = (pop32());
  /* 120bd70f ret  */
  ESPCHK(0x120bd370u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d710 @ 0x120bd710 (7 bytes, 5 insns) */
void f_120bd710(void) {
  FTRACE(0x120bd710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bd710 push ebp */
  push32((uint32_t)(EBP));
  /* 120bd711 mov ebp, esp */
  EBP = (ESP);
  /* 120bd713 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bd715 pop ebp */
  EBP = (pop32());
  /* 120bd716 ret  */
  ESPCHK(0x120bd710u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d720 @ 0x120bd720 (62 bytes, 35 insns) */
void f_120bd720(void) {
  FTRACE(0x120bd720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bd720 push ebp */
  push32((uint32_t)(EBP));
  /* 120bd721 mov ebp, esp */
  EBP = (ESP);
  /* 120bd723 push esi */
  push32((uint32_t)(ESI));
  /* 120bd724 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bd726 push eax */
  push32((uint32_t)(EAX));
  /* 120bd727 push eax */
  push32((uint32_t)(EAX));
  /* 120bd728 push eax */
  push32((uint32_t)(EAX));
  /* 120bd729 push eax */
  push32((uint32_t)(EAX));
  /* 120bd72a push eax */
  push32((uint32_t)(EAX));
  /* 120bd72b push eax */
  push32((uint32_t)(EAX));
  /* 120bd72c push eax */
  push32((uint32_t)(EAX));
  /* 120bd72d push eax */
  push32((uint32_t)(EAX));
  /* 120bd72e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bd731 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120bd734:;
  /* 120bd734 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120bd736 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120bd738 je 0x120bd741 */
  if (C.zf) goto L_120bd741;
  /* 120bd73a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 120bd73b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x120bd73b");
  /* 120bd73f jmp 0x120bd734 */
  goto L_120bd734;
L_120bd741:;
  /* 120bd741 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd744 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120bd747 nop  */
  /* nop */
L_120bd748:;
  /* 120bd748 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120bd749 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120bd74b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120bd74d je 0x120bd756 */
  if (C.zf) goto L_120bd756;
  /* 120bd74f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120bd750 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x120bd750");
  /* 120bd754 jae 0x120bd748 */
  if (!C.cf) goto L_120bd748;
L_120bd756:;
  /* 120bd756 mov eax, ecx */
  EAX = (ECX);
  /* 120bd758 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd75b pop esi */
  ESI = (pop32());
  /* 120bd75c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120bd75d ret  */
  ESPCHK(0x120bd720u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x120bd760 (56 bytes, 31 insns) */
void f_120bd760(void) {
  FTRACE(0x120bd760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bd760 push ebp */
  push32((uint32_t)(EBP));
  /* 120bd761 mov ebp, esp */
  EBP = (ESP);
  /* 120bd763 push edi */
  push32((uint32_t)(EDI));
  /* 120bd764 push esi */
  push32((uint32_t)(ESI));
  /* 120bd765 push ebx */
  push32((uint32_t)(EBX));
  /* 120bd766 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bd769 jecxz 0x120bd791 */
  x86_unimpl("jecxz @ 0x120bd769");
  /* 120bd76b mov ebx, ecx */
  EBX = (ECX);
  /* 120bd76d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd770 mov esi, edi */
  ESI = (EDI);
  /* 120bd772 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bd774 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 120bd776 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120bd778 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd77a mov edi, esi */
  EDI = (ESI);
  /* 120bd77c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120bd77f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 120bd781 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 120bd784 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120bd786 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120bd789 ja 0x120bd78f */
  if ((!C.cf&&!C.zf)) goto L_120bd78f;
  /* 120bd78b je 0x120bd791 */
  if (C.zf) goto L_120bd791;
  /* 120bd78d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120bd78e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_120bd78f:;
  /* 120bd78f not ecx */
  ECX = (~(ECX));
L_120bd791:;
  /* 120bd791 mov eax, ecx */
  EAX = (ECX);
  /* 120bd793 pop ebx */
  EBX = (pop32());
  /* 120bd794 pop esi */
  ESI = (pop32());
  /* 120bd795 pop edi */
  EDI = (pop32());
  /* 120bd796 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120bd797 ret  */
  ESPCHK(0x120bd760u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d7a0 @ 0x120bd7a0 (58 bytes, 32 insns) */
void f_120bd7a0(void) {
  FTRACE(0x120bd7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bd7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bd7a1 mov ebp, esp */
  EBP = (ESP);
  /* 120bd7a3 push esi */
  push32((uint32_t)(ESI));
  /* 120bd7a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bd7a6 push eax */
  push32((uint32_t)(EAX));
  /* 120bd7a7 push eax */
  push32((uint32_t)(EAX));
  /* 120bd7a8 push eax */
  push32((uint32_t)(EAX));
  /* 120bd7a9 push eax */
  push32((uint32_t)(EAX));
  /* 120bd7aa push eax */
  push32((uint32_t)(EAX));
  /* 120bd7ab push eax */
  push32((uint32_t)(EAX));
  /* 120bd7ac push eax */
  push32((uint32_t)(EAX));
  /* 120bd7ad push eax */
  push32((uint32_t)(EAX));
  /* 120bd7ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bd7b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120bd7b4:;
  /* 120bd7b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120bd7b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120bd7b8 je 0x120bd7c1 */
  if (C.zf) goto L_120bd7c1;
  /* 120bd7ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 120bd7bb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x120bd7bb");
  /* 120bd7bf jmp 0x120bd7b4 */
  goto L_120bd7b4;
L_120bd7c1:;
  /* 120bd7c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_120bd7c4:;
  /* 120bd7c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120bd7c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120bd7c8 je 0x120bd7d4 */
  if (C.zf) goto L_120bd7d4;
  /* 120bd7ca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120bd7cb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x120bd7cb");
  /* 120bd7cf jae 0x120bd7c4 */
  if (!C.cf) goto L_120bd7c4;
  /* 120bd7d1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_120bd7d4:;
  /* 120bd7d4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd7d7 pop esi */
  ESI = (pop32());
  /* 120bd7d8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120bd7d9 ret  */
  ESPCHK(0x120bd7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d7e0 @ 0x120bd7e0 (512 bytes, 147 insns) */
void f_120bd7e0(void) {
  FTRACE(0x120bd7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bd7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bd7e1 mov ebp, esp */
  EBP = (ESP);
  /* 120bd7e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bd7e6 cmp dword ptr [0x120e1460], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1460))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd7ed jne 0x120bd812 */
  if (!C.zf) goto L_120bd812;
  /* 120bd7ef call 0x120be2b0 */
  push32(0x120bd7f4u); f_120be2b0();
  /* 120bd7f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bd7f6 je 0x120bd802 */
  if (C.zf) goto L_120bd802;
  /* 120bd7f8 mov eax, dword ptr [0x120e3358] */
  EAX = (r32((uint32_t)(0x120e3358)));
  /* 120bd7fd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120bd800 jmp 0x120bd809 */
  goto L_120bd809;
L_120bd802:;
  /* 120bd802 mov dword ptr [ebp - 8], 0x120be300 */
  w32((uint32_t)(EBP + -0x8), (0x120be300u));
L_120bd809:;
  /* 120bd809 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bd80c mov dword ptr [0x120e1460], ecx */
  w32((uint32_t)(0x120e1460), (ECX));
L_120bd812:;
  /* 120bd812 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd816 jne 0x120bd822 */
  if (!C.zf) goto L_120bd822;
  /* 120bd818 call 0x120be100 */
  push32(0x120bd81du); f_120be100();
  /* 120bd81d jmp 0x120bd8ee */
  goto L_120bd8ee;
L_120bd822:;
  /* 120bd822 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd825 mov dword ptr [0x120e1450], edx */
  w32((uint32_t)(0x120e1450), (EDX));
  /* 120bd82b cmp dword ptr [0x120e1450], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1450))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd832 je 0x120bd854 */
  if (C.zf) goto L_120bd854;
  /* 120bd834 mov eax, dword ptr [0x120e1450] */
  EAX = (r32((uint32_t)(0x120e1450)));
  /* 120bd839 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120bd83c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bd83e je 0x120bd854 */
  if (C.zf) goto L_120bd854;
  /* 120bd840 push 0x120e1450 */
  push32((uint32_t)(0x120e1450u));
  /* 120bd845 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 120bd847 push 0x120e00e0 */
  push32((uint32_t)(0x120e00e0u));
  /* 120bd84c call 0x120bd9e0 */
  push32(0x120bd851u); f_120bd9e0();
  /* 120bd851 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120bd854:;
  /* 120bd854 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd857 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd85a mov dword ptr [0x120e1454], edx */
  w32((uint32_t)(0x120e1454), (EDX));
  /* 120bd860 cmp dword ptr [0x120e1454], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1454))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd867 je 0x120bd889 */
  if (C.zf) goto L_120bd889;
  /* 120bd869 mov eax, dword ptr [0x120e1454] */
  EAX = (r32((uint32_t)(0x120e1454)));
  /* 120bd86e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120bd871 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bd873 je 0x120bd889 */
  if (C.zf) goto L_120bd889;
  /* 120bd875 push 0x120e1454 */
  push32((uint32_t)(0x120e1454u));
  /* 120bd87a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 120bd87c push 0x120e0028 */
  push32((uint32_t)(0x120e0028u));
  /* 120bd881 call 0x120bd9e0 */
  push32(0x120bd886u); f_120bd9e0();
  /* 120bd886 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120bd889:;
  /* 120bd889 mov dword ptr [0x120e1458], 0 */
  w32((uint32_t)(0x120e1458), (0x0u));
  /* 120bd893 cmp dword ptr [0x120e1450], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1450))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd89a je 0x120bd8cd */
  if (C.zf) goto L_120bd8cd;
  /* 120bd89c mov edx, dword ptr [0x120e1450] */
  EDX = (r32((uint32_t)(0x120e1450)));
  /* 120bd8a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120bd8a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bd8a7 je 0x120bd8cd */
  if (C.zf) goto L_120bd8cd;
  /* 120bd8a9 cmp dword ptr [0x120e1454], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1454))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd8b0 je 0x120bd8c6 */
  if (C.zf) goto L_120bd8c6;
  /* 120bd8b2 mov ecx, dword ptr [0x120e1454] */
  ECX = (r32((uint32_t)(0x120e1454)));
  /* 120bd8b8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120bd8bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120bd8bd je 0x120bd8c6 */
  if (C.zf) goto L_120bd8c6;
  /* 120bd8bf call 0x120bda70 */
  push32(0x120bd8c4u); f_120bda70();
  /* 120bd8c4 jmp 0x120bd8cb */
  goto L_120bd8cb;
L_120bd8c6:;
  /* 120bd8c6 call 0x120bde60 */
  push32(0x120bd8cbu); f_120bde60();
L_120bd8cb:;
  /* 120bd8cb jmp 0x120bd8ee */
  goto L_120bd8ee;
L_120bd8cd:;
  /* 120bd8cd cmp dword ptr [0x120e1454], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1454))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd8d4 je 0x120bd8e9 */
  if (C.zf) goto L_120bd8e9;
  /* 120bd8d6 mov eax, dword ptr [0x120e1454] */
  EAX = (r32((uint32_t)(0x120e1454)));
  /* 120bd8db movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120bd8de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bd8e0 je 0x120bd8e9 */
  if (C.zf) goto L_120bd8e9;
  /* 120bd8e2 call 0x120be000 */
  push32(0x120bd8e7u); f_120be000();
  /* 120bd8e7 jmp 0x120bd8ee */
  goto L_120bd8ee;
L_120bd8e9:;
  /* 120bd8e9 call 0x120be100 */
  push32(0x120bd8eeu); f_120be100();
L_120bd8ee:;
  /* 120bd8ee cmp dword ptr [0x120e1458], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1458))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd8f5 jne 0x120bd8fe */
  if (!C.zf) goto L_120bd8fe;
  /* 120bd8f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bd8f9 jmp 0x120bd9dc */
  goto L_120bd9dc;
L_120bd8fe:;
  /* 120bd8fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bd901 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd907 push edx */
  push32((uint32_t)(EDX));
  /* 120bd908 call 0x120be130 */
  push32(0x120bd90du); f_120be130();
  /* 120bd90d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd910 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bd913 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd917 je 0x120bd92c */
  if (C.zf) goto L_120bd92c;
  /* 120bd919 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd91c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bd921 push eax */
  push32((uint32_t)(EAX));
  /* 120bd922 call dword ptr [0x120e335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e335c))), 0x120bd928u);
  /* 120bd928 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bd92a jne 0x120bd933 */
  if (!C.zf) goto L_120bd933;
L_120bd92c:;
  /* 120bd92c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bd92e jmp 0x120bd9dc */
  goto L_120bd9dc;
L_120bd933:;
  /* 120bd933 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bd935 mov ecx, dword ptr [0x120e1440] */
  ECX = (r32((uint32_t)(0x120e1440)));
  /* 120bd93b push ecx */
  push32((uint32_t)(ECX));
  /* 120bd93c call dword ptr [0x120e3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3360))), 0x120bd942u);
  /* 120bd942 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bd944 jne 0x120bd94d */
  if (!C.zf) goto L_120bd94d;
  /* 120bd946 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bd948 jmp 0x120bd9dc */
  goto L_120bd9dc;
L_120bd94d:;
  /* 120bd94d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd951 je 0x120bd978 */
  if (C.zf) goto L_120bd978;
  /* 120bd953 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bd956 mov ax, word ptr [0x120e1440] */
  AX = (r16((uint32_t)(0x120e1440)));
  /* 120bd95c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 120bd95f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bd962 mov dx, word ptr [0x120e145c] */
  DX = (r16((uint32_t)(0x120e145c)));
  /* 120bd969 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 120bd96d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bd970 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 120bd974 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_120bd978:;
  /* 120bd978 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd97c je 0x120bd9d7 */
  if (C.zf) goto L_120bd9d7;
  /* 120bd97e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 120bd980 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bd983 push edx */
  push32((uint32_t)(EDX));
  /* 120bd984 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 120bd989 mov eax, dword ptr [0x120e1440] */
  EAX = (r32((uint32_t)(0x120e1440)));
  /* 120bd98e push eax */
  push32((uint32_t)(EAX));
  /* 120bd98f call dword ptr [0x120e1460] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e1460))), 0x120bd995u);
  /* 120bd995 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bd997 jne 0x120bd99d */
  if (!C.zf) goto L_120bd99d;
  /* 120bd999 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bd99b jmp 0x120bd9dc */
  goto L_120bd9dc;
L_120bd99d:;
  /* 120bd99d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 120bd99f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bd9a2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd9a5 push ecx */
  push32((uint32_t)(ECX));
  /* 120bd9a6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 120bd9ab mov edx, dword ptr [0x120e145c] */
  EDX = (r32((uint32_t)(0x120e145c)));
  /* 120bd9b1 push edx */
  push32((uint32_t)(EDX));
  /* 120bd9b2 call dword ptr [0x120e1460] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e1460))), 0x120bd9b8u);
  /* 120bd9b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bd9ba jne 0x120bd9c0 */
  if (!C.zf) goto L_120bd9c0;
  /* 120bd9bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bd9be jmp 0x120bd9dc */
  goto L_120bd9dc;
L_120bd9c0:;
  /* 120bd9c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 120bd9c2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bd9c5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bd9ca push eax */
  push32((uint32_t)(EAX));
  /* 120bd9cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bd9ce push ecx */
  push32((uint32_t)(ECX));
  /* 120bd9cf call 0x120b0f20 */
  push32(0x120bd9d4u); f_120b0f20();
  /* 120bd9d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120bd9d7:;
  /* 120bd9d7 mov eax, 1 */
  EAX = (0x1u);
L_120bd9dc:;
  /* 120bd9dc mov esp, ebp */
  ESP = (EBP);
  /* 120bd9de pop ebp */
  EBP = (pop32());
  /* 120bd9df ret  */
  ESPCHK(0x120bd7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d9e0 @ 0x120bd9e0 (130 bytes, 47 insns) */
void f_120bd9e0(void) {
  FTRACE(0x120bd9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bd9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bd9e1 mov ebp, esp */
  EBP = (ESP);
  /* 120bd9e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bd9e6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 120bd9ed mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_120bd9f4:;
  /* 120bd9f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bd9f7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bd9fa jg 0x120bda5e */
  if ((!C.zf&&C.sf==C.of)) goto L_120bda5e;
  /* 120bd9fc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bda00 je 0x120bda5e */
  if (C.zf) goto L_120bda5e;
  /* 120bda02 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bda05 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bda08 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120bda09 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bda0b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120bda0d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bda10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bda13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bda16 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 120bda19 push eax */
  push32((uint32_t)(EAX));
  /* 120bda1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bda1d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120bda1f push edx */
  push32((uint32_t)(EDX));
  /* 120bda20 call 0x120c0eb0 */
  push32(0x120bda25u); f_120c0eb0();
  /* 120bda25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bda28 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120bda2b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bda2f jne 0x120bda42 */
  if (!C.zf) goto L_120bda42;
  /* 120bda31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bda34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bda37 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 120bda3b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bda3e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120bda40 jmp 0x120bda5c */
  goto L_120bda5c;
L_120bda42:;
  /* 120bda42 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bda46 jge 0x120bda53 */
  if ((C.sf==C.of)) goto L_120bda53;
  /* 120bda48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bda4b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bda4e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 120bda51 jmp 0x120bda5c */
  goto L_120bda5c;
L_120bda53:;
  /* 120bda53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bda56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bda59 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_120bda5c:;
  /* 120bda5c jmp 0x120bd9f4 */
  goto L_120bd9f4;
L_120bda5e:;
  /* 120bda5e mov esp, ebp */
  ESP = (EBP);
  /* 120bda60 pop ebp */
  EBP = (pop32());
  /* 120bda61 ret  */
  ESPCHK(0x120bd9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001da70 @ 0x120bda70 (186 bytes, 50 insns) */
void f_120bda70(void) {
  FTRACE(0x120bda70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bda70 push ebp */
  push32((uint32_t)(EBP));
  /* 120bda71 mov ebp, esp */
  EBP = (ESP);
  /* 120bda73 push ecx */
  push32((uint32_t)(ECX));
  /* 120bda74 mov eax, dword ptr [0x120e1450] */
  EAX = (r32((uint32_t)(0x120e1450)));
  /* 120bda79 push eax */
  push32((uint32_t)(EAX));
  /* 120bda7a call 0x120b1210 */
  push32(0x120bda7fu); f_120b1210();
  /* 120bda7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bda82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120bda84 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bda87 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 120bda8a mov dword ptr [0x120e144c], ecx */
  w32((uint32_t)(0x120e144c), (ECX));
  /* 120bda90 mov edx, dword ptr [0x120e1454] */
  EDX = (r32((uint32_t)(0x120e1454)));
  /* 120bda96 push edx */
  push32((uint32_t)(EDX));
  /* 120bda97 call 0x120b1210 */
  push32(0x120bda9cu); f_120b1210();
  /* 120bda9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bda9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120bdaa1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bdaa4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 120bdaa7 mov dword ptr [0x120e1444], ecx */
  w32((uint32_t)(0x120e1444), (ECX));
  /* 120bdaad mov dword ptr [0x120e1440], 0 */
  w32((uint32_t)(0x120e1440), (0x0u));
  /* 120bdab7 cmp dword ptr [0x120e144c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e144c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bdabe je 0x120bdac9 */
  if (C.zf) goto L_120bdac9;
  /* 120bdac0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 120bdac7 jmp 0x120bdadb */
  goto L_120bdadb;
L_120bdac9:;
  /* 120bdac9 mov edx, dword ptr [0x120e1450] */
  EDX = (r32((uint32_t)(0x120e1450)));
  /* 120bdacf push edx */
  push32((uint32_t)(EDX));
  /* 120bdad0 call 0x120be510 */
  push32(0x120bdad5u); f_120be510();
  /* 120bdad5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdad8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120bdadb:;
  /* 120bdadb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bdade mov dword ptr [0x120e1448], eax */
  w32((uint32_t)(0x120e1448), (EAX));
  /* 120bdae3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bdae5 push 0x120bdb30 */
  push32((uint32_t)(0x120bdb30u));
  /* 120bdaea call dword ptr [0x120e3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3354))), 0x120bdaf0u);
  /* 120bdaf0 mov ecx, dword ptr [0x120e1458] */
  ECX = (r32((uint32_t)(0x120e1458)));
  /* 120bdaf6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 120bdafc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bdafe je 0x120bdb1c */
  if (C.zf) goto L_120bdb1c;
  /* 120bdb00 mov edx, dword ptr [0x120e1458] */
  EDX = (r32((uint32_t)(0x120e1458)));
  /* 120bdb06 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 120bdb0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120bdb0e je 0x120bdb1c */
  if (C.zf) goto L_120bdb1c;
  /* 120bdb10 mov eax, dword ptr [0x120e1458] */
  EAX = (r32((uint32_t)(0x120e1458)));
  /* 120bdb15 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 120bdb18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bdb1a jne 0x120bdb26 */
  if (!C.zf) goto L_120bdb26;
L_120bdb1c:;
  /* 120bdb1c mov dword ptr [0x120e1458], 0 */
  w32((uint32_t)(0x120e1458), (0x0u));
L_120bdb26:;
  /* 120bdb26 mov esp, ebp */
  ESP = (EBP);
  /* 120bdb28 pop ebp */
  EBP = (pop32());
  /* 120bdb29 ret  */
  ESPCHK(0x120bda70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001db30 @ 0x120bdb30 (804 bytes, 220 insns) */
void f_120bdb30(void) {
  FTRACE(0x120bdb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bdb30 push ebp */
  push32((uint32_t)(EBP));
  /* 120bdb31 mov ebp, esp */
  EBP = (ESP);
  /* 120bdb33 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bdb36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bdb39 push eax */
  push32((uint32_t)(EAX));
  /* 120bdb3a call 0x120be490 */
  push32(0x120bdb3fu); f_120be490();
  /* 120bdb3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdb42 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 120bdb45 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 120bdb47 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 120bdb4a push ecx */
  push32((uint32_t)(ECX));
  /* 120bdb4b mov edx, dword ptr [0x120e1444] */
  EDX = (r32((uint32_t)(0x120e1444)));
  /* 120bdb51 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120bdb53 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bdb55 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 120bdb5b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdb61 push edx */
  push32((uint32_t)(EDX));
  /* 120bdb62 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bdb65 push eax */
  push32((uint32_t)(EAX));
  /* 120bdb66 call dword ptr [0x120e1460] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e1460))), 0x120bdb6cu);
  /* 120bdb6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bdb6e jne 0x120bdb84 */
  if (!C.zf) goto L_120bdb84;
  /* 120bdb70 mov dword ptr [0x120e1458], 0 */
  w32((uint32_t)(0x120e1458), (0x0u));
  /* 120bdb7a mov eax, 1 */
  EAX = (0x1u);
  /* 120bdb7f jmp 0x120bde4e */
  goto L_120bde4e;
L_120bdb84:;
  /* 120bdb84 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 120bdb87 push ecx */
  push32((uint32_t)(ECX));
  /* 120bdb88 mov edx, dword ptr [0x120e1454] */
  EDX = (r32((uint32_t)(0x120e1454)));
  /* 120bdb8e push edx */
  push32((uint32_t)(EDX));
  /* 120bdb8f call 0x120c0eb0 */
  push32(0x120bdb94u); f_120c0eb0();
  /* 120bdb94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdb97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bdb99 jne 0x120bdcbf */
  if (!C.zf) goto L_120bdcbf;
  /* 120bdb9f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 120bdba1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 120bdba4 push eax */
  push32((uint32_t)(EAX));
  /* 120bdba5 mov ecx, dword ptr [0x120e144c] */
  ECX = (r32((uint32_t)(0x120e144c)));
  /* 120bdbab neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120bdbad sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bdbaf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 120bdbb5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdbbb push ecx */
  push32((uint32_t)(ECX));
  /* 120bdbbc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bdbbf push edx */
  push32((uint32_t)(EDX));
  /* 120bdbc0 call dword ptr [0x120e1460] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e1460))), 0x120bdbc6u);
  /* 120bdbc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bdbc8 jne 0x120bdbde */
  if (!C.zf) goto L_120bdbde;
  /* 120bdbca mov dword ptr [0x120e1458], 0 */
  w32((uint32_t)(0x120e1458), (0x0u));
  /* 120bdbd4 mov eax, 1 */
  EAX = (0x1u);
  /* 120bdbd9 jmp 0x120bde4e */
  goto L_120bde4e;
L_120bdbde:;
  /* 120bdbde lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 120bdbe1 push eax */
  push32((uint32_t)(EAX));
  /* 120bdbe2 mov ecx, dword ptr [0x120e1450] */
  ECX = (r32((uint32_t)(0x120e1450)));
  /* 120bdbe8 push ecx */
  push32((uint32_t)(ECX));
  /* 120bdbe9 call 0x120c0eb0 */
  push32(0x120bdbeeu); f_120c0eb0();
  /* 120bdbee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdbf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bdbf3 jne 0x120bdc20 */
  if (!C.zf) goto L_120bdc20;
  /* 120bdbf5 mov edx, dword ptr [0x120e1458] */
  EDX = (r32((uint32_t)(0x120e1458)));
  /* 120bdbfb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 120bdc01 mov dword ptr [0x120e1458], edx */
  w32((uint32_t)(0x120e1458), (EDX));
  /* 120bdc07 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bdc0a mov dword ptr [0x120e145c], eax */
  w32((uint32_t)(0x120e145c), (EAX));
  /* 120bdc0f mov ecx, dword ptr [0x120e145c] */
  ECX = (r32((uint32_t)(0x120e145c)));
  /* 120bdc15 mov dword ptr [0x120e1440], ecx */
  w32((uint32_t)(0x120e1440), (ECX));
  /* 120bdc1b jmp 0x120bdcbf */
  goto L_120bdcbf;
L_120bdc20:;
  /* 120bdc20 mov edx, dword ptr [0x120e1458] */
  EDX = (r32((uint32_t)(0x120e1458)));
  /* 120bdc26 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 120bdc29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120bdc2b jne 0x120bdcbf */
  if (!C.zf) goto L_120bdcbf;
  /* 120bdc31 cmp dword ptr [0x120e1448], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1448))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bdc38 je 0x120bdc8d */
  if (C.zf) goto L_120bdc8d;
  /* 120bdc3a mov eax, dword ptr [0x120e1448] */
  EAX = (r32((uint32_t)(0x120e1448)));
  /* 120bdc3f push eax */
  push32((uint32_t)(EAX));
  /* 120bdc40 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 120bdc43 push ecx */
  push32((uint32_t)(ECX));
  /* 120bdc44 mov edx, dword ptr [0x120e1450] */
  EDX = (r32((uint32_t)(0x120e1450)));
  /* 120bdc4a push edx */
  push32((uint32_t)(EDX));
  /* 120bdc4b call 0x120c0f80 */
  push32(0x120bdc50u); f_120c0f80();
  /* 120bdc50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdc53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bdc55 jne 0x120bdc8d */
  if (!C.zf) goto L_120bdc8d;
  /* 120bdc57 mov eax, dword ptr [0x120e1458] */
  EAX = (r32((uint32_t)(0x120e1458)));
  /* 120bdc5c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 120bdc5e mov dword ptr [0x120e1458], eax */
  w32((uint32_t)(0x120e1458), (EAX));
  /* 120bdc63 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bdc66 mov dword ptr [0x120e145c], ecx */
  w32((uint32_t)(0x120e145c), (ECX));
  /* 120bdc6c mov edx, dword ptr [0x120e1450] */
  EDX = (r32((uint32_t)(0x120e1450)));
  /* 120bdc72 push edx */
  push32((uint32_t)(EDX));
  /* 120bdc73 call 0x120b1210 */
  push32(0x120bdc78u); f_120b1210();
  /* 120bdc78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdc7b cmp eax, dword ptr [0x120e1448] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120e1448))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bdc81 jne 0x120bdc8b */
  if (!C.zf) goto L_120bdc8b;
  /* 120bdc83 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bdc86 mov dword ptr [0x120e1440], eax */
  w32((uint32_t)(0x120e1440), (EAX));
L_120bdc8b:;
  /* 120bdc8b jmp 0x120bdcbf */
  goto L_120bdcbf;
L_120bdc8d:;
  /* 120bdc8d mov ecx, dword ptr [0x120e1458] */
  ECX = (r32((uint32_t)(0x120e1458)));
  /* 120bdc93 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120bdc96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bdc98 jne 0x120bdcbf */
  if (!C.zf) goto L_120bdcbf;
  /* 120bdc9a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bdc9d push edx */
  push32((uint32_t)(EDX));
  /* 120bdc9e call 0x120be1d0 */
  push32(0x120bdca3u); f_120be1d0();
  /* 120bdca3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdca6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bdca8 je 0x120bdcbf */
  if (C.zf) goto L_120bdcbf;
  /* 120bdcaa mov eax, dword ptr [0x120e1458] */
  EAX = (r32((uint32_t)(0x120e1458)));
  /* 120bdcaf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 120bdcb1 mov dword ptr [0x120e1458], eax */
  w32((uint32_t)(0x120e1458), (EAX));
  /* 120bdcb6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bdcb9 mov dword ptr [0x120e145c], ecx */
  w32((uint32_t)(0x120e145c), (ECX));
L_120bdcbf:;
  /* 120bdcbf mov edx, dword ptr [0x120e1458] */
  EDX = (r32((uint32_t)(0x120e1458)));
  /* 120bdcc5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 120bdccb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bdcd1 je 0x120bde41 */
  if (C.zf) goto L_120bde41;
  /* 120bdcd7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 120bdcd9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 120bdcdc push eax */
  push32((uint32_t)(EAX));
  /* 120bdcdd mov ecx, dword ptr [0x120e144c] */
  ECX = (r32((uint32_t)(0x120e144c)));
  /* 120bdce3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120bdce5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bdce7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 120bdced add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 120bdcf4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bdcf7 push edx */
  push32((uint32_t)(EDX));
  /* 120bdcf8 call dword ptr [0x120e1460] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e1460))), 0x120bdcfeu);
  /* 120bdcfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bdd00 jne 0x120bdd16 */
  if (!C.zf) goto L_120bdd16;
  /* 120bdd02 mov dword ptr [0x120e1458], 0 */
  w32((uint32_t)(0x120e1458), (0x0u));
  /* 120bdd0c mov eax, 1 */
  EAX = (0x1u);
  /* 120bdd11 jmp 0x120bde4e */
  goto L_120bde4e;
L_120bdd16:;
  /* 120bdd16 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 120bdd19 push eax */
  push32((uint32_t)(EAX));
  /* 120bdd1a mov ecx, dword ptr [0x120e1450] */
  ECX = (r32((uint32_t)(0x120e1450)));
  /* 120bdd20 push ecx */
  push32((uint32_t)(ECX));
  /* 120bdd21 call 0x120c0eb0 */
  push32(0x120bdd26u); f_120c0eb0();
  /* 120bdd26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdd29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bdd2b jne 0x120bdde0 */
  if (!C.zf) goto L_120bdde0;
  /* 120bdd31 mov edx, dword ptr [0x120e1458] */
  EDX = (r32((uint32_t)(0x120e1458)));
  /* 120bdd37 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 120bdd3a mov dword ptr [0x120e1458], edx */
  w32((uint32_t)(0x120e1458), (EDX));
  /* 120bdd40 cmp dword ptr [0x120e144c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e144c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bdd47 je 0x120bdd6a */
  if (C.zf) goto L_120bdd6a;
  /* 120bdd49 mov eax, dword ptr [0x120e1458] */
  EAX = (r32((uint32_t)(0x120e1458)));
  /* 120bdd4e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 120bdd51 mov dword ptr [0x120e1458], eax */
  w32((uint32_t)(0x120e1458), (EAX));
  /* 120bdd56 cmp dword ptr [0x120e1440], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1440))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bdd5d jne 0x120bdd68 */
  if (!C.zf) goto L_120bdd68;
  /* 120bdd5f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bdd62 mov dword ptr [0x120e1440], ecx */
  w32((uint32_t)(0x120e1440), (ECX));
L_120bdd68:;
  /* 120bdd68 jmp 0x120bddde */
  goto L_120bddde;
L_120bdd6a:;
  /* 120bdd6a cmp dword ptr [0x120e1448], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1448))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bdd71 je 0x120bddbf */
  if (C.zf) goto L_120bddbf;
  /* 120bdd73 mov edx, dword ptr [0x120e1450] */
  EDX = (r32((uint32_t)(0x120e1450)));
  /* 120bdd79 push edx */
  push32((uint32_t)(EDX));
  /* 120bdd7a call 0x120b1210 */
  push32(0x120bdd7fu); f_120b1210();
  /* 120bdd7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdd82 cmp eax, dword ptr [0x120e1448] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120e1448))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bdd88 jne 0x120bddbf */
  if (!C.zf) goto L_120bddbf;
  /* 120bdd8a push 1 */
  push32((uint32_t)(0x1u));
  /* 120bdd8c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bdd8f push eax */
  push32((uint32_t)(EAX));
  /* 120bdd90 call 0x120be220 */
  push32(0x120bdd95u); f_120be220();
  /* 120bdd95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdd98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bdd9a je 0x120bddbd */
  if (C.zf) goto L_120bddbd;
  /* 120bdd9c mov ecx, dword ptr [0x120e1458] */
  ECX = (r32((uint32_t)(0x120e1458)));
  /* 120bdda2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 120bdda5 mov dword ptr [0x120e1458], ecx */
  w32((uint32_t)(0x120e1458), (ECX));
  /* 120bddab cmp dword ptr [0x120e1440], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1440))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bddb2 jne 0x120bddbd */
  if (!C.zf) goto L_120bddbd;
  /* 120bddb4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bddb7 mov dword ptr [0x120e1440], edx */
  w32((uint32_t)(0x120e1440), (EDX));
L_120bddbd:;
  /* 120bddbd jmp 0x120bddde */
  goto L_120bddde;
L_120bddbf:;
  /* 120bddbf mov eax, dword ptr [0x120e1458] */
  EAX = (r32((uint32_t)(0x120e1458)));
  /* 120bddc4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 120bddc7 mov dword ptr [0x120e1458], eax */
  w32((uint32_t)(0x120e1458), (EAX));
  /* 120bddcc cmp dword ptr [0x120e1440], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1440))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bddd3 jne 0x120bddde */
  if (!C.zf) goto L_120bddde;
  /* 120bddd5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bddd8 mov dword ptr [0x120e1440], ecx */
  w32((uint32_t)(0x120e1440), (ECX));
L_120bddde:;
  /* 120bddde jmp 0x120bde41 */
  goto L_120bde41;
L_120bdde0:;
  /* 120bdde0 cmp dword ptr [0x120e144c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e144c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bdde7 jne 0x120bde41 */
  if (!C.zf) goto L_120bde41;
  /* 120bdde9 cmp dword ptr [0x120e1448], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1448))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bddf0 je 0x120bde41 */
  if (C.zf) goto L_120bde41;
  /* 120bddf2 mov edx, dword ptr [0x120e1448] */
  EDX = (r32((uint32_t)(0x120e1448)));
  /* 120bddf8 push edx */
  push32((uint32_t)(EDX));
  /* 120bddf9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 120bddfc push eax */
  push32((uint32_t)(EAX));
  /* 120bddfd mov ecx, dword ptr [0x120e1450] */
  ECX = (r32((uint32_t)(0x120e1450)));
  /* 120bde03 push ecx */
  push32((uint32_t)(ECX));
  /* 120bde04 call 0x120c0f80 */
  push32(0x120bde09u); f_120c0f80();
  /* 120bde09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bde0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bde0e jne 0x120bde41 */
  if (!C.zf) goto L_120bde41;
  /* 120bde10 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bde12 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bde15 push edx */
  push32((uint32_t)(EDX));
  /* 120bde16 call 0x120be220 */
  push32(0x120bde1bu); f_120be220();
  /* 120bde1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bde1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bde20 je 0x120bde41 */
  if (C.zf) goto L_120bde41;
  /* 120bde22 mov eax, dword ptr [0x120e1458] */
  EAX = (r32((uint32_t)(0x120e1458)));
  /* 120bde27 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 120bde2a mov dword ptr [0x120e1458], eax */
  w32((uint32_t)(0x120e1458), (EAX));
  /* 120bde2f cmp dword ptr [0x120e1440], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1440))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bde36 jne 0x120bde41 */
  if (!C.zf) goto L_120bde41;
  /* 120bde38 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bde3b mov dword ptr [0x120e1440], ecx */
  w32((uint32_t)(0x120e1440), (ECX));
L_120bde41:;
  /* 120bde41 mov eax, dword ptr [0x120e1458] */
  EAX = (r32((uint32_t)(0x120e1458)));
  /* 120bde46 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 120bde49 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120bde4b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bde4d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_120bde4e:;
  /* 120bde4e mov esp, ebp */
  ESP = (EBP);
  /* 120bde50 pop ebp */
  EBP = (pop32());
  /* 120bde51 ret 4 */
  ESPCHK(0x120bdb30u, _esp0);
  ESP += 8; return;
}

/* FUN_1001de60 @ 0x120bde60 (116 bytes, 33 insns) */
void f_120bde60(void) {
  FTRACE(0x120bde60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bde60 push ebp */
  push32((uint32_t)(EBP));
  /* 120bde61 mov ebp, esp */
  EBP = (ESP);
  /* 120bde63 push ecx */
  push32((uint32_t)(ECX));
  /* 120bde64 mov eax, dword ptr [0x120e1450] */
  EAX = (r32((uint32_t)(0x120e1450)));
  /* 120bde69 push eax */
  push32((uint32_t)(EAX));
  /* 120bde6a call 0x120b1210 */
  push32(0x120bde6fu); f_120b1210();
  /* 120bde6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bde72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120bde74 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bde77 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 120bde7a mov dword ptr [0x120e144c], ecx */
  w32((uint32_t)(0x120e144c), (ECX));
  /* 120bde80 cmp dword ptr [0x120e144c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e144c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bde87 je 0x120bde92 */
  if (C.zf) goto L_120bde92;
  /* 120bde89 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 120bde90 jmp 0x120bdea4 */
  goto L_120bdea4;
L_120bde92:;
  /* 120bde92 mov edx, dword ptr [0x120e1450] */
  EDX = (r32((uint32_t)(0x120e1450)));
  /* 120bde98 push edx */
  push32((uint32_t)(EDX));
  /* 120bde99 call 0x120be510 */
  push32(0x120bde9eu); f_120be510();
  /* 120bde9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdea1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120bdea4:;
  /* 120bdea4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bdea7 mov dword ptr [0x120e1448], eax */
  w32((uint32_t)(0x120e1448), (EAX));
  /* 120bdeac push 1 */
  push32((uint32_t)(0x1u));
  /* 120bdeae push 0x120bdee0 */
  push32((uint32_t)(0x120bdee0u));
  /* 120bdeb3 call dword ptr [0x120e3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3354))), 0x120bdeb9u);
  /* 120bdeb9 mov ecx, dword ptr [0x120e1458] */
  ECX = (r32((uint32_t)(0x120e1458)));
  /* 120bdebf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 120bdec2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bdec4 jne 0x120bded0 */
  if (!C.zf) goto L_120bded0;
  /* 120bdec6 mov dword ptr [0x120e1458], 0 */
  w32((uint32_t)(0x120e1458), (0x0u));
L_120bded0:;
  /* 120bded0 mov esp, ebp */
  ESP = (EBP);
  /* 120bded2 pop ebp */
  EBP = (pop32());
  /* 120bded3 ret  */
  ESPCHK(0x120bde60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dee0 @ 0x120bdee0 (287 bytes, 86 insns) */
void f_120bdee0(void) {
  FTRACE(0x120bdee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bdee0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bdee1 mov ebp, esp */
  EBP = (ESP);
  /* 120bdee3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bdee6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bdee9 push eax */
  push32((uint32_t)(EAX));
  /* 120bdeea call 0x120be490 */
  push32(0x120bdeefu); f_120be490();
  /* 120bdeef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdef2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 120bdef5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 120bdef7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 120bdefa push ecx */
  push32((uint32_t)(ECX));
  /* 120bdefb mov edx, dword ptr [0x120e144c] */
  EDX = (r32((uint32_t)(0x120e144c)));
  /* 120bdf01 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120bdf03 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bdf05 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 120bdf0b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdf11 push edx */
  push32((uint32_t)(EDX));
  /* 120bdf12 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bdf15 push eax */
  push32((uint32_t)(EAX));
  /* 120bdf16 call dword ptr [0x120e1460] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e1460))), 0x120bdf1cu);
  /* 120bdf1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bdf1e jne 0x120bdf34 */
  if (!C.zf) goto L_120bdf34;
  /* 120bdf20 mov dword ptr [0x120e1458], 0 */
  w32((uint32_t)(0x120e1458), (0x0u));
  /* 120bdf2a mov eax, 1 */
  EAX = (0x1u);
  /* 120bdf2f jmp 0x120bdff9 */
  goto L_120bdff9;
L_120bdf34:;
  /* 120bdf34 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 120bdf37 push ecx */
  push32((uint32_t)(ECX));
  /* 120bdf38 mov edx, dword ptr [0x120e1450] */
  EDX = (r32((uint32_t)(0x120e1450)));
  /* 120bdf3e push edx */
  push32((uint32_t)(EDX));
  /* 120bdf3f call 0x120c0eb0 */
  push32(0x120bdf44u); f_120c0eb0();
  /* 120bdf44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdf47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bdf49 jne 0x120bdf89 */
  if (!C.zf) goto L_120bdf89;
  /* 120bdf4b cmp dword ptr [0x120e144c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e144c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bdf52 jne 0x120bdf66 */
  if (!C.zf) goto L_120bdf66;
  /* 120bdf54 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bdf56 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bdf59 push eax */
  push32((uint32_t)(EAX));
  /* 120bdf5a call 0x120be220 */
  push32(0x120bdf5fu); f_120be220();
  /* 120bdf5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdf62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bdf64 je 0x120bdf87 */
  if (C.zf) goto L_120bdf87;
L_120bdf66:;
  /* 120bdf66 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bdf69 mov dword ptr [0x120e145c], ecx */
  w32((uint32_t)(0x120e145c), (ECX));
  /* 120bdf6f mov edx, dword ptr [0x120e145c] */
  EDX = (r32((uint32_t)(0x120e145c)));
  /* 120bdf75 mov dword ptr [0x120e1440], edx */
  w32((uint32_t)(0x120e1440), (EDX));
  /* 120bdf7b mov eax, dword ptr [0x120e1458] */
  EAX = (r32((uint32_t)(0x120e1458)));
  /* 120bdf80 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 120bdf82 mov dword ptr [0x120e1458], eax */
  w32((uint32_t)(0x120e1458), (EAX));
L_120bdf87:;
  /* 120bdf87 jmp 0x120bdfec */
  goto L_120bdfec;
L_120bdf89:;
  /* 120bdf89 cmp dword ptr [0x120e144c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e144c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bdf90 jne 0x120bdfec */
  if (!C.zf) goto L_120bdfec;
  /* 120bdf92 cmp dword ptr [0x120e1448], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1448))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bdf99 je 0x120bdfec */
  if (C.zf) goto L_120bdfec;
  /* 120bdf9b mov ecx, dword ptr [0x120e1448] */
  ECX = (r32((uint32_t)(0x120e1448)));
  /* 120bdfa1 push ecx */
  push32((uint32_t)(ECX));
  /* 120bdfa2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 120bdfa5 push edx */
  push32((uint32_t)(EDX));
  /* 120bdfa6 mov eax, dword ptr [0x120e1450] */
  EAX = (r32((uint32_t)(0x120e1450)));
  /* 120bdfab push eax */
  push32((uint32_t)(EAX));
  /* 120bdfac call 0x120c0f80 */
  push32(0x120bdfb1u); f_120c0f80();
  /* 120bdfb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdfb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bdfb6 jne 0x120bdfec */
  if (!C.zf) goto L_120bdfec;
  /* 120bdfb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bdfba mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bdfbd push ecx */
  push32((uint32_t)(ECX));
  /* 120bdfbe call 0x120be220 */
  push32(0x120bdfc3u); f_120be220();
  /* 120bdfc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bdfc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bdfc8 je 0x120bdfec */
  if (C.zf) goto L_120bdfec;
  /* 120bdfca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120bdfcd mov dword ptr [0x120e145c], edx */
  w32((uint32_t)(0x120e145c), (EDX));
  /* 120bdfd3 mov eax, dword ptr [0x120e145c] */
  EAX = (r32((uint32_t)(0x120e145c)));
  /* 120bdfd8 mov dword ptr [0x120e1440], eax */
  w32((uint32_t)(0x120e1440), (EAX));
  /* 120bdfdd mov ecx, dword ptr [0x120e1458] */
  ECX = (r32((uint32_t)(0x120e1458)));
  /* 120bdfe3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 120bdfe6 mov dword ptr [0x120e1458], ecx */
  w32((uint32_t)(0x120e1458), (ECX));
L_120bdfec:;
  /* 120bdfec mov eax, dword ptr [0x120e1458] */
  EAX = (r32((uint32_t)(0x120e1458)));
  /* 120bdff1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 120bdff4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120bdff6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bdff8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_120bdff9:;
  /* 120bdff9 mov esp, ebp */
  ESP = (EBP);
  /* 120bdffb pop ebp */
  EBP = (pop32());
  /* 120bdffc ret 4 */
  ESPCHK(0x120bdee0u, _esp0);
  ESP += 8; return;
}

/* FUN_1001e000 @ 0x120be000 (69 bytes, 20 insns) */
void f_120be000(void) {
  FTRACE(0x120be000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120be000 push ebp */
  push32((uint32_t)(EBP));
  /* 120be001 mov ebp, esp */
  EBP = (ESP);
  /* 120be003 mov eax, dword ptr [0x120e1454] */
  EAX = (r32((uint32_t)(0x120e1454)));
  /* 120be008 push eax */
  push32((uint32_t)(EAX));
  /* 120be009 call 0x120b1210 */
  push32(0x120be00eu); f_120b1210();
  /* 120be00e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120be011 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120be013 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be016 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 120be019 mov dword ptr [0x120e1444], ecx */
  w32((uint32_t)(0x120e1444), (ECX));
  /* 120be01f push 1 */
  push32((uint32_t)(0x1u));
  /* 120be021 push 0x120be050 */
  push32((uint32_t)(0x120be050u));
  /* 120be026 call dword ptr [0x120e3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3354))), 0x120be02cu);
  /* 120be02c mov edx, dword ptr [0x120e1458] */
  EDX = (r32((uint32_t)(0x120e1458)));
  /* 120be032 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120be035 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120be037 jne 0x120be043 */
  if (!C.zf) goto L_120be043;
  /* 120be039 mov dword ptr [0x120e1458], 0 */
  w32((uint32_t)(0x120e1458), (0x0u));
L_120be043:;
  /* 120be043 pop ebp */
  EBP = (pop32());
  /* 120be044 ret  */
  ESPCHK(0x120be000u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e050 @ 0x120be050 (172 bytes, 54 insns) */
void f_120be050(void) {
  FTRACE(0x120be050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120be050 push ebp */
  push32((uint32_t)(EBP));
  /* 120be051 mov ebp, esp */
  EBP = (ESP);
  /* 120be053 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be059 push eax */
  push32((uint32_t)(EAX));
  /* 120be05a call 0x120be490 */
  push32(0x120be05fu); f_120be490();
  /* 120be05f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120be062 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 120be065 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 120be067 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 120be06a push ecx */
  push32((uint32_t)(ECX));
  /* 120be06b mov edx, dword ptr [0x120e1444] */
  EDX = (r32((uint32_t)(0x120e1444)));
  /* 120be071 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120be073 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be075 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 120be07b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be081 push edx */
  push32((uint32_t)(EDX));
  /* 120be082 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120be085 push eax */
  push32((uint32_t)(EAX));
  /* 120be086 call dword ptr [0x120e1460] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e1460))), 0x120be08cu);
  /* 120be08c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120be08e jne 0x120be0a1 */
  if (!C.zf) goto L_120be0a1;
  /* 120be090 mov dword ptr [0x120e1458], 0 */
  w32((uint32_t)(0x120e1458), (0x0u));
  /* 120be09a mov eax, 1 */
  EAX = (0x1u);
  /* 120be09f jmp 0x120be0f6 */
  goto L_120be0f6;
L_120be0a1:;
  /* 120be0a1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 120be0a4 push ecx */
  push32((uint32_t)(ECX));
  /* 120be0a5 mov edx, dword ptr [0x120e1454] */
  EDX = (r32((uint32_t)(0x120e1454)));
  /* 120be0ab push edx */
  push32((uint32_t)(EDX));
  /* 120be0ac call 0x120c0eb0 */
  push32(0x120be0b1u); f_120c0eb0();
  /* 120be0b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120be0b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120be0b6 jne 0x120be0e9 */
  if (!C.zf) goto L_120be0e9;
  /* 120be0b8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120be0bb push eax */
  push32((uint32_t)(EAX));
  /* 120be0bc call 0x120be1d0 */
  push32(0x120be0c1u); f_120be1d0();
  /* 120be0c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120be0c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120be0c6 je 0x120be0e9 */
  if (C.zf) goto L_120be0e9;
  /* 120be0c8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120be0cb mov dword ptr [0x120e145c], ecx */
  w32((uint32_t)(0x120e145c), (ECX));
  /* 120be0d1 mov edx, dword ptr [0x120e145c] */
  EDX = (r32((uint32_t)(0x120e145c)));
  /* 120be0d7 mov dword ptr [0x120e1440], edx */
  w32((uint32_t)(0x120e1440), (EDX));
  /* 120be0dd mov eax, dword ptr [0x120e1458] */
  EAX = (r32((uint32_t)(0x120e1458)));
  /* 120be0e2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 120be0e4 mov dword ptr [0x120e1458], eax */
  w32((uint32_t)(0x120e1458), (EAX));
L_120be0e9:;
  /* 120be0e9 mov eax, dword ptr [0x120e1458] */
  EAX = (r32((uint32_t)(0x120e1458)));
  /* 120be0ee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 120be0f1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120be0f3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be0f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_120be0f6:;
  /* 120be0f6 mov esp, ebp */
  ESP = (EBP);
  /* 120be0f8 pop ebp */
  EBP = (pop32());
  /* 120be0f9 ret 4 */
  ESPCHK(0x120be050u, _esp0);
  ESP += 8; return;
}

/* FUN_1001e100 @ 0x120be100 (43 bytes, 11 insns) */
void f_120be100(void) {
  FTRACE(0x120be100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120be100 push ebp */
  push32((uint32_t)(EBP));
  /* 120be101 mov ebp, esp */
  EBP = (ESP);
  /* 120be103 mov eax, dword ptr [0x120e1458] */
  EAX = (r32((uint32_t)(0x120e1458)));
  /* 120be108 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 120be10d mov dword ptr [0x120e1458], eax */
  w32((uint32_t)(0x120e1458), (EAX));
  /* 120be112 call dword ptr [0x120e3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3350))), 0x120be118u);
  /* 120be118 mov dword ptr [0x120e145c], eax */
  w32((uint32_t)(0x120e145c), (EAX));
  /* 120be11d mov ecx, dword ptr [0x120e145c] */
  ECX = (r32((uint32_t)(0x120e145c)));
  /* 120be123 mov dword ptr [0x120e1440], ecx */
  w32((uint32_t)(0x120e1440), (ECX));
  /* 120be129 pop ebp */
  EBP = (pop32());
  /* 120be12a ret  */
  ESPCHK(0x120be100u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e130 @ 0x120be130 (155 bytes, 57 insns) */
void f_120be130(void) {
  FTRACE(0x120be130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120be130 push ebp */
  push32((uint32_t)(EBP));
  /* 120be131 mov ebp, esp */
  EBP = (ESP);
  /* 120be133 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be136 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be13a je 0x120be15b */
  if (C.zf) goto L_120be15b;
  /* 120be13c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be13f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120be142 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120be144 je 0x120be15b */
  if (C.zf) goto L_120be15b;
  /* 120be146 push 0x120dcb08 */
  push32((uint32_t)(0x120dcb08u));
  /* 120be14b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be14e push edx */
  push32((uint32_t)(EDX));
  /* 120be14f call 0x120b5820 */
  push32(0x120be154u); f_120b5820();
  /* 120be154 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120be157 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120be159 jne 0x120be183 */
  if (!C.zf) goto L_120be183;
L_120be15b:;
  /* 120be15b push 8 */
  push32((uint32_t)(0x8u));
  /* 120be15d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 120be160 push eax */
  push32((uint32_t)(EAX));
  /* 120be161 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 120be166 mov ecx, dword ptr [0x120e145c] */
  ECX = (r32((uint32_t)(0x120e145c)));
  /* 120be16c push ecx */
  push32((uint32_t)(ECX));
  /* 120be16d call dword ptr [0x120e1460] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e1460))), 0x120be173u);
  /* 120be173 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120be175 jne 0x120be17b */
  if (!C.zf) goto L_120be17b;
  /* 120be177 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120be179 jmp 0x120be1c7 */
  goto L_120be1c7;
L_120be17b:;
  /* 120be17b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 120be17e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120be181 jmp 0x120be1bb */
  goto L_120be1bb;
L_120be183:;
  /* 120be183 push 0x120dcb04 */
  push32((uint32_t)(0x120dcb04u));
  /* 120be188 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be18b push eax */
  push32((uint32_t)(EAX));
  /* 120be18c call 0x120b5820 */
  push32(0x120be191u); f_120b5820();
  /* 120be191 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120be194 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120be196 jne 0x120be1bb */
  if (!C.zf) goto L_120be1bb;
  /* 120be198 push 8 */
  push32((uint32_t)(0x8u));
  /* 120be19a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 120be19d push ecx */
  push32((uint32_t)(ECX));
  /* 120be19e push 0xb */
  push32((uint32_t)(0xbu));
  /* 120be1a0 mov edx, dword ptr [0x120e145c] */
  EDX = (r32((uint32_t)(0x120e145c)));
  /* 120be1a6 push edx */
  push32((uint32_t)(EDX));
  /* 120be1a7 call dword ptr [0x120e1460] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e1460))), 0x120be1adu);
  /* 120be1ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120be1af jne 0x120be1b5 */
  if (!C.zf) goto L_120be1b5;
  /* 120be1b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120be1b3 jmp 0x120be1c7 */
  goto L_120be1c7;
L_120be1b5:;
  /* 120be1b5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 120be1b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_120be1bb:;
  /* 120be1bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be1be push ecx */
  push32((uint32_t)(ECX));
  /* 120be1bf call 0x120bb3a0 */
  push32(0x120be1c4u); f_120bb3a0();
  /* 120be1c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120be1c7:;
  /* 120be1c7 mov esp, ebp */
  ESP = (EBP);
  /* 120be1c9 pop ebp */
  EBP = (pop32());
  /* 120be1ca ret  */
  ESPCHK(0x120be130u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e1d0 @ 0x120be1d0 (79 bytes, 26 insns) */
void f_120be1d0(void) {
  FTRACE(0x120be1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120be1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120be1d1 mov ebp, esp */
  EBP = (ESP);
  /* 120be1d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be1d6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 120be1da mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 120be1de mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120be1e5 jmp 0x120be1f0 */
  goto L_120be1f0;
L_120be1e7:;
  /* 120be1e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120be1ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be1ed mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_120be1f0:;
  /* 120be1f0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be1f4 jae 0x120be216 */
  if (!C.cf) goto L_120be216;
  /* 120be1f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120be1f9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120be1ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120be202 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120be204 mov cx, word ptr [eax*2 + 0x120e0014] */
  CX = (r16((uint32_t)(EAX*2 + 0x120e0014)));
  /* 120be20c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be20e jne 0x120be214 */
  if (!C.zf) goto L_120be214;
  /* 120be210 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120be212 jmp 0x120be21b */
  goto L_120be21b;
L_120be214:;
  /* 120be214 jmp 0x120be1e7 */
  goto L_120be1e7;
L_120be216:;
  /* 120be216 mov eax, 1 */
  EAX = (0x1u);
L_120be21b:;
  /* 120be21b mov esp, ebp */
  ESP = (EBP);
  /* 120be21d pop ebp */
  EBP = (pop32());
  /* 120be21e ret  */
  ESPCHK(0x120be1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e220 @ 0x120be220 (135 bytes, 48 insns) */
void f_120be220(void) {
  FTRACE(0x120be220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120be220 push ebp */
  push32((uint32_t)(EBP));
  /* 120be221 mov ebp, esp */
  EBP = (ESP);
  /* 120be223 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be226 push esi */
  push32((uint32_t)(ESI));
  /* 120be227 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be22a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120be22f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 120be234 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120be239 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 120be23c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120be241 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120be244 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 120be246 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 120be249 push ecx */
  push32((uint32_t)(ECX));
  /* 120be24a push 1 */
  push32((uint32_t)(0x1u));
  /* 120be24c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120be24f push edx */
  push32((uint32_t)(EDX));
  /* 120be250 call dword ptr [0x120e1460] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e1460))), 0x120be256u);
  /* 120be256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120be258 jne 0x120be25e */
  if (!C.zf) goto L_120be25e;
  /* 120be25a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120be25c jmp 0x120be2a2 */
  goto L_120be2a2;
L_120be25e:;
  /* 120be25e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 120be261 push eax */
  push32((uint32_t)(EAX));
  /* 120be262 call 0x120be490 */
  push32(0x120be267u); f_120be490();
  /* 120be267 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120be26a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be26d je 0x120be29d */
  if (C.zf) goto L_120be29d;
  /* 120be26f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be273 je 0x120be29d */
  if (C.zf) goto L_120be29d;
  /* 120be275 mov ecx, dword ptr [0x120e1450] */
  ECX = (r32((uint32_t)(0x120e1450)));
  /* 120be27b push ecx */
  push32((uint32_t)(ECX));
  /* 120be27c call 0x120be510 */
  push32(0x120be281u); f_120be510();
  /* 120be281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120be284 mov esi, eax */
  ESI = (EAX);
  /* 120be286 mov edx, dword ptr [0x120e1450] */
  EDX = (r32((uint32_t)(0x120e1450)));
  /* 120be28c push edx */
  push32((uint32_t)(EDX));
  /* 120be28d call 0x120b1210 */
  push32(0x120be292u); f_120b1210();
  /* 120be292 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120be295 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be297 jne 0x120be29d */
  if (!C.zf) goto L_120be29d;
  /* 120be299 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120be29b jmp 0x120be2a2 */
  goto L_120be2a2;
L_120be29d:;
  /* 120be29d mov eax, 1 */
  EAX = (0x1u);
L_120be2a2:;
  /* 120be2a2 pop esi */
  ESI = (pop32());
  /* 120be2a3 mov esp, ebp */
  ESP = (EBP);
  /* 120be2a5 pop ebp */
  EBP = (pop32());
  /* 120be2a6 ret  */
  ESPCHK(0x120be220u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e2b0 @ 0x120be2b0 (77 bytes, 18 insns) */
void f_120be2b0(void) {
  FTRACE(0x120be2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120be2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120be2b1 mov ebp, esp */
  EBP = (ESP);
  /* 120be2b3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be2b9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 120be2c3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 120be2c9 push eax */
  push32((uint32_t)(EAX));
  /* 120be2ca call dword ptr [0x120e334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e334c))), 0x120be2d0u);
  /* 120be2d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120be2d2 je 0x120be2e9 */
  if (C.zf) goto L_120be2e9;
  /* 120be2d4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be2db jne 0x120be2e9 */
  if (!C.zf) goto L_120be2e9;
  /* 120be2dd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 120be2e7 jmp 0x120be2f3 */
  goto L_120be2f3;
L_120be2e9:;
  /* 120be2e9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_120be2f3:;
  /* 120be2f3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 120be2f9 mov esp, ebp */
  ESP = (EBP);
  /* 120be2fb pop ebp */
  EBP = (pop32());
  /* 120be2fc ret  */
  ESPCHK(0x120be2b0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x120be300 (388 bytes, 118 insns) */
void f_120be300(void) {
  FTRACE(0x120be300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120be300 push ebp */
  push32((uint32_t)(EBP));
  /* 120be301 mov ebp, esp */
  EBP = (ESP);
  /* 120be303 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be306 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120be30d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 120be314 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_120be31b:;
  /* 120be31b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120be31e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be321 jg 0x120be468 */
  if ((!C.zf&&C.sf==C.of)) goto L_120be468;
  /* 120be327 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120be32a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be32d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120be32e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be330 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120be332 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120be335 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120be338 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120be33b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be33e cmp edx, dword ptr [ecx + 0x120dfb70] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x120dfb70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be344 jne 0x120be43e */
  if (!C.zf) goto L_120be43e;
  /* 120be34a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120be34d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120be350 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be354 ja 0x120be377 */
  if ((!C.cf&&!C.zf)) goto L_120be377;
  /* 120be356 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be35a je 0x120be3e9 */
  if (C.zf) goto L_120be3e9;
  /* 120be360 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be364 je 0x120be394 */
  if (C.zf) goto L_120be394;
  /* 120be366 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be36a je 0x120be3b6 */
  if (C.zf) goto L_120be3b6;
  /* 120be36c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be370 je 0x120be3d8 */
  if (C.zf) goto L_120be3d8;
  /* 120be372 jmp 0x120be408 */
  goto L_120be408;
L_120be377:;
  /* 120be377 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be37e je 0x120be3a5 */
  if (C.zf) goto L_120be3a5;
  /* 120be380 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be387 je 0x120be3c7 */
  if (C.zf) goto L_120be3c7;
  /* 120be389 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be390 je 0x120be3fa */
  if (C.zf) goto L_120be3fa;
  /* 120be392 jmp 0x120be408 */
  goto L_120be408;
L_120be394:;
  /* 120be394 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120be397 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120be39a add ecx, 0x120dfb74 */
  { uint32_t _a=(ECX),_b=(0x120dfb74u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be3a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120be3a3 jmp 0x120be408 */
  goto L_120be408;
L_120be3a5:;
  /* 120be3a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120be3a8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120be3ab mov eax, dword ptr [edx + 0x120dfb7c] */
  EAX = (r32((uint32_t)(EDX + 0x120dfb7c)));
  /* 120be3b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120be3b4 jmp 0x120be408 */
  goto L_120be408;
L_120be3b6:;
  /* 120be3b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120be3b9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120be3bc add ecx, 0x120dfb80 */
  { uint32_t _a=(ECX),_b=(0x120dfb80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be3c2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120be3c5 jmp 0x120be408 */
  goto L_120be408;
L_120be3c7:;
  /* 120be3c7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120be3ca imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120be3cd mov eax, dword ptr [edx + 0x120dfb84] */
  EAX = (r32((uint32_t)(EDX + 0x120dfb84)));
  /* 120be3d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120be3d6 jmp 0x120be408 */
  goto L_120be408;
L_120be3d8:;
  /* 120be3d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120be3db imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120be3de add ecx, 0x120dfb88 */
  { uint32_t _a=(ECX),_b=(0x120dfb88u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be3e4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120be3e7 jmp 0x120be408 */
  goto L_120be408;
L_120be3e9:;
  /* 120be3e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120be3ec imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120be3ef add edx, 0x120dfb8c */
  { uint32_t _a=(EDX),_b=(0x120dfb8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be3f5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120be3f8 jmp 0x120be408 */
  goto L_120be408;
L_120be3fa:;
  /* 120be3fa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120be3fd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120be400 add eax, 0x120dfb94 */
  { uint32_t _a=(EAX),_b=(0x120dfb94u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be405 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120be408:;
  /* 120be408 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be40c je 0x120be414 */
  if (C.zf) goto L_120be414;
  /* 120be40e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be412 jge 0x120be416 */
  if ((C.sf==C.of)) goto L_120be416;
L_120be414:;
  /* 120be414 jmp 0x120be468 */
  goto L_120be468;
L_120be416:;
  /* 120be416 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120be419 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be41c push ecx */
  push32((uint32_t)(ECX));
  /* 120be41d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120be420 push edx */
  push32((uint32_t)(EDX));
  /* 120be421 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120be424 push eax */
  push32((uint32_t)(EAX));
  /* 120be425 call 0x120b1c00 */
  push32(0x120be42au); f_120b1c00();
  /* 120be42a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120be42d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120be430 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be433 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 120be437 mov eax, 1 */
  EAX = (0x1u);
  /* 120be43c jmp 0x120be47e */
  goto L_120be47e;
L_120be43e:;
  /* 120be43e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120be441 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120be444 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be447 cmp eax, dword ptr [edx + 0x120dfb70] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x120dfb70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be44d jae 0x120be45a */
  if (!C.cf) goto L_120be45a;
  /* 120be44f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120be452 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be455 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120be458 jmp 0x120be463 */
  goto L_120be463;
L_120be45a:;
  /* 120be45a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120be45d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be460 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_120be463:;
  /* 120be463 jmp 0x120be31b */
  goto L_120be31b;
L_120be468:;
  /* 120be468 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120be46b push eax */
  push32((uint32_t)(EAX));
  /* 120be46c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120be46f push ecx */
  push32((uint32_t)(ECX));
  /* 120be470 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120be473 push edx */
  push32((uint32_t)(EDX));
  /* 120be474 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be477 push eax */
  push32((uint32_t)(EAX));
  /* 120be478 call dword ptr [0x120e3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3358))), 0x120be47eu);
L_120be47e:;
  /* 120be47e mov esp, ebp */
  ESP = (EBP);
  /* 120be480 pop ebp */
  EBP = (pop32());
  /* 120be481 ret 0x10 */
  ESPCHK(0x120be300u, _esp0);
  ESP += 20; return;
}

/* FUN_1001e490 @ 0x120be490 (118 bytes, 42 insns) */
void f_120be490(void) {
  FTRACE(0x120be490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120be490 push ebp */
  push32((uint32_t)(EBP));
  /* 120be491 mov ebp, esp */
  EBP = (ESP);
  /* 120be493 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be496 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120be49d:;
  /* 120be49d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be4a0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120be4a2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 120be4a5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120be4a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be4ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be4af mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120be4b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120be4b4 je 0x120be4ff */
  if (C.zf) goto L_120be4ff;
  /* 120be4b6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120be4ba cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be4bd jl 0x120be4d2 */
  if ((C.sf!=C.of)) goto L_120be4d2;
  /* 120be4bf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120be4c3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be4c6 jg 0x120be4d2 */
  if ((!C.zf&&C.sf==C.of)) goto L_120be4d2;
  /* 120be4c8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120be4cb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120be4cd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 120be4d0 jmp 0x120be4ec */
  goto L_120be4ec;
L_120be4d2:;
  /* 120be4d2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120be4d6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be4d9 jl 0x120be4ec */
  if ((C.sf!=C.of)) goto L_120be4ec;
  /* 120be4db movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120be4df cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be4e2 jg 0x120be4ec */
  if ((!C.zf&&C.sf==C.of)) goto L_120be4ec;
  /* 120be4e4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120be4e7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120be4e9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_120be4ec:;
  /* 120be4ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120be4ef shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 120be4f2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120be4f6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 120be4fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120be4fd jmp 0x120be49d */
  goto L_120be49d;
L_120be4ff:;
  /* 120be4ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120be502 mov esp, ebp */
  ESP = (EBP);
  /* 120be504 pop ebp */
  EBP = (pop32());
  /* 120be505 ret  */
  ESPCHK(0x120be490u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x120be510 (101 bytes, 36 insns) */
void f_120be510(void) {
  FTRACE(0x120be510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120be510 push ebp */
  push32((uint32_t)(EBP));
  /* 120be511 mov ebp, esp */
  EBP = (ESP);
  /* 120be513 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be516 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120be51d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be520 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120be522 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 120be525 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be528 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be52b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_120be52e:;
  /* 120be52e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 120be532 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be535 jl 0x120be540 */
  if ((C.sf!=C.of)) goto L_120be540;
  /* 120be537 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 120be53b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be53e jle 0x120be552 */
  if ((C.zf||C.sf!=C.of)) goto L_120be552;
L_120be540:;
  /* 120be540 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 120be544 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be547 jl 0x120be56e */
  if ((C.sf!=C.of)) goto L_120be56e;
  /* 120be549 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 120be54d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be550 jg 0x120be56e */
  if ((!C.zf&&C.sf==C.of)) goto L_120be56e;
L_120be552:;
  /* 120be552 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120be555 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be558 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120be55b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be55e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120be560 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 120be563 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be566 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be569 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 120be56c jmp 0x120be52e */
  goto L_120be52e;
L_120be56e:;
  /* 120be56e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120be571 mov esp, ebp */
  ESP = (EBP);
  /* 120be573 pop ebp */
  EBP = (pop32());
  /* 120be574 ret  */
  ESPCHK(0x120be510u, _esp0);
  ESP += 4; return;
}

