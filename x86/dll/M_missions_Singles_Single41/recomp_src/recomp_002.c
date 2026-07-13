#include "recomp.h"

/* FUN_100105f0 @ 0x116f05f0 (79 bytes, 26 insns) */
void f_116f05f0(void) {
  FTRACE(0x116f05f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f05f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f05f1 mov ebp, esp */
  EBP = (ESP);
  /* 116f05f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f05f6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 116f05fa mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 116f05fe mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116f0605 jmp 0x116f0610 */
  goto L_116f0610;
L_116f0607:;
  /* 116f0607 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f060a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f060d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116f0610:;
  /* 116f0610 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0614 jae 0x116f0636 */
  if (!C.cf) goto L_116f0636;
  /* 116f0616 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f0619 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116f061f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f0622 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f0624 mov cx, word ptr [eax*2 + 0x1170e9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1170e9c4)));
  /* 116f062c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f062e jne 0x116f0634 */
  if (!C.zf) goto L_116f0634;
  /* 116f0630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f0632 jmp 0x116f063b */
  goto L_116f063b;
L_116f0634:;
  /* 116f0634 jmp 0x116f0607 */
  goto L_116f0607;
L_116f0636:;
  /* 116f0636 mov eax, 1 */
  EAX = (0x1u);
L_116f063b:;
  /* 116f063b mov esp, ebp */
  ESP = (EBP);
  /* 116f063d pop ebp */
  EBP = (pop32());
  /* 116f063e ret  */
  ESPCHK(0x116f05f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010640 @ 0x116f0640 (135 bytes, 48 insns) */
void f_116f0640(void) {
  FTRACE(0x116f0640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f0640 push ebp */
  push32((uint32_t)(EBP));
  /* 116f0641 mov ebp, esp */
  EBP = (ESP);
  /* 116f0643 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f0646 push esi */
  push32((uint32_t)(ESI));
  /* 116f0647 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f064a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f064f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f0654 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f0659 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 116f065c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f0661 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116f0664 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 116f0666 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 116f0669 push ecx */
  push32((uint32_t)(ECX));
  /* 116f066a push 1 */
  push32((uint32_t)(0x1u));
  /* 116f066c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f066f push edx */
  push32((uint32_t)(EDX));
  /* 116f0670 call dword ptr [0x1170f8bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170f8bc))), 0x116f0676u);
  /* 116f0676 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f0678 jne 0x116f067e */
  if (!C.zf) goto L_116f067e;
  /* 116f067a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f067c jmp 0x116f06c2 */
  goto L_116f06c2;
L_116f067e:;
  /* 116f067e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 116f0681 push eax */
  push32((uint32_t)(EAX));
  /* 116f0682 call 0x116f08b0 */
  push32(0x116f0687u); f_116f08b0();
  /* 116f0687 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f068a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f068d je 0x116f06bd */
  if (C.zf) goto L_116f06bd;
  /* 116f068f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0693 je 0x116f06bd */
  if (C.zf) goto L_116f06bd;
  /* 116f0695 mov ecx, dword ptr [0x1170f8ac] */
  ECX = (r32((uint32_t)(0x1170f8ac)));
  /* 116f069b push ecx */
  push32((uint32_t)(ECX));
  /* 116f069c call 0x116f0930 */
  push32(0x116f06a1u); f_116f0930();
  /* 116f06a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f06a4 mov esi, eax */
  ESI = (EAX);
  /* 116f06a6 mov edx, dword ptr [0x1170f8ac] */
  EDX = (r32((uint32_t)(0x1170f8ac)));
  /* 116f06ac push edx */
  push32((uint32_t)(EDX));
  /* 116f06ad call 0x116e6c50 */
  push32(0x116f06b2u); f_116e6c50();
  /* 116f06b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f06b5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f06b7 jne 0x116f06bd */
  if (!C.zf) goto L_116f06bd;
  /* 116f06b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f06bb jmp 0x116f06c2 */
  goto L_116f06c2;
L_116f06bd:;
  /* 116f06bd mov eax, 1 */
  EAX = (0x1u);
L_116f06c2:;
  /* 116f06c2 pop esi */
  ESI = (pop32());
  /* 116f06c3 mov esp, ebp */
  ESP = (EBP);
  /* 116f06c5 pop ebp */
  EBP = (pop32());
  /* 116f06c6 ret  */
  ESPCHK(0x116f0640u, _esp0);
  ESP += 4; return;
}

/* FUN_100106d0 @ 0x116f06d0 (77 bytes, 18 insns) */
void f_116f06d0(void) {
  FTRACE(0x116f06d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f06d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f06d1 mov ebp, esp */
  EBP = (ESP);
  /* 116f06d3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f06d9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 116f06e3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 116f06e9 push eax */
  push32((uint32_t)(EAX));
  /* 116f06ea call dword ptr [0x117122b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122b8))), 0x116f06f0u);
  /* 116f06f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f06f2 je 0x116f0709 */
  if (C.zf) goto L_116f0709;
  /* 116f06f4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f06fb jne 0x116f0709 */
  if (!C.zf) goto L_116f0709;
  /* 116f06fd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 116f0707 jmp 0x116f0713 */
  goto L_116f0713;
L_116f0709:;
  /* 116f0709 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_116f0713:;
  /* 116f0713 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 116f0719 mov esp, ebp */
  ESP = (EBP);
  /* 116f071b pop ebp */
  EBP = (pop32());
  /* 116f071c ret  */
  ESPCHK(0x116f06d0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x116f0720 (388 bytes, 118 insns) */
void f_116f0720(void) {
  FTRACE(0x116f0720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f0720 push ebp */
  push32((uint32_t)(EBP));
  /* 116f0721 mov ebp, esp */
  EBP = (ESP);
  /* 116f0723 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f0726 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116f072d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 116f0734 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_116f073b:;
  /* 116f073b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f073e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0741 jg 0x116f0888 */
  if ((!C.zf&&C.sf==C.of)) goto L_116f0888;
  /* 116f0747 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f074a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f074d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116f074e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f0750 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116f0752 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116f0755 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0758 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f075b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f075e cmp edx, dword ptr [ecx + 0x1170e520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1170e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0764 jne 0x116f085e */
  if (!C.zf) goto L_116f085e;
  /* 116f076a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f076d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116f0770 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0774 ja 0x116f0797 */
  if ((!C.cf&&!C.zf)) goto L_116f0797;
  /* 116f0776 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f077a je 0x116f0809 */
  if (C.zf) goto L_116f0809;
  /* 116f0780 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0784 je 0x116f07b4 */
  if (C.zf) goto L_116f07b4;
  /* 116f0786 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f078a je 0x116f07d6 */
  if (C.zf) goto L_116f07d6;
  /* 116f078c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0790 je 0x116f07f8 */
  if (C.zf) goto L_116f07f8;
  /* 116f0792 jmp 0x116f0828 */
  goto L_116f0828;
L_116f0797:;
  /* 116f0797 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f079e je 0x116f07c5 */
  if (C.zf) goto L_116f07c5;
  /* 116f07a0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f07a7 je 0x116f07e7 */
  if (C.zf) goto L_116f07e7;
  /* 116f07a9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f07b0 je 0x116f081a */
  if (C.zf) goto L_116f081a;
  /* 116f07b2 jmp 0x116f0828 */
  goto L_116f0828;
L_116f07b4:;
  /* 116f07b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f07b7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f07ba add ecx, 0x1170e524 */
  { uint32_t _a=(ECX),_b=(0x1170e524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f07c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116f07c3 jmp 0x116f0828 */
  goto L_116f0828;
L_116f07c5:;
  /* 116f07c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f07c8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f07cb mov eax, dword ptr [edx + 0x1170e52c] */
  EAX = (r32((uint32_t)(EDX + 0x1170e52c)));
  /* 116f07d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116f07d4 jmp 0x116f0828 */
  goto L_116f0828;
L_116f07d6:;
  /* 116f07d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f07d9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f07dc add ecx, 0x1170e530 */
  { uint32_t _a=(ECX),_b=(0x1170e530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f07e2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116f07e5 jmp 0x116f0828 */
  goto L_116f0828;
L_116f07e7:;
  /* 116f07e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f07ea imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f07ed mov eax, dword ptr [edx + 0x1170e534] */
  EAX = (r32((uint32_t)(EDX + 0x1170e534)));
  /* 116f07f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116f07f6 jmp 0x116f0828 */
  goto L_116f0828;
L_116f07f8:;
  /* 116f07f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f07fb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f07fe add ecx, 0x1170e538 */
  { uint32_t _a=(ECX),_b=(0x1170e538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0804 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116f0807 jmp 0x116f0828 */
  goto L_116f0828;
L_116f0809:;
  /* 116f0809 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f080c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f080f add edx, 0x1170e53c */
  { uint32_t _a=(EDX),_b=(0x1170e53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0815 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116f0818 jmp 0x116f0828 */
  goto L_116f0828;
L_116f081a:;
  /* 116f081a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f081d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f0820 add eax, 0x1170e544 */
  { uint32_t _a=(EAX),_b=(0x1170e544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0825 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116f0828:;
  /* 116f0828 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f082c je 0x116f0834 */
  if (C.zf) goto L_116f0834;
  /* 116f082e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0832 jge 0x116f0836 */
  if ((C.sf==C.of)) goto L_116f0836;
L_116f0834:;
  /* 116f0834 jmp 0x116f0888 */
  goto L_116f0888;
L_116f0836:;
  /* 116f0836 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f0839 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f083c push ecx */
  push32((uint32_t)(ECX));
  /* 116f083d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f0840 push edx */
  push32((uint32_t)(EDX));
  /* 116f0841 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f0844 push eax */
  push32((uint32_t)(EAX));
  /* 116f0845 call 0x116e7640 */
  push32(0x116f084au); f_116e7640();
  /* 116f084a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f084d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f0850 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0853 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 116f0857 mov eax, 1 */
  EAX = (0x1u);
  /* 116f085c jmp 0x116f089e */
  goto L_116f089e;
L_116f085e:;
  /* 116f085e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0861 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f0864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0867 cmp eax, dword ptr [edx + 0x1170e520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1170e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f086d jae 0x116f087a */
  if (!C.cf) goto L_116f087a;
  /* 116f086f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0872 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f0875 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116f0878 jmp 0x116f0883 */
  goto L_116f0883;
L_116f087a:;
  /* 116f087a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f087d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0880 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_116f0883:;
  /* 116f0883 jmp 0x116f073b */
  goto L_116f073b;
L_116f0888:;
  /* 116f0888 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f088b push eax */
  push32((uint32_t)(EAX));
  /* 116f088c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f088f push ecx */
  push32((uint32_t)(ECX));
  /* 116f0890 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f0893 push edx */
  push32((uint32_t)(EDX));
  /* 116f0894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0897 push eax */
  push32((uint32_t)(EAX));
  /* 116f0898 call dword ptr [0x117122c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122c4))), 0x116f089eu);
L_116f089e:;
  /* 116f089e mov esp, ebp */
  ESP = (EBP);
  /* 116f08a0 pop ebp */
  EBP = (pop32());
  /* 116f08a1 ret 0x10 */
  ESPCHK(0x116f0720u, _esp0);
  ESP += 20; return;
}

/* FUN_100108b0 @ 0x116f08b0 (118 bytes, 42 insns) */
void f_116f08b0(void) {
  FTRACE(0x116f08b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f08b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f08b1 mov ebp, esp */
  EBP = (ESP);
  /* 116f08b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f08b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116f08bd:;
  /* 116f08bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f08c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116f08c2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 116f08c5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116f08c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f08cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f08cf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116f08d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f08d4 je 0x116f091f */
  if (C.zf) goto L_116f091f;
  /* 116f08d6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116f08da cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f08dd jl 0x116f08f2 */
  if ((C.sf!=C.of)) goto L_116f08f2;
  /* 116f08df movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116f08e3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f08e6 jg 0x116f08f2 */
  if ((!C.zf&&C.sf==C.of)) goto L_116f08f2;
  /* 116f08e8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 116f08eb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116f08ed mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 116f08f0 jmp 0x116f090c */
  goto L_116f090c;
L_116f08f2:;
  /* 116f08f2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116f08f6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f08f9 jl 0x116f090c */
  if ((C.sf!=C.of)) goto L_116f090c;
  /* 116f08fb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116f08ff cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0902 jg 0x116f090c */
  if ((!C.zf&&C.sf==C.of)) goto L_116f090c;
  /* 116f0904 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 116f0907 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116f0909 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_116f090c:;
  /* 116f090c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f090f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 116f0912 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116f0916 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 116f091a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116f091d jmp 0x116f08bd */
  goto L_116f08bd;
L_116f091f:;
  /* 116f091f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f0922 mov esp, ebp */
  ESP = (EBP);
  /* 116f0924 pop ebp */
  EBP = (pop32());
  /* 116f0925 ret  */
  ESPCHK(0x116f08b0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x116f0930 (101 bytes, 36 insns) */
void f_116f0930(void) {
  FTRACE(0x116f0930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f0930 push ebp */
  push32((uint32_t)(EBP));
  /* 116f0931 mov ebp, esp */
  EBP = (ESP);
  /* 116f0933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f0936 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116f093d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0940 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116f0942 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 116f0945 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0948 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f094b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_116f094e:;
  /* 116f094e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 116f0952 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0955 jl 0x116f0960 */
  if ((C.sf!=C.of)) goto L_116f0960;
  /* 116f0957 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 116f095b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f095e jle 0x116f0972 */
  if ((C.zf||C.sf!=C.of)) goto L_116f0972;
L_116f0960:;
  /* 116f0960 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 116f0964 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0967 jl 0x116f098e */
  if ((C.sf!=C.of)) goto L_116f098e;
  /* 116f0969 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 116f096d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0970 jg 0x116f098e */
  if ((!C.zf&&C.sf==C.of)) goto L_116f098e;
L_116f0972:;
  /* 116f0972 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f0975 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0978 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116f097b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f097e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116f0980 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 116f0983 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0986 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0989 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 116f098c jmp 0x116f094e */
  goto L_116f094e;
L_116f098e:;
  /* 116f098e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f0991 mov esp, ebp */
  ESP = (EBP);
  /* 116f0993 pop ebp */
  EBP = (pop32());
  /* 116f0994 ret  */
  ESPCHK(0x116f0930u, _esp0);
  ESP += 4; return;
}

/* FUN_100109a0 @ 0x116f09a0 (122 bytes, 39 insns) */
void f_116f09a0(void) {
  FTRACE(0x116f09a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f09a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f09a1 mov ebp, esp */
  EBP = (ESP);
  /* 116f09a3 push ecx */
  push32((uint32_t)(ECX));
  /* 116f09a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f09a7 cmp eax, dword ptr [0x1171113c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1171113c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f09ad jae 0x116f09d1 */
  if (!C.cf) goto L_116f09d1;
  /* 116f09af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f09b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116f09b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f09b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116f09bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f09be mov eax, dword ptr [ecx*4 + 0x11711000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11711000)));
  /* 116f09c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116f09ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116f09cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116f09cf jne 0x116f09ec */
  if (!C.zf) goto L_116f09ec;
L_116f09d1:;
  /* 116f09d1 call 0x116ebcf0 */
  push32(0x116f09d6u); f_116ebcf0();
  /* 116f09d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116f09dc call 0x116ebd00 */
  push32(0x116f09e1u); f_116ebd00();
  /* 116f09e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116f09e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f09ea jmp 0x116f0a16 */
  goto L_116f0a16;
L_116f09ec:;
  /* 116f09ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f09ef push edx */
  push32((uint32_t)(EDX));
  /* 116f09f0 call 0x116ed510 */
  push32(0x116f09f5u); f_116ed510();
  /* 116f09f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f09f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f09fb push eax */
  push32((uint32_t)(EAX));
  /* 116f09fc call 0x116f0a20 */
  push32(0x116f0a01u); f_116f0a20();
  /* 116f0a01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0a04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116f0a07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0a0a push ecx */
  push32((uint32_t)(ECX));
  /* 116f0a0b call 0x116ed5a0 */
  push32(0x116f0a10u); f_116ed5a0();
  /* 116f0a10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0a13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116f0a16:;
  /* 116f0a16 mov esp, ebp */
  ESP = (EBP);
  /* 116f0a18 pop ebp */
  EBP = (pop32());
  /* 116f0a19 ret  */
  ESPCHK(0x116f09a0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x116f0a20 (170 bytes, 59 insns) */
void f_116f0a20(void) {
  FTRACE(0x116f0a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f0a20 push ebp */
  push32((uint32_t)(EBP));
  /* 116f0a21 mov ebp, esp */
  EBP = (ESP);
  /* 116f0a23 push ecx */
  push32((uint32_t)(ECX));
  /* 116f0a24 push esi */
  push32((uint32_t)(ESI));
  /* 116f0a25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0a28 push eax */
  push32((uint32_t)(EAX));
  /* 116f0a29 call 0x116ed390 */
  push32(0x116f0a2eu); f_116ed390();
  /* 116f0a2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0a31 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0a34 je 0x116f0a73 */
  if (C.zf) goto L_116f0a73;
  /* 116f0a36 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0a3a je 0x116f0a42 */
  if (C.zf) goto L_116f0a42;
  /* 116f0a3c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0a40 jne 0x116f0a5c */
  if (!C.zf) goto L_116f0a5c;
L_116f0a42:;
  /* 116f0a42 push 1 */
  push32((uint32_t)(0x1u));
  /* 116f0a44 call 0x116ed390 */
  push32(0x116f0a49u); f_116ed390();
  /* 116f0a49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0a4c mov esi, eax */
  ESI = (EAX);
  /* 116f0a4e push 2 */
  push32((uint32_t)(0x2u));
  /* 116f0a50 call 0x116ed390 */
  push32(0x116f0a55u); f_116ed390();
  /* 116f0a55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0a58 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0a5a je 0x116f0a73 */
  if (C.zf) goto L_116f0a73;
L_116f0a5c:;
  /* 116f0a5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0a5f push ecx */
  push32((uint32_t)(ECX));
  /* 116f0a60 call 0x116ed390 */
  push32(0x116f0a65u); f_116ed390();
  /* 116f0a65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0a68 push eax */
  push32((uint32_t)(EAX));
  /* 116f0a69 call dword ptr [0x117122c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122c0))), 0x116f0a6fu);
  /* 116f0a6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f0a71 je 0x116f0a7c */
  if (C.zf) goto L_116f0a7c;
L_116f0a73:;
  /* 116f0a73 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116f0a7a jmp 0x116f0a85 */
  goto L_116f0a85;
L_116f0a7c:;
  /* 116f0a7c call dword ptr [0x11712380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712380))), 0x116f0a82u);
  /* 116f0a82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116f0a85:;
  /* 116f0a85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0a88 push edx */
  push32((uint32_t)(EDX));
  /* 116f0a89 call 0x116ed2b0 */
  push32(0x116f0a8eu); f_116ed2b0();
  /* 116f0a8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0a91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0a94 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116f0a97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0a9a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116f0a9d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f0aa0 mov edx, dword ptr [eax*4 + 0x11711000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11711000)));
  /* 116f0aa7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 116f0aac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0ab0 je 0x116f0ac3 */
  if (C.zf) goto L_116f0ac3;
  /* 116f0ab2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f0ab5 push eax */
  push32((uint32_t)(EAX));
  /* 116f0ab6 call 0x116ebc50 */
  push32(0x116f0abbu); f_116ebc50();
  /* 116f0abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0abe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f0ac1 jmp 0x116f0ac5 */
  goto L_116f0ac5;
L_116f0ac3:;
  /* 116f0ac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116f0ac5:;
  /* 116f0ac5 pop esi */
  ESI = (pop32());
  /* 116f0ac6 mov esp, ebp */
  ESP = (EBP);
  /* 116f0ac8 pop ebp */
  EBP = (pop32());
  /* 116f0ac9 ret  */
  ESPCHK(0x116f0a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ad0 @ 0x116f0ad0 (146 bytes, 52 insns) */
void f_116f0ad0(void) {
  FTRACE(0x116f0ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f0ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f0ad1 mov ebp, esp */
  EBP = (ESP);
  /* 116f0ad3 push ebx */
  push32((uint32_t)(EBX));
  /* 116f0ad4 push esi */
  push32((uint32_t)(ESI));
  /* 116f0ad5 push edi */
  push32((uint32_t)(EDI));
L_116f0ad6:;
  /* 116f0ad6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0ada jne 0x116f0afa */
  if (!C.zf) goto L_116f0afa;
  /* 116f0adc push 0x1170b0b8 */
  push32((uint32_t)(0x1170b0b8u));
  /* 116f0ae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f0ae3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 116f0ae5 push 0x1170b780 */
  push32((uint32_t)(0x1170b780u));
  /* 116f0aea push 2 */
  push32((uint32_t)(0x2u));
  /* 116f0aec call 0x116e2ee0 */
  push32(0x116f0af1u); f_116e2ee0();
  /* 116f0af1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0af4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0af7 jne 0x116f0afa */
  if (!C.zf) goto L_116f0afa;
  /* 116f0af9 int3  */
  x86_unimpl("int3 @ 0x116f0af9");
L_116f0afa:;
  /* 116f0afa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f0afc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f0afe jne 0x116f0ad6 */
  if (!C.zf) goto L_116f0ad6;
  /* 116f0b00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0b03 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116f0b06 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 116f0b0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f0b0e je 0x116f0b5d */
  if (C.zf) goto L_116f0b5d;
  /* 116f0b10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0b13 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116f0b16 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 116f0b19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116f0b1b je 0x116f0b5d */
  if (C.zf) goto L_116f0b5d;
  /* 116f0b1d push 2 */
  push32((uint32_t)(0x2u));
  /* 116f0b1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0b22 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116f0b25 push eax */
  push32((uint32_t)(EAX));
  /* 116f0b26 call 0x116e48b0 */
  push32(0x116f0b2bu); f_116e48b0();
  /* 116f0b2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0b2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0b31 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116f0b34 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 116f0b3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0b3d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 116f0b40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0b43 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 116f0b49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0b4c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 116f0b53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0b56 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_116f0b5d:;
  /* 116f0b5d pop edi */
  EDI = (pop32());
  /* 116f0b5e pop esi */
  ESI = (pop32());
  /* 116f0b5f pop ebx */
  EBX = (pop32());
  /* 116f0b60 pop ebp */
  EBP = (pop32());
  /* 116f0b61 ret  */
  ESPCHK(0x116f0ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b70 @ 0x116f0b70 (289 bytes, 97 insns) */
void f_116f0b70(void) {
  FTRACE(0x116f0b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f0b70 push ebp */
  push32((uint32_t)(EBP));
  /* 116f0b71 mov ebp, esp */
  EBP = (ESP);
  /* 116f0b73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f0b76 push esi */
  push32((uint32_t)(ESI));
  /* 116f0b77 mov eax, dword ptr [0x1170ec98] */
  EAX = (r32((uint32_t)(0x1170ec98)));
  /* 116f0b7c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116f0b7f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116f0b86 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116f0b8d jmp 0x116f0b98 */
  goto L_116f0b98;
L_116f0b8f:;
  /* 116f0b8f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0b92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0b95 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_116f0b98:;
  /* 116f0b98 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0b9c jae 0x116f0bd1 */
  if (!C.cf) goto L_116f0bd1;
  /* 116f0b9e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0ba1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0ba4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 116f0ba7 push ecx */
  push32((uint32_t)(ECX));
  /* 116f0ba8 call 0x116e6c50 */
  push32(0x116f0badu); f_116e6c50();
  /* 116f0bad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0bb0 mov esi, eax */
  ESI = (EAX);
  /* 116f0bb2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0bb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0bb8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 116f0bbc push ecx */
  push32((uint32_t)(ECX));
  /* 116f0bbd call 0x116e6c50 */
  push32(0x116f0bc2u); f_116e6c50();
  /* 116f0bc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0bc5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0bc8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 116f0bcc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116f0bcf jmp 0x116f0b8f */
  goto L_116f0b8f;
L_116f0bd1:;
  /* 116f0bd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f0bd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0bd7 push eax */
  push32((uint32_t)(EAX));
  /* 116f0bd8 call 0x116e3e00 */
  push32(0x116f0bddu); f_116e3e00();
  /* 116f0bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0be0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116f0be3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0be7 je 0x116f0c89 */
  if (C.zf) goto L_116f0c89;
  /* 116f0bed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f0bf0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116f0bf3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116f0bfa jmp 0x116f0c05 */
  goto L_116f0c05;
L_116f0bfc:;
  /* 116f0bfc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0bff add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0c02 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_116f0c05:;
  /* 116f0c05 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0c09 jae 0x116f0c7a */
  if (!C.cf) goto L_116f0c7a;
  /* 116f0c0b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0c0e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 116f0c11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0c14 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0c17 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116f0c1a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0c1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0c20 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 116f0c23 push ecx */
  push32((uint32_t)(ECX));
  /* 116f0c24 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0c27 push edx */
  push32((uint32_t)(EDX));
  /* 116f0c28 call 0x116e6dd0 */
  push32(0x116f0c2du); f_116e6dd0();
  /* 116f0c2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0c30 push eax */
  push32((uint32_t)(EAX));
  /* 116f0c31 call 0x116e6c50 */
  push32(0x116f0c36u); f_116e6c50();
  /* 116f0c36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0c39 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0c3c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0c3e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116f0c41 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0c44 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 116f0c47 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0c4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0c4d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116f0c50 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0c53 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0c56 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 116f0c5a push eax */
  push32((uint32_t)(EAX));
  /* 116f0c5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0c5e push ecx */
  push32((uint32_t)(ECX));
  /* 116f0c5f call 0x116e6dd0 */
  push32(0x116f0c64u); f_116e6dd0();
  /* 116f0c64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0c67 push eax */
  push32((uint32_t)(EAX));
  /* 116f0c68 call 0x116e6c50 */
  push32(0x116f0c6du); f_116e6c50();
  /* 116f0c6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0c70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0c73 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0c75 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116f0c78 jmp 0x116f0bfc */
  goto L_116f0bfc;
L_116f0c7a:;
  /* 116f0c7a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0c7d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 116f0c80 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0c83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0c86 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_116f0c89:;
  /* 116f0c89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f0c8c pop esi */
  ESI = (pop32());
  /* 116f0c8d mov esp, ebp */
  ESP = (EBP);
  /* 116f0c8f pop ebp */
  EBP = (pop32());
  /* 116f0c90 ret  */
  ESPCHK(0x116f0b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ca0 @ 0x116f0ca0 (291 bytes, 97 insns) */
void f_116f0ca0(void) {
  FTRACE(0x116f0ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f0ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f0ca1 mov ebp, esp */
  EBP = (ESP);
  /* 116f0ca3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f0ca6 push esi */
  push32((uint32_t)(ESI));
  /* 116f0ca7 mov eax, dword ptr [0x1170ec98] */
  EAX = (r32((uint32_t)(0x1170ec98)));
  /* 116f0cac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116f0caf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116f0cb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116f0cbd jmp 0x116f0cc8 */
  goto L_116f0cc8;
L_116f0cbf:;
  /* 116f0cbf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0cc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0cc5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_116f0cc8:;
  /* 116f0cc8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0ccc jae 0x116f0d02 */
  if (!C.cf) goto L_116f0d02;
  /* 116f0cce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0cd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0cd4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 116f0cd8 push ecx */
  push32((uint32_t)(ECX));
  /* 116f0cd9 call 0x116e6c50 */
  push32(0x116f0cdeu); f_116e6c50();
  /* 116f0cde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0ce1 mov esi, eax */
  ESI = (EAX);
  /* 116f0ce3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0ce6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0ce9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 116f0ced push ecx */
  push32((uint32_t)(ECX));
  /* 116f0cee call 0x116e6c50 */
  push32(0x116f0cf3u); f_116e6c50();
  /* 116f0cf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0cf6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0cf9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 116f0cfd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116f0d00 jmp 0x116f0cbf */
  goto L_116f0cbf;
L_116f0d02:;
  /* 116f0d02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f0d05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0d08 push eax */
  push32((uint32_t)(EAX));
  /* 116f0d09 call 0x116e3e00 */
  push32(0x116f0d0eu); f_116e3e00();
  /* 116f0d0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0d11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116f0d14 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0d18 je 0x116f0dbb */
  if (C.zf) goto L_116f0dbb;
  /* 116f0d1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f0d21 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116f0d24 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116f0d2b jmp 0x116f0d36 */
  goto L_116f0d36;
L_116f0d2d:;
  /* 116f0d2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0d30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0d33 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_116f0d36:;
  /* 116f0d36 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0d3a jae 0x116f0dac */
  if (!C.cf) goto L_116f0dac;
  /* 116f0d3c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0d3f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 116f0d42 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0d45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0d48 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116f0d4b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0d4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0d51 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 116f0d55 push ecx */
  push32((uint32_t)(ECX));
  /* 116f0d56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0d59 push edx */
  push32((uint32_t)(EDX));
  /* 116f0d5a call 0x116e6dd0 */
  push32(0x116f0d5fu); f_116e6dd0();
  /* 116f0d5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0d62 push eax */
  push32((uint32_t)(EAX));
  /* 116f0d63 call 0x116e6c50 */
  push32(0x116f0d68u); f_116e6c50();
  /* 116f0d68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0d6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0d6e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0d70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116f0d73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0d76 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 116f0d79 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0d7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0d7f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116f0d82 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0d85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0d88 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 116f0d8c push eax */
  push32((uint32_t)(EAX));
  /* 116f0d8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0d90 push ecx */
  push32((uint32_t)(ECX));
  /* 116f0d91 call 0x116e6dd0 */
  push32(0x116f0d96u); f_116e6dd0();
  /* 116f0d96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0d99 push eax */
  push32((uint32_t)(EAX));
  /* 116f0d9a call 0x116e6c50 */
  push32(0x116f0d9fu); f_116e6c50();
  /* 116f0d9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0da2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0da5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0da7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116f0daa jmp 0x116f0d2d */
  goto L_116f0d2d;
L_116f0dac:;
  /* 116f0dac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0daf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 116f0db2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0db5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0db8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_116f0dbb:;
  /* 116f0dbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f0dbe pop esi */
  ESI = (pop32());
  /* 116f0dbf mov esp, ebp */
  ESP = (EBP);
  /* 116f0dc1 pop ebp */
  EBP = (pop32());
  /* 116f0dc2 ret  */
  ESPCHK(0x116f0ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010dd0 @ 0x116f0dd0 (878 bytes, 273 insns) */
void f_116f0dd0(void) {
  FTRACE(0x116f0dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f0dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f0dd1 mov ebp, esp */
  EBP = (ESP);
  /* 116f0dd3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f0dd6 push esi */
  push32((uint32_t)(ESI));
  /* 116f0dd7 mov eax, dword ptr [0x1170ec98] */
  EAX = (r32((uint32_t)(0x1170ec98)));
  /* 116f0ddc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116f0ddf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116f0de6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116f0ded jmp 0x116f0df8 */
  goto L_116f0df8;
L_116f0def:;
  /* 116f0def mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0df2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0df5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_116f0df8:;
  /* 116f0df8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0dfc jae 0x116f0e31 */
  if (!C.cf) goto L_116f0e31;
  /* 116f0dfe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0e01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0e04 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 116f0e07 push ecx */
  push32((uint32_t)(ECX));
  /* 116f0e08 call 0x116e6c50 */
  push32(0x116f0e0du); f_116e6c50();
  /* 116f0e0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0e10 mov esi, eax */
  ESI = (EAX);
  /* 116f0e12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0e15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0e18 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 116f0e1c push ecx */
  push32((uint32_t)(ECX));
  /* 116f0e1d call 0x116e6c50 */
  push32(0x116f0e22u); f_116e6c50();
  /* 116f0e22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0e25 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0e28 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 116f0e2c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116f0e2f jmp 0x116f0def */
  goto L_116f0def;
L_116f0e31:;
  /* 116f0e31 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116f0e38 jmp 0x116f0e43 */
  goto L_116f0e43;
L_116f0e3a:;
  /* 116f0e3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0e3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0e40 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_116f0e43:;
  /* 116f0e43 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0e47 jae 0x116f0e7d */
  if (!C.cf) goto L_116f0e7d;
  /* 116f0e49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0e4c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0e4f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 116f0e53 push eax */
  push32((uint32_t)(EAX));
  /* 116f0e54 call 0x116e6c50 */
  push32(0x116f0e59u); f_116e6c50();
  /* 116f0e59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0e5c mov esi, eax */
  ESI = (EAX);
  /* 116f0e5e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0e61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0e64 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 116f0e68 push eax */
  push32((uint32_t)(EAX));
  /* 116f0e69 call 0x116e6c50 */
  push32(0x116f0e6eu); f_116e6c50();
  /* 116f0e6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0e71 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0e74 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 116f0e78 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116f0e7b jmp 0x116f0e3a */
  goto L_116f0e3a;
L_116f0e7d:;
  /* 116f0e7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0e80 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 116f0e86 push eax */
  push32((uint32_t)(EAX));
  /* 116f0e87 call 0x116e6c50 */
  push32(0x116f0e8cu); f_116e6c50();
  /* 116f0e8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0e8f mov esi, eax */
  ESI = (EAX);
  /* 116f0e91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0e94 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 116f0e9a push edx */
  push32((uint32_t)(EDX));
  /* 116f0e9b call 0x116e6c50 */
  push32(0x116f0ea0u); f_116e6c50();
  /* 116f0ea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0ea3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0ea6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 116f0eaa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116f0ead mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0eb0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 116f0eb6 push edx */
  push32((uint32_t)(EDX));
  /* 116f0eb7 call 0x116e6c50 */
  push32(0x116f0ebcu); f_116e6c50();
  /* 116f0ebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0ebf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f0ec2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 116f0ec6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116f0ec9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0ecc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 116f0ed2 push ecx */
  push32((uint32_t)(ECX));
  /* 116f0ed3 call 0x116e6c50 */
  push32(0x116f0ed8u); f_116e6c50();
  /* 116f0ed8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0edb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f0ede lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 116f0ee2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116f0ee5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0ee8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 116f0eee push edx */
  push32((uint32_t)(EDX));
  /* 116f0eef call 0x116e6c50 */
  push32(0x116f0ef4u); f_116e6c50();
  /* 116f0ef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0ef7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f0efa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 116f0efe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116f0f01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f0f04 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0f09 push eax */
  push32((uint32_t)(EAX));
  /* 116f0f0a call 0x116e3e00 */
  push32(0x116f0f0fu); f_116e3e00();
  /* 116f0f0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0f12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116f0f15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0f19 je 0x116f1136 */
  if (C.zf) goto L_116f1136;
  /* 116f0f1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f0f22 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 116f0f25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f0f28 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0f2e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116f0f31 push 0xac */
  push32((uint32_t)(0xacu));
  /* 116f0f36 mov eax, dword ptr [0x1170ec98] */
  EAX = (r32((uint32_t)(0x1170ec98)));
  /* 116f0f3b push eax */
  push32((uint32_t)(EAX));
  /* 116f0f3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f0f3f push ecx */
  push32((uint32_t)(ECX));
  /* 116f0f40 call 0x116ea700 */
  push32(0x116f0f45u); f_116ea700();
  /* 116f0f45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0f48 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116f0f4f jmp 0x116f0f5a */
  goto L_116f0f5a;
L_116f0f51:;
  /* 116f0f51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0f54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0f57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_116f0f5a:;
  /* 116f0f5a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0f5e jae 0x116f0fce */
  if (!C.cf) goto L_116f0fce;
  /* 116f0f60 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0f63 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116f0f66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0f69 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 116f0f6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0f6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0f72 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116f0f75 push edx */
  push32((uint32_t)(EDX));
  /* 116f0f76 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0f79 push eax */
  push32((uint32_t)(EAX));
  /* 116f0f7a call 0x116e6dd0 */
  push32(0x116f0f7fu); f_116e6dd0();
  /* 116f0f7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0f82 push eax */
  push32((uint32_t)(EAX));
  /* 116f0f83 call 0x116e6c50 */
  push32(0x116f0f88u); f_116e6c50();
  /* 116f0f88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0f8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0f8e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 116f0f92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116f0f95 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0f98 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116f0f9b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0f9e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 116f0fa2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0fa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0fa8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 116f0fac push edx */
  push32((uint32_t)(EDX));
  /* 116f0fad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0fb0 push eax */
  push32((uint32_t)(EAX));
  /* 116f0fb1 call 0x116e6dd0 */
  push32(0x116f0fb6u); f_116e6dd0();
  /* 116f0fb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0fb9 push eax */
  push32((uint32_t)(EAX));
  /* 116f0fba call 0x116e6c50 */
  push32(0x116f0fbfu); f_116e6c50();
  /* 116f0fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0fc2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0fc5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 116f0fc9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116f0fcc jmp 0x116f0f51 */
  goto L_116f0f51;
L_116f0fce:;
  /* 116f0fce mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116f0fd5 jmp 0x116f0fe0 */
  goto L_116f0fe0;
L_116f0fd7:;
  /* 116f0fd7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0fda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0fdd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_116f0fe0:;
  /* 116f0fe0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0fe4 jae 0x116f1056 */
  if (!C.cf) goto L_116f1056;
  /* 116f0fe6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0fe9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116f0fec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f0fef mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 116f0ff3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f0ff6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f0ff9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 116f0ffd push eax */
  push32((uint32_t)(EAX));
  /* 116f0ffe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f1001 push ecx */
  push32((uint32_t)(ECX));
  /* 116f1002 call 0x116e6dd0 */
  push32(0x116f1007u); f_116e6dd0();
  /* 116f1007 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f100a push eax */
  push32((uint32_t)(EAX));
  /* 116f100b call 0x116e6c50 */
  push32(0x116f1010u); f_116e6c50();
  /* 116f1010 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1013 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f1016 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 116f101a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116f101d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f1020 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116f1023 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f1026 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 116f102a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f102d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f1030 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 116f1034 push eax */
  push32((uint32_t)(EAX));
  /* 116f1035 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f1038 push ecx */
  push32((uint32_t)(ECX));
  /* 116f1039 call 0x116e6dd0 */
  push32(0x116f103eu); f_116e6dd0();
  /* 116f103e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1041 push eax */
  push32((uint32_t)(EAX));
  /* 116f1042 call 0x116e6c50 */
  push32(0x116f1047u); f_116e6c50();
  /* 116f1047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f104a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f104d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 116f1051 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116f1054 jmp 0x116f0fd7 */
  goto L_116f0fd7;
L_116f1056:;
  /* 116f1056 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116f1059 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f105c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 116f1062 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f1065 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 116f106b push ecx */
  push32((uint32_t)(ECX));
  /* 116f106c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f106f push edx */
  push32((uint32_t)(EDX));
  /* 116f1070 call 0x116e6dd0 */
  push32(0x116f1075u); f_116e6dd0();
  /* 116f1075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1078 push eax */
  push32((uint32_t)(EAX));
  /* 116f1079 call 0x116e6c50 */
  push32(0x116f107eu); f_116e6c50();
  /* 116f107e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1081 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f1084 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 116f1088 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116f108b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116f108e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f1091 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 116f1097 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f109a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 116f10a0 push eax */
  push32((uint32_t)(EAX));
  /* 116f10a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f10a4 push ecx */
  push32((uint32_t)(ECX));
  /* 116f10a5 call 0x116e6dd0 */
  push32(0x116f10aau); f_116e6dd0();
  /* 116f10aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f10ad push eax */
  push32((uint32_t)(EAX));
  /* 116f10ae call 0x116e6c50 */
  push32(0x116f10b3u); f_116e6c50();
  /* 116f10b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f10b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f10b9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 116f10bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116f10c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116f10c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f10c6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 116f10cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f10cf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 116f10d5 push ecx */
  push32((uint32_t)(ECX));
  /* 116f10d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f10d9 push edx */
  push32((uint32_t)(EDX));
  /* 116f10da call 0x116e6dd0 */
  push32(0x116f10dfu); f_116e6dd0();
  /* 116f10df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f10e2 push eax */
  push32((uint32_t)(EAX));
  /* 116f10e3 call 0x116e6c50 */
  push32(0x116f10e8u); f_116e6c50();
  /* 116f10e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f10eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f10ee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 116f10f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116f10f5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116f10f8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f10fb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 116f1101 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f1104 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 116f110a push eax */
  push32((uint32_t)(EAX));
  /* 116f110b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f110e push ecx */
  push32((uint32_t)(ECX));
  /* 116f110f call 0x116e6dd0 */
  push32(0x116f1114u); f_116e6dd0();
  /* 116f1114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1117 push eax */
  push32((uint32_t)(EAX));
  /* 116f1118 call 0x116e6c50 */
  push32(0x116f111du); f_116e6c50();
  /* 116f111d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1120 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f1123 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 116f1127 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116f112a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116f112d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f1130 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_116f1136:;
  /* 116f1136 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f1139 pop esi */
  ESI = (pop32());
  /* 116f113a mov esp, ebp */
  ESP = (EBP);
  /* 116f113c pop ebp */
  EBP = (pop32());
  /* 116f113d ret  */
  ESPCHK(0x116f0dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011140 @ 0x116f1140 (31 bytes, 15 insns) */
void f_116f1140(void) {
  FTRACE(0x116f1140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f1140 push ebp */
  push32((uint32_t)(EBP));
  /* 116f1141 mov ebp, esp */
  EBP = (ESP);
  /* 116f1143 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f1145 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1148 push eax */
  push32((uint32_t)(EAX));
  /* 116f1149 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f114c push ecx */
  push32((uint32_t)(ECX));
  /* 116f114d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1150 push edx */
  push32((uint32_t)(EDX));
  /* 116f1151 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1154 push eax */
  push32((uint32_t)(EAX));
  /* 116f1155 call 0x116f1160 */
  push32(0x116f115au); f_116f1160();
  /* 116f115a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f115d pop ebp */
  EBP = (pop32());
  /* 116f115e ret  */
  ESPCHK(0x116f1140u, _esp0);
  ESP += 4; return;
}

/* FUN_10011160 @ 0x116f1160 (393 bytes, 123 insns) */
void f_116f1160(void) {
  FTRACE(0x116f1160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f1160 push ebp */
  push32((uint32_t)(EBP));
  /* 116f1161 mov ebp, esp */
  EBP = (ESP);
  /* 116f1163 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1166 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f116a jne 0x116f1176 */
  if (!C.zf) goto L_116f1176;
  /* 116f116c mov eax, dword ptr [0x1170ec98] */
  EAX = (r32((uint32_t)(0x1170ec98)));
  /* 116f1171 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116f1174 jmp 0x116f117c */
  goto L_116f117c;
L_116f1176:;
  /* 116f1176 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f1179 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_116f117c:;
  /* 116f117c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f117f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116f1182 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1185 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116f1188 push 0x1170f9bc */
  push32((uint32_t)(0x1170f9bcu));
  /* 116f118d call dword ptr [0x11712354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712354))), 0x116f1193u);
  /* 116f1193 cmp dword ptr [0x1170f9ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f9ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f119a je 0x116f11ba */
  if (C.zf) goto L_116f11ba;
  /* 116f119c push 0x1170f9bc */
  push32((uint32_t)(0x1170f9bcu));
  /* 116f11a1 call dword ptr [0x11712344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712344))), 0x116f11a7u);
  /* 116f11a7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116f11a9 call 0x116e7820 */
  push32(0x116f11aeu); f_116e7820();
  /* 116f11ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f11b1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 116f11b8 jmp 0x116f11c1 */
  goto L_116f11c1;
L_116f11ba:;
  /* 116f11ba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_116f11c1:;
  /* 116f11c1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f11c5 jbe 0x116f12b2 */
  if ((C.cf||C.zf)) goto L_116f12b2;
  /* 116f11cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f11ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116f11d0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 116f11d3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f11d7 je 0x116f11e1 */
  if (C.zf) goto L_116f11e1;
  /* 116f11d9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f11dd je 0x116f11e6 */
  if (C.zf) goto L_116f11e6;
  /* 116f11df jmp 0x116f1240 */
  goto L_116f1240;
L_116f11e1:;
  /* 116f11e1 jmp 0x116f12b2 */
  goto L_116f12b2;
L_116f11e6:;
  /* 116f11e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f11e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f11ec mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 116f11ef mov dword ptr [0x1170f998], 0 */
  w32((uint32_t)(0x1170f998), (0x0u));
  /* 116f11f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f11fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116f11ff cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1202 jne 0x116f1217 */
  if (!C.zf) goto L_116f1217;
  /* 116f1204 mov dword ptr [0x1170f998], 1 */
  w32((uint32_t)(0x1170f998), (0x1u));
  /* 116f120e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1211 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1214 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_116f1217:;
  /* 116f1217 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f121a push ecx */
  push32((uint32_t)(ECX));
  /* 116f121b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 116f121e push edx */
  push32((uint32_t)(EDX));
  /* 116f121f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 116f1222 push eax */
  push32((uint32_t)(EAX));
  /* 116f1223 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1226 push ecx */
  push32((uint32_t)(ECX));
  /* 116f1227 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f122a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116f122c push eax */
  push32((uint32_t)(EAX));
  /* 116f122d call 0x116f12f0 */
  push32(0x116f1232u); f_116f12f0();
  /* 116f1232 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1235 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1238 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f123b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 116f123e jmp 0x116f12ad */
  goto L_116f12ad;
L_116f1240:;
  /* 116f1240 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1243 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f1245 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116f1247 mov ecx, dword ptr [0x1170dc98] */
  ECX = (r32((uint32_t)(0x1170dc98)));
  /* 116f124d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f124f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116f1253 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 116f1259 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f125b je 0x116f1288 */
  if (C.zf) goto L_116f1288;
  /* 116f125d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1261 jbe 0x116f1288 */
  if ((C.cf||C.zf)) goto L_116f1288;
  /* 116f1263 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1266 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1269 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116f126b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116f126d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1270 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1273 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116f1276 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1279 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f127c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 116f127f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f1282 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1285 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_116f1288:;
  /* 116f1288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f128b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f128e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116f1290 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116f1292 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1295 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1298 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116f129b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f129e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f12a1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 116f12a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f12a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f12aa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_116f12ad:;
  /* 116f12ad jmp 0x116f11c1 */
  goto L_116f11c1;
L_116f12b2:;
  /* 116f12b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f12b6 je 0x116f12c4 */
  if (C.zf) goto L_116f12c4;
  /* 116f12b8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116f12ba call 0x116e78c0 */
  push32(0x116f12bfu); f_116e78c0();
  /* 116f12bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f12c2 jmp 0x116f12cf */
  goto L_116f12cf;
L_116f12c4:;
  /* 116f12c4 push 0x1170f9bc */
  push32((uint32_t)(0x1170f9bcu));
  /* 116f12c9 call dword ptr [0x11712344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712344))), 0x116f12cfu);
L_116f12cf:;
  /* 116f12cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f12d3 jbe 0x116f12e3 */
  if ((C.cf||C.zf)) goto L_116f12e3;
  /* 116f12d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f12d8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 116f12db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f12de sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f12e1 jmp 0x116f12e5 */
  goto L_116f12e5;
L_116f12e3:;
  /* 116f12e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116f12e5:;
  /* 116f12e5 mov esp, ebp */
  ESP = (EBP);
  /* 116f12e7 pop ebp */
  EBP = (pop32());
  /* 116f12e8 ret  */
  ESPCHK(0x116f1160u, _esp0);
  ESP += 4; return;
}

/* FUN_100112f0 @ 0x116f12f0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_116f12f0(void) {
  FTRACE(0x116f12f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f12f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f12f1 mov ebp, esp */
  EBP = (ESP);
  /* 116f12f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f12f6 push esi */
  push32((uint32_t)(ESI));
  /* 116f12f7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 116f12fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116f12fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f1301 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1304 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116f1307 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f130b ja 0x116f1858 */
  if ((!C.cf&&!C.zf)) goto L_116f1858;
  /* 116f1311 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f1314 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f1316 mov dl, byte ptr [eax + 0x116f18b9] */
  DL = (r8((uint32_t)(EAX + 0x116f18b9)));
  /* 116f131c jmp dword ptr [edx*4 + 0x116f185d] */
  switch (EDX) {
    case 0: goto L_116f1836;
    case 1: goto L_116f1345;
    case 2: goto L_116f138b;
    case 3: goto L_116f14d8;
    case 4: goto L_116f1500;
    case 5: goto L_116f159f;
    case 6: goto L_116f160b;
    case 7: goto L_116f1634;
    case 8: goto L_116f1675;
    case 9: goto L_116f1757;
    case 10: goto L_116f17be;
    case 11: goto L_116f180b;
    case 12: goto L_116f1323;
    case 13: goto L_116f1368;
    case 14: goto L_116f13ae;
    case 15: goto L_116f14ae;
    case 16: goto L_116f1545;
    case 17: goto L_116f1572;
    case 18: goto L_116f15c7;
    case 19: goto L_116f164b;
    case 20: goto L_116f16f9;
    case 21: goto L_116f1788;
    case 22: goto L_116f1858;
    default: x86_unimpl("switch@0x116f131c out of table"); return;
  }
L_116f1323:;
  /* 116f1323 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1326 push ecx */
  push32((uint32_t)(ECX));
  /* 116f1327 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f132a push edx */
  push32((uint32_t)(EDX));
  /* 116f132b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f132e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 116f1331 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f1334 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 116f1337 push eax */
  push32((uint32_t)(EAX));
  /* 116f1338 call 0x116f1910 */
  push32(0x116f133du); f_116f1910();
  /* 116f133d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1340 jmp 0x116f1858 */
  goto L_116f1858;
L_116f1345:;
  /* 116f1345 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1348 push ecx */
  push32((uint32_t)(ECX));
  /* 116f1349 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f134c push edx */
  push32((uint32_t)(EDX));
  /* 116f134d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1350 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 116f1353 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f1356 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 116f135a push eax */
  push32((uint32_t)(EAX));
  /* 116f135b call 0x116f1910 */
  push32(0x116f1360u); f_116f1910();
  /* 116f1360 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1363 jmp 0x116f1858 */
  goto L_116f1858;
L_116f1368:;
  /* 116f1368 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f136b push ecx */
  push32((uint32_t)(ECX));
  /* 116f136c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f136f push edx */
  push32((uint32_t)(EDX));
  /* 116f1370 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1373 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116f1376 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f1379 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 116f137d push eax */
  push32((uint32_t)(EAX));
  /* 116f137e call 0x116f1910 */
  push32(0x116f1383u); f_116f1910();
  /* 116f1383 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1386 jmp 0x116f1858 */
  goto L_116f1858;
L_116f138b:;
  /* 116f138b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f138e push ecx */
  push32((uint32_t)(ECX));
  /* 116f138f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1392 push edx */
  push32((uint32_t)(EDX));
  /* 116f1393 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1396 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116f1399 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f139c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 116f13a0 push eax */
  push32((uint32_t)(EAX));
  /* 116f13a1 call 0x116f1910 */
  push32(0x116f13a6u); f_116f1910();
  /* 116f13a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f13a9 jmp 0x116f1858 */
  goto L_116f1858;
L_116f13ae:;
  /* 116f13ae cmp dword ptr [0x1170f998], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f998))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f13b5 je 0x116f1436 */
  if (C.zf) goto L_116f1436;
  /* 116f13b7 mov dword ptr [0x1170f998], 0 */
  w32((uint32_t)(0x1170f998), (0x0u));
  /* 116f13c1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f13c4 push ecx */
  push32((uint32_t)(ECX));
  /* 116f13c5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f13c8 push edx */
  push32((uint32_t)(EDX));
  /* 116f13c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f13cc push eax */
  push32((uint32_t)(EAX));
  /* 116f13cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f13d0 push ecx */
  push32((uint32_t)(ECX));
  /* 116f13d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f13d4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 116f13da push eax */
  push32((uint32_t)(EAX));
  /* 116f13db call 0x116f1ac0 */
  push32(0x116f13e0u); f_116f1ac0();
  /* 116f13e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f13e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f13e6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f13e9 jne 0x116f13f0 */
  if (!C.zf) goto L_116f13f0;
  /* 116f13eb jmp 0x116f1858 */
  goto L_116f1858;
L_116f13f0:;
  /* 116f13f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f13f3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116f13f5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 116f13f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f13fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f13fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1400 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1403 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116f1405 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1408 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f140a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f140d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1410 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116f1412 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f1415 push ecx */
  push32((uint32_t)(ECX));
  /* 116f1416 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1419 push edx */
  push32((uint32_t)(EDX));
  /* 116f141a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f141d push eax */
  push32((uint32_t)(EAX));
  /* 116f141e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1421 push ecx */
  push32((uint32_t)(ECX));
  /* 116f1422 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f1425 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 116f142b push eax */
  push32((uint32_t)(EAX));
  /* 116f142c call 0x116f1ac0 */
  push32(0x116f1431u); f_116f1ac0();
  /* 116f1431 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1434 jmp 0x116f14a9 */
  goto L_116f14a9;
L_116f1436:;
  /* 116f1436 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f1439 push ecx */
  push32((uint32_t)(ECX));
  /* 116f143a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f143d push edx */
  push32((uint32_t)(EDX));
  /* 116f143e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1441 push eax */
  push32((uint32_t)(EAX));
  /* 116f1442 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1445 push ecx */
  push32((uint32_t)(ECX));
  /* 116f1446 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f1449 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 116f144f push eax */
  push32((uint32_t)(EAX));
  /* 116f1450 call 0x116f1ac0 */
  push32(0x116f1455u); f_116f1ac0();
  /* 116f1455 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1458 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f145b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f145e jne 0x116f1465 */
  if (!C.zf) goto L_116f1465;
  /* 116f1460 jmp 0x116f1858 */
  goto L_116f1858;
L_116f1465:;
  /* 116f1465 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1468 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116f146a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 116f146d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1470 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f1472 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1475 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1478 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116f147a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f147d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f147f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1482 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1485 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116f1487 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f148a push ecx */
  push32((uint32_t)(ECX));
  /* 116f148b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f148e push edx */
  push32((uint32_t)(EDX));
  /* 116f148f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1492 push eax */
  push32((uint32_t)(EAX));
  /* 116f1493 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1496 push ecx */
  push32((uint32_t)(ECX));
  /* 116f1497 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f149a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 116f14a0 push eax */
  push32((uint32_t)(EAX));
  /* 116f14a1 call 0x116f1ac0 */
  push32(0x116f14a6u); f_116f1ac0();
  /* 116f14a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116f14a9:;
  /* 116f14a9 jmp 0x116f1858 */
  goto L_116f1858;
L_116f14ae:;
  /* 116f14ae mov ecx, dword ptr [0x1170f998] */
  ECX = (r32((uint32_t)(0x1170f998)));
  /* 116f14b4 mov dword ptr [0x1170f9a8], ecx */
  w32((uint32_t)(0x1170f9a8), (ECX));
  /* 116f14ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f14bd push edx */
  push32((uint32_t)(EDX));
  /* 116f14be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f14c1 push eax */
  push32((uint32_t)(EAX));
  /* 116f14c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116f14c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f14c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116f14ca push edx */
  push32((uint32_t)(EDX));
  /* 116f14cb call 0x116f1960 */
  push32(0x116f14d0u); f_116f1960();
  /* 116f14d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f14d3 jmp 0x116f1858 */
  goto L_116f1858;
L_116f14d8:;
  /* 116f14d8 mov eax, dword ptr [0x1170f998] */
  EAX = (r32((uint32_t)(0x1170f998)));
  /* 116f14dd mov dword ptr [0x1170f9a8], eax */
  w32((uint32_t)(0x1170f9a8), (EAX));
  /* 116f14e2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f14e5 push ecx */
  push32((uint32_t)(ECX));
  /* 116f14e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f14e9 push edx */
  push32((uint32_t)(EDX));
  /* 116f14ea push 2 */
  push32((uint32_t)(0x2u));
  /* 116f14ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f14ef mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116f14f2 push ecx */
  push32((uint32_t)(ECX));
  /* 116f14f3 call 0x116f1960 */
  push32(0x116f14f8u); f_116f1960();
  /* 116f14f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f14fb jmp 0x116f1858 */
  goto L_116f1858;
L_116f1500:;
  /* 116f1500 mov edx, dword ptr [0x1170f998] */
  EDX = (r32((uint32_t)(0x1170f998)));
  /* 116f1506 mov dword ptr [0x1170f9a8], edx */
  w32((uint32_t)(0x1170f9a8), (EDX));
  /* 116f150c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f150f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 116f1512 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116f1513 mov ecx, 0xc */
  ECX = (0xcu);
  /* 116f1518 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116f151a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116f151d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1521 jne 0x116f152a */
  if (!C.zf) goto L_116f152a;
  /* 116f1523 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_116f152a:;
  /* 116f152a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f152d push edx */
  push32((uint32_t)(EDX));
  /* 116f152e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1531 push eax */
  push32((uint32_t)(EAX));
  /* 116f1532 push 2 */
  push32((uint32_t)(0x2u));
  /* 116f1534 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f1537 push ecx */
  push32((uint32_t)(ECX));
  /* 116f1538 call 0x116f1960 */
  push32(0x116f153du); f_116f1960();
  /* 116f153d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1540 jmp 0x116f1858 */
  goto L_116f1858;
L_116f1545:;
  /* 116f1545 mov edx, dword ptr [0x1170f998] */
  EDX = (r32((uint32_t)(0x1170f998)));
  /* 116f154b mov dword ptr [0x1170f9a8], edx */
  w32((uint32_t)(0x1170f9a8), (EDX));
  /* 116f1551 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1554 push eax */
  push32((uint32_t)(EAX));
  /* 116f1555 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1558 push ecx */
  push32((uint32_t)(ECX));
  /* 116f1559 push 3 */
  push32((uint32_t)(0x3u));
  /* 116f155b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f155e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 116f1561 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1564 push eax */
  push32((uint32_t)(EAX));
  /* 116f1565 call 0x116f1960 */
  push32(0x116f156au); f_116f1960();
  /* 116f156a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f156d jmp 0x116f1858 */
  goto L_116f1858;
L_116f1572:;
  /* 116f1572 mov ecx, dword ptr [0x1170f998] */
  ECX = (r32((uint32_t)(0x1170f998)));
  /* 116f1578 mov dword ptr [0x1170f9a8], ecx */
  w32((uint32_t)(0x1170f9a8), (ECX));
  /* 116f157e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1581 push edx */
  push32((uint32_t)(EDX));
  /* 116f1582 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1585 push eax */
  push32((uint32_t)(EAX));
  /* 116f1586 push 2 */
  push32((uint32_t)(0x2u));
  /* 116f1588 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f158b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 116f158e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1591 push edx */
  push32((uint32_t)(EDX));
  /* 116f1592 call 0x116f1960 */
  push32(0x116f1597u); f_116f1960();
  /* 116f1597 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f159a jmp 0x116f1858 */
  goto L_116f1858;
L_116f159f:;
  /* 116f159f mov eax, dword ptr [0x1170f998] */
  EAX = (r32((uint32_t)(0x1170f998)));
  /* 116f15a4 mov dword ptr [0x1170f9a8], eax */
  w32((uint32_t)(0x1170f9a8), (EAX));
  /* 116f15a9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f15ac push ecx */
  push32((uint32_t)(ECX));
  /* 116f15ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f15b0 push edx */
  push32((uint32_t)(EDX));
  /* 116f15b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 116f15b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f15b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116f15b9 push ecx */
  push32((uint32_t)(ECX));
  /* 116f15ba call 0x116f1960 */
  push32(0x116f15bfu); f_116f1960();
  /* 116f15bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f15c2 jmp 0x116f1858 */
  goto L_116f1858;
L_116f15c7:;
  /* 116f15c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f15ca cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f15ce jg 0x116f15ec */
  if ((!C.zf&&C.sf==C.of)) goto L_116f15ec;
  /* 116f15d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f15d3 push eax */
  push32((uint32_t)(EAX));
  /* 116f15d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f15d7 push ecx */
  push32((uint32_t)(ECX));
  /* 116f15d8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f15db mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 116f15e1 push eax */
  push32((uint32_t)(EAX));
  /* 116f15e2 call 0x116f1910 */
  push32(0x116f15e7u); f_116f1910();
  /* 116f15e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f15ea jmp 0x116f1606 */
  goto L_116f1606;
L_116f15ec:;
  /* 116f15ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f15ef push ecx */
  push32((uint32_t)(ECX));
  /* 116f15f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f15f3 push edx */
  push32((uint32_t)(EDX));
  /* 116f15f4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f15f7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 116f15fd push ecx */
  push32((uint32_t)(ECX));
  /* 116f15fe call 0x116f1910 */
  push32(0x116f1603u); f_116f1910();
  /* 116f1603 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116f1606:;
  /* 116f1606 jmp 0x116f1858 */
  goto L_116f1858;
L_116f160b:;
  /* 116f160b mov edx, dword ptr [0x1170f998] */
  EDX = (r32((uint32_t)(0x1170f998)));
  /* 116f1611 mov dword ptr [0x1170f9a8], edx */
  w32((uint32_t)(0x1170f9a8), (EDX));
  /* 116f1617 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f161a push eax */
  push32((uint32_t)(EAX));
  /* 116f161b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f161e push ecx */
  push32((uint32_t)(ECX));
  /* 116f161f push 2 */
  push32((uint32_t)(0x2u));
  /* 116f1621 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1624 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116f1626 push eax */
  push32((uint32_t)(EAX));
  /* 116f1627 call 0x116f1960 */
  push32(0x116f162cu); f_116f1960();
  /* 116f162c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f162f jmp 0x116f1858 */
  goto L_116f1858;
L_116f1634:;
  /* 116f1634 mov ecx, dword ptr [0x1170f998] */
  ECX = (r32((uint32_t)(0x1170f998)));
  /* 116f163a mov dword ptr [0x1170f9a8], ecx */
  w32((uint32_t)(0x1170f9a8), (ECX));
  /* 116f1640 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1643 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 116f1646 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116f1649 jmp 0x116f169d */
  goto L_116f169d;
L_116f164b:;
  /* 116f164b mov ecx, dword ptr [0x1170f998] */
  ECX = (r32((uint32_t)(0x1170f998)));
  /* 116f1651 mov dword ptr [0x1170f9a8], ecx */
  w32((uint32_t)(0x1170f9a8), (ECX));
  /* 116f1657 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f165a push edx */
  push32((uint32_t)(EDX));
  /* 116f165b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f165e push eax */
  push32((uint32_t)(EAX));
  /* 116f165f push 1 */
  push32((uint32_t)(0x1u));
  /* 116f1661 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1664 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 116f1667 push edx */
  push32((uint32_t)(EDX));
  /* 116f1668 call 0x116f1960 */
  push32(0x116f166du); f_116f1960();
  /* 116f166d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1670 jmp 0x116f1858 */
  goto L_116f1858;
L_116f1675:;
  /* 116f1675 mov eax, dword ptr [0x1170f998] */
  EAX = (r32((uint32_t)(0x1170f998)));
  /* 116f167a mov dword ptr [0x1170f9a8], eax */
  w32((uint32_t)(0x1170f9a8), (EAX));
  /* 116f167f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1682 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1686 jne 0x116f1691 */
  if (!C.zf) goto L_116f1691;
  /* 116f1688 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 116f168f jmp 0x116f169d */
  goto L_116f169d;
L_116f1691:;
  /* 116f1691 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1694 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 116f1697 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f169a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116f169d:;
  /* 116f169d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f16a0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 116f16a3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f16a6 jge 0x116f16b1 */
  if ((C.sf==C.of)) goto L_116f16b1;
  /* 116f16a8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116f16af jmp 0x116f16de */
  goto L_116f16de;
L_116f16b1:;
  /* 116f16b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f16b4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 116f16b7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116f16b8 mov ecx, 7 */
  ECX = (0x7u);
  /* 116f16bd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116f16bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116f16c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f16c5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 116f16c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116f16c9 mov ecx, 7 */
  ECX = (0x7u);
  /* 116f16ce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116f16d0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f16d3 jl 0x116f16de */
  if ((C.sf!=C.of)) goto L_116f16de;
  /* 116f16d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f16d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f16db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116f16de:;
  /* 116f16de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f16e1 push eax */
  push32((uint32_t)(EAX));
  /* 116f16e2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f16e5 push ecx */
  push32((uint32_t)(ECX));
  /* 116f16e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 116f16e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f16eb push edx */
  push32((uint32_t)(EDX));
  /* 116f16ec call 0x116f1960 */
  push32(0x116f16f1u); f_116f1960();
  /* 116f16f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f16f4 jmp 0x116f1858 */
  goto L_116f1858;
L_116f16f9:;
  /* 116f16f9 cmp dword ptr [0x1170f998], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f998))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1700 je 0x116f1730 */
  if (C.zf) goto L_116f1730;
  /* 116f1702 mov dword ptr [0x1170f998], 0 */
  w32((uint32_t)(0x1170f998), (0x0u));
  /* 116f170c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f170f push eax */
  push32((uint32_t)(EAX));
  /* 116f1710 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1713 push ecx */
  push32((uint32_t)(ECX));
  /* 116f1714 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1717 push edx */
  push32((uint32_t)(EDX));
  /* 116f1718 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f171b push eax */
  push32((uint32_t)(EAX));
  /* 116f171c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f171f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 116f1725 push edx */
  push32((uint32_t)(EDX));
  /* 116f1726 call 0x116f1ac0 */
  push32(0x116f172bu); f_116f1ac0();
  /* 116f172b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f172e jmp 0x116f1752 */
  goto L_116f1752;
L_116f1730:;
  /* 116f1730 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f1733 push eax */
  push32((uint32_t)(EAX));
  /* 116f1734 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1737 push ecx */
  push32((uint32_t)(ECX));
  /* 116f1738 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f173b push edx */
  push32((uint32_t)(EDX));
  /* 116f173c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f173f push eax */
  push32((uint32_t)(EAX));
  /* 116f1740 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f1743 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 116f1749 push edx */
  push32((uint32_t)(EDX));
  /* 116f174a call 0x116f1ac0 */
  push32(0x116f174fu); f_116f1ac0();
  /* 116f174f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116f1752:;
  /* 116f1752 jmp 0x116f1858 */
  goto L_116f1858;
L_116f1757:;
  /* 116f1757 mov dword ptr [0x1170f998], 0 */
  w32((uint32_t)(0x1170f998), (0x0u));
  /* 116f1761 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f1764 push eax */
  push32((uint32_t)(EAX));
  /* 116f1765 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1768 push ecx */
  push32((uint32_t)(ECX));
  /* 116f1769 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f176c push edx */
  push32((uint32_t)(EDX));
  /* 116f176d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1770 push eax */
  push32((uint32_t)(EAX));
  /* 116f1771 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f1774 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 116f177a push edx */
  push32((uint32_t)(EDX));
  /* 116f177b call 0x116f1ac0 */
  push32(0x116f1780u); f_116f1ac0();
  /* 116f1780 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1783 jmp 0x116f1858 */
  goto L_116f1858;
L_116f1788:;
  /* 116f1788 mov eax, dword ptr [0x1170f998] */
  EAX = (r32((uint32_t)(0x1170f998)));
  /* 116f178d mov dword ptr [0x1170f9a8], eax */
  w32((uint32_t)(0x1170f9a8), (EAX));
  /* 116f1792 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1795 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 116f1798 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116f1799 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 116f179e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116f17a0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116f17a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f17a6 push edx */
  push32((uint32_t)(EDX));
  /* 116f17a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f17aa push eax */
  push32((uint32_t)(EAX));
  /* 116f17ab push 2 */
  push32((uint32_t)(0x2u));
  /* 116f17ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f17b0 push ecx */
  push32((uint32_t)(ECX));
  /* 116f17b1 call 0x116f1960 */
  push32(0x116f17b6u); f_116f1960();
  /* 116f17b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f17b9 jmp 0x116f1858 */
  goto L_116f1858;
L_116f17be:;
  /* 116f17be mov edx, dword ptr [0x1170f998] */
  EDX = (r32((uint32_t)(0x1170f998)));
  /* 116f17c4 mov dword ptr [0x1170f9a8], edx */
  w32((uint32_t)(0x1170f9a8), (EDX));
  /* 116f17ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f17cd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 116f17d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116f17d1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 116f17d6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116f17d8 mov ecx, eax */
  ECX = (EAX);
  /* 116f17da add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f17dd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f17e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f17e3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116f17e6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116f17e7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 116f17ec idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116f17ee add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f17f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116f17f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f17f6 push eax */
  push32((uint32_t)(EAX));
  /* 116f17f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f17fa push ecx */
  push32((uint32_t)(ECX));
  /* 116f17fb push 4 */
  push32((uint32_t)(0x4u));
  /* 116f17fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f1800 push edx */
  push32((uint32_t)(EDX));
  /* 116f1801 call 0x116f1960 */
  push32(0x116f1806u); f_116f1960();
  /* 116f1806 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1809 jmp 0x116f1858 */
  goto L_116f1858;
L_116f180b:;
  /* 116f180b call 0x116f2920 */
  push32(0x116f1810u); f_116f2920();
  /* 116f1810 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1813 push eax */
  push32((uint32_t)(EAX));
  /* 116f1814 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1817 push ecx */
  push32((uint32_t)(ECX));
  /* 116f1818 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f181b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f181d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1821 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 116f1824 mov ecx, dword ptr [eax*4 + 0x1170ee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1170ee1c)));
  /* 116f182b push ecx */
  push32((uint32_t)(ECX));
  /* 116f182c call 0x116f1910 */
  push32(0x116f1831u); f_116f1910();
  /* 116f1831 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1834 jmp 0x116f1858 */
  goto L_116f1858;
L_116f1836:;
  /* 116f1836 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1839 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116f183b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 116f183e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1841 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f1843 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1846 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1849 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116f184b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f184e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f1850 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1853 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1856 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116f1858:;
  /* 116f1858 pop esi */
  ESI = (pop32());
  /* 116f1859 mov esp, ebp */
  ESP = (EBP);
  /* 116f185b pop ebp */
  EBP = (pop32());
  /* 116f185c ret  */
  ESPCHK(0x116f12f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x116f1910 (72 bytes, 30 insns) */
void f_116f1910(void) {
  FTRACE(0x116f1910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f1910 push ebp */
  push32((uint32_t)(EBP));
  /* 116f1911 mov ebp, esp */
  EBP = (ESP);
L_116f1913:;
  /* 116f1913 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1916 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1919 je 0x116f1956 */
  if (C.zf) goto L_116f1956;
  /* 116f191b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f191e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116f1921 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f1923 je 0x116f1956 */
  if (C.zf) goto L_116f1956;
  /* 116f1925 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1928 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116f192a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f192d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116f192f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116f1931 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1934 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f1936 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1939 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f193c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116f193e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1941 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1944 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 116f1947 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f194a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116f194c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f194f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1952 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116f1954 jmp 0x116f1913 */
  goto L_116f1913;
L_116f1956:;
  /* 116f1956 pop ebp */
  EBP = (pop32());
  /* 116f1957 ret  */
  ESPCHK(0x116f1910u, _esp0);
  ESP += 4; return;
}

/* FUN_10011960 @ 0x116f1960 (173 bytes, 64 insns) */
void f_116f1960(void) {
  FTRACE(0x116f1960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f1960 push ebp */
  push32((uint32_t)(EBP));
  /* 116f1961 mov ebp, esp */
  EBP = (ESP);
  /* 116f1963 push ecx */
  push32((uint32_t)(ECX));
  /* 116f1964 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116f196b cmp dword ptr [0x1170f9a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f9a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1972 je 0x116f198a */
  if (C.zf) goto L_116f198a;
  /* 116f1974 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1977 push eax */
  push32((uint32_t)(EAX));
  /* 116f1978 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f197b push ecx */
  push32((uint32_t)(ECX));
  /* 116f197c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f197f push edx */
  push32((uint32_t)(EDX));
  /* 116f1980 call 0x116f1a10 */
  push32(0x116f1985u); f_116f1a10();
  /* 116f1985 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1988 jmp 0x116f1a09 */
  goto L_116f1a09;
L_116f198a:;
  /* 116f198a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f198d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1990 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1992 jae 0x116f1a00 */
  if (!C.cf) goto L_116f1a00;
  /* 116f1994 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1997 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f199a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 116f199d jmp 0x116f19a8 */
  goto L_116f19a8;
L_116f199f:;
  /* 116f199f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f19a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f19a5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_116f19a8:;
  /* 116f19a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f19ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f19ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116f19b0 je 0x116f19e4 */
  if (C.zf) goto L_116f19e4;
  /* 116f19b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f19b5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116f19b6 mov ecx, 0xa */
  ECX = (0xau);
  /* 116f19bb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116f19bd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f19c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f19c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116f19c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f19c8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 116f19cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f19ce cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116f19cf mov ecx, 0xa */
  ECX = (0xau);
  /* 116f19d4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116f19d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116f19d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f19dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f19df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116f19e2 jmp 0x116f199f */
  goto L_116f199f;
L_116f19e4:;
  /* 116f19e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f19e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116f19e9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f19ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f19ef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116f19f1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f19f4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116f19f6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f19f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f19fc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116f19fe jmp 0x116f1a09 */
  goto L_116f1a09;
L_116f1a00:;
  /* 116f1a00 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1a03 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_116f1a09:;
  /* 116f1a09 mov esp, ebp */
  ESP = (EBP);
  /* 116f1a0b pop ebp */
  EBP = (pop32());
  /* 116f1a0c ret  */
  ESPCHK(0x116f1960u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x116f1a10 (172 bytes, 65 insns) */
void f_116f1a10(void) {
  FTRACE(0x116f1a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f1a10 push ebp */
  push32((uint32_t)(EBP));
  /* 116f1a11 mov ebp, esp */
  EBP = (ESP);
  /* 116f1a13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1a16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1a19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116f1a1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116f1a1e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1a21 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1a24 jbe 0x116f1a6b */
  if ((C.cf||C.zf)) goto L_116f1a6b;
L_116f1a26:;
  /* 116f1a26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1a29 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116f1a2a mov ecx, 0xa */
  ECX = (0xau);
  /* 116f1a2f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116f1a31 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1a34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f1a37 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116f1a39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f1a3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1a3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116f1a42 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1a45 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116f1a47 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1a4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1a4d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116f1a4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1a52 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116f1a53 mov ecx, 0xa */
  ECX = (0xau);
  /* 116f1a58 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116f1a5a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116f1a5d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1a61 jle 0x116f1a6b */
  if ((C.zf||C.sf!=C.of)) goto L_116f1a6b;
  /* 116f1a63 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1a66 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1a69 ja 0x116f1a26 */
  if ((!C.cf&&!C.zf)) goto L_116f1a26;
L_116f1a6b:;
  /* 116f1a6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1a6e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116f1a70 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116f1a73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1a76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f1a79 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116f1a7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f1a7e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1a81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116f1a84:;
  /* 116f1a84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f1a87 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116f1a89 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 116f1a8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f1a8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f1a92 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116f1a94 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116f1a96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f1a99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1a9c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116f1a9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f1aa2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 116f1aa5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 116f1aa7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f1aaa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1aad mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116f1ab0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f1ab3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1ab6 jb 0x116f1a84 */
  if (C.cf) goto L_116f1a84;
  /* 116f1ab8 mov esp, ebp */
  ESP = (EBP);
  /* 116f1aba pop ebp */
  EBP = (pop32());
  /* 116f1abb ret  */
  ESPCHK(0x116f1a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ac0 @ 0x116f1ac0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_116f1ac0(void) {
  FTRACE(0x116f1ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f1ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f1ac1 mov ebp, esp */
  EBP = (ESP);
  /* 116f1ac3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_116f1ac6:;
  /* 116f1ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1ac9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116f1acc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116f1ace je 0x116f1f3c */
  if (C.zf) goto L_116f1f3c;
  /* 116f1ad4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1ad7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1ada je 0x116f1f3c */
  if (C.zf) goto L_116f1f3c;
  /* 116f1ae0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 116f1ae4 mov dword ptr [0x1170f9a8], 0 */
  w32((uint32_t)(0x1170f9a8), (0x0u));
  /* 116f1aee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116f1af5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1af8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116f1afb jmp 0x116f1b06 */
  goto L_116f1b06;
L_116f1afd:;
  /* 116f1afd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f1b00 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1b03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_116f1b06:;
  /* 116f1b06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f1b09 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116f1b0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1b0f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116f1b12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f1b15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1b18 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116f1b1b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1b1d jne 0x116f1b21 */
  if (!C.zf) goto L_116f1b21;
  /* 116f1b1f jmp 0x116f1afd */
  goto L_116f1afd;
L_116f1b21:;
  /* 116f1b21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f1b24 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1b27 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116f1b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1b2d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116f1b30 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116f1b33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f1b36 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1b39 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116f1b3c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1b40 ja 0x116f1e90 */
  if ((!C.cf&&!C.zf)) goto L_116f1e90;
  /* 116f1b46 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f1b49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f1b4b mov al, byte ptr [ecx + 0x116f1f6c] */
  AL = (r8((uint32_t)(ECX + 0x116f1f6c)));
  /* 116f1b51 jmp dword ptr [eax*4 + 0x116f1f40] */
  switch (EAX) {
    case 0: goto L_116f1daf;
    case 1: goto L_116f1c93;
    case 2: goto L_116f1c1e;
    case 3: goto L_116f1b58;
    case 4: goto L_116f1b96;
    case 5: goto L_116f1bf7;
    case 6: goto L_116f1c45;
    case 7: goto L_116f1c6c;
    case 8: goto L_116f1cda;
    case 9: goto L_116f1bd4;
    case 10: goto L_116f1e90;
    default: x86_unimpl("switch@0x116f1b51 out of table"); return;
  }
L_116f1b58:;
  /* 116f1b58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f1b5b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116f1b5e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116f1b61 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1b64 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116f1b67 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1b6b ja 0x116f1b91 */
  if ((!C.cf&&!C.zf)) goto L_116f1b91;
  /* 116f1b6d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116f1b70 jmp dword ptr [ecx*4 + 0x116f1fbf] */
  switch (ECX) {
    case 0: goto L_116f1b77;
    case 1: goto L_116f1b81;
    case 2: goto L_116f1b87;
    case 3: goto L_116f1b8d;
    case 4: goto L_116f1bb5;
    case 5: goto L_116f1bbf;
    case 6: goto L_116f1bc5;
    case 7: goto L_116f1bcb;
    default: x86_unimpl("switch@0x116f1b70 out of table"); return;
  }
L_116f1b77:;
  /* 116f1b77 mov dword ptr [0x1170f9a8], 1 */
  w32((uint32_t)(0x1170f9a8), (0x1u));
L_116f1b81:;
  /* 116f1b81 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 116f1b85 jmp 0x116f1b91 */
  goto L_116f1b91;
L_116f1b87:;
  /* 116f1b87 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 116f1b8b jmp 0x116f1b91 */
  goto L_116f1b91;
L_116f1b8d:;
  /* 116f1b8d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_116f1b91:;
  /* 116f1b91 jmp 0x116f1e90 */
  goto L_116f1e90;
L_116f1b96:;
  /* 116f1b96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f1b99 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116f1b9c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116f1b9f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1ba2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116f1ba5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1ba9 ja 0x116f1bcf */
  if ((!C.cf&&!C.zf)) goto L_116f1bcf;
  /* 116f1bab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116f1bae jmp dword ptr [ecx*4 + 0x116f1fcf] */
  switch (ECX) {
    case 0: goto L_116f1bb5;
    case 1: goto L_116f1bbf;
    case 2: goto L_116f1bc5;
    case 3: goto L_116f1bcb;
    default: x86_unimpl("switch@0x116f1bae out of table"); return;
  }
L_116f1bb5:;
  /* 116f1bb5 mov dword ptr [0x1170f9a8], 1 */
  w32((uint32_t)(0x1170f9a8), (0x1u));
L_116f1bbf:;
  /* 116f1bbf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 116f1bc3 jmp 0x116f1bcf */
  goto L_116f1bcf;
L_116f1bc5:;
  /* 116f1bc5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 116f1bc9 jmp 0x116f1bcf */
  goto L_116f1bcf;
L_116f1bcb:;
  /* 116f1bcb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_116f1bcf:;
  /* 116f1bcf jmp 0x116f1e90 */
  goto L_116f1e90;
L_116f1bd4:;
  /* 116f1bd4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f1bd7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 116f1bda cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1bde je 0x116f1be8 */
  if (C.zf) goto L_116f1be8;
  /* 116f1be0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1be4 je 0x116f1bee */
  if (C.zf) goto L_116f1bee;
  /* 116f1be6 jmp 0x116f1bf2 */
  goto L_116f1bf2;
L_116f1be8:;
  /* 116f1be8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 116f1bec jmp 0x116f1bf2 */
  goto L_116f1bf2;
L_116f1bee:;
  /* 116f1bee mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_116f1bf2:;
  /* 116f1bf2 jmp 0x116f1e90 */
  goto L_116f1e90;
L_116f1bf7:;
  /* 116f1bf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f1bfa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116f1bfd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1c01 je 0x116f1c0b */
  if (C.zf) goto L_116f1c0b;
  /* 116f1c03 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1c07 je 0x116f1c15 */
  if (C.zf) goto L_116f1c15;
  /* 116f1c09 jmp 0x116f1c19 */
  goto L_116f1c19;
L_116f1c0b:;
  /* 116f1c0b mov dword ptr [0x1170f9a8], 1 */
  w32((uint32_t)(0x1170f9a8), (0x1u));
L_116f1c15:;
  /* 116f1c15 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_116f1c19:;
  /* 116f1c19 jmp 0x116f1e90 */
  goto L_116f1e90;
L_116f1c1e:;
  /* 116f1c1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f1c21 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 116f1c24 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1c28 je 0x116f1c32 */
  if (C.zf) goto L_116f1c32;
  /* 116f1c2a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1c2e je 0x116f1c3c */
  if (C.zf) goto L_116f1c3c;
  /* 116f1c30 jmp 0x116f1c40 */
  goto L_116f1c40;
L_116f1c32:;
  /* 116f1c32 mov dword ptr [0x1170f9a8], 1 */
  w32((uint32_t)(0x1170f9a8), (0x1u));
L_116f1c3c:;
  /* 116f1c3c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_116f1c40:;
  /* 116f1c40 jmp 0x116f1e90 */
  goto L_116f1e90;
L_116f1c45:;
  /* 116f1c45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f1c48 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 116f1c4b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1c4f je 0x116f1c59 */
  if (C.zf) goto L_116f1c59;
  /* 116f1c51 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1c55 je 0x116f1c63 */
  if (C.zf) goto L_116f1c63;
  /* 116f1c57 jmp 0x116f1c67 */
  goto L_116f1c67;
L_116f1c59:;
  /* 116f1c59 mov dword ptr [0x1170f9a8], 1 */
  w32((uint32_t)(0x1170f9a8), (0x1u));
L_116f1c63:;
  /* 116f1c63 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_116f1c67:;
  /* 116f1c67 jmp 0x116f1e90 */
  goto L_116f1e90;
L_116f1c6c:;
  /* 116f1c6c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f1c6f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 116f1c72 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1c76 je 0x116f1c80 */
  if (C.zf) goto L_116f1c80;
  /* 116f1c78 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1c7c je 0x116f1c8a */
  if (C.zf) goto L_116f1c8a;
  /* 116f1c7e jmp 0x116f1c8e */
  goto L_116f1c8e;
L_116f1c80:;
  /* 116f1c80 mov dword ptr [0x1170f9a8], 1 */
  w32((uint32_t)(0x1170f9a8), (0x1u));
L_116f1c8a:;
  /* 116f1c8a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_116f1c8e:;
  /* 116f1c8e jmp 0x116f1e90 */
  goto L_116f1e90;
L_116f1c93:;
  /* 116f1c93 push 0x1170b8b4 */
  push32((uint32_t)(0x1170b8b4u));
  /* 116f1c98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1c9b push ecx */
  push32((uint32_t)(ECX));
  /* 116f1c9c call 0x116f24f0 */
  push32(0x116f1ca1u); f_116f24f0();
  /* 116f1ca1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f1ca6 jne 0x116f1cb3 */
  if (!C.zf) goto L_116f1cb3;
  /* 116f1ca8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1cab add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1cae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116f1cb1 jmp 0x116f1cd1 */
  goto L_116f1cd1;
L_116f1cb3:;
  /* 116f1cb3 push 0x1170b8b0 */
  push32((uint32_t)(0x1170b8b0u));
  /* 116f1cb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1cbb push eax */
  push32((uint32_t)(EAX));
  /* 116f1cbc call 0x116f24f0 */
  push32(0x116f1cc1u); f_116f24f0();
  /* 116f1cc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1cc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f1cc6 jne 0x116f1cd1 */
  if (!C.zf) goto L_116f1cd1;
  /* 116f1cc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1ccb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1cce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116f1cd1:;
  /* 116f1cd1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 116f1cd5 jmp 0x116f1e90 */
  goto L_116f1e90;
L_116f1cda:;
  /* 116f1cda mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1cdd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1ce1 jg 0x116f1cf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_116f1cf1;
  /* 116f1ce3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f1ce6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 116f1cec mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116f1cef jmp 0x116f1cfd */
  goto L_116f1cfd;
L_116f1cf1:;
  /* 116f1cf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f1cf4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 116f1cfa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_116f1cfd:;
  /* 116f1cfd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1d01 jle 0x116f1da4 */
  if ((C.zf||C.sf!=C.of)) goto L_116f1da4;
  /* 116f1d07 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1d0a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1d0d jbe 0x116f1da4 */
  if ((C.cf||C.zf)) goto L_116f1da4;
  /* 116f1d13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f1d16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f1d18 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116f1d1a mov ecx, dword ptr [0x1170dc98] */
  ECX = (r32((uint32_t)(0x1170dc98)));
  /* 116f1d20 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f1d22 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116f1d26 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 116f1d2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f1d2e je 0x116f1d67 */
  if (C.zf) goto L_116f1d67;
  /* 116f1d30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1d33 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1d36 jbe 0x116f1d67 */
  if ((C.cf||C.zf)) goto L_116f1d67;
  /* 116f1d38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1d3b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f1d3d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f1d40 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116f1d42 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 116f1d44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1d47 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116f1d49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1d4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1d4f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116f1d51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f1d54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1d57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 116f1d5a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1d5d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116f1d5f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1d62 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1d65 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116f1d67:;
  /* 116f1d67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1d6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116f1d6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f1d6f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116f1d71 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116f1d73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1d76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f1d78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1d7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1d7e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116f1d80 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f1d83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1d86 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116f1d89 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1d8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116f1d8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1d91 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1d94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116f1d96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f1d99 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1d9c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116f1d9f jmp 0x116f1cfd */
  goto L_116f1cfd;
L_116f1da4:;
  /* 116f1da4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f1da7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116f1daa jmp 0x116f1ac6 */
  goto L_116f1ac6;
L_116f1daf:;
  /* 116f1daf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f1db2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116f1db5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116f1db7 je 0x116f1e82 */
  if (C.zf) goto L_116f1e82;
  /* 116f1dbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1dc0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1dc3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_116f1dc6:;
  /* 116f1dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1dc9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116f1dcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116f1dce je 0x116f1e80 */
  if (C.zf) goto L_116f1e80;
  /* 116f1dd4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1dd7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1dda je 0x116f1e80 */
  if (C.zf) goto L_116f1e80;
  /* 116f1de0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1de3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116f1de6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1de9 jne 0x116f1df9 */
  if (!C.zf) goto L_116f1df9;
  /* 116f1deb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1dee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1df1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 116f1df4 jmp 0x116f1e80 */
  goto L_116f1e80;
L_116f1df9:;
  /* 116f1df9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1dfc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f1dfe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116f1e00 mov edx, dword ptr [0x1170dc98] */
  EDX = (r32((uint32_t)(0x1170dc98)));
  /* 116f1e06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f1e08 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 116f1e0c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 116f1e11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f1e13 je 0x116f1e4c */
  if (C.zf) goto L_116f1e4c;
  /* 116f1e15 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1e18 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1e1b jbe 0x116f1e4c */
  if ((C.cf||C.zf)) goto L_116f1e4c;
  /* 116f1e1d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1e20 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116f1e22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1e25 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116f1e27 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116f1e29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1e2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116f1e2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1e31 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1e34 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116f1e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1e39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1e3c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116f1e3f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1e42 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f1e44 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1e47 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1e4a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116f1e4c:;
  /* 116f1e4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1e4f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f1e51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1e54 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116f1e56 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 116f1e58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1e5b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116f1e5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1e60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1e63 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116f1e65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1e68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1e6b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 116f1e6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1e71 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116f1e73 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1e76 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1e79 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116f1e7b jmp 0x116f1dc6 */
  goto L_116f1dc6;
L_116f1e80:;
  /* 116f1e80 jmp 0x116f1e8b */
  goto L_116f1e8b;
L_116f1e82:;
  /* 116f1e82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1e85 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1e88 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_116f1e8b:;
  /* 116f1e8b jmp 0x116f1ac6 */
  goto L_116f1ac6;
L_116f1e90:;
  /* 116f1e90 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116f1e94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116f1e96 je 0x116f1ebc */
  if (C.zf) goto L_116f1ebc;
  /* 116f1e98 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f1e9b push edx */
  push32((uint32_t)(EDX));
  /* 116f1e9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1e9f push eax */
  push32((uint32_t)(EAX));
  /* 116f1ea0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 116f1ea4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f1ea7 push edx */
  push32((uint32_t)(EDX));
  /* 116f1ea8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 116f1eab push eax */
  push32((uint32_t)(EAX));
  /* 116f1eac call 0x116f12f0 */
  push32(0x116f1eb1u); f_116f12f0();
  /* 116f1eb1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1eb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f1eb7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 116f1eba jmp 0x116f1f37 */
  goto L_116f1f37;
L_116f1ebc:;
  /* 116f1ebc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1ebf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f1ec1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116f1ec3 mov ecx, dword ptr [0x1170dc98] */
  ECX = (r32((uint32_t)(0x1170dc98)));
  /* 116f1ec9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f1ecb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116f1ecf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 116f1ed5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f1ed7 je 0x116f1f08 */
  if (C.zf) goto L_116f1f08;
  /* 116f1ed9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1edc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116f1ede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1ee1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116f1ee3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116f1ee5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1ee8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f1eea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1eed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1ef0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116f1ef2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1ef5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1ef8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 116f1efb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1efe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116f1f00 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1f03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1f06 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_116f1f08:;
  /* 116f1f08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1f0b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116f1f0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1f10 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116f1f12 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116f1f14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1f17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116f1f19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1f1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f1f1f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116f1f21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f1f24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f1f27 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116f1f2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1f2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f1f2f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1f32 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1f35 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116f1f37:;
  /* 116f1f37 jmp 0x116f1ac6 */
  goto L_116f1ac6;
L_116f1f3c:;
  /* 116f1f3c mov esp, ebp */
  ESP = (EBP);
  /* 116f1f3e pop ebp */
  EBP = (pop32());
  /* 116f1f3f ret  */
  ESPCHK(0x116f1ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fe0 @ 0x116f1fe0 (650 bytes, 178 insns) */
void f_116f1fe0(void) {
  FTRACE(0x116f1fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f1fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f1fe1 mov ebp, esp */
  EBP = (ESP);
  /* 116f1fe3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f1fe9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f1fed jne 0x116f2149 */
  if (!C.zf) goto L_116f2149;
  /* 116f1ff3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f1ff6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 116f1ffc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 116f2002 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116f2005 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116f200c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 116f2016 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2018 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 116f201e push edx */
  push32((uint32_t)(EDX));
  /* 116f201f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2022 push eax */
  push32((uint32_t)(EAX));
  /* 116f2023 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f2026 push ecx */
  push32((uint32_t)(ECX));
  /* 116f2027 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f202a push edx */
  push32((uint32_t)(EDX));
  /* 116f202b call 0x116f3400 */
  push32(0x116f2030u); f_116f3400();
  /* 116f2030 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2033 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116f2036 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f203a jne 0x116f20cf */
  if (!C.zf) goto L_116f20cf;
  /* 116f2040 call dword ptr [0x11712380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712380))), 0x116f2046u);
  /* 116f2046 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2049 je 0x116f2050 */
  if (C.zf) goto L_116f2050;
  /* 116f204b jmp 0x116f212d */
  goto L_116f212d;
L_116f2050:;
  /* 116f2050 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2052 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2054 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2056 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f2059 push eax */
  push32((uint32_t)(EAX));
  /* 116f205a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f205d push ecx */
  push32((uint32_t)(ECX));
  /* 116f205e call 0x116f3400 */
  push32(0x116f2063u); f_116f3400();
  /* 116f2063 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2066 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 116f206c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2073 jne 0x116f207a */
  if (!C.zf) goto L_116f207a;
  /* 116f2075 jmp 0x116f212d */
  goto L_116f212d;
L_116f207a:;
  /* 116f207a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 116f207c push 0x1170b8bc */
  push32((uint32_t)(0x1170b8bcu));
  /* 116f2081 push 2 */
  push32((uint32_t)(0x2u));
  /* 116f2083 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 116f2089 push edx */
  push32((uint32_t)(EDX));
  /* 116f208a call 0x116e3e20 */
  push32(0x116f208fu); f_116e3e20();
  /* 116f208f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2092 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116f2095 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2099 jne 0x116f20a0 */
  if (!C.zf) goto L_116f20a0;
  /* 116f209b jmp 0x116f212d */
  goto L_116f212d;
L_116f20a0:;
  /* 116f20a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116f20a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f20a9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 116f20af push eax */
  push32((uint32_t)(EAX));
  /* 116f20b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f20b3 push ecx */
  push32((uint32_t)(ECX));
  /* 116f20b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f20b7 push edx */
  push32((uint32_t)(EDX));
  /* 116f20b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f20bb push eax */
  push32((uint32_t)(EAX));
  /* 116f20bc call 0x116f3400 */
  push32(0x116f20c1u); f_116f3400();
  /* 116f20c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f20c4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116f20c7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f20cb jne 0x116f20cf */
  if (!C.zf) goto L_116f20cf;
  /* 116f20cd jmp 0x116f212d */
  goto L_116f212d;
L_116f20cf:;
  /* 116f20cf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 116f20d1 push 0x1170b8bc */
  push32((uint32_t)(0x1170b8bcu));
  /* 116f20d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 116f20d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f20db push ecx */
  push32((uint32_t)(ECX));
  /* 116f20dc call 0x116e3e20 */
  push32(0x116f20e1u); f_116e3e20();
  /* 116f20e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f20e4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 116f20ea mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116f20ec mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 116f20f2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f20f5 jne 0x116f20f9 */
  if (!C.zf) goto L_116f20f9;
  /* 116f20f7 jmp 0x116f212d */
  goto L_116f212d;
L_116f20f9:;
  /* 116f20f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f20fc push ecx */
  push32((uint32_t)(ECX));
  /* 116f20fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2100 push edx */
  push32((uint32_t)(EDX));
  /* 116f2101 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 116f2107 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116f2109 push ecx */
  push32((uint32_t)(ECX));
  /* 116f210a call 0x116e7640 */
  push32(0x116f210fu); f_116e7640();
  /* 116f210f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2112 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2116 je 0x116f2126 */
  if (C.zf) goto L_116f2126;
  /* 116f2118 push 2 */
  push32((uint32_t)(0x2u));
  /* 116f211a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f211d push edx */
  push32((uint32_t)(EDX));
  /* 116f211e call 0x116e48b0 */
  push32(0x116f2123u); f_116e48b0();
  /* 116f2123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116f2126:;
  /* 116f2126 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f2128 jmp 0x116f2266 */
  goto L_116f2266;
L_116f212d:;
  /* 116f212d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2131 je 0x116f2141 */
  if (C.zf) goto L_116f2141;
  /* 116f2133 push 2 */
  push32((uint32_t)(0x2u));
  /* 116f2135 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2138 push eax */
  push32((uint32_t)(EAX));
  /* 116f2139 call 0x116e48b0 */
  push32(0x116f213eu); f_116e48b0();
  /* 116f213e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116f2141:;
  /* 116f2141 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f2144 jmp 0x116f2266 */
  goto L_116f2266;
L_116f2149:;
  /* 116f2149 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f214d jne 0x116f2263 */
  if (!C.zf) goto L_116f2263;
  /* 116f2153 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 116f215d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f2160 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 116f2166 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2168 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 116f216e push edx */
  push32((uint32_t)(EDX));
  /* 116f216f push 0x1170f8c0 */
  push32((uint32_t)(0x1170f8c0u));
  /* 116f2174 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f2177 push eax */
  push32((uint32_t)(EAX));
  /* 116f2178 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f217b push ecx */
  push32((uint32_t)(ECX));
  /* 116f217c call 0x116f3260 */
  push32(0x116f2181u); f_116f3260();
  /* 116f2181 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f2186 jne 0x116f2190 */
  if (!C.zf) goto L_116f2190;
  /* 116f2188 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f218b jmp 0x116f2266 */
  goto L_116f2266;
L_116f2190:;
  /* 116f2190 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116f2196 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 116f2199 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 116f21a3 jmp 0x116f21b4 */
  goto L_116f21b4;
L_116f21a5:;
  /* 116f21a5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116f21ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f21ae mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_116f21b4:;
  /* 116f21b4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f21bb jge 0x116f225f */
  if ((C.sf==C.of)) goto L_116f225f;
  /* 116f21c1 cmp dword ptr [0x1170dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f21c8 jle 0x116f21fb */
  if ((C.zf||C.sf!=C.of)) goto L_116f21fb;
  /* 116f21ca push 4 */
  push32((uint32_t)(0x4u));
  /* 116f21cc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116f21d2 mov dl, byte ptr [ecx*2 + 0x1170f8c0] */
  DL = (r8((uint32_t)(ECX*2 + 0x1170f8c0)));
  /* 116f21d9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 116f21df mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 116f21e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f21ea push eax */
  push32((uint32_t)(EAX));
  /* 116f21eb call 0x116e9e30 */
  push32(0x116f21f0u); f_116e9e30();
  /* 116f21f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f21f3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 116f21f9 jmp 0x116f222e */
  goto L_116f222e;
L_116f21fb:;
  /* 116f21fb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116f2201 mov dl, byte ptr [ecx*2 + 0x1170f8c0] */
  DL = (r8((uint32_t)(ECX*2 + 0x1170f8c0)));
  /* 116f2208 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 116f220e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 116f2214 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f2219 mov ecx, dword ptr [0x1170dc98] */
  ECX = (r32((uint32_t)(0x1170dc98)));
  /* 116f221f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2221 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116f2225 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116f2228 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_116f222e:;
  /* 116f222e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2235 je 0x116f2258 */
  if (C.zf) goto L_116f2258;
  /* 116f2237 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116f223d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116f2240 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f2243 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 116f224a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 116f224e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116f2254 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116f2256 jmp 0x116f225a */
  goto L_116f225a;
L_116f2258:;
  /* 116f2258 jmp 0x116f225f */
  goto L_116f225f;
L_116f225a:;
  /* 116f225a jmp 0x116f21a5 */
  goto L_116f21a5;
L_116f225f:;
  /* 116f225f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f2261 jmp 0x116f2266 */
  goto L_116f2266;
L_116f2263:;
  /* 116f2263 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_116f2266:;
  /* 116f2266 mov esp, ebp */
  ESP = (EBP);
  /* 116f2268 pop ebp */
  EBP = (pop32());
  /* 116f2269 ret  */
  ESPCHK(0x116f1fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012270 @ 0x116f2270 (10 bytes, 5 insns) */
void f_116f2270(void) {
  FTRACE(0x116f2270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f2270 push ebp */
  push32((uint32_t)(EBP));
  /* 116f2271 mov ebp, esp */
  EBP = (ESP);
  /* 116f2273 mov eax, dword ptr [0x1170ed88] */
  EAX = (r32((uint32_t)(0x1170ed88)));
  /* 116f2278 pop ebp */
  EBP = (pop32());
  /* 116f2279 ret  */
  ESPCHK(0x116f2270u, _esp0);
  ESP += 4; return;
}

/* FUN_10012280 @ 0x116f2280 (575 bytes, 196 insns) */
void f_116f2280(void) {
  FTRACE(0x116f2280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f2280 push ebp */
  push32((uint32_t)(EBP));
  /* 116f2281 mov ebp, esp */
  EBP = (ESP);
  /* 116f2283 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116f2285 push 0x1170b8c8 */
  push32((uint32_t)(0x1170b8c8u));
  /* 116f228a push 0x116ecf28 */
  push32((uint32_t)(0x116ecf28u));
  /* 116f228f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 116f2295 push eax */
  push32((uint32_t)(EAX));
  /* 116f2296 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 116f229d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f22a0 push ebx */
  push32((uint32_t)(EBX));
  /* 116f22a1 push esi */
  push32((uint32_t)(ESI));
  /* 116f22a2 push edi */
  push32((uint32_t)(EDI));
  /* 116f22a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116f22a6 cmp dword ptr [0x1170f8cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f22ad jne 0x116f22fe */
  if (!C.zf) goto L_116f22fe;
  /* 116f22af lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 116f22b2 push eax */
  push32((uint32_t)(EAX));
  /* 116f22b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 116f22b5 push 0x1170aff8 */
  push32((uint32_t)(0x1170aff8u));
  /* 116f22ba push 1 */
  push32((uint32_t)(0x1u));
  /* 116f22bc call dword ptr [0x117122ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122ec))), 0x116f22c2u);
  /* 116f22c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f22c4 je 0x116f22d2 */
  if (C.zf) goto L_116f22d2;
  /* 116f22c6 mov dword ptr [0x1170f8cc], 1 */
  w32((uint32_t)(0x1170f8cc), (0x1u));
  /* 116f22d0 jmp 0x116f22fe */
  goto L_116f22fe;
L_116f22d2:;
  /* 116f22d2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 116f22d5 push ecx */
  push32((uint32_t)(ECX));
  /* 116f22d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 116f22d8 push 0x1170aff4 */
  push32((uint32_t)(0x1170aff4u));
  /* 116f22dd push 1 */
  push32((uint32_t)(0x1u));
  /* 116f22df push 0 */
  push32((uint32_t)(0x0u));
  /* 116f22e1 call dword ptr [0x117122fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122fc))), 0x116f22e7u);
  /* 116f22e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f22e9 je 0x116f22f7 */
  if (C.zf) goto L_116f22f7;
  /* 116f22eb mov dword ptr [0x1170f8cc], 2 */
  w32((uint32_t)(0x1170f8cc), (0x2u));
  /* 116f22f5 jmp 0x116f22fe */
  goto L_116f22fe;
L_116f22f7:;
  /* 116f22f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f22f9 jmp 0x116f24d9 */
  goto L_116f24d9;
L_116f22fe:;
  /* 116f22fe cmp dword ptr [0x1170f8cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2305 jne 0x116f2322 */
  if (!C.zf) goto L_116f2322;
  /* 116f2307 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f230a push edx */
  push32((uint32_t)(EDX));
  /* 116f230b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f230e push eax */
  push32((uint32_t)(EAX));
  /* 116f230f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f2312 push ecx */
  push32((uint32_t)(ECX));
  /* 116f2313 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2316 push edx */
  push32((uint32_t)(EDX));
  /* 116f2317 call dword ptr [0x117122ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122ec))), 0x116f231du);
  /* 116f231d jmp 0x116f24d9 */
  goto L_116f24d9;
L_116f2322:;
  /* 116f2322 cmp dword ptr [0x1170f8cc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8cc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2329 jne 0x116f24d7 */
  if (!C.zf) goto L_116f24d7;
  /* 116f232f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2333 jne 0x116f233d */
  if (!C.zf) goto L_116f233d;
  /* 116f2335 mov eax, dword ptr [0x1170f840] */
  EAX = (r32((uint32_t)(0x1170f840)));
  /* 116f233a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_116f233d:;
  /* 116f233d push 0 */
  push32((uint32_t)(0x0u));
  /* 116f233f push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2341 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2343 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2345 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f2348 push ecx */
  push32((uint32_t)(ECX));
  /* 116f2349 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f234c push edx */
  push32((uint32_t)(EDX));
  /* 116f234d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116f2352 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f2355 push eax */
  push32((uint32_t)(EAX));
  /* 116f2356 call dword ptr [0x117123ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123ac))), 0x116f235cu);
  /* 116f235c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116f235f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2363 jne 0x116f236c */
  if (!C.zf) goto L_116f236c;
  /* 116f2365 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f2367 jmp 0x116f24d9 */
  goto L_116f24d9;
L_116f236c:;
  /* 116f236c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116f2373 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116f2376 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2379 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116f237b call 0x116e6fc0 */
  push32(0x116f2380u); f_116e6fc0();
  /* 116f2380 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 116f2383 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116f2386 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116f2389 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 116f238c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116f238f push edx */
  push32((uint32_t)(EDX));
  /* 116f2390 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2392 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116f2395 push eax */
  push32((uint32_t)(EAX));
  /* 116f2396 call 0x116e7b90 */
  push32(0x116f239bu); f_116e7b90();
  /* 116f239b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f239e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116f23a5 jmp 0x116f23be */
  goto L_116f23be;
  /* 116f23a7 mov eax, 1 */
  EAX = (0x1u);
  /* 116f23ac ret  */
  ESPCHK(0x116f2280u, _esp0);
  ESP += 4; return;
  /* 116f23ad mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116f23b0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 116f23b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116f23be:;
  /* 116f23be cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f23c2 jne 0x116f23cb */
  if (!C.zf) goto L_116f23cb;
  /* 116f23c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f23c6 jmp 0x116f24d9 */
  goto L_116f24d9;
L_116f23cb:;
  /* 116f23cb push 0 */
  push32((uint32_t)(0x0u));
  /* 116f23cd push 0 */
  push32((uint32_t)(0x0u));
  /* 116f23cf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116f23d2 push ecx */
  push32((uint32_t)(ECX));
  /* 116f23d3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116f23d6 push edx */
  push32((uint32_t)(EDX));
  /* 116f23d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f23da push eax */
  push32((uint32_t)(EAX));
  /* 116f23db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f23de push ecx */
  push32((uint32_t)(ECX));
  /* 116f23df push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116f23e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f23e7 push edx */
  push32((uint32_t)(EDX));
  /* 116f23e8 call dword ptr [0x117123ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123ac))), 0x116f23eeu);
  /* 116f23ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f23f0 jne 0x116f23f9 */
  if (!C.zf) goto L_116f23f9;
  /* 116f23f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f23f4 jmp 0x116f24d9 */
  goto L_116f24d9;
L_116f23f9:;
  /* 116f23f9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116f2400 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116f2403 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 116f2407 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f240a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116f240c call 0x116e6fc0 */
  push32(0x116f2411u); f_116e6fc0();
  /* 116f2411 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 116f2414 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116f2417 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 116f241a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116f241d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116f2424 jmp 0x116f243d */
  goto L_116f243d;
  /* 116f2426 mov eax, 1 */
  EAX = (0x1u);
  /* 116f242b ret  */
  ESPCHK(0x116f2280u, _esp0);
  ESP += 4; return;
  /* 116f242c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116f242f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116f2436 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116f243d:;
  /* 116f243d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2441 jne 0x116f244a */
  if (!C.zf) goto L_116f244a;
  /* 116f2443 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f2445 jmp 0x116f24d9 */
  goto L_116f24d9;
L_116f244a:;
  /* 116f244a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f244e jne 0x116f2459 */
  if (!C.zf) goto L_116f2459;
  /* 116f2450 mov edx, dword ptr [0x1170f830] */
  EDX = (r32((uint32_t)(0x1170f830)));
  /* 116f2456 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_116f2459:;
  /* 116f2459 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f245c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116f245f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 116f2465 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f2468 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116f246b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 116f2472 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116f2475 push ecx */
  push32((uint32_t)(ECX));
  /* 116f2476 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116f2479 push edx */
  push32((uint32_t)(EDX));
  /* 116f247a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116f247d push eax */
  push32((uint32_t)(EAX));
  /* 116f247e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2481 push ecx */
  push32((uint32_t)(ECX));
  /* 116f2482 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116f2485 push edx */
  push32((uint32_t)(EDX));
  /* 116f2486 call dword ptr [0x117122fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122fc))), 0x116f248cu);
  /* 116f248c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116f248f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f2492 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116f2495 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2497 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 116f249c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f24a2 je 0x116f24b8 */
  if (C.zf) goto L_116f24b8;
  /* 116f24a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f24a7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116f24aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f24ac mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116f24b0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f24b6 je 0x116f24bc */
  if (C.zf) goto L_116f24bc;
L_116f24b8:;
  /* 116f24b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f24ba jmp 0x116f24d9 */
  goto L_116f24d9;
L_116f24bc:;
  /* 116f24bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f24bf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116f24c1 push eax */
  push32((uint32_t)(EAX));
  /* 116f24c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116f24c5 push ecx */
  push32((uint32_t)(ECX));
  /* 116f24c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f24c9 push edx */
  push32((uint32_t)(EDX));
  /* 116f24ca call 0x116ebd10 */
  push32(0x116f24cfu); f_116ebd10();
  /* 116f24cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f24d2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116f24d5 jmp 0x116f24d9 */
  goto L_116f24d9;
L_116f24d7:;
  /* 116f24d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116f24d9:;
  /* 116f24d9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 116f24dc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f24df mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 116f24e6 pop edi */
  EDI = (pop32());
  /* 116f24e7 pop esi */
  ESI = (pop32());
  /* 116f24e8 pop ebx */
  EBX = (pop32());
  /* 116f24e9 mov esp, ebp */
  ESP = (EBP);
  /* 116f24eb pop ebp */
  EBP = (pop32());
  /* 116f24ec ret  */
  ESPCHK(0x116f2280u, _esp0);
  ESP += 4; return;
}

/* FUN_100124f0 @ 0x116f24f0 (208 bytes, 85 insns) */
void f_116f24f0(void) {
  FTRACE(0x116f24f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f24f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f24f1 mov ebp, esp */
  EBP = (ESP);
  /* 116f24f3 push edi */
  push32((uint32_t)(EDI));
  /* 116f24f4 push esi */
  push32((uint32_t)(ESI));
  /* 116f24f5 push ebx */
  push32((uint32_t)(EBX));
  /* 116f24f6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 116f24f9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 116f24fc lea eax, [0x1170f828] */
  EAX = ((uint32_t)(0x1170f828));
  /* 116f2502 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2506 jne 0x116f2543 */
  if (!C.zf) goto L_116f2543;
  /* 116f2508 mov al, 0xff */
  AL = (0xffu);
  /* 116f250a mov edi, edi */
  EDI = (EDI);
L_116f250c:;
  /* 116f250c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116f250e je 0x116f253e */
  if (C.zf) goto L_116f253e;
  /* 116f2510 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116f2512 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116f2513 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 116f2515 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116f2516 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f2518 je 0x116f250c */
  if (C.zf) goto L_116f250c;
  /* 116f251a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116f251c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f251e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116f2520 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 116f2523 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116f2525 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116f2527 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 116f2529 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116f252b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f252d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116f252f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 116f2532 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116f2534 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116f2536 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f2538 je 0x116f250c */
  if (C.zf) goto L_116f250c;
  /* 116f253a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116f253c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_116f253e:;
  /* 116f253e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 116f2541 jmp 0x116f25bb */
  goto L_116f25bb;
L_116f2543:;
  /* 116f2543 lock inc dword ptr [0x1170f9bc] */
  x86_unimpl("lock inc @ 0x116f2543");
  /* 116f254a cmp dword ptr [0x1170f9ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f9ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2551 jg 0x116f2557 */
  if ((!C.zf&&C.sf==C.of)) goto L_116f2557;
  /* 116f2553 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2555 jmp 0x116f256c */
  goto L_116f256c;
L_116f2557:;
  /* 116f2557 lock dec dword ptr [0x1170f9bc] */
  x86_unimpl("lock dec @ 0x116f2557");
  /* 116f255e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116f2560 call 0x116e7820 */
  push32(0x116f2565u); f_116e7820();
  /* 116f2565 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_116f256c:;
  /* 116f256c mov eax, 0xff */
  EAX = (0xffu);
  /* 116f2571 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 116f2573 nop  */
  /* nop */
L_116f2574:;
  /* 116f2574 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116f2576 je 0x116f259f */
  if (C.zf) goto L_116f259f;
  /* 116f2578 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116f257a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116f257b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 116f257d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116f257e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f2580 je 0x116f2574 */
  if (C.zf) goto L_116f2574;
  /* 116f2582 push eax */
  push32((uint32_t)(EAX));
  /* 116f2583 push ebx */
  push32((uint32_t)(EBX));
  /* 116f2584 call 0x116f3660 */
  push32(0x116f2589u); f_116f3660();
  /* 116f2589 mov ebx, eax */
  EBX = (EAX);
  /* 116f258b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f258e call 0x116f3660 */
  push32(0x116f2593u); f_116f3660();
  /* 116f2593 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2596 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f2598 je 0x116f2574 */
  if (C.zf) goto L_116f2574;
  /* 116f259a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f259c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_116f259f:;
  /* 116f259f mov ebx, eax */
  EBX = (EAX);
  /* 116f25a1 pop eax */
  EAX = (pop32());
  /* 116f25a2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f25a4 jne 0x116f25af */
  if (!C.zf) goto L_116f25af;
  /* 116f25a6 lock dec dword ptr [0x1170f9bc] */
  x86_unimpl("lock dec @ 0x116f25a6");
  /* 116f25ad jmp 0x116f25b9 */
  goto L_116f25b9;
L_116f25af:;
  /* 116f25af push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116f25b1 call 0x116e78c0 */
  push32(0x116f25b6u); f_116e78c0();
  /* 116f25b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116f25b9:;
  /* 116f25b9 mov eax, ebx */
  EAX = (EBX);
L_116f25bb:;
  /* 116f25bb pop ebx */
  EBX = (pop32());
  /* 116f25bc pop esi */
  ESI = (pop32());
  /* 116f25bd pop edi */
  EDI = (pop32());
  /* 116f25be leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116f25bf ret  */
  ESPCHK(0x116f24f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125c0 @ 0x116f25c0 (257 bytes, 103 insns) */
void f_116f25c0(void) {
  FTRACE(0x116f25c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f25c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f25c1 mov ebp, esp */
  EBP = (ESP);
  /* 116f25c3 push edi */
  push32((uint32_t)(EDI));
  /* 116f25c4 push esi */
  push32((uint32_t)(ESI));
  /* 116f25c5 push ebx */
  push32((uint32_t)(EBX));
  /* 116f25c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f25c9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f25cb je 0x116f26ba */
  if (C.zf) goto L_116f26ba;
  /* 116f25d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 116f25d4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 116f25d7 lea eax, [0x1170f828] */
  EAX = ((uint32_t)(0x1170f828));
  /* 116f25dd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f25e1 jne 0x116f2631 */
  if (!C.zf) goto L_116f2631;
  /* 116f25e3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 116f25e5 mov bl, 0x5a */
  BL = (0x5au);
  /* 116f25e7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 116f25e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116f25ec:;
  /* 116f25ec mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 116f25ee or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 116f25f0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 116f25f2 je 0x116f2615 */
  if (C.zf) goto L_116f2615;
  /* 116f25f4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116f25f6 je 0x116f2615 */
  if (C.zf) goto L_116f2615;
  /* 116f25f8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116f25f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116f25fa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f25fc jb 0x116f2604 */
  if (C.cf) goto L_116f2604;
  /* 116f25fe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f2600 ja 0x116f2604 */
  if ((!C.cf&&!C.zf)) goto L_116f2604;
  /* 116f2602 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_116f2604:;
  /* 116f2604 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f2606 jb 0x116f260e */
  if (C.cf) goto L_116f260e;
  /* 116f2608 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f260a ja 0x116f260e */
  if ((!C.cf&&!C.zf)) goto L_116f260e;
  /* 116f260c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_116f260e:;
  /* 116f260e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f2610 jne 0x116f261f */
  if (!C.zf) goto L_116f261f;
  /* 116f2612 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116f2613 jne 0x116f25ec */
  if (!C.zf) goto L_116f25ec;
L_116f2615:;
  /* 116f2615 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f2617 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f2619 je 0x116f26ba */
  if (C.zf) goto L_116f26ba;
L_116f261f:;
  /* 116f261f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 116f2624 jb 0x116f26ba */
  if (C.cf) goto L_116f26ba;
  /* 116f262a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116f262c jmp 0x116f26ba */
  goto L_116f26ba;
L_116f2631:;
  /* 116f2631 lock inc dword ptr [0x1170f9bc] */
  x86_unimpl("lock inc @ 0x116f2631");
  /* 116f2638 cmp dword ptr [0x1170f9ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f9ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f263f jg 0x116f2645 */
  if ((!C.zf&&C.sf==C.of)) goto L_116f2645;
  /* 116f2641 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2643 jmp 0x116f265e */
  goto L_116f265e;
L_116f2645:;
  /* 116f2645 lock dec dword ptr [0x1170f9bc] */
  x86_unimpl("lock dec @ 0x116f2645");
  /* 116f264c mov ebx, ecx */
  EBX = (ECX);
  /* 116f264e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116f2650 call 0x116e7820 */
  push32(0x116f2655u); f_116e7820();
  /* 116f2655 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 116f265c mov ecx, ebx */
  ECX = (EBX);
L_116f265e:;
  /* 116f265e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f2660 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 116f2662 mov edi, edi */
  EDI = (EDI);
L_116f2664:;
  /* 116f2664 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116f2666 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f2668 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 116f266a je 0x116f268f */
  if (C.zf) goto L_116f268f;
  /* 116f266c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 116f266e je 0x116f268f */
  if (C.zf) goto L_116f268f;
  /* 116f2670 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116f2671 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116f2672 push ecx */
  push32((uint32_t)(ECX));
  /* 116f2673 push eax */
  push32((uint32_t)(EAX));
  /* 116f2674 push ebx */
  push32((uint32_t)(EBX));
  /* 116f2675 call 0x116f3660 */
  push32(0x116f267au); f_116f3660();
  /* 116f267a mov ebx, eax */
  EBX = (EAX);
  /* 116f267c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f267f call 0x116f3660 */
  push32(0x116f2684u); f_116f3660();
  /* 116f2684 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2687 pop ecx */
  ECX = (pop32());
  /* 116f2688 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f268a jne 0x116f2695 */
  if (!C.zf) goto L_116f2695;
  /* 116f268c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116f268d jne 0x116f2664 */
  if (!C.zf) goto L_116f2664;
L_116f268f:;
  /* 116f268f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f2691 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2693 je 0x116f269e */
  if (C.zf) goto L_116f269e;
L_116f2695:;
  /* 116f2695 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 116f269a jb 0x116f269e */
  if (C.cf) goto L_116f269e;
  /* 116f269c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_116f269e:;
  /* 116f269e pop eax */
  EAX = (pop32());
  /* 116f269f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f26a1 jne 0x116f26ac */
  if (!C.zf) goto L_116f26ac;
  /* 116f26a3 lock dec dword ptr [0x1170f9bc] */
  x86_unimpl("lock dec @ 0x116f26a3");
  /* 116f26aa jmp 0x116f26ba */
  goto L_116f26ba;
L_116f26ac:;
  /* 116f26ac mov ebx, ecx */
  EBX = (ECX);
  /* 116f26ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116f26b0 call 0x116e78c0 */
  push32(0x116f26b5u); f_116e78c0();
  /* 116f26b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f26b8 mov ecx, ebx */
  ECX = (EBX);
L_116f26ba:;
  /* 116f26ba mov eax, ecx */
  EAX = (ECX);
  /* 116f26bc pop ebx */
  EBX = (pop32());
  /* 116f26bd pop esi */
  ESI = (pop32());
  /* 116f26be pop edi */
  EDI = (pop32());
  /* 116f26bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116f26c0 ret  */
  ESPCHK(0x116f25c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100126d0 @ 0x116f26d0 (255 bytes, 88 insns) */
void f_116f26d0(void) {
  FTRACE(0x116f26d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f26d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f26d1 mov ebp, esp */
  EBP = (ESP);
  /* 116f26d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_116f26d6:;
  /* 116f26d6 cmp dword ptr [0x1170dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f26dd jle 0x116f26f6 */
  if ((C.zf||C.sf!=C.of)) goto L_116f26f6;
  /* 116f26df push 8 */
  push32((uint32_t)(0x8u));
  /* 116f26e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f26e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f26e6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116f26e8 push ecx */
  push32((uint32_t)(ECX));
  /* 116f26e9 call 0x116e9e30 */
  push32(0x116f26eeu); f_116e9e30();
  /* 116f26ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f26f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116f26f4 jmp 0x116f270f */
  goto L_116f270f;
L_116f26f6:;
  /* 116f26f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f26f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f26fb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116f26fd mov ecx, dword ptr [0x1170dc98] */
  ECX = (r32((uint32_t)(0x1170dc98)));
  /* 116f2703 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2705 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116f2709 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 116f270c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_116f270f:;
  /* 116f270f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2713 je 0x116f2720 */
  if (C.zf) goto L_116f2720;
  /* 116f2715 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2718 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f271b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116f271e jmp 0x116f26d6 */
  goto L_116f26d6;
L_116f2720:;
  /* 116f2720 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2723 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2725 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116f2727 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116f272a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f272d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2730 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116f2733 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f2736 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116f2739 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f273d je 0x116f2745 */
  if (C.zf) goto L_116f2745;
  /* 116f273f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2743 jne 0x116f2758 */
  if (!C.zf) goto L_116f2758;
L_116f2745:;
  /* 116f2745 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2748 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f274a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116f274c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116f274f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2752 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2755 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_116f2758:;
  /* 116f2758 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_116f275f:;
  /* 116f275f cmp dword ptr [0x1170dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2766 jle 0x116f277b */
  if ((C.zf||C.sf!=C.of)) goto L_116f277b;
  /* 116f2768 push 4 */
  push32((uint32_t)(0x4u));
  /* 116f276a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f276d push edx */
  push32((uint32_t)(EDX));
  /* 116f276e call 0x116e9e30 */
  push32(0x116f2773u); f_116e9e30();
  /* 116f2773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2776 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116f2779 jmp 0x116f2790 */
  goto L_116f2790;
L_116f277b:;
  /* 116f277b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f277e mov ecx, dword ptr [0x1170dc98] */
  ECX = (r32((uint32_t)(0x1170dc98)));
  /* 116f2784 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2786 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116f278a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116f278d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_116f2790:;
  /* 116f2790 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2794 je 0x116f27bb */
  if (C.zf) goto L_116f27bb;
  /* 116f2796 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f2799 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f279c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f279f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 116f27a3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116f27a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f27a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f27ab mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116f27ad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116f27b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f27b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f27b6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 116f27b9 jmp 0x116f275f */
  goto L_116f275f;
L_116f27bb:;
  /* 116f27bb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f27bf jne 0x116f27c8 */
  if (!C.zf) goto L_116f27c8;
  /* 116f27c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f27c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116f27c6 jmp 0x116f27cb */
  goto L_116f27cb;
L_116f27c8:;
  /* 116f27c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_116f27cb:;
  /* 116f27cb mov esp, ebp */
  ESP = (EBP);
  /* 116f27cd pop ebp */
  EBP = (pop32());
  /* 116f27ce ret  */
  ESPCHK(0x116f26d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100127d0 @ 0x116f27d0 (17 bytes, 8 insns) */
void f_116f27d0(void) {
  FTRACE(0x116f27d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f27d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f27d1 mov ebp, esp */
  EBP = (ESP);
  /* 116f27d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f27d6 push eax */
  push32((uint32_t)(EAX));
  /* 116f27d7 call 0x116f26d0 */
  push32(0x116f27dcu); f_116f26d0();
  /* 116f27dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f27df pop ebp */
  EBP = (pop32());
  /* 116f27e0 ret  */
  ESPCHK(0x116f27d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100127f0 @ 0x116f27f0 (297 bytes, 106 insns) */
void f_116f27f0(void) {
  FTRACE(0x116f27f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f27f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f27f1 mov ebp, esp */
  EBP = (ESP);
  /* 116f27f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f27f6 push esi */
  push32((uint32_t)(ESI));
L_116f27f7:;
  /* 116f27f7 cmp dword ptr [0x1170dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f27fe jle 0x116f2817 */
  if ((C.zf||C.sf!=C.of)) goto L_116f2817;
  /* 116f2800 push 8 */
  push32((uint32_t)(0x8u));
  /* 116f2802 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2805 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f2807 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116f2809 push ecx */
  push32((uint32_t)(ECX));
  /* 116f280a call 0x116e9e30 */
  push32(0x116f280fu); f_116e9e30();
  /* 116f280f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2812 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116f2815 jmp 0x116f2830 */
  goto L_116f2830;
L_116f2817:;
  /* 116f2817 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f281a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f281c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116f281e mov ecx, dword ptr [0x1170dc98] */
  ECX = (r32((uint32_t)(0x1170dc98)));
  /* 116f2824 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2826 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116f282a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 116f282d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_116f2830:;
  /* 116f2830 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2834 je 0x116f2841 */
  if (C.zf) goto L_116f2841;
  /* 116f2836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2839 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f283c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116f283f jmp 0x116f27f7 */
  goto L_116f27f7;
L_116f2841:;
  /* 116f2841 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2844 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2846 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116f2848 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116f284b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f284e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2851 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116f2854 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f2857 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116f285a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f285e je 0x116f2866 */
  if (C.zf) goto L_116f2866;
  /* 116f2860 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2864 jne 0x116f2879 */
  if (!C.zf) goto L_116f2879;
L_116f2866:;
  /* 116f2866 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2869 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f286b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116f286d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116f2870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2873 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2876 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_116f2879:;
  /* 116f2879 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116f2880 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_116f2887:;
  /* 116f2887 cmp dword ptr [0x1170dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f288e jle 0x116f28a3 */
  if ((C.zf||C.sf!=C.of)) goto L_116f28a3;
  /* 116f2890 push 4 */
  push32((uint32_t)(0x4u));
  /* 116f2892 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f2895 push edx */
  push32((uint32_t)(EDX));
  /* 116f2896 call 0x116e9e30 */
  push32(0x116f289bu); f_116e9e30();
  /* 116f289b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f289e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116f28a1 jmp 0x116f28b8 */
  goto L_116f28b8;
L_116f28a3:;
  /* 116f28a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f28a6 mov ecx, dword ptr [0x1170dc98] */
  ECX = (r32((uint32_t)(0x1170dc98)));
  /* 116f28ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f28ae mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116f28b2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116f28b5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_116f28b8:;
  /* 116f28b8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f28bc je 0x116f28f9 */
  if (C.zf) goto L_116f28f9;
  /* 116f28be push 0 */
  push32((uint32_t)(0x0u));
  /* 116f28c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 116f28c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f28c5 push eax */
  push32((uint32_t)(EAX));
  /* 116f28c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f28c9 push ecx */
  push32((uint32_t)(ECX));
  /* 116f28ca call 0x116f3790 */
  push32(0x116f28cfu); f_116f3790();
  /* 116f28cf mov ecx, eax */
  ECX = (EAX);
  /* 116f28d1 mov esi, edx */
  ESI = (EDX);
  /* 116f28d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f28d6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f28d9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116f28da add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f28dc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116f28de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116f28e1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 116f28e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f28e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f28e9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116f28eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116f28ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f28f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f28f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 116f28f7 jmp 0x116f2887 */
  goto L_116f2887;
L_116f28f9:;
  /* 116f28f9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f28fd jne 0x116f290e */
  if (!C.zf) goto L_116f290e;
  /* 116f28ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2902 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116f2904 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f2907 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f290a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116f290c jmp 0x116f2914 */
  goto L_116f2914;
L_116f290e:;
  /* 116f290e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2911 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_116f2914:;
  /* 116f2914 pop esi */
  ESI = (pop32());
  /* 116f2915 mov esp, ebp */
  ESP = (EBP);
  /* 116f2917 pop ebp */
  EBP = (pop32());
  /* 116f2918 ret  */
  ESPCHK(0x116f27f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012920 @ 0x116f2920 (61 bytes, 18 insns) */
void f_116f2920(void) {
  FTRACE(0x116f2920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f2920 push ebp */
  push32((uint32_t)(EBP));
  /* 116f2921 mov ebp, esp */
  EBP = (ESP);
  /* 116f2923 cmp dword ptr [0x1170f988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f292a jne 0x116f295b */
  if (!C.zf) goto L_116f295b;
  /* 116f292c push 0xb */
  push32((uint32_t)(0xbu));
  /* 116f292e call 0x116e7820 */
  push32(0x116f2933u); f_116e7820();
  /* 116f2933 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2936 cmp dword ptr [0x1170f988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f293d jne 0x116f2951 */
  if (!C.zf) goto L_116f2951;
  /* 116f293f call 0x116f2980 */
  push32(0x116f2944u); f_116f2980();
  /* 116f2944 mov eax, dword ptr [0x1170f988] */
  EAX = (r32((uint32_t)(0x1170f988)));
  /* 116f2949 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f294c mov dword ptr [0x1170f988], eax */
  w32((uint32_t)(0x1170f988), (EAX));
L_116f2951:;
  /* 116f2951 push 0xb */
  push32((uint32_t)(0xbu));
  /* 116f2953 call 0x116e78c0 */
  push32(0x116f2958u); f_116e78c0();
  /* 116f2958 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116f295b:;
  /* 116f295b pop ebp */
  EBP = (pop32());
  /* 116f295c ret  */
  ESPCHK(0x116f2920u, _esp0);
  ESP += 4; return;
}

/* FUN_10012960 @ 0x116f2960 (30 bytes, 11 insns) */
void f_116f2960(void) {
  FTRACE(0x116f2960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f2960 push ebp */
  push32((uint32_t)(EBP));
  /* 116f2961 mov ebp, esp */
  EBP = (ESP);
  /* 116f2963 push 0xb */
  push32((uint32_t)(0xbu));
  /* 116f2965 call 0x116e7820 */
  push32(0x116f296au); f_116e7820();
  /* 116f296a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f296d call 0x116f2980 */
  push32(0x116f2972u); f_116f2980();
  /* 116f2972 push 0xb */
  push32((uint32_t)(0xbu));
  /* 116f2974 call 0x116e78c0 */
  push32(0x116f2979u); f_116e78c0();
  /* 116f2979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f297c pop ebp */
  EBP = (pop32());
  /* 116f297d ret  */
  ESPCHK(0x116f2960u, _esp0);
  ESP += 4; return;
}

/* FUN_10012980 @ 0x116f2980 (939 bytes, 266 insns) */
void f_116f2980(void) {
  FTRACE(0x116f2980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f2980 push ebp */
  push32((uint32_t)(EBP));
  /* 116f2981 mov ebp, esp */
  EBP = (ESP);
  /* 116f2983 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f2986 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116f298d push 0xc */
  push32((uint32_t)(0xcu));
  /* 116f298f call 0x116e7820 */
  push32(0x116f2994u); f_116e7820();
  /* 116f2994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2997 mov dword ptr [0x1170f8d0], 0 */
  w32((uint32_t)(0x1170f8d0), (0x0u));
  /* 116f29a1 mov dword ptr [0x1170ee38], 0xffffffff */
  w32((uint32_t)(0x1170ee38), (0xffffffffu));
  /* 116f29ab mov eax, dword ptr [0x1170ee38] */
  EAX = (r32((uint32_t)(0x1170ee38)));
  /* 116f29b0 mov dword ptr [0x1170ee28], eax */
  w32((uint32_t)(0x1170ee28), (EAX));
  /* 116f29b5 push 0x1170b928 */
  push32((uint32_t)(0x1170b928u));
  /* 116f29ba call 0x116f3800 */
  push32(0x116f29bfu); f_116f3800();
  /* 116f29bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f29c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116f29c5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f29c9 jne 0x116f2b03 */
  if (!C.zf) goto L_116f2b03;
  /* 116f29cf push 0xc */
  push32((uint32_t)(0xcu));
  /* 116f29d1 call 0x116e78c0 */
  push32(0x116f29d6u); f_116e78c0();
  /* 116f29d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f29d9 push 0x1170f8d8 */
  push32((uint32_t)(0x1170f8d8u));
  /* 116f29de call dword ptr [0x117122b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122b0))), 0x116f29e4u);
  /* 116f29e4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f29e7 je 0x116f2afe */
  if (C.zf) goto L_116f2afe;
  /* 116f29ed mov dword ptr [0x1170f8d0], 1 */
  w32((uint32_t)(0x1170f8d0), (0x1u));
  /* 116f29f7 mov ecx, dword ptr [0x1170f8d8] */
  ECX = (r32((uint32_t)(0x1170f8d8)));
  /* 116f29fd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f2a00 mov dword ptr [0x1170ed90], ecx */
  w32((uint32_t)(0x1170ed90), (ECX));
  /* 116f2a06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2a08 mov dx, word ptr [0x1170f91e] */
  DX = (r16((uint32_t)(0x1170f91e)));
  /* 116f2a0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f2a11 je 0x116f2a29 */
  if (C.zf) goto L_116f2a29;
  /* 116f2a13 mov eax, dword ptr [0x1170f92c] */
  EAX = (r32((uint32_t)(0x1170f92c)));
  /* 116f2a18 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f2a1b mov ecx, dword ptr [0x1170ed90] */
  ECX = (r32((uint32_t)(0x1170ed90)));
  /* 116f2a21 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2a23 mov dword ptr [0x1170ed90], ecx */
  w32((uint32_t)(0x1170ed90), (ECX));
L_116f2a29:;
  /* 116f2a29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2a2b mov dx, word ptr [0x1170f972] */
  DX = (r16((uint32_t)(0x1170f972)));
  /* 116f2a32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f2a34 je 0x116f2a5e */
  if (C.zf) goto L_116f2a5e;
  /* 116f2a36 cmp dword ptr [0x1170f980], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f980))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2a3d je 0x116f2a5e */
  if (C.zf) goto L_116f2a5e;
  /* 116f2a3f mov dword ptr [0x1170ed94], 1 */
  w32((uint32_t)(0x1170ed94), (0x1u));
  /* 116f2a49 mov eax, dword ptr [0x1170f980] */
  EAX = (r32((uint32_t)(0x1170f980)));
  /* 116f2a4e sub eax, dword ptr [0x1170f92c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1170f92c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f2a54 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f2a57 mov dword ptr [0x1170ed98], eax */
  w32((uint32_t)(0x1170ed98), (EAX));
  /* 116f2a5c jmp 0x116f2a72 */
  goto L_116f2a72;
L_116f2a5e:;
  /* 116f2a5e mov dword ptr [0x1170ed94], 0 */
  w32((uint32_t)(0x1170ed94), (0x0u));
  /* 116f2a68 mov dword ptr [0x1170ed98], 0 */
  w32((uint32_t)(0x1170ed98), (0x0u));
L_116f2a72:;
  /* 116f2a72 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 116f2a75 push ecx */
  push32((uint32_t)(ECX));
  /* 116f2a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2a78 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 116f2a7a mov edx, dword ptr [0x1170ee1c] */
  EDX = (r32((uint32_t)(0x1170ee1c)));
  /* 116f2a80 push edx */
  push32((uint32_t)(EDX));
  /* 116f2a81 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116f2a83 push 0x1170f8dc */
  push32((uint32_t)(0x1170f8dcu));
  /* 116f2a88 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116f2a8d mov eax, dword ptr [0x1170f840] */
  EAX = (r32((uint32_t)(0x1170f840)));
  /* 116f2a92 push eax */
  push32((uint32_t)(EAX));
  /* 116f2a93 call dword ptr [0x117123ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123ac))), 0x116f2a99u);
  /* 116f2a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f2a9b je 0x116f2aaf */
  if (C.zf) goto L_116f2aaf;
  /* 116f2a9d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2aa1 jne 0x116f2aaf */
  if (!C.zf) goto L_116f2aaf;
  /* 116f2aa3 mov ecx, dword ptr [0x1170ee1c] */
  ECX = (r32((uint32_t)(0x1170ee1c)));
  /* 116f2aa9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 116f2aad jmp 0x116f2ab8 */
  goto L_116f2ab8;
L_116f2aaf:;
  /* 116f2aaf mov edx, dword ptr [0x1170ee1c] */
  EDX = (r32((uint32_t)(0x1170ee1c)));
  /* 116f2ab5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_116f2ab8:;
  /* 116f2ab8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 116f2abb push eax */
  push32((uint32_t)(EAX));
  /* 116f2abc push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2abe push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 116f2ac0 mov ecx, dword ptr [0x1170ee20] */
  ECX = (r32((uint32_t)(0x1170ee20)));
  /* 116f2ac6 push ecx */
  push32((uint32_t)(ECX));
  /* 116f2ac7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116f2ac9 push 0x1170f930 */
  push32((uint32_t)(0x1170f930u));
  /* 116f2ace push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116f2ad3 mov edx, dword ptr [0x1170f840] */
  EDX = (r32((uint32_t)(0x1170f840)));
  /* 116f2ad9 push edx */
  push32((uint32_t)(EDX));
  /* 116f2ada call dword ptr [0x117123ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123ac))), 0x116f2ae0u);
  /* 116f2ae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f2ae2 je 0x116f2af5 */
  if (C.zf) goto L_116f2af5;
  /* 116f2ae4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2ae8 jne 0x116f2af5 */
  if (!C.zf) goto L_116f2af5;
  /* 116f2aea mov eax, dword ptr [0x1170ee20] */
  EAX = (r32((uint32_t)(0x1170ee20)));
  /* 116f2aef mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 116f2af3 jmp 0x116f2afe */
  goto L_116f2afe;
L_116f2af5:;
  /* 116f2af5 mov ecx, dword ptr [0x1170ee20] */
  ECX = (r32((uint32_t)(0x1170ee20)));
  /* 116f2afb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_116f2afe:;
  /* 116f2afe jmp 0x116f2d27 */
  goto L_116f2d27;
L_116f2b03:;
  /* 116f2b03 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2b06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116f2b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f2b0b je 0x116f2b2d */
  if (C.zf) goto L_116f2b2d;
  /* 116f2b0d cmp dword ptr [0x1170f984], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f984))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2b14 je 0x116f2b3c */
  if (C.zf) goto L_116f2b3c;
  /* 116f2b16 mov ecx, dword ptr [0x1170f984] */
  ECX = (r32((uint32_t)(0x1170f984)));
  /* 116f2b1c push ecx */
  push32((uint32_t)(ECX));
  /* 116f2b1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2b20 push edx */
  push32((uint32_t)(EDX));
  /* 116f2b21 call 0x116efab0 */
  push32(0x116f2b26u); f_116efab0();
  /* 116f2b26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2b29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f2b2b jne 0x116f2b3c */
  if (!C.zf) goto L_116f2b3c;
L_116f2b2d:;
  /* 116f2b2d push 0xc */
  push32((uint32_t)(0xcu));
  /* 116f2b2f call 0x116e78c0 */
  push32(0x116f2b34u); f_116e78c0();
  /* 116f2b34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2b37 jmp 0x116f2d27 */
  goto L_116f2d27;
L_116f2b3c:;
  /* 116f2b3c push 2 */
  push32((uint32_t)(0x2u));
  /* 116f2b3e mov eax, dword ptr [0x1170f984] */
  EAX = (r32((uint32_t)(0x1170f984)));
  /* 116f2b43 push eax */
  push32((uint32_t)(EAX));
  /* 116f2b44 call 0x116e48b0 */
  push32(0x116f2b49u); f_116e48b0();
  /* 116f2b49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2b4c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 116f2b51 push 0x1170b920 */
  push32((uint32_t)(0x1170b920u));
  /* 116f2b56 push 2 */
  push32((uint32_t)(0x2u));
  /* 116f2b58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2b5b push ecx */
  push32((uint32_t)(ECX));
  /* 116f2b5c call 0x116e6c50 */
  push32(0x116f2b61u); f_116e6c50();
  /* 116f2b61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2b64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2b67 push eax */
  push32((uint32_t)(EAX));
  /* 116f2b68 call 0x116e3e20 */
  push32(0x116f2b6du); f_116e3e20();
  /* 116f2b6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2b70 mov dword ptr [0x1170f984], eax */
  w32((uint32_t)(0x1170f984), (EAX));
  /* 116f2b75 cmp dword ptr [0x1170f984], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f984))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2b7c jne 0x116f2b8d */
  if (!C.zf) goto L_116f2b8d;
  /* 116f2b7e push 0xc */
  push32((uint32_t)(0xcu));
  /* 116f2b80 call 0x116e78c0 */
  push32(0x116f2b85u); f_116e78c0();
  /* 116f2b85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2b88 jmp 0x116f2d27 */
  goto L_116f2d27;
L_116f2b8d:;
  /* 116f2b8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2b90 push edx */
  push32((uint32_t)(EDX));
  /* 116f2b91 mov eax, dword ptr [0x1170f984] */
  EAX = (r32((uint32_t)(0x1170f984)));
  /* 116f2b96 push eax */
  push32((uint32_t)(EAX));
  /* 116f2b97 call 0x116e6dd0 */
  push32(0x116f2b9cu); f_116e6dd0();
  /* 116f2b9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2b9f push 0xc */
  push32((uint32_t)(0xcu));
  /* 116f2ba1 call 0x116e78c0 */
  push32(0x116f2ba6u); f_116e78c0();
  /* 116f2ba6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2ba9 push 3 */
  push32((uint32_t)(0x3u));
  /* 116f2bab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2bae push ecx */
  push32((uint32_t)(ECX));
  /* 116f2baf mov edx, dword ptr [0x1170ee1c] */
  EDX = (r32((uint32_t)(0x1170ee1c)));
  /* 116f2bb5 push edx */
  push32((uint32_t)(EDX));
  /* 116f2bb6 call 0x116e7640 */
  push32(0x116f2bbbu); f_116e7640();
  /* 116f2bbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2bbe mov eax, dword ptr [0x1170ee1c] */
  EAX = (r32((uint32_t)(0x1170ee1c)));
  /* 116f2bc3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 116f2bc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2bca add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2bcd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116f2bd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2bd3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116f2bd6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2bd9 jne 0x116f2bed */
  if (!C.zf) goto L_116f2bed;
  /* 116f2bdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f2bde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2be1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116f2be4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2be7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2bea mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_116f2bed:;
  /* 116f2bed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2bf0 push eax */
  push32((uint32_t)(EAX));
  /* 116f2bf1 call 0x116f26d0 */
  push32(0x116f2bf6u); f_116f26d0();
  /* 116f2bf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2bf9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f2bff mov dword ptr [0x1170ed90], eax */
  w32((uint32_t)(0x1170ed90), (EAX));
L_116f2c04:;
  /* 116f2c04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2c07 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116f2c0a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2c0d je 0x116f2c25 */
  if (C.zf) goto L_116f2c25;
  /* 116f2c0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2c12 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116f2c15 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2c18 jl 0x116f2c30 */
  if ((C.sf!=C.of)) goto L_116f2c30;
  /* 116f2c1a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2c1d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116f2c20 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2c23 jg 0x116f2c30 */
  if ((!C.zf&&C.sf==C.of)) goto L_116f2c30;
L_116f2c25:;
  /* 116f2c25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2c28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2c2b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116f2c2e jmp 0x116f2c04 */
  goto L_116f2c04;
L_116f2c30:;
  /* 116f2c30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2c33 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116f2c36 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2c39 jne 0x116f2cd5 */
  if (!C.zf) goto L_116f2cd5;
  /* 116f2c3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2c42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2c45 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116f2c48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2c4b push edx */
  push32((uint32_t)(EDX));
  /* 116f2c4c call 0x116f26d0 */
  push32(0x116f2c51u); f_116f26d0();
  /* 116f2c51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2c54 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f2c57 mov ecx, dword ptr [0x1170ed90] */
  ECX = (r32((uint32_t)(0x1170ed90)));
  /* 116f2c5d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2c5f mov dword ptr [0x1170ed90], ecx */
  w32((uint32_t)(0x1170ed90), (ECX));
L_116f2c65:;
  /* 116f2c65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2c68 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116f2c6b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2c6e jl 0x116f2c86 */
  if ((C.sf!=C.of)) goto L_116f2c86;
  /* 116f2c70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2c73 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116f2c76 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2c79 jg 0x116f2c86 */
  if ((!C.zf&&C.sf==C.of)) goto L_116f2c86;
  /* 116f2c7b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2c7e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2c81 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116f2c84 jmp 0x116f2c65 */
  goto L_116f2c65;
L_116f2c86:;
  /* 116f2c86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2c89 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116f2c8c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2c8f jne 0x116f2cd5 */
  if (!C.zf) goto L_116f2cd5;
  /* 116f2c91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2c94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2c97 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116f2c9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2c9d push ecx */
  push32((uint32_t)(ECX));
  /* 116f2c9e call 0x116f26d0 */
  push32(0x116f2ca3u); f_116f26d0();
  /* 116f2ca3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2ca6 mov edx, dword ptr [0x1170ed90] */
  EDX = (r32((uint32_t)(0x1170ed90)));
  /* 116f2cac add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2cae mov dword ptr [0x1170ed90], edx */
  w32((uint32_t)(0x1170ed90), (EDX));
L_116f2cb4:;
  /* 116f2cb4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2cb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116f2cba cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2cbd jl 0x116f2cd5 */
  if ((C.sf!=C.of)) goto L_116f2cd5;
  /* 116f2cbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2cc2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116f2cc5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2cc8 jg 0x116f2cd5 */
  if ((!C.zf&&C.sf==C.of)) goto L_116f2cd5;
  /* 116f2cca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2ccd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2cd0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116f2cd3 jmp 0x116f2cb4 */
  goto L_116f2cb4;
L_116f2cd5:;
  /* 116f2cd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2cd9 je 0x116f2ce9 */
  if (C.zf) goto L_116f2ce9;
  /* 116f2cdb mov edx, dword ptr [0x1170ed90] */
  EDX = (r32((uint32_t)(0x1170ed90)));
  /* 116f2ce1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116f2ce3 mov dword ptr [0x1170ed90], edx */
  w32((uint32_t)(0x1170ed90), (EDX));
L_116f2ce9:;
  /* 116f2ce9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2cec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116f2cef mov dword ptr [0x1170ed94], ecx */
  w32((uint32_t)(0x1170ed94), (ECX));
  /* 116f2cf5 cmp dword ptr [0x1170ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2cfc je 0x116f2d1e */
  if (C.zf) goto L_116f2d1e;
  /* 116f2cfe push 3 */
  push32((uint32_t)(0x3u));
  /* 116f2d00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f2d03 push edx */
  push32((uint32_t)(EDX));
  /* 116f2d04 mov eax, dword ptr [0x1170ee20] */
  EAX = (r32((uint32_t)(0x1170ee20)));
  /* 116f2d09 push eax */
  push32((uint32_t)(EAX));
  /* 116f2d0a call 0x116e7640 */
  push32(0x116f2d0fu); f_116e7640();
  /* 116f2d0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2d12 mov ecx, dword ptr [0x1170ee20] */
  ECX = (r32((uint32_t)(0x1170ee20)));
  /* 116f2d18 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 116f2d1c jmp 0x116f2d27 */
  goto L_116f2d27;
L_116f2d1e:;
  /* 116f2d1e mov edx, dword ptr [0x1170ee20] */
  EDX = (r32((uint32_t)(0x1170ee20)));
  /* 116f2d24 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_116f2d27:;
  /* 116f2d27 mov esp, ebp */
  ESP = (EBP);
  /* 116f2d29 pop ebp */
  EBP = (pop32());
  /* 116f2d2a ret  */
  ESPCHK(0x116f2980u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d30 @ 0x116f2d30 (46 bytes, 18 insns) */
void f_116f2d30(void) {
  FTRACE(0x116f2d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f2d30 push ebp */
  push32((uint32_t)(EBP));
  /* 116f2d31 mov ebp, esp */
  EBP = (ESP);
  /* 116f2d33 push ecx */
  push32((uint32_t)(ECX));
  /* 116f2d34 push 0xb */
  push32((uint32_t)(0xbu));
  /* 116f2d36 call 0x116e7820 */
  push32(0x116f2d3bu); f_116e7820();
  /* 116f2d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2d3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2d41 push eax */
  push32((uint32_t)(EAX));
  /* 116f2d42 call 0x116f2d60 */
  push32(0x116f2d47u); f_116f2d60();
  /* 116f2d47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2d4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116f2d4d push 0xb */
  push32((uint32_t)(0xbu));
  /* 116f2d4f call 0x116e78c0 */
  push32(0x116f2d54u); f_116e78c0();
  /* 116f2d54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2d57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f2d5a mov esp, ebp */
  ESP = (EBP);
  /* 116f2d5c pop ebp */
  EBP = (pop32());
  /* 116f2d5d ret  */
  ESPCHK(0x116f2d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d60 @ 0x116f2d60 (762 bytes, 246 insns) */
void f_116f2d60(void) {
  FTRACE(0x116f2d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f2d60 push ebp */
  push32((uint32_t)(EBP));
  /* 116f2d61 mov ebp, esp */
  EBP = (ESP);
  /* 116f2d63 push ecx */
  push32((uint32_t)(ECX));
  /* 116f2d64 cmp dword ptr [0x1170ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2d6b jne 0x116f2d74 */
  if (!C.zf) goto L_116f2d74;
  /* 116f2d6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f2d6f jmp 0x116f3056 */
  goto L_116f3056;
L_116f2d74:;
  /* 116f2d74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2d77 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 116f2d7a cmp ecx, dword ptr [0x1170ee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1170ee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2d80 jne 0x116f2d94 */
  if (!C.zf) goto L_116f2d94;
  /* 116f2d82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2d85 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116f2d88 cmp eax, dword ptr [0x1170ee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1170ee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2d8e je 0x116f2f5b */
  if (C.zf) goto L_116f2f5b;
L_116f2d94:;
  /* 116f2d94 cmp dword ptr [0x1170f8d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2d9b je 0x116f2f15 */
  if (C.zf) goto L_116f2f15;
  /* 116f2da1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f2da3 mov cx, word ptr [0x1170f970] */
  CX = (r16((uint32_t)(0x1170f970)));
  /* 116f2daa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116f2dac jne 0x116f2e09 */
  if (!C.zf) goto L_116f2e09;
  /* 116f2dae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2db0 mov dx, word ptr [0x1170f97e] */
  DX = (r16((uint32_t)(0x1170f97e)));
  /* 116f2db7 push edx */
  push32((uint32_t)(EDX));
  /* 116f2db8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f2dba mov ax, word ptr [0x1170f97c] */
  AX = (r16((uint32_t)(0x1170f97c)));
  /* 116f2dc0 push eax */
  push32((uint32_t)(EAX));
  /* 116f2dc1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f2dc3 mov cx, word ptr [0x1170f97a] */
  CX = (r16((uint32_t)(0x1170f97a)));
  /* 116f2dca push ecx */
  push32((uint32_t)(ECX));
  /* 116f2dcb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2dcd mov dx, word ptr [0x1170f978] */
  DX = (r16((uint32_t)(0x1170f978)));
  /* 116f2dd4 push edx */
  push32((uint32_t)(EDX));
  /* 116f2dd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2dd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f2dd9 mov ax, word ptr [0x1170f974] */
  AX = (r16((uint32_t)(0x1170f974)));
  /* 116f2ddf push eax */
  push32((uint32_t)(EAX));
  /* 116f2de0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f2de2 mov cx, word ptr [0x1170f976] */
  CX = (r16((uint32_t)(0x1170f976)));
  /* 116f2de9 push ecx */
  push32((uint32_t)(ECX));
  /* 116f2dea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2dec mov dx, word ptr [0x1170f972] */
  DX = (r16((uint32_t)(0x1170f972)));
  /* 116f2df3 push edx */
  push32((uint32_t)(EDX));
  /* 116f2df4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2df7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 116f2dfa push ecx */
  push32((uint32_t)(ECX));
  /* 116f2dfb push 1 */
  push32((uint32_t)(0x1u));
  /* 116f2dfd push 1 */
  push32((uint32_t)(0x1u));
  /* 116f2dff call 0x116f3060 */
  push32(0x116f2e04u); f_116f3060();
  /* 116f2e04 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2e07 jmp 0x116f2e5a */
  goto L_116f2e5a;
L_116f2e09:;
  /* 116f2e09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2e0b mov dx, word ptr [0x1170f97e] */
  DX = (r16((uint32_t)(0x1170f97e)));
  /* 116f2e12 push edx */
  push32((uint32_t)(EDX));
  /* 116f2e13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f2e15 mov ax, word ptr [0x1170f97c] */
  AX = (r16((uint32_t)(0x1170f97c)));
  /* 116f2e1b push eax */
  push32((uint32_t)(EAX));
  /* 116f2e1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f2e1e mov cx, word ptr [0x1170f97a] */
  CX = (r16((uint32_t)(0x1170f97a)));
  /* 116f2e25 push ecx */
  push32((uint32_t)(ECX));
  /* 116f2e26 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2e28 mov dx, word ptr [0x1170f978] */
  DX = (r16((uint32_t)(0x1170f978)));
  /* 116f2e2f push edx */
  push32((uint32_t)(EDX));
  /* 116f2e30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f2e32 mov ax, word ptr [0x1170f976] */
  AX = (r16((uint32_t)(0x1170f976)));
  /* 116f2e38 push eax */
  push32((uint32_t)(EAX));
  /* 116f2e39 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2e3b push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2e3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f2e3f mov cx, word ptr [0x1170f972] */
  CX = (r16((uint32_t)(0x1170f972)));
  /* 116f2e46 push ecx */
  push32((uint32_t)(ECX));
  /* 116f2e47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2e4a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116f2e4d push eax */
  push32((uint32_t)(EAX));
  /* 116f2e4e push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2e50 push 1 */
  push32((uint32_t)(0x1u));
  /* 116f2e52 call 0x116f3060 */
  push32(0x116f2e57u); f_116f3060();
  /* 116f2e57 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116f2e5a:;
  /* 116f2e5a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f2e5c mov cx, word ptr [0x1170f91c] */
  CX = (r16((uint32_t)(0x1170f91c)));
  /* 116f2e63 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116f2e65 jne 0x116f2ec2 */
  if (!C.zf) goto L_116f2ec2;
  /* 116f2e67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2e69 mov dx, word ptr [0x1170f92a] */
  DX = (r16((uint32_t)(0x1170f92a)));
  /* 116f2e70 push edx */
  push32((uint32_t)(EDX));
  /* 116f2e71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f2e73 mov ax, word ptr [0x1170f928] */
  AX = (r16((uint32_t)(0x1170f928)));
  /* 116f2e79 push eax */
  push32((uint32_t)(EAX));
  /* 116f2e7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f2e7c mov cx, word ptr [0x1170f926] */
  CX = (r16((uint32_t)(0x1170f926)));
  /* 116f2e83 push ecx */
  push32((uint32_t)(ECX));
  /* 116f2e84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2e86 mov dx, word ptr [0x1170f924] */
  DX = (r16((uint32_t)(0x1170f924)));
  /* 116f2e8d push edx */
  push32((uint32_t)(EDX));
  /* 116f2e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2e90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f2e92 mov ax, word ptr [0x1170f920] */
  AX = (r16((uint32_t)(0x1170f920)));
  /* 116f2e98 push eax */
  push32((uint32_t)(EAX));
  /* 116f2e99 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f2e9b mov cx, word ptr [0x1170f922] */
  CX = (r16((uint32_t)(0x1170f922)));
  /* 116f2ea2 push ecx */
  push32((uint32_t)(ECX));
  /* 116f2ea3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2ea5 mov dx, word ptr [0x1170f91e] */
  DX = (r16((uint32_t)(0x1170f91e)));
  /* 116f2eac push edx */
  push32((uint32_t)(EDX));
  /* 116f2ead mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2eb0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 116f2eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 116f2eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 116f2eb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2eb8 call 0x116f3060 */
  push32(0x116f2ebdu); f_116f3060();
  /* 116f2ebd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2ec0 jmp 0x116f2f13 */
  goto L_116f2f13;
L_116f2ec2:;
  /* 116f2ec2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2ec4 mov dx, word ptr [0x1170f92a] */
  DX = (r16((uint32_t)(0x1170f92a)));
  /* 116f2ecb push edx */
  push32((uint32_t)(EDX));
  /* 116f2ecc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f2ece mov ax, word ptr [0x1170f928] */
  AX = (r16((uint32_t)(0x1170f928)));
  /* 116f2ed4 push eax */
  push32((uint32_t)(EAX));
  /* 116f2ed5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f2ed7 mov cx, word ptr [0x1170f926] */
  CX = (r16((uint32_t)(0x1170f926)));
  /* 116f2ede push ecx */
  push32((uint32_t)(ECX));
  /* 116f2edf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f2ee1 mov dx, word ptr [0x1170f924] */
  DX = (r16((uint32_t)(0x1170f924)));
  /* 116f2ee8 push edx */
  push32((uint32_t)(EDX));
  /* 116f2ee9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f2eeb mov ax, word ptr [0x1170f922] */
  AX = (r16((uint32_t)(0x1170f922)));
  /* 116f2ef1 push eax */
  push32((uint32_t)(EAX));
  /* 116f2ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2ef6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f2ef8 mov cx, word ptr [0x1170f91e] */
  CX = (r16((uint32_t)(0x1170f91e)));
  /* 116f2eff push ecx */
  push32((uint32_t)(ECX));
  /* 116f2f00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2f03 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116f2f06 push eax */
  push32((uint32_t)(EAX));
  /* 116f2f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2f09 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2f0b call 0x116f3060 */
  push32(0x116f2f10u); f_116f3060();
  /* 116f2f10 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116f2f13:;
  /* 116f2f13 jmp 0x116f2f5b */
  goto L_116f2f5b;
L_116f2f15:;
  /* 116f2f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2f1b push 2 */
  push32((uint32_t)(0x2u));
  /* 116f2f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2f21 push 1 */
  push32((uint32_t)(0x1u));
  /* 116f2f23 push 4 */
  push32((uint32_t)(0x4u));
  /* 116f2f25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2f28 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 116f2f2b push edx */
  push32((uint32_t)(EDX));
  /* 116f2f2c push 1 */
  push32((uint32_t)(0x1u));
  /* 116f2f2e push 1 */
  push32((uint32_t)(0x1u));
  /* 116f2f30 call 0x116f3060 */
  push32(0x116f2f35u); f_116f3060();
  /* 116f2f35 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f2f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2f3c push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2f3e push 2 */
  push32((uint32_t)(0x2u));
  /* 116f2f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2f42 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2f44 push 5 */
  push32((uint32_t)(0x5u));
  /* 116f2f46 push 0xa */
  push32((uint32_t)(0xau));
  /* 116f2f48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2f4b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 116f2f4e push ecx */
  push32((uint32_t)(ECX));
  /* 116f2f4f push 1 */
  push32((uint32_t)(0x1u));
  /* 116f2f51 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f2f53 call 0x116f3060 */
  push32(0x116f2f58u); f_116f3060();
  /* 116f2f58 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116f2f5b:;
  /* 116f2f5b mov edx, dword ptr [0x1170ee2c] */
  EDX = (r32((uint32_t)(0x1170ee2c)));
  /* 116f2f61 cmp edx, dword ptr [0x1170ee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1170ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2f67 jge 0x116f2fb4 */
  if ((C.sf==C.of)) goto L_116f2fb4;
  /* 116f2f69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2f6c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 116f2f6f cmp ecx, dword ptr [0x1170ee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1170ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2f75 jl 0x116f2f85 */
  if ((C.sf!=C.of)) goto L_116f2f85;
  /* 116f2f77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2f7a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 116f2f7d cmp eax, dword ptr [0x1170ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1170ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2f83 jle 0x116f2f8c */
  if ((C.zf||C.sf!=C.of)) goto L_116f2f8c;
L_116f2f85:;
  /* 116f2f85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f2f87 jmp 0x116f3056 */
  goto L_116f3056;
L_116f2f8c:;
  /* 116f2f8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2f8f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 116f2f92 cmp edx, dword ptr [0x1170ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1170ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2f98 jle 0x116f2fb2 */
  if ((C.zf||C.sf!=C.of)) goto L_116f2fb2;
  /* 116f2f9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2f9d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 116f2fa0 cmp ecx, dword ptr [0x1170ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1170ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2fa6 jge 0x116f2fb2 */
  if ((C.sf==C.of)) goto L_116f2fb2;
  /* 116f2fa8 mov eax, 1 */
  EAX = (0x1u);
  /* 116f2fad jmp 0x116f3056 */
  goto L_116f3056;
L_116f2fb2:;
  /* 116f2fb2 jmp 0x116f2ff7 */
  goto L_116f2ff7;
L_116f2fb4:;
  /* 116f2fb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2fb7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 116f2fba cmp eax, dword ptr [0x1170ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1170ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2fc0 jl 0x116f2fd0 */
  if ((C.sf!=C.of)) goto L_116f2fd0;
  /* 116f2fc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2fc5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 116f2fc8 cmp edx, dword ptr [0x1170ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1170ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2fce jle 0x116f2fd7 */
  if ((C.zf||C.sf!=C.of)) goto L_116f2fd7;
L_116f2fd0:;
  /* 116f2fd0 mov eax, 1 */
  EAX = (0x1u);
  /* 116f2fd5 jmp 0x116f3056 */
  goto L_116f3056;
L_116f2fd7:;
  /* 116f2fd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2fda mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 116f2fdd cmp ecx, dword ptr [0x1170ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1170ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2fe3 jle 0x116f2ff7 */
  if ((C.zf||C.sf!=C.of)) goto L_116f2ff7;
  /* 116f2fe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2fe8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 116f2feb cmp eax, dword ptr [0x1170ee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1170ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f2ff1 jge 0x116f2ff7 */
  if ((C.sf==C.of)) goto L_116f2ff7;
  /* 116f2ff3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f2ff5 jmp 0x116f3056 */
  goto L_116f3056;
L_116f2ff7:;
  /* 116f2ff7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f2ffa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116f2ffd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f3000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f3003 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116f3005 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3007 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f300a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116f300d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f3013 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3015 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f301b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116f301e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f3021 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 116f3024 cmp edx, dword ptr [0x1170ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1170ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f302a jne 0x116f3042 */
  if (!C.zf) goto L_116f3042;
  /* 116f302c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f302f cmp eax, dword ptr [0x1170ee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1170ee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3035 jl 0x116f303e */
  if ((C.sf!=C.of)) goto L_116f303e;
  /* 116f3037 mov eax, 1 */
  EAX = (0x1u);
  /* 116f303c jmp 0x116f3056 */
  goto L_116f3056;
L_116f303e:;
  /* 116f303e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f3040 jmp 0x116f3056 */
  goto L_116f3056;
L_116f3042:;
  /* 116f3042 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f3045 cmp ecx, dword ptr [0x1170ee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1170ee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f304b jge 0x116f3054 */
  if ((C.sf==C.of)) goto L_116f3054;
  /* 116f304d mov eax, 1 */
  EAX = (0x1u);
  /* 116f3052 jmp 0x116f3056 */
  goto L_116f3056;
L_116f3054:;
  /* 116f3054 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116f3056:;
  /* 116f3056 mov esp, ebp */
  ESP = (EBP);
  /* 116f3058 pop ebp */
  EBP = (pop32());
  /* 116f3059 ret  */
  ESPCHK(0x116f2d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013060 @ 0x116f3060 (504 bytes, 145 insns) */
void f_116f3060(void) {
  FTRACE(0x116f3060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f3060 push ebp */
  push32((uint32_t)(EBP));
  /* 116f3061 mov ebp, esp */
  EBP = (ESP);
  /* 116f3063 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f3066 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f306a jne 0x116f313c */
  if (!C.zf) goto L_116f313c;
  /* 116f3070 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f3073 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 116f3076 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f3078 jne 0x116f3089 */
  if (!C.zf) goto L_116f3089;
  /* 116f307a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f307d mov edx, dword ptr [ecx*4 + 0x1170ee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1170ee4c)));
  /* 116f3084 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116f3087 jmp 0x116f3096 */
  goto L_116f3096;
L_116f3089:;
  /* 116f3089 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f308c mov ecx, dword ptr [eax*4 + 0x1170ee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1170ee80)));
  /* 116f3093 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_116f3096:;
  /* 116f3096 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f3099 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f309c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116f309f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f30a2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f30a5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f30ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f30ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f30b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f30b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f30b6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 116f30b9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 116f30bd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116f30be mov ecx, 7 */
  ECX = (0x7u);
  /* 116f30c3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116f30c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116f30c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f30cb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f30ce jge 0x116f30e9 */
  if ((C.sf==C.of)) goto L_116f30e9;
  /* 116f30d0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116f30d3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f30d6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f30d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f30dc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f30df add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f30e2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f30e4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116f30e7 jmp 0x116f30fd */
  goto L_116f30fd;
L_116f30e9:;
  /* 116f30e9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116f30ec sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f30ef mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f30f2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f30f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f30f8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f30fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116f30fd:;
  /* 116f30fd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3101 jne 0x116f313a */
  if (!C.zf) goto L_116f313a;
  /* 116f3103 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f3106 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 116f3109 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116f310b jne 0x116f311c */
  if (!C.zf) goto L_116f311c;
  /* 116f310d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f3110 mov eax, dword ptr [edx*4 + 0x1170ee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1170ee50)));
  /* 116f3117 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116f311a jmp 0x116f3129 */
  goto L_116f3129;
L_116f311c:;
  /* 116f311c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f311f mov edx, dword ptr [ecx*4 + 0x1170ee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1170ee84)));
  /* 116f3126 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_116f3129:;
  /* 116f3129 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f312c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f312f jle 0x116f313a */
  if ((C.zf||C.sf!=C.of)) goto L_116f313a;
  /* 116f3131 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f3134 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f3137 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116f313a:;
  /* 116f313a jmp 0x116f3171 */
  goto L_116f3171;
L_116f313c:;
  /* 116f313c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f313f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 116f3142 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f3144 jne 0x116f3155 */
  if (!C.zf) goto L_116f3155;
  /* 116f3146 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f3149 mov ecx, dword ptr [eax*4 + 0x1170ee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1170ee4c)));
  /* 116f3150 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116f3153 jmp 0x116f3162 */
  goto L_116f3162;
L_116f3155:;
  /* 116f3155 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f3158 mov eax, dword ptr [edx*4 + 0x1170ee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1170ee80)));
  /* 116f315f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_116f3162:;
  /* 116f3162 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f3165 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116f3168 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f316b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f316e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_116f3171:;
  /* 116f3171 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3175 jne 0x116f31b1 */
  if (!C.zf) goto L_116f31b1;
  /* 116f3177 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f317a mov dword ptr [0x1170ee2c], eax */
  w32((uint32_t)(0x1170ee2c), (EAX));
  /* 116f317f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 116f3182 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f3185 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 116f3188 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f318a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f318d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 116f3190 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3192 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f3198 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 116f319b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f319d mov dword ptr [0x1170ee30], ecx */
  w32((uint32_t)(0x1170ee30), (ECX));
  /* 116f31a3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f31a6 mov dword ptr [0x1170ee28], edx */
  w32((uint32_t)(0x1170ee28), (EDX));
  /* 116f31ac jmp 0x116f3254 */
  goto L_116f3254;
L_116f31b1:;
  /* 116f31b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f31b4 mov dword ptr [0x1170ee3c], eax */
  w32((uint32_t)(0x1170ee3c), (EAX));
  /* 116f31b9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 116f31bc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f31bf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 116f31c2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f31c4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f31c7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 116f31ca add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f31cc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f31d2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 116f31d5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f31d7 mov dword ptr [0x1170ee40], ecx */
  w32((uint32_t)(0x1170ee40), (ECX));
  /* 116f31dd mov edx, dword ptr [0x1170ed98] */
  EDX = (r32((uint32_t)(0x1170ed98)));
  /* 116f31e3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116f31e9 mov eax, dword ptr [0x1170ee40] */
  EAX = (r32((uint32_t)(0x1170ee40)));
  /* 116f31ee add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f31f0 mov dword ptr [0x1170ee40], eax */
  w32((uint32_t)(0x1170ee40), (EAX));
  /* 116f31f5 cmp dword ptr [0x1170ee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170ee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f31fc jge 0x116f3221 */
  if ((C.sf==C.of)) goto L_116f3221;
  /* 116f31fe mov ecx, dword ptr [0x1170ee40] */
  ECX = (r32((uint32_t)(0x1170ee40)));
  /* 116f3204 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f320a mov dword ptr [0x1170ee40], ecx */
  w32((uint32_t)(0x1170ee40), (ECX));
  /* 116f3210 mov edx, dword ptr [0x1170ee3c] */
  EDX = (r32((uint32_t)(0x1170ee3c)));
  /* 116f3216 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f3219 mov dword ptr [0x1170ee3c], edx */
  w32((uint32_t)(0x1170ee3c), (EDX));
  /* 116f321f jmp 0x116f324b */
  goto L_116f324b;
L_116f3221:;
  /* 116f3221 cmp dword ptr [0x1170ee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1170ee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f322b jl 0x116f324b */
  if ((C.sf!=C.of)) goto L_116f324b;
  /* 116f322d mov eax, dword ptr [0x1170ee40] */
  EAX = (r32((uint32_t)(0x1170ee40)));
  /* 116f3232 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f3237 mov dword ptr [0x1170ee40], eax */
  w32((uint32_t)(0x1170ee40), (EAX));
  /* 116f323c mov ecx, dword ptr [0x1170ee3c] */
  ECX = (r32((uint32_t)(0x1170ee3c)));
  /* 116f3242 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3245 mov dword ptr [0x1170ee3c], ecx */
  w32((uint32_t)(0x1170ee3c), (ECX));
L_116f324b:;
  /* 116f324b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f324e mov dword ptr [0x1170ee38], edx */
  w32((uint32_t)(0x1170ee38), (EDX));
L_116f3254:;
  /* 116f3254 mov esp, ebp */
  ESP = (EBP);
  /* 116f3256 pop ebp */
  EBP = (pop32());
  /* 116f3257 ret  */
  ESPCHK(0x116f3060u, _esp0);
  ESP += 4; return;
}

/* FUN_10013260 @ 0x116f3260 (382 bytes, 135 insns) */
void f_116f3260(void) {
  FTRACE(0x116f3260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f3260 push ebp */
  push32((uint32_t)(EBP));
  /* 116f3261 mov ebp, esp */
  EBP = (ESP);
  /* 116f3263 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116f3265 push 0x1170b930 */
  push32((uint32_t)(0x1170b930u));
  /* 116f326a push 0x116ecf28 */
  push32((uint32_t)(0x116ecf28u));
  /* 116f326f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 116f3275 push eax */
  push32((uint32_t)(EAX));
  /* 116f3276 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 116f327d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3280 push ebx */
  push32((uint32_t)(EBX));
  /* 116f3281 push esi */
  push32((uint32_t)(ESI));
  /* 116f3282 push edi */
  push32((uint32_t)(EDI));
  /* 116f3283 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116f3286 cmp dword ptr [0x1170f98c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f98c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f328d jne 0x116f32d2 */
  if (!C.zf) goto L_116f32d2;
  /* 116f328f push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3291 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3293 push 1 */
  push32((uint32_t)(0x1u));
  /* 116f3295 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3297 call dword ptr [0x117122ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122ac))), 0x116f329du);
  /* 116f329d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f329f je 0x116f32ad */
  if (C.zf) goto L_116f32ad;
  /* 116f32a1 mov dword ptr [0x1170f98c], 1 */
  w32((uint32_t)(0x1170f98c), (0x1u));
  /* 116f32ab jmp 0x116f32d2 */
  goto L_116f32d2;
L_116f32ad:;
  /* 116f32ad push 0 */
  push32((uint32_t)(0x0u));
  /* 116f32af push 0 */
  push32((uint32_t)(0x0u));
  /* 116f32b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 116f32b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f32b5 call dword ptr [0x117122c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122c4))), 0x116f32bbu);
  /* 116f32bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f32bd je 0x116f32cb */
  if (C.zf) goto L_116f32cb;
  /* 116f32bf mov dword ptr [0x1170f98c], 2 */
  w32((uint32_t)(0x1170f98c), (0x2u));
  /* 116f32c9 jmp 0x116f32d2 */
  goto L_116f32d2;
L_116f32cb:;
  /* 116f32cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f32cd jmp 0x116f33e1 */
  goto L_116f33e1;
L_116f32d2:;
  /* 116f32d2 cmp dword ptr [0x1170f98c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170f98c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f32d9 jne 0x116f32f6 */
  if (!C.zf) goto L_116f32f6;
  /* 116f32db mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f32de push eax */
  push32((uint32_t)(EAX));
  /* 116f32df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f32e2 push ecx */
  push32((uint32_t)(ECX));
  /* 116f32e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f32e6 push edx */
  push32((uint32_t)(EDX));
  /* 116f32e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f32ea push eax */
  push32((uint32_t)(EAX));
  /* 116f32eb call dword ptr [0x117122ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122ac))), 0x116f32f1u);
  /* 116f32f1 jmp 0x116f33e1 */
  goto L_116f33e1;
L_116f32f6:;
  /* 116f32f6 cmp dword ptr [0x1170f98c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1170f98c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f32fd jne 0x116f33df */
  if (!C.zf) goto L_116f33df;
  /* 116f3303 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3307 jne 0x116f3312 */
  if (!C.zf) goto L_116f3312;
  /* 116f3309 mov ecx, dword ptr [0x1170f840] */
  ECX = (r32((uint32_t)(0x1170f840)));
  /* 116f330f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_116f3312:;
  /* 116f3312 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3314 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3316 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f3319 push edx */
  push32((uint32_t)(EDX));
  /* 116f331a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f331d push eax */
  push32((uint32_t)(EAX));
  /* 116f331e call dword ptr [0x117122c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122c4))), 0x116f3324u);
  /* 116f3324 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116f3327 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f332b jne 0x116f3334 */
  if (!C.zf) goto L_116f3334;
  /* 116f332d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f332f jmp 0x116f33e1 */
  goto L_116f33e1;
L_116f3334:;
  /* 116f3334 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116f333b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116f333e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3341 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116f3343 call 0x116e6fc0 */
  push32(0x116f3348u); f_116e6fc0();
  /* 116f3348 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 116f334b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116f334e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116f3351 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 116f3354 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116f335b jmp 0x116f3374 */
  goto L_116f3374;
  /* 116f335d mov eax, 1 */
  EAX = (0x1u);
  /* 116f3362 ret  */
  ESPCHK(0x116f3260u, _esp0);
  ESP += 4; return;
  /* 116f3363 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116f3366 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 116f336d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116f3374:;
  /* 116f3374 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3378 jne 0x116f337e */
  if (!C.zf) goto L_116f337e;
  /* 116f337a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f337c jmp 0x116f33e1 */
  goto L_116f33e1;
L_116f337e:;
  /* 116f337e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116f3381 push edx */
  push32((uint32_t)(EDX));
  /* 116f3382 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116f3385 push eax */
  push32((uint32_t)(EAX));
  /* 116f3386 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f3389 push ecx */
  push32((uint32_t)(ECX));
  /* 116f338a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f338d push edx */
  push32((uint32_t)(EDX));
  /* 116f338e call dword ptr [0x117122c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122c4))), 0x116f3394u);
  /* 116f3394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f3396 jne 0x116f339c */
  if (!C.zf) goto L_116f339c;
  /* 116f3398 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f339a jmp 0x116f33e1 */
  goto L_116f33e1;
L_116f339c:;
  /* 116f339c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f33a0 jne 0x116f33bd */
  if (!C.zf) goto L_116f33bd;
  /* 116f33a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f33a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f33a6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116f33a8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116f33ab push eax */
  push32((uint32_t)(EAX));
  /* 116f33ac push 1 */
  push32((uint32_t)(0x1u));
  /* 116f33ae mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f33b1 push ecx */
  push32((uint32_t)(ECX));
  /* 116f33b2 call dword ptr [0x117122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122f4))), 0x116f33b8u);
  /* 116f33b8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116f33bb jmp 0x116f33da */
  goto L_116f33da;
L_116f33bd:;
  /* 116f33bd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f33c0 push edx */
  push32((uint32_t)(EDX));
  /* 116f33c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f33c4 push eax */
  push32((uint32_t)(EAX));
  /* 116f33c5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116f33c7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116f33ca push ecx */
  push32((uint32_t)(ECX));
  /* 116f33cb push 1 */
  push32((uint32_t)(0x1u));
  /* 116f33cd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f33d0 push edx */
  push32((uint32_t)(EDX));
  /* 116f33d1 call dword ptr [0x117122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122f4))), 0x116f33d7u);
  /* 116f33d7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_116f33da:;
  /* 116f33da mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116f33dd jmp 0x116f33e1 */
  goto L_116f33e1;
L_116f33df:;
  /* 116f33df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116f33e1:;
  /* 116f33e1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 116f33e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f33e7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 116f33ee pop edi */
  EDI = (pop32());
  /* 116f33ef pop esi */
  ESI = (pop32());
  /* 116f33f0 pop ebx */
  EBX = (pop32());
  /* 116f33f1 mov esp, ebp */
  ESP = (EBP);
  /* 116f33f3 pop ebp */
  EBP = (pop32());
  /* 116f33f4 ret  */
  ESPCHK(0x116f3260u, _esp0);
  ESP += 4; return;
}

/* FUN_10013400 @ 0x116f3400 (398 bytes, 140 insns) */
void f_116f3400(void) {
  FTRACE(0x116f3400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f3400 push ebp */
  push32((uint32_t)(EBP));
  /* 116f3401 mov ebp, esp */
  EBP = (ESP);
  /* 116f3403 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116f3405 push 0x1170b940 */
  push32((uint32_t)(0x1170b940u));
  /* 116f340a push 0x116ecf28 */
  push32((uint32_t)(0x116ecf28u));
  /* 116f340f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 116f3415 push eax */
  push32((uint32_t)(EAX));
  /* 116f3416 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 116f341d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3420 push ebx */
  push32((uint32_t)(EBX));
  /* 116f3421 push esi */
  push32((uint32_t)(ESI));
  /* 116f3422 push edi */
  push32((uint32_t)(EDI));
  /* 116f3423 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116f3426 cmp dword ptr [0x1170f990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f342d jne 0x116f3472 */
  if (!C.zf) goto L_116f3472;
  /* 116f342f push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3431 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3433 push 1 */
  push32((uint32_t)(0x1u));
  /* 116f3435 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3437 call dword ptr [0x117122ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122ac))), 0x116f343du);
  /* 116f343d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f343f je 0x116f344d */
  if (C.zf) goto L_116f344d;
  /* 116f3441 mov dword ptr [0x1170f990], 1 */
  w32((uint32_t)(0x1170f990), (0x1u));
  /* 116f344b jmp 0x116f3472 */
  goto L_116f3472;
L_116f344d:;
  /* 116f344d push 0 */
  push32((uint32_t)(0x0u));
  /* 116f344f push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3451 push 1 */
  push32((uint32_t)(0x1u));
  /* 116f3453 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3455 call dword ptr [0x117122c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122c4))), 0x116f345bu);
  /* 116f345b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f345d je 0x116f346b */
  if (C.zf) goto L_116f346b;
  /* 116f345f mov dword ptr [0x1170f990], 2 */
  w32((uint32_t)(0x1170f990), (0x2u));
  /* 116f3469 jmp 0x116f3472 */
  goto L_116f3472;
L_116f346b:;
  /* 116f346b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f346d jmp 0x116f3591 */
  goto L_116f3591;
L_116f3472:;
  /* 116f3472 cmp dword ptr [0x1170f990], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1170f990))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3479 jne 0x116f3496 */
  if (!C.zf) goto L_116f3496;
  /* 116f347b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f347e push eax */
  push32((uint32_t)(EAX));
  /* 116f347f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f3482 push ecx */
  push32((uint32_t)(ECX));
  /* 116f3483 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f3486 push edx */
  push32((uint32_t)(EDX));
  /* 116f3487 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f348a push eax */
  push32((uint32_t)(EAX));
  /* 116f348b call dword ptr [0x117122c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122c4))), 0x116f3491u);
  /* 116f3491 jmp 0x116f3591 */
  goto L_116f3591;
L_116f3496:;
  /* 116f3496 cmp dword ptr [0x1170f990], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170f990))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f349d jne 0x116f358f */
  if (!C.zf) goto L_116f358f;
  /* 116f34a3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f34a7 jne 0x116f34b2 */
  if (!C.zf) goto L_116f34b2;
  /* 116f34a9 mov ecx, dword ptr [0x1170f840] */
  ECX = (r32((uint32_t)(0x1170f840)));
  /* 116f34af mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_116f34b2:;
  /* 116f34b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f34b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f34b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f34b9 push edx */
  push32((uint32_t)(EDX));
  /* 116f34ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f34bd push eax */
  push32((uint32_t)(EAX));
  /* 116f34be call dword ptr [0x117122ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122ac))), 0x116f34c4u);
  /* 116f34c4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116f34c7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f34cb jne 0x116f34d4 */
  if (!C.zf) goto L_116f34d4;
  /* 116f34cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f34cf jmp 0x116f3591 */
  goto L_116f3591;
L_116f34d4:;
  /* 116f34d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116f34db mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116f34de shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116f34e0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f34e3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116f34e5 call 0x116e6fc0 */
  push32(0x116f34eau); f_116e6fc0();
  /* 116f34ea mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 116f34ed mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116f34f0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116f34f3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 116f34f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116f34fd jmp 0x116f3516 */
  goto L_116f3516;
  /* 116f34ff mov eax, 1 */
  EAX = (0x1u);
  /* 116f3504 ret  */
  ESPCHK(0x116f3400u, _esp0);
  ESP += 4; return;
  /* 116f3505 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116f3508 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 116f350f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116f3516:;
  /* 116f3516 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f351a jne 0x116f3520 */
  if (!C.zf) goto L_116f3520;
  /* 116f351c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f351e jmp 0x116f3591 */
  goto L_116f3591;
L_116f3520:;
  /* 116f3520 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116f3523 push edx */
  push32((uint32_t)(EDX));
  /* 116f3524 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116f3527 push eax */
  push32((uint32_t)(EAX));
  /* 116f3528 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f352b push ecx */
  push32((uint32_t)(ECX));
  /* 116f352c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f352f push edx */
  push32((uint32_t)(EDX));
  /* 116f3530 call dword ptr [0x117122ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122ac))), 0x116f3536u);
  /* 116f3536 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f3538 jne 0x116f353e */
  if (!C.zf) goto L_116f353e;
  /* 116f353a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f353c jmp 0x116f3591 */
  goto L_116f3591;
L_116f353e:;
  /* 116f353e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3542 jne 0x116f3566 */
  if (!C.zf) goto L_116f3566;
  /* 116f3544 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3546 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3548 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f354a push 0 */
  push32((uint32_t)(0x0u));
  /* 116f354c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116f354e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116f3551 push eax */
  push32((uint32_t)(EAX));
  /* 116f3552 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116f3557 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f355a push ecx */
  push32((uint32_t)(ECX));
  /* 116f355b call dword ptr [0x117123ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123ac))), 0x116f3561u);
  /* 116f3561 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116f3564 jmp 0x116f358a */
  goto L_116f358a;
L_116f3566:;
  /* 116f3566 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3568 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f356a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f356d push edx */
  push32((uint32_t)(EDX));
  /* 116f356e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f3571 push eax */
  push32((uint32_t)(EAX));
  /* 116f3572 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116f3574 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116f3577 push ecx */
  push32((uint32_t)(ECX));
  /* 116f3578 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116f357d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f3580 push edx */
  push32((uint32_t)(EDX));
  /* 116f3581 call dword ptr [0x117123ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123ac))), 0x116f3587u);
  /* 116f3587 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_116f358a:;
  /* 116f358a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116f358d jmp 0x116f3591 */
  goto L_116f3591;
L_116f358f:;
  /* 116f358f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116f3591:;
  /* 116f3591 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 116f3594 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f3597 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 116f359e pop edi */
  EDI = (pop32());
  /* 116f359f pop esi */
  ESI = (pop32());
  /* 116f35a0 pop ebx */
  EBX = (pop32());
  /* 116f35a1 mov esp, ebp */
  ESP = (EBP);
  /* 116f35a3 pop ebp */
  EBP = (pop32());
  /* 116f35a4 ret  */
  ESPCHK(0x116f3400u, _esp0);
  ESP += 4; return;
}

/* FUN_100135b0 @ 0x116f35b0 (11 bytes, 6 insns) */
void f_116f35b0(void) {
  FTRACE(0x116f35b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f35b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f35b1 mov ebp, esp */
  EBP = (ESP);
  /* 116f35b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f35b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f35b9 pop ebp */
  EBP = (pop32());
  /* 116f35ba ret  */
  ESPCHK(0x116f35b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100135c0 @ 0x116f35c0 (147 bytes, 43 insns) */
void f_116f35c0(void) {
  FTRACE(0x116f35c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f35c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f35c1 mov ebp, esp */
  EBP = (ESP);
  /* 116f35c3 push ecx */
  push32((uint32_t)(ECX));
  /* 116f35c4 cmp dword ptr [0x1170f830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f35cb jne 0x116f35e7 */
  if (!C.zf) goto L_116f35e7;
  /* 116f35cd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f35d1 jl 0x116f35e2 */
  if ((C.sf!=C.of)) goto L_116f35e2;
  /* 116f35d3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f35d7 jg 0x116f35e2 */
  if ((!C.zf&&C.sf==C.of)) goto L_116f35e2;
  /* 116f35d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f35dc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f35df mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_116f35e2:;
  /* 116f35e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f35e5 jmp 0x116f364f */
  goto L_116f364f;
L_116f35e7:;
  /* 116f35e7 push 0x1170f9bc */
  push32((uint32_t)(0x1170f9bcu));
  /* 116f35ec call dword ptr [0x11712354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712354))), 0x116f35f2u);
  /* 116f35f2 cmp dword ptr [0x1170f9ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f9ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f35f9 je 0x116f3619 */
  if (C.zf) goto L_116f3619;
  /* 116f35fb push 0x1170f9bc */
  push32((uint32_t)(0x1170f9bcu));
  /* 116f3600 call dword ptr [0x11712344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712344))), 0x116f3606u);
  /* 116f3606 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116f3608 call 0x116e7820 */
  push32(0x116f360du); f_116e7820();
  /* 116f360d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3610 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116f3617 jmp 0x116f3620 */
  goto L_116f3620;
L_116f3619:;
  /* 116f3619 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116f3620:;
  /* 116f3620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f3623 push ecx */
  push32((uint32_t)(ECX));
  /* 116f3624 call 0x116f3660 */
  push32(0x116f3629u); f_116f3660();
  /* 116f3629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f362c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116f362f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3633 je 0x116f3641 */
  if (C.zf) goto L_116f3641;
  /* 116f3635 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116f3637 call 0x116e78c0 */
  push32(0x116f363cu); f_116e78c0();
  /* 116f363c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f363f jmp 0x116f364c */
  goto L_116f364c;
L_116f3641:;
  /* 116f3641 push 0x1170f9bc */
  push32((uint32_t)(0x1170f9bcu));
  /* 116f3646 call dword ptr [0x11712344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712344))), 0x116f364cu);
L_116f364c:;
  /* 116f364c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_116f364f:;
  /* 116f364f mov esp, ebp */
  ESP = (EBP);
  /* 116f3651 pop ebp */
  EBP = (pop32());
  /* 116f3652 ret  */
  ESPCHK(0x116f35c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013660 @ 0x116f3660 (299 bytes, 91 insns) */
void f_116f3660(void) {
  FTRACE(0x116f3660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f3660 push ebp */
  push32((uint32_t)(EBP));
  /* 116f3661 mov ebp, esp */
  EBP = (ESP);
  /* 116f3663 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f3666 cmp dword ptr [0x1170f830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f366d jne 0x116f368c */
  if (!C.zf) goto L_116f368c;
  /* 116f366f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3673 jl 0x116f3684 */
  if ((C.sf!=C.of)) goto L_116f3684;
  /* 116f3675 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3679 jg 0x116f3684 */
  if ((!C.zf&&C.sf==C.of)) goto L_116f3684;
  /* 116f367b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f367e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3681 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_116f3684:;
  /* 116f3684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f3687 jmp 0x116f3787 */
  goto L_116f3787;
L_116f368c:;
  /* 116f368c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3693 jge 0x116f36d3 */
  if ((C.sf==C.of)) goto L_116f36d3;
  /* 116f3695 cmp dword ptr [0x1170dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f369c jle 0x116f36b1 */
  if ((C.zf||C.sf!=C.of)) goto L_116f36b1;
  /* 116f369e push 1 */
  push32((uint32_t)(0x1u));
  /* 116f36a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f36a3 push ecx */
  push32((uint32_t)(ECX));
  /* 116f36a4 call 0x116e9e30 */
  push32(0x116f36a9u); f_116e9e30();
  /* 116f36a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f36ac mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116f36af jmp 0x116f36c5 */
  goto L_116f36c5;
L_116f36b1:;
  /* 116f36b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f36b4 mov eax, dword ptr [0x1170dc98] */
  EAX = (r32((uint32_t)(0x1170dc98)));
  /* 116f36b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f36bb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 116f36bf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116f36c2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_116f36c5:;
  /* 116f36c5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f36c9 jne 0x116f36d3 */
  if (!C.zf) goto L_116f36d3;
  /* 116f36cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f36ce jmp 0x116f3787 */
  goto L_116f3787;
L_116f36d3:;
  /* 116f36d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f36d6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 116f36d9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116f36df and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116f36e5 mov eax, dword ptr [0x1170dc98] */
  EAX = (r32((uint32_t)(0x1170dc98)));
  /* 116f36ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f36ec mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 116f36f0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 116f36f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116f36f8 je 0x116f371c */
  if (C.zf) goto L_116f371c;
  /* 116f36fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f36fd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 116f3700 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116f3706 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 116f3709 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 116f370c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 116f370f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 116f3713 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 116f371a jmp 0x116f372d */
  goto L_116f372d;
L_116f371c:;
  /* 116f371c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 116f371f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 116f3722 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 116f3726 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_116f372d:;
  /* 116f372d push 1 */
  push32((uint32_t)(0x1u));
  /* 116f372f push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3731 push 3 */
  push32((uint32_t)(0x3u));
  /* 116f3733 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 116f3736 push edx */
  push32((uint32_t)(EDX));
  /* 116f3737 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f373a push eax */
  push32((uint32_t)(EAX));
  /* 116f373b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 116f373e push ecx */
  push32((uint32_t)(ECX));
  /* 116f373f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116f3744 mov edx, dword ptr [0x1170f830] */
  EDX = (r32((uint32_t)(0x1170f830)));
  /* 116f374a push edx */
  push32((uint32_t)(EDX));
  /* 116f374b call 0x116ec210 */
  push32(0x116f3750u); f_116ec210();
  /* 116f3750 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3753 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116f3756 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f375a jne 0x116f3761 */
  if (!C.zf) goto L_116f3761;
  /* 116f375c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f375f jmp 0x116f3787 */
  goto L_116f3787;
L_116f3761:;
  /* 116f3761 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3765 jne 0x116f3771 */
  if (!C.zf) goto L_116f3771;
  /* 116f3767 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f376a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f376f jmp 0x116f3787 */
  goto L_116f3787;
L_116f3771:;
  /* 116f3771 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f3774 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f3779 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 116f377c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116f3782 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 116f3785 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_116f3787:;
  /* 116f3787 mov esp, ebp */
  ESP = (EBP);
  /* 116f3789 pop ebp */
  EBP = (pop32());
  /* 116f378a ret  */
  ESPCHK(0x116f3660u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x116f3790 (52 bytes, 19 insns) */
void f_116f3790(void) {
  FTRACE(0x116f3790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f3790 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116f3794 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 116f3798 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116f379a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 116f379e jne 0x116f37a9 */
  if (!C.zf) goto L_116f37a9;
  /* 116f37a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 116f37a4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 116f37a6 ret 0x10 */
  ESPCHK(0x116f3790u, _esp0);
  ESP += 20; return;
L_116f37a9:;
  /* 116f37a9 push ebx */
  push32((uint32_t)(EBX));
  /* 116f37aa mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 116f37ac mov ebx, eax */
  EBX = (EAX);
  /* 116f37ae mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116f37b2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 116f37b6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f37b8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116f37bc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 116f37be add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f37c0 pop ebx */
  EBX = (pop32());
  /* 116f37c1 ret 0x10 */
  ESPCHK(0x116f3790u, _esp0);
  ESP += 20; return;
}

/* FUN_100137d0 @ 0x116f37d0 (46 bytes, 18 insns) */
void f_116f37d0(void) {
  FTRACE(0x116f37d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f37d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f37d1 mov ebp, esp */
  EBP = (ESP);
  /* 116f37d3 push ecx */
  push32((uint32_t)(ECX));
  /* 116f37d4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 116f37d6 call 0x116e7820 */
  push32(0x116f37dbu); f_116e7820();
  /* 116f37db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f37de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f37e1 push eax */
  push32((uint32_t)(EAX));
  /* 116f37e2 call 0x116f3800 */
  push32(0x116f37e7u); f_116f3800();
  /* 116f37e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f37ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116f37ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 116f37ef call 0x116e78c0 */
  push32(0x116f37f4u); f_116e78c0();
  /* 116f37f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f37f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f37fa mov esp, ebp */
  ESP = (EBP);
  /* 116f37fc pop ebp */
  EBP = (pop32());
  /* 116f37fd ret  */
  ESPCHK(0x116f37d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x116f3800 (198 bytes, 69 insns) */
void f_116f3800(void) {
  FTRACE(0x116f3800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f3800 push ebp */
  push32((uint32_t)(EBP));
  /* 116f3801 mov ebp, esp */
  EBP = (ESP);
  /* 116f3803 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f3806 mov eax, dword ptr [0x1170f64c] */
  EAX = (r32((uint32_t)(0x1170f64c)));
  /* 116f380b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116f380e cmp dword ptr [0x11711140], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11711140))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3815 jne 0x116f381e */
  if (!C.zf) goto L_116f381e;
  /* 116f3817 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f3819 jmp 0x116f38c2 */
  goto L_116f38c2;
L_116f381e:;
  /* 116f381e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3822 jne 0x116f3846 */
  if (!C.zf) goto L_116f3846;
  /* 116f3824 cmp dword ptr [0x1170f654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f382b je 0x116f3846 */
  if (C.zf) goto L_116f3846;
  /* 116f382d call 0x116f3920 */
  push32(0x116f3832u); f_116f3920();
  /* 116f3832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f3834 je 0x116f383d */
  if (C.zf) goto L_116f383d;
  /* 116f3836 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f3838 jmp 0x116f38c2 */
  goto L_116f38c2;
L_116f383d:;
  /* 116f383d mov ecx, dword ptr [0x1170f64c] */
  ECX = (r32((uint32_t)(0x1170f64c)));
  /* 116f3843 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116f3846:;
  /* 116f3846 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f384a je 0x116f38c0 */
  if (C.zf) goto L_116f38c0;
  /* 116f384c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3850 je 0x116f38c0 */
  if (C.zf) goto L_116f38c0;
  /* 116f3852 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f3855 push edx */
  push32((uint32_t)(EDX));
  /* 116f3856 call 0x116e6c50 */
  push32(0x116f385bu); f_116e6c50();
  /* 116f385b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f385e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116f3861:;
  /* 116f3861 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f3864 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3867 je 0x116f38c0 */
  if (C.zf) goto L_116f38c0;
  /* 116f3869 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f386c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f386e push edx */
  push32((uint32_t)(EDX));
  /* 116f386f call 0x116e6c50 */
  push32(0x116f3874u); f_116e6c50();
  /* 116f3874 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3877 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f387a jbe 0x116f38b5 */
  if ((C.cf||C.zf)) goto L_116f38b5;
  /* 116f387c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f387f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116f3881 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f3884 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 116f3888 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f388b jne 0x116f38b5 */
  if (!C.zf) goto L_116f38b5;
  /* 116f388d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f3890 push ecx */
  push32((uint32_t)(ECX));
  /* 116f3891 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f3894 push edx */
  push32((uint32_t)(EDX));
  /* 116f3895 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f3898 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116f389a push ecx */
  push32((uint32_t)(ECX));
  /* 116f389b call 0x116f38d0 */
  push32(0x116f38a0u); f_116f38d0();
  /* 116f38a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f38a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f38a5 jne 0x116f38b5 */
  if (!C.zf) goto L_116f38b5;
  /* 116f38a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f38aa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116f38ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f38af lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 116f38b3 jmp 0x116f38c2 */
  goto L_116f38c2;
L_116f38b5:;
  /* 116f38b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f38b8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f38bb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116f38be jmp 0x116f3861 */
  goto L_116f3861;
L_116f38c0:;
  /* 116f38c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116f38c2:;
  /* 116f38c2 mov esp, ebp */
  ESP = (EBP);
  /* 116f38c4 pop ebp */
  EBP = (pop32());
  /* 116f38c5 ret  */
  ESPCHK(0x116f3800u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x116f38d0 (79 bytes, 32 insns) */
void f_116f38d0(void) {
  FTRACE(0x116f38d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f38d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f38d1 mov ebp, esp */
  EBP = (ESP);
  /* 116f38d3 push ecx */
  push32((uint32_t)(ECX));
  /* 116f38d4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f38d8 jne 0x116f38de */
  if (!C.zf) goto L_116f38de;
  /* 116f38da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f38dc jmp 0x116f391b */
  goto L_116f391b;
L_116f38de:;
  /* 116f38de mov eax, dword ptr [0x11710d04] */
  EAX = (r32((uint32_t)(0x11710d04)));
  /* 116f38e3 push eax */
  push32((uint32_t)(EAX));
  /* 116f38e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f38e7 push ecx */
  push32((uint32_t)(ECX));
  /* 116f38e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f38eb push edx */
  push32((uint32_t)(EDX));
  /* 116f38ec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f38ef push eax */
  push32((uint32_t)(EAX));
  /* 116f38f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f38f3 push ecx */
  push32((uint32_t)(ECX));
  /* 116f38f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 116f38f6 mov edx, dword ptr [0x11710fa4] */
  EDX = (r32((uint32_t)(0x11710fa4)));
  /* 116f38fc push edx */
  push32((uint32_t)(EDX));
  /* 116f38fd call 0x116f39d0 */
  push32(0x116f3902u); f_116f39d0();
  /* 116f3902 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3905 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116f3908 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f390c jne 0x116f3915 */
  if (!C.zf) goto L_116f3915;
  /* 116f390e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 116f3913 jmp 0x116f391b */
  goto L_116f391b;
L_116f3915:;
  /* 116f3915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f3918 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_116f391b:;
  /* 116f391b mov esp, ebp */
  ESP = (EBP);
  /* 116f391d pop ebp */
  EBP = (pop32());
  /* 116f391e ret  */
  ESPCHK(0x116f38d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013920 @ 0x116f3920 (174 bytes, 66 insns) */
void f_116f3920(void) {
  FTRACE(0x116f3920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f3920 push ebp */
  push32((uint32_t)(EBP));
  /* 116f3921 mov ebp, esp */
  EBP = (ESP);
  /* 116f3923 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f3926 mov eax, dword ptr [0x1170f654] */
  EAX = (r32((uint32_t)(0x1170f654)));
  /* 116f392b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116f392e:;
  /* 116f392e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f3931 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3934 je 0x116f39c8 */
  if (C.zf) goto L_116f39c8;
  /* 116f393a push 0 */
  push32((uint32_t)(0x0u));
  /* 116f393c push 0 */
  push32((uint32_t)(0x0u));
  /* 116f393e push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3940 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3942 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116f3944 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f3947 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116f3949 push eax */
  push32((uint32_t)(EAX));
  /* 116f394a push 0 */
  push32((uint32_t)(0x0u));
  /* 116f394c push 1 */
  push32((uint32_t)(0x1u));
  /* 116f394e call dword ptr [0x117123ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123ac))), 0x116f3954u);
  /* 116f3954 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116f3957 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f395b jne 0x116f3962 */
  if (!C.zf) goto L_116f3962;
  /* 116f395d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f3960 jmp 0x116f39ca */
  goto L_116f39ca;
L_116f3962:;
  /* 116f3962 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 116f3964 push 0x1170b94c */
  push32((uint32_t)(0x1170b94cu));
  /* 116f3969 push 2 */
  push32((uint32_t)(0x2u));
  /* 116f396b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f396e push ecx */
  push32((uint32_t)(ECX));
  /* 116f396f call 0x116e3e20 */
  push32(0x116f3974u); f_116e3e20();
  /* 116f3974 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3977 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116f397a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f397e jne 0x116f3985 */
  if (!C.zf) goto L_116f3985;
  /* 116f3980 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f3983 jmp 0x116f39ca */
  goto L_116f39ca;
L_116f3985:;
  /* 116f3985 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3987 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3989 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f398c push edx */
  push32((uint32_t)(EDX));
  /* 116f398d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f3990 push eax */
  push32((uint32_t)(EAX));
  /* 116f3991 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116f3993 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f3996 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f3998 push edx */
  push32((uint32_t)(EDX));
  /* 116f3999 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f399b push 1 */
  push32((uint32_t)(0x1u));
  /* 116f399d call dword ptr [0x117123ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123ac))), 0x116f39a3u);
  /* 116f39a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f39a5 jne 0x116f39ac */
  if (!C.zf) goto L_116f39ac;
  /* 116f39a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f39aa jmp 0x116f39ca */
  goto L_116f39ca;
L_116f39ac:;
  /* 116f39ac push 0 */
  push32((uint32_t)(0x0u));
  /* 116f39ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f39b1 push eax */
  push32((uint32_t)(EAX));
  /* 116f39b2 call 0x116f3e20 */
  push32(0x116f39b7u); f_116f3e20();
  /* 116f39b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f39ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f39bd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f39c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116f39c3 jmp 0x116f392e */
  goto L_116f392e;
L_116f39c8:;
  /* 116f39c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116f39ca:;
  /* 116f39ca mov esp, ebp */
  ESP = (EBP);
  /* 116f39cc pop ebp */
  EBP = (pop32());
  /* 116f39cd ret  */
  ESPCHK(0x116f3920u, _esp0);
  ESP += 4; return;
}

/* FUN_100139d0 @ 0x116f39d0 (970 bytes, 340 insns) */
void f_116f39d0(void) {
  FTRACE(0x116f39d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f39d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f39d1 mov ebp, esp */
  EBP = (ESP);
  /* 116f39d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116f39d5 push 0x1170b9a0 */
  push32((uint32_t)(0x1170b9a0u));
  /* 116f39da push 0x116ecf28 */
  push32((uint32_t)(0x116ecf28u));
  /* 116f39df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 116f39e5 push eax */
  push32((uint32_t)(EAX));
  /* 116f39e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 116f39ed add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f39f0 push ebx */
  push32((uint32_t)(EBX));
  /* 116f39f1 push esi */
  push32((uint32_t)(ESI));
  /* 116f39f2 push edi */
  push32((uint32_t)(EDI));
  /* 116f39f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116f39f6 cmp dword ptr [0x1170f994], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f994))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f39fd jne 0x116f3a56 */
  if (!C.zf) goto L_116f3a56;
  /* 116f39ff push 1 */
  push32((uint32_t)(0x1u));
  /* 116f3a01 push 0x1170aff8 */
  push32((uint32_t)(0x1170aff8u));
  /* 116f3a06 push 1 */
  push32((uint32_t)(0x1u));
  /* 116f3a08 push 0x1170aff8 */
  push32((uint32_t)(0x1170aff8u));
  /* 116f3a0d push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3a11 call dword ptr [0x117122a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122a8))), 0x116f3a17u);
  /* 116f3a17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f3a19 je 0x116f3a27 */
  if (C.zf) goto L_116f3a27;
  /* 116f3a1b mov dword ptr [0x1170f994], 1 */
  w32((uint32_t)(0x1170f994), (0x1u));
  /* 116f3a25 jmp 0x116f3a56 */
  goto L_116f3a56;
L_116f3a27:;
  /* 116f3a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 116f3a29 push 0x1170aff4 */
  push32((uint32_t)(0x1170aff4u));
  /* 116f3a2e push 1 */
  push32((uint32_t)(0x1u));
  /* 116f3a30 push 0x1170aff4 */
  push32((uint32_t)(0x1170aff4u));
  /* 116f3a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3a37 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3a39 call dword ptr [0x117122b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122b4))), 0x116f3a3fu);
  /* 116f3a3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f3a41 je 0x116f3a4f */
  if (C.zf) goto L_116f3a4f;
  /* 116f3a43 mov dword ptr [0x1170f994], 2 */
  w32((uint32_t)(0x1170f994), (0x2u));
  /* 116f3a4d jmp 0x116f3a56 */
  goto L_116f3a56;
L_116f3a4f:;
  /* 116f3a4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f3a51 jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3a56:;
  /* 116f3a56 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3a5a jle 0x116f3a6f */
  if ((C.zf||C.sf!=C.of)) goto L_116f3a6f;
  /* 116f3a5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f3a5f push eax */
  push32((uint32_t)(EAX));
  /* 116f3a60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f3a63 push ecx */
  push32((uint32_t)(ECX));
  /* 116f3a64 call 0x116f3dd0 */
  push32(0x116f3a69u); f_116f3dd0();
  /* 116f3a69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3a6c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_116f3a6f:;
  /* 116f3a6f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3a73 jle 0x116f3a88 */
  if ((C.zf||C.sf!=C.of)) goto L_116f3a88;
  /* 116f3a75 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116f3a78 push edx */
  push32((uint32_t)(EDX));
  /* 116f3a79 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f3a7c push eax */
  push32((uint32_t)(EAX));
  /* 116f3a7d call 0x116f3dd0 */
  push32(0x116f3a82u); f_116f3dd0();
  /* 116f3a82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3a85 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_116f3a88:;
  /* 116f3a88 cmp dword ptr [0x1170f994], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1170f994))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3a8f jne 0x116f3ab4 */
  if (!C.zf) goto L_116f3ab4;
  /* 116f3a91 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116f3a94 push ecx */
  push32((uint32_t)(ECX));
  /* 116f3a95 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f3a98 push edx */
  push32((uint32_t)(EDX));
  /* 116f3a99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f3a9c push eax */
  push32((uint32_t)(EAX));
  /* 116f3a9d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f3aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 116f3aa1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f3aa4 push edx */
  push32((uint32_t)(EDX));
  /* 116f3aa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f3aa8 push eax */
  push32((uint32_t)(EAX));
  /* 116f3aa9 call dword ptr [0x117122b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122b4))), 0x116f3aafu);
  /* 116f3aaf jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3ab4:;
  /* 116f3ab4 cmp dword ptr [0x1170f994], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170f994))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3abb jne 0x116f3db2 */
  if (!C.zf) goto L_116f3db2;
  /* 116f3ac1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3ac5 jne 0x116f3ad0 */
  if (!C.zf) goto L_116f3ad0;
  /* 116f3ac7 mov ecx, dword ptr [0x1170f840] */
  ECX = (r32((uint32_t)(0x1170f840)));
  /* 116f3acd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_116f3ad0:;
  /* 116f3ad0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3ad4 je 0x116f3ae0 */
  if (C.zf) goto L_116f3ae0;
  /* 116f3ad6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3ada jne 0x116f3c5c */
  if (!C.zf) goto L_116f3c5c;
L_116f3ae0:;
  /* 116f3ae0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f3ae3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3ae6 jne 0x116f3af2 */
  if (!C.zf) goto L_116f3af2;
  /* 116f3ae8 mov eax, 2 */
  EAX = (0x2u);
  /* 116f3aed jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3af2:;
  /* 116f3af2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3af6 jle 0x116f3b02 */
  if ((C.zf||C.sf!=C.of)) goto L_116f3b02;
  /* 116f3af8 mov eax, 1 */
  EAX = (0x1u);
  /* 116f3afd jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3b02:;
  /* 116f3b02 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3b06 jle 0x116f3b12 */
  if ((C.zf||C.sf!=C.of)) goto L_116f3b12;
  /* 116f3b08 mov eax, 3 */
  EAX = (0x3u);
  /* 116f3b0d jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3b12:;
  /* 116f3b12 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 116f3b15 push eax */
  push32((uint32_t)(EAX));
  /* 116f3b16 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 116f3b19 push ecx */
  push32((uint32_t)(ECX));
  /* 116f3b1a call dword ptr [0x11712300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712300))), 0x116f3b20u);
  /* 116f3b20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f3b22 jne 0x116f3b2b */
  if (!C.zf) goto L_116f3b2b;
  /* 116f3b24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f3b26 jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3b2b:;
  /* 116f3b2b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3b2f jne 0x116f3b37 */
  if (!C.zf) goto L_116f3b37;
  /* 116f3b31 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3b35 je 0x116f3b64 */
  if (C.zf) goto L_116f3b64;
L_116f3b37:;
  /* 116f3b37 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3b3b jne 0x116f3b43 */
  if (!C.zf) goto L_116f3b43;
  /* 116f3b3d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3b41 je 0x116f3b64 */
  if (C.zf) goto L_116f3b64;
L_116f3b43:;
  /* 116f3b43 push 0x1170b960 */
  push32((uint32_t)(0x1170b960u));
  /* 116f3b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3b4a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 116f3b4f push 0x1170b958 */
  push32((uint32_t)(0x1170b958u));
  /* 116f3b54 push 2 */
  push32((uint32_t)(0x2u));
  /* 116f3b56 call 0x116e2ee0 */
  push32(0x116f3b5bu); f_116e2ee0();
  /* 116f3b5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3b5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3b61 jne 0x116f3b64 */
  if (!C.zf) goto L_116f3b64;
  /* 116f3b63 int3  */
  x86_unimpl("int3 @ 0x116f3b63");
L_116f3b64:;
  /* 116f3b64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f3b66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f3b68 jne 0x116f3b2b */
  if (!C.zf) goto L_116f3b2b;
  /* 116f3b6a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3b6e jle 0x116f3be3 */
  if ((C.zf||C.sf!=C.of)) goto L_116f3be3;
  /* 116f3b70 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3b74 jae 0x116f3b80 */
  if (!C.cf) goto L_116f3b80;
  /* 116f3b76 mov eax, 3 */
  EAX = (0x3u);
  /* 116f3b7b jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3b80:;
  /* 116f3b80 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 116f3b83 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 116f3b86 jmp 0x116f3b91 */
  goto L_116f3b91;
L_116f3b88:;
  /* 116f3b88 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 116f3b8b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3b8e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_116f3b91:;
  /* 116f3b91 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 116f3b94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f3b96 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116f3b98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f3b9a je 0x116f3bd9 */
  if (C.zf) goto L_116f3bd9;
  /* 116f3b9c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 116f3b9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f3ba1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 116f3ba4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f3ba6 je 0x116f3bd9 */
  if (C.zf) goto L_116f3bd9;
  /* 116f3ba8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f3bab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f3bad mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116f3baf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 116f3bb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f3bb4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116f3bb6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3bb8 jl 0x116f3bd7 */
  if ((C.sf!=C.of)) goto L_116f3bd7;
  /* 116f3bba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f3bbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f3bbf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116f3bc1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 116f3bc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f3bc6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 116f3bc9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3bcb jg 0x116f3bd7 */
  if ((!C.zf&&C.sf==C.of)) goto L_116f3bd7;
  /* 116f3bcd mov eax, 2 */
  EAX = (0x2u);
  /* 116f3bd2 jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3bd7:;
  /* 116f3bd7 jmp 0x116f3b88 */
  goto L_116f3b88;
L_116f3bd9:;
  /* 116f3bd9 mov eax, 3 */
  EAX = (0x3u);
  /* 116f3bde jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3be3:;
  /* 116f3be3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3be7 jle 0x116f3c5c */
  if ((C.zf||C.sf!=C.of)) goto L_116f3c5c;
  /* 116f3be9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3bed jae 0x116f3bf9 */
  if (!C.cf) goto L_116f3bf9;
  /* 116f3bef mov eax, 1 */
  EAX = (0x1u);
  /* 116f3bf4 jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3bf9:;
  /* 116f3bf9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 116f3bfc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 116f3bff jmp 0x116f3c0a */
  goto L_116f3c0a;
L_116f3c01:;
  /* 116f3c01 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 116f3c04 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3c07 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_116f3c0a:;
  /* 116f3c0a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 116f3c0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f3c0f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116f3c11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f3c13 je 0x116f3c52 */
  if (C.zf) goto L_116f3c52;
  /* 116f3c15 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 116f3c18 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f3c1a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 116f3c1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116f3c1f je 0x116f3c52 */
  if (C.zf) goto L_116f3c52;
  /* 116f3c21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f3c24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f3c26 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116f3c28 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 116f3c2b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116f3c2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116f3c2f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3c31 jl 0x116f3c50 */
  if ((C.sf!=C.of)) goto L_116f3c50;
  /* 116f3c33 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f3c36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f3c38 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116f3c3a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 116f3c3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f3c3f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 116f3c42 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3c44 jg 0x116f3c50 */
  if ((!C.zf&&C.sf==C.of)) goto L_116f3c50;
  /* 116f3c46 mov eax, 2 */
  EAX = (0x2u);
  /* 116f3c4b jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3c50:;
  /* 116f3c50 jmp 0x116f3c01 */
  goto L_116f3c01;
L_116f3c52:;
  /* 116f3c52 mov eax, 1 */
  EAX = (0x1u);
  /* 116f3c57 jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3c5c:;
  /* 116f3c5c push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3c5e push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3c60 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f3c63 push ecx */
  push32((uint32_t)(ECX));
  /* 116f3c64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f3c67 push edx */
  push32((uint32_t)(EDX));
  /* 116f3c68 push 9 */
  push32((uint32_t)(0x9u));
  /* 116f3c6a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 116f3c6d push eax */
  push32((uint32_t)(EAX));
  /* 116f3c6e call dword ptr [0x117122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122f4))), 0x116f3c74u);
  /* 116f3c74 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116f3c77 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3c7b jne 0x116f3c84 */
  if (!C.zf) goto L_116f3c84;
  /* 116f3c7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f3c7f jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3c84:;
  /* 116f3c84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116f3c8b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116f3c8e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116f3c90 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3c93 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116f3c95 call 0x116e6fc0 */
  push32(0x116f3c9au); f_116e6fc0();
  /* 116f3c9a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 116f3c9d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116f3ca0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 116f3ca3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116f3ca6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116f3cad jmp 0x116f3cc6 */
  goto L_116f3cc6;
  /* 116f3caf mov eax, 1 */
  EAX = (0x1u);
  /* 116f3cb4 ret  */
  ESPCHK(0x116f39d0u, _esp0);
  ESP += 4; return;
  /* 116f3cb5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116f3cb8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116f3cbf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116f3cc6:;
  /* 116f3cc6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3cca jne 0x116f3cd3 */
  if (!C.zf) goto L_116f3cd3;
  /* 116f3ccc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f3cce jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3cd3:;
  /* 116f3cd3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116f3cd6 push edx */
  push32((uint32_t)(EDX));
  /* 116f3cd7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116f3cda push eax */
  push32((uint32_t)(EAX));
  /* 116f3cdb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116f3cde push ecx */
  push32((uint32_t)(ECX));
  /* 116f3cdf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116f3ce2 push edx */
  push32((uint32_t)(EDX));
  /* 116f3ce3 push 1 */
  push32((uint32_t)(0x1u));
  /* 116f3ce5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 116f3ce8 push eax */
  push32((uint32_t)(EAX));
  /* 116f3ce9 call dword ptr [0x117122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122f4))), 0x116f3cefu);
  /* 116f3cef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f3cf1 jne 0x116f3cfa */
  if (!C.zf) goto L_116f3cfa;
  /* 116f3cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f3cf5 jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3cfa:;
  /* 116f3cfa push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 116f3cfe mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116f3d01 push ecx */
  push32((uint32_t)(ECX));
  /* 116f3d02 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f3d05 push edx */
  push32((uint32_t)(EDX));
  /* 116f3d06 push 9 */
  push32((uint32_t)(0x9u));
  /* 116f3d08 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 116f3d0b push eax */
  push32((uint32_t)(EAX));
  /* 116f3d0c call dword ptr [0x117122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122f4))), 0x116f3d12u);
  /* 116f3d12 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116f3d15 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3d19 jne 0x116f3d22 */
  if (!C.zf) goto L_116f3d22;
  /* 116f3d1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f3d1d jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3d22:;
  /* 116f3d22 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116f3d29 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116f3d2c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116f3d2e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3d31 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116f3d33 call 0x116e6fc0 */
  push32(0x116f3d38u); f_116e6fc0();
  /* 116f3d38 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 116f3d3b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116f3d3e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 116f3d41 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 116f3d44 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116f3d4b jmp 0x116f3d64 */
  goto L_116f3d64;
  /* 116f3d4d mov eax, 1 */
  EAX = (0x1u);
  /* 116f3d52 ret  */
  ESPCHK(0x116f39d0u, _esp0);
  ESP += 4; return;
  /* 116f3d53 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116f3d56 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 116f3d5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116f3d64:;
  /* 116f3d64 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3d68 jne 0x116f3d6e */
  if (!C.zf) goto L_116f3d6e;
  /* 116f3d6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f3d6c jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3d6e:;
  /* 116f3d6e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116f3d71 push edx */
  push32((uint32_t)(EDX));
  /* 116f3d72 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116f3d75 push eax */
  push32((uint32_t)(EAX));
  /* 116f3d76 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116f3d79 push ecx */
  push32((uint32_t)(ECX));
  /* 116f3d7a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116f3d7d push edx */
  push32((uint32_t)(EDX));
  /* 116f3d7e push 1 */
  push32((uint32_t)(0x1u));
  /* 116f3d80 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 116f3d83 push eax */
  push32((uint32_t)(EAX));
  /* 116f3d84 call dword ptr [0x117122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122f4))), 0x116f3d8au);
  /* 116f3d8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f3d8c jne 0x116f3d92 */
  if (!C.zf) goto L_116f3d92;
  /* 116f3d8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f3d90 jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3d92:;
  /* 116f3d92 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116f3d95 push ecx */
  push32((uint32_t)(ECX));
  /* 116f3d96 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116f3d99 push edx */
  push32((uint32_t)(EDX));
  /* 116f3d9a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116f3d9d push eax */
  push32((uint32_t)(EAX));
  /* 116f3d9e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116f3da1 push ecx */
  push32((uint32_t)(ECX));
  /* 116f3da2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f3da5 push edx */
  push32((uint32_t)(EDX));
  /* 116f3da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f3da9 push eax */
  push32((uint32_t)(EAX));
  /* 116f3daa call dword ptr [0x117122a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122a8))), 0x116f3db0u);
  /* 116f3db0 jmp 0x116f3db4 */
  goto L_116f3db4;
L_116f3db2:;
  /* 116f3db2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116f3db4:;
  /* 116f3db4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 116f3db7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f3dba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 116f3dc1 pop edi */
  EDI = (pop32());
  /* 116f3dc2 pop esi */
  ESI = (pop32());
  /* 116f3dc3 pop ebx */
  EBX = (pop32());
  /* 116f3dc4 mov esp, ebp */
  ESP = (EBP);
  /* 116f3dc6 pop ebp */
  EBP = (pop32());
  /* 116f3dc7 ret  */
  ESPCHK(0x116f39d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013dd0 @ 0x116f3dd0 (80 bytes, 32 insns) */
void f_116f3dd0(void) {
  FTRACE(0x116f3dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f3dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 116f3dd1 mov ebp, esp */
  EBP = (ESP);
  /* 116f3dd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f3dd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f3dd9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116f3ddc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f3ddf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116f3de2:;
  /* 116f3de2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f3de5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f3de8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f3deb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116f3dee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f3df0 je 0x116f3e07 */
  if (C.zf) goto L_116f3e07;
  /* 116f3df2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f3df5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116f3df8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f3dfa je 0x116f3e07 */
  if (C.zf) goto L_116f3e07;
  /* 116f3dfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f3dff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3e02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116f3e05 jmp 0x116f3de2 */
  goto L_116f3de2;
L_116f3e07:;
  /* 116f3e07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f3e0a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116f3e0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f3e0f jne 0x116f3e19 */
  if (!C.zf) goto L_116f3e19;
  /* 116f3e11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f3e14 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f3e17 jmp 0x116f3e1c */
  goto L_116f3e1c;
L_116f3e19:;
  /* 116f3e19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_116f3e1c:;
  /* 116f3e1c mov esp, ebp */
  ESP = (EBP);
  /* 116f3e1e pop ebp */
  EBP = (pop32());
  /* 116f3e1f ret  */
  ESPCHK(0x116f3dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e20 @ 0x116f3e20 (736 bytes, 224 insns) */
void f_116f3e20(void) {
  FTRACE(0x116f3e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f3e20 push ebp */
  push32((uint32_t)(EBP));
  /* 116f3e21 mov ebp, esp */
  EBP = (ESP);
  /* 116f3e23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f3e26 push esi */
  push32((uint32_t)(ESI));
  /* 116f3e27 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3e2b je 0x116f3e4c */
  if (C.zf) goto L_116f3e4c;
  /* 116f3e2d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 116f3e2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f3e32 push eax */
  push32((uint32_t)(EAX));
  /* 116f3e33 call 0x116f4270 */
  push32(0x116f3e38u); f_116f4270();
  /* 116f3e38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3e3b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116f3e3e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3e42 je 0x116f3e4c */
  if (C.zf) goto L_116f3e4c;
  /* 116f3e44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f3e47 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3e4a jne 0x116f3e54 */
  if (!C.zf) goto L_116f3e54;
L_116f3e4c:;
  /* 116f3e4c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f3e4f jmp 0x116f40fb */
  goto L_116f40fb;
L_116f3e54:;
  /* 116f3e54 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116f3e57 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 116f3e5b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116f3e5d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f3e5f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 116f3e60 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116f3e63 mov ecx, dword ptr [0x1170f64c] */
  ECX = (r32((uint32_t)(0x1170f64c)));
  /* 116f3e69 cmp ecx, dword ptr [0x1170f650] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1170f650))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3e6f jne 0x116f3e85 */
  if (!C.zf) goto L_116f3e85;
  /* 116f3e71 mov edx, dword ptr [0x1170f64c] */
  EDX = (r32((uint32_t)(0x1170f64c)));
  /* 116f3e77 push edx */
  push32((uint32_t)(EDX));
  /* 116f3e78 call 0x116f4180 */
  push32(0x116f3e7du); f_116f4180();
  /* 116f3e7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3e80 mov dword ptr [0x1170f64c], eax */
  w32((uint32_t)(0x1170f64c), (EAX));
L_116f3e85:;
  /* 116f3e85 cmp dword ptr [0x1170f64c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f64c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3e8c jne 0x116f3f45 */
  if (!C.zf) goto L_116f3f45;
  /* 116f3e92 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3e96 je 0x116f3eb7 */
  if (C.zf) goto L_116f3eb7;
  /* 116f3e98 cmp dword ptr [0x1170f654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3e9f je 0x116f3eb7 */
  if (C.zf) goto L_116f3eb7;
  /* 116f3ea1 call 0x116f3920 */
  push32(0x116f3ea6u); f_116f3920();
  /* 116f3ea6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f3ea8 je 0x116f3eb2 */
  if (C.zf) goto L_116f3eb2;
  /* 116f3eaa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f3ead jmp 0x116f40fb */
  goto L_116f40fb;
L_116f3eb2:;
  /* 116f3eb2 jmp 0x116f3f45 */
  goto L_116f3f45;
L_116f3eb7:;
  /* 116f3eb7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3ebb je 0x116f3ec4 */
  if (C.zf) goto L_116f3ec4;
  /* 116f3ebd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f3ebf jmp 0x116f40fb */
  goto L_116f40fb;
L_116f3ec4:;
  /* 116f3ec4 cmp dword ptr [0x1170f64c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f64c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3ecb jne 0x116f3f04 */
  if (!C.zf) goto L_116f3f04;
  /* 116f3ecd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 116f3ed2 push 0x1170b9b8 */
  push32((uint32_t)(0x1170b9b8u));
  /* 116f3ed7 push 2 */
  push32((uint32_t)(0x2u));
  /* 116f3ed9 push 4 */
  push32((uint32_t)(0x4u));
  /* 116f3edb call 0x116e3e20 */
  push32(0x116f3ee0u); f_116e3e20();
  /* 116f3ee0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3ee3 mov dword ptr [0x1170f64c], eax */
  w32((uint32_t)(0x1170f64c), (EAX));
  /* 116f3ee8 cmp dword ptr [0x1170f64c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f64c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3eef jne 0x116f3ef9 */
  if (!C.zf) goto L_116f3ef9;
  /* 116f3ef1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f3ef4 jmp 0x116f40fb */
  goto L_116f40fb;
L_116f3ef9:;
  /* 116f3ef9 mov eax, dword ptr [0x1170f64c] */
  EAX = (r32((uint32_t)(0x1170f64c)));
  /* 116f3efe mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_116f3f04:;
  /* 116f3f04 cmp dword ptr [0x1170f654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3f0b jne 0x116f3f45 */
  if (!C.zf) goto L_116f3f45;
  /* 116f3f0d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 116f3f12 push 0x1170b9b8 */
  push32((uint32_t)(0x1170b9b8u));
  /* 116f3f17 push 2 */
  push32((uint32_t)(0x2u));
  /* 116f3f19 push 4 */
  push32((uint32_t)(0x4u));
  /* 116f3f1b call 0x116e3e20 */
  push32(0x116f3f20u); f_116e3e20();
  /* 116f3f20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3f23 mov dword ptr [0x1170f654], eax */
  w32((uint32_t)(0x1170f654), (EAX));
  /* 116f3f28 cmp dword ptr [0x1170f654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3f2f jne 0x116f3f39 */
  if (!C.zf) goto L_116f3f39;
  /* 116f3f31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f3f34 jmp 0x116f40fb */
  goto L_116f40fb;
L_116f3f39:;
  /* 116f3f39 mov ecx, dword ptr [0x1170f654] */
  ECX = (r32((uint32_t)(0x1170f654)));
  /* 116f3f3f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_116f3f45:;
  /* 116f3f45 mov edx, dword ptr [0x1170f64c] */
  EDX = (r32((uint32_t)(0x1170f64c)));
  /* 116f3f4b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116f3f4e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116f3f51 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f3f54 push eax */
  push32((uint32_t)(EAX));
  /* 116f3f55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f3f58 push ecx */
  push32((uint32_t)(ECX));
  /* 116f3f59 call 0x116f4100 */
  push32(0x116f3f5eu); f_116f4100();
  /* 116f3f5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3f61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116f3f64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3f68 jl 0x116f4001 */
  if ((C.sf!=C.of)) goto L_116f4001;
  /* 116f3f6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f3f71 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3f74 je 0x116f4001 */
  if (C.zf) goto L_116f4001;
  /* 116f3f7a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3f7e je 0x116f3ff3 */
  if (C.zf) goto L_116f3ff3;
  /* 116f3f80 push 2 */
  push32((uint32_t)(0x2u));
  /* 116f3f82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f3f85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f3f88 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116f3f8b push edx */
  push32((uint32_t)(EDX));
  /* 116f3f8c call 0x116e48b0 */
  push32(0x116f3f91u); f_116e48b0();
  /* 116f3f91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3f94 jmp 0x116f3f9f */
  goto L_116f3f9f;
L_116f3f96:;
  /* 116f3f96 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f3f99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3f9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116f3f9f:;
  /* 116f3f9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f3fa2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f3fa5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3fa9 je 0x116f3fc0 */
  if (C.zf) goto L_116f3fc0;
  /* 116f3fab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f3fae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f3fb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f3fb4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 116f3fb7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 116f3fbb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 116f3fbe jmp 0x116f3f96 */
  goto L_116f3f96;
L_116f3fc0:;
  /* 116f3fc0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 116f3fc5 push 0x1170b9b8 */
  push32((uint32_t)(0x1170b9b8u));
  /* 116f3fca push 2 */
  push32((uint32_t)(0x2u));
  /* 116f3fcc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f3fcf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 116f3fd2 push eax */
  push32((uint32_t)(EAX));
  /* 116f3fd3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f3fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 116f3fd7 call 0x116e42b0 */
  push32(0x116f3fdcu); f_116e42b0();
  /* 116f3fdc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f3fdf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116f3fe2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f3fe6 je 0x116f3ff1 */
  if (C.zf) goto L_116f3ff1;
  /* 116f3fe8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f3feb mov dword ptr [0x1170f64c], edx */
  w32((uint32_t)(0x1170f64c), (EDX));
L_116f3ff1:;
  /* 116f3ff1 jmp 0x116f3fff */
  goto L_116f3fff;
L_116f3ff3:;
  /* 116f3ff3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f3ff6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f3ff9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f3ffc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_116f3fff:;
  /* 116f3fff jmp 0x116f4074 */
  goto L_116f4074;
L_116f4001:;
  /* 116f4001 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f4005 jne 0x116f406d */
  if (!C.zf) goto L_116f406d;
  /* 116f4007 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f400b jge 0x116f4015 */
  if ((C.sf==C.of)) goto L_116f4015;
  /* 116f400d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f4010 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116f4012 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116f4015:;
  /* 116f4015 push 0xce */
  push32((uint32_t)(0xceu));
  /* 116f401a push 0x1170b9b8 */
  push32((uint32_t)(0x1170b9b8u));
  /* 116f401f push 2 */
  push32((uint32_t)(0x2u));
  /* 116f4021 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f4024 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 116f402b push edx */
  push32((uint32_t)(EDX));
  /* 116f402c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f402f push eax */
  push32((uint32_t)(EAX));
  /* 116f4030 call 0x116e42b0 */
  push32(0x116f4035u); f_116e42b0();
  /* 116f4035 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f4038 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116f403b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f403f jne 0x116f4049 */
  if (!C.zf) goto L_116f4049;
  /* 116f4041 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f4044 jmp 0x116f40fb */
  goto L_116f40fb;
L_116f4049:;
  /* 116f4049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f404c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f404f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f4052 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 116f4055 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f4058 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f405b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 116f4063 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f4066 mov dword ptr [0x1170f64c], eax */
  w32((uint32_t)(0x1170f64c), (EAX));
  /* 116f406b jmp 0x116f4074 */
  goto L_116f4074;
L_116f406d:;
  /* 116f406d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f406f jmp 0x116f40fb */
  goto L_116f40fb;
L_116f4074:;
  /* 116f4074 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f4078 je 0x116f40f9 */
  if (C.zf) goto L_116f40f9;
  /* 116f407a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 116f407f push 0x1170b9b8 */
  push32((uint32_t)(0x1170b9b8u));
  /* 116f4084 push 2 */
  push32((uint32_t)(0x2u));
  /* 116f4086 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f4089 push ecx */
  push32((uint32_t)(ECX));
  /* 116f408a call 0x116e6c50 */
  push32(0x116f408fu); f_116e6c50();
  /* 116f408f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f4092 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f4095 push eax */
  push32((uint32_t)(EAX));
  /* 116f4096 call 0x116e3e20 */
  push32(0x116f409bu); f_116e3e20();
  /* 116f409b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f409e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116f40a1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f40a5 je 0x116f40f9 */
  if (C.zf) goto L_116f40f9;
  /* 116f40a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f40aa push edx */
  push32((uint32_t)(EDX));
  /* 116f40ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f40ae push eax */
  push32((uint32_t)(EAX));
  /* 116f40af call 0x116e6dd0 */
  push32(0x116f40b4u); f_116e6dd0();
  /* 116f40b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f40b7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116f40ba sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f40bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f40c0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f40c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116f40c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f40c8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 116f40cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f40ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f40d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116f40d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116f40d7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116f40d9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f40db not edx */
  EDX = (~(EDX));
  /* 116f40dd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 116f40e0 push edx */
  push32((uint32_t)(EDX));
  /* 116f40e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f40e4 push eax */
  push32((uint32_t)(EAX));
  /* 116f40e5 call dword ptr [0x117122a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122a4))), 0x116f40ebu);
  /* 116f40eb push 2 */
  push32((uint32_t)(0x2u));
  /* 116f40ed mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f40f0 push ecx */
  push32((uint32_t)(ECX));
  /* 116f40f1 call 0x116e48b0 */
  push32(0x116f40f6u); f_116e48b0();
  /* 116f40f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116f40f9:;
  /* 116f40f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116f40fb:;
  /* 116f40fb pop esi */
  ESI = (pop32());
  /* 116f40fc mov esp, ebp */
  ESP = (EBP);
  /* 116f40fe pop ebp */
  EBP = (pop32());
  /* 116f40ff ret  */
  ESPCHK(0x116f3e20u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x116f4100 (124 bytes, 47 insns) */
void f_116f4100(void) {
  FTRACE(0x116f4100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f4100 push ebp */
  push32((uint32_t)(EBP));
  /* 116f4101 mov ebp, esp */
  EBP = (ESP);
  /* 116f4103 push ecx */
  push32((uint32_t)(ECX));
  /* 116f4104 mov eax, dword ptr [0x1170f64c] */
  EAX = (r32((uint32_t)(0x1170f64c)));
  /* 116f4109 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116f410c jmp 0x116f4117 */
  goto L_116f4117;
L_116f410e:;
  /* 116f410e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f4111 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f4114 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116f4117:;
  /* 116f4117 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f411a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f411d je 0x116f416a */
  if (C.zf) goto L_116f416a;
  /* 116f411f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f4122 push eax */
  push32((uint32_t)(EAX));
  /* 116f4123 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f4126 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f4128 push edx */
  push32((uint32_t)(EDX));
  /* 116f4129 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f412c push eax */
  push32((uint32_t)(EAX));
  /* 116f412d call 0x116f38d0 */
  push32(0x116f4132u); f_116f38d0();
  /* 116f4132 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f4135 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f4137 jne 0x116f4168 */
  if (!C.zf) goto L_116f4168;
  /* 116f4139 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f413c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f413e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f4141 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 116f4145 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f4148 je 0x116f415a */
  if (C.zf) goto L_116f415a;
  /* 116f414a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f414d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116f414f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f4152 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 116f4156 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f4158 jne 0x116f4168 */
  if (!C.zf) goto L_116f4168;
L_116f415a:;
  /* 116f415a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f415d sub eax, dword ptr [0x1170f64c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1170f64c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f4163 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 116f4166 jmp 0x116f4178 */
  goto L_116f4178;
L_116f4168:;
  /* 116f4168 jmp 0x116f410e */
  goto L_116f410e;
L_116f416a:;
  /* 116f416a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f416d sub eax, dword ptr [0x1170f64c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1170f64c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f4173 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 116f4176 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_116f4178:;
  /* 116f4178 mov esp, ebp */
  ESP = (EBP);
  /* 116f417a pop ebp */
  EBP = (pop32());
  /* 116f417b ret  */
  ESPCHK(0x116f4100u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x116f4180 (238 bytes, 80 insns) */
void f_116f4180(void) {
  FTRACE(0x116f4180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f4180 push ebp */
  push32((uint32_t)(EBP));
  /* 116f4181 mov ebp, esp */
  EBP = (ESP);
  /* 116f4183 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f4186 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116f418d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f4190 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116f4193 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f4197 jne 0x116f41a0 */
  if (!C.zf) goto L_116f41a0;
  /* 116f4199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f419b jmp 0x116f426a */
  goto L_116f426a;
L_116f41a0:;
  /* 116f41a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f41a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f41a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f41a8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f41ab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116f41ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f41b0 je 0x116f41bd */
  if (C.zf) goto L_116f41bd;
  /* 116f41b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f41b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f41b8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116f41bb jmp 0x116f41a0 */
  goto L_116f41a0;
L_116f41bd:;
  /* 116f41bd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 116f41c2 push 0x1170b9b8 */
  push32((uint32_t)(0x1170b9b8u));
  /* 116f41c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 116f41c9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116f41cc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 116f41d3 push eax */
  push32((uint32_t)(EAX));
  /* 116f41d4 call 0x116e3e20 */
  push32(0x116f41d9u); f_116e3e20();
  /* 116f41d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f41dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116f41df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f41e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116f41e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f41e9 jne 0x116f41f5 */
  if (!C.zf) goto L_116f41f5;
  /* 116f41eb push 9 */
  push32((uint32_t)(0x9u));
  /* 116f41ed call 0x116e2d90 */
  push32(0x116f41f2u); f_116e2d90();
  /* 116f41f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116f41f5:;
  /* 116f41f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f41f8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_116f41fb:;
  /* 116f41fb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f41fe cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f4201 je 0x116f425e */
  if (C.zf) goto L_116f425e;
  /* 116f4203 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 116f4208 push 0x1170b9b8 */
  push32((uint32_t)(0x1170b9b8u));
  /* 116f420d push 2 */
  push32((uint32_t)(0x2u));
  /* 116f420f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f4212 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116f4214 push edx */
  push32((uint32_t)(EDX));
  /* 116f4215 call 0x116e6c50 */
  push32(0x116f421au); f_116e6c50();
  /* 116f421a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f421d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f4220 push eax */
  push32((uint32_t)(EAX));
  /* 116f4221 call 0x116e3e20 */
  push32(0x116f4226u); f_116e3e20();
  /* 116f4226 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f4229 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f422c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116f422e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f4231 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f4234 je 0x116f424a */
  if (C.zf) goto L_116f424a;
  /* 116f4236 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f4239 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116f423b push ecx */
  push32((uint32_t)(ECX));
  /* 116f423c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f423f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116f4241 push eax */
  push32((uint32_t)(EAX));
  /* 116f4242 call 0x116e6dd0 */
  push32(0x116f4247u); f_116e6dd0();
  /* 116f4247 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116f424a:;
  /* 116f424a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116f424d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f4250 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116f4253 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f4256 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f4259 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116f425c jmp 0x116f41fb */
  goto L_116f41fb;
L_116f425e:;
  /* 116f425e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116f4261 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116f4267 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116f426a:;
  /* 116f426a mov esp, ebp */
  ESP = (EBP);
  /* 116f426c pop ebp */
  EBP = (pop32());
  /* 116f426d ret  */
  ESPCHK(0x116f4180u, _esp0);
  ESP += 4; return;
}

/* FUN_10014270 @ 0x116f4270 (237 bytes, 81 insns) */
void f_116f4270(void) {
  FTRACE(0x116f4270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f4270 push ebp */
  push32((uint32_t)(EBP));
  /* 116f4271 mov ebp, esp */
  EBP = (ESP);
  /* 116f4273 push ecx */
  push32((uint32_t)(ECX));
  /* 116f4274 cmp dword ptr [0x11710d8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11710d8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f427b jne 0x116f4292 */
  if (!C.zf) goto L_116f4292;
  /* 116f427d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116f4280 push eax */
  push32((uint32_t)(EAX));
  /* 116f4281 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f4284 push ecx */
  push32((uint32_t)(ECX));
  /* 116f4285 call 0x116f4370 */
  push32(0x116f428au); f_116f4370();
  /* 116f428a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f428d jmp 0x116f4359 */
  goto L_116f4359;
L_116f4292:;
  /* 116f4292 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116f4294 call 0x116e7820 */
  push32(0x116f4299u); f_116e7820();
  /* 116f4299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f429c jmp 0x116f42a7 */
  goto L_116f42a7;
L_116f429e:;
  /* 116f429e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f42a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f42a4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_116f42a7:;
  /* 116f42a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f42aa movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 116f42ae mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 116f42b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f42b5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116f42bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f42bd je 0x116f433b */
  if (C.zf) goto L_116f433b;
  /* 116f42bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f42c2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f42c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f42c9 mov cl, byte ptr [eax + 0x11710ea1] */
  CL = (r8((uint32_t)(EAX + 0x11710ea1)));
  /* 116f42cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116f42d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116f42d4 je 0x116f4326 */
  if (C.zf) goto L_116f4326;
  /* 116f42d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f42d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f42dc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 116f42df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f42e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f42e4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116f42e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116f42e8 jne 0x116f42f8 */
  if (!C.zf) goto L_116f42f8;
  /* 116f42ea push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116f42ec call 0x116e78c0 */
  push32(0x116f42f1u); f_116e78c0();
  /* 116f42f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f42f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f42f6 jmp 0x116f4359 */
  goto L_116f4359;
L_116f42f8:;
  /* 116f42f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f42fb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116f4301 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 116f4304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f4307 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f4309 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116f430b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116f430d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f4310 jne 0x116f4324 */
  if (!C.zf) goto L_116f4324;
  /* 116f4312 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116f4314 call 0x116e78c0 */
  push32(0x116f4319u); f_116e78c0();
  /* 116f4319 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f431c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f431f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f4322 jmp 0x116f4359 */
  goto L_116f4359;
L_116f4324:;
  /* 116f4324 jmp 0x116f4336 */
  goto L_116f4336;
L_116f4326:;
  /* 116f4326 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f4329 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116f432f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f4332 jne 0x116f4336 */
  if (!C.zf) goto L_116f4336;
  /* 116f4334 jmp 0x116f433b */
  goto L_116f433b;
L_116f4336:;
  /* 116f4336 jmp 0x116f429e */
  goto L_116f429e;
L_116f433b:;
  /* 116f433b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116f433d call 0x116e78c0 */
  push32(0x116f4342u); f_116e78c0();
  /* 116f4342 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f4345 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f4348 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f434d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f4350 jne 0x116f4357 */
  if (!C.zf) goto L_116f4357;
  /* 116f4352 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f4355 jmp 0x116f4359 */
  goto L_116f4359;
L_116f4357:;
  /* 116f4357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116f4359:;
  /* 116f4359 mov esp, ebp */
  ESP = (EBP);
  /* 116f435b pop ebp */
  EBP = (pop32());
  /* 116f435c ret  */
  ESPCHK(0x116f4270u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x116f4370 (193 bytes, 87 insns) */
void f_116f4370(void) {
  FTRACE(0x116f4370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f4370 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f4372 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 116f4376 push ebx */
  push32((uint32_t)(EBX));
  /* 116f4377 mov ebx, eax */
  EBX = (EAX);
  /* 116f4379 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 116f437c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 116f4380 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 116f4386 je 0x116f439b */
  if (C.zf) goto L_116f439b;
L_116f4388:;
  /* 116f4388 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 116f438a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 116f438b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f438d je 0x116f4360 */
  if (C.zf) { jmp_ind(0x116f4360u); return; }
  /* 116f438f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 116f4391 je 0x116f43e4 */
  if (C.zf) goto L_116f43e4;
  /* 116f4393 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 116f4399 jne 0x116f4388 */
  if (!C.zf) goto L_116f4388;
L_116f439b:;
  /* 116f439b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 116f439d push edi */
  push32((uint32_t)(EDI));
  /* 116f439e mov eax, ebx */
  EAX = (EBX);
  /* 116f43a0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 116f43a3 push esi */
  push32((uint32_t)(ESI));
  /* 116f43a4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_116f43a6:;
  /* 116f43a6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 116f43a8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 116f43ad mov eax, ecx */
  EAX = (ECX);
  /* 116f43af mov esi, edi */
  ESI = (EDI);
  /* 116f43b1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 116f43b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116f43b5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116f43b7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116f43ba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116f43bd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 116f43bf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 116f43c1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f43c4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 116f43ca jne 0x116f43e8 */
  if (!C.zf) goto L_116f43e8;
  /* 116f43cc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 116f43d1 je 0x116f43a6 */
  if (C.zf) goto L_116f43a6;
  /* 116f43d3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 116f43d8 jne 0x116f43e2 */
  if (!C.zf) goto L_116f43e2;
  /* 116f43da and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 116f43e0 jne 0x116f43a6 */
  if (!C.zf) goto L_116f43a6;
L_116f43e2:;
  /* 116f43e2 pop esi */
  ESI = (pop32());
  /* 116f43e3 pop edi */
  EDI = (pop32());
L_116f43e4:;
  /* 116f43e4 pop ebx */
  EBX = (pop32());
  /* 116f43e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f43e7 ret  */
  ESPCHK(0x116f4370u, _esp0);
  ESP += 4; return;
L_116f43e8:;
  /* 116f43e8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 116f43eb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f43ed je 0x116f4425 */
  if (C.zf) goto L_116f4425;
  /* 116f43ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116f43f1 je 0x116f43e2 */
  if (C.zf) goto L_116f43e2;
  /* 116f43f3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f43f5 je 0x116f441e */
  if (C.zf) goto L_116f441e;
  /* 116f43f7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 116f43f9 je 0x116f43e2 */
  if (C.zf) goto L_116f43e2;
  /* 116f43fb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 116f43fe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f4400 je 0x116f4417 */
  if (C.zf) goto L_116f4417;
  /* 116f4402 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116f4404 je 0x116f43e2 */
  if (C.zf) goto L_116f43e2;
  /* 116f4406 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116f4408 je 0x116f4410 */
  if (C.zf) goto L_116f4410;
  /* 116f440a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 116f440c je 0x116f43e2 */
  if (C.zf) goto L_116f43e2;
  /* 116f440e jmp 0x116f43a6 */
  goto L_116f43a6;
L_116f4410:;
  /* 116f4410 pop esi */
  ESI = (pop32());
  /* 116f4411 pop edi */
  EDI = (pop32());
  /* 116f4412 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 116f4415 pop ebx */
  EBX = (pop32());
  /* 116f4416 ret  */
  ESPCHK(0x116f4370u, _esp0);
  ESP += 4; return;
L_116f4417:;
  /* 116f4417 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 116f441a pop esi */
  ESI = (pop32());
  /* 116f441b pop edi */
  EDI = (pop32());
  /* 116f441c pop ebx */
  EBX = (pop32());
  /* 116f441d ret  */
  ESPCHK(0x116f4370u, _esp0);
  ESP += 4; return;
L_116f441e:;
  /* 116f441e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 116f4421 pop esi */
  ESI = (pop32());
  /* 116f4422 pop edi */
  EDI = (pop32());
  /* 116f4423 pop ebx */
  EBX = (pop32());
  /* 116f4424 ret  */
  ESPCHK(0x116f4370u, _esp0);
  ESP += 4; return;
L_116f4425:;
  /* 116f4425 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 116f4428 pop esi */
  ESI = (pop32());
  /* 116f4429 pop edi */
  EDI = (pop32());
  /* 116f442a pop ebx */
  EBX = (pop32());
  /* 116f442b ret  */
  ESPCHK(0x116f4370u, _esp0);
  ESP += 4; return;
  /* 116f442c jmp dword ptr [0x11712330] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11712330)))); return;
}

/* RtlUnwind @ 0x116f457c (6 bytes, 1 insns) */
void f_116f457c(void) {
  FTRACE(0x116f457cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f457c jmp dword ptr [0x117122dc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x117122dc)))); return;
}

