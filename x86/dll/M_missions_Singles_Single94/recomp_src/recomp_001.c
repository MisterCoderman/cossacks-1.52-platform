#include "recomp.h"

/* FUN_10004f60 @ 0x11fd4f60 (47 bytes, 22 insns) */
void f_11fd4f60(void) {
  FTRACE(0x11fd4f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd4f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd4f61 mov ebp, esp */
  EBP = (ESP);
  /* 11fd4f63 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd4f66 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd4f67 push esi */
  push32((uint32_t)(ESI));
  /* 11fd4f68 push edi */
  push32((uint32_t)(EDI));
  /* 11fd4f69 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd4f6a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd4f6d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd4f72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd4f77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd4f79 pop ecx */
  ECX = (pop32());
  /* 11fd4f7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd4f7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd4f80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd4f83 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 11fd4f86 pop edi */
  EDI = (pop32());
  /* 11fd4f87 pop esi */
  ESI = (pop32());
  /* 11fd4f88 pop ebx */
  EBX = (pop32());
  /* 11fd4f89 mov esp, ebp */
  ESP = (EBP);
  /* 11fd4f8b pop ebp */
  EBP = (pop32());
  /* 11fd4f8c ret 4 */
  ESPCHK(0x11fd4f60u, _esp0);
  ESP += 8; return;
}

/* FUN_10004fa0 @ 0x11fd4fa0 (65 bytes, 28 insns) */
void f_11fd4fa0(void) {
  FTRACE(0x11fd4fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd4fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd4fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd4fa3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd4fa6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd4fa7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd4fa8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd4fa9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd4faa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd4fad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd4fb2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd4fb7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd4fb9 pop ecx */
  ECX = (pop32());
  /* 11fd4fba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd4fbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd4fc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd4fc3 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
  /* 11fd4fc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd4fc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd4fcc mov dword ptr [edx + 0x1c], eax */
  w32((uint32_t)(EDX + 0x1c), (EAX));
  /* 11fd4fcf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd4fd2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd4fd5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11fd4fd8 pop edi */
  EDI = (pop32());
  /* 11fd4fd9 pop esi */
  ESI = (pop32());
  /* 11fd4fda pop ebx */
  EBX = (pop32());
  /* 11fd4fdb mov esp, ebp */
  ESP = (EBP);
  /* 11fd4fdd pop ebp */
  EBP = (pop32());
  /* 11fd4fde ret 0xc */
  ESPCHK(0x11fd4fa0u, _esp0);
  ESP += 16; return;
}

/* FUN_10005000 @ 0x11fd5000 (166 bytes, 58 insns) */
void f_11fd5000(void) {
  FTRACE(0x11fd5000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5000 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5001 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5003 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5006 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5007 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5008 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5009 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd500a lea edi, [ebp - 0x70] */
  EDI = ((uint32_t)(EBP + -0x70));
  /* 11fd500d mov ecx, 0x1c */
  ECX = (0x1cu);
  /* 11fd5012 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5017 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5019 pop ecx */
  ECX = (pop32());
  /* 11fd501a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd501d mov esi, esp */
  ESI = (ESP);
  /* 11fd501f lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11fd5022 push eax */
  push32((uint32_t)(EAX));
  /* 11fd5023 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd5025 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5028 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5029 call dword ptr [0x12011590] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011590))), 0x11fd502fu);
  /* 11fd502f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5032 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5034 call 0x11fd8e20 */
  push32(0x11fd5039u); f_11fd8e20();
  /* 11fd5039 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fd503c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fd5042 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5045 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 11fd5048 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd504d cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd504f jge 0x11fd505d */
  if ((C.sf==C.of)) goto L_11fd505d;
  /* 11fd5051 mov cx, word ptr [ebp - 0x2c] */
  CX = (r16((uint32_t)(EBP + -0x2c)));
  /* 11fd5055 add cx, word ptr [ebp + 8] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(EBP + 0x8))),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11fd5059 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
L_11fd505d:;
  /* 11fd505d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fd5060 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fd5066 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5069 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 11fd506c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd5071 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5073 jl 0x11fd507d */
  if ((C.sf!=C.of)) goto L_11fd507d;
  /* 11fd5075 mov cx, word ptr [ebp - 0x2a] */
  CX = (r16((uint32_t)(EBP + -0x2a)));
  /* 11fd5079 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
L_11fd507d:;
  /* 11fd507d mov esi, esp */
  ESI = (ESP);
  /* 11fd507f lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11fd5082 push edx */
  push32((uint32_t)(EDX));
  /* 11fd5083 call dword ptr [0x120114dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114dc))), 0x11fd5089u);
  /* 11fd5089 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd508c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd508e call 0x11fd8e20 */
  push32(0x11fd5093u); f_11fd8e20();
  /* 11fd5093 pop edi */
  EDI = (pop32());
  /* 11fd5094 pop esi */
  ESI = (pop32());
  /* 11fd5095 pop ebx */
  EBX = (pop32());
  /* 11fd5096 add esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5099 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd509b call 0x11fd8e20 */
  push32(0x11fd50a0u); f_11fd8e20();
  /* 11fd50a0 mov esp, ebp */
  ESP = (EBP);
  /* 11fd50a2 pop ebp */
  EBP = (pop32());
  /* 11fd50a3 ret 4 */
  ESPCHK(0x11fd5000u, _esp0);
  ESP += 8; return;
}

/* FUN_100050d0 @ 0x11fd50d0 (114 bytes, 42 insns) */
void f_11fd50d0(void) {
  FTRACE(0x11fd50d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd50d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd50d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd50d3 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd50d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd50d7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd50d8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd50d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd50da lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 11fd50dd mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 11fd50e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd50e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd50e9 pop ecx */
  ECX = (pop32());
  /* 11fd50ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd50ed mov esi, esp */
  ESI = (ESP);
  /* 11fd50ef lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11fd50f2 push eax */
  push32((uint32_t)(EAX));
  /* 11fd50f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd50f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd50f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd50f9 call dword ptr [0x12011590] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011590))), 0x11fd50ffu);
  /* 11fd50ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5102 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5104 call 0x11fd8e20 */
  push32(0x11fd5109u); f_11fd8e20();
  /* 11fd5109 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fd510c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fd5112 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11fd5115 fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 11fd5118 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 11fd511b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd5120 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11fd5123 fidiv dword ptr [ebp - 0x38] */
  FPU_ST(0) = FPU_ST(0) / ((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 11fd5126 fmul dword ptr [0x12009050] */
  FPU_ST(0) = FPU_ST(0) * ((double)rf32((uint32_t)(0x12009050)));
  /* 11fd512c call 0x11fd910c */
  push32(0x11fd5131u); f_11fd910c();
  /* 11fd5131 pop edi */
  EDI = (pop32());
  /* 11fd5132 pop esi */
  ESI = (pop32());
  /* 11fd5133 pop ebx */
  EBX = (pop32());
  /* 11fd5134 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5137 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5139 call 0x11fd8e20 */
  push32(0x11fd513eu); f_11fd8e20();
  /* 11fd513e mov esp, ebp */
  ESP = (EBP);
  /* 11fd5140 pop ebp */
  EBP = (pop32());
  /* 11fd5141 ret  */
  ESPCHK(0x11fd50d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005160 @ 0x11fd5160 (94 bytes, 37 insns) */
void f_11fd5160(void) {
  FTRACE(0x11fd5160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5160 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5161 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5163 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5166 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5167 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5168 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5169 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd516a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd516d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd5172 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5177 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5179 pop ecx */
  ECX = (pop32());
  /* 11fd517a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd517d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5180 call 0x11fd118b */
  push32(0x11fd5185u); f_11fd118b();
  /* 11fd5185 mov esi, esp */
  ESI = (ESP);
  /* 11fd5187 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11fd518a push eax */
  push32((uint32_t)(EAX));
  /* 11fd518b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd518e mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 11fd5191 push edx */
  push32((uint32_t)(EDX));
  /* 11fd5192 call dword ptr [0x120114e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114e4))), 0x11fd5198u);
  /* 11fd5198 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd519b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd519d call 0x11fd8e20 */
  push32(0x11fd51a2u); f_11fd8e20();
  /* 11fd51a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd51a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd51a8 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 11fd51ab pop edi */
  EDI = (pop32());
  /* 11fd51ac pop esi */
  ESI = (pop32());
  /* 11fd51ad pop ebx */
  EBX = (pop32());
  /* 11fd51ae add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd51b1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd51b3 call 0x11fd8e20 */
  push32(0x11fd51b8u); f_11fd8e20();
  /* 11fd51b8 mov esp, ebp */
  ESP = (EBP);
  /* 11fd51ba pop ebp */
  EBP = (pop32());
  /* 11fd51bb ret 4 */
  ESPCHK(0x11fd5160u, _esp0);
  ESP += 8; return;
}

/* FUN_100051e0 @ 0x11fd51e0 (39 bytes, 20 insns) */
void f_11fd51e0(void) {
  FTRACE(0x11fd51e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd51e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd51e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd51e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd51e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd51e7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd51e8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd51e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd51ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd51ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd51f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd51f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd51f9 pop ecx */
  ECX = (pop32());
  /* 11fd51fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd51fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5200 pop edi */
  EDI = (pop32());
  /* 11fd5201 pop esi */
  ESI = (pop32());
  /* 11fd5202 pop ebx */
  EBX = (pop32());
  /* 11fd5203 mov esp, ebp */
  ESP = (EBP);
  /* 11fd5205 pop ebp */
  EBP = (pop32());
  /* 11fd5206 ret  */
  ESPCHK(0x11fd51e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005210 @ 0x11fd5210 (98 bytes, 39 insns) */
void f_11fd5210(void) {
  FTRACE(0x11fd5210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5210 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5211 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5213 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5216 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5217 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5218 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5219 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd521a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd521d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd5222 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5227 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5229 pop ecx */
  ECX = (pop32());
  /* 11fd522a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd522d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5230 call 0x11fd118b */
  push32(0x11fd5235u); f_11fd118b();
  /* 11fd5235 mov esi, esp */
  ESI = (ESP);
  /* 11fd5237 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd5239 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd523b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd523e push eax */
  push32((uint32_t)(EAX));
  /* 11fd523f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5242 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 11fd5245 push edx */
  push32((uint32_t)(EDX));
  /* 11fd5246 call dword ptr [0x12011580] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011580))), 0x11fd524cu);
  /* 11fd524c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd524f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5251 call 0x11fd8e20 */
  push32(0x11fd5256u); f_11fd8e20();
  /* 11fd5256 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5259 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd525c mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 11fd525f pop edi */
  EDI = (pop32());
  /* 11fd5260 pop esi */
  ESI = (pop32());
  /* 11fd5261 pop ebx */
  EBX = (pop32());
  /* 11fd5262 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5265 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5267 call 0x11fd8e20 */
  push32(0x11fd526cu); f_11fd8e20();
  /* 11fd526c mov esp, ebp */
  ESP = (EBP);
  /* 11fd526e pop ebp */
  EBP = (pop32());
  /* 11fd526f ret 4 */
  ESPCHK(0x11fd5210u, _esp0);
  ESP += 8; return;
}

/* FUN_10005290 @ 0x11fd5290 (87 bytes, 35 insns) */
void f_11fd5290(void) {
  FTRACE(0x11fd5290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5290 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5291 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5293 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5296 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5297 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5298 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5299 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd529a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd529d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd52a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd52a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd52a9 pop ecx */
  ECX = (pop32());
  /* 11fd52aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd52ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd52b0 call 0x11fd118b */
  push32(0x11fd52b5u); f_11fd118b();
  /* 11fd52b5 mov esi, esp */
  ESI = (ESP);
  /* 11fd52b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd52b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd52bc push eax */
  push32((uint32_t)(EAX));
  /* 11fd52bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd52c0 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 11fd52c3 push edx */
  push32((uint32_t)(EDX));
  /* 11fd52c4 call dword ptr [0x12011544] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011544))), 0x11fd52cau);
  /* 11fd52ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd52cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd52cf call 0x11fd8e20 */
  push32(0x11fd52d4u); f_11fd8e20();
  /* 11fd52d4 pop edi */
  EDI = (pop32());
  /* 11fd52d5 pop esi */
  ESI = (pop32());
  /* 11fd52d6 pop ebx */
  EBX = (pop32());
  /* 11fd52d7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd52da cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd52dc call 0x11fd8e20 */
  push32(0x11fd52e1u); f_11fd8e20();
  /* 11fd52e1 mov esp, ebp */
  ESP = (EBP);
  /* 11fd52e3 pop ebp */
  EBP = (pop32());
  /* 11fd52e4 ret 4 */
  ESPCHK(0x11fd5290u, _esp0);
  ESP += 8; return;
}

/* FUN_10005300 @ 0x11fd5300 (90 bytes, 37 insns) */
void f_11fd5300(void) {
  FTRACE(0x11fd5300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5300 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5301 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5303 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5306 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5307 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5308 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5309 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd530a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd530d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd5312 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5317 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5319 pop ecx */
  ECX = (pop32());
  /* 11fd531a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd531d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd5321 mov esi, esp */
  ESI = (ESP);
  /* 11fd5323 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5326 push eax */
  push32((uint32_t)(EAX));
  /* 11fd5327 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd532a mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11fd532d push edx */
  push32((uint32_t)(EDX));
  /* 11fd532e call dword ptr [0x12011578] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011578))), 0x11fd5334u);
  /* 11fd5334 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5337 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5339 call 0x11fd8e20 */
  push32(0x11fd533eu); f_11fd8e20();
  /* 11fd533e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd5340 jle 0x11fd5346 */
  if ((C.zf||C.sf!=C.of)) goto L_11fd5346;
  /* 11fd5342 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11fd5346:;
  /* 11fd5346 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd5349 pop edi */
  EDI = (pop32());
  /* 11fd534a pop esi */
  ESI = (pop32());
  /* 11fd534b pop ebx */
  EBX = (pop32());
  /* 11fd534c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd534f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5351 call 0x11fd8e20 */
  push32(0x11fd5356u); f_11fd8e20();
  /* 11fd5356 mov esp, ebp */
  ESP = (EBP);
  /* 11fd5358 pop ebp */
  EBP = (pop32());
  /* 11fd5359 ret  */
  ESPCHK(0x11fd5300u, _esp0);
  ESP += 4; return;
}

/* FUN_10005370 @ 0x11fd5370 (89 bytes, 36 insns) */
void f_11fd5370(void) {
  FTRACE(0x11fd5370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5370 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5371 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5373 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5376 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5377 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5378 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5379 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd537a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd537d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd5382 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5387 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5389 pop ecx */
  ECX = (pop32());
  /* 11fd538a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd538d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd5391 mov esi, esp */
  ESI = (ESP);
  /* 11fd5393 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5396 push eax */
  push32((uint32_t)(EAX));
  /* 11fd5397 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd539a push ecx */
  push32((uint32_t)(ECX));
  /* 11fd539b call dword ptr [0x12011578] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011578))), 0x11fd53a1u);
  /* 11fd53a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd53a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd53a6 call 0x11fd8e20 */
  push32(0x11fd53abu); f_11fd8e20();
  /* 11fd53ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd53ad jle 0x11fd53b3 */
  if ((C.zf||C.sf!=C.of)) goto L_11fd53b3;
  /* 11fd53af mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11fd53b3:;
  /* 11fd53b3 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd53b6 pop edi */
  EDI = (pop32());
  /* 11fd53b7 pop esi */
  ESI = (pop32());
  /* 11fd53b8 pop ebx */
  EBX = (pop32());
  /* 11fd53b9 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd53bc cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd53be call 0x11fd8e20 */
  push32(0x11fd53c3u); f_11fd8e20();
  /* 11fd53c3 mov esp, ebp */
  ESP = (EBP);
  /* 11fd53c5 pop ebp */
  EBP = (pop32());
  /* 11fd53c6 ret 4 */
  ESPCHK(0x11fd5370u, _esp0);
  ESP += 8; return;
}

/* FUN_100053e0 @ 0x11fd53e0 (47 bytes, 22 insns) */
void f_11fd53e0(void) {
  FTRACE(0x11fd53e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd53e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd53e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd53e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd53e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd53e7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd53e8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd53e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd53ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd53ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd53f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd53f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd53f9 pop ecx */
  ECX = (pop32());
  /* 11fd53fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd53fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5400 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd5403 mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 11fd5406 pop edi */
  EDI = (pop32());
  /* 11fd5407 pop esi */
  ESI = (pop32());
  /* 11fd5408 pop ebx */
  EBX = (pop32());
  /* 11fd5409 mov esp, ebp */
  ESP = (EBP);
  /* 11fd540b pop ebp */
  EBP = (pop32());
  /* 11fd540c ret 4 */
  ESPCHK(0x11fd53e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005420 @ 0x11fd5420 (81 bytes, 33 insns) */
void f_11fd5420(void) {
  FTRACE(0x11fd5420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5420 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5421 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5423 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5426 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5427 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5428 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5429 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd542a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd542d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd5432 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5437 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5439 pop ecx */
  ECX = (pop32());
  /* 11fd543a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd543d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5440 call 0x11fd118b */
  push32(0x11fd5445u); f_11fd118b();
  /* 11fd5445 mov esi, esp */
  ESI = (ESP);
  /* 11fd5447 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fd5449 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd544c mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11fd544f push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5450 call dword ptr [0x12011574] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011574))), 0x11fd5456u);
  /* 11fd5456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd545b call 0x11fd8e20 */
  push32(0x11fd5460u); f_11fd8e20();
  /* 11fd5460 pop edi */
  EDI = (pop32());
  /* 11fd5461 pop esi */
  ESI = (pop32());
  /* 11fd5462 pop ebx */
  EBX = (pop32());
  /* 11fd5463 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5466 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5468 call 0x11fd8e20 */
  push32(0x11fd546du); f_11fd8e20();
  /* 11fd546d mov esp, ebp */
  ESP = (EBP);
  /* 11fd546f pop ebp */
  EBP = (pop32());
  /* 11fd5470 ret  */
  ESPCHK(0x11fd5420u, _esp0);
  ESP += 4; return;
}

/* FUN_10005490 @ 0x11fd5490 (99 bytes, 38 insns) */
void f_11fd5490(void) {
  FTRACE(0x11fd5490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5490 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5491 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5493 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5496 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5497 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5498 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5499 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd549a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd549d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd54a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd54a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd54a9 pop ecx */
  ECX = (pop32());
  /* 11fd54aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd54ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd54b0 call 0x11fd1028 */
  push32(0x11fd54b5u); f_11fd1028();
  /* 11fd54b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd54ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd54bc je 0x11fd54e2 */
  if (C.zf) goto L_11fd54e2;
  /* 11fd54be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd54c1 call 0x11fd1267 */
  push32(0x11fd54c6u); f_11fd1267();
  /* 11fd54c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd54c9 call 0x11fd10a0 */
  push32(0x11fd54ceu); f_11fd10a0();
  /* 11fd54ce cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd54d1 jge 0x11fd54e2 */
  if ((C.sf==C.of)) goto L_11fd54e2;
  /* 11fd54d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd54d6 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 11fd54d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd54da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd54dd call 0x11fd120d */
  push32(0x11fd54e2u); f_11fd120d();
L_11fd54e2:;
  /* 11fd54e2 pop edi */
  EDI = (pop32());
  /* 11fd54e3 pop esi */
  ESI = (pop32());
  /* 11fd54e4 pop ebx */
  EBX = (pop32());
  /* 11fd54e5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd54e8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd54ea call 0x11fd8e20 */
  push32(0x11fd54efu); f_11fd8e20();
  /* 11fd54ef mov esp, ebp */
  ESP = (EBP);
  /* 11fd54f1 pop ebp */
  EBP = (pop32());
  /* 11fd54f2 ret  */
  ESPCHK(0x11fd5490u, _esp0);
  ESP += 4; return;
}

/* FUN_10005510 @ 0x11fd5510 (76 bytes, 32 insns) */
void f_11fd5510(void) {
  FTRACE(0x11fd5510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5510 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5511 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5513 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5516 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5517 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5518 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5519 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd551a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd551d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd5522 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5527 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5529 pop ecx */
  ECX = (pop32());
  /* 11fd552a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd552d mov esi, esp */
  ESI = (ESP);
  /* 11fd552f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd5531 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd5534 push eax */
  push32((uint32_t)(EAX));
  /* 11fd5535 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5538 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5539 call dword ptr [0x1201157c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201157c))), 0x11fd553fu);
  /* 11fd553f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5542 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5544 call 0x11fd8e20 */
  push32(0x11fd5549u); f_11fd8e20();
  /* 11fd5549 pop edi */
  EDI = (pop32());
  /* 11fd554a pop esi */
  ESI = (pop32());
  /* 11fd554b pop ebx */
  EBX = (pop32());
  /* 11fd554c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd554f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5551 call 0x11fd8e20 */
  push32(0x11fd5556u); f_11fd8e20();
  /* 11fd5556 mov esp, ebp */
  ESP = (EBP);
  /* 11fd5558 pop ebp */
  EBP = (pop32());
  /* 11fd5559 ret 4 */
  ESPCHK(0x11fd5510u, _esp0);
  ESP += 8; return;
}

/* FUN_10005570 @ 0x11fd5570 (95 bytes, 37 insns) */
void f_11fd5570(void) {
  FTRACE(0x11fd5570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5570 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5571 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5573 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5576 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5577 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5578 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5579 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd557a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd557d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd5582 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5587 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5589 pop ecx */
  ECX = (pop32());
  /* 11fd558a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd558d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd5591 mov esi, esp */
  ESI = (ESP);
  /* 11fd5593 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd5595 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11fd559a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd559d call 0x11fd12b7 */
  push32(0x11fd55a2u); f_11fd12b7();
  /* 11fd55a2 push eax */
  push32((uint32_t)(EAX));
  /* 11fd55a3 call dword ptr [0x12011560] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011560))), 0x11fd55a9u);
  /* 11fd55a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd55ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd55ae call 0x11fd8e20 */
  push32(0x11fd55b3u); f_11fd8e20();
  /* 11fd55b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd55b5 jle 0x11fd55bb */
  if ((C.zf||C.sf!=C.of)) goto L_11fd55bb;
  /* 11fd55b7 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11fd55bb:;
  /* 11fd55bb mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd55be pop edi */
  EDI = (pop32());
  /* 11fd55bf pop esi */
  ESI = (pop32());
  /* 11fd55c0 pop ebx */
  EBX = (pop32());
  /* 11fd55c1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd55c4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd55c6 call 0x11fd8e20 */
  push32(0x11fd55cbu); f_11fd8e20();
  /* 11fd55cb mov esp, ebp */
  ESP = (EBP);
  /* 11fd55cd pop ebp */
  EBP = (pop32());
  /* 11fd55ce ret  */
  ESPCHK(0x11fd5570u, _esp0);
  ESP += 4; return;
}

/* FUN_100055f0 @ 0x11fd55f0 (47 bytes, 22 insns) */
void f_11fd55f0(void) {
  FTRACE(0x11fd55f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd55f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd55f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd55f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd55f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd55f7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd55f8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd55f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd55fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd55fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd5602 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5607 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5609 pop ecx */
  ECX = (pop32());
  /* 11fd560a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd560d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5610 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd5613 mov dword ptr [eax + 0x2c], ecx */
  w32((uint32_t)(EAX + 0x2c), (ECX));
  /* 11fd5616 pop edi */
  EDI = (pop32());
  /* 11fd5617 pop esi */
  ESI = (pop32());
  /* 11fd5618 pop ebx */
  EBX = (pop32());
  /* 11fd5619 mov esp, ebp */
  ESP = (EBP);
  /* 11fd561b pop ebp */
  EBP = (pop32());
  /* 11fd561c ret 4 */
  ESPCHK(0x11fd55f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005630 @ 0x11fd5630 (64 bytes, 27 insns) */
void f_11fd5630(void) {
  FTRACE(0x11fd5630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5630 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5631 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5633 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5636 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5637 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5638 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5639 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd563a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd563d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd5642 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5647 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5649 pop ecx */
  ECX = (pop32());
  /* 11fd564a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd564d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5650 call 0x11fd11e5 */
  push32(0x11fd5655u); f_11fd11e5();
  /* 11fd5655 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5658 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 11fd565c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd565f pop edi */
  EDI = (pop32());
  /* 11fd5660 pop esi */
  ESI = (pop32());
  /* 11fd5661 pop ebx */
  EBX = (pop32());
  /* 11fd5662 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5665 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5667 call 0x11fd8e20 */
  push32(0x11fd566cu); f_11fd8e20();
  /* 11fd566c mov esp, ebp */
  ESP = (EBP);
  /* 11fd566e pop ebp */
  EBP = (pop32());
  /* 11fd566f ret  */
  ESPCHK(0x11fd5630u, _esp0);
  ESP += 4; return;
}

/* FUN_10005680 @ 0x11fd5680 (57 bytes, 25 insns) */
void f_11fd5680(void) {
  FTRACE(0x11fd5680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5680 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5681 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5683 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5686 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5687 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5688 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5689 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd568a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd568d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd5692 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5697 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5699 pop ecx */
  ECX = (pop32());
  /* 11fd569a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd569d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd56a0 call 0x11fd1271 */
  push32(0x11fd56a5u); f_11fd1271();
  /* 11fd56a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd56a8 pop edi */
  EDI = (pop32());
  /* 11fd56a9 pop esi */
  ESI = (pop32());
  /* 11fd56aa pop ebx */
  EBX = (pop32());
  /* 11fd56ab add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd56ae cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd56b0 call 0x11fd8e20 */
  push32(0x11fd56b5u); f_11fd8e20();
  /* 11fd56b5 mov esp, ebp */
  ESP = (EBP);
  /* 11fd56b7 pop ebp */
  EBP = (pop32());
  /* 11fd56b8 ret  */
  ESPCHK(0x11fd5680u, _esp0);
  ESP += 4; return;
}

/* FUN_100056d0 @ 0x11fd56d0 (56 bytes, 25 insns) */
void f_11fd56d0(void) {
  FTRACE(0x11fd56d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd56d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd56d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd56d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd56d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd56d7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd56d8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd56d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd56da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd56dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd56e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd56e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd56e9 pop ecx */
  ECX = (pop32());
  /* 11fd56ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd56ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd56f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd56f3 mov dword ptr [eax + 0x24], ecx */
  w32((uint32_t)(EAX + 0x24), (ECX));
  /* 11fd56f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd56f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd56fc mov dword ptr [edx + 0x28], eax */
  w32((uint32_t)(EDX + 0x28), (EAX));
  /* 11fd56ff pop edi */
  EDI = (pop32());
  /* 11fd5700 pop esi */
  ESI = (pop32());
  /* 11fd5701 pop ebx */
  EBX = (pop32());
  /* 11fd5702 mov esp, ebp */
  ESP = (EBP);
  /* 11fd5704 pop ebp */
  EBP = (pop32());
  /* 11fd5705 ret 8 */
  ESPCHK(0x11fd56d0u, _esp0);
  ESP += 12; return;
}

/* FUN_10005720 @ 0x11fd5720 (566 bytes, 177 insns) [1 switch table(s)] */
void f_11fd5720(void) {
  FTRACE(0x11fd5720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5720 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5721 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5723 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5726 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5727 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5728 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5729 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd572a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11fd572d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11fd5732 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5737 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5739 pop ecx */
  ECX = (pop32());
  /* 11fd573a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd573d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5740 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fd5742 mov cl, byte ptr [eax + 0x2c] */
  CL = (r8((uint32_t)(EAX + 0x2c)));
  /* 11fd5745 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fd5747 je 0x11fd5945 */
  if (C.zf) goto L_11fd5945;
  /* 11fd574d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5750 call 0x11fd1028 */
  push32(0x11fd5755u); f_11fd1028();
  /* 11fd5755 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd575a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd575c je 0x11fd5945 */
  if (C.zf) goto L_11fd5945;
  /* 11fd5762 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5765 cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5769 je 0x11fd5945 */
  if (C.zf) goto L_11fd5945;
  /* 11fd576f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5772 cmp dword ptr [eax + 0x10], 6 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5776 je 0x11fd57bd */
  if (C.zf) goto L_11fd57bd;
  /* 11fd5778 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd577b call 0x11fd10a0 */
  push32(0x11fd5780u); f_11fd10a0();
  /* 11fd5780 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5783 jge 0x11fd578d */
  if ((C.sf==C.of)) goto L_11fd578d;
  /* 11fd5785 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5788 call 0x11fd1285 */
  push32(0x11fd578du); f_11fd1285();
L_11fd578d:;
  /* 11fd578d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5790 call 0x11fd128a */
  push32(0x11fd5795u); f_11fd128a();
  /* 11fd5795 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd579a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd579c je 0x11fd57b8 */
  if (C.zf) goto L_11fd57b8;
  /* 11fd579e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd57a1 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd57a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd57a5 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11fd57a8 push eax */
  push32((uint32_t)(EAX));
  /* 11fd57a9 call 0x11fd12b2 */
  push32(0x11fd57aeu); f_11fd12b2();
  /* 11fd57ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd57b1 mov ecx, eax */
  ECX = (EAX);
  /* 11fd57b3 call 0x11fd11db */
  push32(0x11fd57b8u); f_11fd11db();
L_11fd57b8:;
  /* 11fd57b8 jmp 0x11fd5945 */
  goto L_11fd5945;
L_11fd57bd:;
  /* 11fd57bd mov esi, esp */
  ESI = (ESP);
  /* 11fd57bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd57c1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 11fd57c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd57c9 call 0x11fd12b7 */
  push32(0x11fd57ceu); f_11fd12b7();
  /* 11fd57ce push eax */
  push32((uint32_t)(EAX));
  /* 11fd57cf call dword ptr [0x12011560] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011560))), 0x11fd57d5u);
  /* 11fd57d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd57d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd57da call 0x11fd8e20 */
  push32(0x11fd57dfu); f_11fd8e20();
  /* 11fd57df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd57e1 jle 0x11fd5945 */
  if ((C.zf||C.sf!=C.of)) goto L_11fd5945;
  /* 11fd57e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd57ea cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd57ee je 0x11fd5945 */
  if (C.zf) goto L_11fd5945;
  /* 11fd57f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd57f7 mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11fd57fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fd57fd cmp dword ptr [ebp - 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5801 ja 0x11fd58d2 */
  if ((!C.cf&&!C.zf)) goto L_11fd58d2;
  /* 11fd5807 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fd580a jmp dword ptr [ecx*4 + 0x11fd5956] */
  switch (ECX) {
    case 0: goto L_11fd5811;
    case 1: goto L_11fd5834;
    case 2: goto L_11fd5854;
    case 3: goto L_11fd5874;
    case 4: goto L_11fd5894;
    case 5: goto L_11fd58b4;
    default: x86_unimpl("switch@0x11fd580a out of table"); return;
  }
L_11fd5811:;
  /* 11fd5811 mov esi, esp */
  ESI = (ESP);
  /* 11fd5813 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5816 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11fd5819 push eax */
  push32((uint32_t)(EAX));
  /* 11fd581a push 0x12009168 */
  push32((uint32_t)(0x12009168u));
  /* 11fd581f call dword ptr [0x12011534] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011534))), 0x11fd5825u);
  /* 11fd5825 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5828 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd582a call 0x11fd8e20 */
  push32(0x11fd582fu); f_11fd8e20();
  /* 11fd582f jmp 0x11fd58d2 */
  goto L_11fd58d2;
L_11fd5834:;
  /* 11fd5834 mov esi, esp */
  ESI = (ESP);
  /* 11fd5836 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5839 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 11fd583c push edx */
  push32((uint32_t)(EDX));
  /* 11fd583d push 0x1200915c */
  push32((uint32_t)(0x1200915cu));
  /* 11fd5842 call dword ptr [0x12011534] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011534))), 0x11fd5848u);
  /* 11fd5848 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd584b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd584d call 0x11fd8e20 */
  push32(0x11fd5852u); f_11fd8e20();
  /* 11fd5852 jmp 0x11fd58d2 */
  goto L_11fd58d2;
L_11fd5854:;
  /* 11fd5854 mov esi, esp */
  ESI = (ESP);
  /* 11fd5856 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5859 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11fd585c push ecx */
  push32((uint32_t)(ECX));
  /* 11fd585d push 0x12009150 */
  push32((uint32_t)(0x12009150u));
  /* 11fd5862 call dword ptr [0x12011534] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011534))), 0x11fd5868u);
  /* 11fd5868 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd586b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd586d call 0x11fd8e20 */
  push32(0x11fd5872u); f_11fd8e20();
  /* 11fd5872 jmp 0x11fd58d2 */
  goto L_11fd58d2;
L_11fd5874:;
  /* 11fd5874 mov esi, esp */
  ESI = (ESP);
  /* 11fd5876 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5879 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11fd587c push eax */
  push32((uint32_t)(EAX));
  /* 11fd587d push 0x12009144 */
  push32((uint32_t)(0x12009144u));
  /* 11fd5882 call dword ptr [0x12011534] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011534))), 0x11fd5888u);
  /* 11fd5888 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd588b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd588d call 0x11fd8e20 */
  push32(0x11fd5892u); f_11fd8e20();
  /* 11fd5892 jmp 0x11fd58d2 */
  goto L_11fd58d2;
L_11fd5894:;
  /* 11fd5894 mov esi, esp */
  ESI = (ESP);
  /* 11fd5896 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5899 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 11fd589c push edx */
  push32((uint32_t)(EDX));
  /* 11fd589d push 0x12009138 */
  push32((uint32_t)(0x12009138u));
  /* 11fd58a2 call dword ptr [0x12011534] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011534))), 0x11fd58a8u);
  /* 11fd58a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd58ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd58ad call 0x11fd8e20 */
  push32(0x11fd58b2u); f_11fd8e20();
  /* 11fd58b2 jmp 0x11fd58d2 */
  goto L_11fd58d2;
L_11fd58b4:;
  /* 11fd58b4 mov esi, esp */
  ESI = (ESP);
  /* 11fd58b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd58b9 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11fd58bc push ecx */
  push32((uint32_t)(ECX));
  /* 11fd58bd push 0x1200912c */
  push32((uint32_t)(0x1200912cu));
  /* 11fd58c2 call dword ptr [0x12011534] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011534))), 0x11fd58c8u);
  /* 11fd58c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd58cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd58cd call 0x11fd8e20 */
  push32(0x11fd58d2u); f_11fd8e20();
L_11fd58d2:;
  /* 11fd58d2 mov esi, esp */
  ESI = (ESP);
  /* 11fd58d4 push 0x1200911c */
  push32((uint32_t)(0x1200911cu));
  /* 11fd58d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd58db push 0x120090d8 */
  push32((uint32_t)(0x120090d8u));
  /* 11fd58e0 push 7 */
  push32((uint32_t)(0x7u));
  /* 11fd58e2 call dword ptr [0x120114e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114e0))), 0x11fd58e8u);
  /* 11fd58e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd58eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd58ed call 0x11fd8e20 */
  push32(0x11fd58f2u); f_11fd8e20();
  /* 11fd58f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fd58f5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd58f9 je 0x11fd5903 */
  if (C.zf) goto L_11fd5903;
  /* 11fd58fb cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd58ff je 0x11fd590f */
  if (C.zf) goto L_11fd590f;
  /* 11fd5901 jmp 0x11fd5917 */
  goto L_11fd5917;
L_11fd5903:;
  /* 11fd5903 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd5905 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5908 call 0x11fd1122 */
  push32(0x11fd590du); f_11fd1122();
  /* 11fd590d jmp 0x11fd5917 */
  goto L_11fd5917;
L_11fd590f:;
  /* 11fd590f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5912 call 0x11fd114f */
  push32(0x11fd5917u); f_11fd114f();
L_11fd5917:;
  /* 11fd5917 mov esi, esp */
  ESI = (ESP);
  /* 11fd5919 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd591c mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11fd591f push eax */
  push32((uint32_t)(EAX));
  /* 11fd5920 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5923 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 11fd5926 push edx */
  push32((uint32_t)(EDX));
  /* 11fd5927 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd5929 call dword ptr [0x12011540] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011540))), 0x11fd592fu);
  /* 11fd592f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5932 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5934 call 0x11fd8e20 */
  push32(0x11fd5939u); f_11fd8e20();
  /* 11fd5939 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd593b push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd593d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5940 call 0x11fd11b8 */
  push32(0x11fd5945u); f_11fd11b8();
L_11fd5945:;
  /* 11fd5945 pop edi */
  EDI = (pop32());
  /* 11fd5946 pop esi */
  ESI = (pop32());
  /* 11fd5947 pop ebx */
  EBX = (pop32());
  /* 11fd5948 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd594b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd594d call 0x11fd8e20 */
  push32(0x11fd5952u); f_11fd8e20();
  /* 11fd5952 mov esp, ebp */
  ESP = (EBP);
  /* 11fd5954 pop ebp */
  EBP = (pop32());
  /* 11fd5955 ret  */
  ESPCHK(0x11fd5720u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a10 @ 0x11fd5a10 (112 bytes, 43 insns) */
void f_11fd5a10(void) {
  FTRACE(0x11fd5a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5a11 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5a13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5a16 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5a17 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5a18 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5a19 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5a1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd5a1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd5a22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5a27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5a29 pop ecx */
  ECX = (pop32());
  /* 11fd5a2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd5a2d push 6 */
  push32((uint32_t)(0x6u));
  /* 11fd5a2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5a32 call 0x11fd1122 */
  push32(0x11fd5a37u); f_11fd1122();
  /* 11fd5a37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5a3a call 0x11fd118b */
  push32(0x11fd5a3fu); f_11fd118b();
  /* 11fd5a3f mov esi, esp */
  ESI = (ESP);
  /* 11fd5a41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd5a43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd5a45 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11fd5a47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5a4a call 0x11fd12b7 */
  push32(0x11fd5a4fu); f_11fd12b7();
  /* 11fd5a4f push eax */
  push32((uint32_t)(EAX));
  /* 11fd5a50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5a53 mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11fd5a56 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5a57 call dword ptr [0x12011580] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011580))), 0x11fd5a5du);
  /* 11fd5a5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5a60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5a62 call 0x11fd8e20 */
  push32(0x11fd5a67u); f_11fd8e20();
  /* 11fd5a67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5a6a call 0x11fd12a8 */
  push32(0x11fd5a6fu); f_11fd12a8();
  /* 11fd5a6f pop edi */
  EDI = (pop32());
  /* 11fd5a70 pop esi */
  ESI = (pop32());
  /* 11fd5a71 pop ebx */
  EBX = (pop32());
  /* 11fd5a72 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5a75 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5a77 call 0x11fd8e20 */
  push32(0x11fd5a7cu); f_11fd8e20();
  /* 11fd5a7c mov esp, ebp */
  ESP = (EBP);
  /* 11fd5a7e pop ebp */
  EBP = (pop32());
  /* 11fd5a7f ret  */
  ESPCHK(0x11fd5a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005aa0 @ 0x11fd5aa0 (75 bytes, 32 insns) */
void f_11fd5aa0(void) {
  FTRACE(0x11fd5aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5aa1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5aa3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5aa6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5aa7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5aa8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5aa9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5aaa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd5aad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd5ab2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5ab7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5ab9 pop ecx */
  ECX = (pop32());
  /* 11fd5aba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd5abd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd5ac0 push eax */
  push32((uint32_t)(EAX));
  /* 11fd5ac1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd5ac4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5ac5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd5ac8 push edx */
  push32((uint32_t)(EDX));
  /* 11fd5ac9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5acc call 0x11fd101e */
  push32(0x11fd5ad1u); f_11fd101e();
  /* 11fd5ad1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5ad4 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 11fd5ad8 pop edi */
  EDI = (pop32());
  /* 11fd5ad9 pop esi */
  ESI = (pop32());
  /* 11fd5ada pop ebx */
  EBX = (pop32());
  /* 11fd5adb add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5ade cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5ae0 call 0x11fd8e20 */
  push32(0x11fd5ae5u); f_11fd8e20();
  /* 11fd5ae5 mov esp, ebp */
  ESP = (EBP);
  /* 11fd5ae7 pop ebp */
  EBP = (pop32());
  /* 11fd5ae8 ret 0xc */
  ESPCHK(0x11fd5aa0u, _esp0);
  ESP += 16; return;
}

/* FUN_10005b00 @ 0x11fd5b00 (95 bytes, 37 insns) */
void f_11fd5b00(void) {
  FTRACE(0x11fd5b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5b01 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5b03 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5b06 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5b07 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5b08 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5b09 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5b0a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd5b0d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd5b12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5b17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5b19 pop ecx */
  ECX = (pop32());
  /* 11fd5b1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd5b1d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd5b21 mov esi, esp */
  ESI = (ESP);
  /* 11fd5b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd5b25 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11fd5b2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5b2d call 0x11fd12b7 */
  push32(0x11fd5b32u); f_11fd12b7();
  /* 11fd5b32 push eax */
  push32((uint32_t)(EAX));
  /* 11fd5b33 call dword ptr [0x12011560] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011560))), 0x11fd5b39u);
  /* 11fd5b39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5b3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5b3e call 0x11fd8e20 */
  push32(0x11fd5b43u); f_11fd8e20();
  /* 11fd5b43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd5b45 jle 0x11fd5b4b */
  if ((C.zf||C.sf!=C.of)) goto L_11fd5b4b;
  /* 11fd5b47 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11fd5b4b:;
  /* 11fd5b4b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd5b4e pop edi */
  EDI = (pop32());
  /* 11fd5b4f pop esi */
  ESI = (pop32());
  /* 11fd5b50 pop ebx */
  EBX = (pop32());
  /* 11fd5b51 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5b54 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5b56 call 0x11fd8e20 */
  push32(0x11fd5b5bu); f_11fd8e20();
  /* 11fd5b5b mov esp, ebp */
  ESP = (EBP);
  /* 11fd5b5d pop ebp */
  EBP = (pop32());
  /* 11fd5b5e ret  */
  ESPCHK(0x11fd5b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b80 @ 0x11fd5b80 (78 bytes, 28 insns) */
void f_11fd5b80(void) {
  FTRACE(0x11fd5b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5b81 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5b83 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5b86 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5b87 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5b88 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5b89 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5b8a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd5b8d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd5b92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5b97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5b99 pop ecx */
  ECX = (pop32());
  /* 11fd5b9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd5b9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5ba0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd5ba3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11fd5ba6 mov edx, dword ptr [0x1200eeb8] */
  EDX = (r32((uint32_t)(0x1200eeb8)));
  /* 11fd5bac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5baf mov dword ptr [edx*4 + 0x1200ee68], eax */
  w32((uint32_t)(EDX*4 + 0x1200ee68), (EAX));
  /* 11fd5bb6 mov ecx, dword ptr [0x1200eeb8] */
  ECX = (r32((uint32_t)(0x1200eeb8)));
  /* 11fd5bbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5bbf mov dword ptr [0x1200eeb8], ecx */
  w32((uint32_t)(0x1200eeb8), (ECX));
  /* 11fd5bc5 pop edi */
  EDI = (pop32());
  /* 11fd5bc6 pop esi */
  ESI = (pop32());
  /* 11fd5bc7 pop ebx */
  EBX = (pop32());
  /* 11fd5bc8 mov esp, ebp */
  ESP = (EBP);
  /* 11fd5bca pop ebp */
  EBP = (pop32());
  /* 11fd5bcb ret 4 */
  ESPCHK(0x11fd5b80u, _esp0);
  ESP += 8; return;
}

/* FUN_10005bf0 @ 0x11fd5bf0 (128 bytes, 44 insns) */
void f_11fd5bf0(void) {
  FTRACE(0x11fd5bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5bf3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5bf7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5bf8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5bf9 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd5bfc mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd5c01 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5c06 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5c08 mov eax, dword ptr [0x1200ee68] */
  EAX = (r32((uint32_t)(0x1200ee68)));
  /* 11fd5c0d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fd5c10 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd5c17 jmp 0x11fd5c22 */
  goto L_11fd5c22;
L_11fd5c19:;
  /* 11fd5c19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fd5c1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5c1f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11fd5c22:;
  /* 11fd5c22 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fd5c25 cmp edx, dword ptr [0x1200eeb8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1200eeb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5c2b jge 0x11fd5c5c */
  if ((C.sf==C.of)) goto L_11fd5c5c;
  /* 11fd5c2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fd5c30 mov ecx, dword ptr [eax*4 + 0x1200ee68] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1200ee68)));
  /* 11fd5c37 call 0x11fd1131 */
  push32(0x11fd5c3cu); f_11fd1131();
  /* 11fd5c3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fd5c3e mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11fd5c41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd5c44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fd5c46 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11fd5c49 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5c4b jne 0x11fd5c5a */
  if (!C.zf) goto L_11fd5c5a;
  /* 11fd5c4d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fd5c50 mov edx, dword ptr [ecx*4 + 0x1200ee68] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1200ee68)));
  /* 11fd5c57 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fd5c5a:;
  /* 11fd5c5a jmp 0x11fd5c19 */
  goto L_11fd5c19;
L_11fd5c5c:;
  /* 11fd5c5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5c5f pop edi */
  EDI = (pop32());
  /* 11fd5c60 pop esi */
  ESI = (pop32());
  /* 11fd5c61 pop ebx */
  EBX = (pop32());
  /* 11fd5c62 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5c65 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5c67 call 0x11fd8e20 */
  push32(0x11fd5c6cu); f_11fd8e20();
  /* 11fd5c6c mov esp, ebp */
  ESP = (EBP);
  /* 11fd5c6e pop ebp */
  EBP = (pop32());
  /* 11fd5c6f ret  */
  ESPCHK(0x11fd5bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c90 @ 0x11fd5c90 (47 bytes, 22 insns) */
void f_11fd5c90(void) {
  FTRACE(0x11fd5c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5c91 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5c93 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5c96 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5c97 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5c98 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5c99 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5c9a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd5c9d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd5ca2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5ca7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5ca9 pop ecx */
  ECX = (pop32());
  /* 11fd5caa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd5cad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5cb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd5cb3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11fd5cb6 pop edi */
  EDI = (pop32());
  /* 11fd5cb7 pop esi */
  ESI = (pop32());
  /* 11fd5cb8 pop ebx */
  EBX = (pop32());
  /* 11fd5cb9 mov esp, ebp */
  ESP = (EBP);
  /* 11fd5cbb pop ebp */
  EBP = (pop32());
  /* 11fd5cbc ret 4 */
  ESPCHK(0x11fd5c90u, _esp0);
  ESP += 8; return;
}

/* FUN_10005cd0 @ 0x11fd5cd0 (47 bytes, 22 insns) */
void f_11fd5cd0(void) {
  FTRACE(0x11fd5cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5cd3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5cd6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5cd7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5cd8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5cd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5cda lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd5cdd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd5ce2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5ce7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5ce9 pop ecx */
  ECX = (pop32());
  /* 11fd5cea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd5ced mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5cf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd5cf3 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11fd5cf6 pop edi */
  EDI = (pop32());
  /* 11fd5cf7 pop esi */
  ESI = (pop32());
  /* 11fd5cf8 pop ebx */
  EBX = (pop32());
  /* 11fd5cf9 mov esp, ebp */
  ESP = (EBP);
  /* 11fd5cfb pop ebp */
  EBP = (pop32());
  /* 11fd5cfc ret 4 */
  ESPCHK(0x11fd5cd0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005d10 @ 0x11fd5d10 (47 bytes, 22 insns) */
void f_11fd5d10(void) {
  FTRACE(0x11fd5d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5d11 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5d13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5d16 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5d17 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5d18 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5d19 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5d1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd5d1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd5d22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5d27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5d29 pop ecx */
  ECX = (pop32());
  /* 11fd5d2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd5d2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5d30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd5d33 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 11fd5d36 pop edi */
  EDI = (pop32());
  /* 11fd5d37 pop esi */
  ESI = (pop32());
  /* 11fd5d38 pop ebx */
  EBX = (pop32());
  /* 11fd5d39 mov esp, ebp */
  ESP = (EBP);
  /* 11fd5d3b pop ebp */
  EBP = (pop32());
  /* 11fd5d3c ret 4 */
  ESPCHK(0x11fd5d10u, _esp0);
  ESP += 8; return;
}

/* FUN_10005d50 @ 0x11fd5d50 (85 bytes, 35 insns) */
void f_11fd5d50(void) {
  FTRACE(0x11fd5d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5d51 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5d53 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5d56 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5d57 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5d58 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5d59 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5d5a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd5d5d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd5d62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5d67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5d69 pop ecx */
  ECX = (pop32());
  /* 11fd5d6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd5d6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5d70 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fd5d73 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5d74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5d77 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11fd5d7a push eax */
  push32((uint32_t)(EAX));
  /* 11fd5d7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd5d7e call 0x11fd11b8 */
  push32(0x11fd5d83u); f_11fd11b8();
  /* 11fd5d83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5d86 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fd5d89 push edx */
  push32((uint32_t)(EDX));
  /* 11fd5d8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd5d8d call 0x11fd120d */
  push32(0x11fd5d92u); f_11fd120d();
  /* 11fd5d92 pop edi */
  EDI = (pop32());
  /* 11fd5d93 pop esi */
  ESI = (pop32());
  /* 11fd5d94 pop ebx */
  EBX = (pop32());
  /* 11fd5d95 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5d98 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5d9a call 0x11fd8e20 */
  push32(0x11fd5d9fu); f_11fd8e20();
  /* 11fd5d9f mov esp, ebp */
  ESP = (EBP);
  /* 11fd5da1 pop ebp */
  EBP = (pop32());
  /* 11fd5da2 ret 4 */
  ESPCHK(0x11fd5d50u, _esp0);
  ESP += 8; return;
}

/* FUN_10005dc0 @ 0x11fd5dc0 (42 bytes, 21 insns) */
void f_11fd5dc0(void) {
  FTRACE(0x11fd5dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5dc3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5dc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5dc7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5dc8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5dc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5dca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd5dcd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd5dd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5dd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5dd9 pop ecx */
  ECX = (pop32());
  /* 11fd5dda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd5ddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5de0 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fd5de3 pop edi */
  EDI = (pop32());
  /* 11fd5de4 pop esi */
  ESI = (pop32());
  /* 11fd5de5 pop ebx */
  EBX = (pop32());
  /* 11fd5de6 mov esp, ebp */
  ESP = (EBP);
  /* 11fd5de8 pop ebp */
  EBP = (pop32());
  /* 11fd5de9 ret  */
  ESPCHK(0x11fd5dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e00 @ 0x11fd5e00 (39 bytes, 20 insns) */
void f_11fd5e00(void) {
  FTRACE(0x11fd5e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5e01 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5e03 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5e06 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5e07 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5e08 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5e09 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5e0a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd5e0d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd5e12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5e17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5e19 pop ecx */
  ECX = (pop32());
  /* 11fd5e1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd5e1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5e20 pop edi */
  EDI = (pop32());
  /* 11fd5e21 pop esi */
  ESI = (pop32());
  /* 11fd5e22 pop ebx */
  EBX = (pop32());
  /* 11fd5e23 mov esp, ebp */
  ESP = (EBP);
  /* 11fd5e25 pop ebp */
  EBP = (pop32());
  /* 11fd5e26 ret  */
  ESPCHK(0x11fd5e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e30 @ 0x11fd5e30 (518 bytes, 176 insns) */
void f_11fd5e30(void) {
  FTRACE(0x11fd5e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd5e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd5e31 mov ebp, esp */
  EBP = (ESP);
  /* 11fd5e33 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd5e36 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd5e37 push esi */
  push32((uint32_t)(ESI));
  /* 11fd5e38 push edi */
  push32((uint32_t)(EDI));
  /* 11fd5e39 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5e3a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd5e3d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd5e42 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd5e47 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd5e49 pop ecx */
  ECX = (pop32());
  /* 11fd5e4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd5e4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5e50 call 0x11fd119f */
  push32(0x11fd5e55u); f_11fd119f();
  /* 11fd5e55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd5e57 jle 0x11fd6025 */
  if ((C.zf||C.sf!=C.of)) goto L_11fd6025;
  /* 11fd5e5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5e60 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fd5e63 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5e66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5e69 cmp ecx, dword ptr [edx + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5e6c jge 0x11fd6025 */
  if ((C.sf==C.of)) goto L_11fd6025;
  /* 11fd5e72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5e75 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fd5e78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5e7b cmp dword ptr [edx + ecx*8 + 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5e80 jne 0x11fd5f49 */
  if (!C.zf) goto L_11fd5f49;
  /* 11fd5e86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5e89 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fd5e8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5e8f mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 11fd5e93 push eax */
  push32((uint32_t)(EAX));
  /* 11fd5e94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5e97 call 0x11fd10c8 */
  push32(0x11fd5e9cu); f_11fd10c8();
  /* 11fd5e9c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd5ea1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd5ea3 je 0x11fd5ed0 */
  if (C.zf) goto L_11fd5ed0;
  /* 11fd5ea5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5ea8 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11fd5eab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5eae mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 11fd5eb2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5eb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5eb6 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11fd5eb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5ebc mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 11fd5ec0 push edx */
  push32((uint32_t)(EDX));
  /* 11fd5ec1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5ec4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5ec7 push eax */
  push32((uint32_t)(EAX));
  /* 11fd5ec8 call 0x11fd1069 */
  push32(0x11fd5ecdu); f_11fd1069();
  /* 11fd5ecd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fd5ed0:;
  /* 11fd5ed0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5ed3 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11fd5ed6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5ed9 mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 11fd5edd push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5ede mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5ee1 call 0x11fd10c8 */
  push32(0x11fd5ee6u); f_11fd10c8();
  /* 11fd5ee6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd5eeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd5eed je 0x11fd5f44 */
  if (C.zf) goto L_11fd5f44;
  /* 11fd5eef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5ef2 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11fd5ef5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5ef8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5efb mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 11fd5efe mov esi, esp */
  ESI = (ESP);
  /* 11fd5f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd5f02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5f05 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5f08 push edx */
  push32((uint32_t)(EDX));
  /* 11fd5f09 call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd5f0fu);
  /* 11fd5f0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5f12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5f14 call 0x11fd8e20 */
  push32(0x11fd5f19u); f_11fd8e20();
  /* 11fd5f19 mov esi, esp */
  ESI = (ESP);
  /* 11fd5f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd5f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd5f1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5f22 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fd5f25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5f28 mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 11fd5f2c push eax */
  push32((uint32_t)(EAX));
  /* 11fd5f2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5f30 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 11fd5f33 push edx */
  push32((uint32_t)(EDX));
  /* 11fd5f34 call dword ptr [0x12011580] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011580))), 0x11fd5f3au);
  /* 11fd5f3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5f3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5f3f call 0x11fd8e20 */
  push32(0x11fd5f44u); f_11fd8e20();
L_11fd5f44:;
  /* 11fd5f44 jmp 0x11fd6025 */
  goto L_11fd6025;
L_11fd5f49:;
  /* 11fd5f49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5f4c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fd5f4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5f52 cmp dword ptr [edx + ecx*8 + 0x34], 2 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5f57 je 0x11fd5f69 */
  if (C.zf) goto L_11fd5f69;
  /* 11fd5f59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5f5c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fd5f5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5f62 cmp dword ptr [edx + ecx*8 + 0x34], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5f67 jne 0x11fd5fc0 */
  if (!C.zf) goto L_11fd5fc0;
L_11fd5f69:;
  /* 11fd5f69 mov esi, esp */
  ESI = (ESP);
  /* 11fd5f6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd5f6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5f70 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5f73 push eax */
  push32((uint32_t)(EAX));
  /* 11fd5f74 call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd5f7au);
  /* 11fd5f7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5f7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5f7f call 0x11fd8e20 */
  push32(0x11fd5f84u); f_11fd8e20();
  /* 11fd5f84 mov esi, esp */
  ESI = (ESP);
  /* 11fd5f86 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fd5f88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd5f8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5f8d mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11fd5f90 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5f93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5f96 mov dword ptr [eax + 0x1c], edx */
  w32((uint32_t)(EAX + 0x1c), (EDX));
  /* 11fd5f99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5f9c mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11fd5f9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5fa2 mov ecx, dword ptr [eax + edx*8 + 0x28] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x28)));
  /* 11fd5fa6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5fa7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5faa mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 11fd5fad push eax */
  push32((uint32_t)(EAX));
  /* 11fd5fae call dword ptr [0x12011580] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011580))), 0x11fd5fb4u);
  /* 11fd5fb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5fb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5fb9 call 0x11fd8e20 */
  push32(0x11fd5fbeu); f_11fd8e20();
  /* 11fd5fbe jmp 0x11fd6025 */
  goto L_11fd6025;
L_11fd5fc0:;
  /* 11fd5fc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5fc3 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11fd5fc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5fc9 cmp dword ptr [eax + edx*8 + 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*8 + 0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5fce jne 0x11fd6025 */
  if (!C.zf) goto L_11fd6025;
  /* 11fd5fd0 mov esi, esp */
  ESI = (ESP);
  /* 11fd5fd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd5fd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5fd7 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5fda push ecx */
  push32((uint32_t)(ECX));
  /* 11fd5fdb call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd5fe1u);
  /* 11fd5fe1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5fe4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd5fe6 call 0x11fd8e20 */
  push32(0x11fd5febu); f_11fd8e20();
  /* 11fd5feb mov esi, esp */
  ESI = (ESP);
  /* 11fd5fed push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd5fef push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd5ff1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5ff4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11fd5ff7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd5ffa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd5ffd mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 11fd6000 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6003 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11fd6006 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6009 mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 11fd600d push edx */
  push32((uint32_t)(EDX));
  /* 11fd600e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6011 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11fd6014 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd6015 call dword ptr [0x12011580] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011580))), 0x11fd601bu);
  /* 11fd601b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd601e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6020 call 0x11fd8e20 */
  push32(0x11fd6025u); f_11fd8e20();
L_11fd6025:;
  /* 11fd6025 pop edi */
  EDI = (pop32());
  /* 11fd6026 pop esi */
  ESI = (pop32());
  /* 11fd6027 pop ebx */
  EBX = (pop32());
  /* 11fd6028 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd602b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd602d call 0x11fd8e20 */
  push32(0x11fd6032u); f_11fd8e20();
  /* 11fd6032 mov esp, ebp */
  ESP = (EBP);
  /* 11fd6034 pop ebp */
  EBP = (pop32());
  /* 11fd6035 ret  */
  ESPCHK(0x11fd5e30u, _esp0);
  ESP += 4; return;
}

/* FUN_100060c0 @ 0x11fd60c0 (38 bytes, 20 insns) */
void f_11fd60c0(void) {
  FTRACE(0x11fd60c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd60c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd60c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd60c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd60c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd60c7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd60c8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd60c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd60ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd60cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd60d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd60d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd60d9 pop ecx */
  ECX = (pop32());
  /* 11fd60da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd60dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fd60df pop edi */
  EDI = (pop32());
  /* 11fd60e0 pop esi */
  ESI = (pop32());
  /* 11fd60e1 pop ebx */
  EBX = (pop32());
  /* 11fd60e2 mov esp, ebp */
  ESP = (EBP);
  /* 11fd60e4 pop ebp */
  EBP = (pop32());
  /* 11fd60e5 ret  */
  ESPCHK(0x11fd60c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060f0 @ 0x11fd60f0 (85 bytes, 34 insns) */
void f_11fd60f0(void) {
  FTRACE(0x11fd60f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd60f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd60f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd60f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd60f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd60f7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd60f8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd60f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd60fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd60fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd6102 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd6107 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd6109 pop ecx */
  ECX = (pop32());
  /* 11fd610a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd610d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6110 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 11fd6113 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6116 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd6119 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 11fd611d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6120 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11fd6123 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6126 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd6129 mov dword ptr [eax + edx*8 + 0x2c], ecx */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (ECX));
  /* 11fd612d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6130 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11fd6133 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6136 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6139 mov dword ptr [ecx + 0x20], eax */
  w32((uint32_t)(ECX + 0x20), (EAX));
  /* 11fd613c pop edi */
  EDI = (pop32());
  /* 11fd613d pop esi */
  ESI = (pop32());
  /* 11fd613e pop ebx */
  EBX = (pop32());
  /* 11fd613f mov esp, ebp */
  ESP = (EBP);
  /* 11fd6141 pop ebp */
  EBP = (pop32());
  /* 11fd6142 ret 8 */
  ESPCHK(0x11fd60f0u, _esp0);
  ESP += 12; return;
}

/* FUN_10006160 @ 0x11fd6160 (86 bytes, 33 insns) */
void f_11fd6160(void) {
  FTRACE(0x11fd6160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd6160 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd6161 mov ebp, esp */
  EBP = (ESP);
  /* 11fd6163 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd6166 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd6167 push esi */
  push32((uint32_t)(ESI));
  /* 11fd6168 push edi */
  push32((uint32_t)(EDI));
  /* 11fd6169 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd616a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd616d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd6172 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd6177 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd6179 pop ecx */
  ECX = (pop32());
  /* 11fd617a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd617d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6180 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 11fd6183 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd6189 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 11fd618d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6190 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11fd6193 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6196 mov dword ptr [eax + edx*8 + 0x2c], 2 */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (0x2u));
  /* 11fd619e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd61a1 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11fd61a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd61a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd61aa mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11fd61ad pop edi */
  EDI = (pop32());
  /* 11fd61ae pop esi */
  ESI = (pop32());
  /* 11fd61af pop ebx */
  EBX = (pop32());
  /* 11fd61b0 mov esp, ebp */
  ESP = (EBP);
  /* 11fd61b2 pop ebp */
  EBP = (pop32());
  /* 11fd61b3 ret 4 */
  ESPCHK(0x11fd6160u, _esp0);
  ESP += 8; return;
}

/* FUN_100061d0 @ 0x11fd61d0 (119 bytes, 43 insns) */
void f_11fd61d0(void) {
  FTRACE(0x11fd61d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd61d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd61d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd61d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd61d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd61d7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd61d8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd61d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd61da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd61dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd61e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd61e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd61e9 pop ecx */
  ECX = (pop32());
  /* 11fd61ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd61ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd61f0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd61f3 mov esi, esp */
  ESI = (ESP);
  /* 11fd61f5 push eax */
  push32((uint32_t)(EAX));
  /* 11fd61f6 call dword ptr [0x1201158c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201158c))), 0x11fd61fcu);
  /* 11fd61fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd61ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6201 call 0x11fd8e20 */
  push32(0x11fd6206u); f_11fd8e20();
  /* 11fd6206 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6209 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd620c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11fd620e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6211 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd6214 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11fd6217 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd621a mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
  /* 11fd6221 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6224 mov dword ptr [eax + 0x20], 0 */
  w32((uint32_t)(EAX + 0x20), (0x0u));
  /* 11fd622b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd622e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd6231 mov dword ptr [ecx + 0x24], edx */
  w32((uint32_t)(ECX + 0x24), (EDX));
  /* 11fd6234 pop edi */
  EDI = (pop32());
  /* 11fd6235 pop esi */
  ESI = (pop32());
  /* 11fd6236 pop ebx */
  EBX = (pop32());
  /* 11fd6237 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd623a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd623c call 0x11fd8e20 */
  push32(0x11fd6241u); f_11fd8e20();
  /* 11fd6241 mov esp, ebp */
  ESP = (EBP);
  /* 11fd6243 pop ebp */
  EBP = (pop32());
  /* 11fd6244 ret 0xc */
  ESPCHK(0x11fd61d0u, _esp0);
  ESP += 16; return;
}

/* FUN_10006270 @ 0x11fd6270 (263 bytes, 93 insns) */
void f_11fd6270(void) {
  FTRACE(0x11fd6270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd6270 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd6271 mov ebp, esp */
  EBP = (ESP);
  /* 11fd6273 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd6276 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd6277 push esi */
  push32((uint32_t)(ESI));
  /* 11fd6278 push edi */
  push32((uint32_t)(EDI));
  /* 11fd6279 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd627a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd627d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd6282 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd6287 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd6289 pop ecx */
  ECX = (pop32());
  /* 11fd628a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd628d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6290 call 0x11fd119f */
  push32(0x11fd6295u); f_11fd119f();
  /* 11fd6295 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd6297 jne 0x11fd6364 */
  if (!C.zf) goto L_11fd6364;
  /* 11fd629d mov esi, esp */
  ESI = (ESP);
  /* 11fd629f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd62a2 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11fd62a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd62a6 call dword ptr [0x120114ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114ec))), 0x11fd62acu);
  /* 11fd62ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd62af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd62b1 call 0x11fd8e20 */
  push32(0x11fd62b6u); f_11fd8e20();
  /* 11fd62b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd62bd jmp 0x11fd62c8 */
  goto L_11fd62c8;
L_11fd62bf:;
  /* 11fd62bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fd62c2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd62c5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11fd62c8:;
  /* 11fd62c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fd62cb cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd62ce jge 0x11fd6320 */
  if ((C.sf==C.of)) goto L_11fd6320;
  /* 11fd62d0 mov esi, esp */
  ESI = (ESP);
  /* 11fd62d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd62d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd62d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd62d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd62db mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 11fd62de push eax */
  push32((uint32_t)(EAX));
  /* 11fd62df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd62e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fd62e4 push edx */
  push32((uint32_t)(EDX));
  /* 11fd62e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd62e8 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fd62eb push ecx */
  push32((uint32_t)(ECX));
  /* 11fd62ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd62ef add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd62f2 push edx */
  push32((uint32_t)(EDX));
  /* 11fd62f3 call dword ptr [0x12011548] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011548))), 0x11fd62f9u);
  /* 11fd62f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd62fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd62fe call 0x11fd8e20 */
  push32(0x11fd6303u); f_11fd8e20();
  /* 11fd6303 mov esi, esp */
  ESI = (ESP);
  /* 11fd6305 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fd6307 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd630a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd630d push eax */
  push32((uint32_t)(EAX));
  /* 11fd630e call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd6314u);
  /* 11fd6314 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6317 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6319 call 0x11fd8e20 */
  push32(0x11fd631eu); f_11fd8e20();
  /* 11fd631e jmp 0x11fd62bf */
  goto L_11fd62bf;
L_11fd6320:;
  /* 11fd6320 mov esi, esp */
  ESI = (ESP);
  /* 11fd6322 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd6324 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6327 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd632a push ecx */
  push32((uint32_t)(ECX));
  /* 11fd632b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd632e mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 11fd6331 push eax */
  push32((uint32_t)(EAX));
  /* 11fd6332 call dword ptr [0x12011594] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011594))), 0x11fd6338u);
  /* 11fd6338 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd633b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd633d call 0x11fd8e20 */
  push32(0x11fd6342u); f_11fd8e20();
  /* 11fd6342 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6345 mov dword ptr [ecx + 0x20], 0 */
  w32((uint32_t)(ECX + 0x20), (0x0u));
  /* 11fd634c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd634e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd6351 push edx */
  push32((uint32_t)(EDX));
  /* 11fd6352 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6355 call 0x11fd105f */
  push32(0x11fd635au); f_11fd105f();
  /* 11fd635a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd635d mov dword ptr [eax + 0x1c], 0 */
  w32((uint32_t)(EAX + 0x1c), (0x0u));
L_11fd6364:;
  /* 11fd6364 pop edi */
  EDI = (pop32());
  /* 11fd6365 pop esi */
  ESI = (pop32());
  /* 11fd6366 pop ebx */
  EBX = (pop32());
  /* 11fd6367 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd636a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd636c call 0x11fd8e20 */
  push32(0x11fd6371u); f_11fd8e20();
  /* 11fd6371 mov esp, ebp */
  ESP = (EBP);
  /* 11fd6373 pop ebp */
  EBP = (pop32());
  /* 11fd6374 ret 8 */
  ESPCHK(0x11fd6270u, _esp0);
  ESP += 12; return;
}

/* FUN_100063c0 @ 0x11fd63c0 (42 bytes, 21 insns) */
void f_11fd63c0(void) {
  FTRACE(0x11fd63c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd63c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd63c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd63c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd63c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd63c7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd63c8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd63c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd63ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd63cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd63d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd63d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd63d9 pop ecx */
  ECX = (pop32());
  /* 11fd63da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd63dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd63e0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd63e3 pop edi */
  EDI = (pop32());
  /* 11fd63e4 pop esi */
  ESI = (pop32());
  /* 11fd63e5 pop ebx */
  EBX = (pop32());
  /* 11fd63e6 mov esp, ebp */
  ESP = (EBP);
  /* 11fd63e8 pop ebp */
  EBP = (pop32());
  /* 11fd63e9 ret  */
  ESPCHK(0x11fd63c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006400 @ 0x11fd6400 (78 bytes, 33 insns) */
void f_11fd6400(void) {
  FTRACE(0x11fd6400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd6400 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd6401 mov ebp, esp */
  EBP = (ESP);
  /* 11fd6403 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd6406 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd6407 push esi */
  push32((uint32_t)(ESI));
  /* 11fd6408 push edi */
  push32((uint32_t)(EDI));
  /* 11fd6409 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd640a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd640d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd6412 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd6417 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd6419 pop ecx */
  ECX = (pop32());
  /* 11fd641a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd641d mov esi, esp */
  ESI = (ESP);
  /* 11fd641f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6422 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11fd6425 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd6426 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6429 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd642c push edx */
  push32((uint32_t)(EDX));
  /* 11fd642d call dword ptr [0x120114fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114fc))), 0x11fd6433u);
  /* 11fd6433 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6436 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6438 call 0x11fd8e20 */
  push32(0x11fd643du); f_11fd8e20();
  /* 11fd643d pop edi */
  EDI = (pop32());
  /* 11fd643e pop esi */
  ESI = (pop32());
  /* 11fd643f pop ebx */
  EBX = (pop32());
  /* 11fd6440 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6443 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6445 call 0x11fd8e20 */
  push32(0x11fd644au); f_11fd8e20();
  /* 11fd644a mov esp, ebp */
  ESP = (EBP);
  /* 11fd644c pop ebp */
  EBP = (pop32());
  /* 11fd644d ret  */
  ESPCHK(0x11fd6400u, _esp0);
  ESP += 4; return;
}

/* FUN_10006470 @ 0x11fd6470 (102 bytes, 40 insns) */
void f_11fd6470(void) {
  FTRACE(0x11fd6470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd6470 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd6471 mov ebp, esp */
  EBP = (ESP);
  /* 11fd6473 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd6476 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd6477 push esi */
  push32((uint32_t)(ESI));
  /* 11fd6478 push edi */
  push32((uint32_t)(EDI));
  /* 11fd6479 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd647a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd647d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd6482 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd6487 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd6489 pop ecx */
  ECX = (pop32());
  /* 11fd648a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd648d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd6491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6494 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6497 mov esi, esp */
  ESI = (ESP);
  /* 11fd6499 push eax */
  push32((uint32_t)(EAX));
  /* 11fd649a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd649d push ecx */
  push32((uint32_t)(ECX));
  /* 11fd649e call dword ptr [0x12011578] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011578))), 0x11fd64a4u);
  /* 11fd64a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd64a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd64a9 call 0x11fd8e20 */
  push32(0x11fd64aeu); f_11fd8e20();
  /* 11fd64ae mov esi, eax */
  ESI = (EAX);
  /* 11fd64b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd64b3 call 0x11fd119f */
  push32(0x11fd64b8u); f_11fd119f();
  /* 11fd64b8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd64ba jne 0x11fd64c0 */
  if (!C.zf) goto L_11fd64c0;
  /* 11fd64bc mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11fd64c0:;
  /* 11fd64c0 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd64c3 pop edi */
  EDI = (pop32());
  /* 11fd64c4 pop esi */
  ESI = (pop32());
  /* 11fd64c5 pop ebx */
  EBX = (pop32());
  /* 11fd64c6 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd64c9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd64cb call 0x11fd8e20 */
  push32(0x11fd64d0u); f_11fd8e20();
  /* 11fd64d0 mov esp, ebp */
  ESP = (EBP);
  /* 11fd64d2 pop ebp */
  EBP = (pop32());
  /* 11fd64d3 ret 4 */
  ESPCHK(0x11fd6470u, _esp0);
  ESP += 8; return;
}

/* FUN_100064f0 @ 0x11fd64f0 (122 bytes, 45 insns) */
void f_11fd64f0(void) {
  FTRACE(0x11fd64f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd64f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd64f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd64f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd64f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd64f7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd64f8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd64f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd64fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd64fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd6502 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd6507 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd6509 pop ecx */
  ECX = (pop32());
  /* 11fd650a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd650d mov esi, esp */
  ESI = (ESP);
  /* 11fd650f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd6512 push eax */
  push32((uint32_t)(EAX));
  /* 11fd6513 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6516 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6519 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd651a call dword ptr [0x120114d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114d0))), 0x11fd6520u);
  /* 11fd6520 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6523 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6525 call 0x11fd8e20 */
  push32(0x11fd652au); f_11fd8e20();
  /* 11fd652a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd652d add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6530 push edx */
  push32((uint32_t)(EDX));
  /* 11fd6531 call 0x11fd10cd */
  push32(0x11fd6536u); f_11fd10cd();
  /* 11fd6536 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6539 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd653e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6541 mov dword ptr [ecx + 0x18], eax */
  w32((uint32_t)(ECX + 0x18), (EAX));
  /* 11fd6544 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6547 mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
  /* 11fd654e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6551 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd6554 mov dword ptr [eax + 0x1c], ecx */
  w32((uint32_t)(EAX + 0x1c), (ECX));
  /* 11fd6557 pop edi */
  EDI = (pop32());
  /* 11fd6558 pop esi */
  ESI = (pop32());
  /* 11fd6559 pop ebx */
  EBX = (pop32());
  /* 11fd655a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd655d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd655f call 0x11fd8e20 */
  push32(0x11fd6564u); f_11fd8e20();
  /* 11fd6564 mov esp, ebp */
  ESP = (EBP);
  /* 11fd6566 pop ebp */
  EBP = (pop32());
  /* 11fd6567 ret 8 */
  ESPCHK(0x11fd64f0u, _esp0);
  ESP += 12; return;
}

/* FUN_10006590 @ 0x11fd6590 (56 bytes, 25 insns) */
void f_11fd6590(void) {
  FTRACE(0x11fd6590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd6590 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd6591 mov ebp, esp */
  EBP = (ESP);
  /* 11fd6593 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd6596 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd6597 push esi */
  push32((uint32_t)(ESI));
  /* 11fd6598 push edi */
  push32((uint32_t)(EDI));
  /* 11fd6599 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd659a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd659d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd65a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd65a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd65a9 pop ecx */
  ECX = (pop32());
  /* 11fd65aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd65ad mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd65b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd65b4 cmp dword ptr [eax + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd65b8 jne 0x11fd65be */
  if (!C.zf) goto L_11fd65be;
  /* 11fd65ba mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11fd65be:;
  /* 11fd65be mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd65c1 pop edi */
  EDI = (pop32());
  /* 11fd65c2 pop esi */
  ESI = (pop32());
  /* 11fd65c3 pop ebx */
  EBX = (pop32());
  /* 11fd65c4 mov esp, ebp */
  ESP = (EBP);
  /* 11fd65c6 pop ebp */
  EBP = (pop32());
  /* 11fd65c7 ret  */
  ESPCHK(0x11fd6590u, _esp0);
  ESP += 4; return;
}

/* FUN_100065e0 @ 0x11fd65e0 (163 bytes, 60 insns) */
void f_11fd65e0(void) {
  FTRACE(0x11fd65e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd65e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd65e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd65e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd65e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd65e7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd65e8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd65e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd65ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd65ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd65f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd65f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd65f9 pop ecx */
  ECX = (pop32());
  /* 11fd65fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd65fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6600 call 0x11fd10eb */
  push32(0x11fd6605u); f_11fd10eb();
  /* 11fd6605 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd660a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd660c je 0x11fd6670 */
  if (C.zf) goto L_11fd6670;
  /* 11fd660e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6611 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd6614 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11fd6617 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd661a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd661d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fd661f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6622 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd6625 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11fd6628 mov esi, esp */
  ESI = (ESP);
  /* 11fd662a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd662c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd662f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6632 push eax */
  push32((uint32_t)(EAX));
  /* 11fd6633 call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd6639u);
  /* 11fd6639 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd663c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd663e call 0x11fd8e20 */
  push32(0x11fd6643u); f_11fd8e20();
  /* 11fd6643 mov esi, esp */
  ESI = (ESP);
  /* 11fd6645 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd6647 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd6649 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd664c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fd664e push edx */
  push32((uint32_t)(EDX));
  /* 11fd664f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6652 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11fd6655 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd6656 call dword ptr [0x12011580] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011580))), 0x11fd665cu);
  /* 11fd665c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd665f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6661 call 0x11fd8e20 */
  push32(0x11fd6666u); f_11fd8e20();
  /* 11fd6666 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6669 mov dword ptr [edx + 0x14], 1 */
  w32((uint32_t)(EDX + 0x14), (0x1u));
L_11fd6670:;
  /* 11fd6670 pop edi */
  EDI = (pop32());
  /* 11fd6671 pop esi */
  ESI = (pop32());
  /* 11fd6672 pop ebx */
  EBX = (pop32());
  /* 11fd6673 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6676 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6678 call 0x11fd8e20 */
  push32(0x11fd667du); f_11fd8e20();
  /* 11fd667d mov esp, ebp */
  ESP = (EBP);
  /* 11fd667f pop ebp */
  EBP = (pop32());
  /* 11fd6680 ret 0xc */
  ESPCHK(0x11fd65e0u, _esp0);
  ESP += 16; return;
}

/* FUN_100066b0 @ 0x11fd66b0 (140 bytes, 53 insns) */
void f_11fd66b0(void) {
  FTRACE(0x11fd66b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd66b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd66b1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd66b3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd66b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd66b7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd66b8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd66b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd66ba lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd66bd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd66c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd66c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd66c9 pop ecx */
  ECX = (pop32());
  /* 11fd66ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd66cd mov esi, esp */
  ESI = (ESP);
  /* 11fd66cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd66d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd66d4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd66d7 push eax */
  push32((uint32_t)(EAX));
  /* 11fd66d8 call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd66deu);
  /* 11fd66de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd66e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd66e3 call 0x11fd8e20 */
  push32(0x11fd66e8u); f_11fd8e20();
  /* 11fd66e8 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd66ec mov esi, esp */
  ESI = (ESP);
  /* 11fd66ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd66f1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fd66f4 push edx */
  push32((uint32_t)(EDX));
  /* 11fd66f5 call dword ptr [0x12011598] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011598))), 0x11fd66fbu);
  /* 11fd66fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd66fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6700 call 0x11fd8e20 */
  push32(0x11fd6705u); f_11fd8e20();
  /* 11fd6705 mov esi, eax */
  ESI = (EAX);
  /* 11fd6707 mov edi, esp */
  EDI = (ESP);
  /* 11fd6709 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd670c mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11fd670f push ecx */
  push32((uint32_t)(ECX));
  /* 11fd6710 call dword ptr [0x120114d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114d8))), 0x11fd6716u);
  /* 11fd6716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6719 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd671b call 0x11fd8e20 */
  push32(0x11fd6720u); f_11fd8e20();
  /* 11fd6720 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6722 jne 0x11fd6728 */
  if (!C.zf) goto L_11fd6728;
  /* 11fd6724 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11fd6728:;
  /* 11fd6728 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd672b pop edi */
  EDI = (pop32());
  /* 11fd672c pop esi */
  ESI = (pop32());
  /* 11fd672d pop ebx */
  EBX = (pop32());
  /* 11fd672e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6731 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6733 call 0x11fd8e20 */
  push32(0x11fd6738u); f_11fd8e20();
  /* 11fd6738 mov esp, ebp */
  ESP = (EBP);
  /* 11fd673a pop ebp */
  EBP = (pop32());
  /* 11fd673b ret  */
  ESPCHK(0x11fd66b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006760 @ 0x11fd6760 (125 bytes, 48 insns) */
void f_11fd6760(void) {
  FTRACE(0x11fd6760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd6760 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd6761 mov ebp, esp */
  EBP = (ESP);
  /* 11fd6763 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd6766 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd6767 push esi */
  push32((uint32_t)(ESI));
  /* 11fd6768 push edi */
  push32((uint32_t)(EDI));
  /* 11fd6769 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd676a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd676d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd6772 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd6777 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd6779 pop ecx */
  ECX = (pop32());
  /* 11fd677a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd677d mov esi, esp */
  ESI = (ESP);
  /* 11fd677f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd6781 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6784 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6787 push eax */
  push32((uint32_t)(EAX));
  /* 11fd6788 call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd678eu);
  /* 11fd678e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6791 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6793 call 0x11fd8e20 */
  push32(0x11fd6798u); f_11fd8e20();
  /* 11fd6798 mov esi, esp */
  ESI = (ESP);
  /* 11fd679a push 1 */
  push32((uint32_t)(0x1u));
  /* 11fd679c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd679f mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fd67a2 push edx */
  push32((uint32_t)(EDX));
  /* 11fd67a3 call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd67a9u);
  /* 11fd67a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd67ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd67ae call 0x11fd8e20 */
  push32(0x11fd67b3u); f_11fd8e20();
  /* 11fd67b3 mov esi, esp */
  ESI = (ESP);
  /* 11fd67b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd67b8 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11fd67bb push ecx */
  push32((uint32_t)(ECX));
  /* 11fd67bc call dword ptr [0x120114d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114d4))), 0x11fd67c2u);
  /* 11fd67c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd67c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd67c7 call 0x11fd8e20 */
  push32(0x11fd67ccu); f_11fd8e20();
  /* 11fd67cc pop edi */
  EDI = (pop32());
  /* 11fd67cd pop esi */
  ESI = (pop32());
  /* 11fd67ce pop ebx */
  EBX = (pop32());
  /* 11fd67cf add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd67d2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd67d4 call 0x11fd8e20 */
  push32(0x11fd67d9u); f_11fd8e20();
  /* 11fd67d9 mov esp, ebp */
  ESP = (EBP);
  /* 11fd67db pop ebp */
  EBP = (pop32());
  /* 11fd67dc ret  */
  ESPCHK(0x11fd6760u, _esp0);
  ESP += 4; return;
}

/* FUN_10006800 @ 0x11fd6800 (98 bytes, 39 insns) */
void f_11fd6800(void) {
  FTRACE(0x11fd6800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd6800 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd6801 mov ebp, esp */
  EBP = (ESP);
  /* 11fd6803 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd6806 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd6807 push esi */
  push32((uint32_t)(ESI));
  /* 11fd6808 push edi */
  push32((uint32_t)(EDI));
  /* 11fd6809 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd680a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd680d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd6812 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd6817 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd6819 pop ecx */
  ECX = (pop32());
  /* 11fd681a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd681d mov esi, esp */
  ESI = (ESP);
  /* 11fd681f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd6821 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6824 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6827 push eax */
  push32((uint32_t)(EAX));
  /* 11fd6828 call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd682eu);
  /* 11fd682e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6831 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6833 call 0x11fd8e20 */
  push32(0x11fd6838u); f_11fd8e20();
  /* 11fd6838 mov esi, esp */
  ESI = (ESP);
  /* 11fd683a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd683d mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11fd6840 push edx */
  push32((uint32_t)(EDX));
  /* 11fd6841 call dword ptr [0x120114c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114c4))), 0x11fd6847u);
  /* 11fd6847 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd684a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd684c call 0x11fd8e20 */
  push32(0x11fd6851u); f_11fd8e20();
  /* 11fd6851 pop edi */
  EDI = (pop32());
  /* 11fd6852 pop esi */
  ESI = (pop32());
  /* 11fd6853 pop ebx */
  EBX = (pop32());
  /* 11fd6854 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6857 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6859 call 0x11fd8e20 */
  push32(0x11fd685eu); f_11fd8e20();
  /* 11fd685e mov esp, ebp */
  ESP = (EBP);
  /* 11fd6860 pop ebp */
  EBP = (pop32());
  /* 11fd6861 ret  */
  ESPCHK(0x11fd6800u, _esp0);
  ESP += 4; return;
}

/* FUN_10006880 @ 0x11fd6880 (402 bytes, 129 insns) [1 switch table(s)] */
void f_11fd6880(void) {
  FTRACE(0x11fd6880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd6880 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd6881 mov ebp, esp */
  EBP = (ESP);
  /* 11fd6883 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd6886 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd6887 push esi */
  push32((uint32_t)(ESI));
  /* 11fd6888 push edi */
  push32((uint32_t)(EDI));
  /* 11fd6889 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd688a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd688d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd6892 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd6897 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd6899 pop ecx */
  ECX = (pop32());
  /* 11fd689a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd689d mov esi, esp */
  ESI = (ESP);
  /* 11fd689f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd68a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd68a4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd68a7 push eax */
  push32((uint32_t)(EAX));
  /* 11fd68a8 call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd68aeu);
  /* 11fd68ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd68b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd68b3 call 0x11fd8e20 */
  push32(0x11fd68b8u); f_11fd8e20();
  /* 11fd68b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd68bb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11fd68be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fd68c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fd68c4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd68c7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fd68ca cmp dword ptr [ebp - 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd68ce ja 0x11fd6a01 */
  if ((!C.cf&&!C.zf)) goto L_11fd6a01;
  /* 11fd68d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fd68d7 jmp dword ptr [ecx*4 + 0x11fd6a12] */
  switch (ECX) {
    case 0: goto L_11fd68de;
    case 1: goto L_11fd6917;
    case 2: goto L_11fd695b;
    case 3: goto L_11fd6991;
    case 4: goto L_11fd69d5;
    default: x86_unimpl("switch@0x11fd68d7 out of table"); return;
  }
L_11fd68de:;
  /* 11fd68de mov esi, esp */
  ESI = (ESP);
  /* 11fd68e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd68e3 mov al, byte ptr [edx + 0x18] */
  AL = (r8((uint32_t)(EDX + 0x18)));
  /* 11fd68e6 push eax */
  push32((uint32_t)(EAX));
  /* 11fd68e7 call dword ptr [0x120114cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114cc))), 0x11fd68edu);
  /* 11fd68ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd68f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd68f2 call 0x11fd8e20 */
  push32(0x11fd68f7u); f_11fd8e20();
  /* 11fd68f7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd68fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd68fe je 0x11fd6912 */
  if (C.zf) goto L_11fd6912;
  /* 11fd6900 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6903 call 0x11fd1208 */
  push32(0x11fd6908u); f_11fd1208();
  /* 11fd6908 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd690b mov dword ptr [ecx + 0x14], 2 */
  w32((uint32_t)(ECX + 0x14), (0x2u));
L_11fd6912:;
  /* 11fd6912 jmp 0x11fd6a01 */
  goto L_11fd6a01;
L_11fd6917:;
  /* 11fd6917 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd691a call 0x11fd1140 */
  push32(0x11fd691fu); f_11fd1140();
  /* 11fd691f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd6924 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd6926 je 0x11fd6956 */
  if (C.zf) goto L_11fd6956;
  /* 11fd6928 mov esi, esp */
  ESI = (ESP);
  /* 11fd692a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd692c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd692e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6931 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fd6934 push eax */
  push32((uint32_t)(EAX));
  /* 11fd6935 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6938 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11fd693b push edx */
  push32((uint32_t)(EDX));
  /* 11fd693c call dword ptr [0x12011580] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011580))), 0x11fd6942u);
  /* 11fd6942 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6945 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6947 call 0x11fd8e20 */
  push32(0x11fd694cu); f_11fd8e20();
  /* 11fd694c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd694f mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
L_11fd6956:;
  /* 11fd6956 jmp 0x11fd6a01 */
  goto L_11fd6a01;
L_11fd695b:;
  /* 11fd695b mov esi, esp */
  ESI = (ESP);
  /* 11fd695d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6960 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11fd6963 push edx */
  push32((uint32_t)(EDX));
  /* 11fd6964 call dword ptr [0x120114cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114cc))), 0x11fd696au);
  /* 11fd696a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd696d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd696f call 0x11fd8e20 */
  push32(0x11fd6974u); f_11fd8e20();
  /* 11fd6974 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd6979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd697b je 0x11fd698f */
  if (C.zf) goto L_11fd698f;
  /* 11fd697d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6980 call 0x11fd1078 */
  push32(0x11fd6985u); f_11fd1078();
  /* 11fd6985 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6988 mov dword ptr [eax + 0x14], 4 */
  w32((uint32_t)(EAX + 0x14), (0x4u));
L_11fd698f:;
  /* 11fd698f jmp 0x11fd6a01 */
  goto L_11fd6a01;
L_11fd6991:;
  /* 11fd6991 mov esi, esp */
  ESI = (ESP);
  /* 11fd6993 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6996 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11fd6999 push edx */
  push32((uint32_t)(EDX));
  /* 11fd699a call dword ptr [0x120114d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114d8))), 0x11fd69a0u);
  /* 11fd69a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd69a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd69a5 call 0x11fd8e20 */
  push32(0x11fd69aau); f_11fd8e20();
  /* 11fd69aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd69ac jne 0x11fd69d3 */
  if (!C.zf) goto L_11fd69d3;
  /* 11fd69ae mov esi, esp */
  ESI = (ESP);
  /* 11fd69b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11fd69b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd69b5 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11fd69b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd69b9 call dword ptr [0x1201151c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201151c))), 0x11fd69bfu);
  /* 11fd69bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd69c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd69c4 call 0x11fd8e20 */
  push32(0x11fd69c9u); f_11fd8e20();
  /* 11fd69c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd69cc mov dword ptr [edx + 0x14], 5 */
  w32((uint32_t)(EDX + 0x14), (0x5u));
L_11fd69d3:;
  /* 11fd69d3 jmp 0x11fd6a01 */
  goto L_11fd6a01;
L_11fd69d5:;
  /* 11fd69d5 mov esi, esp */
  ESI = (ESP);
  /* 11fd69d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd69da mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11fd69dd push ecx */
  push32((uint32_t)(ECX));
  /* 11fd69de call dword ptr [0x12011518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011518))), 0x11fd69e4u);
  /* 11fd69e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd69e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd69e9 call 0x11fd8e20 */
  push32(0x11fd69eeu); f_11fd8e20();
  /* 11fd69ee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd69f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd69f5 je 0x11fd6a01 */
  if (C.zf) goto L_11fd6a01;
  /* 11fd69f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd69fa mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
L_11fd6a01:;
  /* 11fd6a01 pop edi */
  EDI = (pop32());
  /* 11fd6a02 pop esi */
  ESI = (pop32());
  /* 11fd6a03 pop ebx */
  EBX = (pop32());
  /* 11fd6a04 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6a07 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6a09 call 0x11fd8e20 */
  push32(0x11fd6a0eu); f_11fd8e20();
  /* 11fd6a0e mov esp, ebp */
  ESP = (EBP);
  /* 11fd6a10 pop ebp */
  EBP = (pop32());
  /* 11fd6a11 ret  */
  ESPCHK(0x11fd6880u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a90 @ 0x11fd6a90 (39 bytes, 18 insns) */
void f_11fd6a90(void) {
  FTRACE(0x11fd6a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd6a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd6a91 mov ebp, esp */
  EBP = (ESP);
  /* 11fd6a93 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd6a96 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd6a97 push esi */
  push32((uint32_t)(ESI));
  /* 11fd6a98 push edi */
  push32((uint32_t)(EDI));
  /* 11fd6a99 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11fd6a9c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11fd6aa1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd6aa6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd6aa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd6aab mov dword ptr [0x1200eebc], eax */
  w32((uint32_t)(0x1200eebc), (EAX));
  /* 11fd6ab0 pop edi */
  EDI = (pop32());
  /* 11fd6ab1 pop esi */
  ESI = (pop32());
  /* 11fd6ab2 pop ebx */
  EBX = (pop32());
  /* 11fd6ab3 mov esp, ebp */
  ESP = (EBP);
  /* 11fd6ab5 pop ebp */
  EBP = (pop32());
  /* 11fd6ab6 ret  */
  ESPCHK(0x11fd6a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ac0 @ 0x11fd6ac0 (93 bytes, 34 insns) */
void f_11fd6ac0(void) {
  FTRACE(0x11fd6ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd6ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd6ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd6ac3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd6ac6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd6ac7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd6ac8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd6ac9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11fd6acc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11fd6ad1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd6ad6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd6ad8 cmp dword ptr [0x1200eebc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200eebc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6adf je 0x11fd6b0c */
  if (C.zf) goto L_11fd6b0c;
  /* 11fd6ae1 mov ecx, dword ptr [0x1200eebc] */
  ECX = (r32((uint32_t)(0x1200eebc)));
  /* 11fd6ae7 call 0x11fd10eb */
  push32(0x11fd6aecu); f_11fd10eb();
  /* 11fd6aec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd6af1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd6af3 je 0x11fd6b0c */
  if (C.zf) goto L_11fd6b0c;
  /* 11fd6af5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd6af8 push eax */
  push32((uint32_t)(EAX));
  /* 11fd6af9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd6afc push ecx */
  push32((uint32_t)(ECX));
  /* 11fd6afd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd6b00 push edx */
  push32((uint32_t)(EDX));
  /* 11fd6b01 mov ecx, dword ptr [0x1200eebc] */
  ECX = (r32((uint32_t)(0x1200eebc)));
  /* 11fd6b07 call 0x11fd111d */
  push32(0x11fd6b0cu); f_11fd111d();
L_11fd6b0c:;
  /* 11fd6b0c pop edi */
  EDI = (pop32());
  /* 11fd6b0d pop esi */
  ESI = (pop32());
  /* 11fd6b0e pop ebx */
  EBX = (pop32());
  /* 11fd6b0f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6b12 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6b14 call 0x11fd8e20 */
  push32(0x11fd6b19u); f_11fd8e20();
  /* 11fd6b19 mov esp, ebp */
  ESP = (EBP);
  /* 11fd6b1b pop ebp */
  EBP = (pop32());
  /* 11fd6b1c ret  */
  ESPCHK(0x11fd6ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b40 @ 0x11fd6b40 (437 bytes, 146 insns) */
void f_11fd6b40(void) {
  FTRACE(0x11fd6b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd6b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd6b41 mov ebp, esp */
  EBP = (ESP);
  /* 11fd6b43 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd6b46 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd6b47 push esi */
  push32((uint32_t)(ESI));
  /* 11fd6b48 push edi */
  push32((uint32_t)(EDI));
  /* 11fd6b49 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd6b4a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd6b4d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd6b52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd6b57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd6b59 pop ecx */
  ECX = (pop32());
  /* 11fd6b5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd6b5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6b60 call 0x11fd105a */
  push32(0x11fd6b65u); f_11fd105a();
  /* 11fd6b65 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd6b6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd6b6c je 0x11fd6ce4 */
  if (C.zf) goto L_11fd6ce4;
  /* 11fd6b72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6b75 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11fd6b78 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11fd6b7b cmp byte ptr [ebp - 8], 1 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fd6b7f je 0x11fd6c39 */
  if (C.zf) goto L_11fd6c39;
  /* 11fd6b85 cmp byte ptr [ebp - 8], 2 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fd6b89 je 0x11fd6b90 */
  if (C.zf) goto L_11fd6b90;
  /* 11fd6b8b jmp 0x11fd6c8f */
  goto L_11fd6c8f;
L_11fd6b90:;
  /* 11fd6b90 cmp dword ptr [0x1200eec4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200eec4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6b97 je 0x11fd6bdf */
  if (C.zf) goto L_11fd6bdf;
  /* 11fd6b99 mov esi, esp */
  ESI = (ESP);
  /* 11fd6b9b push 3 */
  push32((uint32_t)(0x3u));
  /* 11fd6b9d mov edx, dword ptr [0x1200eec4] */
  EDX = (r32((uint32_t)(0x1200eec4)));
  /* 11fd6ba3 push edx */
  push32((uint32_t)(EDX));
  /* 11fd6ba4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6ba7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6baa push eax */
  push32((uint32_t)(EAX));
  /* 11fd6bab call dword ptr [0x1201157c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201157c))), 0x11fd6bb1u);
  /* 11fd6bb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6bb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6bb6 call 0x11fd8e20 */
  push32(0x11fd6bbbu); f_11fd8e20();
  /* 11fd6bbb mov esi, esp */
  ESI = (ESP);
  /* 11fd6bbd push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd6bbf mov ecx, dword ptr [0x1200eec4] */
  ECX = (r32((uint32_t)(0x1200eec4)));
  /* 11fd6bc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd6bc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6bc9 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6bcc push edx */
  push32((uint32_t)(EDX));
  /* 11fd6bcd call dword ptr [0x1201157c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201157c))), 0x11fd6bd3u);
  /* 11fd6bd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6bd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6bd8 call 0x11fd8e20 */
  push32(0x11fd6bddu); f_11fd8e20();
  /* 11fd6bdd jmp 0x11fd6c34 */
  goto L_11fd6c34;
L_11fd6bdf:;
  /* 11fd6bdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6be2 call 0x11fd109b */
  push32(0x11fd6be7u); f_11fd109b();
  /* 11fd6be7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd6bec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd6bee jne 0x11fd6c34 */
  if (!C.zf) goto L_11fd6c34;
  /* 11fd6bf0 mov esi, esp */
  ESI = (ESP);
  /* 11fd6bf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd6bf4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6bf7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6bfa push eax */
  push32((uint32_t)(EAX));
  /* 11fd6bfb call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd6c01u);
  /* 11fd6c01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6c04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6c06 call 0x11fd8e20 */
  push32(0x11fd6c0bu); f_11fd8e20();
  /* 11fd6c0b mov esi, esp */
  ESI = (ESP);
  /* 11fd6c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd6c0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6c12 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11fd6c15 push edx */
  push32((uint32_t)(EDX));
  /* 11fd6c16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6c19 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6c1c push eax */
  push32((uint32_t)(EAX));
  /* 11fd6c1d mov cl, byte ptr [0x1200eec0] */
  CL = (r8((uint32_t)(0x1200eec0)));
  /* 11fd6c23 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd6c24 call dword ptr [0x1201156c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201156c))), 0x11fd6c2au);
  /* 11fd6c2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6c2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6c2f call 0x11fd8e20 */
  push32(0x11fd6c34u); f_11fd8e20();
L_11fd6c34:;
  /* 11fd6c34 jmp 0x11fd6ce4 */
  goto L_11fd6ce4;
L_11fd6c39:;
  /* 11fd6c39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6c3c call 0x11fd109b */
  push32(0x11fd6c41u); f_11fd109b();
  /* 11fd6c41 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd6c46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd6c48 jne 0x11fd6c8d */
  if (!C.zf) goto L_11fd6c8d;
  /* 11fd6c4a mov esi, esp */
  ESI = (ESP);
  /* 11fd6c4c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd6c4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6c51 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6c54 push edx */
  push32((uint32_t)(EDX));
  /* 11fd6c55 call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd6c5bu);
  /* 11fd6c5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6c5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6c60 call 0x11fd8e20 */
  push32(0x11fd6c65u); f_11fd8e20();
  /* 11fd6c65 mov esi, esp */
  ESI = (ESP);
  /* 11fd6c67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd6c69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6c6c mov cl, byte ptr [eax + 8] */
  CL = (r8((uint32_t)(EAX + 0x8)));
  /* 11fd6c6f push ecx */
  push32((uint32_t)(ECX));
  /* 11fd6c70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6c73 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6c76 push edx */
  push32((uint32_t)(EDX));
  /* 11fd6c77 mov al, byte ptr [0x1200eec0] */
  AL = (r8((uint32_t)(0x1200eec0)));
  /* 11fd6c7c push eax */
  push32((uint32_t)(EAX));
  /* 11fd6c7d call dword ptr [0x1201156c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201156c))), 0x11fd6c83u);
  /* 11fd6c83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6c86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6c88 call 0x11fd8e20 */
  push32(0x11fd6c8du); f_11fd8e20();
L_11fd6c8d:;
  /* 11fd6c8d jmp 0x11fd6ce4 */
  goto L_11fd6ce4;
L_11fd6c8f:;
  /* 11fd6c8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6c92 call 0x11fd109b */
  push32(0x11fd6c97u); f_11fd109b();
  /* 11fd6c97 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd6c9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd6c9e jne 0x11fd6ce4 */
  if (!C.zf) goto L_11fd6ce4;
  /* 11fd6ca0 mov esi, esp */
  ESI = (ESP);
  /* 11fd6ca2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd6ca4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6ca7 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6caa push ecx */
  push32((uint32_t)(ECX));
  /* 11fd6cab call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd6cb1u);
  /* 11fd6cb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6cb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6cb6 call 0x11fd8e20 */
  push32(0x11fd6cbbu); f_11fd8e20();
  /* 11fd6cbb mov esi, esp */
  ESI = (ESP);
  /* 11fd6cbd push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd6cbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6cc2 mov al, byte ptr [edx + 8] */
  AL = (r8((uint32_t)(EDX + 0x8)));
  /* 11fd6cc5 push eax */
  push32((uint32_t)(EAX));
  /* 11fd6cc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6cc9 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6ccc push ecx */
  push32((uint32_t)(ECX));
  /* 11fd6ccd mov dl, byte ptr [0x1200eec0] */
  DL = (r8((uint32_t)(0x1200eec0)));
  /* 11fd6cd3 push edx */
  push32((uint32_t)(EDX));
  /* 11fd6cd4 call dword ptr [0x12011580] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011580))), 0x11fd6cdau);
  /* 11fd6cda add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6cdd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6cdf call 0x11fd8e20 */
  push32(0x11fd6ce4u); f_11fd8e20();
L_11fd6ce4:;
  /* 11fd6ce4 pop edi */
  EDI = (pop32());
  /* 11fd6ce5 pop esi */
  ESI = (pop32());
  /* 11fd6ce6 pop ebx */
  EBX = (pop32());
  /* 11fd6ce7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6cea cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6cec call 0x11fd8e20 */
  push32(0x11fd6cf1u); f_11fd8e20();
  /* 11fd6cf1 mov esp, ebp */
  ESP = (EBP);
  /* 11fd6cf3 pop ebp */
  EBP = (pop32());
  /* 11fd6cf4 ret  */
  ESPCHK(0x11fd6b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d70 @ 0x11fd6d70 (235 bytes, 78 insns) */
void f_11fd6d70(void) {
  FTRACE(0x11fd6d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd6d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd6d71 mov ebp, esp */
  EBP = (ESP);
  /* 11fd6d73 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd6d79 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd6d7a push esi */
  push32((uint32_t)(ESI));
  /* 11fd6d7b push edi */
  push32((uint32_t)(EDI));
  /* 11fd6d7c push ecx */
  push32((uint32_t)(ECX));
  /* 11fd6d7d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11fd6d83 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11fd6d88 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd6d8d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd6d8f pop ecx */
  ECX = (pop32());
  /* 11fd6d90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd6d93 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 11fd6d9a mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11fd6da1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6da4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6da7 mov esi, esp */
  ESI = (ESP);
  /* 11fd6da9 push eax */
  push32((uint32_t)(EAX));
  /* 11fd6daa call dword ptr [0x12011598] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011598))), 0x11fd6db0u);
  /* 11fd6db0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6db3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6db5 call 0x11fd8e20 */
  push32(0x11fd6dbau); f_11fd8e20();
  /* 11fd6dba mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11fd6dbd cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6dc1 jle 0x11fd6e34 */
  if ((C.zf||C.sf!=C.of)) goto L_11fd6e34;
  /* 11fd6dc3 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11fd6dca mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11fd6dd1 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 11fd6dd8 jmp 0x11fd6de3 */
  goto L_11fd6de3;
L_11fd6dda:;
  /* 11fd6dda mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11fd6ddd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6de0 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_11fd6de3:;
  /* 11fd6de3 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 11fd6de6 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6de9 jge 0x11fd6e20 */
  if ((C.sf==C.of)) goto L_11fd6e20;
  /* 11fd6deb mov esi, esp */
  ESI = (ESP);
  /* 11fd6ded lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11fd6df0 push eax */
  push32((uint32_t)(EAX));
  /* 11fd6df1 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11fd6df4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd6df5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6df8 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6dfb push edx */
  push32((uint32_t)(EDX));
  /* 11fd6dfc call dword ptr [0x12011590] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011590))), 0x11fd6e02u);
  /* 11fd6e02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6e05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6e07 call 0x11fd8e20 */
  push32(0x11fd6e0cu); f_11fd8e20();
  /* 11fd6e0c mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fd6e0f add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6e12 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11fd6e15 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11fd6e18 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6e1b mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11fd6e1e jmp 0x11fd6dda */
  goto L_11fd6dda;
L_11fd6e20:;
  /* 11fd6e20 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fd6e23 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fd6e24 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fd6e27 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11fd6e2a mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11fd6e2d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fd6e2e idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fd6e31 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11fd6e34:;
  /* 11fd6e34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd6e37 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fd6e3a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fd6e3c mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fd6e3f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11fd6e42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd6e45 pop edi */
  EDI = (pop32());
  /* 11fd6e46 pop esi */
  ESI = (pop32());
  /* 11fd6e47 pop ebx */
  EBX = (pop32());
  /* 11fd6e48 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6e4e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6e50 call 0x11fd8e20 */
  push32(0x11fd6e55u); f_11fd8e20();
  /* 11fd6e55 mov esp, ebp */
  ESP = (EBP);
  /* 11fd6e57 pop ebp */
  EBP = (pop32());
  /* 11fd6e58 ret 4 */
  ESPCHK(0x11fd6d70u, _esp0);
  ESP += 8; return;
}

/* FUN_10006ea0 @ 0x11fd6ea0 (120 bytes, 47 insns) */
void f_11fd6ea0(void) {
  FTRACE(0x11fd6ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd6ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd6ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd6ea3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd6ea6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd6ea7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd6ea8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd6ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd6eaa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd6ead mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd6eb2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd6eb7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd6eb9 pop ecx */
  ECX = (pop32());
  /* 11fd6eba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd6ebd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd6ec1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6ec4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6ec7 mov esi, esp */
  ESI = (ESP);
  /* 11fd6ec9 push eax */
  push32((uint32_t)(EAX));
  /* 11fd6eca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6ecd add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd6ed1 call dword ptr [0x12011578] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011578))), 0x11fd6ed7u);
  /* 11fd6ed7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6eda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6edc call 0x11fd8e20 */
  push32(0x11fd6ee1u); f_11fd8e20();
  /* 11fd6ee1 mov esi, eax */
  ESI = (EAX);
  /* 11fd6ee3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6ee6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6ee9 mov edi, esp */
  EDI = (ESP);
  /* 11fd6eeb push edx */
  push32((uint32_t)(EDX));
  /* 11fd6eec call dword ptr [0x12011598] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011598))), 0x11fd6ef2u);
  /* 11fd6ef2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6ef5 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6ef7 call 0x11fd8e20 */
  push32(0x11fd6efcu); f_11fd8e20();
  /* 11fd6efc cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6efe jne 0x11fd6f04 */
  if (!C.zf) goto L_11fd6f04;
  /* 11fd6f00 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11fd6f04:;
  /* 11fd6f04 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd6f07 pop edi */
  EDI = (pop32());
  /* 11fd6f08 pop esi */
  ESI = (pop32());
  /* 11fd6f09 pop ebx */
  EBX = (pop32());
  /* 11fd6f0a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6f0d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6f0f call 0x11fd8e20 */
  push32(0x11fd6f14u); f_11fd8e20();
  /* 11fd6f14 mov esp, ebp */
  ESP = (EBP);
  /* 11fd6f16 pop ebp */
  EBP = (pop32());
  /* 11fd6f17 ret  */
  ESPCHK(0x11fd6ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f40 @ 0x11fd6f40 (86 bytes, 35 insns) */
void f_11fd6f40(void) {
  FTRACE(0x11fd6f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd6f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd6f41 mov ebp, esp */
  EBP = (ESP);
  /* 11fd6f43 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd6f46 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd6f47 push esi */
  push32((uint32_t)(ESI));
  /* 11fd6f48 push edi */
  push32((uint32_t)(EDI));
  /* 11fd6f49 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd6f4a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd6f4d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd6f52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd6f57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd6f59 pop ecx */
  ECX = (pop32());
  /* 11fd6f5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd6f5d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd6f61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6f64 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6f67 mov esi, esp */
  ESI = (ESP);
  /* 11fd6f69 push eax */
  push32((uint32_t)(EAX));
  /* 11fd6f6a call dword ptr [0x12011598] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011598))), 0x11fd6f70u);
  /* 11fd6f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6f73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6f75 call 0x11fd8e20 */
  push32(0x11fd6f7au); f_11fd8e20();
  /* 11fd6f7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd6f7c jle 0x11fd6f82 */
  if ((C.zf||C.sf!=C.of)) goto L_11fd6f82;
  /* 11fd6f7e mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11fd6f82:;
  /* 11fd6f82 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd6f85 pop edi */
  EDI = (pop32());
  /* 11fd6f86 pop esi */
  ESI = (pop32());
  /* 11fd6f87 pop ebx */
  EBX = (pop32());
  /* 11fd6f88 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6f8b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd6f8d call 0x11fd8e20 */
  push32(0x11fd6f92u); f_11fd8e20();
  /* 11fd6f92 mov esp, ebp */
  ESP = (EBP);
  /* 11fd6f94 pop ebp */
  EBP = (pop32());
  /* 11fd6f95 ret  */
  ESPCHK(0x11fd6f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fb0 @ 0x11fd6fb0 (42 bytes, 21 insns) */
void f_11fd6fb0(void) {
  FTRACE(0x11fd6fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd6fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd6fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd6fb3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd6fb6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd6fb7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd6fb8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd6fb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd6fba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd6fbd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd6fc2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd6fc7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd6fc9 pop ecx */
  ECX = (pop32());
  /* 11fd6fca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd6fcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd6fd0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd6fd3 pop edi */
  EDI = (pop32());
  /* 11fd6fd4 pop esi */
  ESI = (pop32());
  /* 11fd6fd5 pop ebx */
  EBX = (pop32());
  /* 11fd6fd6 mov esp, ebp */
  ESP = (EBP);
  /* 11fd6fd8 pop ebp */
  EBP = (pop32());
  /* 11fd6fd9 ret  */
  ESPCHK(0x11fd6fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ff0 @ 0x11fd6ff0 (77 bytes, 32 insns) */
void f_11fd6ff0(void) {
  FTRACE(0x11fd6ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd6ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd6ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd6ff3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd6ff6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd6ff7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd6ff8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd6ff9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd6ffa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd6ffd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd7002 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd7007 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd7009 pop ecx */
  ECX = (pop32());
  /* 11fd700a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd700d mov esi, esp */
  ESI = (ESP);
  /* 11fd700f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd7012 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7013 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7016 add ecx, 0xd */
  { uint32_t _a=(ECX),_b=(0xdu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7019 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd701a call dword ptr [0x120114d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114d0))), 0x11fd7020u);
  /* 11fd7020 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7023 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7025 call 0x11fd8e20 */
  push32(0x11fd702au); f_11fd8e20();
  /* 11fd702a pop edi */
  EDI = (pop32());
  /* 11fd702b pop esi */
  ESI = (pop32());
  /* 11fd702c pop ebx */
  EBX = (pop32());
  /* 11fd702d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7030 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7032 call 0x11fd8e20 */
  push32(0x11fd7037u); f_11fd8e20();
  /* 11fd7037 mov esp, ebp */
  ESP = (EBP);
  /* 11fd7039 pop ebp */
  EBP = (pop32());
  /* 11fd703a ret 4 */
  ESPCHK(0x11fd6ff0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007050 @ 0x11fd7050 (413 bytes, 143 insns) */
void f_11fd7050(void) {
  FTRACE(0x11fd7050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd7050 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd7051 mov ebp, esp */
  EBP = (ESP);
  /* 11fd7053 sub esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd7056 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd7057 push esi */
  push32((uint32_t)(ESI));
  /* 11fd7058 push edi */
  push32((uint32_t)(EDI));
  /* 11fd7059 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd705a lea edi, [ebp - 0x54] */
  EDI = ((uint32_t)(EBP + -0x54));
  /* 11fd705d mov ecx, 0x15 */
  ECX = (0x15u);
  /* 11fd7062 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd7067 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd7069 pop ecx */
  ECX = (pop32());
  /* 11fd706a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd706d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7070 call 0x11fd10dc */
  push32(0x11fd7075u); f_11fd10dc();
  /* 11fd7075 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd707a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd707c je 0x11fd71dc */
  if (C.zf) goto L_11fd71dc;
  /* 11fd7082 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7085 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fd7087 mov cl, byte ptr [eax + 0xc] */
  CL = (r8((uint32_t)(EAX + 0xc)));
  /* 11fd708a cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd708d jne 0x11fd7138 */
  if (!C.zf) goto L_11fd7138;
  /* 11fd7093 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11fd7098 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11fd709b push edx */
  push32((uint32_t)(EDX));
  /* 11fd709c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd709f call 0x11fd10be */
  push32(0x11fd70a4u); f_11fd10be();
  /* 11fd70a4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fd70a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd70a8 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11fd70aa push edx */
  push32((uint32_t)(EDX));
  /* 11fd70ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd70ae add eax, 0x15 */
  { uint32_t _a=(EAX),_b=(0x15u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd70b1 push eax */
  push32((uint32_t)(EAX));
  /* 11fd70b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd70b5 call 0x11fd12bc */
  push32(0x11fd70bau); f_11fd12bc();
  /* 11fd70ba mov esi, esp */
  ESI = (ESP);
  /* 11fd70bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd70be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd70c1 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd70c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd70c5 call dword ptr [0x12011560] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011560))), 0x11fd70cbu);
  /* 11fd70cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd70ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd70d0 call 0x11fd8e20 */
  push32(0x11fd70d5u); f_11fd8e20();
  /* 11fd70d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd70d8 jge 0x11fd70e3 */
  if ((C.sf==C.of)) goto L_11fd70e3;
  /* 11fd70da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd70dd mov byte ptr [edx + 0xc], 2 */
  w8((uint32_t)(EDX + 0xc), (0x2u));
  /* 11fd70e1 jmp 0x11fd7138 */
  goto L_11fd7138;
L_11fd70e3:;
  /* 11fd70e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd70e6 call 0x11fd1177 */
  push32(0x11fd70ebu); f_11fd1177();
  /* 11fd70eb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd70f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd70f2 jne 0x11fd7138 */
  if (!C.zf) goto L_11fd7138;
  /* 11fd70f4 mov esi, esp */
  ESI = (ESP);
  /* 11fd70f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd70f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd70fb add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd70fe push eax */
  push32((uint32_t)(EAX));
  /* 11fd70ff call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd7105u);
  /* 11fd7105 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7108 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd710a call 0x11fd8e20 */
  push32(0x11fd710fu); f_11fd8e20();
  /* 11fd710f mov esi, esp */
  ESI = (ESP);
  /* 11fd7111 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd7113 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7116 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11fd7119 push edx */
  push32((uint32_t)(EDX));
  /* 11fd711a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd711d add eax, 0x1d */
  { uint32_t _a=(EAX),_b=(0x1du),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7120 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7121 mov cl, byte ptr [0x1200cd5c] */
  CL = (r8((uint32_t)(0x1200cd5c)));
  /* 11fd7127 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7128 call dword ptr [0x12011580] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011580))), 0x11fd712eu);
  /* 11fd712e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7131 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7133 call 0x11fd8e20 */
  push32(0x11fd7138u); f_11fd8e20();
L_11fd7138:;
  /* 11fd7138 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd713b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fd713d mov al, byte ptr [edx + 0xc] */
  AL = (r8((uint32_t)(EDX + 0xc)));
  /* 11fd7140 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7143 jne 0x11fd71dc */
  if (!C.zf) goto L_11fd71dc;
  /* 11fd7149 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 11fd714e lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11fd7151 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7152 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7155 call 0x11fd10be */
  push32(0x11fd715au); f_11fd10be();
  /* 11fd715a mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fd715d push edx */
  push32((uint32_t)(EDX));
  /* 11fd715e mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11fd7160 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7161 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7164 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7167 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7168 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd716b call 0x11fd12bc */
  push32(0x11fd7170u); f_11fd12bc();
  /* 11fd7170 mov esi, esp */
  ESI = (ESP);
  /* 11fd7172 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd7174 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7177 add edx, 0x15 */
  { uint32_t _a=(EDX),_b=(0x15u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd717a push edx */
  push32((uint32_t)(EDX));
  /* 11fd717b call dword ptr [0x12011560] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011560))), 0x11fd7181u);
  /* 11fd7181 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7184 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7186 call 0x11fd8e20 */
  push32(0x11fd718bu); f_11fd8e20();
  /* 11fd718b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd718e jge 0x11fd71d5 */
  if ((C.sf==C.of)) goto L_11fd71d5;
  /* 11fd7190 mov esi, esp */
  ESI = (ESP);
  /* 11fd7192 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd7194 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7197 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd719a push eax */
  push32((uint32_t)(EAX));
  /* 11fd719b call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd71a1u);
  /* 11fd71a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd71a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd71a6 call 0x11fd8e20 */
  push32(0x11fd71abu); f_11fd8e20();
  /* 11fd71ab mov esi, esp */
  ESI = (ESP);
  /* 11fd71ad push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd71af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd71b2 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11fd71b5 push edx */
  push32((uint32_t)(EDX));
  /* 11fd71b6 mov eax, dword ptr [0x1200eec8] */
  EAX = (r32((uint32_t)(0x1200eec8)));
  /* 11fd71bb push eax */
  push32((uint32_t)(EAX));
  /* 11fd71bc mov cl, byte ptr [0x1200cd5c] */
  CL = (r8((uint32_t)(0x1200cd5c)));
  /* 11fd71c2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd71c3 call dword ptr [0x12011580] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011580))), 0x11fd71c9u);
  /* 11fd71c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd71cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd71ce call 0x11fd8e20 */
  push32(0x11fd71d3u); f_11fd8e20();
  /* 11fd71d3 jmp 0x11fd71dc */
  goto L_11fd71dc;
L_11fd71d5:;
  /* 11fd71d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd71d8 mov byte ptr [edx + 0xc], 1 */
  w8((uint32_t)(EDX + 0xc), (0x1u));
L_11fd71dc:;
  /* 11fd71dc pop edi */
  EDI = (pop32());
  /* 11fd71dd pop esi */
  ESI = (pop32());
  /* 11fd71de pop ebx */
  EBX = (pop32());
  /* 11fd71df add esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd71e2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd71e4 call 0x11fd8e20 */
  push32(0x11fd71e9u); f_11fd8e20();
  /* 11fd71e9 mov esp, ebp */
  ESP = (EBP);
  /* 11fd71eb pop ebp */
  EBP = (pop32());
  /* 11fd71ec ret  */
  ESPCHK(0x11fd7050u, _esp0);
  ESP += 4; return;
}

/* FUN_10007260 @ 0x11fd7260 (311 bytes, 104 insns) */
void f_11fd7260(void) {
  FTRACE(0x11fd7260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd7260 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd7261 mov ebp, esp */
  EBP = (ESP);
  /* 11fd7263 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd7269 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd726a push esi */
  push32((uint32_t)(ESI));
  /* 11fd726b push edi */
  push32((uint32_t)(EDI));
  /* 11fd726c push ecx */
  push32((uint32_t)(ECX));
  /* 11fd726d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11fd7273 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11fd7278 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd727d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd727f pop ecx */
  ECX = (pop32());
  /* 11fd7280 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd7283 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd7286 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fd7289 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd728c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fd728f lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11fd7292 push edx */
  push32((uint32_t)(EDX));
  /* 11fd7293 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7296 call 0x11fd10be */
  push32(0x11fd729bu); f_11fd10be();
  /* 11fd729b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fd729d mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fd72a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fd72a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11fd72a6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fd72a9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fd72ac mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fd72af mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11fd72b2 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fd72b5 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd72b8 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11fd72bb fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 11fd72be mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fd72c1 sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd72c4 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11fd72c7 fild dword ptr [ebp - 0x38] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 11fd72ca fdivp st(1) */
  FPU_ST(1) = FPU_ST(1) / FPU_ST(0);
  (void)fpu_pop();
  /* 11fd72cc sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd72cf fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11fd72d2 call 0x11fd8fd4 */
  push32(0x11fd72d7u); f_11fd8fd4();
  /* 11fd72d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd72da fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
  /* 11fd72dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fd72e0 sub ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd72e3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fd72e5 jge 0x11fd72f3 */
  if ((C.sf==C.of)) goto L_11fd72f3;
  /* 11fd72e7 fld qword ptr [0x12009040] */
  fpu_push(rf64((uint32_t)(0x12009040)));
  /* 11fd72ed fadd qword ptr [ebp - 0x24] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + -0x24)));
  /* 11fd72f0 fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
L_11fd72f3:;
  /* 11fd72f3 fld qword ptr [ebp - 0x24] */
  fpu_push(rf64((uint32_t)(EBP + -0x24)));
  /* 11fd72f6 fmul qword ptr [0x12009030] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x12009030)));
  /* 11fd72fc fdiv qword ptr [0x12009020] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(0x12009020)));
  /* 11fd7302 call 0x11fd910c */
  push32(0x11fd7307u); f_11fd910c();
  /* 11fd7307 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11fd730a fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 11fd730d fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
  /* 11fd7310 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fd7313 push edx */
  push32((uint32_t)(EDX));
  /* 11fd7314 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fd7317 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7318 call 0x11fd8f24 */
  push32(0x11fd731du); f_11fd8f24();
  /* 11fd731d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7320 fmul qword ptr [ebp - 0x40] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x40)));
  /* 11fd7323 fiadd dword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0x8)));
  /* 11fd7326 call 0x11fd910c */
  push32(0x11fd732bu); f_11fd910c();
  /* 11fd732b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fd732e fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 11fd7331 fstp qword ptr [ebp - 0x48] */
  wf64((uint32_t)(EBP + -0x48), FPU_ST(0));
  (void)fpu_pop();
  /* 11fd7334 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fd7337 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7338 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fd733b push edx */
  push32((uint32_t)(EDX));
  /* 11fd733c call 0x11fd8e74 */
  push32(0x11fd7341u); f_11fd8e74();
  /* 11fd7341 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7344 fmul qword ptr [ebp - 0x48] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x48)));
  /* 11fd7347 fiadd dword ptr [ebp - 0xc] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0xc)));
  /* 11fd734a call 0x11fd910c */
  push32(0x11fd734fu); f_11fd910c();
  /* 11fd734f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fd7352 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11fd7354 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fd7357 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7358 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fd735b push ecx */
  push32((uint32_t)(ECX));
  /* 11fd735c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd735f add edx, 0x1d */
  { uint32_t _a=(EDX),_b=(0x1du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7362 push edx */
  push32((uint32_t)(EDX));
  /* 11fd7363 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7366 call 0x11fd12bc */
  push32(0x11fd736bu); f_11fd12bc();
  /* 11fd736b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fd736e add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7373 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7376 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11fd7379 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd737c call 0x11fd1212 */
  push32(0x11fd7381u); f_11fd1212();
  /* 11fd7381 pop edi */
  EDI = (pop32());
  /* 11fd7382 pop esi */
  ESI = (pop32());
  /* 11fd7383 pop ebx */
  EBX = (pop32());
  /* 11fd7384 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd738a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd738c call 0x11fd8e20 */
  push32(0x11fd7391u); f_11fd8e20();
  /* 11fd7391 mov esp, ebp */
  ESP = (EBP);
  /* 11fd7393 pop ebp */
  EBP = (pop32());
  /* 11fd7394 ret 0xc */
  ESPCHK(0x11fd7260u, _esp0);
  ESP += 16; return;
}

/* FUN_100073f0 @ 0x11fd73f0 (198 bytes, 71 insns) */
void f_11fd73f0(void) {
  FTRACE(0x11fd73f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd73f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd73f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd73f3 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd73f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd73f7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd73f8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd73f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd73fa lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 11fd73fd mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 11fd7402 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd7407 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd7409 pop ecx */
  ECX = (pop32());
  /* 11fd740a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd740d mov esi, esp */
  ESI = (ESP);
  /* 11fd740f lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11fd7412 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7413 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd7415 mov ecx, dword ptr [0x1200eecc] */
  ECX = (r32((uint32_t)(0x1200eecc)));
  /* 11fd741b push ecx */
  push32((uint32_t)(ECX));
  /* 11fd741c call dword ptr [0x12011590] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011590))), 0x11fd7422u);
  /* 11fd7422 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7425 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7427 call 0x11fd8e20 */
  push32(0x11fd742cu); f_11fd8e20();
  /* 11fd742c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fd742f mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11fd7432 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fd7435 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11fd7438 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd743b mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11fd743e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd7441 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11fd7444 mov esi, esp */
  ESI = (ESP);
  /* 11fd7446 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11fd7449 push eax */
  push32((uint32_t)(EAX));
  /* 11fd744a call dword ptr [0x120114dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114dc))), 0x11fd7450u);
  /* 11fd7450 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7453 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7455 call 0x11fd8e20 */
  push32(0x11fd745au); f_11fd8e20();
  /* 11fd745a mov esi, esp */
  ESI = (ESP);
  /* 11fd745c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fd745f push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7460 mov edx, dword ptr [0x1200eecc] */
  EDX = (r32((uint32_t)(0x1200eecc)));
  /* 11fd7466 push edx */
  push32((uint32_t)(EDX));
  /* 11fd7467 mov eax, dword ptr [0x1200eec8] */
  EAX = (r32((uint32_t)(0x1200eec8)));
  /* 11fd746c push eax */
  push32((uint32_t)(EAX));
  /* 11fd746d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd7470 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7471 call dword ptr [0x120114f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114f0))), 0x11fd7477u);
  /* 11fd7477 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd747a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd747c call 0x11fd8e20 */
  push32(0x11fd7481u); f_11fd8e20();
  /* 11fd7481 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fd7484 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11fd7487 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fd748a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fd748d mov esi, esp */
  ESI = (ESP);
  /* 11fd748f lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 11fd7492 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7493 call dword ptr [0x120114dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114dc))), 0x11fd7499u);
  /* 11fd7499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd749c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd749e call 0x11fd8e20 */
  push32(0x11fd74a3u); f_11fd8e20();
  /* 11fd74a3 pop edi */
  EDI = (pop32());
  /* 11fd74a4 pop esi */
  ESI = (pop32());
  /* 11fd74a5 pop ebx */
  EBX = (pop32());
  /* 11fd74a6 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd74a9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd74ab call 0x11fd8e20 */
  push32(0x11fd74b0u); f_11fd8e20();
  /* 11fd74b0 mov esp, ebp */
  ESP = (EBP);
  /* 11fd74b2 pop ebp */
  EBP = (pop32());
  /* 11fd74b3 ret 0x10 */
  ESPCHK(0x11fd73f0u, _esp0);
  ESP += 20; return;
}

/* FUN_100074f0 @ 0x11fd74f0 (120 bytes, 47 insns) */
void f_11fd74f0(void) {
  FTRACE(0x11fd74f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd74f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd74f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd74f3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd74f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd74f7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd74f8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd74f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd74fa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd74fd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd7502 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd7507 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd7509 pop ecx */
  ECX = (pop32());
  /* 11fd750a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd750d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd7511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7514 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7517 mov esi, esp */
  ESI = (ESP);
  /* 11fd7519 push eax */
  push32((uint32_t)(EAX));
  /* 11fd751a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd751d add ecx, 0x1d */
  { uint32_t _a=(ECX),_b=(0x1du),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7520 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7521 call dword ptr [0x12011578] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011578))), 0x11fd7527u);
  /* 11fd7527 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd752a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd752c call 0x11fd8e20 */
  push32(0x11fd7531u); f_11fd8e20();
  /* 11fd7531 mov esi, eax */
  ESI = (EAX);
  /* 11fd7533 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7536 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7539 mov edi, esp */
  EDI = (ESP);
  /* 11fd753b push edx */
  push32((uint32_t)(EDX));
  /* 11fd753c call dword ptr [0x12011598] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011598))), 0x11fd7542u);
  /* 11fd7542 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7545 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7547 call 0x11fd8e20 */
  push32(0x11fd754cu); f_11fd8e20();
  /* 11fd754c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd754e jne 0x11fd7554 */
  if (!C.zf) goto L_11fd7554;
  /* 11fd7550 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11fd7554:;
  /* 11fd7554 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd7557 pop edi */
  EDI = (pop32());
  /* 11fd7558 pop esi */
  ESI = (pop32());
  /* 11fd7559 pop ebx */
  EBX = (pop32());
  /* 11fd755a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd755d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd755f call 0x11fd8e20 */
  push32(0x11fd7564u); f_11fd8e20();
  /* 11fd7564 mov esp, ebp */
  ESP = (EBP);
  /* 11fd7566 pop ebp */
  EBP = (pop32());
  /* 11fd7567 ret  */
  ESPCHK(0x11fd74f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007590 @ 0x11fd7590 (86 bytes, 35 insns) */
void f_11fd7590(void) {
  FTRACE(0x11fd7590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd7590 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd7591 mov ebp, esp */
  EBP = (ESP);
  /* 11fd7593 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd7596 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd7597 push esi */
  push32((uint32_t)(ESI));
  /* 11fd7598 push edi */
  push32((uint32_t)(EDI));
  /* 11fd7599 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd759a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd759d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd75a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd75a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd75a9 pop ecx */
  ECX = (pop32());
  /* 11fd75aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd75ad mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd75b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd75b4 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd75b7 mov esi, esp */
  ESI = (ESP);
  /* 11fd75b9 push eax */
  push32((uint32_t)(EAX));
  /* 11fd75ba call dword ptr [0x12011598] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011598))), 0x11fd75c0u);
  /* 11fd75c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd75c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd75c5 call 0x11fd8e20 */
  push32(0x11fd75cau); f_11fd8e20();
  /* 11fd75ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd75cc jle 0x11fd75d2 */
  if ((C.zf||C.sf!=C.of)) goto L_11fd75d2;
  /* 11fd75ce mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11fd75d2:;
  /* 11fd75d2 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd75d5 pop edi */
  EDI = (pop32());
  /* 11fd75d6 pop esi */
  ESI = (pop32());
  /* 11fd75d7 pop ebx */
  EBX = (pop32());
  /* 11fd75d8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd75db cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd75dd call 0x11fd8e20 */
  push32(0x11fd75e2u); f_11fd8e20();
  /* 11fd75e2 mov esp, ebp */
  ESP = (EBP);
  /* 11fd75e4 pop ebp */
  EBP = (pop32());
  /* 11fd75e5 ret  */
  ESPCHK(0x11fd7590u, _esp0);
  ESP += 4; return;
}

/* FUN_10007600 @ 0x11fd7600 (42 bytes, 21 insns) */
void f_11fd7600(void) {
  FTRACE(0x11fd7600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd7600 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd7601 mov ebp, esp */
  EBP = (ESP);
  /* 11fd7603 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd7606 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd7607 push esi */
  push32((uint32_t)(ESI));
  /* 11fd7608 push edi */
  push32((uint32_t)(EDI));
  /* 11fd7609 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd760a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd760d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd7612 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd7617 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd7619 pop ecx */
  ECX = (pop32());
  /* 11fd761a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd761d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7620 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7623 pop edi */
  EDI = (pop32());
  /* 11fd7624 pop esi */
  ESI = (pop32());
  /* 11fd7625 pop ebx */
  EBX = (pop32());
  /* 11fd7626 mov esp, ebp */
  ESP = (EBP);
  /* 11fd7628 pop ebp */
  EBP = (pop32());
  /* 11fd7629 ret  */
  ESPCHK(0x11fd7600u, _esp0);
  ESP += 4; return;
}

/* FUN_10007640 @ 0x11fd7640 (235 bytes, 78 insns) */
void f_11fd7640(void) {
  FTRACE(0x11fd7640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd7640 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd7641 mov ebp, esp */
  EBP = (ESP);
  /* 11fd7643 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd7649 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd764a push esi */
  push32((uint32_t)(ESI));
  /* 11fd764b push edi */
  push32((uint32_t)(EDI));
  /* 11fd764c push ecx */
  push32((uint32_t)(ECX));
  /* 11fd764d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11fd7653 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11fd7658 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd765d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd765f pop ecx */
  ECX = (pop32());
  /* 11fd7660 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd7663 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 11fd766a mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11fd7671 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7674 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7677 mov esi, esp */
  ESI = (ESP);
  /* 11fd7679 push eax */
  push32((uint32_t)(EAX));
  /* 11fd767a call dword ptr [0x12011598] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011598))), 0x11fd7680u);
  /* 11fd7680 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7683 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7685 call 0x11fd8e20 */
  push32(0x11fd768au); f_11fd8e20();
  /* 11fd768a mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11fd768d cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7691 jle 0x11fd7704 */
  if ((C.zf||C.sf!=C.of)) goto L_11fd7704;
  /* 11fd7693 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11fd769a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11fd76a1 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 11fd76a8 jmp 0x11fd76b3 */
  goto L_11fd76b3;
L_11fd76aa:;
  /* 11fd76aa mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11fd76ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd76b0 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_11fd76b3:;
  /* 11fd76b3 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 11fd76b6 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd76b9 jge 0x11fd76f0 */
  if ((C.sf==C.of)) goto L_11fd76f0;
  /* 11fd76bb mov esi, esp */
  ESI = (ESP);
  /* 11fd76bd lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11fd76c0 push eax */
  push32((uint32_t)(EAX));
  /* 11fd76c1 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11fd76c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd76c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd76c8 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd76cb push edx */
  push32((uint32_t)(EDX));
  /* 11fd76cc call dword ptr [0x12011590] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011590))), 0x11fd76d2u);
  /* 11fd76d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd76d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd76d7 call 0x11fd8e20 */
  push32(0x11fd76dcu); f_11fd8e20();
  /* 11fd76dc mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fd76df add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd76e2 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11fd76e5 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11fd76e8 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd76eb mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11fd76ee jmp 0x11fd76aa */
  goto L_11fd76aa;
L_11fd76f0:;
  /* 11fd76f0 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fd76f3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fd76f4 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fd76f7 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11fd76fa mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11fd76fd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fd76fe idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fd7701 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11fd7704:;
  /* 11fd7704 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd7707 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fd770a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fd770c mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fd770f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11fd7712 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd7715 pop edi */
  EDI = (pop32());
  /* 11fd7716 pop esi */
  ESI = (pop32());
  /* 11fd7717 pop ebx */
  EBX = (pop32());
  /* 11fd7718 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd771e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7720 call 0x11fd8e20 */
  push32(0x11fd7725u); f_11fd8e20();
  /* 11fd7725 mov esp, ebp */
  ESP = (EBP);
  /* 11fd7727 pop ebp */
  EBP = (pop32());
  /* 11fd7728 ret 4 */
  ESPCHK(0x11fd7640u, _esp0);
  ESP += 8; return;
}

/* FUN_10007770 @ 0x11fd7770 (250 bytes, 89 insns) */
void f_11fd7770(void) {
  FTRACE(0x11fd7770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd7770 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd7771 mov ebp, esp */
  EBP = (ESP);
  /* 11fd7773 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd7776 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd7777 push esi */
  push32((uint32_t)(ESI));
  /* 11fd7778 push edi */
  push32((uint32_t)(EDI));
  /* 11fd7779 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd777a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd777d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd7782 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd7787 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd7789 pop ecx */
  ECX = (pop32());
  /* 11fd778a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd778d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7790 call 0x11fd1109 */
  push32(0x11fd7795u); f_11fd1109();
  /* 11fd7795 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd779a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd779c je 0x11fd7859 */
  if (C.zf) goto L_11fd7859;
  /* 11fd77a2 mov esi, esp */
  ESI = (ESP);
  /* 11fd77a4 mov eax, dword ptr [0x1200cd60] */
  EAX = (r32((uint32_t)(0x1200cd60)));
  /* 11fd77a9 push eax */
  push32((uint32_t)(EAX));
  /* 11fd77aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd77ad push ecx */
  push32((uint32_t)(ECX));
  /* 11fd77ae mov edx, dword ptr [0x1200eed0] */
  EDX = (r32((uint32_t)(0x1200eed0)));
  /* 11fd77b4 push edx */
  push32((uint32_t)(EDX));
  /* 11fd77b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd77b8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd77bb push eax */
  push32((uint32_t)(EAX));
  /* 11fd77bc call dword ptr [0x120114f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114f0))), 0x11fd77c2u);
  /* 11fd77c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd77c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd77c7 call 0x11fd8e20 */
  push32(0x11fd77ccu); f_11fd8e20();
  /* 11fd77cc mov esi, esp */
  ESI = (ESP);
  /* 11fd77ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd77d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd77d3 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd77d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd77d7 call dword ptr [0x12011560] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011560))), 0x11fd77ddu);
  /* 11fd77dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd77e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd77e2 call 0x11fd8e20 */
  push32(0x11fd77e7u); f_11fd8e20();
  /* 11fd77e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd77e9 jle 0x11fd780c */
  if ((C.zf||C.sf!=C.of)) goto L_11fd780c;
  /* 11fd77eb mov esi, esp */
  ESI = (ESP);
  /* 11fd77ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd77ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd77f2 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd77f5 push edx */
  push32((uint32_t)(EDX));
  /* 11fd77f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd77f9 push eax */
  push32((uint32_t)(EAX));
  /* 11fd77fa call dword ptr [0x1201157c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201157c))), 0x11fd7800u);
  /* 11fd7800 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7803 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7805 call 0x11fd8e20 */
  push32(0x11fd780au); f_11fd8e20();
  /* 11fd780a jmp 0x11fd7859 */
  goto L_11fd7859;
L_11fd780c:;
  /* 11fd780c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd780f call 0x11fd1226 */
  push32(0x11fd7814u); f_11fd1226();
  /* 11fd7814 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd7819 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd781b jne 0x11fd7859 */
  if (!C.zf) goto L_11fd7859;
  /* 11fd781d mov esi, esp */
  ESI = (ESP);
  /* 11fd781f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd7821 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7824 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7825 call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd782bu);
  /* 11fd782b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd782e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7830 call 0x11fd8e20 */
  push32(0x11fd7835u); f_11fd8e20();
  /* 11fd7835 mov esi, esp */
  ESI = (ESP);
  /* 11fd7837 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd7839 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd783b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd783e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11fd7841 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7842 mov cl, byte ptr [0x1200cd64] */
  CL = (r8((uint32_t)(0x1200cd64)));
  /* 11fd7848 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7849 call dword ptr [0x1201156c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201156c))), 0x11fd784fu);
  /* 11fd784f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7852 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7854 call 0x11fd8e20 */
  push32(0x11fd7859u); f_11fd8e20();
L_11fd7859:;
  /* 11fd7859 pop edi */
  EDI = (pop32());
  /* 11fd785a pop esi */
  ESI = (pop32());
  /* 11fd785b pop ebx */
  EBX = (pop32());
  /* 11fd785c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd785f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7861 call 0x11fd8e20 */
  push32(0x11fd7866u); f_11fd8e20();
  /* 11fd7866 mov esp, ebp */
  ESP = (EBP);
  /* 11fd7868 pop ebp */
  EBP = (pop32());
  /* 11fd7869 ret  */
  ESPCHK(0x11fd7770u, _esp0);
  ESP += 4; return;
}

/* FUN_100078b0 @ 0x11fd78b0 (74 bytes, 31 insns) */
void f_11fd78b0(void) {
  FTRACE(0x11fd78b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd78b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd78b1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd78b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd78b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd78b7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd78b8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd78b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd78ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd78bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd78c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd78c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd78c9 pop ecx */
  ECX = (pop32());
  /* 11fd78ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd78cd mov esi, esp */
  ESI = (ESP);
  /* 11fd78cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd78d2 push eax */
  push32((uint32_t)(EAX));
  /* 11fd78d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd78d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd78d7 call dword ptr [0x120114d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114d0))), 0x11fd78ddu);
  /* 11fd78dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd78e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd78e2 call 0x11fd8e20 */
  push32(0x11fd78e7u); f_11fd8e20();
  /* 11fd78e7 pop edi */
  EDI = (pop32());
  /* 11fd78e8 pop esi */
  ESI = (pop32());
  /* 11fd78e9 pop ebx */
  EBX = (pop32());
  /* 11fd78ea add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd78ed cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd78ef call 0x11fd8e20 */
  push32(0x11fd78f4u); f_11fd8e20();
  /* 11fd78f4 mov esp, ebp */
  ESP = (EBP);
  /* 11fd78f6 pop ebp */
  EBP = (pop32());
  /* 11fd78f7 ret 4 */
  ESPCHK(0x11fd78b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007910 @ 0x11fd7910 (114 bytes, 45 insns) */
void f_11fd7910(void) {
  FTRACE(0x11fd7910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd7910 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd7911 mov ebp, esp */
  EBP = (ESP);
  /* 11fd7913 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd7916 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd7917 push esi */
  push32((uint32_t)(ESI));
  /* 11fd7918 push edi */
  push32((uint32_t)(EDI));
  /* 11fd7919 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd791a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd791d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd7922 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd7927 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd7929 pop ecx */
  ECX = (pop32());
  /* 11fd792a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd792d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd7931 mov esi, esp */
  ESI = (ESP);
  /* 11fd7933 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7936 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7937 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd793a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11fd793d push edx */
  push32((uint32_t)(EDX));
  /* 11fd793e call dword ptr [0x12011578] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011578))), 0x11fd7944u);
  /* 11fd7944 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7947 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7949 call 0x11fd8e20 */
  push32(0x11fd794eu); f_11fd8e20();
  /* 11fd794e mov esi, eax */
  ESI = (EAX);
  /* 11fd7950 mov edi, esp */
  EDI = (ESP);
  /* 11fd7952 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7955 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7956 call dword ptr [0x12011598] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011598))), 0x11fd795cu);
  /* 11fd795c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd795f cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7961 call 0x11fd8e20 */
  push32(0x11fd7966u); f_11fd8e20();
  /* 11fd7966 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7968 jne 0x11fd796e */
  if (!C.zf) goto L_11fd796e;
  /* 11fd796a mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11fd796e:;
  /* 11fd796e mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd7971 pop edi */
  EDI = (pop32());
  /* 11fd7972 pop esi */
  ESI = (pop32());
  /* 11fd7973 pop ebx */
  EBX = (pop32());
  /* 11fd7974 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7977 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7979 call 0x11fd8e20 */
  push32(0x11fd797eu); f_11fd8e20();
  /* 11fd797e mov esp, ebp */
  ESP = (EBP);
  /* 11fd7980 pop ebp */
  EBP = (pop32());
  /* 11fd7981 ret  */
  ESPCHK(0x11fd7910u, _esp0);
  ESP += 4; return;
}

/* FUN_100079a0 @ 0x11fd79a0 (83 bytes, 34 insns) */
void f_11fd79a0(void) {
  FTRACE(0x11fd79a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd79a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd79a1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd79a3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd79a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd79a7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd79a8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd79a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd79aa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd79ad mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd79b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd79b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd79b9 pop ecx */
  ECX = (pop32());
  /* 11fd79ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd79bd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd79c1 mov esi, esp */
  ESI = (ESP);
  /* 11fd79c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd79c6 push eax */
  push32((uint32_t)(EAX));
  /* 11fd79c7 call dword ptr [0x12011598] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011598))), 0x11fd79cdu);
  /* 11fd79cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd79d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd79d2 call 0x11fd8e20 */
  push32(0x11fd79d7u); f_11fd8e20();
  /* 11fd79d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd79d9 jle 0x11fd79df */
  if ((C.zf||C.sf!=C.of)) goto L_11fd79df;
  /* 11fd79db mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11fd79df:;
  /* 11fd79df mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd79e2 pop edi */
  EDI = (pop32());
  /* 11fd79e3 pop esi */
  ESI = (pop32());
  /* 11fd79e4 pop ebx */
  EBX = (pop32());
  /* 11fd79e5 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd79e8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd79ea call 0x11fd8e20 */
  push32(0x11fd79efu); f_11fd8e20();
  /* 11fd79ef mov esp, ebp */
  ESP = (EBP);
  /* 11fd79f1 pop ebp */
  EBP = (pop32());
  /* 11fd79f2 ret  */
  ESPCHK(0x11fd79a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a10 @ 0x11fd7a10 (126 bytes, 48 insns) */
void f_11fd7a10(void) {
  FTRACE(0x11fd7a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd7a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd7a11 mov ebp, esp */
  EBP = (ESP);
  /* 11fd7a13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd7a16 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd7a17 push esi */
  push32((uint32_t)(ESI));
  /* 11fd7a18 push edi */
  push32((uint32_t)(EDI));
  /* 11fd7a19 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7a1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd7a1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd7a22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd7a27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd7a29 pop ecx */
  ECX = (pop32());
  /* 11fd7a2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd7a2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7a30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd7a33 mov dword ptr [eax + 6], ecx */
  w32((uint32_t)(EAX + 0x6), (ECX));
  /* 11fd7a36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7a39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd7a3c mov dword ptr [edx + 0xa], eax */
  w32((uint32_t)(EDX + 0xa), (EAX));
  /* 11fd7a3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd7a42 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7a43 call 0x11fd10cd */
  push32(0x11fd7a48u); f_11fd10cd();
  /* 11fd7a48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7a4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7a4e mov byte ptr [edx + 1], al */
  w8((uint32_t)(EDX + 0x1), (AL));
  /* 11fd7a51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7a54 mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11fd7a57 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11fd7a59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7a5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fd7a5f mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11fd7a62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7a65 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7a68 mov esi, esp */
  ESI = (ESP);
  /* 11fd7a6a push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7a6b call dword ptr [0x1201158c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201158c))), 0x11fd7a71u);
  /* 11fd7a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7a74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7a76 call 0x11fd8e20 */
  push32(0x11fd7a7bu); f_11fd8e20();
  /* 11fd7a7b pop edi */
  EDI = (pop32());
  /* 11fd7a7c pop esi */
  ESI = (pop32());
  /* 11fd7a7d pop ebx */
  EBX = (pop32());
  /* 11fd7a7e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7a81 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7a83 call 0x11fd8e20 */
  push32(0x11fd7a88u); f_11fd8e20();
  /* 11fd7a88 mov esp, ebp */
  ESP = (EBP);
  /* 11fd7a8a pop ebp */
  EBP = (pop32());
  /* 11fd7a8b ret 0x10 */
  ESPCHK(0x11fd7a10u, _esp0);
  ESP += 20; return;
}

/* FUN_10007ab0 @ 0x11fd7ab0 (136 bytes, 54 insns) */
void f_11fd7ab0(void) {
  FTRACE(0x11fd7ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd7ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd7ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd7ab3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd7ab6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd7ab7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd7ab8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd7ab9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7aba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd7abd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd7ac2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd7ac7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd7ac9 pop ecx */
  ECX = (pop32());
  /* 11fd7aca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd7acd mov esi, esp */
  ESI = (ESP);
  /* 11fd7acf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd7ad2 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7ad3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7ad6 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7ad9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7ada call dword ptr [0x120114d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114d0))), 0x11fd7ae0u);
  /* 11fd7ae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7ae3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7ae5 call 0x11fd8e20 */
  push32(0x11fd7aeau); f_11fd8e20();
  /* 11fd7aea mov esi, esp */
  ESI = (ESP);
  /* 11fd7aec mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd7aef push edx */
  push32((uint32_t)(EDX));
  /* 11fd7af0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7af3 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7af6 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7af7 call dword ptr [0x1201155c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201155c))), 0x11fd7afdu);
  /* 11fd7afd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7b00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7b02 call 0x11fd8e20 */
  push32(0x11fd7b07u); f_11fd8e20();
  /* 11fd7b07 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fd7b0a push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7b0b mov dl, byte ptr [ebp + 0x10] */
  DL = (r8((uint32_t)(EBP + 0x10)));
  /* 11fd7b0e push edx */
  push32((uint32_t)(EDX));
  /* 11fd7b0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7b12 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7b15 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7b16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7b19 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7b1c push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7b1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7b20 call 0x11fd1073 */
  push32(0x11fd7b25u); f_11fd1073();
  /* 11fd7b25 pop edi */
  EDI = (pop32());
  /* 11fd7b26 pop esi */
  ESI = (pop32());
  /* 11fd7b27 pop ebx */
  EBX = (pop32());
  /* 11fd7b28 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7b2b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7b2d call 0x11fd8e20 */
  push32(0x11fd7b32u); f_11fd8e20();
  /* 11fd7b32 mov esp, ebp */
  ESP = (EBP);
  /* 11fd7b34 pop ebp */
  EBP = (pop32());
  /* 11fd7b35 ret 0x10 */
  ESPCHK(0x11fd7ab0u, _esp0);
  ESP += 20; return;
}

/* FUN_10007b60 @ 0x11fd7b60 (150 bytes, 58 insns) */
void f_11fd7b60(void) {
  FTRACE(0x11fd7b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd7b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd7b61 mov ebp, esp */
  EBP = (ESP);
  /* 11fd7b63 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd7b66 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd7b67 push esi */
  push32((uint32_t)(ESI));
  /* 11fd7b68 push edi */
  push32((uint32_t)(EDI));
  /* 11fd7b69 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7b6a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd7b6d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd7b72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd7b77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd7b79 pop ecx */
  ECX = (pop32());
  /* 11fd7b7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd7b7d mov esi, esp */
  ESI = (ESP);
  /* 11fd7b7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd7b82 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7b83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7b86 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7b89 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7b8a call dword ptr [0x120114d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114d0))), 0x11fd7b90u);
  /* 11fd7b90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7b93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7b95 call 0x11fd8e20 */
  push32(0x11fd7b9au); f_11fd8e20();
  /* 11fd7b9a mov esi, esp */
  ESI = (ESP);
  /* 11fd7b9c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11fd7ba1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7ba4 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7ba7 push edx */
  push32((uint32_t)(EDX));
  /* 11fd7ba8 mov eax, dword ptr [0x1200eed4] */
  EAX = (r32((uint32_t)(0x1200eed4)));
  /* 11fd7bad push eax */
  push32((uint32_t)(EAX));
  /* 11fd7bae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7bb1 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7bb4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7bb5 call dword ptr [0x120114f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114f0))), 0x11fd7bbbu);
  /* 11fd7bbb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7bbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7bc0 call 0x11fd8e20 */
  push32(0x11fd7bc5u); f_11fd8e20();
  /* 11fd7bc5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd7bc8 push edx */
  push32((uint32_t)(EDX));
  /* 11fd7bc9 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 11fd7bcc push eax */
  push32((uint32_t)(EAX));
  /* 11fd7bcd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7bd0 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7bd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7bd7 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7bda push edx */
  push32((uint32_t)(EDX));
  /* 11fd7bdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7bde call 0x11fd1073 */
  push32(0x11fd7be3u); f_11fd1073();
  /* 11fd7be3 pop edi */
  EDI = (pop32());
  /* 11fd7be4 pop esi */
  ESI = (pop32());
  /* 11fd7be5 pop ebx */
  EBX = (pop32());
  /* 11fd7be6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7be9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7beb call 0x11fd8e20 */
  push32(0x11fd7bf0u); f_11fd8e20();
  /* 11fd7bf0 mov esp, ebp */
  ESP = (EBP);
  /* 11fd7bf2 pop ebp */
  EBP = (pop32());
  /* 11fd7bf3 ret 0xc */
  ESPCHK(0x11fd7b60u, _esp0);
  ESP += 16; return;
}

/* FUN_10007c20 @ 0x11fd7c20 (255 bytes, 92 insns) */
void f_11fd7c20(void) {
  FTRACE(0x11fd7c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd7c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd7c21 mov ebp, esp */
  EBP = (ESP);
  /* 11fd7c23 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd7c26 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd7c27 push esi */
  push32((uint32_t)(ESI));
  /* 11fd7c28 push edi */
  push32((uint32_t)(EDI));
  /* 11fd7c29 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7c2a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd7c2d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd7c32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd7c37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd7c39 pop ecx */
  ECX = (pop32());
  /* 11fd7c3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd7c3d mov esi, esp */
  ESI = (ESP);
  /* 11fd7c3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7c42 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 11fd7c45 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7c46 call dword ptr [0x120114f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114f4))), 0x11fd7c4cu);
  /* 11fd7c4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7c4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7c51 call 0x11fd8e20 */
  push32(0x11fd7c56u); f_11fd8e20();
  /* 11fd7c56 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd7c5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd7c5d je 0x11fd7ca5 */
  if (C.zf) goto L_11fd7ca5;
  /* 11fd7c5f mov esi, esp */
  ESI = (ESP);
  /* 11fd7c61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7c64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fd7c66 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7c67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7c6a mov edx, dword ptr [ecx + 0xa] */
  EDX = (r32((uint32_t)(ECX + 0xa)));
  /* 11fd7c6d push edx */
  push32((uint32_t)(EDX));
  /* 11fd7c6e call dword ptr [0x12011560] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011560))), 0x11fd7c74u);
  /* 11fd7c74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7c77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7c79 call 0x11fd8e20 */
  push32(0x11fd7c7eu); f_11fd8e20();
  /* 11fd7c7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd7c80 jle 0x11fd7ca5 */
  if ((C.zf||C.sf!=C.of)) goto L_11fd7ca5;
  /* 11fd7c82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7c85 call 0x11fd12ad */
  push32(0x11fd7c8au); f_11fd12ad();
  /* 11fd7c8a mov esi, esp */
  ESI = (ESP);
  /* 11fd7c8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd7c8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7c91 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 11fd7c94 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7c95 call dword ptr [0x12011520] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011520))), 0x11fd7c9bu);
  /* 11fd7c9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7c9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7ca0 call 0x11fd8e20 */
  push32(0x11fd7ca5u); f_11fd8e20();
L_11fd7ca5:;
  /* 11fd7ca5 mov esi, esp */
  ESI = (ESP);
  /* 11fd7ca7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7caa mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 11fd7cad push eax */
  push32((uint32_t)(EAX));
  /* 11fd7cae call dword ptr [0x120114f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114f4))), 0x11fd7cb4u);
  /* 11fd7cb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7cb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7cb9 call 0x11fd8e20 */
  push32(0x11fd7cbeu); f_11fd8e20();
  /* 11fd7cbe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd7cc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd7cc5 jne 0x11fd7d0e */
  if (!C.zf) goto L_11fd7d0e;
  /* 11fd7cc7 mov esi, esp */
  ESI = (ESP);
  /* 11fd7cc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7ccc mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fd7cce push edx */
  push32((uint32_t)(EDX));
  /* 11fd7ccf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7cd2 mov ecx, dword ptr [eax + 0xa] */
  ECX = (r32((uint32_t)(EAX + 0xa)));
  /* 11fd7cd5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7cd6 call dword ptr [0x12011560] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011560))), 0x11fd7cdcu);
  /* 11fd7cdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7cdf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7ce1 call 0x11fd8e20 */
  push32(0x11fd7ce6u); f_11fd8e20();
  /* 11fd7ce6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7ce9 jge 0x11fd7d0e */
  if ((C.sf==C.of)) goto L_11fd7d0e;
  /* 11fd7ceb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7cee call 0x11fd10e6 */
  push32(0x11fd7cf3u); f_11fd10e6();
  /* 11fd7cf3 mov esi, esp */
  ESI = (ESP);
  /* 11fd7cf5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fd7cf7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7cfa mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 11fd7cfd push eax */
  push32((uint32_t)(EAX));
  /* 11fd7cfe call dword ptr [0x12011520] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011520))), 0x11fd7d04u);
  /* 11fd7d04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7d07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7d09 call 0x11fd8e20 */
  push32(0x11fd7d0eu); f_11fd8e20();
L_11fd7d0e:;
  /* 11fd7d0e pop edi */
  EDI = (pop32());
  /* 11fd7d0f pop esi */
  ESI = (pop32());
  /* 11fd7d10 pop ebx */
  EBX = (pop32());
  /* 11fd7d11 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7d14 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7d16 call 0x11fd8e20 */
  push32(0x11fd7d1bu); f_11fd8e20();
  /* 11fd7d1b mov esp, ebp */
  ESP = (EBP);
  /* 11fd7d1d pop ebp */
  EBP = (pop32());
  /* 11fd7d1e ret  */
  ESPCHK(0x11fd7c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d60 @ 0x11fd7d60 (158 bytes, 60 insns) */
void f_11fd7d60(void) {
  FTRACE(0x11fd7d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd7d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd7d61 mov ebp, esp */
  EBP = (ESP);
  /* 11fd7d63 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd7d66 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd7d67 push esi */
  push32((uint32_t)(ESI));
  /* 11fd7d68 push edi */
  push32((uint32_t)(EDI));
  /* 11fd7d69 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7d6a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd7d6d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd7d72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd7d77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd7d79 pop ecx */
  ECX = (pop32());
  /* 11fd7d7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd7d7d mov esi, esp */
  ESI = (ESP);
  /* 11fd7d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd7d81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7d84 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7d87 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7d88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7d8b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fd7d8d push edx */
  push32((uint32_t)(EDX));
  /* 11fd7d8e call dword ptr [0x12011594] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011594))), 0x11fd7d94u);
  /* 11fd7d94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7d97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7d99 call 0x11fd8e20 */
  push32(0x11fd7d9eu); f_11fd8e20();
  /* 11fd7d9e mov esi, esp */
  ESI = (ESP);
  /* 11fd7da0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd7da2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7da5 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11fd7da8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7da9 call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd7dafu);
  /* 11fd7daf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7db2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7db4 call 0x11fd8e20 */
  push32(0x11fd7db9u); f_11fd8e20();
  /* 11fd7db9 mov esi, esp */
  ESI = (ESP);
  /* 11fd7dbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7dbe mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11fd7dc1 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7dc2 call dword ptr [0x120114c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114c8))), 0x11fd7dc8u);
  /* 11fd7dc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7dcb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7dcd call 0x11fd8e20 */
  push32(0x11fd7dd2u); f_11fd8e20();
  /* 11fd7dd2 mov esi, esp */
  ESI = (ESP);
  /* 11fd7dd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd7dd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7dd9 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7ddc push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7ddd call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd7de3u);
  /* 11fd7de3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7de6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7de8 call 0x11fd8e20 */
  push32(0x11fd7dedu); f_11fd8e20();
  /* 11fd7ded pop edi */
  EDI = (pop32());
  /* 11fd7dee pop esi */
  ESI = (pop32());
  /* 11fd7def pop ebx */
  EBX = (pop32());
  /* 11fd7df0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7df3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7df5 call 0x11fd8e20 */
  push32(0x11fd7dfau); f_11fd8e20();
  /* 11fd7dfa mov esp, ebp */
  ESP = (EBP);
  /* 11fd7dfc pop ebp */
  EBP = (pop32());
  /* 11fd7dfd ret  */
  ESPCHK(0x11fd7d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e30 @ 0x11fd7e30 (158 bytes, 60 insns) */
void f_11fd7e30(void) {
  FTRACE(0x11fd7e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd7e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd7e31 mov ebp, esp */
  EBP = (ESP);
  /* 11fd7e33 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd7e36 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd7e37 push esi */
  push32((uint32_t)(ESI));
  /* 11fd7e38 push edi */
  push32((uint32_t)(EDI));
  /* 11fd7e39 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7e3a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd7e3d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd7e42 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd7e47 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd7e49 pop ecx */
  ECX = (pop32());
  /* 11fd7e4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd7e4d mov esi, esp */
  ESI = (ESP);
  /* 11fd7e4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd7e51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7e54 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7e57 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7e58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7e5b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fd7e5d push edx */
  push32((uint32_t)(EDX));
  /* 11fd7e5e call dword ptr [0x12011594] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011594))), 0x11fd7e64u);
  /* 11fd7e64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7e67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7e69 call 0x11fd8e20 */
  push32(0x11fd7e6eu); f_11fd8e20();
  /* 11fd7e6e mov esi, esp */
  ESI = (ESP);
  /* 11fd7e70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd7e72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7e75 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11fd7e78 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7e79 call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd7e7fu);
  /* 11fd7e7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7e82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7e84 call 0x11fd8e20 */
  push32(0x11fd7e89u); f_11fd8e20();
  /* 11fd7e89 mov esi, esp */
  ESI = (ESP);
  /* 11fd7e8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7e8e mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11fd7e91 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7e92 call dword ptr [0x120114b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114b8))), 0x11fd7e98u);
  /* 11fd7e98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7e9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7e9d call 0x11fd8e20 */
  push32(0x11fd7ea2u); f_11fd8e20();
  /* 11fd7ea2 mov esi, esp */
  ESI = (ESP);
  /* 11fd7ea4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd7ea6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7ea9 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7eac push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7ead call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd7eb3u);
  /* 11fd7eb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7eb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7eb8 call 0x11fd8e20 */
  push32(0x11fd7ebdu); f_11fd8e20();
  /* 11fd7ebd pop edi */
  EDI = (pop32());
  /* 11fd7ebe pop esi */
  ESI = (pop32());
  /* 11fd7ebf pop ebx */
  EBX = (pop32());
  /* 11fd7ec0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7ec3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7ec5 call 0x11fd8e20 */
  push32(0x11fd7ecau); f_11fd8e20();
  /* 11fd7eca mov esp, ebp */
  ESP = (EBP);
  /* 11fd7ecc pop ebp */
  EBP = (pop32());
  /* 11fd7ecd ret  */
  ESPCHK(0x11fd7e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f00 @ 0x11fd7f00 (49 bytes, 22 insns) */
void f_11fd7f00(void) {
  FTRACE(0x11fd7f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd7f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd7f01 mov ebp, esp */
  EBP = (ESP);
  /* 11fd7f03 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd7f06 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd7f07 push esi */
  push32((uint32_t)(ESI));
  /* 11fd7f08 push edi */
  push32((uint32_t)(EDI));
  /* 11fd7f09 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7f0a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd7f0d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd7f12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd7f17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd7f19 pop ecx */
  ECX = (pop32());
  /* 11fd7f1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd7f1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7f20 mov dword ptr [eax + 0x2c], 0xffffffff */
  w32((uint32_t)(EAX + 0x2c), (0xffffffffu));
  /* 11fd7f27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7f2a pop edi */
  EDI = (pop32());
  /* 11fd7f2b pop esi */
  ESI = (pop32());
  /* 11fd7f2c pop ebx */
  EBX = (pop32());
  /* 11fd7f2d mov esp, ebp */
  ESP = (EBP);
  /* 11fd7f2f pop ebp */
  EBP = (pop32());
  /* 11fd7f30 ret  */
  ESPCHK(0x11fd7f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f40 @ 0x11fd7f40 (77 bytes, 32 insns) */
void f_11fd7f40(void) {
  FTRACE(0x11fd7f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd7f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd7f41 mov ebp, esp */
  EBP = (ESP);
  /* 11fd7f43 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd7f46 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd7f47 push esi */
  push32((uint32_t)(ESI));
  /* 11fd7f48 push edi */
  push32((uint32_t)(EDI));
  /* 11fd7f49 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7f4a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd7f4d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd7f52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd7f57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd7f59 pop ecx */
  ECX = (pop32());
  /* 11fd7f5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd7f5d mov esi, esp */
  ESI = (ESP);
  /* 11fd7f5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd7f62 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7f63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7f66 add ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7f69 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7f6a call dword ptr [0x120114d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114d0))), 0x11fd7f70u);
  /* 11fd7f70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7f73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7f75 call 0x11fd8e20 */
  push32(0x11fd7f7au); f_11fd8e20();
  /* 11fd7f7a pop edi */
  EDI = (pop32());
  /* 11fd7f7b pop esi */
  ESI = (pop32());
  /* 11fd7f7c pop ebx */
  EBX = (pop32());
  /* 11fd7f7d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7f80 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7f82 call 0x11fd8e20 */
  push32(0x11fd7f87u); f_11fd8e20();
  /* 11fd7f87 mov esp, ebp */
  ESP = (EBP);
  /* 11fd7f89 pop ebp */
  EBP = (pop32());
  /* 11fd7f8a ret 4 */
  ESPCHK(0x11fd7f40u, _esp0);
  ESP += 8; return;
}

/* FUN_10007fa0 @ 0x11fd7fa0 (102 bytes, 40 insns) */
void f_11fd7fa0(void) {
  FTRACE(0x11fd7fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd7fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd7fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd7fa3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd7fa6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd7fa7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd7fa8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd7fa9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7faa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd7fad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd7fb2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd7fb7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd7fb9 pop ecx */
  ECX = (pop32());
  /* 11fd7fba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd7fbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7fc0 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7fc3 mov esi, esp */
  ESI = (ESP);
  /* 11fd7fc5 push eax */
  push32((uint32_t)(EAX));
  /* 11fd7fc6 call dword ptr [0x1201158c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201158c))), 0x11fd7fccu);
  /* 11fd7fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7fcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7fd1 call 0x11fd8e20 */
  push32(0x11fd7fd6u); f_11fd8e20();
  /* 11fd7fd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd7fd9 add ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7fdc mov esi, esp */
  ESI = (ESP);
  /* 11fd7fde push ecx */
  push32((uint32_t)(ECX));
  /* 11fd7fdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd7fe2 push edx */
  push32((uint32_t)(EDX));
  /* 11fd7fe3 call dword ptr [0x120114c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114c0))), 0x11fd7fe9u);
  /* 11fd7fe9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7fec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7fee call 0x11fd8e20 */
  push32(0x11fd7ff3u); f_11fd8e20();
  /* 11fd7ff3 pop edi */
  EDI = (pop32());
  /* 11fd7ff4 pop esi */
  ESI = (pop32());
  /* 11fd7ff5 pop ebx */
  EBX = (pop32());
  /* 11fd7ff6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd7ff9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd7ffb call 0x11fd8e20 */
  push32(0x11fd8000u); f_11fd8e20();
  /* 11fd8000 mov esp, ebp */
  ESP = (EBP);
  /* 11fd8002 pop ebp */
  EBP = (pop32());
  /* 11fd8003 ret 4 */
  ESPCHK(0x11fd7fa0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008020 @ 0x11fd8020 (184 bytes, 69 insns) */
void f_11fd8020(void) {
  FTRACE(0x11fd8020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8020 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd8021 mov ebp, esp */
  EBP = (ESP);
  /* 11fd8023 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8026 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd8027 push esi */
  push32((uint32_t)(ESI));
  /* 11fd8028 push edi */
  push32((uint32_t)(EDI));
  /* 11fd8029 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd802a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd802d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd8032 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd8037 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd8039 pop ecx */
  ECX = (pop32());
  /* 11fd803a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd803d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd8041 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8044 cmp dword ptr [eax + 0x2c], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x2c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8048 jne 0x11fd8077 */
  if (!C.zf) goto L_11fd8077;
  /* 11fd804a mov esi, esp */
  ESI = (ESP);
  /* 11fd804c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd804f push ecx */
  push32((uint32_t)(ECX));
  /* 11fd8050 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd8052 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8055 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8058 push edx */
  push32((uint32_t)(EDX));
  /* 11fd8059 call dword ptr [0x12011590] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011590))), 0x11fd805fu);
  /* 11fd805f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8062 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8064 call 0x11fd8e20 */
  push32(0x11fd8069u); f_11fd8e20();
  /* 11fd8069 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd806c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fd806e mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11fd8071 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8074 mov dword ptr [edx + 0x2c], ecx */
  w32((uint32_t)(EDX + 0x2c), (ECX));
L_11fd8077:;
  /* 11fd8077 mov esi, esp */
  ESI = (ESP);
  /* 11fd8079 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd807c push eax */
  push32((uint32_t)(EAX));
  /* 11fd807d call dword ptr [0x12011598] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011598))), 0x11fd8083u);
  /* 11fd8083 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8086 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8088 call 0x11fd8e20 */
  push32(0x11fd808du); f_11fd8e20();
  /* 11fd808d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8090 jne 0x11fd80c2 */
  if (!C.zf) goto L_11fd80c2;
  /* 11fd8092 mov esi, esp */
  ESI = (ESP);
  /* 11fd8094 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8097 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd8098 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd809a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd809d push edx */
  push32((uint32_t)(EDX));
  /* 11fd809e call dword ptr [0x12011590] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011590))), 0x11fd80a4u);
  /* 11fd80a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd80a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd80a9 call 0x11fd8e20 */
  push32(0x11fd80aeu); f_11fd8e20();
  /* 11fd80ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd80b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fd80b3 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11fd80b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd80b9 cmp ecx, dword ptr [edx + 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd80bc jne 0x11fd80c2 */
  if (!C.zf) goto L_11fd80c2;
  /* 11fd80be mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11fd80c2:;
  /* 11fd80c2 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd80c5 pop edi */
  EDI = (pop32());
  /* 11fd80c6 pop esi */
  ESI = (pop32());
  /* 11fd80c7 pop ebx */
  EBX = (pop32());
  /* 11fd80c8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd80cb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd80cd call 0x11fd8e20 */
  push32(0x11fd80d2u); f_11fd8e20();
  /* 11fd80d2 mov esp, ebp */
  ESP = (EBP);
  /* 11fd80d4 pop ebp */
  EBP = (pop32());
  /* 11fd80d5 ret 4 */
  ESPCHK(0x11fd8020u, _esp0);
  ESP += 8; return;
}

/* FUN_10008110 @ 0x11fd8110 (110 bytes, 43 insns) */
void f_11fd8110(void) {
  FTRACE(0x11fd8110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8110 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd8111 mov ebp, esp */
  EBP = (ESP);
  /* 11fd8113 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8116 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd8117 push esi */
  push32((uint32_t)(ESI));
  /* 11fd8118 push edi */
  push32((uint32_t)(EDI));
  /* 11fd8119 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd811a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd811d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd8122 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd8127 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd8129 pop ecx */
  ECX = (pop32());
  /* 11fd812a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd812d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd8131 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd8134 push eax */
  push32((uint32_t)(EAX));
  /* 11fd8135 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8138 call 0x11fd100f */
  push32(0x11fd813du); f_11fd100f();
  /* 11fd813d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd8142 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd8144 je 0x11fd8168 */
  if (C.zf) goto L_11fd8168;
  /* 11fd8146 mov esi, esp */
  ESI = (ESP);
  /* 11fd8148 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd814b push ecx */
  push32((uint32_t)(ECX));
  /* 11fd814c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd814f push edx */
  push32((uint32_t)(EDX));
  /* 11fd8150 call dword ptr [0x12011578] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011578))), 0x11fd8156u);
  /* 11fd8156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd815b call 0x11fd8e20 */
  push32(0x11fd8160u); f_11fd8e20();
  /* 11fd8160 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd8162 jle 0x11fd8168 */
  if ((C.zf||C.sf!=C.of)) goto L_11fd8168;
  /* 11fd8164 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11fd8168:;
  /* 11fd8168 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd816b pop edi */
  EDI = (pop32());
  /* 11fd816c pop esi */
  ESI = (pop32());
  /* 11fd816d pop ebx */
  EBX = (pop32());
  /* 11fd816e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8171 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8173 call 0x11fd8e20 */
  push32(0x11fd8178u); f_11fd8e20();
  /* 11fd8178 mov esp, ebp */
  ESP = (EBP);
  /* 11fd817a pop ebp */
  EBP = (pop32());
  /* 11fd817b ret 8 */
  ESPCHK(0x11fd8110u, _esp0);
  ESP += 12; return;
}

/* FUN_100081a0 @ 0x11fd81a0 (42 bytes, 21 insns) */
void f_11fd81a0(void) {
  FTRACE(0x11fd81a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd81a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd81a1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd81a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd81a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd81a7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd81a8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd81a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd81aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd81ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd81b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd81b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd81b9 pop ecx */
  ECX = (pop32());
  /* 11fd81ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd81bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd81c0 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd81c3 pop edi */
  EDI = (pop32());
  /* 11fd81c4 pop esi */
  ESI = (pop32());
  /* 11fd81c5 pop ebx */
  EBX = (pop32());
  /* 11fd81c6 mov esp, ebp */
  ESP = (EBP);
  /* 11fd81c8 pop ebp */
  EBP = (pop32());
  /* 11fd81c9 ret  */
  ESPCHK(0x11fd81a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081e0 @ 0x11fd81e0 (155 bytes, 58 insns) */
void f_11fd81e0(void) {
  FTRACE(0x11fd81e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd81e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd81e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd81e3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd81e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd81e7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd81e8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd81e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd81ea lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11fd81ed mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11fd81f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd81f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd81f9 pop ecx */
  ECX = (pop32());
  /* 11fd81fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd81fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8200 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd8203 mov dword ptr [eax + 0x45], ecx */
  w32((uint32_t)(EAX + 0x45), (ECX));
  /* 11fd8206 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8209 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 11fd820c mov byte ptr [edx + 0x38], al */
  w8((uint32_t)(EDX + 0x38), (AL));
  /* 11fd820f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8212 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd8215 mov dword ptr [ecx + 0x39], edx */
  w32((uint32_t)(ECX + 0x39), (EDX));
  /* 11fd8218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd821b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fd821e mov dword ptr [eax + 0x3d], ecx */
  w32((uint32_t)(EAX + 0x3d), (ECX));
  /* 11fd8221 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8224 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fd8227 mov dword ptr [edx + 0x41], eax */
  w32((uint32_t)(EDX + 0x41), (EAX));
  /* 11fd822a mov esi, esp */
  ESI = (ESP);
  /* 11fd822c push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11fd8231 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8234 mov edx, dword ptr [ecx + 0x45] */
  EDX = (r32((uint32_t)(ECX + 0x45)));
  /* 11fd8237 push edx */
  push32((uint32_t)(EDX));
  /* 11fd8238 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11fd823b push eax */
  push32((uint32_t)(EAX));
  /* 11fd823c call dword ptr [0x12011588] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011588))), 0x11fd8242u);
  /* 11fd8242 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8247 call 0x11fd8e20 */
  push32(0x11fd824cu); f_11fd8e20();
  /* 11fd824c mov esi, esp */
  ESI = (ESP);
  /* 11fd824e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd8250 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd8252 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11fd8255 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd8256 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd8258 call dword ptr [0x12011580] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011580))), 0x11fd825eu);
  /* 11fd825e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8263 call 0x11fd8e20 */
  push32(0x11fd8268u); f_11fd8e20();
  /* 11fd8268 pop edi */
  EDI = (pop32());
  /* 11fd8269 pop esi */
  ESI = (pop32());
  /* 11fd826a pop ebx */
  EBX = (pop32());
  /* 11fd826b add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd826e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8270 call 0x11fd8e20 */
  push32(0x11fd8275u); f_11fd8e20();
  /* 11fd8275 mov esp, ebp */
  ESP = (EBP);
  /* 11fd8277 pop ebp */
  EBP = (pop32());
  /* 11fd8278 ret 0x14 */
  ESPCHK(0x11fd81e0u, _esp0);
  ESP += 24; return;
}

/* FUN_100082b0 @ 0x11fd82b0 (252 bytes, 91 insns) */
void f_11fd82b0(void) {
  FTRACE(0x11fd82b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd82b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd82b1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd82b3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd82b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd82b7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd82b8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd82b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd82ba lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11fd82bd mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11fd82c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd82c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd82c9 pop ecx */
  ECX = (pop32());
  /* 11fd82ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd82cd mov esi, esp */
  ESI = (ESP);
  /* 11fd82cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd82d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd82d4 mov ecx, dword ptr [eax + 0x45] */
  ECX = (r32((uint32_t)(EAX + 0x45)));
  /* 11fd82d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd82d8 call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd82deu);
  /* 11fd82de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd82e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd82e3 call 0x11fd8e20 */
  push32(0x11fd82e8u); f_11fd8e20();
  /* 11fd82e8 mov esi, esp */
  ESI = (ESP);
  /* 11fd82ea push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 11fd82ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd82f2 mov eax, dword ptr [edx + 0x45] */
  EAX = (r32((uint32_t)(EDX + 0x45)));
  /* 11fd82f5 push eax */
  push32((uint32_t)(EAX));
  /* 11fd82f6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11fd82f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd82fa call dword ptr [0x12011588] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011588))), 0x11fd8300u);
  /* 11fd8300 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8303 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8305 call 0x11fd8e20 */
  push32(0x11fd830au); f_11fd8e20();
  /* 11fd830a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd830d cmp dword ptr [edx + 0x39], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x39))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8311 je 0x11fd8322 */
  if (C.zf) goto L_11fd8322;
  /* 11fd8313 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8316 mov cx, word ptr [ebp - 0xc] */
  CX = (r16((uint32_t)(EBP + -0xc)));
  /* 11fd831a add cx, word ptr [eax + 0x39] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(EAX + 0x39))),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11fd831e mov word ptr [ebp - 0xc], cx */
  w16((uint32_t)(EBP + -0xc), (CX));
L_11fd8322:;
  /* 11fd8322 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8325 cmp dword ptr [edx + 0x3d], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x3d))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8329 je 0x11fd8336 */
  if (C.zf) goto L_11fd8336;
  /* 11fd832b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd832e mov cx, word ptr [eax + 0x3d] */
  CX = (r16((uint32_t)(EAX + 0x3d)));
  /* 11fd8332 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_11fd8336:;
  /* 11fd8336 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8339 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fd833b mov al, byte ptr [edx + 0x38] */
  AL = (r8((uint32_t)(EDX + 0x38)));
  /* 11fd833e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd8340 jne 0x11fd8363 */
  if (!C.zf) goto L_11fd8363;
  /* 11fd8342 mov esi, esp */
  ESI = (ESP);
  /* 11fd8344 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd8346 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8349 mov dl, byte ptr [ecx + 0x41] */
  DL = (r8((uint32_t)(ECX + 0x41)));
  /* 11fd834c push edx */
  push32((uint32_t)(EDX));
  /* 11fd834d lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11fd8350 push eax */
  push32((uint32_t)(EAX));
  /* 11fd8351 push 3 */
  push32((uint32_t)(0x3u));
  /* 11fd8353 call dword ptr [0x12011580] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011580))), 0x11fd8359u);
  /* 11fd8359 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd835c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd835e call 0x11fd8e20 */
  push32(0x11fd8363u); f_11fd8e20();
L_11fd8363:;
  /* 11fd8363 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8366 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fd8368 mov dl, byte ptr [ecx + 0x38] */
  DL = (r8((uint32_t)(ECX + 0x38)));
  /* 11fd836b cmp edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd836e jne 0x11fd8391 */
  if (!C.zf) goto L_11fd8391;
  /* 11fd8370 mov esi, esp */
  ESI = (ESP);
  /* 11fd8372 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd8374 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8377 mov cl, byte ptr [eax + 0x41] */
  CL = (r8((uint32_t)(EAX + 0x41)));
  /* 11fd837a push ecx */
  push32((uint32_t)(ECX));
  /* 11fd837b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11fd837e push edx */
  push32((uint32_t)(EDX));
  /* 11fd837f push 3 */
  push32((uint32_t)(0x3u));
  /* 11fd8381 call dword ptr [0x1201156c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201156c))), 0x11fd8387u);
  /* 11fd8387 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd838a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd838c call 0x11fd8e20 */
  push32(0x11fd8391u); f_11fd8e20();
L_11fd8391:;
  /* 11fd8391 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8394 mov dword ptr [eax + 0x45], 0 */
  w32((uint32_t)(EAX + 0x45), (0x0u));
  /* 11fd839b pop edi */
  EDI = (pop32());
  /* 11fd839c pop esi */
  ESI = (pop32());
  /* 11fd839d pop ebx */
  EBX = (pop32());
  /* 11fd839e add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd83a1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd83a3 call 0x11fd8e20 */
  push32(0x11fd83a8u); f_11fd8e20();
  /* 11fd83a8 mov esp, ebp */
  ESP = (EBP);
  /* 11fd83aa pop ebp */
  EBP = (pop32());
  /* 11fd83ab ret  */
  ESPCHK(0x11fd82b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100083f0 @ 0x11fd83f0 (143 bytes, 53 insns) */
void f_11fd83f0(void) {
  FTRACE(0x11fd83f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd83f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd83f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd83f3 sub esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd83f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd83f7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd83f8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd83f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd83fa lea edi, [ebp - 0x50] */
  EDI = ((uint32_t)(EBP + -0x50));
  /* 11fd83fd mov ecx, 0x14 */
  ECX = (0x14u);
  /* 11fd8402 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd8407 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd8409 pop ecx */
  ECX = (pop32());
  /* 11fd840a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd840d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd8411 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8414 cmp dword ptr [eax + 0x45], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x45))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8418 je 0x11fd846b */
  if (C.zf) goto L_11fd846b;
  /* 11fd841a mov esi, esp */
  ESI = (ESP);
  /* 11fd841c push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11fd8421 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8424 mov edx, dword ptr [ecx + 0x45] */
  EDX = (r32((uint32_t)(ECX + 0x45)));
  /* 11fd8427 push edx */
  push32((uint32_t)(EDX));
  /* 11fd8428 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11fd842b push eax */
  push32((uint32_t)(EAX));
  /* 11fd842c call dword ptr [0x12011588] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011588))), 0x11fd8432u);
  /* 11fd8432 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8435 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8437 call 0x11fd8e20 */
  push32(0x11fd843cu); f_11fd8e20();
  /* 11fd843c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd843f call 0x11fd123f */
  push32(0x11fd8444u); f_11fd123f();
  /* 11fd8444 mov esi, esp */
  ESI = (ESP);
  /* 11fd8446 push eax */
  push32((uint32_t)(EAX));
  /* 11fd8447 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11fd844a push ecx */
  push32((uint32_t)(ECX));
  /* 11fd844b call dword ptr [0x12011578] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011578))), 0x11fd8451u);
  /* 11fd8451 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8454 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8456 call 0x11fd8e20 */
  push32(0x11fd845bu); f_11fd8e20();
  /* 11fd845b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd845d jle 0x11fd846b */
  if ((C.zf||C.sf!=C.of)) goto L_11fd846b;
  /* 11fd845f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8462 call 0x11fd1096 */
  push32(0x11fd8467u); f_11fd1096();
  /* 11fd8467 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11fd846b:;
  /* 11fd846b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd846e pop edi */
  EDI = (pop32());
  /* 11fd846f pop esi */
  ESI = (pop32());
  /* 11fd8470 pop ebx */
  EBX = (pop32());
  /* 11fd8471 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8474 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8476 call 0x11fd8e20 */
  push32(0x11fd847bu); f_11fd8e20();
  /* 11fd847b mov esp, ebp */
  ESP = (EBP);
  /* 11fd847d pop ebp */
  EBP = (pop32());
  /* 11fd847e ret  */
  ESPCHK(0x11fd83f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100084b0 @ 0x11fd84b0 (39 bytes, 20 insns) */
void f_11fd84b0(void) {
  FTRACE(0x11fd84b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd84b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd84b1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd84b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd84b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd84b7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd84b8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd84b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd84ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd84bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd84c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd84c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd84c9 pop ecx */
  ECX = (pop32());
  /* 11fd84ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd84cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd84d0 pop edi */
  EDI = (pop32());
  /* 11fd84d1 pop esi */
  ESI = (pop32());
  /* 11fd84d2 pop ebx */
  EBX = (pop32());
  /* 11fd84d3 mov esp, ebp */
  ESP = (EBP);
  /* 11fd84d5 pop ebp */
  EBP = (pop32());
  /* 11fd84d6 ret  */
  ESPCHK(0x11fd84b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100084e0 @ 0x11fd84e0 (88 bytes, 36 insns) */
void f_11fd84e0(void) {
  FTRACE(0x11fd84e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd84e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd84e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd84e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd84e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd84e7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd84e8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd84e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd84ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd84ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd84f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd84f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd84f9 pop ecx */
  ECX = (pop32());
  /* 11fd84fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd84fd mov esi, esp */
  ESI = (ESP);
  /* 11fd84ff mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11fd8503 push eax */
  push32((uint32_t)(EAX));
  /* 11fd8504 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8507 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd8508 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd850b add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd850e push edx */
  push32((uint32_t)(EDX));
  /* 11fd850f call dword ptr [0x12011588] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011588))), 0x11fd8515u);
  /* 11fd8515 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8518 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd851a call 0x11fd8e20 */
  push32(0x11fd851fu); f_11fd8e20();
  /* 11fd851f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8522 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8525 pop edi */
  EDI = (pop32());
  /* 11fd8526 pop esi */
  ESI = (pop32());
  /* 11fd8527 pop ebx */
  EBX = (pop32());
  /* 11fd8528 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd852b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd852d call 0x11fd8e20 */
  push32(0x11fd8532u); f_11fd8e20();
  /* 11fd8532 mov esp, ebp */
  ESP = (EBP);
  /* 11fd8534 pop ebp */
  EBP = (pop32());
  /* 11fd8535 ret 4 */
  ESPCHK(0x11fd84e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008550 @ 0x11fd8550 (59 bytes, 25 insns) */
void f_11fd8550(void) {
  FTRACE(0x11fd8550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8550 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd8551 mov ebp, esp */
  EBP = (ESP);
  /* 11fd8553 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8556 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd8557 push esi */
  push32((uint32_t)(ESI));
  /* 11fd8558 push edi */
  push32((uint32_t)(EDI));
  /* 11fd8559 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd855a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd855d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd8562 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd8567 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd8569 pop ecx */
  ECX = (pop32());
  /* 11fd856a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd856d push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11fd8572 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8575 call 0x11fd11ae */
  push32(0x11fd857au); f_11fd11ae();
  /* 11fd857a pop edi */
  EDI = (pop32());
  /* 11fd857b pop esi */
  ESI = (pop32());
  /* 11fd857c pop ebx */
  EBX = (pop32());
  /* 11fd857d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8580 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8582 call 0x11fd8e20 */
  push32(0x11fd8587u); f_11fd8e20();
  /* 11fd8587 mov esp, ebp */
  ESP = (EBP);
  /* 11fd8589 pop ebp */
  EBP = (pop32());
  /* 11fd858a ret  */
  ESPCHK(0x11fd8550u, _esp0);
  ESP += 4; return;
}

/* FUN_100085a0 @ 0x11fd85a0 (97 bytes, 38 insns) */
void f_11fd85a0(void) {
  FTRACE(0x11fd85a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd85a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd85a1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd85a3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd85a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd85a7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd85a8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd85a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd85aa lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11fd85ad mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11fd85b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd85b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd85b9 pop ecx */
  ECX = (pop32());
  /* 11fd85ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd85bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd85c0 call 0x11fd10a5 */
  push32(0x11fd85c5u); f_11fd10a5();
  /* 11fd85c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd85c8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fd85ca mov cx, word ptr [eax + 8] */
  CX = (r16((uint32_t)(EAX + 0x8)));
  /* 11fd85ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fd85d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd85d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fd85d6 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11fd85da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fd85dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd85e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fd85e3 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11fd85e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fd85e8 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11fd85eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd85ee pop edi */
  EDI = (pop32());
  /* 11fd85ef pop esi */
  ESI = (pop32());
  /* 11fd85f0 pop ebx */
  EBX = (pop32());
  /* 11fd85f1 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd85f4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd85f6 call 0x11fd8e20 */
  push32(0x11fd85fbu); f_11fd8e20();
  /* 11fd85fb mov esp, ebp */
  ESP = (EBP);
  /* 11fd85fd pop ebp */
  EBP = (pop32());
  /* 11fd85fe ret 4 */
  ESPCHK(0x11fd85a0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008620 @ 0x11fd8620 (89 bytes, 36 insns) */
void f_11fd8620(void) {
  FTRACE(0x11fd8620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8620 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd8621 mov ebp, esp */
  EBP = (ESP);
  /* 11fd8623 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8626 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd8627 push esi */
  push32((uint32_t)(ESI));
  /* 11fd8628 push edi */
  push32((uint32_t)(EDI));
  /* 11fd8629 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd862a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd862d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd8632 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd8637 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd8639 pop ecx */
  ECX = (pop32());
  /* 11fd863a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd863d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8640 call 0x11fd128f */
  push32(0x11fd8645u); f_11fd128f();
  /* 11fd8645 mov esi, esp */
  ESI = (ESP);
  /* 11fd8647 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd8649 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd864b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd864e push eax */
  push32((uint32_t)(EAX));
  /* 11fd864f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8652 mov dl, byte ptr [ecx + 0x3c] */
  DL = (r8((uint32_t)(ECX + 0x3c)));
  /* 11fd8655 push edx */
  push32((uint32_t)(EDX));
  /* 11fd8656 call dword ptr [0x1201156c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201156c))), 0x11fd865cu);
  /* 11fd865c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd865f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8661 call 0x11fd8e20 */
  push32(0x11fd8666u); f_11fd8e20();
  /* 11fd8666 pop edi */
  EDI = (pop32());
  /* 11fd8667 pop esi */
  ESI = (pop32());
  /* 11fd8668 pop ebx */
  EBX = (pop32());
  /* 11fd8669 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd866c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd866e call 0x11fd8e20 */
  push32(0x11fd8673u); f_11fd8e20();
  /* 11fd8673 mov esp, ebp */
  ESP = (EBP);
  /* 11fd8675 pop ebp */
  EBP = (pop32());
  /* 11fd8676 ret 4 */
  ESPCHK(0x11fd8620u, _esp0);
  ESP += 8; return;
}

/* FUN_10008690 @ 0x11fd8690 (103 bytes, 41 insns) */
void f_11fd8690(void) {
  FTRACE(0x11fd8690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8690 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd8691 mov ebp, esp */
  EBP = (ESP);
  /* 11fd8693 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8696 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd8697 push esi */
  push32((uint32_t)(ESI));
  /* 11fd8698 push edi */
  push32((uint32_t)(EDI));
  /* 11fd8699 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd869a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd869d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd86a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd86a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd86a9 pop ecx */
  ECX = (pop32());
  /* 11fd86aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd86ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd86b0 call 0x11fd128f */
  push32(0x11fd86b5u); f_11fd128f();
  /* 11fd86b5 mov esi, esp */
  ESI = (ESP);
  /* 11fd86b7 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 11fd86ba push eax */
  push32((uint32_t)(EAX));
  /* 11fd86bb call 0x11fd9820 */
  push32(0x11fd86c0u); f_11fd9820();
  /* 11fd86c0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fd86c1 mov ecx, 0xff */
  ECX = (0xffu);
  /* 11fd86c6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fd86c8 push edx */
  push32((uint32_t)(EDX));
  /* 11fd86c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd86cc push edx */
  push32((uint32_t)(EDX));
  /* 11fd86cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd86d0 mov cl, byte ptr [eax + 0x3c] */
  CL = (r8((uint32_t)(EAX + 0x3c)));
  /* 11fd86d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd86d4 call dword ptr [0x12011580] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011580))), 0x11fd86dau);
  /* 11fd86da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd86dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd86df call 0x11fd8e20 */
  push32(0x11fd86e4u); f_11fd8e20();
  /* 11fd86e4 pop edi */
  EDI = (pop32());
  /* 11fd86e5 pop esi */
  ESI = (pop32());
  /* 11fd86e6 pop ebx */
  EBX = (pop32());
  /* 11fd86e7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd86ea cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd86ec call 0x11fd8e20 */
  push32(0x11fd86f1u); f_11fd8e20();
  /* 11fd86f1 mov esp, ebp */
  ESP = (EBP);
  /* 11fd86f3 pop ebp */
  EBP = (pop32());
  /* 11fd86f4 ret 8 */
  ESPCHK(0x11fd8690u, _esp0);
  ESP += 12; return;
}

/* FUN_10008710 @ 0x11fd8710 (62 bytes, 27 insns) */
void f_11fd8710(void) {
  FTRACE(0x11fd8710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8710 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd8711 mov ebp, esp */
  EBP = (ESP);
  /* 11fd8713 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8716 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd8717 push esi */
  push32((uint32_t)(ESI));
  /* 11fd8718 push edi */
  push32((uint32_t)(EDI));
  /* 11fd8719 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd871a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd871d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd8722 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd8727 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd8729 pop ecx */
  ECX = (pop32());
  /* 11fd872a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd872d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd872f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd8732 push eax */
  push32((uint32_t)(EAX));
  /* 11fd8733 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8736 call 0x11fd1046 */
  push32(0x11fd873bu); f_11fd1046();
  /* 11fd873b pop edi */
  EDI = (pop32());
  /* 11fd873c pop esi */
  ESI = (pop32());
  /* 11fd873d pop ebx */
  EBX = (pop32());
  /* 11fd873e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8741 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8743 call 0x11fd8e20 */
  push32(0x11fd8748u); f_11fd8e20();
  /* 11fd8748 mov esp, ebp */
  ESP = (EBP);
  /* 11fd874a pop ebp */
  EBP = (pop32());
  /* 11fd874b ret 4 */
  ESPCHK(0x11fd8710u, _esp0);
  ESP += 8; return;
}

/* FUN_10008760 @ 0x11fd8760 (39 bytes, 20 insns) */
void f_11fd8760(void) {
  FTRACE(0x11fd8760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8760 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd8761 mov ebp, esp */
  EBP = (ESP);
  /* 11fd8763 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8766 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd8767 push esi */
  push32((uint32_t)(ESI));
  /* 11fd8768 push edi */
  push32((uint32_t)(EDI));
  /* 11fd8769 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd876a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd876d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd8772 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd8777 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd8779 pop ecx */
  ECX = (pop32());
  /* 11fd877a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd877d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8780 pop edi */
  EDI = (pop32());
  /* 11fd8781 pop esi */
  ESI = (pop32());
  /* 11fd8782 pop ebx */
  EBX = (pop32());
  /* 11fd8783 mov esp, ebp */
  ESP = (EBP);
  /* 11fd8785 pop ebp */
  EBP = (pop32());
  /* 11fd8786 ret  */
  ESPCHK(0x11fd8760u, _esp0);
  ESP += 4; return;
}

/* FUN_10008790 @ 0x11fd8790 (70 bytes, 30 insns) */
void f_11fd8790(void) {
  FTRACE(0x11fd8790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8790 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd8791 mov ebp, esp */
  EBP = (ESP);
  /* 11fd8793 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8796 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd8797 push esi */
  push32((uint32_t)(ESI));
  /* 11fd8798 push edi */
  push32((uint32_t)(EDI));
  /* 11fd8799 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd879a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd879d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd87a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd87a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd87a9 pop ecx */
  ECX = (pop32());
  /* 11fd87aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd87ad mov esi, esp */
  ESI = (ESP);
  /* 11fd87af push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd87b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd87b4 push eax */
  push32((uint32_t)(EAX));
  /* 11fd87b5 call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd87bbu);
  /* 11fd87bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd87be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd87c0 call 0x11fd8e20 */
  push32(0x11fd87c5u); f_11fd8e20();
  /* 11fd87c5 pop edi */
  EDI = (pop32());
  /* 11fd87c6 pop esi */
  ESI = (pop32());
  /* 11fd87c7 pop ebx */
  EBX = (pop32());
  /* 11fd87c8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd87cb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd87cd call 0x11fd8e20 */
  push32(0x11fd87d2u); f_11fd8e20();
  /* 11fd87d2 mov esp, ebp */
  ESP = (EBP);
  /* 11fd87d4 pop ebp */
  EBP = (pop32());
  /* 11fd87d5 ret  */
  ESPCHK(0x11fd8790u, _esp0);
  ESP += 4; return;
}

/* FUN_100087f0 @ 0x11fd87f0 (123 bytes, 48 insns) */
void f_11fd87f0(void) {
  FTRACE(0x11fd87f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd87f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd87f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd87f3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd87f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd87f7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd87f8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd87f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd87fa lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11fd87fd mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11fd8802 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd8807 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd8809 pop ecx */
  ECX = (pop32());
  /* 11fd880a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd880d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd8811 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fd8815 jmp 0x11fd881f */
  goto L_11fd881f;
L_11fd8817:;
  /* 11fd8817 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11fd881a add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fd881c mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11fd881f:;
  /* 11fd881f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fd8822 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fd8828 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd882b jge 0x11fd8857 */
  if ((C.sf==C.of)) goto L_11fd8857;
  /* 11fd882d mov esi, esp */
  ESI = (ESP);
  /* 11fd882f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11fd8832 push edx */
  push32((uint32_t)(EDX));
  /* 11fd8833 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8836 push eax */
  push32((uint32_t)(EAX));
  /* 11fd8837 call dword ptr [0x120114fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114fc))), 0x11fd883du);
  /* 11fd883d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8840 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8842 call 0x11fd8e20 */
  push32(0x11fd8847u); f_11fd8e20();
  /* 11fd8847 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd8849 jle 0x11fd8855 */
  if ((C.zf||C.sf!=C.of)) goto L_11fd8855;
  /* 11fd884b mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11fd884e mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11fd8851 mov byte ptr [ebp - 0xc], 8 */
  w8((uint32_t)(EBP + -0xc), (0x8u));
L_11fd8855:;
  /* 11fd8855 jmp 0x11fd8817 */
  goto L_11fd8817;
L_11fd8857:;
  /* 11fd8857 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd885a pop edi */
  EDI = (pop32());
  /* 11fd885b pop esi */
  ESI = (pop32());
  /* 11fd885c pop ebx */
  EBX = (pop32());
  /* 11fd885d add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8860 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8862 call 0x11fd8e20 */
  push32(0x11fd8867u); f_11fd8e20();
  /* 11fd8867 mov esp, ebp */
  ESP = (EBP);
  /* 11fd8869 pop ebp */
  EBP = (pop32());
  /* 11fd886a ret  */
  ESPCHK(0x11fd87f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008890 @ 0x11fd8890 (68 bytes, 29 insns) */
void f_11fd8890(void) {
  FTRACE(0x11fd8890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8890 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd8891 mov ebp, esp */
  EBP = (ESP);
  /* 11fd8893 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8896 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd8897 push esi */
  push32((uint32_t)(ESI));
  /* 11fd8898 push edi */
  push32((uint32_t)(EDI));
  /* 11fd8899 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd889a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd889d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd88a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd88a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd88a9 pop ecx */
  ECX = (pop32());
  /* 11fd88aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd88ad mov esi, esp */
  ESI = (ESP);
  /* 11fd88af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd88b2 push eax */
  push32((uint32_t)(EAX));
  /* 11fd88b3 call dword ptr [0x12011598] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011598))), 0x11fd88b9u);
  /* 11fd88b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd88bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd88be call 0x11fd8e20 */
  push32(0x11fd88c3u); f_11fd8e20();
  /* 11fd88c3 pop edi */
  EDI = (pop32());
  /* 11fd88c4 pop esi */
  ESI = (pop32());
  /* 11fd88c5 pop ebx */
  EBX = (pop32());
  /* 11fd88c6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd88c9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd88cb call 0x11fd8e20 */
  push32(0x11fd88d0u); f_11fd8e20();
  /* 11fd88d0 mov esp, ebp */
  ESP = (EBP);
  /* 11fd88d2 pop ebp */
  EBP = (pop32());
  /* 11fd88d3 ret  */
  ESPCHK(0x11fd8890u, _esp0);
  ESP += 4; return;
}

/* FUN_100088f0 @ 0x11fd88f0 (69 bytes, 29 insns) */
void f_11fd88f0(void) {
  FTRACE(0x11fd88f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd88f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd88f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd88f3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd88f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd88f7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd88f8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd88f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd88fa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd88fd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd8902 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd8907 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd8909 pop ecx */
  ECX = (pop32());
  /* 11fd890a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd890d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd8911 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8914 call 0x11fd1221 */
  push32(0x11fd8919u); f_11fd1221();
  /* 11fd8919 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd891b jle 0x11fd8921 */
  if ((C.zf||C.sf!=C.of)) goto L_11fd8921;
  /* 11fd891d mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11fd8921:;
  /* 11fd8921 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd8924 pop edi */
  EDI = (pop32());
  /* 11fd8925 pop esi */
  ESI = (pop32());
  /* 11fd8926 pop ebx */
  EBX = (pop32());
  /* 11fd8927 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd892a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd892c call 0x11fd8e20 */
  push32(0x11fd8931u); f_11fd8e20();
  /* 11fd8931 mov esp, ebp */
  ESP = (EBP);
  /* 11fd8933 pop ebp */
  EBP = (pop32());
  /* 11fd8934 ret  */
  ESPCHK(0x11fd88f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008950 @ 0x11fd8950 (88 bytes, 35 insns) */
void f_11fd8950(void) {
  FTRACE(0x11fd8950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8950 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd8951 mov ebp, esp */
  EBP = (ESP);
  /* 11fd8953 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8956 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd8957 push esi */
  push32((uint32_t)(ESI));
  /* 11fd8958 push edi */
  push32((uint32_t)(EDI));
  /* 11fd8959 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd895a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd895d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd8962 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd8967 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd8969 pop ecx */
  ECX = (pop32());
  /* 11fd896a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd896d mov esi, esp */
  ESI = (ESP);
  /* 11fd896f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd8972 push eax */
  push32((uint32_t)(EAX));
  /* 11fd8973 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8976 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd8977 call dword ptr [0x120114d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114d0))), 0x11fd897du);
  /* 11fd897d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8980 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8982 call 0x11fd8e20 */
  push32(0x11fd8987u); f_11fd8e20();
  /* 11fd8987 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd898a call 0x11fd1276 */
  push32(0x11fd898fu); f_11fd1276();
  /* 11fd898f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8992 mov byte ptr [edx + 0x3c], al */
  w8((uint32_t)(EDX + 0x3c), (AL));
  /* 11fd8995 pop edi */
  EDI = (pop32());
  /* 11fd8996 pop esi */
  ESI = (pop32());
  /* 11fd8997 pop ebx */
  EBX = (pop32());
  /* 11fd8998 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd899b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd899d call 0x11fd8e20 */
  push32(0x11fd89a2u); f_11fd8e20();
  /* 11fd89a2 mov esp, ebp */
  ESP = (EBP);
  /* 11fd89a4 pop ebp */
  EBP = (pop32());
  /* 11fd89a5 ret 4 */
  ESPCHK(0x11fd8950u, _esp0);
  ESP += 8; return;
}

/* FUN_100089c0 @ 0x11fd89c0 (110 bytes, 42 insns) */
void f_11fd89c0(void) {
  FTRACE(0x11fd89c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd89c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd89c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd89c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd89c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd89c7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd89c8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd89c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd89ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd89cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd89d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd89d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd89d9 pop ecx */
  ECX = (pop32());
  /* 11fd89da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd89dd mov esi, esp */
  ESI = (ESP);
  /* 11fd89df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd89e2 push eax */
  push32((uint32_t)(EAX));
  /* 11fd89e3 call dword ptr [0x1201158c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201158c))), 0x11fd89e9u);
  /* 11fd89e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd89ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd89ee call 0x11fd8e20 */
  push32(0x11fd89f3u); f_11fd8e20();
  /* 11fd89f3 mov esi, esp */
  ESI = (ESP);
  /* 11fd89f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd89f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd89f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd89fc push edx */
  push32((uint32_t)(EDX));
  /* 11fd89fd call dword ptr [0x120114c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114c0))), 0x11fd8a03u);
  /* 11fd8a03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8a06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8a08 call 0x11fd8e20 */
  push32(0x11fd8a0du); f_11fd8e20();
  /* 11fd8a0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8a10 call 0x11fd1276 */
  push32(0x11fd8a15u); f_11fd1276();
  /* 11fd8a15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8a18 mov byte ptr [ecx + 0x3c], al */
  w8((uint32_t)(ECX + 0x3c), (AL));
  /* 11fd8a1b pop edi */
  EDI = (pop32());
  /* 11fd8a1c pop esi */
  ESI = (pop32());
  /* 11fd8a1d pop ebx */
  EBX = (pop32());
  /* 11fd8a1e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8a21 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8a23 call 0x11fd8e20 */
  push32(0x11fd8a28u); f_11fd8e20();
  /* 11fd8a28 mov esp, ebp */
  ESP = (EBP);
  /* 11fd8a2a pop ebp */
  EBP = (pop32());
  /* 11fd8a2b ret 4 */
  ESPCHK(0x11fd89c0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008a50 @ 0x11fd8a50 (113 bytes, 44 insns) */
void f_11fd8a50(void) {
  FTRACE(0x11fd8a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd8a51 mov ebp, esp */
  EBP = (ESP);
  /* 11fd8a53 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8a56 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd8a57 push esi */
  push32((uint32_t)(ESI));
  /* 11fd8a58 push edi */
  push32((uint32_t)(EDI));
  /* 11fd8a59 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd8a5a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11fd8a5d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11fd8a62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd8a67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd8a69 pop ecx */
  ECX = (pop32());
  /* 11fd8a6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd8a6d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd8a71 mov esi, esp */
  ESI = (ESP);
  /* 11fd8a73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8a76 push eax */
  push32((uint32_t)(EAX));
  /* 11fd8a77 call dword ptr [0x12011598] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011598))), 0x11fd8a7du);
  /* 11fd8a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8a80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8a82 call 0x11fd8e20 */
  push32(0x11fd8a87u); f_11fd8e20();
  /* 11fd8a87 mov esi, eax */
  ESI = (EAX);
  /* 11fd8a89 mov edi, esp */
  EDI = (ESP);
  /* 11fd8a8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8a8e push ecx */
  push32((uint32_t)(ECX));
  /* 11fd8a8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd8a92 push edx */
  push32((uint32_t)(EDX));
  /* 11fd8a93 call dword ptr [0x12011578] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011578))), 0x11fd8a99u);
  /* 11fd8a99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8a9c cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8a9e call 0x11fd8e20 */
  push32(0x11fd8aa3u); f_11fd8e20();
  /* 11fd8aa3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8aa5 jne 0x11fd8aab */
  if (!C.zf) goto L_11fd8aab;
  /* 11fd8aa7 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11fd8aab:;
  /* 11fd8aab mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fd8aae pop edi */
  EDI = (pop32());
  /* 11fd8aaf pop esi */
  ESI = (pop32());
  /* 11fd8ab0 pop ebx */
  EBX = (pop32());
  /* 11fd8ab1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8ab4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8ab6 call 0x11fd8e20 */
  push32(0x11fd8abbu); f_11fd8e20();
  /* 11fd8abb mov esp, ebp */
  ESP = (EBP);
  /* 11fd8abd pop ebp */
  EBP = (pop32());
  /* 11fd8abe ret 4 */
  ESPCHK(0x11fd8a50u, _esp0);
  ESP += 8; return;
}

/* FUN_10008ae0 @ 0x11fd8ae0 (47 bytes, 22 insns) */
void f_11fd8ae0(void) {
  FTRACE(0x11fd8ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd8ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd8ae3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8ae6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd8ae7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd8ae8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd8ae9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd8aea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd8aed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd8af2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd8af7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd8af9 pop ecx */
  ECX = (pop32());
  /* 11fd8afa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd8afd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8b00 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11fd8b03 mov byte ptr [eax + 0x3c], cl */
  w8((uint32_t)(EAX + 0x3c), (CL));
  /* 11fd8b06 pop edi */
  EDI = (pop32());
  /* 11fd8b07 pop esi */
  ESI = (pop32());
  /* 11fd8b08 pop ebx */
  EBX = (pop32());
  /* 11fd8b09 mov esp, ebp */
  ESP = (EBP);
  /* 11fd8b0b pop ebp */
  EBP = (pop32());
  /* 11fd8b0c ret 4 */
  ESPCHK(0x11fd8ae0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008b20 @ 0x11fd8b20 (47 bytes, 22 insns) */
void f_11fd8b20(void) {
  FTRACE(0x11fd8b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd8b21 mov ebp, esp */
  EBP = (ESP);
  /* 11fd8b23 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8b26 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd8b27 push esi */
  push32((uint32_t)(ESI));
  /* 11fd8b28 push edi */
  push32((uint32_t)(EDI));
  /* 11fd8b29 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd8b2a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd8b2d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd8b32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd8b37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd8b39 pop ecx */
  ECX = (pop32());
  /* 11fd8b3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd8b3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8b40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd8b43 mov dword ptr [eax + 0x3d], ecx */
  w32((uint32_t)(EAX + 0x3d), (ECX));
  /* 11fd8b46 pop edi */
  EDI = (pop32());
  /* 11fd8b47 pop esi */
  ESI = (pop32());
  /* 11fd8b48 pop ebx */
  EBX = (pop32());
  /* 11fd8b49 mov esp, ebp */
  ESP = (EBP);
  /* 11fd8b4b pop ebp */
  EBP = (pop32());
  /* 11fd8b4c ret 4 */
  ESPCHK(0x11fd8b20u, _esp0);
  ESP += 8; return;
}

/* FUN_10008b60 @ 0x11fd8b60 (127 bytes, 48 insns) */
void f_11fd8b60(void) {
  FTRACE(0x11fd8b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd8b61 mov ebp, esp */
  EBP = (ESP);
  /* 11fd8b63 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8b66 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd8b67 push esi */
  push32((uint32_t)(ESI));
  /* 11fd8b68 push edi */
  push32((uint32_t)(EDI));
  /* 11fd8b69 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd8b6a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd8b6d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd8b72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd8b77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd8b79 pop ecx */
  ECX = (pop32());
  /* 11fd8b7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd8b7d mov esi, esp */
  ESI = (ESP);
  /* 11fd8b7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd8b82 push eax */
  push32((uint32_t)(EAX));
  /* 11fd8b83 call dword ptr [0x12011598] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011598))), 0x11fd8b89u);
  /* 11fd8b89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8b8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8b8e call 0x11fd8e20 */
  push32(0x11fd8b93u); f_11fd8e20();
  /* 11fd8b93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd8b95 jle 0x11fd8bcc */
  if ((C.zf||C.sf!=C.of)) goto L_11fd8bcc;
  /* 11fd8b97 mov esi, esp */
  ESI = (ESP);
  /* 11fd8b99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd8b9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8b9e call 0x11fd11e0 */
  push32(0x11fd8ba3u); f_11fd11e0();
  /* 11fd8ba3 push eax */
  push32((uint32_t)(EAX));
  /* 11fd8ba4 call dword ptr [0x12011570] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011570))), 0x11fd8baau);
  /* 11fd8baa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8bad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8baf call 0x11fd8e20 */
  push32(0x11fd8bb4u); f_11fd8e20();
  /* 11fd8bb4 mov esi, esp */
  ESI = (ESP);
  /* 11fd8bb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd8bb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd8bba push 1 */
  push32((uint32_t)(0x1u));
  /* 11fd8bbc call dword ptr [0x120114bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120114bc))), 0x11fd8bc2u);
  /* 11fd8bc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8bc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8bc7 call 0x11fd8e20 */
  push32(0x11fd8bccu); f_11fd8e20();
L_11fd8bcc:;
  /* 11fd8bcc pop edi */
  EDI = (pop32());
  /* 11fd8bcd pop esi */
  ESI = (pop32());
  /* 11fd8bce pop ebx */
  EBX = (pop32());
  /* 11fd8bcf add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8bd2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8bd4 call 0x11fd8e20 */
  push32(0x11fd8bd9u); f_11fd8e20();
  /* 11fd8bd9 mov esp, ebp */
  ESP = (EBP);
  /* 11fd8bdb pop ebp */
  EBP = (pop32());
  /* 11fd8bdc ret 4 */
  ESPCHK(0x11fd8b60u, _esp0);
  ESP += 8; return;
}

/* FUN_10008c00 @ 0x11fd8c00 (70 bytes, 30 insns) */
void f_11fd8c00(void) {
  FTRACE(0x11fd8c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd8c01 mov ebp, esp */
  EBP = (ESP);
  /* 11fd8c03 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8c06 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd8c07 push esi */
  push32((uint32_t)(ESI));
  /* 11fd8c08 push edi */
  push32((uint32_t)(EDI));
  /* 11fd8c09 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd8c0a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd8c0d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd8c12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd8c17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd8c19 pop ecx */
  ECX = (pop32());
  /* 11fd8c1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd8c1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8c20 cmp dword ptr [eax + 0x3d], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x3d))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8c24 je 0x11fd8c35 */
  if (C.zf) goto L_11fd8c35;
  /* 11fd8c26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8c29 mov edx, dword ptr [ecx + 0x3d] */
  EDX = (r32((uint32_t)(ECX + 0x3d)));
  /* 11fd8c2c push edx */
  push32((uint32_t)(EDX));
  /* 11fd8c2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8c30 call 0x11fd1055 */
  push32(0x11fd8c35u); f_11fd1055();
L_11fd8c35:;
  /* 11fd8c35 pop edi */
  EDI = (pop32());
  /* 11fd8c36 pop esi */
  ESI = (pop32());
  /* 11fd8c37 pop ebx */
  EBX = (pop32());
  /* 11fd8c38 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8c3b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8c3d call 0x11fd8e20 */
  push32(0x11fd8c42u); f_11fd8e20();
  /* 11fd8c42 mov esp, ebp */
  ESP = (EBP);
  /* 11fd8c44 pop ebp */
  EBP = (pop32());
  /* 11fd8c45 ret  */
  ESPCHK(0x11fd8c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c60 @ 0x11fd8c60 (73 bytes, 30 insns) */
void f_11fd8c60(void) {
  FTRACE(0x11fd8c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8c60 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd8c61 mov ebp, esp */
  EBP = (ESP);
  /* 11fd8c63 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8c66 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd8c67 push esi */
  push32((uint32_t)(ESI));
  /* 11fd8c68 push edi */
  push32((uint32_t)(EDI));
  /* 11fd8c69 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd8c6a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11fd8c6d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11fd8c72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11fd8c77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd8c79 pop ecx */
  ECX = (pop32());
  /* 11fd8c7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd8c7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd8c80 call 0x11fd11e0 */
  push32(0x11fd8c85u); f_11fd11e0();
  /* 11fd8c85 mov esi, esp */
  ESI = (ESP);
  /* 11fd8c87 push eax */
  push32((uint32_t)(EAX));
  /* 11fd8c88 call dword ptr [0x1201158c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201158c))), 0x11fd8c8eu);
  /* 11fd8c8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8c91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8c93 call 0x11fd8e20 */
  push32(0x11fd8c98u); f_11fd8e20();
  /* 11fd8c98 pop edi */
  EDI = (pop32());
  /* 11fd8c99 pop esi */
  ESI = (pop32());
  /* 11fd8c9a pop ebx */
  EBX = (pop32());
  /* 11fd8c9b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8c9e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8ca0 call 0x11fd8e20 */
  push32(0x11fd8ca5u); f_11fd8e20();
  /* 11fd8ca5 mov esp, ebp */
  ESP = (EBP);
  /* 11fd8ca7 pop ebp */
  EBP = (pop32());
  /* 11fd8ca8 ret  */
  ESPCHK(0x11fd8c60u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11fd8e20 (56 bytes, 28 insns) */
void f_11fd8e20(void) {
  FTRACE(0x11fd8e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8e20 jne 0x11fd8e23 */
  if (!C.zf) goto L_11fd8e23;
  /* 11fd8e22 ret  */
  ESPCHK(0x11fd8e20u, _esp0);
  ESP += 4; return;
L_11fd8e23:;
  /* 11fd8e23 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd8e24 mov ebp, esp */
  EBP = (ESP);
  /* 11fd8e26 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8e29 push eax */
  push32((uint32_t)(EAX));
  /* 11fd8e2a push edx */
  push32((uint32_t)(EDX));
  /* 11fd8e2b push ebx */
  push32((uint32_t)(EBX));
  /* 11fd8e2c push esi */
  push32((uint32_t)(ESI));
  /* 11fd8e2d push edi */
  push32((uint32_t)(EDI));
  /* 11fd8e2e push 0x12009188 */
  push32((uint32_t)(0x12009188u));
  /* 11fd8e33 push 0x12009184 */
  push32((uint32_t)(0x12009184u));
  /* 11fd8e38 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11fd8e3a push 0x12009174 */
  push32((uint32_t)(0x12009174u));
  /* 11fd8e3f push 1 */
  push32((uint32_t)(0x1u));
  /* 11fd8e41 call 0x11fd9d80 */
  push32(0x11fd8e46u); f_11fd9d80();
  /* 11fd8e46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8e49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8e4c jne 0x11fd8e4f */
  if (!C.zf) goto L_11fd8e4f;
  /* 11fd8e4e int3  */
  x86_unimpl("int3 @ 0x11fd8e4e");
L_11fd8e4f:;
  /* 11fd8e4f pop edi */
  EDI = (pop32());
  /* 11fd8e50 pop esi */
  ESI = (pop32());
  /* 11fd8e51 pop ebx */
  EBX = (pop32());
  /* 11fd8e52 pop edx */
  EDX = (pop32());
  /* 11fd8e53 pop eax */
  EAX = (pop32());
  /* 11fd8e54 mov esp, ebp */
  ESP = (EBP);
  /* 11fd8e56 pop ebp */
  EBP = (pop32());
  /* 11fd8e57 ret  */
  ESPCHK(0x11fd8e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e60 @ 0x11fd8e60 (20 bytes, 6 insns) */
void f_11fd8e60(void) {
  FTRACE(0x11fd8e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8e60 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8e63 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11fd8e66 call 0x11fda678 */
  push32(0x11fd8e6bu); f_11fda678();
  /* 11fd8e6b call 0x11fd8e7d */
  push32(0x11fd8e70u); f_11fd8e7d();
  /* 11fd8e70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8e73 ret  */
  ESPCHK(0x11fd8e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e74 @ 0x11fd8e74 (9 bytes, 2 insns) */
void f_11fd8e74(void) {
  FTRACE(0x11fd8e74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8e74 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11fd8e78 call 0x11fda635 */
  push32(0x11fd8e7du); f_11fda635();
}

/* FUN_10008e7d @ 0x11fd8e7d (145 bytes, 43 insns) */
void f_11fd8e7d(void) {
  FTRACE(0x11fd8e7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8e7d push edx */
  push32((uint32_t)(EDX));
  /* 11fd8e7e wait  */
  /* wait (no observable integer/reg state) */
  /* 11fd8e7f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11fd8e82 je 0x11fd8ed4 */
  if (C.zf) goto L_11fd8ed4;
  /* 11fd8e84 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11fd8e8a je 0x11fd8e92 */
  if (C.zf) goto L_11fd8e92;
  /* 11fd8e8c fldcw word ptr [0x120094e8] */
  C.fcw = r16((uint32_t)(0x120094e8));
L_11fd8e92:;
  /* 11fd8e92 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11fd8e94 wait  */
  /* wait (no observable integer/reg state) */
  /* 11fd8e95 fnstsw ax */
  AX = fpu_status();
  /* 11fd8e97 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11fd8e98 jp 0x11fd8eb7 */
  if (C.pf) goto L_11fd8eb7;
L_11fd8e9a:;
  /* 11fd8e9a cmp dword ptr [0x1200eef0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200eef0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8ea1 jne 0x11fda68e */
  if (!C.zf) { jmp_ind(0x11fda68eu); return; }
  /* 11fd8ea7 mov edx, 0x1e */
  EDX = (0x1eu);
  /* 11fd8eac lea ecx, [0x1200cd70] */
  ECX = ((uint32_t)(0x1200cd70));
  /* 11fd8eb2 jmp 0x11fda69b */
  f_11fda69b(); return;
L_11fd8eb7:;
  /* 11fd8eb7 fld xword ptr [0x120094ea] */
  fpu_push(rf80((uint32_t)(0x120094ea)));
  /* 11fd8ebd fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_11fd8ebf:;
  /* 11fd8ebf fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 11fd8ec1 wait  */
  /* wait (no observable integer/reg state) */
  /* 11fd8ec2 fnstsw ax */
  AX = fpu_status();
  /* 11fd8ec4 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11fd8ec5 jp 0x11fd8ebf */
  if (C.pf) goto L_11fd8ebf;
  /* 11fd8ec7 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 11fd8ec9 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11fd8ecb jmp 0x11fd8e9a */
  goto L_11fd8e9a;
L_11fd8ecd:;
  /* 11fd8ecd call 0x11fda61c */
  push32(0x11fd8ed2u); f_11fda61c();
  /* 11fd8ed2 jmp 0x11fd8eef */
  goto L_11fd8eef;
L_11fd8ed4:;
  /* 11fd8ed4 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11fd8ed9 jne 0x11fd8ecd */
  if (!C.zf) goto L_11fd8ecd;
  /* 11fd8edb cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8ee0 jne 0x11fd8ecd */
  if (!C.zf) goto L_11fd8ecd;
  /* 11fd8ee2 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11fd8ee4 fld xword ptr [0x1200cdf0] */
  fpu_push(rf80((uint32_t)(0x1200cdf0)));
  /* 11fd8eea mov eax, 1 */
  EAX = (0x1u);
L_11fd8eef:;
  /* 11fd8eef cmp dword ptr [0x1200eef0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200eef0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8ef6 jne 0x11fda68e */
  if (!C.zf) { jmp_ind(0x11fda68eu); return; }
  /* 11fd8efc mov edx, 0x1e */
  EDX = (0x1eu);
  /* 11fd8f01 lea ecx, [0x1200cd70] */
  ECX = ((uint32_t)(0x1200cd70));
  /* 11fd8f07 call 0x11fda797 */
  push32(0x11fd8f0cu); f_11fda797();
  /* 11fd8f0c pop edx */
  EDX = (pop32());
  /* 11fd8f0d ret  */
  ESPCHK(0x11fd8e7du, _esp0);
  ESP += 4; return;
}

/* FUN_10008f10 @ 0x11fd8f10 (20 bytes, 6 insns) */
void f_11fd8f10(void) {
  FTRACE(0x11fd8f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8f10 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8f13 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11fd8f16 call 0x11fda678 */
  push32(0x11fd8f1bu); f_11fda678();
  /* 11fd8f1b call 0x11fd8f2d */
  push32(0x11fd8f20u); f_11fd8f2d();
  /* 11fd8f20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8f23 ret  */
  ESPCHK(0x11fd8f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f24 @ 0x11fd8f24 (9 bytes, 2 insns) */
void f_11fd8f24(void) {
  FTRACE(0x11fd8f24u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8f24 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11fd8f28 call 0x11fda635 */
  push32(0x11fd8f2du); f_11fda635();
}

/* FUN_10008f2d @ 0x11fd8f2d (145 bytes, 43 insns) */
void f_11fd8f2d(void) {
  FTRACE(0x11fd8f2du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8f2d push edx */
  push32((uint32_t)(EDX));
  /* 11fd8f2e wait  */
  /* wait (no observable integer/reg state) */
  /* 11fd8f2f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11fd8f32 je 0x11fd8f84 */
  if (C.zf) goto L_11fd8f84;
  /* 11fd8f34 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11fd8f3a je 0x11fd8f42 */
  if (C.zf) goto L_11fd8f42;
  /* 11fd8f3c fldcw word ptr [0x120094e8] */
  C.fcw = r16((uint32_t)(0x120094e8));
L_11fd8f42:;
  /* 11fd8f42 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 11fd8f44 wait  */
  /* wait (no observable integer/reg state) */
  /* 11fd8f45 fnstsw ax */
  AX = fpu_status();
  /* 11fd8f47 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11fd8f48 jp 0x11fd8f67 */
  if (C.pf) goto L_11fd8f67;
L_11fd8f4a:;
  /* 11fd8f4a cmp dword ptr [0x1200eef0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200eef0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8f51 jne 0x11fda68e */
  if (!C.zf) { jmp_ind(0x11fda68eu); return; }
  /* 11fd8f57 mov edx, 0x12 */
  EDX = (0x12u);
  /* 11fd8f5c lea ecx, [0x1200cd80] */
  ECX = ((uint32_t)(0x1200cd80));
  /* 11fd8f62 jmp 0x11fda69b */
  f_11fda69b(); return;
L_11fd8f67:;
  /* 11fd8f67 fld xword ptr [0x120094ea] */
  fpu_push(rf80((uint32_t)(0x120094ea)));
  /* 11fd8f6d fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_11fd8f6f:;
  /* 11fd8f6f fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 11fd8f71 wait  */
  /* wait (no observable integer/reg state) */
  /* 11fd8f72 fnstsw ax */
  AX = fpu_status();
  /* 11fd8f74 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11fd8f75 jp 0x11fd8f6f */
  if (C.pf) goto L_11fd8f6f;
  /* 11fd8f77 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 11fd8f79 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 11fd8f7b jmp 0x11fd8f4a */
  goto L_11fd8f4a;
L_11fd8f7d:;
  /* 11fd8f7d call 0x11fda61c */
  push32(0x11fd8f82u); f_11fda61c();
  /* 11fd8f82 jmp 0x11fd8f9f */
  goto L_11fd8f9f;
L_11fd8f84:;
  /* 11fd8f84 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11fd8f89 jne 0x11fd8f7d */
  if (!C.zf) goto L_11fd8f7d;
  /* 11fd8f8b cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8f90 jne 0x11fd8f7d */
  if (!C.zf) goto L_11fd8f7d;
  /* 11fd8f92 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11fd8f94 fld xword ptr [0x1200cdf0] */
  fpu_push(rf80((uint32_t)(0x1200cdf0)));
  /* 11fd8f9a mov eax, 1 */
  EAX = (0x1u);
L_11fd8f9f:;
  /* 11fd8f9f cmp dword ptr [0x1200eef0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200eef0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8fa6 jne 0x11fda68e */
  if (!C.zf) { jmp_ind(0x11fda68eu); return; }
  /* 11fd8fac mov edx, 0x12 */
  EDX = (0x12u);
  /* 11fd8fb1 lea ecx, [0x1200cd80] */
  ECX = ((uint32_t)(0x1200cd80));
  /* 11fd8fb7 call 0x11fda797 */
  push32(0x11fd8fbcu); f_11fda797();
  /* 11fd8fbc pop edx */
  EDX = (pop32());
  /* 11fd8fbd ret  */
  ESPCHK(0x11fd8f2du, _esp0);
  ESP += 4; return;
}

/* FUN_10008fc0 @ 0x11fd8fc0 (20 bytes, 6 insns) */
void f_11fd8fc0(void) {
  FTRACE(0x11fd8fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8fc0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd8fc3 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11fd8fc6 call 0x11fda678 */
  push32(0x11fd8fcbu); f_11fda678();
  /* 11fd8fcb call 0x11fd8fdd */
  push32(0x11fd8fd0u); f_11fd8fdd();
  /* 11fd8fd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd8fd3 ret  */
  ESPCHK(0x11fd8fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fd4 @ 0x11fd8fd4 (9 bytes, 2 insns) */
void f_11fd8fd4(void) {
  FTRACE(0x11fd8fd4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8fd4 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11fd8fd8 call 0x11fda635 */
  push32(0x11fd8fddu); f_11fda635();
}

/* FUN_10008fdd @ 0x11fd8fdd (138 bytes, 40 insns) */
void f_11fd8fdd(void) {
  FTRACE(0x11fd8fddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd8fdd push edx */
  push32((uint32_t)(EDX));
  /* 11fd8fde wait  */
  /* wait (no observable integer/reg state) */
  /* 11fd8fdf fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11fd8fe2 je 0x11fd901a */
  if (C.zf) goto L_11fd901a;
  /* 11fd8fe4 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11fd8fea je 0x11fd8ff2 */
  if (C.zf) goto L_11fd8ff2;
  /* 11fd8fec fldcw word ptr [0x120094e8] */
  C.fcw = r16((uint32_t)(0x120094e8));
L_11fd8ff2:;
  /* 11fd8ff2 fld1  */
  fpu_push(1.0);
  /* 11fd8ff4 fpatan  */
  { double _r=__builtin_atan2(FPU_ST(1), FPU_ST(0)); (void)fpu_pop(); FPU_ST(0)=_r; }
L_11fd8ff6:;
  /* 11fd8ff6 cmp dword ptr [0x1200eef0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200eef0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd8ffd jne 0x11fda68e */
  if (!C.zf) { jmp_ind(0x11fda68eu); return; }
  /* 11fd9003 mov edx, 0xf */
  EDX = (0xfu);
  /* 11fd9008 lea ecx, [0x1200cd90] */
  ECX = ((uint32_t)(0x1200cd90));
  /* 11fd900e jmp 0x11fda69b */
  f_11fda69b(); return;
L_11fd9013:;
  /* 11fd9013 call 0x11fda61c */
  push32(0x11fd9018u); f_11fda61c();
  /* 11fd9018 jmp 0x11fd9040 */
  goto L_11fd9040;
L_11fd901a:;
  /* 11fd901a test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11fd901f jne 0x11fd9013 */
  if (!C.zf) goto L_11fd9013;
  /* 11fd9021 cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9026 jne 0x11fd9013 */
  if (!C.zf) goto L_11fd9013;
  /* 11fd9028 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11fd902a fld xword ptr [0x1200cdfa] */
  fpu_push(rf80((uint32_t)(0x1200cdfa)));
  /* 11fd9030 test eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); fl_logic(_r,32); }
  /* 11fd9035 je 0x11fd8ff6 */
  if (C.zf) goto L_11fd8ff6;
  /* 11fd9037 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11fd9039 jmp 0x11fd8ff6 */
  goto L_11fd8ff6;
  /* 11fd903b mov eax, 1 */
  EAX = (0x1u);
L_11fd9040:;
  /* 11fd9040 cmp dword ptr [0x1200eef0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200eef0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9047 jne 0x11fda68e */
  if (!C.zf) { jmp_ind(0x11fda68eu); return; }
  /* 11fd904d mov edx, 0xf */
  EDX = (0xfu);
  /* 11fd9052 lea ecx, [0x1200cd90] */
  ECX = ((uint32_t)(0x1200cd90));
  /* 11fd9058 call 0x11fda797 */
  push32(0x11fd905du); f_11fda797();
  /* 11fd905d pop edx */
  EDX = (pop32());
  /* 11fd905e ret  */
  ESPCHK(0x11fd8fddu, _esp0);
  ESP += 4; return;
  /* 11fd905f int3  */
  x86_unimpl("int3 @ 0x11fd905f");
  /* 11fd9060 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9061 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9063 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd9064 push esi */
  push32((uint32_t)(ESI));
  /* 11fd9065 push edi */
  push32((uint32_t)(EDI));
}

/* FUN_10009060 @ 0x11fd9060 (33 bytes, 15 insns) */
void f_11fd9060(void) {
  FTRACE(0x11fd9060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9060 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9061 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9063 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd9064 push esi */
  push32((uint32_t)(ESI));
  /* 11fd9065 push edi */
  push32((uint32_t)(EDI));
  /* 11fd9066 call 0x11fd90a0 */
  push32(0x11fd906bu); f_11fd90a0();
  /* 11fd906b call 0x11fda860 */
  push32(0x11fd9070u); f_11fda860();
  /* 11fd9070 mov dword ptr [0x1200eef4], eax */
  w32((uint32_t)(0x1200eef4), (EAX));
  /* 11fd9075 call 0x11fda7e0 */
  push32(0x11fd907au); f_11fda7e0();
  /* 11fd907a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11fd907c pop edi */
  EDI = (pop32());
  /* 11fd907d pop esi */
  ESI = (pop32());
  /* 11fd907e pop ebx */
  EBX = (pop32());
  /* 11fd907f pop ebp */
  EBP = (pop32());
  /* 11fd9080 ret  */
  ESPCHK(0x11fd9060u, _esp0);
  ESP += 4; return;
}

/* FUN_10009090 @ 0x11fd9090 (5 bytes, 4 insns) */
void f_11fd9090(void) {
  FTRACE(0x11fd9090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9090 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9091 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9093 pop ebp */
  EBP = (pop32());
  /* 11fd9094 ret  */
  ESPCHK(0x11fd9090u, _esp0);
  ESP += 4; return;
}

/* FUN_100090a0 @ 0x11fd90a0 (65 bytes, 10 insns) */
void f_11fd90a0(void) {
  FTRACE(0x11fd90a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd90a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd90a1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd90a3 mov dword ptr [0x1200ce20], 0x11fdaf50 */
  w32((uint32_t)(0x1200ce20), (0x11fdaf50u));
  /* 11fd90ad mov dword ptr [0x1200ce24], 0x11fda960 */
  w32((uint32_t)(0x1200ce24), (0x11fda960u));
  /* 11fd90b7 mov dword ptr [0x1200ce28], 0x11fdaa70 */
  w32((uint32_t)(0x1200ce28), (0x11fdaa70u));
  /* 11fd90c1 mov dword ptr [0x1200ce2c], 0x11fda8b0 */
  w32((uint32_t)(0x1200ce2c), (0x11fda8b0u));
  /* 11fd90cb mov dword ptr [0x1200ce30], 0x11fdaa40 */
  w32((uint32_t)(0x1200ce30), (0x11fdaa40u));
  /* 11fd90d5 mov dword ptr [0x1200ce34], 0x11fdaf50 */
  w32((uint32_t)(0x1200ce34), (0x11fdaf50u));
  /* 11fd90df pop ebp */
  EBP = (pop32());
  /* 11fd90e0 ret  */
  ESPCHK(0x11fd90a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100090f0 @ 0x11fd90f0 (28 bytes, 11 insns) */
void f_11fd90f0(void) {
  FTRACE(0x11fd90f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd90f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd90f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd90f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd90f4 mov eax, dword ptr [0x1200eef0] */
  EAX = (r32((uint32_t)(0x1200eef0)));
  /* 11fd90f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fd90fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd90ff mov dword ptr [0x1200eef0], ecx */
  w32((uint32_t)(0x1200eef0), (ECX));
  /* 11fd9105 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd9108 mov esp, ebp */
  ESP = (EBP);
  /* 11fd910a pop ebp */
  EBP = (pop32());
  /* 11fd910b ret  */
  ESPCHK(0x11fd90f0u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x11fd910c (39 bytes, 16 insns) */
void f_11fd910c(void) {
  FTRACE(0x11fd910cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd910c push ebp */
  push32((uint32_t)(EBP));
  /* 11fd910d mov ebp, esp */
  EBP = (ESP);
  /* 11fd910f add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9112 wait  */
  /* wait (no observable integer/reg state) */
  /* 11fd9113 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 11fd9116 wait  */
  /* wait (no observable integer/reg state) */
  /* 11fd9117 mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 11fd911b or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11fd911e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11fd9122 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11fd9125 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 11fd9128 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 11fd912b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fd912e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fd9131 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fd9132 ret  */
  ESPCHK(0x11fd910cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009140 @ 0x11fd9140 (161 bytes, 60 insns) */
void f_11fd9140(void) {
  FTRACE(0x11fd9140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9140 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9141 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9143 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9144 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd9145 push esi */
  push32((uint32_t)(ESI));
  /* 11fd9146 push edi */
  push32((uint32_t)(EDI));
  /* 11fd9147 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd914b jne 0x11fd9152 */
  if (!C.zf) goto L_11fd9152;
  /* 11fd914d jmp 0x11fd91da */
  goto L_11fd91da;
L_11fd9152:;
  /* 11fd9152 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fd9154 call 0x11fdb0c0 */
  push32(0x11fd9159u); f_11fdb0c0();
  /* 11fd9159 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd915c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd915f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd9162 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fd9165:;
  /* 11fd9165 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd9168 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11fd916b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fd9171 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9174 je 0x11fd91b7 */
  if (C.zf) goto L_11fd91b7;
  /* 11fd9176 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd9179 cmp dword ptr [eax + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd917d je 0x11fd91b7 */
  if (C.zf) goto L_11fd91b7;
  /* 11fd917f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd9182 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11fd9185 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fd918b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd918e je 0x11fd91b7 */
  if (C.zf) goto L_11fd91b7;
  /* 11fd9190 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd9193 cmp dword ptr [eax + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9197 je 0x11fd91b7 */
  if (C.zf) goto L_11fd91b7;
  /* 11fd9199 push 0x12009270 */
  push32((uint32_t)(0x12009270u));
  /* 11fd919e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd91a0 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11fd91a2 push 0x12009264 */
  push32((uint32_t)(0x12009264u));
  /* 11fd91a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fd91a9 call 0x11fd9d80 */
  push32(0x11fd91aeu); f_11fd9d80();
  /* 11fd91ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd91b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd91b4 jne 0x11fd91b7 */
  if (!C.zf) goto L_11fd91b7;
  /* 11fd91b6 int3  */
  x86_unimpl("int3 @ 0x11fd91b6");
L_11fd91b7:;
  /* 11fd91b7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fd91b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fd91bb jne 0x11fd9165 */
  if (!C.zf) goto L_11fd9165;
  /* 11fd91bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd91c0 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fd91c3 push eax */
  push32((uint32_t)(EAX));
  /* 11fd91c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd91c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd91c8 call 0x11fdbc50 */
  push32(0x11fd91cdu); f_11fdbc50();
  /* 11fd91cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd91d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fd91d2 call 0x11fdb160 */
  push32(0x11fd91d7u); f_11fdb160();
  /* 11fd91d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fd91da:;
  /* 11fd91da pop edi */
  EDI = (pop32());
  /* 11fd91db pop esi */
  ESI = (pop32());
  /* 11fd91dc pop ebx */
  EBX = (pop32());
  /* 11fd91dd mov esp, ebp */
  ESP = (EBP);
  /* 11fd91df pop ebp */
  EBP = (pop32());
  /* 11fd91e0 ret  */
  ESPCHK(0x11fd9140u, _esp0);
  ESP += 4; return;
}

/* FUN_100091f0 @ 0x11fd91f0 (19 bytes, 9 insns) */
void f_11fd91f0(void) {
  FTRACE(0x11fd91f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd91f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd91f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd91f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fd91f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd91f8 push eax */
  push32((uint32_t)(EAX));
  /* 11fd91f9 call 0x11fdb1f0 */
  push32(0x11fd91feu); f_11fdb1f0();
  /* 11fd91fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9201 pop ebp */
  EBP = (pop32());
  /* 11fd9202 ret  */
  ESPCHK(0x11fd91f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009210 @ 0x11fd9210 (45 bytes, 17 insns) */
void f_11fd9210(void) {
  FTRACE(0x11fd9210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9210 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9211 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9213 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9214 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd9215 push esi */
  push32((uint32_t)(ESI));
  /* 11fd9216 push edi */
  push32((uint32_t)(EDI));
  /* 11fd9217 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd921a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd921d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fd9220 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11fd9227 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11fd9229 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11fd922f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9232 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9235 mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 11fd9238 mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd923b jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* _CallMemberFunction0 @ 0x11fd9250 (7 bytes, 4 insns) */
void f_11fd9250(void) {
  FTRACE(0x11fd9250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9250 pop eax */
  EAX = (pop32());
  /* 11fd9251 pop ecx */
  ECX = (pop32());
  /* 11fd9252 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11fd9255 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

