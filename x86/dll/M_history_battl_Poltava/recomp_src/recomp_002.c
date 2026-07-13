#include "recomp.h"

/* __close_lk @ 0x12ba05d0 (170 bytes, 59 insns) */
void f_12ba05d0(void) {
  FTRACE(0x12ba05d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba05d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba05d1 mov ebp, esp */
  EBP = (ESP);
  /* 12ba05d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba05d4 push esi */
  push32((uint32_t)(ESI));
  /* 12ba05d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba05d8 push eax */
  push32((uint32_t)(EAX));
  /* 12ba05d9 call 0x12b9cf40 */
  push32(0x12ba05deu); f_12b9cf40();
  /* 12ba05de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba05e1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba05e4 je 0x12ba0623 */
  if (C.zf) goto L_12ba0623;
  /* 12ba05e6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba05ea je 0x12ba05f2 */
  if (C.zf) goto L_12ba05f2;
  /* 12ba05ec cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba05f0 jne 0x12ba060c */
  if (!C.zf) goto L_12ba060c;
L_12ba05f2:;
  /* 12ba05f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba05f4 call 0x12b9cf40 */
  push32(0x12ba05f9u); f_12b9cf40();
  /* 12ba05f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba05fc mov esi, eax */
  ESI = (EAX);
  /* 12ba05fe push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba0600 call 0x12b9cf40 */
  push32(0x12ba0605u); f_12b9cf40();
  /* 12ba0605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0608 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba060a je 0x12ba0623 */
  if (C.zf) goto L_12ba0623;
L_12ba060c:;
  /* 12ba060c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba060f push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0610 call 0x12b9cf40 */
  push32(0x12ba0615u); f_12b9cf40();
  /* 12ba0615 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0618 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0619 call dword ptr [0x12bc1248] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1248))), 0x12ba061fu);
  /* 12ba061f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba0621 je 0x12ba062c */
  if (C.zf) goto L_12ba062c;
L_12ba0623:;
  /* 12ba0623 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ba062a jmp 0x12ba0635 */
  goto L_12ba0635;
L_12ba062c:;
  /* 12ba062c call dword ptr [0x12bc12b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12b4))), 0x12ba0632u);
  /* 12ba0632 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ba0635:;
  /* 12ba0635 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba0638 push edx */
  push32((uint32_t)(EDX));
  /* 12ba0639 call 0x12b9ce60 */
  push32(0x12ba063eu); f_12b9ce60();
  /* 12ba063e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0641 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba0644 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12ba0647 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba064a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12ba064d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba0650 mov edx, dword ptr [eax*4 + 0x12bc0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12bc0e60)));
  /* 12ba0657 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 12ba065c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0660 je 0x12ba0673 */
  if (C.zf) goto L_12ba0673;
  /* 12ba0662 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba0665 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0666 call 0x12b9b800 */
  push32(0x12ba066bu); f_12b9b800();
  /* 12ba066b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba066e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba0671 jmp 0x12ba0675 */
  goto L_12ba0675;
L_12ba0673:;
  /* 12ba0673 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ba0675:;
  /* 12ba0675 pop esi */
  ESI = (pop32());
  /* 12ba0676 mov esp, ebp */
  ESP = (EBP);
  /* 12ba0678 pop ebp */
  EBP = (pop32());
  /* 12ba0679 ret  */
  ESPCHK(0x12ba05d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010680 @ 0x12ba0680 (146 bytes, 52 insns) */
void f_12ba0680(void) {
  FTRACE(0x12ba0680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba0680 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba0681 mov ebp, esp */
  EBP = (ESP);
  /* 12ba0683 push ebx */
  push32((uint32_t)(EBX));
  /* 12ba0684 push esi */
  push32((uint32_t)(ESI));
  /* 12ba0685 push edi */
  push32((uint32_t)(EDI));
L_12ba0686:;
  /* 12ba0686 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba068a jne 0x12ba06aa */
  if (!C.zf) goto L_12ba06aa;
  /* 12ba068c push 0x12bbb818 */
  push32((uint32_t)(0x12bbb818u));
  /* 12ba0691 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba0693 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12ba0695 push 0x12bbbee0 */
  push32((uint32_t)(0x12bbbee0u));
  /* 12ba069a push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba069c call 0x12b92a90 */
  push32(0x12ba06a1u); f_12b92a90();
  /* 12ba06a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba06a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba06a7 jne 0x12ba06aa */
  if (!C.zf) goto L_12ba06aa;
  /* 12ba06a9 int3  */
  x86_unimpl("int3 @ 0x12ba06a9");
L_12ba06aa:;
  /* 12ba06aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba06ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba06ae jne 0x12ba0686 */
  if (!C.zf) goto L_12ba0686;
  /* 12ba06b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba06b3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12ba06b6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 12ba06bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba06be je 0x12ba070d */
  if (C.zf) goto L_12ba070d;
  /* 12ba06c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba06c3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12ba06c6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12ba06c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ba06cb je 0x12ba070d */
  if (C.zf) goto L_12ba070d;
  /* 12ba06cd push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba06cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba06d2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12ba06d5 push eax */
  push32((uint32_t)(EAX));
  /* 12ba06d6 call 0x12b94460 */
  push32(0x12ba06dbu); f_12b94460();
  /* 12ba06db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba06de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba06e1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12ba06e4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12ba06ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba06ed mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12ba06f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba06f3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12ba06f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba06fc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12ba0703 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba0706 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12ba070d:;
  /* 12ba070d pop edi */
  EDI = (pop32());
  /* 12ba070e pop esi */
  ESI = (pop32());
  /* 12ba070f pop ebx */
  EBX = (pop32());
  /* 12ba0710 pop ebp */
  EBP = (pop32());
  /* 12ba0711 ret  */
  ESPCHK(0x12ba0680u, _esp0);
  ESP += 4; return;
}

/* FUN_10010720 @ 0x12ba0720 (289 bytes, 97 insns) */
void f_12ba0720(void) {
  FTRACE(0x12ba0720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba0720 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba0721 mov ebp, esp */
  EBP = (ESP);
  /* 12ba0723 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba0726 push esi */
  push32((uint32_t)(ESI));
  /* 12ba0727 mov eax, dword ptr [0x12bbec98] */
  EAX = (r32((uint32_t)(0x12bbec98)));
  /* 12ba072c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ba072f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12ba0736 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12ba073d jmp 0x12ba0748 */
  goto L_12ba0748;
L_12ba073f:;
  /* 12ba073f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0742 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0745 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12ba0748:;
  /* 12ba0748 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba074c jae 0x12ba0781 */
  if (!C.cf) goto L_12ba0781;
  /* 12ba074e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0751 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0754 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12ba0757 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0758 call 0x12b96800 */
  push32(0x12ba075du); f_12b96800();
  /* 12ba075d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0760 mov esi, eax */
  ESI = (EAX);
  /* 12ba0762 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0765 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0768 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12ba076c push ecx */
  push32((uint32_t)(ECX));
  /* 12ba076d call 0x12b96800 */
  push32(0x12ba0772u); f_12b96800();
  /* 12ba0772 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0775 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0778 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12ba077c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ba077f jmp 0x12ba073f */
  goto L_12ba073f;
L_12ba0781:;
  /* 12ba0781 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba0784 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0787 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0788 call 0x12b939b0 */
  push32(0x12ba078du); f_12b939b0();
  /* 12ba078d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0790 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ba0793 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0797 je 0x12ba0839 */
  if (C.zf) goto L_12ba0839;
  /* 12ba079d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba07a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12ba07a3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12ba07aa jmp 0x12ba07b5 */
  goto L_12ba07b5;
L_12ba07ac:;
  /* 12ba07ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba07af add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba07b2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12ba07b5:;
  /* 12ba07b5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba07b9 jae 0x12ba082a */
  if (!C.cf) goto L_12ba082a;
  /* 12ba07bb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba07be mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12ba07c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba07c4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba07c7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12ba07ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba07cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba07d0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12ba07d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba07d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba07d7 push edx */
  push32((uint32_t)(EDX));
  /* 12ba07d8 call 0x12b96980 */
  push32(0x12ba07ddu); f_12b96980();
  /* 12ba07dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba07e0 push eax */
  push32((uint32_t)(EAX));
  /* 12ba07e1 call 0x12b96800 */
  push32(0x12ba07e6u); f_12b96800();
  /* 12ba07e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba07e9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba07ec add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba07ee mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12ba07f1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba07f4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12ba07f7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba07fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba07fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12ba0800 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0803 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0806 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12ba080a push eax */
  push32((uint32_t)(EAX));
  /* 12ba080b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba080e push ecx */
  push32((uint32_t)(ECX));
  /* 12ba080f call 0x12b96980 */
  push32(0x12ba0814u); f_12b96980();
  /* 12ba0814 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0817 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0818 call 0x12b96800 */
  push32(0x12ba081du); f_12b96800();
  /* 12ba081d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0820 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0823 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0825 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12ba0828 jmp 0x12ba07ac */
  goto L_12ba07ac;
L_12ba082a:;
  /* 12ba082a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba082d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12ba0830 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0833 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0836 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12ba0839:;
  /* 12ba0839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba083c pop esi */
  ESI = (pop32());
  /* 12ba083d mov esp, ebp */
  ESP = (EBP);
  /* 12ba083f pop ebp */
  EBP = (pop32());
  /* 12ba0840 ret  */
  ESPCHK(0x12ba0720u, _esp0);
  ESP += 4; return;
}

/* FUN_10010850 @ 0x12ba0850 (291 bytes, 97 insns) */
void f_12ba0850(void) {
  FTRACE(0x12ba0850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba0850 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba0851 mov ebp, esp */
  EBP = (ESP);
  /* 12ba0853 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba0856 push esi */
  push32((uint32_t)(ESI));
  /* 12ba0857 mov eax, dword ptr [0x12bbec98] */
  EAX = (r32((uint32_t)(0x12bbec98)));
  /* 12ba085c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ba085f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12ba0866 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12ba086d jmp 0x12ba0878 */
  goto L_12ba0878;
L_12ba086f:;
  /* 12ba086f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0872 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0875 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12ba0878:;
  /* 12ba0878 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba087c jae 0x12ba08b2 */
  if (!C.cf) goto L_12ba08b2;
  /* 12ba087e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0881 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0884 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12ba0888 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0889 call 0x12b96800 */
  push32(0x12ba088eu); f_12b96800();
  /* 12ba088e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0891 mov esi, eax */
  ESI = (EAX);
  /* 12ba0893 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0896 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0899 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12ba089d push ecx */
  push32((uint32_t)(ECX));
  /* 12ba089e call 0x12b96800 */
  push32(0x12ba08a3u); f_12b96800();
  /* 12ba08a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba08a6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba08a9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12ba08ad mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ba08b0 jmp 0x12ba086f */
  goto L_12ba086f;
L_12ba08b2:;
  /* 12ba08b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba08b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba08b8 push eax */
  push32((uint32_t)(EAX));
  /* 12ba08b9 call 0x12b939b0 */
  push32(0x12ba08beu); f_12b939b0();
  /* 12ba08be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba08c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ba08c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba08c8 je 0x12ba096b */
  if (C.zf) goto L_12ba096b;
  /* 12ba08ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba08d1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12ba08d4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12ba08db jmp 0x12ba08e6 */
  goto L_12ba08e6;
L_12ba08dd:;
  /* 12ba08dd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba08e0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba08e3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12ba08e6:;
  /* 12ba08e6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba08ea jae 0x12ba095c */
  if (!C.cf) goto L_12ba095c;
  /* 12ba08ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba08ef mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12ba08f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba08f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba08f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12ba08fb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba08fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0901 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12ba0905 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0906 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0909 push edx */
  push32((uint32_t)(EDX));
  /* 12ba090a call 0x12b96980 */
  push32(0x12ba090fu); f_12b96980();
  /* 12ba090f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0912 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0913 call 0x12b96800 */
  push32(0x12ba0918u); f_12b96800();
  /* 12ba0918 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba091b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba091e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0920 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12ba0923 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0926 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12ba0929 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba092c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba092f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12ba0932 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0935 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0938 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12ba093c push eax */
  push32((uint32_t)(EAX));
  /* 12ba093d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0940 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0941 call 0x12b96980 */
  push32(0x12ba0946u); f_12b96980();
  /* 12ba0946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0949 push eax */
  push32((uint32_t)(EAX));
  /* 12ba094a call 0x12b96800 */
  push32(0x12ba094fu); f_12b96800();
  /* 12ba094f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0952 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0955 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0957 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12ba095a jmp 0x12ba08dd */
  goto L_12ba08dd;
L_12ba095c:;
  /* 12ba095c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba095f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12ba0962 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0965 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0968 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12ba096b:;
  /* 12ba096b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba096e pop esi */
  ESI = (pop32());
  /* 12ba096f mov esp, ebp */
  ESP = (EBP);
  /* 12ba0971 pop ebp */
  EBP = (pop32());
  /* 12ba0972 ret  */
  ESPCHK(0x12ba0850u, _esp0);
  ESP += 4; return;
}

/* FUN_10010980 @ 0x12ba0980 (878 bytes, 273 insns) */
void f_12ba0980(void) {
  FTRACE(0x12ba0980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba0980 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba0981 mov ebp, esp */
  EBP = (ESP);
  /* 12ba0983 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba0986 push esi */
  push32((uint32_t)(ESI));
  /* 12ba0987 mov eax, dword ptr [0x12bbec98] */
  EAX = (r32((uint32_t)(0x12bbec98)));
  /* 12ba098c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ba098f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12ba0996 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12ba099d jmp 0x12ba09a8 */
  goto L_12ba09a8;
L_12ba099f:;
  /* 12ba099f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba09a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba09a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12ba09a8:;
  /* 12ba09a8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba09ac jae 0x12ba09e1 */
  if (!C.cf) goto L_12ba09e1;
  /* 12ba09ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba09b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba09b4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12ba09b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba09b8 call 0x12b96800 */
  push32(0x12ba09bdu); f_12b96800();
  /* 12ba09bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba09c0 mov esi, eax */
  ESI = (EAX);
  /* 12ba09c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba09c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba09c8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12ba09cc push ecx */
  push32((uint32_t)(ECX));
  /* 12ba09cd call 0x12b96800 */
  push32(0x12ba09d2u); f_12b96800();
  /* 12ba09d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba09d5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba09d8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12ba09dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ba09df jmp 0x12ba099f */
  goto L_12ba099f;
L_12ba09e1:;
  /* 12ba09e1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12ba09e8 jmp 0x12ba09f3 */
  goto L_12ba09f3;
L_12ba09ea:;
  /* 12ba09ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba09ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba09f0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12ba09f3:;
  /* 12ba09f3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba09f7 jae 0x12ba0a2d */
  if (!C.cf) goto L_12ba0a2d;
  /* 12ba09f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba09fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba09ff mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12ba0a03 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0a04 call 0x12b96800 */
  push32(0x12ba0a09u); f_12b96800();
  /* 12ba0a09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0a0c mov esi, eax */
  ESI = (EAX);
  /* 12ba0a0e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0a11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0a14 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12ba0a18 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0a19 call 0x12b96800 */
  push32(0x12ba0a1eu); f_12b96800();
  /* 12ba0a1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0a21 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0a24 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12ba0a28 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ba0a2b jmp 0x12ba09ea */
  goto L_12ba09ea;
L_12ba0a2d:;
  /* 12ba0a2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0a30 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12ba0a36 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0a37 call 0x12b96800 */
  push32(0x12ba0a3cu); f_12b96800();
  /* 12ba0a3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0a3f mov esi, eax */
  ESI = (EAX);
  /* 12ba0a41 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0a44 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12ba0a4a push edx */
  push32((uint32_t)(EDX));
  /* 12ba0a4b call 0x12b96800 */
  push32(0x12ba0a50u); f_12b96800();
  /* 12ba0a50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0a53 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0a56 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12ba0a5a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ba0a5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0a60 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12ba0a66 push edx */
  push32((uint32_t)(EDX));
  /* 12ba0a67 call 0x12b96800 */
  push32(0x12ba0a6cu); f_12b96800();
  /* 12ba0a6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0a6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba0a72 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12ba0a76 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ba0a79 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0a7c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12ba0a82 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0a83 call 0x12b96800 */
  push32(0x12ba0a88u); f_12b96800();
  /* 12ba0a88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0a8b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba0a8e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12ba0a92 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ba0a95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0a98 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12ba0a9e push edx */
  push32((uint32_t)(EDX));
  /* 12ba0a9f call 0x12b96800 */
  push32(0x12ba0aa4u); f_12b96800();
  /* 12ba0aa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0aa7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba0aaa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12ba0aae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ba0ab1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba0ab4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0ab9 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0aba call 0x12b939b0 */
  push32(0x12ba0abfu); f_12b939b0();
  /* 12ba0abf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0ac2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ba0ac5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0ac9 je 0x12ba0ce6 */
  if (C.zf) goto L_12ba0ce6;
  /* 12ba0acf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba0ad2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12ba0ad5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba0ad8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0ade mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12ba0ae1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12ba0ae6 mov eax, dword ptr [0x12bbec98] */
  EAX = (r32((uint32_t)(0x12bbec98)));
  /* 12ba0aeb push eax */
  push32((uint32_t)(EAX));
  /* 12ba0aec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba0aef push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0af0 call 0x12b9a2b0 */
  push32(0x12ba0af5u); f_12b9a2b0();
  /* 12ba0af5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0af8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12ba0aff jmp 0x12ba0b0a */
  goto L_12ba0b0a;
L_12ba0b01:;
  /* 12ba0b01 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0b04 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0b07 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12ba0b0a:;
  /* 12ba0b0a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0b0e jae 0x12ba0b7e */
  if (!C.cf) goto L_12ba0b7e;
  /* 12ba0b10 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0b13 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba0b16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0b19 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12ba0b1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0b1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0b22 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12ba0b25 push edx */
  push32((uint32_t)(EDX));
  /* 12ba0b26 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0b29 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0b2a call 0x12b96980 */
  push32(0x12ba0b2fu); f_12b96980();
  /* 12ba0b2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0b32 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0b33 call 0x12b96800 */
  push32(0x12ba0b38u); f_12b96800();
  /* 12ba0b38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0b3b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0b3e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12ba0b42 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12ba0b45 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0b48 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba0b4b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0b4e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12ba0b52 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0b55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0b58 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12ba0b5c push edx */
  push32((uint32_t)(EDX));
  /* 12ba0b5d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0b60 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0b61 call 0x12b96980 */
  push32(0x12ba0b66u); f_12b96980();
  /* 12ba0b66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0b69 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0b6a call 0x12b96800 */
  push32(0x12ba0b6fu); f_12b96800();
  /* 12ba0b6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0b72 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0b75 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12ba0b79 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12ba0b7c jmp 0x12ba0b01 */
  goto L_12ba0b01;
L_12ba0b7e:;
  /* 12ba0b7e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12ba0b85 jmp 0x12ba0b90 */
  goto L_12ba0b90;
L_12ba0b87:;
  /* 12ba0b87 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0b8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0b8d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12ba0b90:;
  /* 12ba0b90 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0b94 jae 0x12ba0c06 */
  if (!C.cf) goto L_12ba0c06;
  /* 12ba0b96 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0b99 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba0b9c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0b9f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12ba0ba3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0ba6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0ba9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12ba0bad push eax */
  push32((uint32_t)(EAX));
  /* 12ba0bae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0bb1 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0bb2 call 0x12b96980 */
  push32(0x12ba0bb7u); f_12b96980();
  /* 12ba0bb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0bba push eax */
  push32((uint32_t)(EAX));
  /* 12ba0bbb call 0x12b96800 */
  push32(0x12ba0bc0u); f_12b96800();
  /* 12ba0bc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0bc3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0bc6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12ba0bca mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12ba0bcd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0bd0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba0bd3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0bd6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12ba0bda mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0bdd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0be0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12ba0be4 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0be5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0be8 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0be9 call 0x12b96980 */
  push32(0x12ba0beeu); f_12b96980();
  /* 12ba0bee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0bf1 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0bf2 call 0x12b96800 */
  push32(0x12ba0bf7u); f_12b96800();
  /* 12ba0bf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0bfa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0bfd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12ba0c01 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12ba0c04 jmp 0x12ba0b87 */
  goto L_12ba0b87;
L_12ba0c06:;
  /* 12ba0c06 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba0c09 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0c0c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12ba0c12 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0c15 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12ba0c1b push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0c1c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0c1f push edx */
  push32((uint32_t)(EDX));
  /* 12ba0c20 call 0x12b96980 */
  push32(0x12ba0c25u); f_12b96980();
  /* 12ba0c25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0c28 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0c29 call 0x12b96800 */
  push32(0x12ba0c2eu); f_12b96800();
  /* 12ba0c2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0c31 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0c34 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12ba0c38 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12ba0c3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba0c3e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0c41 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12ba0c47 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0c4a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12ba0c50 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0c51 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0c54 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0c55 call 0x12b96980 */
  push32(0x12ba0c5au); f_12b96980();
  /* 12ba0c5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0c5d push eax */
  push32((uint32_t)(EAX));
  /* 12ba0c5e call 0x12b96800 */
  push32(0x12ba0c63u); f_12b96800();
  /* 12ba0c63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0c66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0c69 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12ba0c6d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12ba0c70 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba0c73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0c76 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12ba0c7c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0c7f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12ba0c85 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0c86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0c89 push edx */
  push32((uint32_t)(EDX));
  /* 12ba0c8a call 0x12b96980 */
  push32(0x12ba0c8fu); f_12b96980();
  /* 12ba0c8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0c92 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0c93 call 0x12b96800 */
  push32(0x12ba0c98u); f_12b96800();
  /* 12ba0c98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0c9b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0c9e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12ba0ca2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12ba0ca5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba0ca8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0cab mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12ba0cb1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0cb4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12ba0cba push eax */
  push32((uint32_t)(EAX));
  /* 12ba0cbb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0cbe push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0cbf call 0x12b96980 */
  push32(0x12ba0cc4u); f_12b96980();
  /* 12ba0cc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0cc7 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0cc8 call 0x12b96800 */
  push32(0x12ba0ccdu); f_12b96800();
  /* 12ba0ccd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0cd0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0cd3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12ba0cd7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12ba0cda mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba0cdd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba0ce0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12ba0ce6:;
  /* 12ba0ce6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba0ce9 pop esi */
  ESI = (pop32());
  /* 12ba0cea mov esp, ebp */
  ESP = (EBP);
  /* 12ba0cec pop ebp */
  EBP = (pop32());
  /* 12ba0ced ret  */
  ESPCHK(0x12ba0980u, _esp0);
  ESP += 4; return;
}

/* FUN_10010cf0 @ 0x12ba0cf0 (31 bytes, 15 insns) */
void f_12ba0cf0(void) {
  FTRACE(0x12ba0cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba0cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba0cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12ba0cf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba0cf5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba0cf8 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0cf9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0cfc push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0cfd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba0d00 push edx */
  push32((uint32_t)(EDX));
  /* 12ba0d01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba0d04 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0d05 call 0x12ba0d10 */
  push32(0x12ba0d0au); f_12ba0d10();
  /* 12ba0d0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0d0d pop ebp */
  EBP = (pop32());
  /* 12ba0d0e ret  */
  ESPCHK(0x12ba0cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d10 @ 0x12ba0d10 (393 bytes, 123 insns) */
void f_12ba0d10(void) {
  FTRACE(0x12ba0d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba0d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba0d11 mov ebp, esp */
  EBP = (ESP);
  /* 12ba0d13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba0d16 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0d1a jne 0x12ba0d26 */
  if (!C.zf) goto L_12ba0d26;
  /* 12ba0d1c mov eax, dword ptr [0x12bbec98] */
  EAX = (r32((uint32_t)(0x12bbec98)));
  /* 12ba0d21 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12ba0d24 jmp 0x12ba0d2c */
  goto L_12ba0d2c;
L_12ba0d26:;
  /* 12ba0d26 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba0d29 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12ba0d2c:;
  /* 12ba0d2c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba0d2f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ba0d32 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba0d35 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ba0d38 push 0x12bbf814 */
  push32((uint32_t)(0x12bbf814u));
  /* 12ba0d3d call dword ptr [0x12bc1288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1288))), 0x12ba0d43u);
  /* 12ba0d43 cmp dword ptr [0x12bbf804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0d4a je 0x12ba0d6a */
  if (C.zf) goto L_12ba0d6a;
  /* 12ba0d4c push 0x12bbf814 */
  push32((uint32_t)(0x12bbf814u));
  /* 12ba0d51 call dword ptr [0x12bc1278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1278))), 0x12ba0d57u);
  /* 12ba0d57 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12ba0d59 call 0x12b973d0 */
  push32(0x12ba0d5eu); f_12b973d0();
  /* 12ba0d5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0d61 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12ba0d68 jmp 0x12ba0d71 */
  goto L_12ba0d71;
L_12ba0d6a:;
  /* 12ba0d6a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12ba0d71:;
  /* 12ba0d71 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0d75 jbe 0x12ba0e62 */
  if ((C.cf||C.zf)) goto L_12ba0e62;
  /* 12ba0d7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0d7e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ba0d80 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12ba0d83 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba0d87 je 0x12ba0d91 */
  if (C.zf) goto L_12ba0d91;
  /* 12ba0d89 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba0d8d je 0x12ba0d96 */
  if (C.zf) goto L_12ba0d96;
  /* 12ba0d8f jmp 0x12ba0df0 */
  goto L_12ba0df0;
L_12ba0d91:;
  /* 12ba0d91 jmp 0x12ba0e62 */
  goto L_12ba0e62;
L_12ba0d96:;
  /* 12ba0d96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0d99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0d9c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12ba0d9f mov dword ptr [0x12bbf7f0], 0 */
  w32((uint32_t)(0x12bbf7f0), (0x0u));
  /* 12ba0da9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0dac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ba0daf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0db2 jne 0x12ba0dc7 */
  if (!C.zf) goto L_12ba0dc7;
  /* 12ba0db4 mov dword ptr [0x12bbf7f0], 1 */
  w32((uint32_t)(0x12bbf7f0), (0x1u));
  /* 12ba0dbe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0dc1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0dc4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12ba0dc7:;
  /* 12ba0dc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba0dca push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0dcb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12ba0dce push edx */
  push32((uint32_t)(EDX));
  /* 12ba0dcf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12ba0dd2 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0dd3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba0dd6 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0dd7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0dda mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ba0ddc push eax */
  push32((uint32_t)(EAX));
  /* 12ba0ddd call 0x12ba0ea0 */
  push32(0x12ba0de2u); f_12ba0ea0();
  /* 12ba0de2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0de5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0de8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0deb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12ba0dee jmp 0x12ba0e5d */
  goto L_12ba0e5d;
L_12ba0df0:;
  /* 12ba0df0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0df3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba0df5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ba0df7 mov ecx, dword ptr [0x12bbdc98] */
  ECX = (r32((uint32_t)(0x12bbdc98)));
  /* 12ba0dfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba0dff mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12ba0e03 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12ba0e09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba0e0b je 0x12ba0e38 */
  if (C.zf) goto L_12ba0e38;
  /* 12ba0e0d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0e11 jbe 0x12ba0e38 */
  if ((C.cf||C.zf)) goto L_12ba0e38;
  /* 12ba0e13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba0e16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0e19 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ba0e1b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12ba0e1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba0e20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0e23 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ba0e26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0e29 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0e2c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12ba0e2f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0e32 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba0e35 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12ba0e38:;
  /* 12ba0e38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba0e3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0e3e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ba0e40 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12ba0e42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba0e45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0e48 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ba0e4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0e4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0e51 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12ba0e54 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0e57 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba0e5a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12ba0e5d:;
  /* 12ba0e5d jmp 0x12ba0d71 */
  goto L_12ba0d71;
L_12ba0e62:;
  /* 12ba0e62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0e66 je 0x12ba0e74 */
  if (C.zf) goto L_12ba0e74;
  /* 12ba0e68 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12ba0e6a call 0x12b97470 */
  push32(0x12ba0e6fu); f_12b97470();
  /* 12ba0e6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0e72 jmp 0x12ba0e7f */
  goto L_12ba0e7f;
L_12ba0e74:;
  /* 12ba0e74 push 0x12bbf814 */
  push32((uint32_t)(0x12bbf814u));
  /* 12ba0e79 call dword ptr [0x12bc1278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1278))), 0x12ba0e7fu);
L_12ba0e7f:;
  /* 12ba0e7f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0e83 jbe 0x12ba0e93 */
  if ((C.cf||C.zf)) goto L_12ba0e93;
  /* 12ba0e85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba0e88 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12ba0e8b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba0e8e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba0e91 jmp 0x12ba0e95 */
  goto L_12ba0e95;
L_12ba0e93:;
  /* 12ba0e93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ba0e95:;
  /* 12ba0e95 mov esp, ebp */
  ESP = (EBP);
  /* 12ba0e97 pop ebp */
  EBP = (pop32());
  /* 12ba0e98 ret  */
  ESPCHK(0x12ba0d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ea0 @ 0x12ba0ea0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12ba0ea0(void) {
  FTRACE(0x12ba0ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba0ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba0ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12ba0ea3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba0ea6 push esi */
  push32((uint32_t)(ESI));
  /* 12ba0ea7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12ba0eab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ba0eae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0eb1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba0eb4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ba0eb7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0ebb ja 0x12ba1408 */
  if ((!C.cf&&!C.zf)) goto L_12ba1408;
  /* 12ba0ec1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0ec4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba0ec6 mov dl, byte ptr [eax + 0x12ba1469] */
  DL = (r8((uint32_t)(EAX + 0x12ba1469)));
  /* 12ba0ecc jmp dword ptr [edx*4 + 0x12ba140d] */
  switch (EDX) {
    case 0: goto L_12ba13e6;
    case 1: goto L_12ba0ef5;
    case 2: goto L_12ba0f3b;
    case 3: goto L_12ba1088;
    case 4: goto L_12ba10b0;
    case 5: goto L_12ba114f;
    case 6: goto L_12ba11bb;
    case 7: goto L_12ba11e4;
    case 8: goto L_12ba1225;
    case 9: goto L_12ba1307;
    case 10: goto L_12ba136e;
    case 11: goto L_12ba13bb;
    case 12: goto L_12ba0ed3;
    case 13: goto L_12ba0f18;
    case 14: goto L_12ba0f5e;
    case 15: goto L_12ba105e;
    case 16: goto L_12ba10f5;
    case 17: goto L_12ba1122;
    case 18: goto L_12ba1177;
    case 19: goto L_12ba11fb;
    case 20: goto L_12ba12a9;
    case 21: goto L_12ba1338;
    case 22: goto L_12ba1408;
    default: x86_unimpl("switch@0x12ba0ecc out of table"); return;
  }
L_12ba0ed3:;
  /* 12ba0ed3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba0ed6 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0ed7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0eda push edx */
  push32((uint32_t)(EDX));
  /* 12ba0edb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba0ede mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12ba0ee1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba0ee4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12ba0ee7 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0ee8 call 0x12ba14c0 */
  push32(0x12ba0eedu); f_12ba14c0();
  /* 12ba0eed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0ef0 jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba0ef5:;
  /* 12ba0ef5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba0ef8 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0ef9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0efc push edx */
  push32((uint32_t)(EDX));
  /* 12ba0efd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba0f00 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12ba0f03 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba0f06 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12ba0f0a push eax */
  push32((uint32_t)(EAX));
  /* 12ba0f0b call 0x12ba14c0 */
  push32(0x12ba0f10u); f_12ba14c0();
  /* 12ba0f10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0f13 jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba0f18:;
  /* 12ba0f18 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba0f1b push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0f1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0f1f push edx */
  push32((uint32_t)(EDX));
  /* 12ba0f20 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba0f23 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ba0f26 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba0f29 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12ba0f2d push eax */
  push32((uint32_t)(EAX));
  /* 12ba0f2e call 0x12ba14c0 */
  push32(0x12ba0f33u); f_12ba14c0();
  /* 12ba0f33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0f36 jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba0f3b:;
  /* 12ba0f3b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba0f3e push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0f3f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0f42 push edx */
  push32((uint32_t)(EDX));
  /* 12ba0f43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba0f46 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ba0f49 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba0f4c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12ba0f50 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0f51 call 0x12ba14c0 */
  push32(0x12ba0f56u); f_12ba14c0();
  /* 12ba0f56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0f59 jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba0f5e:;
  /* 12ba0f5e cmp dword ptr [0x12bbf7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0f65 je 0x12ba0fe6 */
  if (C.zf) goto L_12ba0fe6;
  /* 12ba0f67 mov dword ptr [0x12bbf7f0], 0 */
  w32((uint32_t)(0x12bbf7f0), (0x0u));
  /* 12ba0f71 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba0f74 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0f75 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba0f78 push edx */
  push32((uint32_t)(EDX));
  /* 12ba0f79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0f7c push eax */
  push32((uint32_t)(EAX));
  /* 12ba0f7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba0f80 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0f81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba0f84 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12ba0f8a push eax */
  push32((uint32_t)(EAX));
  /* 12ba0f8b call 0x12ba1670 */
  push32(0x12ba0f90u); f_12ba1670();
  /* 12ba0f90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0f93 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba0f96 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0f99 jne 0x12ba0fa0 */
  if (!C.zf) goto L_12ba0fa0;
  /* 12ba0f9b jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba0fa0:;
  /* 12ba0fa0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0fa3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ba0fa5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12ba0fa8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0fab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba0fad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0fb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0fb3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ba0fb5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba0fb8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba0fba sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba0fbd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba0fc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ba0fc2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba0fc5 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0fc6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba0fc9 push edx */
  push32((uint32_t)(EDX));
  /* 12ba0fca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0fcd push eax */
  push32((uint32_t)(EAX));
  /* 12ba0fce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba0fd1 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0fd2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba0fd5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12ba0fdb push eax */
  push32((uint32_t)(EAX));
  /* 12ba0fdc call 0x12ba1670 */
  push32(0x12ba0fe1u); f_12ba1670();
  /* 12ba0fe1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0fe4 jmp 0x12ba1059 */
  goto L_12ba1059;
L_12ba0fe6:;
  /* 12ba0fe6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba0fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0fea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba0fed push edx */
  push32((uint32_t)(EDX));
  /* 12ba0fee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0ff1 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0ff2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba0ff5 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0ff6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba0ff9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12ba0fff push eax */
  push32((uint32_t)(EAX));
  /* 12ba1000 call 0x12ba1670 */
  push32(0x12ba1005u); f_12ba1670();
  /* 12ba1005 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1008 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba100b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba100e jne 0x12ba1015 */
  if (!C.zf) goto L_12ba1015;
  /* 12ba1010 jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba1015:;
  /* 12ba1015 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1018 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ba101a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12ba101d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1020 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba1022 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1025 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1028 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ba102a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba102d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba102f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba1032 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1035 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ba1037 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba103a push ecx */
  push32((uint32_t)(ECX));
  /* 12ba103b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba103e push edx */
  push32((uint32_t)(EDX));
  /* 12ba103f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1042 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1043 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1046 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1047 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba104a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12ba1050 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1051 call 0x12ba1670 */
  push32(0x12ba1056u); f_12ba1670();
  /* 12ba1056 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ba1059:;
  /* 12ba1059 jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba105e:;
  /* 12ba105e mov ecx, dword ptr [0x12bbf7f0] */
  ECX = (r32((uint32_t)(0x12bbf7f0)));
  /* 12ba1064 mov dword ptr [0x12bbf800], ecx */
  w32((uint32_t)(0x12bbf800), (ECX));
  /* 12ba106a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba106d push edx */
  push32((uint32_t)(EDX));
  /* 12ba106e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1071 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1072 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba1074 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1077 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12ba107a push edx */
  push32((uint32_t)(EDX));
  /* 12ba107b call 0x12ba1510 */
  push32(0x12ba1080u); f_12ba1510();
  /* 12ba1080 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1083 jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba1088:;
  /* 12ba1088 mov eax, dword ptr [0x12bbf7f0] */
  EAX = (r32((uint32_t)(0x12bbf7f0)));
  /* 12ba108d mov dword ptr [0x12bbf800], eax */
  w32((uint32_t)(0x12bbf800), (EAX));
  /* 12ba1092 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1095 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1096 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1099 push edx */
  push32((uint32_t)(EDX));
  /* 12ba109a push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba109c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba109f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12ba10a2 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba10a3 call 0x12ba1510 */
  push32(0x12ba10a8u); f_12ba1510();
  /* 12ba10a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba10ab jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba10b0:;
  /* 12ba10b0 mov edx, dword ptr [0x12bbf7f0] */
  EDX = (r32((uint32_t)(0x12bbf7f0)));
  /* 12ba10b6 mov dword ptr [0x12bbf800], edx */
  w32((uint32_t)(0x12bbf800), (EDX));
  /* 12ba10bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba10bf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12ba10c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ba10c3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12ba10c8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ba10ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ba10cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba10d1 jne 0x12ba10da */
  if (!C.zf) goto L_12ba10da;
  /* 12ba10d3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12ba10da:;
  /* 12ba10da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba10dd push edx */
  push32((uint32_t)(EDX));
  /* 12ba10de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba10e1 push eax */
  push32((uint32_t)(EAX));
  /* 12ba10e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba10e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba10e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba10e8 call 0x12ba1510 */
  push32(0x12ba10edu); f_12ba1510();
  /* 12ba10ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba10f0 jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba10f5:;
  /* 12ba10f5 mov edx, dword ptr [0x12bbf7f0] */
  EDX = (r32((uint32_t)(0x12bbf7f0)));
  /* 12ba10fb mov dword ptr [0x12bbf800], edx */
  w32((uint32_t)(0x12bbf800), (EDX));
  /* 12ba1101 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1104 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1105 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1108 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1109 push 3 */
  push32((uint32_t)(0x3u));
  /* 12ba110b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba110e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12ba1111 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1114 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1115 call 0x12ba1510 */
  push32(0x12ba111au); f_12ba1510();
  /* 12ba111a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba111d jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba1122:;
  /* 12ba1122 mov ecx, dword ptr [0x12bbf7f0] */
  ECX = (r32((uint32_t)(0x12bbf7f0)));
  /* 12ba1128 mov dword ptr [0x12bbf800], ecx */
  w32((uint32_t)(0x12bbf800), (ECX));
  /* 12ba112e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1131 push edx */
  push32((uint32_t)(EDX));
  /* 12ba1132 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1135 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1136 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba1138 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba113b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12ba113e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1141 push edx */
  push32((uint32_t)(EDX));
  /* 12ba1142 call 0x12ba1510 */
  push32(0x12ba1147u); f_12ba1510();
  /* 12ba1147 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba114a jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba114f:;
  /* 12ba114f mov eax, dword ptr [0x12bbf7f0] */
  EAX = (r32((uint32_t)(0x12bbf7f0)));
  /* 12ba1154 mov dword ptr [0x12bbf800], eax */
  w32((uint32_t)(0x12bbf800), (EAX));
  /* 12ba1159 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba115c push ecx */
  push32((uint32_t)(ECX));
  /* 12ba115d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1160 push edx */
  push32((uint32_t)(EDX));
  /* 12ba1161 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba1163 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1166 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ba1169 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba116a call 0x12ba1510 */
  push32(0x12ba116fu); f_12ba1510();
  /* 12ba116f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1172 jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba1177:;
  /* 12ba1177 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba117a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba117e jg 0x12ba119c */
  if ((!C.zf&&C.sf==C.of)) goto L_12ba119c;
  /* 12ba1180 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1183 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1184 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1187 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1188 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba118b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12ba1191 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1192 call 0x12ba14c0 */
  push32(0x12ba1197u); f_12ba14c0();
  /* 12ba1197 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba119a jmp 0x12ba11b6 */
  goto L_12ba11b6;
L_12ba119c:;
  /* 12ba119c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba119f push ecx */
  push32((uint32_t)(ECX));
  /* 12ba11a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba11a3 push edx */
  push32((uint32_t)(EDX));
  /* 12ba11a4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba11a7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12ba11ad push ecx */
  push32((uint32_t)(ECX));
  /* 12ba11ae call 0x12ba14c0 */
  push32(0x12ba11b3u); f_12ba14c0();
  /* 12ba11b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ba11b6:;
  /* 12ba11b6 jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba11bb:;
  /* 12ba11bb mov edx, dword ptr [0x12bbf7f0] */
  EDX = (r32((uint32_t)(0x12bbf7f0)));
  /* 12ba11c1 mov dword ptr [0x12bbf800], edx */
  w32((uint32_t)(0x12bbf800), (EDX));
  /* 12ba11c7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba11ca push eax */
  push32((uint32_t)(EAX));
  /* 12ba11cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba11ce push ecx */
  push32((uint32_t)(ECX));
  /* 12ba11cf push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba11d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba11d4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ba11d6 push eax */
  push32((uint32_t)(EAX));
  /* 12ba11d7 call 0x12ba1510 */
  push32(0x12ba11dcu); f_12ba1510();
  /* 12ba11dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba11df jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba11e4:;
  /* 12ba11e4 mov ecx, dword ptr [0x12bbf7f0] */
  ECX = (r32((uint32_t)(0x12bbf7f0)));
  /* 12ba11ea mov dword ptr [0x12bbf800], ecx */
  w32((uint32_t)(0x12bbf800), (ECX));
  /* 12ba11f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba11f3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12ba11f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ba11f9 jmp 0x12ba124d */
  goto L_12ba124d;
L_12ba11fb:;
  /* 12ba11fb mov ecx, dword ptr [0x12bbf7f0] */
  ECX = (r32((uint32_t)(0x12bbf7f0)));
  /* 12ba1201 mov dword ptr [0x12bbf800], ecx */
  w32((uint32_t)(0x12bbf800), (ECX));
  /* 12ba1207 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba120a push edx */
  push32((uint32_t)(EDX));
  /* 12ba120b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba120e push eax */
  push32((uint32_t)(EAX));
  /* 12ba120f push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba1211 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1214 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12ba1217 push edx */
  push32((uint32_t)(EDX));
  /* 12ba1218 call 0x12ba1510 */
  push32(0x12ba121du); f_12ba1510();
  /* 12ba121d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1220 jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba1225:;
  /* 12ba1225 mov eax, dword ptr [0x12bbf7f0] */
  EAX = (r32((uint32_t)(0x12bbf7f0)));
  /* 12ba122a mov dword ptr [0x12bbf800], eax */
  w32((uint32_t)(0x12bbf800), (EAX));
  /* 12ba122f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1232 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1236 jne 0x12ba1241 */
  if (!C.zf) goto L_12ba1241;
  /* 12ba1238 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12ba123f jmp 0x12ba124d */
  goto L_12ba124d;
L_12ba1241:;
  /* 12ba1241 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1244 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12ba1247 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba124a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12ba124d:;
  /* 12ba124d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1250 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12ba1253 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1256 jge 0x12ba1261 */
  if ((C.sf==C.of)) goto L_12ba1261;
  /* 12ba1258 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ba125f jmp 0x12ba128e */
  goto L_12ba128e;
L_12ba1261:;
  /* 12ba1261 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1264 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12ba1267 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ba1268 mov ecx, 7 */
  ECX = (0x7u);
  /* 12ba126d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ba126f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ba1272 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1275 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12ba1278 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ba1279 mov ecx, 7 */
  ECX = (0x7u);
  /* 12ba127e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ba1280 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1283 jl 0x12ba128e */
  if ((C.sf!=C.of)) goto L_12ba128e;
  /* 12ba1285 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba1288 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba128b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12ba128e:;
  /* 12ba128e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1291 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1292 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1295 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1296 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba1298 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba129b push edx */
  push32((uint32_t)(EDX));
  /* 12ba129c call 0x12ba1510 */
  push32(0x12ba12a1u); f_12ba1510();
  /* 12ba12a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba12a4 jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba12a9:;
  /* 12ba12a9 cmp dword ptr [0x12bbf7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba12b0 je 0x12ba12e0 */
  if (C.zf) goto L_12ba12e0;
  /* 12ba12b2 mov dword ptr [0x12bbf7f0], 0 */
  w32((uint32_t)(0x12bbf7f0), (0x0u));
  /* 12ba12bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba12bf push eax */
  push32((uint32_t)(EAX));
  /* 12ba12c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba12c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba12c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba12c7 push edx */
  push32((uint32_t)(EDX));
  /* 12ba12c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba12cb push eax */
  push32((uint32_t)(EAX));
  /* 12ba12cc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba12cf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12ba12d5 push edx */
  push32((uint32_t)(EDX));
  /* 12ba12d6 call 0x12ba1670 */
  push32(0x12ba12dbu); f_12ba1670();
  /* 12ba12db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba12de jmp 0x12ba1302 */
  goto L_12ba1302;
L_12ba12e0:;
  /* 12ba12e0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba12e3 push eax */
  push32((uint32_t)(EAX));
  /* 12ba12e4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba12e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba12e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba12eb push edx */
  push32((uint32_t)(EDX));
  /* 12ba12ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba12ef push eax */
  push32((uint32_t)(EAX));
  /* 12ba12f0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba12f3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12ba12f9 push edx */
  push32((uint32_t)(EDX));
  /* 12ba12fa call 0x12ba1670 */
  push32(0x12ba12ffu); f_12ba1670();
  /* 12ba12ff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ba1302:;
  /* 12ba1302 jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba1307:;
  /* 12ba1307 mov dword ptr [0x12bbf7f0], 0 */
  w32((uint32_t)(0x12bbf7f0), (0x0u));
  /* 12ba1311 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba1314 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1315 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1318 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1319 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba131c push edx */
  push32((uint32_t)(EDX));
  /* 12ba131d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1320 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1321 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba1324 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12ba132a push edx */
  push32((uint32_t)(EDX));
  /* 12ba132b call 0x12ba1670 */
  push32(0x12ba1330u); f_12ba1670();
  /* 12ba1330 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1333 jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba1338:;
  /* 12ba1338 mov eax, dword ptr [0x12bbf7f0] */
  EAX = (r32((uint32_t)(0x12bbf7f0)));
  /* 12ba133d mov dword ptr [0x12bbf800], eax */
  w32((uint32_t)(0x12bbf800), (EAX));
  /* 12ba1342 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1345 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12ba1348 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ba1349 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12ba134e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ba1350 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ba1353 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1356 push edx */
  push32((uint32_t)(EDX));
  /* 12ba1357 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba135a push eax */
  push32((uint32_t)(EAX));
  /* 12ba135b push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba135d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba1360 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1361 call 0x12ba1510 */
  push32(0x12ba1366u); f_12ba1510();
  /* 12ba1366 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1369 jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba136e:;
  /* 12ba136e mov edx, dword ptr [0x12bbf7f0] */
  EDX = (r32((uint32_t)(0x12bbf7f0)));
  /* 12ba1374 mov dword ptr [0x12bbf800], edx */
  w32((uint32_t)(0x12bbf800), (EDX));
  /* 12ba137a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba137d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12ba1380 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ba1381 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12ba1386 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ba1388 mov ecx, eax */
  ECX = (EAX);
  /* 12ba138a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba138d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba1390 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1393 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ba1396 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ba1397 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12ba139c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ba139e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba13a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ba13a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba13a6 push eax */
  push32((uint32_t)(EAX));
  /* 12ba13a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba13aa push ecx */
  push32((uint32_t)(ECX));
  /* 12ba13ab push 4 */
  push32((uint32_t)(0x4u));
  /* 12ba13ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba13b0 push edx */
  push32((uint32_t)(EDX));
  /* 12ba13b1 call 0x12ba1510 */
  push32(0x12ba13b6u); f_12ba1510();
  /* 12ba13b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba13b9 jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba13bb:;
  /* 12ba13bb call 0x12ba24d0 */
  push32(0x12ba13c0u); f_12ba24d0();
  /* 12ba13c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba13c3 push eax */
  push32((uint32_t)(EAX));
  /* 12ba13c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba13c7 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba13c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba13cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba13cd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba13d1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12ba13d4 mov ecx, dword ptr [eax*4 + 0x12bbee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12bbee1c)));
  /* 12ba13db push ecx */
  push32((uint32_t)(ECX));
  /* 12ba13dc call 0x12ba14c0 */
  push32(0x12ba13e1u); f_12ba14c0();
  /* 12ba13e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba13e4 jmp 0x12ba1408 */
  goto L_12ba1408;
L_12ba13e6:;
  /* 12ba13e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba13e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ba13eb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12ba13ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba13f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba13f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba13f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba13f9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ba13fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba13fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba1400 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba1403 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1406 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12ba1408:;
  /* 12ba1408 pop esi */
  ESI = (pop32());
  /* 12ba1409 mov esp, ebp */
  ESP = (EBP);
  /* 12ba140b pop ebp */
  EBP = (pop32());
  /* 12ba140c ret  */
  ESPCHK(0x12ba0ea0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12ba14c0 (72 bytes, 30 insns) */
void f_12ba14c0(void) {
  FTRACE(0x12ba14c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba14c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba14c1 mov ebp, esp */
  EBP = (ESP);
L_12ba14c3:;
  /* 12ba14c3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba14c6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba14c9 je 0x12ba1506 */
  if (C.zf) goto L_12ba1506;
  /* 12ba14cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba14ce movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ba14d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba14d3 je 0x12ba1506 */
  if (C.zf) goto L_12ba1506;
  /* 12ba14d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba14d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ba14da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba14dd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ba14df mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12ba14e1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba14e4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba14e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba14e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba14ec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ba14ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba14f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba14f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12ba14f7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba14fa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ba14fc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba14ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1502 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ba1504 jmp 0x12ba14c3 */
  goto L_12ba14c3;
L_12ba1506:;
  /* 12ba1506 pop ebp */
  EBP = (pop32());
  /* 12ba1507 ret  */
  ESPCHK(0x12ba14c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011510 @ 0x12ba1510 (173 bytes, 64 insns) */
void f_12ba1510(void) {
  FTRACE(0x12ba1510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba1510 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba1511 mov ebp, esp */
  EBP = (ESP);
  /* 12ba1513 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1514 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ba151b cmp dword ptr [0x12bbf800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1522 je 0x12ba153a */
  if (C.zf) goto L_12ba153a;
  /* 12ba1524 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1527 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1528 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba152b push ecx */
  push32((uint32_t)(ECX));
  /* 12ba152c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba152f push edx */
  push32((uint32_t)(EDX));
  /* 12ba1530 call 0x12ba15c0 */
  push32(0x12ba1535u); f_12ba15c0();
  /* 12ba1535 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1538 jmp 0x12ba15b9 */
  goto L_12ba15b9;
L_12ba153a:;
  /* 12ba153a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba153d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1540 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1542 jae 0x12ba15b0 */
  if (!C.cf) goto L_12ba15b0;
  /* 12ba1544 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1547 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba154a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12ba154d jmp 0x12ba1558 */
  goto L_12ba1558;
L_12ba154f:;
  /* 12ba154f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1552 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba1555 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12ba1558:;
  /* 12ba1558 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba155b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba155e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ba1560 je 0x12ba1594 */
  if (C.zf) goto L_12ba1594;
  /* 12ba1562 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba1565 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ba1566 mov ecx, 0xa */
  ECX = (0xau);
  /* 12ba156b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ba156d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1570 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1573 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ba1575 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1578 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12ba157b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba157e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ba157f mov ecx, 0xa */
  ECX = (0xau);
  /* 12ba1584 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ba1586 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ba1589 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba158c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba158f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ba1592 jmp 0x12ba154f */
  goto L_12ba154f;
L_12ba1594:;
  /* 12ba1594 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1597 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ba1599 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba159c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba159f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12ba15a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba15a4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ba15a6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba15a9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba15ac mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12ba15ae jmp 0x12ba15b9 */
  goto L_12ba15b9;
L_12ba15b0:;
  /* 12ba15b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba15b3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12ba15b9:;
  /* 12ba15b9 mov esp, ebp */
  ESP = (EBP);
  /* 12ba15bb pop ebp */
  EBP = (pop32());
  /* 12ba15bc ret  */
  ESPCHK(0x12ba1510u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12ba15c0 (172 bytes, 65 insns) */
void f_12ba15c0(void) {
  FTRACE(0x12ba15c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba15c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba15c1 mov ebp, esp */
  EBP = (ESP);
  /* 12ba15c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba15c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba15c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ba15cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ba15ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba15d1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba15d4 jbe 0x12ba161b */
  if ((C.cf||C.zf)) goto L_12ba161b;
L_12ba15d6:;
  /* 12ba15d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba15d9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ba15da mov ecx, 0xa */
  ECX = (0xau);
  /* 12ba15df idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ba15e1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba15e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba15e7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12ba15e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba15ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba15ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ba15f2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba15f5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ba15f7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba15fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba15fd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ba15ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba1602 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ba1603 mov ecx, 0xa */
  ECX = (0xau);
  /* 12ba1608 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ba160a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ba160d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1611 jle 0x12ba161b */
  if ((C.zf||C.sf!=C.of)) goto L_12ba161b;
  /* 12ba1613 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1616 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1619 ja 0x12ba15d6 */
  if ((!C.cf&&!C.zf)) goto L_12ba15d6;
L_12ba161b:;
  /* 12ba161b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba161e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ba1620 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ba1623 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1626 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba1629 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12ba162b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba162e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba1631 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ba1634:;
  /* 12ba1634 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba1637 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ba1639 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12ba163c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba163f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba1642 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ba1644 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12ba1646 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba1649 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba164c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ba164f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba1652 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12ba1655 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12ba1657 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba165a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba165d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ba1660 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba1663 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1666 jb 0x12ba1634 */
  if (C.cf) goto L_12ba1634;
  /* 12ba1668 mov esp, ebp */
  ESP = (EBP);
  /* 12ba166a pop ebp */
  EBP = (pop32());
  /* 12ba166b ret  */
  ESPCHK(0x12ba15c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011670 @ 0x12ba1670 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12ba1670(void) {
  FTRACE(0x12ba1670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba1670 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba1671 mov ebp, esp */
  EBP = (ESP);
  /* 12ba1673 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12ba1676:;
  /* 12ba1676 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba1679 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ba167c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ba167e je 0x12ba1aec */
  if (C.zf) goto L_12ba1aec;
  /* 12ba1684 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1687 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba168a je 0x12ba1aec */
  if (C.zf) goto L_12ba1aec;
  /* 12ba1690 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12ba1694 mov dword ptr [0x12bbf800], 0 */
  w32((uint32_t)(0x12bbf800), (0x0u));
  /* 12ba169e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12ba16a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba16a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ba16ab jmp 0x12ba16b6 */
  goto L_12ba16b6;
L_12ba16ad:;
  /* 12ba16ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba16b0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba16b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12ba16b6:;
  /* 12ba16b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba16b9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ba16bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba16bf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ba16c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba16c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba16c8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ba16cb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba16cd jne 0x12ba16d1 */
  if (!C.zf) goto L_12ba16d1;
  /* 12ba16cf jmp 0x12ba16ad */
  goto L_12ba16ad;
L_12ba16d1:;
  /* 12ba16d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba16d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba16d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ba16da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba16dd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ba16e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12ba16e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba16e6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba16e9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12ba16ec cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba16f0 ja 0x12ba1a40 */
  if ((!C.cf&&!C.zf)) goto L_12ba1a40;
  /* 12ba16f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba16f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba16fb mov al, byte ptr [ecx + 0x12ba1b1c] */
  AL = (r8((uint32_t)(ECX + 0x12ba1b1c)));
  /* 12ba1701 jmp dword ptr [eax*4 + 0x12ba1af0] */
  switch (EAX) {
    case 0: goto L_12ba195f;
    case 1: goto L_12ba1843;
    case 2: goto L_12ba17ce;
    case 3: goto L_12ba1708;
    case 4: goto L_12ba1746;
    case 5: goto L_12ba17a7;
    case 6: goto L_12ba17f5;
    case 7: goto L_12ba181c;
    case 8: goto L_12ba188a;
    case 9: goto L_12ba1784;
    case 10: goto L_12ba1a40;
    default: x86_unimpl("switch@0x12ba1701 out of table"); return;
  }
L_12ba1708:;
  /* 12ba1708 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba170b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12ba170e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba1711 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba1714 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12ba1717 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba171b ja 0x12ba1741 */
  if ((!C.cf&&!C.zf)) goto L_12ba1741;
  /* 12ba171d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba1720 jmp dword ptr [ecx*4 + 0x12ba1b6f] */
  switch (ECX) {
    case 0: goto L_12ba1727;
    case 1: goto L_12ba1731;
    case 2: goto L_12ba1737;
    case 3: goto L_12ba173d;
    case 4: goto L_12ba1765;
    case 5: goto L_12ba176f;
    case 6: goto L_12ba1775;
    case 7: goto L_12ba177b;
    default: x86_unimpl("switch@0x12ba1720 out of table"); return;
  }
L_12ba1727:;
  /* 12ba1727 mov dword ptr [0x12bbf800], 1 */
  w32((uint32_t)(0x12bbf800), (0x1u));
L_12ba1731:;
  /* 12ba1731 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12ba1735 jmp 0x12ba1741 */
  goto L_12ba1741;
L_12ba1737:;
  /* 12ba1737 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12ba173b jmp 0x12ba1741 */
  goto L_12ba1741;
L_12ba173d:;
  /* 12ba173d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12ba1741:;
  /* 12ba1741 jmp 0x12ba1a40 */
  goto L_12ba1a40;
L_12ba1746:;
  /* 12ba1746 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba1749 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12ba174c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ba174f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba1752 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12ba1755 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1759 ja 0x12ba177f */
  if ((!C.cf&&!C.zf)) goto L_12ba177f;
  /* 12ba175b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ba175e jmp dword ptr [ecx*4 + 0x12ba1b7f] */
  switch (ECX) {
    case 0: goto L_12ba1765;
    case 1: goto L_12ba176f;
    case 2: goto L_12ba1775;
    case 3: goto L_12ba177b;
    default: x86_unimpl("switch@0x12ba175e out of table"); return;
  }
L_12ba1765:;
  /* 12ba1765 mov dword ptr [0x12bbf800], 1 */
  w32((uint32_t)(0x12bbf800), (0x1u));
L_12ba176f:;
  /* 12ba176f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12ba1773 jmp 0x12ba177f */
  goto L_12ba177f;
L_12ba1775:;
  /* 12ba1775 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12ba1779 jmp 0x12ba177f */
  goto L_12ba177f;
L_12ba177b:;
  /* 12ba177b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12ba177f:;
  /* 12ba177f jmp 0x12ba1a40 */
  goto L_12ba1a40;
L_12ba1784:;
  /* 12ba1784 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba1787 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12ba178a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba178e je 0x12ba1798 */
  if (C.zf) goto L_12ba1798;
  /* 12ba1790 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1794 je 0x12ba179e */
  if (C.zf) goto L_12ba179e;
  /* 12ba1796 jmp 0x12ba17a2 */
  goto L_12ba17a2;
L_12ba1798:;
  /* 12ba1798 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12ba179c jmp 0x12ba17a2 */
  goto L_12ba17a2;
L_12ba179e:;
  /* 12ba179e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12ba17a2:;
  /* 12ba17a2 jmp 0x12ba1a40 */
  goto L_12ba1a40;
L_12ba17a7:;
  /* 12ba17a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba17aa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12ba17ad cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba17b1 je 0x12ba17bb */
  if (C.zf) goto L_12ba17bb;
  /* 12ba17b3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba17b7 je 0x12ba17c5 */
  if (C.zf) goto L_12ba17c5;
  /* 12ba17b9 jmp 0x12ba17c9 */
  goto L_12ba17c9;
L_12ba17bb:;
  /* 12ba17bb mov dword ptr [0x12bbf800], 1 */
  w32((uint32_t)(0x12bbf800), (0x1u));
L_12ba17c5:;
  /* 12ba17c5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12ba17c9:;
  /* 12ba17c9 jmp 0x12ba1a40 */
  goto L_12ba1a40;
L_12ba17ce:;
  /* 12ba17ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba17d1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12ba17d4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba17d8 je 0x12ba17e2 */
  if (C.zf) goto L_12ba17e2;
  /* 12ba17da cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba17de je 0x12ba17ec */
  if (C.zf) goto L_12ba17ec;
  /* 12ba17e0 jmp 0x12ba17f0 */
  goto L_12ba17f0;
L_12ba17e2:;
  /* 12ba17e2 mov dword ptr [0x12bbf800], 1 */
  w32((uint32_t)(0x12bbf800), (0x1u));
L_12ba17ec:;
  /* 12ba17ec mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12ba17f0:;
  /* 12ba17f0 jmp 0x12ba1a40 */
  goto L_12ba1a40;
L_12ba17f5:;
  /* 12ba17f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba17f8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12ba17fb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba17ff je 0x12ba1809 */
  if (C.zf) goto L_12ba1809;
  /* 12ba1801 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1805 je 0x12ba1813 */
  if (C.zf) goto L_12ba1813;
  /* 12ba1807 jmp 0x12ba1817 */
  goto L_12ba1817;
L_12ba1809:;
  /* 12ba1809 mov dword ptr [0x12bbf800], 1 */
  w32((uint32_t)(0x12bbf800), (0x1u));
L_12ba1813:;
  /* 12ba1813 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12ba1817:;
  /* 12ba1817 jmp 0x12ba1a40 */
  goto L_12ba1a40;
L_12ba181c:;
  /* 12ba181c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba181f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12ba1822 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1826 je 0x12ba1830 */
  if (C.zf) goto L_12ba1830;
  /* 12ba1828 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba182c je 0x12ba183a */
  if (C.zf) goto L_12ba183a;
  /* 12ba182e jmp 0x12ba183e */
  goto L_12ba183e;
L_12ba1830:;
  /* 12ba1830 mov dword ptr [0x12bbf800], 1 */
  w32((uint32_t)(0x12bbf800), (0x1u));
L_12ba183a:;
  /* 12ba183a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12ba183e:;
  /* 12ba183e jmp 0x12ba1a40 */
  goto L_12ba1a40;
L_12ba1843:;
  /* 12ba1843 push 0x12bbc014 */
  push32((uint32_t)(0x12bbc014u));
  /* 12ba1848 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba184b push ecx */
  push32((uint32_t)(ECX));
  /* 12ba184c call 0x12ba20a0 */
  push32(0x12ba1851u); f_12ba20a0();
  /* 12ba1851 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1854 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba1856 jne 0x12ba1863 */
  if (!C.zf) goto L_12ba1863;
  /* 12ba1858 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba185b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba185e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ba1861 jmp 0x12ba1881 */
  goto L_12ba1881;
L_12ba1863:;
  /* 12ba1863 push 0x12bbc010 */
  push32((uint32_t)(0x12bbc010u));
  /* 12ba1868 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba186b push eax */
  push32((uint32_t)(EAX));
  /* 12ba186c call 0x12ba20a0 */
  push32(0x12ba1871u); f_12ba20a0();
  /* 12ba1871 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1874 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba1876 jne 0x12ba1881 */
  if (!C.zf) goto L_12ba1881;
  /* 12ba1878 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba187b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba187e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ba1881:;
  /* 12ba1881 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12ba1885 jmp 0x12ba1a40 */
  goto L_12ba1a40;
L_12ba188a:;
  /* 12ba188a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba188d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1891 jg 0x12ba18a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ba18a1;
  /* 12ba1893 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba1896 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12ba189c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12ba189f jmp 0x12ba18ad */
  goto L_12ba18ad;
L_12ba18a1:;
  /* 12ba18a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba18a4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12ba18aa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12ba18ad:;
  /* 12ba18ad cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba18b1 jle 0x12ba1954 */
  if ((C.zf||C.sf!=C.of)) goto L_12ba1954;
  /* 12ba18b7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba18ba cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba18bd jbe 0x12ba1954 */
  if ((C.cf||C.zf)) goto L_12ba1954;
  /* 12ba18c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba18c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba18c8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ba18ca mov ecx, dword ptr [0x12bbdc98] */
  ECX = (r32((uint32_t)(0x12bbdc98)));
  /* 12ba18d0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba18d2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12ba18d6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12ba18dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba18de je 0x12ba1917 */
  if (C.zf) goto L_12ba1917;
  /* 12ba18e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba18e3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba18e6 jbe 0x12ba1917 */
  if ((C.cf||C.zf)) goto L_12ba1917;
  /* 12ba18e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba18eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba18ed mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba18f0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ba18f2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12ba18f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba18f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ba18f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba18fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba18ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ba1901 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba1904 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1907 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12ba190a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba190d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ba190f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba1912 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1915 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12ba1917:;
  /* 12ba1917 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba191a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ba191c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba191f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ba1921 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12ba1923 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1926 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba1928 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba192b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba192e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ba1930 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba1933 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1936 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12ba1939 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba193c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ba193e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba1941 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1944 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ba1946 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba1949 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba194c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12ba194f jmp 0x12ba18ad */
  goto L_12ba18ad;
L_12ba1954:;
  /* 12ba1954 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba1957 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ba195a jmp 0x12ba1676 */
  goto L_12ba1676;
L_12ba195f:;
  /* 12ba195f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba1962 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12ba1965 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ba1967 je 0x12ba1a32 */
  if (C.zf) goto L_12ba1a32;
  /* 12ba196d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba1970 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1973 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12ba1976:;
  /* 12ba1976 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba1979 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ba197c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ba197e je 0x12ba1a30 */
  if (C.zf) goto L_12ba1a30;
  /* 12ba1984 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1987 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba198a je 0x12ba1a30 */
  if (C.zf) goto L_12ba1a30;
  /* 12ba1990 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba1993 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ba1996 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1999 jne 0x12ba19a9 */
  if (!C.zf) goto L_12ba19a9;
  /* 12ba199b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba199e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba19a1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12ba19a4 jmp 0x12ba1a30 */
  goto L_12ba1a30;
L_12ba19a9:;
  /* 12ba19a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba19ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba19ae mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ba19b0 mov edx, dword ptr [0x12bbdc98] */
  EDX = (r32((uint32_t)(0x12bbdc98)));
  /* 12ba19b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba19b8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12ba19bc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12ba19c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba19c3 je 0x12ba19fc */
  if (C.zf) goto L_12ba19fc;
  /* 12ba19c5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba19c8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba19cb jbe 0x12ba19fc */
  if ((C.cf||C.zf)) goto L_12ba19fc;
  /* 12ba19cd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba19d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ba19d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba19d5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ba19d7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12ba19d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba19dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ba19de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba19e1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba19e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12ba19e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba19e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba19ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ba19ef mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba19f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba19f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba19f7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba19fa mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12ba19fc:;
  /* 12ba19fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba19ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba1a01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba1a04 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ba1a06 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12ba1a08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1a0b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ba1a0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1a10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1a13 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ba1a15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba1a18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1a1b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12ba1a1e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1a21 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ba1a23 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba1a26 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1a29 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12ba1a2b jmp 0x12ba1976 */
  goto L_12ba1976;
L_12ba1a30:;
  /* 12ba1a30 jmp 0x12ba1a3b */
  goto L_12ba1a3b;
L_12ba1a32:;
  /* 12ba1a32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba1a35 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1a38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12ba1a3b:;
  /* 12ba1a3b jmp 0x12ba1676 */
  goto L_12ba1676;
L_12ba1a40:;
  /* 12ba1a40 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12ba1a44 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ba1a46 je 0x12ba1a6c */
  if (C.zf) goto L_12ba1a6c;
  /* 12ba1a48 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba1a4b push edx */
  push32((uint32_t)(EDX));
  /* 12ba1a4c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1a4f push eax */
  push32((uint32_t)(EAX));
  /* 12ba1a50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1a53 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1a54 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1a57 push edx */
  push32((uint32_t)(EDX));
  /* 12ba1a58 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12ba1a5b push eax */
  push32((uint32_t)(EAX));
  /* 12ba1a5c call 0x12ba0ea0 */
  push32(0x12ba1a61u); f_12ba0ea0();
  /* 12ba1a61 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1a64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba1a67 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12ba1a6a jmp 0x12ba1ae7 */
  goto L_12ba1ae7;
L_12ba1a6c:;
  /* 12ba1a6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba1a6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba1a71 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ba1a73 mov ecx, dword ptr [0x12bbdc98] */
  ECX = (r32((uint32_t)(0x12bbdc98)));
  /* 12ba1a79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba1a7b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12ba1a7f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12ba1a85 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba1a87 je 0x12ba1ab8 */
  if (C.zf) goto L_12ba1ab8;
  /* 12ba1a89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1a8c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ba1a8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba1a91 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ba1a93 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12ba1a95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1a98 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba1a9a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1a9d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1aa0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ba1aa2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba1aa5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1aa8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12ba1aab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1aae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ba1ab0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba1ab3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1ab6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12ba1ab8:;
  /* 12ba1ab8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1abb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ba1abd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba1ac0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ba1ac2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12ba1ac4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1ac7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ba1ac9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1acc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1acf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12ba1ad1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba1ad4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1ad7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ba1ada mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1add mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba1adf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba1ae2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1ae5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12ba1ae7:;
  /* 12ba1ae7 jmp 0x12ba1676 */
  goto L_12ba1676;
L_12ba1aec:;
  /* 12ba1aec mov esp, ebp */
  ESP = (EBP);
  /* 12ba1aee pop ebp */
  EBP = (pop32());
  /* 12ba1aef ret  */
  ESPCHK(0x12ba1670u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b90 @ 0x12ba1b90 (650 bytes, 178 insns) */
void f_12ba1b90(void) {
  FTRACE(0x12ba1b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba1b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba1b91 mov ebp, esp */
  EBP = (ESP);
  /* 12ba1b93 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba1b99 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1b9d jne 0x12ba1cf9 */
  if (!C.zf) goto L_12ba1cf9;
  /* 12ba1ba3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1ba6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12ba1bac lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12ba1bb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ba1bb5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ba1bbc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12ba1bc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba1bc8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12ba1bce push edx */
  push32((uint32_t)(EDX));
  /* 12ba1bcf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba1bd2 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1bd3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1bd6 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1bd7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1bda push edx */
  push32((uint32_t)(EDX));
  /* 12ba1bdb call 0x12ba2fb0 */
  push32(0x12ba1be0u); f_12ba2fb0();
  /* 12ba1be0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1be3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ba1be6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1bea jne 0x12ba1c7f */
  if (!C.zf) goto L_12ba1c7f;
  /* 12ba1bf0 call dword ptr [0x12bc12b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12b4))), 0x12ba1bf6u);
  /* 12ba1bf6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1bf9 je 0x12ba1c00 */
  if (C.zf) goto L_12ba1c00;
  /* 12ba1bfb jmp 0x12ba1cdd */
  goto L_12ba1cdd;
L_12ba1c00:;
  /* 12ba1c00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba1c02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba1c04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba1c06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1c09 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1c0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1c0d push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1c0e call 0x12ba2fb0 */
  push32(0x12ba1c13u); f_12ba2fb0();
  /* 12ba1c13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1c16 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12ba1c1c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1c23 jne 0x12ba1c2a */
  if (!C.zf) goto L_12ba1c2a;
  /* 12ba1c25 jmp 0x12ba1cdd */
  goto L_12ba1cdd;
L_12ba1c2a:;
  /* 12ba1c2a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12ba1c2c push 0x12bbc01c */
  push32((uint32_t)(0x12bbc01cu));
  /* 12ba1c31 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba1c33 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12ba1c39 push edx */
  push32((uint32_t)(EDX));
  /* 12ba1c3a call 0x12b939d0 */
  push32(0x12ba1c3fu); f_12b939d0();
  /* 12ba1c3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1c42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ba1c45 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1c49 jne 0x12ba1c50 */
  if (!C.zf) goto L_12ba1c50;
  /* 12ba1c4b jmp 0x12ba1cdd */
  goto L_12ba1cdd;
L_12ba1c50:;
  /* 12ba1c50 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12ba1c57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba1c59 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12ba1c5f push eax */
  push32((uint32_t)(EAX));
  /* 12ba1c60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba1c63 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1c64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1c67 push edx */
  push32((uint32_t)(EDX));
  /* 12ba1c68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1c6b push eax */
  push32((uint32_t)(EAX));
  /* 12ba1c6c call 0x12ba2fb0 */
  push32(0x12ba1c71u); f_12ba2fb0();
  /* 12ba1c71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1c74 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ba1c77 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1c7b jne 0x12ba1c7f */
  if (!C.zf) goto L_12ba1c7f;
  /* 12ba1c7d jmp 0x12ba1cdd */
  goto L_12ba1cdd;
L_12ba1c7f:;
  /* 12ba1c7f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12ba1c81 push 0x12bbc01c */
  push32((uint32_t)(0x12bbc01cu));
  /* 12ba1c86 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba1c88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba1c8b push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1c8c call 0x12b939d0 */
  push32(0x12ba1c91u); f_12b939d0();
  /* 12ba1c91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1c94 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12ba1c9a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12ba1c9c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12ba1ca2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1ca5 jne 0x12ba1ca9 */
  if (!C.zf) goto L_12ba1ca9;
  /* 12ba1ca7 jmp 0x12ba1cdd */
  goto L_12ba1cdd;
L_12ba1ca9:;
  /* 12ba1ca9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba1cac push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1cad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba1cb0 push edx */
  push32((uint32_t)(EDX));
  /* 12ba1cb1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12ba1cb7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ba1cb9 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1cba call 0x12b971f0 */
  push32(0x12ba1cbfu); f_12b971f0();
  /* 12ba1cbf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1cc2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1cc6 je 0x12ba1cd6 */
  if (C.zf) goto L_12ba1cd6;
  /* 12ba1cc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba1cca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba1ccd push edx */
  push32((uint32_t)(EDX));
  /* 12ba1cce call 0x12b94460 */
  push32(0x12ba1cd3u); f_12b94460();
  /* 12ba1cd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ba1cd6:;
  /* 12ba1cd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba1cd8 jmp 0x12ba1e16 */
  goto L_12ba1e16;
L_12ba1cdd:;
  /* 12ba1cdd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1ce1 je 0x12ba1cf1 */
  if (C.zf) goto L_12ba1cf1;
  /* 12ba1ce3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba1ce5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba1ce8 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1ce9 call 0x12b94460 */
  push32(0x12ba1ceeu); f_12b94460();
  /* 12ba1cee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ba1cf1:;
  /* 12ba1cf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba1cf4 jmp 0x12ba1e16 */
  goto L_12ba1e16;
L_12ba1cf9:;
  /* 12ba1cf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1cfd jne 0x12ba1e13 */
  if (!C.zf) goto L_12ba1e13;
  /* 12ba1d03 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12ba1d0d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1d10 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12ba1d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba1d18 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12ba1d1e push edx */
  push32((uint32_t)(EDX));
  /* 12ba1d1f push 0x12bbf718 */
  push32((uint32_t)(0x12bbf718u));
  /* 12ba1d24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1d27 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1d28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1d2b push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1d2c call 0x12ba2e10 */
  push32(0x12ba1d31u); f_12ba2e10();
  /* 12ba1d31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1d34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba1d36 jne 0x12ba1d40 */
  if (!C.zf) goto L_12ba1d40;
  /* 12ba1d38 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba1d3b jmp 0x12ba1e16 */
  goto L_12ba1e16;
L_12ba1d40:;
  /* 12ba1d40 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12ba1d46 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12ba1d49 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12ba1d53 jmp 0x12ba1d64 */
  goto L_12ba1d64;
L_12ba1d55:;
  /* 12ba1d55 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12ba1d5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1d5e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12ba1d64:;
  /* 12ba1d64 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1d6b jge 0x12ba1e0f */
  if ((C.sf==C.of)) goto L_12ba1e0f;
  /* 12ba1d71 cmp dword ptr [0x12bbdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1d78 jle 0x12ba1dab */
  if ((C.zf||C.sf!=C.of)) goto L_12ba1dab;
  /* 12ba1d7a push 4 */
  push32((uint32_t)(0x4u));
  /* 12ba1d7c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12ba1d82 mov dl, byte ptr [ecx*2 + 0x12bbf718] */
  DL = (r8((uint32_t)(ECX*2 + 0x12bbf718)));
  /* 12ba1d89 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12ba1d8f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12ba1d95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba1d9a push eax */
  push32((uint32_t)(EAX));
  /* 12ba1d9b call 0x12b999e0 */
  push32(0x12ba1da0u); f_12b999e0();
  /* 12ba1da0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1da3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12ba1da9 jmp 0x12ba1dde */
  goto L_12ba1dde;
L_12ba1dab:;
  /* 12ba1dab mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12ba1db1 mov dl, byte ptr [ecx*2 + 0x12bbf718] */
  DL = (r8((uint32_t)(ECX*2 + 0x12bbf718)));
  /* 12ba1db8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12ba1dbe mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12ba1dc4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba1dc9 mov ecx, dword ptr [0x12bbdc98] */
  ECX = (r32((uint32_t)(0x12bbdc98)));
  /* 12ba1dcf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba1dd1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12ba1dd5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12ba1dd8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12ba1dde:;
  /* 12ba1dde cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1de5 je 0x12ba1e08 */
  if (C.zf) goto L_12ba1e08;
  /* 12ba1de7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12ba1ded movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ba1df0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba1df3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12ba1dfa lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12ba1dfe mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12ba1e04 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12ba1e06 jmp 0x12ba1e0a */
  goto L_12ba1e0a;
L_12ba1e08:;
  /* 12ba1e08 jmp 0x12ba1e0f */
  goto L_12ba1e0f;
L_12ba1e0a:;
  /* 12ba1e0a jmp 0x12ba1d55 */
  goto L_12ba1d55;
L_12ba1e0f:;
  /* 12ba1e0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba1e11 jmp 0x12ba1e16 */
  goto L_12ba1e16;
L_12ba1e13:;
  /* 12ba1e13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12ba1e16:;
  /* 12ba1e16 mov esp, ebp */
  ESP = (EBP);
  /* 12ba1e18 pop ebp */
  EBP = (pop32());
  /* 12ba1e19 ret  */
  ESPCHK(0x12ba1b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e20 @ 0x12ba1e20 (10 bytes, 5 insns) */
void f_12ba1e20(void) {
  FTRACE(0x12ba1e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba1e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba1e21 mov ebp, esp */
  EBP = (ESP);
  /* 12ba1e23 mov eax, dword ptr [0x12bbed88] */
  EAX = (r32((uint32_t)(0x12bbed88)));
  /* 12ba1e28 pop ebp */
  EBP = (pop32());
  /* 12ba1e29 ret  */
  ESPCHK(0x12ba1e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e30 @ 0x12ba1e30 (575 bytes, 196 insns) */
void f_12ba1e30(void) {
  FTRACE(0x12ba1e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba1e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba1e31 mov ebp, esp */
  EBP = (ESP);
  /* 12ba1e33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ba1e35 push 0x12bbc028 */
  push32((uint32_t)(0x12bbc028u));
  /* 12ba1e3a push 0x12b9cad8 */
  push32((uint32_t)(0x12b9cad8u));
  /* 12ba1e3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12ba1e45 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1e46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12ba1e4d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1e50 push ebx */
  push32((uint32_t)(EBX));
  /* 12ba1e51 push esi */
  push32((uint32_t)(ESI));
  /* 12ba1e52 push edi */
  push32((uint32_t)(EDI));
  /* 12ba1e53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ba1e56 cmp dword ptr [0x12bbf724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1e5d jne 0x12ba1eae */
  if (!C.zf) goto L_12ba1eae;
  /* 12ba1e5f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12ba1e62 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1e63 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba1e65 push 0x12bbb758 */
  push32((uint32_t)(0x12bbb758u));
  /* 12ba1e6a push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba1e6c call dword ptr [0x12bc1330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1330))), 0x12ba1e72u);
  /* 12ba1e72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba1e74 je 0x12ba1e82 */
  if (C.zf) goto L_12ba1e82;
  /* 12ba1e76 mov dword ptr [0x12bbf724], 1 */
  w32((uint32_t)(0x12bbf724), (0x1u));
  /* 12ba1e80 jmp 0x12ba1eae */
  goto L_12ba1eae;
L_12ba1e82:;
  /* 12ba1e82 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12ba1e85 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1e86 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba1e88 push 0x12bbb754 */
  push32((uint32_t)(0x12bbb754u));
  /* 12ba1e8d push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba1e8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba1e91 call dword ptr [0x12bc1314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1314))), 0x12ba1e97u);
  /* 12ba1e97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba1e99 je 0x12ba1ea7 */
  if (C.zf) goto L_12ba1ea7;
  /* 12ba1e9b mov dword ptr [0x12bbf724], 2 */
  w32((uint32_t)(0x12bbf724), (0x2u));
  /* 12ba1ea5 jmp 0x12ba1eae */
  goto L_12ba1eae;
L_12ba1ea7:;
  /* 12ba1ea7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba1ea9 jmp 0x12ba2089 */
  goto L_12ba2089;
L_12ba1eae:;
  /* 12ba1eae cmp dword ptr [0x12bbf724], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf724))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1eb5 jne 0x12ba1ed2 */
  if (!C.zf) goto L_12ba1ed2;
  /* 12ba1eb7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba1eba push edx */
  push32((uint32_t)(EDX));
  /* 12ba1ebb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1ebe push eax */
  push32((uint32_t)(EAX));
  /* 12ba1ebf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1ec2 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1ec3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba1ec6 push edx */
  push32((uint32_t)(EDX));
  /* 12ba1ec7 call dword ptr [0x12bc1330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1330))), 0x12ba1ecdu);
  /* 12ba1ecd jmp 0x12ba2089 */
  goto L_12ba2089;
L_12ba1ed2:;
  /* 12ba1ed2 cmp dword ptr [0x12bbf724], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf724))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1ed9 jne 0x12ba2087 */
  if (!C.zf) goto L_12ba2087;
  /* 12ba1edf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1ee3 jne 0x12ba1eed */
  if (!C.zf) goto L_12ba1eed;
  /* 12ba1ee5 mov eax, dword ptr [0x12bbf698] */
  EAX = (r32((uint32_t)(0x12bbf698)));
  /* 12ba1eea mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12ba1eed:;
  /* 12ba1eed push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba1eef push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba1ef1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba1ef3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba1ef5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1ef8 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1ef9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1efc push edx */
  push32((uint32_t)(EDX));
  /* 12ba1efd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12ba1f02 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba1f05 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1f06 call dword ptr [0x12bc12e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12e0))), 0x12ba1f0cu);
  /* 12ba1f0c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12ba1f0f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1f13 jne 0x12ba1f1c */
  if (!C.zf) goto L_12ba1f1c;
  /* 12ba1f15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba1f17 jmp 0x12ba2089 */
  goto L_12ba2089;
L_12ba1f1c:;
  /* 12ba1f1c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ba1f23 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ba1f26 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1f29 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12ba1f2b call 0x12b96b70 */
  push32(0x12ba1f30u); f_12b96b70();
  /* 12ba1f30 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12ba1f33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ba1f36 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12ba1f39 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12ba1f3c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ba1f3f push edx */
  push32((uint32_t)(EDX));
  /* 12ba1f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba1f42 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ba1f45 push eax */
  push32((uint32_t)(EAX));
  /* 12ba1f46 call 0x12b97740 */
  push32(0x12ba1f4bu); f_12b97740();
  /* 12ba1f4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1f4e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12ba1f55 jmp 0x12ba1f6e */
  goto L_12ba1f6e;
  /* 12ba1f57 mov eax, 1 */
  EAX = (0x1u);
  /* 12ba1f5c ret  */
  ESPCHK(0x12ba1e30u, _esp0);
  ESP += 4; return;
  /* 12ba1f5d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba1f60 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12ba1f67 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12ba1f6e:;
  /* 12ba1f6e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1f72 jne 0x12ba1f7b */
  if (!C.zf) goto L_12ba1f7b;
  /* 12ba1f74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba1f76 jmp 0x12ba2089 */
  goto L_12ba2089;
L_12ba1f7b:;
  /* 12ba1f7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba1f7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba1f7f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ba1f82 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1f83 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ba1f86 push edx */
  push32((uint32_t)(EDX));
  /* 12ba1f87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba1f8a push eax */
  push32((uint32_t)(EAX));
  /* 12ba1f8b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba1f8e push ecx */
  push32((uint32_t)(ECX));
  /* 12ba1f8f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12ba1f94 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba1f97 push edx */
  push32((uint32_t)(EDX));
  /* 12ba1f98 call dword ptr [0x12bc12e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12e0))), 0x12ba1f9eu);
  /* 12ba1f9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba1fa0 jne 0x12ba1fa9 */
  if (!C.zf) goto L_12ba1fa9;
  /* 12ba1fa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba1fa4 jmp 0x12ba2089 */
  goto L_12ba2089;
L_12ba1fa9:;
  /* 12ba1fa9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12ba1fb0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ba1fb3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12ba1fb7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba1fba and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12ba1fbc call 0x12b96b70 */
  push32(0x12ba1fc1u); f_12b96b70();
  /* 12ba1fc1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12ba1fc4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ba1fc7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12ba1fca mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12ba1fcd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12ba1fd4 jmp 0x12ba1fed */
  goto L_12ba1fed;
  /* 12ba1fd6 mov eax, 1 */
  EAX = (0x1u);
  /* 12ba1fdb ret  */
  ESPCHK(0x12ba1e30u, _esp0);
  ESP += 4; return;
  /* 12ba1fdc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba1fdf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12ba1fe6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12ba1fed:;
  /* 12ba1fed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1ff1 jne 0x12ba1ffa */
  if (!C.zf) goto L_12ba1ffa;
  /* 12ba1ff3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba1ff5 jmp 0x12ba2089 */
  goto L_12ba2089;
L_12ba1ffa:;
  /* 12ba1ffa cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba1ffe jne 0x12ba2009 */
  if (!C.zf) goto L_12ba2009;
  /* 12ba2000 mov edx, dword ptr [0x12bbf688] */
  EDX = (r32((uint32_t)(0x12bbf688)));
  /* 12ba2006 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12ba2009:;
  /* 12ba2009 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba200c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ba200f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12ba2015 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba2018 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ba201b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12ba2022 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ba2025 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba2026 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ba2029 push edx */
  push32((uint32_t)(EDX));
  /* 12ba202a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ba202d push eax */
  push32((uint32_t)(EAX));
  /* 12ba202e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2031 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba2032 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12ba2035 push edx */
  push32((uint32_t)(EDX));
  /* 12ba2036 call dword ptr [0x12bc1314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1314))), 0x12ba203cu);
  /* 12ba203c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12ba203f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba2042 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ba2045 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba2047 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12ba204c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2052 je 0x12ba2068 */
  if (C.zf) goto L_12ba2068;
  /* 12ba2054 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba2057 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ba205a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba205c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12ba2060 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2066 je 0x12ba206c */
  if (C.zf) goto L_12ba206c;
L_12ba2068:;
  /* 12ba2068 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba206a jmp 0x12ba2089 */
  goto L_12ba2089;
L_12ba206c:;
  /* 12ba206c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba206f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12ba2071 push eax */
  push32((uint32_t)(EAX));
  /* 12ba2072 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ba2075 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba2076 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba2079 push edx */
  push32((uint32_t)(EDX));
  /* 12ba207a call 0x12b9b8c0 */
  push32(0x12ba207fu); f_12b9b8c0();
  /* 12ba207f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2082 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ba2085 jmp 0x12ba2089 */
  goto L_12ba2089;
L_12ba2087:;
  /* 12ba2087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ba2089:;
  /* 12ba2089 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12ba208c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba208f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12ba2096 pop edi */
  EDI = (pop32());
  /* 12ba2097 pop esi */
  ESI = (pop32());
  /* 12ba2098 pop ebx */
  EBX = (pop32());
  /* 12ba2099 mov esp, ebp */
  ESP = (EBP);
  /* 12ba209b pop ebp */
  EBP = (pop32());
  /* 12ba209c ret  */
  ESPCHK(0x12ba1e30u, _esp0);
  ESP += 4; return;
}

/* FUN_100120a0 @ 0x12ba20a0 (208 bytes, 85 insns) */
void f_12ba20a0(void) {
  FTRACE(0x12ba20a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba20a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba20a1 mov ebp, esp */
  EBP = (ESP);
  /* 12ba20a3 push edi */
  push32((uint32_t)(EDI));
  /* 12ba20a4 push esi */
  push32((uint32_t)(ESI));
  /* 12ba20a5 push ebx */
  push32((uint32_t)(EBX));
  /* 12ba20a6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba20a9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba20ac lea eax, [0x12bbf680] */
  EAX = ((uint32_t)(0x12bbf680));
  /* 12ba20b2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba20b6 jne 0x12ba20f3 */
  if (!C.zf) goto L_12ba20f3;
  /* 12ba20b8 mov al, 0xff */
  AL = (0xffu);
  /* 12ba20ba mov edi, edi */
  EDI = (EDI);
L_12ba20bc:;
  /* 12ba20bc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12ba20be je 0x12ba20ee */
  if (C.zf) goto L_12ba20ee;
  /* 12ba20c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12ba20c2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12ba20c3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12ba20c5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12ba20c6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba20c8 je 0x12ba20bc */
  if (C.zf) goto L_12ba20bc;
  /* 12ba20ca sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ba20cc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba20ce sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ba20d0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12ba20d3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ba20d5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ba20d7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12ba20d9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ba20db cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba20dd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ba20df and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12ba20e2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ba20e4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ba20e6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba20e8 je 0x12ba20bc */
  if (C.zf) goto L_12ba20bc;
  /* 12ba20ea sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12ba20ec sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12ba20ee:;
  /* 12ba20ee movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12ba20f1 jmp 0x12ba216b */
  goto L_12ba216b;
L_12ba20f3:;
  /* 12ba20f3 lock inc dword ptr [0x12bbf814] */
  x86_unimpl("lock inc @ 0x12ba20f3");
  /* 12ba20fa cmp dword ptr [0x12bbf804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2101 jg 0x12ba2107 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ba2107;
  /* 12ba2103 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2105 jmp 0x12ba211c */
  goto L_12ba211c;
L_12ba2107:;
  /* 12ba2107 lock dec dword ptr [0x12bbf814] */
  x86_unimpl("lock dec @ 0x12ba2107");
  /* 12ba210e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12ba2110 call 0x12b973d0 */
  push32(0x12ba2115u); f_12b973d0();
  /* 12ba2115 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12ba211c:;
  /* 12ba211c mov eax, 0xff */
  EAX = (0xffu);
  /* 12ba2121 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12ba2123 nop  */
  /* nop */
L_12ba2124:;
  /* 12ba2124 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12ba2126 je 0x12ba214f */
  if (C.zf) goto L_12ba214f;
  /* 12ba2128 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12ba212a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12ba212b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12ba212d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12ba212e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba2130 je 0x12ba2124 */
  if (C.zf) goto L_12ba2124;
  /* 12ba2132 push eax */
  push32((uint32_t)(EAX));
  /* 12ba2133 push ebx */
  push32((uint32_t)(EBX));
  /* 12ba2134 call 0x12ba3210 */
  push32(0x12ba2139u); f_12ba3210();
  /* 12ba2139 mov ebx, eax */
  EBX = (EAX);
  /* 12ba213b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba213e call 0x12ba3210 */
  push32(0x12ba2143u); f_12ba3210();
  /* 12ba2143 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2146 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba2148 je 0x12ba2124 */
  if (C.zf) goto L_12ba2124;
  /* 12ba214a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba214c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12ba214f:;
  /* 12ba214f mov ebx, eax */
  EBX = (EAX);
  /* 12ba2151 pop eax */
  EAX = (pop32());
  /* 12ba2152 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba2154 jne 0x12ba215f */
  if (!C.zf) goto L_12ba215f;
  /* 12ba2156 lock dec dword ptr [0x12bbf814] */
  x86_unimpl("lock dec @ 0x12ba2156");
  /* 12ba215d jmp 0x12ba2169 */
  goto L_12ba2169;
L_12ba215f:;
  /* 12ba215f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12ba2161 call 0x12b97470 */
  push32(0x12ba2166u); f_12b97470();
  /* 12ba2166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ba2169:;
  /* 12ba2169 mov eax, ebx */
  EAX = (EBX);
L_12ba216b:;
  /* 12ba216b pop ebx */
  EBX = (pop32());
  /* 12ba216c pop esi */
  ESI = (pop32());
  /* 12ba216d pop edi */
  EDI = (pop32());
  /* 12ba216e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12ba216f ret  */
  ESPCHK(0x12ba20a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012170 @ 0x12ba2170 (257 bytes, 103 insns) */
void f_12ba2170(void) {
  FTRACE(0x12ba2170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba2170 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba2171 mov ebp, esp */
  EBP = (ESP);
  /* 12ba2173 push edi */
  push32((uint32_t)(EDI));
  /* 12ba2174 push esi */
  push32((uint32_t)(ESI));
  /* 12ba2175 push ebx */
  push32((uint32_t)(EBX));
  /* 12ba2176 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba2179 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba217b je 0x12ba226a */
  if (C.zf) goto L_12ba226a;
  /* 12ba2181 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2184 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba2187 lea eax, [0x12bbf680] */
  EAX = ((uint32_t)(0x12bbf680));
  /* 12ba218d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2191 jne 0x12ba21e1 */
  if (!C.zf) goto L_12ba21e1;
  /* 12ba2193 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12ba2195 mov bl, 0x5a */
  BL = (0x5au);
  /* 12ba2197 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12ba2199 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12ba219c:;
  /* 12ba219c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12ba219e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12ba21a0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12ba21a2 je 0x12ba21c5 */
  if (C.zf) goto L_12ba21c5;
  /* 12ba21a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12ba21a6 je 0x12ba21c5 */
  if (C.zf) goto L_12ba21c5;
  /* 12ba21a8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12ba21a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12ba21aa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba21ac jb 0x12ba21b4 */
  if (C.cf) goto L_12ba21b4;
  /* 12ba21ae cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba21b0 ja 0x12ba21b4 */
  if ((!C.cf&&!C.zf)) goto L_12ba21b4;
  /* 12ba21b2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12ba21b4:;
  /* 12ba21b4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba21b6 jb 0x12ba21be */
  if (C.cf) goto L_12ba21be;
  /* 12ba21b8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba21ba ja 0x12ba21be */
  if ((!C.cf&&!C.zf)) goto L_12ba21be;
  /* 12ba21bc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12ba21be:;
  /* 12ba21be cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba21c0 jne 0x12ba21cf */
  if (!C.zf) goto L_12ba21cf;
  /* 12ba21c2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12ba21c3 jne 0x12ba219c */
  if (!C.zf) goto L_12ba219c;
L_12ba21c5:;
  /* 12ba21c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba21c7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba21c9 je 0x12ba226a */
  if (C.zf) goto L_12ba226a;
L_12ba21cf:;
  /* 12ba21cf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12ba21d4 jb 0x12ba226a */
  if (C.cf) goto L_12ba226a;
  /* 12ba21da neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ba21dc jmp 0x12ba226a */
  goto L_12ba226a;
L_12ba21e1:;
  /* 12ba21e1 lock inc dword ptr [0x12bbf814] */
  x86_unimpl("lock inc @ 0x12ba21e1");
  /* 12ba21e8 cmp dword ptr [0x12bbf804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba21ef jg 0x12ba21f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ba21f5;
  /* 12ba21f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba21f3 jmp 0x12ba220e */
  goto L_12ba220e;
L_12ba21f5:;
  /* 12ba21f5 lock dec dword ptr [0x12bbf814] */
  x86_unimpl("lock dec @ 0x12ba21f5");
  /* 12ba21fc mov ebx, ecx */
  EBX = (ECX);
  /* 12ba21fe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12ba2200 call 0x12b973d0 */
  push32(0x12ba2205u); f_12b973d0();
  /* 12ba2205 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12ba220c mov ecx, ebx */
  ECX = (EBX);
L_12ba220e:;
  /* 12ba220e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba2210 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12ba2212 mov edi, edi */
  EDI = (EDI);
L_12ba2214:;
  /* 12ba2214 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12ba2216 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba2218 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12ba221a je 0x12ba223f */
  if (C.zf) goto L_12ba223f;
  /* 12ba221c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12ba221e je 0x12ba223f */
  if (C.zf) goto L_12ba223f;
  /* 12ba2220 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12ba2221 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12ba2222 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba2223 push eax */
  push32((uint32_t)(EAX));
  /* 12ba2224 push ebx */
  push32((uint32_t)(EBX));
  /* 12ba2225 call 0x12ba3210 */
  push32(0x12ba222au); f_12ba3210();
  /* 12ba222a mov ebx, eax */
  EBX = (EAX);
  /* 12ba222c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba222f call 0x12ba3210 */
  push32(0x12ba2234u); f_12ba3210();
  /* 12ba2234 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2237 pop ecx */
  ECX = (pop32());
  /* 12ba2238 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba223a jne 0x12ba2245 */
  if (!C.zf) goto L_12ba2245;
  /* 12ba223c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12ba223d jne 0x12ba2214 */
  if (!C.zf) goto L_12ba2214;
L_12ba223f:;
  /* 12ba223f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba2241 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2243 je 0x12ba224e */
  if (C.zf) goto L_12ba224e;
L_12ba2245:;
  /* 12ba2245 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12ba224a jb 0x12ba224e */
  if (C.cf) goto L_12ba224e;
  /* 12ba224c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12ba224e:;
  /* 12ba224e pop eax */
  EAX = (pop32());
  /* 12ba224f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba2251 jne 0x12ba225c */
  if (!C.zf) goto L_12ba225c;
  /* 12ba2253 lock dec dword ptr [0x12bbf814] */
  x86_unimpl("lock dec @ 0x12ba2253");
  /* 12ba225a jmp 0x12ba226a */
  goto L_12ba226a;
L_12ba225c:;
  /* 12ba225c mov ebx, ecx */
  EBX = (ECX);
  /* 12ba225e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12ba2260 call 0x12b97470 */
  push32(0x12ba2265u); f_12b97470();
  /* 12ba2265 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2268 mov ecx, ebx */
  ECX = (EBX);
L_12ba226a:;
  /* 12ba226a mov eax, ecx */
  EAX = (ECX);
  /* 12ba226c pop ebx */
  EBX = (pop32());
  /* 12ba226d pop esi */
  ESI = (pop32());
  /* 12ba226e pop edi */
  EDI = (pop32());
  /* 12ba226f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12ba2270 ret  */
  ESPCHK(0x12ba2170u, _esp0);
  ESP += 4; return;
}

/* FUN_10012280 @ 0x12ba2280 (255 bytes, 88 insns) */
void f_12ba2280(void) {
  FTRACE(0x12ba2280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba2280 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba2281 mov ebp, esp */
  EBP = (ESP);
  /* 12ba2283 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12ba2286:;
  /* 12ba2286 cmp dword ptr [0x12bbdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba228d jle 0x12ba22a6 */
  if ((C.zf||C.sf!=C.of)) goto L_12ba22a6;
  /* 12ba228f push 8 */
  push32((uint32_t)(0x8u));
  /* 12ba2291 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2294 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba2296 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ba2298 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba2299 call 0x12b999e0 */
  push32(0x12ba229eu); f_12b999e0();
  /* 12ba229e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba22a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12ba22a4 jmp 0x12ba22bf */
  goto L_12ba22bf;
L_12ba22a6:;
  /* 12ba22a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba22a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba22ab mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ba22ad mov ecx, dword ptr [0x12bbdc98] */
  ECX = (r32((uint32_t)(0x12bbdc98)));
  /* 12ba22b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba22b5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12ba22b9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12ba22bc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12ba22bf:;
  /* 12ba22bf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba22c3 je 0x12ba22d0 */
  if (C.zf) goto L_12ba22d0;
  /* 12ba22c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba22c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba22cb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ba22ce jmp 0x12ba2286 */
  goto L_12ba2286;
L_12ba22d0:;
  /* 12ba22d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba22d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba22d5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ba22d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ba22da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba22dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba22e0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ba22e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba22e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ba22e9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba22ed je 0x12ba22f5 */
  if (C.zf) goto L_12ba22f5;
  /* 12ba22ef cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba22f3 jne 0x12ba2308 */
  if (!C.zf) goto L_12ba2308;
L_12ba22f5:;
  /* 12ba22f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba22f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba22fa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ba22fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ba22ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2302 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2305 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12ba2308:;
  /* 12ba2308 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12ba230f:;
  /* 12ba230f cmp dword ptr [0x12bbdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2316 jle 0x12ba232b */
  if ((C.zf||C.sf!=C.of)) goto L_12ba232b;
  /* 12ba2318 push 4 */
  push32((uint32_t)(0x4u));
  /* 12ba231a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba231d push edx */
  push32((uint32_t)(EDX));
  /* 12ba231e call 0x12b999e0 */
  push32(0x12ba2323u); f_12b999e0();
  /* 12ba2323 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2326 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12ba2329 jmp 0x12ba2340 */
  goto L_12ba2340;
L_12ba232b:;
  /* 12ba232b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba232e mov ecx, dword ptr [0x12bbdc98] */
  ECX = (r32((uint32_t)(0x12bbdc98)));
  /* 12ba2334 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba2336 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12ba233a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12ba233d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12ba2340:;
  /* 12ba2340 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2344 je 0x12ba236b */
  if (C.zf) goto L_12ba236b;
  /* 12ba2346 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba2349 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba234c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba234f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12ba2353 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ba2356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2359 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba235b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ba235d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ba2360 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2363 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2366 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12ba2369 jmp 0x12ba230f */
  goto L_12ba230f;
L_12ba236b:;
  /* 12ba236b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba236f jne 0x12ba2378 */
  if (!C.zf) goto L_12ba2378;
  /* 12ba2371 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba2374 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ba2376 jmp 0x12ba237b */
  goto L_12ba237b;
L_12ba2378:;
  /* 12ba2378 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12ba237b:;
  /* 12ba237b mov esp, ebp */
  ESP = (EBP);
  /* 12ba237d pop ebp */
  EBP = (pop32());
  /* 12ba237e ret  */
  ESPCHK(0x12ba2280u, _esp0);
  ESP += 4; return;
}

/* FUN_10012380 @ 0x12ba2380 (17 bytes, 8 insns) */
void f_12ba2380(void) {
  FTRACE(0x12ba2380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba2380 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba2381 mov ebp, esp */
  EBP = (ESP);
  /* 12ba2383 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2386 push eax */
  push32((uint32_t)(EAX));
  /* 12ba2387 call 0x12ba2280 */
  push32(0x12ba238cu); f_12ba2280();
  /* 12ba238c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba238f pop ebp */
  EBP = (pop32());
  /* 12ba2390 ret  */
  ESPCHK(0x12ba2380u, _esp0);
  ESP += 4; return;
}

/* FUN_100123a0 @ 0x12ba23a0 (297 bytes, 106 insns) */
void f_12ba23a0(void) {
  FTRACE(0x12ba23a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba23a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba23a1 mov ebp, esp */
  EBP = (ESP);
  /* 12ba23a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba23a6 push esi */
  push32((uint32_t)(ESI));
L_12ba23a7:;
  /* 12ba23a7 cmp dword ptr [0x12bbdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba23ae jle 0x12ba23c7 */
  if ((C.zf||C.sf!=C.of)) goto L_12ba23c7;
  /* 12ba23b0 push 8 */
  push32((uint32_t)(0x8u));
  /* 12ba23b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba23b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba23b7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ba23b9 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba23ba call 0x12b999e0 */
  push32(0x12ba23bfu); f_12b999e0();
  /* 12ba23bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba23c2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12ba23c5 jmp 0x12ba23e0 */
  goto L_12ba23e0;
L_12ba23c7:;
  /* 12ba23c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba23ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba23cc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ba23ce mov ecx, dword ptr [0x12bbdc98] */
  ECX = (r32((uint32_t)(0x12bbdc98)));
  /* 12ba23d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba23d6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12ba23da and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12ba23dd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12ba23e0:;
  /* 12ba23e0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba23e4 je 0x12ba23f1 */
  if (C.zf) goto L_12ba23f1;
  /* 12ba23e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba23e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba23ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ba23ef jmp 0x12ba23a7 */
  goto L_12ba23a7;
L_12ba23f1:;
  /* 12ba23f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba23f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba23f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ba23f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ba23fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba23fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2401 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ba2404 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba2407 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12ba240a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba240e je 0x12ba2416 */
  if (C.zf) goto L_12ba2416;
  /* 12ba2410 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2414 jne 0x12ba2429 */
  if (!C.zf) goto L_12ba2429;
L_12ba2416:;
  /* 12ba2416 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2419 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba241b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ba241d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ba2420 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2423 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2426 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12ba2429:;
  /* 12ba2429 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12ba2430 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12ba2437:;
  /* 12ba2437 cmp dword ptr [0x12bbdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba243e jle 0x12ba2453 */
  if ((C.zf||C.sf!=C.of)) goto L_12ba2453;
  /* 12ba2440 push 4 */
  push32((uint32_t)(0x4u));
  /* 12ba2442 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba2445 push edx */
  push32((uint32_t)(EDX));
  /* 12ba2446 call 0x12b999e0 */
  push32(0x12ba244bu); f_12b999e0();
  /* 12ba244b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba244e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12ba2451 jmp 0x12ba2468 */
  goto L_12ba2468;
L_12ba2453:;
  /* 12ba2453 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba2456 mov ecx, dword ptr [0x12bbdc98] */
  ECX = (r32((uint32_t)(0x12bbdc98)));
  /* 12ba245c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba245e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12ba2462 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12ba2465 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12ba2468:;
  /* 12ba2468 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba246c je 0x12ba24a9 */
  if (C.zf) goto L_12ba24a9;
  /* 12ba246e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2470 push 0xa */
  push32((uint32_t)(0xau));
  /* 12ba2472 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba2475 push eax */
  push32((uint32_t)(EAX));
  /* 12ba2476 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba2479 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba247a call 0x12ba3340 */
  push32(0x12ba247fu); f_12ba3340();
  /* 12ba247f mov ecx, eax */
  ECX = (EAX);
  /* 12ba2481 mov esi, edx */
  ESI = (EDX);
  /* 12ba2483 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba2486 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba2489 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ba248a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba248c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba248e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ba2491 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12ba2494 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2497 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba2499 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ba249b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ba249e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba24a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba24a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12ba24a7 jmp 0x12ba2437 */
  goto L_12ba2437;
L_12ba24a9:;
  /* 12ba24a9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba24ad jne 0x12ba24be */
  if (!C.zf) goto L_12ba24be;
  /* 12ba24af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba24b2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ba24b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba24b7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba24ba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ba24bc jmp 0x12ba24c4 */
  goto L_12ba24c4;
L_12ba24be:;
  /* 12ba24be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba24c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12ba24c4:;
  /* 12ba24c4 pop esi */
  ESI = (pop32());
  /* 12ba24c5 mov esp, ebp */
  ESP = (EBP);
  /* 12ba24c7 pop ebp */
  EBP = (pop32());
  /* 12ba24c8 ret  */
  ESPCHK(0x12ba23a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124d0 @ 0x12ba24d0 (61 bytes, 18 insns) */
void f_12ba24d0(void) {
  FTRACE(0x12ba24d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba24d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba24d1 mov ebp, esp */
  EBP = (ESP);
  /* 12ba24d3 cmp dword ptr [0x12bbf7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba24da jne 0x12ba250b */
  if (!C.zf) goto L_12ba250b;
  /* 12ba24dc push 0xb */
  push32((uint32_t)(0xbu));
  /* 12ba24de call 0x12b973d0 */
  push32(0x12ba24e3u); f_12b973d0();
  /* 12ba24e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba24e6 cmp dword ptr [0x12bbf7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba24ed jne 0x12ba2501 */
  if (!C.zf) goto L_12ba2501;
  /* 12ba24ef call 0x12ba2530 */
  push32(0x12ba24f4u); f_12ba2530();
  /* 12ba24f4 mov eax, dword ptr [0x12bbf7e0] */
  EAX = (r32((uint32_t)(0x12bbf7e0)));
  /* 12ba24f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba24fc mov dword ptr [0x12bbf7e0], eax */
  w32((uint32_t)(0x12bbf7e0), (EAX));
L_12ba2501:;
  /* 12ba2501 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12ba2503 call 0x12b97470 */
  push32(0x12ba2508u); f_12b97470();
  /* 12ba2508 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ba250b:;
  /* 12ba250b pop ebp */
  EBP = (pop32());
  /* 12ba250c ret  */
  ESPCHK(0x12ba24d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012510 @ 0x12ba2510 (30 bytes, 11 insns) */
void f_12ba2510(void) {
  FTRACE(0x12ba2510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba2510 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba2511 mov ebp, esp */
  EBP = (ESP);
  /* 12ba2513 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12ba2515 call 0x12b973d0 */
  push32(0x12ba251au); f_12b973d0();
  /* 12ba251a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba251d call 0x12ba2530 */
  push32(0x12ba2522u); f_12ba2530();
  /* 12ba2522 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12ba2524 call 0x12b97470 */
  push32(0x12ba2529u); f_12b97470();
  /* 12ba2529 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba252c pop ebp */
  EBP = (pop32());
  /* 12ba252d ret  */
  ESPCHK(0x12ba2510u, _esp0);
  ESP += 4; return;
}

/* FUN_10012530 @ 0x12ba2530 (939 bytes, 266 insns) */
void f_12ba2530(void) {
  FTRACE(0x12ba2530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba2530 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba2531 mov ebp, esp */
  EBP = (ESP);
  /* 12ba2533 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba2536 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ba253d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12ba253f call 0x12b973d0 */
  push32(0x12ba2544u); f_12b973d0();
  /* 12ba2544 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2547 mov dword ptr [0x12bbf728], 0 */
  w32((uint32_t)(0x12bbf728), (0x0u));
  /* 12ba2551 mov dword ptr [0x12bbee38], 0xffffffff */
  w32((uint32_t)(0x12bbee38), (0xffffffffu));
  /* 12ba255b mov eax, dword ptr [0x12bbee38] */
  EAX = (r32((uint32_t)(0x12bbee38)));
  /* 12ba2560 mov dword ptr [0x12bbee28], eax */
  w32((uint32_t)(0x12bbee28), (EAX));
  /* 12ba2565 push 0x12bbc088 */
  push32((uint32_t)(0x12bbc088u));
  /* 12ba256a call 0x12ba33b0 */
  push32(0x12ba256fu); f_12ba33b0();
  /* 12ba256f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2572 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ba2575 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2579 jne 0x12ba26b3 */
  if (!C.zf) goto L_12ba26b3;
  /* 12ba257f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12ba2581 call 0x12b97470 */
  push32(0x12ba2586u); f_12b97470();
  /* 12ba2586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2589 push 0x12bbf730 */
  push32((uint32_t)(0x12bbf730u));
  /* 12ba258e call dword ptr [0x12bc1244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1244))), 0x12ba2594u);
  /* 12ba2594 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2597 je 0x12ba26ae */
  if (C.zf) goto L_12ba26ae;
  /* 12ba259d mov dword ptr [0x12bbf728], 1 */
  w32((uint32_t)(0x12bbf728), (0x1u));
  /* 12ba25a7 mov ecx, dword ptr [0x12bbf730] */
  ECX = (r32((uint32_t)(0x12bbf730)));
  /* 12ba25ad imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba25b0 mov dword ptr [0x12bbed90], ecx */
  w32((uint32_t)(0x12bbed90), (ECX));
  /* 12ba25b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba25b8 mov dx, word ptr [0x12bbf776] */
  DX = (r16((uint32_t)(0x12bbf776)));
  /* 12ba25bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba25c1 je 0x12ba25d9 */
  if (C.zf) goto L_12ba25d9;
  /* 12ba25c3 mov eax, dword ptr [0x12bbf784] */
  EAX = (r32((uint32_t)(0x12bbf784)));
  /* 12ba25c8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba25cb mov ecx, dword ptr [0x12bbed90] */
  ECX = (r32((uint32_t)(0x12bbed90)));
  /* 12ba25d1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba25d3 mov dword ptr [0x12bbed90], ecx */
  w32((uint32_t)(0x12bbed90), (ECX));
L_12ba25d9:;
  /* 12ba25d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba25db mov dx, word ptr [0x12bbf7ca] */
  DX = (r16((uint32_t)(0x12bbf7ca)));
  /* 12ba25e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba25e4 je 0x12ba260e */
  if (C.zf) goto L_12ba260e;
  /* 12ba25e6 cmp dword ptr [0x12bbf7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba25ed je 0x12ba260e */
  if (C.zf) goto L_12ba260e;
  /* 12ba25ef mov dword ptr [0x12bbed94], 1 */
  w32((uint32_t)(0x12bbed94), (0x1u));
  /* 12ba25f9 mov eax, dword ptr [0x12bbf7d8] */
  EAX = (r32((uint32_t)(0x12bbf7d8)));
  /* 12ba25fe sub eax, dword ptr [0x12bbf784] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bbf784))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba2604 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba2607 mov dword ptr [0x12bbed98], eax */
  w32((uint32_t)(0x12bbed98), (EAX));
  /* 12ba260c jmp 0x12ba2622 */
  goto L_12ba2622;
L_12ba260e:;
  /* 12ba260e mov dword ptr [0x12bbed94], 0 */
  w32((uint32_t)(0x12bbed94), (0x0u));
  /* 12ba2618 mov dword ptr [0x12bbed98], 0 */
  w32((uint32_t)(0x12bbed98), (0x0u));
L_12ba2622:;
  /* 12ba2622 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12ba2625 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba2626 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2628 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12ba262a mov edx, dword ptr [0x12bbee1c] */
  EDX = (r32((uint32_t)(0x12bbee1c)));
  /* 12ba2630 push edx */
  push32((uint32_t)(EDX));
  /* 12ba2631 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ba2633 push 0x12bbf734 */
  push32((uint32_t)(0x12bbf734u));
  /* 12ba2638 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12ba263d mov eax, dword ptr [0x12bbf698] */
  EAX = (r32((uint32_t)(0x12bbf698)));
  /* 12ba2642 push eax */
  push32((uint32_t)(EAX));
  /* 12ba2643 call dword ptr [0x12bc12e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12e0))), 0x12ba2649u);
  /* 12ba2649 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba264b je 0x12ba265f */
  if (C.zf) goto L_12ba265f;
  /* 12ba264d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2651 jne 0x12ba265f */
  if (!C.zf) goto L_12ba265f;
  /* 12ba2653 mov ecx, dword ptr [0x12bbee1c] */
  ECX = (r32((uint32_t)(0x12bbee1c)));
  /* 12ba2659 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 12ba265d jmp 0x12ba2668 */
  goto L_12ba2668;
L_12ba265f:;
  /* 12ba265f mov edx, dword ptr [0x12bbee1c] */
  EDX = (r32((uint32_t)(0x12bbee1c)));
  /* 12ba2665 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12ba2668:;
  /* 12ba2668 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12ba266b push eax */
  push32((uint32_t)(EAX));
  /* 12ba266c push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba266e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12ba2670 mov ecx, dword ptr [0x12bbee20] */
  ECX = (r32((uint32_t)(0x12bbee20)));
  /* 12ba2676 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba2677 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ba2679 push 0x12bbf788 */
  push32((uint32_t)(0x12bbf788u));
  /* 12ba267e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12ba2683 mov edx, dword ptr [0x12bbf698] */
  EDX = (r32((uint32_t)(0x12bbf698)));
  /* 12ba2689 push edx */
  push32((uint32_t)(EDX));
  /* 12ba268a call dword ptr [0x12bc12e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12e0))), 0x12ba2690u);
  /* 12ba2690 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba2692 je 0x12ba26a5 */
  if (C.zf) goto L_12ba26a5;
  /* 12ba2694 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2698 jne 0x12ba26a5 */
  if (!C.zf) goto L_12ba26a5;
  /* 12ba269a mov eax, dword ptr [0x12bbee20] */
  EAX = (r32((uint32_t)(0x12bbee20)));
  /* 12ba269f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12ba26a3 jmp 0x12ba26ae */
  goto L_12ba26ae;
L_12ba26a5:;
  /* 12ba26a5 mov ecx, dword ptr [0x12bbee20] */
  ECX = (r32((uint32_t)(0x12bbee20)));
  /* 12ba26ab mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_12ba26ae:;
  /* 12ba26ae jmp 0x12ba28d7 */
  goto L_12ba28d7;
L_12ba26b3:;
  /* 12ba26b3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba26b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ba26b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba26bb je 0x12ba26dd */
  if (C.zf) goto L_12ba26dd;
  /* 12ba26bd cmp dword ptr [0x12bbf7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba26c4 je 0x12ba26ec */
  if (C.zf) goto L_12ba26ec;
  /* 12ba26c6 mov ecx, dword ptr [0x12bbf7dc] */
  ECX = (r32((uint32_t)(0x12bbf7dc)));
  /* 12ba26cc push ecx */
  push32((uint32_t)(ECX));
  /* 12ba26cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba26d0 push edx */
  push32((uint32_t)(EDX));
  /* 12ba26d1 call 0x12b9f660 */
  push32(0x12ba26d6u); f_12b9f660();
  /* 12ba26d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba26d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba26db jne 0x12ba26ec */
  if (!C.zf) goto L_12ba26ec;
L_12ba26dd:;
  /* 12ba26dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 12ba26df call 0x12b97470 */
  push32(0x12ba26e4u); f_12b97470();
  /* 12ba26e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba26e7 jmp 0x12ba28d7 */
  goto L_12ba28d7;
L_12ba26ec:;
  /* 12ba26ec push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba26ee mov eax, dword ptr [0x12bbf7dc] */
  EAX = (r32((uint32_t)(0x12bbf7dc)));
  /* 12ba26f3 push eax */
  push32((uint32_t)(EAX));
  /* 12ba26f4 call 0x12b94460 */
  push32(0x12ba26f9u); f_12b94460();
  /* 12ba26f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba26fc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12ba2701 push 0x12bbc080 */
  push32((uint32_t)(0x12bbc080u));
  /* 12ba2706 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba2708 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba270b push ecx */
  push32((uint32_t)(ECX));
  /* 12ba270c call 0x12b96800 */
  push32(0x12ba2711u); f_12b96800();
  /* 12ba2711 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2714 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2717 push eax */
  push32((uint32_t)(EAX));
  /* 12ba2718 call 0x12b939d0 */
  push32(0x12ba271du); f_12b939d0();
  /* 12ba271d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2720 mov dword ptr [0x12bbf7dc], eax */
  w32((uint32_t)(0x12bbf7dc), (EAX));
  /* 12ba2725 cmp dword ptr [0x12bbf7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba272c jne 0x12ba273d */
  if (!C.zf) goto L_12ba273d;
  /* 12ba272e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12ba2730 call 0x12b97470 */
  push32(0x12ba2735u); f_12b97470();
  /* 12ba2735 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2738 jmp 0x12ba28d7 */
  goto L_12ba28d7;
L_12ba273d:;
  /* 12ba273d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba2740 push edx */
  push32((uint32_t)(EDX));
  /* 12ba2741 mov eax, dword ptr [0x12bbf7dc] */
  EAX = (r32((uint32_t)(0x12bbf7dc)));
  /* 12ba2746 push eax */
  push32((uint32_t)(EAX));
  /* 12ba2747 call 0x12b96980 */
  push32(0x12ba274cu); f_12b96980();
  /* 12ba274c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba274f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12ba2751 call 0x12b97470 */
  push32(0x12ba2756u); f_12b97470();
  /* 12ba2756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2759 push 3 */
  push32((uint32_t)(0x3u));
  /* 12ba275b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba275e push ecx */
  push32((uint32_t)(ECX));
  /* 12ba275f mov edx, dword ptr [0x12bbee1c] */
  EDX = (r32((uint32_t)(0x12bbee1c)));
  /* 12ba2765 push edx */
  push32((uint32_t)(EDX));
  /* 12ba2766 call 0x12b971f0 */
  push32(0x12ba276bu); f_12b971f0();
  /* 12ba276b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba276e mov eax, dword ptr [0x12bbee1c] */
  EAX = (r32((uint32_t)(0x12bbee1c)));
  /* 12ba2773 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12ba2777 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba277a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba277d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ba2780 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba2783 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ba2786 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2789 jne 0x12ba279d */
  if (!C.zf) goto L_12ba279d;
  /* 12ba278b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba278e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2791 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ba2794 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba2797 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba279a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12ba279d:;
  /* 12ba279d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba27a0 push eax */
  push32((uint32_t)(EAX));
  /* 12ba27a1 call 0x12ba2280 */
  push32(0x12ba27a6u); f_12ba2280();
  /* 12ba27a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba27a9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba27af mov dword ptr [0x12bbed90], eax */
  w32((uint32_t)(0x12bbed90), (EAX));
L_12ba27b4:;
  /* 12ba27b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba27b7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ba27ba cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba27bd je 0x12ba27d5 */
  if (C.zf) goto L_12ba27d5;
  /* 12ba27bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba27c2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ba27c5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba27c8 jl 0x12ba27e0 */
  if ((C.sf!=C.of)) goto L_12ba27e0;
  /* 12ba27ca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba27cd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ba27d0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba27d3 jg 0x12ba27e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ba27e0;
L_12ba27d5:;
  /* 12ba27d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba27d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba27db mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ba27de jmp 0x12ba27b4 */
  goto L_12ba27b4;
L_12ba27e0:;
  /* 12ba27e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba27e3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ba27e6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba27e9 jne 0x12ba2885 */
  if (!C.zf) goto L_12ba2885;
  /* 12ba27ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba27f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba27f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ba27f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba27fb push edx */
  push32((uint32_t)(EDX));
  /* 12ba27fc call 0x12ba2280 */
  push32(0x12ba2801u); f_12ba2280();
  /* 12ba2801 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2804 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba2807 mov ecx, dword ptr [0x12bbed90] */
  ECX = (r32((uint32_t)(0x12bbed90)));
  /* 12ba280d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba280f mov dword ptr [0x12bbed90], ecx */
  w32((uint32_t)(0x12bbed90), (ECX));
L_12ba2815:;
  /* 12ba2815 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba2818 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ba281b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba281e jl 0x12ba2836 */
  if ((C.sf!=C.of)) goto L_12ba2836;
  /* 12ba2820 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba2823 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ba2826 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2829 jg 0x12ba2836 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ba2836;
  /* 12ba282b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba282e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2831 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ba2834 jmp 0x12ba2815 */
  goto L_12ba2815;
L_12ba2836:;
  /* 12ba2836 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba2839 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ba283c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba283f jne 0x12ba2885 */
  if (!C.zf) goto L_12ba2885;
  /* 12ba2841 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba2844 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2847 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ba284a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba284d push ecx */
  push32((uint32_t)(ECX));
  /* 12ba284e call 0x12ba2280 */
  push32(0x12ba2853u); f_12ba2280();
  /* 12ba2853 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2856 mov edx, dword ptr [0x12bbed90] */
  EDX = (r32((uint32_t)(0x12bbed90)));
  /* 12ba285c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba285e mov dword ptr [0x12bbed90], edx */
  w32((uint32_t)(0x12bbed90), (EDX));
L_12ba2864:;
  /* 12ba2864 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba2867 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ba286a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba286d jl 0x12ba2885 */
  if ((C.sf!=C.of)) goto L_12ba2885;
  /* 12ba286f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba2872 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ba2875 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2878 jg 0x12ba2885 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ba2885;
  /* 12ba287a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba287d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2880 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ba2883 jmp 0x12ba2864 */
  goto L_12ba2864;
L_12ba2885:;
  /* 12ba2885 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2889 je 0x12ba2899 */
  if (C.zf) goto L_12ba2899;
  /* 12ba288b mov edx, dword ptr [0x12bbed90] */
  EDX = (r32((uint32_t)(0x12bbed90)));
  /* 12ba2891 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ba2893 mov dword ptr [0x12bbed90], edx */
  w32((uint32_t)(0x12bbed90), (EDX));
L_12ba2899:;
  /* 12ba2899 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba289c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ba289f mov dword ptr [0x12bbed94], ecx */
  w32((uint32_t)(0x12bbed94), (ECX));
  /* 12ba28a5 cmp dword ptr [0x12bbed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba28ac je 0x12ba28ce */
  if (C.zf) goto L_12ba28ce;
  /* 12ba28ae push 3 */
  push32((uint32_t)(0x3u));
  /* 12ba28b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba28b3 push edx */
  push32((uint32_t)(EDX));
  /* 12ba28b4 mov eax, dword ptr [0x12bbee20] */
  EAX = (r32((uint32_t)(0x12bbee20)));
  /* 12ba28b9 push eax */
  push32((uint32_t)(EAX));
  /* 12ba28ba call 0x12b971f0 */
  push32(0x12ba28bfu); f_12b971f0();
  /* 12ba28bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba28c2 mov ecx, dword ptr [0x12bbee20] */
  ECX = (r32((uint32_t)(0x12bbee20)));
  /* 12ba28c8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12ba28cc jmp 0x12ba28d7 */
  goto L_12ba28d7;
L_12ba28ce:;
  /* 12ba28ce mov edx, dword ptr [0x12bbee20] */
  EDX = (r32((uint32_t)(0x12bbee20)));
  /* 12ba28d4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12ba28d7:;
  /* 12ba28d7 mov esp, ebp */
  ESP = (EBP);
  /* 12ba28d9 pop ebp */
  EBP = (pop32());
  /* 12ba28da ret  */
  ESPCHK(0x12ba2530u, _esp0);
  ESP += 4; return;
}

/* FUN_100128e0 @ 0x12ba28e0 (46 bytes, 18 insns) */
void f_12ba28e0(void) {
  FTRACE(0x12ba28e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba28e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba28e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ba28e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba28e4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12ba28e6 call 0x12b973d0 */
  push32(0x12ba28ebu); f_12b973d0();
  /* 12ba28eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba28ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba28f1 push eax */
  push32((uint32_t)(EAX));
  /* 12ba28f2 call 0x12ba2910 */
  push32(0x12ba28f7u); f_12ba2910();
  /* 12ba28f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba28fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ba28fd push 0xb */
  push32((uint32_t)(0xbu));
  /* 12ba28ff call 0x12b97470 */
  push32(0x12ba2904u); f_12b97470();
  /* 12ba2904 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2907 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba290a mov esp, ebp */
  ESP = (EBP);
  /* 12ba290c pop ebp */
  EBP = (pop32());
  /* 12ba290d ret  */
  ESPCHK(0x12ba28e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012910 @ 0x12ba2910 (762 bytes, 246 insns) */
void f_12ba2910(void) {
  FTRACE(0x12ba2910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba2910 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba2911 mov ebp, esp */
  EBP = (ESP);
  /* 12ba2913 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba2914 cmp dword ptr [0x12bbed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba291b jne 0x12ba2924 */
  if (!C.zf) goto L_12ba2924;
  /* 12ba291d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba291f jmp 0x12ba2c06 */
  goto L_12ba2c06;
L_12ba2924:;
  /* 12ba2924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2927 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12ba292a cmp ecx, dword ptr [0x12bbee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bbee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2930 jne 0x12ba2944 */
  if (!C.zf) goto L_12ba2944;
  /* 12ba2932 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2935 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ba2938 cmp eax, dword ptr [0x12bbee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bbee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba293e je 0x12ba2b0b */
  if (C.zf) goto L_12ba2b0b;
L_12ba2944:;
  /* 12ba2944 cmp dword ptr [0x12bbf728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba294b je 0x12ba2ac5 */
  if (C.zf) goto L_12ba2ac5;
  /* 12ba2951 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba2953 mov cx, word ptr [0x12bbf7c8] */
  CX = (r16((uint32_t)(0x12bbf7c8)));
  /* 12ba295a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ba295c jne 0x12ba29b9 */
  if (!C.zf) goto L_12ba29b9;
  /* 12ba295e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba2960 mov dx, word ptr [0x12bbf7d6] */
  DX = (r16((uint32_t)(0x12bbf7d6)));
  /* 12ba2967 push edx */
  push32((uint32_t)(EDX));
  /* 12ba2968 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba296a mov ax, word ptr [0x12bbf7d4] */
  AX = (r16((uint32_t)(0x12bbf7d4)));
  /* 12ba2970 push eax */
  push32((uint32_t)(EAX));
  /* 12ba2971 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba2973 mov cx, word ptr [0x12bbf7d2] */
  CX = (r16((uint32_t)(0x12bbf7d2)));
  /* 12ba297a push ecx */
  push32((uint32_t)(ECX));
  /* 12ba297b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba297d mov dx, word ptr [0x12bbf7d0] */
  DX = (r16((uint32_t)(0x12bbf7d0)));
  /* 12ba2984 push edx */
  push32((uint32_t)(EDX));
  /* 12ba2985 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2987 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba2989 mov ax, word ptr [0x12bbf7cc] */
  AX = (r16((uint32_t)(0x12bbf7cc)));
  /* 12ba298f push eax */
  push32((uint32_t)(EAX));
  /* 12ba2990 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba2992 mov cx, word ptr [0x12bbf7ce] */
  CX = (r16((uint32_t)(0x12bbf7ce)));
  /* 12ba2999 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba299a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba299c mov dx, word ptr [0x12bbf7ca] */
  DX = (r16((uint32_t)(0x12bbf7ca)));
  /* 12ba29a3 push edx */
  push32((uint32_t)(EDX));
  /* 12ba29a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba29a7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12ba29aa push ecx */
  push32((uint32_t)(ECX));
  /* 12ba29ab push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba29ad push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba29af call 0x12ba2c10 */
  push32(0x12ba29b4u); f_12ba2c10();
  /* 12ba29b4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba29b7 jmp 0x12ba2a0a */
  goto L_12ba2a0a;
L_12ba29b9:;
  /* 12ba29b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba29bb mov dx, word ptr [0x12bbf7d6] */
  DX = (r16((uint32_t)(0x12bbf7d6)));
  /* 12ba29c2 push edx */
  push32((uint32_t)(EDX));
  /* 12ba29c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba29c5 mov ax, word ptr [0x12bbf7d4] */
  AX = (r16((uint32_t)(0x12bbf7d4)));
  /* 12ba29cb push eax */
  push32((uint32_t)(EAX));
  /* 12ba29cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba29ce mov cx, word ptr [0x12bbf7d2] */
  CX = (r16((uint32_t)(0x12bbf7d2)));
  /* 12ba29d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba29d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba29d8 mov dx, word ptr [0x12bbf7d0] */
  DX = (r16((uint32_t)(0x12bbf7d0)));
  /* 12ba29df push edx */
  push32((uint32_t)(EDX));
  /* 12ba29e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba29e2 mov ax, word ptr [0x12bbf7ce] */
  AX = (r16((uint32_t)(0x12bbf7ce)));
  /* 12ba29e8 push eax */
  push32((uint32_t)(EAX));
  /* 12ba29e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba29eb push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba29ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba29ef mov cx, word ptr [0x12bbf7ca] */
  CX = (r16((uint32_t)(0x12bbf7ca)));
  /* 12ba29f6 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba29f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba29fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ba29fd push eax */
  push32((uint32_t)(EAX));
  /* 12ba29fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2a00 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba2a02 call 0x12ba2c10 */
  push32(0x12ba2a07u); f_12ba2c10();
  /* 12ba2a07 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ba2a0a:;
  /* 12ba2a0a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba2a0c mov cx, word ptr [0x12bbf774] */
  CX = (r16((uint32_t)(0x12bbf774)));
  /* 12ba2a13 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ba2a15 jne 0x12ba2a72 */
  if (!C.zf) goto L_12ba2a72;
  /* 12ba2a17 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba2a19 mov dx, word ptr [0x12bbf782] */
  DX = (r16((uint32_t)(0x12bbf782)));
  /* 12ba2a20 push edx */
  push32((uint32_t)(EDX));
  /* 12ba2a21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba2a23 mov ax, word ptr [0x12bbf780] */
  AX = (r16((uint32_t)(0x12bbf780)));
  /* 12ba2a29 push eax */
  push32((uint32_t)(EAX));
  /* 12ba2a2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba2a2c mov cx, word ptr [0x12bbf77e] */
  CX = (r16((uint32_t)(0x12bbf77e)));
  /* 12ba2a33 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba2a34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba2a36 mov dx, word ptr [0x12bbf77c] */
  DX = (r16((uint32_t)(0x12bbf77c)));
  /* 12ba2a3d push edx */
  push32((uint32_t)(EDX));
  /* 12ba2a3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2a40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba2a42 mov ax, word ptr [0x12bbf778] */
  AX = (r16((uint32_t)(0x12bbf778)));
  /* 12ba2a48 push eax */
  push32((uint32_t)(EAX));
  /* 12ba2a49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba2a4b mov cx, word ptr [0x12bbf77a] */
  CX = (r16((uint32_t)(0x12bbf77a)));
  /* 12ba2a52 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba2a53 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba2a55 mov dx, word ptr [0x12bbf776] */
  DX = (r16((uint32_t)(0x12bbf776)));
  /* 12ba2a5c push edx */
  push32((uint32_t)(EDX));
  /* 12ba2a5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2a60 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12ba2a63 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba2a64 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba2a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2a68 call 0x12ba2c10 */
  push32(0x12ba2a6du); f_12ba2c10();
  /* 12ba2a6d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2a70 jmp 0x12ba2ac3 */
  goto L_12ba2ac3;
L_12ba2a72:;
  /* 12ba2a72 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba2a74 mov dx, word ptr [0x12bbf782] */
  DX = (r16((uint32_t)(0x12bbf782)));
  /* 12ba2a7b push edx */
  push32((uint32_t)(EDX));
  /* 12ba2a7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba2a7e mov ax, word ptr [0x12bbf780] */
  AX = (r16((uint32_t)(0x12bbf780)));
  /* 12ba2a84 push eax */
  push32((uint32_t)(EAX));
  /* 12ba2a85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba2a87 mov cx, word ptr [0x12bbf77e] */
  CX = (r16((uint32_t)(0x12bbf77e)));
  /* 12ba2a8e push ecx */
  push32((uint32_t)(ECX));
  /* 12ba2a8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba2a91 mov dx, word ptr [0x12bbf77c] */
  DX = (r16((uint32_t)(0x12bbf77c)));
  /* 12ba2a98 push edx */
  push32((uint32_t)(EDX));
  /* 12ba2a99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba2a9b mov ax, word ptr [0x12bbf77a] */
  AX = (r16((uint32_t)(0x12bbf77a)));
  /* 12ba2aa1 push eax */
  push32((uint32_t)(EAX));
  /* 12ba2aa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2aa6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba2aa8 mov cx, word ptr [0x12bbf776] */
  CX = (r16((uint32_t)(0x12bbf776)));
  /* 12ba2aaf push ecx */
  push32((uint32_t)(ECX));
  /* 12ba2ab0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2ab3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ba2ab6 push eax */
  push32((uint32_t)(EAX));
  /* 12ba2ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2abb call 0x12ba2c10 */
  push32(0x12ba2ac0u); f_12ba2c10();
  /* 12ba2ac0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ba2ac3:;
  /* 12ba2ac3 jmp 0x12ba2b0b */
  goto L_12ba2b0b;
L_12ba2ac5:;
  /* 12ba2ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2ac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2ac9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2acb push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba2acd push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2acf push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2ad1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba2ad3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12ba2ad5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2ad8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12ba2adb push edx */
  push32((uint32_t)(EDX));
  /* 12ba2adc push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba2ade push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba2ae0 call 0x12ba2c10 */
  push32(0x12ba2ae5u); f_12ba2c10();
  /* 12ba2ae5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2ae8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2aea push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2aec push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2aee push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba2af0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2af2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2af4 push 5 */
  push32((uint32_t)(0x5u));
  /* 12ba2af6 push 0xa */
  push32((uint32_t)(0xau));
  /* 12ba2af8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2afb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12ba2afe push ecx */
  push32((uint32_t)(ECX));
  /* 12ba2aff push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba2b01 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2b03 call 0x12ba2c10 */
  push32(0x12ba2b08u); f_12ba2c10();
  /* 12ba2b08 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ba2b0b:;
  /* 12ba2b0b mov edx, dword ptr [0x12bbee2c] */
  EDX = (r32((uint32_t)(0x12bbee2c)));
  /* 12ba2b11 cmp edx, dword ptr [0x12bbee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12bbee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2b17 jge 0x12ba2b64 */
  if ((C.sf==C.of)) goto L_12ba2b64;
  /* 12ba2b19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2b1c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12ba2b1f cmp ecx, dword ptr [0x12bbee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bbee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2b25 jl 0x12ba2b35 */
  if ((C.sf!=C.of)) goto L_12ba2b35;
  /* 12ba2b27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2b2a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12ba2b2d cmp eax, dword ptr [0x12bbee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bbee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2b33 jle 0x12ba2b3c */
  if ((C.zf||C.sf!=C.of)) goto L_12ba2b3c;
L_12ba2b35:;
  /* 12ba2b35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba2b37 jmp 0x12ba2c06 */
  goto L_12ba2c06;
L_12ba2b3c:;
  /* 12ba2b3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2b3f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12ba2b42 cmp edx, dword ptr [0x12bbee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12bbee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2b48 jle 0x12ba2b62 */
  if ((C.zf||C.sf!=C.of)) goto L_12ba2b62;
  /* 12ba2b4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2b4d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12ba2b50 cmp ecx, dword ptr [0x12bbee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bbee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2b56 jge 0x12ba2b62 */
  if ((C.sf==C.of)) goto L_12ba2b62;
  /* 12ba2b58 mov eax, 1 */
  EAX = (0x1u);
  /* 12ba2b5d jmp 0x12ba2c06 */
  goto L_12ba2c06;
L_12ba2b62:;
  /* 12ba2b62 jmp 0x12ba2ba7 */
  goto L_12ba2ba7;
L_12ba2b64:;
  /* 12ba2b64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2b67 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12ba2b6a cmp eax, dword ptr [0x12bbee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bbee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2b70 jl 0x12ba2b80 */
  if ((C.sf!=C.of)) goto L_12ba2b80;
  /* 12ba2b72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2b75 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12ba2b78 cmp edx, dword ptr [0x12bbee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12bbee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2b7e jle 0x12ba2b87 */
  if ((C.zf||C.sf!=C.of)) goto L_12ba2b87;
L_12ba2b80:;
  /* 12ba2b80 mov eax, 1 */
  EAX = (0x1u);
  /* 12ba2b85 jmp 0x12ba2c06 */
  goto L_12ba2c06;
L_12ba2b87:;
  /* 12ba2b87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2b8a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12ba2b8d cmp ecx, dword ptr [0x12bbee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bbee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2b93 jle 0x12ba2ba7 */
  if ((C.zf||C.sf!=C.of)) goto L_12ba2ba7;
  /* 12ba2b95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2b98 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12ba2b9b cmp eax, dword ptr [0x12bbee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bbee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2ba1 jge 0x12ba2ba7 */
  if ((C.sf==C.of)) goto L_12ba2ba7;
  /* 12ba2ba3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba2ba5 jmp 0x12ba2c06 */
  goto L_12ba2c06;
L_12ba2ba7:;
  /* 12ba2ba7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2baa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ba2bad imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba2bb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2bb3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ba2bb5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2bb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2bba mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12ba2bbd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba2bc3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2bc5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba2bcb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ba2bce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2bd1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12ba2bd4 cmp edx, dword ptr [0x12bbee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12bbee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2bda jne 0x12ba2bf2 */
  if (!C.zf) goto L_12ba2bf2;
  /* 12ba2bdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba2bdf cmp eax, dword ptr [0x12bbee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bbee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2be5 jl 0x12ba2bee */
  if ((C.sf!=C.of)) goto L_12ba2bee;
  /* 12ba2be7 mov eax, 1 */
  EAX = (0x1u);
  /* 12ba2bec jmp 0x12ba2c06 */
  goto L_12ba2c06;
L_12ba2bee:;
  /* 12ba2bee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba2bf0 jmp 0x12ba2c06 */
  goto L_12ba2c06;
L_12ba2bf2:;
  /* 12ba2bf2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba2bf5 cmp ecx, dword ptr [0x12bbee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bbee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2bfb jge 0x12ba2c04 */
  if ((C.sf==C.of)) goto L_12ba2c04;
  /* 12ba2bfd mov eax, 1 */
  EAX = (0x1u);
  /* 12ba2c02 jmp 0x12ba2c06 */
  goto L_12ba2c06;
L_12ba2c04:;
  /* 12ba2c04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ba2c06:;
  /* 12ba2c06 mov esp, ebp */
  ESP = (EBP);
  /* 12ba2c08 pop ebp */
  EBP = (pop32());
  /* 12ba2c09 ret  */
  ESPCHK(0x12ba2910u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c10 @ 0x12ba2c10 (504 bytes, 145 insns) */
void f_12ba2c10(void) {
  FTRACE(0x12ba2c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba2c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba2c11 mov ebp, esp */
  EBP = (ESP);
  /* 12ba2c13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba2c16 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2c1a jne 0x12ba2cec */
  if (!C.zf) goto L_12ba2cec;
  /* 12ba2c20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba2c23 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12ba2c26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba2c28 jne 0x12ba2c39 */
  if (!C.zf) goto L_12ba2c39;
  /* 12ba2c2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba2c2d mov edx, dword ptr [ecx*4 + 0x12bbee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12bbee4c)));
  /* 12ba2c34 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12ba2c37 jmp 0x12ba2c46 */
  goto L_12ba2c46;
L_12ba2c39:;
  /* 12ba2c39 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba2c3c mov ecx, dword ptr [eax*4 + 0x12bbee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12bbee80)));
  /* 12ba2c43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12ba2c46:;
  /* 12ba2c46 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba2c49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2c4c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ba2c4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba2c52 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba2c55 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba2c5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba2c5e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2c60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba2c63 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba2c66 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12ba2c69 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12ba2c6d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ba2c6e mov ecx, 7 */
  ECX = (0x7u);
  /* 12ba2c73 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ba2c75 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ba2c78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba2c7b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2c7e jge 0x12ba2c99 */
  if ((C.sf==C.of)) goto L_12ba2c99;
  /* 12ba2c80 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12ba2c83 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba2c86 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba2c89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba2c8c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba2c8f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2c92 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2c94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ba2c97 jmp 0x12ba2cad */
  goto L_12ba2cad;
L_12ba2c99:;
  /* 12ba2c99 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12ba2c9c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba2c9f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba2ca2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba2ca5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2ca8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2caa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12ba2cad:;
  /* 12ba2cad cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2cb1 jne 0x12ba2cea */
  if (!C.zf) goto L_12ba2cea;
  /* 12ba2cb3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba2cb6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12ba2cb9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ba2cbb jne 0x12ba2ccc */
  if (!C.zf) goto L_12ba2ccc;
  /* 12ba2cbd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba2cc0 mov eax, dword ptr [edx*4 + 0x12bbee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12bbee50)));
  /* 12ba2cc7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12ba2cca jmp 0x12ba2cd9 */
  goto L_12ba2cd9;
L_12ba2ccc:;
  /* 12ba2ccc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba2ccf mov edx, dword ptr [ecx*4 + 0x12bbee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12bbee84)));
  /* 12ba2cd6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12ba2cd9:;
  /* 12ba2cd9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba2cdc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2cdf jle 0x12ba2cea */
  if ((C.zf||C.sf!=C.of)) goto L_12ba2cea;
  /* 12ba2ce1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba2ce4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba2ce7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12ba2cea:;
  /* 12ba2cea jmp 0x12ba2d21 */
  goto L_12ba2d21;
L_12ba2cec:;
  /* 12ba2cec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba2cef and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12ba2cf2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba2cf4 jne 0x12ba2d05 */
  if (!C.zf) goto L_12ba2d05;
  /* 12ba2cf6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba2cf9 mov ecx, dword ptr [eax*4 + 0x12bbee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12bbee4c)));
  /* 12ba2d00 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12ba2d03 jmp 0x12ba2d12 */
  goto L_12ba2d12;
L_12ba2d05:;
  /* 12ba2d05 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba2d08 mov eax, dword ptr [edx*4 + 0x12bbee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12bbee80)));
  /* 12ba2d0f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12ba2d12:;
  /* 12ba2d12 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba2d15 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ba2d18 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba2d1b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2d1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12ba2d21:;
  /* 12ba2d21 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2d25 jne 0x12ba2d61 */
  if (!C.zf) goto L_12ba2d61;
  /* 12ba2d27 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba2d2a mov dword ptr [0x12bbee2c], eax */
  w32((uint32_t)(0x12bbee2c), (EAX));
  /* 12ba2d2f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12ba2d32 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba2d35 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12ba2d38 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2d3a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba2d3d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12ba2d40 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2d42 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba2d48 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12ba2d4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2d4d mov dword ptr [0x12bbee30], ecx */
  w32((uint32_t)(0x12bbee30), (ECX));
  /* 12ba2d53 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba2d56 mov dword ptr [0x12bbee28], edx */
  w32((uint32_t)(0x12bbee28), (EDX));
  /* 12ba2d5c jmp 0x12ba2e04 */
  goto L_12ba2e04;
L_12ba2d61:;
  /* 12ba2d61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba2d64 mov dword ptr [0x12bbee3c], eax */
  w32((uint32_t)(0x12bbee3c), (EAX));
  /* 12ba2d69 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12ba2d6c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba2d6f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12ba2d72 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2d74 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba2d77 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12ba2d7a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2d7c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba2d82 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12ba2d85 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2d87 mov dword ptr [0x12bbee40], ecx */
  w32((uint32_t)(0x12bbee40), (ECX));
  /* 12ba2d8d mov edx, dword ptr [0x12bbed98] */
  EDX = (r32((uint32_t)(0x12bbed98)));
  /* 12ba2d93 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba2d99 mov eax, dword ptr [0x12bbee40] */
  EAX = (r32((uint32_t)(0x12bbee40)));
  /* 12ba2d9e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2da0 mov dword ptr [0x12bbee40], eax */
  w32((uint32_t)(0x12bbee40), (EAX));
  /* 12ba2da5 cmp dword ptr [0x12bbee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2dac jge 0x12ba2dd1 */
  if ((C.sf==C.of)) goto L_12ba2dd1;
  /* 12ba2dae mov ecx, dword ptr [0x12bbee40] */
  ECX = (r32((uint32_t)(0x12bbee40)));
  /* 12ba2db4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2dba mov dword ptr [0x12bbee40], ecx */
  w32((uint32_t)(0x12bbee40), (ECX));
  /* 12ba2dc0 mov edx, dword ptr [0x12bbee3c] */
  EDX = (r32((uint32_t)(0x12bbee3c)));
  /* 12ba2dc6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba2dc9 mov dword ptr [0x12bbee3c], edx */
  w32((uint32_t)(0x12bbee3c), (EDX));
  /* 12ba2dcf jmp 0x12ba2dfb */
  goto L_12ba2dfb;
L_12ba2dd1:;
  /* 12ba2dd1 cmp dword ptr [0x12bbee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12bbee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2ddb jl 0x12ba2dfb */
  if ((C.sf!=C.of)) goto L_12ba2dfb;
  /* 12ba2ddd mov eax, dword ptr [0x12bbee40] */
  EAX = (r32((uint32_t)(0x12bbee40)));
  /* 12ba2de2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba2de7 mov dword ptr [0x12bbee40], eax */
  w32((uint32_t)(0x12bbee40), (EAX));
  /* 12ba2dec mov ecx, dword ptr [0x12bbee3c] */
  ECX = (r32((uint32_t)(0x12bbee3c)));
  /* 12ba2df2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2df5 mov dword ptr [0x12bbee3c], ecx */
  w32((uint32_t)(0x12bbee3c), (ECX));
L_12ba2dfb:;
  /* 12ba2dfb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba2dfe mov dword ptr [0x12bbee38], edx */
  w32((uint32_t)(0x12bbee38), (EDX));
L_12ba2e04:;
  /* 12ba2e04 mov esp, ebp */
  ESP = (EBP);
  /* 12ba2e06 pop ebp */
  EBP = (pop32());
  /* 12ba2e07 ret  */
  ESPCHK(0x12ba2c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e10 @ 0x12ba2e10 (382 bytes, 135 insns) */
void f_12ba2e10(void) {
  FTRACE(0x12ba2e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba2e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba2e11 mov ebp, esp */
  EBP = (ESP);
  /* 12ba2e13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ba2e15 push 0x12bbc090 */
  push32((uint32_t)(0x12bbc090u));
  /* 12ba2e1a push 0x12b9cad8 */
  push32((uint32_t)(0x12b9cad8u));
  /* 12ba2e1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12ba2e25 push eax */
  push32((uint32_t)(EAX));
  /* 12ba2e26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12ba2e2d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2e30 push ebx */
  push32((uint32_t)(EBX));
  /* 12ba2e31 push esi */
  push32((uint32_t)(ESI));
  /* 12ba2e32 push edi */
  push32((uint32_t)(EDI));
  /* 12ba2e33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ba2e36 cmp dword ptr [0x12bbf7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2e3d jne 0x12ba2e82 */
  if (!C.zf) goto L_12ba2e82;
  /* 12ba2e3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2e41 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2e43 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba2e45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2e47 call dword ptr [0x12bc1240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1240))), 0x12ba2e4du);
  /* 12ba2e4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba2e4f je 0x12ba2e5d */
  if (C.zf) goto L_12ba2e5d;
  /* 12ba2e51 mov dword ptr [0x12bbf7e4], 1 */
  w32((uint32_t)(0x12bbf7e4), (0x1u));
  /* 12ba2e5b jmp 0x12ba2e82 */
  goto L_12ba2e82;
L_12ba2e5d:;
  /* 12ba2e5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2e5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2e61 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba2e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2e65 call dword ptr [0x12bc1258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1258))), 0x12ba2e6bu);
  /* 12ba2e6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba2e6d je 0x12ba2e7b */
  if (C.zf) goto L_12ba2e7b;
  /* 12ba2e6f mov dword ptr [0x12bbf7e4], 2 */
  w32((uint32_t)(0x12bbf7e4), (0x2u));
  /* 12ba2e79 jmp 0x12ba2e82 */
  goto L_12ba2e82;
L_12ba2e7b:;
  /* 12ba2e7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba2e7d jmp 0x12ba2f91 */
  goto L_12ba2f91;
L_12ba2e82:;
  /* 12ba2e82 cmp dword ptr [0x12bbf7e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf7e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2e89 jne 0x12ba2ea6 */
  if (!C.zf) goto L_12ba2ea6;
  /* 12ba2e8b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba2e8e push eax */
  push32((uint32_t)(EAX));
  /* 12ba2e8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba2e92 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba2e93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba2e96 push edx */
  push32((uint32_t)(EDX));
  /* 12ba2e97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2e9a push eax */
  push32((uint32_t)(EAX));
  /* 12ba2e9b call dword ptr [0x12bc1240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1240))), 0x12ba2ea1u);
  /* 12ba2ea1 jmp 0x12ba2f91 */
  goto L_12ba2f91;
L_12ba2ea6:;
  /* 12ba2ea6 cmp dword ptr [0x12bbf7e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf7e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2ead jne 0x12ba2f8f */
  if (!C.zf) goto L_12ba2f8f;
  /* 12ba2eb3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2eb7 jne 0x12ba2ec2 */
  if (!C.zf) goto L_12ba2ec2;
  /* 12ba2eb9 mov ecx, dword ptr [0x12bbf698] */
  ECX = (r32((uint32_t)(0x12bbf698)));
  /* 12ba2ebf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12ba2ec2:;
  /* 12ba2ec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2ec4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2ec6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba2ec9 push edx */
  push32((uint32_t)(EDX));
  /* 12ba2eca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2ecd push eax */
  push32((uint32_t)(EAX));
  /* 12ba2ece call dword ptr [0x12bc1258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1258))), 0x12ba2ed4u);
  /* 12ba2ed4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12ba2ed7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2edb jne 0x12ba2ee4 */
  if (!C.zf) goto L_12ba2ee4;
  /* 12ba2edd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba2edf jmp 0x12ba2f91 */
  goto L_12ba2f91;
L_12ba2ee4:;
  /* 12ba2ee4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ba2eeb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ba2eee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2ef1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12ba2ef3 call 0x12b96b70 */
  push32(0x12ba2ef8u); f_12b96b70();
  /* 12ba2ef8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12ba2efb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ba2efe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ba2f01 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12ba2f04 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12ba2f0b jmp 0x12ba2f24 */
  goto L_12ba2f24;
  /* 12ba2f0d mov eax, 1 */
  EAX = (0x1u);
  /* 12ba2f12 ret  */
  ESPCHK(0x12ba2e10u, _esp0);
  ESP += 4; return;
  /* 12ba2f13 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba2f16 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12ba2f1d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12ba2f24:;
  /* 12ba2f24 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2f28 jne 0x12ba2f2e */
  if (!C.zf) goto L_12ba2f2e;
  /* 12ba2f2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba2f2c jmp 0x12ba2f91 */
  goto L_12ba2f91;
L_12ba2f2e:;
  /* 12ba2f2e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ba2f31 push edx */
  push32((uint32_t)(EDX));
  /* 12ba2f32 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ba2f35 push eax */
  push32((uint32_t)(EAX));
  /* 12ba2f36 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba2f39 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba2f3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba2f3d push edx */
  push32((uint32_t)(EDX));
  /* 12ba2f3e call dword ptr [0x12bc1258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1258))), 0x12ba2f44u);
  /* 12ba2f44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba2f46 jne 0x12ba2f4c */
  if (!C.zf) goto L_12ba2f4c;
  /* 12ba2f48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba2f4a jmp 0x12ba2f91 */
  goto L_12ba2f91;
L_12ba2f4c:;
  /* 12ba2f4c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2f50 jne 0x12ba2f6d */
  if (!C.zf) goto L_12ba2f6d;
  /* 12ba2f52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2f54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2f56 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ba2f58 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ba2f5b push eax */
  push32((uint32_t)(EAX));
  /* 12ba2f5c push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba2f5e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba2f61 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba2f62 call dword ptr [0x12bc132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc132c))), 0x12ba2f68u);
  /* 12ba2f68 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12ba2f6b jmp 0x12ba2f8a */
  goto L_12ba2f8a;
L_12ba2f6d:;
  /* 12ba2f6d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba2f70 push edx */
  push32((uint32_t)(EDX));
  /* 12ba2f71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba2f74 push eax */
  push32((uint32_t)(EAX));
  /* 12ba2f75 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ba2f77 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ba2f7a push ecx */
  push32((uint32_t)(ECX));
  /* 12ba2f7b push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba2f7d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba2f80 push edx */
  push32((uint32_t)(EDX));
  /* 12ba2f81 call dword ptr [0x12bc132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc132c))), 0x12ba2f87u);
  /* 12ba2f87 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12ba2f8a:;
  /* 12ba2f8a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ba2f8d jmp 0x12ba2f91 */
  goto L_12ba2f91;
L_12ba2f8f:;
  /* 12ba2f8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ba2f91:;
  /* 12ba2f91 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12ba2f94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba2f97 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12ba2f9e pop edi */
  EDI = (pop32());
  /* 12ba2f9f pop esi */
  ESI = (pop32());
  /* 12ba2fa0 pop ebx */
  EBX = (pop32());
  /* 12ba2fa1 mov esp, ebp */
  ESP = (EBP);
  /* 12ba2fa3 pop ebp */
  EBP = (pop32());
  /* 12ba2fa4 ret  */
  ESPCHK(0x12ba2e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012fb0 @ 0x12ba2fb0 (398 bytes, 140 insns) */
void f_12ba2fb0(void) {
  FTRACE(0x12ba2fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba2fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba2fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12ba2fb3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ba2fb5 push 0x12bbc0a0 */
  push32((uint32_t)(0x12bbc0a0u));
  /* 12ba2fba push 0x12b9cad8 */
  push32((uint32_t)(0x12b9cad8u));
  /* 12ba2fbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12ba2fc5 push eax */
  push32((uint32_t)(EAX));
  /* 12ba2fc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12ba2fcd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba2fd0 push ebx */
  push32((uint32_t)(EBX));
  /* 12ba2fd1 push esi */
  push32((uint32_t)(ESI));
  /* 12ba2fd2 push edi */
  push32((uint32_t)(EDI));
  /* 12ba2fd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ba2fd6 cmp dword ptr [0x12bbf7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba2fdd jne 0x12ba3022 */
  if (!C.zf) goto L_12ba3022;
  /* 12ba2fdf push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2fe1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba2fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2fe7 call dword ptr [0x12bc1240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1240))), 0x12ba2fedu);
  /* 12ba2fed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba2fef je 0x12ba2ffd */
  if (C.zf) goto L_12ba2ffd;
  /* 12ba2ff1 mov dword ptr [0x12bbf7e8], 1 */
  w32((uint32_t)(0x12bbf7e8), (0x1u));
  /* 12ba2ffb jmp 0x12ba3022 */
  goto L_12ba3022;
L_12ba2ffd:;
  /* 12ba2ffd push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba2fff push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba3001 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba3003 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba3005 call dword ptr [0x12bc1258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1258))), 0x12ba300bu);
  /* 12ba300b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba300d je 0x12ba301b */
  if (C.zf) goto L_12ba301b;
  /* 12ba300f mov dword ptr [0x12bbf7e8], 2 */
  w32((uint32_t)(0x12bbf7e8), (0x2u));
  /* 12ba3019 jmp 0x12ba3022 */
  goto L_12ba3022;
L_12ba301b:;
  /* 12ba301b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba301d jmp 0x12ba3141 */
  goto L_12ba3141;
L_12ba3022:;
  /* 12ba3022 cmp dword ptr [0x12bbf7e8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf7e8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3029 jne 0x12ba3046 */
  if (!C.zf) goto L_12ba3046;
  /* 12ba302b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba302e push eax */
  push32((uint32_t)(EAX));
  /* 12ba302f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba3032 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3033 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba3036 push edx */
  push32((uint32_t)(EDX));
  /* 12ba3037 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba303a push eax */
  push32((uint32_t)(EAX));
  /* 12ba303b call dword ptr [0x12bc1258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1258))), 0x12ba3041u);
  /* 12ba3041 jmp 0x12ba3141 */
  goto L_12ba3141;
L_12ba3046:;
  /* 12ba3046 cmp dword ptr [0x12bbf7e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf7e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba304d jne 0x12ba313f */
  if (!C.zf) goto L_12ba313f;
  /* 12ba3053 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3057 jne 0x12ba3062 */
  if (!C.zf) goto L_12ba3062;
  /* 12ba3059 mov ecx, dword ptr [0x12bbf698] */
  ECX = (r32((uint32_t)(0x12bbf698)));
  /* 12ba305f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12ba3062:;
  /* 12ba3062 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba3064 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba3066 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba3069 push edx */
  push32((uint32_t)(EDX));
  /* 12ba306a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba306d push eax */
  push32((uint32_t)(EAX));
  /* 12ba306e call dword ptr [0x12bc1240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1240))), 0x12ba3074u);
  /* 12ba3074 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12ba3077 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba307b jne 0x12ba3084 */
  if (!C.zf) goto L_12ba3084;
  /* 12ba307d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba307f jmp 0x12ba3141 */
  goto L_12ba3141;
L_12ba3084:;
  /* 12ba3084 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ba308b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ba308e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12ba3090 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3093 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12ba3095 call 0x12b96b70 */
  push32(0x12ba309au); f_12b96b70();
  /* 12ba309a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12ba309d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ba30a0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ba30a3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12ba30a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12ba30ad jmp 0x12ba30c6 */
  goto L_12ba30c6;
  /* 12ba30af mov eax, 1 */
  EAX = (0x1u);
  /* 12ba30b4 ret  */
  ESPCHK(0x12ba2fb0u, _esp0);
  ESP += 4; return;
  /* 12ba30b5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba30b8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12ba30bf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12ba30c6:;
  /* 12ba30c6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba30ca jne 0x12ba30d0 */
  if (!C.zf) goto L_12ba30d0;
  /* 12ba30cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba30ce jmp 0x12ba3141 */
  goto L_12ba3141;
L_12ba30d0:;
  /* 12ba30d0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ba30d3 push edx */
  push32((uint32_t)(EDX));
  /* 12ba30d4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ba30d7 push eax */
  push32((uint32_t)(EAX));
  /* 12ba30d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba30db push ecx */
  push32((uint32_t)(ECX));
  /* 12ba30dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba30df push edx */
  push32((uint32_t)(EDX));
  /* 12ba30e0 call dword ptr [0x12bc1240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1240))), 0x12ba30e6u);
  /* 12ba30e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba30e8 jne 0x12ba30ee */
  if (!C.zf) goto L_12ba30ee;
  /* 12ba30ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba30ec jmp 0x12ba3141 */
  goto L_12ba3141;
L_12ba30ee:;
  /* 12ba30ee cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba30f2 jne 0x12ba3116 */
  if (!C.zf) goto L_12ba3116;
  /* 12ba30f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba30f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba30f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba30fa push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba30fc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ba30fe mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ba3101 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3102 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12ba3107 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba310a push ecx */
  push32((uint32_t)(ECX));
  /* 12ba310b call dword ptr [0x12bc12e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12e0))), 0x12ba3111u);
  /* 12ba3111 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12ba3114 jmp 0x12ba313a */
  goto L_12ba313a;
L_12ba3116:;
  /* 12ba3116 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba3118 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba311a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba311d push edx */
  push32((uint32_t)(EDX));
  /* 12ba311e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba3121 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3122 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ba3124 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ba3127 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3128 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12ba312d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba3130 push edx */
  push32((uint32_t)(EDX));
  /* 12ba3131 call dword ptr [0x12bc12e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12e0))), 0x12ba3137u);
  /* 12ba3137 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12ba313a:;
  /* 12ba313a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ba313d jmp 0x12ba3141 */
  goto L_12ba3141;
L_12ba313f:;
  /* 12ba313f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ba3141:;
  /* 12ba3141 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12ba3144 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba3147 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12ba314e pop edi */
  EDI = (pop32());
  /* 12ba314f pop esi */
  ESI = (pop32());
  /* 12ba3150 pop ebx */
  EBX = (pop32());
  /* 12ba3151 mov esp, ebp */
  ESP = (EBP);
  /* 12ba3153 pop ebp */
  EBP = (pop32());
  /* 12ba3154 ret  */
  ESPCHK(0x12ba2fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013160 @ 0x12ba3160 (11 bytes, 6 insns) */
void f_12ba3160(void) {
  FTRACE(0x12ba3160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba3160 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba3161 mov ebp, esp */
  EBP = (ESP);
  /* 12ba3163 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3166 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3169 pop ebp */
  EBP = (pop32());
  /* 12ba316a ret  */
  ESPCHK(0x12ba3160u, _esp0);
  ESP += 4; return;
}

/* FUN_10013170 @ 0x12ba3170 (147 bytes, 43 insns) */
void f_12ba3170(void) {
  FTRACE(0x12ba3170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba3170 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba3171 mov ebp, esp */
  EBP = (ESP);
  /* 12ba3173 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3174 cmp dword ptr [0x12bbf688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba317b jne 0x12ba3197 */
  if (!C.zf) goto L_12ba3197;
  /* 12ba317d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3181 jl 0x12ba3192 */
  if ((C.sf!=C.of)) goto L_12ba3192;
  /* 12ba3183 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3187 jg 0x12ba3192 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ba3192;
  /* 12ba3189 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba318c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba318f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12ba3192:;
  /* 12ba3192 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3195 jmp 0x12ba31ff */
  goto L_12ba31ff;
L_12ba3197:;
  /* 12ba3197 push 0x12bbf814 */
  push32((uint32_t)(0x12bbf814u));
  /* 12ba319c call dword ptr [0x12bc1288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1288))), 0x12ba31a2u);
  /* 12ba31a2 cmp dword ptr [0x12bbf804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba31a9 je 0x12ba31c9 */
  if (C.zf) goto L_12ba31c9;
  /* 12ba31ab push 0x12bbf814 */
  push32((uint32_t)(0x12bbf814u));
  /* 12ba31b0 call dword ptr [0x12bc1278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1278))), 0x12ba31b6u);
  /* 12ba31b6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12ba31b8 call 0x12b973d0 */
  push32(0x12ba31bdu); f_12b973d0();
  /* 12ba31bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba31c0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12ba31c7 jmp 0x12ba31d0 */
  goto L_12ba31d0;
L_12ba31c9:;
  /* 12ba31c9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12ba31d0:;
  /* 12ba31d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba31d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba31d4 call 0x12ba3210 */
  push32(0x12ba31d9u); f_12ba3210();
  /* 12ba31d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba31dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ba31df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba31e3 je 0x12ba31f1 */
  if (C.zf) goto L_12ba31f1;
  /* 12ba31e5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12ba31e7 call 0x12b97470 */
  push32(0x12ba31ecu); f_12b97470();
  /* 12ba31ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba31ef jmp 0x12ba31fc */
  goto L_12ba31fc;
L_12ba31f1:;
  /* 12ba31f1 push 0x12bbf814 */
  push32((uint32_t)(0x12bbf814u));
  /* 12ba31f6 call dword ptr [0x12bc1278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1278))), 0x12ba31fcu);
L_12ba31fc:;
  /* 12ba31fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12ba31ff:;
  /* 12ba31ff mov esp, ebp */
  ESP = (EBP);
  /* 12ba3201 pop ebp */
  EBP = (pop32());
  /* 12ba3202 ret  */
  ESPCHK(0x12ba3170u, _esp0);
  ESP += 4; return;
}

/* FUN_10013210 @ 0x12ba3210 (299 bytes, 91 insns) */
void f_12ba3210(void) {
  FTRACE(0x12ba3210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba3210 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba3211 mov ebp, esp */
  EBP = (ESP);
  /* 12ba3213 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba3216 cmp dword ptr [0x12bbf688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba321d jne 0x12ba323c */
  if (!C.zf) goto L_12ba323c;
  /* 12ba321f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3223 jl 0x12ba3234 */
  if ((C.sf!=C.of)) goto L_12ba3234;
  /* 12ba3225 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3229 jg 0x12ba3234 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ba3234;
  /* 12ba322b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba322e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3231 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12ba3234:;
  /* 12ba3234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3237 jmp 0x12ba3337 */
  goto L_12ba3337;
L_12ba323c:;
  /* 12ba323c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3243 jge 0x12ba3283 */
  if ((C.sf==C.of)) goto L_12ba3283;
  /* 12ba3245 cmp dword ptr [0x12bbdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba324c jle 0x12ba3261 */
  if ((C.zf||C.sf!=C.of)) goto L_12ba3261;
  /* 12ba324e push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba3250 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3253 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3254 call 0x12b999e0 */
  push32(0x12ba3259u); f_12b999e0();
  /* 12ba3259 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba325c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12ba325f jmp 0x12ba3275 */
  goto L_12ba3275;
L_12ba3261:;
  /* 12ba3261 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3264 mov eax, dword ptr [0x12bbdc98] */
  EAX = (r32((uint32_t)(0x12bbdc98)));
  /* 12ba3269 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba326b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12ba326f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12ba3272 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12ba3275:;
  /* 12ba3275 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3279 jne 0x12ba3283 */
  if (!C.zf) goto L_12ba3283;
  /* 12ba327b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba327e jmp 0x12ba3337 */
  goto L_12ba3337;
L_12ba3283:;
  /* 12ba3283 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3286 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12ba3289 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ba328f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ba3295 mov eax, dword ptr [0x12bbdc98] */
  EAX = (r32((uint32_t)(0x12bbdc98)));
  /* 12ba329a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba329c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12ba32a0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12ba32a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ba32a8 je 0x12ba32cc */
  if (C.zf) goto L_12ba32cc;
  /* 12ba32aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba32ad sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12ba32b0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ba32b6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12ba32b9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12ba32bc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12ba32bf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12ba32c3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12ba32ca jmp 0x12ba32dd */
  goto L_12ba32dd;
L_12ba32cc:;
  /* 12ba32cc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12ba32cf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12ba32d2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12ba32d6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12ba32dd:;
  /* 12ba32dd push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba32df push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba32e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12ba32e3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12ba32e6 push edx */
  push32((uint32_t)(EDX));
  /* 12ba32e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba32ea push eax */
  push32((uint32_t)(EAX));
  /* 12ba32eb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12ba32ee push ecx */
  push32((uint32_t)(ECX));
  /* 12ba32ef push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12ba32f4 mov edx, dword ptr [0x12bbf688] */
  EDX = (r32((uint32_t)(0x12bbf688)));
  /* 12ba32fa push edx */
  push32((uint32_t)(EDX));
  /* 12ba32fb call 0x12b9bdc0 */
  push32(0x12ba3300u); f_12b9bdc0();
  /* 12ba3300 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3303 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ba3306 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba330a jne 0x12ba3311 */
  if (!C.zf) goto L_12ba3311;
  /* 12ba330c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba330f jmp 0x12ba3337 */
  goto L_12ba3337;
L_12ba3311:;
  /* 12ba3311 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3315 jne 0x12ba3321 */
  if (!C.zf) goto L_12ba3321;
  /* 12ba3317 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba331a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba331f jmp 0x12ba3337 */
  goto L_12ba3337;
L_12ba3321:;
  /* 12ba3321 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3324 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3329 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12ba332c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ba3332 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12ba3335 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12ba3337:;
  /* 12ba3337 mov esp, ebp */
  ESP = (EBP);
  /* 12ba3339 pop ebp */
  EBP = (pop32());
  /* 12ba333a ret  */
  ESPCHK(0x12ba3210u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12ba3340 (52 bytes, 19 insns) */
void f_12ba3340(void) {
  FTRACE(0x12ba3340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba3340 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12ba3344 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12ba3348 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba334a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12ba334e jne 0x12ba3359 */
  if (!C.zf) goto L_12ba3359;
  /* 12ba3350 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12ba3354 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12ba3356 ret 0x10 */
  ESPCHK(0x12ba3340u, _esp0);
  ESP += 20; return;
L_12ba3359:;
  /* 12ba3359 push ebx */
  push32((uint32_t)(EBX));
  /* 12ba335a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12ba335c mov ebx, eax */
  EBX = (EAX);
  /* 12ba335e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12ba3362 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12ba3366 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3368 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12ba336c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12ba336e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3370 pop ebx */
  EBX = (pop32());
  /* 12ba3371 ret 0x10 */
  ESPCHK(0x12ba3340u, _esp0);
  ESP += 20; return;
}

/* FUN_10013380 @ 0x12ba3380 (46 bytes, 18 insns) */
void f_12ba3380(void) {
  FTRACE(0x12ba3380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba3380 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba3381 mov ebp, esp */
  EBP = (ESP);
  /* 12ba3383 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3384 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12ba3386 call 0x12b973d0 */
  push32(0x12ba338bu); f_12b973d0();
  /* 12ba338b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba338e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3391 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3392 call 0x12ba33b0 */
  push32(0x12ba3397u); f_12ba33b0();
  /* 12ba3397 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba339a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ba339d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12ba339f call 0x12b97470 */
  push32(0x12ba33a4u); f_12b97470();
  /* 12ba33a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba33a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba33aa mov esp, ebp */
  ESP = (EBP);
  /* 12ba33ac pop ebp */
  EBP = (pop32());
  /* 12ba33ad ret  */
  ESPCHK(0x12ba3380u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12ba33b0 (198 bytes, 69 insns) */
void f_12ba33b0(void) {
  FTRACE(0x12ba33b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba33b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba33b1 mov ebp, esp */
  EBP = (ESP);
  /* 12ba33b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba33b6 mov eax, dword ptr [0x12bbf4a4] */
  EAX = (r32((uint32_t)(0x12bbf4a4)));
  /* 12ba33bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ba33be cmp dword ptr [0x12bc0fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba33c5 jne 0x12ba33ce */
  if (!C.zf) goto L_12ba33ce;
  /* 12ba33c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba33c9 jmp 0x12ba3472 */
  goto L_12ba3472;
L_12ba33ce:;
  /* 12ba33ce cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba33d2 jne 0x12ba33f6 */
  if (!C.zf) goto L_12ba33f6;
  /* 12ba33d4 cmp dword ptr [0x12bbf4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba33db je 0x12ba33f6 */
  if (C.zf) goto L_12ba33f6;
  /* 12ba33dd call 0x12ba34d0 */
  push32(0x12ba33e2u); f_12ba34d0();
  /* 12ba33e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba33e4 je 0x12ba33ed */
  if (C.zf) goto L_12ba33ed;
  /* 12ba33e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba33e8 jmp 0x12ba3472 */
  goto L_12ba3472;
L_12ba33ed:;
  /* 12ba33ed mov ecx, dword ptr [0x12bbf4a4] */
  ECX = (r32((uint32_t)(0x12bbf4a4)));
  /* 12ba33f3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12ba33f6:;
  /* 12ba33f6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba33fa je 0x12ba3470 */
  if (C.zf) goto L_12ba3470;
  /* 12ba33fc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3400 je 0x12ba3470 */
  if (C.zf) goto L_12ba3470;
  /* 12ba3402 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3405 push edx */
  push32((uint32_t)(EDX));
  /* 12ba3406 call 0x12b96800 */
  push32(0x12ba340bu); f_12b96800();
  /* 12ba340b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba340e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ba3411:;
  /* 12ba3411 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3414 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3417 je 0x12ba3470 */
  if (C.zf) goto L_12ba3470;
  /* 12ba3419 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba341c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba341e push edx */
  push32((uint32_t)(EDX));
  /* 12ba341f call 0x12b96800 */
  push32(0x12ba3424u); f_12b96800();
  /* 12ba3424 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3427 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba342a jbe 0x12ba3465 */
  if ((C.cf||C.zf)) goto L_12ba3465;
  /* 12ba342c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba342f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ba3431 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba3434 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12ba3438 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba343b jne 0x12ba3465 */
  if (!C.zf) goto L_12ba3465;
  /* 12ba343d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba3440 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3441 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3444 push edx */
  push32((uint32_t)(EDX));
  /* 12ba3445 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3448 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ba344a push ecx */
  push32((uint32_t)(ECX));
  /* 12ba344b call 0x12ba3480 */
  push32(0x12ba3450u); f_12ba3480();
  /* 12ba3450 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3453 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba3455 jne 0x12ba3465 */
  if (!C.zf) goto L_12ba3465;
  /* 12ba3457 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba345a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ba345c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba345f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12ba3463 jmp 0x12ba3472 */
  goto L_12ba3472;
L_12ba3465:;
  /* 12ba3465 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3468 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba346b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ba346e jmp 0x12ba3411 */
  goto L_12ba3411;
L_12ba3470:;
  /* 12ba3470 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ba3472:;
  /* 12ba3472 mov esp, ebp */
  ESP = (EBP);
  /* 12ba3474 pop ebp */
  EBP = (pop32());
  /* 12ba3475 ret  */
  ESPCHK(0x12ba33b0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12ba3480 (79 bytes, 32 insns) */
void f_12ba3480(void) {
  FTRACE(0x12ba3480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba3480 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba3481 mov ebp, esp */
  EBP = (ESP);
  /* 12ba3483 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3484 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3488 jne 0x12ba348e */
  if (!C.zf) goto L_12ba348e;
  /* 12ba348a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba348c jmp 0x12ba34cb */
  goto L_12ba34cb;
L_12ba348e:;
  /* 12ba348e mov eax, dword ptr [0x12bc0b64] */
  EAX = (r32((uint32_t)(0x12bc0b64)));
  /* 12ba3493 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3494 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba3497 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3498 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba349b push edx */
  push32((uint32_t)(EDX));
  /* 12ba349c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba349f push eax */
  push32((uint32_t)(EAX));
  /* 12ba34a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba34a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba34a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba34a6 mov edx, dword ptr [0x12bc0e04] */
  EDX = (r32((uint32_t)(0x12bc0e04)));
  /* 12ba34ac push edx */
  push32((uint32_t)(EDX));
  /* 12ba34ad call 0x12ba3580 */
  push32(0x12ba34b2u); f_12ba3580();
  /* 12ba34b2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba34b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ba34b8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba34bc jne 0x12ba34c5 */
  if (!C.zf) goto L_12ba34c5;
  /* 12ba34be mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12ba34c3 jmp 0x12ba34cb */
  goto L_12ba34cb;
L_12ba34c5:;
  /* 12ba34c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba34c8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12ba34cb:;
  /* 12ba34cb mov esp, ebp */
  ESP = (EBP);
  /* 12ba34cd pop ebp */
  EBP = (pop32());
  /* 12ba34ce ret  */
  ESPCHK(0x12ba3480u, _esp0);
  ESP += 4; return;
}

/* FUN_100134d0 @ 0x12ba34d0 (174 bytes, 66 insns) */
void f_12ba34d0(void) {
  FTRACE(0x12ba34d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba34d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba34d1 mov ebp, esp */
  EBP = (ESP);
  /* 12ba34d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba34d6 mov eax, dword ptr [0x12bbf4ac] */
  EAX = (r32((uint32_t)(0x12bbf4ac)));
  /* 12ba34db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ba34de:;
  /* 12ba34de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba34e1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba34e4 je 0x12ba3578 */
  if (C.zf) goto L_12ba3578;
  /* 12ba34ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba34ec push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba34ee push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba34f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba34f2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ba34f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba34f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ba34f9 push eax */
  push32((uint32_t)(EAX));
  /* 12ba34fa push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba34fc push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba34fe call dword ptr [0x12bc12e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12e0))), 0x12ba3504u);
  /* 12ba3504 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ba3507 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba350b jne 0x12ba3512 */
  if (!C.zf) goto L_12ba3512;
  /* 12ba350d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3510 jmp 0x12ba357a */
  goto L_12ba357a;
L_12ba3512:;
  /* 12ba3512 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12ba3514 push 0x12bbc0ac */
  push32((uint32_t)(0x12bbc0acu));
  /* 12ba3519 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba351b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba351e push ecx */
  push32((uint32_t)(ECX));
  /* 12ba351f call 0x12b939d0 */
  push32(0x12ba3524u); f_12b939d0();
  /* 12ba3524 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3527 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ba352a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba352e jne 0x12ba3535 */
  if (!C.zf) goto L_12ba3535;
  /* 12ba3530 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3533 jmp 0x12ba357a */
  goto L_12ba357a;
L_12ba3535:;
  /* 12ba3535 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba3537 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba3539 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba353c push edx */
  push32((uint32_t)(EDX));
  /* 12ba353d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3540 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3541 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ba3543 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba3546 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba3548 push edx */
  push32((uint32_t)(EDX));
  /* 12ba3549 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba354b push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba354d call dword ptr [0x12bc12e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12e0))), 0x12ba3553u);
  /* 12ba3553 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba3555 jne 0x12ba355c */
  if (!C.zf) goto L_12ba355c;
  /* 12ba3557 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba355a jmp 0x12ba357a */
  goto L_12ba357a;
L_12ba355c:;
  /* 12ba355c push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba355e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3561 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3562 call 0x12ba39d0 */
  push32(0x12ba3567u); f_12ba39d0();
  /* 12ba3567 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba356a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba356d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3570 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ba3573 jmp 0x12ba34de */
  goto L_12ba34de;
L_12ba3578:;
  /* 12ba3578 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ba357a:;
  /* 12ba357a mov esp, ebp */
  ESP = (EBP);
  /* 12ba357c pop ebp */
  EBP = (pop32());
  /* 12ba357d ret  */
  ESPCHK(0x12ba34d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013580 @ 0x12ba3580 (970 bytes, 340 insns) */
void f_12ba3580(void) {
  FTRACE(0x12ba3580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba3580 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba3581 mov ebp, esp */
  EBP = (ESP);
  /* 12ba3583 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ba3585 push 0x12bbc100 */
  push32((uint32_t)(0x12bbc100u));
  /* 12ba358a push 0x12b9cad8 */
  push32((uint32_t)(0x12b9cad8u));
  /* 12ba358f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12ba3595 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3596 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12ba359d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba35a0 push ebx */
  push32((uint32_t)(EBX));
  /* 12ba35a1 push esi */
  push32((uint32_t)(ESI));
  /* 12ba35a2 push edi */
  push32((uint32_t)(EDI));
  /* 12ba35a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ba35a6 cmp dword ptr [0x12bbf7ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf7ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba35ad jne 0x12ba3606 */
  if (!C.zf) goto L_12ba3606;
  /* 12ba35af push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba35b1 push 0x12bbb758 */
  push32((uint32_t)(0x12bbb758u));
  /* 12ba35b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba35b8 push 0x12bbb758 */
  push32((uint32_t)(0x12bbb758u));
  /* 12ba35bd push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba35bf push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba35c1 call dword ptr [0x12bc1238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1238))), 0x12ba35c7u);
  /* 12ba35c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba35c9 je 0x12ba35d7 */
  if (C.zf) goto L_12ba35d7;
  /* 12ba35cb mov dword ptr [0x12bbf7ec], 1 */
  w32((uint32_t)(0x12bbf7ec), (0x1u));
  /* 12ba35d5 jmp 0x12ba3606 */
  goto L_12ba3606;
L_12ba35d7:;
  /* 12ba35d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba35d9 push 0x12bbb754 */
  push32((uint32_t)(0x12bbb754u));
  /* 12ba35de push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba35e0 push 0x12bbb754 */
  push32((uint32_t)(0x12bbb754u));
  /* 12ba35e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba35e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba35e9 call dword ptr [0x12bc123c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc123c))), 0x12ba35efu);
  /* 12ba35ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba35f1 je 0x12ba35ff */
  if (C.zf) goto L_12ba35ff;
  /* 12ba35f3 mov dword ptr [0x12bbf7ec], 2 */
  w32((uint32_t)(0x12bbf7ec), (0x2u));
  /* 12ba35fd jmp 0x12ba3606 */
  goto L_12ba3606;
L_12ba35ff:;
  /* 12ba35ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3601 jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba3606:;
  /* 12ba3606 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba360a jle 0x12ba361f */
  if ((C.zf||C.sf!=C.of)) goto L_12ba361f;
  /* 12ba360c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba360f push eax */
  push32((uint32_t)(EAX));
  /* 12ba3610 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba3613 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3614 call 0x12ba3980 */
  push32(0x12ba3619u); f_12ba3980();
  /* 12ba3619 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba361c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12ba361f:;
  /* 12ba361f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3623 jle 0x12ba3638 */
  if ((C.zf||C.sf!=C.of)) goto L_12ba3638;
  /* 12ba3625 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12ba3628 push edx */
  push32((uint32_t)(EDX));
  /* 12ba3629 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba362c push eax */
  push32((uint32_t)(EAX));
  /* 12ba362d call 0x12ba3980 */
  push32(0x12ba3632u); f_12ba3980();
  /* 12ba3632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3635 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12ba3638:;
  /* 12ba3638 cmp dword ptr [0x12bbf7ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf7ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba363f jne 0x12ba3664 */
  if (!C.zf) goto L_12ba3664;
  /* 12ba3641 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12ba3644 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3645 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba3648 push edx */
  push32((uint32_t)(EDX));
  /* 12ba3649 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba364c push eax */
  push32((uint32_t)(EAX));
  /* 12ba364d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba3650 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3651 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba3654 push edx */
  push32((uint32_t)(EDX));
  /* 12ba3655 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3658 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3659 call dword ptr [0x12bc123c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc123c))), 0x12ba365fu);
  /* 12ba365f jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba3664:;
  /* 12ba3664 cmp dword ptr [0x12bbf7ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf7ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba366b jne 0x12ba3962 */
  if (!C.zf) goto L_12ba3962;
  /* 12ba3671 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3675 jne 0x12ba3680 */
  if (!C.zf) goto L_12ba3680;
  /* 12ba3677 mov ecx, dword ptr [0x12bbf698] */
  ECX = (r32((uint32_t)(0x12bbf698)));
  /* 12ba367d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12ba3680:;
  /* 12ba3680 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3684 je 0x12ba3690 */
  if (C.zf) goto L_12ba3690;
  /* 12ba3686 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba368a jne 0x12ba380c */
  if (!C.zf) goto L_12ba380c;
L_12ba3690:;
  /* 12ba3690 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba3693 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3696 jne 0x12ba36a2 */
  if (!C.zf) goto L_12ba36a2;
  /* 12ba3698 mov eax, 2 */
  EAX = (0x2u);
  /* 12ba369d jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba36a2:;
  /* 12ba36a2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba36a6 jle 0x12ba36b2 */
  if ((C.zf||C.sf!=C.of)) goto L_12ba36b2;
  /* 12ba36a8 mov eax, 1 */
  EAX = (0x1u);
  /* 12ba36ad jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba36b2:;
  /* 12ba36b2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba36b6 jle 0x12ba36c2 */
  if ((C.zf||C.sf!=C.of)) goto L_12ba36c2;
  /* 12ba36b8 mov eax, 3 */
  EAX = (0x3u);
  /* 12ba36bd jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba36c2:;
  /* 12ba36c2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12ba36c5 push eax */
  push32((uint32_t)(EAX));
  /* 12ba36c6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12ba36c9 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba36ca call dword ptr [0x12bc1320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1320))), 0x12ba36d0u);
  /* 12ba36d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba36d2 jne 0x12ba36db */
  if (!C.zf) goto L_12ba36db;
  /* 12ba36d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba36d6 jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba36db:;
  /* 12ba36db cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba36df jne 0x12ba36e7 */
  if (!C.zf) goto L_12ba36e7;
  /* 12ba36e1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba36e5 je 0x12ba3714 */
  if (C.zf) goto L_12ba3714;
L_12ba36e7:;
  /* 12ba36e7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba36eb jne 0x12ba36f3 */
  if (!C.zf) goto L_12ba36f3;
  /* 12ba36ed cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba36f1 je 0x12ba3714 */
  if (C.zf) goto L_12ba3714;
L_12ba36f3:;
  /* 12ba36f3 push 0x12bbc0c0 */
  push32((uint32_t)(0x12bbc0c0u));
  /* 12ba36f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba36fa push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12ba36ff push 0x12bbc0b8 */
  push32((uint32_t)(0x12bbc0b8u));
  /* 12ba3704 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba3706 call 0x12b92a90 */
  push32(0x12ba370bu); f_12b92a90();
  /* 12ba370b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba370e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3711 jne 0x12ba3714 */
  if (!C.zf) goto L_12ba3714;
  /* 12ba3713 int3  */
  x86_unimpl("int3 @ 0x12ba3713");
L_12ba3714:;
  /* 12ba3714 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba3716 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba3718 jne 0x12ba36db */
  if (!C.zf) goto L_12ba36db;
  /* 12ba371a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba371e jle 0x12ba3793 */
  if ((C.zf||C.sf!=C.of)) goto L_12ba3793;
  /* 12ba3720 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3724 jae 0x12ba3730 */
  if (!C.cf) goto L_12ba3730;
  /* 12ba3726 mov eax, 3 */
  EAX = (0x3u);
  /* 12ba372b jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba3730:;
  /* 12ba3730 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12ba3733 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12ba3736 jmp 0x12ba3741 */
  goto L_12ba3741;
L_12ba3738:;
  /* 12ba3738 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ba373b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba373e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12ba3741:;
  /* 12ba3741 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ba3744 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3746 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ba3748 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba374a je 0x12ba3789 */
  if (C.zf) goto L_12ba3789;
  /* 12ba374c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ba374f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba3751 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12ba3754 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba3756 je 0x12ba3789 */
  if (C.zf) goto L_12ba3789;
  /* 12ba3758 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba375b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba375d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ba375f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ba3762 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3764 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ba3766 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3768 jl 0x12ba3787 */
  if ((C.sf!=C.of)) goto L_12ba3787;
  /* 12ba376a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba376d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba376f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ba3771 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ba3774 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba3776 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12ba3779 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba377b jg 0x12ba3787 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ba3787;
  /* 12ba377d mov eax, 2 */
  EAX = (0x2u);
  /* 12ba3782 jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba3787:;
  /* 12ba3787 jmp 0x12ba3738 */
  goto L_12ba3738;
L_12ba3789:;
  /* 12ba3789 mov eax, 3 */
  EAX = (0x3u);
  /* 12ba378e jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba3793:;
  /* 12ba3793 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3797 jle 0x12ba380c */
  if ((C.zf||C.sf!=C.of)) goto L_12ba380c;
  /* 12ba3799 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba379d jae 0x12ba37a9 */
  if (!C.cf) goto L_12ba37a9;
  /* 12ba379f mov eax, 1 */
  EAX = (0x1u);
  /* 12ba37a4 jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba37a9:;
  /* 12ba37a9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12ba37ac mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12ba37af jmp 0x12ba37ba */
  goto L_12ba37ba;
L_12ba37b1:;
  /* 12ba37b1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ba37b4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba37b7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12ba37ba:;
  /* 12ba37ba mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ba37bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba37bf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ba37c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba37c3 je 0x12ba3802 */
  if (C.zf) goto L_12ba3802;
  /* 12ba37c5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ba37c8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba37ca mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12ba37cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ba37cf je 0x12ba3802 */
  if (C.zf) goto L_12ba3802;
  /* 12ba37d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba37d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba37d6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ba37d8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ba37db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba37dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ba37df cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba37e1 jl 0x12ba3800 */
  if ((C.sf!=C.of)) goto L_12ba3800;
  /* 12ba37e3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba37e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba37e8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ba37ea mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12ba37ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba37ef mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12ba37f2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba37f4 jg 0x12ba3800 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ba3800;
  /* 12ba37f6 mov eax, 2 */
  EAX = (0x2u);
  /* 12ba37fb jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba3800:;
  /* 12ba3800 jmp 0x12ba37b1 */
  goto L_12ba37b1;
L_12ba3802:;
  /* 12ba3802 mov eax, 1 */
  EAX = (0x1u);
  /* 12ba3807 jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba380c:;
  /* 12ba380c push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba380e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba3810 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba3813 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3814 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba3817 push edx */
  push32((uint32_t)(EDX));
  /* 12ba3818 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ba381a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12ba381d push eax */
  push32((uint32_t)(EAX));
  /* 12ba381e call dword ptr [0x12bc132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc132c))), 0x12ba3824u);
  /* 12ba3824 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12ba3827 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba382b jne 0x12ba3834 */
  if (!C.zf) goto L_12ba3834;
  /* 12ba382d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba382f jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba3834:;
  /* 12ba3834 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ba383b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ba383e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12ba3840 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3843 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12ba3845 call 0x12b96b70 */
  push32(0x12ba384au); f_12b96b70();
  /* 12ba384a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12ba384d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ba3850 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12ba3853 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12ba3856 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12ba385d jmp 0x12ba3876 */
  goto L_12ba3876;
  /* 12ba385f mov eax, 1 */
  EAX = (0x1u);
  /* 12ba3864 ret  */
  ESPCHK(0x12ba3580u, _esp0);
  ESP += 4; return;
  /* 12ba3865 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba3868 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12ba386f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12ba3876:;
  /* 12ba3876 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba387a jne 0x12ba3883 */
  if (!C.zf) goto L_12ba3883;
  /* 12ba387c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba387e jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba3883:;
  /* 12ba3883 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ba3886 push edx */
  push32((uint32_t)(EDX));
  /* 12ba3887 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ba388a push eax */
  push32((uint32_t)(EAX));
  /* 12ba388b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba388e push ecx */
  push32((uint32_t)(ECX));
  /* 12ba388f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba3892 push edx */
  push32((uint32_t)(EDX));
  /* 12ba3893 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba3895 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12ba3898 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3899 call dword ptr [0x12bc132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc132c))), 0x12ba389fu);
  /* 12ba389f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba38a1 jne 0x12ba38aa */
  if (!C.zf) goto L_12ba38aa;
  /* 12ba38a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba38a5 jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba38aa:;
  /* 12ba38aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba38ac push 0 */
  push32((uint32_t)(0x0u));
  /* 12ba38ae mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12ba38b1 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba38b2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba38b5 push edx */
  push32((uint32_t)(EDX));
  /* 12ba38b6 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ba38b8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12ba38bb push eax */
  push32((uint32_t)(EAX));
  /* 12ba38bc call dword ptr [0x12bc132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc132c))), 0x12ba38c2u);
  /* 12ba38c2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12ba38c5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba38c9 jne 0x12ba38d2 */
  if (!C.zf) goto L_12ba38d2;
  /* 12ba38cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba38cd jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba38d2:;
  /* 12ba38d2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12ba38d9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ba38dc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12ba38de add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba38e1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12ba38e3 call 0x12b96b70 */
  push32(0x12ba38e8u); f_12b96b70();
  /* 12ba38e8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12ba38eb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12ba38ee mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12ba38f1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12ba38f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12ba38fb jmp 0x12ba3914 */
  goto L_12ba3914;
  /* 12ba38fd mov eax, 1 */
  EAX = (0x1u);
  /* 12ba3902 ret  */
  ESPCHK(0x12ba3580u, _esp0);
  ESP += 4; return;
  /* 12ba3903 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba3906 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12ba390d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12ba3914:;
  /* 12ba3914 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3918 jne 0x12ba391e */
  if (!C.zf) goto L_12ba391e;
  /* 12ba391a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba391c jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba391e:;
  /* 12ba391e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ba3921 push edx */
  push32((uint32_t)(EDX));
  /* 12ba3922 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ba3925 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3926 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12ba3929 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba392a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ba392d push edx */
  push32((uint32_t)(EDX));
  /* 12ba392e push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba3930 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12ba3933 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3934 call dword ptr [0x12bc132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc132c))), 0x12ba393au);
  /* 12ba393a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba393c jne 0x12ba3942 */
  if (!C.zf) goto L_12ba3942;
  /* 12ba393e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3940 jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba3942:;
  /* 12ba3942 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ba3945 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3946 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ba3949 push edx */
  push32((uint32_t)(EDX));
  /* 12ba394a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12ba394d push eax */
  push32((uint32_t)(EAX));
  /* 12ba394e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ba3951 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3952 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba3955 push edx */
  push32((uint32_t)(EDX));
  /* 12ba3956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3959 push eax */
  push32((uint32_t)(EAX));
  /* 12ba395a call dword ptr [0x12bc1238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1238))), 0x12ba3960u);
  /* 12ba3960 jmp 0x12ba3964 */
  goto L_12ba3964;
L_12ba3962:;
  /* 12ba3962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ba3964:;
  /* 12ba3964 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12ba3967 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba396a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12ba3971 pop edi */
  EDI = (pop32());
  /* 12ba3972 pop esi */
  ESI = (pop32());
  /* 12ba3973 pop ebx */
  EBX = (pop32());
  /* 12ba3974 mov esp, ebp */
  ESP = (EBP);
  /* 12ba3976 pop ebp */
  EBP = (pop32());
  /* 12ba3977 ret  */
  ESPCHK(0x12ba3580u, _esp0);
  ESP += 4; return;
}

/* FUN_10013980 @ 0x12ba3980 (80 bytes, 32 insns) */
void f_12ba3980(void) {
  FTRACE(0x12ba3980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba3980 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba3981 mov ebp, esp */
  EBP = (ESP);
  /* 12ba3983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba3986 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba3989 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ba398c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba398f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ba3992:;
  /* 12ba3992 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3995 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3998 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba399b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ba399e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba39a0 je 0x12ba39b7 */
  if (C.zf) goto L_12ba39b7;
  /* 12ba39a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba39a5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ba39a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba39aa je 0x12ba39b7 */
  if (C.zf) goto L_12ba39b7;
  /* 12ba39ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba39af add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba39b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ba39b5 jmp 0x12ba3992 */
  goto L_12ba3992;
L_12ba39b7:;
  /* 12ba39b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba39ba movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ba39bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba39bf jne 0x12ba39c9 */
  if (!C.zf) goto L_12ba39c9;
  /* 12ba39c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba39c4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba39c7 jmp 0x12ba39cc */
  goto L_12ba39cc;
L_12ba39c9:;
  /* 12ba39c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12ba39cc:;
  /* 12ba39cc mov esp, ebp */
  ESP = (EBP);
  /* 12ba39ce pop ebp */
  EBP = (pop32());
  /* 12ba39cf ret  */
  ESPCHK(0x12ba3980u, _esp0);
  ESP += 4; return;
}

/* FUN_100139d0 @ 0x12ba39d0 (736 bytes, 224 insns) */
void f_12ba39d0(void) {
  FTRACE(0x12ba39d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba39d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba39d1 mov ebp, esp */
  EBP = (ESP);
  /* 12ba39d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba39d6 push esi */
  push32((uint32_t)(ESI));
  /* 12ba39d7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba39db je 0x12ba39fc */
  if (C.zf) goto L_12ba39fc;
  /* 12ba39dd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12ba39df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba39e2 push eax */
  push32((uint32_t)(EAX));
  /* 12ba39e3 call 0x12ba3e20 */
  push32(0x12ba39e8u); f_12ba3e20();
  /* 12ba39e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba39eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12ba39ee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba39f2 je 0x12ba39fc */
  if (C.zf) goto L_12ba39fc;
  /* 12ba39f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba39f7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba39fa jne 0x12ba3a04 */
  if (!C.zf) goto L_12ba3a04;
L_12ba39fc:;
  /* 12ba39fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba39ff jmp 0x12ba3cab */
  goto L_12ba3cab;
L_12ba3a04:;
  /* 12ba3a04 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba3a07 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12ba3a0b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ba3a0d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba3a0f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12ba3a10 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12ba3a13 mov ecx, dword ptr [0x12bbf4a4] */
  ECX = (r32((uint32_t)(0x12bbf4a4)));
  /* 12ba3a19 cmp ecx, dword ptr [0x12bbf4a8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bbf4a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3a1f jne 0x12ba3a35 */
  if (!C.zf) goto L_12ba3a35;
  /* 12ba3a21 mov edx, dword ptr [0x12bbf4a4] */
  EDX = (r32((uint32_t)(0x12bbf4a4)));
  /* 12ba3a27 push edx */
  push32((uint32_t)(EDX));
  /* 12ba3a28 call 0x12ba3d30 */
  push32(0x12ba3a2du); f_12ba3d30();
  /* 12ba3a2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3a30 mov dword ptr [0x12bbf4a4], eax */
  w32((uint32_t)(0x12bbf4a4), (EAX));
L_12ba3a35:;
  /* 12ba3a35 cmp dword ptr [0x12bbf4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3a3c jne 0x12ba3af5 */
  if (!C.zf) goto L_12ba3af5;
  /* 12ba3a42 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3a46 je 0x12ba3a67 */
  if (C.zf) goto L_12ba3a67;
  /* 12ba3a48 cmp dword ptr [0x12bbf4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3a4f je 0x12ba3a67 */
  if (C.zf) goto L_12ba3a67;
  /* 12ba3a51 call 0x12ba34d0 */
  push32(0x12ba3a56u); f_12ba34d0();
  /* 12ba3a56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba3a58 je 0x12ba3a62 */
  if (C.zf) goto L_12ba3a62;
  /* 12ba3a5a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3a5d jmp 0x12ba3cab */
  goto L_12ba3cab;
L_12ba3a62:;
  /* 12ba3a62 jmp 0x12ba3af5 */
  goto L_12ba3af5;
L_12ba3a67:;
  /* 12ba3a67 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3a6b je 0x12ba3a74 */
  if (C.zf) goto L_12ba3a74;
  /* 12ba3a6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3a6f jmp 0x12ba3cab */
  goto L_12ba3cab;
L_12ba3a74:;
  /* 12ba3a74 cmp dword ptr [0x12bbf4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3a7b jne 0x12ba3ab4 */
  if (!C.zf) goto L_12ba3ab4;
  /* 12ba3a7d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12ba3a82 push 0x12bbc118 */
  push32((uint32_t)(0x12bbc118u));
  /* 12ba3a87 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba3a89 push 4 */
  push32((uint32_t)(0x4u));
  /* 12ba3a8b call 0x12b939d0 */
  push32(0x12ba3a90u); f_12b939d0();
  /* 12ba3a90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3a93 mov dword ptr [0x12bbf4a4], eax */
  w32((uint32_t)(0x12bbf4a4), (EAX));
  /* 12ba3a98 cmp dword ptr [0x12bbf4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3a9f jne 0x12ba3aa9 */
  if (!C.zf) goto L_12ba3aa9;
  /* 12ba3aa1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3aa4 jmp 0x12ba3cab */
  goto L_12ba3cab;
L_12ba3aa9:;
  /* 12ba3aa9 mov eax, dword ptr [0x12bbf4a4] */
  EAX = (r32((uint32_t)(0x12bbf4a4)));
  /* 12ba3aae mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12ba3ab4:;
  /* 12ba3ab4 cmp dword ptr [0x12bbf4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3abb jne 0x12ba3af5 */
  if (!C.zf) goto L_12ba3af5;
  /* 12ba3abd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12ba3ac2 push 0x12bbc118 */
  push32((uint32_t)(0x12bbc118u));
  /* 12ba3ac7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba3ac9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12ba3acb call 0x12b939d0 */
  push32(0x12ba3ad0u); f_12b939d0();
  /* 12ba3ad0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3ad3 mov dword ptr [0x12bbf4ac], eax */
  w32((uint32_t)(0x12bbf4ac), (EAX));
  /* 12ba3ad8 cmp dword ptr [0x12bbf4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3adf jne 0x12ba3ae9 */
  if (!C.zf) goto L_12ba3ae9;
  /* 12ba3ae1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3ae4 jmp 0x12ba3cab */
  goto L_12ba3cab;
L_12ba3ae9:;
  /* 12ba3ae9 mov ecx, dword ptr [0x12bbf4ac] */
  ECX = (r32((uint32_t)(0x12bbf4ac)));
  /* 12ba3aef mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12ba3af5:;
  /* 12ba3af5 mov edx, dword ptr [0x12bbf4a4] */
  EDX = (r32((uint32_t)(0x12bbf4a4)));
  /* 12ba3afb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12ba3afe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba3b01 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba3b04 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3b05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3b08 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3b09 call 0x12ba3cb0 */
  push32(0x12ba3b0eu); f_12ba3cb0();
  /* 12ba3b0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3b11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ba3b14 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3b18 jl 0x12ba3bb1 */
  if ((C.sf!=C.of)) goto L_12ba3bb1;
  /* 12ba3b1e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3b21 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3b24 je 0x12ba3bb1 */
  if (C.zf) goto L_12ba3bb1;
  /* 12ba3b2a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3b2e je 0x12ba3ba3 */
  if (C.zf) goto L_12ba3ba3;
  /* 12ba3b30 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba3b32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3b35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3b38 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12ba3b3b push edx */
  push32((uint32_t)(EDX));
  /* 12ba3b3c call 0x12b94460 */
  push32(0x12ba3b41u); f_12b94460();
  /* 12ba3b41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3b44 jmp 0x12ba3b4f */
  goto L_12ba3b4f;
L_12ba3b46:;
  /* 12ba3b46 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3b49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3b4c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12ba3b4f:;
  /* 12ba3b4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3b52 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3b55 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3b59 je 0x12ba3b70 */
  if (C.zf) goto L_12ba3b70;
  /* 12ba3b5b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3b5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3b61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3b64 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3b67 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12ba3b6b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12ba3b6e jmp 0x12ba3b46 */
  goto L_12ba3b46;
L_12ba3b70:;
  /* 12ba3b70 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12ba3b75 push 0x12bbc118 */
  push32((uint32_t)(0x12bbc118u));
  /* 12ba3b7a push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba3b7c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3b7f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12ba3b82 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3b83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3b86 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3b87 call 0x12b93e60 */
  push32(0x12ba3b8cu); f_12b93e60();
  /* 12ba3b8c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3b8f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ba3b92 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3b96 je 0x12ba3ba1 */
  if (C.zf) goto L_12ba3ba1;
  /* 12ba3b98 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3b9b mov dword ptr [0x12bbf4a4], edx */
  w32((uint32_t)(0x12bbf4a4), (EDX));
L_12ba3ba1:;
  /* 12ba3ba1 jmp 0x12ba3baf */
  goto L_12ba3baf;
L_12ba3ba3:;
  /* 12ba3ba3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3ba6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3ba9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3bac mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12ba3baf:;
  /* 12ba3baf jmp 0x12ba3c24 */
  goto L_12ba3c24;
L_12ba3bb1:;
  /* 12ba3bb1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3bb5 jne 0x12ba3c1d */
  if (!C.zf) goto L_12ba3c1d;
  /* 12ba3bb7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3bbb jge 0x12ba3bc5 */
  if ((C.sf==C.of)) goto L_12ba3bc5;
  /* 12ba3bbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3bc0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ba3bc2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12ba3bc5:;
  /* 12ba3bc5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12ba3bca push 0x12bbc118 */
  push32((uint32_t)(0x12bbc118u));
  /* 12ba3bcf push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba3bd1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3bd4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12ba3bdb push edx */
  push32((uint32_t)(EDX));
  /* 12ba3bdc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3bdf push eax */
  push32((uint32_t)(EAX));
  /* 12ba3be0 call 0x12b93e60 */
  push32(0x12ba3be5u); f_12b93e60();
  /* 12ba3be5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3be8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ba3beb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3bef jne 0x12ba3bf9 */
  if (!C.zf) goto L_12ba3bf9;
  /* 12ba3bf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3bf4 jmp 0x12ba3cab */
  goto L_12ba3cab;
L_12ba3bf9:;
  /* 12ba3bf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3bfc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3bff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3c02 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12ba3c05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3c08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3c0b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12ba3c13 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3c16 mov dword ptr [0x12bbf4a4], eax */
  w32((uint32_t)(0x12bbf4a4), (EAX));
  /* 12ba3c1b jmp 0x12ba3c24 */
  goto L_12ba3c24;
L_12ba3c1d:;
  /* 12ba3c1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3c1f jmp 0x12ba3cab */
  goto L_12ba3cab;
L_12ba3c24:;
  /* 12ba3c24 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3c28 je 0x12ba3ca9 */
  if (C.zf) goto L_12ba3ca9;
  /* 12ba3c2a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12ba3c2f push 0x12bbc118 */
  push32((uint32_t)(0x12bbc118u));
  /* 12ba3c34 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba3c36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3c39 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3c3a call 0x12b96800 */
  push32(0x12ba3c3fu); f_12b96800();
  /* 12ba3c3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3c42 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3c45 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3c46 call 0x12b939d0 */
  push32(0x12ba3c4bu); f_12b939d0();
  /* 12ba3c4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3c4e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12ba3c51 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3c55 je 0x12ba3ca9 */
  if (C.zf) goto L_12ba3ca9;
  /* 12ba3c57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3c5a push edx */
  push32((uint32_t)(EDX));
  /* 12ba3c5b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba3c5e push eax */
  push32((uint32_t)(EAX));
  /* 12ba3c5f call 0x12b96980 */
  push32(0x12ba3c64u); f_12b96980();
  /* 12ba3c64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3c67 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ba3c6a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba3c6d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba3c70 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3c72 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ba3c75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba3c78 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12ba3c7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba3c7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3c81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ba3c84 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ba3c87 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ba3c89 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba3c8b not edx */
  EDX = (~(EDX));
  /* 12ba3c8d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12ba3c90 push edx */
  push32((uint32_t)(EDX));
  /* 12ba3c91 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba3c94 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3c95 call dword ptr [0x12bc1234] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1234))), 0x12ba3c9bu);
  /* 12ba3c9b push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba3c9d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba3ca0 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3ca1 call 0x12b94460 */
  push32(0x12ba3ca6u); f_12b94460();
  /* 12ba3ca6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ba3ca9:;
  /* 12ba3ca9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ba3cab:;
  /* 12ba3cab pop esi */
  ESI = (pop32());
  /* 12ba3cac mov esp, ebp */
  ESP = (EBP);
  /* 12ba3cae pop ebp */
  EBP = (pop32());
  /* 12ba3caf ret  */
  ESPCHK(0x12ba39d0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12ba3cb0 (124 bytes, 47 insns) */
void f_12ba3cb0(void) {
  FTRACE(0x12ba3cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba3cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba3cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12ba3cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3cb4 mov eax, dword ptr [0x12bbf4a4] */
  EAX = (r32((uint32_t)(0x12bbf4a4)));
  /* 12ba3cb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ba3cbc jmp 0x12ba3cc7 */
  goto L_12ba3cc7;
L_12ba3cbe:;
  /* 12ba3cbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba3cc1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3cc4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ba3cc7:;
  /* 12ba3cc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba3cca cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3ccd je 0x12ba3d1a */
  if (C.zf) goto L_12ba3d1a;
  /* 12ba3ccf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba3cd2 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3cd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba3cd6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba3cd8 push edx */
  push32((uint32_t)(EDX));
  /* 12ba3cd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3cdc push eax */
  push32((uint32_t)(EAX));
  /* 12ba3cdd call 0x12ba3480 */
  push32(0x12ba3ce2u); f_12ba3480();
  /* 12ba3ce2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3ce5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba3ce7 jne 0x12ba3d18 */
  if (!C.zf) goto L_12ba3d18;
  /* 12ba3ce9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba3cec mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba3cee mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba3cf1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12ba3cf5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3cf8 je 0x12ba3d0a */
  if (C.zf) goto L_12ba3d0a;
  /* 12ba3cfa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba3cfd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ba3cff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba3d02 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12ba3d06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba3d08 jne 0x12ba3d18 */
  if (!C.zf) goto L_12ba3d18;
L_12ba3d0a:;
  /* 12ba3d0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba3d0d sub eax, dword ptr [0x12bbf4a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bbf4a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba3d13 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12ba3d16 jmp 0x12ba3d28 */
  goto L_12ba3d28;
L_12ba3d18:;
  /* 12ba3d18 jmp 0x12ba3cbe */
  goto L_12ba3cbe;
L_12ba3d1a:;
  /* 12ba3d1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba3d1d sub eax, dword ptr [0x12bbf4a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bbf4a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba3d23 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12ba3d26 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12ba3d28:;
  /* 12ba3d28 mov esp, ebp */
  ESP = (EBP);
  /* 12ba3d2a pop ebp */
  EBP = (pop32());
  /* 12ba3d2b ret  */
  ESPCHK(0x12ba3cb0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12ba3d30 (238 bytes, 80 insns) */
void f_12ba3d30(void) {
  FTRACE(0x12ba3d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba3d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba3d31 mov ebp, esp */
  EBP = (ESP);
  /* 12ba3d33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba3d36 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12ba3d3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3d40 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ba3d43 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3d47 jne 0x12ba3d50 */
  if (!C.zf) goto L_12ba3d50;
  /* 12ba3d49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3d4b jmp 0x12ba3e1a */
  goto L_12ba3e1a;
L_12ba3d50:;
  /* 12ba3d50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3d53 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba3d55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3d58 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3d5b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ba3d5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba3d60 je 0x12ba3d6d */
  if (C.zf) goto L_12ba3d6d;
  /* 12ba3d62 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba3d65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3d68 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12ba3d6b jmp 0x12ba3d50 */
  goto L_12ba3d50;
L_12ba3d6d:;
  /* 12ba3d6d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12ba3d72 push 0x12bbc118 */
  push32((uint32_t)(0x12bbc118u));
  /* 12ba3d77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba3d79 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba3d7c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12ba3d83 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3d84 call 0x12b939d0 */
  push32(0x12ba3d89u); f_12b939d0();
  /* 12ba3d89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3d8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ba3d8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3d92 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ba3d95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3d99 jne 0x12ba3da5 */
  if (!C.zf) goto L_12ba3da5;
  /* 12ba3d9b push 9 */
  push32((uint32_t)(0x9u));
  /* 12ba3d9d call 0x12b92940 */
  push32(0x12ba3da2u); f_12b92940();
  /* 12ba3da2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ba3da5:;
  /* 12ba3da5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3da8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12ba3dab:;
  /* 12ba3dab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3dae cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3db1 je 0x12ba3e0e */
  if (C.zf) goto L_12ba3e0e;
  /* 12ba3db3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12ba3db8 push 0x12bbc118 */
  push32((uint32_t)(0x12bbc118u));
  /* 12ba3dbd push 2 */
  push32((uint32_t)(0x2u));
  /* 12ba3dbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3dc2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ba3dc4 push edx */
  push32((uint32_t)(EDX));
  /* 12ba3dc5 call 0x12b96800 */
  push32(0x12ba3dcau); f_12b96800();
  /* 12ba3dca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3dcd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3dd0 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3dd1 call 0x12b939d0 */
  push32(0x12ba3dd6u); f_12b939d0();
  /* 12ba3dd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3dd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3ddc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ba3dde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3de1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3de4 je 0x12ba3dfa */
  if (C.zf) goto L_12ba3dfa;
  /* 12ba3de6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3de9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ba3deb push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3dec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3def mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ba3df1 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3df2 call 0x12b96980 */
  push32(0x12ba3df7u); f_12b96980();
  /* 12ba3df7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ba3dfa:;
  /* 12ba3dfa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba3dfd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3e00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ba3e03 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3e06 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3e09 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ba3e0c jmp 0x12ba3dab */
  goto L_12ba3dab;
L_12ba3e0e:;
  /* 12ba3e0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba3e11 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12ba3e17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12ba3e1a:;
  /* 12ba3e1a mov esp, ebp */
  ESP = (EBP);
  /* 12ba3e1c pop ebp */
  EBP = (pop32());
  /* 12ba3e1d ret  */
  ESPCHK(0x12ba3d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e20 @ 0x12ba3e20 (237 bytes, 81 insns) */
void f_12ba3e20(void) {
  FTRACE(0x12ba3e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba3e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba3e21 mov ebp, esp */
  EBP = (ESP);
  /* 12ba3e23 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3e24 cmp dword ptr [0x12bc0bec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0bec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3e2b jne 0x12ba3e42 */
  if (!C.zf) goto L_12ba3e42;
  /* 12ba3e2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba3e30 push eax */
  push32((uint32_t)(EAX));
  /* 12ba3e31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3e34 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba3e35 call 0x12ba3f20 */
  push32(0x12ba3e3au); f_12ba3f20();
  /* 12ba3e3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3e3d jmp 0x12ba3f09 */
  goto L_12ba3f09;
L_12ba3e42:;
  /* 12ba3e42 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12ba3e44 call 0x12b973d0 */
  push32(0x12ba3e49u); f_12b973d0();
  /* 12ba3e49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3e4c jmp 0x12ba3e57 */
  goto L_12ba3e57;
L_12ba3e4e:;
  /* 12ba3e4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3e51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3e54 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12ba3e57:;
  /* 12ba3e57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3e5a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12ba3e5e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12ba3e62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba3e65 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ba3e6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba3e6d je 0x12ba3eeb */
  if (C.zf) goto L_12ba3eeb;
  /* 12ba3e6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba3e72 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3e77 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba3e79 mov cl, byte ptr [eax + 0x12bc0d01] */
  CL = (r8((uint32_t)(EAX + 0x12bc0d01)));
  /* 12ba3e7f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12ba3e82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ba3e84 je 0x12ba3ed6 */
  if (C.zf) goto L_12ba3ed6;
  /* 12ba3e86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3e89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3e8c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12ba3e8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3e92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba3e94 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ba3e96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ba3e98 jne 0x12ba3ea8 */
  if (!C.zf) goto L_12ba3ea8;
  /* 12ba3e9a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12ba3e9c call 0x12b97470 */
  push32(0x12ba3ea1u); f_12b97470();
  /* 12ba3ea1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3ea4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3ea6 jmp 0x12ba3f09 */
  goto L_12ba3f09;
L_12ba3ea8:;
  /* 12ba3ea8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba3eab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ba3eb1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12ba3eb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3eb7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba3eb9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ba3ebb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12ba3ebd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3ec0 jne 0x12ba3ed4 */
  if (!C.zf) goto L_12ba3ed4;
  /* 12ba3ec2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12ba3ec4 call 0x12b97470 */
  push32(0x12ba3ec9u); f_12b97470();
  /* 12ba3ec9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3ecc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3ecf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba3ed2 jmp 0x12ba3f09 */
  goto L_12ba3f09;
L_12ba3ed4:;
  /* 12ba3ed4 jmp 0x12ba3ee6 */
  goto L_12ba3ee6;
L_12ba3ed6:;
  /* 12ba3ed6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba3ed9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ba3edf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3ee2 jne 0x12ba3ee6 */
  if (!C.zf) goto L_12ba3ee6;
  /* 12ba3ee4 jmp 0x12ba3eeb */
  goto L_12ba3eeb;
L_12ba3ee6:;
  /* 12ba3ee6 jmp 0x12ba3e4e */
  goto L_12ba3e4e;
L_12ba3eeb:;
  /* 12ba3eeb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12ba3eed call 0x12b97470 */
  push32(0x12ba3ef2u); f_12b97470();
  /* 12ba3ef2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3ef5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba3ef8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3efd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba3f00 jne 0x12ba3f07 */
  if (!C.zf) goto L_12ba3f07;
  /* 12ba3f02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba3f05 jmp 0x12ba3f09 */
  goto L_12ba3f09;
L_12ba3f07:;
  /* 12ba3f07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ba3f09:;
  /* 12ba3f09 mov esp, ebp */
  ESP = (EBP);
  /* 12ba3f0b pop ebp */
  EBP = (pop32());
  /* 12ba3f0c ret  */
  ESPCHK(0x12ba3e20u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12ba3f20 (193 bytes, 87 insns) */
void f_12ba3f20(void) {
  FTRACE(0x12ba3f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba3f20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3f22 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12ba3f26 push ebx */
  push32((uint32_t)(EBX));
  /* 12ba3f27 mov ebx, eax */
  EBX = (EAX);
  /* 12ba3f29 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12ba3f2c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12ba3f30 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12ba3f36 je 0x12ba3f4b */
  if (C.zf) goto L_12ba3f4b;
L_12ba3f38:;
  /* 12ba3f38 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12ba3f3a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12ba3f3b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba3f3d je 0x12ba3f10 */
  if (C.zf) { jmp_ind(0x12ba3f10u); return; }
  /* 12ba3f3f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12ba3f41 je 0x12ba3f94 */
  if (C.zf) goto L_12ba3f94;
  /* 12ba3f43 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12ba3f49 jne 0x12ba3f38 */
  if (!C.zf) goto L_12ba3f38;
L_12ba3f4b:;
  /* 12ba3f4b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12ba3f4d push edi */
  push32((uint32_t)(EDI));
  /* 12ba3f4e mov eax, ebx */
  EAX = (EBX);
  /* 12ba3f50 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12ba3f53 push esi */
  push32((uint32_t)(ESI));
  /* 12ba3f54 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12ba3f56:;
  /* 12ba3f56 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12ba3f58 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12ba3f5d mov eax, ecx */
  EAX = (ECX);
  /* 12ba3f5f mov esi, edi */
  ESI = (EDI);
  /* 12ba3f61 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba3f63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3f65 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3f67 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ba3f6a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3f6d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12ba3f6f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3f71 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba3f74 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12ba3f7a jne 0x12ba3f98 */
  if (!C.zf) goto L_12ba3f98;
  /* 12ba3f7c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3f81 je 0x12ba3f56 */
  if (C.zf) goto L_12ba3f56;
  /* 12ba3f83 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3f88 jne 0x12ba3f92 */
  if (!C.zf) goto L_12ba3f92;
  /* 12ba3f8a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12ba3f90 jne 0x12ba3f56 */
  if (!C.zf) goto L_12ba3f56;
L_12ba3f92:;
  /* 12ba3f92 pop esi */
  ESI = (pop32());
  /* 12ba3f93 pop edi */
  EDI = (pop32());
L_12ba3f94:;
  /* 12ba3f94 pop ebx */
  EBX = (pop32());
  /* 12ba3f95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba3f97 ret  */
  ESPCHK(0x12ba3f20u, _esp0);
  ESP += 4; return;
L_12ba3f98:;
  /* 12ba3f98 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12ba3f9b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba3f9d je 0x12ba3fd5 */
  if (C.zf) goto L_12ba3fd5;
  /* 12ba3f9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12ba3fa1 je 0x12ba3f92 */
  if (C.zf) goto L_12ba3f92;
  /* 12ba3fa3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba3fa5 je 0x12ba3fce */
  if (C.zf) goto L_12ba3fce;
  /* 12ba3fa7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12ba3fa9 je 0x12ba3f92 */
  if (C.zf) goto L_12ba3f92;
  /* 12ba3fab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12ba3fae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba3fb0 je 0x12ba3fc7 */
  if (C.zf) goto L_12ba3fc7;
  /* 12ba3fb2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12ba3fb4 je 0x12ba3f92 */
  if (C.zf) goto L_12ba3f92;
  /* 12ba3fb6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12ba3fb8 je 0x12ba3fc0 */
  if (C.zf) goto L_12ba3fc0;
  /* 12ba3fba test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12ba3fbc je 0x12ba3f92 */
  if (C.zf) goto L_12ba3f92;
  /* 12ba3fbe jmp 0x12ba3f56 */
  goto L_12ba3f56;
L_12ba3fc0:;
  /* 12ba3fc0 pop esi */
  ESI = (pop32());
  /* 12ba3fc1 pop edi */
  EDI = (pop32());
  /* 12ba3fc2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12ba3fc5 pop ebx */
  EBX = (pop32());
  /* 12ba3fc6 ret  */
  ESPCHK(0x12ba3f20u, _esp0);
  ESP += 4; return;
L_12ba3fc7:;
  /* 12ba3fc7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12ba3fca pop esi */
  ESI = (pop32());
  /* 12ba3fcb pop edi */
  EDI = (pop32());
  /* 12ba3fcc pop ebx */
  EBX = (pop32());
  /* 12ba3fcd ret  */
  ESPCHK(0x12ba3f20u, _esp0);
  ESP += 4; return;
L_12ba3fce:;
  /* 12ba3fce lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12ba3fd1 pop esi */
  ESI = (pop32());
  /* 12ba3fd2 pop edi */
  EDI = (pop32());
  /* 12ba3fd3 pop ebx */
  EBX = (pop32());
  /* 12ba3fd4 ret  */
  ESPCHK(0x12ba3f20u, _esp0);
  ESP += 4; return;
L_12ba3fd5:;
  /* 12ba3fd5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12ba3fd8 pop esi */
  ESI = (pop32());
  /* 12ba3fd9 pop edi */
  EDI = (pop32());
  /* 12ba3fda pop ebx */
  EBX = (pop32());
  /* 12ba3fdb ret  */
  ESPCHK(0x12ba3f20u, _esp0);
  ESP += 4; return;
  /* 12ba3fdc jmp dword ptr [0x12bc1264] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12bc1264)))); return;
}

/* RtlUnwind @ 0x12ba412c (6 bytes, 1 insns) */
void f_12ba412c(void) {
  FTRACE(0x12ba412cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba412c jmp dword ptr [0x12bc1340] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12bc1340)))); return;
}

