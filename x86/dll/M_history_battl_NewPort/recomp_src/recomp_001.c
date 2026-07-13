#include "recomp.h"

/* FUN_10006e50 @ 0x12e76e50 (151 bytes, 46 insns) */
void f_12e76e50(void) {
  FTRACE(0x12e76e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12e76e51 mov ebp, esp */
  EBP = (ESP);
  /* 12e76e53 push ecx */
  push32((uint32_t)(ECX));
  /* 12e76e54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e76e57 cmp dword ptr [eax*4 + 0x12e8db60], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12e8db60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76e5f jne 0x12e76ed2 */
  if (!C.zf) goto L_12e76ed2;
  /* 12e76e61 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12e76e66 push 0x12e8af00 */
  push32((uint32_t)(0x12e8af00u));
  /* 12e76e6b push 2 */
  push32((uint32_t)(0x2u));
  /* 12e76e6d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12e76e6f call 0x12e73450 */
  push32(0x12e76e74u); f_12e73450();
  /* 12e76e74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76e77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e76e7a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76e7e jne 0x12e76e8a */
  if (!C.zf) goto L_12e76e8a;
  /* 12e76e80 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12e76e82 call 0x12e723c0 */
  push32(0x12e76e87u); f_12e723c0();
  /* 12e76e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e76e8a:;
  /* 12e76e8a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12e76e8c call 0x12e76e50 */
  push32(0x12e76e91u); f_12e76e50();
  /* 12e76e91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76e94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e76e97 cmp dword ptr [ecx*4 + 0x12e8db60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12e8db60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76e9f jne 0x12e76eba */
  if (!C.zf) goto L_12e76eba;
  /* 12e76ea1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76ea4 push edx */
  push32((uint32_t)(EDX));
  /* 12e76ea5 call dword ptr [0x12e9239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9239c))), 0x12e76eabu);
  /* 12e76eab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e76eae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76eb1 mov dword ptr [eax*4 + 0x12e8db60], ecx */
  w32((uint32_t)(EAX*4 + 0x12e8db60), (ECX));
  /* 12e76eb8 jmp 0x12e76ec8 */
  goto L_12e76ec8;
L_12e76eba:;
  /* 12e76eba push 2 */
  push32((uint32_t)(0x2u));
  /* 12e76ebc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76ebf push edx */
  push32((uint32_t)(EDX));
  /* 12e76ec0 call 0x12e73ee0 */
  push32(0x12e76ec5u); f_12e73ee0();
  /* 12e76ec5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e76ec8:;
  /* 12e76ec8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12e76eca call 0x12e76ef0 */
  push32(0x12e76ecfu); f_12e76ef0();
  /* 12e76ecf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e76ed2:;
  /* 12e76ed2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e76ed5 mov ecx, dword ptr [eax*4 + 0x12e8db60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e8db60)));
  /* 12e76edc push ecx */
  push32((uint32_t)(ECX));
  /* 12e76edd call dword ptr [0x12e923a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e923a0))), 0x12e76ee3u);
  /* 12e76ee3 mov esp, ebp */
  ESP = (EBP);
  /* 12e76ee5 pop ebp */
  EBP = (pop32());
  /* 12e76ee6 ret  */
  ESPCHK(0x12e76e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ef0 @ 0x12e76ef0 (22 bytes, 8 insns) */
void f_12e76ef0(void) {
  FTRACE(0x12e76ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e76ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12e76ef3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e76ef6 mov ecx, dword ptr [eax*4 + 0x12e8db60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e8db60)));
  /* 12e76efd push ecx */
  push32((uint32_t)(ECX));
  /* 12e76efe call dword ptr [0x12e92350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92350))), 0x12e76f04u);
  /* 12e76f04 pop ebp */
  EBP = (pop32());
  /* 12e76f05 ret  */
  ESPCHK(0x12e76ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f10 @ 0x12e76f10 (26 bytes, 10 insns) */
void f_12e76f10(void) {
  FTRACE(0x12e76f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12e76f11 mov ebp, esp */
  EBP = (ESP);
  /* 12e76f13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e76f16 push eax */
  push32((uint32_t)(EAX));
  /* 12e76f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e76f19 call dword ptr [0x12e92300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92300))), 0x12e76f1fu);
  /* 12e76f1f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12e76f24 call dword ptr [0x12e92330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92330))), 0x12e76f2au);
  /* 12e76f2a pop ebp */
  EBP = (pop32());
  /* 12e76f2b ret  */
  ESPCHK(0x12e76f10u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12e76f30 (446 bytes, 130 insns) */
void f_12e76f30(void) {
  FTRACE(0x12e76f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76f30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e76f31 mov ebp, esp */
  EBP = (ESP);
  /* 12e76f33 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e76f36 call 0x12e72e90 */
  push32(0x12e76f3bu); f_12e72e90();
  /* 12e76f3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e76f3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e76f41 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12e76f44 push ecx */
  push32((uint32_t)(ECX));
  /* 12e76f45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e76f48 push edx */
  push32((uint32_t)(EDX));
  /* 12e76f49 call 0x12e770f0 */
  push32(0x12e76f4eu); f_12e770f0();
  /* 12e76f4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76f51 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e76f54 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76f58 je 0x12e76f63 */
  if (C.zf) goto L_12e76f63;
  /* 12e76f5a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e76f5d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76f61 jne 0x12e76f72 */
  if (!C.zf) goto L_12e76f72;
L_12e76f63:;
  /* 12e76f63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e76f66 push ecx */
  push32((uint32_t)(ECX));
  /* 12e76f67 call dword ptr [0x12e922fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922fc))), 0x12e76f6du);
  /* 12e76f6d jmp 0x12e770ea */
  goto L_12e770ea;
L_12e76f72:;
  /* 12e76f72 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e76f75 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76f79 jne 0x12e76f8f */
  if (!C.zf) goto L_12e76f8f;
  /* 12e76f7b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e76f7e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12e76f85 mov eax, 1 */
  EAX = (0x1u);
  /* 12e76f8a jmp 0x12e770ea */
  goto L_12e770ea;
L_12e76f8f:;
  /* 12e76f8f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e76f92 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76f96 jne 0x12e76fa0 */
  if (!C.zf) goto L_12e76fa0;
  /* 12e76f98 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e76f9b jmp 0x12e770ea */
  goto L_12e770ea;
L_12e76fa0:;
  /* 12e76fa0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e76fa3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e76fa6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e76fa9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e76fac mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 12e76faf mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12e76fb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e76fb5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e76fb8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 12e76fbb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e76fbe cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76fc2 jne 0x12e770c7 */
  if (!C.zf) goto L_12e770c7;
  /* 12e76fc8 mov eax, dword ptr [0x12e8dc98] */
  EAX = (r32((uint32_t)(0x12e8dc98)));
  /* 12e76fcd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e76fd0 jmp 0x12e76fdb */
  goto L_12e76fdb;
L_12e76fd2:;
  /* 12e76fd2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e76fd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76fd8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12e76fdb:;
  /* 12e76fdb mov edx, dword ptr [0x12e8dc98] */
  EDX = (r32((uint32_t)(0x12e8dc98)));
  /* 12e76fe1 add edx, dword ptr [0x12e8dc9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e8dc9c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76fe7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76fea jge 0x12e77002 */
  if ((C.sf==C.of)) goto L_12e77002;
  /* 12e76fec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e76fef imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e76ff2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e76ff5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12e76ff8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12e77000 jmp 0x12e76fd2 */
  goto L_12e76fd2;
L_12e77002:;
  /* 12e77002 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e77005 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12e77008 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7700b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7700e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77014 jne 0x12e77025 */
  if (!C.zf) goto L_12e77025;
  /* 12e77016 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e77019 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12e77020 jmp 0x12e770ad */
  goto L_12e770ad;
L_12e77025:;
  /* 12e77025 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e77028 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7702e jne 0x12e7703c */
  if (!C.zf) goto L_12e7703c;
  /* 12e77030 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e77033 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 12e7703a jmp 0x12e770ad */
  goto L_12e770ad;
L_12e7703c:;
  /* 12e7703c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7703f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77045 jne 0x12e77053 */
  if (!C.zf) goto L_12e77053;
  /* 12e77047 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7704a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12e77051 jmp 0x12e770ad */
  goto L_12e770ad;
L_12e77053:;
  /* 12e77053 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e77056 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7705c jne 0x12e7706a */
  if (!C.zf) goto L_12e7706a;
  /* 12e7705e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e77061 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12e77068 jmp 0x12e770ad */
  goto L_12e770ad;
L_12e7706a:;
  /* 12e7706a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7706d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77073 jne 0x12e77081 */
  if (!C.zf) goto L_12e77081;
  /* 12e77075 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e77078 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 12e7707f jmp 0x12e770ad */
  goto L_12e770ad;
L_12e77081:;
  /* 12e77081 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e77084 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7708a jne 0x12e77098 */
  if (!C.zf) goto L_12e77098;
  /* 12e7708c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7708f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12e77096 jmp 0x12e770ad */
  goto L_12e770ad;
L_12e77098:;
  /* 12e77098 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7709b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e770a1 jne 0x12e770ad */
  if (!C.zf) goto L_12e770ad;
  /* 12e770a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e770a6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_12e770ad:;
  /* 12e770ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e770b0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12e770b3 push edx */
  push32((uint32_t)(EDX));
  /* 12e770b4 push 8 */
  push32((uint32_t)(0x8u));
  /* 12e770b6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12e770b9u);
  /* 12e770b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e770bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e770bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e770c2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12e770c5 jmp 0x12e770de */
  goto L_12e770de;
L_12e770c7:;
  /* 12e770c7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e770ca mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12e770d1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e770d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e770d7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e770d8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12e770dbu);
  /* 12e770db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e770de:;
  /* 12e770de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e770e1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e770e4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12e770e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12e770ea:;
  /* 12e770ea mov esp, ebp */
  ESP = (EBP);
  /* 12e770ec pop ebp */
  EBP = (pop32());
  /* 12e770ed ret  */
  ESPCHK(0x12e76f30u, _esp0);
  ESP += 4; return;
}

/* FUN_100070f0 @ 0x12e770f0 (89 bytes, 35 insns) */
void f_12e770f0(void) {
  FTRACE(0x12e770f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e770f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e770f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e770f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e770f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e770f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e770fa:;
  /* 12e770fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e770fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e770ff cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77102 je 0x12e77122 */
  if (C.zf) goto L_12e77122;
  /* 12e77104 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e77107 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7710a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7710d mov ecx, dword ptr [0x12e8dca4] */
  ECX = (r32((uint32_t)(0x12e8dca4)));
  /* 12e77113 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e77116 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e77119 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7711b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7711e jae 0x12e77122 */
  if (!C.cf) goto L_12e77122;
  /* 12e77120 jmp 0x12e770fa */
  goto L_12e770fa;
L_12e77122:;
  /* 12e77122 mov eax, dword ptr [0x12e8dca4] */
  EAX = (r32((uint32_t)(0x12e8dca4)));
  /* 12e77127 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7712a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7712d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7712f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77132 jae 0x12e7713e */
  if (!C.cf) goto L_12e7713e;
  /* 12e77134 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e77137 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e77139 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7713c je 0x12e77142 */
  if (C.zf) goto L_12e77142;
L_12e7713e:;
  /* 12e7713e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e77140 jmp 0x12e77145 */
  goto L_12e77145;
L_12e77142:;
  /* 12e77142 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e77145:;
  /* 12e77145 mov esp, ebp */
  ESP = (EBP);
  /* 12e77147 pop ebp */
  EBP = (pop32());
  /* 12e77148 ret  */
  ESPCHK(0x12e770f0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12e77150 (48 bytes, 17 insns) */
void f_12e77150(void) {
  FTRACE(0x12e77150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e77150 push ebp */
  push32((uint32_t)(EBP));
  /* 12e77151 mov ebp, esp */
  EBP = (ESP);
  /* 12e77153 push ecx */
  push32((uint32_t)(ECX));
  /* 12e77154 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e77156 call 0x12e76e50 */
  push32(0x12e7715bu); f_12e76e50();
  /* 12e7715b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7715e mov eax, dword ptr [0x12e8f6bc] */
  EAX = (r32((uint32_t)(0x12e8f6bc)));
  /* 12e77163 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e77166 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77169 mov dword ptr [0x12e8f6bc], ecx */
  w32((uint32_t)(0x12e8f6bc), (ECX));
  /* 12e7716f push 9 */
  push32((uint32_t)(0x9u));
  /* 12e77171 call 0x12e76ef0 */
  push32(0x12e77176u); f_12e76ef0();
  /* 12e77176 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77179 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7717c mov esp, ebp */
  ESP = (EBP);
  /* 12e7717e pop ebp */
  EBP = (pop32());
  /* 12e7717f ret  */
  ESPCHK(0x12e77150u, _esp0);
  ESP += 4; return;
}

/* FUN_10007180 @ 0x12e77180 (10 bytes, 5 insns) */
void f_12e77180(void) {
  FTRACE(0x12e77180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e77180 push ebp */
  push32((uint32_t)(EBP));
  /* 12e77181 mov ebp, esp */
  EBP = (ESP);
  /* 12e77183 mov eax, dword ptr [0x12e8f6bc] */
  EAX = (r32((uint32_t)(0x12e8f6bc)));
  /* 12e77188 pop ebp */
  EBP = (pop32());
  /* 12e77189 ret  */
  ESPCHK(0x12e77180u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12e77190 (45 bytes, 19 insns) */
void f_12e77190(void) {
  FTRACE(0x12e77190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e77190 push ebp */
  push32((uint32_t)(EBP));
  /* 12e77191 mov ebp, esp */
  EBP = (ESP);
  /* 12e77193 push ecx */
  push32((uint32_t)(ECX));
  /* 12e77194 mov eax, dword ptr [0x12e8f6bc] */
  EAX = (r32((uint32_t)(0x12e8f6bc)));
  /* 12e77199 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7719c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e771a0 je 0x12e771b0 */
  if (C.zf) goto L_12e771b0;
  /* 12e771a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e771a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e771a6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12e771a9u);
  /* 12e771a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e771ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e771ae jne 0x12e771b4 */
  if (!C.zf) goto L_12e771b4;
L_12e771b0:;
  /* 12e771b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e771b2 jmp 0x12e771b9 */
  goto L_12e771b9;
L_12e771b4:;
  /* 12e771b4 mov eax, 1 */
  EAX = (0x1u);
L_12e771b9:;
  /* 12e771b9 mov esp, ebp */
  ESP = (EBP);
  /* 12e771bb pop ebp */
  EBP = (pop32());
  /* 12e771bc ret  */
  ESPCHK(0x12e77190u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12e771c0 (88 bytes, 40 insns) */
void f_12e771c0(void) {
  FTRACE(0x12e771c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e771c0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12e771c4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e771c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e771ca je 0x12e77213 */
  if (C.zf) goto L_12e77213;
  /* 12e771cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e771ce mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12e771d2 push edi */
  push32((uint32_t)(EDI));
  /* 12e771d3 mov edi, ecx */
  EDI = (ECX);
  /* 12e771d5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e771d8 jb 0x12e77207 */
  if (C.cf) goto L_12e77207;
  /* 12e771da neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e771dc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12e771df je 0x12e771e9 */
  if (C.zf) goto L_12e771e9;
  /* 12e771e1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12e771e3:;
  /* 12e771e3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e771e5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e771e6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e771e7 jne 0x12e771e3 */
  if (!C.zf) goto L_12e771e3;
L_12e771e9:;
  /* 12e771e9 mov ecx, eax */
  ECX = (EAX);
  /* 12e771eb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12e771ee add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e771f0 mov ecx, eax */
  ECX = (EAX);
  /* 12e771f2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12e771f5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e771f7 mov ecx, edx */
  ECX = (EDX);
  /* 12e771f9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12e771fc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e771ff je 0x12e77207 */
  if (C.zf) goto L_12e77207;
  /* 12e77201 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e77203 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e77205 je 0x12e7720d */
  if (C.zf) goto L_12e7720d;
L_12e77207:;
  /* 12e77207 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e77209 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e7720a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12e7720b jne 0x12e77207 */
  if (!C.zf) goto L_12e77207;
L_12e7720d:;
  /* 12e7720d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e77211 pop edi */
  EDI = (pop32());
  /* 12e77212 ret  */
  ESPCHK(0x12e771c0u, _esp0);
  ESP += 4; return;
L_12e77213:;
  /* 12e77213 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e77217 ret  */
  ESPCHK(0x12e771c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007220 @ 0x12e77220 (23 bytes, 10 insns) */
void f_12e77220(void) {
  FTRACE(0x12e77220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e77220 push ebp */
  push32((uint32_t)(EBP));
  /* 12e77221 mov ebp, esp */
  EBP = (ESP);
  /* 12e77223 mov eax, dword ptr [0x12e8f6b8] */
  EAX = (r32((uint32_t)(0x12e8f6b8)));
  /* 12e77228 push eax */
  push32((uint32_t)(EAX));
  /* 12e77229 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7722c push ecx */
  push32((uint32_t)(ECX));
  /* 12e7722d call 0x12e77240 */
  push32(0x12e77232u); f_12e77240();
  /* 12e77232 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77235 pop ebp */
  EBP = (pop32());
  /* 12e77236 ret  */
  ESPCHK(0x12e77220u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12e77240 (87 bytes, 34 insns) */
void f_12e77240(void) {
  FTRACE(0x12e77240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e77240 push ebp */
  push32((uint32_t)(EBP));
  /* 12e77241 mov ebp, esp */
  EBP = (ESP);
  /* 12e77243 push ecx */
  push32((uint32_t)(ECX));
  /* 12e77244 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77248 jbe 0x12e7724e */
  if ((C.cf||C.zf)) goto L_12e7724e;
  /* 12e7724a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7724c jmp 0x12e77293 */
  goto L_12e77293;
L_12e7724e:;
  /* 12e7724e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77252 ja 0x12e77265 */
  if ((!C.cf&&!C.zf)) goto L_12e77265;
  /* 12e77254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77257 push eax */
  push32((uint32_t)(EAX));
  /* 12e77258 call 0x12e772a0 */
  push32(0x12e7725du); f_12e772a0();
  /* 12e7725d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77260 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e77263 jmp 0x12e7726c */
  goto L_12e7726c;
L_12e77265:;
  /* 12e77265 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e7726c:;
  /* 12e7726c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77270 jne 0x12e77278 */
  if (!C.zf) goto L_12e77278;
  /* 12e77272 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77276 jne 0x12e7727d */
  if (!C.zf) goto L_12e7727d;
L_12e77278:;
  /* 12e77278 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7727b jmp 0x12e77293 */
  goto L_12e77293;
L_12e7727d:;
  /* 12e7727d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77280 push ecx */
  push32((uint32_t)(ECX));
  /* 12e77281 call 0x12e77190 */
  push32(0x12e77286u); f_12e77190();
  /* 12e77286 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77289 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7728b jne 0x12e77291 */
  if (!C.zf) goto L_12e77291;
  /* 12e7728d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7728f jmp 0x12e77293 */
  goto L_12e77293;
L_12e77291:;
  /* 12e77291 jmp 0x12e7724e */
  goto L_12e7724e;
L_12e77293:;
  /* 12e77293 mov esp, ebp */
  ESP = (EBP);
  /* 12e77295 pop ebp */
  EBP = (pop32());
  /* 12e77296 ret  */
  ESPCHK(0x12e77240u, _esp0);
  ESP += 4; return;
}

/* FUN_100072a0 @ 0x12e772a0 (109 bytes, 37 insns) */
void f_12e772a0(void) {
  FTRACE(0x12e772a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e772a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e772a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e772a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e772a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e772a7 cmp eax, dword ptr [0x12e8dcb4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e8dcb4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e772ad ja 0x12e772dd */
  if ((!C.cf&&!C.zf)) goto L_12e772dd;
  /* 12e772af push 9 */
  push32((uint32_t)(0x9u));
  /* 12e772b1 call 0x12e76e50 */
  push32(0x12e772b6u); f_12e76e50();
  /* 12e772b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e772b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e772bc push ecx */
  push32((uint32_t)(ECX));
  /* 12e772bd call 0x12e77de0 */
  push32(0x12e772c2u); f_12e77de0();
  /* 12e772c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e772c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e772c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e772ca call 0x12e76ef0 */
  push32(0x12e772cfu); f_12e76ef0();
  /* 12e772cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e772d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e772d6 je 0x12e772dd */
  if (C.zf) goto L_12e772dd;
  /* 12e772d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e772db jmp 0x12e77309 */
  goto L_12e77309;
L_12e772dd:;
  /* 12e772dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e772e1 jne 0x12e772ea */
  if (!C.zf) goto L_12e772ea;
  /* 12e772e3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_12e772ea:;
  /* 12e772ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e772ed add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e772f0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12e772f3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e772f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e772f9 push eax */
  push32((uint32_t)(EAX));
  /* 12e772fa push 0 */
  push32((uint32_t)(0x0u));
  /* 12e772fc mov ecx, dword ptr [0x12e90e6c] */
  ECX = (r32((uint32_t)(0x12e90e6c)));
  /* 12e77302 push ecx */
  push32((uint32_t)(ECX));
  /* 12e77303 call dword ptr [0x12e922f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922f8))), 0x12e77309u);
L_12e77309:;
  /* 12e77309 mov esp, ebp */
  ESP = (EBP);
  /* 12e7730b pop ebp */
  EBP = (pop32());
  /* 12e7730c ret  */
  ESPCHK(0x12e772a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007310 @ 0x12e77310 (10 bytes, 5 insns) */
void f_12e77310(void) {
  FTRACE(0x12e77310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e77310 push ebp */
  push32((uint32_t)(EBP));
  /* 12e77311 mov ebp, esp */
  EBP = (ESP);
  /* 12e77313 mov eax, 1 */
  EAX = (0x1u);
  /* 12e77318 pop ebp */
  EBP = (pop32());
  /* 12e77319 ret  */
  ESPCHK(0x12e77310u, _esp0);
  ESP += 4; return;
}

/* FUN_10007320 @ 0x12e77320 (173 bytes, 59 insns) */
void f_12e77320(void) {
  FTRACE(0x12e77320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e77320 push ebp */
  push32((uint32_t)(EBP));
  /* 12e77321 mov ebp, esp */
  EBP = (ESP);
  /* 12e77323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77326 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7732a jbe 0x12e77333 */
  if ((C.cf||C.zf)) goto L_12e77333;
  /* 12e7732c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7732e jmp 0x12e773c9 */
  goto L_12e773c9;
L_12e77333:;
  /* 12e77333 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e77335 call 0x12e76e50 */
  push32(0x12e7733au); f_12e76e50();
  /* 12e7733a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7733d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77340 push eax */
  push32((uint32_t)(EAX));
  /* 12e77341 call 0x12e77750 */
  push32(0x12e77346u); f_12e77750();
  /* 12e77346 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77349 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e7734c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77350 je 0x12e77391 */
  if (C.zf) goto L_12e77391;
  /* 12e77352 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e77359 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7735c cmp ecx, dword ptr [0x12e8dcb4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e8dcb4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77362 ja 0x12e77382 */
  if ((!C.cf&&!C.zf)) goto L_12e77382;
  /* 12e77364 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e77367 push edx */
  push32((uint32_t)(EDX));
  /* 12e77368 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7736b push eax */
  push32((uint32_t)(EAX));
  /* 12e7736c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7736f push ecx */
  push32((uint32_t)(ECX));
  /* 12e77370 call 0x12e78620 */
  push32(0x12e77375u); f_12e78620();
  /* 12e77375 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7737a je 0x12e77382 */
  if (C.zf) goto L_12e77382;
  /* 12e7737c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7737f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e77382:;
  /* 12e77382 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e77384 call 0x12e76ef0 */
  push32(0x12e77389u); f_12e76ef0();
  /* 12e77389 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7738c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7738f jmp 0x12e773c9 */
  goto L_12e773c9;
L_12e77391:;
  /* 12e77391 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e77393 call 0x12e76ef0 */
  push32(0x12e77398u); f_12e76ef0();
  /* 12e77398 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7739b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7739f jne 0x12e773a8 */
  if (!C.zf) goto L_12e773a8;
  /* 12e773a1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12e773a8:;
  /* 12e773a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e773ab add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e773ae and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12e773b0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12e773b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e773b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e773b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e773ba push edx */
  push32((uint32_t)(EDX));
  /* 12e773bb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12e773bd mov eax, dword ptr [0x12e90e6c] */
  EAX = (r32((uint32_t)(0x12e90e6c)));
  /* 12e773c2 push eax */
  push32((uint32_t)(EAX));
  /* 12e773c3 call dword ptr [0x12e922f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922f4))), 0x12e773c9u);
L_12e773c9:;
  /* 12e773c9 mov esp, ebp */
  ESP = (EBP);
  /* 12e773cb pop ebp */
  EBP = (pop32());
  /* 12e773cc ret  */
  ESPCHK(0x12e77320u, _esp0);
  ESP += 4; return;
}

/* FUN_100073d0 @ 0x12e773d0 (490 bytes, 165 insns) */
void f_12e773d0(void) {
  FTRACE(0x12e773d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e773d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e773d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e773d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e773d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e773da jne 0x12e773ed */
  if (!C.zf) goto L_12e773ed;
  /* 12e773dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e773df push eax */
  push32((uint32_t)(EAX));
  /* 12e773e0 call 0x12e77220 */
  push32(0x12e773e5u); f_12e77220();
  /* 12e773e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e773e8 jmp 0x12e775b6 */
  goto L_12e775b6;
L_12e773ed:;
  /* 12e773ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e773f1 jne 0x12e77406 */
  if (!C.zf) goto L_12e77406;
  /* 12e773f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e773f6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e773f7 call 0x12e775c0 */
  push32(0x12e773fcu); f_12e775c0();
  /* 12e773fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e773ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e77401 jmp 0x12e775b6 */
  goto L_12e775b6;
L_12e77406:;
  /* 12e77406 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e7740d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77411 ja 0x12e77589 */
  if ((!C.cf&&!C.zf)) goto L_12e77589;
  /* 12e77417 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e77419 call 0x12e76e50 */
  push32(0x12e7741eu); f_12e76e50();
  /* 12e7741e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77421 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77424 push edx */
  push32((uint32_t)(EDX));
  /* 12e77425 call 0x12e77750 */
  push32(0x12e7742au); f_12e77750();
  /* 12e7742a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7742d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e77430 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77434 je 0x12e7754c */
  if (C.zf) goto L_12e7754c;
  /* 12e7743a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7743d cmp eax, dword ptr [0x12e8dcb4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e8dcb4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77443 ja 0x12e774c0 */
  if ((!C.cf&&!C.zf)) goto L_12e774c0;
  /* 12e77445 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e77448 push ecx */
  push32((uint32_t)(ECX));
  /* 12e77449 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7744c push edx */
  push32((uint32_t)(EDX));
  /* 12e7744d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e77450 push eax */
  push32((uint32_t)(EAX));
  /* 12e77451 call 0x12e78620 */
  push32(0x12e77456u); f_12e78620();
  /* 12e77456 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7745b je 0x12e77465 */
  if (C.zf) goto L_12e77465;
  /* 12e7745d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77460 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e77463 jmp 0x12e774c0 */
  goto L_12e774c0;
L_12e77465:;
  /* 12e77465 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e77468 push edx */
  push32((uint32_t)(EDX));
  /* 12e77469 call 0x12e77de0 */
  push32(0x12e7746eu); f_12e77de0();
  /* 12e7746e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77471 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e77474 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77478 je 0x12e774c0 */
  if (C.zf) goto L_12e774c0;
  /* 12e7747a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7747d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12e77480 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77483 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e77486 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e77489 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7748c jae 0x12e77496 */
  if (!C.cf) goto L_12e77496;
  /* 12e7748e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e77491 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e77494 jmp 0x12e7749c */
  goto L_12e7749c;
L_12e77496:;
  /* 12e77496 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e77499 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12e7749c:;
  /* 12e7749c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7749f push edx */
  push32((uint32_t)(EDX));
  /* 12e774a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e774a3 push eax */
  push32((uint32_t)(EAX));
  /* 12e774a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e774a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e774a8 call 0x12e79d30 */
  push32(0x12e774adu); f_12e79d30();
  /* 12e774ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e774b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e774b3 push edx */
  push32((uint32_t)(EDX));
  /* 12e774b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e774b7 push eax */
  push32((uint32_t)(EAX));
  /* 12e774b8 call 0x12e77810 */
  push32(0x12e774bdu); f_12e77810();
  /* 12e774bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e774c0:;
  /* 12e774c0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e774c4 jne 0x12e77540 */
  if (!C.zf) goto L_12e77540;
  /* 12e774c6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e774ca jne 0x12e774d3 */
  if (!C.zf) goto L_12e774d3;
  /* 12e774cc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12e774d3:;
  /* 12e774d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e774d6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e774d9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12e774dc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12e774df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e774e2 push edx */
  push32((uint32_t)(EDX));
  /* 12e774e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e774e5 mov eax, dword ptr [0x12e90e6c] */
  EAX = (r32((uint32_t)(0x12e90e6c)));
  /* 12e774ea push eax */
  push32((uint32_t)(EAX));
  /* 12e774eb call dword ptr [0x12e922f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922f8))), 0x12e774f1u);
  /* 12e774f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e774f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e774f8 je 0x12e77540 */
  if (C.zf) goto L_12e77540;
  /* 12e774fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e774fd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12e77500 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77503 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e77506 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e77509 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7750c jae 0x12e77516 */
  if (!C.cf) goto L_12e77516;
  /* 12e7750e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e77511 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e77514 jmp 0x12e7751c */
  goto L_12e7751c;
L_12e77516:;
  /* 12e77516 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e77519 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12e7751c:;
  /* 12e7751c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e7751f push eax */
  push32((uint32_t)(EAX));
  /* 12e77520 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77523 push ecx */
  push32((uint32_t)(ECX));
  /* 12e77524 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e77527 push edx */
  push32((uint32_t)(EDX));
  /* 12e77528 call 0x12e79d30 */
  push32(0x12e7752du); f_12e79d30();
  /* 12e7752d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77530 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77533 push eax */
  push32((uint32_t)(EAX));
  /* 12e77534 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e77537 push ecx */
  push32((uint32_t)(ECX));
  /* 12e77538 call 0x12e77810 */
  push32(0x12e7753du); f_12e77810();
  /* 12e7753d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e77540:;
  /* 12e77540 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e77542 call 0x12e76ef0 */
  push32(0x12e77547u); f_12e76ef0();
  /* 12e77547 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7754a jmp 0x12e77589 */
  goto L_12e77589;
L_12e7754c:;
  /* 12e7754c push 9 */
  push32((uint32_t)(0x9u));
  /* 12e7754e call 0x12e76ef0 */
  push32(0x12e77553u); f_12e76ef0();
  /* 12e77553 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77556 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7755a jne 0x12e77563 */
  if (!C.zf) goto L_12e77563;
  /* 12e7755c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12e77563:;
  /* 12e77563 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e77566 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77569 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7756c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12e7756f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e77572 push eax */
  push32((uint32_t)(EAX));
  /* 12e77573 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77576 push ecx */
  push32((uint32_t)(ECX));
  /* 12e77577 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e77579 mov edx, dword ptr [0x12e90e6c] */
  EDX = (r32((uint32_t)(0x12e90e6c)));
  /* 12e7757f push edx */
  push32((uint32_t)(EDX));
  /* 12e77580 call dword ptr [0x12e922f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922f4))), 0x12e77586u);
  /* 12e77586 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e77589:;
  /* 12e77589 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7758d jne 0x12e77598 */
  if (!C.zf) goto L_12e77598;
  /* 12e7758f cmp dword ptr [0x12e8f6b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f6b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77596 jne 0x12e7759d */
  if (!C.zf) goto L_12e7759d;
L_12e77598:;
  /* 12e77598 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7759b jmp 0x12e775b6 */
  goto L_12e775b6;
L_12e7759d:;
  /* 12e7759d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e775a0 push eax */
  push32((uint32_t)(EAX));
  /* 12e775a1 call 0x12e77190 */
  push32(0x12e775a6u); f_12e77190();
  /* 12e775a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e775a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e775ab jne 0x12e775b1 */
  if (!C.zf) goto L_12e775b1;
  /* 12e775ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e775af jmp 0x12e775b6 */
  goto L_12e775b6;
L_12e775b1:;
  /* 12e775b1 jmp 0x12e77406 */
  goto L_12e77406;
L_12e775b6:;
  /* 12e775b6 mov esp, ebp */
  ESP = (EBP);
  /* 12e775b8 pop ebp */
  EBP = (pop32());
  /* 12e775b9 ret  */
  ESPCHK(0x12e773d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100075c0 @ 0x12e775c0 (104 bytes, 38 insns) */
void f_12e775c0(void) {
  FTRACE(0x12e775c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e775c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e775c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e775c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e775c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e775c8 jne 0x12e775cc */
  if (!C.zf) goto L_12e775cc;
  /* 12e775ca jmp 0x12e77624 */
  goto L_12e77624;
L_12e775cc:;
  /* 12e775cc push 9 */
  push32((uint32_t)(0x9u));
  /* 12e775ce call 0x12e76e50 */
  push32(0x12e775d3u); f_12e76e50();
  /* 12e775d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e775d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e775d9 push eax */
  push32((uint32_t)(EAX));
  /* 12e775da call 0x12e77750 */
  push32(0x12e775dfu); f_12e77750();
  /* 12e775df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e775e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e775e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e775e9 je 0x12e77607 */
  if (C.zf) goto L_12e77607;
  /* 12e775eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e775ee push ecx */
  push32((uint32_t)(ECX));
  /* 12e775ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e775f2 push edx */
  push32((uint32_t)(EDX));
  /* 12e775f3 call 0x12e77810 */
  push32(0x12e775f8u); f_12e77810();
  /* 12e775f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e775fb push 9 */
  push32((uint32_t)(0x9u));
  /* 12e775fd call 0x12e76ef0 */
  push32(0x12e77602u); f_12e76ef0();
  /* 12e77602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77605 jmp 0x12e77624 */
  goto L_12e77624;
L_12e77607:;
  /* 12e77607 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e77609 call 0x12e76ef0 */
  push32(0x12e7760eu); f_12e76ef0();
  /* 12e7760e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77611 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77614 push eax */
  push32((uint32_t)(EAX));
  /* 12e77615 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e77617 mov ecx, dword ptr [0x12e90e6c] */
  ECX = (r32((uint32_t)(0x12e90e6c)));
  /* 12e7761d push ecx */
  push32((uint32_t)(ECX));
  /* 12e7761e call dword ptr [0x12e92390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92390))), 0x12e77624u);
L_12e77624:;
  /* 12e77624 mov esp, ebp */
  ESP = (EBP);
  /* 12e77626 pop ebp */
  EBP = (pop32());
  /* 12e77627 ret  */
  ESPCHK(0x12e775c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007630 @ 0x12e77630 (116 bytes, 34 insns) */
void f_12e77630(void) {
  FTRACE(0x12e77630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e77630 push ebp */
  push32((uint32_t)(EBP));
  /* 12e77631 mov ebp, esp */
  EBP = (ESP);
  /* 12e77633 push ecx */
  push32((uint32_t)(ECX));
  /* 12e77634 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12e7763b push 9 */
  push32((uint32_t)(0x9u));
  /* 12e7763d call 0x12e76e50 */
  push32(0x12e77642u); f_12e76e50();
  /* 12e77642 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77645 call 0x12e78d40 */
  push32(0x12e7764au); f_12e78d40();
  /* 12e7764a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7764c jge 0x12e77655 */
  if ((C.sf==C.of)) goto L_12e77655;
  /* 12e7764e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12e77655:;
  /* 12e77655 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e77657 call 0x12e76ef0 */
  push32(0x12e7765cu); f_12e76ef0();
  /* 12e7765c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7765f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e77661 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e77663 mov eax, dword ptr [0x12e90e6c] */
  EAX = (r32((uint32_t)(0x12e90e6c)));
  /* 12e77668 push eax */
  push32((uint32_t)(EAX));
  /* 12e77669 call dword ptr [0x12e92374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92374))), 0x12e7766fu);
  /* 12e7766f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e77671 jne 0x12e7769d */
  if (!C.zf) goto L_12e7769d;
  /* 12e77673 call dword ptr [0x12e92284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92284))), 0x12e77679u);
  /* 12e77679 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7767c jne 0x12e77696 */
  if (!C.zf) goto L_12e77696;
  /* 12e7767e call 0x12e7b330 */
  push32(0x12e77683u); f_12e7b330();
  /* 12e77683 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12e77689 call 0x12e7b320 */
  push32(0x12e7768eu); f_12e7b320();
  /* 12e7768e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12e77694 jmp 0x12e7769d */
  goto L_12e7769d;
L_12e77696:;
  /* 12e77696 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12e7769d:;
  /* 12e7769d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e776a0 mov esp, ebp */
  ESP = (EBP);
  /* 12e776a2 pop ebp */
  EBP = (pop32());
  /* 12e776a3 ret  */
  ESPCHK(0x12e77630u, _esp0);
  ESP += 4; return;
}

/* FUN_100076b0 @ 0x12e776b0 (10 bytes, 5 insns) */
void f_12e776b0(void) {
  FTRACE(0x12e776b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e776b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e776b1 mov ebp, esp */
  EBP = (ESP);
  /* 12e776b3 call 0x12e77630 */
  push32(0x12e776b8u); f_12e77630();
  /* 12e776b8 pop ebp */
  EBP = (pop32());
  /* 12e776b9 ret  */
  ESPCHK(0x12e776b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100076c0 @ 0x12e776c0 (10 bytes, 5 insns) */
void f_12e776c0(void) {
  FTRACE(0x12e776c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e776c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e776c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e776c3 mov eax, dword ptr [0x12e8dcb4] */
  EAX = (r32((uint32_t)(0x12e8dcb4)));
  /* 12e776c8 pop ebp */
  EBP = (pop32());
  /* 12e776c9 ret  */
  ESPCHK(0x12e776c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100076d0 @ 0x12e776d0 (31 bytes, 11 insns) */
void f_12e776d0(void) {
  FTRACE(0x12e776d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e776d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e776d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e776d3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e776da jbe 0x12e776e0 */
  if ((C.cf||C.zf)) goto L_12e776e0;
  /* 12e776dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e776de jmp 0x12e776ed */
  goto L_12e776ed;
L_12e776e0:;
  /* 12e776e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e776e3 mov dword ptr [0x12e8dcb4], eax */
  w32((uint32_t)(0x12e8dcb4), (EAX));
  /* 12e776e8 mov eax, 1 */
  EAX = (0x1u);
L_12e776ed:;
  /* 12e776ed pop ebp */
  EBP = (pop32());
  /* 12e776ee ret  */
  ESPCHK(0x12e776d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100076f0 @ 0x12e776f0 (89 bytes, 20 insns) */
void f_12e776f0(void) {
  FTRACE(0x12e776f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e776f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e776f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e776f3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12e776f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e776fa mov eax, dword ptr [0x12e90e6c] */
  EAX = (r32((uint32_t)(0x12e90e6c)));
  /* 12e776ff push eax */
  push32((uint32_t)(EAX));
  /* 12e77700 call dword ptr [0x12e922f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922f8))), 0x12e77706u);
  /* 12e77706 mov dword ptr [0x12e90e68], eax */
  w32((uint32_t)(0x12e90e68), (EAX));
  /* 12e7770b cmp dword ptr [0x12e90e68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e90e68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77712 jne 0x12e77718 */
  if (!C.zf) goto L_12e77718;
  /* 12e77714 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e77716 jmp 0x12e77747 */
  goto L_12e77747;
L_12e77718:;
  /* 12e77718 mov ecx, dword ptr [0x12e90e68] */
  ECX = (r32((uint32_t)(0x12e90e68)));
  /* 12e7771e mov dword ptr [0x12e90e5c], ecx */
  w32((uint32_t)(0x12e90e5c), (ECX));
  /* 12e77724 mov dword ptr [0x12e90e60], 0 */
  w32((uint32_t)(0x12e90e60), (0x0u));
  /* 12e7772e mov dword ptr [0x12e90e64], 0 */
  w32((uint32_t)(0x12e90e64), (0x0u));
  /* 12e77738 mov dword ptr [0x12e90e48], 0x10 */
  w32((uint32_t)(0x12e90e48), (0x10u));
  /* 12e77742 mov eax, 1 */
  EAX = (0x1u);
L_12e77747:;
  /* 12e77747 pop ebp */
  EBP = (pop32());
  /* 12e77748 ret  */
  ESPCHK(0x12e776f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007750 @ 0x12e77750 (85 bytes, 29 insns) */
void f_12e77750(void) {
  FTRACE(0x12e77750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e77750 push ebp */
  push32((uint32_t)(EBP));
  /* 12e77751 mov ebp, esp */
  EBP = (ESP);
  /* 12e77753 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77756 mov eax, dword ptr [0x12e90e64] */
  EAX = (r32((uint32_t)(0x12e90e64)));
  /* 12e7775b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7775e mov ecx, dword ptr [0x12e90e68] */
  ECX = (r32((uint32_t)(0x12e90e68)));
  /* 12e77764 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77766 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e77769 mov edx, dword ptr [0x12e90e68] */
  EDX = (r32((uint32_t)(0x12e90e68)));
  /* 12e7776f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12e77772:;
  /* 12e77772 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e77775 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77778 jae 0x12e7779f */
  if (!C.cf) goto L_12e7779f;
  /* 12e7777a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7777d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77780 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77783 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e77786 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7778d jae 0x12e77794 */
  if (!C.cf) goto L_12e77794;
  /* 12e7778f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e77792 jmp 0x12e777a1 */
  goto L_12e777a1;
L_12e77794:;
  /* 12e77794 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e77797 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7779a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e7779d jmp 0x12e77772 */
  goto L_12e77772;
L_12e7779f:;
  /* 12e7779f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e777a1:;
  /* 12e777a1 mov esp, ebp */
  ESP = (EBP);
  /* 12e777a3 pop ebp */
  EBP = (pop32());
  /* 12e777a4 ret  */
  ESPCHK(0x12e77750u, _esp0);
  ESP += 4; return;
}

/* FUN_100077b0 @ 0x12e777b0 (95 bytes, 33 insns) */
void f_12e777b0(void) {
  FTRACE(0x12e777b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e777b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e777b1 mov ebp, esp */
  EBP = (ESP);
  /* 12e777b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e777b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e777b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e777bc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e777bf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e777c2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e777c5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12e777c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e777cb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e777d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e777d3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e777d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e777d8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e777db and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e777dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e777df jne 0x12e77801 */
  if (!C.zf) goto L_12e77801;
  /* 12e777e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e777e4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12e777e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e777e9 jne 0x12e77801 */
  if (!C.zf) goto L_12e77801;
  /* 12e777eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e777ee and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e777f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e777f6 je 0x12e77801 */
  if (C.zf) goto L_12e77801;
  /* 12e777f8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12e777ff jmp 0x12e77808 */
  goto L_12e77808;
L_12e77801:;
  /* 12e77801 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12e77808:;
  /* 12e77808 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7780b mov esp, ebp */
  ESP = (EBP);
  /* 12e7780d pop ebp */
  EBP = (pop32());
  /* 12e7780e ret  */
  ESPCHK(0x12e777b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007810 @ 0x12e77810 (1485 bytes, 453 insns) */
void f_12e77810(void) {
  FTRACE(0x12e77810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e77810 push ebp */
  push32((uint32_t)(EBP));
  /* 12e77811 mov ebp, esp */
  EBP = (ESP);
  /* 12e77813 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77819 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e7781c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12e7781f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77822 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e77825 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77828 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e7782b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7782e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12e77831 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e77834 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e77837 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7783d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77840 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12e77847 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7784a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7784d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77850 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12e77853 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e77856 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e77858 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7785b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12e7785e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e77861 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77864 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12e77867 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e7786a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e7786c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e7786f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e77872 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12e77875 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e77878 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e7787b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7787e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e77880 jne 0x12e779a8 */
  if (!C.zf) goto L_12e779a8;
  /* 12e77886 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e77889 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12e7788c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7788f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12e77892 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77896 jbe 0x12e7789f */
  if ((C.cf||C.zf)) goto L_12e7789f;
  /* 12e77898 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12e7789f:;
  /* 12e7789f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e778a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e778a5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e778a8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e778ab jne 0x12e77981 */
  if (!C.zf) goto L_12e77981;
  /* 12e778b1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e778b5 jae 0x12e77916 */
  if (!C.cf) goto L_12e77916;
  /* 12e778b7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e778bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e778bf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e778c1 not eax */
  EAX = (~(EAX));
  /* 12e778c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e778c6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e778c9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12e778cd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e778cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e778d2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e778d5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12e778d9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e778dc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e778df mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12e778e2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e778e5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e778e8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e778eb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12e778ee mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e778f1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e778f4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e778f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e778fa jne 0x12e77914 */
  if (!C.zf) goto L_12e77914;
  /* 12e778fc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e77901 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e77904 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e77906 not eax */
  EAX = (~(EAX));
  /* 12e77908 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7790b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e7790d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7790f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77912 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e77914:;
  /* 12e77914 jmp 0x12e77981 */
  goto L_12e77981;
L_12e77916:;
  /* 12e77916 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e77919 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7791c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e77921 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e77923 not edx */
  EDX = (~(EDX));
  /* 12e77925 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e77928 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e7792b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12e77932 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e77934 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e77937 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e7793a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12e77941 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77944 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77947 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e7794a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e7794d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77950 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77953 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12e77956 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77959 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7795c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12e77960 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e77962 jne 0x12e77981 */
  if (!C.zf) goto L_12e77981;
  /* 12e77964 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e77967 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7796a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e7796f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e77971 not edx */
  EDX = (~(EDX));
  /* 12e77973 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77976 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e77979 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7797b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7797e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12e77981:;
  /* 12e77981 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e77984 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e77987 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e7798a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e7798d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12e77990 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e77993 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e77996 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e77999 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e7799c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12e7799f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e779a2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e779a5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12e779a8:;
  /* 12e779a8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e779ab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12e779ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e779b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e779b4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e779b8 jbe 0x12e779c1 */
  if ((C.cf||C.zf)) goto L_12e779c1;
  /* 12e779ba mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12e779c1:;
  /* 12e779c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e779c4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e779c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e779c9 jne 0x12e77b25 */
  if (!C.zf) goto L_12e77b25;
  /* 12e779cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e779d2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e779d5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12e779d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e779db sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12e779de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e779e1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12e779e4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e779e8 jbe 0x12e779f1 */
  if ((C.cf||C.zf)) goto L_12e779f1;
  /* 12e779ea mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12e779f1:;
  /* 12e779f1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e779f4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e779f7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12e779fa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e779fd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12e77a00 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77a03 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12e77a06 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77a0a jbe 0x12e77a13 */
  if ((C.cf||C.zf)) goto L_12e77a13;
  /* 12e77a0c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12e77a13:;
  /* 12e77a13 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e77a16 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77a19 je 0x12e77b1f */
  if (C.zf) goto L_12e77b1f;
  /* 12e77a1f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e77a22 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e77a25 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e77a28 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77a2b jne 0x12e77b01 */
  if (!C.zf) goto L_12e77b01;
  /* 12e77a31 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77a35 jae 0x12e77a96 */
  if (!C.cf) goto L_12e77a96;
  /* 12e77a37 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e77a3c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e77a3f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e77a41 not edx */
  EDX = (~(EDX));
  /* 12e77a43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e77a46 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77a49 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12e77a4d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e77a4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e77a52 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77a55 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12e77a59 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77a5c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77a5f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e77a62 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e77a65 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77a68 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77a6b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12e77a6e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77a71 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77a74 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12e77a78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e77a7a jne 0x12e77a94 */
  if (!C.zf) goto L_12e77a94;
  /* 12e77a7c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e77a81 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e77a84 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e77a86 not edx */
  EDX = (~(EDX));
  /* 12e77a88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77a8b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e77a8d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e77a8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77a92 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e77a94:;
  /* 12e77a94 jmp 0x12e77b01 */
  goto L_12e77b01;
L_12e77a96:;
  /* 12e77a96 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e77a99 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77a9c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e77aa1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e77aa3 not eax */
  EAX = (~(EAX));
  /* 12e77aa5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e77aa8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77aab mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12e77ab2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e77ab4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e77ab7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77aba mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12e77ac1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77ac4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77ac7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12e77aca sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e77acd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77ad0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77ad3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12e77ad6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77ad9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77adc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e77ae0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e77ae2 jne 0x12e77b01 */
  if (!C.zf) goto L_12e77b01;
  /* 12e77ae4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e77ae7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77aea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e77aef shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e77af1 not eax */
  EAX = (~(EAX));
  /* 12e77af3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77af6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e77af9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e77afb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77afe mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12e77b01:;
  /* 12e77b01 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e77b04 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e77b07 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e77b0a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e77b0d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12e77b10 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e77b13 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e77b16 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e77b19 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e77b1c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12e77b1f:;
  /* 12e77b1f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e77b22 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12e77b25:;
  /* 12e77b25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e77b28 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e77b2b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e77b2d jne 0x12e77b3b */
  if (!C.zf) goto L_12e77b3b;
  /* 12e77b2f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e77b32 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77b35 je 0x12e77c4b */
  if (C.zf) goto L_12e77c4b;
L_12e77b3b:;
  /* 12e77b3b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e77b3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e77b41 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12e77b44 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12e77b47 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e77b4a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e77b4d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e77b50 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12e77b53 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e77b56 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e77b59 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12e77b5c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e77b5f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e77b62 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12e77b65 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e77b68 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e77b6b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e77b6e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12e77b71 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e77b74 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e77b77 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e77b7a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77b7d jne 0x12e77c4b */
  if (!C.zf) goto L_12e77c4b;
  /* 12e77b83 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77b87 jae 0x12e77be4 */
  if (!C.cf) goto L_12e77be4;
  /* 12e77b89 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77b8c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77b8f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e77b93 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77b96 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77b99 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e77b9c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e77b9f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77ba2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77ba5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12e77ba8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e77baa jne 0x12e77bc2 */
  if (!C.zf) goto L_12e77bc2;
  /* 12e77bac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e77bb1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e77bb4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e77bb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77bb9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e77bbb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e77bbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77bc0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e77bc2:;
  /* 12e77bc2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e77bc7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e77bca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e77bcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e77bcf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77bd2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12e77bd6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e77bd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e77bdb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77bde mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12e77be2 jmp 0x12e77c4b */
  goto L_12e77c4b;
L_12e77be4:;
  /* 12e77be4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77be7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77bea movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e77bee mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77bf1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77bf4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e77bf7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e77bfa mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77bfd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77c00 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12e77c03 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e77c05 jne 0x12e77c22 */
  if (!C.zf) goto L_12e77c22;
  /* 12e77c07 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e77c0a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77c0d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e77c12 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e77c14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77c17 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e77c1a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e77c1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77c1f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12e77c22:;
  /* 12e77c22 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e77c25 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77c28 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e77c2d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e77c2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e77c32 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77c35 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12e77c3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e77c3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e77c41 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e77c44 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12e77c4b:;
  /* 12e77c4b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e77c4e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e77c51 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12e77c53 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e77c56 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77c59 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e77c5c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12e77c5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e77c62 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e77c64 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77c67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e77c6a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e77c6c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e77c6f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77c72 jne 0x12e77dd9 */
  if (!C.zf) goto L_12e77dd9;
  /* 12e77c78 cmp dword ptr [0x12e90e60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e90e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77c7f je 0x12e77dc8 */
  if (C.zf) goto L_12e77dc8;
  /* 12e77c85 mov eax, dword ptr [0x12e90e58] */
  EAX = (r32((uint32_t)(0x12e90e58)));
  /* 12e77c8a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12e77c8d mov ecx, dword ptr [0x12e90e60] */
  ECX = (r32((uint32_t)(0x12e90e60)));
  /* 12e77c93 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e77c96 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77c98 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12e77c9b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12e77ca0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12e77ca5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77ca8 push eax */
  push32((uint32_t)(EAX));
  /* 12e77ca9 call dword ptr [0x12e92394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92394))), 0x12e77cafu);
  /* 12e77caf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e77cb4 mov ecx, dword ptr [0x12e90e58] */
  ECX = (r32((uint32_t)(0x12e90e58)));
  /* 12e77cba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e77cbc mov eax, dword ptr [0x12e90e60] */
  EAX = (r32((uint32_t)(0x12e90e60)));
  /* 12e77cc1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e77cc4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e77cc6 mov edx, dword ptr [0x12e90e60] */
  EDX = (r32((uint32_t)(0x12e90e60)));
  /* 12e77ccc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12e77ccf mov eax, dword ptr [0x12e90e60] */
  EAX = (r32((uint32_t)(0x12e90e60)));
  /* 12e77cd4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e77cd7 mov edx, dword ptr [0x12e90e58] */
  EDX = (r32((uint32_t)(0x12e90e58)));
  /* 12e77cdd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12e77ce8 mov eax, dword ptr [0x12e90e60] */
  EAX = (r32((uint32_t)(0x12e90e60)));
  /* 12e77ced mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e77cf0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12e77cf3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e77cf6 mov eax, dword ptr [0x12e90e60] */
  EAX = (r32((uint32_t)(0x12e90e60)));
  /* 12e77cfb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e77cfe mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12e77d01 mov edx, dword ptr [0x12e90e60] */
  EDX = (r32((uint32_t)(0x12e90e60)));
  /* 12e77d07 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e77d0a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12e77d0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e77d10 jne 0x12e77d26 */
  if (!C.zf) goto L_12e77d26;
  /* 12e77d12 mov edx, dword ptr [0x12e90e60] */
  EDX = (r32((uint32_t)(0x12e90e60)));
  /* 12e77d18 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e77d1b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12e77d1d mov ecx, dword ptr [0x12e90e60] */
  ECX = (r32((uint32_t)(0x12e90e60)));
  /* 12e77d23 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12e77d26:;
  /* 12e77d26 mov edx, dword ptr [0x12e90e60] */
  EDX = (r32((uint32_t)(0x12e90e60)));
  /* 12e77d2c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77d30 jne 0x12e77dc8 */
  if (!C.zf) goto L_12e77dc8;
  /* 12e77d36 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12e77d3b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e77d3d mov eax, dword ptr [0x12e90e60] */
  EAX = (r32((uint32_t)(0x12e90e60)));
  /* 12e77d42 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e77d45 push ecx */
  push32((uint32_t)(ECX));
  /* 12e77d46 call dword ptr [0x12e92394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92394))), 0x12e77d4cu);
  /* 12e77d4c mov edx, dword ptr [0x12e90e60] */
  EDX = (r32((uint32_t)(0x12e90e60)));
  /* 12e77d52 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e77d55 push eax */
  push32((uint32_t)(EAX));
  /* 12e77d56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e77d58 mov ecx, dword ptr [0x12e90e6c] */
  ECX = (r32((uint32_t)(0x12e90e6c)));
  /* 12e77d5e push ecx */
  push32((uint32_t)(ECX));
  /* 12e77d5f call dword ptr [0x12e92390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92390))), 0x12e77d65u);
  /* 12e77d65 mov edx, dword ptr [0x12e90e64] */
  EDX = (r32((uint32_t)(0x12e90e64)));
  /* 12e77d6b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e77d6e mov eax, dword ptr [0x12e90e68] */
  EAX = (r32((uint32_t)(0x12e90e68)));
  /* 12e77d73 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77d75 mov ecx, dword ptr [0x12e90e60] */
  ECX = (r32((uint32_t)(0x12e90e60)));
  /* 12e77d7b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77d7e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77d80 push eax */
  push32((uint32_t)(EAX));
  /* 12e77d81 mov edx, dword ptr [0x12e90e60] */
  EDX = (r32((uint32_t)(0x12e90e60)));
  /* 12e77d87 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77d8a push edx */
  push32((uint32_t)(EDX));
  /* 12e77d8b mov eax, dword ptr [0x12e90e60] */
  EAX = (r32((uint32_t)(0x12e90e60)));
  /* 12e77d90 push eax */
  push32((uint32_t)(EAX));
  /* 12e77d91 call 0x12e7b340 */
  push32(0x12e77d96u); f_12e7b340();
  /* 12e77d96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77d99 mov ecx, dword ptr [0x12e90e64] */
  ECX = (r32((uint32_t)(0x12e90e64)));
  /* 12e77d9f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77da2 mov dword ptr [0x12e90e64], ecx */
  w32((uint32_t)(0x12e90e64), (ECX));
  /* 12e77da8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77dab cmp edx, dword ptr [0x12e90e60] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e90e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77db1 jbe 0x12e77dbc */
  if ((C.cf||C.zf)) goto L_12e77dbc;
  /* 12e77db3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77db6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77db9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12e77dbc:;
  /* 12e77dbc mov ecx, dword ptr [0x12e90e68] */
  ECX = (r32((uint32_t)(0x12e90e68)));
  /* 12e77dc2 mov dword ptr [0x12e90e5c], ecx */
  w32((uint32_t)(0x12e90e5c), (ECX));
L_12e77dc8:;
  /* 12e77dc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77dcb mov dword ptr [0x12e90e60], edx */
  w32((uint32_t)(0x12e90e60), (EDX));
  /* 12e77dd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e77dd4 mov dword ptr [0x12e90e58], eax */
  w32((uint32_t)(0x12e90e58), (EAX));
L_12e77dd9:;
  /* 12e77dd9 mov esp, ebp */
  ESP = (EBP);
  /* 12e77ddb pop ebp */
  EBP = (pop32());
  /* 12e77ddc ret  */
  ESPCHK(0x12e77810u, _esp0);
  ESP += 4; return;
}

/* FUN_10007de0 @ 0x12e77de0 (1334 bytes, 427 insns) */
void f_12e77de0(void) {
  FTRACE(0x12e77de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e77de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e77de1 mov ebp, esp */
  EBP = (ESP);
  /* 12e77de3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77de6 push esi */
  push32((uint32_t)(ESI));
  /* 12e77de7 mov eax, dword ptr [0x12e90e64] */
  EAX = (r32((uint32_t)(0x12e90e64)));
  /* 12e77dec imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e77def mov ecx, dword ptr [0x12e90e68] */
  ECX = (r32((uint32_t)(0x12e90e68)));
  /* 12e77df5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77df7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12e77dfa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e77dfd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77e00 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12e77e03 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12e77e06 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e77e09 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12e77e0c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77e0f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e77e12 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77e16 jge 0x12e77e2c */
  if ((C.sf==C.of)) goto L_12e77e2c;
  /* 12e77e18 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e77e1b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e77e1e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e77e20 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12e77e23 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12e77e2a jmp 0x12e77e41 */
  goto L_12e77e41;
L_12e77e2c:;
  /* 12e77e2c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12e77e33 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e77e36 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e77e39 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e77e3c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e77e3e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12e77e41:;
  /* 12e77e41 mov ecx, dword ptr [0x12e90e5c] */
  ECX = (r32((uint32_t)(0x12e90e5c)));
  /* 12e77e47 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12e77e4a:;
  /* 12e77e4a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77e4d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77e50 jae 0x12e77e76 */
  if (!C.cf) goto L_12e77e76;
  /* 12e77e52 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77e55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e77e58 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12e77e5a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77e5d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e77e60 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12e77e63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e77e65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e77e67 je 0x12e77e6b */
  if (C.zf) goto L_12e77e6b;
  /* 12e77e69 jmp 0x12e77e76 */
  goto L_12e77e76;
L_12e77e6b:;
  /* 12e77e6b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77e6e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77e71 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12e77e74 jmp 0x12e77e4a */
  goto L_12e77e4a;
L_12e77e76:;
  /* 12e77e76 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77e79 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77e7c jne 0x12e77f5d */
  if (!C.zf) goto L_12e77f5d;
  /* 12e77e82 mov eax, dword ptr [0x12e90e68] */
  EAX = (r32((uint32_t)(0x12e90e68)));
  /* 12e77e87 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12e77e8a:;
  /* 12e77e8a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77e8d cmp ecx, dword ptr [0x12e90e5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e90e5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77e93 jae 0x12e77eb9 */
  if (!C.cf) goto L_12e77eb9;
  /* 12e77e95 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77e98 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e77e9b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12e77e9d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77ea0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e77ea3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12e77ea6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e77ea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e77eaa je 0x12e77eae */
  if (C.zf) goto L_12e77eae;
  /* 12e77eac jmp 0x12e77eb9 */
  goto L_12e77eb9;
L_12e77eae:;
  /* 12e77eae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77eb1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77eb4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e77eb7 jmp 0x12e77e8a */
  goto L_12e77e8a;
L_12e77eb9:;
  /* 12e77eb9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77ebc cmp ecx, dword ptr [0x12e90e5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e90e5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77ec2 jne 0x12e77f5d */
  if (!C.zf) goto L_12e77f5d;
L_12e77ec8:;
  /* 12e77ec8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77ecb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77ece jae 0x12e77ee6 */
  if (!C.cf) goto L_12e77ee6;
  /* 12e77ed0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77ed3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77ed7 je 0x12e77edb */
  if (C.zf) goto L_12e77edb;
  /* 12e77ed9 jmp 0x12e77ee6 */
  goto L_12e77ee6;
L_12e77edb:;
  /* 12e77edb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77ede add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77ee1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12e77ee4 jmp 0x12e77ec8 */
  goto L_12e77ec8;
L_12e77ee6:;
  /* 12e77ee6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77ee9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77eec jne 0x12e77f37 */
  if (!C.zf) goto L_12e77f37;
  /* 12e77eee mov eax, dword ptr [0x12e90e68] */
  EAX = (r32((uint32_t)(0x12e90e68)));
  /* 12e77ef3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12e77ef6:;
  /* 12e77ef6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77ef9 cmp ecx, dword ptr [0x12e90e5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e90e5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77eff jae 0x12e77f17 */
  if (!C.cf) goto L_12e77f17;
  /* 12e77f01 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77f04 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77f08 je 0x12e77f0c */
  if (C.zf) goto L_12e77f0c;
  /* 12e77f0a jmp 0x12e77f17 */
  goto L_12e77f17;
L_12e77f0c:;
  /* 12e77f0c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77f0f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77f12 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e77f15 jmp 0x12e77ef6 */
  goto L_12e77ef6;
L_12e77f17:;
  /* 12e77f17 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77f1a cmp ecx, dword ptr [0x12e90e5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e90e5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77f20 jne 0x12e77f37 */
  if (!C.zf) goto L_12e77f37;
  /* 12e77f22 call 0x12e78320 */
  push32(0x12e77f27u); f_12e78320();
  /* 12e77f27 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e77f2a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77f2e jne 0x12e77f37 */
  if (!C.zf) goto L_12e77f37;
  /* 12e77f30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e77f32 jmp 0x12e78311 */
  goto L_12e78311;
L_12e77f37:;
  /* 12e77f37 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77f3a push edx */
  push32((uint32_t)(EDX));
  /* 12e77f3b call 0x12e78430 */
  push32(0x12e77f40u); f_12e78430();
  /* 12e77f40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77f43 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77f46 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12e77f49 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12e77f4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77f4e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e77f51 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77f54 jne 0x12e77f5d */
  if (!C.zf) goto L_12e77f5d;
  /* 12e77f56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e77f58 jmp 0x12e78311 */
  goto L_12e78311;
L_12e77f5d:;
  /* 12e77f5d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77f60 mov dword ptr [0x12e90e5c], edx */
  w32((uint32_t)(0x12e90e5c), (EDX));
  /* 12e77f66 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e77f69 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e77f6c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12e77f6f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e77f72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e77f74 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12e77f77 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e77f7b je 0x12e77fa0 */
  if (C.zf) goto L_12e77fa0;
  /* 12e77f7d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e77f80 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e77f83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e77f86 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12e77f8a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e77f8d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e77f90 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12e77f93 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12e77f9a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12e77f9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e77f9e jne 0x12e77fd5 */
  if (!C.zf) goto L_12e77fd5;
L_12e77fa0:;
  /* 12e77fa0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12e77fa7:;
  /* 12e77fa7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e77faa mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e77fad mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e77fb0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12e77fb4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e77fb7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e77fba mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12e77fbd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12e77fc4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12e77fc6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e77fc8 jne 0x12e77fd5 */
  if (!C.zf) goto L_12e77fd5;
  /* 12e77fca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e77fcd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e77fd0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12e77fd3 jmp 0x12e77fa7 */
  goto L_12e77fa7;
L_12e77fd5:;
  /* 12e77fd5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e77fd8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e77fde mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e77fe1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12e77fe8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e77feb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12e77ff2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e77ff5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e77ff8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e77ffb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12e77fff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12e78002 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78006 jne 0x12e78022 */
  if (!C.zf) goto L_12e78022;
  /* 12e78008 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 12e7800f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78012 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e78015 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e78018 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 12e7801f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12e78022:;
  /* 12e78022 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78026 jl 0x12e7803b */
  if ((C.sf!=C.of)) goto L_12e7803b;
  /* 12e78028 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e7802b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e7802d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e78030 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e78033 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78036 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12e78039 jmp 0x12e78022 */
  goto L_12e78022;
L_12e7803b:;
  /* 12e7803b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7803e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e78041 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12e78045 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e78048 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7804b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e7804d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78050 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e78053 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e78056 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12e78059 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7805c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e7805f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78063 jle 0x12e7806c */
  if ((C.zf||C.sf!=C.of)) goto L_12e7806c;
  /* 12e78065 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_12e7806c:;
  /* 12e7806c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e7806f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78072 je 0x12e78290 */
  if (C.zf) goto L_12e78290;
  /* 12e78078 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7807b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7807e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e78081 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78084 jne 0x12e7815a */
  if (!C.zf) goto L_12e7815a;
  /* 12e7808a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7808e jge 0x12e780ef */
  if ((C.sf==C.of)) goto L_12e780ef;
  /* 12e78090 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e78095 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e78098 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e7809a not eax */
  EAX = (~(EAX));
  /* 12e7809c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e7809f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e780a2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12e780a6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e780a8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e780ab mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e780ae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12e780b2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e780b5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e780b8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12e780bb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e780be mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e780c1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e780c4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12e780c7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e780ca add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e780cd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e780d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e780d3 jne 0x12e780ed */
  if (!C.zf) goto L_12e780ed;
  /* 12e780d5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e780da mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e780dd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e780df not eax */
  EAX = (~(EAX));
  /* 12e780e1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e780e4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e780e6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e780e8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e780eb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e780ed:;
  /* 12e780ed jmp 0x12e7815a */
  goto L_12e7815a;
L_12e780ef:;
  /* 12e780ef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e780f2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e780f5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e780fa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e780fc not edx */
  EDX = (~(EDX));
  /* 12e780fe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78101 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e78104 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12e7810b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7810d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78110 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e78113 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12e7811a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e7811d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78120 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e78123 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e78126 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e78129 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7812c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12e7812f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e78132 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78135 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12e78139 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7813b jne 0x12e7815a */
  if (!C.zf) goto L_12e7815a;
  /* 12e7813d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e78140 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78143 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e78148 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e7814a not edx */
  EDX = (~(EDX));
  /* 12e7814c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7814f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e78152 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e78154 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e78157 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12e7815a:;
  /* 12e7815a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7815d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e78160 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e78163 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e78166 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12e78169 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7816c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e7816f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e78172 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e78175 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12e78178 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7817c je 0x12e78290 */
  if (C.zf) goto L_12e78290;
  /* 12e78182 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e78185 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e78188 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12e7818b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7818e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e78191 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e78194 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e78197 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12e7819a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7819d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e781a0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12e781a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e781a6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e781a9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12e781ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e781af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e781b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e781b5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12e781b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e781bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e781be mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e781c1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e781c4 jne 0x12e78290 */
  if (!C.zf) goto L_12e78290;
  /* 12e781ca cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e781ce jge 0x12e7822a */
  if ((C.sf==C.of)) goto L_12e7822a;
  /* 12e781d0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e781d3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e781d6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12e781da mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e781dd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e781e0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12e781e3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e781e5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e781e8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e781eb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12e781ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e781f0 jne 0x12e78208 */
  if (!C.zf) goto L_12e78208;
  /* 12e781f2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e781f7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e781fa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e781fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e781ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e78201 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e78203 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e78206 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e78208:;
  /* 12e78208 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e7820d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e78210 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e78212 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78215 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e78218 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12e7821c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7821e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78221 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e78224 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12e78228 jmp 0x12e78290 */
  goto L_12e78290;
L_12e7822a:;
  /* 12e7822a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e7822d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78230 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12e78234 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e78237 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7823a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12e7823d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e7823f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e78242 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78245 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12e78248 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7824a jne 0x12e78267 */
  if (!C.zf) goto L_12e78267;
  /* 12e7824c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e7824f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78252 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e78257 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e78259 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7825c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e7825f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e78261 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e78264 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12e78267:;
  /* 12e78267 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e7826a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7826d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e78272 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e78274 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78277 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e7827a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12e78281 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e78283 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78286 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e78289 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12e78290:;
  /* 12e78290 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78294 je 0x12e782aa */
  if (C.zf) goto L_12e782aa;
  /* 12e78296 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e78299 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7829c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12e7829e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e782a1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e782a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e782a7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12e782aa:;
  /* 12e782aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e782ad add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e782b0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e782b3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e782b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e782b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e782bc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e782be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e782c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e782c4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e782c7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e782ca mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12e782cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e782d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e782d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e782d5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e782d7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e782da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e782dd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12e782df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e782e1 jne 0x12e78303 */
  if (!C.zf) goto L_12e78303;
  /* 12e782e3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e782e6 cmp eax, dword ptr [0x12e90e60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e90e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e782ec jne 0x12e78303 */
  if (!C.zf) goto L_12e78303;
  /* 12e782ee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e782f1 cmp ecx, dword ptr [0x12e90e58] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e90e58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e782f7 jne 0x12e78303 */
  if (!C.zf) goto L_12e78303;
  /* 12e782f9 mov dword ptr [0x12e90e60], 0 */
  w32((uint32_t)(0x12e90e60), (0x0u));
L_12e78303:;
  /* 12e78303 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e78306 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78309 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12e7830b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7830e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12e78311:;
  /* 12e78311 pop esi */
  ESI = (pop32());
  /* 12e78312 mov esp, ebp */
  ESP = (EBP);
  /* 12e78314 pop ebp */
  EBP = (pop32());
  /* 12e78315 ret  */
  ESPCHK(0x12e77de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008320 @ 0x12e78320 (271 bytes, 78 insns) */
void f_12e78320(void) {
  FTRACE(0x12e78320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e78320 push ebp */
  push32((uint32_t)(EBP));
  /* 12e78321 mov ebp, esp */
  EBP = (ESP);
  /* 12e78323 push ecx */
  push32((uint32_t)(ECX));
  /* 12e78324 mov eax, dword ptr [0x12e90e64] */
  EAX = (r32((uint32_t)(0x12e90e64)));
  /* 12e78329 cmp eax, dword ptr [0x12e90e48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e90e48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7832f jne 0x12e7837b */
  if (!C.zf) goto L_12e7837b;
  /* 12e78331 mov ecx, dword ptr [0x12e90e48] */
  ECX = (r32((uint32_t)(0x12e90e48)));
  /* 12e78337 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7833a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7833d push ecx */
  push32((uint32_t)(ECX));
  /* 12e7833e mov edx, dword ptr [0x12e90e68] */
  EDX = (r32((uint32_t)(0x12e90e68)));
  /* 12e78344 push edx */
  push32((uint32_t)(EDX));
  /* 12e78345 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e78347 mov eax, dword ptr [0x12e90e6c] */
  EAX = (r32((uint32_t)(0x12e90e6c)));
  /* 12e7834c push eax */
  push32((uint32_t)(EAX));
  /* 12e7834d call dword ptr [0x12e922f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922f4))), 0x12e78353u);
  /* 12e78353 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e78356 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7835a jne 0x12e78363 */
  if (!C.zf) goto L_12e78363;
  /* 12e7835c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7835e jmp 0x12e7842b */
  goto L_12e7842b;
L_12e78363:;
  /* 12e78363 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e78366 mov dword ptr [0x12e90e68], ecx */
  w32((uint32_t)(0x12e90e68), (ECX));
  /* 12e7836c mov edx, dword ptr [0x12e90e48] */
  EDX = (r32((uint32_t)(0x12e90e48)));
  /* 12e78372 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78375 mov dword ptr [0x12e90e48], edx */
  w32((uint32_t)(0x12e90e48), (EDX));
L_12e7837b:;
  /* 12e7837b mov eax, dword ptr [0x12e90e64] */
  EAX = (r32((uint32_t)(0x12e90e64)));
  /* 12e78380 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e78383 mov ecx, dword ptr [0x12e90e68] */
  ECX = (r32((uint32_t)(0x12e90e68)));
  /* 12e78389 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7838b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e7838e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12e78393 push 8 */
  push32((uint32_t)(0x8u));
  /* 12e78395 mov edx, dword ptr [0x12e90e6c] */
  EDX = (r32((uint32_t)(0x12e90e6c)));
  /* 12e7839b push edx */
  push32((uint32_t)(EDX));
  /* 12e7839c call dword ptr [0x12e922f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922f8))), 0x12e783a2u);
  /* 12e783a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e783a5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12e783a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e783ab cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e783af jne 0x12e783b5 */
  if (!C.zf) goto L_12e783b5;
  /* 12e783b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e783b3 jmp 0x12e7842b */
  goto L_12e7842b;
L_12e783b5:;
  /* 12e783b5 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e783b7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12e783bc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12e783c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e783c3 call dword ptr [0x12e922f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922f0))), 0x12e783c9u);
  /* 12e783c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e783cc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12e783cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e783d2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e783d6 jne 0x12e783f2 */
  if (!C.zf) goto L_12e783f2;
  /* 12e783d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e783db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e783de push ecx */
  push32((uint32_t)(ECX));
  /* 12e783df push 0 */
  push32((uint32_t)(0x0u));
  /* 12e783e1 mov edx, dword ptr [0x12e90e6c] */
  EDX = (r32((uint32_t)(0x12e90e6c)));
  /* 12e783e7 push edx */
  push32((uint32_t)(EDX));
  /* 12e783e8 call dword ptr [0x12e92390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92390))), 0x12e783eeu);
  /* 12e783ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e783f0 jmp 0x12e7842b */
  goto L_12e7842b;
L_12e783f2:;
  /* 12e783f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e783f5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e783fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e783fe mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12e78405 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e78408 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12e7840f mov eax, dword ptr [0x12e90e64] */
  EAX = (r32((uint32_t)(0x12e90e64)));
  /* 12e78414 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78417 mov dword ptr [0x12e90e64], eax */
  w32((uint32_t)(0x12e90e64), (EAX));
  /* 12e7841c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7841f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12e78422 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12e78428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e7842b:;
  /* 12e7842b mov esp, ebp */
  ESP = (EBP);
  /* 12e7842d pop ebp */
  EBP = (pop32());
  /* 12e7842e ret  */
  ESPCHK(0x12e78320u, _esp0);
  ESP += 4; return;
}

/* FUN_10008430 @ 0x12e78430 (494 bytes, 149 insns) */
void f_12e78430(void) {
  FTRACE(0x12e78430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e78430 push ebp */
  push32((uint32_t)(EBP));
  /* 12e78431 mov ebp, esp */
  EBP = (ESP);
  /* 12e78433 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e78439 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e7843c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12e7843f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e78442 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e78445 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e78448 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12e7844f:;
  /* 12e7844f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78453 jl 0x12e78468 */
  if ((C.sf!=C.of)) goto L_12e78468;
  /* 12e78455 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e78458 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12e7845a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7845d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e78460 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78463 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12e78466 jmp 0x12e7844f */
  goto L_12e7844f;
L_12e78468:;
  /* 12e78468 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e7846b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e78471 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e78474 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12e7847b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e7847e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12e78485 jmp 0x12e78490 */
  goto L_12e78490;
L_12e78487:;
  /* 12e78487 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7848a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7848d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12e78490:;
  /* 12e78490 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78494 jge 0x12e784b6 */
  if ((C.sf==C.of)) goto L_12e784b6;
  /* 12e78496 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e78499 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7849c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12e7849f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e784a2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e784a5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e784a8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12e784ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e784ae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e784b1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12e784b4 jmp 0x12e78487 */
  goto L_12e78487;
L_12e784b6:;
  /* 12e784b6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e784b9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12e784bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e784bf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e784c2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e784c4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e784c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e784c9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12e784ce push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12e784d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e784d6 push edx */
  push32((uint32_t)(EDX));
  /* 12e784d7 call dword ptr [0x12e922f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922f0))), 0x12e784ddu);
  /* 12e784dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e784df jne 0x12e784e9 */
  if (!C.zf) goto L_12e784e9;
  /* 12e784e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e784e4 jmp 0x12e7861a */
  goto L_12e7861a;
L_12e784e9:;
  /* 12e784e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e784ec add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e784f1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e784f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e784f7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e784fa jmp 0x12e78508 */
  goto L_12e78508;
L_12e784fc:;
  /* 12e784fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e784ff add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78505 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e78508:;
  /* 12e78508 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7850b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7850e ja 0x12e7856d */
  if ((!C.cf&&!C.zf)) goto L_12e7856d;
  /* 12e78510 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e78513 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12e7851a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7851d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12e78527 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7852a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7852d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e78530 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e78533 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12e78539 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7853c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78542 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e78545 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12e78548 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7854b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78551 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e78554 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12e78557 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7855a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7855f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e78562 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e78565 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12e7856b jmp 0x12e784fc */
  goto L_12e784fc;
L_12e7856d:;
  /* 12e7856d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e78570 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78576 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e78579 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7857c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7857f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e78582 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12e78585 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e78588 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e7858b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e7858e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e78591 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e78594 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12e78597 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e7859a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7859d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e785a0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12e785a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e785a6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e785a9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e785ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e785af mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e785b2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12e785b5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e785b8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e785bb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12e785c3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e785c6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e785c9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12e785d4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e785d7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12e785db mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e785de mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12e785e1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e785e4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e785e7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12e785ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e785ec jne 0x12e785fd */
  if (!C.zf) goto L_12e785fd;
  /* 12e785ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e785f1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e785f4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12e785f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e785fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12e785fd:;
  /* 12e785fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e78602 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e78605 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e78607 not edx */
  EDX = (~(EDX));
  /* 12e78609 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7860c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e7860f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e78611 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e78614 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12e78617 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12e7861a:;
  /* 12e7861a mov esp, ebp */
  ESP = (EBP);
  /* 12e7861c pop ebp */
  EBP = (pop32());
  /* 12e7861d ret  */
  ESPCHK(0x12e78430u, _esp0);
  ESP += 4; return;
}

/* FUN_10008620 @ 0x12e78620 (1515 bytes, 489 insns) */
void f_12e78620(void) {
  FTRACE(0x12e78620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e78620 push ebp */
  push32((uint32_t)(EBP));
  /* 12e78621 mov ebp, esp */
  EBP = (ESP);
  /* 12e78623 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78626 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e78629 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7862c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12e7862e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e78631 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e78634 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12e78637 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12e7863a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7863d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e78640 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78643 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e78646 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e78649 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12e7864c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e7864f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e78652 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e78658 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e7865b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12e78662 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e78665 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e78668 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7866b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e7866e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e78671 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e78673 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78676 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12e78679 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e7867c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7867f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12e78682 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e78685 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e78687 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12e7868a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e7868d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78690 jle 0x12e78946 */
  if ((C.zf||C.sf!=C.of)) goto L_12e78946;
  /* 12e78696 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e78699 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7869c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7869e jne 0x12e786ab */
  if (!C.zf) goto L_12e786ab;
  /* 12e786a0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e786a3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e786a6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e786a9 jle 0x12e786b2 */
  if ((C.zf||C.sf!=C.of)) goto L_12e786b2;
L_12e786ab:;
  /* 12e786ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e786ad jmp 0x12e78c07 */
  goto L_12e78c07;
L_12e786b2:;
  /* 12e786b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e786b5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12e786b8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e786bb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e786be cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e786c2 jbe 0x12e786cb */
  if ((C.cf||C.zf)) goto L_12e786cb;
  /* 12e786c4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12e786cb:;
  /* 12e786cb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e786ce mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e786d1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e786d4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e786d7 jne 0x12e787ad */
  if (!C.zf) goto L_12e787ad;
  /* 12e786dd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e786e1 jae 0x12e78742 */
  if (!C.cf) goto L_12e78742;
  /* 12e786e3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e786e8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e786eb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e786ed not edx */
  EDX = (~(EDX));
  /* 12e786ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e786f2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e786f5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12e786f9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e786fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e786fe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78701 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12e78705 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78708 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7870b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e7870e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e78711 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78714 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78717 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12e7871a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e7871d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78720 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12e78724 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e78726 jne 0x12e78740 */
  if (!C.zf) goto L_12e78740;
  /* 12e78728 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e7872d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e78730 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e78732 not edx */
  EDX = (~(EDX));
  /* 12e78734 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e78737 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e78739 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7873b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7873e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e78740:;
  /* 12e78740 jmp 0x12e787ad */
  goto L_12e787ad;
L_12e78742:;
  /* 12e78742 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e78745 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78748 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e7874d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e7874f not eax */
  EAX = (~(EAX));
  /* 12e78751 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e78754 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78757 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12e7875e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e78760 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e78763 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78766 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12e7876d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78770 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78773 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12e78776 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e78779 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e7877c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7877f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12e78782 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78785 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78788 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e7878c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7878e jne 0x12e787ad */
  if (!C.zf) goto L_12e787ad;
  /* 12e78790 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e78793 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78796 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e7879b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e7879d not eax */
  EAX = (~(EAX));
  /* 12e7879f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e787a2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e787a5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e787a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e787aa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12e787ad:;
  /* 12e787ad mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e787b0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e787b3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e787b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e787b9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12e787bc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e787bf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e787c2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e787c5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e787c8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12e787cb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e787ce add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e787d1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e787d4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e787d7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e787db jle 0x12e78927 */
  if ((C.zf||C.sf!=C.of)) goto L_12e78927;
  /* 12e787e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e787e4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e787e7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12e787ea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e787ed sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12e787f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e787f3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12e787f6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e787fa jbe 0x12e78803 */
  if ((C.cf||C.zf)) goto L_12e78803;
  /* 12e787fc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12e78803:;
  /* 12e78803 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e78806 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e78809 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12e7880c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12e7880f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e78812 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e78815 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e78818 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12e7881b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e7881e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e78821 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12e78824 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e78827 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e7882a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12e7882d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e78830 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e78833 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e78836 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12e78839 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e7883c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e7883f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e78842 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78845 jne 0x12e78913 */
  if (!C.zf) goto L_12e78913;
  /* 12e7884b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7884f jae 0x12e788ac */
  if (!C.cf) goto L_12e788ac;
  /* 12e78851 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78854 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78857 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e7885b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e7885e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78861 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e78864 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e78867 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e7886a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7886d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12e78870 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e78872 jne 0x12e7888a */
  if (!C.zf) goto L_12e7888a;
  /* 12e78874 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e78879 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7887c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e7887e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e78881 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e78883 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e78885 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e78888 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e7888a:;
  /* 12e7888a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e7888f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e78892 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e78894 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e78897 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e7889a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12e7889e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e788a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e788a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e788a6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12e788aa jmp 0x12e78913 */
  goto L_12e78913;
L_12e788ac:;
  /* 12e788ac mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e788af add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e788b2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e788b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e788b9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e788bc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e788bf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e788c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e788c5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e788c8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12e788cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e788cd jne 0x12e788ea */
  if (!C.zf) goto L_12e788ea;
  /* 12e788cf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e788d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e788d5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e788da shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e788dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e788df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e788e2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e788e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e788e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12e788ea:;
  /* 12e788ea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e788ed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e788f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e788f5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e788f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e788fa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e788fd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12e78904 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e78906 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e78909 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e7890c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12e78913:;
  /* 12e78913 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e78916 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e78919 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12e7891b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e7891e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78921 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e78924 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12e78927:;
  /* 12e78927 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e7892a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7892d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e78930 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e78932 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e78935 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78938 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e7893b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7893e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12e78941 jmp 0x12e78c02 */
  goto L_12e78c02;
L_12e78946:;
  /* 12e78946 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e78949 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7894c jge 0x12e78c02 */
  if ((C.sf==C.of)) goto L_12e78c02;
  /* 12e78952 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e78955 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78958 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e7895b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e7895d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e78960 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78963 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e78966 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78969 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12e7896c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e7896f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78972 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e78975 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e78978 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7897b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e7897e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e78981 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12e78984 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78987 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12e7898a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7898e jbe 0x12e78997 */
  if ((C.cf||C.zf)) goto L_12e78997;
  /* 12e78990 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12e78997:;
  /* 12e78997 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7899a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7899d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7899f jne 0x12e78ae0 */
  if (!C.zf) goto L_12e78ae0;
  /* 12e789a5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e789a8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12e789ab sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e789ae mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e789b1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e789b5 jbe 0x12e789be */
  if ((C.cf||C.zf)) goto L_12e789be;
  /* 12e789b7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12e789be:;
  /* 12e789be mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e789c1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e789c4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e789c7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e789ca jne 0x12e78aa0 */
  if (!C.zf) goto L_12e78aa0;
  /* 12e789d0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e789d4 jae 0x12e78a35 */
  if (!C.cf) goto L_12e78a35;
  /* 12e789d6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e789db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e789de shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e789e0 not edx */
  EDX = (~(EDX));
  /* 12e789e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e789e5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e789e8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12e789ec and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e789ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e789f1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e789f4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12e789f8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e789fb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e789fe mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e78a01 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e78a04 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78a07 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78a0a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12e78a0d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78a10 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78a13 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12e78a17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e78a19 jne 0x12e78a33 */
  if (!C.zf) goto L_12e78a33;
  /* 12e78a1b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e78a20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e78a23 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e78a25 not edx */
  EDX = (~(EDX));
  /* 12e78a27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e78a2a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e78a2c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e78a2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e78a31 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e78a33:;
  /* 12e78a33 jmp 0x12e78aa0 */
  goto L_12e78aa0;
L_12e78a35:;
  /* 12e78a35 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e78a38 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78a3b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e78a40 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e78a42 not eax */
  EAX = (~(EAX));
  /* 12e78a44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e78a47 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78a4a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12e78a51 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e78a53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e78a56 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78a59 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12e78a60 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78a63 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78a66 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12e78a69 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e78a6c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78a6f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78a72 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12e78a75 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78a78 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78a7b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e78a7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e78a81 jne 0x12e78aa0 */
  if (!C.zf) goto L_12e78aa0;
  /* 12e78a83 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e78a86 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78a89 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e78a8e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e78a90 not eax */
  EAX = (~(EAX));
  /* 12e78a92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e78a95 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e78a98 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e78a9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e78a9d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12e78aa0:;
  /* 12e78aa0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e78aa3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e78aa6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e78aa9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e78aac mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12e78aaf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e78ab2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e78ab5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e78ab8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e78abb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12e78abe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e78ac1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78ac4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e78ac7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e78aca sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12e78acd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78ad0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12e78ad3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78ad7 jbe 0x12e78ae0 */
  if ((C.cf||C.zf)) goto L_12e78ae0;
  /* 12e78ad9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12e78ae0:;
  /* 12e78ae0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e78ae3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e78ae6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12e78ae9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12e78aec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e78aef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e78af2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e78af5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12e78af8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e78afb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e78afe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12e78b01 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e78b04 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e78b07 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12e78b0a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e78b0d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e78b10 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e78b13 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12e78b16 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e78b19 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e78b1c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e78b1f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78b22 jne 0x12e78bee */
  if (!C.zf) goto L_12e78bee;
  /* 12e78b28 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78b2c jae 0x12e78b88 */
  if (!C.cf) goto L_12e78b88;
  /* 12e78b2e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78b31 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78b34 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12e78b38 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78b3b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78b3e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12e78b41 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e78b43 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78b46 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78b49 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12e78b4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e78b4e jne 0x12e78b66 */
  if (!C.zf) goto L_12e78b66;
  /* 12e78b50 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e78b55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e78b58 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e78b5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e78b5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e78b5f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e78b61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e78b64 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e78b66:;
  /* 12e78b66 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e78b6b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e78b6e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e78b70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e78b73 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78b76 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12e78b7a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e78b7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e78b7f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78b82 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12e78b86 jmp 0x12e78bee */
  goto L_12e78bee;
L_12e78b88:;
  /* 12e78b88 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78b8b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78b8e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12e78b92 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78b95 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78b98 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12e78b9b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e78b9d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78ba0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78ba3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12e78ba6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e78ba8 jne 0x12e78bc5 */
  if (!C.zf) goto L_12e78bc5;
  /* 12e78baa mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e78bad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78bb0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e78bb5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e78bb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e78bba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e78bbd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e78bbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e78bc2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12e78bc5:;
  /* 12e78bc5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e78bc8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78bcb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e78bd0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e78bd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e78bd5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78bd8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12e78bdf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e78be1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e78be4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e78be7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12e78bee:;
  /* 12e78bee mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e78bf1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e78bf4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12e78bf6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e78bf9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78bfc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e78bff mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12e78c02:;
  /* 12e78c02 mov eax, 1 */
  EAX = (0x1u);
L_12e78c07:;
  /* 12e78c07 mov esp, ebp */
  ESP = (EBP);
  /* 12e78c09 pop ebp */
  EBP = (pop32());
  /* 12e78c0a ret  */
  ESPCHK(0x12e78620u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c10 @ 0x12e78c10 (304 bytes, 79 insns) */
void f_12e78c10(void) {
  FTRACE(0x12e78c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e78c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12e78c11 mov ebp, esp */
  EBP = (ESP);
  /* 12e78c13 push ecx */
  push32((uint32_t)(ECX));
  /* 12e78c14 cmp dword ptr [0x12e90e60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e90e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78c1b je 0x12e78d3c */
  if (C.zf) goto L_12e78d3c;
  /* 12e78c21 mov eax, dword ptr [0x12e90e58] */
  EAX = (r32((uint32_t)(0x12e90e58)));
  /* 12e78c26 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12e78c29 mov ecx, dword ptr [0x12e90e60] */
  ECX = (r32((uint32_t)(0x12e90e60)));
  /* 12e78c2f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e78c32 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78c34 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e78c37 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12e78c3c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12e78c41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e78c44 push eax */
  push32((uint32_t)(EAX));
  /* 12e78c45 call dword ptr [0x12e92394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92394))), 0x12e78c4bu);
  /* 12e78c4b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e78c50 mov ecx, dword ptr [0x12e90e58] */
  ECX = (r32((uint32_t)(0x12e90e58)));
  /* 12e78c56 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e78c58 mov eax, dword ptr [0x12e90e60] */
  EAX = (r32((uint32_t)(0x12e90e60)));
  /* 12e78c5d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e78c60 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e78c62 mov edx, dword ptr [0x12e90e60] */
  EDX = (r32((uint32_t)(0x12e90e60)));
  /* 12e78c68 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12e78c6b mov eax, dword ptr [0x12e90e60] */
  EAX = (r32((uint32_t)(0x12e90e60)));
  /* 12e78c70 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e78c73 mov edx, dword ptr [0x12e90e58] */
  EDX = (r32((uint32_t)(0x12e90e58)));
  /* 12e78c79 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12e78c84 mov eax, dword ptr [0x12e90e60] */
  EAX = (r32((uint32_t)(0x12e90e60)));
  /* 12e78c89 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e78c8c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12e78c8f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e78c92 mov eax, dword ptr [0x12e90e60] */
  EAX = (r32((uint32_t)(0x12e90e60)));
  /* 12e78c97 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e78c9a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12e78c9d mov edx, dword ptr [0x12e90e60] */
  EDX = (r32((uint32_t)(0x12e90e60)));
  /* 12e78ca3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e78ca6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12e78caa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e78cac jne 0x12e78cc2 */
  if (!C.zf) goto L_12e78cc2;
  /* 12e78cae mov edx, dword ptr [0x12e90e60] */
  EDX = (r32((uint32_t)(0x12e90e60)));
  /* 12e78cb4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e78cb7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12e78cb9 mov ecx, dword ptr [0x12e90e60] */
  ECX = (r32((uint32_t)(0x12e90e60)));
  /* 12e78cbf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12e78cc2:;
  /* 12e78cc2 mov edx, dword ptr [0x12e90e60] */
  EDX = (r32((uint32_t)(0x12e90e60)));
  /* 12e78cc8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78ccc jne 0x12e78d32 */
  if (!C.zf) goto L_12e78d32;
  /* 12e78cce cmp dword ptr [0x12e90e64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e90e64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78cd5 jle 0x12e78d32 */
  if ((C.zf||C.sf!=C.of)) goto L_12e78d32;
  /* 12e78cd7 mov eax, dword ptr [0x12e90e60] */
  EAX = (r32((uint32_t)(0x12e90e60)));
  /* 12e78cdc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e78cdf push ecx */
  push32((uint32_t)(ECX));
  /* 12e78ce0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e78ce2 mov edx, dword ptr [0x12e90e6c] */
  EDX = (r32((uint32_t)(0x12e90e6c)));
  /* 12e78ce8 push edx */
  push32((uint32_t)(EDX));
  /* 12e78ce9 call dword ptr [0x12e92390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92390))), 0x12e78cefu);
  /* 12e78cef mov eax, dword ptr [0x12e90e64] */
  EAX = (r32((uint32_t)(0x12e90e64)));
  /* 12e78cf4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e78cf7 mov ecx, dword ptr [0x12e90e68] */
  ECX = (r32((uint32_t)(0x12e90e68)));
  /* 12e78cfd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78cff mov edx, dword ptr [0x12e90e60] */
  EDX = (r32((uint32_t)(0x12e90e60)));
  /* 12e78d05 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78d08 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78d0a push ecx */
  push32((uint32_t)(ECX));
  /* 12e78d0b mov eax, dword ptr [0x12e90e60] */
  EAX = (r32((uint32_t)(0x12e90e60)));
  /* 12e78d10 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78d13 push eax */
  push32((uint32_t)(EAX));
  /* 12e78d14 mov ecx, dword ptr [0x12e90e60] */
  ECX = (r32((uint32_t)(0x12e90e60)));
  /* 12e78d1a push ecx */
  push32((uint32_t)(ECX));
  /* 12e78d1b call 0x12e7b340 */
  push32(0x12e78d20u); f_12e7b340();
  /* 12e78d20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78d23 mov edx, dword ptr [0x12e90e64] */
  EDX = (r32((uint32_t)(0x12e90e64)));
  /* 12e78d29 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78d2c mov dword ptr [0x12e90e64], edx */
  w32((uint32_t)(0x12e90e64), (EDX));
L_12e78d32:;
  /* 12e78d32 mov dword ptr [0x12e90e60], 0 */
  w32((uint32_t)(0x12e90e60), (0x0u));
L_12e78d3c:;
  /* 12e78d3c mov esp, ebp */
  ESP = (EBP);
  /* 12e78d3e pop ebp */
  EBP = (pop32());
  /* 12e78d3f ret  */
  ESPCHK(0x12e78c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d40 @ 0x12e78d40 (1565 bytes, 343 insns) */
void f_12e78d40(void) {
  FTRACE(0x12e78d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e78d40 push ebp */
  push32((uint32_t)(EBP));
  /* 12e78d41 mov ebp, esp */
  EBP = (ESP);
  /* 12e78d43 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78d49 mov eax, dword ptr [0x12e90e64] */
  EAX = (r32((uint32_t)(0x12e90e64)));
  /* 12e78d4e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e78d51 push eax */
  push32((uint32_t)(EAX));
  /* 12e78d52 mov ecx, dword ptr [0x12e90e68] */
  ECX = (r32((uint32_t)(0x12e90e68)));
  /* 12e78d58 push ecx */
  push32((uint32_t)(ECX));
  /* 12e78d59 call dword ptr [0x12e9236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9236c))), 0x12e78d5fu);
  /* 12e78d5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e78d61 je 0x12e78d6b */
  if (C.zf) goto L_12e78d6b;
  /* 12e78d63 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e78d66 jmp 0x12e79359 */
  goto L_12e79359;
L_12e78d6b:;
  /* 12e78d6b mov edx, dword ptr [0x12e90e68] */
  EDX = (r32((uint32_t)(0x12e90e68)));
  /* 12e78d71 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12e78d77 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12e78d81 jmp 0x12e78d92 */
  goto L_12e78d92;
L_12e78d83:;
  /* 12e78d83 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12e78d89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78d8c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12e78d92:;
  /* 12e78d92 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12e78d98 cmp ecx, dword ptr [0x12e90e64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e90e64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78d9e jge 0x12e79357 */
  if ((C.sf==C.of)) goto L_12e79357;
  /* 12e78da4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12e78daa mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e78dad mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12e78db3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12e78db8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12e78dbe push ecx */
  push32((uint32_t)(ECX));
  /* 12e78dbf call dword ptr [0x12e9236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9236c))), 0x12e78dc5u);
  /* 12e78dc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e78dc7 je 0x12e78dd3 */
  if (C.zf) goto L_12e78dd3;
  /* 12e78dc9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12e78dce jmp 0x12e79359 */
  goto L_12e79359;
L_12e78dd3:;
  /* 12e78dd3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12e78dd9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12e78ddc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12e78de2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12e78de8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78dee mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12e78df1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12e78df7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e78dfa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e78dfd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12e78e07 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12e78e11 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e78e18 jmp 0x12e78e23 */
  goto L_12e78e23;
L_12e78e1a:;
  /* 12e78e1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e78e1d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78e20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12e78e23:;
  /* 12e78e23 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78e27 jge 0x12e7931b */
  if ((C.sf==C.of)) goto L_12e7931b;
  /* 12e78e2d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12e78e37 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12e78e41 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 12e78e4b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12e78e55 jmp 0x12e78e66 */
  goto L_12e78e66;
L_12e78e57:;
  /* 12e78e57 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12e78e5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78e60 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12e78e66:;
  /* 12e78e66 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78e6d jge 0x12e78e82 */
  if ((C.sf==C.of)) goto L_12e78e82;
  /* 12e78e6f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12e78e75 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12e78e80 jmp 0x12e78e57 */
  goto L_12e78e57;
L_12e78e82:;
  /* 12e78e82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78e86 jl 0x12e792bd */
  if ((C.sf!=C.of)) goto L_12e792bd;
  /* 12e78e8c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12e78e91 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12e78e97 push ecx */
  push32((uint32_t)(ECX));
  /* 12e78e98 call dword ptr [0x12e9236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9236c))), 0x12e78e9eu);
  /* 12e78e9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e78ea0 je 0x12e78eac */
  if (C.zf) goto L_12e78eac;
  /* 12e78ea2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12e78ea7 jmp 0x12e79359 */
  goto L_12e79359;
L_12e78eac:;
  /* 12e78eac mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12e78eb2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e78eb5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 12e78ebf jmp 0x12e78ed0 */
  goto L_12e78ed0;
L_12e78ec1:;
  /* 12e78ec1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12e78ec7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78eca mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12e78ed0:;
  /* 12e78ed0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78ed7 jge 0x12e79054 */
  if ((C.sf==C.of)) goto L_12e79054;
  /* 12e78edd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e78ee0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78ee3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12e78ee9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12e78eef add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78ef5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 12e78efb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12e78f01 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78f05 jne 0x12e78f12 */
  if (!C.zf) goto L_12e78f12;
  /* 12e78f07 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 12e78f0d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78f10 je 0x12e78f1c */
  if (C.zf) goto L_12e78f1c;
L_12e78f12:;
  /* 12e78f12 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12e78f17 jmp 0x12e79359 */
  goto L_12e79359;
L_12e78f1c:;
  /* 12e78f1c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12e78f22 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e78f24 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12e78f2a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12e78f30 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12e78f36 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 12e78f3c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12e78f3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e78f41 je 0x12e78f79 */
  if (C.zf) goto L_12e78f79;
  /* 12e78f43 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12e78f49 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78f4c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12e78f52 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78f5c jle 0x12e78f68 */
  if ((C.zf||C.sf!=C.of)) goto L_12e78f68;
  /* 12e78f5e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12e78f63 jmp 0x12e79359 */
  goto L_12e79359;
L_12e78f68:;
  /* 12e78f68 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 12e78f6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78f71 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12e78f77 jmp 0x12e78fbb */
  goto L_12e78fbb;
L_12e78f79:;
  /* 12e78f79 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 12e78f7f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12e78f82 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e78f85 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12e78f8b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78f92 jle 0x12e78f9e */
  if ((C.zf||C.sf!=C.of)) goto L_12e78f9e;
  /* 12e78f94 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12e78f9e:;
  /* 12e78f9e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12e78fa4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 12e78fab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78fae mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12e78fb4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_12e78fbb:;
  /* 12e78fbb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78fc2 jl 0x12e78fdd */
  if ((C.sf!=C.of)) goto L_12e78fdd;
  /* 12e78fc4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12e78fca and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12e78fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e78fcf jne 0x12e78fdd */
  if (!C.zf) goto L_12e78fdd;
  /* 12e78fd1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78fdb jle 0x12e78fe7 */
  if ((C.zf||C.sf!=C.of)) goto L_12e78fe7;
L_12e78fdd:;
  /* 12e78fdd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12e78fe2 jmp 0x12e79359 */
  goto L_12e79359;
L_12e78fe7:;
  /* 12e78fe7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12e78fed add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e78ff3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12e78ff6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e78ffc je 0x12e79008 */
  if (C.zf) goto L_12e79008;
  /* 12e78ffe mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12e79003 jmp 0x12e79359 */
  goto L_12e79359;
L_12e79008:;
  /* 12e79008 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12e7900e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79014 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12e7901a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12e79020 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79026 jb 0x12e78f1c */
  if (C.cf) goto L_12e78f1c;
  /* 12e7902c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12e79032 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79038 je 0x12e79044 */
  if (C.zf) goto L_12e79044;
  /* 12e7903a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12e7903f jmp 0x12e79359 */
  goto L_12e79359;
L_12e79044:;
  /* 12e79044 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e79047 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7904c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e7904f jmp 0x12e78ec1 */
  goto L_12e78ec1;
L_12e79054:;
  /* 12e79054 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e79057 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e79059 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7905f je 0x12e7906b */
  if (C.zf) goto L_12e7906b;
  /* 12e79061 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12e79066 jmp 0x12e79359 */
  goto L_12e79359;
L_12e7906b:;
  /* 12e7906b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7906e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12e79074 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12e7907b jmp 0x12e79086 */
  goto L_12e79086;
L_12e7907d:;
  /* 12e7907d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e79080 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79083 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12e79086:;
  /* 12e79086 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7908a jge 0x12e792bd */
  if ((C.sf==C.of)) goto L_12e792bd;
  /* 12e79090 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 12e7909a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12e790a0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12e790a6:;
  /* 12e790a6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12e790ac mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e790af mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12e790b5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12e790bb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e790c1 je 0x12e791ea */
  if (C.zf) goto L_12e791ea;
  /* 12e790c7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e790ca mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12e790d0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e790d7 je 0x12e791ea */
  if (C.zf) goto L_12e791ea;
  /* 12e790dd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12e790e3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e790e9 jb 0x12e790fe */
  if (C.cf) goto L_12e790fe;
  /* 12e790eb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 12e790f1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e790f6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e790fc jb 0x12e79108 */
  if (C.cf) goto L_12e79108;
L_12e790fe:;
  /* 12e790fe mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12e79103 jmp 0x12e79359 */
  goto L_12e79359;
L_12e79108:;
  /* 12e79108 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12e7910e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12e79114 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 12e7911a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12e79120 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79123 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12e79126 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e79129 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7912e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12e79134:;
  /* 12e79134 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e79137 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7913d je 0x12e7915e */
  if (C.zf) goto L_12e7915e;
  /* 12e7913f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e79142 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79148 jne 0x12e7914c */
  if (!C.zf) goto L_12e7914c;
  /* 12e7914a jmp 0x12e7915e */
  goto L_12e7915e;
L_12e7914c:;
  /* 12e7914c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7914f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e79151 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12e79154 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e79157 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79159 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12e7915c jmp 0x12e79134 */
  goto L_12e79134;
L_12e7915e:;
  /* 12e7915e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e79161 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79167 jne 0x12e79173 */
  if (!C.zf) goto L_12e79173;
  /* 12e79169 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 12e7916e jmp 0x12e79359 */
  goto L_12e79359;
L_12e79173:;
  /* 12e79173 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12e79179 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e7917b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12e7917e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e79181 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12e79187 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7918e jle 0x12e7919a */
  if ((C.zf||C.sf!=C.of)) goto L_12e7919a;
  /* 12e79190 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12e7919a:;
  /* 12e7919a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12e791a0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e791a3 je 0x12e791af */
  if (C.zf) goto L_12e791af;
  /* 12e791a5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 12e791aa jmp 0x12e79359 */
  goto L_12e79359;
L_12e791af:;
  /* 12e791af mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12e791b5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e791b8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e791be je 0x12e791ca */
  if (C.zf) goto L_12e791ca;
  /* 12e791c0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12e791c5 jmp 0x12e79359 */
  goto L_12e79359;
L_12e791ca:;
  /* 12e791ca mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12e791d0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12e791d6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12e791dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e791df mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12e791e5 jmp 0x12e790a6 */
  goto L_12e790a6;
L_12e791ea:;
  /* 12e791ea cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e791f1 je 0x12e79261 */
  if (C.zf) goto L_12e79261;
  /* 12e791f3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e791f7 jge 0x12e7922b */
  if ((C.sf==C.of)) goto L_12e7922b;
  /* 12e791f9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e791fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e79201 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e79203 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12e79209 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7920b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12e79211 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e79216 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e79219 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e7921b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12e79221 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e79223 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12e79229 jmp 0x12e79261 */
  goto L_12e79261;
L_12e7922b:;
  /* 12e7922b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e7922e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e79231 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e79236 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e79238 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 12e7923e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e79240 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12e79246 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e79249 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7924c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e79251 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e79253 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12e79259 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7925b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12e79261:;
  /* 12e79261 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12e79267 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e7926a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79270 jne 0x12e79284 */
  if (!C.zf) goto L_12e79284;
  /* 12e79272 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e79275 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12e7927b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79282 je 0x12e7928e */
  if (C.zf) goto L_12e7928e;
L_12e79284:;
  /* 12e79284 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12e79289 jmp 0x12e79359 */
  goto L_12e79359;
L_12e7928e:;
  /* 12e7928e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12e79294 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e79297 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7929d je 0x12e792a9 */
  if (C.zf) goto L_12e792a9;
  /* 12e7929f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12e792a4 jmp 0x12e79359 */
  goto L_12e79359;
L_12e792a9:;
  /* 12e792a9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 12e792af add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e792b2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12e792b8 jmp 0x12e7907d */
  goto L_12e7907d;
L_12e792bd:;
  /* 12e792bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e792c0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12e792c6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12e792cc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e792d0 jne 0x12e792ea */
  if (!C.zf) goto L_12e792ea;
  /* 12e792d2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e792d5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12e792db mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12e792e1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e792e8 je 0x12e792f1 */
  if (C.zf) goto L_12e792f1;
L_12e792ea:;
  /* 12e792ea mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 12e792ef jmp 0x12e79359 */
  goto L_12e79359;
L_12e792f1:;
  /* 12e792f1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12e792f7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e792fd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12e79303 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e79306 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7930b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e7930e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e79311 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12e79313 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e79316 jmp 0x12e78e1a */
  goto L_12e78e1a;
L_12e7931b:;
  /* 12e7931b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12e79321 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12e79327 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79329 jne 0x12e7933c */
  if (!C.zf) goto L_12e7933c;
  /* 12e7932b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12e79331 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12e79337 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7933a je 0x12e79343 */
  if (C.zf) goto L_12e79343;
L_12e7933c:;
  /* 12e7933c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12e79341 jmp 0x12e79359 */
  goto L_12e79359;
L_12e79343:;
  /* 12e79343 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12e79349 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7934c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12e79352 jmp 0x12e78d83 */
  goto L_12e78d83;
L_12e79357:;
  /* 12e79357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e79359:;
  /* 12e79359 mov esp, ebp */
  ESP = (EBP);
  /* 12e7935b pop ebp */
  EBP = (pop32());
  /* 12e7935c ret  */
  ESPCHK(0x12e78d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009360 @ 0x12e79360 (250 bytes, 92 insns) */
void f_12e79360(void) {
  FTRACE(0x12e79360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e79360 push ebp */
  push32((uint32_t)(EBP));
  /* 12e79361 mov ebp, esp */
  EBP = (ESP);
  /* 12e79363 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e79366 push ebx */
  push32((uint32_t)(EBX));
  /* 12e79367 push esi */
  push32((uint32_t)(ESI));
  /* 12e79368 push edi */
  push32((uint32_t)(EDI));
  /* 12e79369 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12e7936c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e7936f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12e79372 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12e79375:;
  /* 12e79375 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79379 jne 0x12e79399 */
  if (!C.zf) goto L_12e79399;
  /* 12e7937b push 0x12e8aea8 */
  push32((uint32_t)(0x12e8aea8u));
  /* 12e79380 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e79382 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12e79384 push 0x12e8ae9c */
  push32((uint32_t)(0x12e8ae9cu));
  /* 12e79389 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7938b call 0x12e72510 */
  push32(0x12e79390u); f_12e72510();
  /* 12e79390 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79393 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79396 jne 0x12e79399 */
  if (!C.zf) goto L_12e79399;
  /* 12e79398 int3  */
  x86_unimpl("int3 @ 0x12e79398");
L_12e79399:;
  /* 12e79399 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7939b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7939d jne 0x12e79375 */
  if (!C.zf) goto L_12e79375;
L_12e7939f:;
  /* 12e7939f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e793a3 jne 0x12e793c3 */
  if (!C.zf) goto L_12e793c3;
  /* 12e793a5 push 0x12e8ae8c */
  push32((uint32_t)(0x12e8ae8cu));
  /* 12e793aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12e793ac push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12e793ae push 0x12e8ae9c */
  push32((uint32_t)(0x12e8ae9cu));
  /* 12e793b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e793b5 call 0x12e72510 */
  push32(0x12e793bau); f_12e72510();
  /* 12e793ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e793bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e793c0 jne 0x12e793c3 */
  if (!C.zf) goto L_12e793c3;
  /* 12e793c2 int3  */
  x86_unimpl("int3 @ 0x12e793c2");
L_12e793c3:;
  /* 12e793c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e793c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e793c7 jne 0x12e7939f */
  if (!C.zf) goto L_12e7939f;
  /* 12e793c9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e793cc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12e793d3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e793d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e793d9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12e793dc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e793df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e793e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12e793e4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e793e7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 12e793ee mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e793f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e793f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e793f5 push edx */
  push32((uint32_t)(EDX));
  /* 12e793f6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e793f9 push eax */
  push32((uint32_t)(EAX));
  /* 12e793fa call 0x12e7a3e0 */
  push32(0x12e793ffu); f_12e7a3e0();
  /* 12e793ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79402 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e79405 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e79408 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e7940b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7940e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e79411 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12e79414 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e79417 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7941b jl 0x12e7943f */
  if ((C.sf!=C.of)) goto L_12e7943f;
  /* 12e7941d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e79420 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e79422 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12e79425 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e79427 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7942d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12e79430 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e79433 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e79435 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79438 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e7943b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e7943d jmp 0x12e79450 */
  goto L_12e79450;
L_12e7943f:;
  /* 12e7943f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e79442 push edx */
  push32((uint32_t)(EDX));
  /* 12e79443 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e79445 call 0x12e7a160 */
  push32(0x12e7944au); f_12e7a160();
  /* 12e7944a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7944d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12e79450:;
  /* 12e79450 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e79453 pop edi */
  EDI = (pop32());
  /* 12e79454 pop esi */
  ESI = (pop32());
  /* 12e79455 pop ebx */
  EBX = (pop32());
  /* 12e79456 mov esp, ebp */
  ESP = (EBP);
  /* 12e79458 pop ebp */
  EBP = (pop32());
  /* 12e79459 ret  */
  ESPCHK(0x12e79360u, _esp0);
  ESP += 4; return;
}

/* FUN_10009460 @ 0x12e79460 (183 bytes, 58 insns) */
void f_12e79460(void) {
  FTRACE(0x12e79460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e79460 push ebp */
  push32((uint32_t)(EBP));
  /* 12e79461 mov ebp, esp */
  EBP = (ESP);
  /* 12e79463 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e79466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e79469 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7946c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79471 ja 0x12e7948a */
  if ((!C.cf&&!C.zf)) goto L_12e7948a;
  /* 12e79473 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e79476 mov edx, dword ptr [0x12e8dcb8] */
  EDX = (r32((uint32_t)(0x12e8dcb8)));
  /* 12e7947c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7947e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12e79482 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12e79485 jmp 0x12e79513 */
  goto L_12e79513;
L_12e7948a:;
  /* 12e7948a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7948d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12e79490 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e79496 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7949c mov edx, dword ptr [0x12e8dcb8] */
  EDX = (r32((uint32_t)(0x12e8dcb8)));
  /* 12e794a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e794a4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12e794a8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12e794ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e794af je 0x12e794d3 */
  if (C.zf) goto L_12e794d3;
  /* 12e794b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e794b4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12e794b7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e794bd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12e794c0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12e794c3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12e794c6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 12e794ca mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12e794d1 jmp 0x12e794e4 */
  goto L_12e794e4;
L_12e794d3:;
  /* 12e794d3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12e794d6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12e794d9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 12e794dd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12e794e4:;
  /* 12e794e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e794e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e794e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e794ea lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12e794ed push ecx */
  push32((uint32_t)(ECX));
  /* 12e794ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e794f1 push edx */
  push32((uint32_t)(EDX));
  /* 12e794f2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12e794f5 push eax */
  push32((uint32_t)(EAX));
  /* 12e794f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e794f8 call 0x12e7b680 */
  push32(0x12e794fdu); f_12e7b680();
  /* 12e794fd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e79502 jne 0x12e79508 */
  if (!C.zf) goto L_12e79508;
  /* 12e79504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e79506 jmp 0x12e79513 */
  goto L_12e79513;
L_12e79508:;
  /* 12e79508 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7950b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e79510 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12e79513:;
  /* 12e79513 mov esp, ebp */
  ESP = (EBP);
  /* 12e79515 pop ebp */
  EBP = (pop32());
  /* 12e79516 ret  */
  ESPCHK(0x12e79460u, _esp0);
  ESP += 4; return;
}

/* FUN_10009520 @ 0x12e79520 (836 bytes, 238 insns) */
void f_12e79520(void) {
  FTRACE(0x12e79520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e79520 push ebp */
  push32((uint32_t)(EBP));
  /* 12e79521 mov ebp, esp */
  EBP = (ESP);
  /* 12e79523 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e79526 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e79528 call 0x12e76e50 */
  push32(0x12e7952du); f_12e76e50();
  /* 12e7952d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79530 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e79533 push eax */
  push32((uint32_t)(EAX));
  /* 12e79534 call 0x12e79870 */
  push32(0x12e79539u); f_12e79870();
  /* 12e79539 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7953c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e7953f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e79542 cmp ecx, dword ptr [0x12e90ba4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e90ba4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79548 jne 0x12e7955b */
  if (!C.zf) goto L_12e7955b;
  /* 12e7954a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e7954c call 0x12e76ef0 */
  push32(0x12e79551u); f_12e76ef0();
  /* 12e79551 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e79556 jmp 0x12e79860 */
  goto L_12e79860;
L_12e7955b:;
  /* 12e7955b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7955f jne 0x12e7957c */
  if (!C.zf) goto L_12e7957c;
  /* 12e79561 call 0x12e79950 */
  push32(0x12e79566u); f_12e79950();
  /* 12e79566 call 0x12e799d0 */
  push32(0x12e7956bu); f_12e799d0();
  /* 12e7956b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e7956d call 0x12e76ef0 */
  push32(0x12e79572u); f_12e76ef0();
  /* 12e79572 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79575 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e79577 jmp 0x12e79860 */
  goto L_12e79860;
L_12e7957c:;
  /* 12e7957c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e79583 jmp 0x12e7958e */
  goto L_12e7958e;
L_12e79585:;
  /* 12e79585 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e79588 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7958b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e7958e:;
  /* 12e7958e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79592 jae 0x12e796df */
  if (!C.cf) goto L_12e796df;
  /* 12e79598 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7959b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7959e mov ecx, dword ptr [eax + 0x12e8ded8] */
  ECX = (r32((uint32_t)(EAX + 0x12e8ded8)));
  /* 12e795a4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e795a7 jne 0x12e796da */
  if (!C.zf) goto L_12e796da;
  /* 12e795ad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12e795b4 jmp 0x12e795bf */
  goto L_12e795bf;
L_12e795b6:;
  /* 12e795b6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e795b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e795bc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12e795bf:;
  /* 12e795bf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e795c6 jae 0x12e795d4 */
  if (!C.cf) goto L_12e795d4;
  /* 12e795c8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e795cb mov byte ptr [eax + 0x12e90d40], 0 */
  w8((uint32_t)(EAX + 0x12e90d40), (0x0u));
  /* 12e795d2 jmp 0x12e795b6 */
  goto L_12e795b6;
L_12e795d4:;
  /* 12e795d4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e795db jmp 0x12e795e6 */
  goto L_12e795e6;
L_12e795dd:;
  /* 12e795dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e795e0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e795e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12e795e6:;
  /* 12e795e6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e795ea jae 0x12e79667 */
  if (!C.cf) goto L_12e79667;
  /* 12e795ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e795ef imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e795f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e795f5 lea ecx, [edx + eax*8 + 0x12e8dee8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12e8dee8));
  /* 12e795fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e795ff jmp 0x12e7960a */
  goto L_12e7960a;
L_12e79601:;
  /* 12e79601 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e79604 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79607 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12e7960a:;
  /* 12e7960a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7960d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7960f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e79611 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e79613 je 0x12e79662 */
  if (C.zf) goto L_12e79662;
  /* 12e79615 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e79618 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7961a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12e7961d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7961f je 0x12e79662 */
  if (C.zf) goto L_12e79662;
  /* 12e79621 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e79624 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e79626 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e79628 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12e7962b jmp 0x12e79636 */
  goto L_12e79636;
L_12e7962d:;
  /* 12e7962d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e79630 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79633 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12e79636:;
  /* 12e79636 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e79639 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7963b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12e7963e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79641 ja 0x12e79660 */
  if ((!C.cf&&!C.zf)) goto L_12e79660;
  /* 12e79643 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e79646 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e79649 mov dl, byte ptr [eax + 0x12e90d41] */
  DL = (r8((uint32_t)(EAX + 0x12e90d41)));
  /* 12e7964f or dl, byte ptr [ecx + 0x12e8ded0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12e8ded0))); DL = (_r); fl_logic(_r,8); }
  /* 12e79655 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e79658 mov byte ptr [eax + 0x12e90d41], dl */
  w8((uint32_t)(EAX + 0x12e90d41), (DL));
  /* 12e7965e jmp 0x12e7962d */
  goto L_12e7962d;
L_12e79660:;
  /* 12e79660 jmp 0x12e79601 */
  goto L_12e79601;
L_12e79662:;
  /* 12e79662 jmp 0x12e795dd */
  goto L_12e795dd;
L_12e79667:;
  /* 12e79667 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7966a mov dword ptr [0x12e90ba4], ecx */
  w32((uint32_t)(0x12e90ba4), (ECX));
  /* 12e79670 mov dword ptr [0x12e90c2c], 1 */
  w32((uint32_t)(0x12e90c2c), (0x1u));
  /* 12e7967a mov edx, dword ptr [0x12e90ba4] */
  EDX = (r32((uint32_t)(0x12e90ba4)));
  /* 12e79680 push edx */
  push32((uint32_t)(EDX));
  /* 12e79681 call 0x12e798d0 */
  push32(0x12e79686u); f_12e798d0();
  /* 12e79686 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79689 mov dword ptr [0x12e90e44], eax */
  w32((uint32_t)(0x12e90e44), (EAX));
  /* 12e7968e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e79695 jmp 0x12e796a0 */
  goto L_12e796a0;
L_12e79697:;
  /* 12e79697 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7969a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7969d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12e796a0:;
  /* 12e796a0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e796a4 jae 0x12e796c4 */
  if (!C.cf) goto L_12e796c4;
  /* 12e796a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e796a9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e796ac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e796af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e796b2 mov cx, word ptr [ecx + eax*2 + 0x12e8dedc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12e8dedc)));
  /* 12e796ba mov word ptr [edx*2 + 0x12e90c20], cx */
  w16((uint32_t)(EDX*2 + 0x12e90c20), (CX));
  /* 12e796c2 jmp 0x12e79697 */
  goto L_12e79697;
L_12e796c4:;
  /* 12e796c4 call 0x12e799d0 */
  push32(0x12e796c9u); f_12e799d0();
  /* 12e796c9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e796cb call 0x12e76ef0 */
  push32(0x12e796d0u); f_12e76ef0();
  /* 12e796d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e796d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e796d5 jmp 0x12e79860 */
  goto L_12e79860;
L_12e796da:;
  /* 12e796da jmp 0x12e79585 */
  goto L_12e79585;
L_12e796df:;
  /* 12e796df lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12e796e2 push edx */
  push32((uint32_t)(EDX));
  /* 12e796e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e796e6 push eax */
  push32((uint32_t)(EAX));
  /* 12e796e7 call dword ptr [0x12e922ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922ec))), 0x12e796edu);
  /* 12e796ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e796f0 jne 0x12e79832 */
  if (!C.zf) goto L_12e79832;
  /* 12e796f6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12e796fd jmp 0x12e79708 */
  goto L_12e79708;
L_12e796ff:;
  /* 12e796ff mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e79702 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79705 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12e79708:;
  /* 12e79708 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7970f jae 0x12e7971d */
  if (!C.cf) goto L_12e7971d;
  /* 12e79711 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e79714 mov byte ptr [edx + 0x12e90d40], 0 */
  w8((uint32_t)(EDX + 0x12e90d40), (0x0u));
  /* 12e7971b jmp 0x12e796ff */
  goto L_12e796ff;
L_12e7971d:;
  /* 12e7971d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e79720 mov dword ptr [0x12e90ba4], eax */
  w32((uint32_t)(0x12e90ba4), (EAX));
  /* 12e79725 mov dword ptr [0x12e90e44], 0 */
  w32((uint32_t)(0x12e90e44), (0x0u));
  /* 12e7972f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79733 jbe 0x12e797ee */
  if ((C.cf||C.zf)) goto L_12e797ee;
  /* 12e79739 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12e7973c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12e7973f jmp 0x12e7974a */
  goto L_12e7974a;
L_12e79741:;
  /* 12e79741 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e79744 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79747 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12e7974a:;
  /* 12e7974a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e7974d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7974f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e79751 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e79753 je 0x12e7979c */
  if (C.zf) goto L_12e7979c;
  /* 12e79755 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e79758 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7975a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12e7975d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7975f je 0x12e7979c */
  if (C.zf) goto L_12e7979c;
  /* 12e79761 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e79764 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e79766 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e79768 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12e7976b jmp 0x12e79776 */
  goto L_12e79776;
L_12e7976d:;
  /* 12e7976d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e79770 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79773 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12e79776:;
  /* 12e79776 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e79779 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7977b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12e7977e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79781 ja 0x12e7979a */
  if ((!C.cf&&!C.zf)) goto L_12e7979a;
  /* 12e79783 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e79786 mov cl, byte ptr [eax + 0x12e90d41] */
  CL = (r8((uint32_t)(EAX + 0x12e90d41)));
  /* 12e7978c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12e7978f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e79792 mov byte ptr [edx + 0x12e90d41], cl */
  w8((uint32_t)(EDX + 0x12e90d41), (CL));
  /* 12e79798 jmp 0x12e7976d */
  goto L_12e7976d;
L_12e7979a:;
  /* 12e7979a jmp 0x12e79741 */
  goto L_12e79741;
L_12e7979c:;
  /* 12e7979c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12e797a3 jmp 0x12e797ae */
  goto L_12e797ae;
L_12e797a5:;
  /* 12e797a5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e797a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e797ab mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12e797ae:;
  /* 12e797ae cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e797b5 jae 0x12e797ce */
  if (!C.cf) goto L_12e797ce;
  /* 12e797b7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e797ba mov dl, byte ptr [ecx + 0x12e90d41] */
  DL = (r8((uint32_t)(ECX + 0x12e90d41)));
  /* 12e797c0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12e797c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e797c6 mov byte ptr [eax + 0x12e90d41], dl */
  w8((uint32_t)(EAX + 0x12e90d41), (DL));
  /* 12e797cc jmp 0x12e797a5 */
  goto L_12e797a5;
L_12e797ce:;
  /* 12e797ce mov ecx, dword ptr [0x12e90ba4] */
  ECX = (r32((uint32_t)(0x12e90ba4)));
  /* 12e797d4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e797d5 call 0x12e798d0 */
  push32(0x12e797dau); f_12e798d0();
  /* 12e797da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e797dd mov dword ptr [0x12e90e44], eax */
  w32((uint32_t)(0x12e90e44), (EAX));
  /* 12e797e2 mov dword ptr [0x12e90c2c], 1 */
  w32((uint32_t)(0x12e90c2c), (0x1u));
  /* 12e797ec jmp 0x12e797f8 */
  goto L_12e797f8;
L_12e797ee:;
  /* 12e797ee mov dword ptr [0x12e90c2c], 0 */
  w32((uint32_t)(0x12e90c2c), (0x0u));
L_12e797f8:;
  /* 12e797f8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e797ff jmp 0x12e7980a */
  goto L_12e7980a;
L_12e79801:;
  /* 12e79801 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e79804 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79807 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e7980a:;
  /* 12e7980a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7980e jae 0x12e7981f */
  if (!C.cf) goto L_12e7981f;
  /* 12e79810 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e79813 mov word ptr [eax*2 + 0x12e90c20], 0 */
  w16((uint32_t)(EAX*2 + 0x12e90c20), (0x0u));
  /* 12e7981d jmp 0x12e79801 */
  goto L_12e79801;
L_12e7981f:;
  /* 12e7981f call 0x12e799d0 */
  push32(0x12e79824u); f_12e799d0();
  /* 12e79824 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e79826 call 0x12e76ef0 */
  push32(0x12e7982bu); f_12e76ef0();
  /* 12e7982b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7982e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e79830 jmp 0x12e79860 */
  goto L_12e79860;
L_12e79832:;
  /* 12e79832 cmp dword ptr [0x12e8f6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79839 je 0x12e79853 */
  if (C.zf) goto L_12e79853;
  /* 12e7983b call 0x12e79950 */
  push32(0x12e79840u); f_12e79950();
  /* 12e79840 call 0x12e799d0 */
  push32(0x12e79845u); f_12e799d0();
  /* 12e79845 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e79847 call 0x12e76ef0 */
  push32(0x12e7984cu); f_12e76ef0();
  /* 12e7984c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7984f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e79851 jmp 0x12e79860 */
  goto L_12e79860;
L_12e79853:;
  /* 12e79853 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e79855 call 0x12e76ef0 */
  push32(0x12e7985au); f_12e76ef0();
  /* 12e7985a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7985d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12e79860:;
  /* 12e79860 mov esp, ebp */
  ESP = (EBP);
  /* 12e79862 pop ebp */
  EBP = (pop32());
  /* 12e79863 ret  */
  ESPCHK(0x12e79520u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12e79870 (89 bytes, 21 insns) */
void f_12e79870(void) {
  FTRACE(0x12e79870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e79870 push ebp */
  push32((uint32_t)(EBP));
  /* 12e79871 mov ebp, esp */
  EBP = (ESP);
  /* 12e79873 mov dword ptr [0x12e8f6c0], 0 */
  w32((uint32_t)(0x12e8f6c0), (0x0u));
  /* 12e7987d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79881 jne 0x12e79895 */
  if (!C.zf) goto L_12e79895;
  /* 12e79883 mov dword ptr [0x12e8f6c0], 1 */
  w32((uint32_t)(0x12e8f6c0), (0x1u));
  /* 12e7988d call dword ptr [0x12e922e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922e4))), 0x12e79893u);
  /* 12e79893 jmp 0x12e798c7 */
  goto L_12e798c7;
L_12e79895:;
  /* 12e79895 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79899 jne 0x12e798ad */
  if (!C.zf) goto L_12e798ad;
  /* 12e7989b mov dword ptr [0x12e8f6c0], 1 */
  w32((uint32_t)(0x12e8f6c0), (0x1u));
  /* 12e798a5 call dword ptr [0x12e922e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922e8))), 0x12e798abu);
  /* 12e798ab jmp 0x12e798c7 */
  goto L_12e798c7;
L_12e798ad:;
  /* 12e798ad cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e798b1 jne 0x12e798c4 */
  if (!C.zf) goto L_12e798c4;
  /* 12e798b3 mov dword ptr [0x12e8f6c0], 1 */
  w32((uint32_t)(0x12e8f6c0), (0x1u));
  /* 12e798bd mov eax, dword ptr [0x12e8f6e0] */
  EAX = (r32((uint32_t)(0x12e8f6e0)));
  /* 12e798c2 jmp 0x12e798c7 */
  goto L_12e798c7;
L_12e798c4:;
  /* 12e798c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12e798c7:;
  /* 12e798c7 pop ebp */
  EBP = (pop32());
  /* 12e798c8 ret  */
  ESPCHK(0x12e79870u, _esp0);
  ESP += 4; return;
}

/* FUN_100098d0 @ 0x12e798d0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12e798d0(void) {
  FTRACE(0x12e798d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e798d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e798d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e798d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e798d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e798d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e798da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e798dd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e798e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e798e6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e798ea ja 0x12e7991a */
  if ((!C.cf&&!C.zf)) goto L_12e7991a;
  /* 12e798ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e798ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e798f1 mov dl, byte ptr [eax + 0x12e79934] */
  DL = (r8((uint32_t)(EAX + 0x12e79934)));
  /* 12e798f7 jmp dword ptr [edx*4 + 0x12e79920] */
  switch (EDX) {
    case 0: goto L_12e798fe;
    case 1: goto L_12e79905;
    case 2: goto L_12e7990c;
    case 3: goto L_12e79913;
    case 4: goto L_12e7991a;
    default: x86_unimpl("switch@0x12e798f7 out of table"); return;
  }
L_12e798fe:;
  /* 12e798fe mov eax, 0x411 */
  EAX = (0x411u);
  /* 12e79903 jmp 0x12e7991c */
  goto L_12e7991c;
L_12e79905:;
  /* 12e79905 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12e7990a jmp 0x12e7991c */
  goto L_12e7991c;
L_12e7990c:;
  /* 12e7990c mov eax, 0x412 */
  EAX = (0x412u);
  /* 12e79911 jmp 0x12e7991c */
  goto L_12e7991c;
L_12e79913:;
  /* 12e79913 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12e79918 jmp 0x12e7991c */
  goto L_12e7991c;
L_12e7991a:;
  /* 12e7991a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e7991c:;
  /* 12e7991c mov esp, ebp */
  ESP = (EBP);
  /* 12e7991e pop ebp */
  EBP = (pop32());
  /* 12e7991f ret  */
  ESPCHK(0x12e798d0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12e79950 (116 bytes, 29 insns) */
void f_12e79950(void) {
  FTRACE(0x12e79950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e79950 push ebp */
  push32((uint32_t)(EBP));
  /* 12e79951 mov ebp, esp */
  EBP = (ESP);
  /* 12e79953 push ecx */
  push32((uint32_t)(ECX));
  /* 12e79954 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e7995b jmp 0x12e79966 */
  goto L_12e79966;
L_12e7995d:;
  /* 12e7995d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e79960 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79963 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e79966:;
  /* 12e79966 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7996d jge 0x12e7997b */
  if ((C.sf==C.of)) goto L_12e7997b;
  /* 12e7996f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e79972 mov byte ptr [ecx + 0x12e90d40], 0 */
  w8((uint32_t)(ECX + 0x12e90d40), (0x0u));
  /* 12e79979 jmp 0x12e7995d */
  goto L_12e7995d;
L_12e7997b:;
  /* 12e7997b mov dword ptr [0x12e90ba4], 0 */
  w32((uint32_t)(0x12e90ba4), (0x0u));
  /* 12e79985 mov dword ptr [0x12e90c2c], 0 */
  w32((uint32_t)(0x12e90c2c), (0x0u));
  /* 12e7998f mov dword ptr [0x12e90e44], 0 */
  w32((uint32_t)(0x12e90e44), (0x0u));
  /* 12e79999 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e799a0 jmp 0x12e799ab */
  goto L_12e799ab;
L_12e799a2:;
  /* 12e799a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e799a5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e799a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e799ab:;
  /* 12e799ab cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e799af jge 0x12e799c0 */
  if ((C.sf==C.of)) goto L_12e799c0;
  /* 12e799b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e799b4 mov word ptr [eax*2 + 0x12e90c20], 0 */
  w16((uint32_t)(EAX*2 + 0x12e90c20), (0x0u));
  /* 12e799be jmp 0x12e799a2 */
  goto L_12e799a2;
L_12e799c0:;
  /* 12e799c0 mov esp, ebp */
  ESP = (EBP);
  /* 12e799c2 pop ebp */
  EBP = (pop32());
  /* 12e799c3 ret  */
  ESPCHK(0x12e79950u, _esp0);
  ESP += 4; return;
}

/* FUN_100099d0 @ 0x12e799d0 (770 bytes, 175 insns) */
void f_12e799d0(void) {
  FTRACE(0x12e799d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e799d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e799d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e799d3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e799d9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 12e799df push eax */
  push32((uint32_t)(EAX));
  /* 12e799e0 mov ecx, dword ptr [0x12e90ba4] */
  ECX = (r32((uint32_t)(0x12e90ba4)));
  /* 12e799e6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e799e7 call dword ptr [0x12e922ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922ec))), 0x12e799edu);
  /* 12e799ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e799f0 jne 0x12e79c09 */
  if (!C.zf) goto L_12e79c09;
  /* 12e799f6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12e79a00 jmp 0x12e79a11 */
  goto L_12e79a11;
L_12e79a02:;
  /* 12e79a02 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79a08 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79a0b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12e79a11:;
  /* 12e79a11 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79a1b jae 0x12e79a32 */
  if (!C.cf) goto L_12e79a32;
  /* 12e79a1d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79a23 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12e79a29 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12e79a30 jmp 0x12e79a02 */
  goto L_12e79a02;
L_12e79a32:;
  /* 12e79a32 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12e79a39 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 12e79a3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e79a42 jmp 0x12e79a4d */
  goto L_12e79a4d;
L_12e79a44:;
  /* 12e79a44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e79a47 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79a4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e79a4d:;
  /* 12e79a4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e79a50 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e79a52 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e79a54 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e79a56 je 0x12e79a98 */
  if (C.zf) goto L_12e79a98;
  /* 12e79a58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e79a5b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e79a5d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e79a5f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12e79a65 jmp 0x12e79a76 */
  goto L_12e79a76;
L_12e79a67:;
  /* 12e79a67 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79a6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79a70 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12e79a76:;
  /* 12e79a76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e79a79 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e79a7b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12e79a7e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79a84 ja 0x12e79a96 */
  if ((!C.cf&&!C.zf)) goto L_12e79a96;
  /* 12e79a86 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79a8c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12e79a94 jmp 0x12e79a67 */
  goto L_12e79a67;
L_12e79a96:;
  /* 12e79a96 jmp 0x12e79a44 */
  goto L_12e79a44;
L_12e79a98:;
  /* 12e79a98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e79a9a mov eax, dword ptr [0x12e90e44] */
  EAX = (r32((uint32_t)(0x12e90e44)));
  /* 12e79a9f push eax */
  push32((uint32_t)(EAX));
  /* 12e79aa0 mov ecx, dword ptr [0x12e90ba4] */
  ECX = (r32((uint32_t)(0x12e90ba4)));
  /* 12e79aa6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e79aa7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 12e79aad push edx */
  push32((uint32_t)(EDX));
  /* 12e79aae push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e79ab3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12e79ab9 push eax */
  push32((uint32_t)(EAX));
  /* 12e79aba push 1 */
  push32((uint32_t)(0x1u));
  /* 12e79abc call 0x12e7b680 */
  push32(0x12e79ac1u); f_12e7b680();
  /* 12e79ac1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79ac4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e79ac6 mov ecx, dword ptr [0x12e90ba4] */
  ECX = (r32((uint32_t)(0x12e90ba4)));
  /* 12e79acc push ecx */
  push32((uint32_t)(ECX));
  /* 12e79acd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e79ad2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12e79ad8 push edx */
  push32((uint32_t)(EDX));
  /* 12e79ad9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e79ade lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12e79ae4 push eax */
  push32((uint32_t)(EAX));
  /* 12e79ae5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e79aea mov ecx, dword ptr [0x12e90e44] */
  ECX = (r32((uint32_t)(0x12e90e44)));
  /* 12e79af0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e79af1 call 0x12e7b840 */
  push32(0x12e79af6u); f_12e7b840();
  /* 12e79af6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79af9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e79afb mov edx, dword ptr [0x12e90ba4] */
  EDX = (r32((uint32_t)(0x12e90ba4)));
  /* 12e79b01 push edx */
  push32((uint32_t)(EDX));
  /* 12e79b02 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e79b07 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12e79b0d push eax */
  push32((uint32_t)(EAX));
  /* 12e79b0e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e79b13 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12e79b19 push ecx */
  push32((uint32_t)(ECX));
  /* 12e79b1a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12e79b1f mov edx, dword ptr [0x12e90e44] */
  EDX = (r32((uint32_t)(0x12e90e44)));
  /* 12e79b25 push edx */
  push32((uint32_t)(EDX));
  /* 12e79b26 call 0x12e7b840 */
  push32(0x12e79b2bu); f_12e7b840();
  /* 12e79b2b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79b2e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12e79b38 jmp 0x12e79b49 */
  goto L_12e79b49;
L_12e79b3a:;
  /* 12e79b3a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79b40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79b43 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12e79b49:;
  /* 12e79b49 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79b53 jae 0x12e79c04 */
  if (!C.cf) goto L_12e79c04;
  /* 12e79b59 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79b5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e79b61 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12e79b69 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12e79b6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e79b6e je 0x12e79ba6 */
  if (C.zf) goto L_12e79ba6;
  /* 12e79b70 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79b76 mov cl, byte ptr [eax + 0x12e90d41] */
  CL = (r8((uint32_t)(EAX + 0x12e90d41)));
  /* 12e79b7c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12e79b7f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79b85 mov byte ptr [edx + 0x12e90d41], cl */
  w8((uint32_t)(EDX + 0x12e90d41), (CL));
  /* 12e79b8b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79b91 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79b97 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12e79b9e mov byte ptr [eax + 0x12e90c40], dl */
  w8((uint32_t)(EAX + 0x12e90c40), (DL));
  /* 12e79ba4 jmp 0x12e79bff */
  goto L_12e79bff;
L_12e79ba6:;
  /* 12e79ba6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79bac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e79bae mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12e79bb6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12e79bb9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e79bbb je 0x12e79bf2 */
  if (C.zf) goto L_12e79bf2;
  /* 12e79bbd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79bc3 mov al, byte ptr [edx + 0x12e90d41] */
  AL = (r8((uint32_t)(EDX + 0x12e90d41)));
  /* 12e79bc9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12e79bcb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79bd1 mov byte ptr [ecx + 0x12e90d41], al */
  w8((uint32_t)(ECX + 0x12e90d41), (AL));
  /* 12e79bd7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79bdd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79be3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 12e79bea mov byte ptr [edx + 0x12e90c40], cl */
  w8((uint32_t)(EDX + 0x12e90c40), (CL));
  /* 12e79bf0 jmp 0x12e79bff */
  goto L_12e79bff;
L_12e79bf2:;
  /* 12e79bf2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79bf8 mov byte ptr [edx + 0x12e90c40], 0 */
  w8((uint32_t)(EDX + 0x12e90c40), (0x0u));
L_12e79bff:;
  /* 12e79bff jmp 0x12e79b3a */
  goto L_12e79b3a;
L_12e79c04:;
  /* 12e79c04 jmp 0x12e79cce */
  goto L_12e79cce;
L_12e79c09:;
  /* 12e79c09 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12e79c13 jmp 0x12e79c24 */
  goto L_12e79c24;
L_12e79c15:;
  /* 12e79c15 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79c1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79c1e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12e79c24:;
  /* 12e79c24 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79c2e jae 0x12e79cce */
  if (!C.cf) goto L_12e79cce;
  /* 12e79c34 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79c3b jb 0x12e79c78 */
  if (C.cf) goto L_12e79c78;
  /* 12e79c3d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79c44 ja 0x12e79c78 */
  if ((!C.cf&&!C.zf)) goto L_12e79c78;
  /* 12e79c46 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79c4c mov dl, byte ptr [ecx + 0x12e90d41] */
  DL = (r8((uint32_t)(ECX + 0x12e90d41)));
  /* 12e79c52 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12e79c55 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79c5b mov byte ptr [eax + 0x12e90d41], dl */
  w8((uint32_t)(EAX + 0x12e90d41), (DL));
  /* 12e79c61 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79c67 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79c6a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79c70 mov byte ptr [edx + 0x12e90c40], cl */
  w8((uint32_t)(EDX + 0x12e90c40), (CL));
  /* 12e79c76 jmp 0x12e79cc9 */
  goto L_12e79cc9;
L_12e79c78:;
  /* 12e79c78 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79c7f jb 0x12e79cbc */
  if (C.cf) goto L_12e79cbc;
  /* 12e79c81 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79c88 ja 0x12e79cbc */
  if ((!C.cf&&!C.zf)) goto L_12e79cbc;
  /* 12e79c8a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79c90 mov cl, byte ptr [eax + 0x12e90d41] */
  CL = (r8((uint32_t)(EAX + 0x12e90d41)));
  /* 12e79c96 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12e79c99 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79c9f mov byte ptr [edx + 0x12e90d41], cl */
  w8((uint32_t)(EDX + 0x12e90d41), (CL));
  /* 12e79ca5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79cab sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e79cae mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79cb4 mov byte ptr [ecx + 0x12e90c40], al */
  w8((uint32_t)(ECX + 0x12e90c40), (AL));
  /* 12e79cba jmp 0x12e79cc9 */
  goto L_12e79cc9;
L_12e79cbc:;
  /* 12e79cbc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e79cc2 mov byte ptr [edx + 0x12e90c40], 0 */
  w8((uint32_t)(EDX + 0x12e90c40), (0x0u));
L_12e79cc9:;
  /* 12e79cc9 jmp 0x12e79c15 */
  goto L_12e79c15;
L_12e79cce:;
  /* 12e79cce mov esp, ebp */
  ESP = (EBP);
  /* 12e79cd0 pop ebp */
  EBP = (pop32());
  /* 12e79cd1 ret  */
  ESPCHK(0x12e799d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ce0 @ 0x12e79ce0 (23 bytes, 9 insns) */
void f_12e79ce0(void) {
  FTRACE(0x12e79ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e79ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e79ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12e79ce3 cmp dword ptr [0x12e90c2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e90c2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79cea je 0x12e79cf3 */
  if (C.zf) goto L_12e79cf3;
  /* 12e79cec mov eax, dword ptr [0x12e90ba4] */
  EAX = (r32((uint32_t)(0x12e90ba4)));
  /* 12e79cf1 jmp 0x12e79cf5 */
  goto L_12e79cf5;
L_12e79cf3:;
  /* 12e79cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e79cf5:;
  /* 12e79cf5 pop ebp */
  EBP = (pop32());
  /* 12e79cf6 ret  */
  ESPCHK(0x12e79ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d00 @ 0x12e79d00 (34 bytes, 10 insns) */
void f_12e79d00(void) {
  FTRACE(0x12e79d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e79d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e79d01 mov ebp, esp */
  EBP = (ESP);
  /* 12e79d03 cmp dword ptr [0x12e90ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e90ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79d0a jne 0x12e79d20 */
  if (!C.zf) goto L_12e79d20;
  /* 12e79d0c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12e79d0e call 0x12e79520 */
  push32(0x12e79d13u); f_12e79520();
  /* 12e79d13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79d16 mov dword ptr [0x12e90ff0], 1 */
  w32((uint32_t)(0x12e90ff0), (0x1u));
L_12e79d20:;
  /* 12e79d20 pop ebp */
  EBP = (pop32());
  /* 12e79d21 ret  */
  ESPCHK(0x12e79d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d30 @ 0x12e79d30 (664 bytes, 263 insns) [15 switch table(s)] */
void f_12e79d30(void) {
  FTRACE(0x12e79d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e79d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e79d31 mov ebp, esp */
  EBP = (ESP);
  /* 12e79d33 push edi */
  push32((uint32_t)(EDI));
  /* 12e79d34 push esi */
  push32((uint32_t)(ESI));
  /* 12e79d35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12e79d38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e79d3b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12e79d3e mov eax, ecx */
  EAX = (ECX);
  /* 12e79d40 mov edx, ecx */
  EDX = (ECX);
  /* 12e79d42 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79d44 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79d46 jbe 0x12e79d50 */
  if ((C.cf||C.zf)) goto L_12e79d50;
  /* 12e79d48 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79d4a jb 0x12e79ec8 */
  if (C.cf) goto L_12e79ec8;
L_12e79d50:;
  /* 12e79d50 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12e79d56 jne 0x12e79d6c */
  if (!C.zf) goto L_12e79d6c;
  /* 12e79d58 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e79d5b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12e79d5e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79d61 jb 0x12e79d8c */
  if (C.cf) goto L_12e79d8c;
  /* 12e79d63 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e79d65 jmp dword ptr [edx*4 + 0x12e79e78] */
  switch (EDX) {
    case 0: goto L_12e79e88;
    case 1: goto L_12e79e90;
    case 2: goto L_12e79e9c;
    case 3: goto L_12e79eb0;
    default: x86_unimpl("switch@0x12e79d65 out of table"); return;
  }
L_12e79d6c:;
  /* 12e79d6c mov eax, edi */
  EAX = (EDI);
  /* 12e79d6e mov edx, 3 */
  EDX = (0x3u);
  /* 12e79d73 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e79d76 jb 0x12e79d84 */
  if (C.cf) goto L_12e79d84;
  /* 12e79d78 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12e79d7b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79d7d jmp dword ptr [eax*4 + 0x12e79d90] */
  switch (EAX) {
    case 1: goto L_12e79da0;
    case 2: goto L_12e79dcc;
    case 3: goto L_12e79df0;
    default: x86_unimpl("switch@0x12e79d7d out of table"); return;
  }
L_12e79d84:;
  /* 12e79d84 jmp dword ptr [ecx*4 + 0x12e79e88] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12e79e88)))); return;
  /* 12e79d8b nop  */
  /* nop */
L_12e79d8c:;
  /* 12e79d8c jmp dword ptr [ecx*4 + 0x12e79e0c] */
  switch (ECX) {
    case 0: goto L_12e79e6f;
    case 1: goto L_12e79e5c;
    case 2: goto L_12e79e54;
    case 3: goto L_12e79e4c;
    case 4: goto L_12e79e44;
    case 5: goto L_12e79e3c;
    case 6: goto L_12e79e34;
    case 7: goto L_12e79e2c;
    default: x86_unimpl("switch@0x12e79d8c out of table"); return;
  }
  /* 12e79d93 nop  */
  /* nop */
L_12e79da0:;
  /* 12e79da0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e79da2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e79da4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e79da6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e79da9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e79dac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e79daf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e79db2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e79db5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79db8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79dbb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79dbe jb 0x12e79d8c */
  if (C.cf) goto L_12e79d8c;
  /* 12e79dc0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e79dc2 jmp dword ptr [edx*4 + 0x12e79e78] */
  switch (EDX) {
    case 0: goto L_12e79e88;
    case 1: goto L_12e79e90;
    case 2: goto L_12e79e9c;
    case 3: goto L_12e79eb0;
    default: x86_unimpl("switch@0x12e79dc2 out of table"); return;
  }
  /* 12e79dc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e79dcc:;
  /* 12e79dcc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e79dce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e79dd0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e79dd2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e79dd5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e79dd8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e79ddb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79dde add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79de1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79de4 jb 0x12e79d8c */
  if (C.cf) goto L_12e79d8c;
  /* 12e79de6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e79de8 jmp dword ptr [edx*4 + 0x12e79e78] */
  switch (EDX) {
    case 0: goto L_12e79e88;
    case 1: goto L_12e79e90;
    case 2: goto L_12e79e9c;
    case 3: goto L_12e79eb0;
    default: x86_unimpl("switch@0x12e79de8 out of table"); return;
  }
  /* 12e79def nop  */
  /* nop */
L_12e79df0:;
  /* 12e79df0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e79df2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e79df4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e79df6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e79df7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e79dfa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e79dfb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79dfe jb 0x12e79d8c */
  if (C.cf) goto L_12e79d8c;
  /* 12e79e00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e79e02 jmp dword ptr [edx*4 + 0x12e79e78] */
  switch (EDX) {
    case 0: goto L_12e79e88;
    case 1: goto L_12e79e90;
    case 2: goto L_12e79e9c;
    case 3: goto L_12e79eb0;
    default: x86_unimpl("switch@0x12e79e02 out of table"); return;
  }
  /* 12e79e09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e79e2c:;
  /* 12e79e2c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12e79e30 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12e79e34:;
  /* 12e79e34 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12e79e38 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12e79e3c:;
  /* 12e79e3c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12e79e40 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12e79e44:;
  /* 12e79e44 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12e79e48 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12e79e4c:;
  /* 12e79e4c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12e79e50 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12e79e54:;
  /* 12e79e54 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12e79e58 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12e79e5c:;
  /* 12e79e5c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12e79e60 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12e79e64 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12e79e6b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e79e6d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12e79e6f:;
  /* 12e79e6f jmp dword ptr [edx*4 + 0x12e79e78] */
  switch (EDX) {
    case 0: goto L_12e79e88;
    case 1: goto L_12e79e90;
    case 2: goto L_12e79e9c;
    case 3: goto L_12e79eb0;
    default: x86_unimpl("switch@0x12e79e6f out of table"); return;
  }
  /* 12e79e76 mov edi, edi */
  EDI = (EDI);
L_12e79e88:;
  /* 12e79e88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e79e8b pop esi */
  ESI = (pop32());
  /* 12e79e8c pop edi */
  EDI = (pop32());
  /* 12e79e8d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e79e8e ret  */
  ESPCHK(0x12e79d30u, _esp0);
  ESP += 4; return;
  /* 12e79e8f nop  */
  /* nop */
L_12e79e90:;
  /* 12e79e90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e79e92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e79e94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e79e97 pop esi */
  ESI = (pop32());
  /* 12e79e98 pop edi */
  EDI = (pop32());
  /* 12e79e99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e79e9a ret  */
  ESPCHK(0x12e79d30u, _esp0);
  ESP += 4; return;
  /* 12e79e9b nop  */
  /* nop */
L_12e79e9c:;
  /* 12e79e9c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e79e9e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e79ea0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e79ea3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e79ea6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e79ea9 pop esi */
  ESI = (pop32());
  /* 12e79eaa pop edi */
  EDI = (pop32());
  /* 12e79eab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e79eac ret  */
  ESPCHK(0x12e79d30u, _esp0);
  ESP += 4; return;
  /* 12e79ead lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e79eb0:;
  /* 12e79eb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e79eb2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e79eb4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e79eb7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e79eba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e79ebd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e79ec0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e79ec3 pop esi */
  ESI = (pop32());
  /* 12e79ec4 pop edi */
  EDI = (pop32());
  /* 12e79ec5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e79ec6 ret  */
  ESPCHK(0x12e79d30u, _esp0);
  ESP += 4; return;
  /* 12e79ec7 nop  */
  /* nop */
L_12e79ec8:;
  /* 12e79ec8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12e79ecc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12e79ed0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12e79ed6 jne 0x12e79efc */
  if (!C.zf) goto L_12e79efc;
  /* 12e79ed8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e79edb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12e79ede cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79ee1 jb 0x12e79ef0 */
  if (C.cf) goto L_12e79ef0;
  /* 12e79ee3 std  */
  C.df=1;
  /* 12e79ee4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e79ee6 cld  */
  C.df=0;
  /* 12e79ee7 jmp dword ptr [edx*4 + 0x12e7a010] */
  switch (EDX) {
    case 0: goto L_12e7a020;
    case 1: goto L_12e7a028;
    case 2: goto L_12e7a038;
    case 3: goto L_12e7a04c;
    default: x86_unimpl("switch@0x12e79ee7 out of table"); return;
  }
  /* 12e79eee mov edi, edi */
  EDI = (EDI);
L_12e79ef0:;
  /* 12e79ef0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e79ef2 jmp dword ptr [ecx*4 + 0x12e79fc0] */
  switch (ECX) {
    case 0: goto L_12e7a007;
    default: x86_unimpl("switch@0x12e79ef2 out of table"); return;
  }
  /* 12e79ef9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e79efc:;
  /* 12e79efc mov eax, edi */
  EAX = (EDI);
  /* 12e79efe mov edx, 3 */
  EDX = (0x3u);
  /* 12e79f03 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79f06 jb 0x12e79f14 */
  if (C.cf) goto L_12e79f14;
  /* 12e79f08 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12e79f0b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e79f0d jmp dword ptr [eax*4 + 0x12e79f18] */
  switch (EAX) {
    case 1: goto L_12e79f28;
    case 2: goto L_12e79f48;
    case 3: goto L_12e79f70;
    default: x86_unimpl("switch@0x12e79f0d out of table"); return;
  }
L_12e79f14:;
  /* 12e79f14 jmp dword ptr [ecx*4 + 0x12e7a010] */
  switch (ECX) {
    case 0: goto L_12e7a020;
    case 1: goto L_12e7a028;
    case 2: goto L_12e7a038;
    case 3: goto L_12e7a04c;
    default: x86_unimpl("switch@0x12e79f14 out of table"); return;
  }
  /* 12e79f1b nop  */
  /* nop */
L_12e79f28:;
  /* 12e79f28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e79f2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e79f2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e79f30 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12e79f31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e79f34 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12e79f35 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79f38 jb 0x12e79ef0 */
  if (C.cf) goto L_12e79ef0;
  /* 12e79f3a std  */
  C.df=1;
  /* 12e79f3b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e79f3d cld  */
  C.df=0;
  /* 12e79f3e jmp dword ptr [edx*4 + 0x12e7a010] */
  switch (EDX) {
    case 0: goto L_12e7a020;
    case 1: goto L_12e7a028;
    case 2: goto L_12e7a038;
    case 3: goto L_12e7a04c;
    default: x86_unimpl("switch@0x12e79f3e out of table"); return;
  }
  /* 12e79f45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e79f48:;
  /* 12e79f48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e79f4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e79f4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e79f50 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e79f53 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e79f56 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e79f59 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e79f5c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e79f5f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79f62 jb 0x12e79ef0 */
  if (C.cf) goto L_12e79ef0;
  /* 12e79f64 std  */
  C.df=1;
  /* 12e79f65 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e79f67 cld  */
  C.df=0;
  /* 12e79f68 jmp dword ptr [edx*4 + 0x12e7a010] */
  switch (EDX) {
    case 0: goto L_12e7a020;
    case 1: goto L_12e7a028;
    case 2: goto L_12e7a038;
    case 3: goto L_12e7a04c;
    default: x86_unimpl("switch@0x12e79f68 out of table"); return;
  }
  /* 12e79f6f nop  */
  /* nop */
L_12e79f70:;
  /* 12e79f70 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e79f73 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e79f75 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e79f78 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e79f7b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e79f7e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e79f81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e79f84 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e79f87 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e79f8a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e79f8d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e79f90 jb 0x12e79ef0 */
  if (C.cf) goto L_12e79ef0;
  /* 12e79f96 std  */
  C.df=1;
  /* 12e79f97 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e79f99 cld  */
  C.df=0;
  /* 12e79f9a jmp dword ptr [edx*4 + 0x12e7a010] */
  switch (EDX) {
    case 0: goto L_12e7a020;
    case 1: goto L_12e7a028;
    case 2: goto L_12e7a038;
    case 3: goto L_12e7a04c;
    default: x86_unimpl("switch@0x12e79f9a out of table"); return;
  }
  /* 12e79fa1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12e79fa4 les ebx, ptr [edi - 0x6033ed19] */
  x86_unimpl("les @ 0x12e79fa4");
  /* 12e79faa out 0x12, eax */
  x86_unimpl("out @ 0x12e79faa");
  /* 12e79fac aam 0x9f */
  x86_unimpl("aam @ 0x12e79fac");
  /* 12e79fae out 0x12, eax */
  x86_unimpl("out @ 0x12e79fae");
  /* 12e79fb0 fcomp qword ptr [edi - 0x601bed19] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(EDI + -0x601bed19)));
  (void)fpu_pop();
  /* 12e79fb6 out 0x12, eax */
  x86_unimpl("out @ 0x12e79fb6");
  /* 12e79fb8 in al, dx */
  x86_unimpl("in @ 0x12e79fb8");
  /* 12e79fb9 lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 12e79fba out 0x12, eax */
  x86_unimpl("out @ 0x12e79fba");
  /* 12e79fbc hlt  */
  x86_unimpl("hlt @ 0x12e79fbc");
  /* 12e79fbd lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 12e79fbe out 0x12, eax */
  x86_unimpl("out @ 0x12e79fbe");
  /* 12e79fc4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12e79fc8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12e79fcc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12e79fd0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12e79fd4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12e79fd8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12e79fdc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12e79fe0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12e79fe4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12e79fe8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12e79fec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12e79ff0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12e79ff4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12e79ff8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12e79ffc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12e7a003 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a005 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12e7a007:;
  /* 12e7a007 jmp dword ptr [edx*4 + 0x12e7a010] */
  switch (EDX) {
    case 0: goto L_12e7a020;
    case 1: goto L_12e7a028;
    case 2: goto L_12e7a038;
    case 3: goto L_12e7a04c;
    default: x86_unimpl("switch@0x12e7a007 out of table"); return;
  }
  /* 12e7a00e mov edi, edi */
  EDI = (EDI);
L_12e7a020:;
  /* 12e7a020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7a023 pop esi */
  ESI = (pop32());
  /* 12e7a024 pop edi */
  EDI = (pop32());
  /* 12e7a025 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e7a026 ret  */
  ESPCHK(0x12e79d30u, _esp0);
  ESP += 4; return;
  /* 12e7a027 nop  */
  /* nop */
L_12e7a028:;
  /* 12e7a028 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e7a02b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e7a02e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7a031 pop esi */
  ESI = (pop32());
  /* 12e7a032 pop edi */
  EDI = (pop32());
  /* 12e7a033 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e7a034 ret  */
  ESPCHK(0x12e79d30u, _esp0);
  ESP += 4; return;
  /* 12e7a035 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e7a038:;
  /* 12e7a038 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e7a03b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e7a03e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e7a041 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e7a044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7a047 pop esi */
  ESI = (pop32());
  /* 12e7a048 pop edi */
  EDI = (pop32());
  /* 12e7a049 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e7a04a ret  */
  ESPCHK(0x12e79d30u, _esp0);
  ESP += 4; return;
  /* 12e7a04b nop  */
  /* nop */
L_12e7a04c:;
  /* 12e7a04c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e7a04f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e7a052 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e7a055 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e7a058 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e7a05b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e7a05e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7a061 pop esi */
  ESI = (pop32());
  /* 12e7a062 pop edi */
  EDI = (pop32());
  /* 12e7a063 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e7a064 ret  */
  ESPCHK(0x12e79d30u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12e7a070 (104 bytes, 43 insns) */
void f_12e7a070(void) {
  FTRACE(0x12e7a070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7a070 push ebx */
  push32((uint32_t)(EBX));
  /* 12e7a071 push esi */
  push32((uint32_t)(ESI));
  /* 12e7a072 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12e7a076 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7a078 jne 0x12e7a092 */
  if (!C.zf) goto L_12e7a092;
  /* 12e7a07a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12e7a07e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12e7a082 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7a084 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e7a086 mov ebx, eax */
  EBX = (EAX);
  /* 12e7a088 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12e7a08c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e7a08e mov edx, ebx */
  EDX = (EBX);
  /* 12e7a090 jmp 0x12e7a0d3 */
  goto L_12e7a0d3;
L_12e7a092:;
  /* 12e7a092 mov ecx, eax */
  ECX = (EAX);
  /* 12e7a094 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12e7a098 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12e7a09c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12e7a0a0:;
  /* 12e7a0a0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12e7a0a2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12e7a0a4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12e7a0a6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12e7a0a8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7a0aa jne 0x12e7a0a0 */
  if (!C.zf) goto L_12e7a0a0;
  /* 12e7a0ac div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e7a0ae mov esi, eax */
  ESI = (EAX);
  /* 12e7a0b0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e7a0b4 mov ecx, eax */
  ECX = (EAX);
  /* 12e7a0b6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12e7a0ba mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e7a0bc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a0be jb 0x12e7a0ce */
  if (C.cf) goto L_12e7a0ce;
  /* 12e7a0c0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a0c4 ja 0x12e7a0ce */
  if ((!C.cf&&!C.zf)) goto L_12e7a0ce;
  /* 12e7a0c6 jb 0x12e7a0cf */
  if (C.cf) goto L_12e7a0cf;
  /* 12e7a0c8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a0cc jbe 0x12e7a0cf */
  if ((C.cf||C.zf)) goto L_12e7a0cf;
L_12e7a0ce:;
  /* 12e7a0ce dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_12e7a0cf:;
  /* 12e7a0cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7a0d1 mov eax, esi */
  EAX = (ESI);
L_12e7a0d3:;
  /* 12e7a0d3 pop esi */
  ESI = (pop32());
  /* 12e7a0d4 pop ebx */
  EBX = (pop32());
  /* 12e7a0d5 ret 0x10 */
  ESPCHK(0x12e7a070u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12e7a0e0 (117 bytes, 44 insns) */
void f_12e7a0e0(void) {
  FTRACE(0x12e7a0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7a0e0 push ebx */
  push32((uint32_t)(EBX));
  /* 12e7a0e1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12e7a0e5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7a0e7 jne 0x12e7a101 */
  if (!C.zf) goto L_12e7a101;
  /* 12e7a0e9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12e7a0ed mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12e7a0f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7a0f3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e7a0f5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e7a0f9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e7a0fb mov eax, edx */
  EAX = (EDX);
  /* 12e7a0fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7a0ff jmp 0x12e7a151 */
  goto L_12e7a151;
L_12e7a101:;
  /* 12e7a101 mov ecx, eax */
  ECX = (EAX);
  /* 12e7a103 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12e7a107 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12e7a10b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_12e7a10f:;
  /* 12e7a10f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12e7a111 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12e7a113 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12e7a115 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12e7a117 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7a119 jne 0x12e7a10f */
  if (!C.zf) goto L_12e7a10f;
  /* 12e7a11b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e7a11d mov ecx, eax */
  ECX = (EAX);
  /* 12e7a11f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e7a123 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12e7a124 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e7a128 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a12a jb 0x12e7a13a */
  if (C.cf) goto L_12e7a13a;
  /* 12e7a12c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a130 ja 0x12e7a13a */
  if ((!C.cf&&!C.zf)) goto L_12e7a13a;
  /* 12e7a132 jb 0x12e7a142 */
  if (C.cf) goto L_12e7a142;
  /* 12e7a134 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a138 jbe 0x12e7a142 */
  if ((C.cf||C.zf)) goto L_12e7a142;
L_12e7a13a:;
  /* 12e7a13a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7a13e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12e7a142:;
  /* 12e7a142 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7a146 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7a14a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7a14c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7a14e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12e7a151:;
  /* 12e7a151 pop ebx */
  EBX = (pop32());
  /* 12e7a152 ret 0x10 */
  ESPCHK(0x12e7a0e0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000a160 @ 0x12e7a160 (628 bytes, 214 insns) */
void f_12e7a160(void) {
  FTRACE(0x12e7a160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7a160 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7a161 mov ebp, esp */
  EBP = (ESP);
  /* 12e7a163 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7a166 push ebx */
  push32((uint32_t)(EBX));
  /* 12e7a167 push esi */
  push32((uint32_t)(ESI));
  /* 12e7a168 push edi */
  push32((uint32_t)(EDI));
L_12e7a169:;
  /* 12e7a169 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a16d jne 0x12e7a18d */
  if (!C.zf) goto L_12e7a18d;
  /* 12e7a16f push 0x12e8af54 */
  push32((uint32_t)(0x12e8af54u));
  /* 12e7a174 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7a176 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 12e7a178 push 0x12e8af48 */
  push32((uint32_t)(0x12e8af48u));
  /* 12e7a17d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7a17f call 0x12e72510 */
  push32(0x12e7a184u); f_12e72510();
  /* 12e7a184 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a187 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a18a jne 0x12e7a18d */
  if (!C.zf) goto L_12e7a18d;
  /* 12e7a18c int3  */
  x86_unimpl("int3 @ 0x12e7a18c");
L_12e7a18d:;
  /* 12e7a18d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7a18f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7a191 jne 0x12e7a169 */
  if (!C.zf) goto L_12e7a169;
  /* 12e7a193 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7a196 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7a199 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a19c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e7a19f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e7a1a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a1a5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e7a1a8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7a1ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7a1b0 je 0x12e7a1bf */
  if (C.zf) goto L_12e7a1bf;
  /* 12e7a1b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a1b5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e7a1b8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7a1bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7a1bd je 0x12e7a1d5 */
  if (C.zf) goto L_12e7a1d5;
L_12e7a1bf:;
  /* 12e7a1bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a1c2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12e7a1c5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12e7a1c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a1ca mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12e7a1cd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7a1d0 jmp 0x12e7a3cd */
  goto L_12e7a3cd;
L_12e7a1d5:;
  /* 12e7a1d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a1d8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12e7a1db and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7a1de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7a1e0 je 0x12e7a22c */
  if (C.zf) goto L_12e7a22c;
  /* 12e7a1e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a1e5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12e7a1ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a1ef mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12e7a1f2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7a1f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7a1f7 je 0x12e7a215 */
  if (C.zf) goto L_12e7a215;
  /* 12e7a1f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a1fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a1ff mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e7a202 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e7a204 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a207 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e7a20a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7a20d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a210 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12e7a213 jmp 0x12e7a22c */
  goto L_12e7a22c;
L_12e7a215:;
  /* 12e7a215 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a218 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e7a21b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7a21e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a221 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12e7a224 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7a227 jmp 0x12e7a3cd */
  goto L_12e7a3cd;
L_12e7a22c:;
  /* 12e7a22c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a22f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e7a232 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7a235 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a238 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12e7a23b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a23e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e7a241 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7a244 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a247 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12e7a24a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a24d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12e7a254 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e7a25b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a25e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e7a261 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a264 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e7a267 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7a26d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7a26f jne 0x12e7a29f */
  if (!C.zf) goto L_12e7a29f;
  /* 12e7a271 cmp dword ptr [ebp - 8], 0x12e8e160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12e8e160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a278 je 0x12e7a283 */
  if (C.zf) goto L_12e7a283;
  /* 12e7a27a cmp dword ptr [ebp - 8], 0x12e8e180 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12e8e180u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a281 jne 0x12e7a293 */
  if (!C.zf) goto L_12e7a293;
L_12e7a283:;
  /* 12e7a283 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7a286 push edx */
  push32((uint32_t)(EDX));
  /* 12e7a287 call 0x12e7c0d0 */
  push32(0x12e7a28cu); f_12e7c0d0();
  /* 12e7a28c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a28f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7a291 jne 0x12e7a29f */
  if (!C.zf) goto L_12e7a29f;
L_12e7a293:;
  /* 12e7a293 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a296 push eax */
  push32((uint32_t)(EAX));
  /* 12e7a297 call 0x12e7c000 */
  push32(0x12e7a29cu); f_12e7c000();
  /* 12e7a29c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7a29f:;
  /* 12e7a29f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a2a2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e7a2a5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7a2ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7a2ad je 0x12e7a38b */
  if (C.zf) goto L_12e7a38b;
L_12e7a2b3:;
  /* 12e7a2b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a2b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a2b9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 12e7a2bb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7a2be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7a2c0 jge 0x12e7a2e3 */
  if ((C.sf==C.of)) goto L_12e7a2e3;
  /* 12e7a2c2 push 0x12e8af08 */
  push32((uint32_t)(0x12e8af08u));
  /* 12e7a2c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7a2c9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 12e7a2ce push 0x12e8af48 */
  push32((uint32_t)(0x12e8af48u));
  /* 12e7a2d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7a2d5 call 0x12e72510 */
  push32(0x12e7a2dau); f_12e72510();
  /* 12e7a2da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a2dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a2e0 jne 0x12e7a2e3 */
  if (!C.zf) goto L_12e7a2e3;
  /* 12e7a2e2 int3  */
  x86_unimpl("int3 @ 0x12e7a2e2");
L_12e7a2e3:;
  /* 12e7a2e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7a2e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7a2e7 jne 0x12e7a2b3 */
  if (!C.zf) goto L_12e7a2b3;
  /* 12e7a2e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a2ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a2ef mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12e7a2f1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7a2f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7a2f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a2fa mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e7a2fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a300 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a303 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e7a305 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a308 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e7a30b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7a30e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a311 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12e7a314 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a318 jle 0x12e7a336 */
  if ((C.zf||C.sf!=C.of)) goto L_12e7a336;
  /* 12e7a31a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a31d push ecx */
  push32((uint32_t)(ECX));
  /* 12e7a31e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a321 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e7a324 push eax */
  push32((uint32_t)(EAX));
  /* 12e7a325 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7a328 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7a329 call 0x12e7bcf0 */
  push32(0x12e7a32eu); f_12e7bcf0();
  /* 12e7a32e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a331 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e7a334 jmp 0x12e7a37e */
  goto L_12e7a37e;
L_12e7a336:;
  /* 12e7a336 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a33a je 0x12e7a359 */
  if (C.zf) goto L_12e7a359;
  /* 12e7a33c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7a33f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12e7a342 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7a345 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7a348 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7a34b mov ecx, dword ptr [edx*4 + 0x12e90ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12e90ea0)));
  /* 12e7a352 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a354 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e7a357 jmp 0x12e7a360 */
  goto L_12e7a360;
L_12e7a359:;
  /* 12e7a359 mov dword ptr [ebp - 0x14], 0x12e8da80 */
  w32((uint32_t)(EBP + -0x14), (0x12e8da80u));
L_12e7a360:;
  /* 12e7a360 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e7a363 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 12e7a367 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7a36a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7a36c je 0x12e7a37e */
  if (C.zf) goto L_12e7a37e;
  /* 12e7a36e push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7a370 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7a372 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7a375 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7a376 call 0x12e7bba0 */
  push32(0x12e7a37bu); f_12e7bba0();
  /* 12e7a37b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7a37e:;
  /* 12e7a37e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a381 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e7a384 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12e7a387 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12e7a389 jmp 0x12e7a3a9 */
  goto L_12e7a3a9;
L_12e7a38b:;
  /* 12e7a38b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e7a392 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a395 push edx */
  push32((uint32_t)(EDX));
  /* 12e7a396 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12e7a399 push eax */
  push32((uint32_t)(EAX));
  /* 12e7a39a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7a39d push ecx */
  push32((uint32_t)(ECX));
  /* 12e7a39e call 0x12e7bcf0 */
  push32(0x12e7a3a3u); f_12e7bcf0();
  /* 12e7a3a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a3a6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12e7a3a9:;
  /* 12e7a3a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7a3ac cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a3af je 0x12e7a3c5 */
  if (C.zf) goto L_12e7a3c5;
  /* 12e7a3b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a3b4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e7a3b7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7a3ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a3bd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12e7a3c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7a3c3 jmp 0x12e7a3cd */
  goto L_12e7a3cd;
L_12e7a3c5:;
  /* 12e7a3c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7a3c8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_12e7a3cd:;
  /* 12e7a3cd pop edi */
  EDI = (pop32());
  /* 12e7a3ce pop esi */
  ESI = (pop32());
  /* 12e7a3cf pop ebx */
  EBX = (pop32());
  /* 12e7a3d0 mov esp, ebp */
  ESP = (EBP);
  /* 12e7a3d2 pop ebp */
  EBP = (pop32());
  /* 12e7a3d3 ret  */
  ESPCHK(0x12e7a160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3e0 @ 0x12e7a3e0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12e7a3e0(void) {
  FTRACE(0x12e7a3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7a3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7a3e1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7a3e3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7a3e9 push ebx */
  push32((uint32_t)(EBX));
  /* 12e7a3ea push esi */
  push32((uint32_t)(ESI));
  /* 12e7a3eb push edi */
  push32((uint32_t)(EDI));
  /* 12e7a3ec mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12e7a3f3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 12e7a3fd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12e7a404:;
  /* 12e7a404 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7a407 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e7a409 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 12e7a40c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e7a410 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7a413 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a416 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12e7a419 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7a41b je 0x12e7aff7 */
  if (C.zf) goto L_12e7aff7;
  /* 12e7a421 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a428 jl 0x12e7aff7 */
  if ((C.sf!=C.of)) goto L_12e7aff7;
  /* 12e7a42e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e7a432 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a435 jl 0x12e7a456 */
  if ((C.sf!=C.of)) goto L_12e7a456;
  /* 12e7a437 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e7a43b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a43e jg 0x12e7a456 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e7a456;
  /* 12e7a440 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e7a444 movsx ecx, byte ptr [eax + 0x12e8af40] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12e8af40))));
  /* 12e7a44b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7a44e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12e7a454 jmp 0x12e7a460 */
  goto L_12e7a460;
L_12e7a456:;
  /* 12e7a456 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_12e7a460:;
  /* 12e7a460 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 12e7a466 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e7a469 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7a46c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7a46f movsx edx, byte ptr [ecx + eax*8 + 0x12e8af60] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12e8af60))));
  /* 12e7a477 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12e7a47a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12e7a47d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7a480 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 12e7a486 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a48d ja 0x12e7aff2 */
  if ((!C.cf&&!C.zf)) goto L_12e7aff2;
  /* 12e7a493 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 12e7a499 jmp dword ptr [ecx*4 + 0x12e7b004] */
  switch (ECX) {
    case 0: goto L_12e7a4a0;
    case 1: goto L_12e7a53a;
    case 2: goto L_12e7a57c;
    case 3: goto L_12e7a5eb;
    case 4: goto L_12e7a643;
    case 5: goto L_12e7a652;
    case 6: goto L_12e7a69e;
    case 7: goto L_12e7a731;
    case 8: goto L_12e7a5c8;
    case 9: goto L_12e7a5d3;
    case 10: goto L_12e7a5be;
    case 11: goto L_12e7a5b3;
    case 12: goto L_12e7a5de;
    case 13: goto L_12e7a5e6;
    default: x86_unimpl("switch@0x12e7a499 out of table"); return;
  }
L_12e7a4a0:;
  /* 12e7a4a0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12e7a4a7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e7a4aa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7a4b0 mov eax, dword ptr [0x12e8dcb8] */
  EAX = (r32((uint32_t)(0x12e8dcb8)));
  /* 12e7a4b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7a4b7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12e7a4bb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7a4c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7a4c3 je 0x12e7a51d */
  if (C.zf) goto L_12e7a51d;
  /* 12e7a4c5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 12e7a4cb push edx */
  push32((uint32_t)(EDX));
  /* 12e7a4cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7a4cf push eax */
  push32((uint32_t)(EAX));
  /* 12e7a4d0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e7a4d4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7a4d5 call 0x12e7b110 */
  push32(0x12e7a4dau); f_12e7b110();
  /* 12e7a4da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a4dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7a4e0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e7a4e2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12e7a4e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7a4e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a4eb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12e7a4ee:;
  /* 12e7a4ee movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e7a4f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7a4f4 jne 0x12e7a517 */
  if (!C.zf) goto L_12e7a517;
  /* 12e7a4f6 push 0x12e8afe0 */
  push32((uint32_t)(0x12e8afe0u));
  /* 12e7a4fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7a4fd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12e7a502 push 0x12e8afd4 */
  push32((uint32_t)(0x12e8afd4u));
  /* 12e7a507 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7a509 call 0x12e72510 */
  push32(0x12e7a50eu); f_12e72510();
  /* 12e7a50e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a511 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a514 jne 0x12e7a517 */
  if (!C.zf) goto L_12e7a517;
  /* 12e7a516 int3  */
  x86_unimpl("int3 @ 0x12e7a516");
L_12e7a517:;
  /* 12e7a517 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7a519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7a51b jne 0x12e7a4ee */
  if (!C.zf) goto L_12e7a4ee;
L_12e7a51d:;
  /* 12e7a51d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12e7a523 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7a524 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7a527 push edx */
  push32((uint32_t)(EDX));
  /* 12e7a528 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e7a52c push eax */
  push32((uint32_t)(EAX));
  /* 12e7a52d call 0x12e7b110 */
  push32(0x12e7a532u); f_12e7b110();
  /* 12e7a532 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a535 jmp 0x12e7aff2 */
  goto L_12e7aff2;
L_12e7a53a:;
  /* 12e7a53a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e7a541 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7a544 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 12e7a54a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12e7a550 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12e7a556 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 12e7a55c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e7a55f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e7a566 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 12e7a570 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12e7a577 jmp 0x12e7aff2 */
  goto L_12e7aff2;
L_12e7a57c:;
  /* 12e7a57c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e7a580 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 12e7a586 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 12e7a58c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7a58f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 12e7a595 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a59c ja 0x12e7a5e6 */
  if ((!C.cf&&!C.zf)) goto L_12e7a5e6;
  /* 12e7a59e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12e7a5a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7a5a6 mov al, byte ptr [ecx + 0x12e7b03c] */
  AL = (r8((uint32_t)(ECX + 0x12e7b03c)));
  /* 12e7a5ac jmp dword ptr [eax*4 + 0x12e7b024] */
  switch (EAX) {
    case 0: goto L_12e7a5c8;
    case 1: goto L_12e7a5d3;
    case 2: goto L_12e7a5be;
    case 3: goto L_12e7a5b3;
    case 4: goto L_12e7a5de;
    case 5: goto L_12e7a5e6;
    default: x86_unimpl("switch@0x12e7a5ac out of table"); return;
  }
L_12e7a5b3:;
  /* 12e7a5b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a5b6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7a5b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e7a5bc jmp 0x12e7a5e6 */
  goto L_12e7a5e6;
L_12e7a5be:;
  /* 12e7a5be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a5c1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12e7a5c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7a5c6 jmp 0x12e7a5e6 */
  goto L_12e7a5e6;
L_12e7a5c8:;
  /* 12e7a5c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a5cb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7a5ce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e7a5d1 jmp 0x12e7a5e6 */
  goto L_12e7a5e6;
L_12e7a5d3:;
  /* 12e7a5d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a5d6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12e7a5d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e7a5dc jmp 0x12e7a5e6 */
  goto L_12e7a5e6;
L_12e7a5de:;
  /* 12e7a5de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a5e1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12e7a5e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e7a5e6:;
  /* 12e7a5e6 jmp 0x12e7aff2 */
  goto L_12e7aff2;
L_12e7a5eb:;
  /* 12e7a5eb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e7a5ef cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a5f2 jne 0x12e7a627 */
  if (!C.zf) goto L_12e7a627;
  /* 12e7a5f4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12e7a5f7 push edx */
  push32((uint32_t)(EDX));
  /* 12e7a5f8 call 0x12e7b220 */
  push32(0x12e7a5fdu); f_12e7b220();
  /* 12e7a5fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a600 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12e7a606 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a60d jge 0x12e7a625 */
  if ((C.sf==C.of)) goto L_12e7a625;
  /* 12e7a60f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a612 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12e7a614 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7a617 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12e7a61d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7a61f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12e7a625:;
  /* 12e7a625 jmp 0x12e7a63e */
  goto L_12e7a63e;
L_12e7a627:;
  /* 12e7a627 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 12e7a62d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7a630 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e7a634 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12e7a638 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12e7a63e:;
  /* 12e7a63e jmp 0x12e7aff2 */
  goto L_12e7aff2;
L_12e7a643:;
  /* 12e7a643 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 12e7a64d jmp 0x12e7aff2 */
  goto L_12e7aff2;
L_12e7a652:;
  /* 12e7a652 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e7a656 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a659 jne 0x12e7a682 */
  if (!C.zf) goto L_12e7a682;
  /* 12e7a65b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12e7a65e push eax */
  push32((uint32_t)(EAX));
  /* 12e7a65f call 0x12e7b220 */
  push32(0x12e7a664u); f_12e7b220();
  /* 12e7a664 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a667 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12e7a66d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a674 jge 0x12e7a680 */
  if ((C.sf==C.of)) goto L_12e7a680;
  /* 12e7a676 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12e7a680:;
  /* 12e7a680 jmp 0x12e7a699 */
  goto L_12e7a699;
L_12e7a682:;
  /* 12e7a682 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12e7a688 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7a68b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e7a68f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12e7a693 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12e7a699:;
  /* 12e7a699 jmp 0x12e7aff2 */
  goto L_12e7aff2;
L_12e7a69e:;
  /* 12e7a69e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e7a6a2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12e7a6a8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12e7a6ae sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7a6b1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12e7a6b7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a6be ja 0x12e7a72c */
  if ((!C.cf&&!C.zf)) goto L_12e7a72c;
  /* 12e7a6c0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12e7a6c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7a6c8 mov al, byte ptr [ecx + 0x12e7b061] */
  AL = (r8((uint32_t)(ECX + 0x12e7b061)));
  /* 12e7a6ce jmp dword ptr [eax*4 + 0x12e7b04d] */
  switch (EAX) {
    case 0: goto L_12e7a6e0;
    case 1: goto L_12e7a719;
    case 2: goto L_12e7a6d5;
    case 3: goto L_12e7a723;
    case 4: goto L_12e7a72c;
    default: x86_unimpl("switch@0x12e7a6ce out of table"); return;
  }
L_12e7a6d5:;
  /* 12e7a6d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a6d8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7a6db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e7a6de jmp 0x12e7a72c */
  goto L_12e7a72c;
L_12e7a6e0:;
  /* 12e7a6e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7a6e3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e7a6e6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a6e9 jne 0x12e7a70b */
  if (!C.zf) goto L_12e7a70b;
  /* 12e7a6eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7a6ee movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12e7a6f2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a6f5 jne 0x12e7a70b */
  if (!C.zf) goto L_12e7a70b;
  /* 12e7a6f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7a6fa add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a6fd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12e7a700 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a703 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12e7a706 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e7a709 jmp 0x12e7a717 */
  goto L_12e7a717;
L_12e7a70b:;
  /* 12e7a70b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12e7a712 jmp 0x12e7a4a0 */
  goto L_12e7a4a0;
L_12e7a717:;
  /* 12e7a717 jmp 0x12e7a72c */
  goto L_12e7a72c;
L_12e7a719:;
  /* 12e7a719 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a71c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12e7a71e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7a721 jmp 0x12e7a72c */
  goto L_12e7a72c;
L_12e7a723:;
  /* 12e7a723 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a726 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12e7a729 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e7a72c:;
  /* 12e7a72c jmp 0x12e7aff2 */
  goto L_12e7aff2;
L_12e7a731:;
  /* 12e7a731 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e7a735 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12e7a73b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12e7a741 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7a744 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12e7a74a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a751 ja 0x12e7ae17 */
  if ((!C.cf&&!C.zf)) goto L_12e7ae17;
  /* 12e7a757 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12e7a75d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7a75f mov cl, byte ptr [edx + 0x12e7b0cc] */
  CL = (r8((uint32_t)(EDX + 0x12e7b0cc)));
  /* 12e7a765 jmp dword ptr [ecx*4 + 0x12e7b090] */
  switch (ECX) {
    case 0: goto L_12e7a76c;
    case 1: goto L_12e7aa00;
    case 2: goto L_12e7a890;
    case 3: goto L_12e7ab39;
    case 4: goto L_12e7a7fb;
    case 5: goto L_12e7a781;
    case 6: goto L_12e7ab0b;
    case 7: goto L_12e7aa10;
    case 8: goto L_12e7a9b5;
    case 9: goto L_12e7ab85;
    case 10: goto L_12e7ab2f;
    case 11: goto L_12e7a8a6;
    case 12: goto L_12e7ab23;
    case 13: goto L_12e7ab45;
    case 14: goto L_12e7ae17;
    default: x86_unimpl("switch@0x12e7a765 out of table"); return;
  }
L_12e7a76c:;
  /* 12e7a76c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a76f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7a774 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7a776 jne 0x12e7a781 */
  if (!C.zf) goto L_12e7a781;
  /* 12e7a778 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a77b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12e7a77e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e7a781:;
  /* 12e7a781 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a784 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7a78a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7a78c je 0x12e7a7c7 */
  if (C.zf) goto L_12e7a7c7;
  /* 12e7a78e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12e7a791 push eax */
  push32((uint32_t)(EAX));
  /* 12e7a792 call 0x12e7b260 */
  push32(0x12e7a797u); f_12e7b260();
  /* 12e7a797 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a79a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12e7a79e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12e7a7a2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7a7a3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12e7a7a9 push edx */
  push32((uint32_t)(EDX));
  /* 12e7a7aa call 0x12e7c340 */
  push32(0x12e7a7afu); f_12e7c340();
  /* 12e7a7af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a7b2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e7a7b5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a7b9 jge 0x12e7a7c5 */
  if ((C.sf==C.of)) goto L_12e7a7c5;
  /* 12e7a7bb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12e7a7c5:;
  /* 12e7a7c5 jmp 0x12e7a7ed */
  goto L_12e7a7ed;
L_12e7a7c7:;
  /* 12e7a7c7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12e7a7ca push eax */
  push32((uint32_t)(EAX));
  /* 12e7a7cb call 0x12e7b220 */
  push32(0x12e7a7d0u); f_12e7b220();
  /* 12e7a7d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a7d3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12e7a7da mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12e7a7e0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12e7a7e6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12e7a7ed:;
  /* 12e7a7ed lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12e7a7f3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12e7a7f6 jmp 0x12e7ae17 */
  goto L_12e7ae17;
L_12e7a7fb:;
  /* 12e7a7fb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12e7a7fe push eax */
  push32((uint32_t)(EAX));
  /* 12e7a7ff call 0x12e7b220 */
  push32(0x12e7a804u); f_12e7b220();
  /* 12e7a804 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a807 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12e7a80d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a814 je 0x12e7a822 */
  if (C.zf) goto L_12e7a822;
  /* 12e7a816 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12e7a81c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a820 jne 0x12e7a83c */
  if (!C.zf) goto L_12e7a83c;
L_12e7a822:;
  /* 12e7a822 mov edx, dword ptr [0x12e8dfd0] */
  EDX = (r32((uint32_t)(0x12e8dfd0)));
  /* 12e7a828 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12e7a82b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7a82e push eax */
  push32((uint32_t)(EAX));
  /* 12e7a82f call 0x12e76280 */
  push32(0x12e7a834u); f_12e76280();
  /* 12e7a834 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a837 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e7a83a jmp 0x12e7a88b */
  goto L_12e7a88b;
L_12e7a83c:;
  /* 12e7a83c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a83f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7a845 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7a847 je 0x12e7a86c */
  if (C.zf) goto L_12e7a86c;
  /* 12e7a849 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12e7a84f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e7a852 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e7a855 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12e7a85b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12e7a85e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12e7a860 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12e7a863 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12e7a86a jmp 0x12e7a88b */
  goto L_12e7a88b;
L_12e7a86c:;
  /* 12e7a86c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12e7a873 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12e7a879 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e7a87c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12e7a87f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12e7a885 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12e7a888 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12e7a88b:;
  /* 12e7a88b jmp 0x12e7ae17 */
  goto L_12e7ae17;
L_12e7a890:;
  /* 12e7a890 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a893 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7a899 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7a89b jne 0x12e7a8a6 */
  if (!C.zf) goto L_12e7a8a6;
  /* 12e7a89d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a8a0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12e7a8a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e7a8a6:;
  /* 12e7a8a6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a8ad jne 0x12e7a8bb */
  if (!C.zf) goto L_12e7a8bb;
  /* 12e7a8af mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12e7a8b9 jmp 0x12e7a8c7 */
  goto L_12e7a8c7;
L_12e7a8bb:;
  /* 12e7a8bb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12e7a8c1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12e7a8c7:;
  /* 12e7a8c7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12e7a8cd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12e7a8d3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12e7a8d6 push edx */
  push32((uint32_t)(EDX));
  /* 12e7a8d7 call 0x12e7b220 */
  push32(0x12e7a8dcu); f_12e7b220();
  /* 12e7a8dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a8df mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e7a8e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a8e5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7a8ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7a8ec je 0x12e7a956 */
  if (C.zf) goto L_12e7a956;
  /* 12e7a8ee cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a8f2 jne 0x12e7a8fd */
  if (!C.zf) goto L_12e7a8fd;
  /* 12e7a8f4 mov ecx, dword ptr [0x12e8dfd4] */
  ECX = (r32((uint32_t)(0x12e8dfd4)));
  /* 12e7a8fa mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12e7a8fd:;
  /* 12e7a8fd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12e7a904 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7a907 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12e7a90d:;
  /* 12e7a90d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12e7a913 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 12e7a919 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7a91c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12e7a922 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7a924 je 0x12e7a946 */
  if (C.zf) goto L_12e7a946;
  /* 12e7a926 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12e7a92c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7a92e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12e7a931 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7a933 je 0x12e7a946 */
  if (C.zf) goto L_12e7a946;
  /* 12e7a935 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 12e7a93b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a93e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 12e7a944 jmp 0x12e7a90d */
  goto L_12e7a90d;
L_12e7a946:;
  /* 12e7a946 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12e7a94c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7a94f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12e7a951 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12e7a954 jmp 0x12e7a9b0 */
  goto L_12e7a9b0;
L_12e7a956:;
  /* 12e7a956 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7a95a jne 0x12e7a964 */
  if (!C.zf) goto L_12e7a964;
  /* 12e7a95c mov eax, dword ptr [0x12e8dfd0] */
  EAX = (r32((uint32_t)(0x12e8dfd0)));
  /* 12e7a961 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12e7a964:;
  /* 12e7a964 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7a967 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_12e7a96d:;
  /* 12e7a96d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 12e7a973 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12e7a979 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7a97c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 12e7a982 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7a984 je 0x12e7a9a4 */
  if (C.zf) goto L_12e7a9a4;
  /* 12e7a986 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12e7a98c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e7a98f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7a991 je 0x12e7a9a4 */
  if (C.zf) goto L_12e7a9a4;
  /* 12e7a993 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 12e7a999 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a99c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 12e7a9a2 jmp 0x12e7a96d */
  goto L_12e7a96d;
L_12e7a9a4:;
  /* 12e7a9a4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12e7a9aa sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7a9ad mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12e7a9b0:;
  /* 12e7a9b0 jmp 0x12e7ae17 */
  goto L_12e7ae17;
L_12e7a9b5:;
  /* 12e7a9b5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12e7a9b8 push edx */
  push32((uint32_t)(EDX));
  /* 12e7a9b9 call 0x12e7b220 */
  push32(0x12e7a9beu); f_12e7b220();
  /* 12e7a9be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7a9c1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 12e7a9c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7a9ca and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7a9cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7a9cf je 0x12e7a9e3 */
  if (C.zf) goto L_12e7a9e3;
  /* 12e7a9d1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12e7a9d7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 12e7a9de mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 12e7a9e1 jmp 0x12e7a9f1 */
  goto L_12e7a9f1;
L_12e7a9e3:;
  /* 12e7a9e3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12e7a9e9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12e7a9ef mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12e7a9f1:;
  /* 12e7a9f1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 12e7a9fb jmp 0x12e7ae17 */
  goto L_12e7ae17;
L_12e7aa00:;
  /* 12e7aa00 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12e7aa07 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 12e7aa0a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e7aa0d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_12e7aa10:;
  /* 12e7aa10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7aa13 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12e7aa15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7aa18 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 12e7aa1e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12e7aa21 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7aa28 jge 0x12e7aa36 */
  if ((C.sf==C.of)) goto L_12e7aa36;
  /* 12e7aa2a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 12e7aa34 jmp 0x12e7aa52 */
  goto L_12e7aa52;
L_12e7aa36:;
  /* 12e7aa36 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7aa3d jne 0x12e7aa52 */
  if (!C.zf) goto L_12e7aa52;
  /* 12e7aa3f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e7aa43 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7aa46 jne 0x12e7aa52 */
  if (!C.zf) goto L_12e7aa52;
  /* 12e7aa48 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_12e7aa52:;
  /* 12e7aa52 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7aa55 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7aa58 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12e7aa5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7aa5e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7aa61 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e7aa63 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e7aa66 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 12e7aa6c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 12e7aa72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7aa75 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7aa76 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12e7aa7c push edx */
  push32((uint32_t)(EDX));
  /* 12e7aa7d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e7aa81 push eax */
  push32((uint32_t)(EAX));
  /* 12e7aa82 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7aa85 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7aa86 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 12e7aa8c push edx */
  push32((uint32_t)(EDX));
  /* 12e7aa8d call dword ptr [0x12e8e3c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8e3c0))), 0x12e7aa93u);
  /* 12e7aa93 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7aa96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7aa99 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7aa9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7aaa0 je 0x12e7aab8 */
  if (C.zf) goto L_12e7aab8;
  /* 12e7aaa2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7aaa9 jne 0x12e7aab8 */
  if (!C.zf) goto L_12e7aab8;
  /* 12e7aaab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7aaae push ecx */
  push32((uint32_t)(ECX));
  /* 12e7aaaf call dword ptr [0x12e8e3cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8e3cc))), 0x12e7aab5u);
  /* 12e7aab5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7aab8:;
  /* 12e7aab8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e7aabc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7aabf jne 0x12e7aada */
  if (!C.zf) goto L_12e7aada;
  /* 12e7aac1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7aac4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7aac9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7aacb jne 0x12e7aada */
  if (!C.zf) goto L_12e7aada;
  /* 12e7aacd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7aad0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7aad1 call dword ptr [0x12e8e3c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8e3c4))), 0x12e7aad7u);
  /* 12e7aad7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7aada:;
  /* 12e7aada mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7aadd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e7aae0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7aae3 jne 0x12e7aaf7 */
  if (!C.zf) goto L_12e7aaf7;
  /* 12e7aae5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7aae8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12e7aaeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e7aaee mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7aaf1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7aaf4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12e7aaf7:;
  /* 12e7aaf7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7aafa push eax */
  push32((uint32_t)(EAX));
  /* 12e7aafb call 0x12e76280 */
  push32(0x12e7ab00u); f_12e76280();
  /* 12e7ab00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ab03 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e7ab06 jmp 0x12e7ae17 */
  goto L_12e7ae17;
L_12e7ab0b:;
  /* 12e7ab0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ab0e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ab11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e7ab14 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12e7ab1e jmp 0x12e7aba5 */
  goto L_12e7aba5;
L_12e7ab23:;
  /* 12e7ab23 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12e7ab2d jmp 0x12e7aba5 */
  goto L_12e7aba5;
L_12e7ab2f:;
  /* 12e7ab2f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_12e7ab39:;
  /* 12e7ab39 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 12e7ab43 jmp 0x12e7ab4f */
  goto L_12e7ab4f;
L_12e7ab45:;
  /* 12e7ab45 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_12e7ab4f:;
  /* 12e7ab4f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 12e7ab59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ab5c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7ab62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7ab64 je 0x12e7ab83 */
  if (C.zf) goto L_12e7ab83;
  /* 12e7ab66 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 12e7ab6d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 12e7ab73 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ab76 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 12e7ab7c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_12e7ab83:;
  /* 12e7ab83 jmp 0x12e7aba5 */
  goto L_12e7aba5;
L_12e7ab85:;
  /* 12e7ab85 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 12e7ab8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ab92 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ab98 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7ab9a je 0x12e7aba5 */
  if (C.zf) goto L_12e7aba5;
  /* 12e7ab9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ab9f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12e7aba2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e7aba5:;
  /* 12e7aba5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7aba8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7abad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7abaf je 0x12e7abce */
  if (C.zf) goto L_12e7abce;
  /* 12e7abb1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12e7abb4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7abb5 call 0x12e7b240 */
  push32(0x12e7abbau); f_12e7b240();
  /* 12e7abba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7abbd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12e7abc3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12e7abc9 jmp 0x12e7ac5f */
  goto L_12e7ac5f;
L_12e7abce:;
  /* 12e7abce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7abd1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7abd4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7abd6 je 0x12e7ac20 */
  if (C.zf) goto L_12e7ac20;
  /* 12e7abd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7abdb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7abde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7abe0 je 0x12e7ac00 */
  if (C.zf) goto L_12e7ac00;
  /* 12e7abe2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12e7abe5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7abe6 call 0x12e7b220 */
  push32(0x12e7abebu); f_12e7b220();
  /* 12e7abeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7abee movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 12e7abf1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e7abf2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12e7abf8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12e7abfe jmp 0x12e7ac1e */
  goto L_12e7ac1e;
L_12e7ac00:;
  /* 12e7ac00 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12e7ac03 push edx */
  push32((uint32_t)(EDX));
  /* 12e7ac04 call 0x12e7b220 */
  push32(0x12e7ac09u); f_12e7b220();
  /* 12e7ac09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ac0c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7ac11 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e7ac12 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12e7ac18 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_12e7ac1e:;
  /* 12e7ac1e jmp 0x12e7ac5f */
  goto L_12e7ac5f;
L_12e7ac20:;
  /* 12e7ac20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ac23 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7ac26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7ac28 je 0x12e7ac45 */
  if (C.zf) goto L_12e7ac45;
  /* 12e7ac2a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12e7ac2d push ecx */
  push32((uint32_t)(ECX));
  /* 12e7ac2e call 0x12e7b220 */
  push32(0x12e7ac33u); f_12e7b220();
  /* 12e7ac33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ac36 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e7ac37 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12e7ac3d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12e7ac43 jmp 0x12e7ac5f */
  goto L_12e7ac5f;
L_12e7ac45:;
  /* 12e7ac45 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12e7ac48 push edx */
  push32((uint32_t)(EDX));
  /* 12e7ac49 call 0x12e7b220 */
  push32(0x12e7ac4eu); f_12e7b220();
  /* 12e7ac4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ac51 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ac53 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12e7ac59 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_12e7ac5f:;
  /* 12e7ac5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ac62 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7ac65 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7ac67 je 0x12e7aca7 */
  if (C.zf) goto L_12e7aca7;
  /* 12e7ac69 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ac70 jg 0x12e7aca7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e7aca7;
  /* 12e7ac72 jl 0x12e7ac7d */
  if ((C.sf!=C.of)) goto L_12e7ac7d;
  /* 12e7ac74 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ac7b jae 0x12e7aca7 */
  if (!C.cf) goto L_12e7aca7;
L_12e7ac7d:;
  /* 12e7ac7d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12e7ac83 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7ac85 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12e7ac8b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ac8e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7ac90 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12e7ac96 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 12e7ac9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ac9f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12e7aca2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e7aca5 jmp 0x12e7acbf */
  goto L_12e7acbf;
L_12e7aca7:;
  /* 12e7aca7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12e7acad mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12e7acb3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12e7acb9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12e7acbf:;
  /* 12e7acbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7acc2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7acc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7acca jne 0x12e7ace7 */
  if (!C.zf) goto L_12e7ace7;
  /* 12e7accc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12e7acd2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12e7acd8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7acdb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12e7ace1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12e7ace7:;
  /* 12e7ace7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7acee jge 0x12e7acfc */
  if ((C.sf==C.of)) goto L_12e7acfc;
  /* 12e7acf0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 12e7acfa jmp 0x12e7ad05 */
  goto L_12e7ad05;
L_12e7acfc:;
  /* 12e7acfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7acff and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7ad02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e7ad05:;
  /* 12e7ad05 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12e7ad0b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 12e7ad11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7ad13 jne 0x12e7ad1c */
  if (!C.zf) goto L_12e7ad1c;
  /* 12e7ad15 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12e7ad1c:;
  /* 12e7ad1c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12e7ad1f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12e7ad22:;
  /* 12e7ad22 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12e7ad28 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12e7ad2e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7ad31 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12e7ad37 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7ad39 jg 0x12e7ad4f */
  if ((!C.zf&&C.sf==C.of)) goto L_12e7ad4f;
  /* 12e7ad3b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12e7ad41 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ad47 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7ad49 je 0x12e7add0 */
  if (C.zf) goto L_12e7add0;
L_12e7ad4f:;
  /* 12e7ad4f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12e7ad55 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e7ad56 push edx */
  push32((uint32_t)(EDX));
  /* 12e7ad57 push eax */
  push32((uint32_t)(EAX));
  /* 12e7ad58 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 12e7ad5e push edx */
  push32((uint32_t)(EDX));
  /* 12e7ad5f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12e7ad65 push eax */
  push32((uint32_t)(EAX));
  /* 12e7ad66 call 0x12e7a0e0 */
  push32(0x12e7ad6bu); f_12e7a0e0();
  /* 12e7ad6b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ad6e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 12e7ad74 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12e7ad7a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e7ad7b push edx */
  push32((uint32_t)(EDX));
  /* 12e7ad7c push eax */
  push32((uint32_t)(EAX));
  /* 12e7ad7d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12e7ad83 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7ad84 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12e7ad8a push edx */
  push32((uint32_t)(EDX));
  /* 12e7ad8b call 0x12e7a070 */
  push32(0x12e7ad90u); f_12e7a070();
  /* 12e7ad90 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12e7ad96 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 12e7ad9c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ada3 jle 0x12e7adb7 */
  if ((C.zf||C.sf!=C.of)) goto L_12e7adb7;
  /* 12e7ada5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 12e7adab add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7adb1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_12e7adb7:;
  /* 12e7adb7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7adba mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 12e7adc0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12e7adc2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7adc5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7adc8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e7adcb jmp 0x12e7ad22 */
  goto L_12e7ad22;
L_12e7add0:;
  /* 12e7add0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12e7add3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7add6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12e7add9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7addc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7addf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12e7ade2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ade5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7adea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7adec je 0x12e7ae17 */
  if (C.zf) goto L_12e7ae17;
  /* 12e7adee mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7adf1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e7adf4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7adf7 jne 0x12e7adff */
  if (!C.zf) goto L_12e7adff;
  /* 12e7adf9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7adfd jne 0x12e7ae17 */
  if (!C.zf) goto L_12e7ae17;
L_12e7adff:;
  /* 12e7adff mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7ae02 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7ae05 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e7ae08 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7ae0b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 12e7ae0e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e7ae11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ae14 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12e7ae17:;
  /* 12e7ae17 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ae1e jne 0x12e7aff2 */
  if (!C.zf) goto L_12e7aff2;
  /* 12e7ae24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ae27 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7ae2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7ae2c je 0x12e7ae7d */
  if (C.zf) goto L_12e7ae7d;
  /* 12e7ae2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ae31 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ae37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7ae39 je 0x12e7ae4b */
  if (C.zf) goto L_12e7ae4b;
  /* 12e7ae3b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 12e7ae42 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12e7ae49 jmp 0x12e7ae7d */
  goto L_12e7ae7d;
L_12e7ae4b:;
  /* 12e7ae4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ae4e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7ae51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7ae53 je 0x12e7ae65 */
  if (C.zf) goto L_12e7ae65;
  /* 12e7ae55 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 12e7ae5c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12e7ae63 jmp 0x12e7ae7d */
  goto L_12e7ae7d;
L_12e7ae65:;
  /* 12e7ae65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ae68 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7ae6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7ae6d je 0x12e7ae7d */
  if (C.zf) goto L_12e7ae7d;
  /* 12e7ae6f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 12e7ae76 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_12e7ae7d:;
  /* 12e7ae7d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12e7ae83 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7ae86 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7ae89 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 12e7ae8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ae92 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7ae95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7ae97 jne 0x12e7aeb5 */
  if (!C.zf) goto L_12e7aeb5;
  /* 12e7ae99 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12e7ae9f push eax */
  push32((uint32_t)(EAX));
  /* 12e7aea0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7aea3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7aea4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12e7aeaa push edx */
  push32((uint32_t)(EDX));
  /* 12e7aeab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12e7aead call 0x12e7b190 */
  push32(0x12e7aeb2u); f_12e7b190();
  /* 12e7aeb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7aeb5:;
  /* 12e7aeb5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12e7aebb push eax */
  push32((uint32_t)(EAX));
  /* 12e7aebc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7aebf push ecx */
  push32((uint32_t)(ECX));
  /* 12e7aec0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7aec3 push edx */
  push32((uint32_t)(EDX));
  /* 12e7aec4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 12e7aeca push eax */
  push32((uint32_t)(EAX));
  /* 12e7aecb call 0x12e7b1d0 */
  push32(0x12e7aed0u); f_12e7b1d0();
  /* 12e7aed0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7aed3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7aed6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7aed9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7aedb je 0x12e7af03 */
  if (C.zf) goto L_12e7af03;
  /* 12e7aedd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7aee0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7aee3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7aee5 jne 0x12e7af03 */
  if (!C.zf) goto L_12e7af03;
  /* 12e7aee7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12e7aeed push eax */
  push32((uint32_t)(EAX));
  /* 12e7aeee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7aef1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7aef2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12e7aef8 push edx */
  push32((uint32_t)(EDX));
  /* 12e7aef9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12e7aefb call 0x12e7b190 */
  push32(0x12e7af00u); f_12e7b190();
  /* 12e7af00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7af03:;
  /* 12e7af03 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7af07 je 0x12e7afb1 */
  if (C.zf) goto L_12e7afb1;
  /* 12e7af0d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7af11 jle 0x12e7afb1 */
  if ((C.zf||C.sf!=C.of)) goto L_12e7afb1;
  /* 12e7af17 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7af1a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 12e7af20 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e7af23 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_12e7af29:;
  /* 12e7af29 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 12e7af2f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 12e7af35 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7af38 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 12e7af3e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7af40 je 0x12e7afaf */
  if (C.zf) goto L_12e7afaf;
  /* 12e7af42 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 12e7af48 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12e7af4b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 12e7af52 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 12e7af59 push eax */
  push32((uint32_t)(EAX));
  /* 12e7af5a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 12e7af60 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7af61 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 12e7af67 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7af6a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 12e7af70 call 0x12e7c340 */
  push32(0x12e7af75u); f_12e7c340();
  /* 12e7af75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7af78 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 12e7af7e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7af85 jg 0x12e7af89 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e7af89;
  /* 12e7af87 jmp 0x12e7afaf */
  goto L_12e7afaf;
L_12e7af89:;
  /* 12e7af89 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12e7af8f push eax */
  push32((uint32_t)(EAX));
  /* 12e7af90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7af93 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7af94 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 12e7af9a push edx */
  push32((uint32_t)(EDX));
  /* 12e7af9b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 12e7afa1 push eax */
  push32((uint32_t)(EAX));
  /* 12e7afa2 call 0x12e7b1d0 */
  push32(0x12e7afa7u); f_12e7b1d0();
  /* 12e7afa7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7afaa jmp 0x12e7af29 */
  goto L_12e7af29;
L_12e7afaf:;
  /* 12e7afaf jmp 0x12e7afcc */
  goto L_12e7afcc;
L_12e7afb1:;
  /* 12e7afb1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12e7afb7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7afb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7afbb push edx */
  push32((uint32_t)(EDX));
  /* 12e7afbc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e7afbf push eax */
  push32((uint32_t)(EAX));
  /* 12e7afc0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7afc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7afc4 call 0x12e7b1d0 */
  push32(0x12e7afc9u); f_12e7b1d0();
  /* 12e7afc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7afcc:;
  /* 12e7afcc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7afcf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7afd2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7afd4 je 0x12e7aff2 */
  if (C.zf) goto L_12e7aff2;
  /* 12e7afd6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12e7afdc push eax */
  push32((uint32_t)(EAX));
  /* 12e7afdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7afe0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7afe1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12e7afe7 push edx */
  push32((uint32_t)(EDX));
  /* 12e7afe8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12e7afea call 0x12e7b190 */
  push32(0x12e7afefu); f_12e7b190();
  /* 12e7afef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7aff2:;
  /* 12e7aff2 jmp 0x12e7a404 */
  goto L_12e7a404;
L_12e7aff7:;
  /* 12e7aff7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12e7affd pop edi */
  EDI = (pop32());
  /* 12e7affe pop esi */
  ESI = (pop32());
  /* 12e7afff pop ebx */
  EBX = (pop32());
  /* 12e7b000 mov esp, ebp */
  ESP = (EBP);
  /* 12e7b002 pop ebp */
  EBP = (pop32());
  /* 12e7b003 ret  */
  ESPCHK(0x12e7a3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b110 @ 0x12e7b110 (119 bytes, 44 insns) */
void f_12e7b110(void) {
  FTRACE(0x12e7b110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7b110 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7b111 mov ebp, esp */
  EBP = (ESP);
  /* 12e7b113 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7b114 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7b117 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e7b11a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7b11d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7b120 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12e7b123 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7b126 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b12a jl 0x12e7b152 */
  if ((C.sf!=C.of)) goto L_12e7b152;
  /* 12e7b12c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7b12f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e7b131 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12e7b134 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12e7b136 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12e7b13a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7b140 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e7b143 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7b146 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e7b148 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b14b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7b14e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e7b150 jmp 0x12e7b165 */
  goto L_12e7b165;
L_12e7b152:;
  /* 12e7b152 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7b155 push edx */
  push32((uint32_t)(EDX));
  /* 12e7b156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b159 push eax */
  push32((uint32_t)(EAX));
  /* 12e7b15a call 0x12e7a160 */
  push32(0x12e7b15fu); f_12e7a160();
  /* 12e7b15f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b162 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e7b165:;
  /* 12e7b165 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b169 jne 0x12e7b176 */
  if (!C.zf) goto L_12e7b176;
  /* 12e7b16b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7b16e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12e7b174 jmp 0x12e7b183 */
  goto L_12e7b183;
L_12e7b176:;
  /* 12e7b176 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7b179 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e7b17b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b17e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7b181 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12e7b183:;
  /* 12e7b183 mov esp, ebp */
  ESP = (EBP);
  /* 12e7b185 pop ebp */
  EBP = (pop32());
  /* 12e7b186 ret  */
  ESPCHK(0x12e7b110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b190 @ 0x12e7b190 (53 bytes, 23 insns) */
void f_12e7b190(void) {
  FTRACE(0x12e7b190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7b190 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7b191 mov ebp, esp */
  EBP = (ESP);
L_12e7b193:;
  /* 12e7b193 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7b196 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7b199 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7b19c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12e7b19f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7b1a1 jle 0x12e7b1c3 */
  if ((C.zf||C.sf!=C.of)) goto L_12e7b1c3;
  /* 12e7b1a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7b1a6 push edx */
  push32((uint32_t)(EDX));
  /* 12e7b1a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7b1aa push eax */
  push32((uint32_t)(EAX));
  /* 12e7b1ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b1ae push ecx */
  push32((uint32_t)(ECX));
  /* 12e7b1af call 0x12e7b110 */
  push32(0x12e7b1b4u); f_12e7b110();
  /* 12e7b1b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b1b7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7b1ba cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b1bd jne 0x12e7b1c1 */
  if (!C.zf) goto L_12e7b1c1;
  /* 12e7b1bf jmp 0x12e7b1c3 */
  goto L_12e7b1c3;
L_12e7b1c1:;
  /* 12e7b1c1 jmp 0x12e7b193 */
  goto L_12e7b193;
L_12e7b1c3:;
  /* 12e7b1c3 pop ebp */
  EBP = (pop32());
  /* 12e7b1c4 ret  */
  ESPCHK(0x12e7b190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1d0 @ 0x12e7b1d0 (74 bytes, 31 insns) */
void f_12e7b1d0(void) {
  FTRACE(0x12e7b1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7b1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7b1d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7b1d3 push ecx */
  push32((uint32_t)(ECX));
L_12e7b1d4:;
  /* 12e7b1d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7b1d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7b1da sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7b1dd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12e7b1e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7b1e2 jle 0x12e7b216 */
  if ((C.zf||C.sf!=C.of)) goto L_12e7b216;
  /* 12e7b1e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7b1e7 push edx */
  push32((uint32_t)(EDX));
  /* 12e7b1e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7b1eb push eax */
  push32((uint32_t)(EAX));
  /* 12e7b1ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b1ef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e7b1f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e7b1f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7b1f8 push eax */
  push32((uint32_t)(EAX));
  /* 12e7b1f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b1fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b1ff mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12e7b202 call 0x12e7b110 */
  push32(0x12e7b207u); f_12e7b110();
  /* 12e7b207 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b20a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7b20d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b210 jne 0x12e7b214 */
  if (!C.zf) goto L_12e7b214;
  /* 12e7b212 jmp 0x12e7b216 */
  goto L_12e7b216;
L_12e7b214:;
  /* 12e7b214 jmp 0x12e7b1d4 */
  goto L_12e7b1d4;
L_12e7b216:;
  /* 12e7b216 mov esp, ebp */
  ESP = (EBP);
  /* 12e7b218 pop ebp */
  EBP = (pop32());
  /* 12e7b219 ret  */
  ESPCHK(0x12e7b1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b220 @ 0x12e7b220 (26 bytes, 12 insns) */
void f_12e7b220(void) {
  FTRACE(0x12e7b220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7b220 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7b221 mov ebp, esp */
  EBP = (ESP);
  /* 12e7b223 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b226 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e7b228 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b22b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b22e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e7b230 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b233 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e7b235 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12e7b238 pop ebp */
  EBP = (pop32());
  /* 12e7b239 ret  */
  ESPCHK(0x12e7b220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b240 @ 0x12e7b240 (31 bytes, 14 insns) */
void f_12e7b240(void) {
  FTRACE(0x12e7b240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7b240 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7b241 mov ebp, esp */
  EBP = (ESP);
  /* 12e7b243 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b246 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e7b248 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b24b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b24e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e7b250 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b253 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e7b255 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7b258 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12e7b25a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e7b25d pop ebp */
  EBP = (pop32());
  /* 12e7b25e ret  */
  ESPCHK(0x12e7b240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b260 @ 0x12e7b260 (27 bytes, 12 insns) */
void f_12e7b260(void) {
  FTRACE(0x12e7b260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7b260 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7b261 mov ebp, esp */
  EBP = (ESP);
  /* 12e7b263 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b266 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e7b268 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b26b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b26e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e7b270 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b273 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e7b275 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 12e7b279 pop ebp */
  EBP = (pop32());
  /* 12e7b27a ret  */
  ESPCHK(0x12e7b260u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x12e7b280 (145 bytes, 42 insns) */
void f_12e7b280(void) {
  FTRACE(0x12e7b280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7b280 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7b281 mov ebp, esp */
  EBP = (ESP);
  /* 12e7b283 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7b284 call 0x12e7b330 */
  push32(0x12e7b289u); f_12e7b330();
  /* 12e7b289 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b28c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12e7b28e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e7b295 jmp 0x12e7b2a0 */
  goto L_12e7b2a0;
L_12e7b297:;
  /* 12e7b297 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7b29a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b29d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e7b2a0:;
  /* 12e7b2a0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b2a4 jae 0x12e7b2ca */
  if (!C.cf) goto L_12e7b2ca;
  /* 12e7b2a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7b2a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b2ac cmp ecx, dword ptr [eax*8 + 0x12e8dfd8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12e8dfd8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b2b3 jne 0x12e7b2c8 */
  if (!C.zf) goto L_12e7b2c8;
  /* 12e7b2b5 call 0x12e7b320 */
  push32(0x12e7b2bau); f_12e7b320();
  /* 12e7b2ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7b2bd mov ecx, dword ptr [edx*8 + 0x12e8dfdc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12e8dfdc)));
  /* 12e7b2c4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12e7b2c6 jmp 0x12e7b30d */
  goto L_12e7b30d;
L_12e7b2c8:;
  /* 12e7b2c8 jmp 0x12e7b297 */
  goto L_12e7b297;
L_12e7b2ca:;
  /* 12e7b2ca cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b2ce jb 0x12e7b2e3 */
  if (C.cf) goto L_12e7b2e3;
  /* 12e7b2d0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b2d4 ja 0x12e7b2e3 */
  if ((!C.cf&&!C.zf)) goto L_12e7b2e3;
  /* 12e7b2d6 call 0x12e7b320 */
  push32(0x12e7b2dbu); f_12e7b320();
  /* 12e7b2db mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12e7b2e1 jmp 0x12e7b30d */
  goto L_12e7b30d;
L_12e7b2e3:;
  /* 12e7b2e3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b2ea jb 0x12e7b302 */
  if (C.cf) goto L_12e7b302;
  /* 12e7b2ec cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b2f3 ja 0x12e7b302 */
  if ((!C.cf&&!C.zf)) goto L_12e7b302;
  /* 12e7b2f5 call 0x12e7b320 */
  push32(0x12e7b2fau); f_12e7b320();
  /* 12e7b2fa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 12e7b300 jmp 0x12e7b30d */
  goto L_12e7b30d;
L_12e7b302:;
  /* 12e7b302 call 0x12e7b320 */
  push32(0x12e7b307u); f_12e7b320();
  /* 12e7b307 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_12e7b30d:;
  /* 12e7b30d mov esp, ebp */
  ESP = (EBP);
  /* 12e7b30f pop ebp */
  EBP = (pop32());
  /* 12e7b310 ret  */
  ESPCHK(0x12e7b280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b320 @ 0x12e7b320 (13 bytes, 6 insns) */
void f_12e7b320(void) {
  FTRACE(0x12e7b320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7b320 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7b321 mov ebp, esp */
  EBP = (ESP);
  /* 12e7b323 call 0x12e72e90 */
  push32(0x12e7b328u); f_12e72e90();
  /* 12e7b328 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b32b pop ebp */
  EBP = (pop32());
  /* 12e7b32c ret  */
  ESPCHK(0x12e7b320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b330 @ 0x12e7b330 (13 bytes, 6 insns) */
void f_12e7b330(void) {
  FTRACE(0x12e7b330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7b330 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7b331 mov ebp, esp */
  EBP = (ESP);
  /* 12e7b333 call 0x12e72e90 */
  push32(0x12e7b338u); f_12e72e90();
  /* 12e7b338 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b33b pop ebp */
  EBP = (pop32());
  /* 12e7b33c ret  */
  ESPCHK(0x12e7b330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b340 @ 0x12e7b340 (664 bytes, 263 insns) [15 switch table(s)] */
void f_12e7b340(void) {
  FTRACE(0x12e7b340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7b340 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7b341 mov ebp, esp */
  EBP = (ESP);
  /* 12e7b343 push edi */
  push32((uint32_t)(EDI));
  /* 12e7b344 push esi */
  push32((uint32_t)(ESI));
  /* 12e7b345 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7b348 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7b34b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b34e mov eax, ecx */
  EAX = (ECX);
  /* 12e7b350 mov edx, ecx */
  EDX = (ECX);
  /* 12e7b352 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b354 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b356 jbe 0x12e7b360 */
  if ((C.cf||C.zf)) goto L_12e7b360;
  /* 12e7b358 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b35a jb 0x12e7b4d8 */
  if (C.cf) goto L_12e7b4d8;
L_12e7b360:;
  /* 12e7b360 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12e7b366 jne 0x12e7b37c */
  if (!C.zf) goto L_12e7b37c;
  /* 12e7b368 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e7b36b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7b36e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b371 jb 0x12e7b39c */
  if (C.cf) goto L_12e7b39c;
  /* 12e7b373 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e7b375 jmp dword ptr [edx*4 + 0x12e7b488] */
  switch (EDX) {
    case 0: goto L_12e7b498;
    case 1: goto L_12e7b4a0;
    case 2: goto L_12e7b4ac;
    case 3: goto L_12e7b4c0;
    default: x86_unimpl("switch@0x12e7b375 out of table"); return;
  }
L_12e7b37c:;
  /* 12e7b37c mov eax, edi */
  EAX = (EDI);
  /* 12e7b37e mov edx, 3 */
  EDX = (0x3u);
  /* 12e7b383 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7b386 jb 0x12e7b394 */
  if (C.cf) goto L_12e7b394;
  /* 12e7b388 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7b38b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b38d jmp dword ptr [eax*4 + 0x12e7b3a0] */
  switch (EAX) {
    case 1: goto L_12e7b3b0;
    case 2: goto L_12e7b3dc;
    case 3: goto L_12e7b400;
    default: x86_unimpl("switch@0x12e7b38d out of table"); return;
  }
L_12e7b394:;
  /* 12e7b394 jmp dword ptr [ecx*4 + 0x12e7b498] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12e7b498)))); return;
  /* 12e7b39b nop  */
  /* nop */
L_12e7b39c:;
  /* 12e7b39c jmp dword ptr [ecx*4 + 0x12e7b41c] */
  switch (ECX) {
    case 0: goto L_12e7b47f;
    case 1: goto L_12e7b46c;
    case 2: goto L_12e7b464;
    case 3: goto L_12e7b45c;
    case 4: goto L_12e7b454;
    case 5: goto L_12e7b44c;
    case 6: goto L_12e7b444;
    case 7: goto L_12e7b43c;
    default: x86_unimpl("switch@0x12e7b39c out of table"); return;
  }
  /* 12e7b3a3 nop  */
  /* nop */
L_12e7b3b0:;
  /* 12e7b3b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7b3b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e7b3b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e7b3b6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e7b3b9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e7b3bc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e7b3bf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e7b3c2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e7b3c5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b3c8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b3cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b3ce jb 0x12e7b39c */
  if (C.cf) goto L_12e7b39c;
  /* 12e7b3d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e7b3d2 jmp dword ptr [edx*4 + 0x12e7b488] */
  switch (EDX) {
    case 0: goto L_12e7b498;
    case 1: goto L_12e7b4a0;
    case 2: goto L_12e7b4ac;
    case 3: goto L_12e7b4c0;
    default: x86_unimpl("switch@0x12e7b3d2 out of table"); return;
  }
  /* 12e7b3d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e7b3dc:;
  /* 12e7b3dc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7b3de mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e7b3e0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e7b3e2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e7b3e5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e7b3e8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e7b3eb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b3ee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b3f1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b3f4 jb 0x12e7b39c */
  if (C.cf) goto L_12e7b39c;
  /* 12e7b3f6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e7b3f8 jmp dword ptr [edx*4 + 0x12e7b488] */
  switch (EDX) {
    case 0: goto L_12e7b498;
    case 1: goto L_12e7b4a0;
    case 2: goto L_12e7b4ac;
    case 3: goto L_12e7b4c0;
    default: x86_unimpl("switch@0x12e7b3f8 out of table"); return;
  }
  /* 12e7b3ff nop  */
  /* nop */
L_12e7b400:;
  /* 12e7b400 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7b402 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e7b404 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e7b406 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e7b407 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e7b40a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e7b40b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b40e jb 0x12e7b39c */
  if (C.cf) goto L_12e7b39c;
  /* 12e7b410 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e7b412 jmp dword ptr [edx*4 + 0x12e7b488] */
  switch (EDX) {
    case 0: goto L_12e7b498;
    case 1: goto L_12e7b4a0;
    case 2: goto L_12e7b4ac;
    case 3: goto L_12e7b4c0;
    default: x86_unimpl("switch@0x12e7b412 out of table"); return;
  }
  /* 12e7b419 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e7b43c:;
  /* 12e7b43c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12e7b440 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12e7b444:;
  /* 12e7b444 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12e7b448 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12e7b44c:;
  /* 12e7b44c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12e7b450 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12e7b454:;
  /* 12e7b454 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12e7b458 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12e7b45c:;
  /* 12e7b45c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12e7b460 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12e7b464:;
  /* 12e7b464 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12e7b468 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12e7b46c:;
  /* 12e7b46c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12e7b470 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12e7b474 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12e7b47b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b47d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12e7b47f:;
  /* 12e7b47f jmp dword ptr [edx*4 + 0x12e7b488] */
  switch (EDX) {
    case 0: goto L_12e7b498;
    case 1: goto L_12e7b4a0;
    case 2: goto L_12e7b4ac;
    case 3: goto L_12e7b4c0;
    default: x86_unimpl("switch@0x12e7b47f out of table"); return;
  }
  /* 12e7b486 mov edi, edi */
  EDI = (EDI);
L_12e7b498:;
  /* 12e7b498 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b49b pop esi */
  ESI = (pop32());
  /* 12e7b49c pop edi */
  EDI = (pop32());
  /* 12e7b49d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e7b49e ret  */
  ESPCHK(0x12e7b340u, _esp0);
  ESP += 4; return;
  /* 12e7b49f nop  */
  /* nop */
L_12e7b4a0:;
  /* 12e7b4a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e7b4a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e7b4a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b4a7 pop esi */
  ESI = (pop32());
  /* 12e7b4a8 pop edi */
  EDI = (pop32());
  /* 12e7b4a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e7b4aa ret  */
  ESPCHK(0x12e7b340u, _esp0);
  ESP += 4; return;
  /* 12e7b4ab nop  */
  /* nop */
L_12e7b4ac:;
  /* 12e7b4ac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e7b4ae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e7b4b0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e7b4b3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e7b4b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b4b9 pop esi */
  ESI = (pop32());
  /* 12e7b4ba pop edi */
  EDI = (pop32());
  /* 12e7b4bb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e7b4bc ret  */
  ESPCHK(0x12e7b340u, _esp0);
  ESP += 4; return;
  /* 12e7b4bd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e7b4c0:;
  /* 12e7b4c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e7b4c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e7b4c4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e7b4c7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e7b4ca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e7b4cd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e7b4d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b4d3 pop esi */
  ESI = (pop32());
  /* 12e7b4d4 pop edi */
  EDI = (pop32());
  /* 12e7b4d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e7b4d6 ret  */
  ESPCHK(0x12e7b340u, _esp0);
  ESP += 4; return;
  /* 12e7b4d7 nop  */
  /* nop */
L_12e7b4d8:;
  /* 12e7b4d8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12e7b4dc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12e7b4e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12e7b4e6 jne 0x12e7b50c */
  if (!C.zf) goto L_12e7b50c;
  /* 12e7b4e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e7b4eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7b4ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b4f1 jb 0x12e7b500 */
  if (C.cf) goto L_12e7b500;
  /* 12e7b4f3 std  */
  C.df=1;
  /* 12e7b4f4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e7b4f6 cld  */
  C.df=0;
  /* 12e7b4f7 jmp dword ptr [edx*4 + 0x12e7b620] */
  switch (EDX) {
    case 0: goto L_12e7b630;
    case 1: goto L_12e7b638;
    case 2: goto L_12e7b648;
    case 3: goto L_12e7b65c;
    default: x86_unimpl("switch@0x12e7b4f7 out of table"); return;
  }
  /* 12e7b4fe mov edi, edi */
  EDI = (EDI);
L_12e7b500:;
  /* 12e7b500 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7b502 jmp dword ptr [ecx*4 + 0x12e7b5d0] */
  switch (ECX) {
    case 0: goto L_12e7b617;
    default: x86_unimpl("switch@0x12e7b502 out of table"); return;
  }
  /* 12e7b509 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e7b50c:;
  /* 12e7b50c mov eax, edi */
  EAX = (EDI);
  /* 12e7b50e mov edx, 3 */
  EDX = (0x3u);
  /* 12e7b513 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b516 jb 0x12e7b524 */
  if (C.cf) goto L_12e7b524;
  /* 12e7b518 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7b51b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7b51d jmp dword ptr [eax*4 + 0x12e7b528] */
  switch (EAX) {
    case 1: goto L_12e7b538;
    case 2: goto L_12e7b558;
    case 3: goto L_12e7b580;
    default: x86_unimpl("switch@0x12e7b51d out of table"); return;
  }
L_12e7b524:;
  /* 12e7b524 jmp dword ptr [ecx*4 + 0x12e7b620] */
  switch (ECX) {
    case 0: goto L_12e7b630;
    case 1: goto L_12e7b638;
    case 2: goto L_12e7b648;
    case 3: goto L_12e7b65c;
    default: x86_unimpl("switch@0x12e7b524 out of table"); return;
  }
  /* 12e7b52b nop  */
  /* nop */
L_12e7b538:;
  /* 12e7b538 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e7b53b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7b53d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e7b540 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12e7b541 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e7b544 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12e7b545 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b548 jb 0x12e7b500 */
  if (C.cf) goto L_12e7b500;
  /* 12e7b54a std  */
  C.df=1;
  /* 12e7b54b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e7b54d cld  */
  C.df=0;
  /* 12e7b54e jmp dword ptr [edx*4 + 0x12e7b620] */
  switch (EDX) {
    case 0: goto L_12e7b630;
    case 1: goto L_12e7b638;
    case 2: goto L_12e7b648;
    case 3: goto L_12e7b65c;
    default: x86_unimpl("switch@0x12e7b54e out of table"); return;
  }
  /* 12e7b555 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e7b558:;
  /* 12e7b558 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e7b55b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7b55d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e7b560 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e7b563 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e7b566 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e7b569 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7b56c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7b56f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b572 jb 0x12e7b500 */
  if (C.cf) goto L_12e7b500;
  /* 12e7b574 std  */
  C.df=1;
  /* 12e7b575 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e7b577 cld  */
  C.df=0;
  /* 12e7b578 jmp dword ptr [edx*4 + 0x12e7b620] */
  switch (EDX) {
    case 0: goto L_12e7b630;
    case 1: goto L_12e7b638;
    case 2: goto L_12e7b648;
    case 3: goto L_12e7b65c;
    default: x86_unimpl("switch@0x12e7b578 out of table"); return;
  }
  /* 12e7b57f nop  */
  /* nop */
L_12e7b580:;
  /* 12e7b580 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e7b583 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7b585 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e7b588 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e7b58b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e7b58e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e7b591 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e7b594 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e7b597 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7b59a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7b59d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b5a0 jb 0x12e7b500 */
  if (C.cf) goto L_12e7b500;
  /* 12e7b5a6 std  */
  C.df=1;
  /* 12e7b5a7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e7b5a9 cld  */
  C.df=0;
  /* 12e7b5aa jmp dword ptr [edx*4 + 0x12e7b620] */
  switch (EDX) {
    case 0: goto L_12e7b630;
    case 1: goto L_12e7b638;
    case 2: goto L_12e7b648;
    case 3: goto L_12e7b65c;
    default: x86_unimpl("switch@0x12e7b5aa out of table"); return;
  }
  /* 12e7b5b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12e7b5b4 aam 0xb5 */
  x86_unimpl("aam @ 0x12e7b5b4");
  /* 12e7b5b6 out 0x12, eax */
  x86_unimpl("out @ 0x12e7b5b6");
  /* 12e7b5b8 fdiv qword ptr [ebp - 0x4a1bed19] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x4a1bed19)));
  /* 12e7b5be out 0x12, eax */
  x86_unimpl("out @ 0x12e7b5be");
  /* 12e7b5c0 in al, dx */
  x86_unimpl("in @ 0x12e7b5c0");
  /* 12e7b5c1 mov ch, 0xe7 */
  C.c.b.h = (0xe7u);
  /* 12e7b5c3 adc dh, ah */
  { uint32_t _a=(C.d.b.h),_b=(AH),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12e7b5c5 mov ch, 0xe7 */
  C.c.b.h = (0xe7u);
  /* 12e7b5c7 adc bh, ah */
  { uint32_t _a=(C.b.b.h),_b=(AH),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12e7b5c9 mov ch, 0xe7 */
  C.c.b.h = (0xe7u);
  /* 12e7b5cb adc al, byte ptr [esi + esi*4] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ESI + ESI*4))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e7b5ce out 0x12, eax */
  x86_unimpl("out @ 0x12e7b5ce");
  /* 12e7b5d4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12e7b5d8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12e7b5dc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12e7b5e0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12e7b5e4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12e7b5e8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12e7b5ec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12e7b5f0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12e7b5f4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12e7b5f8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12e7b5fc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12e7b600 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12e7b604 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12e7b608 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12e7b60c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12e7b613 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b615 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12e7b617:;
  /* 12e7b617 jmp dword ptr [edx*4 + 0x12e7b620] */
  switch (EDX) {
    case 0: goto L_12e7b630;
    case 1: goto L_12e7b638;
    case 2: goto L_12e7b648;
    case 3: goto L_12e7b65c;
    default: x86_unimpl("switch@0x12e7b617 out of table"); return;
  }
  /* 12e7b61e mov edi, edi */
  EDI = (EDI);
L_12e7b630:;
  /* 12e7b630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b633 pop esi */
  ESI = (pop32());
  /* 12e7b634 pop edi */
  EDI = (pop32());
  /* 12e7b635 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e7b636 ret  */
  ESPCHK(0x12e7b340u, _esp0);
  ESP += 4; return;
  /* 12e7b637 nop  */
  /* nop */
L_12e7b638:;
  /* 12e7b638 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e7b63b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e7b63e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b641 pop esi */
  ESI = (pop32());
  /* 12e7b642 pop edi */
  EDI = (pop32());
  /* 12e7b643 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e7b644 ret  */
  ESPCHK(0x12e7b340u, _esp0);
  ESP += 4; return;
  /* 12e7b645 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e7b648:;
  /* 12e7b648 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e7b64b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e7b64e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e7b651 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e7b654 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b657 pop esi */
  ESI = (pop32());
  /* 12e7b658 pop edi */
  EDI = (pop32());
  /* 12e7b659 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e7b65a ret  */
  ESPCHK(0x12e7b340u, _esp0);
  ESP += 4; return;
  /* 12e7b65b nop  */
  /* nop */
L_12e7b65c:;
  /* 12e7b65c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e7b65f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e7b662 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e7b665 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e7b668 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e7b66b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e7b66e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b671 pop esi */
  ESI = (pop32());
  /* 12e7b672 pop edi */
  EDI = (pop32());
  /* 12e7b673 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e7b674 ret  */
  ESPCHK(0x12e7b340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b680 @ 0x12e7b680 (421 bytes, 148 insns) */
void f_12e7b680(void) {
  FTRACE(0x12e7b680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7b680 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7b681 mov ebp, esp */
  EBP = (ESP);
  /* 12e7b683 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e7b685 push 0x12e8aff8 */
  push32((uint32_t)(0x12e8aff8u));
  /* 12e7b68a push 0x12e7c558 */
  push32((uint32_t)(0x12e7c558u));
  /* 12e7b68f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12e7b695 push eax */
  push32((uint32_t)(EAX));
  /* 12e7b696 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12e7b69d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b6a0 push ebx */
  push32((uint32_t)(EBX));
  /* 12e7b6a1 push esi */
  push32((uint32_t)(ESI));
  /* 12e7b6a2 push edi */
  push32((uint32_t)(EDI));
  /* 12e7b6a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e7b6a6 cmp dword ptr [0x12e8f6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b6ad jne 0x12e7b6fe */
  if (!C.zf) goto L_12e7b6fe;
  /* 12e7b6af lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12e7b6b2 push eax */
  push32((uint32_t)(EAX));
  /* 12e7b6b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7b6b5 push 0x12e8aff4 */
  push32((uint32_t)(0x12e8aff4u));
  /* 12e7b6ba push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7b6bc call dword ptr [0x12e922d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922d8))), 0x12e7b6c2u);
  /* 12e7b6c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7b6c4 je 0x12e7b6d2 */
  if (C.zf) goto L_12e7b6d2;
  /* 12e7b6c6 mov dword ptr [0x12e8f6c4], 1 */
  w32((uint32_t)(0x12e8f6c4), (0x1u));
  /* 12e7b6d0 jmp 0x12e7b6fe */
  goto L_12e7b6fe;
L_12e7b6d2:;
  /* 12e7b6d2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12e7b6d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7b6d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7b6d8 push 0x12e8aff0 */
  push32((uint32_t)(0x12e8aff0u));
  /* 12e7b6dd push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7b6df push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7b6e1 call dword ptr [0x12e922dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922dc))), 0x12e7b6e7u);
  /* 12e7b6e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7b6e9 je 0x12e7b6f7 */
  if (C.zf) goto L_12e7b6f7;
  /* 12e7b6eb mov dword ptr [0x12e8f6c4], 2 */
  w32((uint32_t)(0x12e8f6c4), (0x2u));
  /* 12e7b6f5 jmp 0x12e7b6fe */
  goto L_12e7b6fe;
L_12e7b6f7:;
  /* 12e7b6f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7b6f9 jmp 0x12e7b828 */
  goto L_12e7b828;
L_12e7b6fe:;
  /* 12e7b6fe cmp dword ptr [0x12e8f6c4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f6c4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b705 jne 0x12e7b735 */
  if (!C.zf) goto L_12e7b735;
  /* 12e7b707 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b70b jne 0x12e7b716 */
  if (!C.zf) goto L_12e7b716;
  /* 12e7b70d mov edx, dword ptr [0x12e8f6d0] */
  EDX = (r32((uint32_t)(0x12e8f6d0)));
  /* 12e7b713 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12e7b716:;
  /* 12e7b716 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7b719 push eax */
  push32((uint32_t)(EAX));
  /* 12e7b71a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7b71d push ecx */
  push32((uint32_t)(ECX));
  /* 12e7b71e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7b721 push edx */
  push32((uint32_t)(EDX));
  /* 12e7b722 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b725 push eax */
  push32((uint32_t)(EAX));
  /* 12e7b726 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e7b729 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7b72a call dword ptr [0x12e922dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922dc))), 0x12e7b730u);
  /* 12e7b730 jmp 0x12e7b828 */
  goto L_12e7b828;
L_12e7b735:;
  /* 12e7b735 cmp dword ptr [0x12e8f6c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f6c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b73c jne 0x12e7b826 */
  if (!C.zf) goto L_12e7b826;
  /* 12e7b742 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b746 jne 0x12e7b751 */
  if (!C.zf) goto L_12e7b751;
  /* 12e7b748 mov edx, dword ptr [0x12e8f6e0] */
  EDX = (r32((uint32_t)(0x12e8f6e0)));
  /* 12e7b74e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_12e7b751:;
  /* 12e7b751 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7b753 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7b755 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7b758 push eax */
  push32((uint32_t)(EAX));
  /* 12e7b759 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7b75c push ecx */
  push32((uint32_t)(ECX));
  /* 12e7b75d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e7b760 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7b762 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7b764 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7b767 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b76a push edx */
  push32((uint32_t)(EDX));
  /* 12e7b76b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e7b76e push eax */
  push32((uint32_t)(EAX));
  /* 12e7b76f call dword ptr [0x12e922e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922e0))), 0x12e7b775u);
  /* 12e7b775 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e7b778 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b77c jne 0x12e7b785 */
  if (!C.zf) goto L_12e7b785;
  /* 12e7b77e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7b780 jmp 0x12e7b828 */
  goto L_12e7b828;
L_12e7b785:;
  /* 12e7b785 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e7b78c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7b78f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e7b791 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b794 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e7b796 call 0x12e765f0 */
  push32(0x12e7b79bu); f_12e765f0();
  /* 12e7b79b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 12e7b79e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e7b7a1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e7b7a4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12e7b7a7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7b7aa shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12e7b7ac push edx */
  push32((uint32_t)(EDX));
  /* 12e7b7ad push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7b7af mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e7b7b2 push eax */
  push32((uint32_t)(EAX));
  /* 12e7b7b3 call 0x12e771c0 */
  push32(0x12e7b7b8u); f_12e771c0();
  /* 12e7b7b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b7bb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e7b7c2 jmp 0x12e7b7db */
  goto L_12e7b7db;
  /* 12e7b7c4 mov eax, 1 */
  EAX = (0x1u);
  /* 12e7b7c9 ret  */
  ESPCHK(0x12e7b680u, _esp0);
  ESP += 4; return;
  /* 12e7b7ca mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7b7cd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12e7b7d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e7b7db:;
  /* 12e7b7db cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b7df jne 0x12e7b7e5 */
  if (!C.zf) goto L_12e7b7e5;
  /* 12e7b7e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7b7e3 jmp 0x12e7b828 */
  goto L_12e7b828;
L_12e7b7e5:;
  /* 12e7b7e5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7b7e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7b7e9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e7b7ec push edx */
  push32((uint32_t)(EDX));
  /* 12e7b7ed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7b7f0 push eax */
  push32((uint32_t)(EAX));
  /* 12e7b7f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7b7f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7b7f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7b7f7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e7b7fa push edx */
  push32((uint32_t)(EDX));
  /* 12e7b7fb call dword ptr [0x12e922e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922e0))), 0x12e7b801u);
  /* 12e7b801 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e7b804 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b808 jne 0x12e7b80e */
  if (!C.zf) goto L_12e7b80e;
  /* 12e7b80a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7b80c jmp 0x12e7b828 */
  goto L_12e7b828;
L_12e7b80e:;
  /* 12e7b80e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7b811 push eax */
  push32((uint32_t)(EAX));
  /* 12e7b812 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e7b815 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7b816 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e7b819 push edx */
  push32((uint32_t)(EDX));
  /* 12e7b81a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b81d push eax */
  push32((uint32_t)(EAX));
  /* 12e7b81e call dword ptr [0x12e922d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922d8))), 0x12e7b824u);
  /* 12e7b824 jmp 0x12e7b828 */
  goto L_12e7b828;
L_12e7b826:;
  /* 12e7b826 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e7b828:;
  /* 12e7b828 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 12e7b82b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7b82e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12e7b835 pop edi */
  EDI = (pop32());
  /* 12e7b836 pop esi */
  ESI = (pop32());
  /* 12e7b837 pop ebx */
  EBX = (pop32());
  /* 12e7b838 mov esp, ebp */
  ESP = (EBP);
  /* 12e7b83a pop ebp */
  EBP = (pop32());
  /* 12e7b83b ret  */
  ESPCHK(0x12e7b680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b840 @ 0x12e7b840 (727 bytes, 263 insns) */
void f_12e7b840(void) {
  FTRACE(0x12e7b840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7b840 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7b841 mov ebp, esp */
  EBP = (ESP);
  /* 12e7b843 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e7b845 push 0x12e8b008 */
  push32((uint32_t)(0x12e8b008u));
  /* 12e7b84a push 0x12e7c558 */
  push32((uint32_t)(0x12e7c558u));
  /* 12e7b84f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12e7b855 push eax */
  push32((uint32_t)(EAX));
  /* 12e7b856 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12e7b85d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b860 push ebx */
  push32((uint32_t)(EBX));
  /* 12e7b861 push esi */
  push32((uint32_t)(ESI));
  /* 12e7b862 push edi */
  push32((uint32_t)(EDI));
  /* 12e7b863 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e7b866 cmp dword ptr [0x12e8f6e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f6e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b86d jne 0x12e7b8c6 */
  if (!C.zf) goto L_12e7b8c6;
  /* 12e7b86f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7b871 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7b873 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7b875 push 0x12e8aff4 */
  push32((uint32_t)(0x12e8aff4u));
  /* 12e7b87a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e7b87f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7b881 call dword ptr [0x12e922d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922d0))), 0x12e7b887u);
  /* 12e7b887 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7b889 je 0x12e7b897 */
  if (C.zf) goto L_12e7b897;
  /* 12e7b88b mov dword ptr [0x12e8f6e8], 1 */
  w32((uint32_t)(0x12e8f6e8), (0x1u));
  /* 12e7b895 jmp 0x12e7b8c6 */
  goto L_12e7b8c6;
L_12e7b897:;
  /* 12e7b897 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7b899 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7b89b push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7b89d push 0x12e8aff0 */
  push32((uint32_t)(0x12e8aff0u));
  /* 12e7b8a2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e7b8a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7b8a9 call dword ptr [0x12e922d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922d4))), 0x12e7b8afu);
  /* 12e7b8af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7b8b1 je 0x12e7b8bf */
  if (C.zf) goto L_12e7b8bf;
  /* 12e7b8b3 mov dword ptr [0x12e8f6e8], 2 */
  w32((uint32_t)(0x12e8f6e8), (0x2u));
  /* 12e7b8bd jmp 0x12e7b8c6 */
  goto L_12e7b8c6;
L_12e7b8bf:;
  /* 12e7b8bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7b8c1 jmp 0x12e7bb31 */
  goto L_12e7bb31;
L_12e7b8c6:;
  /* 12e7b8c6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b8ca jle 0x12e7b8df */
  if ((C.zf||C.sf!=C.of)) goto L_12e7b8df;
  /* 12e7b8cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7b8cf push eax */
  push32((uint32_t)(EAX));
  /* 12e7b8d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7b8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7b8d4 call 0x12e7bb50 */
  push32(0x12e7b8d9u); f_12e7bb50();
  /* 12e7b8d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b8dc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12e7b8df:;
  /* 12e7b8df cmp dword ptr [0x12e8f6e8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f6e8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b8e6 jne 0x12e7b90b */
  if (!C.zf) goto L_12e7b90b;
  /* 12e7b8e8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e7b8eb push edx */
  push32((uint32_t)(EDX));
  /* 12e7b8ec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e7b8ef push eax */
  push32((uint32_t)(EAX));
  /* 12e7b8f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7b8f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7b8f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7b8f7 push edx */
  push32((uint32_t)(EDX));
  /* 12e7b8f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7b8fb push eax */
  push32((uint32_t)(EAX));
  /* 12e7b8fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b8ff push ecx */
  push32((uint32_t)(ECX));
  /* 12e7b900 call dword ptr [0x12e922d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922d4))), 0x12e7b906u);
  /* 12e7b906 jmp 0x12e7bb31 */
  goto L_12e7bb31;
L_12e7b90b:;
  /* 12e7b90b cmp dword ptr [0x12e8f6e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f6e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b912 jne 0x12e7bb2f */
  if (!C.zf) goto L_12e7bb2f;
  /* 12e7b918 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b91c jne 0x12e7b927 */
  if (!C.zf) goto L_12e7b927;
  /* 12e7b91e mov edx, dword ptr [0x12e8f6e0] */
  EDX = (r32((uint32_t)(0x12e8f6e0)));
  /* 12e7b924 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12e7b927:;
  /* 12e7b927 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7b929 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7b92b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7b92e push eax */
  push32((uint32_t)(EAX));
  /* 12e7b92f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7b932 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7b933 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12e7b936 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7b938 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7b93a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7b93d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b940 push edx */
  push32((uint32_t)(EDX));
  /* 12e7b941 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e7b944 push eax */
  push32((uint32_t)(EAX));
  /* 12e7b945 call dword ptr [0x12e922e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922e0))), 0x12e7b94bu);
  /* 12e7b94b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e7b94e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b952 jne 0x12e7b95b */
  if (!C.zf) goto L_12e7b95b;
  /* 12e7b954 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7b956 jmp 0x12e7bb31 */
  goto L_12e7bb31;
L_12e7b95b:;
  /* 12e7b95b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e7b962 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e7b965 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e7b967 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7b96a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e7b96c call 0x12e765f0 */
  push32(0x12e7b971u); f_12e765f0();
  /* 12e7b971 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12e7b974 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e7b977 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e7b97a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12e7b97d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e7b984 jmp 0x12e7b99d */
  goto L_12e7b99d;
  /* 12e7b986 mov eax, 1 */
  EAX = (0x1u);
  /* 12e7b98b ret  */
  ESPCHK(0x12e7b840u, _esp0);
  ESP += 4; return;
  /* 12e7b98c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7b98f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12e7b996 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e7b99d:;
  /* 12e7b99d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b9a1 jne 0x12e7b9aa */
  if (!C.zf) goto L_12e7b9aa;
  /* 12e7b9a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7b9a5 jmp 0x12e7bb31 */
  goto L_12e7bb31;
L_12e7b9aa:;
  /* 12e7b9aa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e7b9ad push edx */
  push32((uint32_t)(EDX));
  /* 12e7b9ae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e7b9b1 push eax */
  push32((uint32_t)(EAX));
  /* 12e7b9b2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7b9b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7b9b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7b9b9 push edx */
  push32((uint32_t)(EDX));
  /* 12e7b9ba push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7b9bc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e7b9bf push eax */
  push32((uint32_t)(EAX));
  /* 12e7b9c0 call dword ptr [0x12e922e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922e0))), 0x12e7b9c6u);
  /* 12e7b9c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7b9c8 jne 0x12e7b9d1 */
  if (!C.zf) goto L_12e7b9d1;
  /* 12e7b9ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7b9cc jmp 0x12e7bb31 */
  goto L_12e7bb31;
L_12e7b9d1:;
  /* 12e7b9d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7b9d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7b9d5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e7b9d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7b9d9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e7b9dc push edx */
  push32((uint32_t)(EDX));
  /* 12e7b9dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7b9e0 push eax */
  push32((uint32_t)(EAX));
  /* 12e7b9e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7b9e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7b9e5 call dword ptr [0x12e922d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922d0))), 0x12e7b9ebu);
  /* 12e7b9eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e7b9ee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7b9f2 jne 0x12e7b9fb */
  if (!C.zf) goto L_12e7b9fb;
  /* 12e7b9f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7b9f6 jmp 0x12e7bb31 */
  goto L_12e7bb31;
L_12e7b9fb:;
  /* 12e7b9fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7b9fe and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7ba04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7ba06 je 0x12e7ba4b */
  if (C.zf) goto L_12e7ba4b;
  /* 12e7ba08 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ba0c je 0x12e7ba46 */
  if (C.zf) goto L_12e7ba46;
  /* 12e7ba0e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e7ba11 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ba14 jle 0x12e7ba1d */
  if ((C.zf||C.sf!=C.of)) goto L_12e7ba1d;
  /* 12e7ba16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7ba18 jmp 0x12e7bb31 */
  goto L_12e7bb31;
L_12e7ba1d:;
  /* 12e7ba1d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e7ba20 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7ba21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e7ba24 push edx */
  push32((uint32_t)(EDX));
  /* 12e7ba25 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e7ba28 push eax */
  push32((uint32_t)(EAX));
  /* 12e7ba29 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e7ba2c push ecx */
  push32((uint32_t)(ECX));
  /* 12e7ba2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7ba30 push edx */
  push32((uint32_t)(EDX));
  /* 12e7ba31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ba34 push eax */
  push32((uint32_t)(EAX));
  /* 12e7ba35 call dword ptr [0x12e922d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922d0))), 0x12e7ba3bu);
  /* 12e7ba3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7ba3d jne 0x12e7ba46 */
  if (!C.zf) goto L_12e7ba46;
  /* 12e7ba3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7ba41 jmp 0x12e7bb31 */
  goto L_12e7bb31;
L_12e7ba46:;
  /* 12e7ba46 jmp 0x12e7bb2a */
  goto L_12e7bb2a;
L_12e7ba4b:;
  /* 12e7ba4b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e7ba4e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12e7ba51 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e7ba58 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e7ba5b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e7ba5d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ba60 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e7ba62 call 0x12e765f0 */
  push32(0x12e7ba67u); f_12e765f0();
  /* 12e7ba67 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12e7ba6a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e7ba6d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e7ba70 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12e7ba73 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e7ba7a jmp 0x12e7ba93 */
  goto L_12e7ba93;
  /* 12e7ba7c mov eax, 1 */
  EAX = (0x1u);
  /* 12e7ba81 ret  */
  ESPCHK(0x12e7b840u, _esp0);
  ESP += 4; return;
  /* 12e7ba82 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7ba85 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12e7ba8c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e7ba93:;
  /* 12e7ba93 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ba97 jne 0x12e7baa0 */
  if (!C.zf) goto L_12e7baa0;
  /* 12e7ba99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7ba9b jmp 0x12e7bb31 */
  goto L_12e7bb31;
L_12e7baa0:;
  /* 12e7baa0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e7baa3 push eax */
  push32((uint32_t)(EAX));
  /* 12e7baa4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7baa7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7baa8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e7baab push edx */
  push32((uint32_t)(EDX));
  /* 12e7baac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e7baaf push eax */
  push32((uint32_t)(EAX));
  /* 12e7bab0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7bab3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7bab4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bab7 push edx */
  push32((uint32_t)(EDX));
  /* 12e7bab8 call dword ptr [0x12e922d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922d0))), 0x12e7babeu);
  /* 12e7babe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7bac0 jne 0x12e7bac6 */
  if (!C.zf) goto L_12e7bac6;
  /* 12e7bac2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7bac4 jmp 0x12e7bb31 */
  goto L_12e7bb31;
L_12e7bac6:;
  /* 12e7bac6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7baca jne 0x12e7bafa */
  if (!C.zf) goto L_12e7bafa;
  /* 12e7bacc push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7bace push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7bad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7bad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7bad4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e7bad7 push eax */
  push32((uint32_t)(EAX));
  /* 12e7bad8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7badb push ecx */
  push32((uint32_t)(ECX));
  /* 12e7badc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e7bae1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e7bae4 push edx */
  push32((uint32_t)(EDX));
  /* 12e7bae5 call dword ptr [0x12e92380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92380))), 0x12e7baebu);
  /* 12e7baeb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e7baee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7baf2 jne 0x12e7baf8 */
  if (!C.zf) goto L_12e7baf8;
  /* 12e7baf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7baf6 jmp 0x12e7bb31 */
  goto L_12e7bb31;
L_12e7baf8:;
  /* 12e7baf8 jmp 0x12e7bb2a */
  goto L_12e7bb2a;
L_12e7bafa:;
  /* 12e7bafa push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7bafc push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7bafe mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e7bb01 push eax */
  push32((uint32_t)(EAX));
  /* 12e7bb02 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e7bb05 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7bb06 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e7bb09 push edx */
  push32((uint32_t)(EDX));
  /* 12e7bb0a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7bb0d push eax */
  push32((uint32_t)(EAX));
  /* 12e7bb0e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e7bb13 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e7bb16 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7bb17 call dword ptr [0x12e92380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92380))), 0x12e7bb1du);
  /* 12e7bb1d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e7bb20 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7bb24 jne 0x12e7bb2a */
  if (!C.zf) goto L_12e7bb2a;
  /* 12e7bb26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7bb28 jmp 0x12e7bb31 */
  goto L_12e7bb31;
L_12e7bb2a:;
  /* 12e7bb2a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e7bb2d jmp 0x12e7bb31 */
  goto L_12e7bb31;
L_12e7bb2f:;
  /* 12e7bb2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e7bb31:;
  /* 12e7bb31 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12e7bb34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7bb37 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12e7bb3e pop edi */
  EDI = (pop32());
  /* 12e7bb3f pop esi */
  ESI = (pop32());
  /* 12e7bb40 pop ebx */
  EBX = (pop32());
  /* 12e7bb41 mov esp, ebp */
  ESP = (EBP);
  /* 12e7bb43 pop ebp */
  EBP = (pop32());
  /* 12e7bb44 ret  */
  ESPCHK(0x12e7b840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb50 @ 0x12e7bb50 (80 bytes, 32 insns) */
void f_12e7bb50(void) {
  FTRACE(0x12e7bb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7bb50 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7bb51 mov ebp, esp */
  EBP = (ESP);
  /* 12e7bb53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7bb56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7bb59 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e7bb5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bb5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e7bb62:;
  /* 12e7bb62 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7bb65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7bb68 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7bb6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e7bb6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7bb70 je 0x12e7bb87 */
  if (C.zf) goto L_12e7bb87;
  /* 12e7bb72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7bb75 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e7bb78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7bb7a je 0x12e7bb87 */
  if (C.zf) goto L_12e7bb87;
  /* 12e7bb7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7bb7f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7bb82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7bb85 jmp 0x12e7bb62 */
  goto L_12e7bb62;
L_12e7bb87:;
  /* 12e7bb87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7bb8a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e7bb8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7bb8f jne 0x12e7bb99 */
  if (!C.zf) goto L_12e7bb99;
  /* 12e7bb91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7bb94 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7bb97 jmp 0x12e7bb9c */
  goto L_12e7bb9c;
L_12e7bb99:;
  /* 12e7bb99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12e7bb9c:;
  /* 12e7bb9c mov esp, ebp */
  ESP = (EBP);
  /* 12e7bb9e pop ebp */
  EBP = (pop32());
  /* 12e7bb9f ret  */
  ESPCHK(0x12e7bb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bba0 @ 0x12e7bba0 (130 bytes, 43 insns) */
void f_12e7bba0(void) {
  FTRACE(0x12e7bba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7bba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7bba1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7bba3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7bba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bba7 cmp eax, dword ptr [0x12e90fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e90fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7bbad jae 0x12e7bbd1 */
  if (!C.cf) goto L_12e7bbd1;
  /* 12e7bbaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bbb2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e7bbb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bbb8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7bbbb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7bbbe mov eax, dword ptr [ecx*4 + 0x12e90ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e90ea0)));
  /* 12e7bbc5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12e7bbca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7bbcd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7bbcf jne 0x12e7bbec */
  if (!C.zf) goto L_12e7bbec;
L_12e7bbd1:;
  /* 12e7bbd1 call 0x12e7b320 */
  push32(0x12e7bbd6u); f_12e7b320();
  /* 12e7bbd6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e7bbdc call 0x12e7b330 */
  push32(0x12e7bbe1u); f_12e7b330();
  /* 12e7bbe1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e7bbe7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7bbea jmp 0x12e7bc1e */
  goto L_12e7bc1e;
L_12e7bbec:;
  /* 12e7bbec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bbef push edx */
  push32((uint32_t)(EDX));
  /* 12e7bbf0 call 0x12e7cb40 */
  push32(0x12e7bbf5u); f_12e7cb40();
  /* 12e7bbf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7bbf8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7bbfb push eax */
  push32((uint32_t)(EAX));
  /* 12e7bbfc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7bbff push ecx */
  push32((uint32_t)(ECX));
  /* 12e7bc00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bc03 push edx */
  push32((uint32_t)(EDX));
  /* 12e7bc04 call 0x12e7bc30 */
  push32(0x12e7bc09u); f_12e7bc30();
  /* 12e7bc09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7bc0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7bc0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bc12 push eax */
  push32((uint32_t)(EAX));
  /* 12e7bc13 call 0x12e7cbd0 */
  push32(0x12e7bc18u); f_12e7cbd0();
  /* 12e7bc18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7bc1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e7bc1e:;
  /* 12e7bc1e mov esp, ebp */
  ESP = (EBP);
  /* 12e7bc20 pop ebp */
  EBP = (pop32());
  /* 12e7bc21 ret  */
  ESPCHK(0x12e7bba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc30 @ 0x12e7bc30 (178 bytes, 56 insns) */
void f_12e7bc30(void) {
  FTRACE(0x12e7bc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7bc30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7bc31 mov ebp, esp */
  EBP = (ESP);
  /* 12e7bc33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7bc36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bc39 push eax */
  push32((uint32_t)(EAX));
  /* 12e7bc3a call 0x12e7c9c0 */
  push32(0x12e7bc3fu); f_12e7c9c0();
  /* 12e7bc3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7bc42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e7bc45 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7bc49 jne 0x12e7bc5e */
  if (!C.zf) goto L_12e7bc5e;
  /* 12e7bc4b call 0x12e7b320 */
  push32(0x12e7bc50u); f_12e7b320();
  /* 12e7bc50 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e7bc56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7bc59 jmp 0x12e7bcde */
  goto L_12e7bcde;
L_12e7bc5e:;
  /* 12e7bc5e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7bc61 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7bc62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7bc64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7bc67 push edx */
  push32((uint32_t)(EDX));
  /* 12e7bc68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7bc6b push eax */
  push32((uint32_t)(EAX));
  /* 12e7bc6c call dword ptr [0x12e922cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922cc))), 0x12e7bc72u);
  /* 12e7bc72 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e7bc75 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7bc79 jne 0x12e7bc86 */
  if (!C.zf) goto L_12e7bc86;
  /* 12e7bc7b call dword ptr [0x12e92284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92284))), 0x12e7bc81u);
  /* 12e7bc81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7bc84 jmp 0x12e7bc8d */
  goto L_12e7bc8d;
L_12e7bc86:;
  /* 12e7bc86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e7bc8d:;
  /* 12e7bc8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7bc91 je 0x12e7bca4 */
  if (C.zf) goto L_12e7bca4;
  /* 12e7bc93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7bc96 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7bc97 call 0x12e7b280 */
  push32(0x12e7bc9cu); f_12e7b280();
  /* 12e7bc9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7bc9f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7bca2 jmp 0x12e7bcde */
  goto L_12e7bcde;
L_12e7bca4:;
  /* 12e7bca4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bca7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12e7bcaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bcad and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7bcb0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7bcb3 mov ecx, dword ptr [edx*4 + 0x12e90ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12e90ea0)));
  /* 12e7bcba mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 12e7bcbe and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12e7bcc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bcc4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e7bcc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bcca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7bccd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7bcd0 mov eax, dword ptr [eax*4 + 0x12e90ea0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12e90ea0)));
  /* 12e7bcd7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 12e7bcdb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12e7bcde:;
  /* 12e7bcde mov esp, ebp */
  ESP = (EBP);
  /* 12e7bce0 pop ebp */
  EBP = (pop32());
  /* 12e7bce1 ret  */
  ESPCHK(0x12e7bc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcf0 @ 0x12e7bcf0 (130 bytes, 43 insns) */
void f_12e7bcf0(void) {
  FTRACE(0x12e7bcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7bcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7bcf1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7bcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7bcf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bcf7 cmp eax, dword ptr [0x12e90fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e90fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7bcfd jae 0x12e7bd21 */
  if (!C.cf) goto L_12e7bd21;
  /* 12e7bcff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bd02 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e7bd05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bd08 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7bd0b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7bd0e mov eax, dword ptr [ecx*4 + 0x12e90ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e90ea0)));
  /* 12e7bd15 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12e7bd1a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7bd1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7bd1f jne 0x12e7bd3c */
  if (!C.zf) goto L_12e7bd3c;
L_12e7bd21:;
  /* 12e7bd21 call 0x12e7b320 */
  push32(0x12e7bd26u); f_12e7b320();
  /* 12e7bd26 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e7bd2c call 0x12e7b330 */
  push32(0x12e7bd31u); f_12e7b330();
  /* 12e7bd31 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e7bd37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7bd3a jmp 0x12e7bd6e */
  goto L_12e7bd6e;
L_12e7bd3c:;
  /* 12e7bd3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bd3f push edx */
  push32((uint32_t)(EDX));
  /* 12e7bd40 call 0x12e7cb40 */
  push32(0x12e7bd45u); f_12e7cb40();
  /* 12e7bd45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7bd48 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7bd4b push eax */
  push32((uint32_t)(EAX));
  /* 12e7bd4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7bd4f push ecx */
  push32((uint32_t)(ECX));
  /* 12e7bd50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bd53 push edx */
  push32((uint32_t)(EDX));
  /* 12e7bd54 call 0x12e7bd80 */
  push32(0x12e7bd59u); f_12e7bd80();
  /* 12e7bd59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7bd5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7bd5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bd62 push eax */
  push32((uint32_t)(EAX));
  /* 12e7bd63 call 0x12e7cbd0 */
  push32(0x12e7bd68u); f_12e7cbd0();
  /* 12e7bd68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7bd6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e7bd6e:;
  /* 12e7bd6e mov esp, ebp */
  ESP = (EBP);
  /* 12e7bd70 pop ebp */
  EBP = (pop32());
  /* 12e7bd71 ret  */
  ESPCHK(0x12e7bcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd80 @ 0x12e7bd80 (627 bytes, 182 insns) */
void f_12e7bd80(void) {
  FTRACE(0x12e7bd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7bd80 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7bd81 mov ebp, esp */
  EBP = (ESP);
  /* 12e7bd83 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7bd89 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e7bd90 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7bd93 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12e7bd99 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7bd9d jne 0x12e7bda6 */
  if (!C.zf) goto L_12e7bda6;
  /* 12e7bd9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7bda1 jmp 0x12e7bfef */
  goto L_12e7bfef;
L_12e7bda6:;
  /* 12e7bda6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bda9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e7bdac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bdaf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7bdb2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7bdb5 mov eax, dword ptr [ecx*4 + 0x12e90ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e90ea0)));
  /* 12e7bdbc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12e7bdc1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7bdc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7bdc6 je 0x12e7bdd8 */
  if (C.zf) goto L_12e7bdd8;
  /* 12e7bdc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7bdca push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7bdcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bdcf push edx */
  push32((uint32_t)(EDX));
  /* 12e7bdd0 call 0x12e7bc30 */
  push32(0x12e7bdd5u); f_12e7bc30();
  /* 12e7bdd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7bdd8:;
  /* 12e7bdd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bddb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e7bdde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bde1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7bde4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7bde7 mov edx, dword ptr [eax*4 + 0x12e90ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e90ea0)));
  /* 12e7bdee movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12e7bdf3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7bdf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7bdfa je 0x12e7bf0c */
  if (C.zf) goto L_12e7bf0c;
  /* 12e7be00 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7be03 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e7be06 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12e7be0d:;
  /* 12e7be0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7be10 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7be13 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7be16 jae 0x12e7bf0a */
  if (!C.cf) goto L_12e7bf0a;
  /* 12e7be1c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12e7be22 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e7be25:;
  /* 12e7be25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7be28 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12e7be2e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7be30 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7be36 jge 0x12e7be97 */
  if ((C.sf==C.of)) goto L_12e7be97;
  /* 12e7be38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7be3b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7be3e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7be41 jae 0x12e7be97 */
  if (!C.cf) goto L_12e7be97;
  /* 12e7be43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7be46 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e7be48 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 12e7be4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7be51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7be54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7be57 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 12e7be5e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7be61 jne 0x12e7be81 */
  if (!C.zf) goto L_12e7be81;
  /* 12e7be63 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12e7be69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7be6c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12e7be72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7be75 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12e7be78 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7be7b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7be7e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e7be81:;
  /* 12e7be81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7be84 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 12e7be8a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12e7be8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7be8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7be92 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7be95 jmp 0x12e7be25 */
  goto L_12e7be25;
L_12e7be97:;
  /* 12e7be97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7be99 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12e7be9f push edx */
  push32((uint32_t)(EDX));
  /* 12e7bea0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7bea3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12e7bea9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7beab push eax */
  push32((uint32_t)(EAX));
  /* 12e7beac lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12e7beb2 push edx */
  push32((uint32_t)(EDX));
  /* 12e7beb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7beb6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e7beb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bebc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7bebf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7bec2 mov edx, dword ptr [eax*4 + 0x12e90ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e90ea0)));
  /* 12e7bec9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 12e7becc push eax */
  push32((uint32_t)(EAX));
  /* 12e7becd call dword ptr [0x12e92314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92314))), 0x12e7bed3u);
  /* 12e7bed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7bed5 je 0x12e7befa */
  if (C.zf) goto L_12e7befa;
  /* 12e7bed7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7beda add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7bee0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e7bee3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7bee6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12e7beec sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7beee cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7bef4 jge 0x12e7bef8 */
  if ((C.sf==C.of)) goto L_12e7bef8;
  /* 12e7bef6 jmp 0x12e7bf0a */
  goto L_12e7bf0a;
L_12e7bef8:;
  /* 12e7bef8 jmp 0x12e7bf05 */
  goto L_12e7bf05;
L_12e7befa:;
  /* 12e7befa call dword ptr [0x12e92284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92284))), 0x12e7bf00u);
  /* 12e7bf00 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e7bf03 jmp 0x12e7bf0a */
  goto L_12e7bf0a;
L_12e7bf05:;
  /* 12e7bf05 jmp 0x12e7be0d */
  goto L_12e7be0d;
L_12e7bf0a:;
  /* 12e7bf0a jmp 0x12e7bf5c */
  goto L_12e7bf5c;
L_12e7bf0c:;
  /* 12e7bf0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7bf0e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12e7bf14 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7bf15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7bf18 push edx */
  push32((uint32_t)(EDX));
  /* 12e7bf19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7bf1c push eax */
  push32((uint32_t)(EAX));
  /* 12e7bf1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bf20 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e7bf23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bf26 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7bf29 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7bf2c mov eax, dword ptr [ecx*4 + 0x12e90ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e90ea0)));
  /* 12e7bf33 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12e7bf36 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7bf37 call dword ptr [0x12e92314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92314))), 0x12e7bf3du);
  /* 12e7bf3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7bf3f je 0x12e7bf53 */
  if (C.zf) goto L_12e7bf53;
  /* 12e7bf41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e7bf48 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 12e7bf4e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12e7bf51 jmp 0x12e7bf5c */
  goto L_12e7bf5c;
L_12e7bf53:;
  /* 12e7bf53 call dword ptr [0x12e92284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92284))), 0x12e7bf59u);
  /* 12e7bf59 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12e7bf5c:;
  /* 12e7bf5c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7bf60 jne 0x12e7bfe6 */
  if (!C.zf) goto L_12e7bfe6;
  /* 12e7bf66 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7bf6a je 0x12e7bf9a */
  if (C.zf) goto L_12e7bf9a;
  /* 12e7bf6c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7bf70 jne 0x12e7bf89 */
  if (!C.zf) goto L_12e7bf89;
  /* 12e7bf72 call 0x12e7b320 */
  push32(0x12e7bf77u); f_12e7b320();
  /* 12e7bf77 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e7bf7d call 0x12e7b330 */
  push32(0x12e7bf82u); f_12e7b330();
  /* 12e7bf82 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7bf85 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12e7bf87 jmp 0x12e7bf95 */
  goto L_12e7bf95;
L_12e7bf89:;
  /* 12e7bf89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7bf8c push edx */
  push32((uint32_t)(EDX));
  /* 12e7bf8d call 0x12e7b280 */
  push32(0x12e7bf92u); f_12e7b280();
  /* 12e7bf92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7bf95:;
  /* 12e7bf95 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7bf98 jmp 0x12e7bfef */
  goto L_12e7bfef;
L_12e7bf9a:;
  /* 12e7bf9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bf9d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e7bfa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7bfa3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7bfa6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7bfa9 mov edx, dword ptr [eax*4 + 0x12e90ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e90ea0)));
  /* 12e7bfb0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12e7bfb5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7bfb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7bfba je 0x12e7bfcb */
  if (C.zf) goto L_12e7bfcb;
  /* 12e7bfbc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7bfbf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e7bfc2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7bfc5 jne 0x12e7bfcb */
  if (!C.zf) goto L_12e7bfcb;
  /* 12e7bfc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7bfc9 jmp 0x12e7bfef */
  goto L_12e7bfef;
L_12e7bfcb:;
  /* 12e7bfcb call 0x12e7b320 */
  push32(0x12e7bfd0u); f_12e7b320();
  /* 12e7bfd0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12e7bfd6 call 0x12e7b330 */
  push32(0x12e7bfdbu); f_12e7b330();
  /* 12e7bfdb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e7bfe1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7bfe4 jmp 0x12e7bfef */
  goto L_12e7bfef;
L_12e7bfe6:;
  /* 12e7bfe6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7bfe9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12e7bfef:;
  /* 12e7bfef mov esp, ebp */
  ESP = (EBP);
  /* 12e7bff1 pop ebp */
  EBP = (pop32());
  /* 12e7bff2 ret  */
  ESPCHK(0x12e7bd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c000 @ 0x12e7c000 (199 bytes, 68 insns) */
void f_12e7c000(void) {
  FTRACE(0x12e7c000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7c000 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7c001 mov ebp, esp */
  EBP = (ESP);
  /* 12e7c003 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7c004 push ebx */
  push32((uint32_t)(EBX));
  /* 12e7c005 push esi */
  push32((uint32_t)(ESI));
  /* 12e7c006 push edi */
  push32((uint32_t)(EDI));
L_12e7c007:;
  /* 12e7c007 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c00b jne 0x12e7c02b */
  if (!C.zf) goto L_12e7c02b;
  /* 12e7c00d push 0x12e8af54 */
  push32((uint32_t)(0x12e8af54u));
  /* 12e7c012 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7c014 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12e7c016 push 0x12e8b020 */
  push32((uint32_t)(0x12e8b020u));
  /* 12e7c01b push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7c01d call 0x12e72510 */
  push32(0x12e7c022u); f_12e72510();
  /* 12e7c022 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c025 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c028 jne 0x12e7c02b */
  if (!C.zf) goto L_12e7c02b;
  /* 12e7c02a int3  */
  x86_unimpl("int3 @ 0x12e7c02a");
L_12e7c02b:;
  /* 12e7c02b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7c02d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7c02f jne 0x12e7c007 */
  if (!C.zf) goto L_12e7c007;
  /* 12e7c031 mov ecx, dword ptr [0x12e8f6ec] */
  ECX = (r32((uint32_t)(0x12e8f6ec)));
  /* 12e7c037 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c03a mov dword ptr [0x12e8f6ec], ecx */
  w32((uint32_t)(0x12e8f6ec), (ECX));
  /* 12e7c040 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c043 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e7c046 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12e7c048 push 0x12e8b020 */
  push32((uint32_t)(0x12e8b020u));
  /* 12e7c04d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7c04f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12e7c054 call 0x12e73450 */
  push32(0x12e7c059u); f_12e73450();
  /* 12e7c059 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c05c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c05f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12e7c062 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c065 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c069 je 0x12e7c086 */
  if (C.zf) goto L_12e7c086;
  /* 12e7c06b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c06e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e7c071 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7c074 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c077 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12e7c07a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c07d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12e7c084 jmp 0x12e7c0ab */
  goto L_12e7c0ab;
L_12e7c086:;
  /* 12e7c086 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c089 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e7c08c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7c08f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c092 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12e7c095 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c098 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c09b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c09e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12e7c0a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c0a4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_12e7c0ab:;
  /* 12e7c0ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c0ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c0b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e7c0b4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e7c0b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c0b9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12e7c0c0 pop edi */
  EDI = (pop32());
  /* 12e7c0c1 pop esi */
  ESI = (pop32());
  /* 12e7c0c2 pop ebx */
  EBX = (pop32());
  /* 12e7c0c3 mov esp, ebp */
  ESP = (EBP);
  /* 12e7c0c5 pop ebp */
  EBP = (pop32());
  /* 12e7c0c6 ret  */
  ESPCHK(0x12e7c000u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12e7c0d0 (50 bytes, 17 insns) */
void f_12e7c0d0(void) {
  FTRACE(0x12e7c0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7c0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7c0d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7c0d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c0d6 cmp eax, dword ptr [0x12e90fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e90fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c0dc jb 0x12e7c0e2 */
  if (C.cf) goto L_12e7c0e2;
  /* 12e7c0de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7c0e0 jmp 0x12e7c100 */
  goto L_12e7c100;
L_12e7c0e2:;
  /* 12e7c0e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c0e5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e7c0e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c0eb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7c0ee imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7c0f1 mov eax, dword ptr [ecx*4 + 0x12e90ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e90ea0)));
  /* 12e7c0f8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12e7c0fd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12e7c100:;
  /* 12e7c100 pop ebp */
  EBP = (pop32());
  /* 12e7c101 ret  */
  ESPCHK(0x12e7c0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c110 @ 0x12e7c110 (300 bytes, 80 insns) */
void f_12e7c110(void) {
  FTRACE(0x12e7c110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7c110 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7c111 mov ebp, esp */
  EBP = (ESP);
  /* 12e7c113 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7c114 cmp dword ptr [0x12e90ba0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e90ba0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c11b jne 0x12e7c129 */
  if (!C.zf) goto L_12e7c129;
  /* 12e7c11d mov dword ptr [0x12e90ba0], 0x200 */
  w32((uint32_t)(0x12e90ba0), (0x200u));
  /* 12e7c127 jmp 0x12e7c13c */
  goto L_12e7c13c;
L_12e7c129:;
  /* 12e7c129 cmp dword ptr [0x12e90ba0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12e90ba0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c130 jge 0x12e7c13c */
  if ((C.sf==C.of)) goto L_12e7c13c;
  /* 12e7c132 mov dword ptr [0x12e90ba0], 0x14 */
  w32((uint32_t)(0x12e90ba0), (0x14u));
L_12e7c13c:;
  /* 12e7c13c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12e7c141 push 0x12e8b02c */
  push32((uint32_t)(0x12e8b02cu));
  /* 12e7c146 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7c148 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e7c14a mov eax, dword ptr [0x12e90ba0] */
  EAX = (r32((uint32_t)(0x12e90ba0)));
  /* 12e7c14f push eax */
  push32((uint32_t)(EAX));
  /* 12e7c150 call 0x12e73860 */
  push32(0x12e7c155u); f_12e73860();
  /* 12e7c155 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c158 mov dword ptr [0x12e8f860], eax */
  w32((uint32_t)(0x12e8f860), (EAX));
  /* 12e7c15d cmp dword ptr [0x12e8f860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c164 jne 0x12e7c1a5 */
  if (!C.zf) goto L_12e7c1a5;
  /* 12e7c166 mov dword ptr [0x12e90ba0], 0x14 */
  w32((uint32_t)(0x12e90ba0), (0x14u));
  /* 12e7c170 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12e7c175 push 0x12e8b02c */
  push32((uint32_t)(0x12e8b02cu));
  /* 12e7c17a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7c17c push 4 */
  push32((uint32_t)(0x4u));
  /* 12e7c17e mov ecx, dword ptr [0x12e90ba0] */
  ECX = (r32((uint32_t)(0x12e90ba0)));
  /* 12e7c184 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7c185 call 0x12e73860 */
  push32(0x12e7c18au); f_12e73860();
  /* 12e7c18a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c18d mov dword ptr [0x12e8f860], eax */
  w32((uint32_t)(0x12e8f860), (EAX));
  /* 12e7c192 cmp dword ptr [0x12e8f860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c199 jne 0x12e7c1a5 */
  if (!C.zf) goto L_12e7c1a5;
  /* 12e7c19b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12e7c19d call 0x12e723c0 */
  push32(0x12e7c1a2u); f_12e723c0();
  /* 12e7c1a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7c1a5:;
  /* 12e7c1a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e7c1ac jmp 0x12e7c1b7 */
  goto L_12e7c1b7;
L_12e7c1ae:;
  /* 12e7c1ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c1b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c1b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e7c1b7:;
  /* 12e7c1b7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c1bb jge 0x12e7c1d6 */
  if ((C.sf==C.of)) goto L_12e7c1d6;
  /* 12e7c1bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c1c0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e7c1c3 add eax, 0x12e8e140 */
  { uint32_t _a=(EAX),_b=(0x12e8e140u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c1c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c1cb mov edx, dword ptr [0x12e8f860] */
  EDX = (r32((uint32_t)(0x12e8f860)));
  /* 12e7c1d1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12e7c1d4 jmp 0x12e7c1ae */
  goto L_12e7c1ae;
L_12e7c1d6:;
  /* 12e7c1d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e7c1dd jmp 0x12e7c1e8 */
  goto L_12e7c1e8;
L_12e7c1df:;
  /* 12e7c1df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c1e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c1e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e7c1e8:;
  /* 12e7c1e8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c1ec jge 0x12e7c238 */
  if ((C.sf==C.of)) goto L_12e7c238;
  /* 12e7c1ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c1f1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e7c1f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c1f7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7c1fa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7c1fd mov eax, dword ptr [ecx*4 + 0x12e90ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e90ea0)));
  /* 12e7c204 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c208 je 0x12e7c226 */
  if (C.zf) goto L_12e7c226;
  /* 12e7c20a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c20d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e7c210 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c213 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7c216 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7c219 mov eax, dword ptr [ecx*4 + 0x12e90ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e90ea0)));
  /* 12e7c220 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c224 jne 0x12e7c236 */
  if (!C.zf) goto L_12e7c236;
L_12e7c226:;
  /* 12e7c226 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c229 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e7c22c mov dword ptr [ecx + 0x12e8e150], 0xffffffff */
  w32((uint32_t)(ECX + 0x12e8e150), (0xffffffffu));
L_12e7c236:;
  /* 12e7c236 jmp 0x12e7c1df */
  goto L_12e7c1df;
L_12e7c238:;
  /* 12e7c238 mov esp, ebp */
  ESP = (EBP);
  /* 12e7c23a pop ebp */
  EBP = (pop32());
  /* 12e7c23b ret  */
  ESPCHK(0x12e7c110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c240 @ 0x12e7c240 (26 bytes, 9 insns) */
void f_12e7c240(void) {
  FTRACE(0x12e7c240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7c240 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7c241 mov ebp, esp */
  EBP = (ESP);
  /* 12e7c243 call 0x12e7ce40 */
  push32(0x12e7c248u); f_12e7ce40();
  /* 12e7c248 movsx eax, byte ptr [0x12e8f504] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12e8f504))));
  /* 12e7c24f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7c251 je 0x12e7c258 */
  if (C.zf) goto L_12e7c258;
  /* 12e7c253 call 0x12e7cc00 */
  push32(0x12e7c258u); f_12e7cc00();
L_12e7c258:;
  /* 12e7c258 pop ebp */
  EBP = (pop32());
  /* 12e7c259 ret  */
  ESPCHK(0x12e7c240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c260 @ 0x12e7c260 (61 bytes, 20 insns) */
void f_12e7c260(void) {
  FTRACE(0x12e7c260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7c260 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7c261 mov ebp, esp */
  EBP = (ESP);
  /* 12e7c263 cmp dword ptr [ebp + 8], 0x12e8e140 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12e8e140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c26a jb 0x12e7c28e */
  if (C.cf) goto L_12e7c28e;
  /* 12e7c26c cmp dword ptr [ebp + 8], 0x12e8e3a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12e8e3a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c273 ja 0x12e7c28e */
  if ((!C.cf&&!C.zf)) goto L_12e7c28e;
  /* 12e7c275 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c278 sub eax, 0x12e8e140 */
  { uint32_t _a=(EAX),_b=(0x12e8e140u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7c27d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e7c280 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c283 push eax */
  push32((uint32_t)(EAX));
  /* 12e7c284 call 0x12e76e50 */
  push32(0x12e7c289u); f_12e76e50();
  /* 12e7c289 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c28c jmp 0x12e7c29b */
  goto L_12e7c29b;
L_12e7c28e:;
  /* 12e7c28e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c291 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c294 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7c295 call dword ptr [0x12e923a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e923a0))), 0x12e7c29bu);
L_12e7c29b:;
  /* 12e7c29b pop ebp */
  EBP = (pop32());
  /* 12e7c29c ret  */
  ESPCHK(0x12e7c260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2a0 @ 0x12e7c2a0 (41 bytes, 16 insns) */
void f_12e7c2a0(void) {
  FTRACE(0x12e7c2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7c2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7c2a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7c2a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c2a7 jge 0x12e7c2ba */
  if ((C.sf==C.of)) goto L_12e7c2ba;
  /* 12e7c2a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c2ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c2af push eax */
  push32((uint32_t)(EAX));
  /* 12e7c2b0 call 0x12e76e50 */
  push32(0x12e7c2b5u); f_12e76e50();
  /* 12e7c2b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c2b8 jmp 0x12e7c2c7 */
  goto L_12e7c2c7;
L_12e7c2ba:;
  /* 12e7c2ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7c2bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c2c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7c2c1 call dword ptr [0x12e923a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e923a0))), 0x12e7c2c7u);
L_12e7c2c7:;
  /* 12e7c2c7 pop ebp */
  EBP = (pop32());
  /* 12e7c2c8 ret  */
  ESPCHK(0x12e7c2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2d0 @ 0x12e7c2d0 (61 bytes, 20 insns) */
void f_12e7c2d0(void) {
  FTRACE(0x12e7c2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7c2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7c2d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7c2d3 cmp dword ptr [ebp + 8], 0x12e8e140 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12e8e140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c2da jb 0x12e7c2fe */
  if (C.cf) goto L_12e7c2fe;
  /* 12e7c2dc cmp dword ptr [ebp + 8], 0x12e8e3a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12e8e3a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c2e3 ja 0x12e7c2fe */
  if ((!C.cf&&!C.zf)) goto L_12e7c2fe;
  /* 12e7c2e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c2e8 sub eax, 0x12e8e140 */
  { uint32_t _a=(EAX),_b=(0x12e8e140u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7c2ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e7c2f0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c2f3 push eax */
  push32((uint32_t)(EAX));
  /* 12e7c2f4 call 0x12e76ef0 */
  push32(0x12e7c2f9u); f_12e76ef0();
  /* 12e7c2f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c2fc jmp 0x12e7c30b */
  goto L_12e7c30b;
L_12e7c2fe:;
  /* 12e7c2fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c301 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c304 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7c305 call dword ptr [0x12e92350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92350))), 0x12e7c30bu);
L_12e7c30b:;
  /* 12e7c30b pop ebp */
  EBP = (pop32());
  /* 12e7c30c ret  */
  ESPCHK(0x12e7c2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c310 @ 0x12e7c310 (41 bytes, 16 insns) */
void f_12e7c310(void) {
  FTRACE(0x12e7c310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7c310 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7c311 mov ebp, esp */
  EBP = (ESP);
  /* 12e7c313 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c317 jge 0x12e7c32a */
  if ((C.sf==C.of)) goto L_12e7c32a;
  /* 12e7c319 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c31c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c31f push eax */
  push32((uint32_t)(EAX));
  /* 12e7c320 call 0x12e76ef0 */
  push32(0x12e7c325u); f_12e76ef0();
  /* 12e7c325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c328 jmp 0x12e7c337 */
  goto L_12e7c337;
L_12e7c32a:;
  /* 12e7c32a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7c32d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c330 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7c331 call dword ptr [0x12e92350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92350))), 0x12e7c337u);
L_12e7c337:;
  /* 12e7c337 pop ebp */
  EBP = (pop32());
  /* 12e7c338 ret  */
  ESPCHK(0x12e7c310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c340 @ 0x12e7c340 (119 bytes, 34 insns) */
void f_12e7c340(void) {
  FTRACE(0x12e7c340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7c340 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7c341 mov ebp, esp */
  EBP = (ESP);
  /* 12e7c343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7c346 push 0x12e8f85c */
  push32((uint32_t)(0x12e8f85cu));
  /* 12e7c34b call dword ptr [0x12e92328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92328))), 0x12e7c351u);
  /* 12e7c351 cmp dword ptr [0x12e8f84c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f84c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c358 je 0x12e7c378 */
  if (C.zf) goto L_12e7c378;
  /* 12e7c35a push 0x12e8f85c */
  push32((uint32_t)(0x12e8f85cu));
  /* 12e7c35f call dword ptr [0x12e92318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92318))), 0x12e7c365u);
  /* 12e7c365 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e7c367 call 0x12e76e50 */
  push32(0x12e7c36cu); f_12e76e50();
  /* 12e7c36c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c36f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e7c376 jmp 0x12e7c37f */
  goto L_12e7c37f;
L_12e7c378:;
  /* 12e7c378 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e7c37f:;
  /* 12e7c37f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12e7c383 push eax */
  push32((uint32_t)(EAX));
  /* 12e7c384 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c387 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7c388 call 0x12e7c3c0 */
  push32(0x12e7c38du); f_12e7c3c0();
  /* 12e7c38d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c390 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e7c393 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c397 je 0x12e7c3a5 */
  if (C.zf) goto L_12e7c3a5;
  /* 12e7c399 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e7c39b call 0x12e76ef0 */
  push32(0x12e7c3a0u); f_12e76ef0();
  /* 12e7c3a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c3a3 jmp 0x12e7c3b0 */
  goto L_12e7c3b0;
L_12e7c3a5:;
  /* 12e7c3a5 push 0x12e8f85c */
  push32((uint32_t)(0x12e8f85cu));
  /* 12e7c3aa call dword ptr [0x12e92318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92318))), 0x12e7c3b0u);
L_12e7c3b0:;
  /* 12e7c3b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7c3b3 mov esp, ebp */
  ESP = (EBP);
  /* 12e7c3b5 pop ebp */
  EBP = (pop32());
  /* 12e7c3b6 ret  */
  ESPCHK(0x12e7c340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3c0 @ 0x12e7c3c0 (160 bytes, 50 insns) */
void f_12e7c3c0(void) {
  FTRACE(0x12e7c3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7c3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7c3c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7c3c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7c3c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c3ca jne 0x12e7c3d3 */
  if (!C.zf) goto L_12e7c3d3;
  /* 12e7c3cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7c3ce jmp 0x12e7c45c */
  goto L_12e7c45c;
L_12e7c3d3:;
  /* 12e7c3d3 cmp dword ptr [0x12e8f6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c3da jne 0x12e7c40a */
  if (!C.zf) goto L_12e7c40a;
  /* 12e7c3dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7c3df and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7c3e4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c3e9 jle 0x12e7c3fb */
  if ((C.zf||C.sf!=C.of)) goto L_12e7c3fb;
  /* 12e7c3eb call 0x12e7b320 */
  push32(0x12e7c3f0u); f_12e7b320();
  /* 12e7c3f0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12e7c3f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7c3f9 jmp 0x12e7c45c */
  goto L_12e7c45c;
L_12e7c3fb:;
  /* 12e7c3fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c3fe mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12e7c401 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12e7c403 mov eax, 1 */
  EAX = (0x1u);
  /* 12e7c408 jmp 0x12e7c45c */
  goto L_12e7c45c;
L_12e7c40a:;
  /* 12e7c40a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e7c411 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12e7c414 push eax */
  push32((uint32_t)(EAX));
  /* 12e7c415 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7c417 mov ecx, dword ptr [0x12e8dec4] */
  ECX = (r32((uint32_t)(0x12e8dec4)));
  /* 12e7c41d push ecx */
  push32((uint32_t)(ECX));
  /* 12e7c41e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c421 push edx */
  push32((uint32_t)(EDX));
  /* 12e7c422 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7c424 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12e7c427 push eax */
  push32((uint32_t)(EAX));
  /* 12e7c428 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e7c42d mov ecx, dword ptr [0x12e8f6e0] */
  ECX = (r32((uint32_t)(0x12e8f6e0)));
  /* 12e7c433 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7c434 call dword ptr [0x12e92380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92380))), 0x12e7c43au);
  /* 12e7c43a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7c43d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c441 je 0x12e7c449 */
  if (C.zf) goto L_12e7c449;
  /* 12e7c443 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c447 je 0x12e7c459 */
  if (C.zf) goto L_12e7c459;
L_12e7c449:;
  /* 12e7c449 call 0x12e7b320 */
  push32(0x12e7c44eu); f_12e7b320();
  /* 12e7c44e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12e7c454 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7c457 jmp 0x12e7c45c */
  goto L_12e7c45c;
L_12e7c459:;
  /* 12e7c459 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e7c45c:;
  /* 12e7c45c mov esp, ebp */
  ESP = (EBP);
  /* 12e7c45e pop ebp */
  EBP = (pop32());
  /* 12e7c45f ret  */
  ESPCHK(0x12e7c3c0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12e7c460 (32 bytes, 18 insns) */
void f_12e7c460(void) {
  FTRACE(0x12e7c460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7c460 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7c461 mov ebp, esp */
  EBP = (ESP);
  /* 12e7c463 push ebx */
  push32((uint32_t)(EBX));
  /* 12e7c464 push esi */
  push32((uint32_t)(ESI));
  /* 12e7c465 push edi */
  push32((uint32_t)(EDI));
  /* 12e7c466 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7c467 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7c469 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7c46b push 0x12e7c478 */
  push32((uint32_t)(0x12e7c478u));
  /* 12e7c470 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12e7c473 call 0x12e83bac */
  push32(0x12e7c478u); f_12e83bac();
  /* 12e7c478 pop ebp */
  EBP = (pop32());
  /* 12e7c479 pop edi */
  EDI = (pop32());
  /* 12e7c47a pop esi */
  ESI = (pop32());
  /* 12e7c47b pop ebx */
  EBX = (pop32());
  /* 12e7c47c mov esp, ebp */
  ESP = (EBP);
  /* 12e7c47e pop ebp */
  EBP = (pop32());
  /* 12e7c47f ret  */
  ESPCHK(0x12e7c460u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12e7c4a2 (104 bytes, 33 insns) */
void f_12e7c4a2(void) {
  FTRACE(0x12e7c4a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7c4a2 push ebx */
  push32((uint32_t)(EBX));
  /* 12e7c4a3 push esi */
  push32((uint32_t)(ESI));
  /* 12e7c4a4 push edi */
  push32((uint32_t)(EDI));
  /* 12e7c4a5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12e7c4a9 push eax */
  push32((uint32_t)(EAX));
  /* 12e7c4aa push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 12e7c4ac push 0x12e7c480 */
  push32((uint32_t)(0x12e7c480u));
  /* 12e7c4b1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12e7c4b8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_12e7c4bf:;
  /* 12e7c4bf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12e7c4c3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e7c4c6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12e7c4c9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c4cc je 0x12e7c4fc */
  if (C.zf) goto L_12e7c4fc;
  /* 12e7c4ce cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c4d2 je 0x12e7c4fc */
  if (C.zf) goto L_12e7c4fc;
  /* 12e7c4d4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12e7c4d7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 12e7c4da mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12e7c4de mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12e7c4e1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c4e6 jne 0x12e7c4fa */
  if (!C.zf) goto L_12e7c4fa;
  /* 12e7c4e8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12e7c4ed mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12e7c4f1 call 0x12e7c536 */
  push32(0x12e7c4f6u); f_12e7c536();
  /* 12e7c4f6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x12e7c4fau);
L_12e7c4fa:;
  /* 12e7c4fa jmp 0x12e7c4bf */
  goto L_12e7c4bf;
L_12e7c4fc:;
  /* 12e7c4fc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12e7c503 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c506 pop edi */
  EDI = (pop32());
  /* 12e7c507 pop esi */
  ESI = (pop32());
  /* 12e7c508 pop ebx */
  EBX = (pop32());
  /* 12e7c509 ret  */
  ESPCHK(0x12e7c4a2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c536 @ 0x12e7c536 (24 bytes, 10 insns) */
void f_12e7c536(void) {
  FTRACE(0x12e7c536u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7c536 push ebx */
  push32((uint32_t)(EBX));
  /* 12e7c537 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7c538 mov ebx, 0x12e8e3d8 */
  EBX = (0x12e8e3d8u);
  /* 12e7c53d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c540 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12e7c543 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12e7c546 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12e7c549 pop ecx */
  ECX = (pop32());
  /* 12e7c54a pop ebx */
  EBX = (pop32());
  /* 12e7c54b ret 4 */
  ESPCHK(0x12e7c536u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c615 @ 0x12e7c615 (27 bytes, 11 insns) */
void f_12e7c615(void) {
  FTRACE(0x12e7c615u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7c615 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7c616 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e7c61a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 12e7c61c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12e7c61f push eax */
  push32((uint32_t)(EAX));
  /* 12e7c620 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e7c623 push eax */
  push32((uint32_t)(EAX));
  /* 12e7c624 call 0x12e7c4a2 */
  push32(0x12e7c629u); f_12e7c4a2();
  /* 12e7c629 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c62c pop ebp */
  EBP = (pop32());
  /* 12e7c62d ret 4 */
  ESPCHK(0x12e7c615u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c630 @ 0x12e7c630 (482 bytes, 138 insns) */
void f_12e7c630(void) {
  FTRACE(0x12e7c630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7c630 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7c631 mov ebp, esp */
  EBP = (ESP);
  /* 12e7c633 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7c636 push esi */
  push32((uint32_t)(ESI));
  /* 12e7c637 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 12e7c63e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12e7c640 call 0x12e76e50 */
  push32(0x12e7c645u); f_12e76e50();
  /* 12e7c645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c648 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e7c64f jmp 0x12e7c65a */
  goto L_12e7c65a;
L_12e7c651:;
  /* 12e7c651 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7c654 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c657 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12e7c65a:;
  /* 12e7c65a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c65e jge 0x12e7c800 */
  if ((C.sf==C.of)) goto L_12e7c800;
  /* 12e7c664 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7c667 cmp dword ptr [ecx*4 + 0x12e90ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12e90ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c66f je 0x12e7c766 */
  if (C.zf) goto L_12e7c766;
  /* 12e7c675 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7c678 mov eax, dword ptr [edx*4 + 0x12e90ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e90ea0)));
  /* 12e7c67f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7c682 jmp 0x12e7c68d */
  goto L_12e7c68d;
L_12e7c684:;
  /* 12e7c684 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c687 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c68a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e7c68d:;
  /* 12e7c68d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7c690 mov eax, dword ptr [edx*4 + 0x12e90ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e90ea0)));
  /* 12e7c697 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c69c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c69f jae 0x12e7c756 */
  if (!C.cf) goto L_12e7c756;
  /* 12e7c6a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c6a8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e7c6ac and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7c6af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7c6b1 jne 0x12e7c751 */
  if (!C.zf) goto L_12e7c751;
  /* 12e7c6b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c6ba cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c6be jne 0x12e7c6f9 */
  if (!C.zf) goto L_12e7c6f9;
  /* 12e7c6c0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12e7c6c2 call 0x12e76e50 */
  push32(0x12e7c6c7u); f_12e76e50();
  /* 12e7c6c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c6ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c6cd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c6d1 jne 0x12e7c6ef */
  if (!C.zf) goto L_12e7c6ef;
  /* 12e7c6d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c6d6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c6d9 push edx */
  push32((uint32_t)(EDX));
  /* 12e7c6da call dword ptr [0x12e9239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9239c))), 0x12e7c6e0u);
  /* 12e7c6e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c6e3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e7c6e6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c6e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c6ec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12e7c6ef:;
  /* 12e7c6ef push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12e7c6f1 call 0x12e76ef0 */
  push32(0x12e7c6f6u); f_12e76ef0();
  /* 12e7c6f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7c6f9:;
  /* 12e7c6f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c6fc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c6ff push eax */
  push32((uint32_t)(EAX));
  /* 12e7c700 call dword ptr [0x12e923a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e923a0))), 0x12e7c706u);
  /* 12e7c706 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c709 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e7c70d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7c710 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7c712 je 0x12e7c726 */
  if (C.zf) goto L_12e7c726;
  /* 12e7c714 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c717 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c71a push eax */
  push32((uint32_t)(EAX));
  /* 12e7c71b call dword ptr [0x12e92350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92350))), 0x12e7c721u);
  /* 12e7c721 jmp 0x12e7c684 */
  goto L_12e7c684;
L_12e7c726:;
  /* 12e7c726 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c729 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12e7c72f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7c732 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e7c735 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7c738 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c73b sub eax, dword ptr [edx*4 + 0x12e90ea0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12e90ea0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7c742 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e7c743 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12e7c748 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e7c74a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c74c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7c74f jmp 0x12e7c756 */
  goto L_12e7c756;
L_12e7c751:;
  /* 12e7c751 jmp 0x12e7c684 */
  goto L_12e7c684;
L_12e7c756:;
  /* 12e7c756 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c75a je 0x12e7c761 */
  if (C.zf) goto L_12e7c761;
  /* 12e7c75c jmp 0x12e7c800 */
  goto L_12e7c800;
L_12e7c761:;
  /* 12e7c761 jmp 0x12e7c7fb */
  goto L_12e7c7fb;
L_12e7c766:;
  /* 12e7c766 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12e7c768 push 0x12e8b034 */
  push32((uint32_t)(0x12e8b034u));
  /* 12e7c76d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7c76f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12e7c774 call 0x12e73450 */
  push32(0x12e7c779u); f_12e73450();
  /* 12e7c779 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c77c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7c77f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c783 je 0x12e7c7f9 */
  if (C.zf) goto L_12e7c7f9;
  /* 12e7c785 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7c788 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c78b mov dword ptr [eax*4 + 0x12e90ea0], ecx */
  w32((uint32_t)(EAX*4 + 0x12e90ea0), (ECX));
  /* 12e7c792 mov edx, dword ptr [0x12e90fdc] */
  EDX = (r32((uint32_t)(0x12e90fdc)));
  /* 12e7c798 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c79b mov dword ptr [0x12e90fdc], edx */
  w32((uint32_t)(0x12e90fdc), (EDX));
  /* 12e7c7a1 jmp 0x12e7c7ac */
  goto L_12e7c7ac;
L_12e7c7a3:;
  /* 12e7c7a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c7a6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c7a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e7c7ac:;
  /* 12e7c7ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7c7af mov edx, dword ptr [ecx*4 + 0x12e90ea0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e90ea0)));
  /* 12e7c7b6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c7bc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c7bf jae 0x12e7c7e4 */
  if (!C.cf) goto L_12e7c7e4;
  /* 12e7c7c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c7c4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12e7c7c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c7cb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12e7c7d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c7d4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12e7c7d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7c7db mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12e7c7e2 jmp 0x12e7c7a3 */
  goto L_12e7c7a3;
L_12e7c7e4:;
  /* 12e7c7e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7c7e7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e7c7ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7c7ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7c7f0 push edx */
  push32((uint32_t)(EDX));
  /* 12e7c7f1 call 0x12e7cb40 */
  push32(0x12e7c7f6u); f_12e7cb40();
  /* 12e7c7f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7c7f9:;
  /* 12e7c7f9 jmp 0x12e7c800 */
  goto L_12e7c800;
L_12e7c7fb:;
  /* 12e7c7fb jmp 0x12e7c651 */
  goto L_12e7c651;
L_12e7c800:;
  /* 12e7c800 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12e7c802 call 0x12e76ef0 */
  push32(0x12e7c807u); f_12e76ef0();
  /* 12e7c807 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7c80a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7c80d pop esi */
  ESI = (pop32());
  /* 12e7c80e mov esp, ebp */
  ESP = (EBP);
  /* 12e7c810 pop ebp */
  EBP = (pop32());
  /* 12e7c811 ret  */
  ESPCHK(0x12e7c630u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12e7c820 (183 bytes, 57 insns) */
void f_12e7c820(void) {
  FTRACE(0x12e7c820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7c820 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7c821 mov ebp, esp */
  EBP = (ESP);
  /* 12e7c823 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7c824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c827 cmp eax, dword ptr [0x12e90fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e90fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c82d jae 0x12e7c8ba */
  if (!C.cf) goto L_12e7c8ba;
  /* 12e7c833 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c836 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e7c839 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c83c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7c83f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7c842 mov eax, dword ptr [ecx*4 + 0x12e90ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e90ea0)));
  /* 12e7c849 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c84d jne 0x12e7c8ba */
  if (!C.zf) goto L_12e7c8ba;
  /* 12e7c84f cmp dword ptr [0x12e8f4c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c856 jne 0x12e7c89a */
  if (!C.zf) goto L_12e7c89a;
  /* 12e7c858 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c85b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e7c85e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c862 je 0x12e7c872 */
  if (C.zf) goto L_12e7c872;
  /* 12e7c864 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c868 je 0x12e7c880 */
  if (C.zf) goto L_12e7c880;
  /* 12e7c86a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c86e je 0x12e7c88e */
  if (C.zf) goto L_12e7c88e;
  /* 12e7c870 jmp 0x12e7c89a */
  goto L_12e7c89a;
L_12e7c872:;
  /* 12e7c872 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7c875 push edx */
  push32((uint32_t)(EDX));
  /* 12e7c876 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12e7c878 call dword ptr [0x12e922c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922c4))), 0x12e7c87eu);
  /* 12e7c87e jmp 0x12e7c89a */
  goto L_12e7c89a;
L_12e7c880:;
  /* 12e7c880 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7c883 push eax */
  push32((uint32_t)(EAX));
  /* 12e7c884 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12e7c886 call dword ptr [0x12e922c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922c4))), 0x12e7c88cu);
  /* 12e7c88c jmp 0x12e7c89a */
  goto L_12e7c89a;
L_12e7c88e:;
  /* 12e7c88e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7c891 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7c892 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12e7c894 call dword ptr [0x12e922c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922c4))), 0x12e7c89au);
L_12e7c89a:;
  /* 12e7c89a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c89d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12e7c8a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c8a3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7c8a6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7c8a9 mov ecx, dword ptr [edx*4 + 0x12e90ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12e90ea0)));
  /* 12e7c8b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7c8b3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12e7c8b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7c8b8 jmp 0x12e7c8d3 */
  goto L_12e7c8d3;
L_12e7c8ba:;
  /* 12e7c8ba call 0x12e7b320 */
  push32(0x12e7c8bfu); f_12e7b320();
  /* 12e7c8bf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e7c8c5 call 0x12e7b330 */
  push32(0x12e7c8cau); f_12e7b330();
  /* 12e7c8ca mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e7c8d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12e7c8d3:;
  /* 12e7c8d3 mov esp, ebp */
  ESP = (EBP);
  /* 12e7c8d5 pop ebp */
  EBP = (pop32());
  /* 12e7c8d6 ret  */
  ESPCHK(0x12e7c820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8e0 @ 0x12e7c8e0 (216 bytes, 63 insns) */
void f_12e7c8e0(void) {
  FTRACE(0x12e7c8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7c8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7c8e1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7c8e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7c8e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c8e7 cmp eax, dword ptr [0x12e90fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e90fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c8ed jae 0x12e7c99b */
  if (!C.cf) goto L_12e7c99b;
  /* 12e7c8f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c8f6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e7c8f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c8fc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7c8ff imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7c902 mov eax, dword ptr [ecx*4 + 0x12e90ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e90ea0)));
  /* 12e7c909 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12e7c90e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7c911 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7c913 je 0x12e7c99b */
  if (C.zf) goto L_12e7c99b;
  /* 12e7c919 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c91c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12e7c91f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c922 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7c925 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7c928 mov ecx, dword ptr [edx*4 + 0x12e90ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12e90ea0)));
  /* 12e7c92f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c933 je 0x12e7c99b */
  if (C.zf) goto L_12e7c99b;
  /* 12e7c935 cmp dword ptr [0x12e8f4c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c93c jne 0x12e7c97a */
  if (!C.zf) goto L_12e7c97a;
  /* 12e7c93e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c941 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e7c944 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c948 je 0x12e7c958 */
  if (C.zf) goto L_12e7c958;
  /* 12e7c94a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c94e je 0x12e7c964 */
  if (C.zf) goto L_12e7c964;
  /* 12e7c950 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c954 je 0x12e7c970 */
  if (C.zf) goto L_12e7c970;
  /* 12e7c956 jmp 0x12e7c97a */
  goto L_12e7c97a;
L_12e7c958:;
  /* 12e7c958 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7c95a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12e7c95c call dword ptr [0x12e922c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922c4))), 0x12e7c962u);
  /* 12e7c962 jmp 0x12e7c97a */
  goto L_12e7c97a;
L_12e7c964:;
  /* 12e7c964 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7c966 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12e7c968 call dword ptr [0x12e922c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922c4))), 0x12e7c96eu);
  /* 12e7c96e jmp 0x12e7c97a */
  goto L_12e7c97a;
L_12e7c970:;
  /* 12e7c970 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7c972 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12e7c974 call dword ptr [0x12e922c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922c4))), 0x12e7c97au);
L_12e7c97a:;
  /* 12e7c97a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c97d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e7c980 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c983 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7c986 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7c989 mov edx, dword ptr [eax*4 + 0x12e90ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e90ea0)));
  /* 12e7c990 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 12e7c997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7c999 jmp 0x12e7c9b4 */
  goto L_12e7c9b4;
L_12e7c99b:;
  /* 12e7c99b call 0x12e7b320 */
  push32(0x12e7c9a0u); f_12e7b320();
  /* 12e7c9a0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e7c9a6 call 0x12e7b330 */
  push32(0x12e7c9abu); f_12e7b330();
  /* 12e7c9ab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e7c9b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12e7c9b4:;
  /* 12e7c9b4 mov esp, ebp */
  ESP = (EBP);
  /* 12e7c9b6 pop ebp */
  EBP = (pop32());
  /* 12e7c9b7 ret  */
  ESPCHK(0x12e7c8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9c0 @ 0x12e7c9c0 (102 bytes, 30 insns) */
void f_12e7c9c0(void) {
  FTRACE(0x12e7c9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7c9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7c9c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7c9c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c9c6 cmp eax, dword ptr [0x12e90fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e90fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7c9cc jae 0x12e7ca0b */
  if (!C.cf) goto L_12e7ca0b;
  /* 12e7c9ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c9d1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e7c9d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c9d7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7c9da imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7c9dd mov eax, dword ptr [ecx*4 + 0x12e90ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e90ea0)));
  /* 12e7c9e4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12e7c9e9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7c9ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7c9ee je 0x12e7ca0b */
  if (C.zf) goto L_12e7ca0b;
  /* 12e7c9f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c9f3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12e7c9f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7c9f9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7c9fc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7c9ff mov ecx, dword ptr [edx*4 + 0x12e90ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12e90ea0)));
  /* 12e7ca06 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12e7ca09 jmp 0x12e7ca24 */
  goto L_12e7ca24;
L_12e7ca0b:;
  /* 12e7ca0b call 0x12e7b320 */
  push32(0x12e7ca10u); f_12e7b320();
  /* 12e7ca10 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e7ca16 call 0x12e7b330 */
  push32(0x12e7ca1bu); f_12e7b330();
  /* 12e7ca1b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e7ca21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12e7ca24:;
  /* 12e7ca24 pop ebp */
  EBP = (pop32());
  /* 12e7ca25 ret  */
  ESPCHK(0x12e7c9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca30 @ 0x12e7ca30 (260 bytes, 83 insns) */
void f_12e7ca30(void) {
  FTRACE(0x12e7ca30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7ca30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7ca31 mov ebp, esp */
  EBP = (ESP);
  /* 12e7ca33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7ca36 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e7ca3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7ca3d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7ca40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7ca42 je 0x12e7ca4d */
  if (C.zf) goto L_12e7ca4d;
  /* 12e7ca44 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12e7ca47 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12e7ca4a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_12e7ca4d:;
  /* 12e7ca4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7ca50 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7ca56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7ca58 je 0x12e7ca62 */
  if (C.zf) goto L_12e7ca62;
  /* 12e7ca5a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12e7ca5d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 12e7ca5f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12e7ca62:;
  /* 12e7ca62 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7ca65 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ca6b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7ca6d je 0x12e7ca78 */
  if (C.zf) goto L_12e7ca78;
  /* 12e7ca6f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12e7ca72 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12e7ca75 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12e7ca78:;
  /* 12e7ca78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ca7b push eax */
  push32((uint32_t)(EAX));
  /* 12e7ca7c call dword ptr [0x12e92360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92360))), 0x12e7ca82u);
  /* 12e7ca82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7ca85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ca89 jne 0x12e7caa2 */
  if (!C.zf) goto L_12e7caa2;
  /* 12e7ca8b call dword ptr [0x12e92284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92284))), 0x12e7ca91u);
  /* 12e7ca91 push eax */
  push32((uint32_t)(EAX));
  /* 12e7ca92 call 0x12e7b280 */
  push32(0x12e7ca97u); f_12e7b280();
  /* 12e7ca97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ca9a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7ca9d jmp 0x12e7cb30 */
  goto L_12e7cb30;
L_12e7caa2:;
  /* 12e7caa2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7caa6 jne 0x12e7cab3 */
  if (!C.zf) goto L_12e7cab3;
  /* 12e7caa8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12e7caab or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12e7caae mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12e7cab1 jmp 0x12e7cac2 */
  goto L_12e7cac2;
L_12e7cab3:;
  /* 12e7cab3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cab7 jne 0x12e7cac2 */
  if (!C.zf) goto L_12e7cac2;
  /* 12e7cab9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12e7cabc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12e7cabf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12e7cac2:;
  /* 12e7cac2 call 0x12e7c630 */
  push32(0x12e7cac7u); f_12e7c630();
  /* 12e7cac7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e7caca cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cace jne 0x12e7caeb */
  if (!C.zf) goto L_12e7caeb;
  /* 12e7cad0 call 0x12e7b320 */
  push32(0x12e7cad5u); f_12e7b320();
  /* 12e7cad5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12e7cadb call 0x12e7b330 */
  push32(0x12e7cae0u); f_12e7b330();
  /* 12e7cae0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e7cae6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7cae9 jmp 0x12e7cb30 */
  goto L_12e7cb30;
L_12e7caeb:;
  /* 12e7caeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7caee push eax */
  push32((uint32_t)(EAX));
  /* 12e7caef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7caf2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7caf3 call 0x12e7c820 */
  push32(0x12e7caf8u); f_12e7c820();
  /* 12e7caf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cafb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12e7cafe or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12e7cb01 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12e7cb04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7cb07 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e7cb0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7cb0d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7cb10 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7cb13 mov edx, dword ptr [eax*4 + 0x12e90ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e90ea0)));
  /* 12e7cb1a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12e7cb1d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12e7cb21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7cb24 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7cb25 call 0x12e7cbd0 */
  push32(0x12e7cb2au); f_12e7cbd0();
  /* 12e7cb2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cb2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12e7cb30:;
  /* 12e7cb30 mov esp, ebp */
  ESP = (EBP);
  /* 12e7cb32 pop ebp */
  EBP = (pop32());
  /* 12e7cb33 ret  */
  ESPCHK(0x12e7ca30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb40 @ 0x12e7cb40 (134 bytes, 44 insns) */
void f_12e7cb40(void) {
  FTRACE(0x12e7cb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7cb40 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7cb41 mov ebp, esp */
  EBP = (ESP);
  /* 12e7cb43 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7cb44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7cb47 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e7cb4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7cb4d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7cb50 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7cb53 mov edx, dword ptr [eax*4 + 0x12e90ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e90ea0)));
  /* 12e7cb5a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cb5c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e7cb5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7cb62 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cb66 jne 0x12e7cba1 */
  if (!C.zf) goto L_12e7cba1;
  /* 12e7cb68 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12e7cb6a call 0x12e76e50 */
  push32(0x12e7cb6fu); f_12e76e50();
  /* 12e7cb6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cb72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7cb75 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cb79 jne 0x12e7cb97 */
  if (!C.zf) goto L_12e7cb97;
  /* 12e7cb7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7cb7e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cb81 push edx */
  push32((uint32_t)(EDX));
  /* 12e7cb82 call dword ptr [0x12e9239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9239c))), 0x12e7cb88u);
  /* 12e7cb88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7cb8b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e7cb8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cb91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7cb94 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12e7cb97:;
  /* 12e7cb97 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12e7cb99 call 0x12e76ef0 */
  push32(0x12e7cb9eu); f_12e76ef0();
  /* 12e7cb9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7cba1:;
  /* 12e7cba1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7cba4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e7cba7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7cbaa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7cbad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7cbb0 mov edx, dword ptr [eax*4 + 0x12e90ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e90ea0)));
  /* 12e7cbb7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12e7cbbb push eax */
  push32((uint32_t)(EAX));
  /* 12e7cbbc call dword ptr [0x12e923a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e923a0))), 0x12e7cbc2u);
  /* 12e7cbc2 mov esp, ebp */
  ESP = (EBP);
  /* 12e7cbc4 pop ebp */
  EBP = (pop32());
  /* 12e7cbc5 ret  */
  ESPCHK(0x12e7cb40u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12e7cbd0 (38 bytes, 13 insns) */
void f_12e7cbd0(void) {
  FTRACE(0x12e7cbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7cbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7cbd1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7cbd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7cbd6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e7cbd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7cbdc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7cbdf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7cbe2 mov edx, dword ptr [eax*4 + 0x12e90ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e90ea0)));
  /* 12e7cbe9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12e7cbed push eax */
  push32((uint32_t)(EAX));
  /* 12e7cbee call dword ptr [0x12e92350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92350))), 0x12e7cbf4u);
  /* 12e7cbf4 pop ebp */
  EBP = (pop32());
  /* 12e7cbf5 ret  */
  ESPCHK(0x12e7cbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc00 @ 0x12e7cc00 (218 bytes, 63 insns) */
void f_12e7cc00(void) {
  FTRACE(0x12e7cc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7cc00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7cc01 mov ebp, esp */
  EBP = (ESP);
  /* 12e7cc03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7cc06 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e7cc0d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7cc0f call 0x12e76e50 */
  push32(0x12e7cc14u); f_12e76e50();
  /* 12e7cc14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cc17 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12e7cc1e jmp 0x12e7cc29 */
  goto L_12e7cc29;
L_12e7cc20:;
  /* 12e7cc20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7cc23 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cc26 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e7cc29:;
  /* 12e7cc29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7cc2c cmp ecx, dword ptr [0x12e90ba0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e90ba0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cc32 jge 0x12e7ccc9 */
  if ((C.sf==C.of)) goto L_12e7ccc9;
  /* 12e7cc38 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7cc3b mov eax, dword ptr [0x12e8f860] */
  EAX = (r32((uint32_t)(0x12e8f860)));
  /* 12e7cc40 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cc44 je 0x12e7ccc4 */
  if (C.zf) goto L_12e7ccc4;
  /* 12e7cc46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7cc49 mov edx, dword ptr [0x12e8f860] */
  EDX = (r32((uint32_t)(0x12e8f860)));
  /* 12e7cc4f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12e7cc52 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e7cc55 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7cc5b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7cc5d je 0x12e7cc81 */
  if (C.zf) goto L_12e7cc81;
  /* 12e7cc5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7cc62 mov eax, dword ptr [0x12e8f860] */
  EAX = (r32((uint32_t)(0x12e8f860)));
  /* 12e7cc67 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12e7cc6a push ecx */
  push32((uint32_t)(ECX));
  /* 12e7cc6b call 0x12e7d9f0 */
  push32(0x12e7cc70u); f_12e7d9f0();
  /* 12e7cc70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cc73 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cc76 je 0x12e7cc81 */
  if (C.zf) goto L_12e7cc81;
  /* 12e7cc78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7cc7b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cc7e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e7cc81:;
  /* 12e7cc81 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cc85 jl 0x12e7ccc4 */
  if ((C.sf!=C.of)) goto L_12e7ccc4;
  /* 12e7cc87 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7cc8a mov ecx, dword ptr [0x12e8f860] */
  ECX = (r32((uint32_t)(0x12e8f860)));
  /* 12e7cc90 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12e7cc93 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cc96 push edx */
  push32((uint32_t)(EDX));
  /* 12e7cc97 call dword ptr [0x12e92368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92368))), 0x12e7cc9du);
  /* 12e7cc9d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7cc9f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7cca2 mov ecx, dword ptr [0x12e8f860] */
  ECX = (r32((uint32_t)(0x12e8f860)));
  /* 12e7cca8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12e7ccab push edx */
  push32((uint32_t)(EDX));
  /* 12e7ccac call 0x12e73ee0 */
  push32(0x12e7ccb1u); f_12e73ee0();
  /* 12e7ccb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ccb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7ccb7 mov ecx, dword ptr [0x12e8f860] */
  ECX = (r32((uint32_t)(0x12e8f860)));
  /* 12e7ccbd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12e7ccc4:;
  /* 12e7ccc4 jmp 0x12e7cc20 */
  goto L_12e7cc20;
L_12e7ccc9:;
  /* 12e7ccc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7cccb call 0x12e76ef0 */
  push32(0x12e7ccd0u); f_12e76ef0();
  /* 12e7ccd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ccd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ccd6 mov esp, ebp */
  ESP = (EBP);
  /* 12e7ccd8 pop ebp */
  EBP = (pop32());
  /* 12e7ccd9 ret  */
  ESPCHK(0x12e7cc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cce0 @ 0x12e7cce0 (68 bytes, 26 insns) */
void f_12e7cce0(void) {
  FTRACE(0x12e7cce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7cce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7cce1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7cce3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7cce4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cce8 jne 0x12e7ccf6 */
  if (!C.zf) goto L_12e7ccf6;
  /* 12e7ccea push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7ccec call 0x12e7ce50 */
  push32(0x12e7ccf1u); f_12e7ce50();
  /* 12e7ccf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ccf4 jmp 0x12e7cd20 */
  goto L_12e7cd20;
L_12e7ccf6:;
  /* 12e7ccf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ccf9 push eax */
  push32((uint32_t)(EAX));
  /* 12e7ccfa call 0x12e7c260 */
  push32(0x12e7ccffu); f_12e7c260();
  /* 12e7ccff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cd02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7cd05 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7cd06 call 0x12e7cd30 */
  push32(0x12e7cd0bu); f_12e7cd30();
  /* 12e7cd0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cd0e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7cd11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7cd14 push edx */
  push32((uint32_t)(EDX));
  /* 12e7cd15 call 0x12e7c2d0 */
  push32(0x12e7cd1au); f_12e7c2d0();
  /* 12e7cd1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cd1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e7cd20:;
  /* 12e7cd20 mov esp, ebp */
  ESP = (EBP);
  /* 12e7cd22 pop ebp */
  EBP = (pop32());
  /* 12e7cd23 ret  */
  ESPCHK(0x12e7cce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd30 @ 0x12e7cd30 (65 bytes, 26 insns) */
void f_12e7cd30(void) {
  FTRACE(0x12e7cd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7cd30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7cd31 mov ebp, esp */
  EBP = (ESP);
  /* 12e7cd33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7cd36 push eax */
  push32((uint32_t)(EAX));
  /* 12e7cd37 call 0x12e7cd80 */
  push32(0x12e7cd3cu); f_12e7cd80();
  /* 12e7cd3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cd3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7cd41 je 0x12e7cd48 */
  if (C.zf) goto L_12e7cd48;
  /* 12e7cd43 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7cd46 jmp 0x12e7cd6f */
  goto L_12e7cd6f;
L_12e7cd48:;
  /* 12e7cd48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7cd4b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e7cd4e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7cd54 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7cd56 je 0x12e7cd6d */
  if (C.zf) goto L_12e7cd6d;
  /* 12e7cd58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7cd5b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e7cd5e push ecx */
  push32((uint32_t)(ECX));
  /* 12e7cd5f call 0x12e7db40 */
  push32(0x12e7cd64u); f_12e7db40();
  /* 12e7cd64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cd67 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7cd69 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7cd6b jmp 0x12e7cd6f */
  goto L_12e7cd6f;
L_12e7cd6d:;
  /* 12e7cd6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e7cd6f:;
  /* 12e7cd6f pop ebp */
  EBP = (pop32());
  /* 12e7cd70 ret  */
  ESPCHK(0x12e7cd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd80 @ 0x12e7cd80 (183 bytes, 62 insns) */
void f_12e7cd80(void) {
  FTRACE(0x12e7cd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7cd80 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7cd81 mov ebp, esp */
  EBP = (ESP);
  /* 12e7cd83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7cd86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e7cd8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7cd90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e7cd93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7cd96 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e7cd99 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7cd9c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cd9f jne 0x12e7ce1b */
  if (!C.zf) goto L_12e7ce1b;
  /* 12e7cda1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7cda4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e7cda7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7cdad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7cdaf je 0x12e7ce1b */
  if (C.zf) goto L_12e7ce1b;
  /* 12e7cdb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7cdb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7cdb7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12e7cdb9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7cdbc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7cdbf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cdc3 jle 0x12e7ce1b */
  if ((C.zf||C.sf!=C.of)) goto L_12e7ce1b;
  /* 12e7cdc5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7cdc8 push edx */
  push32((uint32_t)(EDX));
  /* 12e7cdc9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7cdcc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e7cdcf push ecx */
  push32((uint32_t)(ECX));
  /* 12e7cdd0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7cdd3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e7cdd6 push eax */
  push32((uint32_t)(EAX));
  /* 12e7cdd7 call 0x12e7bcf0 */
  push32(0x12e7cddcu); f_12e7bcf0();
  /* 12e7cddc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cddf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cde2 jne 0x12e7ce05 */
  if (!C.zf) goto L_12e7ce05;
  /* 12e7cde4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7cde7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e7cdea and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7cdf0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7cdf2 je 0x12e7ce03 */
  if (C.zf) goto L_12e7ce03;
  /* 12e7cdf4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7cdf7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e7cdfa and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7cdfd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7ce00 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12e7ce03:;
  /* 12e7ce03 jmp 0x12e7ce1b */
  goto L_12e7ce1b;
L_12e7ce05:;
  /* 12e7ce05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7ce08 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e7ce0b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ce0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7ce11 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12e7ce14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e7ce1b:;
  /* 12e7ce1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7ce1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7ce21 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e7ce24 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e7ce26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7ce29 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12e7ce30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ce33 mov esp, ebp */
  ESP = (EBP);
  /* 12e7ce35 pop ebp */
  EBP = (pop32());
  /* 12e7ce36 ret  */
  ESPCHK(0x12e7cd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce40 @ 0x12e7ce40 (15 bytes, 7 insns) */
void f_12e7ce40(void) {
  FTRACE(0x12e7ce40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7ce40 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7ce41 mov ebp, esp */
  EBP = (ESP);
  /* 12e7ce43 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7ce45 call 0x12e7ce50 */
  push32(0x12e7ce4au); f_12e7ce50();
  /* 12e7ce4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ce4d pop ebp */
  EBP = (pop32());
  /* 12e7ce4e ret  */
  ESPCHK(0x12e7ce40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce50 @ 0x12e7ce50 (319 bytes, 94 insns) */
void f_12e7ce50(void) {
  FTRACE(0x12e7ce50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7ce50 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7ce51 mov ebp, esp */
  EBP = (ESP);
  /* 12e7ce53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7ce56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e7ce5d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e7ce64 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7ce66 call 0x12e76e50 */
  push32(0x12e7ce6bu); f_12e76e50();
  /* 12e7ce6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ce6e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e7ce75 jmp 0x12e7ce80 */
  goto L_12e7ce80;
L_12e7ce77:;
  /* 12e7ce77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7ce7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ce7d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12e7ce80:;
  /* 12e7ce80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7ce83 cmp ecx, dword ptr [0x12e90ba0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e90ba0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ce89 jge 0x12e7cf73 */
  if ((C.sf==C.of)) goto L_12e7cf73;
  /* 12e7ce8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7ce92 mov eax, dword ptr [0x12e8f860] */
  EAX = (r32((uint32_t)(0x12e8f860)));
  /* 12e7ce97 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ce9b je 0x12e7cf6e */
  if (C.zf) goto L_12e7cf6e;
  /* 12e7cea1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7cea4 mov edx, dword ptr [0x12e8f860] */
  EDX = (r32((uint32_t)(0x12e8f860)));
  /* 12e7ceaa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12e7cead mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e7ceb0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ceb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7ceb8 je 0x12e7cf6e */
  if (C.zf) goto L_12e7cf6e;
  /* 12e7cebe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7cec1 mov eax, dword ptr [0x12e8f860] */
  EAX = (r32((uint32_t)(0x12e8f860)));
  /* 12e7cec6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12e7cec9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7ceca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7cecd push edx */
  push32((uint32_t)(EDX));
  /* 12e7cece call 0x12e7c2a0 */
  push32(0x12e7ced3u); f_12e7c2a0();
  /* 12e7ced3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ced6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7ced9 mov ecx, dword ptr [0x12e8f860] */
  ECX = (r32((uint32_t)(0x12e8f860)));
  /* 12e7cedf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12e7cee2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12e7cee5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7ceea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7ceec je 0x12e7cf55 */
  if (C.zf) goto L_12e7cf55;
  /* 12e7ceee cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cef2 jne 0x12e7cf19 */
  if (!C.zf) goto L_12e7cf19;
  /* 12e7cef4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7cef7 mov edx, dword ptr [0x12e8f860] */
  EDX = (r32((uint32_t)(0x12e8f860)));
  /* 12e7cefd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12e7cf00 push eax */
  push32((uint32_t)(EAX));
  /* 12e7cf01 call 0x12e7cd30 */
  push32(0x12e7cf06u); f_12e7cd30();
  /* 12e7cf06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cf09 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cf0c je 0x12e7cf17 */
  if (C.zf) goto L_12e7cf17;
  /* 12e7cf0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7cf11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cf14 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e7cf17:;
  /* 12e7cf17 jmp 0x12e7cf55 */
  goto L_12e7cf55;
L_12e7cf19:;
  /* 12e7cf19 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cf1d jne 0x12e7cf55 */
  if (!C.zf) goto L_12e7cf55;
  /* 12e7cf1f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7cf22 mov eax, dword ptr [0x12e8f860] */
  EAX = (r32((uint32_t)(0x12e8f860)));
  /* 12e7cf27 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12e7cf2a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e7cf2d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7cf30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7cf32 je 0x12e7cf55 */
  if (C.zf) goto L_12e7cf55;
  /* 12e7cf34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7cf37 mov ecx, dword ptr [0x12e8f860] */
  ECX = (r32((uint32_t)(0x12e8f860)));
  /* 12e7cf3d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12e7cf40 push edx */
  push32((uint32_t)(EDX));
  /* 12e7cf41 call 0x12e7cd30 */
  push32(0x12e7cf46u); f_12e7cd30();
  /* 12e7cf46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cf49 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cf4c jne 0x12e7cf55 */
  if (!C.zf) goto L_12e7cf55;
  /* 12e7cf4e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12e7cf55:;
  /* 12e7cf55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7cf58 mov ecx, dword ptr [0x12e8f860] */
  ECX = (r32((uint32_t)(0x12e8f860)));
  /* 12e7cf5e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12e7cf61 push edx */
  push32((uint32_t)(EDX));
  /* 12e7cf62 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7cf65 push eax */
  push32((uint32_t)(EAX));
  /* 12e7cf66 call 0x12e7c310 */
  push32(0x12e7cf6bu); f_12e7c310();
  /* 12e7cf6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7cf6e:;
  /* 12e7cf6e jmp 0x12e7ce77 */
  goto L_12e7ce77;
L_12e7cf73:;
  /* 12e7cf73 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7cf75 call 0x12e76ef0 */
  push32(0x12e7cf7au); f_12e76ef0();
  /* 12e7cf7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cf7d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cf81 jne 0x12e7cf88 */
  if (!C.zf) goto L_12e7cf88;
  /* 12e7cf83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7cf86 jmp 0x12e7cf8b */
  goto L_12e7cf8b;
L_12e7cf88:;
  /* 12e7cf88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12e7cf8b:;
  /* 12e7cf8b mov esp, ebp */
  ESP = (EBP);
  /* 12e7cf8d pop ebp */
  EBP = (pop32());
  /* 12e7cf8e ret  */
  ESPCHK(0x12e7ce50u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12e7cf90 (15 bytes, 7 insns) */
void f_12e7cf90(void) {
  FTRACE(0x12e7cf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7cf90 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7cf91 mov ebp, esp */
  EBP = (ESP);
  /* 12e7cf93 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7cf95 call 0x12e723c0 */
  push32(0x12e7cf9au); f_12e723c0();
  /* 12e7cf9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cf9d pop ebp */
  EBP = (pop32());
  /* 12e7cf9e ret  */
  ESPCHK(0x12e7cf90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfa0 @ 0x12e7cfa0 (1007 bytes, 269 insns) */
void f_12e7cfa0(void) {
  FTRACE(0x12e7cfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7cfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7cfa1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7cfa3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7cfa9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cfad jl 0x12e7cfb5 */
  if ((C.sf!=C.of)) goto L_12e7cfb5;
  /* 12e7cfaf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cfb3 jle 0x12e7cfbc */
  if ((C.zf||C.sf!=C.of)) goto L_12e7cfbc;
L_12e7cfb5:;
  /* 12e7cfb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7cfb7 jmp 0x12e7d38b */
  goto L_12e7d38b;
L_12e7cfbc:;
  /* 12e7cfbc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e7cfbe call 0x12e76e50 */
  push32(0x12e7cfc3u); f_12e76e50();
  /* 12e7cfc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cfc6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e7cfcd mov eax, dword ptr [0x12e8f84c] */
  EAX = (r32((uint32_t)(0x12e8f84c)));
  /* 12e7cfd2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7cfd5 mov dword ptr [0x12e8f84c], eax */
  w32((uint32_t)(0x12e8f84c), (EAX));
L_12e7cfda:;
  /* 12e7cfda cmp dword ptr [0x12e8f85c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f85c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cfe1 je 0x12e7cfed */
  if (C.zf) goto L_12e7cfed;
  /* 12e7cfe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7cfe5 call dword ptr [0x12e922c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922c0))), 0x12e7cfebu);
  /* 12e7cfeb jmp 0x12e7cfda */
  goto L_12e7cfda;
L_12e7cfed:;
  /* 12e7cfed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cff1 je 0x12e7d031 */
  if (C.zf) goto L_12e7d031;
  /* 12e7cff3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7cff7 je 0x12e7d011 */
  if (C.zf) goto L_12e7d011;
  /* 12e7cff9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7cffc push ecx */
  push32((uint32_t)(ECX));
  /* 12e7cffd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d000 push edx */
  push32((uint32_t)(EDX));
  /* 12e7d001 call 0x12e7d390 */
  push32(0x12e7d006u); f_12e7d390();
  /* 12e7d006 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d009 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12e7d00f jmp 0x12e7d023 */
  goto L_12e7d023;
L_12e7d011:;
  /* 12e7d011 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d014 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7d017 mov ecx, dword ptr [eax + 0x12e8e4fc] */
  ECX = (r32((uint32_t)(EAX + 0x12e8e4fc)));
  /* 12e7d01d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12e7d023:;
  /* 12e7d023 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12e7d029 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e7d02c jmp 0x12e7d36b */
  goto L_12e7d36b;
L_12e7d031:;
  /* 12e7d031 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12e7d038 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e7d03f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d043 je 0x12e7d363 */
  if (C.zf) goto L_12e7d363;
  /* 12e7d049 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d04c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e7d04f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d052 jne 0x12e7d274 */
  if (!C.zf) goto L_12e7d274;
  /* 12e7d058 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d05b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12e7d05f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d062 jne 0x12e7d274 */
  if (!C.zf) goto L_12e7d274;
  /* 12e7d068 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d06b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 12e7d06f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d072 jne 0x12e7d274 */
  if (!C.zf) goto L_12e7d274;
  /* 12e7d078 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d07b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12e7d081:;
  /* 12e7d081 push 0x12e8b084 */
  push32((uint32_t)(0x12e8b084u));
  /* 12e7d086 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e7d08c push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d08d call 0x12e7f1f0 */
  push32(0x12e7d092u); f_12e7f1f0();
  /* 12e7d092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d095 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 12e7d09b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d0a2 je 0x12e7d0cd */
  if (C.zf) goto L_12e7d0cd;
  /* 12e7d0a4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e7d0aa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7d0b0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12e7d0b6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d0bd je 0x12e7d0cd */
  if (C.zf) goto L_12e7d0cd;
  /* 12e7d0bf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e7d0c5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e7d0c8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d0cb jne 0x12e7d0f3 */
  if (!C.zf) goto L_12e7d0f3;
L_12e7d0cd:;
  /* 12e7d0cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d0d1 je 0x12e7d0ec */
  if (C.zf) goto L_12e7d0ec;
  /* 12e7d0d3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e7d0d5 call 0x12e76ef0 */
  push32(0x12e7d0dau); f_12e76ef0();
  /* 12e7d0da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d0dd mov edx, dword ptr [0x12e8f84c] */
  EDX = (r32((uint32_t)(0x12e8f84c)));
  /* 12e7d0e3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7d0e6 mov dword ptr [0x12e8f84c], edx */
  w32((uint32_t)(0x12e8f84c), (EDX));
L_12e7d0ec:;
  /* 12e7d0ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7d0ee jmp 0x12e7d38b */
  goto L_12e7d38b;
L_12e7d0f3:;
  /* 12e7d0f3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12e7d0fa jmp 0x12e7d105 */
  goto L_12e7d105;
L_12e7d0fc:;
  /* 12e7d0fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7d0ff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d102 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12e7d105:;
  /* 12e7d105 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d109 jg 0x12e7d153 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e7d153;
  /* 12e7d10b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12e7d111 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d112 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e7d118 push edx */
  push32((uint32_t)(EDX));
  /* 12e7d119 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7d11c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7d11f mov ecx, dword ptr [eax + 0x12e8e4f8] */
  ECX = (r32((uint32_t)(EAX + 0x12e8e4f8)));
  /* 12e7d125 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d126 call 0x12e7f1b0 */
  push32(0x12e7d12bu); f_12e7f1b0();
  /* 12e7d12b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d12e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7d130 jne 0x12e7d151 */
  if (!C.zf) goto L_12e7d151;
  /* 12e7d132 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7d135 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7d138 mov eax, dword ptr [edx + 0x12e8e4f8] */
  EAX = (r32((uint32_t)(EDX + 0x12e8e4f8)));
  /* 12e7d13e push eax */
  push32((uint32_t)(EAX));
  /* 12e7d13f call 0x12e76280 */
  push32(0x12e7d144u); f_12e76280();
  /* 12e7d144 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d147 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d14d jne 0x12e7d151 */
  if (!C.zf) goto L_12e7d151;
  /* 12e7d14f jmp 0x12e7d153 */
  goto L_12e7d153;
L_12e7d151:;
  /* 12e7d151 jmp 0x12e7d0fc */
  goto L_12e7d0fc;
L_12e7d153:;
  /* 12e7d153 push 0x12e8b080 */
  push32((uint32_t)(0x12e8b080u));
  /* 12e7d158 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e7d15e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d161 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12e7d167 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e7d16d push edx */
  push32((uint32_t)(EDX));
  /* 12e7d16e call 0x12e7f170 */
  push32(0x12e7d173u); f_12e7f170();
  /* 12e7d173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d176 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 12e7d17c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d183 jne 0x12e7d1b9 */
  if (!C.zf) goto L_12e7d1b9;
  /* 12e7d185 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e7d18b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e7d18e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d191 je 0x12e7d1b9 */
  if (C.zf) goto L_12e7d1b9;
  /* 12e7d193 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d197 je 0x12e7d1b2 */
  if (C.zf) goto L_12e7d1b2;
  /* 12e7d199 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e7d19b call 0x12e76ef0 */
  push32(0x12e7d1a0u); f_12e76ef0();
  /* 12e7d1a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d1a3 mov edx, dword ptr [0x12e8f84c] */
  EDX = (r32((uint32_t)(0x12e8f84c)));
  /* 12e7d1a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7d1ac mov dword ptr [0x12e8f84c], edx */
  w32((uint32_t)(0x12e8f84c), (EDX));
L_12e7d1b2:;
  /* 12e7d1b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7d1b4 jmp 0x12e7d38b */
  goto L_12e7d38b;
L_12e7d1b9:;
  /* 12e7d1b9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d1bd jg 0x12e7d20a */
  if ((!C.zf&&C.sf==C.of)) goto L_12e7d20a;
  /* 12e7d1bf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12e7d1c5 push eax */
  push32((uint32_t)(EAX));
  /* 12e7d1c6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e7d1cc push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d1cd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12e7d1d3 push edx */
  push32((uint32_t)(EDX));
  /* 12e7d1d4 call 0x12e76c70 */
  push32(0x12e7d1d9u); f_12e76c70();
  /* 12e7d1d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d1dc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12e7d1e2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 12e7d1ea lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12e7d1f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d1f1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7d1f4 push edx */
  push32((uint32_t)(EDX));
  /* 12e7d1f5 call 0x12e7d390 */
  push32(0x12e7d1fau); f_12e7d390();
  /* 12e7d1fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d1fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7d1ff je 0x12e7d20a */
  if (C.zf) goto L_12e7d20a;
  /* 12e7d201 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7d204 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d207 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12e7d20a:;
  /* 12e7d20a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e7d210 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d216 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12e7d21c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e7d222 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e7d225 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7d227 je 0x12e7d238 */
  if (C.zf) goto L_12e7d238;
  /* 12e7d229 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e7d22f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d232 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12e7d238:;
  /* 12e7d238 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e7d23e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e7d241 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7d243 jne 0x12e7d081 */
  if (!C.zf) goto L_12e7d081;
  /* 12e7d249 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d24d je 0x12e7d25c */
  if (C.zf) goto L_12e7d25c;
  /* 12e7d24f call 0x12e7d530 */
  push32(0x12e7d254u); f_12e7d530();
  /* 12e7d254 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 12e7d25a jmp 0x12e7d266 */
  goto L_12e7d266;
L_12e7d25c:;
  /* 12e7d25c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12e7d266:;
  /* 12e7d266 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 12e7d26c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7d26f jmp 0x12e7d361 */
  goto L_12e7d361;
L_12e7d274:;
  /* 12e7d274 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d277 push edx */
  push32((uint32_t)(EDX));
  /* 12e7d278 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7d27a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7d27c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12e7d282 push eax */
  push32((uint32_t)(EAX));
  /* 12e7d283 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d286 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d287 call 0x12e7d630 */
  push32(0x12e7d28cu); f_12e7d630();
  /* 12e7d28c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d28f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e7d292 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d296 je 0x12e7d361 */
  if (C.zf) goto L_12e7d361;
  /* 12e7d29c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e7d2a3 jmp 0x12e7d2ae */
  goto L_12e7d2ae;
L_12e7d2a5:;
  /* 12e7d2a5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7d2a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d2ab mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e7d2ae:;
  /* 12e7d2ae cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d2b2 jg 0x12e7d310 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e7d310;
  /* 12e7d2b4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d2b8 je 0x12e7d30e */
  if (C.zf) goto L_12e7d30e;
  /* 12e7d2ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7d2bd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7d2c0 mov ecx, dword ptr [eax + 0x12e8e4fc] */
  ECX = (r32((uint32_t)(EAX + 0x12e8e4fc)));
  /* 12e7d2c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d2c7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12e7d2cd push edx */
  push32((uint32_t)(EDX));
  /* 12e7d2ce call 0x12e7f0e0 */
  push32(0x12e7d2d3u); f_12e7f0e0();
  /* 12e7d2d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d2d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7d2d8 je 0x12e7d305 */
  if (C.zf) goto L_12e7d305;
  /* 12e7d2da lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12e7d2e0 push eax */
  push32((uint32_t)(EAX));
  /* 12e7d2e1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7d2e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d2e5 call 0x12e7d390 */
  push32(0x12e7d2eau); f_12e7d390();
  /* 12e7d2ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d2ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7d2ef je 0x12e7d2fc */
  if (C.zf) goto L_12e7d2fc;
  /* 12e7d2f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7d2f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d2f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e7d2fa jmp 0x12e7d303 */
  goto L_12e7d303;
L_12e7d2fc:;
  /* 12e7d2fc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12e7d303:;
  /* 12e7d303 jmp 0x12e7d30e */
  goto L_12e7d30e;
L_12e7d305:;
  /* 12e7d305 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7d308 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d30b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12e7d30e:;
  /* 12e7d30e jmp 0x12e7d2a5 */
  goto L_12e7d2a5;
L_12e7d310:;
  /* 12e7d310 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d314 je 0x12e7d33b */
  if (C.zf) goto L_12e7d33b;
  /* 12e7d316 call 0x12e7d530 */
  push32(0x12e7d31bu); f_12e7d530();
  /* 12e7d31b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e7d31e push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7d320 mov ecx, dword ptr [0x12e8e4fc] */
  ECX = (r32((uint32_t)(0x12e8e4fc)));
  /* 12e7d326 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d327 call 0x12e73ee0 */
  push32(0x12e7d32cu); f_12e73ee0();
  /* 12e7d32c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d32f mov dword ptr [0x12e8e4fc], 0 */
  w32((uint32_t)(0x12e8e4fc), (0x0u));
  /* 12e7d339 jmp 0x12e7d361 */
  goto L_12e7d361;
L_12e7d33b:;
  /* 12e7d33b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d33f je 0x12e7d34e */
  if (C.zf) goto L_12e7d34e;
  /* 12e7d341 call 0x12e7d530 */
  push32(0x12e7d346u); f_12e7d530();
  /* 12e7d346 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 12e7d34c jmp 0x12e7d358 */
  goto L_12e7d358;
L_12e7d34e:;
  /* 12e7d34e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12e7d358:;
  /* 12e7d358 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 12e7d35e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12e7d361:;
  /* 12e7d361 jmp 0x12e7d36b */
  goto L_12e7d36b;
L_12e7d363:;
  /* 12e7d363 call 0x12e7d530 */
  push32(0x12e7d368u); f_12e7d530();
  /* 12e7d368 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e7d36b:;
  /* 12e7d36b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d36f je 0x12e7d388 */
  if (C.zf) goto L_12e7d388;
  /* 12e7d371 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e7d373 call 0x12e76ef0 */
  push32(0x12e7d378u); f_12e76ef0();
  /* 12e7d378 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d37b mov eax, dword ptr [0x12e8f84c] */
  EAX = (r32((uint32_t)(0x12e8f84c)));
  /* 12e7d380 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7d383 mov dword ptr [0x12e8f84c], eax */
  w32((uint32_t)(0x12e8f84c), (EAX));
L_12e7d388:;
  /* 12e7d388 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12e7d38b:;
  /* 12e7d38b mov esp, ebp */
  ESP = (EBP);
  /* 12e7d38d pop ebp */
  EBP = (pop32());
  /* 12e7d38e ret  */
  ESPCHK(0x12e7cfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d390 @ 0x12e7d390 (403 bytes, 117 insns) */
void f_12e7d390(void) {
  FTRACE(0x12e7d390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7d390 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7d391 mov ebp, esp */
  EBP = (ESP);
  /* 12e7d393 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7d399 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d39c push eax */
  push32((uint32_t)(EAX));
  /* 12e7d39d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12e7d3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d3a4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 12e7d3aa push edx */
  push32((uint32_t)(EDX));
  /* 12e7d3ab lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12e7d3b1 push eax */
  push32((uint32_t)(EAX));
  /* 12e7d3b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d3b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d3b6 call 0x12e7d630 */
  push32(0x12e7d3bbu); f_12e7d630();
  /* 12e7d3bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d3be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7d3c0 jne 0x12e7d3c9 */
  if (!C.zf) goto L_12e7d3c9;
  /* 12e7d3c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7d3c4 jmp 0x12e7d51f */
  goto L_12e7d51f;
L_12e7d3c9:;
  /* 12e7d3c9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 12e7d3ce push 0x12e8b088 */
  push32((uint32_t)(0x12e8b088u));
  /* 12e7d3d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7d3d5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 12e7d3db push edx */
  push32((uint32_t)(EDX));
  /* 12e7d3dc call 0x12e76280 */
  push32(0x12e7d3e1u); f_12e76280();
  /* 12e7d3e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d3e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d3e7 push eax */
  push32((uint32_t)(EAX));
  /* 12e7d3e8 call 0x12e73450 */
  push32(0x12e7d3edu); f_12e73450();
  /* 12e7d3ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d3f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e7d3f3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d3f7 jne 0x12e7d400 */
  if (!C.zf) goto L_12e7d400;
  /* 12e7d3f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7d3fb jmp 0x12e7d51f */
  goto L_12e7d51f;
L_12e7d400:;
  /* 12e7d400 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d403 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7d406 mov ecx, dword ptr [eax + 0x12e8e4fc] */
  ECX = (r32((uint32_t)(EAX + 0x12e8e4fc)));
  /* 12e7d40c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7d40f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d412 mov eax, dword ptr [edx*4 + 0x12e8f6c8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e8f6c8)));
  /* 12e7d419 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7d41c push 6 */
  push32((uint32_t)(0x6u));
  /* 12e7d41e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d421 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7d424 add ecx, 0x12e8f718 */
  { uint32_t _a=(ECX),_b=(0x12e8f718u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d42a push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d42b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 12e7d42e push edx */
  push32((uint32_t)(EDX));
  /* 12e7d42f call 0x12e79d30 */
  push32(0x12e7d434u); f_12e79d30();
  /* 12e7d434 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d437 mov eax, dword ptr [0x12e8f6e0] */
  EAX = (r32((uint32_t)(0x12e8f6e0)));
  /* 12e7d43c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e7d43f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12e7d445 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d446 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7d449 push edx */
  push32((uint32_t)(EDX));
  /* 12e7d44a call 0x12e76400 */
  push32(0x12e7d44fu); f_12e76400();
  /* 12e7d44f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d452 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d455 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7d458 mov dword ptr [ecx + 0x12e8e4fc], eax */
  w32((uint32_t)(ECX + 0x12e8e4fc), (EAX));
  /* 12e7d45e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12e7d464 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7d46a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d46d mov dword ptr [eax*4 + 0x12e8f6c8], edx */
  w32((uint32_t)(EAX*4 + 0x12e8f6c8), (EDX));
  /* 12e7d474 push 6 */
  push32((uint32_t)(0x6u));
  /* 12e7d476 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 12e7d47c push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d47d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d480 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7d483 add edx, 0x12e8f718 */
  { uint32_t _a=(EDX),_b=(0x12e8f718u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d489 push edx */
  push32((uint32_t)(EDX));
  /* 12e7d48a call 0x12e79d30 */
  push32(0x12e7d48fu); f_12e79d30();
  /* 12e7d48f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d492 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d496 jne 0x12e7d4a3 */
  if (!C.zf) goto L_12e7d4a3;
  /* 12e7d498 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e7d49e mov dword ptr [0x12e8f6e0], eax */
  w32((uint32_t)(0x12e8f6e0), (EAX));
L_12e7d4a3:;
  /* 12e7d4a3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d4a7 jne 0x12e7d4b5 */
  if (!C.zf) goto L_12e7d4b5;
  /* 12e7d4a9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e7d4af mov dword ptr [0x12e8f6e4], ecx */
  w32((uint32_t)(0x12e8f6e4), (ECX));
L_12e7d4b5:;
  /* 12e7d4b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d4b8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7d4bb call dword ptr [edx + 0x12e8e500] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x12e8e500))), 0x12e7d4c1u);
  /* 12e7d4c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7d4c3 je 0x12e7d4fc */
  if (C.zf) goto L_12e7d4fc;
  /* 12e7d4c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d4c8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7d4cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7d4ce mov dword ptr [eax + 0x12e8e4fc], ecx */
  w32((uint32_t)(EAX + 0x12e8e4fc), (ECX));
  /* 12e7d4d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7d4d6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7d4d9 push edx */
  push32((uint32_t)(EDX));
  /* 12e7d4da call 0x12e73ee0 */
  push32(0x12e7d4dfu); f_12e73ee0();
  /* 12e7d4df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d4e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d4e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7d4e8 mov dword ptr [eax*4 + 0x12e8f6c8], ecx */
  w32((uint32_t)(EAX*4 + 0x12e8f6c8), (ECX));
  /* 12e7d4ef mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7d4f2 mov dword ptr [0x12e8f6e0], edx */
  w32((uint32_t)(0x12e8f6e0), (EDX));
  /* 12e7d4f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7d4fa jmp 0x12e7d51f */
  goto L_12e7d51f;
L_12e7d4fc:;
  /* 12e7d4fc cmp dword ptr [ebp - 0xc], 0x12e8e3e8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x12e8e3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d503 je 0x12e7d513 */
  if (C.zf) goto L_12e7d513;
  /* 12e7d505 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7d507 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7d50a push eax */
  push32((uint32_t)(EAX));
  /* 12e7d50b call 0x12e73ee0 */
  push32(0x12e7d510u); f_12e73ee0();
  /* 12e7d510 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7d513:;
  /* 12e7d513 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d516 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7d519 mov eax, dword ptr [ecx + 0x12e8e4fc] */
  EAX = (r32((uint32_t)(ECX + 0x12e8e4fc)));
L_12e7d51f:;
  /* 12e7d51f mov esp, ebp */
  ESP = (EBP);
  /* 12e7d521 pop ebp */
  EBP = (pop32());
  /* 12e7d522 ret  */
  ESPCHK(0x12e7d390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d530 @ 0x12e7d530 (256 bytes, 72 insns) */
void f_12e7d530(void) {
  FTRACE(0x12e7d530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7d530 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7d531 mov ebp, esp */
  EBP = (ESP);
  /* 12e7d533 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7d536 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12e7d53d cmp dword ptr [0x12e8e4fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8e4fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d544 jne 0x12e7d564 */
  if (!C.zf) goto L_12e7d564;
  /* 12e7d546 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 12e7d54b push 0x12e8b088 */
  push32((uint32_t)(0x12e8b088u));
  /* 12e7d550 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7d552 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12e7d557 call 0x12e73450 */
  push32(0x12e7d55cu); f_12e73450();
  /* 12e7d55c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d55f mov dword ptr [0x12e8e4fc], eax */
  w32((uint32_t)(0x12e8e4fc), (EAX));
L_12e7d564:;
  /* 12e7d564 mov eax, dword ptr [0x12e8e4fc] */
  EAX = (r32((uint32_t)(0x12e8e4fc)));
  /* 12e7d569 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12e7d56c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e7d573 jmp 0x12e7d57e */
  goto L_12e7d57e;
L_12e7d575:;
  /* 12e7d575 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7d578 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d57b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e7d57e:;
  /* 12e7d57e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7d581 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7d584 mov eax, dword ptr [edx + 0x12e8e4fc] */
  EAX = (r32((uint32_t)(EDX + 0x12e8e4fc)));
  /* 12e7d58a push eax */
  push32((uint32_t)(EAX));
  /* 12e7d58b push 0x12e8b094 */
  push32((uint32_t)(0x12e8b094u));
  /* 12e7d590 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7d593 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7d596 mov edx, dword ptr [ecx + 0x12e8e4f8] */
  EDX = (r32((uint32_t)(ECX + 0x12e8e4f8)));
  /* 12e7d59c push edx */
  push32((uint32_t)(EDX));
  /* 12e7d59d push 3 */
  push32((uint32_t)(0x3u));
  /* 12e7d59f mov eax, dword ptr [0x12e8e4fc] */
  EAX = (r32((uint32_t)(0x12e8e4fc)));
  /* 12e7d5a4 push eax */
  push32((uint32_t)(EAX));
  /* 12e7d5a5 call 0x12e7d7d0 */
  push32(0x12e7d5aau); f_12e7d7d0();
  /* 12e7d5aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d5ad cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d5b1 jge 0x12e7d5f9 */
  if ((C.sf==C.of)) goto L_12e7d5f9;
  /* 12e7d5b3 push 0x12e8b080 */
  push32((uint32_t)(0x12e8b080u));
  /* 12e7d5b8 mov ecx, dword ptr [0x12e8e4fc] */
  ECX = (r32((uint32_t)(0x12e8e4fc)));
  /* 12e7d5be push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d5bf call 0x12e76410 */
  push32(0x12e7d5c4u); f_12e76410();
  /* 12e7d5c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d5c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7d5ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d5cd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7d5d0 mov eax, dword ptr [edx + 0x12e8e4fc] */
  EAX = (r32((uint32_t)(EDX + 0x12e8e4fc)));
  /* 12e7d5d6 push eax */
  push32((uint32_t)(EAX));
  /* 12e7d5d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7d5da imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7d5dd mov edx, dword ptr [ecx + 0x12e8e4fc] */
  EDX = (r32((uint32_t)(ECX + 0x12e8e4fc)));
  /* 12e7d5e3 push edx */
  push32((uint32_t)(EDX));
  /* 12e7d5e4 call 0x12e7f0e0 */
  push32(0x12e7d5e9u); f_12e7f0e0();
  /* 12e7d5e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d5ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7d5ee je 0x12e7d5f7 */
  if (C.zf) goto L_12e7d5f7;
  /* 12e7d5f0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12e7d5f7:;
  /* 12e7d5f7 jmp 0x12e7d627 */
  goto L_12e7d627;
L_12e7d5f9:;
  /* 12e7d5f9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d5fd jne 0x12e7d606 */
  if (!C.zf) goto L_12e7d606;
  /* 12e7d5ff mov eax, dword ptr [0x12e8e4fc] */
  EAX = (r32((uint32_t)(0x12e8e4fc)));
  /* 12e7d604 jmp 0x12e7d62c */
  goto L_12e7d62c;
L_12e7d606:;
  /* 12e7d606 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7d608 mov eax, dword ptr [0x12e8e4fc] */
  EAX = (r32((uint32_t)(0x12e8e4fc)));
  /* 12e7d60d push eax */
  push32((uint32_t)(EAX));
  /* 12e7d60e call 0x12e73ee0 */
  push32(0x12e7d613u); f_12e73ee0();
  /* 12e7d613 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d616 mov dword ptr [0x12e8e4fc], 0 */
  w32((uint32_t)(0x12e8e4fc), (0x0u));
  /* 12e7d620 mov eax, dword ptr [0x12e8e514] */
  EAX = (r32((uint32_t)(0x12e8e514)));
  /* 12e7d625 jmp 0x12e7d62c */
  goto L_12e7d62c;
L_12e7d627:;
  /* 12e7d627 jmp 0x12e7d575 */
  goto L_12e7d575;
L_12e7d62c:;
  /* 12e7d62c mov esp, ebp */
  ESP = (EBP);
  /* 12e7d62e pop ebp */
  EBP = (pop32());
  /* 12e7d62f ret  */
  ESPCHK(0x12e7d530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d630 @ 0x12e7d630 (388 bytes, 115 insns) */
void f_12e7d630(void) {
  FTRACE(0x12e7d630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7d630 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7d631 mov ebp, esp */
  EBP = (ESP);
  /* 12e7d633 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7d639 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d63d jne 0x12e7d646 */
  if (!C.zf) goto L_12e7d646;
  /* 12e7d63f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7d641 jmp 0x12e7d7b0 */
  goto L_12e7d7b0;
L_12e7d646:;
  /* 12e7d646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d649 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e7d64c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d64f jne 0x12e7d6a0 */
  if (!C.zf) goto L_12e7d6a0;
  /* 12e7d651 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d654 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12e7d658 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7d65a jne 0x12e7d6a0 */
  if (!C.zf) goto L_12e7d6a0;
  /* 12e7d65c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d65f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12e7d662 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d665 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12e7d669 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d66d je 0x12e7d689 */
  if (C.zf) goto L_12e7d689;
  /* 12e7d66f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7d672 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12e7d677 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7d67a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12e7d680 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7d683 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12e7d689:;
  /* 12e7d689 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d68d je 0x12e7d698 */
  if (C.zf) goto L_12e7d698;
  /* 12e7d68f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7d692 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12e7d698:;
  /* 12e7d698 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d69b jmp 0x12e7d7b0 */
  goto L_12e7d7b0;
L_12e7d6a0:;
  /* 12e7d6a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d6a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d6a4 push 0x12e8e470 */
  push32((uint32_t)(0x12e8e470u));
  /* 12e7d6a9 call 0x12e7f0e0 */
  push32(0x12e7d6aeu); f_12e7f0e0();
  /* 12e7d6ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d6b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7d6b3 je 0x12e7d768 */
  if (C.zf) goto L_12e7d768;
  /* 12e7d6b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d6bc push edx */
  push32((uint32_t)(EDX));
  /* 12e7d6bd push 0x12e8e3ec */
  push32((uint32_t)(0x12e8e3ecu));
  /* 12e7d6c2 call 0x12e7f0e0 */
  push32(0x12e7d6c7u); f_12e7f0e0();
  /* 12e7d6c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d6ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7d6cc je 0x12e7d768 */
  if (C.zf) goto L_12e7d768;
  /* 12e7d6d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d6d5 push eax */
  push32((uint32_t)(EAX));
  /* 12e7d6d6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 12e7d6dc push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d6dd call 0x12e7d820 */
  push32(0x12e7d6e2u); f_12e7d820();
  /* 12e7d6e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d6e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7d6e7 je 0x12e7d6f0 */
  if (C.zf) goto L_12e7d6f0;
  /* 12e7d6e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7d6eb jmp 0x12e7d7b0 */
  goto L_12e7d7b0;
L_12e7d6f0:;
  /* 12e7d6f0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12e7d6f6 push edx */
  push32((uint32_t)(EDX));
  /* 12e7d6f7 push 0x12e8f6f0 */
  push32((uint32_t)(0x12e8f6f0u));
  /* 12e7d6fc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12e7d702 push eax */
  push32((uint32_t)(EAX));
  /* 12e7d703 call 0x12e7f230 */
  push32(0x12e7d708u); f_12e7f230();
  /* 12e7d708 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d70b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7d70d jne 0x12e7d716 */
  if (!C.zf) goto L_12e7d716;
  /* 12e7d70f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7d711 jmp 0x12e7d7b0 */
  goto L_12e7d7b0;
L_12e7d716:;
  /* 12e7d716 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7d718 mov cx, word ptr [0x12e8f6f4] */
  CX = (r16((uint32_t)(0x12e8f6f4)));
  /* 12e7d71f mov dword ptr [0x12e8f6f8], ecx */
  w32((uint32_t)(0x12e8f6f8), (ECX));
  /* 12e7d725 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12e7d72b push edx */
  push32((uint32_t)(EDX));
  /* 12e7d72c push 0x12e8e470 */
  push32((uint32_t)(0x12e8e470u));
  /* 12e7d731 call 0x12e7d980 */
  push32(0x12e7d736u); f_12e7d980();
  /* 12e7d736 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d739 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d73c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e7d73f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7d741 je 0x12e7d756 */
  if (C.zf) goto L_12e7d756;
  /* 12e7d743 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d746 push edx */
  push32((uint32_t)(EDX));
  /* 12e7d747 push 0x12e8e3ec */
  push32((uint32_t)(0x12e8e3ecu));
  /* 12e7d74c call 0x12e76400 */
  push32(0x12e7d751u); f_12e76400();
  /* 12e7d751 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d754 jmp 0x12e7d768 */
  goto L_12e7d768;
L_12e7d756:;
  /* 12e7d756 push 0x12e8e470 */
  push32((uint32_t)(0x12e8e470u));
  /* 12e7d75b push 0x12e8e3ec */
  push32((uint32_t)(0x12e8e3ecu));
  /* 12e7d760 call 0x12e76400 */
  push32(0x12e7d765u); f_12e76400();
  /* 12e7d765 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7d768:;
  /* 12e7d768 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d76c je 0x12e7d781 */
  if (C.zf) goto L_12e7d781;
  /* 12e7d76e push 6 */
  push32((uint32_t)(0x6u));
  /* 12e7d770 push 0x12e8f6f0 */
  push32((uint32_t)(0x12e8f6f0u));
  /* 12e7d775 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7d778 push eax */
  push32((uint32_t)(EAX));
  /* 12e7d779 call 0x12e79d30 */
  push32(0x12e7d77eu); f_12e79d30();
  /* 12e7d77e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7d781:;
  /* 12e7d781 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d785 je 0x12e7d79a */
  if (C.zf) goto L_12e7d79a;
  /* 12e7d787 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e7d789 push 0x12e8f6f8 */
  push32((uint32_t)(0x12e8f6f8u));
  /* 12e7d78e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7d791 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d792 call 0x12e79d30 */
  push32(0x12e7d797u); f_12e79d30();
  /* 12e7d797 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7d79a:;
  /* 12e7d79a push 0x12e8e470 */
  push32((uint32_t)(0x12e8e470u));
  /* 12e7d79f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d7a2 push edx */
  push32((uint32_t)(EDX));
  /* 12e7d7a3 call 0x12e76400 */
  push32(0x12e7d7a8u); f_12e76400();
  /* 12e7d7a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d7ab mov eax, 0x12e8e470 */
  EAX = (0x12e8e470u);
L_12e7d7b0:;
  /* 12e7d7b0 mov esp, ebp */
  ESP = (EBP);
  /* 12e7d7b2 pop ebp */
  EBP = (pop32());
  /* 12e7d7b3 ret  */
  ESPCHK(0x12e7d630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7c0 @ 0x12e7d7c0 (7 bytes, 5 insns) */
void f_12e7d7c0(void) {
  FTRACE(0x12e7d7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7d7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7d7c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7d7c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7d7c5 pop ebp */
  EBP = (pop32());
  /* 12e7d7c6 ret  */
  ESPCHK(0x12e7d7c0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12e7d7d0 (79 bytes, 28 insns) */
void f_12e7d7d0(void) {
  FTRACE(0x12e7d7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7d7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7d7d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7d7d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7d7d6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12e7d7d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7d7dc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e7d7e3 jmp 0x12e7d7ee */
  goto L_12e7d7ee;
L_12e7d7e5:;
  /* 12e7d7e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7d7e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d7eb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e7d7ee:;
  /* 12e7d7ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7d7f1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d7f4 jge 0x12e7d814 */
  if ((C.sf==C.of)) goto L_12e7d814;
  /* 12e7d7f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7d7f9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d7fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7d7ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7d802 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12e7d805 push edx */
  push32((uint32_t)(EDX));
  /* 12e7d806 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d809 push eax */
  push32((uint32_t)(EAX));
  /* 12e7d80a call 0x12e76410 */
  push32(0x12e7d80fu); f_12e76410();
  /* 12e7d80f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d812 jmp 0x12e7d7e5 */
  goto L_12e7d7e5;
L_12e7d814:;
  /* 12e7d814 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e7d81b mov esp, ebp */
  ESP = (EBP);
  /* 12e7d81d pop ebp */
  EBP = (pop32());
  /* 12e7d81e ret  */
  ESPCHK(0x12e7d7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d820 @ 0x12e7d820 (349 bytes, 122 insns) */
void f_12e7d820(void) {
  FTRACE(0x12e7d820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7d820 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7d821 mov ebp, esp */
  EBP = (ESP);
  /* 12e7d823 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7d826 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12e7d82b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7d82d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d830 push eax */
  push32((uint32_t)(EAX));
  /* 12e7d831 call 0x12e771c0 */
  push32(0x12e7d836u); f_12e771c0();
  /* 12e7d836 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d839 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d83c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e7d83f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7d841 jne 0x12e7d84a */
  if (!C.zf) goto L_12e7d84a;
  /* 12e7d843 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7d845 jmp 0x12e7d979 */
  goto L_12e7d979;
L_12e7d84a:;
  /* 12e7d84a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d84d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e7d850 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d853 jne 0x12e7d880 */
  if (!C.zf) goto L_12e7d880;
  /* 12e7d855 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d858 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12e7d85c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7d85e je 0x12e7d880 */
  if (C.zf) goto L_12e7d880;
  /* 12e7d860 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d863 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d866 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d867 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d86a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d870 push edx */
  push32((uint32_t)(EDX));
  /* 12e7d871 call 0x12e76400 */
  push32(0x12e7d876u); f_12e76400();
  /* 12e7d876 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d879 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7d87b jmp 0x12e7d979 */
  goto L_12e7d979;
L_12e7d880:;
  /* 12e7d880 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e7d887 jmp 0x12e7d892 */
  goto L_12e7d892;
L_12e7d889:;
  /* 12e7d889 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7d88c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d88f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e7d892:;
  /* 12e7d892 push 0x12e8b098 */
  push32((uint32_t)(0x12e8b098u));
  /* 12e7d897 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d89a push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d89b call 0x12e7f170 */
  push32(0x12e7d8a0u); f_12e7f170();
  /* 12e7d8a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d8a3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e7d8a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d8aa jne 0x12e7d8b4 */
  if (!C.zf) goto L_12e7d8b4;
  /* 12e7d8ac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7d8af jmp 0x12e7d979 */
  goto L_12e7d979;
L_12e7d8b4:;
  /* 12e7d8b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d8b7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d8ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e7d8bc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12e7d8bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d8c3 jne 0x12e7d8ea */
  if (!C.zf) goto L_12e7d8ea;
  /* 12e7d8c5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d8c9 jge 0x12e7d8ea */
  if ((C.sf==C.of)) goto L_12e7d8ea;
  /* 12e7d8cb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e7d8cf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d8d2 je 0x12e7d8ea */
  if (C.zf) goto L_12e7d8ea;
  /* 12e7d8d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7d8d7 push edx */
  push32((uint32_t)(EDX));
  /* 12e7d8d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d8db push eax */
  push32((uint32_t)(EAX));
  /* 12e7d8dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d8df push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d8e0 call 0x12e76c70 */
  push32(0x12e7d8e5u); f_12e76c70();
  /* 12e7d8e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d8e8 jmp 0x12e7d950 */
  goto L_12e7d950;
L_12e7d8ea:;
  /* 12e7d8ea cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d8ee jne 0x12e7d918 */
  if (!C.zf) goto L_12e7d918;
  /* 12e7d8f0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d8f4 jge 0x12e7d918 */
  if ((C.sf==C.of)) goto L_12e7d918;
  /* 12e7d8f6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e7d8fa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d8fd je 0x12e7d918 */
  if (C.zf) goto L_12e7d918;
  /* 12e7d8ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7d902 push eax */
  push32((uint32_t)(EAX));
  /* 12e7d903 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d906 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d907 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d90a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d90d push edx */
  push32((uint32_t)(EDX));
  /* 12e7d90e call 0x12e76c70 */
  push32(0x12e7d913u); f_12e76c70();
  /* 12e7d913 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d916 jmp 0x12e7d950 */
  goto L_12e7d950;
L_12e7d918:;
  /* 12e7d918 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d91c jne 0x12e7d94b */
  if (!C.zf) goto L_12e7d94b;
  /* 12e7d91e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e7d922 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7d924 je 0x12e7d92f */
  if (C.zf) goto L_12e7d92f;
  /* 12e7d926 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e7d92a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d92d jne 0x12e7d94b */
  if (!C.zf) goto L_12e7d94b;
L_12e7d92f:;
  /* 12e7d92f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7d932 push edx */
  push32((uint32_t)(EDX));
  /* 12e7d933 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d936 push eax */
  push32((uint32_t)(EAX));
  /* 12e7d937 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d93a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d940 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d941 call 0x12e76c70 */
  push32(0x12e7d946u); f_12e76c70();
  /* 12e7d946 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d949 jmp 0x12e7d950 */
  goto L_12e7d950;
L_12e7d94b:;
  /* 12e7d94b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7d94e jmp 0x12e7d979 */
  goto L_12e7d979;
L_12e7d950:;
  /* 12e7d950 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e7d954 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7d957 jne 0x12e7d95b */
  if (!C.zf) goto L_12e7d95b;
  /* 12e7d959 jmp 0x12e7d977 */
  goto L_12e7d977;
L_12e7d95b:;
  /* 12e7d95b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e7d95f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7d961 jne 0x12e7d965 */
  if (!C.zf) goto L_12e7d965;
  /* 12e7d963 jmp 0x12e7d977 */
  goto L_12e7d977;
L_12e7d965:;
  /* 12e7d965 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7d968 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d96b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12e7d96f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12e7d972 jmp 0x12e7d889 */
  goto L_12e7d889;
L_12e7d977:;
  /* 12e7d977 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e7d979:;
  /* 12e7d979 mov esp, ebp */
  ESP = (EBP);
  /* 12e7d97b pop ebp */
  EBP = (pop32());
  /* 12e7d97c ret  */
  ESPCHK(0x12e7d820u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12e7d980 (101 bytes, 36 insns) */
void f_12e7d980(void) {
  FTRACE(0x12e7d980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7d980 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7d981 mov ebp, esp */
  EBP = (ESP);
  /* 12e7d983 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d986 push eax */
  push32((uint32_t)(EAX));
  /* 12e7d987 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d98a push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d98b call 0x12e76400 */
  push32(0x12e7d990u); f_12e76400();
  /* 12e7d990 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d993 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d996 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12e7d99a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7d99c je 0x12e7d9b8 */
  if (C.zf) goto L_12e7d9b8;
  /* 12e7d99e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d9a1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d9a4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d9a5 push 0x12e8b0a0 */
  push32((uint32_t)(0x12e8b0a0u));
  /* 12e7d9aa push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7d9ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d9af push edx */
  push32((uint32_t)(EDX));
  /* 12e7d9b0 call 0x12e7d7d0 */
  push32(0x12e7d9b5u); f_12e7d7d0();
  /* 12e7d9b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7d9b8:;
  /* 12e7d9b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d9bb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12e7d9c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7d9c4 je 0x12e7d9e3 */
  if (C.zf) goto L_12e7d9e3;
  /* 12e7d9c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7d9c9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7d9cf push edx */
  push32((uint32_t)(EDX));
  /* 12e7d9d0 push 0x12e8b09c */
  push32((uint32_t)(0x12e8b09cu));
  /* 12e7d9d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7d9d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7d9da push eax */
  push32((uint32_t)(EAX));
  /* 12e7d9db call 0x12e7d7d0 */
  push32(0x12e7d9e0u); f_12e7d7d0();
  /* 12e7d9e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7d9e3:;
  /* 12e7d9e3 pop ebp */
  EBP = (pop32());
  /* 12e7d9e4 ret  */
  ESPCHK(0x12e7d980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9f0 @ 0x12e7d9f0 (130 bytes, 50 insns) */
void f_12e7d9f0(void) {
  FTRACE(0x12e7d9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7d9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7d9f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7d9f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7d9f4 push ebx */
  push32((uint32_t)(EBX));
  /* 12e7d9f5 push esi */
  push32((uint32_t)(ESI));
  /* 12e7d9f6 push edi */
  push32((uint32_t)(EDI));
  /* 12e7d9f7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e7d9fe:;
  /* 12e7d9fe cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7da02 jne 0x12e7da22 */
  if (!C.zf) goto L_12e7da22;
  /* 12e7da04 push 0x12e8b0b0 */
  push32((uint32_t)(0x12e8b0b0u));
  /* 12e7da09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7da0b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12e7da0d push 0x12e8b0a4 */
  push32((uint32_t)(0x12e8b0a4u));
  /* 12e7da12 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7da14 call 0x12e72510 */
  push32(0x12e7da19u); f_12e72510();
  /* 12e7da19 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7da1c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7da1f jne 0x12e7da22 */
  if (!C.zf) goto L_12e7da22;
  /* 12e7da21 int3  */
  x86_unimpl("int3 @ 0x12e7da21");
L_12e7da22:;
  /* 12e7da22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7da24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7da26 jne 0x12e7d9fe */
  if (!C.zf) goto L_12e7d9fe;
  /* 12e7da28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7da2b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e7da2e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7da31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7da33 je 0x12e7da41 */
  if (C.zf) goto L_12e7da41;
  /* 12e7da35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7da38 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12e7da3f jmp 0x12e7da68 */
  goto L_12e7da68;
L_12e7da41:;
  /* 12e7da41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7da44 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7da45 call 0x12e7c260 */
  push32(0x12e7da4au); f_12e7c260();
  /* 12e7da4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7da4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7da50 push edx */
  push32((uint32_t)(EDX));
  /* 12e7da51 call 0x12e7da80 */
  push32(0x12e7da56u); f_12e7da80();
  /* 12e7da56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7da59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7da5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7da5f push eax */
  push32((uint32_t)(EAX));
  /* 12e7da60 call 0x12e7c2d0 */
  push32(0x12e7da65u); f_12e7c2d0();
  /* 12e7da65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7da68:;
  /* 12e7da68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7da6b pop edi */
  EDI = (pop32());
  /* 12e7da6c pop esi */
  ESI = (pop32());
  /* 12e7da6d pop ebx */
  EBX = (pop32());
  /* 12e7da6e mov esp, ebp */
  ESP = (EBP);
  /* 12e7da70 pop ebp */
  EBP = (pop32());
  /* 12e7da71 ret  */
  ESPCHK(0x12e7d9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da80 @ 0x12e7da80 (190 bytes, 67 insns) */
void f_12e7da80(void) {
  FTRACE(0x12e7da80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7da80 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7da81 mov ebp, esp */
  EBP = (ESP);
  /* 12e7da83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7da86 push ebx */
  push32((uint32_t)(EBX));
  /* 12e7da87 push esi */
  push32((uint32_t)(ESI));
  /* 12e7da88 push edi */
  push32((uint32_t)(EDI));
  /* 12e7da89 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e7da90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7da93 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e7da96:;
  /* 12e7da96 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7da9a jne 0x12e7daba */
  if (!C.zf) goto L_12e7daba;
  /* 12e7da9c push 0x12e8af54 */
  push32((uint32_t)(0x12e8af54u));
  /* 12e7daa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7daa3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12e7daa5 push 0x12e8b0a4 */
  push32((uint32_t)(0x12e8b0a4u));
  /* 12e7daaa push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7daac call 0x12e72510 */
  push32(0x12e7dab1u); f_12e72510();
  /* 12e7dab1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dab4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7dab7 jne 0x12e7daba */
  if (!C.zf) goto L_12e7daba;
  /* 12e7dab9 int3  */
  x86_unimpl("int3 @ 0x12e7dab9");
L_12e7daba:;
  /* 12e7daba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7dabc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7dabe jne 0x12e7da96 */
  if (!C.zf) goto L_12e7da96;
  /* 12e7dac0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7dac3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12e7dac6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7dacb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7dacd je 0x12e7db2a */
  if (C.zf) goto L_12e7db2a;
  /* 12e7dacf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7dad2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7dad3 call 0x12e7cd80 */
  push32(0x12e7dad8u); f_12e7cd80();
  /* 12e7dad8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dadb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7dade mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7dae1 push edx */
  push32((uint32_t)(EDX));
  /* 12e7dae2 call 0x12e80100 */
  push32(0x12e7dae7u); f_12e80100();
  /* 12e7dae7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7daea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7daed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e7daf0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7daf1 call 0x12e7ffd0 */
  push32(0x12e7daf6u); f_12e7ffd0();
  /* 12e7daf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7daf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7dafb jge 0x12e7db06 */
  if ((C.sf==C.of)) goto L_12e7db06;
  /* 12e7dafd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e7db04 jmp 0x12e7db2a */
  goto L_12e7db2a;
L_12e7db06:;
  /* 12e7db06 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7db09 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7db0d je 0x12e7db2a */
  if (C.zf) goto L_12e7db2a;
  /* 12e7db0f push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7db11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7db14 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12e7db17 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7db18 call 0x12e73ee0 */
  push32(0x12e7db1du); f_12e73ee0();
  /* 12e7db1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7db20 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7db23 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12e7db2a:;
  /* 12e7db2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7db2d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12e7db34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7db37 pop edi */
  EDI = (pop32());
  /* 12e7db38 pop esi */
  ESI = (pop32());
  /* 12e7db39 pop ebx */
  EBX = (pop32());
  /* 12e7db3a mov esp, ebp */
  ESP = (EBP);
  /* 12e7db3c pop ebp */
  EBP = (pop32());
  /* 12e7db3d ret  */
  ESPCHK(0x12e7da80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db40 @ 0x12e7db40 (210 bytes, 63 insns) */
void f_12e7db40(void) {
  FTRACE(0x12e7db40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7db40 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7db41 mov ebp, esp */
  EBP = (ESP);
  /* 12e7db43 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7db44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7db47 cmp eax, dword ptr [0x12e90fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e90fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7db4d jae 0x12e7db71 */
  if (!C.cf) goto L_12e7db71;
  /* 12e7db4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7db52 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e7db55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7db58 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7db5b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7db5e mov eax, dword ptr [ecx*4 + 0x12e90ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e90ea0)));
  /* 12e7db65 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12e7db6a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7db6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7db6f jne 0x12e7db84 */
  if (!C.zf) goto L_12e7db84;
L_12e7db71:;
  /* 12e7db71 call 0x12e7b320 */
  push32(0x12e7db76u); f_12e7b320();
  /* 12e7db76 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e7db7c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7db7f jmp 0x12e7dc0e */
  goto L_12e7dc0e;
L_12e7db84:;
  /* 12e7db84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7db87 push edx */
  push32((uint32_t)(EDX));
  /* 12e7db88 call 0x12e7cb40 */
  push32(0x12e7db8du); f_12e7cb40();
  /* 12e7db8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7db90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7db93 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e7db96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7db99 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7db9c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7db9f mov edx, dword ptr [eax*4 + 0x12e90ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e90ea0)));
  /* 12e7dba6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12e7dbab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7dbae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7dbb0 je 0x12e7dbed */
  if (C.zf) goto L_12e7dbed;
  /* 12e7dbb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7dbb5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7dbb6 call 0x12e7c9c0 */
  push32(0x12e7dbbbu); f_12e7c9c0();
  /* 12e7dbbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dbbe push eax */
  push32((uint32_t)(EAX));
  /* 12e7dbbf call dword ptr [0x12e922bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922bc))), 0x12e7dbc5u);
  /* 12e7dbc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7dbc7 jne 0x12e7dbd4 */
  if (!C.zf) goto L_12e7dbd4;
  /* 12e7dbc9 call dword ptr [0x12e92284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92284))), 0x12e7dbcfu);
  /* 12e7dbcf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7dbd2 jmp 0x12e7dbdb */
  goto L_12e7dbdb;
L_12e7dbd4:;
  /* 12e7dbd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e7dbdb:;
  /* 12e7dbdb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7dbdf jne 0x12e7dbe3 */
  if (!C.zf) goto L_12e7dbe3;
  /* 12e7dbe1 jmp 0x12e7dbff */
  goto L_12e7dbff;
L_12e7dbe3:;
  /* 12e7dbe3 call 0x12e7b330 */
  push32(0x12e7dbe8u); f_12e7b330();
  /* 12e7dbe8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7dbeb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e7dbed:;
  /* 12e7dbed call 0x12e7b320 */
  push32(0x12e7dbf2u); f_12e7b320();
  /* 12e7dbf2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e7dbf8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e7dbff:;
  /* 12e7dbff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7dc02 push eax */
  push32((uint32_t)(EAX));
  /* 12e7dc03 call 0x12e7cbd0 */
  push32(0x12e7dc08u); f_12e7cbd0();
  /* 12e7dc08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dc0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e7dc0e:;
  /* 12e7dc0e mov esp, ebp */
  ESP = (EBP);
  /* 12e7dc10 pop ebp */
  EBP = (pop32());
  /* 12e7dc11 ret  */
  ESPCHK(0x12e7db40u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12e7dc20 (219 bytes, 64 insns) */
void f_12e7dc20(void) {
  FTRACE(0x12e7dc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7dc20 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7dc21 mov ebp, esp */
  EBP = (ESP);
  /* 12e7dc23 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7dc24 cmp dword ptr [0x12e8f6dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f6dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7dc2b je 0x12e7dcc1 */
  if (C.zf) goto L_12e7dcc1;
  /* 12e7dc31 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12e7dc33 push 0x12e8b0c0 */
  push32((uint32_t)(0x12e8b0c0u));
  /* 12e7dc38 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7dc3a push 0xac */
  push32((uint32_t)(0xacu));
  /* 12e7dc3f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7dc41 call 0x12e73860 */
  push32(0x12e7dc46u); f_12e73860();
  /* 12e7dc46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dc49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7dc4c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7dc50 jne 0x12e7dc5c */
  if (!C.zf) goto L_12e7dc5c;
  /* 12e7dc52 mov eax, 1 */
  EAX = (0x1u);
  /* 12e7dc57 jmp 0x12e7dcf7 */
  goto L_12e7dcf7;
L_12e7dc5c:;
  /* 12e7dc5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7dc5f push eax */
  push32((uint32_t)(EAX));
  /* 12e7dc60 call 0x12e7dd00 */
  push32(0x12e7dc65u); f_12e7dd00();
  /* 12e7dc65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dc68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7dc6a je 0x12e7dc8d */
  if (C.zf) goto L_12e7dc8d;
  /* 12e7dc6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7dc6f push ecx */
  push32((uint32_t)(ECX));
  /* 12e7dc70 call 0x12e7e290 */
  push32(0x12e7dc75u); f_12e7e290();
  /* 12e7dc75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dc78 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7dc7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7dc7d push edx */
  push32((uint32_t)(EDX));
  /* 12e7dc7e call 0x12e73ee0 */
  push32(0x12e7dc83u); f_12e73ee0();
  /* 12e7dc83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dc86 mov eax, 1 */
  EAX = (0x1u);
  /* 12e7dc8b jmp 0x12e7dcf7 */
  goto L_12e7dcf7;
L_12e7dc8d:;
  /* 12e7dc8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7dc90 mov dword ptr [0x12e8ecb8], eax */
  w32((uint32_t)(0x12e8ecb8), (EAX));
  /* 12e7dc95 mov ecx, dword ptr [0x12e8f6fc] */
  ECX = (r32((uint32_t)(0x12e8f6fc)));
  /* 12e7dc9b push ecx */
  push32((uint32_t)(ECX));
  /* 12e7dc9c call 0x12e7e290 */
  push32(0x12e7dca1u); f_12e7e290();
  /* 12e7dca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dca4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7dca6 mov edx, dword ptr [0x12e8f6fc] */
  EDX = (r32((uint32_t)(0x12e8f6fc)));
  /* 12e7dcac push edx */
  push32((uint32_t)(EDX));
  /* 12e7dcad call 0x12e73ee0 */
  push32(0x12e7dcb2u); f_12e73ee0();
  /* 12e7dcb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dcb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7dcb8 mov dword ptr [0x12e8f6fc], eax */
  w32((uint32_t)(0x12e8f6fc), (EAX));
  /* 12e7dcbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7dcbf jmp 0x12e7dcf7 */
  goto L_12e7dcf7;
L_12e7dcc1:;
  /* 12e7dcc1 mov dword ptr [0x12e8ecb8], 0x12e8ecc0 */
  w32((uint32_t)(0x12e8ecb8), (0x12e8ecc0u));
  /* 12e7dccb mov ecx, dword ptr [0x12e8f6fc] */
  ECX = (r32((uint32_t)(0x12e8f6fc)));
  /* 12e7dcd1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7dcd2 call 0x12e7e290 */
  push32(0x12e7dcd7u); f_12e7e290();
  /* 12e7dcd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dcda push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7dcdc mov edx, dword ptr [0x12e8f6fc] */
  EDX = (r32((uint32_t)(0x12e8f6fc)));
  /* 12e7dce2 push edx */
  push32((uint32_t)(EDX));
  /* 12e7dce3 call 0x12e73ee0 */
  push32(0x12e7dce8u); f_12e73ee0();
  /* 12e7dce8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dceb mov dword ptr [0x12e8f6fc], 0 */
  w32((uint32_t)(0x12e8f6fc), (0x0u));
  /* 12e7dcf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e7dcf7:;
  /* 12e7dcf7 mov esp, ebp */
  ESP = (EBP);
  /* 12e7dcf9 pop ebp */
  EBP = (pop32());
  /* 12e7dcfa ret  */
  ESPCHK(0x12e7dc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd00 @ 0x12e7dd00 (1423 bytes, 533 insns) */
void f_12e7dd00(void) {
  FTRACE(0x12e7dd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7dd00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7dd01 mov ebp, esp */
  EBP = (ESP);
  /* 12e7dd03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7dd06 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e7dd0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7dd0f mov ax, word ptr [0x12e8f736] */
  AX = (r16((uint32_t)(0x12e8f736)));
  /* 12e7dd15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7dd18 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7dd1a mov cx, word ptr [0x12e8f738] */
  CX = (r16((uint32_t)(0x12e8f738)));
  /* 12e7dd21 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7dd24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7dd28 jne 0x12e7dd32 */
  if (!C.zf) goto L_12e7dd32;
  /* 12e7dd2a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7dd2d jmp 0x12e7e28b */
  goto L_12e7e28b;
L_12e7dd32:;
  /* 12e7dd32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7dd35 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dd38 push edx */
  push32((uint32_t)(EDX));
  /* 12e7dd39 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12e7dd3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7dd3e push eax */
  push32((uint32_t)(EAX));
  /* 12e7dd3f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7dd41 call 0x12e81610 */
  push32(0x12e7dd46u); f_12e81610();
  /* 12e7dd46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dd49 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7dd4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7dd4e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7dd51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7dd54 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dd57 push edx */
  push32((uint32_t)(EDX));
  /* 12e7dd58 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12e7dd5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7dd5d push eax */
  push32((uint32_t)(EAX));
  /* 12e7dd5e push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7dd60 call 0x12e81610 */
  push32(0x12e7dd65u); f_12e81610();
  /* 12e7dd65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dd68 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7dd6b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7dd6d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7dd70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7dd73 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dd76 push edx */
  push32((uint32_t)(EDX));
  /* 12e7dd77 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12e7dd79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7dd7c push eax */
  push32((uint32_t)(EAX));
  /* 12e7dd7d push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7dd7f call 0x12e81610 */
  push32(0x12e7dd84u); f_12e81610();
  /* 12e7dd84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dd87 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7dd8a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7dd8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7dd8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7dd92 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dd95 push edx */
  push32((uint32_t)(EDX));
  /* 12e7dd96 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12e7dd98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7dd9b push eax */
  push32((uint32_t)(EAX));
  /* 12e7dd9c push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7dd9e call 0x12e81610 */
  push32(0x12e7dda3u); f_12e81610();
  /* 12e7dda3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dda6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7dda9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ddab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7ddae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ddb1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ddb4 push edx */
  push32((uint32_t)(EDX));
  /* 12e7ddb5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12e7ddb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ddba push eax */
  push32((uint32_t)(EAX));
  /* 12e7ddbb push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7ddbd call 0x12e81610 */
  push32(0x12e7ddc2u); f_12e81610();
  /* 12e7ddc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ddc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7ddc8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ddca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7ddcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ddd0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ddd3 push edx */
  push32((uint32_t)(EDX));
  /* 12e7ddd4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12e7ddd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ddd9 push eax */
  push32((uint32_t)(EAX));
  /* 12e7ddda push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7dddc call 0x12e81610 */
  push32(0x12e7dde1u); f_12e81610();
  /* 12e7dde1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dde4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7dde7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7dde9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7ddec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ddef push edx */
  push32((uint32_t)(EDX));
  /* 12e7ddf0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12e7ddf2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ddf5 push eax */
  push32((uint32_t)(EAX));
  /* 12e7ddf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7ddf8 call 0x12e81610 */
  push32(0x12e7ddfdu); f_12e81610();
  /* 12e7ddfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7de00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7de03 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7de05 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7de08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7de0b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7de0e push edx */
  push32((uint32_t)(EDX));
  /* 12e7de0f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12e7de11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7de14 push eax */
  push32((uint32_t)(EAX));
  /* 12e7de15 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7de17 call 0x12e81610 */
  push32(0x12e7de1cu); f_12e81610();
  /* 12e7de1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7de1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7de22 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7de24 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7de27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7de2a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7de2d push edx */
  push32((uint32_t)(EDX));
  /* 12e7de2e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12e7de30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7de33 push eax */
  push32((uint32_t)(EAX));
  /* 12e7de34 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7de36 call 0x12e81610 */
  push32(0x12e7de3bu); f_12e81610();
  /* 12e7de3b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7de3e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7de41 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7de43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7de46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7de49 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7de4c push edx */
  push32((uint32_t)(EDX));
  /* 12e7de4d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 12e7de4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7de52 push eax */
  push32((uint32_t)(EAX));
  /* 12e7de53 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7de55 call 0x12e81610 */
  push32(0x12e7de5au); f_12e81610();
  /* 12e7de5a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7de5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7de60 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7de62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7de65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7de68 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7de6b push edx */
  push32((uint32_t)(EDX));
  /* 12e7de6c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12e7de6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7de71 push eax */
  push32((uint32_t)(EAX));
  /* 12e7de72 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7de74 call 0x12e81610 */
  push32(0x12e7de79u); f_12e81610();
  /* 12e7de79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7de7c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7de7f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7de81 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7de84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7de87 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7de8a push edx */
  push32((uint32_t)(EDX));
  /* 12e7de8b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12e7de8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7de90 push eax */
  push32((uint32_t)(EAX));
  /* 12e7de91 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7de93 call 0x12e81610 */
  push32(0x12e7de98u); f_12e81610();
  /* 12e7de98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7de9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7de9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7dea0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7dea3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7dea6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dea9 push edx */
  push32((uint32_t)(EDX));
  /* 12e7deaa push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12e7deac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7deaf push eax */
  push32((uint32_t)(EAX));
  /* 12e7deb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7deb2 call 0x12e81610 */
  push32(0x12e7deb7u); f_12e81610();
  /* 12e7deb7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7deba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7debd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7debf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7dec2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7dec5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dec8 push edx */
  push32((uint32_t)(EDX));
  /* 12e7dec9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12e7decb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7dece push eax */
  push32((uint32_t)(EAX));
  /* 12e7decf push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7ded1 call 0x12e81610 */
  push32(0x12e7ded6u); f_12e81610();
  /* 12e7ded6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ded9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7dedc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7dede mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7dee1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7dee4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dee7 push edx */
  push32((uint32_t)(EDX));
  /* 12e7dee8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12e7deea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7deed push eax */
  push32((uint32_t)(EAX));
  /* 12e7deee push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7def0 call 0x12e81610 */
  push32(0x12e7def5u); f_12e81610();
  /* 12e7def5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7def8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7defb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7defd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7df00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7df03 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7df06 push edx */
  push32((uint32_t)(EDX));
  /* 12e7df07 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12e7df09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7df0c push eax */
  push32((uint32_t)(EAX));
  /* 12e7df0d push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7df0f call 0x12e81610 */
  push32(0x12e7df14u); f_12e81610();
  /* 12e7df14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7df17 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7df1a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7df1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7df1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7df22 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7df25 push edx */
  push32((uint32_t)(EDX));
  /* 12e7df26 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12e7df28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7df2b push eax */
  push32((uint32_t)(EAX));
  /* 12e7df2c push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7df2e call 0x12e81610 */
  push32(0x12e7df33u); f_12e81610();
  /* 12e7df33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7df36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7df39 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7df3b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7df3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7df41 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7df44 push edx */
  push32((uint32_t)(EDX));
  /* 12e7df45 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12e7df47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7df4a push eax */
  push32((uint32_t)(EAX));
  /* 12e7df4b push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7df4d call 0x12e81610 */
  push32(0x12e7df52u); f_12e81610();
  /* 12e7df52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7df55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7df58 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7df5a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7df5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7df60 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7df63 push edx */
  push32((uint32_t)(EDX));
  /* 12e7df64 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12e7df66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7df69 push eax */
  push32((uint32_t)(EAX));
  /* 12e7df6a push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7df6c call 0x12e81610 */
  push32(0x12e7df71u); f_12e81610();
  /* 12e7df71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7df74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7df77 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7df79 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7df7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7df7f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7df82 push edx */
  push32((uint32_t)(EDX));
  /* 12e7df83 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12e7df85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7df88 push eax */
  push32((uint32_t)(EAX));
  /* 12e7df89 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7df8b call 0x12e81610 */
  push32(0x12e7df90u); f_12e81610();
  /* 12e7df90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7df93 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7df96 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7df98 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7df9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7df9e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dfa1 push edx */
  push32((uint32_t)(EDX));
  /* 12e7dfa2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12e7dfa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7dfa7 push eax */
  push32((uint32_t)(EAX));
  /* 12e7dfa8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7dfaa call 0x12e81610 */
  push32(0x12e7dfafu); f_12e81610();
  /* 12e7dfaf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dfb2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7dfb5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7dfb7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7dfba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7dfbd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dfc0 push edx */
  push32((uint32_t)(EDX));
  /* 12e7dfc1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12e7dfc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7dfc6 push eax */
  push32((uint32_t)(EAX));
  /* 12e7dfc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7dfc9 call 0x12e81610 */
  push32(0x12e7dfceu); f_12e81610();
  /* 12e7dfce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dfd1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7dfd4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7dfd6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7dfd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7dfdc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dfdf push edx */
  push32((uint32_t)(EDX));
  /* 12e7dfe0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12e7dfe2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7dfe5 push eax */
  push32((uint32_t)(EAX));
  /* 12e7dfe6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7dfe8 call 0x12e81610 */
  push32(0x12e7dfedu); f_12e81610();
  /* 12e7dfed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dff0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7dff3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7dff5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7dff8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7dffb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7dffe push edx */
  push32((uint32_t)(EDX));
  /* 12e7dfff push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12e7e001 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e004 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e005 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e007 call 0x12e81610 */
  push32(0x12e7e00cu); f_12e81610();
  /* 12e7e00c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e00f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e012 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e014 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e017 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e01a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e01d push edx */
  push32((uint32_t)(EDX));
  /* 12e7e01e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12e7e020 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e023 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e024 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e026 call 0x12e81610 */
  push32(0x12e7e02bu); f_12e81610();
  /* 12e7e02b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e02e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e031 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e033 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e036 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e039 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e03c push edx */
  push32((uint32_t)(EDX));
  /* 12e7e03d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12e7e03f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e042 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e043 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e045 call 0x12e81610 */
  push32(0x12e7e04au); f_12e81610();
  /* 12e7e04a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e04d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e050 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e052 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e055 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e058 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e05b push edx */
  push32((uint32_t)(EDX));
  /* 12e7e05c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12e7e05e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e061 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e062 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e064 call 0x12e81610 */
  push32(0x12e7e069u); f_12e81610();
  /* 12e7e069 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e06c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e06f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e071 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e074 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e077 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e07a push edx */
  push32((uint32_t)(EDX));
  /* 12e7e07b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 12e7e07d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e080 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e081 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e083 call 0x12e81610 */
  push32(0x12e7e088u); f_12e81610();
  /* 12e7e088 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e08b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e08e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e090 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e093 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e096 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e099 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e09a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12e7e09c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e09f push eax */
  push32((uint32_t)(EAX));
  /* 12e7e0a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e0a2 call 0x12e81610 */
  push32(0x12e7e0a7u); f_12e81610();
  /* 12e7e0a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e0aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e0ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e0af mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e0b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e0b5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e0b8 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e0b9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12e7e0bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e0be push eax */
  push32((uint32_t)(EAX));
  /* 12e7e0bf push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e0c1 call 0x12e81610 */
  push32(0x12e7e0c6u); f_12e81610();
  /* 12e7e0c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e0c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e0cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e0ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e0d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e0d4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e0d7 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e0d8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12e7e0da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e0dd push eax */
  push32((uint32_t)(EAX));
  /* 12e7e0de push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e0e0 call 0x12e81610 */
  push32(0x12e7e0e5u); f_12e81610();
  /* 12e7e0e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e0e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e0eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e0ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e0f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e0f3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e0f6 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e0f7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12e7e0f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e0fc push eax */
  push32((uint32_t)(EAX));
  /* 12e7e0fd push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e0ff call 0x12e81610 */
  push32(0x12e7e104u); f_12e81610();
  /* 12e7e104 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e107 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e10a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e10c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e10f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e112 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e118 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e119 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12e7e11b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e11e push eax */
  push32((uint32_t)(EAX));
  /* 12e7e11f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e121 call 0x12e81610 */
  push32(0x12e7e126u); f_12e81610();
  /* 12e7e126 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e129 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e12c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e12e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e131 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e134 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e13a push edx */
  push32((uint32_t)(EDX));
  /* 12e7e13b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12e7e13d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e140 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e141 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e143 call 0x12e81610 */
  push32(0x12e7e148u); f_12e81610();
  /* 12e7e148 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e14b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e14e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e150 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e153 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e156 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e15c push edx */
  push32((uint32_t)(EDX));
  /* 12e7e15d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12e7e15f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e162 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e163 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e165 call 0x12e81610 */
  push32(0x12e7e16au); f_12e81610();
  /* 12e7e16a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e16d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e170 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e172 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e175 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e178 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e17e push edx */
  push32((uint32_t)(EDX));
  /* 12e7e17f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12e7e181 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e184 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e185 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e187 call 0x12e81610 */
  push32(0x12e7e18cu); f_12e81610();
  /* 12e7e18c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e18f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e192 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e194 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e197 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e19a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e1a0 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e1a1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12e7e1a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e1a6 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e1a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e1a9 call 0x12e81610 */
  push32(0x12e7e1aeu); f_12e81610();
  /* 12e7e1ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e1b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e1b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e1b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e1b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e1bc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e1c2 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e1c3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12e7e1c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e1c8 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e1c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e1cb call 0x12e81610 */
  push32(0x12e7e1d0u); f_12e81610();
  /* 12e7e1d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e1d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e1d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e1d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e1db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e1de add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e1e4 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e1e5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12e7e1e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e1ea push eax */
  push32((uint32_t)(EAX));
  /* 12e7e1eb push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e1ed call 0x12e81610 */
  push32(0x12e7e1f2u); f_12e81610();
  /* 12e7e1f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e1f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e1f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e1fa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e1fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e200 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e206 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e207 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12e7e209 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e20c push eax */
  push32((uint32_t)(EAX));
  /* 12e7e20d push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e20f call 0x12e81610 */
  push32(0x12e7e214u); f_12e81610();
  /* 12e7e214 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e217 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e21a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e21c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e21f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e222 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e228 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e229 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12e7e22b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7e22e push eax */
  push32((uint32_t)(EAX));
  /* 12e7e22f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e231 call 0x12e81610 */
  push32(0x12e7e236u); f_12e81610();
  /* 12e7e236 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e239 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e23c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e23e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e241 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e244 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e24a push edx */
  push32((uint32_t)(EDX));
  /* 12e7e24b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12e7e24d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7e250 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e251 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e253 call 0x12e81610 */
  push32(0x12e7e258u); f_12e81610();
  /* 12e7e258 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e25b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e25e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e260 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e263 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e266 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e26c push edx */
  push32((uint32_t)(EDX));
  /* 12e7e26d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12e7e272 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7e275 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e276 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e278 call 0x12e81610 */
  push32(0x12e7e27du); f_12e81610();
  /* 12e7e27d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e280 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7e283 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e285 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e7e288 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_12e7e28b:;
  /* 12e7e28b mov esp, ebp */
  ESP = (EBP);
  /* 12e7e28d pop ebp */
  EBP = (pop32());
  /* 12e7e28e ret  */
  ESPCHK(0x12e7dd00u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12e7e290 (779 bytes, 265 insns) */
void f_12e7e290(void) {
  FTRACE(0x12e7e290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7e290 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7e291 mov ebp, esp */
  EBP = (ESP);
  /* 12e7e293 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7e297 jne 0x12e7e29e */
  if (!C.zf) goto L_12e7e29e;
  /* 12e7e299 jmp 0x12e7e599 */
  goto L_12e7e599;
L_12e7e29e:;
  /* 12e7e29e push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e2a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e2a3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e7e2a6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e2a7 call 0x12e73ee0 */
  push32(0x12e7e2acu); f_12e73ee0();
  /* 12e7e2ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e2af push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e2b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e2b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e7e2b7 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e2b8 call 0x12e73ee0 */
  push32(0x12e7e2bdu); f_12e73ee0();
  /* 12e7e2bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e2c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e2c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e2c5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e7e2c8 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e2c9 call 0x12e73ee0 */
  push32(0x12e7e2ceu); f_12e73ee0();
  /* 12e7e2ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e2d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e2d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e2d6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e7e2d9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e2da call 0x12e73ee0 */
  push32(0x12e7e2dfu); f_12e73ee0();
  /* 12e7e2df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e2e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e2e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e2e7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e7e2ea push eax */
  push32((uint32_t)(EAX));
  /* 12e7e2eb call 0x12e73ee0 */
  push32(0x12e7e2f0u); f_12e73ee0();
  /* 12e7e2f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e2f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e2f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e2f8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e7e2fb push edx */
  push32((uint32_t)(EDX));
  /* 12e7e2fc call 0x12e73ee0 */
  push32(0x12e7e301u); f_12e73ee0();
  /* 12e7e301 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e304 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e309 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e7e30b push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e30c call 0x12e73ee0 */
  push32(0x12e7e311u); f_12e73ee0();
  /* 12e7e311 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e314 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e316 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e319 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12e7e31c push eax */
  push32((uint32_t)(EAX));
  /* 12e7e31d call 0x12e73ee0 */
  push32(0x12e7e322u); f_12e73ee0();
  /* 12e7e322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e325 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e327 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e32a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12e7e32d push edx */
  push32((uint32_t)(EDX));
  /* 12e7e32e call 0x12e73ee0 */
  push32(0x12e7e333u); f_12e73ee0();
  /* 12e7e333 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e336 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e338 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e33b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 12e7e33e push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e33f call 0x12e73ee0 */
  push32(0x12e7e344u); f_12e73ee0();
  /* 12e7e344 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e347 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e349 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e34c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 12e7e34f push eax */
  push32((uint32_t)(EAX));
  /* 12e7e350 call 0x12e73ee0 */
  push32(0x12e7e355u); f_12e73ee0();
  /* 12e7e355 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e358 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e35a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e35d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12e7e360 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e361 call 0x12e73ee0 */
  push32(0x12e7e366u); f_12e73ee0();
  /* 12e7e366 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e369 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e36b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e36e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12e7e371 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e372 call 0x12e73ee0 */
  push32(0x12e7e377u); f_12e73ee0();
  /* 12e7e377 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e37a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e37c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e37f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e7e382 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e383 call 0x12e73ee0 */
  push32(0x12e7e388u); f_12e73ee0();
  /* 12e7e388 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e38b push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e38d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e390 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12e7e393 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e394 call 0x12e73ee0 */
  push32(0x12e7e399u); f_12e73ee0();
  /* 12e7e399 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e39c push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e39e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e3a1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12e7e3a4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e3a5 call 0x12e73ee0 */
  push32(0x12e7e3aau); f_12e73ee0();
  /* 12e7e3aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e3ad push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e3af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e3b2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12e7e3b5 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e3b6 call 0x12e73ee0 */
  push32(0x12e7e3bbu); f_12e73ee0();
  /* 12e7e3bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e3be push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e3c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e3c3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12e7e3c6 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e3c7 call 0x12e73ee0 */
  push32(0x12e7e3ccu); f_12e73ee0();
  /* 12e7e3cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e3cf push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e3d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e3d4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12e7e3d7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e3d8 call 0x12e73ee0 */
  push32(0x12e7e3ddu); f_12e73ee0();
  /* 12e7e3dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e3e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e3e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e3e5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12e7e3e8 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e3e9 call 0x12e73ee0 */
  push32(0x12e7e3eeu); f_12e73ee0();
  /* 12e7e3ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e3f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e3f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e3f6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12e7e3f9 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e3fa call 0x12e73ee0 */
  push32(0x12e7e3ffu); f_12e73ee0();
  /* 12e7e3ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e402 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e407 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12e7e40a push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e40b call 0x12e73ee0 */
  push32(0x12e7e410u); f_12e73ee0();
  /* 12e7e410 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e413 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e415 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e418 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 12e7e41b push eax */
  push32((uint32_t)(EAX));
  /* 12e7e41c call 0x12e73ee0 */
  push32(0x12e7e421u); f_12e73ee0();
  /* 12e7e421 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e424 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e426 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e429 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 12e7e42c push edx */
  push32((uint32_t)(EDX));
  /* 12e7e42d call 0x12e73ee0 */
  push32(0x12e7e432u); f_12e73ee0();
  /* 12e7e432 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e435 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e437 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e43a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 12e7e43d push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e43e call 0x12e73ee0 */
  push32(0x12e7e443u); f_12e73ee0();
  /* 12e7e443 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e446 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e448 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e44b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 12e7e44e push eax */
  push32((uint32_t)(EAX));
  /* 12e7e44f call 0x12e73ee0 */
  push32(0x12e7e454u); f_12e73ee0();
  /* 12e7e454 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e457 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e459 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e45c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 12e7e45f push edx */
  push32((uint32_t)(EDX));
  /* 12e7e460 call 0x12e73ee0 */
  push32(0x12e7e465u); f_12e73ee0();
  /* 12e7e465 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e468 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e46a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e46d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12e7e470 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e471 call 0x12e73ee0 */
  push32(0x12e7e476u); f_12e73ee0();
  /* 12e7e476 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e479 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e47b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e47e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12e7e481 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e482 call 0x12e73ee0 */
  push32(0x12e7e487u); f_12e73ee0();
  /* 12e7e487 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e48a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e48c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e48f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12e7e492 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e493 call 0x12e73ee0 */
  push32(0x12e7e498u); f_12e73ee0();
  /* 12e7e498 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e49b push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e49d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e4a0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12e7e4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e4a4 call 0x12e73ee0 */
  push32(0x12e7e4a9u); f_12e73ee0();
  /* 12e7e4a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e4ac push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e4ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e4b1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12e7e4b4 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e4b5 call 0x12e73ee0 */
  push32(0x12e7e4bau); f_12e73ee0();
  /* 12e7e4ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e4bd push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e4bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e4c2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12e7e4c8 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e4c9 call 0x12e73ee0 */
  push32(0x12e7e4ceu); f_12e73ee0();
  /* 12e7e4ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e4d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e4d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e4d6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 12e7e4dc push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e4dd call 0x12e73ee0 */
  push32(0x12e7e4e2u); f_12e73ee0();
  /* 12e7e4e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e4e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e4e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e4ea mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12e7e4f0 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e4f1 call 0x12e73ee0 */
  push32(0x12e7e4f6u); f_12e73ee0();
  /* 12e7e4f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e4f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e4fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e4fe mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12e7e504 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e505 call 0x12e73ee0 */
  push32(0x12e7e50au); f_12e73ee0();
  /* 12e7e50a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e50d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e50f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e512 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12e7e518 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e519 call 0x12e73ee0 */
  push32(0x12e7e51eu); f_12e73ee0();
  /* 12e7e51e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e521 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e523 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e526 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 12e7e52c push eax */
  push32((uint32_t)(EAX));
  /* 12e7e52d call 0x12e73ee0 */
  push32(0x12e7e532u); f_12e73ee0();
  /* 12e7e532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e535 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e537 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e53a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12e7e540 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e541 call 0x12e73ee0 */
  push32(0x12e7e546u); f_12e73ee0();
  /* 12e7e546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e549 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e54b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e54e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12e7e554 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e555 call 0x12e73ee0 */
  push32(0x12e7e55au); f_12e73ee0();
  /* 12e7e55a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e55d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e55f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e562 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12e7e568 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e569 call 0x12e73ee0 */
  push32(0x12e7e56eu); f_12e73ee0();
  /* 12e7e56e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e571 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e573 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e576 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12e7e57c push edx */
  push32((uint32_t)(EDX));
  /* 12e7e57d call 0x12e73ee0 */
  push32(0x12e7e582u); f_12e73ee0();
  /* 12e7e582 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e585 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e587 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e58a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12e7e590 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e591 call 0x12e73ee0 */
  push32(0x12e7e596u); f_12e73ee0();
  /* 12e7e596 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7e599:;
  /* 12e7e599 pop ebp */
  EBP = (pop32());
  /* 12e7e59a ret  */
  ESPCHK(0x12e7e290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5a0 @ 0x12e7e5a0 (678 bytes, 180 insns) */
void f_12e7e5a0(void) {
  FTRACE(0x12e7e5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7e5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7e5a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7e5a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7e5a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e7e5ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7e5af mov ax, word ptr [0x12e8f732] */
  AX = (r16((uint32_t)(0x12e8f732)));
  /* 12e7e5b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7e5b8 cmp dword ptr [0x12e8f6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7e5bf je 0x12e7e71a */
  if (C.zf) goto L_12e7e71a;
  /* 12e7e5c5 push 0x12e8f700 */
  push32((uint32_t)(0x12e8f700u));
  /* 12e7e5ca push 0xe */
  push32((uint32_t)(0xeu));
  /* 12e7e5cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e5cf push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e5d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e5d2 call 0x12e81610 */
  push32(0x12e7e5d7u); f_12e81610();
  /* 12e7e5d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e5da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7e5dd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7e5df mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e7e5e2 push 0x12e8f704 */
  push32((uint32_t)(0x12e8f704u));
  /* 12e7e5e7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12e7e5e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e5ec push eax */
  push32((uint32_t)(EAX));
  /* 12e7e5ed push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e5ef call 0x12e81610 */
  push32(0x12e7e5f4u); f_12e81610();
  /* 12e7e5f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e5f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7e5fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e5fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7e5ff push 0x12e8f708 */
  push32((uint32_t)(0x12e8f708u));
  /* 12e7e604 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12e7e606 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e609 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e60a push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e60c call 0x12e81610 */
  push32(0x12e7e611u); f_12e81610();
  /* 12e7e611 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e614 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7e617 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7e619 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7e61c mov edx, dword ptr [0x12e8f708] */
  EDX = (r32((uint32_t)(0x12e8f708)));
  /* 12e7e622 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e623 call 0x12e7e850 */
  push32(0x12e7e628u); f_12e7e850();
  /* 12e7e628 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e62b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7e62f je 0x12e7e689 */
  if (C.zf) goto L_12e7e689;
  /* 12e7e631 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e633 mov eax, dword ptr [0x12e8f700] */
  EAX = (r32((uint32_t)(0x12e8f700)));
  /* 12e7e638 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e639 call 0x12e73ee0 */
  push32(0x12e7e63eu); f_12e73ee0();
  /* 12e7e63e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e641 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e643 mov ecx, dword ptr [0x12e8f704] */
  ECX = (r32((uint32_t)(0x12e8f704)));
  /* 12e7e649 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e64a call 0x12e73ee0 */
  push32(0x12e7e64fu); f_12e73ee0();
  /* 12e7e64f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e652 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e654 mov edx, dword ptr [0x12e8f708] */
  EDX = (r32((uint32_t)(0x12e8f708)));
  /* 12e7e65a push edx */
  push32((uint32_t)(EDX));
  /* 12e7e65b call 0x12e73ee0 */
  push32(0x12e7e660u); f_12e73ee0();
  /* 12e7e660 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e663 mov dword ptr [0x12e8f700], 0 */
  w32((uint32_t)(0x12e8f700), (0x0u));
  /* 12e7e66d mov dword ptr [0x12e8f704], 0 */
  w32((uint32_t)(0x12e8f704), (0x0u));
  /* 12e7e677 mov dword ptr [0x12e8f708], 0 */
  w32((uint32_t)(0x12e8f708), (0x0u));
  /* 12e7e681 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7e684 jmp 0x12e7e842 */
  goto L_12e7e842;
L_12e7e689:;
  /* 12e7e689 mov eax, dword ptr [0x12e8eda8] */
  EAX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e68e cmp dword ptr [eax], 0x12e8ed70 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12e8ed70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7e694 je 0x12e7e6d0 */
  if (C.zf) goto L_12e7e6d0;
  /* 12e7e696 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e698 mov ecx, dword ptr [0x12e8eda8] */
  ECX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e69e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e7e6a0 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e6a1 call 0x12e73ee0 */
  push32(0x12e7e6a6u); f_12e73ee0();
  /* 12e7e6a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e6a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e6ab mov eax, dword ptr [0x12e8eda8] */
  EAX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e6b0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e7e6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e6b4 call 0x12e73ee0 */
  push32(0x12e7e6b9u); f_12e73ee0();
  /* 12e7e6b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e6bc push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e6be mov edx, dword ptr [0x12e8eda8] */
  EDX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e6c4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e7e6c7 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e6c8 call 0x12e73ee0 */
  push32(0x12e7e6cdu); f_12e73ee0();
  /* 12e7e6cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7e6d0:;
  /* 12e7e6d0 mov ecx, dword ptr [0x12e8eda8] */
  ECX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e6d6 mov edx, dword ptr [0x12e8f700] */
  EDX = (r32((uint32_t)(0x12e8f700)));
  /* 12e7e6dc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12e7e6de mov eax, dword ptr [0x12e8eda8] */
  EAX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e6e3 mov ecx, dword ptr [0x12e8f704] */
  ECX = (r32((uint32_t)(0x12e8f704)));
  /* 12e7e6e9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12e7e6ec mov edx, dword ptr [0x12e8eda8] */
  EDX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e6f2 mov eax, dword ptr [0x12e8f708] */
  EAX = (r32((uint32_t)(0x12e8f708)));
  /* 12e7e6f7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12e7e6fa mov ecx, dword ptr [0x12e8eda8] */
  ECX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e700 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e7e702 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e7e704 mov byte ptr [0x12e8dec8], al */
  w8((uint32_t)(0x12e8dec8), (AL));
  /* 12e7e709 mov dword ptr [0x12e8decc], 1 */
  w32((uint32_t)(0x12e8decc), (0x1u));
  /* 12e7e713 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7e715 jmp 0x12e7e842 */
  goto L_12e7e842;
L_12e7e71a:;
  /* 12e7e71a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e71c mov ecx, dword ptr [0x12e8f700] */
  ECX = (r32((uint32_t)(0x12e8f700)));
  /* 12e7e722 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e723 call 0x12e73ee0 */
  push32(0x12e7e728u); f_12e73ee0();
  /* 12e7e728 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e72b push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e72d mov edx, dword ptr [0x12e8f704] */
  EDX = (r32((uint32_t)(0x12e8f704)));
  /* 12e7e733 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e734 call 0x12e73ee0 */
  push32(0x12e7e739u); f_12e73ee0();
  /* 12e7e739 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e73c push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e73e mov eax, dword ptr [0x12e8f708] */
  EAX = (r32((uint32_t)(0x12e8f708)));
  /* 12e7e743 push eax */
  push32((uint32_t)(EAX));
  /* 12e7e744 call 0x12e73ee0 */
  push32(0x12e7e749u); f_12e73ee0();
  /* 12e7e749 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e74c mov dword ptr [0x12e8f700], 0 */
  w32((uint32_t)(0x12e8f700), (0x0u));
  /* 12e7e756 mov dword ptr [0x12e8f704], 0 */
  w32((uint32_t)(0x12e8f704), (0x0u));
  /* 12e7e760 mov dword ptr [0x12e8f708], 0 */
  w32((uint32_t)(0x12e8f708), (0x0u));
  /* 12e7e76a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12e7e76f push 0x12e8b0cc */
  push32((uint32_t)(0x12e8b0ccu));
  /* 12e7e774 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e776 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e778 call 0x12e73450 */
  push32(0x12e7e77du); f_12e73450();
  /* 12e7e77d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e780 mov ecx, dword ptr [0x12e8eda8] */
  ECX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e786 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e7e788 mov edx, dword ptr [0x12e8eda8] */
  EDX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e78e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7e791 jne 0x12e7e79b */
  if (!C.zf) goto L_12e7e79b;
  /* 12e7e793 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7e796 jmp 0x12e7e842 */
  goto L_12e7e842;
L_12e7e79b:;
  /* 12e7e79b push 0x12e8b09c */
  push32((uint32_t)(0x12e8b09cu));
  /* 12e7e7a0 mov eax, dword ptr [0x12e8eda8] */
  EAX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e7a5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e7e7a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e7a8 call 0x12e76400 */
  push32(0x12e7e7adu); f_12e76400();
  /* 12e7e7ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e7b0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12e7e7b5 push 0x12e8b0cc */
  push32((uint32_t)(0x12e8b0ccu));
  /* 12e7e7ba push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e7bc push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e7be call 0x12e73450 */
  push32(0x12e7e7c3u); f_12e73450();
  /* 12e7e7c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e7c6 mov edx, dword ptr [0x12e8eda8] */
  EDX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e7cc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12e7e7cf mov eax, dword ptr [0x12e8eda8] */
  EAX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e7d4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7e7d8 jne 0x12e7e7df */
  if (!C.zf) goto L_12e7e7df;
  /* 12e7e7da or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7e7dd jmp 0x12e7e842 */
  goto L_12e7e842;
L_12e7e7df:;
  /* 12e7e7df mov ecx, dword ptr [0x12e8eda8] */
  ECX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e7e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e7e7e8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12e7e7eb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12e7e7f0 push 0x12e8b0cc */
  push32((uint32_t)(0x12e8b0ccu));
  /* 12e7e7f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e7f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e7f9 call 0x12e73450 */
  push32(0x12e7e7feu); f_12e73450();
  /* 12e7e7fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e801 mov ecx, dword ptr [0x12e8eda8] */
  ECX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e807 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12e7e80a mov edx, dword ptr [0x12e8eda8] */
  EDX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e810 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7e814 jne 0x12e7e81b */
  if (!C.zf) goto L_12e7e81b;
  /* 12e7e816 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7e819 jmp 0x12e7e842 */
  goto L_12e7e842;
L_12e7e81b:;
  /* 12e7e81b mov eax, dword ptr [0x12e8eda8] */
  EAX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e820 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e7e823 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12e7e826 mov edx, dword ptr [0x12e8eda8] */
  EDX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e82c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e7e82e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e7e830 mov byte ptr [0x12e8dec8], cl */
  w8((uint32_t)(0x12e8dec8), (CL));
  /* 12e7e836 mov dword ptr [0x12e8decc], 1 */
  w32((uint32_t)(0x12e8decc), (0x1u));
  /* 12e7e840 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e7e842:;
  /* 12e7e842 mov esp, ebp */
  ESP = (EBP);
  /* 12e7e844 pop ebp */
  EBP = (pop32());
  /* 12e7e845 ret  */
  ESPCHK(0x12e7e5a0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12e7e850 (125 bytes, 49 insns) */
void f_12e7e850(void) {
  FTRACE(0x12e7e850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7e850 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7e851 mov ebp, esp */
  EBP = (ESP);
  /* 12e7e853 push ecx */
  push32((uint32_t)(ECX));
L_12e7e854:;
  /* 12e7e854 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e857 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e7e85a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7e85c je 0x12e7e8c9 */
  if (C.zf) goto L_12e7e8c9;
  /* 12e7e85e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e861 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e7e864 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7e867 jl 0x12e7e88d */
  if ((C.sf!=C.of)) goto L_12e7e88d;
  /* 12e7e869 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e86c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e7e86f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7e872 jg 0x12e7e88d */
  if ((!C.zf&&C.sf==C.of)) goto L_12e7e88d;
  /* 12e7e874 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e877 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e7e87a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7e87d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e880 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12e7e882 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e885 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e888 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e7e88b jmp 0x12e7e8c7 */
  goto L_12e7e8c7;
L_12e7e88d:;
  /* 12e7e88d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e890 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e7e893 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7e896 jne 0x12e7e8be */
  if (!C.zf) goto L_12e7e8be;
  /* 12e7e898 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e89b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e7e89e:;
  /* 12e7e89e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e8a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e8a4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12e7e8a7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e7e8a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e8ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e8af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e7e8b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e8b5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e7e8b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7e8ba jne 0x12e7e89e */
  if (!C.zf) goto L_12e7e89e;
  /* 12e7e8bc jmp 0x12e7e8c7 */
  goto L_12e7e8c7;
L_12e7e8be:;
  /* 12e7e8be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7e8c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e8c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12e7e8c7:;
  /* 12e7e8c7 jmp 0x12e7e854 */
  goto L_12e7e854;
L_12e7e8c9:;
  /* 12e7e8c9 mov esp, ebp */
  ESP = (EBP);
  /* 12e7e8cb pop ebp */
  EBP = (pop32());
  /* 12e7e8cc ret  */
  ESPCHK(0x12e7e850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8d0 @ 0x12e7e8d0 (304 bytes, 85 insns) */
void f_12e7e8d0(void) {
  FTRACE(0x12e7e8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7e8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7e8d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7e8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e8d4 cmp dword ptr [0x12e8f6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7e8db je 0x12e7e99c */
  if (C.zf) goto L_12e7e99c;
  /* 12e7e8e1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12e7e8e3 push 0x12e8b0d8 */
  push32((uint32_t)(0x12e8b0d8u));
  /* 12e7e8e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e8ea push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12e7e8ec push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7e8ee call 0x12e73860 */
  push32(0x12e7e8f3u); f_12e73860();
  /* 12e7e8f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e8f6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7e8f9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7e8fd jne 0x12e7e909 */
  if (!C.zf) goto L_12e7e909;
  /* 12e7e8ff mov eax, 1 */
  EAX = (0x1u);
  /* 12e7e904 jmp 0x12e7e9fc */
  goto L_12e7e9fc;
L_12e7e909:;
  /* 12e7e909 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e90c push eax */
  push32((uint32_t)(EAX));
  /* 12e7e90d call 0x12e7ea00 */
  push32(0x12e7e912u); f_12e7ea00();
  /* 12e7e912 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e915 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7e917 je 0x12e7e93d */
  if (C.zf) goto L_12e7e93d;
  /* 12e7e919 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e91c push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e91d call 0x12e7ec90 */
  push32(0x12e7e922u); f_12e7ec90();
  /* 12e7e922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e925 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e927 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e92a push edx */
  push32((uint32_t)(EDX));
  /* 12e7e92b call 0x12e73ee0 */
  push32(0x12e7e930u); f_12e73ee0();
  /* 12e7e930 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e933 mov eax, 1 */
  EAX = (0x1u);
  /* 12e7e938 jmp 0x12e7e9fc */
  goto L_12e7e9fc;
L_12e7e93d:;
  /* 12e7e93d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e940 mov ecx, dword ptr [0x12e8eda8] */
  ECX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e946 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e7e948 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e7e94a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e94d mov ecx, dword ptr [0x12e8eda8] */
  ECX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e953 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e7e956 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12e7e959 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e95c mov ecx, dword ptr [0x12e8eda8] */
  ECX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e962 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e7e965 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12e7e968 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e96b mov dword ptr [0x12e8eda8], eax */
  w32((uint32_t)(0x12e8eda8), (EAX));
  /* 12e7e970 mov ecx, dword ptr [0x12e8f70c] */
  ECX = (r32((uint32_t)(0x12e8f70c)));
  /* 12e7e976 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e977 call 0x12e7ec90 */
  push32(0x12e7e97cu); f_12e7ec90();
  /* 12e7e97c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e97f push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e981 mov edx, dword ptr [0x12e8f70c] */
  EDX = (r32((uint32_t)(0x12e8f70c)));
  /* 12e7e987 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e988 call 0x12e73ee0 */
  push32(0x12e7e98du); f_12e73ee0();
  /* 12e7e98d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e990 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7e993 mov dword ptr [0x12e8f70c], eax */
  w32((uint32_t)(0x12e8f70c), (EAX));
  /* 12e7e998 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7e99a jmp 0x12e7e9fc */
  goto L_12e7e9fc;
L_12e7e99c:;
  /* 12e7e99c mov ecx, dword ptr [0x12e8eda8] */
  ECX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e9a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e7e9a4 mov dword ptr [0x12e8ed78], edx */
  w32((uint32_t)(0x12e8ed78), (EDX));
  /* 12e7e9aa mov eax, dword ptr [0x12e8eda8] */
  EAX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e9af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e7e9b2 mov dword ptr [0x12e8ed7c], ecx */
  w32((uint32_t)(0x12e8ed7c), (ECX));
  /* 12e7e9b8 mov edx, dword ptr [0x12e8eda8] */
  EDX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e7e9be mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e7e9c1 mov dword ptr [0x12e8ed80], eax */
  w32((uint32_t)(0x12e8ed80), (EAX));
  /* 12e7e9c6 mov dword ptr [0x12e8eda8], 0x12e8ed78 */
  w32((uint32_t)(0x12e8eda8), (0x12e8ed78u));
  /* 12e7e9d0 mov ecx, dword ptr [0x12e8f70c] */
  ECX = (r32((uint32_t)(0x12e8f70c)));
  /* 12e7e9d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7e9d7 call 0x12e7ec90 */
  push32(0x12e7e9dcu); f_12e7ec90();
  /* 12e7e9dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e9df push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7e9e1 mov edx, dword ptr [0x12e8f70c] */
  EDX = (r32((uint32_t)(0x12e8f70c)));
  /* 12e7e9e7 push edx */
  push32((uint32_t)(EDX));
  /* 12e7e9e8 call 0x12e73ee0 */
  push32(0x12e7e9edu); f_12e73ee0();
  /* 12e7e9ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7e9f0 mov dword ptr [0x12e8f70c], 0 */
  w32((uint32_t)(0x12e8f70c), (0x0u));
  /* 12e7e9fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e7e9fc:;
  /* 12e7e9fc mov esp, ebp */
  ESP = (EBP);
  /* 12e7e9fe pop ebp */
  EBP = (pop32());
  /* 12e7e9ff ret  */
  ESPCHK(0x12e7e8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea00 @ 0x12e7ea00 (525 bytes, 200 insns) */
void f_12e7ea00(void) {
  FTRACE(0x12e7ea00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7ea00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7ea01 mov ebp, esp */
  EBP = (ESP);
  /* 12e7ea03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7ea06 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e7ea0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7ea0f mov ax, word ptr [0x12e8f72c] */
  AX = (r16((uint32_t)(0x12e8f72c)));
  /* 12e7ea15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7ea18 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ea1c jne 0x12e7ea26 */
  if (!C.zf) goto L_12e7ea26;
  /* 12e7ea1e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7ea21 jmp 0x12e7ec09 */
  goto L_12e7ec09;
L_12e7ea26:;
  /* 12e7ea26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ea29 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ea2c push ecx */
  push32((uint32_t)(ECX));
  /* 12e7ea2d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12e7ea2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ea32 push edx */
  push32((uint32_t)(EDX));
  /* 12e7ea33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7ea35 call 0x12e81610 */
  push32(0x12e7ea3au); f_12e81610();
  /* 12e7ea3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ea3d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7ea40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ea42 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7ea45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ea48 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ea4b push edx */
  push32((uint32_t)(EDX));
  /* 12e7ea4c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12e7ea4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ea51 push eax */
  push32((uint32_t)(EAX));
  /* 12e7ea52 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7ea54 call 0x12e81610 */
  push32(0x12e7ea59u); f_12e81610();
  /* 12e7ea59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ea5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7ea5f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ea61 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7ea64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ea67 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ea6a push edx */
  push32((uint32_t)(EDX));
  /* 12e7ea6b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12e7ea6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ea70 push eax */
  push32((uint32_t)(EAX));
  /* 12e7ea71 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7ea73 call 0x12e81610 */
  push32(0x12e7ea78u); f_12e81610();
  /* 12e7ea78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ea7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7ea7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ea80 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7ea83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ea86 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ea89 push edx */
  push32((uint32_t)(EDX));
  /* 12e7ea8a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12e7ea8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ea8f push eax */
  push32((uint32_t)(EAX));
  /* 12e7ea90 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7ea92 call 0x12e81610 */
  push32(0x12e7ea97u); f_12e81610();
  /* 12e7ea97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ea9a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7ea9d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ea9f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7eaa2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7eaa5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eaa8 push edx */
  push32((uint32_t)(EDX));
  /* 12e7eaa9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12e7eaab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7eaae push eax */
  push32((uint32_t)(EAX));
  /* 12e7eaaf push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7eab1 call 0x12e81610 */
  push32(0x12e7eab6u); f_12e81610();
  /* 12e7eab6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eab9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7eabc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7eabe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7eac1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7eac4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e7eac7 push eax */
  push32((uint32_t)(EAX));
  /* 12e7eac8 call 0x12e7ec10 */
  push32(0x12e7eacdu); f_12e7ec10();
  /* 12e7eacd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ead0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ead3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ead6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7ead7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12e7ead9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7eadc push edx */
  push32((uint32_t)(EDX));
  /* 12e7eadd push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7eadf call 0x12e81610 */
  push32(0x12e7eae4u); f_12e81610();
  /* 12e7eae4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eae7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7eaea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7eaec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7eaef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7eaf2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eaf5 push edx */
  push32((uint32_t)(EDX));
  /* 12e7eaf6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12e7eaf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7eafb push eax */
  push32((uint32_t)(EAX));
  /* 12e7eafc push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7eafe call 0x12e81610 */
  push32(0x12e7eb03u); f_12e81610();
  /* 12e7eb03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eb06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7eb09 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7eb0b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7eb0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7eb11 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eb14 push edx */
  push32((uint32_t)(EDX));
  /* 12e7eb15 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12e7eb17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7eb1a push eax */
  push32((uint32_t)(EAX));
  /* 12e7eb1b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7eb1d call 0x12e81610 */
  push32(0x12e7eb22u); f_12e81610();
  /* 12e7eb22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eb25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7eb28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7eb2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7eb2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7eb30 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eb33 push edx */
  push32((uint32_t)(EDX));
  /* 12e7eb34 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e7eb36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7eb39 push eax */
  push32((uint32_t)(EAX));
  /* 12e7eb3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7eb3c call 0x12e81610 */
  push32(0x12e7eb41u); f_12e81610();
  /* 12e7eb41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eb44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7eb47 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7eb49 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7eb4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7eb4f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eb52 push edx */
  push32((uint32_t)(EDX));
  /* 12e7eb53 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12e7eb55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7eb58 push eax */
  push32((uint32_t)(EAX));
  /* 12e7eb59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7eb5b call 0x12e81610 */
  push32(0x12e7eb60u); f_12e81610();
  /* 12e7eb60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eb63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7eb66 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7eb68 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7eb6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7eb6e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eb71 push edx */
  push32((uint32_t)(EDX));
  /* 12e7eb72 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12e7eb74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7eb77 push eax */
  push32((uint32_t)(EAX));
  /* 12e7eb78 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7eb7a call 0x12e81610 */
  push32(0x12e7eb7fu); f_12e81610();
  /* 12e7eb7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eb82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7eb85 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7eb87 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7eb8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7eb8d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eb90 push edx */
  push32((uint32_t)(EDX));
  /* 12e7eb91 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12e7eb93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7eb96 push eax */
  push32((uint32_t)(EAX));
  /* 12e7eb97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7eb99 call 0x12e81610 */
  push32(0x12e7eb9eu); f_12e81610();
  /* 12e7eb9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eba1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7eba4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7eba6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7eba9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ebac add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ebaf push edx */
  push32((uint32_t)(EDX));
  /* 12e7ebb0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12e7ebb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ebb5 push eax */
  push32((uint32_t)(EAX));
  /* 12e7ebb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7ebb8 call 0x12e81610 */
  push32(0x12e7ebbdu); f_12e81610();
  /* 12e7ebbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ebc0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7ebc3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ebc5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7ebc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ebcb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ebce push edx */
  push32((uint32_t)(EDX));
  /* 12e7ebcf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12e7ebd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ebd4 push eax */
  push32((uint32_t)(EAX));
  /* 12e7ebd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7ebd7 call 0x12e81610 */
  push32(0x12e7ebdcu); f_12e81610();
  /* 12e7ebdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ebdf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7ebe2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ebe4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7ebe7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ebea add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ebed push edx */
  push32((uint32_t)(EDX));
  /* 12e7ebee push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12e7ebf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ebf3 push eax */
  push32((uint32_t)(EAX));
  /* 12e7ebf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7ebf6 call 0x12e81610 */
  push32(0x12e7ebfbu); f_12e81610();
  /* 12e7ebfb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ebfe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7ec01 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ec03 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7ec06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12e7ec09:;
  /* 12e7ec09 mov esp, ebp */
  ESP = (EBP);
  /* 12e7ec0b pop ebp */
  EBP = (pop32());
  /* 12e7ec0c ret  */
  ESPCHK(0x12e7ea00u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12e7ec10 (125 bytes, 49 insns) */
void f_12e7ec10(void) {
  FTRACE(0x12e7ec10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7ec10 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7ec11 mov ebp, esp */
  EBP = (ESP);
  /* 12e7ec13 push ecx */
  push32((uint32_t)(ECX));
L_12e7ec14:;
  /* 12e7ec14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ec17 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e7ec1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7ec1c je 0x12e7ec89 */
  if (C.zf) goto L_12e7ec89;
  /* 12e7ec1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ec21 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e7ec24 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ec27 jl 0x12e7ec4d */
  if ((C.sf!=C.of)) goto L_12e7ec4d;
  /* 12e7ec29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ec2c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e7ec2f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ec32 jg 0x12e7ec4d */
  if ((!C.zf&&C.sf==C.of)) goto L_12e7ec4d;
  /* 12e7ec34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ec37 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e7ec3a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7ec3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ec40 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12e7ec42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ec45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ec48 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e7ec4b jmp 0x12e7ec87 */
  goto L_12e7ec87;
L_12e7ec4d:;
  /* 12e7ec4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ec50 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e7ec53 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ec56 jne 0x12e7ec7e */
  if (!C.zf) goto L_12e7ec7e;
  /* 12e7ec58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ec5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e7ec5e:;
  /* 12e7ec5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ec61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ec64 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12e7ec67 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e7ec69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ec6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ec6f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e7ec72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ec75 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e7ec78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7ec7a jne 0x12e7ec5e */
  if (!C.zf) goto L_12e7ec5e;
  /* 12e7ec7c jmp 0x12e7ec87 */
  goto L_12e7ec87;
L_12e7ec7e:;
  /* 12e7ec7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ec81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ec84 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12e7ec87:;
  /* 12e7ec87 jmp 0x12e7ec14 */
  goto L_12e7ec14;
L_12e7ec89:;
  /* 12e7ec89 mov esp, ebp */
  ESP = (EBP);
  /* 12e7ec8b pop ebp */
  EBP = (pop32());
  /* 12e7ec8c ret  */
  ESPCHK(0x12e7ec10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec90 @ 0x12e7ec90 (147 bytes, 52 insns) */
void f_12e7ec90(void) {
  FTRACE(0x12e7ec90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7ec90 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7ec91 mov ebp, esp */
  EBP = (ESP);
  /* 12e7ec93 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ec97 jne 0x12e7ec9e */
  if (!C.zf) goto L_12e7ec9e;
  /* 12e7ec99 jmp 0x12e7ed21 */
  goto L_12e7ed21;
L_12e7ec9e:;
  /* 12e7ec9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7eca1 cmp dword ptr [eax + 0xc], 0x12e8f768 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12e8f768u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7eca8 je 0x12e7ed21 */
  if (C.zf) goto L_12e7ed21;
  /* 12e7ecaa push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7ecac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ecaf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e7ecb2 push edx */
  push32((uint32_t)(EDX));
  /* 12e7ecb3 call 0x12e73ee0 */
  push32(0x12e7ecb8u); f_12e73ee0();
  /* 12e7ecb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ecbb push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7ecbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ecc0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e7ecc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7ecc4 call 0x12e73ee0 */
  push32(0x12e7ecc9u); f_12e73ee0();
  /* 12e7ecc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eccc push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7ecce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ecd1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e7ecd4 push eax */
  push32((uint32_t)(EAX));
  /* 12e7ecd5 call 0x12e73ee0 */
  push32(0x12e7ecdau); f_12e73ee0();
  /* 12e7ecda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ecdd push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7ecdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ece2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e7ece5 push edx */
  push32((uint32_t)(EDX));
  /* 12e7ece6 call 0x12e73ee0 */
  push32(0x12e7ecebu); f_12e73ee0();
  /* 12e7eceb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ecee push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7ecf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ecf3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12e7ecf6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7ecf7 call 0x12e73ee0 */
  push32(0x12e7ecfcu); f_12e73ee0();
  /* 12e7ecfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ecff push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7ed01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ed04 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12e7ed07 push eax */
  push32((uint32_t)(EAX));
  /* 12e7ed08 call 0x12e73ee0 */
  push32(0x12e7ed0du); f_12e73ee0();
  /* 12e7ed0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ed10 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7ed12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ed15 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12e7ed18 push edx */
  push32((uint32_t)(EDX));
  /* 12e7ed19 call 0x12e73ee0 */
  push32(0x12e7ed1eu); f_12e73ee0();
  /* 12e7ed1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7ed21:;
  /* 12e7ed21 pop ebp */
  EBP = (pop32());
  /* 12e7ed22 ret  */
  ESPCHK(0x12e7ec90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed30 @ 0x12e7ed30 (928 bytes, 284 insns) */
void f_12e7ed30(void) {
  FTRACE(0x12e7ed30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7ed30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7ed31 mov ebp, esp */
  EBP = (ESP);
  /* 12e7ed33 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7ed36 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12e7ed3d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12e7ed44 cmp dword ptr [0x12e8f6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ed4b je 0x12e7f081 */
  if (C.zf) goto L_12e7f081;
  /* 12e7ed51 cmp dword ptr [0x12e8f6e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f6e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ed58 jne 0x12e7ed80 */
  if (!C.zf) goto L_12e7ed80;
  /* 12e7ed5a push 0x12e8f6e0 */
  push32((uint32_t)(0x12e8f6e0u));
  /* 12e7ed5f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12e7ed64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7ed66 mov ax, word ptr [0x12e8f724] */
  AX = (r16((uint32_t)(0x12e8f724)));
  /* 12e7ed6c push eax */
  push32((uint32_t)(EAX));
  /* 12e7ed6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7ed6f call 0x12e81610 */
  push32(0x12e7ed74u); f_12e81610();
  /* 12e7ed74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ed77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7ed79 je 0x12e7ed80 */
  if (C.zf) goto L_12e7ed80;
  /* 12e7ed7b jmp 0x12e7f042 */
  goto L_12e7f042;
L_12e7ed80:;
  /* 12e7ed80 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12e7ed82 push 0x12e8b0e4 */
  push32((uint32_t)(0x12e8b0e4u));
  /* 12e7ed87 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7ed89 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12e7ed8e call 0x12e73450 */
  push32(0x12e7ed93u); f_12e73450();
  /* 12e7ed93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ed96 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12e7ed99 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12e7ed9b push 0x12e8b0e4 */
  push32((uint32_t)(0x12e8b0e4u));
  /* 12e7eda0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7eda2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12e7eda7 call 0x12e73450 */
  push32(0x12e7edacu); f_12e73450();
  /* 12e7edac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7edaf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e7edb2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12e7edb4 push 0x12e8b0e4 */
  push32((uint32_t)(0x12e8b0e4u));
  /* 12e7edb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7edbb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12e7edc0 call 0x12e73450 */
  push32(0x12e7edc5u); f_12e73450();
  /* 12e7edc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7edc8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12e7edcb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12e7edcd push 0x12e8b0e4 */
  push32((uint32_t)(0x12e8b0e4u));
  /* 12e7edd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7edd4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12e7edd9 call 0x12e73450 */
  push32(0x12e7eddeu); f_12e73450();
  /* 12e7edde add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ede1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e7ede4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ede8 je 0x12e7edfc */
  if (C.zf) goto L_12e7edfc;
  /* 12e7edea cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7edee je 0x12e7edfc */
  if (C.zf) goto L_12e7edfc;
  /* 12e7edf0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7edf4 je 0x12e7edfc */
  if (C.zf) goto L_12e7edfc;
  /* 12e7edf6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7edfa jne 0x12e7ee01 */
  if (!C.zf) goto L_12e7ee01;
L_12e7edfc:;
  /* 12e7edfc jmp 0x12e7f042 */
  goto L_12e7f042;
L_12e7ee01:;
  /* 12e7ee01 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e7ee04 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12e7ee07 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12e7ee0e jmp 0x12e7ee19 */
  goto L_12e7ee19;
L_12e7ee10:;
  /* 12e7ee10 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7ee13 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ee16 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12e7ee19:;
  /* 12e7ee19 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ee20 jge 0x12e7ee35 */
  if ((C.sf==C.of)) goto L_12e7ee35;
  /* 12e7ee22 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7ee25 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12e7ee28 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12e7ee2a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7ee2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ee30 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12e7ee33 jmp 0x12e7ee10 */
  goto L_12e7ee10;
L_12e7ee35:;
  /* 12e7ee35 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12e7ee38 push eax */
  push32((uint32_t)(EAX));
  /* 12e7ee39 mov ecx, dword ptr [0x12e8f6e0] */
  ECX = (r32((uint32_t)(0x12e8f6e0)));
  /* 12e7ee3f push ecx */
  push32((uint32_t)(ECX));
  /* 12e7ee40 call dword ptr [0x12e922ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922ec))), 0x12e7ee46u);
  /* 12e7ee46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7ee48 jne 0x12e7ee4f */
  if (!C.zf) goto L_12e7ee4f;
  /* 12e7ee4a jmp 0x12e7f042 */
  goto L_12e7f042;
L_12e7ee4f:;
  /* 12e7ee4f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ee53 jbe 0x12e7ee5a */
  if ((C.cf||C.zf)) goto L_12e7ee5a;
  /* 12e7ee55 jmp 0x12e7f042 */
  goto L_12e7f042;
L_12e7ee5a:;
  /* 12e7ee5a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e7ee5d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7ee63 mov dword ptr [0x12e8dec4], edx */
  w32((uint32_t)(0x12e8dec4), (EDX));
  /* 12e7ee69 cmp dword ptr [0x12e8dec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8dec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ee70 jle 0x12e7eec9 */
  if ((C.zf||C.sf!=C.of)) goto L_12e7eec9;
  /* 12e7ee72 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12e7ee75 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e7ee78 jmp 0x12e7ee83 */
  goto L_12e7ee83;
L_12e7ee7a:;
  /* 12e7ee7a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7ee7d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ee80 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12e7ee83:;
  /* 12e7ee83 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7ee86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7ee88 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e7ee8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7ee8c je 0x12e7eec9 */
  if (C.zf) goto L_12e7eec9;
  /* 12e7ee8e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7ee91 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7ee93 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12e7ee96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7ee98 je 0x12e7eec9 */
  if (C.zf) goto L_12e7eec9;
  /* 12e7ee9a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7ee9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ee9f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e7eea1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12e7eea4 jmp 0x12e7eeaf */
  goto L_12e7eeaf;
L_12e7eea6:;
  /* 12e7eea6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7eea9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eeac mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12e7eeaf:;
  /* 12e7eeaf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7eeb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7eeb4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12e7eeb7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7eeba jg 0x12e7eec7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e7eec7;
  /* 12e7eebc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e7eebf add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eec2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12e7eec5 jmp 0x12e7eea6 */
  goto L_12e7eea6;
L_12e7eec7:;
  /* 12e7eec7 jmp 0x12e7ee7a */
  goto L_12e7ee7a;
L_12e7eec9:;
  /* 12e7eec9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7eecb push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7eecd push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7eecf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e7eed2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eed5 push eax */
  push32((uint32_t)(EAX));
  /* 12e7eed6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e7eedb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e7eede push ecx */
  push32((uint32_t)(ECX));
  /* 12e7eedf push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7eee1 call 0x12e7b680 */
  push32(0x12e7eee6u); f_12e7b680();
  /* 12e7eee6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7eee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7eeeb jne 0x12e7eef2 */
  if (!C.zf) goto L_12e7eef2;
  /* 12e7eeed jmp 0x12e7f042 */
  goto L_12e7f042;
L_12e7eef2:;
  /* 12e7eef2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e7eef5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12e7eefa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e7eefd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e7ef00 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12e7ef07 jmp 0x12e7ef12 */
  goto L_12e7ef12;
L_12e7ef09:;
  /* 12e7ef09 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7ef0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ef0f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12e7ef12:;
  /* 12e7ef12 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ef19 jge 0x12e7ef30 */
  if ((C.sf==C.of)) goto L_12e7ef30;
  /* 12e7ef1b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e7ef1e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12e7ef22 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12e7ef25 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e7ef28 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ef2b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12e7ef2e jmp 0x12e7ef09 */
  goto L_12e7ef09;
L_12e7ef30:;
  /* 12e7ef30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7ef32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7ef34 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e7ef37 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ef3a push edx */
  push32((uint32_t)(EDX));
  /* 12e7ef3b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e7ef40 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e7ef43 push eax */
  push32((uint32_t)(EAX));
  /* 12e7ef44 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7ef46 call 0x12e818b0 */
  push32(0x12e7ef4bu); f_12e818b0();
  /* 12e7ef4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ef4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7ef50 jne 0x12e7ef57 */
  if (!C.zf) goto L_12e7ef57;
  /* 12e7ef52 jmp 0x12e7f042 */
  goto L_12e7f042;
L_12e7ef57:;
  /* 12e7ef57 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e7ef5a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12e7ef5f cmp dword ptr [0x12e8dec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8dec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ef66 jle 0x12e7efc3 */
  if ((C.zf||C.sf!=C.of)) goto L_12e7efc3;
  /* 12e7ef68 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12e7ef6b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12e7ef6e jmp 0x12e7ef79 */
  goto L_12e7ef79;
L_12e7ef70:;
  /* 12e7ef70 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7ef73 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ef76 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12e7ef79:;
  /* 12e7ef79 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7ef7c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7ef7e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e7ef80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7ef82 je 0x12e7efc3 */
  if (C.zf) goto L_12e7efc3;
  /* 12e7ef84 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7ef87 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7ef89 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12e7ef8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7ef8e je 0x12e7efc3 */
  if (C.zf) goto L_12e7efc3;
  /* 12e7ef90 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7ef93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7ef95 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e7ef97 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e7ef9a jmp 0x12e7efa5 */
  goto L_12e7efa5;
L_12e7ef9c:;
  /* 12e7ef9c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7ef9f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7efa2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12e7efa5:;
  /* 12e7efa5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7efa8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7efaa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12e7efad cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7efb0 jg 0x12e7efc1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e7efc1;
  /* 12e7efb2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e7efb5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e7efb8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12e7efbf jmp 0x12e7ef9c */
  goto L_12e7ef9c;
L_12e7efc1:;
  /* 12e7efc1 jmp 0x12e7ef70 */
  goto L_12e7ef70;
L_12e7efc3:;
  /* 12e7efc3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e7efc6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7efc9 mov dword ptr [0x12e8dcb8], eax */
  w32((uint32_t)(0x12e8dcb8), (EAX));
  /* 12e7efce mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e7efd1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7efd4 mov dword ptr [0x12e8dcbc], ecx */
  w32((uint32_t)(0x12e8dcbc), (ECX));
  /* 12e7efda cmp dword ptr [0x12e8f710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7efe1 je 0x12e7eff4 */
  if (C.zf) goto L_12e7eff4;
  /* 12e7efe3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7efe5 mov edx, dword ptr [0x12e8f710] */
  EDX = (r32((uint32_t)(0x12e8f710)));
  /* 12e7efeb push edx */
  push32((uint32_t)(EDX));
  /* 12e7efec call 0x12e73ee0 */
  push32(0x12e7eff1u); f_12e73ee0();
  /* 12e7eff1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7eff4:;
  /* 12e7eff4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e7eff7 mov dword ptr [0x12e8f710], eax */
  w32((uint32_t)(0x12e8f710), (EAX));
  /* 12e7effc cmp dword ptr [0x12e8f714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f003 je 0x12e7f016 */
  if (C.zf) goto L_12e7f016;
  /* 12e7f005 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7f007 mov ecx, dword ptr [0x12e8f714] */
  ECX = (r32((uint32_t)(0x12e8f714)));
  /* 12e7f00d push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f00e call 0x12e73ee0 */
  push32(0x12e7f013u); f_12e73ee0();
  /* 12e7f013 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7f016:;
  /* 12e7f016 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e7f019 mov dword ptr [0x12e8f714], edx */
  w32((uint32_t)(0x12e8f714), (EDX));
  /* 12e7f01f push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7f021 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e7f024 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f025 call 0x12e73ee0 */
  push32(0x12e7f02au); f_12e73ee0();
  /* 12e7f02a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f02d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7f02f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e7f032 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f033 call 0x12e73ee0 */
  push32(0x12e7f038u); f_12e73ee0();
  /* 12e7f038 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f03b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7f03d jmp 0x12e7f0cc */
  goto L_12e7f0cc;
L_12e7f042:;
  /* 12e7f042 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7f044 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e7f047 push edx */
  push32((uint32_t)(EDX));
  /* 12e7f048 call 0x12e73ee0 */
  push32(0x12e7f04du); f_12e73ee0();
  /* 12e7f04d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f050 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7f052 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e7f055 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f056 call 0x12e73ee0 */
  push32(0x12e7f05bu); f_12e73ee0();
  /* 12e7f05b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f05e push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7f060 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e7f063 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f064 call 0x12e73ee0 */
  push32(0x12e7f069u); f_12e73ee0();
  /* 12e7f069 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f06c push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7f06e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e7f071 push edx */
  push32((uint32_t)(EDX));
  /* 12e7f072 call 0x12e73ee0 */
  push32(0x12e7f077u); f_12e73ee0();
  /* 12e7f077 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f07a mov eax, 1 */
  EAX = (0x1u);
  /* 12e7f07f jmp 0x12e7f0cc */
  goto L_12e7f0cc;
L_12e7f081:;
  /* 12e7f081 mov dword ptr [0x12e8dcb8], 0x12e8dcc2 */
  w32((uint32_t)(0x12e8dcb8), (0x12e8dcc2u));
  /* 12e7f08b mov dword ptr [0x12e8dcbc], 0x12e8dcc2 */
  w32((uint32_t)(0x12e8dcbc), (0x12e8dcc2u));
  /* 12e7f095 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7f097 mov eax, dword ptr [0x12e8f710] */
  EAX = (r32((uint32_t)(0x12e8f710)));
  /* 12e7f09c push eax */
  push32((uint32_t)(EAX));
  /* 12e7f09d call 0x12e73ee0 */
  push32(0x12e7f0a2u); f_12e73ee0();
  /* 12e7f0a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f0a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7f0a7 mov ecx, dword ptr [0x12e8f714] */
  ECX = (r32((uint32_t)(0x12e8f714)));
  /* 12e7f0ad push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f0ae call 0x12e73ee0 */
  push32(0x12e7f0b3u); f_12e73ee0();
  /* 12e7f0b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f0b6 mov dword ptr [0x12e8f710], 0 */
  w32((uint32_t)(0x12e8f710), (0x0u));
  /* 12e7f0c0 mov dword ptr [0x12e8f714], 0 */
  w32((uint32_t)(0x12e8f714), (0x0u));
  /* 12e7f0ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e7f0cc:;
  /* 12e7f0cc mov esp, ebp */
  ESP = (EBP);
  /* 12e7f0ce pop ebp */
  EBP = (pop32());
  /* 12e7f0cf ret  */
  ESPCHK(0x12e7ed30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0d0 @ 0x12e7f0d0 (7 bytes, 5 insns) */
void f_12e7f0d0(void) {
  FTRACE(0x12e7f0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7f0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7f0d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7f0d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7f0d5 pop ebp */
  EBP = (pop32());
  /* 12e7f0d6 ret  */
  ESPCHK(0x12e7f0d0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12e7f0e0 (129 bytes, 56 insns) */
void f_12e7f0e0(void) {
  FTRACE(0x12e7f0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7f0e0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e7f0e4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e7f0e8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12e7f0ee jne 0x12e7f12c */
  if (!C.zf) goto L_12e7f12c;
L_12e7f0f0:;
  /* 12e7f0f0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e7f0f2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e7f0f4 jne 0x12e7f124 */
  if (!C.zf) goto L_12e7f124;
  /* 12e7f0f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e7f0f8 je 0x12e7f120 */
  if (C.zf) goto L_12e7f120;
  /* 12e7f0fa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e7f0fd jne 0x12e7f124 */
  if (!C.zf) goto L_12e7f124;
  /* 12e7f0ff or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12e7f101 je 0x12e7f120 */
  if (C.zf) goto L_12e7f120;
  /* 12e7f103 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12e7f106 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e7f109 jne 0x12e7f124 */
  if (!C.zf) goto L_12e7f124;
  /* 12e7f10b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e7f10d je 0x12e7f120 */
  if (C.zf) goto L_12e7f120;
  /* 12e7f10f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e7f112 jne 0x12e7f124 */
  if (!C.zf) goto L_12e7f124;
  /* 12e7f114 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f117 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f11a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12e7f11c jne 0x12e7f0f0 */
  if (!C.zf) goto L_12e7f0f0;
  /* 12e7f11e mov edi, edi */
  EDI = (EDI);
L_12e7f120:;
  /* 12e7f120 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7f122 ret  */
  ESPCHK(0x12e7f0e0u, _esp0);
  ESP += 4; return;
  /* 12e7f123 nop  */
  /* nop */
L_12e7f124:;
  /* 12e7f124 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7f126 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e7f128 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12e7f129 ret  */
  ESPCHK(0x12e7f0e0u, _esp0);
  ESP += 4; return;
  /* 12e7f12a mov edi, edi */
  EDI = (EDI);
L_12e7f12c:;
  /* 12e7f12c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12e7f132 je 0x12e7f148 */
  if (C.zf) goto L_12e7f148;
  /* 12e7f134 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e7f136 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12e7f137 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e7f139 jne 0x12e7f124 */
  if (!C.zf) goto L_12e7f124;
  /* 12e7f13b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12e7f13c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e7f13e je 0x12e7f120 */
  if (C.zf) goto L_12e7f120;
  /* 12e7f140 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12e7f146 je 0x12e7f0f0 */
  if (C.zf) goto L_12e7f0f0;
L_12e7f148:;
  /* 12e7f148 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12e7f14b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f14e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e7f150 jne 0x12e7f124 */
  if (!C.zf) goto L_12e7f124;
  /* 12e7f152 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e7f154 je 0x12e7f120 */
  if (C.zf) goto L_12e7f120;
  /* 12e7f156 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e7f159 jne 0x12e7f124 */
  if (!C.zf) goto L_12e7f124;
  /* 12e7f15b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12e7f15d je 0x12e7f120 */
  if (C.zf) goto L_12e7f120;
  /* 12e7f15f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f162 jmp 0x12e7f0f0 */
  goto L_12e7f0f0;
}

/* FUN_1000f170 @ 0x12e7f170 (62 bytes, 35 insns) */
void f_12e7f170(void) {
  FTRACE(0x12e7f170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7f170 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7f171 mov ebp, esp */
  EBP = (ESP);
  /* 12e7f173 push esi */
  push32((uint32_t)(ESI));
  /* 12e7f174 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7f176 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f177 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f178 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f179 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f17a push eax */
  push32((uint32_t)(EAX));
  /* 12e7f17b push eax */
  push32((uint32_t)(EAX));
  /* 12e7f17c push eax */
  push32((uint32_t)(EAX));
  /* 12e7f17d push eax */
  push32((uint32_t)(EAX));
  /* 12e7f17e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7f181 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e7f184:;
  /* 12e7f184 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e7f186 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e7f188 je 0x12e7f191 */
  if (C.zf) goto L_12e7f191;
  /* 12e7f18a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12e7f18b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12e7f18b");
  /* 12e7f18f jmp 0x12e7f184 */
  goto L_12e7f184;
L_12e7f191:;
  /* 12e7f191 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7f194 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7f197 nop  */
  /* nop */
L_12e7f198:;
  /* 12e7f198 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12e7f199 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e7f19b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e7f19d je 0x12e7f1a6 */
  if (C.zf) goto L_12e7f1a6;
  /* 12e7f19f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e7f1a0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12e7f1a0");
  /* 12e7f1a4 jae 0x12e7f198 */
  if (!C.cf) goto L_12e7f198;
L_12e7f1a6:;
  /* 12e7f1a6 mov eax, ecx */
  EAX = (ECX);
  /* 12e7f1a8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f1ab pop esi */
  ESI = (pop32());
  /* 12e7f1ac leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e7f1ad ret  */
  ESPCHK(0x12e7f170u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12e7f1b0 (56 bytes, 31 insns) */
void f_12e7f1b0(void) {
  FTRACE(0x12e7f1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7f1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7f1b1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7f1b3 push edi */
  push32((uint32_t)(EDI));
  /* 12e7f1b4 push esi */
  push32((uint32_t)(ESI));
  /* 12e7f1b5 push ebx */
  push32((uint32_t)(EBX));
  /* 12e7f1b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7f1b9 jecxz 0x12e7f1e1 */
  x86_unimpl("jecxz @ 0x12e7f1b9");
  /* 12e7f1bb mov ebx, ecx */
  EBX = (ECX);
  /* 12e7f1bd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7f1c0 mov esi, edi */
  ESI = (EDI);
  /* 12e7f1c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7f1c4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12e7f1c6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7f1c8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f1ca mov edi, esi */
  EDI = (ESI);
  /* 12e7f1cc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7f1cf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12e7f1d1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12e7f1d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7f1d6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e7f1d9 ja 0x12e7f1df */
  if ((!C.cf&&!C.zf)) goto L_12e7f1df;
  /* 12e7f1db je 0x12e7f1e1 */
  if (C.zf) goto L_12e7f1e1;
  /* 12e7f1dd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e7f1de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12e7f1df:;
  /* 12e7f1df not ecx */
  ECX = (~(ECX));
L_12e7f1e1:;
  /* 12e7f1e1 mov eax, ecx */
  EAX = (ECX);
  /* 12e7f1e3 pop ebx */
  EBX = (pop32());
  /* 12e7f1e4 pop esi */
  ESI = (pop32());
  /* 12e7f1e5 pop edi */
  EDI = (pop32());
  /* 12e7f1e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e7f1e7 ret  */
  ESPCHK(0x12e7f1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1f0 @ 0x12e7f1f0 (58 bytes, 32 insns) */
void f_12e7f1f0(void) {
  FTRACE(0x12e7f1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7f1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7f1f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7f1f3 push esi */
  push32((uint32_t)(ESI));
  /* 12e7f1f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7f1f6 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f1f7 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f1f8 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f1f9 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f1fa push eax */
  push32((uint32_t)(EAX));
  /* 12e7f1fb push eax */
  push32((uint32_t)(EAX));
  /* 12e7f1fc push eax */
  push32((uint32_t)(EAX));
  /* 12e7f1fd push eax */
  push32((uint32_t)(EAX));
  /* 12e7f1fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7f201 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e7f204:;
  /* 12e7f204 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e7f206 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e7f208 je 0x12e7f211 */
  if (C.zf) goto L_12e7f211;
  /* 12e7f20a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12e7f20b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12e7f20b");
  /* 12e7f20f jmp 0x12e7f204 */
  goto L_12e7f204;
L_12e7f211:;
  /* 12e7f211 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12e7f214:;
  /* 12e7f214 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e7f216 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e7f218 je 0x12e7f224 */
  if (C.zf) goto L_12e7f224;
  /* 12e7f21a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e7f21b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12e7f21b");
  /* 12e7f21f jae 0x12e7f214 */
  if (!C.cf) goto L_12e7f214;
  /* 12e7f221 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12e7f224:;
  /* 12e7f224 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f227 pop esi */
  ESI = (pop32());
  /* 12e7f228 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e7f229 ret  */
  ESPCHK(0x12e7f1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f230 @ 0x12e7f230 (512 bytes, 147 insns) */
void f_12e7f230(void) {
  FTRACE(0x12e7f230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7f230 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7f231 mov ebp, esp */
  EBP = (ESP);
  /* 12e7f233 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7f236 cmp dword ptr [0x12e8f75c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f75c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f23d jne 0x12e7f262 */
  if (!C.zf) goto L_12e7f262;
  /* 12e7f23f call 0x12e7fd00 */
  push32(0x12e7f244u); f_12e7fd00();
  /* 12e7f244 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f246 je 0x12e7f252 */
  if (C.zf) goto L_12e7f252;
  /* 12e7f248 mov eax, dword ptr [0x12e922b0] */
  EAX = (r32((uint32_t)(0x12e922b0)));
  /* 12e7f24d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e7f250 jmp 0x12e7f259 */
  goto L_12e7f259;
L_12e7f252:;
  /* 12e7f252 mov dword ptr [ebp - 8], 0x12e7fd50 */
  w32((uint32_t)(EBP + -0x8), (0x12e7fd50u));
L_12e7f259:;
  /* 12e7f259 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7f25c mov dword ptr [0x12e8f75c], ecx */
  w32((uint32_t)(0x12e8f75c), (ECX));
L_12e7f262:;
  /* 12e7f262 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f266 jne 0x12e7f272 */
  if (!C.zf) goto L_12e7f272;
  /* 12e7f268 call 0x12e7fb50 */
  push32(0x12e7f26du); f_12e7fb50();
  /* 12e7f26d jmp 0x12e7f33e */
  goto L_12e7f33e;
L_12e7f272:;
  /* 12e7f272 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7f275 mov dword ptr [0x12e8f74c], edx */
  w32((uint32_t)(0x12e8f74c), (EDX));
  /* 12e7f27b cmp dword ptr [0x12e8f74c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f74c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f282 je 0x12e7f2a4 */
  if (C.zf) goto L_12e7f2a4;
  /* 12e7f284 mov eax, dword ptr [0x12e8f74c] */
  EAX = (r32((uint32_t)(0x12e8f74c)));
  /* 12e7f289 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e7f28c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7f28e je 0x12e7f2a4 */
  if (C.zf) goto L_12e7f2a4;
  /* 12e7f290 push 0x12e8f74c */
  push32((uint32_t)(0x12e8f74cu));
  /* 12e7f295 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12e7f297 push 0x12e8eab0 */
  push32((uint32_t)(0x12e8eab0u));
  /* 12e7f29c call 0x12e7f430 */
  push32(0x12e7f2a1u); f_12e7f430();
  /* 12e7f2a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7f2a4:;
  /* 12e7f2a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7f2a7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f2aa mov dword ptr [0x12e8f750], edx */
  w32((uint32_t)(0x12e8f750), (EDX));
  /* 12e7f2b0 cmp dword ptr [0x12e8f750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f2b7 je 0x12e7f2d9 */
  if (C.zf) goto L_12e7f2d9;
  /* 12e7f2b9 mov eax, dword ptr [0x12e8f750] */
  EAX = (r32((uint32_t)(0x12e8f750)));
  /* 12e7f2be movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e7f2c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7f2c3 je 0x12e7f2d9 */
  if (C.zf) goto L_12e7f2d9;
  /* 12e7f2c5 push 0x12e8f750 */
  push32((uint32_t)(0x12e8f750u));
  /* 12e7f2ca push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12e7f2cc push 0x12e8e9f8 */
  push32((uint32_t)(0x12e8e9f8u));
  /* 12e7f2d1 call 0x12e7f430 */
  push32(0x12e7f2d6u); f_12e7f430();
  /* 12e7f2d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7f2d9:;
  /* 12e7f2d9 mov dword ptr [0x12e8f754], 0 */
  w32((uint32_t)(0x12e8f754), (0x0u));
  /* 12e7f2e3 cmp dword ptr [0x12e8f74c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f74c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f2ea je 0x12e7f31d */
  if (C.zf) goto L_12e7f31d;
  /* 12e7f2ec mov edx, dword ptr [0x12e8f74c] */
  EDX = (r32((uint32_t)(0x12e8f74c)));
  /* 12e7f2f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e7f2f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f2f7 je 0x12e7f31d */
  if (C.zf) goto L_12e7f31d;
  /* 12e7f2f9 cmp dword ptr [0x12e8f750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f300 je 0x12e7f316 */
  if (C.zf) goto L_12e7f316;
  /* 12e7f302 mov ecx, dword ptr [0x12e8f750] */
  ECX = (r32((uint32_t)(0x12e8f750)));
  /* 12e7f308 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e7f30b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7f30d je 0x12e7f316 */
  if (C.zf) goto L_12e7f316;
  /* 12e7f30f call 0x12e7f4c0 */
  push32(0x12e7f314u); f_12e7f4c0();
  /* 12e7f314 jmp 0x12e7f31b */
  goto L_12e7f31b;
L_12e7f316:;
  /* 12e7f316 call 0x12e7f8b0 */
  push32(0x12e7f31bu); f_12e7f8b0();
L_12e7f31b:;
  /* 12e7f31b jmp 0x12e7f33e */
  goto L_12e7f33e;
L_12e7f31d:;
  /* 12e7f31d cmp dword ptr [0x12e8f750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f324 je 0x12e7f339 */
  if (C.zf) goto L_12e7f339;
  /* 12e7f326 mov eax, dword ptr [0x12e8f750] */
  EAX = (r32((uint32_t)(0x12e8f750)));
  /* 12e7f32b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e7f32e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7f330 je 0x12e7f339 */
  if (C.zf) goto L_12e7f339;
  /* 12e7f332 call 0x12e7fa50 */
  push32(0x12e7f337u); f_12e7fa50();
  /* 12e7f337 jmp 0x12e7f33e */
  goto L_12e7f33e;
L_12e7f339:;
  /* 12e7f339 call 0x12e7fb50 */
  push32(0x12e7f33eu); f_12e7fb50();
L_12e7f33e:;
  /* 12e7f33e cmp dword ptr [0x12e8f754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f345 jne 0x12e7f34e */
  if (!C.zf) goto L_12e7f34e;
  /* 12e7f347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7f349 jmp 0x12e7f42c */
  goto L_12e7f42c;
L_12e7f34e:;
  /* 12e7f34e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7f351 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f357 push edx */
  push32((uint32_t)(EDX));
  /* 12e7f358 call 0x12e7fb80 */
  push32(0x12e7f35du); f_12e7fb80();
  /* 12e7f35d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f360 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7f363 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f367 je 0x12e7f37c */
  if (C.zf) goto L_12e7f37c;
  /* 12e7f369 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7f36c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7f371 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f372 call dword ptr [0x12e922b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922b4))), 0x12e7f378u);
  /* 12e7f378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f37a jne 0x12e7f383 */
  if (!C.zf) goto L_12e7f383;
L_12e7f37c:;
  /* 12e7f37c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7f37e jmp 0x12e7f42c */
  goto L_12e7f42c;
L_12e7f383:;
  /* 12e7f383 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7f385 mov ecx, dword ptr [0x12e8f73c] */
  ECX = (r32((uint32_t)(0x12e8f73c)));
  /* 12e7f38b push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f38c call dword ptr [0x12e922b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922b8))), 0x12e7f392u);
  /* 12e7f392 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f394 jne 0x12e7f39d */
  if (!C.zf) goto L_12e7f39d;
  /* 12e7f396 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7f398 jmp 0x12e7f42c */
  goto L_12e7f42c;
L_12e7f39d:;
  /* 12e7f39d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f3a1 je 0x12e7f3c8 */
  if (C.zf) goto L_12e7f3c8;
  /* 12e7f3a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7f3a6 mov ax, word ptr [0x12e8f73c] */
  AX = (r16((uint32_t)(0x12e8f73c)));
  /* 12e7f3ac mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12e7f3af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7f3b2 mov dx, word ptr [0x12e8f758] */
  DX = (r16((uint32_t)(0x12e8f758)));
  /* 12e7f3b9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 12e7f3bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7f3c0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12e7f3c4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12e7f3c8:;
  /* 12e7f3c8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f3cc je 0x12e7f427 */
  if (C.zf) goto L_12e7f427;
  /* 12e7f3ce push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12e7f3d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7f3d3 push edx */
  push32((uint32_t)(EDX));
  /* 12e7f3d4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12e7f3d9 mov eax, dword ptr [0x12e8f73c] */
  EAX = (r32((uint32_t)(0x12e8f73c)));
  /* 12e7f3de push eax */
  push32((uint32_t)(EAX));
  /* 12e7f3df call dword ptr [0x12e8f75c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8f75c))), 0x12e7f3e5u);
  /* 12e7f3e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f3e7 jne 0x12e7f3ed */
  if (!C.zf) goto L_12e7f3ed;
  /* 12e7f3e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7f3eb jmp 0x12e7f42c */
  goto L_12e7f42c;
L_12e7f3ed:;
  /* 12e7f3ed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12e7f3ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7f3f2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f3f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f3f6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12e7f3fb mov edx, dword ptr [0x12e8f758] */
  EDX = (r32((uint32_t)(0x12e8f758)));
  /* 12e7f401 push edx */
  push32((uint32_t)(EDX));
  /* 12e7f402 call dword ptr [0x12e8f75c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8f75c))), 0x12e7f408u);
  /* 12e7f408 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f40a jne 0x12e7f410 */
  if (!C.zf) goto L_12e7f410;
  /* 12e7f40c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7f40e jmp 0x12e7f42c */
  goto L_12e7f42c;
L_12e7f410:;
  /* 12e7f410 push 0xa */
  push32((uint32_t)(0xau));
  /* 12e7f412 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7f415 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f41a push eax */
  push32((uint32_t)(EAX));
  /* 12e7f41b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7f41e push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f41f call 0x12e75f90 */
  push32(0x12e7f424u); f_12e75f90();
  /* 12e7f424 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7f427:;
  /* 12e7f427 mov eax, 1 */
  EAX = (0x1u);
L_12e7f42c:;
  /* 12e7f42c mov esp, ebp */
  ESP = (EBP);
  /* 12e7f42e pop ebp */
  EBP = (pop32());
  /* 12e7f42f ret  */
  ESPCHK(0x12e7f230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f430 @ 0x12e7f430 (130 bytes, 47 insns) */
void f_12e7f430(void) {
  FTRACE(0x12e7f430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7f430 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7f431 mov ebp, esp */
  EBP = (ESP);
  /* 12e7f433 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7f436 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12e7f43d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12e7f444:;
  /* 12e7f444 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7f447 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f44a jg 0x12e7f4ae */
  if ((!C.zf&&C.sf==C.of)) goto L_12e7f4ae;
  /* 12e7f44c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f450 je 0x12e7f4ae */
  if (C.zf) goto L_12e7f4ae;
  /* 12e7f452 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7f455 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f458 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e7f459 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7f45b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e7f45d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7f460 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7f463 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7f466 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12e7f469 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f46a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7f46d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e7f46f push edx */
  push32((uint32_t)(EDX));
  /* 12e7f470 call 0x12e81b20 */
  push32(0x12e7f475u); f_12e81b20();
  /* 12e7f475 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f478 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e7f47b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f47f jne 0x12e7f492 */
  if (!C.zf) goto L_12e7f492;
  /* 12e7f481 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7f484 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7f487 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12e7f48b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7f48e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e7f490 jmp 0x12e7f4ac */
  goto L_12e7f4ac;
L_12e7f492:;
  /* 12e7f492 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f496 jge 0x12e7f4a3 */
  if ((C.sf==C.of)) goto L_12e7f4a3;
  /* 12e7f498 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7f49b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7f49e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12e7f4a1 jmp 0x12e7f4ac */
  goto L_12e7f4ac;
L_12e7f4a3:;
  /* 12e7f4a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7f4a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f4a9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e7f4ac:;
  /* 12e7f4ac jmp 0x12e7f444 */
  goto L_12e7f444;
L_12e7f4ae:;
  /* 12e7f4ae mov esp, ebp */
  ESP = (EBP);
  /* 12e7f4b0 pop ebp */
  EBP = (pop32());
  /* 12e7f4b1 ret  */
  ESPCHK(0x12e7f430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4c0 @ 0x12e7f4c0 (186 bytes, 50 insns) */
void f_12e7f4c0(void) {
  FTRACE(0x12e7f4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7f4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7f4c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7f4c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f4c4 mov eax, dword ptr [0x12e8f74c] */
  EAX = (r32((uint32_t)(0x12e8f74c)));
  /* 12e7f4c9 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f4ca call 0x12e76280 */
  push32(0x12e7f4cfu); f_12e76280();
  /* 12e7f4cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f4d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7f4d4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f4d7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12e7f4da mov dword ptr [0x12e8f748], ecx */
  w32((uint32_t)(0x12e8f748), (ECX));
  /* 12e7f4e0 mov edx, dword ptr [0x12e8f750] */
  EDX = (r32((uint32_t)(0x12e8f750)));
  /* 12e7f4e6 push edx */
  push32((uint32_t)(EDX));
  /* 12e7f4e7 call 0x12e76280 */
  push32(0x12e7f4ecu); f_12e76280();
  /* 12e7f4ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f4ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7f4f1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f4f4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12e7f4f7 mov dword ptr [0x12e8f740], ecx */
  w32((uint32_t)(0x12e8f740), (ECX));
  /* 12e7f4fd mov dword ptr [0x12e8f73c], 0 */
  w32((uint32_t)(0x12e8f73c), (0x0u));
  /* 12e7f507 cmp dword ptr [0x12e8f748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f50e je 0x12e7f519 */
  if (C.zf) goto L_12e7f519;
  /* 12e7f510 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12e7f517 jmp 0x12e7f52b */
  goto L_12e7f52b;
L_12e7f519:;
  /* 12e7f519 mov edx, dword ptr [0x12e8f74c] */
  EDX = (r32((uint32_t)(0x12e8f74c)));
  /* 12e7f51f push edx */
  push32((uint32_t)(EDX));
  /* 12e7f520 call 0x12e7ff60 */
  push32(0x12e7f525u); f_12e7ff60();
  /* 12e7f525 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f528 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e7f52b:;
  /* 12e7f52b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7f52e mov dword ptr [0x12e8f744], eax */
  w32((uint32_t)(0x12e8f744), (EAX));
  /* 12e7f533 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7f535 push 0x12e7f580 */
  push32((uint32_t)(0x12e7f580u));
  /* 12e7f53a call dword ptr [0x12e922ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922ac))), 0x12e7f540u);
  /* 12e7f540 mov ecx, dword ptr [0x12e8f754] */
  ECX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7f546 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7f54c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7f54e je 0x12e7f56c */
  if (C.zf) goto L_12e7f56c;
  /* 12e7f550 mov edx, dword ptr [0x12e8f754] */
  EDX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7f556 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7f55c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7f55e je 0x12e7f56c */
  if (C.zf) goto L_12e7f56c;
  /* 12e7f560 mov eax, dword ptr [0x12e8f754] */
  EAX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7f565 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7f568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f56a jne 0x12e7f576 */
  if (!C.zf) goto L_12e7f576;
L_12e7f56c:;
  /* 12e7f56c mov dword ptr [0x12e8f754], 0 */
  w32((uint32_t)(0x12e8f754), (0x0u));
L_12e7f576:;
  /* 12e7f576 mov esp, ebp */
  ESP = (EBP);
  /* 12e7f578 pop ebp */
  EBP = (pop32());
  /* 12e7f579 ret  */
  ESPCHK(0x12e7f4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f580 @ 0x12e7f580 (804 bytes, 220 insns) */
void f_12e7f580(void) {
  FTRACE(0x12e7f580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7f580 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7f581 mov ebp, esp */
  EBP = (ESP);
  /* 12e7f583 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7f586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7f589 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f58a call 0x12e7fee0 */
  push32(0x12e7f58fu); f_12e7fee0();
  /* 12e7f58f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f592 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12e7f595 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e7f597 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e7f59a push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f59b mov edx, dword ptr [0x12e8f740] */
  EDX = (r32((uint32_t)(0x12e8f740)));
  /* 12e7f5a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7f5a3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7f5a5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7f5ab add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f5b1 push edx */
  push32((uint32_t)(EDX));
  /* 12e7f5b2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7f5b5 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f5b6 call dword ptr [0x12e8f75c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8f75c))), 0x12e7f5bcu);
  /* 12e7f5bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f5be jne 0x12e7f5d4 */
  if (!C.zf) goto L_12e7f5d4;
  /* 12e7f5c0 mov dword ptr [0x12e8f754], 0 */
  w32((uint32_t)(0x12e8f754), (0x0u));
  /* 12e7f5ca mov eax, 1 */
  EAX = (0x1u);
  /* 12e7f5cf jmp 0x12e7f89e */
  goto L_12e7f89e;
L_12e7f5d4:;
  /* 12e7f5d4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e7f5d7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f5d8 mov edx, dword ptr [0x12e8f750] */
  EDX = (r32((uint32_t)(0x12e8f750)));
  /* 12e7f5de push edx */
  push32((uint32_t)(EDX));
  /* 12e7f5df call 0x12e81b20 */
  push32(0x12e7f5e4u); f_12e81b20();
  /* 12e7f5e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f5e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f5e9 jne 0x12e7f70f */
  if (!C.zf) goto L_12e7f70f;
  /* 12e7f5ef push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e7f5f1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12e7f5f4 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f5f5 mov ecx, dword ptr [0x12e8f748] */
  ECX = (r32((uint32_t)(0x12e8f748)));
  /* 12e7f5fb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7f5fd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7f5ff and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7f605 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f60b push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f60c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7f60f push edx */
  push32((uint32_t)(EDX));
  /* 12e7f610 call dword ptr [0x12e8f75c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8f75c))), 0x12e7f616u);
  /* 12e7f616 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f618 jne 0x12e7f62e */
  if (!C.zf) goto L_12e7f62e;
  /* 12e7f61a mov dword ptr [0x12e8f754], 0 */
  w32((uint32_t)(0x12e8f754), (0x0u));
  /* 12e7f624 mov eax, 1 */
  EAX = (0x1u);
  /* 12e7f629 jmp 0x12e7f89e */
  goto L_12e7f89e;
L_12e7f62e:;
  /* 12e7f62e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12e7f631 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f632 mov ecx, dword ptr [0x12e8f74c] */
  ECX = (r32((uint32_t)(0x12e8f74c)));
  /* 12e7f638 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f639 call 0x12e81b20 */
  push32(0x12e7f63eu); f_12e81b20();
  /* 12e7f63e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f641 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f643 jne 0x12e7f670 */
  if (!C.zf) goto L_12e7f670;
  /* 12e7f645 mov edx, dword ptr [0x12e8f754] */
  EDX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7f64b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7f651 mov dword ptr [0x12e8f754], edx */
  w32((uint32_t)(0x12e8f754), (EDX));
  /* 12e7f657 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7f65a mov dword ptr [0x12e8f758], eax */
  w32((uint32_t)(0x12e8f758), (EAX));
  /* 12e7f65f mov ecx, dword ptr [0x12e8f758] */
  ECX = (r32((uint32_t)(0x12e8f758)));
  /* 12e7f665 mov dword ptr [0x12e8f73c], ecx */
  w32((uint32_t)(0x12e8f73c), (ECX));
  /* 12e7f66b jmp 0x12e7f70f */
  goto L_12e7f70f;
L_12e7f670:;
  /* 12e7f670 mov edx, dword ptr [0x12e8f754] */
  EDX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7f676 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7f679 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7f67b jne 0x12e7f70f */
  if (!C.zf) goto L_12e7f70f;
  /* 12e7f681 cmp dword ptr [0x12e8f744], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f744))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f688 je 0x12e7f6dd */
  if (C.zf) goto L_12e7f6dd;
  /* 12e7f68a mov eax, dword ptr [0x12e8f744] */
  EAX = (r32((uint32_t)(0x12e8f744)));
  /* 12e7f68f push eax */
  push32((uint32_t)(EAX));
  /* 12e7f690 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e7f693 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f694 mov edx, dword ptr [0x12e8f74c] */
  EDX = (r32((uint32_t)(0x12e8f74c)));
  /* 12e7f69a push edx */
  push32((uint32_t)(EDX));
  /* 12e7f69b call 0x12e81bf0 */
  push32(0x12e7f6a0u); f_12e81bf0();
  /* 12e7f6a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f6a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f6a5 jne 0x12e7f6dd */
  if (!C.zf) goto L_12e7f6dd;
  /* 12e7f6a7 mov eax, dword ptr [0x12e8f754] */
  EAX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7f6ac or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12e7f6ae mov dword ptr [0x12e8f754], eax */
  w32((uint32_t)(0x12e8f754), (EAX));
  /* 12e7f6b3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7f6b6 mov dword ptr [0x12e8f758], ecx */
  w32((uint32_t)(0x12e8f758), (ECX));
  /* 12e7f6bc mov edx, dword ptr [0x12e8f74c] */
  EDX = (r32((uint32_t)(0x12e8f74c)));
  /* 12e7f6c2 push edx */
  push32((uint32_t)(EDX));
  /* 12e7f6c3 call 0x12e76280 */
  push32(0x12e7f6c8u); f_12e76280();
  /* 12e7f6c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f6cb cmp eax, dword ptr [0x12e8f744] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e8f744))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f6d1 jne 0x12e7f6db */
  if (!C.zf) goto L_12e7f6db;
  /* 12e7f6d3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7f6d6 mov dword ptr [0x12e8f73c], eax */
  w32((uint32_t)(0x12e8f73c), (EAX));
L_12e7f6db:;
  /* 12e7f6db jmp 0x12e7f70f */
  goto L_12e7f70f;
L_12e7f6dd:;
  /* 12e7f6dd mov ecx, dword ptr [0x12e8f754] */
  ECX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7f6e3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7f6e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7f6e8 jne 0x12e7f70f */
  if (!C.zf) goto L_12e7f70f;
  /* 12e7f6ea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7f6ed push edx */
  push32((uint32_t)(EDX));
  /* 12e7f6ee call 0x12e7fc20 */
  push32(0x12e7f6f3u); f_12e7fc20();
  /* 12e7f6f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f6f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f6f8 je 0x12e7f70f */
  if (C.zf) goto L_12e7f70f;
  /* 12e7f6fa mov eax, dword ptr [0x12e8f754] */
  EAX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7f6ff or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12e7f701 mov dword ptr [0x12e8f754], eax */
  w32((uint32_t)(0x12e8f754), (EAX));
  /* 12e7f706 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7f709 mov dword ptr [0x12e8f758], ecx */
  w32((uint32_t)(0x12e8f758), (ECX));
L_12e7f70f:;
  /* 12e7f70f mov edx, dword ptr [0x12e8f754] */
  EDX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7f715 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7f71b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f721 je 0x12e7f891 */
  if (C.zf) goto L_12e7f891;
  /* 12e7f727 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e7f729 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12e7f72c push eax */
  push32((uint32_t)(EAX));
  /* 12e7f72d mov ecx, dword ptr [0x12e8f748] */
  ECX = (r32((uint32_t)(0x12e8f748)));
  /* 12e7f733 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7f735 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7f737 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7f73d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f743 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f744 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7f747 push edx */
  push32((uint32_t)(EDX));
  /* 12e7f748 call dword ptr [0x12e8f75c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8f75c))), 0x12e7f74eu);
  /* 12e7f74e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f750 jne 0x12e7f766 */
  if (!C.zf) goto L_12e7f766;
  /* 12e7f752 mov dword ptr [0x12e8f754], 0 */
  w32((uint32_t)(0x12e8f754), (0x0u));
  /* 12e7f75c mov eax, 1 */
  EAX = (0x1u);
  /* 12e7f761 jmp 0x12e7f89e */
  goto L_12e7f89e;
L_12e7f766:;
  /* 12e7f766 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12e7f769 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f76a mov ecx, dword ptr [0x12e8f74c] */
  ECX = (r32((uint32_t)(0x12e8f74c)));
  /* 12e7f770 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f771 call 0x12e81b20 */
  push32(0x12e7f776u); f_12e81b20();
  /* 12e7f776 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f77b jne 0x12e7f830 */
  if (!C.zf) goto L_12e7f830;
  /* 12e7f781 mov edx, dword ptr [0x12e8f754] */
  EDX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7f787 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12e7f78a mov dword ptr [0x12e8f754], edx */
  w32((uint32_t)(0x12e8f754), (EDX));
  /* 12e7f790 cmp dword ptr [0x12e8f748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f797 je 0x12e7f7ba */
  if (C.zf) goto L_12e7f7ba;
  /* 12e7f799 mov eax, dword ptr [0x12e8f754] */
  EAX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7f79e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12e7f7a1 mov dword ptr [0x12e8f754], eax */
  w32((uint32_t)(0x12e8f754), (EAX));
  /* 12e7f7a6 cmp dword ptr [0x12e8f73c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f73c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f7ad jne 0x12e7f7b8 */
  if (!C.zf) goto L_12e7f7b8;
  /* 12e7f7af mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7f7b2 mov dword ptr [0x12e8f73c], ecx */
  w32((uint32_t)(0x12e8f73c), (ECX));
L_12e7f7b8:;
  /* 12e7f7b8 jmp 0x12e7f82e */
  goto L_12e7f82e;
L_12e7f7ba:;
  /* 12e7f7ba cmp dword ptr [0x12e8f744], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f744))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f7c1 je 0x12e7f80f */
  if (C.zf) goto L_12e7f80f;
  /* 12e7f7c3 mov edx, dword ptr [0x12e8f74c] */
  EDX = (r32((uint32_t)(0x12e8f74c)));
  /* 12e7f7c9 push edx */
  push32((uint32_t)(EDX));
  /* 12e7f7ca call 0x12e76280 */
  push32(0x12e7f7cfu); f_12e76280();
  /* 12e7f7cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f7d2 cmp eax, dword ptr [0x12e8f744] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e8f744))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f7d8 jne 0x12e7f80f */
  if (!C.zf) goto L_12e7f80f;
  /* 12e7f7da push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7f7dc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7f7df push eax */
  push32((uint32_t)(EAX));
  /* 12e7f7e0 call 0x12e7fc70 */
  push32(0x12e7f7e5u); f_12e7fc70();
  /* 12e7f7e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f7e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f7ea je 0x12e7f80d */
  if (C.zf) goto L_12e7f80d;
  /* 12e7f7ec mov ecx, dword ptr [0x12e8f754] */
  ECX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7f7f2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12e7f7f5 mov dword ptr [0x12e8f754], ecx */
  w32((uint32_t)(0x12e8f754), (ECX));
  /* 12e7f7fb cmp dword ptr [0x12e8f73c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f73c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f802 jne 0x12e7f80d */
  if (!C.zf) goto L_12e7f80d;
  /* 12e7f804 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7f807 mov dword ptr [0x12e8f73c], edx */
  w32((uint32_t)(0x12e8f73c), (EDX));
L_12e7f80d:;
  /* 12e7f80d jmp 0x12e7f82e */
  goto L_12e7f82e;
L_12e7f80f:;
  /* 12e7f80f mov eax, dword ptr [0x12e8f754] */
  EAX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7f814 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12e7f817 mov dword ptr [0x12e8f754], eax */
  w32((uint32_t)(0x12e8f754), (EAX));
  /* 12e7f81c cmp dword ptr [0x12e8f73c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f73c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f823 jne 0x12e7f82e */
  if (!C.zf) goto L_12e7f82e;
  /* 12e7f825 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7f828 mov dword ptr [0x12e8f73c], ecx */
  w32((uint32_t)(0x12e8f73c), (ECX));
L_12e7f82e:;
  /* 12e7f82e jmp 0x12e7f891 */
  goto L_12e7f891;
L_12e7f830:;
  /* 12e7f830 cmp dword ptr [0x12e8f748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f837 jne 0x12e7f891 */
  if (!C.zf) goto L_12e7f891;
  /* 12e7f839 cmp dword ptr [0x12e8f744], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f744))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f840 je 0x12e7f891 */
  if (C.zf) goto L_12e7f891;
  /* 12e7f842 mov edx, dword ptr [0x12e8f744] */
  EDX = (r32((uint32_t)(0x12e8f744)));
  /* 12e7f848 push edx */
  push32((uint32_t)(EDX));
  /* 12e7f849 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12e7f84c push eax */
  push32((uint32_t)(EAX));
  /* 12e7f84d mov ecx, dword ptr [0x12e8f74c] */
  ECX = (r32((uint32_t)(0x12e8f74c)));
  /* 12e7f853 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f854 call 0x12e81bf0 */
  push32(0x12e7f859u); f_12e81bf0();
  /* 12e7f859 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f85c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f85e jne 0x12e7f891 */
  if (!C.zf) goto L_12e7f891;
  /* 12e7f860 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7f862 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7f865 push edx */
  push32((uint32_t)(EDX));
  /* 12e7f866 call 0x12e7fc70 */
  push32(0x12e7f86bu); f_12e7fc70();
  /* 12e7f86b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f86e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f870 je 0x12e7f891 */
  if (C.zf) goto L_12e7f891;
  /* 12e7f872 mov eax, dword ptr [0x12e8f754] */
  EAX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7f877 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12e7f87a mov dword ptr [0x12e8f754], eax */
  w32((uint32_t)(0x12e8f754), (EAX));
  /* 12e7f87f cmp dword ptr [0x12e8f73c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f73c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f886 jne 0x12e7f891 */
  if (!C.zf) goto L_12e7f891;
  /* 12e7f888 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7f88b mov dword ptr [0x12e8f73c], ecx */
  w32((uint32_t)(0x12e8f73c), (ECX));
L_12e7f891:;
  /* 12e7f891 mov eax, dword ptr [0x12e8f754] */
  EAX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7f896 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7f899 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7f89b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7f89d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12e7f89e:;
  /* 12e7f89e mov esp, ebp */
  ESP = (EBP);
  /* 12e7f8a0 pop ebp */
  EBP = (pop32());
  /* 12e7f8a1 ret 4 */
  ESPCHK(0x12e7f580u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f8b0 @ 0x12e7f8b0 (116 bytes, 33 insns) */
void f_12e7f8b0(void) {
  FTRACE(0x12e7f8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7f8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7f8b1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7f8b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f8b4 mov eax, dword ptr [0x12e8f74c] */
  EAX = (r32((uint32_t)(0x12e8f74c)));
  /* 12e7f8b9 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f8ba call 0x12e76280 */
  push32(0x12e7f8bfu); f_12e76280();
  /* 12e7f8bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f8c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7f8c4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f8c7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12e7f8ca mov dword ptr [0x12e8f748], ecx */
  w32((uint32_t)(0x12e8f748), (ECX));
  /* 12e7f8d0 cmp dword ptr [0x12e8f748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f8d7 je 0x12e7f8e2 */
  if (C.zf) goto L_12e7f8e2;
  /* 12e7f8d9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12e7f8e0 jmp 0x12e7f8f4 */
  goto L_12e7f8f4;
L_12e7f8e2:;
  /* 12e7f8e2 mov edx, dword ptr [0x12e8f74c] */
  EDX = (r32((uint32_t)(0x12e8f74c)));
  /* 12e7f8e8 push edx */
  push32((uint32_t)(EDX));
  /* 12e7f8e9 call 0x12e7ff60 */
  push32(0x12e7f8eeu); f_12e7ff60();
  /* 12e7f8ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f8f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e7f8f4:;
  /* 12e7f8f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7f8f7 mov dword ptr [0x12e8f744], eax */
  w32((uint32_t)(0x12e8f744), (EAX));
  /* 12e7f8fc push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7f8fe push 0x12e7f930 */
  push32((uint32_t)(0x12e7f930u));
  /* 12e7f903 call dword ptr [0x12e922ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922ac))), 0x12e7f909u);
  /* 12e7f909 mov ecx, dword ptr [0x12e8f754] */
  ECX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7f90f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7f912 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7f914 jne 0x12e7f920 */
  if (!C.zf) goto L_12e7f920;
  /* 12e7f916 mov dword ptr [0x12e8f754], 0 */
  w32((uint32_t)(0x12e8f754), (0x0u));
L_12e7f920:;
  /* 12e7f920 mov esp, ebp */
  ESP = (EBP);
  /* 12e7f922 pop ebp */
  EBP = (pop32());
  /* 12e7f923 ret  */
  ESPCHK(0x12e7f8b0u, _esp0);
  ESP += 4; return;
}

