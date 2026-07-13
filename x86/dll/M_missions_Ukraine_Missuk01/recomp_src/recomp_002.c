#include "recomp.h"

/* FUN_1001d710 @ 0x124ed710 (289 bytes, 97 insns) */
void f_124ed710(void) {
  FTRACE(0x124ed710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ed710 push ebp */
  push32((uint32_t)(EBP));
  /* 124ed711 mov ebp, esp */
  EBP = (ESP);
  /* 124ed713 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ed716 push esi */
  push32((uint32_t)(ESI));
  /* 124ed717 mov eax, dword ptr [0x1250bc98] */
  EAX = (r32((uint32_t)(0x1250bc98)));
  /* 124ed71c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124ed71f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124ed726 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124ed72d jmp 0x124ed738 */
  goto L_124ed738;
L_124ed72f:;
  /* 124ed72f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed732 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed735 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_124ed738:;
  /* 124ed738 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed73c jae 0x124ed771 */
  if (!C.cf) goto L_124ed771;
  /* 124ed73e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed741 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed744 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 124ed747 push ecx */
  push32((uint32_t)(ECX));
  /* 124ed748 call 0x124e37f0 */
  push32(0x124ed74du); f_124e37f0();
  /* 124ed74d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed750 mov esi, eax */
  ESI = (EAX);
  /* 124ed752 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed755 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed758 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 124ed75c push ecx */
  push32((uint32_t)(ECX));
  /* 124ed75d call 0x124e37f0 */
  push32(0x124ed762u); f_124e37f0();
  /* 124ed762 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed765 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed768 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 124ed76c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124ed76f jmp 0x124ed72f */
  goto L_124ed72f;
L_124ed771:;
  /* 124ed771 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ed774 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed777 push eax */
  push32((uint32_t)(EAX));
  /* 124ed778 call 0x124e09a0 */
  push32(0x124ed77du); f_124e09a0();
  /* 124ed77d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed780 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ed783 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed787 je 0x124ed829 */
  if (C.zf) goto L_124ed829;
  /* 124ed78d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ed790 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124ed793 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124ed79a jmp 0x124ed7a5 */
  goto L_124ed7a5;
L_124ed79c:;
  /* 124ed79c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed79f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed7a2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_124ed7a5:;
  /* 124ed7a5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed7a9 jae 0x124ed81a */
  if (!C.cf) goto L_124ed81a;
  /* 124ed7ab mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed7ae mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 124ed7b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed7b4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed7b7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124ed7ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed7bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed7c0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 124ed7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 124ed7c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed7c7 push edx */
  push32((uint32_t)(EDX));
  /* 124ed7c8 call 0x124e3970 */
  push32(0x124ed7cdu); f_124e3970();
  /* 124ed7cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed7d0 push eax */
  push32((uint32_t)(EAX));
  /* 124ed7d1 call 0x124e37f0 */
  push32(0x124ed7d6u); f_124e37f0();
  /* 124ed7d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed7d9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed7dc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed7de mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124ed7e1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed7e4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 124ed7e7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed7ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed7ed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124ed7f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed7f3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed7f6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 124ed7fa push eax */
  push32((uint32_t)(EAX));
  /* 124ed7fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed7fe push ecx */
  push32((uint32_t)(ECX));
  /* 124ed7ff call 0x124e3970 */
  push32(0x124ed804u); f_124e3970();
  /* 124ed804 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed807 push eax */
  push32((uint32_t)(EAX));
  /* 124ed808 call 0x124e37f0 */
  push32(0x124ed80du); f_124e37f0();
  /* 124ed80d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed810 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed813 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed815 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124ed818 jmp 0x124ed79c */
  goto L_124ed79c;
L_124ed81a:;
  /* 124ed81a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed81d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 124ed820 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed823 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed826 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_124ed829:;
  /* 124ed829 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ed82c pop esi */
  ESI = (pop32());
  /* 124ed82d mov esp, ebp */
  ESP = (EBP);
  /* 124ed82f pop ebp */
  EBP = (pop32());
  /* 124ed830 ret  */
  ESPCHK(0x124ed710u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d840 @ 0x124ed840 (291 bytes, 97 insns) */
void f_124ed840(void) {
  FTRACE(0x124ed840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ed840 push ebp */
  push32((uint32_t)(EBP));
  /* 124ed841 mov ebp, esp */
  EBP = (ESP);
  /* 124ed843 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ed846 push esi */
  push32((uint32_t)(ESI));
  /* 124ed847 mov eax, dword ptr [0x1250bc98] */
  EAX = (r32((uint32_t)(0x1250bc98)));
  /* 124ed84c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124ed84f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124ed856 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124ed85d jmp 0x124ed868 */
  goto L_124ed868;
L_124ed85f:;
  /* 124ed85f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed862 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed865 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_124ed868:;
  /* 124ed868 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed86c jae 0x124ed8a2 */
  if (!C.cf) goto L_124ed8a2;
  /* 124ed86e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed871 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed874 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 124ed878 push ecx */
  push32((uint32_t)(ECX));
  /* 124ed879 call 0x124e37f0 */
  push32(0x124ed87eu); f_124e37f0();
  /* 124ed87e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed881 mov esi, eax */
  ESI = (EAX);
  /* 124ed883 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed886 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed889 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 124ed88d push ecx */
  push32((uint32_t)(ECX));
  /* 124ed88e call 0x124e37f0 */
  push32(0x124ed893u); f_124e37f0();
  /* 124ed893 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed896 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed899 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 124ed89d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124ed8a0 jmp 0x124ed85f */
  goto L_124ed85f;
L_124ed8a2:;
  /* 124ed8a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ed8a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed8a8 push eax */
  push32((uint32_t)(EAX));
  /* 124ed8a9 call 0x124e09a0 */
  push32(0x124ed8aeu); f_124e09a0();
  /* 124ed8ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed8b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ed8b4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed8b8 je 0x124ed95b */
  if (C.zf) goto L_124ed95b;
  /* 124ed8be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ed8c1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124ed8c4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124ed8cb jmp 0x124ed8d6 */
  goto L_124ed8d6;
L_124ed8cd:;
  /* 124ed8cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed8d0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed8d3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_124ed8d6:;
  /* 124ed8d6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed8da jae 0x124ed94c */
  if (!C.cf) goto L_124ed94c;
  /* 124ed8dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed8df mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 124ed8e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed8e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed8e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124ed8eb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed8ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed8f1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 124ed8f5 push ecx */
  push32((uint32_t)(ECX));
  /* 124ed8f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed8f9 push edx */
  push32((uint32_t)(EDX));
  /* 124ed8fa call 0x124e3970 */
  push32(0x124ed8ffu); f_124e3970();
  /* 124ed8ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed902 push eax */
  push32((uint32_t)(EAX));
  /* 124ed903 call 0x124e37f0 */
  push32(0x124ed908u); f_124e37f0();
  /* 124ed908 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed90b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed90e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed910 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124ed913 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed916 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 124ed919 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed91c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed91f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124ed922 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed925 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed928 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 124ed92c push eax */
  push32((uint32_t)(EAX));
  /* 124ed92d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed930 push ecx */
  push32((uint32_t)(ECX));
  /* 124ed931 call 0x124e3970 */
  push32(0x124ed936u); f_124e3970();
  /* 124ed936 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed939 push eax */
  push32((uint32_t)(EAX));
  /* 124ed93a call 0x124e37f0 */
  push32(0x124ed93fu); f_124e37f0();
  /* 124ed93f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed942 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed945 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed947 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124ed94a jmp 0x124ed8cd */
  goto L_124ed8cd;
L_124ed94c:;
  /* 124ed94c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed94f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 124ed952 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ed955 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed958 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_124ed95b:;
  /* 124ed95b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ed95e pop esi */
  ESI = (pop32());
  /* 124ed95f mov esp, ebp */
  ESP = (EBP);
  /* 124ed961 pop ebp */
  EBP = (pop32());
  /* 124ed962 ret  */
  ESPCHK(0x124ed840u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d970 @ 0x124ed970 (878 bytes, 273 insns) */
void f_124ed970(void) {
  FTRACE(0x124ed970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ed970 push ebp */
  push32((uint32_t)(EBP));
  /* 124ed971 mov ebp, esp */
  EBP = (ESP);
  /* 124ed973 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ed976 push esi */
  push32((uint32_t)(ESI));
  /* 124ed977 mov eax, dword ptr [0x1250bc98] */
  EAX = (r32((uint32_t)(0x1250bc98)));
  /* 124ed97c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124ed97f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124ed986 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124ed98d jmp 0x124ed998 */
  goto L_124ed998;
L_124ed98f:;
  /* 124ed98f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed992 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed995 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_124ed998:;
  /* 124ed998 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed99c jae 0x124ed9d1 */
  if (!C.cf) goto L_124ed9d1;
  /* 124ed99e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed9a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed9a4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 124ed9a7 push ecx */
  push32((uint32_t)(ECX));
  /* 124ed9a8 call 0x124e37f0 */
  push32(0x124ed9adu); f_124e37f0();
  /* 124ed9ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed9b0 mov esi, eax */
  ESI = (EAX);
  /* 124ed9b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed9b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed9b8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 124ed9bc push ecx */
  push32((uint32_t)(ECX));
  /* 124ed9bd call 0x124e37f0 */
  push32(0x124ed9c2u); f_124e37f0();
  /* 124ed9c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed9c5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed9c8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 124ed9cc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124ed9cf jmp 0x124ed98f */
  goto L_124ed98f;
L_124ed9d1:;
  /* 124ed9d1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124ed9d8 jmp 0x124ed9e3 */
  goto L_124ed9e3;
L_124ed9da:;
  /* 124ed9da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed9dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed9e0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_124ed9e3:;
  /* 124ed9e3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed9e7 jae 0x124eda1d */
  if (!C.cf) goto L_124eda1d;
  /* 124ed9e9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed9ec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed9ef mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 124ed9f3 push eax */
  push32((uint32_t)(EAX));
  /* 124ed9f4 call 0x124e37f0 */
  push32(0x124ed9f9u); f_124e37f0();
  /* 124ed9f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed9fc mov esi, eax */
  ESI = (EAX);
  /* 124ed9fe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124eda01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eda04 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 124eda08 push eax */
  push32((uint32_t)(EAX));
  /* 124eda09 call 0x124e37f0 */
  push32(0x124eda0eu); f_124e37f0();
  /* 124eda0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eda11 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eda14 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 124eda18 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124eda1b jmp 0x124ed9da */
  goto L_124ed9da;
L_124eda1d:;
  /* 124eda1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eda20 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 124eda26 push eax */
  push32((uint32_t)(EAX));
  /* 124eda27 call 0x124e37f0 */
  push32(0x124eda2cu); f_124e37f0();
  /* 124eda2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eda2f mov esi, eax */
  ESI = (EAX);
  /* 124eda31 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eda34 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 124eda3a push edx */
  push32((uint32_t)(EDX));
  /* 124eda3b call 0x124e37f0 */
  push32(0x124eda40u); f_124e37f0();
  /* 124eda40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eda43 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eda46 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 124eda4a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124eda4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eda50 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 124eda56 push edx */
  push32((uint32_t)(EDX));
  /* 124eda57 call 0x124e37f0 */
  push32(0x124eda5cu); f_124e37f0();
  /* 124eda5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eda5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124eda62 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 124eda66 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124eda69 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eda6c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 124eda72 push ecx */
  push32((uint32_t)(ECX));
  /* 124eda73 call 0x124e37f0 */
  push32(0x124eda78u); f_124e37f0();
  /* 124eda78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eda7b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124eda7e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 124eda82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124eda85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eda88 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 124eda8e push edx */
  push32((uint32_t)(EDX));
  /* 124eda8f call 0x124e37f0 */
  push32(0x124eda94u); f_124e37f0();
  /* 124eda94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eda97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124eda9a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 124eda9e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124edaa1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124edaa4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124edaa9 push eax */
  push32((uint32_t)(EAX));
  /* 124edaaa call 0x124e09a0 */
  push32(0x124edaafu); f_124e09a0();
  /* 124edaaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edab2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124edab5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124edab9 je 0x124edcd6 */
  if (C.zf) goto L_124edcd6;
  /* 124edabf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124edac2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 124edac5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124edac8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124edace mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124edad1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 124edad6 mov eax, dword ptr [0x1250bc98] */
  EAX = (r32((uint32_t)(0x1250bc98)));
  /* 124edadb push eax */
  push32((uint32_t)(EAX));
  /* 124edadc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124edadf push ecx */
  push32((uint32_t)(ECX));
  /* 124edae0 call 0x124e72a0 */
  push32(0x124edae5u); f_124e72a0();
  /* 124edae5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edae8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124edaef jmp 0x124edafa */
  goto L_124edafa;
L_124edaf1:;
  /* 124edaf1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124edaf4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124edaf7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_124edafa:;
  /* 124edafa cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124edafe jae 0x124edb6e */
  if (!C.cf) goto L_124edb6e;
  /* 124edb00 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124edb03 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124edb06 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edb09 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 124edb0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124edb0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124edb12 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 124edb15 push edx */
  push32((uint32_t)(EDX));
  /* 124edb16 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edb19 push eax */
  push32((uint32_t)(EAX));
  /* 124edb1a call 0x124e3970 */
  push32(0x124edb1fu); f_124e3970();
  /* 124edb1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edb22 push eax */
  push32((uint32_t)(EAX));
  /* 124edb23 call 0x124e37f0 */
  push32(0x124edb28u); f_124e37f0();
  /* 124edb28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edb2b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edb2e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 124edb32 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124edb35 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124edb38 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124edb3b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edb3e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 124edb42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124edb45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124edb48 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 124edb4c push edx */
  push32((uint32_t)(EDX));
  /* 124edb4d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edb50 push eax */
  push32((uint32_t)(EAX));
  /* 124edb51 call 0x124e3970 */
  push32(0x124edb56u); f_124e3970();
  /* 124edb56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edb59 push eax */
  push32((uint32_t)(EAX));
  /* 124edb5a call 0x124e37f0 */
  push32(0x124edb5fu); f_124e37f0();
  /* 124edb5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edb62 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edb65 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 124edb69 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124edb6c jmp 0x124edaf1 */
  goto L_124edaf1;
L_124edb6e:;
  /* 124edb6e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124edb75 jmp 0x124edb80 */
  goto L_124edb80;
L_124edb77:;
  /* 124edb77 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124edb7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124edb7d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_124edb80:;
  /* 124edb80 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124edb84 jae 0x124edbf6 */
  if (!C.cf) goto L_124edbf6;
  /* 124edb86 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124edb89 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124edb8c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edb8f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 124edb93 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124edb96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124edb99 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 124edb9d push eax */
  push32((uint32_t)(EAX));
  /* 124edb9e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edba1 push ecx */
  push32((uint32_t)(ECX));
  /* 124edba2 call 0x124e3970 */
  push32(0x124edba7u); f_124e3970();
  /* 124edba7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edbaa push eax */
  push32((uint32_t)(EAX));
  /* 124edbab call 0x124e37f0 */
  push32(0x124edbb0u); f_124e37f0();
  /* 124edbb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edbb3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edbb6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 124edbba mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124edbbd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124edbc0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124edbc3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edbc6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 124edbca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124edbcd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124edbd0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 124edbd4 push eax */
  push32((uint32_t)(EAX));
  /* 124edbd5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edbd8 push ecx */
  push32((uint32_t)(ECX));
  /* 124edbd9 call 0x124e3970 */
  push32(0x124edbdeu); f_124e3970();
  /* 124edbde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edbe1 push eax */
  push32((uint32_t)(EAX));
  /* 124edbe2 call 0x124e37f0 */
  push32(0x124edbe7u); f_124e37f0();
  /* 124edbe7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edbea mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edbed lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 124edbf1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124edbf4 jmp 0x124edb77 */
  goto L_124edb77;
L_124edbf6:;
  /* 124edbf6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124edbf9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edbfc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 124edc02 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124edc05 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 124edc0b push ecx */
  push32((uint32_t)(ECX));
  /* 124edc0c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edc0f push edx */
  push32((uint32_t)(EDX));
  /* 124edc10 call 0x124e3970 */
  push32(0x124edc15u); f_124e3970();
  /* 124edc15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edc18 push eax */
  push32((uint32_t)(EAX));
  /* 124edc19 call 0x124e37f0 */
  push32(0x124edc1eu); f_124e37f0();
  /* 124edc1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edc21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edc24 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 124edc28 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124edc2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124edc2e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edc31 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 124edc37 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124edc3a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 124edc40 push eax */
  push32((uint32_t)(EAX));
  /* 124edc41 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edc44 push ecx */
  push32((uint32_t)(ECX));
  /* 124edc45 call 0x124e3970 */
  push32(0x124edc4au); f_124e3970();
  /* 124edc4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edc4d push eax */
  push32((uint32_t)(EAX));
  /* 124edc4e call 0x124e37f0 */
  push32(0x124edc53u); f_124e37f0();
  /* 124edc53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edc56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edc59 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 124edc5d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124edc60 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124edc63 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edc66 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 124edc6c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124edc6f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 124edc75 push ecx */
  push32((uint32_t)(ECX));
  /* 124edc76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edc79 push edx */
  push32((uint32_t)(EDX));
  /* 124edc7a call 0x124e3970 */
  push32(0x124edc7fu); f_124e3970();
  /* 124edc7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edc82 push eax */
  push32((uint32_t)(EAX));
  /* 124edc83 call 0x124e37f0 */
  push32(0x124edc88u); f_124e37f0();
  /* 124edc88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edc8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edc8e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 124edc92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124edc95 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124edc98 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edc9b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 124edca1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124edca4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 124edcaa push eax */
  push32((uint32_t)(EAX));
  /* 124edcab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edcae push ecx */
  push32((uint32_t)(ECX));
  /* 124edcaf call 0x124e3970 */
  push32(0x124edcb4u); f_124e3970();
  /* 124edcb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edcb7 push eax */
  push32((uint32_t)(EAX));
  /* 124edcb8 call 0x124e37f0 */
  push32(0x124edcbdu); f_124e37f0();
  /* 124edcbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edcc0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edcc3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 124edcc7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124edcca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124edccd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124edcd0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_124edcd6:;
  /* 124edcd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124edcd9 pop esi */
  ESI = (pop32());
  /* 124edcda mov esp, ebp */
  ESP = (EBP);
  /* 124edcdc pop ebp */
  EBP = (pop32());
  /* 124edcdd ret  */
  ESPCHK(0x124ed970u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dce0 @ 0x124edce0 (31 bytes, 15 insns) */
void f_124edce0(void) {
  FTRACE(0x124edce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124edce0 push ebp */
  push32((uint32_t)(EBP));
  /* 124edce1 mov ebp, esp */
  EBP = (ESP);
  /* 124edce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124edce5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124edce8 push eax */
  push32((uint32_t)(EAX));
  /* 124edce9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124edcec push ecx */
  push32((uint32_t)(ECX));
  /* 124edced mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124edcf0 push edx */
  push32((uint32_t)(EDX));
  /* 124edcf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124edcf4 push eax */
  push32((uint32_t)(EAX));
  /* 124edcf5 call 0x124edd00 */
  push32(0x124edcfau); f_124edd00();
  /* 124edcfa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edcfd pop ebp */
  EBP = (pop32());
  /* 124edcfe ret  */
  ESPCHK(0x124edce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dd00 @ 0x124edd00 (394 bytes, 123 insns) */
void f_124edd00(void) {
  FTRACE(0x124edd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124edd00 push ebp */
  push32((uint32_t)(EBP));
  /* 124edd01 mov ebp, esp */
  EBP = (ESP);
  /* 124edd03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124edd06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124edd09 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124edd0c push 0x1250cf4c */
  push32((uint32_t)(0x1250cf4cu));
  /* 124edd11 call dword ptr [0x1250f3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3bc))), 0x124edd17u);
  /* 124edd17 cmp dword ptr [0x1250cf3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124edd1e je 0x124edd3e */
  if (C.zf) goto L_124edd3e;
  /* 124edd20 push 0x1250cf4c */
  push32((uint32_t)(0x1250cf4cu));
  /* 124edd25 call dword ptr [0x1250f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3ac))), 0x124edd2bu);
  /* 124edd2b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124edd2d call 0x124e43c0 */
  push32(0x124edd32u); f_124e43c0();
  /* 124edd32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edd35 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 124edd3c jmp 0x124edd45 */
  goto L_124edd45;
L_124edd3e:;
  /* 124edd3e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_124edd45:;
  /* 124edd45 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124edd49 jne 0x124edd56 */
  if (!C.zf) goto L_124edd56;
  /* 124edd4b mov ecx, dword ptr [0x1250bc98] */
  ECX = (r32((uint32_t)(0x1250bc98)));
  /* 124edd51 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 124edd54 jmp 0x124edd5c */
  goto L_124edd5c;
L_124edd56:;
  /* 124edd56 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124edd59 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_124edd5c:;
  /* 124edd5c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124edd5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124edd62:;
  /* 124edd62 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124edd66 jbe 0x124ede53 */
  if ((C.cf||C.zf)) goto L_124ede53;
  /* 124edd6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124edd6f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124edd71 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 124edd74 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124edd78 je 0x124edd82 */
  if (C.zf) goto L_124edd82;
  /* 124edd7a cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124edd7e je 0x124edd87 */
  if (C.zf) goto L_124edd87;
  /* 124edd80 jmp 0x124edde1 */
  goto L_124edde1;
L_124edd82:;
  /* 124edd82 jmp 0x124ede53 */
  goto L_124ede53;
L_124edd87:;
  /* 124edd87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124edd8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124edd8d mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 124edd90 mov dword ptr [0x1250cf28], 0 */
  w32((uint32_t)(0x1250cf28), (0x0u));
  /* 124edd9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124edd9d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124edda0 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124edda3 jne 0x124eddb8 */
  if (!C.zf) goto L_124eddb8;
  /* 124edda5 mov dword ptr [0x1250cf28], 1 */
  w32((uint32_t)(0x1250cf28), (0x1u));
  /* 124eddaf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eddb2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eddb5 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_124eddb8:;
  /* 124eddb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eddbb push ecx */
  push32((uint32_t)(ECX));
  /* 124eddbc lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 124eddbf push edx */
  push32((uint32_t)(EDX));
  /* 124eddc0 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 124eddc3 push eax */
  push32((uint32_t)(EAX));
  /* 124eddc4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124eddc7 push ecx */
  push32((uint32_t)(ECX));
  /* 124eddc8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eddcb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124eddcd push eax */
  push32((uint32_t)(EAX));
  /* 124eddce call 0x124ede90 */
  push32(0x124eddd3u); f_124ede90();
  /* 124eddd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eddd6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eddd9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124edddc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 124edddf jmp 0x124ede4e */
  goto L_124ede4e;
L_124edde1:;
  /* 124edde1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124edde4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124edde6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124edde8 mov ecx, dword ptr [0x1250ac98] */
  ECX = (r32((uint32_t)(0x1250ac98)));
  /* 124eddee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124eddf0 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124eddf4 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 124eddfa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124eddfc je 0x124ede29 */
  if (C.zf) goto L_124ede29;
  /* 124eddfe cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ede02 jbe 0x124ede29 */
  if ((C.cf||C.zf)) goto L_124ede29;
  /* 124ede04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ede07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ede0a mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124ede0c mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 124ede0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ede11 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ede14 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124ede17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ede1a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ede1d mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 124ede20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ede23 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ede26 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_124ede29:;
  /* 124ede29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ede2c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ede2f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124ede31 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 124ede33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ede36 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ede39 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124ede3c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ede3f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ede42 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 124ede45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ede48 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ede4b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_124ede4e:;
  /* 124ede4e jmp 0x124edd62 */
  goto L_124edd62;
L_124ede53:;
  /* 124ede53 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ede57 je 0x124ede65 */
  if (C.zf) goto L_124ede65;
  /* 124ede59 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124ede5b call 0x124e4460 */
  push32(0x124ede60u); f_124e4460();
  /* 124ede60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ede63 jmp 0x124ede70 */
  goto L_124ede70;
L_124ede65:;
  /* 124ede65 push 0x1250cf4c */
  push32((uint32_t)(0x1250cf4cu));
  /* 124ede6a call dword ptr [0x1250f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3ac))), 0x124ede70u);
L_124ede70:;
  /* 124ede70 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ede74 jbe 0x124ede84 */
  if ((C.cf||C.zf)) goto L_124ede84;
  /* 124ede76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ede79 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 124ede7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ede7f sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ede82 jmp 0x124ede86 */
  goto L_124ede86;
L_124ede84:;
  /* 124ede84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124ede86:;
  /* 124ede86 mov esp, ebp */
  ESP = (EBP);
  /* 124ede88 pop ebp */
  EBP = (pop32());
  /* 124ede89 ret  */
  ESPCHK(0x124edd00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001de90 @ 0x124ede90 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_124ede90(void) {
  FTRACE(0x124ede90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ede90 push ebp */
  push32((uint32_t)(EBP));
  /* 124ede91 mov ebp, esp */
  EBP = (ESP);
  /* 124ede93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ede96 push esi */
  push32((uint32_t)(ESI));
  /* 124ede97 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 124ede9b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124ede9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124edea1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124edea4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124edea7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124edeab ja 0x124ee3f8 */
  if ((!C.cf&&!C.zf)) goto L_124ee3f8;
  /* 124edeb1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124edeb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124edeb6 mov dl, byte ptr [eax + 0x124ee459] */
  DL = (r8((uint32_t)(EAX + 0x124ee459)));
  /* 124edebc jmp dword ptr [edx*4 + 0x124ee3fd] */
  switch (EDX) {
    case 0: goto L_124ee3d6;
    case 1: goto L_124edee5;
    case 2: goto L_124edf2b;
    case 3: goto L_124ee078;
    case 4: goto L_124ee0a0;
    case 5: goto L_124ee13f;
    case 6: goto L_124ee1ab;
    case 7: goto L_124ee1d4;
    case 8: goto L_124ee215;
    case 9: goto L_124ee2f7;
    case 10: goto L_124ee35e;
    case 11: goto L_124ee3ab;
    case 12: goto L_124edec3;
    case 13: goto L_124edf08;
    case 14: goto L_124edf4e;
    case 15: goto L_124ee04e;
    case 16: goto L_124ee0e5;
    case 17: goto L_124ee112;
    case 18: goto L_124ee167;
    case 19: goto L_124ee1eb;
    case 20: goto L_124ee299;
    case 21: goto L_124ee328;
    case 22: goto L_124ee3f8;
    default: x86_unimpl("switch@0x124edebc out of table"); return;
  }
L_124edec3:;
  /* 124edec3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124edec6 push ecx */
  push32((uint32_t)(ECX));
  /* 124edec7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124edeca push edx */
  push32((uint32_t)(EDX));
  /* 124edecb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124edece mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 124eded1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124eded4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 124eded7 push eax */
  push32((uint32_t)(EAX));
  /* 124eded8 call 0x124ee4b0 */
  push32(0x124ededdu); f_124ee4b0();
  /* 124ededd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edee0 jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124edee5:;
  /* 124edee5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124edee8 push ecx */
  push32((uint32_t)(ECX));
  /* 124edee9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124edeec push edx */
  push32((uint32_t)(EDX));
  /* 124edeed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124edef0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 124edef3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124edef6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 124edefa push eax */
  push32((uint32_t)(EAX));
  /* 124edefb call 0x124ee4b0 */
  push32(0x124edf00u); f_124ee4b0();
  /* 124edf00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edf03 jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124edf08:;
  /* 124edf08 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124edf0b push ecx */
  push32((uint32_t)(ECX));
  /* 124edf0c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124edf0f push edx */
  push32((uint32_t)(EDX));
  /* 124edf10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124edf13 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124edf16 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124edf19 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 124edf1d push eax */
  push32((uint32_t)(EAX));
  /* 124edf1e call 0x124ee4b0 */
  push32(0x124edf23u); f_124ee4b0();
  /* 124edf23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edf26 jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124edf2b:;
  /* 124edf2b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124edf2e push ecx */
  push32((uint32_t)(ECX));
  /* 124edf2f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124edf32 push edx */
  push32((uint32_t)(EDX));
  /* 124edf33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124edf36 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124edf39 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124edf3c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 124edf40 push eax */
  push32((uint32_t)(EAX));
  /* 124edf41 call 0x124ee4b0 */
  push32(0x124edf46u); f_124ee4b0();
  /* 124edf46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edf49 jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124edf4e:;
  /* 124edf4e cmp dword ptr [0x1250cf28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124edf55 je 0x124edfd6 */
  if (C.zf) goto L_124edfd6;
  /* 124edf57 mov dword ptr [0x1250cf28], 0 */
  w32((uint32_t)(0x1250cf28), (0x0u));
  /* 124edf61 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124edf64 push ecx */
  push32((uint32_t)(ECX));
  /* 124edf65 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124edf68 push edx */
  push32((uint32_t)(EDX));
  /* 124edf69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124edf6c push eax */
  push32((uint32_t)(EAX));
  /* 124edf6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124edf70 push ecx */
  push32((uint32_t)(ECX));
  /* 124edf71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124edf74 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 124edf7a push eax */
  push32((uint32_t)(EAX));
  /* 124edf7b call 0x124ee660 */
  push32(0x124edf80u); f_124ee660();
  /* 124edf80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edf83 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124edf86 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124edf89 jne 0x124edf90 */
  if (!C.zf) goto L_124edf90;
  /* 124edf8b jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124edf90:;
  /* 124edf90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124edf93 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124edf95 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 124edf98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124edf9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124edf9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124edfa0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124edfa3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124edfa5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124edfa8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124edfaa sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124edfad mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124edfb0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124edfb2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124edfb5 push ecx */
  push32((uint32_t)(ECX));
  /* 124edfb6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124edfb9 push edx */
  push32((uint32_t)(EDX));
  /* 124edfba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124edfbd push eax */
  push32((uint32_t)(EAX));
  /* 124edfbe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124edfc1 push ecx */
  push32((uint32_t)(ECX));
  /* 124edfc2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124edfc5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 124edfcb push eax */
  push32((uint32_t)(EAX));
  /* 124edfcc call 0x124ee660 */
  push32(0x124edfd1u); f_124ee660();
  /* 124edfd1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edfd4 jmp 0x124ee049 */
  goto L_124ee049;
L_124edfd6:;
  /* 124edfd6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124edfd9 push ecx */
  push32((uint32_t)(ECX));
  /* 124edfda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124edfdd push edx */
  push32((uint32_t)(EDX));
  /* 124edfde mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124edfe1 push eax */
  push32((uint32_t)(EAX));
  /* 124edfe2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124edfe5 push ecx */
  push32((uint32_t)(ECX));
  /* 124edfe6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124edfe9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 124edfef push eax */
  push32((uint32_t)(EAX));
  /* 124edff0 call 0x124ee660 */
  push32(0x124edff5u); f_124ee660();
  /* 124edff5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124edff8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124edffb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124edffe jne 0x124ee005 */
  if (!C.zf) goto L_124ee005;
  /* 124ee000 jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124ee005:;
  /* 124ee005 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee008 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124ee00a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 124ee00d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee010 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124ee012 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee015 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee018 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124ee01a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee01d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124ee01f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee022 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee025 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124ee027 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124ee02a push ecx */
  push32((uint32_t)(ECX));
  /* 124ee02b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee02e push edx */
  push32((uint32_t)(EDX));
  /* 124ee02f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee032 push eax */
  push32((uint32_t)(EAX));
  /* 124ee033 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee036 push ecx */
  push32((uint32_t)(ECX));
  /* 124ee037 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124ee03a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 124ee040 push eax */
  push32((uint32_t)(EAX));
  /* 124ee041 call 0x124ee660 */
  push32(0x124ee046u); f_124ee660();
  /* 124ee046 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124ee049:;
  /* 124ee049 jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124ee04e:;
  /* 124ee04e mov ecx, dword ptr [0x1250cf28] */
  ECX = (r32((uint32_t)(0x1250cf28)));
  /* 124ee054 mov dword ptr [0x1250cf38], ecx */
  w32((uint32_t)(0x1250cf38), (ECX));
  /* 124ee05a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee05d push edx */
  push32((uint32_t)(EDX));
  /* 124ee05e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee061 push eax */
  push32((uint32_t)(EAX));
  /* 124ee062 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ee064 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee067 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124ee06a push edx */
  push32((uint32_t)(EDX));
  /* 124ee06b call 0x124ee500 */
  push32(0x124ee070u); f_124ee500();
  /* 124ee070 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee073 jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124ee078:;
  /* 124ee078 mov eax, dword ptr [0x1250cf28] */
  EAX = (r32((uint32_t)(0x1250cf28)));
  /* 124ee07d mov dword ptr [0x1250cf38], eax */
  w32((uint32_t)(0x1250cf38), (EAX));
  /* 124ee082 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee085 push ecx */
  push32((uint32_t)(ECX));
  /* 124ee086 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee089 push edx */
  push32((uint32_t)(EDX));
  /* 124ee08a push 2 */
  push32((uint32_t)(0x2u));
  /* 124ee08c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee08f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 124ee092 push ecx */
  push32((uint32_t)(ECX));
  /* 124ee093 call 0x124ee500 */
  push32(0x124ee098u); f_124ee500();
  /* 124ee098 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee09b jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124ee0a0:;
  /* 124ee0a0 mov edx, dword ptr [0x1250cf28] */
  EDX = (r32((uint32_t)(0x1250cf28)));
  /* 124ee0a6 mov dword ptr [0x1250cf38], edx */
  w32((uint32_t)(0x1250cf38), (EDX));
  /* 124ee0ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee0af mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 124ee0b2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124ee0b3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 124ee0b8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124ee0ba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124ee0bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee0c1 jne 0x124ee0ca */
  if (!C.zf) goto L_124ee0ca;
  /* 124ee0c3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_124ee0ca:;
  /* 124ee0ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee0cd push edx */
  push32((uint32_t)(EDX));
  /* 124ee0ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee0d1 push eax */
  push32((uint32_t)(EAX));
  /* 124ee0d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ee0d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ee0d7 push ecx */
  push32((uint32_t)(ECX));
  /* 124ee0d8 call 0x124ee500 */
  push32(0x124ee0ddu); f_124ee500();
  /* 124ee0dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee0e0 jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124ee0e5:;
  /* 124ee0e5 mov edx, dword ptr [0x1250cf28] */
  EDX = (r32((uint32_t)(0x1250cf28)));
  /* 124ee0eb mov dword ptr [0x1250cf38], edx */
  w32((uint32_t)(0x1250cf38), (EDX));
  /* 124ee0f1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee0f4 push eax */
  push32((uint32_t)(EAX));
  /* 124ee0f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee0f8 push ecx */
  push32((uint32_t)(ECX));
  /* 124ee0f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 124ee0fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee0fe mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124ee101 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee104 push eax */
  push32((uint32_t)(EAX));
  /* 124ee105 call 0x124ee500 */
  push32(0x124ee10au); f_124ee500();
  /* 124ee10a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee10d jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124ee112:;
  /* 124ee112 mov ecx, dword ptr [0x1250cf28] */
  ECX = (r32((uint32_t)(0x1250cf28)));
  /* 124ee118 mov dword ptr [0x1250cf38], ecx */
  w32((uint32_t)(0x1250cf38), (ECX));
  /* 124ee11e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee121 push edx */
  push32((uint32_t)(EDX));
  /* 124ee122 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee125 push eax */
  push32((uint32_t)(EAX));
  /* 124ee126 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ee128 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee12b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 124ee12e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee131 push edx */
  push32((uint32_t)(EDX));
  /* 124ee132 call 0x124ee500 */
  push32(0x124ee137u); f_124ee500();
  /* 124ee137 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee13a jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124ee13f:;
  /* 124ee13f mov eax, dword ptr [0x1250cf28] */
  EAX = (r32((uint32_t)(0x1250cf28)));
  /* 124ee144 mov dword ptr [0x1250cf38], eax */
  w32((uint32_t)(0x1250cf38), (EAX));
  /* 124ee149 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee14c push ecx */
  push32((uint32_t)(ECX));
  /* 124ee14d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee150 push edx */
  push32((uint32_t)(EDX));
  /* 124ee151 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ee153 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee156 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124ee159 push ecx */
  push32((uint32_t)(ECX));
  /* 124ee15a call 0x124ee500 */
  push32(0x124ee15fu); f_124ee500();
  /* 124ee15f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee162 jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124ee167:;
  /* 124ee167 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee16a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee16e jg 0x124ee18c */
  if ((!C.zf&&C.sf==C.of)) goto L_124ee18c;
  /* 124ee170 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee173 push eax */
  push32((uint32_t)(EAX));
  /* 124ee174 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee177 push ecx */
  push32((uint32_t)(ECX));
  /* 124ee178 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124ee17b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 124ee181 push eax */
  push32((uint32_t)(EAX));
  /* 124ee182 call 0x124ee4b0 */
  push32(0x124ee187u); f_124ee4b0();
  /* 124ee187 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee18a jmp 0x124ee1a6 */
  goto L_124ee1a6;
L_124ee18c:;
  /* 124ee18c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee18f push ecx */
  push32((uint32_t)(ECX));
  /* 124ee190 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee193 push edx */
  push32((uint32_t)(EDX));
  /* 124ee194 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124ee197 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 124ee19d push ecx */
  push32((uint32_t)(ECX));
  /* 124ee19e call 0x124ee4b0 */
  push32(0x124ee1a3u); f_124ee4b0();
  /* 124ee1a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124ee1a6:;
  /* 124ee1a6 jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124ee1ab:;
  /* 124ee1ab mov edx, dword ptr [0x1250cf28] */
  EDX = (r32((uint32_t)(0x1250cf28)));
  /* 124ee1b1 mov dword ptr [0x1250cf38], edx */
  w32((uint32_t)(0x1250cf38), (EDX));
  /* 124ee1b7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee1ba push eax */
  push32((uint32_t)(EAX));
  /* 124ee1bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee1be push ecx */
  push32((uint32_t)(ECX));
  /* 124ee1bf push 2 */
  push32((uint32_t)(0x2u));
  /* 124ee1c1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee1c4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124ee1c6 push eax */
  push32((uint32_t)(EAX));
  /* 124ee1c7 call 0x124ee500 */
  push32(0x124ee1ccu); f_124ee500();
  /* 124ee1cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee1cf jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124ee1d4:;
  /* 124ee1d4 mov ecx, dword ptr [0x1250cf28] */
  ECX = (r32((uint32_t)(0x1250cf28)));
  /* 124ee1da mov dword ptr [0x1250cf38], ecx */
  w32((uint32_t)(0x1250cf38), (ECX));
  /* 124ee1e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee1e3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 124ee1e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124ee1e9 jmp 0x124ee23d */
  goto L_124ee23d;
L_124ee1eb:;
  /* 124ee1eb mov ecx, dword ptr [0x1250cf28] */
  ECX = (r32((uint32_t)(0x1250cf28)));
  /* 124ee1f1 mov dword ptr [0x1250cf38], ecx */
  w32((uint32_t)(0x1250cf38), (ECX));
  /* 124ee1f7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee1fa push edx */
  push32((uint32_t)(EDX));
  /* 124ee1fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee1fe push eax */
  push32((uint32_t)(EAX));
  /* 124ee1ff push 1 */
  push32((uint32_t)(0x1u));
  /* 124ee201 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee204 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 124ee207 push edx */
  push32((uint32_t)(EDX));
  /* 124ee208 call 0x124ee500 */
  push32(0x124ee20du); f_124ee500();
  /* 124ee20d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee210 jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124ee215:;
  /* 124ee215 mov eax, dword ptr [0x1250cf28] */
  EAX = (r32((uint32_t)(0x1250cf28)));
  /* 124ee21a mov dword ptr [0x1250cf38], eax */
  w32((uint32_t)(0x1250cf38), (EAX));
  /* 124ee21f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee222 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee226 jne 0x124ee231 */
  if (!C.zf) goto L_124ee231;
  /* 124ee228 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 124ee22f jmp 0x124ee23d */
  goto L_124ee23d;
L_124ee231:;
  /* 124ee231 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee234 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 124ee237 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee23a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124ee23d:;
  /* 124ee23d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee240 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 124ee243 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee246 jge 0x124ee251 */
  if ((C.sf==C.of)) goto L_124ee251;
  /* 124ee248 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124ee24f jmp 0x124ee27e */
  goto L_124ee27e;
L_124ee251:;
  /* 124ee251 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee254 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 124ee257 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124ee258 mov ecx, 7 */
  ECX = (0x7u);
  /* 124ee25d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124ee25f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ee262 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee265 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124ee268 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124ee269 mov ecx, 7 */
  ECX = (0x7u);
  /* 124ee26e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124ee270 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee273 jl 0x124ee27e */
  if ((C.sf!=C.of)) goto L_124ee27e;
  /* 124ee275 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ee278 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee27b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124ee27e:;
  /* 124ee27e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee281 push eax */
  push32((uint32_t)(EAX));
  /* 124ee282 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee285 push ecx */
  push32((uint32_t)(ECX));
  /* 124ee286 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ee288 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ee28b push edx */
  push32((uint32_t)(EDX));
  /* 124ee28c call 0x124ee500 */
  push32(0x124ee291u); f_124ee500();
  /* 124ee291 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee294 jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124ee299:;
  /* 124ee299 cmp dword ptr [0x1250cf28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee2a0 je 0x124ee2d0 */
  if (C.zf) goto L_124ee2d0;
  /* 124ee2a2 mov dword ptr [0x1250cf28], 0 */
  w32((uint32_t)(0x1250cf28), (0x0u));
  /* 124ee2ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124ee2af push eax */
  push32((uint32_t)(EAX));
  /* 124ee2b0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee2b3 push ecx */
  push32((uint32_t)(ECX));
  /* 124ee2b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee2b7 push edx */
  push32((uint32_t)(EDX));
  /* 124ee2b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee2bb push eax */
  push32((uint32_t)(EAX));
  /* 124ee2bc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124ee2bf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 124ee2c5 push edx */
  push32((uint32_t)(EDX));
  /* 124ee2c6 call 0x124ee660 */
  push32(0x124ee2cbu); f_124ee660();
  /* 124ee2cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee2ce jmp 0x124ee2f2 */
  goto L_124ee2f2;
L_124ee2d0:;
  /* 124ee2d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124ee2d3 push eax */
  push32((uint32_t)(EAX));
  /* 124ee2d4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee2d7 push ecx */
  push32((uint32_t)(ECX));
  /* 124ee2d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee2db push edx */
  push32((uint32_t)(EDX));
  /* 124ee2dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee2df push eax */
  push32((uint32_t)(EAX));
  /* 124ee2e0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124ee2e3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 124ee2e9 push edx */
  push32((uint32_t)(EDX));
  /* 124ee2ea call 0x124ee660 */
  push32(0x124ee2efu); f_124ee660();
  /* 124ee2ef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124ee2f2:;
  /* 124ee2f2 jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124ee2f7:;
  /* 124ee2f7 mov dword ptr [0x1250cf28], 0 */
  w32((uint32_t)(0x1250cf28), (0x0u));
  /* 124ee301 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124ee304 push eax */
  push32((uint32_t)(EAX));
  /* 124ee305 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee308 push ecx */
  push32((uint32_t)(ECX));
  /* 124ee309 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee30c push edx */
  push32((uint32_t)(EDX));
  /* 124ee30d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee310 push eax */
  push32((uint32_t)(EAX));
  /* 124ee311 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124ee314 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 124ee31a push edx */
  push32((uint32_t)(EDX));
  /* 124ee31b call 0x124ee660 */
  push32(0x124ee320u); f_124ee660();
  /* 124ee320 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee323 jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124ee328:;
  /* 124ee328 mov eax, dword ptr [0x1250cf28] */
  EAX = (r32((uint32_t)(0x1250cf28)));
  /* 124ee32d mov dword ptr [0x1250cf38], eax */
  w32((uint32_t)(0x1250cf38), (EAX));
  /* 124ee332 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee335 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 124ee338 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124ee339 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 124ee33e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124ee340 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124ee343 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee346 push edx */
  push32((uint32_t)(EDX));
  /* 124ee347 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee34a push eax */
  push32((uint32_t)(EAX));
  /* 124ee34b push 2 */
  push32((uint32_t)(0x2u));
  /* 124ee34d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ee350 push ecx */
  push32((uint32_t)(ECX));
  /* 124ee351 call 0x124ee500 */
  push32(0x124ee356u); f_124ee500();
  /* 124ee356 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee359 jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124ee35e:;
  /* 124ee35e mov edx, dword ptr [0x1250cf28] */
  EDX = (r32((uint32_t)(0x1250cf28)));
  /* 124ee364 mov dword ptr [0x1250cf38], edx */
  w32((uint32_t)(0x1250cf38), (EDX));
  /* 124ee36a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee36d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 124ee370 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124ee371 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 124ee376 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124ee378 mov ecx, eax */
  ECX = (EAX);
  /* 124ee37a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee37d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ee380 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee383 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124ee386 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124ee387 mov esi, 0x64 */
  ESI = (0x64u);
  /* 124ee38c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124ee38e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee390 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124ee393 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee396 push eax */
  push32((uint32_t)(EAX));
  /* 124ee397 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee39a push ecx */
  push32((uint32_t)(ECX));
  /* 124ee39b push 4 */
  push32((uint32_t)(0x4u));
  /* 124ee39d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ee3a0 push edx */
  push32((uint32_t)(EDX));
  /* 124ee3a1 call 0x124ee500 */
  push32(0x124ee3a6u); f_124ee500();
  /* 124ee3a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee3a9 jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124ee3ab:;
  /* 124ee3ab call 0x124ef4c0 */
  push32(0x124ee3b0u); f_124ef4c0();
  /* 124ee3b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee3b3 push eax */
  push32((uint32_t)(EAX));
  /* 124ee3b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee3b7 push ecx */
  push32((uint32_t)(ECX));
  /* 124ee3b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee3bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ee3bd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee3c1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 124ee3c4 mov ecx, dword ptr [eax*4 + 0x1250be1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1250be1c)));
  /* 124ee3cb push ecx */
  push32((uint32_t)(ECX));
  /* 124ee3cc call 0x124ee4b0 */
  push32(0x124ee3d1u); f_124ee4b0();
  /* 124ee3d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee3d4 jmp 0x124ee3f8 */
  goto L_124ee3f8;
L_124ee3d6:;
  /* 124ee3d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee3d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124ee3db mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 124ee3de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee3e1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124ee3e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee3e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee3e9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124ee3eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee3ee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124ee3f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee3f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee3f6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_124ee3f8:;
  /* 124ee3f8 pop esi */
  ESI = (pop32());
  /* 124ee3f9 mov esp, ebp */
  ESP = (EBP);
  /* 124ee3fb pop ebp */
  EBP = (pop32());
  /* 124ee3fc ret  */
  ESPCHK(0x124ede90u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x124ee4b0 (72 bytes, 30 insns) */
void f_124ee4b0(void) {
  FTRACE(0x124ee4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ee4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ee4b1 mov ebp, esp */
  EBP = (ESP);
L_124ee4b3:;
  /* 124ee4b3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee4b6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee4b9 je 0x124ee4f6 */
  if (C.zf) goto L_124ee4f6;
  /* 124ee4bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee4be movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124ee4c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124ee4c3 je 0x124ee4f6 */
  if (C.zf) goto L_124ee4f6;
  /* 124ee4c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee4c8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124ee4ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee4cd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124ee4cf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 124ee4d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee4d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124ee4d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee4d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee4dc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124ee4de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee4e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee4e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 124ee4e7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee4ea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124ee4ec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee4ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee4f2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124ee4f4 jmp 0x124ee4b3 */
  goto L_124ee4b3;
L_124ee4f6:;
  /* 124ee4f6 pop ebp */
  EBP = (pop32());
  /* 124ee4f7 ret  */
  ESPCHK(0x124ee4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e500 @ 0x124ee500 (173 bytes, 64 insns) */
void f_124ee500(void) {
  FTRACE(0x124ee500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ee500 push ebp */
  push32((uint32_t)(EBP));
  /* 124ee501 mov ebp, esp */
  EBP = (ESP);
  /* 124ee503 push ecx */
  push32((uint32_t)(ECX));
  /* 124ee504 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124ee50b cmp dword ptr [0x1250cf38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee512 je 0x124ee52a */
  if (C.zf) goto L_124ee52a;
  /* 124ee514 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee517 push eax */
  push32((uint32_t)(EAX));
  /* 124ee518 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee51b push ecx */
  push32((uint32_t)(ECX));
  /* 124ee51c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee51f push edx */
  push32((uint32_t)(EDX));
  /* 124ee520 call 0x124ee5b0 */
  push32(0x124ee525u); f_124ee5b0();
  /* 124ee525 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee528 jmp 0x124ee5a9 */
  goto L_124ee5a9;
L_124ee52a:;
  /* 124ee52a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee52d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee530 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee532 jae 0x124ee5a0 */
  if (!C.cf) goto L_124ee5a0;
  /* 124ee534 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee537 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee53a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 124ee53d jmp 0x124ee548 */
  goto L_124ee548;
L_124ee53f:;
  /* 124ee53f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee542 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee545 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_124ee548:;
  /* 124ee548 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee54b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee54e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ee550 je 0x124ee584 */
  if (C.zf) goto L_124ee584;
  /* 124ee552 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee555 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124ee556 mov ecx, 0xa */
  ECX = (0xau);
  /* 124ee55b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124ee55d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee560 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee563 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124ee565 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee568 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 124ee56b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee56e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124ee56f mov ecx, 0xa */
  ECX = (0xau);
  /* 124ee574 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124ee576 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124ee579 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ee57c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee57f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124ee582 jmp 0x124ee53f */
  goto L_124ee53f;
L_124ee584:;
  /* 124ee584 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee587 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124ee589 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee58c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee58f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124ee591 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee594 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124ee596 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee599 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee59c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124ee59e jmp 0x124ee5a9 */
  goto L_124ee5a9;
L_124ee5a0:;
  /* 124ee5a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee5a3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_124ee5a9:;
  /* 124ee5a9 mov esp, ebp */
  ESP = (EBP);
  /* 124ee5ab pop ebp */
  EBP = (pop32());
  /* 124ee5ac ret  */
  ESPCHK(0x124ee500u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x124ee5b0 (172 bytes, 65 insns) */
void f_124ee5b0(void) {
  FTRACE(0x124ee5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ee5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ee5b1 mov ebp, esp */
  EBP = (ESP);
  /* 124ee5b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee5b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee5b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124ee5bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124ee5be mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee5c1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee5c4 jbe 0x124ee60b */
  if ((C.cf||C.zf)) goto L_124ee60b;
L_124ee5c6:;
  /* 124ee5c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee5c9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124ee5ca mov ecx, 0xa */
  ECX = (0xau);
  /* 124ee5cf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124ee5d1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee5d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ee5d7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 124ee5d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ee5dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee5df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124ee5e2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee5e5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124ee5e7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee5ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee5ed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124ee5ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee5f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124ee5f3 mov ecx, 0xa */
  ECX = (0xau);
  /* 124ee5f8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124ee5fa mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124ee5fd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee601 jle 0x124ee60b */
  if ((C.zf||C.sf!=C.of)) goto L_124ee60b;
  /* 124ee603 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee606 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee609 ja 0x124ee5c6 */
  if ((!C.cf&&!C.zf)) goto L_124ee5c6;
L_124ee60b:;
  /* 124ee60b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee60e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124ee610 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ee613 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee616 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ee619 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 124ee61b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ee61e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee621 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124ee624:;
  /* 124ee624 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ee627 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124ee629 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 124ee62c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ee62f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ee632 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124ee634 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 124ee636 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ee639 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee63c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124ee63f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ee642 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 124ee645 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 124ee647 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ee64a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee64d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ee650 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ee653 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee656 jb 0x124ee624 */
  if (C.cf) goto L_124ee624;
  /* 124ee658 mov esp, ebp */
  ESP = (EBP);
  /* 124ee65a pop ebp */
  EBP = (pop32());
  /* 124ee65b ret  */
  ESPCHK(0x124ee5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e660 @ 0x124ee660 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_124ee660(void) {
  FTRACE(0x124ee660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ee660 push ebp */
  push32((uint32_t)(EBP));
  /* 124ee661 mov ebp, esp */
  EBP = (ESP);
  /* 124ee663 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_124ee666:;
  /* 124ee666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee669 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124ee66c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ee66e je 0x124eeadc */
  if (C.zf) goto L_124eeadc;
  /* 124ee674 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee677 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee67a je 0x124eeadc */
  if (C.zf) goto L_124eeadc;
  /* 124ee680 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 124ee684 mov dword ptr [0x1250cf38], 0 */
  w32((uint32_t)(0x1250cf38), (0x0u));
  /* 124ee68e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124ee695 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee698 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ee69b jmp 0x124ee6a6 */
  goto L_124ee6a6;
L_124ee69d:;
  /* 124ee69d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ee6a0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee6a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_124ee6a6:;
  /* 124ee6a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ee6a9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124ee6ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee6af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124ee6b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ee6b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee6b8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124ee6bb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee6bd jne 0x124ee6c1 */
  if (!C.zf) goto L_124ee6c1;
  /* 124ee6bf jmp 0x124ee69d */
  goto L_124ee69d;
L_124ee6c1:;
  /* 124ee6c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ee6c4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee6c7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124ee6ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee6cd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124ee6d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124ee6d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ee6d6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee6d9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124ee6dc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee6e0 ja 0x124eea30 */
  if ((!C.cf&&!C.zf)) goto L_124eea30;
  /* 124ee6e6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ee6e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ee6eb mov al, byte ptr [ecx + 0x124eeb0c] */
  AL = (r8((uint32_t)(ECX + 0x124eeb0c)));
  /* 124ee6f1 jmp dword ptr [eax*4 + 0x124eeae0] */
  switch (EAX) {
    case 0: goto L_124ee94f;
    case 1: goto L_124ee833;
    case 2: goto L_124ee7be;
    case 3: goto L_124ee6f8;
    case 4: goto L_124ee736;
    case 5: goto L_124ee797;
    case 6: goto L_124ee7e5;
    case 7: goto L_124ee80c;
    case 8: goto L_124ee87a;
    case 9: goto L_124ee774;
    case 10: goto L_124eea30;
    default: x86_unimpl("switch@0x124ee6f1 out of table"); return;
  }
L_124ee6f8:;
  /* 124ee6f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ee6fb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 124ee6fe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124ee701 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee704 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124ee707 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee70b ja 0x124ee731 */
  if ((!C.cf&&!C.zf)) goto L_124ee731;
  /* 124ee70d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124ee710 jmp dword ptr [ecx*4 + 0x124eeb5f] */
  switch (ECX) {
    case 0: goto L_124ee717;
    case 1: goto L_124ee721;
    case 2: goto L_124ee727;
    case 3: goto L_124ee72d;
    case 4: goto L_124ee755;
    case 5: goto L_124ee75f;
    case 6: goto L_124ee765;
    case 7: goto L_124ee76b;
    default: x86_unimpl("switch@0x124ee710 out of table"); return;
  }
L_124ee717:;
  /* 124ee717 mov dword ptr [0x1250cf38], 1 */
  w32((uint32_t)(0x1250cf38), (0x1u));
L_124ee721:;
  /* 124ee721 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 124ee725 jmp 0x124ee731 */
  goto L_124ee731;
L_124ee727:;
  /* 124ee727 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 124ee72b jmp 0x124ee731 */
  goto L_124ee731;
L_124ee72d:;
  /* 124ee72d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_124ee731:;
  /* 124ee731 jmp 0x124eea30 */
  goto L_124eea30;
L_124ee736:;
  /* 124ee736 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ee739 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 124ee73c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124ee73f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee742 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124ee745 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee749 ja 0x124ee76f */
  if ((!C.cf&&!C.zf)) goto L_124ee76f;
  /* 124ee74b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124ee74e jmp dword ptr [ecx*4 + 0x124eeb6f] */
  switch (ECX) {
    case 0: goto L_124ee755;
    case 1: goto L_124ee75f;
    case 2: goto L_124ee765;
    case 3: goto L_124ee76b;
    default: x86_unimpl("switch@0x124ee74e out of table"); return;
  }
L_124ee755:;
  /* 124ee755 mov dword ptr [0x1250cf38], 1 */
  w32((uint32_t)(0x1250cf38), (0x1u));
L_124ee75f:;
  /* 124ee75f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 124ee763 jmp 0x124ee76f */
  goto L_124ee76f;
L_124ee765:;
  /* 124ee765 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 124ee769 jmp 0x124ee76f */
  goto L_124ee76f;
L_124ee76b:;
  /* 124ee76b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_124ee76f:;
  /* 124ee76f jmp 0x124ef714 */
  jmp_ind(0x124ef714u); return;
L_124ee774:;
  /* 124ee774 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ee777 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 124ee77a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee77e je 0x124ee788 */
  if (C.zf) goto L_124ee788;
  /* 124ee780 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee784 je 0x124ee78e */
  if (C.zf) goto L_124ee78e;
  /* 124ee786 jmp 0x124ee792 */
  goto L_124ee792;
L_124ee788:;
  /* 124ee788 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 124ee78c jmp 0x124ee792 */
  goto L_124ee792;
L_124ee78e:;
  /* 124ee78e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_124ee792:;
  /* 124ee792 jmp 0x124eea30 */
  goto L_124eea30;
L_124ee797:;
  /* 124ee797 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ee79a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 124ee79d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee7a1 je 0x124ee7ab */
  if (C.zf) goto L_124ee7ab;
  /* 124ee7a3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee7a7 je 0x124ee7b5 */
  if (C.zf) goto L_124ee7b5;
  /* 124ee7a9 jmp 0x124ee7b9 */
  goto L_124ee7b9;
L_124ee7ab:;
  /* 124ee7ab mov dword ptr [0x1250cf38], 1 */
  w32((uint32_t)(0x1250cf38), (0x1u));
L_124ee7b5:;
  /* 124ee7b5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_124ee7b9:;
  /* 124ee7b9 jmp 0x124eea30 */
  goto L_124eea30;
L_124ee7be:;
  /* 124ee7be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ee7c1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 124ee7c4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee7c8 je 0x124ee7d2 */
  if (C.zf) goto L_124ee7d2;
  /* 124ee7ca cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee7ce je 0x124ee7dc */
  if (C.zf) goto L_124ee7dc;
  /* 124ee7d0 jmp 0x124ee7e0 */
  goto L_124ee7e0;
L_124ee7d2:;
  /* 124ee7d2 mov dword ptr [0x1250cf38], 1 */
  w32((uint32_t)(0x1250cf38), (0x1u));
L_124ee7dc:;
  /* 124ee7dc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_124ee7e0:;
  /* 124ee7e0 jmp 0x124eea30 */
  goto L_124eea30;
L_124ee7e5:;
  /* 124ee7e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ee7e8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 124ee7eb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee7ef je 0x124ee7f9 */
  if (C.zf) goto L_124ee7f9;
  /* 124ee7f1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee7f5 je 0x124ee803 */
  if (C.zf) goto L_124ee803;
  /* 124ee7f7 jmp 0x124ee807 */
  goto L_124ee807;
L_124ee7f9:;
  /* 124ee7f9 mov dword ptr [0x1250cf38], 1 */
  w32((uint32_t)(0x1250cf38), (0x1u));
L_124ee803:;
  /* 124ee803 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_124ee807:;
  /* 124ee807 jmp 0x124eea30 */
  goto L_124eea30;
L_124ee80c:;
  /* 124ee80c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ee80f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 124ee812 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee816 je 0x124ee820 */
  if (C.zf) goto L_124ee820;
  /* 124ee818 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee81c je 0x124ee82a */
  if (C.zf) goto L_124ee82a;
  /* 124ee81e jmp 0x124ee82e */
  goto L_124ee82e;
L_124ee820:;
  /* 124ee820 mov dword ptr [0x1250cf38], 1 */
  w32((uint32_t)(0x1250cf38), (0x1u));
L_124ee82a:;
  /* 124ee82a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_124ee82e:;
  /* 124ee82e jmp 0x124eea30 */
  goto L_124eea30;
L_124ee833:;
  /* 124ee833 push 0x125092bc */
  push32((uint32_t)(0x125092bcu));
  /* 124ee838 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee83b push ecx */
  push32((uint32_t)(ECX));
  /* 124ee83c call 0x124ef090 */
  push32(0x124ee841u); f_124ef090();
  /* 124ee841 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee844 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ee846 jne 0x124ee853 */
  if (!C.zf) goto L_124ee853;
  /* 124ee848 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee84b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee84e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124ee851 jmp 0x124ee871 */
  goto L_124ee871;
L_124ee853:;
  /* 124ee853 push 0x125092b8 */
  push32((uint32_t)(0x125092b8u));
  /* 124ee858 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee85b push eax */
  push32((uint32_t)(EAX));
  /* 124ee85c call 0x124ef090 */
  push32(0x124ee861u); f_124ef090();
  /* 124ee861 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee864 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ee866 jne 0x124ee871 */
  if (!C.zf) goto L_124ee871;
  /* 124ee868 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee86b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee86e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124ee871:;
  /* 124ee871 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 124ee875 jmp 0x124eea30 */
  goto L_124eea30;
L_124ee87a:;
  /* 124ee87a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ee87d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee881 jg 0x124ee891 */
  if ((!C.zf&&C.sf==C.of)) goto L_124ee891;
  /* 124ee883 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124ee886 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 124ee88c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 124ee88f jmp 0x124ee89d */
  goto L_124ee89d;
L_124ee891:;
  /* 124ee891 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124ee894 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 124ee89a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_124ee89d:;
  /* 124ee89d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee8a1 jle 0x124ee944 */
  if ((C.zf||C.sf!=C.of)) goto L_124ee944;
  /* 124ee8a7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee8aa cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee8ad jbe 0x124ee944 */
  if ((C.cf||C.zf)) goto L_124ee944;
  /* 124ee8b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ee8b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ee8b8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124ee8ba mov ecx, dword ptr [0x1250ac98] */
  ECX = (r32((uint32_t)(0x1250ac98)));
  /* 124ee8c0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124ee8c2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124ee8c6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 124ee8cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124ee8ce je 0x124ee907 */
  if (C.zf) goto L_124ee907;
  /* 124ee8d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee8d3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee8d6 jbe 0x124ee907 */
  if ((C.cf||C.zf)) goto L_124ee907;
  /* 124ee8d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee8db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124ee8dd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ee8e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124ee8e2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 124ee8e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee8e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124ee8e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee8ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee8ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124ee8f1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ee8f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee8f7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 124ee8fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee8fd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124ee8ff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee902 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee905 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_124ee907:;
  /* 124ee907 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee90a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124ee90c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ee90f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124ee911 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 124ee913 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee916 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124ee918 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee91b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee91e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124ee920 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ee923 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee926 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 124ee929 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee92c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124ee92e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee931 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee934 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124ee936 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ee939 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee93c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 124ee93f jmp 0x124ee89d */
  goto L_124ee89d;
L_124ee944:;
  /* 124ee944 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ee947 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124ee94a jmp 0x124ee666 */
  goto L_124ee666;
L_124ee94f:;
  /* 124ee94f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ee952 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124ee955 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ee957 je 0x124eea22 */
  if (C.zf) goto L_124eea22;
  /* 124ee95d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee960 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee963 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_124ee966:;
  /* 124ee966 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee969 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124ee96c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ee96e je 0x124eea20 */
  if (C.zf) goto L_124eea20;
  /* 124ee974 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee977 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee97a je 0x124eea20 */
  if (C.zf) goto L_124eea20;
  /* 124ee980 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee983 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124ee986 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee989 jne 0x124ee999 */
  if (!C.zf) goto L_124ee999;
  /* 124ee98b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee98e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee991 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 124ee994 jmp 0x124eea20 */
  goto L_124eea20;
L_124ee999:;
  /* 124ee999 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee99c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ee99e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124ee9a0 mov edx, dword ptr [0x1250ac98] */
  EDX = (r32((uint32_t)(0x1250ac98)));
  /* 124ee9a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ee9a8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 124ee9ac and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 124ee9b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ee9b3 je 0x124ee9ec */
  if (C.zf) goto L_124ee9ec;
  /* 124ee9b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee9b8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ee9bb jbe 0x124ee9ec */
  if ((C.cf||C.zf)) goto L_124ee9ec;
  /* 124ee9bd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee9c0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124ee9c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee9c5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124ee9c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 124ee9c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee9cc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124ee9ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee9d1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee9d4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124ee9d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee9d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ee9dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124ee9df mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee9e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124ee9e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ee9e7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ee9ea mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_124ee9ec:;
  /* 124ee9ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee9ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124ee9f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ee9f4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124ee9f6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 124ee9f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ee9fb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124ee9fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eea00 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eea03 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124eea05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eea08 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eea0b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 124eea0e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124eea11 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124eea13 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124eea16 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124eea19 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124eea1b jmp 0x124ee966 */
  goto L_124ee966;
L_124eea20:;
  /* 124eea20 jmp 0x124eea2b */
  goto L_124eea2b;
L_124eea22:;
  /* 124eea22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eea25 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eea28 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_124eea2b:;
  /* 124eea2b jmp 0x124ee666 */
  goto L_124ee666;
L_124eea30:;
  /* 124eea30 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124eea34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124eea36 je 0x124eea5c */
  if (C.zf) goto L_124eea5c;
  /* 124eea38 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124eea3b push edx */
  push32((uint32_t)(EDX));
  /* 124eea3c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124eea3f push eax */
  push32((uint32_t)(EAX));
  /* 124eea40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eea43 push ecx */
  push32((uint32_t)(ECX));
  /* 124eea44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eea47 push edx */
  push32((uint32_t)(EDX));
  /* 124eea48 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 124eea4b push eax */
  push32((uint32_t)(EAX));
  /* 124eea4c call 0x124ede90 */
  push32(0x124eea51u); f_124ede90();
  /* 124eea51 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eea54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eea57 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 124eea5a jmp 0x124eead7 */
  goto L_124eead7;
L_124eea5c:;
  /* 124eea5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eea5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eea61 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124eea63 mov ecx, dword ptr [0x1250ac98] */
  ECX = (r32((uint32_t)(0x1250ac98)));
  /* 124eea69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124eea6b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124eea6f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 124eea75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124eea77 je 0x124eeaa8 */
  if (C.zf) goto L_124eeaa8;
  /* 124eea79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eea7c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124eea7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eea81 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124eea83 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 124eea85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eea88 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124eea8a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eea8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eea90 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124eea92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eea95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eea98 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 124eea9b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124eea9e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124eeaa0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124eeaa3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124eeaa6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_124eeaa8:;
  /* 124eeaa8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eeaab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124eeaad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eeab0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124eeab2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 124eeab4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eeab7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124eeab9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eeabc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eeabf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124eeac1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eeac4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eeac7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124eeaca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124eeacd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124eeacf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124eead2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124eead5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_124eead7:;
  /* 124eead7 jmp 0x124ee666 */
  goto L_124ee666;
L_124eeadc:;
  /* 124eeadc mov esp, ebp */
  ESP = (EBP);
  /* 124eeade pop ebp */
  EBP = (pop32());
  /* 124eeadf ret  */
  ESPCHK(0x124ee660u, _esp0);
  ESP += 4; return;
}

/* FUN_1001eb80 @ 0x124eeb80 (650 bytes, 178 insns) */
void f_124eeb80(void) {
  FTRACE(0x124eeb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124eeb80 push ebp */
  push32((uint32_t)(EBP));
  /* 124eeb81 mov ebp, esp */
  EBP = (ESP);
  /* 124eeb83 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124eeb89 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eeb8d jne 0x124eece9 */
  if (!C.zf) goto L_124eece9;
  /* 124eeb93 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124eeb96 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 124eeb9c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 124eeba2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eeba5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124eebac mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 124eebb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124eebb8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 124eebbe push edx */
  push32((uint32_t)(EDX));
  /* 124eebbf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eebc2 push eax */
  push32((uint32_t)(EAX));
  /* 124eebc3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eebc6 push ecx */
  push32((uint32_t)(ECX));
  /* 124eebc7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eebca push edx */
  push32((uint32_t)(EDX));
  /* 124eebcb call 0x124effa0 */
  push32(0x124eebd0u); f_124effa0();
  /* 124eebd0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eebd3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124eebd6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eebda jne 0x124eec6f */
  if (!C.zf) goto L_124eec6f;
  /* 124eebe0 call dword ptr [0x1250f3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3e8))), 0x124eebe6u);
  /* 124eebe6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eebe9 je 0x124eebf0 */
  if (C.zf) goto L_124eebf0;
  /* 124eebeb jmp 0x124eeccd */
  goto L_124eeccd;
L_124eebf0:;
  /* 124eebf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124eebf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124eebf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124eebf6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eebf9 push eax */
  push32((uint32_t)(EAX));
  /* 124eebfa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eebfd push ecx */
  push32((uint32_t)(ECX));
  /* 124eebfe call 0x124effa0 */
  push32(0x124eec03u); f_124effa0();
  /* 124eec03 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eec06 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 124eec0c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eec13 jne 0x124eec1a */
  if (!C.zf) goto L_124eec1a;
  /* 124eec15 jmp 0x124eeccd */
  goto L_124eeccd;
L_124eec1a:;
  /* 124eec1a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 124eec1c push 0x125092c4 */
  push32((uint32_t)(0x125092c4u));
  /* 124eec21 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eec23 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 124eec29 push edx */
  push32((uint32_t)(EDX));
  /* 124eec2a call 0x124e09c0 */
  push32(0x124eec2fu); f_124e09c0();
  /* 124eec2f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eec32 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124eec35 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eec39 jne 0x124eec40 */
  if (!C.zf) goto L_124eec40;
  /* 124eec3b jmp 0x124eeccd */
  goto L_124eeccd;
L_124eec40:;
  /* 124eec40 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124eec47 push 0 */
  push32((uint32_t)(0x0u));
  /* 124eec49 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 124eec4f push eax */
  push32((uint32_t)(EAX));
  /* 124eec50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eec53 push ecx */
  push32((uint32_t)(ECX));
  /* 124eec54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eec57 push edx */
  push32((uint32_t)(EDX));
  /* 124eec58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eec5b push eax */
  push32((uint32_t)(EAX));
  /* 124eec5c call 0x124effa0 */
  push32(0x124eec61u); f_124effa0();
  /* 124eec61 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eec64 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124eec67 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eec6b jne 0x124eec6f */
  if (!C.zf) goto L_124eec6f;
  /* 124eec6d jmp 0x124eeccd */
  goto L_124eeccd;
L_124eec6f:;
  /* 124eec6f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 124eec71 push 0x125092c4 */
  push32((uint32_t)(0x125092c4u));
  /* 124eec76 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eec78 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124eec7b push ecx */
  push32((uint32_t)(ECX));
  /* 124eec7c call 0x124e09c0 */
  push32(0x124eec81u); f_124e09c0();
  /* 124eec81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eec84 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 124eec8a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 124eec8c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 124eec92 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eec95 jne 0x124eec99 */
  if (!C.zf) goto L_124eec99;
  /* 124eec97 jmp 0x124eeccd */
  goto L_124eeccd;
L_124eec99:;
  /* 124eec99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124eec9c push ecx */
  push32((uint32_t)(ECX));
  /* 124eec9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eeca0 push edx */
  push32((uint32_t)(EDX));
  /* 124eeca1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 124eeca7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124eeca9 push ecx */
  push32((uint32_t)(ECX));
  /* 124eecaa call 0x124e41e0 */
  push32(0x124eecafu); f_124e41e0();
  /* 124eecaf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eecb2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eecb6 je 0x124eecc6 */
  if (C.zf) goto L_124eecc6;
  /* 124eecb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eecba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eecbd push edx */
  push32((uint32_t)(EDX));
  /* 124eecbe call 0x124e1450 */
  push32(0x124eecc3u); f_124e1450();
  /* 124eecc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124eecc6:;
  /* 124eecc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eecc8 jmp 0x124eee06 */
  goto L_124eee06;
L_124eeccd:;
  /* 124eeccd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eecd1 je 0x124eece1 */
  if (C.zf) goto L_124eece1;
  /* 124eecd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eecd5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eecd8 push eax */
  push32((uint32_t)(EAX));
  /* 124eecd9 call 0x124e1450 */
  push32(0x124eecdeu); f_124e1450();
  /* 124eecde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124eece1:;
  /* 124eece1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124eece4 jmp 0x124eee06 */
  goto L_124eee06;
L_124eece9:;
  /* 124eece9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eeced jne 0x124eee03 */
  if (!C.zf) goto L_124eee03;
  /* 124eecf3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 124eecfd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124eed00 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 124eed06 push 0 */
  push32((uint32_t)(0x0u));
  /* 124eed08 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 124eed0e push edx */
  push32((uint32_t)(EDX));
  /* 124eed0f push 0x1250ce50 */
  push32((uint32_t)(0x1250ce50u));
  /* 124eed14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eed17 push eax */
  push32((uint32_t)(EAX));
  /* 124eed18 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eed1b push ecx */
  push32((uint32_t)(ECX));
  /* 124eed1c call 0x124efe00 */
  push32(0x124eed21u); f_124efe00();
  /* 124eed21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eed24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eed26 jne 0x124eed30 */
  if (!C.zf) goto L_124eed30;
  /* 124eed28 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124eed2b jmp 0x124eee06 */
  goto L_124eee06;
L_124eed30:;
  /* 124eed30 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124eed36 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 124eed39 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 124eed43 jmp 0x124eed54 */
  goto L_124eed54;
L_124eed45:;
  /* 124eed45 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124eed4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eed4e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_124eed54:;
  /* 124eed54 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eed5b jge 0x124eedff */
  if ((C.sf==C.of)) goto L_124eedff;
  /* 124eed61 cmp dword ptr [0x1250aea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1250aea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eed68 jle 0x124eed9b */
  if ((C.zf||C.sf!=C.of)) goto L_124eed9b;
  /* 124eed6a push 4 */
  push32((uint32_t)(0x4u));
  /* 124eed6c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124eed72 mov dl, byte ptr [ecx*2 + 0x1250ce50] */
  DL = (r8((uint32_t)(ECX*2 + 0x1250ce50)));
  /* 124eed79 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 124eed7f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 124eed85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124eed8a push eax */
  push32((uint32_t)(EAX));
  /* 124eed8b call 0x124e69d0 */
  push32(0x124eed90u); f_124e69d0();
  /* 124eed90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eed93 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 124eed99 jmp 0x124eedce */
  goto L_124eedce;
L_124eed9b:;
  /* 124eed9b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124eeda1 mov dl, byte ptr [ecx*2 + 0x1250ce50] */
  DL = (r8((uint32_t)(ECX*2 + 0x1250ce50)));
  /* 124eeda8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 124eedae mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 124eedb4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124eedb9 mov ecx, dword ptr [0x1250ac98] */
  ECX = (r32((uint32_t)(0x1250ac98)));
  /* 124eedbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124eedc1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124eedc5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 124eedc8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_124eedce:;
  /* 124eedce cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eedd5 je 0x124eedf8 */
  if (C.zf) goto L_124eedf8;
  /* 124eedd7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124eeddd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124eede0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124eede3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 124eedea lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 124eedee mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124eedf4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 124eedf6 jmp 0x124eedfa */
  goto L_124eedfa;
L_124eedf8:;
  /* 124eedf8 jmp 0x124eedff */
  goto L_124eedff;
L_124eedfa:;
  /* 124eedfa jmp 0x124eed45 */
  goto L_124eed45;
L_124eedff:;
  /* 124eedff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eee01 jmp 0x124eee06 */
  goto L_124eee06;
L_124eee03:;
  /* 124eee03 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_124eee06:;
  /* 124eee06 mov esp, ebp */
  ESP = (EBP);
  /* 124eee08 pop ebp */
  EBP = (pop32());
  /* 124eee09 ret  */
  ESPCHK(0x124eeb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ee10 @ 0x124eee10 (10 bytes, 5 insns) */
void f_124eee10(void) {
  FTRACE(0x124eee10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124eee10 push ebp */
  push32((uint32_t)(EBP));
  /* 124eee11 mov ebp, esp */
  EBP = (ESP);
  /* 124eee13 mov eax, dword ptr [0x1250bd88] */
  EAX = (r32((uint32_t)(0x1250bd88)));
  /* 124eee18 pop ebp */
  EBP = (pop32());
  /* 124eee19 ret  */
  ESPCHK(0x124eee10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ee20 @ 0x124eee20 (575 bytes, 196 insns) */
void f_124eee20(void) {
  FTRACE(0x124eee20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124eee20 push ebp */
  push32((uint32_t)(EBP));
  /* 124eee21 mov ebp, esp */
  EBP = (ESP);
  /* 124eee23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124eee25 push 0x125092d0 */
  push32((uint32_t)(0x125092d0u));
  /* 124eee2a push 0x124e9ac8 */
  push32((uint32_t)(0x124e9ac8u));
  /* 124eee2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 124eee35 push eax */
  push32((uint32_t)(EAX));
  /* 124eee36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 124eee3d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eee40 push ebx */
  push32((uint32_t)(EBX));
  /* 124eee41 push esi */
  push32((uint32_t)(ESI));
  /* 124eee42 push edi */
  push32((uint32_t)(EDI));
  /* 124eee43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124eee46 cmp dword ptr [0x1250ce5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eee4d jne 0x124eee9e */
  if (!C.zf) goto L_124eee9e;
  /* 124eee4f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 124eee52 push eax */
  push32((uint32_t)(EAX));
  /* 124eee53 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eee55 push 0x12508a04 */
  push32((uint32_t)(0x12508a04u));
  /* 124eee5a push 1 */
  push32((uint32_t)(0x1u));
  /* 124eee5c call dword ptr [0x1250f324] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f324))), 0x124eee62u);
  /* 124eee62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eee64 je 0x124eee72 */
  if (C.zf) goto L_124eee72;
  /* 124eee66 mov dword ptr [0x1250ce5c], 1 */
  w32((uint32_t)(0x1250ce5c), (0x1u));
  /* 124eee70 jmp 0x124eee9e */
  goto L_124eee9e;
L_124eee72:;
  /* 124eee72 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 124eee75 push ecx */
  push32((uint32_t)(ECX));
  /* 124eee76 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eee78 push 0x12508a00 */
  push32((uint32_t)(0x12508a00u));
  /* 124eee7d push 1 */
  push32((uint32_t)(0x1u));
  /* 124eee7f push 0 */
  push32((uint32_t)(0x0u));
  /* 124eee81 call dword ptr [0x1250f334] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f334))), 0x124eee87u);
  /* 124eee87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eee89 je 0x124eee97 */
  if (C.zf) goto L_124eee97;
  /* 124eee8b mov dword ptr [0x1250ce5c], 2 */
  w32((uint32_t)(0x1250ce5c), (0x2u));
  /* 124eee95 jmp 0x124eee9e */
  goto L_124eee9e;
L_124eee97:;
  /* 124eee97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eee99 jmp 0x124ef079 */
  goto L_124ef079;
L_124eee9e:;
  /* 124eee9e cmp dword ptr [0x1250ce5c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce5c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eeea5 jne 0x124eeec2 */
  if (!C.zf) goto L_124eeec2;
  /* 124eeea7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124eeeaa push edx */
  push32((uint32_t)(EDX));
  /* 124eeeab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eeeae push eax */
  push32((uint32_t)(EAX));
  /* 124eeeaf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eeeb2 push ecx */
  push32((uint32_t)(ECX));
  /* 124eeeb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eeeb6 push edx */
  push32((uint32_t)(EDX));
  /* 124eeeb7 call dword ptr [0x1250f324] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f324))), 0x124eeebdu);
  /* 124eeebd jmp 0x124ef079 */
  goto L_124ef079;
L_124eeec2:;
  /* 124eeec2 cmp dword ptr [0x1250ce5c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce5c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eeec9 jne 0x124ef077 */
  if (!C.zf) goto L_124ef077;
  /* 124eeecf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eeed3 jne 0x124eeedd */
  if (!C.zf) goto L_124eeedd;
  /* 124eeed5 mov eax, dword ptr [0x1250cdd0] */
  EAX = (r32((uint32_t)(0x1250cdd0)));
  /* 124eeeda mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_124eeedd:;
  /* 124eeedd push 0 */
  push32((uint32_t)(0x0u));
  /* 124eeedf push 0 */
  push32((uint32_t)(0x0u));
  /* 124eeee1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124eeee3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124eeee5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eeee8 push ecx */
  push32((uint32_t)(ECX));
  /* 124eeee9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eeeec push edx */
  push32((uint32_t)(EDX));
  /* 124eeeed push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124eeef2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124eeef5 push eax */
  push32((uint32_t)(EAX));
  /* 124eeef6 call dword ptr [0x1250f378] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f378))), 0x124eeefcu);
  /* 124eeefc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 124eeeff cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eef03 jne 0x124eef0c */
  if (!C.zf) goto L_124eef0c;
  /* 124eef05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eef07 jmp 0x124ef079 */
  goto L_124ef079;
L_124eef0c:;
  /* 124eef0c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124eef13 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124eef16 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eef19 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124eef1b call 0x124e3b60 */
  push32(0x124eef20u); f_124e3b60();
  /* 124eef20 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 124eef23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124eef26 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124eef29 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 124eef2c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 124eef2f push edx */
  push32((uint32_t)(EDX));
  /* 124eef30 push 0 */
  push32((uint32_t)(0x0u));
  /* 124eef32 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124eef35 push eax */
  push32((uint32_t)(EAX));
  /* 124eef36 call 0x124e4730 */
  push32(0x124eef3bu); f_124e4730();
  /* 124eef3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eef3e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124eef45 jmp 0x124eef5e */
  goto L_124eef5e;
  /* 124eef47 mov eax, 1 */
  EAX = (0x1u);
  /* 124eef4c ret  */
  ESPCHK(0x124eee20u, _esp0);
  ESP += 4; return;
  /* 124eef4d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124eef50 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 124eef57 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124eef5e:;
  /* 124eef5e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eef62 jne 0x124eef6b */
  if (!C.zf) goto L_124eef6b;
  /* 124eef64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eef66 jmp 0x124ef079 */
  goto L_124ef079;
L_124eef6b:;
  /* 124eef6b push 0 */
  push32((uint32_t)(0x0u));
  /* 124eef6d push 0 */
  push32((uint32_t)(0x0u));
  /* 124eef6f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124eef72 push ecx */
  push32((uint32_t)(ECX));
  /* 124eef73 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124eef76 push edx */
  push32((uint32_t)(EDX));
  /* 124eef77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eef7a push eax */
  push32((uint32_t)(EAX));
  /* 124eef7b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eef7e push ecx */
  push32((uint32_t)(ECX));
  /* 124eef7f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124eef84 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124eef87 push edx */
  push32((uint32_t)(EDX));
  /* 124eef88 call dword ptr [0x1250f378] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f378))), 0x124eef8eu);
  /* 124eef8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eef90 jne 0x124eef99 */
  if (!C.zf) goto L_124eef99;
  /* 124eef92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eef94 jmp 0x124ef079 */
  goto L_124ef079;
L_124eef99:;
  /* 124eef99 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124eefa0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124eefa3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 124eefa7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eefaa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124eefac call 0x124e3b60 */
  push32(0x124eefb1u); f_124e3b60();
  /* 124eefb1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 124eefb4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124eefb7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 124eefba mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 124eefbd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124eefc4 jmp 0x124eefdd */
  goto L_124eefdd;
  /* 124eefc6 mov eax, 1 */
  EAX = (0x1u);
  /* 124eefcb ret  */
  ESPCHK(0x124eee20u, _esp0);
  ESP += 4; return;
  /* 124eefcc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124eefcf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 124eefd6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124eefdd:;
  /* 124eefdd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eefe1 jne 0x124eefea */
  if (!C.zf) goto L_124eefea;
  /* 124eefe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eefe5 jmp 0x124ef079 */
  goto L_124ef079;
L_124eefea:;
  /* 124eefea cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eefee jne 0x124eeff9 */
  if (!C.zf) goto L_124eeff9;
  /* 124eeff0 mov edx, dword ptr [0x1250cdc0] */
  EDX = (r32((uint32_t)(0x1250cdc0)));
  /* 124eeff6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_124eeff9:;
  /* 124eeff9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eeffc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124eefff mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 124ef005 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ef008 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124ef00b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 124ef012 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124ef015 push ecx */
  push32((uint32_t)(ECX));
  /* 124ef016 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 124ef019 push edx */
  push32((uint32_t)(EDX));
  /* 124ef01a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124ef01d push eax */
  push32((uint32_t)(EAX));
  /* 124ef01e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef021 push ecx */
  push32((uint32_t)(ECX));
  /* 124ef022 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124ef025 push edx */
  push32((uint32_t)(EDX));
  /* 124ef026 call dword ptr [0x1250f334] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f334))), 0x124ef02cu);
  /* 124ef02c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 124ef02f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ef032 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124ef035 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124ef037 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 124ef03c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef042 je 0x124ef058 */
  if (C.zf) goto L_124ef058;
  /* 124ef044 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ef047 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124ef04a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124ef04c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124ef050 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef056 je 0x124ef05c */
  if (C.zf) goto L_124ef05c;
L_124ef058:;
  /* 124ef058 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ef05a jmp 0x124ef079 */
  goto L_124ef079;
L_124ef05c:;
  /* 124ef05c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ef05f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124ef061 push eax */
  push32((uint32_t)(EAX));
  /* 124ef062 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124ef065 push ecx */
  push32((uint32_t)(ECX));
  /* 124ef066 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ef069 push edx */
  push32((uint32_t)(EDX));
  /* 124ef06a call 0x124e88b0 */
  push32(0x124ef06fu); f_124e88b0();
  /* 124ef06f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef072 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124ef075 jmp 0x124ef079 */
  goto L_124ef079;
L_124ef077:;
  /* 124ef077 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124ef079:;
  /* 124ef079 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 124ef07c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ef07f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 124ef086 pop edi */
  EDI = (pop32());
  /* 124ef087 pop esi */
  ESI = (pop32());
  /* 124ef088 pop ebx */
  EBX = (pop32());
  /* 124ef089 mov esp, ebp */
  ESP = (EBP);
  /* 124ef08b pop ebp */
  EBP = (pop32());
  /* 124ef08c ret  */
  ESPCHK(0x124eee20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f090 @ 0x124ef090 (208 bytes, 85 insns) */
void f_124ef090(void) {
  FTRACE(0x124ef090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ef090 push ebp */
  push32((uint32_t)(EBP));
  /* 124ef091 mov ebp, esp */
  EBP = (ESP);
  /* 124ef093 push edi */
  push32((uint32_t)(EDI));
  /* 124ef094 push esi */
  push32((uint32_t)(ESI));
  /* 124ef095 push ebx */
  push32((uint32_t)(EBX));
  /* 124ef096 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 124ef099 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef09c lea eax, [0x1250cdb8] */
  EAX = ((uint32_t)(0x1250cdb8));
  /* 124ef0a2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef0a6 jne 0x124ef0e3 */
  if (!C.zf) goto L_124ef0e3;
  /* 124ef0a8 mov al, 0xff */
  AL = (0xffu);
  /* 124ef0aa mov edi, edi */
  EDI = (EDI);
L_124ef0ac:;
  /* 124ef0ac or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124ef0ae je 0x124ef0de */
  if (C.zf) goto L_124ef0de;
  /* 124ef0b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124ef0b2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 124ef0b3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 124ef0b5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 124ef0b6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ef0b8 je 0x124ef0ac */
  if (C.zf) goto L_124ef0ac;
  /* 124ef0ba sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124ef0bc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ef0be sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124ef0c0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 124ef0c3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 124ef0c5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 124ef0c7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 124ef0c9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124ef0cb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ef0cd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124ef0cf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 124ef0d2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 124ef0d4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 124ef0d6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ef0d8 je 0x124ef0ac */
  if (C.zf) goto L_124ef0ac;
  /* 124ef0da sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124ef0dc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_124ef0de:;
  /* 124ef0de movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 124ef0e1 jmp 0x124ef15b */
  goto L_124ef15b;
L_124ef0e3:;
  /* 124ef0e3 lock inc dword ptr [0x1250cf4c] */
  x86_unimpl("lock inc @ 0x124ef0e3");
  /* 124ef0ea cmp dword ptr [0x1250cf3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef0f1 jg 0x124ef0f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_124ef0f7;
  /* 124ef0f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124ef0f5 jmp 0x124ef10c */
  goto L_124ef10c;
L_124ef0f7:;
  /* 124ef0f7 lock dec dword ptr [0x1250cf4c] */
  x86_unimpl("lock dec @ 0x124ef0f7");
  /* 124ef0fe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124ef100 call 0x124e43c0 */
  push32(0x124ef105u); f_124e43c0();
  /* 124ef105 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_124ef10c:;
  /* 124ef10c mov eax, 0xff */
  EAX = (0xffu);
  /* 124ef111 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 124ef113 nop  */
  /* nop */
L_124ef114:;
  /* 124ef114 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124ef116 je 0x124ef13f */
  if (C.zf) goto L_124ef13f;
  /* 124ef118 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124ef11a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 124ef11b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 124ef11d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 124ef11e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ef120 je 0x124ef114 */
  if (C.zf) goto L_124ef114;
  /* 124ef122 push eax */
  push32((uint32_t)(EAX));
  /* 124ef123 push ebx */
  push32((uint32_t)(EBX));
  /* 124ef124 call 0x124f0200 */
  push32(0x124ef129u); f_124f0200();
  /* 124ef129 mov ebx, eax */
  EBX = (EAX);
  /* 124ef12b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef12e call 0x124f0200 */
  push32(0x124ef133u); f_124f0200();
  /* 124ef133 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef136 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ef138 je 0x124ef114 */
  if (C.zf) goto L_124ef114;
  /* 124ef13a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ef13c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_124ef13f:;
  /* 124ef13f mov ebx, eax */
  EBX = (EAX);
  /* 124ef141 pop eax */
  EAX = (pop32());
  /* 124ef142 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ef144 jne 0x124ef14f */
  if (!C.zf) goto L_124ef14f;
  /* 124ef146 lock dec dword ptr [0x1250cf4c] */
  x86_unimpl("lock dec @ 0x124ef146");
  /* 124ef14d jmp 0x124ef159 */
  goto L_124ef159;
L_124ef14f:;
  /* 124ef14f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124ef151 call 0x124e4460 */
  push32(0x124ef156u); f_124e4460();
  /* 124ef156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124ef159:;
  /* 124ef159 mov eax, ebx */
  EAX = (EBX);
L_124ef15b:;
  /* 124ef15b pop ebx */
  EBX = (pop32());
  /* 124ef15c pop esi */
  ESI = (pop32());
  /* 124ef15d pop edi */
  EDI = (pop32());
  /* 124ef15e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124ef15f ret  */
  ESPCHK(0x124ef090u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f160 @ 0x124ef160 (257 bytes, 103 insns) */
void f_124ef160(void) {
  FTRACE(0x124ef160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ef160 push ebp */
  push32((uint32_t)(EBP));
  /* 124ef161 mov ebp, esp */
  EBP = (ESP);
  /* 124ef163 push edi */
  push32((uint32_t)(EDI));
  /* 124ef164 push esi */
  push32((uint32_t)(ESI));
  /* 124ef165 push ebx */
  push32((uint32_t)(EBX));
  /* 124ef166 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ef169 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ef16b je 0x124ef25a */
  if (C.zf) goto L_124ef25a;
  /* 124ef171 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef174 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 124ef177 lea eax, [0x1250cdb8] */
  EAX = ((uint32_t)(0x1250cdb8));
  /* 124ef17d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef181 jne 0x124ef1d1 */
  if (!C.zf) goto L_124ef1d1;
  /* 124ef183 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 124ef185 mov bl, 0x5a */
  BL = (0x5au);
  /* 124ef187 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 124ef189 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124ef18c:;
  /* 124ef18c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 124ef18e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 124ef190 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 124ef192 je 0x124ef1b5 */
  if (C.zf) goto L_124ef1b5;
  /* 124ef194 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124ef196 je 0x124ef1b5 */
  if (C.zf) goto L_124ef1b5;
  /* 124ef198 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 124ef199 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 124ef19a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ef19c jb 0x124ef1a4 */
  if (C.cf) goto L_124ef1a4;
  /* 124ef19e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ef1a0 ja 0x124ef1a4 */
  if ((!C.cf&&!C.zf)) goto L_124ef1a4;
  /* 124ef1a2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_124ef1a4:;
  /* 124ef1a4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ef1a6 jb 0x124ef1ae */
  if (C.cf) goto L_124ef1ae;
  /* 124ef1a8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ef1aa ja 0x124ef1ae */
  if ((!C.cf&&!C.zf)) goto L_124ef1ae;
  /* 124ef1ac add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_124ef1ae:;
  /* 124ef1ae cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ef1b0 jne 0x124ef1bf */
  if (!C.zf) goto L_124ef1bf;
  /* 124ef1b2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 124ef1b3 jne 0x124ef18c */
  if (!C.zf) goto L_124ef18c;
L_124ef1b5:;
  /* 124ef1b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ef1b7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ef1b9 je 0x124ef25a */
  if (C.zf) goto L_124ef25a;
L_124ef1bf:;
  /* 124ef1bf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 124ef1c4 jb 0x124ef25a */
  if (C.cf) goto L_124ef25a;
  /* 124ef1ca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 124ef1cc jmp 0x124ef25a */
  goto L_124ef25a;
L_124ef1d1:;
  /* 124ef1d1 lock inc dword ptr [0x1250cf4c] */
  x86_unimpl("lock inc @ 0x124ef1d1");
  /* 124ef1d8 cmp dword ptr [0x1250cf3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef1df jg 0x124ef1e5 */
  if ((!C.zf&&C.sf==C.of)) goto L_124ef1e5;
  /* 124ef1e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124ef1e3 jmp 0x124ef1fe */
  goto L_124ef1fe;
L_124ef1e5:;
  /* 124ef1e5 lock dec dword ptr [0x1250cf4c] */
  x86_unimpl("lock dec @ 0x124ef1e5");
  /* 124ef1ec mov ebx, ecx */
  EBX = (ECX);
  /* 124ef1ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124ef1f0 call 0x124e43c0 */
  push32(0x124ef1f5u); f_124e43c0();
  /* 124ef1f5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 124ef1fc mov ecx, ebx */
  ECX = (EBX);
L_124ef1fe:;
  /* 124ef1fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ef200 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 124ef202 mov edi, edi */
  EDI = (EDI);
L_124ef204:;
  /* 124ef204 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124ef206 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ef208 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 124ef20a je 0x124ef22f */
  if (C.zf) goto L_124ef22f;
  /* 124ef20c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 124ef20e je 0x124ef22f */
  if (C.zf) goto L_124ef22f;
  /* 124ef210 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 124ef211 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 124ef212 push ecx */
  push32((uint32_t)(ECX));
  /* 124ef213 push eax */
  push32((uint32_t)(EAX));
  /* 124ef214 push ebx */
  push32((uint32_t)(EBX));
  /* 124ef215 call 0x124f0200 */
  push32(0x124ef21au); f_124f0200();
  /* 124ef21a mov ebx, eax */
  EBX = (EAX);
  /* 124ef21c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef21f call 0x124f0200 */
  push32(0x124ef224u); f_124f0200();
  /* 124ef224 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef227 pop ecx */
  ECX = (pop32());
  /* 124ef228 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef22a jne 0x124ef235 */
  if (!C.zf) goto L_124ef235;
  /* 124ef22c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 124ef22d jne 0x124ef204 */
  if (!C.zf) goto L_124ef204;
L_124ef22f:;
  /* 124ef22f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ef231 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef233 je 0x124ef23e */
  if (C.zf) goto L_124ef23e;
L_124ef235:;
  /* 124ef235 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 124ef23a jb 0x124ef23e */
  if (C.cf) goto L_124ef23e;
  /* 124ef23c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_124ef23e:;
  /* 124ef23e pop eax */
  EAX = (pop32());
  /* 124ef23f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ef241 jne 0x124ef24c */
  if (!C.zf) goto L_124ef24c;
  /* 124ef243 lock dec dword ptr [0x1250cf4c] */
  x86_unimpl("lock dec @ 0x124ef243");
  /* 124ef24a jmp 0x124ef25a */
  goto L_124ef25a;
L_124ef24c:;
  /* 124ef24c mov ebx, ecx */
  EBX = (ECX);
  /* 124ef24e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124ef250 call 0x124e4460 */
  push32(0x124ef255u); f_124e4460();
  /* 124ef255 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef258 mov ecx, ebx */
  ECX = (EBX);
L_124ef25a:;
  /* 124ef25a mov eax, ecx */
  EAX = (ECX);
  /* 124ef25c pop ebx */
  EBX = (pop32());
  /* 124ef25d pop esi */
  ESI = (pop32());
  /* 124ef25e pop edi */
  EDI = (pop32());
  /* 124ef25f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124ef260 ret  */
  ESPCHK(0x124ef160u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f270 @ 0x124ef270 (255 bytes, 88 insns) */
void f_124ef270(void) {
  FTRACE(0x124ef270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ef270 push ebp */
  push32((uint32_t)(EBP));
  /* 124ef271 mov ebp, esp */
  EBP = (ESP);
  /* 124ef273 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_124ef276:;
  /* 124ef276 cmp dword ptr [0x1250aea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1250aea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef27d jle 0x124ef296 */
  if ((C.zf||C.sf!=C.of)) goto L_124ef296;
  /* 124ef27f push 8 */
  push32((uint32_t)(0x8u));
  /* 124ef281 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef284 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ef286 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124ef288 push ecx */
  push32((uint32_t)(ECX));
  /* 124ef289 call 0x124e69d0 */
  push32(0x124ef28eu); f_124e69d0();
  /* 124ef28e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef291 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 124ef294 jmp 0x124ef2af */
  goto L_124ef2af;
L_124ef296:;
  /* 124ef296 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef299 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ef29b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124ef29d mov ecx, dword ptr [0x1250ac98] */
  ECX = (r32((uint32_t)(0x1250ac98)));
  /* 124ef2a3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124ef2a5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124ef2a9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 124ef2ac mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_124ef2af:;
  /* 124ef2af cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef2b3 je 0x124ef2c0 */
  if (C.zf) goto L_124ef2c0;
  /* 124ef2b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef2b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef2bb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124ef2be jmp 0x124ef276 */
  goto L_124ef276;
L_124ef2c0:;
  /* 124ef2c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef2c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124ef2c5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124ef2c7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124ef2ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef2cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef2d0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124ef2d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ef2d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124ef2d9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef2dd je 0x124ef2e5 */
  if (C.zf) goto L_124ef2e5;
  /* 124ef2df cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef2e3 jne 0x124ef2f8 */
  if (!C.zf) goto L_124ef2f8;
L_124ef2e5:;
  /* 124ef2e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef2e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ef2ea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124ef2ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ef2ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef2f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef2f5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_124ef2f8:;
  /* 124ef2f8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_124ef2ff:;
  /* 124ef2ff cmp dword ptr [0x1250aea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1250aea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef306 jle 0x124ef31b */
  if ((C.zf||C.sf!=C.of)) goto L_124ef31b;
  /* 124ef308 push 4 */
  push32((uint32_t)(0x4u));
  /* 124ef30a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ef30d push edx */
  push32((uint32_t)(EDX));
  /* 124ef30e call 0x124e69d0 */
  push32(0x124ef313u); f_124e69d0();
  /* 124ef313 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef316 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124ef319 jmp 0x124ef330 */
  goto L_124ef330;
L_124ef31b:;
  /* 124ef31b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ef31e mov ecx, dword ptr [0x1250ac98] */
  ECX = (r32((uint32_t)(0x1250ac98)));
  /* 124ef324 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124ef326 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124ef32a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 124ef32d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_124ef330:;
  /* 124ef330 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef334 je 0x124ef35b */
  if (C.zf) goto L_124ef35b;
  /* 124ef336 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ef339 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ef33c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ef33f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 124ef343 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124ef346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef349 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ef34b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124ef34d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124ef350 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef353 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef356 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 124ef359 jmp 0x124ef2ff */
  goto L_124ef2ff;
L_124ef35b:;
  /* 124ef35b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef35f jne 0x124ef368 */
  if (!C.zf) goto L_124ef368;
  /* 124ef361 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ef364 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124ef366 jmp 0x124ef36b */
  goto L_124ef36b;
L_124ef368:;
  /* 124ef368 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_124ef36b:;
  /* 124ef36b mov esp, ebp */
  ESP = (EBP);
  /* 124ef36d pop ebp */
  EBP = (pop32());
  /* 124ef36e ret  */
  ESPCHK(0x124ef270u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f370 @ 0x124ef370 (17 bytes, 8 insns) */
void f_124ef370(void) {
  FTRACE(0x124ef370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ef370 push ebp */
  push32((uint32_t)(EBP));
  /* 124ef371 mov ebp, esp */
  EBP = (ESP);
  /* 124ef373 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef376 push eax */
  push32((uint32_t)(EAX));
  /* 124ef377 call 0x124ef270 */
  push32(0x124ef37cu); f_124ef270();
  /* 124ef37c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef37f pop ebp */
  EBP = (pop32());
  /* 124ef380 ret  */
  ESPCHK(0x124ef370u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f390 @ 0x124ef390 (297 bytes, 106 insns) */
void f_124ef390(void) {
  FTRACE(0x124ef390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ef390 push ebp */
  push32((uint32_t)(EBP));
  /* 124ef391 mov ebp, esp */
  EBP = (ESP);
  /* 124ef393 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ef396 push esi */
  push32((uint32_t)(ESI));
L_124ef397:;
  /* 124ef397 cmp dword ptr [0x1250aea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1250aea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef39e jle 0x124ef3b7 */
  if ((C.zf||C.sf!=C.of)) goto L_124ef3b7;
  /* 124ef3a0 push 8 */
  push32((uint32_t)(0x8u));
  /* 124ef3a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef3a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ef3a7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124ef3a9 push ecx */
  push32((uint32_t)(ECX));
  /* 124ef3aa call 0x124e69d0 */
  push32(0x124ef3afu); f_124e69d0();
  /* 124ef3af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef3b2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124ef3b5 jmp 0x124ef3d0 */
  goto L_124ef3d0;
L_124ef3b7:;
  /* 124ef3b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef3ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ef3bc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124ef3be mov ecx, dword ptr [0x1250ac98] */
  ECX = (r32((uint32_t)(0x1250ac98)));
  /* 124ef3c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124ef3c6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124ef3ca and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 124ef3cd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_124ef3d0:;
  /* 124ef3d0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef3d4 je 0x124ef3e1 */
  if (C.zf) goto L_124ef3e1;
  /* 124ef3d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef3d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef3dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124ef3df jmp 0x124ef397 */
  goto L_124ef397;
L_124ef3e1:;
  /* 124ef3e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef3e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124ef3e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124ef3e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124ef3eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef3ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef3f1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124ef3f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ef3f7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 124ef3fa cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef3fe je 0x124ef406 */
  if (C.zf) goto L_124ef406;
  /* 124ef400 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef404 jne 0x124ef419 */
  if (!C.zf) goto L_124ef419;
L_124ef406:;
  /* 124ef406 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef409 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ef40b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124ef40d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ef410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef413 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef416 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_124ef419:;
  /* 124ef419 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124ef420 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_124ef427:;
  /* 124ef427 cmp dword ptr [0x1250aea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1250aea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef42e jle 0x124ef443 */
  if ((C.zf||C.sf!=C.of)) goto L_124ef443;
  /* 124ef430 push 4 */
  push32((uint32_t)(0x4u));
  /* 124ef432 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ef435 push edx */
  push32((uint32_t)(EDX));
  /* 124ef436 call 0x124e69d0 */
  push32(0x124ef43bu); f_124e69d0();
  /* 124ef43b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef43e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124ef441 jmp 0x124ef458 */
  goto L_124ef458;
L_124ef443:;
  /* 124ef443 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ef446 mov ecx, dword ptr [0x1250ac98] */
  ECX = (r32((uint32_t)(0x1250ac98)));
  /* 124ef44c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124ef44e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124ef452 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 124ef455 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_124ef458:;
  /* 124ef458 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef45c je 0x124ef499 */
  if (C.zf) goto L_124ef499;
  /* 124ef45e push 0 */
  push32((uint32_t)(0x0u));
  /* 124ef460 push 0xa */
  push32((uint32_t)(0xau));
  /* 124ef462 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ef465 push eax */
  push32((uint32_t)(EAX));
  /* 124ef466 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef469 push ecx */
  push32((uint32_t)(ECX));
  /* 124ef46a call 0x124f0330 */
  push32(0x124ef46fu); f_124f0330();
  /* 124ef46f mov ecx, eax */
  ECX = (EAX);
  /* 124ef471 mov esi, edx */
  ESI = (EDX);
  /* 124ef473 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ef476 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ef479 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124ef47a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef47c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef47e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124ef481 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 124ef484 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef487 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ef489 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124ef48b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ef48e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef491 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef494 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 124ef497 jmp 0x124ef427 */
  goto L_124ef427;
L_124ef499:;
  /* 124ef499 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef49d jne 0x124ef4ae */
  if (!C.zf) goto L_124ef4ae;
  /* 124ef49f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef4a2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124ef4a4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ef4a7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef4aa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124ef4ac jmp 0x124ef4b4 */
  goto L_124ef4b4;
L_124ef4ae:;
  /* 124ef4ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef4b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_124ef4b4:;
  /* 124ef4b4 pop esi */
  ESI = (pop32());
  /* 124ef4b5 mov esp, ebp */
  ESP = (EBP);
  /* 124ef4b7 pop ebp */
  EBP = (pop32());
  /* 124ef4b8 ret  */
  ESPCHK(0x124ef390u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f4c0 @ 0x124ef4c0 (61 bytes, 18 insns) */
void f_124ef4c0(void) {
  FTRACE(0x124ef4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ef4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ef4c1 mov ebp, esp */
  EBP = (ESP);
  /* 124ef4c3 cmp dword ptr [0x1250cf18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef4ca jne 0x124ef4fb */
  if (!C.zf) goto L_124ef4fb;
  /* 124ef4cc push 0xb */
  push32((uint32_t)(0xbu));
  /* 124ef4ce call 0x124e43c0 */
  push32(0x124ef4d3u); f_124e43c0();
  /* 124ef4d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef4d6 cmp dword ptr [0x1250cf18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef4dd jne 0x124ef4f1 */
  if (!C.zf) goto L_124ef4f1;
  /* 124ef4df call 0x124ef520 */
  push32(0x124ef4e4u); f_124ef520();
  /* 124ef4e4 mov eax, dword ptr [0x1250cf18] */
  EAX = (r32((uint32_t)(0x1250cf18)));
  /* 124ef4e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef4ec mov dword ptr [0x1250cf18], eax */
  w32((uint32_t)(0x1250cf18), (EAX));
L_124ef4f1:;
  /* 124ef4f1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 124ef4f3 call 0x124e4460 */
  push32(0x124ef4f8u); f_124e4460();
  /* 124ef4f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124ef4fb:;
  /* 124ef4fb pop ebp */
  EBP = (pop32());
  /* 124ef4fc ret  */
  ESPCHK(0x124ef4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f500 @ 0x124ef500 (30 bytes, 11 insns) */
void f_124ef500(void) {
  FTRACE(0x124ef500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ef500 push ebp */
  push32((uint32_t)(EBP));
  /* 124ef501 mov ebp, esp */
  EBP = (ESP);
  /* 124ef503 push 0xb */
  push32((uint32_t)(0xbu));
  /* 124ef505 call 0x124e43c0 */
  push32(0x124ef50au); f_124e43c0();
  /* 124ef50a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef50d call 0x124ef520 */
  push32(0x124ef512u); f_124ef520();
  /* 124ef512 push 0xb */
  push32((uint32_t)(0xbu));
  /* 124ef514 call 0x124e4460 */
  push32(0x124ef519u); f_124e4460();
  /* 124ef519 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef51c pop ebp */
  EBP = (pop32());
  /* 124ef51d ret  */
  ESPCHK(0x124ef500u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f520 @ 0x124ef520 (939 bytes, 266 insns) */
void f_124ef520(void) {
  FTRACE(0x124ef520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ef520 push ebp */
  push32((uint32_t)(EBP));
  /* 124ef521 mov ebp, esp */
  EBP = (ESP);
  /* 124ef523 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ef526 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124ef52d push 0xc */
  push32((uint32_t)(0xcu));
  /* 124ef52f call 0x124e43c0 */
  push32(0x124ef534u); f_124e43c0();
  /* 124ef534 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef537 mov dword ptr [0x1250ce60], 0 */
  w32((uint32_t)(0x1250ce60), (0x0u));
  /* 124ef541 mov dword ptr [0x1250be38], 0xffffffff */
  w32((uint32_t)(0x1250be38), (0xffffffffu));
  /* 124ef54b mov eax, dword ptr [0x1250be38] */
  EAX = (r32((uint32_t)(0x1250be38)));
  /* 124ef550 mov dword ptr [0x1250be28], eax */
  w32((uint32_t)(0x1250be28), (EAX));
  /* 124ef555 push 0x12509330 */
  push32((uint32_t)(0x12509330u));
  /* 124ef55a call 0x124f03a0 */
  push32(0x124ef55fu); f_124f03a0();
  /* 124ef55f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef562 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124ef565 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef569 jne 0x124ef6a3 */
  if (!C.zf) goto L_124ef6a3;
  /* 124ef56f push 0xc */
  push32((uint32_t)(0xcu));
  /* 124ef571 call 0x124e4460 */
  push32(0x124ef576u); f_124e4460();
  /* 124ef576 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef579 push 0x1250ce68 */
  push32((uint32_t)(0x1250ce68u));
  /* 124ef57e call dword ptr [0x1250f2e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2e8))), 0x124ef584u);
  /* 124ef584 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef587 je 0x124ef69e */
  if (C.zf) goto L_124ef69e;
  /* 124ef58d mov dword ptr [0x1250ce60], 1 */
  w32((uint32_t)(0x1250ce60), (0x1u));
  /* 124ef597 mov ecx, dword ptr [0x1250ce68] */
  ECX = (r32((uint32_t)(0x1250ce68)));
  /* 124ef59d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ef5a0 mov dword ptr [0x1250bd90], ecx */
  w32((uint32_t)(0x1250bd90), (ECX));
  /* 124ef5a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124ef5a8 mov dx, word ptr [0x1250ceae] */
  DX = (r16((uint32_t)(0x1250ceae)));
  /* 124ef5af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124ef5b1 je 0x124ef5c9 */
  if (C.zf) goto L_124ef5c9;
  /* 124ef5b3 mov eax, dword ptr [0x1250cebc] */
  EAX = (r32((uint32_t)(0x1250cebc)));
  /* 124ef5b8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ef5bb mov ecx, dword ptr [0x1250bd90] */
  ECX = (r32((uint32_t)(0x1250bd90)));
  /* 124ef5c1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef5c3 mov dword ptr [0x1250bd90], ecx */
  w32((uint32_t)(0x1250bd90), (ECX));
L_124ef5c9:;
  /* 124ef5c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124ef5cb mov dx, word ptr [0x1250cf02] */
  DX = (r16((uint32_t)(0x1250cf02)));
  /* 124ef5d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124ef5d4 je 0x124ef5fe */
  if (C.zf) goto L_124ef5fe;
  /* 124ef5d6 cmp dword ptr [0x1250cf10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef5dd je 0x124ef5fe */
  if (C.zf) goto L_124ef5fe;
  /* 124ef5df mov dword ptr [0x1250bd94], 1 */
  w32((uint32_t)(0x1250bd94), (0x1u));
  /* 124ef5e9 mov eax, dword ptr [0x1250cf10] */
  EAX = (r32((uint32_t)(0x1250cf10)));
  /* 124ef5ee sub eax, dword ptr [0x1250cebc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250cebc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ef5f4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ef5f7 mov dword ptr [0x1250bd98], eax */
  w32((uint32_t)(0x1250bd98), (EAX));
  /* 124ef5fc jmp 0x124ef612 */
  goto L_124ef612;
L_124ef5fe:;
  /* 124ef5fe mov dword ptr [0x1250bd94], 0 */
  w32((uint32_t)(0x1250bd94), (0x0u));
  /* 124ef608 mov dword ptr [0x1250bd98], 0 */
  w32((uint32_t)(0x1250bd98), (0x0u));
L_124ef612:;
  /* 124ef612 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 124ef615 push ecx */
  push32((uint32_t)(ECX));
  /* 124ef616 push 0 */
  push32((uint32_t)(0x0u));
  /* 124ef618 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 124ef61a mov edx, dword ptr [0x1250be1c] */
  EDX = (r32((uint32_t)(0x1250be1c)));
  /* 124ef620 push edx */
  push32((uint32_t)(EDX));
  /* 124ef621 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124ef623 push 0x1250ce6c */
  push32((uint32_t)(0x1250ce6cu));
  /* 124ef628 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124ef62d mov eax, dword ptr [0x1250cdd0] */
  EAX = (r32((uint32_t)(0x1250cdd0)));
  /* 124ef632 push eax */
  push32((uint32_t)(EAX));
  /* 124ef633 call dword ptr [0x1250f378] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f378))), 0x124ef639u);
  /* 124ef639 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ef63b je 0x124ef64f */
  if (C.zf) goto L_124ef64f;
  /* 124ef63d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef641 jne 0x124ef64f */
  if (!C.zf) goto L_124ef64f;
  /* 124ef643 mov ecx, dword ptr [0x1250be1c] */
  ECX = (r32((uint32_t)(0x1250be1c)));
  /* 124ef649 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 124ef64d jmp 0x124ef658 */
  goto L_124ef658;
L_124ef64f:;
  /* 124ef64f mov edx, dword ptr [0x1250be1c] */
  EDX = (r32((uint32_t)(0x1250be1c)));
  /* 124ef655 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_124ef658:;
  /* 124ef658 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 124ef65b push eax */
  push32((uint32_t)(EAX));
  /* 124ef65c push 0 */
  push32((uint32_t)(0x0u));
  /* 124ef65e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 124ef660 mov ecx, dword ptr [0x1250be20] */
  ECX = (r32((uint32_t)(0x1250be20)));
  /* 124ef666 push ecx */
  push32((uint32_t)(ECX));
  /* 124ef667 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124ef669 push 0x1250cec0 */
  push32((uint32_t)(0x1250cec0u));
  /* 124ef66e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124ef673 mov edx, dword ptr [0x1250cdd0] */
  EDX = (r32((uint32_t)(0x1250cdd0)));
  /* 124ef679 push edx */
  push32((uint32_t)(EDX));
  /* 124ef67a call dword ptr [0x1250f378] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f378))), 0x124ef680u);
  /* 124ef680 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ef682 je 0x124ef695 */
  if (C.zf) goto L_124ef695;
  /* 124ef684 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef688 jne 0x124ef695 */
  if (!C.zf) goto L_124ef695;
  /* 124ef68a mov eax, dword ptr [0x1250be20] */
  EAX = (r32((uint32_t)(0x1250be20)));
  /* 124ef68f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 124ef693 jmp 0x124ef69e */
  goto L_124ef69e;
L_124ef695:;
  /* 124ef695 mov ecx, dword ptr [0x1250be20] */
  ECX = (r32((uint32_t)(0x1250be20)));
  /* 124ef69b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_124ef69e:;
  /* 124ef69e jmp 0x124ef8c7 */
  goto L_124ef8c7;
L_124ef6a3:;
  /* 124ef6a3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef6a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124ef6a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ef6ab je 0x124ef6cd */
  if (C.zf) goto L_124ef6cd;
  /* 124ef6ad cmp dword ptr [0x1250cf14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef6b4 je 0x124ef6dc */
  if (C.zf) goto L_124ef6dc;
  /* 124ef6b6 mov ecx, dword ptr [0x1250cf14] */
  ECX = (r32((uint32_t)(0x1250cf14)));
  /* 124ef6bc push ecx */
  push32((uint32_t)(ECX));
  /* 124ef6bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef6c0 push edx */
  push32((uint32_t)(EDX));
  /* 124ef6c1 call 0x124ec650 */
  push32(0x124ef6c6u); f_124ec650();
  /* 124ef6c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef6c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ef6cb jne 0x124ef6dc */
  if (!C.zf) goto L_124ef6dc;
L_124ef6cd:;
  /* 124ef6cd push 0xc */
  push32((uint32_t)(0xcu));
  /* 124ef6cf call 0x124e4460 */
  push32(0x124ef6d4u); f_124e4460();
  /* 124ef6d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef6d7 jmp 0x124ef8c7 */
  goto L_124ef8c7;
L_124ef6dc:;
  /* 124ef6dc push 2 */
  push32((uint32_t)(0x2u));
  /* 124ef6de mov eax, dword ptr [0x1250cf14] */
  EAX = (r32((uint32_t)(0x1250cf14)));
  /* 124ef6e3 push eax */
  push32((uint32_t)(EAX));
  /* 124ef6e4 call 0x124e1450 */
  push32(0x124ef6e9u); f_124e1450();
  /* 124ef6e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef6ec push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 124ef6f1 push 0x12509328 */
  push32((uint32_t)(0x12509328u));
  /* 124ef6f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ef6f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef6fb push ecx */
  push32((uint32_t)(ECX));
  /* 124ef6fc call 0x124e37f0 */
  push32(0x124ef701u); f_124e37f0();
  /* 124ef701 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef704 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef707 push eax */
  push32((uint32_t)(EAX));
  /* 124ef708 call 0x124e09c0 */
  push32(0x124ef70du); f_124e09c0();
  /* 124ef70d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef710 mov dword ptr [0x1250cf14], eax */
  w32((uint32_t)(0x1250cf14), (EAX));
  /* 124ef715 cmp dword ptr [0x1250cf14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef71c jne 0x124ef72d */
  if (!C.zf) goto L_124ef72d;
  /* 124ef71e push 0xc */
  push32((uint32_t)(0xcu));
  /* 124ef720 call 0x124e4460 */
  push32(0x124ef725u); f_124e4460();
  /* 124ef725 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef728 jmp 0x124ef8c7 */
  goto L_124ef8c7;
L_124ef72d:;
  /* 124ef72d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef730 push edx */
  push32((uint32_t)(EDX));
  /* 124ef731 mov eax, dword ptr [0x1250cf14] */
  EAX = (r32((uint32_t)(0x1250cf14)));
  /* 124ef736 push eax */
  push32((uint32_t)(EAX));
  /* 124ef737 call 0x124e3970 */
  push32(0x124ef73cu); f_124e3970();
  /* 124ef73c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef73f push 0xc */
  push32((uint32_t)(0xcu));
  /* 124ef741 call 0x124e4460 */
  push32(0x124ef746u); f_124e4460();
  /* 124ef746 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef749 push 3 */
  push32((uint32_t)(0x3u));
  /* 124ef74b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef74e push ecx */
  push32((uint32_t)(ECX));
  /* 124ef74f mov edx, dword ptr [0x1250be1c] */
  EDX = (r32((uint32_t)(0x1250be1c)));
  /* 124ef755 push edx */
  push32((uint32_t)(EDX));
  /* 124ef756 call 0x124e41e0 */
  push32(0x124ef75bu); f_124e41e0();
  /* 124ef75b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef75e mov eax, dword ptr [0x1250be1c] */
  EAX = (r32((uint32_t)(0x1250be1c)));
  /* 124ef763 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 124ef767 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef76a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef76d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124ef770 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef773 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124ef776 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef779 jne 0x124ef78d */
  if (!C.zf) goto L_124ef78d;
  /* 124ef77b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ef77e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef781 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124ef784 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef787 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef78a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_124ef78d:;
  /* 124ef78d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef790 push eax */
  push32((uint32_t)(EAX));
  /* 124ef791 call 0x124ef270 */
  push32(0x124ef796u); f_124ef270();
  /* 124ef796 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef799 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ef79f mov dword ptr [0x1250bd90], eax */
  w32((uint32_t)(0x1250bd90), (EAX));
L_124ef7a4:;
  /* 124ef7a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef7a7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124ef7aa cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef7ad je 0x124ef7c5 */
  if (C.zf) goto L_124ef7c5;
  /* 124ef7af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef7b2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124ef7b5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef7b8 jl 0x124ef7d0 */
  if ((C.sf!=C.of)) goto L_124ef7d0;
  /* 124ef7ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef7bd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124ef7c0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef7c3 jg 0x124ef7d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_124ef7d0;
L_124ef7c5:;
  /* 124ef7c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef7c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef7cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124ef7ce jmp 0x124ef7a4 */
  goto L_124ef7a4;
L_124ef7d0:;
  /* 124ef7d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef7d3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124ef7d6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef7d9 jne 0x124ef875 */
  if (!C.zf) goto L_124ef875;
  /* 124ef7df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef7e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef7e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124ef7e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef7eb push edx */
  push32((uint32_t)(EDX));
  /* 124ef7ec call 0x124ef270 */
  push32(0x124ef7f1u); f_124ef270();
  /* 124ef7f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef7f4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ef7f7 mov ecx, dword ptr [0x1250bd90] */
  ECX = (r32((uint32_t)(0x1250bd90)));
  /* 124ef7fd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef7ff mov dword ptr [0x1250bd90], ecx */
  w32((uint32_t)(0x1250bd90), (ECX));
L_124ef805:;
  /* 124ef805 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef808 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124ef80b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef80e jl 0x124ef826 */
  if ((C.sf!=C.of)) goto L_124ef826;
  /* 124ef810 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef813 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124ef816 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef819 jg 0x124ef826 */
  if ((!C.zf&&C.sf==C.of)) goto L_124ef826;
  /* 124ef81b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef81e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef821 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124ef824 jmp 0x124ef805 */
  goto L_124ef805;
L_124ef826:;
  /* 124ef826 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef829 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124ef82c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef82f jne 0x124ef875 */
  if (!C.zf) goto L_124ef875;
  /* 124ef831 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef834 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef837 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124ef83a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef83d push ecx */
  push32((uint32_t)(ECX));
  /* 124ef83e call 0x124ef270 */
  push32(0x124ef843u); f_124ef270();
  /* 124ef843 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef846 mov edx, dword ptr [0x1250bd90] */
  EDX = (r32((uint32_t)(0x1250bd90)));
  /* 124ef84c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef84e mov dword ptr [0x1250bd90], edx */
  w32((uint32_t)(0x1250bd90), (EDX));
L_124ef854:;
  /* 124ef854 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef857 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124ef85a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef85d jl 0x124ef875 */
  if ((C.sf!=C.of)) goto L_124ef875;
  /* 124ef85f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef862 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124ef865 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef868 jg 0x124ef875 */
  if ((!C.zf&&C.sf==C.of)) goto L_124ef875;
  /* 124ef86a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef86d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef870 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124ef873 jmp 0x124ef854 */
  goto L_124ef854;
L_124ef875:;
  /* 124ef875 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef879 je 0x124ef889 */
  if (C.zf) goto L_124ef889;
  /* 124ef87b mov edx, dword ptr [0x1250bd90] */
  EDX = (r32((uint32_t)(0x1250bd90)));
  /* 124ef881 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124ef883 mov dword ptr [0x1250bd90], edx */
  w32((uint32_t)(0x1250bd90), (EDX));
L_124ef889:;
  /* 124ef889 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef88c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124ef88f mov dword ptr [0x1250bd94], ecx */
  w32((uint32_t)(0x1250bd94), (ECX));
  /* 124ef895 cmp dword ptr [0x1250bd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250bd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef89c je 0x124ef8be */
  if (C.zf) goto L_124ef8be;
  /* 124ef89e push 3 */
  push32((uint32_t)(0x3u));
  /* 124ef8a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ef8a3 push edx */
  push32((uint32_t)(EDX));
  /* 124ef8a4 mov eax, dword ptr [0x1250be20] */
  EAX = (r32((uint32_t)(0x1250be20)));
  /* 124ef8a9 push eax */
  push32((uint32_t)(EAX));
  /* 124ef8aa call 0x124e41e0 */
  push32(0x124ef8afu); f_124e41e0();
  /* 124ef8af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef8b2 mov ecx, dword ptr [0x1250be20] */
  ECX = (r32((uint32_t)(0x1250be20)));
  /* 124ef8b8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 124ef8bc jmp 0x124ef8c7 */
  goto L_124ef8c7;
L_124ef8be:;
  /* 124ef8be mov edx, dword ptr [0x1250be20] */
  EDX = (r32((uint32_t)(0x1250be20)));
  /* 124ef8c4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_124ef8c7:;
  /* 124ef8c7 mov esp, ebp */
  ESP = (EBP);
  /* 124ef8c9 pop ebp */
  EBP = (pop32());
  /* 124ef8ca ret  */
  ESPCHK(0x124ef520u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f8d0 @ 0x124ef8d0 (46 bytes, 18 insns) */
void f_124ef8d0(void) {
  FTRACE(0x124ef8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ef8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ef8d1 mov ebp, esp */
  EBP = (ESP);
  /* 124ef8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 124ef8d4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 124ef8d6 call 0x124e43c0 */
  push32(0x124ef8dbu); f_124e43c0();
  /* 124ef8db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef8de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef8e1 push eax */
  push32((uint32_t)(EAX));
  /* 124ef8e2 call 0x124ef900 */
  push32(0x124ef8e7u); f_124ef900();
  /* 124ef8e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef8ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ef8ed push 0xb */
  push32((uint32_t)(0xbu));
  /* 124ef8ef call 0x124e4460 */
  push32(0x124ef8f4u); f_124e4460();
  /* 124ef8f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef8f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ef8fa mov esp, ebp */
  ESP = (EBP);
  /* 124ef8fc pop ebp */
  EBP = (pop32());
  /* 124ef8fd ret  */
  ESPCHK(0x124ef8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f900 @ 0x124ef900 (762 bytes, 246 insns) */
void f_124ef900(void) {
  FTRACE(0x124ef900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ef900 push ebp */
  push32((uint32_t)(EBP));
  /* 124ef901 mov ebp, esp */
  EBP = (ESP);
  /* 124ef903 push ecx */
  push32((uint32_t)(ECX));
  /* 124ef904 cmp dword ptr [0x1250bd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250bd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef90b jne 0x124ef914 */
  if (!C.zf) goto L_124ef914;
  /* 124ef90d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ef90f jmp 0x124efbf6 */
  goto L_124efbf6;
L_124ef914:;
  /* 124ef914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef917 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 124ef91a cmp ecx, dword ptr [0x1250be28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1250be28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef920 jne 0x124ef934 */
  if (!C.zf) goto L_124ef934;
  /* 124ef922 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef925 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124ef928 cmp eax, dword ptr [0x1250be38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250be38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef92e je 0x124efafb */
  if (C.zf) goto L_124efafb;
L_124ef934:;
  /* 124ef934 cmp dword ptr [0x1250ce60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ef93b je 0x124efab5 */
  if (C.zf) goto L_124efab5;
  /* 124ef941 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ef943 mov cx, word ptr [0x1250cf00] */
  CX = (r16((uint32_t)(0x1250cf00)));
  /* 124ef94a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ef94c jne 0x124ef9a9 */
  if (!C.zf) goto L_124ef9a9;
  /* 124ef94e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124ef950 mov dx, word ptr [0x1250cf0e] */
  DX = (r16((uint32_t)(0x1250cf0e)));
  /* 124ef957 push edx */
  push32((uint32_t)(EDX));
  /* 124ef958 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ef95a mov ax, word ptr [0x1250cf0c] */
  AX = (r16((uint32_t)(0x1250cf0c)));
  /* 124ef960 push eax */
  push32((uint32_t)(EAX));
  /* 124ef961 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ef963 mov cx, word ptr [0x1250cf0a] */
  CX = (r16((uint32_t)(0x1250cf0a)));
  /* 124ef96a push ecx */
  push32((uint32_t)(ECX));
  /* 124ef96b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124ef96d mov dx, word ptr [0x1250cf08] */
  DX = (r16((uint32_t)(0x1250cf08)));
  /* 124ef974 push edx */
  push32((uint32_t)(EDX));
  /* 124ef975 push 0 */
  push32((uint32_t)(0x0u));
  /* 124ef977 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ef979 mov ax, word ptr [0x1250cf04] */
  AX = (r16((uint32_t)(0x1250cf04)));
  /* 124ef97f push eax */
  push32((uint32_t)(EAX));
  /* 124ef980 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ef982 mov cx, word ptr [0x1250cf06] */
  CX = (r16((uint32_t)(0x1250cf06)));
  /* 124ef989 push ecx */
  push32((uint32_t)(ECX));
  /* 124ef98a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124ef98c mov dx, word ptr [0x1250cf02] */
  DX = (r16((uint32_t)(0x1250cf02)));
  /* 124ef993 push edx */
  push32((uint32_t)(EDX));
  /* 124ef994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef997 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 124ef99a push ecx */
  push32((uint32_t)(ECX));
  /* 124ef99b push 1 */
  push32((uint32_t)(0x1u));
  /* 124ef99d push 1 */
  push32((uint32_t)(0x1u));
  /* 124ef99f call 0x124efc00 */
  push32(0x124ef9a4u); f_124efc00();
  /* 124ef9a4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ef9a7 jmp 0x124ef9fa */
  goto L_124ef9fa;
L_124ef9a9:;
  /* 124ef9a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124ef9ab mov dx, word ptr [0x1250cf0e] */
  DX = (r16((uint32_t)(0x1250cf0e)));
  /* 124ef9b2 push edx */
  push32((uint32_t)(EDX));
  /* 124ef9b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ef9b5 mov ax, word ptr [0x1250cf0c] */
  AX = (r16((uint32_t)(0x1250cf0c)));
  /* 124ef9bb push eax */
  push32((uint32_t)(EAX));
  /* 124ef9bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ef9be mov cx, word ptr [0x1250cf0a] */
  CX = (r16((uint32_t)(0x1250cf0a)));
  /* 124ef9c5 push ecx */
  push32((uint32_t)(ECX));
  /* 124ef9c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124ef9c8 mov dx, word ptr [0x1250cf08] */
  DX = (r16((uint32_t)(0x1250cf08)));
  /* 124ef9cf push edx */
  push32((uint32_t)(EDX));
  /* 124ef9d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ef9d2 mov ax, word ptr [0x1250cf06] */
  AX = (r16((uint32_t)(0x1250cf06)));
  /* 124ef9d8 push eax */
  push32((uint32_t)(EAX));
  /* 124ef9d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124ef9db push 0 */
  push32((uint32_t)(0x0u));
  /* 124ef9dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ef9df mov cx, word ptr [0x1250cf02] */
  CX = (r16((uint32_t)(0x1250cf02)));
  /* 124ef9e6 push ecx */
  push32((uint32_t)(ECX));
  /* 124ef9e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ef9ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124ef9ed push eax */
  push32((uint32_t)(EAX));
  /* 124ef9ee push 0 */
  push32((uint32_t)(0x0u));
  /* 124ef9f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 124ef9f2 call 0x124efc00 */
  push32(0x124ef9f7u); f_124efc00();
  /* 124ef9f7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124ef9fa:;
  /* 124ef9fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ef9fc mov cx, word ptr [0x1250ceac] */
  CX = (r16((uint32_t)(0x1250ceac)));
  /* 124efa03 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124efa05 jne 0x124efa62 */
  if (!C.zf) goto L_124efa62;
  /* 124efa07 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124efa09 mov dx, word ptr [0x1250ceba] */
  DX = (r16((uint32_t)(0x1250ceba)));
  /* 124efa10 push edx */
  push32((uint32_t)(EDX));
  /* 124efa11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124efa13 mov ax, word ptr [0x1250ceb8] */
  AX = (r16((uint32_t)(0x1250ceb8)));
  /* 124efa19 push eax */
  push32((uint32_t)(EAX));
  /* 124efa1a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124efa1c mov cx, word ptr [0x1250ceb6] */
  CX = (r16((uint32_t)(0x1250ceb6)));
  /* 124efa23 push ecx */
  push32((uint32_t)(ECX));
  /* 124efa24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124efa26 mov dx, word ptr [0x1250ceb4] */
  DX = (r16((uint32_t)(0x1250ceb4)));
  /* 124efa2d push edx */
  push32((uint32_t)(EDX));
  /* 124efa2e push 0 */
  push32((uint32_t)(0x0u));
  /* 124efa30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124efa32 mov ax, word ptr [0x1250ceb0] */
  AX = (r16((uint32_t)(0x1250ceb0)));
  /* 124efa38 push eax */
  push32((uint32_t)(EAX));
  /* 124efa39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124efa3b mov cx, word ptr [0x1250ceb2] */
  CX = (r16((uint32_t)(0x1250ceb2)));
  /* 124efa42 push ecx */
  push32((uint32_t)(ECX));
  /* 124efa43 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124efa45 mov dx, word ptr [0x1250ceae] */
  DX = (r16((uint32_t)(0x1250ceae)));
  /* 124efa4c push edx */
  push32((uint32_t)(EDX));
  /* 124efa4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124efa50 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 124efa53 push ecx */
  push32((uint32_t)(ECX));
  /* 124efa54 push 1 */
  push32((uint32_t)(0x1u));
  /* 124efa56 push 0 */
  push32((uint32_t)(0x0u));
  /* 124efa58 call 0x124efc00 */
  push32(0x124efa5du); f_124efc00();
  /* 124efa5d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124efa60 jmp 0x124efab3 */
  goto L_124efab3;
L_124efa62:;
  /* 124efa62 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124efa64 mov dx, word ptr [0x1250ceba] */
  DX = (r16((uint32_t)(0x1250ceba)));
  /* 124efa6b push edx */
  push32((uint32_t)(EDX));
  /* 124efa6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124efa6e mov ax, word ptr [0x1250ceb8] */
  AX = (r16((uint32_t)(0x1250ceb8)));
  /* 124efa74 push eax */
  push32((uint32_t)(EAX));
  /* 124efa75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124efa77 mov cx, word ptr [0x1250ceb6] */
  CX = (r16((uint32_t)(0x1250ceb6)));
  /* 124efa7e push ecx */
  push32((uint32_t)(ECX));
  /* 124efa7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124efa81 mov dx, word ptr [0x1250ceb4] */
  DX = (r16((uint32_t)(0x1250ceb4)));
  /* 124efa88 push edx */
  push32((uint32_t)(EDX));
  /* 124efa89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124efa8b mov ax, word ptr [0x1250ceb2] */
  AX = (r16((uint32_t)(0x1250ceb2)));
  /* 124efa91 push eax */
  push32((uint32_t)(EAX));
  /* 124efa92 push 0 */
  push32((uint32_t)(0x0u));
  /* 124efa94 push 0 */
  push32((uint32_t)(0x0u));
  /* 124efa96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124efa98 mov cx, word ptr [0x1250ceae] */
  CX = (r16((uint32_t)(0x1250ceae)));
  /* 124efa9f push ecx */
  push32((uint32_t)(ECX));
  /* 124efaa0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124efaa3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124efaa6 push eax */
  push32((uint32_t)(EAX));
  /* 124efaa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124efaa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124efaab call 0x124efc00 */
  push32(0x124efab0u); f_124efc00();
  /* 124efab0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124efab3:;
  /* 124efab3 jmp 0x124efafb */
  goto L_124efafb;
L_124efab5:;
  /* 124efab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124efab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124efab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124efabb push 2 */
  push32((uint32_t)(0x2u));
  /* 124efabd push 0 */
  push32((uint32_t)(0x0u));
  /* 124efabf push 0 */
  push32((uint32_t)(0x0u));
  /* 124efac1 push 1 */
  push32((uint32_t)(0x1u));
  /* 124efac3 push 4 */
  push32((uint32_t)(0x4u));
  /* 124efac5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124efac8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 124efacb push edx */
  push32((uint32_t)(EDX));
  /* 124efacc push 1 */
  push32((uint32_t)(0x1u));
  /* 124eface push 1 */
  push32((uint32_t)(0x1u));
  /* 124efad0 call 0x124efc00 */
  push32(0x124efad5u); f_124efc00();
  /* 124efad5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124efad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124efada push 0 */
  push32((uint32_t)(0x0u));
  /* 124efadc push 0 */
  push32((uint32_t)(0x0u));
  /* 124efade push 2 */
  push32((uint32_t)(0x2u));
  /* 124efae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124efae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124efae4 push 5 */
  push32((uint32_t)(0x5u));
  /* 124efae6 push 0xa */
  push32((uint32_t)(0xau));
  /* 124efae8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124efaeb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 124efaee push ecx */
  push32((uint32_t)(ECX));
  /* 124efaef push 1 */
  push32((uint32_t)(0x1u));
  /* 124efaf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124efaf3 call 0x124efc00 */
  push32(0x124efaf8u); f_124efc00();
  /* 124efaf8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124efafb:;
  /* 124efafb mov edx, dword ptr [0x1250be2c] */
  EDX = (r32((uint32_t)(0x1250be2c)));
  /* 124efb01 cmp edx, dword ptr [0x1250be3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1250be3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efb07 jge 0x124efb54 */
  if ((C.sf==C.of)) goto L_124efb54;
  /* 124efb09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124efb0c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 124efb0f cmp ecx, dword ptr [0x1250be2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1250be2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efb15 jl 0x124efb25 */
  if ((C.sf!=C.of)) goto L_124efb25;
  /* 124efb17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124efb1a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124efb1d cmp eax, dword ptr [0x1250be3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250be3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efb23 jle 0x124efb2c */
  if ((C.zf||C.sf!=C.of)) goto L_124efb2c;
L_124efb25:;
  /* 124efb25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124efb27 jmp 0x124efbf6 */
  goto L_124efbf6;
L_124efb2c:;
  /* 124efb2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124efb2f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 124efb32 cmp edx, dword ptr [0x1250be2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1250be2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efb38 jle 0x124efb52 */
  if ((C.zf||C.sf!=C.of)) goto L_124efb52;
  /* 124efb3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124efb3d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 124efb40 cmp ecx, dword ptr [0x1250be3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1250be3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efb46 jge 0x124efb52 */
  if ((C.sf==C.of)) goto L_124efb52;
  /* 124efb48 mov eax, 1 */
  EAX = (0x1u);
  /* 124efb4d jmp 0x124efbf6 */
  goto L_124efbf6;
L_124efb52:;
  /* 124efb52 jmp 0x124efb97 */
  goto L_124efb97;
L_124efb54:;
  /* 124efb54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124efb57 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124efb5a cmp eax, dword ptr [0x1250be3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250be3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efb60 jl 0x124efb70 */
  if ((C.sf!=C.of)) goto L_124efb70;
  /* 124efb62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124efb65 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 124efb68 cmp edx, dword ptr [0x1250be2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1250be2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efb6e jle 0x124efb77 */
  if ((C.zf||C.sf!=C.of)) goto L_124efb77;
L_124efb70:;
  /* 124efb70 mov eax, 1 */
  EAX = (0x1u);
  /* 124efb75 jmp 0x124efbf6 */
  goto L_124efbf6;
L_124efb77:;
  /* 124efb77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124efb7a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 124efb7d cmp ecx, dword ptr [0x1250be3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1250be3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efb83 jle 0x124efb97 */
  if ((C.zf||C.sf!=C.of)) goto L_124efb97;
  /* 124efb85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124efb88 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124efb8b cmp eax, dword ptr [0x1250be2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250be2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efb91 jge 0x124efb97 */
  if ((C.sf==C.of)) goto L_124efb97;
  /* 124efb93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124efb95 jmp 0x124efbf6 */
  goto L_124efbf6;
L_124efb97:;
  /* 124efb97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124efb9a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124efb9d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124efba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124efba3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124efba5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efba7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124efbaa mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124efbad imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124efbb3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efbb5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124efbbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124efbbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124efbc1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 124efbc4 cmp edx, dword ptr [0x1250be2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1250be2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efbca jne 0x124efbe2 */
  if (!C.zf) goto L_124efbe2;
  /* 124efbcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124efbcf cmp eax, dword ptr [0x1250be30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250be30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efbd5 jl 0x124efbde */
  if ((C.sf!=C.of)) goto L_124efbde;
  /* 124efbd7 mov eax, 1 */
  EAX = (0x1u);
  /* 124efbdc jmp 0x124efbf6 */
  goto L_124efbf6;
L_124efbde:;
  /* 124efbde xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124efbe0 jmp 0x124efbf6 */
  goto L_124efbf6;
L_124efbe2:;
  /* 124efbe2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124efbe5 cmp ecx, dword ptr [0x1250be40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1250be40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efbeb jge 0x124efbf4 */
  if ((C.sf==C.of)) goto L_124efbf4;
  /* 124efbed mov eax, 1 */
  EAX = (0x1u);
  /* 124efbf2 jmp 0x124efbf6 */
  goto L_124efbf6;
L_124efbf4:;
  /* 124efbf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124efbf6:;
  /* 124efbf6 mov esp, ebp */
  ESP = (EBP);
  /* 124efbf8 pop ebp */
  EBP = (pop32());
  /* 124efbf9 ret  */
  ESPCHK(0x124ef900u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fc00 @ 0x124efc00 (504 bytes, 145 insns) */
void f_124efc00(void) {
  FTRACE(0x124efc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124efc00 push ebp */
  push32((uint32_t)(EBP));
  /* 124efc01 mov ebp, esp */
  EBP = (ESP);
  /* 124efc03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124efc06 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efc0a jne 0x124efcdc */
  if (!C.zf) goto L_124efcdc;
  /* 124efc10 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124efc13 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 124efc16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124efc18 jne 0x124efc29 */
  if (!C.zf) goto L_124efc29;
  /* 124efc1a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124efc1d mov edx, dword ptr [ecx*4 + 0x1250be4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1250be4c)));
  /* 124efc24 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 124efc27 jmp 0x124efc36 */
  goto L_124efc36;
L_124efc29:;
  /* 124efc29 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124efc2c mov ecx, dword ptr [eax*4 + 0x1250be80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1250be80)));
  /* 124efc33 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_124efc36:;
  /* 124efc36 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124efc39 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efc3c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124efc3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124efc42 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124efc45 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124efc4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124efc4e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efc50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124efc53 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124efc56 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 124efc59 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 124efc5d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124efc5e mov ecx, 7 */
  ECX = (0x7u);
  /* 124efc63 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124efc65 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124efc68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124efc6b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efc6e jg 0x124efc89 */
  if ((!C.zf&&C.sf==C.of)) goto L_124efc89;
  /* 124efc70 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124efc73 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124efc76 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124efc79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124efc7c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124efc7f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efc82 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efc84 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124efc87 jmp 0x124efc9d */
  goto L_124efc9d;
L_124efc89:;
  /* 124efc89 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124efc8c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124efc8f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124efc92 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124efc95 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efc98 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efc9a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124efc9d:;
  /* 124efc9d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efca1 jne 0x124efcda */
  if (!C.zf) goto L_124efcda;
  /* 124efca3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124efca6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 124efca9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124efcab jne 0x124efcbc */
  if (!C.zf) goto L_124efcbc;
  /* 124efcad mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124efcb0 mov eax, dword ptr [edx*4 + 0x1250be50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1250be50)));
  /* 124efcb7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 124efcba jmp 0x124efcc9 */
  goto L_124efcc9;
L_124efcbc:;
  /* 124efcbc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124efcbf mov edx, dword ptr [ecx*4 + 0x1250be84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1250be84)));
  /* 124efcc6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_124efcc9:;
  /* 124efcc9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124efccc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efccf jle 0x124efcda */
  if ((C.zf||C.sf!=C.of)) goto L_124efcda;
  /* 124efcd1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124efcd4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124efcd7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_124efcda:;
  /* 124efcda jmp 0x124efd11 */
  goto L_124efd11;
L_124efcdc:;
  /* 124efcdc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124efcdf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 124efce2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124efce4 jne 0x124efcf5 */
  if (!C.zf) goto L_124efcf5;
  /* 124efce6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124efce9 mov ecx, dword ptr [eax*4 + 0x1250be4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1250be4c)));
  /* 124efcf0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124efcf3 jmp 0x124efd02 */
  goto L_124efd02;
L_124efcf5:;
  /* 124efcf5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124efcf8 mov eax, dword ptr [edx*4 + 0x1250be80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1250be80)));
  /* 124efcff mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_124efd02:;
  /* 124efd02 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124efd05 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124efd08 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124efd0b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efd0e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_124efd11:;
  /* 124efd11 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efd15 jne 0x124efd51 */
  if (!C.zf) goto L_124efd51;
  /* 124efd17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124efd1a mov dword ptr [0x1250be2c], eax */
  w32((uint32_t)(0x1250be2c), (EAX));
  /* 124efd1f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 124efd22 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124efd25 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 124efd28 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efd2a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124efd2d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 124efd30 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efd32 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124efd38 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 124efd3b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efd3d mov dword ptr [0x1250be30], ecx */
  w32((uint32_t)(0x1250be30), (ECX));
  /* 124efd43 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124efd46 mov dword ptr [0x1250be28], edx */
  w32((uint32_t)(0x1250be28), (EDX));
  /* 124efd4c jmp 0x124efdf4 */
  goto L_124efdf4;
L_124efd51:;
  /* 124efd51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124efd54 mov dword ptr [0x1250be3c], eax */
  w32((uint32_t)(0x1250be3c), (EAX));
  /* 124efd59 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 124efd5c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124efd5f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 124efd62 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efd64 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124efd67 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 124efd6a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efd6c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124efd72 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 124efd75 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efd77 mov dword ptr [0x1250be40], ecx */
  w32((uint32_t)(0x1250be40), (ECX));
  /* 124efd7d mov edx, dword ptr [0x1250bd98] */
  EDX = (r32((uint32_t)(0x1250bd98)));
  /* 124efd83 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124efd89 mov eax, dword ptr [0x1250be40] */
  EAX = (r32((uint32_t)(0x1250be40)));
  /* 124efd8e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efd90 mov dword ptr [0x1250be40], eax */
  w32((uint32_t)(0x1250be40), (EAX));
  /* 124efd95 cmp dword ptr [0x1250be40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250be40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efd9c jge 0x124efdc1 */
  if ((C.sf==C.of)) goto L_124efdc1;
  /* 124efd9e mov ecx, dword ptr [0x1250be40] */
  ECX = (r32((uint32_t)(0x1250be40)));
  /* 124efda4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efdaa mov dword ptr [0x1250be40], ecx */
  w32((uint32_t)(0x1250be40), (ECX));
  /* 124efdb0 mov edx, dword ptr [0x1250be3c] */
  EDX = (r32((uint32_t)(0x1250be3c)));
  /* 124efdb6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124efdb9 mov dword ptr [0x1250be3c], edx */
  w32((uint32_t)(0x1250be3c), (EDX));
  /* 124efdbf jmp 0x124efdeb */
  goto L_124efdeb;
L_124efdc1:;
  /* 124efdc1 cmp dword ptr [0x1250be40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1250be40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efdcb jl 0x124efdeb */
  if ((C.sf!=C.of)) goto L_124efdeb;
  /* 124efdcd mov eax, dword ptr [0x1250be40] */
  EAX = (r32((uint32_t)(0x1250be40)));
  /* 124efdd2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124efdd7 mov dword ptr [0x1250be40], eax */
  w32((uint32_t)(0x1250be40), (EAX));
  /* 124efddc mov ecx, dword ptr [0x1250be3c] */
  ECX = (r32((uint32_t)(0x1250be3c)));
  /* 124efde2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efde5 mov dword ptr [0x1250be3c], ecx */
  w32((uint32_t)(0x1250be3c), (ECX));
L_124efdeb:;
  /* 124efdeb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124efdee mov dword ptr [0x1250be38], edx */
  w32((uint32_t)(0x1250be38), (EDX));
L_124efdf4:;
  /* 124efdf4 mov esp, ebp */
  ESP = (EBP);
  /* 124efdf6 pop ebp */
  EBP = (pop32());
  /* 124efdf7 ret  */
  ESPCHK(0x124efc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fe00 @ 0x124efe00 (382 bytes, 135 insns) */
void f_124efe00(void) {
  FTRACE(0x124efe00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124efe00 push ebp */
  push32((uint32_t)(EBP));
  /* 124efe01 mov ebp, esp */
  EBP = (ESP);
  /* 124efe03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124efe05 push 0x12509338 */
  push32((uint32_t)(0x12509338u));
  /* 124efe0a push 0x124e9ac8 */
  push32((uint32_t)(0x124e9ac8u));
  /* 124efe0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 124efe15 push eax */
  push32((uint32_t)(EAX));
  /* 124efe16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 124efe1d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124efe20 push ebx */
  push32((uint32_t)(EBX));
  /* 124efe21 push esi */
  push32((uint32_t)(ESI));
  /* 124efe22 push edi */
  push32((uint32_t)(EDI));
  /* 124efe23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124efe26 cmp dword ptr [0x1250cf1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efe2d jne 0x124efe72 */
  if (!C.zf) goto L_124efe72;
  /* 124efe2f push 0 */
  push32((uint32_t)(0x0u));
  /* 124efe31 push 0 */
  push32((uint32_t)(0x0u));
  /* 124efe33 push 1 */
  push32((uint32_t)(0x1u));
  /* 124efe35 push 0 */
  push32((uint32_t)(0x0u));
  /* 124efe37 call dword ptr [0x1250f2e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2e4))), 0x124efe3du);
  /* 124efe3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124efe3f je 0x124efe4d */
  if (C.zf) goto L_124efe4d;
  /* 124efe41 mov dword ptr [0x1250cf1c], 1 */
  w32((uint32_t)(0x1250cf1c), (0x1u));
  /* 124efe4b jmp 0x124efe72 */
  goto L_124efe72;
L_124efe4d:;
  /* 124efe4d push 0 */
  push32((uint32_t)(0x0u));
  /* 124efe4f push 0 */
  push32((uint32_t)(0x0u));
  /* 124efe51 push 1 */
  push32((uint32_t)(0x1u));
  /* 124efe53 push 0 */
  push32((uint32_t)(0x0u));
  /* 124efe55 call dword ptr [0x1250f2fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2fc))), 0x124efe5bu);
  /* 124efe5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124efe5d je 0x124efe6b */
  if (C.zf) goto L_124efe6b;
  /* 124efe5f mov dword ptr [0x1250cf1c], 2 */
  w32((uint32_t)(0x1250cf1c), (0x2u));
  /* 124efe69 jmp 0x124efe72 */
  goto L_124efe72;
L_124efe6b:;
  /* 124efe6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124efe6d jmp 0x124eff81 */
  goto L_124eff81;
L_124efe72:;
  /* 124efe72 cmp dword ptr [0x1250cf1c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efe79 jne 0x124efe96 */
  if (!C.zf) goto L_124efe96;
  /* 124efe7b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124efe7e push eax */
  push32((uint32_t)(EAX));
  /* 124efe7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124efe82 push ecx */
  push32((uint32_t)(ECX));
  /* 124efe83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124efe86 push edx */
  push32((uint32_t)(EDX));
  /* 124efe87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124efe8a push eax */
  push32((uint32_t)(EAX));
  /* 124efe8b call dword ptr [0x1250f2e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2e4))), 0x124efe91u);
  /* 124efe91 jmp 0x124eff81 */
  goto L_124eff81;
L_124efe96:;
  /* 124efe96 cmp dword ptr [0x1250cf1c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf1c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efe9d jne 0x124eff7f */
  if (!C.zf) goto L_124eff7f;
  /* 124efea3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efea7 jne 0x124efeb2 */
  if (!C.zf) goto L_124efeb2;
  /* 124efea9 mov ecx, dword ptr [0x1250cdd0] */
  ECX = (r32((uint32_t)(0x1250cdd0)));
  /* 124efeaf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_124efeb2:;
  /* 124efeb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124efeb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124efeb6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124efeb9 push edx */
  push32((uint32_t)(EDX));
  /* 124efeba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124efebd push eax */
  push32((uint32_t)(EAX));
  /* 124efebe call dword ptr [0x1250f2fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2fc))), 0x124efec4u);
  /* 124efec4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124efec7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124efecb jne 0x124efed4 */
  if (!C.zf) goto L_124efed4;
  /* 124efecd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124efecf jmp 0x124eff81 */
  goto L_124eff81;
L_124efed4:;
  /* 124efed4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124efedb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124efede add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124efee1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124efee3 call 0x124e3b60 */
  push32(0x124efee8u); f_124e3b60();
  /* 124efee8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 124efeeb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124efeee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124efef1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 124efef4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124efefb jmp 0x124eff14 */
  goto L_124eff14;
  /* 124efefd mov eax, 1 */
  EAX = (0x1u);
  /* 124eff02 ret  */
  ESPCHK(0x124efe00u, _esp0);
  ESP += 4; return;
  /* 124eff03 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124eff06 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 124eff0d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124eff14:;
  /* 124eff14 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eff18 jne 0x124eff1e */
  if (!C.zf) goto L_124eff1e;
  /* 124eff1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eff1c jmp 0x124eff81 */
  goto L_124eff81;
L_124eff1e:;
  /* 124eff1e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124eff21 push edx */
  push32((uint32_t)(EDX));
  /* 124eff22 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124eff25 push eax */
  push32((uint32_t)(EAX));
  /* 124eff26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eff29 push ecx */
  push32((uint32_t)(ECX));
  /* 124eff2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eff2d push edx */
  push32((uint32_t)(EDX));
  /* 124eff2e call dword ptr [0x1250f2fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2fc))), 0x124eff34u);
  /* 124eff34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eff36 jne 0x124eff3c */
  if (!C.zf) goto L_124eff3c;
  /* 124eff38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eff3a jmp 0x124eff81 */
  goto L_124eff81;
L_124eff3c:;
  /* 124eff3c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eff40 jne 0x124eff5d */
  if (!C.zf) goto L_124eff5d;
  /* 124eff42 push 0 */
  push32((uint32_t)(0x0u));
  /* 124eff44 push 0 */
  push32((uint32_t)(0x0u));
  /* 124eff46 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124eff48 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124eff4b push eax */
  push32((uint32_t)(EAX));
  /* 124eff4c push 1 */
  push32((uint32_t)(0x1u));
  /* 124eff4e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124eff51 push ecx */
  push32((uint32_t)(ECX));
  /* 124eff52 call dword ptr [0x1250f32c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f32c))), 0x124eff58u);
  /* 124eff58 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 124eff5b jmp 0x124eff7a */
  goto L_124eff7a;
L_124eff5d:;
  /* 124eff5d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124eff60 push edx */
  push32((uint32_t)(EDX));
  /* 124eff61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eff64 push eax */
  push32((uint32_t)(EAX));
  /* 124eff65 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124eff67 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124eff6a push ecx */
  push32((uint32_t)(ECX));
  /* 124eff6b push 1 */
  push32((uint32_t)(0x1u));
  /* 124eff6d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124eff70 push edx */
  push32((uint32_t)(EDX));
  /* 124eff71 call dword ptr [0x1250f32c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f32c))), 0x124eff77u);
  /* 124eff77 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_124eff7a:;
  /* 124eff7a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124eff7d jmp 0x124eff81 */
  goto L_124eff81;
L_124eff7f:;
  /* 124eff7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124eff81:;
  /* 124eff81 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 124eff84 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124eff87 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 124eff8e pop edi */
  EDI = (pop32());
  /* 124eff8f pop esi */
  ESI = (pop32());
  /* 124eff90 pop ebx */
  EBX = (pop32());
  /* 124eff91 mov esp, ebp */
  ESP = (EBP);
  /* 124eff93 pop ebp */
  EBP = (pop32());
  /* 124eff94 ret  */
  ESPCHK(0x124efe00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ffa0 @ 0x124effa0 (398 bytes, 140 insns) */
void f_124effa0(void) {
  FTRACE(0x124effa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124effa0 push ebp */
  push32((uint32_t)(EBP));
  /* 124effa1 mov ebp, esp */
  EBP = (ESP);
  /* 124effa3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124effa5 push 0x12509348 */
  push32((uint32_t)(0x12509348u));
  /* 124effaa push 0x124e9ac8 */
  push32((uint32_t)(0x124e9ac8u));
  /* 124effaf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 124effb5 push eax */
  push32((uint32_t)(EAX));
  /* 124effb6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 124effbd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124effc0 push ebx */
  push32((uint32_t)(EBX));
  /* 124effc1 push esi */
  push32((uint32_t)(ESI));
  /* 124effc2 push edi */
  push32((uint32_t)(EDI));
  /* 124effc3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124effc6 cmp dword ptr [0x1250cf20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124effcd jne 0x124f0012 */
  if (!C.zf) goto L_124f0012;
  /* 124effcf push 0 */
  push32((uint32_t)(0x0u));
  /* 124effd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124effd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124effd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124effd7 call dword ptr [0x1250f2e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2e4))), 0x124effddu);
  /* 124effdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124effdf je 0x124effed */
  if (C.zf) goto L_124effed;
  /* 124effe1 mov dword ptr [0x1250cf20], 1 */
  w32((uint32_t)(0x1250cf20), (0x1u));
  /* 124effeb jmp 0x124f0012 */
  goto L_124f0012;
L_124effed:;
  /* 124effed push 0 */
  push32((uint32_t)(0x0u));
  /* 124effef push 0 */
  push32((uint32_t)(0x0u));
  /* 124efff1 push 1 */
  push32((uint32_t)(0x1u));
  /* 124efff3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124efff5 call dword ptr [0x1250f2fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2fc))), 0x124efffbu);
  /* 124efffb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124efffd je 0x124f000b */
  if (C.zf) goto L_124f000b;
  /* 124effff mov dword ptr [0x1250cf20], 2 */
  w32((uint32_t)(0x1250cf20), (0x2u));
  /* 124f0009 jmp 0x124f0012 */
  goto L_124f0012;
L_124f000b:;
  /* 124f000b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f000d jmp 0x124f0131 */
  goto L_124f0131;
L_124f0012:;
  /* 124f0012 cmp dword ptr [0x1250cf20], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0019 jne 0x124f0036 */
  if (!C.zf) goto L_124f0036;
  /* 124f001b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124f001e push eax */
  push32((uint32_t)(EAX));
  /* 124f001f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124f0022 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0023 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124f0026 push edx */
  push32((uint32_t)(EDX));
  /* 124f0027 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f002a push eax */
  push32((uint32_t)(EAX));
  /* 124f002b call dword ptr [0x1250f2fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2fc))), 0x124f0031u);
  /* 124f0031 jmp 0x124f0131 */
  goto L_124f0131;
L_124f0036:;
  /* 124f0036 cmp dword ptr [0x1250cf20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f003d jne 0x124f012f */
  if (!C.zf) goto L_124f012f;
  /* 124f0043 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0047 jne 0x124f0052 */
  if (!C.zf) goto L_124f0052;
  /* 124f0049 mov ecx, dword ptr [0x1250cdd0] */
  ECX = (r32((uint32_t)(0x1250cdd0)));
  /* 124f004f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_124f0052:;
  /* 124f0052 push 0 */
  push32((uint32_t)(0x0u));
  /* 124f0054 push 0 */
  push32((uint32_t)(0x0u));
  /* 124f0056 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124f0059 push edx */
  push32((uint32_t)(EDX));
  /* 124f005a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f005d push eax */
  push32((uint32_t)(EAX));
  /* 124f005e call dword ptr [0x1250f2e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2e4))), 0x124f0064u);
  /* 124f0064 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124f0067 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f006b jne 0x124f0074 */
  if (!C.zf) goto L_124f0074;
  /* 124f006d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f006f jmp 0x124f0131 */
  goto L_124f0131;
L_124f0074:;
  /* 124f0074 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124f007b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124f007e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124f0080 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0083 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124f0085 call 0x124e3b60 */
  push32(0x124f008au); f_124e3b60();
  /* 124f008a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 124f008d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124f0090 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124f0093 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 124f0096 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124f009d jmp 0x124f00b6 */
  goto L_124f00b6;
  /* 124f009f mov eax, 1 */
  EAX = (0x1u);
  /* 124f00a4 ret  */
  ESPCHK(0x124effa0u, _esp0);
  ESP += 4; return;
  /* 124f00a5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124f00a8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 124f00af mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124f00b6:;
  /* 124f00b6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f00ba jne 0x124f00c0 */
  if (!C.zf) goto L_124f00c0;
  /* 124f00bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f00be jmp 0x124f0131 */
  goto L_124f0131;
L_124f00c0:;
  /* 124f00c0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124f00c3 push edx */
  push32((uint32_t)(EDX));
  /* 124f00c4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124f00c7 push eax */
  push32((uint32_t)(EAX));
  /* 124f00c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124f00cb push ecx */
  push32((uint32_t)(ECX));
  /* 124f00cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f00cf push edx */
  push32((uint32_t)(EDX));
  /* 124f00d0 call dword ptr [0x1250f2e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2e4))), 0x124f00d6u);
  /* 124f00d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124f00d8 jne 0x124f00de */
  if (!C.zf) goto L_124f00de;
  /* 124f00da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f00dc jmp 0x124f0131 */
  goto L_124f0131;
L_124f00de:;
  /* 124f00de cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f00e2 jne 0x124f0106 */
  if (!C.zf) goto L_124f0106;
  /* 124f00e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124f00e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124f00e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124f00ea push 0 */
  push32((uint32_t)(0x0u));
  /* 124f00ec push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124f00ee mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124f00f1 push eax */
  push32((uint32_t)(EAX));
  /* 124f00f2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124f00f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124f00fa push ecx */
  push32((uint32_t)(ECX));
  /* 124f00fb call dword ptr [0x1250f378] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f378))), 0x124f0101u);
  /* 124f0101 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 124f0104 jmp 0x124f012a */
  goto L_124f012a;
L_124f0106:;
  /* 124f0106 push 0 */
  push32((uint32_t)(0x0u));
  /* 124f0108 push 0 */
  push32((uint32_t)(0x0u));
  /* 124f010a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124f010d push edx */
  push32((uint32_t)(EDX));
  /* 124f010e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124f0111 push eax */
  push32((uint32_t)(EAX));
  /* 124f0112 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124f0114 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124f0117 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0118 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124f011d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124f0120 push edx */
  push32((uint32_t)(EDX));
  /* 124f0121 call dword ptr [0x1250f378] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f378))), 0x124f0127u);
  /* 124f0127 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_124f012a:;
  /* 124f012a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124f012d jmp 0x124f0131 */
  goto L_124f0131;
L_124f012f:;
  /* 124f012f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124f0131:;
  /* 124f0131 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 124f0134 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124f0137 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 124f013e pop edi */
  EDI = (pop32());
  /* 124f013f pop esi */
  ESI = (pop32());
  /* 124f0140 pop ebx */
  EBX = (pop32());
  /* 124f0141 mov esp, ebp */
  ESP = (EBP);
  /* 124f0143 pop ebp */
  EBP = (pop32());
  /* 124f0144 ret  */
  ESPCHK(0x124effa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020150 @ 0x124f0150 (11 bytes, 6 insns) */
void f_124f0150(void) {
  FTRACE(0x124f0150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124f0150 push ebp */
  push32((uint32_t)(EBP));
  /* 124f0151 mov ebp, esp */
  EBP = (ESP);
  /* 124f0153 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0156 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0159 pop ebp */
  EBP = (pop32());
  /* 124f015a ret  */
  ESPCHK(0x124f0150u, _esp0);
  ESP += 4; return;
}

/* FUN_10020160 @ 0x124f0160 (147 bytes, 43 insns) */
void f_124f0160(void) {
  FTRACE(0x124f0160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124f0160 push ebp */
  push32((uint32_t)(EBP));
  /* 124f0161 mov ebp, esp */
  EBP = (ESP);
  /* 124f0163 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0164 cmp dword ptr [0x1250cdc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cdc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f016b jne 0x124f0187 */
  if (!C.zf) goto L_124f0187;
  /* 124f016d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0171 jl 0x124f0182 */
  if ((C.sf!=C.of)) goto L_124f0182;
  /* 124f0173 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0177 jg 0x124f0182 */
  if ((!C.zf&&C.sf==C.of)) goto L_124f0182;
  /* 124f0179 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f017c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f017f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_124f0182:;
  /* 124f0182 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0185 jmp 0x124f01ef */
  goto L_124f01ef;
L_124f0187:;
  /* 124f0187 push 0x1250cf4c */
  push32((uint32_t)(0x1250cf4cu));
  /* 124f018c call dword ptr [0x1250f3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3bc))), 0x124f0192u);
  /* 124f0192 cmp dword ptr [0x1250cf3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0199 je 0x124f01b9 */
  if (C.zf) goto L_124f01b9;
  /* 124f019b push 0x1250cf4c */
  push32((uint32_t)(0x1250cf4cu));
  /* 124f01a0 call dword ptr [0x1250f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3ac))), 0x124f01a6u);
  /* 124f01a6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124f01a8 call 0x124e43c0 */
  push32(0x124f01adu); f_124e43c0();
  /* 124f01ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f01b0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124f01b7 jmp 0x124f01c0 */
  goto L_124f01c0;
L_124f01b9:;
  /* 124f01b9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_124f01c0:;
  /* 124f01c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f01c3 push ecx */
  push32((uint32_t)(ECX));
  /* 124f01c4 call 0x124f0200 */
  push32(0x124f01c9u); f_124f0200();
  /* 124f01c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f01cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124f01cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f01d3 je 0x124f01e1 */
  if (C.zf) goto L_124f01e1;
  /* 124f01d5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124f01d7 call 0x124e4460 */
  push32(0x124f01dcu); f_124e4460();
  /* 124f01dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f01df jmp 0x124f01ec */
  goto L_124f01ec;
L_124f01e1:;
  /* 124f01e1 push 0x1250cf4c */
  push32((uint32_t)(0x1250cf4cu));
  /* 124f01e6 call dword ptr [0x1250f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3ac))), 0x124f01ecu);
L_124f01ec:;
  /* 124f01ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_124f01ef:;
  /* 124f01ef mov esp, ebp */
  ESP = (EBP);
  /* 124f01f1 pop ebp */
  EBP = (pop32());
  /* 124f01f2 ret  */
  ESPCHK(0x124f0160u, _esp0);
  ESP += 4; return;
}

/* FUN_10020200 @ 0x124f0200 (299 bytes, 91 insns) */
void f_124f0200(void) {
  FTRACE(0x124f0200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124f0200 push ebp */
  push32((uint32_t)(EBP));
  /* 124f0201 mov ebp, esp */
  EBP = (ESP);
  /* 124f0203 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124f0206 cmp dword ptr [0x1250cdc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cdc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f020d jne 0x124f022c */
  if (!C.zf) goto L_124f022c;
  /* 124f020f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0213 jl 0x124f0224 */
  if ((C.sf!=C.of)) goto L_124f0224;
  /* 124f0215 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0219 jg 0x124f0224 */
  if ((!C.zf&&C.sf==C.of)) goto L_124f0224;
  /* 124f021b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f021e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0221 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_124f0224:;
  /* 124f0224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0227 jmp 0x124f0327 */
  goto L_124f0327;
L_124f022c:;
  /* 124f022c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0233 jge 0x124f0273 */
  if ((C.sf==C.of)) goto L_124f0273;
  /* 124f0235 cmp dword ptr [0x1250aea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1250aea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f023c jle 0x124f0251 */
  if ((C.zf||C.sf!=C.of)) goto L_124f0251;
  /* 124f023e push 1 */
  push32((uint32_t)(0x1u));
  /* 124f0240 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0243 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0244 call 0x124e69d0 */
  push32(0x124f0249u); f_124e69d0();
  /* 124f0249 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f024c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 124f024f jmp 0x124f0265 */
  goto L_124f0265;
L_124f0251:;
  /* 124f0251 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0254 mov eax, dword ptr [0x1250ac98] */
  EAX = (r32((uint32_t)(0x1250ac98)));
  /* 124f0259 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124f025b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 124f025f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124f0262 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_124f0265:;
  /* 124f0265 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0269 jne 0x124f0273 */
  if (!C.zf) goto L_124f0273;
  /* 124f026b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f026e jmp 0x124f0327 */
  goto L_124f0327;
L_124f0273:;
  /* 124f0273 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0276 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 124f0279 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 124f027f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 124f0285 mov eax, dword ptr [0x1250ac98] */
  EAX = (r32((uint32_t)(0x1250ac98)));
  /* 124f028a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124f028c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 124f0290 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 124f0296 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124f0298 je 0x124f02bc */
  if (C.zf) goto L_124f02bc;
  /* 124f029a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f029d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 124f02a0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 124f02a6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 124f02a9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 124f02ac mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 124f02af mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 124f02b3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 124f02ba jmp 0x124f02cd */
  goto L_124f02cd;
L_124f02bc:;
  /* 124f02bc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 124f02bf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 124f02c2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 124f02c6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_124f02cd:;
  /* 124f02cd push 1 */
  push32((uint32_t)(0x1u));
  /* 124f02cf push 0 */
  push32((uint32_t)(0x0u));
  /* 124f02d1 push 3 */
  push32((uint32_t)(0x3u));
  /* 124f02d3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 124f02d6 push edx */
  push32((uint32_t)(EDX));
  /* 124f02d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f02da push eax */
  push32((uint32_t)(EAX));
  /* 124f02db lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 124f02de push ecx */
  push32((uint32_t)(ECX));
  /* 124f02df push 0x100 */
  push32((uint32_t)(0x100u));
  /* 124f02e4 mov edx, dword ptr [0x1250cdc0] */
  EDX = (r32((uint32_t)(0x1250cdc0)));
  /* 124f02ea push edx */
  push32((uint32_t)(EDX));
  /* 124f02eb call 0x124e8db0 */
  push32(0x124f02f0u); f_124e8db0();
  /* 124f02f0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f02f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124f02f6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f02fa jne 0x124f0301 */
  if (!C.zf) goto L_124f0301;
  /* 124f02fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f02ff jmp 0x124f0327 */
  goto L_124f0327;
L_124f0301:;
  /* 124f0301 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0305 jne 0x124f0311 */
  if (!C.zf) goto L_124f0311;
  /* 124f0307 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f030a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124f030f jmp 0x124f0327 */
  goto L_124f0327;
L_124f0311:;
  /* 124f0311 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0314 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124f0319 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 124f031c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 124f0322 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 124f0325 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_124f0327:;
  /* 124f0327 mov esp, ebp */
  ESP = (EBP);
  /* 124f0329 pop ebp */
  EBP = (pop32());
  /* 124f032a ret  */
  ESPCHK(0x124f0200u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x124f0330 (52 bytes, 19 insns) */
void f_124f0330(void) {
  FTRACE(0x124f0330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124f0330 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 124f0334 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 124f0338 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124f033a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 124f033e jne 0x124f0349 */
  if (!C.zf) goto L_124f0349;
  /* 124f0340 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 124f0344 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124f0346 ret 0x10 */
  ESPCHK(0x124f0330u, _esp0);
  ESP += 20; return;
L_124f0349:;
  /* 124f0349 push ebx */
  push32((uint32_t)(EBX));
  /* 124f034a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124f034c mov ebx, eax */
  EBX = (EAX);
  /* 124f034e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 124f0352 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124f0356 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0358 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 124f035c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124f035e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0360 pop ebx */
  EBX = (pop32());
  /* 124f0361 ret 0x10 */
  ESPCHK(0x124f0330u, _esp0);
  ESP += 20; return;
}

/* FUN_10020370 @ 0x124f0370 (46 bytes, 18 insns) */
void f_124f0370(void) {
  FTRACE(0x124f0370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124f0370 push ebp */
  push32((uint32_t)(EBP));
  /* 124f0371 mov ebp, esp */
  EBP = (ESP);
  /* 124f0373 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0374 push 0xc */
  push32((uint32_t)(0xcu));
  /* 124f0376 call 0x124e43c0 */
  push32(0x124f037bu); f_124e43c0();
  /* 124f037b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f037e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0381 push eax */
  push32((uint32_t)(EAX));
  /* 124f0382 call 0x124f03a0 */
  push32(0x124f0387u); f_124f03a0();
  /* 124f0387 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f038a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124f038d push 0xc */
  push32((uint32_t)(0xcu));
  /* 124f038f call 0x124e4460 */
  push32(0x124f0394u); f_124e4460();
  /* 124f0394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f039a mov esp, ebp */
  ESP = (EBP);
  /* 124f039c pop ebp */
  EBP = (pop32());
  /* 124f039d ret  */
  ESPCHK(0x124f0370u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x124f03a0 (198 bytes, 69 insns) */
void f_124f03a0(void) {
  FTRACE(0x124f03a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124f03a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124f03a1 mov ebp, esp */
  EBP = (ESP);
  /* 124f03a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124f03a6 mov eax, dword ptr [0x1250cbe0] */
  EAX = (r32((uint32_t)(0x1250cbe0)));
  /* 124f03ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124f03ae cmp dword ptr [0x1250e6e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250e6e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f03b5 jne 0x124f03be */
  if (!C.zf) goto L_124f03be;
  /* 124f03b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f03b9 jmp 0x124f0462 */
  goto L_124f0462;
L_124f03be:;
  /* 124f03be cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f03c2 jne 0x124f03e6 */
  if (!C.zf) goto L_124f03e6;
  /* 124f03c4 cmp dword ptr [0x1250cbe8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cbe8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f03cb je 0x124f03e6 */
  if (C.zf) goto L_124f03e6;
  /* 124f03cd call 0x124f04c0 */
  push32(0x124f03d2u); f_124f04c0();
  /* 124f03d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124f03d4 je 0x124f03dd */
  if (C.zf) goto L_124f03dd;
  /* 124f03d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f03d8 jmp 0x124f0462 */
  goto L_124f0462;
L_124f03dd:;
  /* 124f03dd mov ecx, dword ptr [0x1250cbe0] */
  ECX = (r32((uint32_t)(0x1250cbe0)));
  /* 124f03e3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_124f03e6:;
  /* 124f03e6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f03ea je 0x124f0460 */
  if (C.zf) goto L_124f0460;
  /* 124f03ec cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f03f0 je 0x124f0460 */
  if (C.zf) goto L_124f0460;
  /* 124f03f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f03f5 push edx */
  push32((uint32_t)(EDX));
  /* 124f03f6 call 0x124e37f0 */
  push32(0x124f03fbu); f_124e37f0();
  /* 124f03fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f03fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124f0401:;
  /* 124f0401 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0404 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0407 je 0x124f0460 */
  if (C.zf) goto L_124f0460;
  /* 124f0409 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f040c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124f040e push edx */
  push32((uint32_t)(EDX));
  /* 124f040f call 0x124e37f0 */
  push32(0x124f0414u); f_124e37f0();
  /* 124f0414 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0417 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f041a jbe 0x124f0455 */
  if ((C.cf||C.zf)) goto L_124f0455;
  /* 124f041c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f041f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124f0421 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f0424 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 124f0428 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f042b jne 0x124f0455 */
  if (!C.zf) goto L_124f0455;
  /* 124f042d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f0430 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0431 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0434 push edx */
  push32((uint32_t)(EDX));
  /* 124f0435 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0438 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124f043a push ecx */
  push32((uint32_t)(ECX));
  /* 124f043b call 0x124f0470 */
  push32(0x124f0440u); f_124f0470();
  /* 124f0440 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0443 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124f0445 jne 0x124f0455 */
  if (!C.zf) goto L_124f0455;
  /* 124f0447 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f044a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124f044c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f044f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 124f0453 jmp 0x124f0462 */
  goto L_124f0462;
L_124f0455:;
  /* 124f0455 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0458 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f045b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124f045e jmp 0x124f0401 */
  goto L_124f0401;
L_124f0460:;
  /* 124f0460 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124f0462:;
  /* 124f0462 mov esp, ebp */
  ESP = (EBP);
  /* 124f0464 pop ebp */
  EBP = (pop32());
  /* 124f0465 ret  */
  ESPCHK(0x124f03a0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x124f0470 (79 bytes, 32 insns) */
void f_124f0470(void) {
  FTRACE(0x124f0470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124f0470 push ebp */
  push32((uint32_t)(EBP));
  /* 124f0471 mov ebp, esp */
  EBP = (ESP);
  /* 124f0473 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0474 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0478 jne 0x124f047e */
  if (!C.zf) goto L_124f047e;
  /* 124f047a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f047c jmp 0x124f04bb */
  goto L_124f04bb;
L_124f047e:;
  /* 124f047e mov eax, dword ptr [0x1250e2a4] */
  EAX = (r32((uint32_t)(0x1250e2a4)));
  /* 124f0483 push eax */
  push32((uint32_t)(EAX));
  /* 124f0484 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124f0487 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0488 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124f048b push edx */
  push32((uint32_t)(EDX));
  /* 124f048c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124f048f push eax */
  push32((uint32_t)(EAX));
  /* 124f0490 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0493 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0494 push 1 */
  push32((uint32_t)(0x1u));
  /* 124f0496 mov edx, dword ptr [0x1250e544] */
  EDX = (r32((uint32_t)(0x1250e544)));
  /* 124f049c push edx */
  push32((uint32_t)(EDX));
  /* 124f049d call 0x124f0570 */
  push32(0x124f04a2u); f_124f0570();
  /* 124f04a2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f04a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124f04a8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f04ac jne 0x124f04b5 */
  if (!C.zf) goto L_124f04b5;
  /* 124f04ae mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 124f04b3 jmp 0x124f04bb */
  goto L_124f04bb;
L_124f04b5:;
  /* 124f04b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f04b8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_124f04bb:;
  /* 124f04bb mov esp, ebp */
  ESP = (EBP);
  /* 124f04bd pop ebp */
  EBP = (pop32());
  /* 124f04be ret  */
  ESPCHK(0x124f0470u, _esp0);
  ESP += 4; return;
}

/* FUN_100204c0 @ 0x124f04c0 (174 bytes, 66 insns) */
void f_124f04c0(void) {
  FTRACE(0x124f04c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124f04c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124f04c1 mov ebp, esp */
  EBP = (ESP);
  /* 124f04c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124f04c6 mov eax, dword ptr [0x1250cbe8] */
  EAX = (r32((uint32_t)(0x1250cbe8)));
  /* 124f04cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124f04ce:;
  /* 124f04ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f04d1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f04d4 je 0x124f0568 */
  if (C.zf) goto L_124f0568;
  /* 124f04da push 0 */
  push32((uint32_t)(0x0u));
  /* 124f04dc push 0 */
  push32((uint32_t)(0x0u));
  /* 124f04de push 0 */
  push32((uint32_t)(0x0u));
  /* 124f04e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124f04e2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124f04e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f04e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124f04e9 push eax */
  push32((uint32_t)(EAX));
  /* 124f04ea push 0 */
  push32((uint32_t)(0x0u));
  /* 124f04ec push 1 */
  push32((uint32_t)(0x1u));
  /* 124f04ee call dword ptr [0x1250f378] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f378))), 0x124f04f4u);
  /* 124f04f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124f04f7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f04fb jne 0x124f0502 */
  if (!C.zf) goto L_124f0502;
  /* 124f04fd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124f0500 jmp 0x124f056a */
  goto L_124f056a;
L_124f0502:;
  /* 124f0502 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 124f0504 push 0x12509354 */
  push32((uint32_t)(0x12509354u));
  /* 124f0509 push 2 */
  push32((uint32_t)(0x2u));
  /* 124f050b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f050e push ecx */
  push32((uint32_t)(ECX));
  /* 124f050f call 0x124e09c0 */
  push32(0x124f0514u); f_124e09c0();
  /* 124f0514 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0517 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124f051a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f051e jne 0x124f0525 */
  if (!C.zf) goto L_124f0525;
  /* 124f0520 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124f0523 jmp 0x124f056a */
  goto L_124f056a;
L_124f0525:;
  /* 124f0525 push 0 */
  push32((uint32_t)(0x0u));
  /* 124f0527 push 0 */
  push32((uint32_t)(0x0u));
  /* 124f0529 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f052c push edx */
  push32((uint32_t)(EDX));
  /* 124f052d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0530 push eax */
  push32((uint32_t)(EAX));
  /* 124f0531 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124f0533 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f0536 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124f0538 push edx */
  push32((uint32_t)(EDX));
  /* 124f0539 push 0 */
  push32((uint32_t)(0x0u));
  /* 124f053b push 1 */
  push32((uint32_t)(0x1u));
  /* 124f053d call dword ptr [0x1250f378] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f378))), 0x124f0543u);
  /* 124f0543 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124f0545 jne 0x124f054c */
  if (!C.zf) goto L_124f054c;
  /* 124f0547 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124f054a jmp 0x124f056a */
  goto L_124f056a;
L_124f054c:;
  /* 124f054c push 0 */
  push32((uint32_t)(0x0u));
  /* 124f054e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0551 push eax */
  push32((uint32_t)(EAX));
  /* 124f0552 call 0x124f09c0 */
  push32(0x124f0557u); f_124f09c0();
  /* 124f0557 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f055a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f055d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0560 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124f0563 jmp 0x124f04ce */
  goto L_124f04ce;
L_124f0568:;
  /* 124f0568 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124f056a:;
  /* 124f056a mov esp, ebp */
  ESP = (EBP);
  /* 124f056c pop ebp */
  EBP = (pop32());
  /* 124f056d ret  */
  ESPCHK(0x124f04c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020570 @ 0x124f0570 (970 bytes, 340 insns) */
void f_124f0570(void) {
  FTRACE(0x124f0570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124f0570 push ebp */
  push32((uint32_t)(EBP));
  /* 124f0571 mov ebp, esp */
  EBP = (ESP);
  /* 124f0573 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124f0575 push 0x125093a8 */
  push32((uint32_t)(0x125093a8u));
  /* 124f057a push 0x124e9ac8 */
  push32((uint32_t)(0x124e9ac8u));
  /* 124f057f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 124f0585 push eax */
  push32((uint32_t)(EAX));
  /* 124f0586 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 124f058d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0590 push ebx */
  push32((uint32_t)(EBX));
  /* 124f0591 push esi */
  push32((uint32_t)(ESI));
  /* 124f0592 push edi */
  push32((uint32_t)(EDI));
  /* 124f0593 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124f0596 cmp dword ptr [0x1250cf24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f059d jne 0x124f05f6 */
  if (!C.zf) goto L_124f05f6;
  /* 124f059f push 1 */
  push32((uint32_t)(0x1u));
  /* 124f05a1 push 0x12508a04 */
  push32((uint32_t)(0x12508a04u));
  /* 124f05a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 124f05a8 push 0x12508a04 */
  push32((uint32_t)(0x12508a04u));
  /* 124f05ad push 0 */
  push32((uint32_t)(0x0u));
  /* 124f05af push 0 */
  push32((uint32_t)(0x0u));
  /* 124f05b1 call dword ptr [0x1250f2e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2e0))), 0x124f05b7u);
  /* 124f05b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124f05b9 je 0x124f05c7 */
  if (C.zf) goto L_124f05c7;
  /* 124f05bb mov dword ptr [0x1250cf24], 1 */
  w32((uint32_t)(0x1250cf24), (0x1u));
  /* 124f05c5 jmp 0x124f05f6 */
  goto L_124f05f6;
L_124f05c7:;
  /* 124f05c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 124f05c9 push 0x12508a00 */
  push32((uint32_t)(0x12508a00u));
  /* 124f05ce push 1 */
  push32((uint32_t)(0x1u));
  /* 124f05d0 push 0x12508a00 */
  push32((uint32_t)(0x12508a00u));
  /* 124f05d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124f05d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124f05d9 call dword ptr [0x1250f2ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2ec))), 0x124f05dfu);
  /* 124f05df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124f05e1 je 0x124f05ef */
  if (C.zf) goto L_124f05ef;
  /* 124f05e3 mov dword ptr [0x1250cf24], 2 */
  w32((uint32_t)(0x1250cf24), (0x2u));
  /* 124f05ed jmp 0x124f05f6 */
  goto L_124f05f6;
L_124f05ef:;
  /* 124f05ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f05f1 jmp 0x124f0954 */
  goto L_124f0954;
L_124f05f6:;
  /* 124f05f6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f05fa jle 0x124f060f */
  if ((C.zf||C.sf!=C.of)) goto L_124f060f;
  /* 124f05fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124f05ff push eax */
  push32((uint32_t)(EAX));
  /* 124f0600 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124f0603 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0604 call 0x124f0970 */
  push32(0x124f0609u); f_124f0970();
  /* 124f0609 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f060c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_124f060f:;
  /* 124f060f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0613 jle 0x124f0628 */
  if ((C.zf||C.sf!=C.of)) goto L_124f0628;
  /* 124f0615 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124f0618 push edx */
  push32((uint32_t)(EDX));
  /* 124f0619 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124f061c push eax */
  push32((uint32_t)(EAX));
  /* 124f061d call 0x124f0970 */
  push32(0x124f0622u); f_124f0970();
  /* 124f0622 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0625 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_124f0628:;
  /* 124f0628 cmp dword ptr [0x1250cf24], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f062f jne 0x124f0654 */
  if (!C.zf) goto L_124f0654;
  /* 124f0631 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124f0634 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0635 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124f0638 push edx */
  push32((uint32_t)(EDX));
  /* 124f0639 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124f063c push eax */
  push32((uint32_t)(EAX));
  /* 124f063d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124f0640 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0641 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124f0644 push edx */
  push32((uint32_t)(EDX));
  /* 124f0645 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0648 push eax */
  push32((uint32_t)(EAX));
  /* 124f0649 call dword ptr [0x1250f2ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2ec))), 0x124f064fu);
  /* 124f064f jmp 0x124f0954 */
  goto L_124f0954;
L_124f0654:;
  /* 124f0654 cmp dword ptr [0x1250cf24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f065b jne 0x124f0952 */
  if (!C.zf) goto L_124f0952;
  /* 124f0661 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0665 jne 0x124f0670 */
  if (!C.zf) goto L_124f0670;
  /* 124f0667 mov ecx, dword ptr [0x1250cdd0] */
  ECX = (r32((uint32_t)(0x1250cdd0)));
  /* 124f066d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_124f0670:;
  /* 124f0670 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0674 je 0x124f0680 */
  if (C.zf) goto L_124f0680;
  /* 124f0676 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f067a jne 0x124f07fc */
  if (!C.zf) goto L_124f07fc;
L_124f0680:;
  /* 124f0680 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124f0683 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0686 jne 0x124f0692 */
  if (!C.zf) goto L_124f0692;
  /* 124f0688 mov eax, 2 */
  EAX = (0x2u);
  /* 124f068d jmp 0x124f0954 */
  goto L_124f0954;
L_124f0692:;
  /* 124f0692 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0696 jle 0x124f06a2 */
  if ((C.zf||C.sf!=C.of)) goto L_124f06a2;
  /* 124f0698 mov eax, 1 */
  EAX = (0x1u);
  /* 124f069d jmp 0x124f0954 */
  goto L_124f0954;
L_124f06a2:;
  /* 124f06a2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f06a6 jle 0x124f06b2 */
  if ((C.zf||C.sf!=C.of)) goto L_124f06b2;
  /* 124f06a8 mov eax, 3 */
  EAX = (0x3u);
  /* 124f06ad jmp 0x124f0954 */
  goto L_124f0954;
L_124f06b2:;
  /* 124f06b2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 124f06b5 push eax */
  push32((uint32_t)(EAX));
  /* 124f06b6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 124f06b9 push ecx */
  push32((uint32_t)(ECX));
  /* 124f06ba call dword ptr [0x1250f338] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f338))), 0x124f06c0u);
  /* 124f06c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124f06c2 jne 0x124f06cb */
  if (!C.zf) goto L_124f06cb;
  /* 124f06c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f06c6 jmp 0x124f0954 */
  goto L_124f0954;
L_124f06cb:;
  /* 124f06cb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f06cf jne 0x124f06d7 */
  if (!C.zf) goto L_124f06d7;
  /* 124f06d1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f06d5 je 0x124f0704 */
  if (C.zf) goto L_124f0704;
L_124f06d7:;
  /* 124f06d7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f06db jne 0x124f06e3 */
  if (!C.zf) goto L_124f06e3;
  /* 124f06dd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f06e1 je 0x124f0704 */
  if (C.zf) goto L_124f0704;
L_124f06e3:;
  /* 124f06e3 push 0x12509368 */
  push32((uint32_t)(0x12509368u));
  /* 124f06e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124f06ea push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 124f06ef push 0x12509360 */
  push32((uint32_t)(0x12509360u));
  /* 124f06f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 124f06f6 call 0x124dfa80 */
  push32(0x124f06fbu); f_124dfa80();
  /* 124f06fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f06fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0701 jne 0x124f0704 */
  if (!C.zf) goto L_124f0704;
  /* 124f0703 int3  */
  x86_unimpl("int3 @ 0x124f0703");
L_124f0704:;
  /* 124f0704 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124f0706 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124f0708 jne 0x124f06cb */
  if (!C.zf) goto L_124f06cb;
  /* 124f070a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f070e jle 0x124f0783 */
  if ((C.zf||C.sf!=C.of)) goto L_124f0783;
  /* 124f0710 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0714 jae 0x124f0720 */
  if (!C.cf) goto L_124f0720;
  /* 124f0716 mov eax, 3 */
  EAX = (0x3u);
  /* 124f071b jmp 0x124f0954 */
  goto L_124f0954;
L_124f0720:;
  /* 124f0720 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 124f0723 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 124f0726 jmp 0x124f0731 */
  goto L_124f0731;
L_124f0728:;
  /* 124f0728 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 124f072b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f072e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_124f0731:;
  /* 124f0731 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 124f0734 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f0736 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124f0738 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124f073a je 0x124f0779 */
  if (C.zf) goto L_124f0779;
  /* 124f073c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 124f073f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124f0741 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 124f0744 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124f0746 je 0x124f0779 */
  if (C.zf) goto L_124f0779;
  /* 124f0748 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124f074b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124f074d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124f074f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 124f0752 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f0754 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124f0756 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0758 jl 0x124f0777 */
  if ((C.sf!=C.of)) goto L_124f0777;
  /* 124f075a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124f075d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124f075f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124f0761 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 124f0764 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124f0766 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 124f0769 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f076b jg 0x124f0777 */
  if ((!C.zf&&C.sf==C.of)) goto L_124f0777;
  /* 124f076d mov eax, 2 */
  EAX = (0x2u);
  /* 124f0772 jmp 0x124f0954 */
  goto L_124f0954;
L_124f0777:;
  /* 124f0777 jmp 0x124f0728 */
  goto L_124f0728;
L_124f0779:;
  /* 124f0779 mov eax, 3 */
  EAX = (0x3u);
  /* 124f077e jmp 0x124f0954 */
  goto L_124f0954;
L_124f0783:;
  /* 124f0783 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0787 jle 0x124f07fc */
  if ((C.zf||C.sf!=C.of)) goto L_124f07fc;
  /* 124f0789 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f078d jae 0x124f0799 */
  if (!C.cf) goto L_124f0799;
  /* 124f078f mov eax, 1 */
  EAX = (0x1u);
  /* 124f0794 jmp 0x124f0954 */
  goto L_124f0954;
L_124f0799:;
  /* 124f0799 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 124f079c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 124f079f jmp 0x124f07aa */
  goto L_124f07aa;
L_124f07a1:;
  /* 124f07a1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 124f07a4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f07a7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_124f07aa:;
  /* 124f07aa mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 124f07ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124f07af mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124f07b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124f07b3 je 0x124f07f2 */
  if (C.zf) goto L_124f07f2;
  /* 124f07b5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 124f07b8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124f07ba mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 124f07bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124f07bf je 0x124f07f2 */
  if (C.zf) goto L_124f07f2;
  /* 124f07c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124f07c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f07c6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124f07c8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 124f07cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124f07cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124f07cf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f07d1 jl 0x124f07f0 */
  if ((C.sf!=C.of)) goto L_124f07f0;
  /* 124f07d3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124f07d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124f07d8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124f07da mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 124f07dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f07df mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 124f07e2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f07e4 jg 0x124f07f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_124f07f0;
  /* 124f07e6 mov eax, 2 */
  EAX = (0x2u);
  /* 124f07eb jmp 0x124f0954 */
  goto L_124f0954;
L_124f07f0:;
  /* 124f07f0 jmp 0x124f07a1 */
  goto L_124f07a1;
L_124f07f2:;
  /* 124f07f2 mov eax, 1 */
  EAX = (0x1u);
  /* 124f07f7 jmp 0x124f0954 */
  goto L_124f0954;
L_124f07fc:;
  /* 124f07fc push 0 */
  push32((uint32_t)(0x0u));
  /* 124f07fe push 0 */
  push32((uint32_t)(0x0u));
  /* 124f0800 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124f0803 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0804 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124f0807 push edx */
  push32((uint32_t)(EDX));
  /* 124f0808 push 9 */
  push32((uint32_t)(0x9u));
  /* 124f080a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 124f080d push eax */
  push32((uint32_t)(EAX));
  /* 124f080e call dword ptr [0x1250f32c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f32c))), 0x124f0814u);
  /* 124f0814 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124f0817 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f081b jne 0x124f0824 */
  if (!C.zf) goto L_124f0824;
  /* 124f081d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f081f jmp 0x124f0954 */
  goto L_124f0954;
L_124f0824:;
  /* 124f0824 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124f082b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124f082e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124f0830 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0833 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124f0835 call 0x124e3b60 */
  push32(0x124f083au); f_124e3b60();
  /* 124f083a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 124f083d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124f0840 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 124f0843 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 124f0846 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124f084d jmp 0x124f0866 */
  goto L_124f0866;
  /* 124f084f mov eax, 1 */
  EAX = (0x1u);
  /* 124f0854 ret  */
  ESPCHK(0x124f0570u, _esp0);
  ESP += 4; return;
  /* 124f0855 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124f0858 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 124f085f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124f0866:;
  /* 124f0866 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f086a jne 0x124f0873 */
  if (!C.zf) goto L_124f0873;
  /* 124f086c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f086e jmp 0x124f0954 */
  goto L_124f0954;
L_124f0873:;
  /* 124f0873 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124f0876 push edx */
  push32((uint32_t)(EDX));
  /* 124f0877 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124f087a push eax */
  push32((uint32_t)(EAX));
  /* 124f087b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124f087e push ecx */
  push32((uint32_t)(ECX));
  /* 124f087f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124f0882 push edx */
  push32((uint32_t)(EDX));
  /* 124f0883 push 1 */
  push32((uint32_t)(0x1u));
  /* 124f0885 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 124f0888 push eax */
  push32((uint32_t)(EAX));
  /* 124f0889 call dword ptr [0x1250f32c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f32c))), 0x124f088fu);
  /* 124f088f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124f0891 jne 0x124f089a */
  if (!C.zf) goto L_124f089a;
  /* 124f0893 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f0895 jmp 0x124f0954 */
  goto L_124f0954;
L_124f089a:;
  /* 124f089a push 0 */
  push32((uint32_t)(0x0u));
  /* 124f089c push 0 */
  push32((uint32_t)(0x0u));
  /* 124f089e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124f08a1 push ecx */
  push32((uint32_t)(ECX));
  /* 124f08a2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124f08a5 push edx */
  push32((uint32_t)(EDX));
  /* 124f08a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 124f08a8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 124f08ab push eax */
  push32((uint32_t)(EAX));
  /* 124f08ac call dword ptr [0x1250f32c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f32c))), 0x124f08b2u);
  /* 124f08b2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 124f08b5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f08b9 jne 0x124f08c2 */
  if (!C.zf) goto L_124f08c2;
  /* 124f08bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f08bd jmp 0x124f0954 */
  goto L_124f0954;
L_124f08c2:;
  /* 124f08c2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124f08c9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124f08cc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124f08ce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f08d1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124f08d3 call 0x124e3b60 */
  push32(0x124f08d8u); f_124e3b60();
  /* 124f08d8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 124f08db mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124f08de mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 124f08e1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 124f08e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124f08eb jmp 0x124f0904 */
  goto L_124f0904;
  /* 124f08ed mov eax, 1 */
  EAX = (0x1u);
  /* 124f08f2 ret  */
  ESPCHK(0x124f0570u, _esp0);
  ESP += 4; return;
  /* 124f08f3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124f08f6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 124f08fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124f0904:;
  /* 124f0904 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0908 jne 0x124f090e */
  if (!C.zf) goto L_124f090e;
  /* 124f090a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f090c jmp 0x124f0954 */
  goto L_124f0954;
L_124f090e:;
  /* 124f090e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 124f0911 push edx */
  push32((uint32_t)(EDX));
  /* 124f0912 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124f0915 push eax */
  push32((uint32_t)(EAX));
  /* 124f0916 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124f0919 push ecx */
  push32((uint32_t)(ECX));
  /* 124f091a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124f091d push edx */
  push32((uint32_t)(EDX));
  /* 124f091e push 1 */
  push32((uint32_t)(0x1u));
  /* 124f0920 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 124f0923 push eax */
  push32((uint32_t)(EAX));
  /* 124f0924 call dword ptr [0x1250f32c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f32c))), 0x124f092au);
  /* 124f092a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124f092c jne 0x124f0932 */
  if (!C.zf) goto L_124f0932;
  /* 124f092e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f0930 jmp 0x124f0954 */
  goto L_124f0954;
L_124f0932:;
  /* 124f0932 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124f0935 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0936 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 124f0939 push edx */
  push32((uint32_t)(EDX));
  /* 124f093a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124f093d push eax */
  push32((uint32_t)(EAX));
  /* 124f093e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124f0941 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0942 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124f0945 push edx */
  push32((uint32_t)(EDX));
  /* 124f0946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0949 push eax */
  push32((uint32_t)(EAX));
  /* 124f094a call dword ptr [0x1250f2e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2e0))), 0x124f0950u);
  /* 124f0950 jmp 0x124f0954 */
  goto L_124f0954;
L_124f0952:;
  /* 124f0952 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124f0954:;
  /* 124f0954 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 124f0957 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124f095a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 124f0961 pop edi */
  EDI = (pop32());
  /* 124f0962 pop esi */
  ESI = (pop32());
  /* 124f0963 pop ebx */
  EBX = (pop32());
  /* 124f0964 mov esp, ebp */
  ESP = (EBP);
  /* 124f0966 pop ebp */
  EBP = (pop32());
  /* 124f0967 ret  */
  ESPCHK(0x124f0570u, _esp0);
  ESP += 4; return;
}

/* FUN_10020970 @ 0x124f0970 (80 bytes, 32 insns) */
void f_124f0970(void) {
  FTRACE(0x124f0970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124f0970 push ebp */
  push32((uint32_t)(EBP));
  /* 124f0971 mov ebp, esp */
  EBP = (ESP);
  /* 124f0973 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124f0976 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124f0979 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124f097c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f097f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124f0982:;
  /* 124f0982 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0985 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0988 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124f098b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124f098e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124f0990 je 0x124f09a7 */
  if (C.zf) goto L_124f09a7;
  /* 124f0992 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f0995 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124f0998 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124f099a je 0x124f09a7 */
  if (C.zf) goto L_124f09a7;
  /* 124f099c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f099f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f09a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124f09a5 jmp 0x124f0982 */
  goto L_124f0982;
L_124f09a7:;
  /* 124f09a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f09aa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124f09ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124f09af jne 0x124f09b9 */
  if (!C.zf) goto L_124f09b9;
  /* 124f09b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f09b4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124f09b7 jmp 0x124f09bc */
  goto L_124f09bc;
L_124f09b9:;
  /* 124f09b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_124f09bc:;
  /* 124f09bc mov esp, ebp */
  ESP = (EBP);
  /* 124f09be pop ebp */
  EBP = (pop32());
  /* 124f09bf ret  */
  ESPCHK(0x124f0970u, _esp0);
  ESP += 4; return;
}

/* FUN_100209c0 @ 0x124f09c0 (736 bytes, 224 insns) */
void f_124f09c0(void) {
  FTRACE(0x124f09c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124f09c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124f09c1 mov ebp, esp */
  EBP = (ESP);
  /* 124f09c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124f09c6 push esi */
  push32((uint32_t)(ESI));
  /* 124f09c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f09cb je 0x124f09ec */
  if (C.zf) goto L_124f09ec;
  /* 124f09cd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 124f09cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f09d2 push eax */
  push32((uint32_t)(EAX));
  /* 124f09d3 call 0x124f0e10 */
  push32(0x124f09d8u); f_124f0e10();
  /* 124f09d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f09db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124f09de cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f09e2 je 0x124f09ec */
  if (C.zf) goto L_124f09ec;
  /* 124f09e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f09e7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f09ea jne 0x124f09f4 */
  if (!C.zf) goto L_124f09f4;
L_124f09ec:;
  /* 124f09ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124f09ef jmp 0x124f0c9b */
  goto L_124f0c9b;
L_124f09f4:;
  /* 124f09f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124f09f7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 124f09fb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124f09fd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124f09ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 124f0a00 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124f0a03 mov ecx, dword ptr [0x1250cbe0] */
  ECX = (r32((uint32_t)(0x1250cbe0)));
  /* 124f0a09 cmp ecx, dword ptr [0x1250cbe4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1250cbe4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0a0f jne 0x124f0a25 */
  if (!C.zf) goto L_124f0a25;
  /* 124f0a11 mov edx, dword ptr [0x1250cbe0] */
  EDX = (r32((uint32_t)(0x1250cbe0)));
  /* 124f0a17 push edx */
  push32((uint32_t)(EDX));
  /* 124f0a18 call 0x124f0d20 */
  push32(0x124f0a1du); f_124f0d20();
  /* 124f0a1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0a20 mov dword ptr [0x1250cbe0], eax */
  w32((uint32_t)(0x1250cbe0), (EAX));
L_124f0a25:;
  /* 124f0a25 cmp dword ptr [0x1250cbe0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cbe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0a2c jne 0x124f0ae5 */
  if (!C.zf) goto L_124f0ae5;
  /* 124f0a32 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0a36 je 0x124f0a57 */
  if (C.zf) goto L_124f0a57;
  /* 124f0a38 cmp dword ptr [0x1250cbe8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cbe8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0a3f je 0x124f0a57 */
  if (C.zf) goto L_124f0a57;
  /* 124f0a41 call 0x124f04c0 */
  push32(0x124f0a46u); f_124f04c0();
  /* 124f0a46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124f0a48 je 0x124f0a52 */
  if (C.zf) goto L_124f0a52;
  /* 124f0a4a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124f0a4d jmp 0x124f0c9b */
  goto L_124f0c9b;
L_124f0a52:;
  /* 124f0a52 jmp 0x124f0ae5 */
  goto L_124f0ae5;
L_124f0a57:;
  /* 124f0a57 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0a5b je 0x124f0a64 */
  if (C.zf) goto L_124f0a64;
  /* 124f0a5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f0a5f jmp 0x124f0c9b */
  goto L_124f0c9b;
L_124f0a64:;
  /* 124f0a64 cmp dword ptr [0x1250cbe0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cbe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0a6b jne 0x124f0aa4 */
  if (!C.zf) goto L_124f0aa4;
  /* 124f0a6d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 124f0a72 push 0x125093c0 */
  push32((uint32_t)(0x125093c0u));
  /* 124f0a77 push 2 */
  push32((uint32_t)(0x2u));
  /* 124f0a79 push 4 */
  push32((uint32_t)(0x4u));
  /* 124f0a7b call 0x124e09c0 */
  push32(0x124f0a80u); f_124e09c0();
  /* 124f0a80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0a83 mov dword ptr [0x1250cbe0], eax */
  w32((uint32_t)(0x1250cbe0), (EAX));
  /* 124f0a88 cmp dword ptr [0x1250cbe0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cbe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0a8f jne 0x124f0a99 */
  if (!C.zf) goto L_124f0a99;
  /* 124f0a91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124f0a94 jmp 0x124f0c9b */
  goto L_124f0c9b;
L_124f0a99:;
  /* 124f0a99 mov eax, dword ptr [0x1250cbe0] */
  EAX = (r32((uint32_t)(0x1250cbe0)));
  /* 124f0a9e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_124f0aa4:;
  /* 124f0aa4 cmp dword ptr [0x1250cbe8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cbe8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0aab jne 0x124f0ae5 */
  if (!C.zf) goto L_124f0ae5;
  /* 124f0aad push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 124f0ab2 push 0x125093c0 */
  push32((uint32_t)(0x125093c0u));
  /* 124f0ab7 push 2 */
  push32((uint32_t)(0x2u));
  /* 124f0ab9 push 4 */
  push32((uint32_t)(0x4u));
  /* 124f0abb call 0x124e09c0 */
  push32(0x124f0ac0u); f_124e09c0();
  /* 124f0ac0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0ac3 mov dword ptr [0x1250cbe8], eax */
  w32((uint32_t)(0x1250cbe8), (EAX));
  /* 124f0ac8 cmp dword ptr [0x1250cbe8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cbe8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0acf jne 0x124f0ad9 */
  if (!C.zf) goto L_124f0ad9;
  /* 124f0ad1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124f0ad4 jmp 0x124f0c9b */
  goto L_124f0c9b;
L_124f0ad9:;
  /* 124f0ad9 mov ecx, dword ptr [0x1250cbe8] */
  ECX = (r32((uint32_t)(0x1250cbe8)));
  /* 124f0adf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_124f0ae5:;
  /* 124f0ae5 mov edx, dword ptr [0x1250cbe0] */
  EDX = (r32((uint32_t)(0x1250cbe0)));
  /* 124f0aeb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 124f0aee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124f0af1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124f0af4 push eax */
  push32((uint32_t)(EAX));
  /* 124f0af5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0af8 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0af9 call 0x124f0ca0 */
  push32(0x124f0afeu); f_124f0ca0();
  /* 124f0afe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0b01 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124f0b04 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0b08 jl 0x124f0ba1 */
  if ((C.sf!=C.of)) goto L_124f0ba1;
  /* 124f0b0e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0b11 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0b14 je 0x124f0ba1 */
  if (C.zf) goto L_124f0ba1;
  /* 124f0b1a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0b1e je 0x124f0b93 */
  if (C.zf) goto L_124f0b93;
  /* 124f0b20 push 2 */
  push32((uint32_t)(0x2u));
  /* 124f0b22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0b25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0b28 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 124f0b2b push edx */
  push32((uint32_t)(EDX));
  /* 124f0b2c call 0x124e1450 */
  push32(0x124f0b31u); f_124e1450();
  /* 124f0b31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0b34 jmp 0x124f0b3f */
  goto L_124f0b3f;
L_124f0b36:;
  /* 124f0b36 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0b39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0b3c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124f0b3f:;
  /* 124f0b3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0b42 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0b45 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0b49 je 0x124f0b60 */
  if (C.zf) goto L_124f0b60;
  /* 124f0b4b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0b4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0b51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0b54 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0b57 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 124f0b5b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 124f0b5e jmp 0x124f0b36 */
  goto L_124f0b36;
L_124f0b60:;
  /* 124f0b60 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 124f0b65 push 0x125093c0 */
  push32((uint32_t)(0x125093c0u));
  /* 124f0b6a push 2 */
  push32((uint32_t)(0x2u));
  /* 124f0b6c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0b6f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 124f0b72 push eax */
  push32((uint32_t)(EAX));
  /* 124f0b73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0b76 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0b77 call 0x124e0e50 */
  push32(0x124f0b7cu); f_124e0e50();
  /* 124f0b7c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0b7f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124f0b82 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0b86 je 0x124f0b91 */
  if (C.zf) goto L_124f0b91;
  /* 124f0b88 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0b8b mov dword ptr [0x1250cbe0], edx */
  w32((uint32_t)(0x1250cbe0), (EDX));
L_124f0b91:;
  /* 124f0b91 jmp 0x124f0b9f */
  goto L_124f0b9f;
L_124f0b93:;
  /* 124f0b93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0b96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0b99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0b9c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_124f0b9f:;
  /* 124f0b9f jmp 0x124f0c14 */
  goto L_124f0c14;
L_124f0ba1:;
  /* 124f0ba1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0ba5 jne 0x124f0c0d */
  if (!C.zf) goto L_124f0c0d;
  /* 124f0ba7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0bab jge 0x124f0bb5 */
  if ((C.sf==C.of)) goto L_124f0bb5;
  /* 124f0bad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0bb0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124f0bb2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124f0bb5:;
  /* 124f0bb5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 124f0bba push 0x125093c0 */
  push32((uint32_t)(0x125093c0u));
  /* 124f0bbf push 2 */
  push32((uint32_t)(0x2u));
  /* 124f0bc1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0bc4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 124f0bcb push edx */
  push32((uint32_t)(EDX));
  /* 124f0bcc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0bcf push eax */
  push32((uint32_t)(EAX));
  /* 124f0bd0 call 0x124e0e50 */
  push32(0x124f0bd5u); f_124e0e50();
  /* 124f0bd5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0bd8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124f0bdb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0bdf jne 0x124f0be9 */
  if (!C.zf) goto L_124f0be9;
  /* 124f0be1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124f0be4 jmp 0x124f0c9b */
  goto L_124f0c9b;
L_124f0be9:;
  /* 124f0be9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0bec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0bef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0bf2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 124f0bf5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0bf8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0bfb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 124f0c03 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0c06 mov dword ptr [0x1250cbe0], eax */
  w32((uint32_t)(0x1250cbe0), (EAX));
  /* 124f0c0b jmp 0x124f0c14 */
  goto L_124f0c14;
L_124f0c0d:;
  /* 124f0c0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f0c0f jmp 0x124f0c9b */
  goto L_124f0c9b;
L_124f0c14:;
  /* 124f0c14 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0c18 je 0x124f0c99 */
  if (C.zf) goto L_124f0c99;
  /* 124f0c1a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 124f0c1f push 0x125093c0 */
  push32((uint32_t)(0x125093c0u));
  /* 124f0c24 push 2 */
  push32((uint32_t)(0x2u));
  /* 124f0c26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0c29 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0c2a call 0x124e37f0 */
  push32(0x124f0c2fu); f_124e37f0();
  /* 124f0c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0c32 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0c35 push eax */
  push32((uint32_t)(EAX));
  /* 124f0c36 call 0x124e09c0 */
  push32(0x124f0c3bu); f_124e09c0();
  /* 124f0c3b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0c3e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 124f0c41 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0c45 je 0x124f0c99 */
  if (C.zf) goto L_124f0c99;
  /* 124f0c47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0c4a push edx */
  push32((uint32_t)(EDX));
  /* 124f0c4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124f0c4e push eax */
  push32((uint32_t)(EAX));
  /* 124f0c4f call 0x124e3970 */
  push32(0x124f0c54u); f_124e3970();
  /* 124f0c54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0c57 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124f0c5a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124f0c5d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124f0c60 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0c62 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124f0c65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f0c68 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 124f0c6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f0c6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0c71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124f0c74 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124f0c77 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124f0c79 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124f0c7b not edx */
  EDX = (~(EDX));
  /* 124f0c7d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 124f0c80 push edx */
  push32((uint32_t)(EDX));
  /* 124f0c81 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124f0c84 push eax */
  push32((uint32_t)(EAX));
  /* 124f0c85 call dword ptr [0x1250f2dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2dc))), 0x124f0c8bu);
  /* 124f0c8b push 2 */
  push32((uint32_t)(0x2u));
  /* 124f0c8d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124f0c90 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0c91 call 0x124e1450 */
  push32(0x124f0c96u); f_124e1450();
  /* 124f0c96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124f0c99:;
  /* 124f0c99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124f0c9b:;
  /* 124f0c9b pop esi */
  ESI = (pop32());
  /* 124f0c9c mov esp, ebp */
  ESP = (EBP);
  /* 124f0c9e pop ebp */
  EBP = (pop32());
  /* 124f0c9f ret  */
  ESPCHK(0x124f09c0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x124f0ca0 (124 bytes, 47 insns) */
void f_124f0ca0(void) {
  FTRACE(0x124f0ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124f0ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 124f0ca1 mov ebp, esp */
  EBP = (ESP);
  /* 124f0ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0ca4 mov eax, dword ptr [0x1250cbe0] */
  EAX = (r32((uint32_t)(0x1250cbe0)));
  /* 124f0ca9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124f0cac jmp 0x124f0cb7 */
  goto L_124f0cb7;
L_124f0cae:;
  /* 124f0cae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f0cb1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0cb4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124f0cb7:;
  /* 124f0cb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f0cba cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0cbd je 0x124f0d0a */
  if (C.zf) goto L_124f0d0a;
  /* 124f0cbf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124f0cc2 push eax */
  push32((uint32_t)(EAX));
  /* 124f0cc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f0cc6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124f0cc8 push edx */
  push32((uint32_t)(EDX));
  /* 124f0cc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0ccc push eax */
  push32((uint32_t)(EAX));
  /* 124f0ccd call 0x124f0470 */
  push32(0x124f0cd2u); f_124f0470();
  /* 124f0cd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0cd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124f0cd7 jne 0x124f0d08 */
  if (!C.zf) goto L_124f0d08;
  /* 124f0cd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f0cdc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124f0cde mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124f0ce1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 124f0ce5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0ce8 je 0x124f0cfa */
  if (C.zf) goto L_124f0cfa;
  /* 124f0cea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f0ced mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124f0cef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124f0cf2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 124f0cf6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124f0cf8 jne 0x124f0d08 */
  if (!C.zf) goto L_124f0d08;
L_124f0cfa:;
  /* 124f0cfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f0cfd sub eax, dword ptr [0x1250cbe0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250cbe0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124f0d03 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 124f0d06 jmp 0x124f0d18 */
  goto L_124f0d18;
L_124f0d08:;
  /* 124f0d08 jmp 0x124f0cae */
  goto L_124f0cae;
L_124f0d0a:;
  /* 124f0d0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f0d0d sub eax, dword ptr [0x1250cbe0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250cbe0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124f0d13 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 124f0d16 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_124f0d18:;
  /* 124f0d18 mov esp, ebp */
  ESP = (EBP);
  /* 124f0d1a pop ebp */
  EBP = (pop32());
  /* 124f0d1b ret  */
  ESPCHK(0x124f0ca0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x124f0d20 (238 bytes, 80 insns) */
void f_124f0d20(void) {
  FTRACE(0x124f0d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124f0d20 push ebp */
  push32((uint32_t)(EBP));
  /* 124f0d21 mov ebp, esp */
  EBP = (ESP);
  /* 124f0d23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124f0d26 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124f0d2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0d30 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124f0d33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0d37 jne 0x124f0d40 */
  if (!C.zf) goto L_124f0d40;
  /* 124f0d39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f0d3b jmp 0x124f0e0a */
  goto L_124f0e0a;
L_124f0d40:;
  /* 124f0d40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0d43 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124f0d45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0d48 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0d4b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124f0d4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124f0d50 je 0x124f0d5d */
  if (C.zf) goto L_124f0d5d;
  /* 124f0d52 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124f0d55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0d58 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 124f0d5b jmp 0x124f0d40 */
  goto L_124f0d40;
L_124f0d5d:;
  /* 124f0d5d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 124f0d62 push 0x125093c0 */
  push32((uint32_t)(0x125093c0u));
  /* 124f0d67 push 2 */
  push32((uint32_t)(0x2u));
  /* 124f0d69 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124f0d6c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 124f0d73 push eax */
  push32((uint32_t)(EAX));
  /* 124f0d74 call 0x124e09c0 */
  push32(0x124f0d79u); f_124e09c0();
  /* 124f0d79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0d7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124f0d7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0d82 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124f0d85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0d89 jne 0x124f0d95 */
  if (!C.zf) goto L_124f0d95;
  /* 124f0d8b push 9 */
  push32((uint32_t)(0x9u));
  /* 124f0d8d call 0x124df930 */
  push32(0x124f0d92u); f_124df930();
  /* 124f0d92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124f0d95:;
  /* 124f0d95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0d98 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_124f0d9b:;
  /* 124f0d9b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0d9e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0da1 je 0x124f0dfe */
  if (C.zf) goto L_124f0dfe;
  /* 124f0da3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 124f0da8 push 0x125093c0 */
  push32((uint32_t)(0x125093c0u));
  /* 124f0dad push 2 */
  push32((uint32_t)(0x2u));
  /* 124f0daf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0db2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124f0db4 push edx */
  push32((uint32_t)(EDX));
  /* 124f0db5 call 0x124e37f0 */
  push32(0x124f0dbau); f_124e37f0();
  /* 124f0dba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0dbd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0dc0 push eax */
  push32((uint32_t)(EAX));
  /* 124f0dc1 call 0x124e09c0 */
  push32(0x124f0dc6u); f_124e09c0();
  /* 124f0dc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0dc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0dcc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124f0dce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0dd1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0dd4 je 0x124f0dea */
  if (C.zf) goto L_124f0dea;
  /* 124f0dd6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0dd9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124f0ddb push ecx */
  push32((uint32_t)(ECX));
  /* 124f0ddc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0ddf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124f0de1 push eax */
  push32((uint32_t)(EAX));
  /* 124f0de2 call 0x124e3970 */
  push32(0x124f0de7u); f_124e3970();
  /* 124f0de7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124f0dea:;
  /* 124f0dea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124f0ded add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0df0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124f0df3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0df6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0df9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124f0dfc jmp 0x124f0d9b */
  goto L_124f0d9b;
L_124f0dfe:;
  /* 124f0dfe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124f0e01 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124f0e07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124f0e0a:;
  /* 124f0e0a mov esp, ebp */
  ESP = (EBP);
  /* 124f0e0c pop ebp */
  EBP = (pop32());
  /* 124f0e0d ret  */
  ESPCHK(0x124f0d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10020e10 @ 0x124f0e10 (237 bytes, 81 insns) */
void f_124f0e10(void) {
  FTRACE(0x124f0e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124f0e10 push ebp */
  push32((uint32_t)(EBP));
  /* 124f0e11 mov ebp, esp */
  EBP = (ESP);
  /* 124f0e13 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0e14 cmp dword ptr [0x1250e32c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250e32c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0e1b jne 0x124f0e32 */
  if (!C.zf) goto L_124f0e32;
  /* 124f0e1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124f0e20 push eax */
  push32((uint32_t)(EAX));
  /* 124f0e21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0e24 push ecx */
  push32((uint32_t)(ECX));
  /* 124f0e25 call 0x124f0f10 */
  push32(0x124f0e2au); f_124f0f10();
  /* 124f0e2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0e2d jmp 0x124f0ef9 */
  goto L_124f0ef9;
L_124f0e32:;
  /* 124f0e32 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 124f0e34 call 0x124e43c0 */
  push32(0x124f0e39u); f_124e43c0();
  /* 124f0e39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0e3c jmp 0x124f0e47 */
  goto L_124f0e47;
L_124f0e3e:;
  /* 124f0e3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0e41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0e44 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_124f0e47:;
  /* 124f0e47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0e4a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 124f0e4e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 124f0e52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f0e55 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124f0e5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124f0e5d je 0x124f0edb */
  if (C.zf) goto L_124f0edb;
  /* 124f0e5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f0e62 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124f0e67 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124f0e69 mov cl, byte ptr [eax + 0x1250e441] */
  CL = (r8((uint32_t)(EAX + 0x1250e441)));
  /* 124f0e6f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 124f0e72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124f0e74 je 0x124f0ec6 */
  if (C.zf) goto L_124f0ec6;
  /* 124f0e76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0e79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0e7c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 124f0e7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0e82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124f0e84 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124f0e86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124f0e88 jne 0x124f0e98 */
  if (!C.zf) goto L_124f0e98;
  /* 124f0e8a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 124f0e8c call 0x124e4460 */
  push32(0x124f0e91u); f_124e4460();
  /* 124f0e91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0e94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f0e96 jmp 0x124f0ef9 */
  goto L_124f0ef9;
L_124f0e98:;
  /* 124f0e98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f0e9b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124f0ea1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 124f0ea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0ea7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124f0ea9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124f0eab or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124f0ead cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0eb0 jne 0x124f0ec4 */
  if (!C.zf) goto L_124f0ec4;
  /* 124f0eb2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 124f0eb4 call 0x124e4460 */
  push32(0x124f0eb9u); f_124e4460();
  /* 124f0eb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0ebc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0ebf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124f0ec2 jmp 0x124f0ef9 */
  goto L_124f0ef9;
L_124f0ec4:;
  /* 124f0ec4 jmp 0x124f0ed6 */
  goto L_124f0ed6;
L_124f0ec6:;
  /* 124f0ec6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f0ec9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124f0ecf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0ed2 jne 0x124f0ed6 */
  if (!C.zf) goto L_124f0ed6;
  /* 124f0ed4 jmp 0x124f0edb */
  goto L_124f0edb;
L_124f0ed6:;
  /* 124f0ed6 jmp 0x124f0e3e */
  goto L_124f0e3e;
L_124f0edb:;
  /* 124f0edb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 124f0edd call 0x124e4460 */
  push32(0x124f0ee2u); f_124e4460();
  /* 124f0ee2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0ee5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124f0ee8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124f0eed cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124f0ef0 jne 0x124f0ef7 */
  if (!C.zf) goto L_124f0ef7;
  /* 124f0ef2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124f0ef5 jmp 0x124f0ef9 */
  goto L_124f0ef9;
L_124f0ef7:;
  /* 124f0ef7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124f0ef9:;
  /* 124f0ef9 mov esp, ebp */
  ESP = (EBP);
  /* 124f0efb pop ebp */
  EBP = (pop32());
  /* 124f0efc ret  */
  ESPCHK(0x124f0e10u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x124f0f10 (193 bytes, 87 insns) */
void f_124f0f10(void) {
  FTRACE(0x124f0f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124f0f10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f0f12 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 124f0f16 push ebx */
  push32((uint32_t)(EBX));
  /* 124f0f17 mov ebx, eax */
  EBX = (EAX);
  /* 124f0f19 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 124f0f1c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 124f0f20 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 124f0f26 je 0x124f0f3b */
  if (C.zf) goto L_124f0f3b;
L_124f0f28:;
  /* 124f0f28 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 124f0f2a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 124f0f2b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124f0f2d je 0x124f0f00 */
  if (C.zf) { jmp_ind(0x124f0f00u); return; }
  /* 124f0f2f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 124f0f31 je 0x124f0f84 */
  if (C.zf) goto L_124f0f84;
  /* 124f0f33 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 124f0f39 jne 0x124f0f28 */
  if (!C.zf) goto L_124f0f28;
L_124f0f3b:;
  /* 124f0f3b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 124f0f3d push edi */
  push32((uint32_t)(EDI));
  /* 124f0f3e mov eax, ebx */
  EAX = (EBX);
  /* 124f0f40 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 124f0f43 push esi */
  push32((uint32_t)(ESI));
  /* 124f0f44 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_124f0f46:;
  /* 124f0f46 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 124f0f48 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 124f0f4d mov eax, ecx */
  EAX = (ECX);
  /* 124f0f4f mov esi, edi */
  ESI = (EDI);
  /* 124f0f51 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 124f0f53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0f55 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0f57 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 124f0f5a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124f0f5d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 124f0f5f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 124f0f61 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124f0f64 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 124f0f6a jne 0x124f0f88 */
  if (!C.zf) goto L_124f0f88;
  /* 124f0f6c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 124f0f71 je 0x124f0f46 */
  if (C.zf) goto L_124f0f46;
  /* 124f0f73 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 124f0f78 jne 0x124f0f82 */
  if (!C.zf) goto L_124f0f82;
  /* 124f0f7a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 124f0f80 jne 0x124f0f46 */
  if (!C.zf) goto L_124f0f46;
L_124f0f82:;
  /* 124f0f82 pop esi */
  ESI = (pop32());
  /* 124f0f83 pop edi */
  EDI = (pop32());
L_124f0f84:;
  /* 124f0f84 pop ebx */
  EBX = (pop32());
  /* 124f0f85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124f0f87 ret  */
  ESPCHK(0x124f0f10u, _esp0);
  ESP += 4; return;
L_124f0f88:;
  /* 124f0f88 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 124f0f8b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124f0f8d je 0x124f0fc5 */
  if (C.zf) goto L_124f0fc5;
  /* 124f0f8f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 124f0f91 je 0x124f0f82 */
  if (C.zf) goto L_124f0f82;
  /* 124f0f93 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124f0f95 je 0x124f0fbe */
  if (C.zf) goto L_124f0fbe;
  /* 124f0f97 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 124f0f99 je 0x124f0f82 */
  if (C.zf) goto L_124f0f82;
  /* 124f0f9b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 124f0f9e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124f0fa0 je 0x124f0fb7 */
  if (C.zf) goto L_124f0fb7;
  /* 124f0fa2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 124f0fa4 je 0x124f0f82 */
  if (C.zf) goto L_124f0f82;
  /* 124f0fa6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124f0fa8 je 0x124f0fb0 */
  if (C.zf) goto L_124f0fb0;
  /* 124f0faa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 124f0fac je 0x124f0f82 */
  if (C.zf) goto L_124f0f82;
  /* 124f0fae jmp 0x124f0f46 */
  goto L_124f0f46;
L_124f0fb0:;
  /* 124f0fb0 pop esi */
  ESI = (pop32());
  /* 124f0fb1 pop edi */
  EDI = (pop32());
  /* 124f0fb2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 124f0fb5 pop ebx */
  EBX = (pop32());
  /* 124f0fb6 ret  */
  ESPCHK(0x124f0f10u, _esp0);
  ESP += 4; return;
L_124f0fb7:;
  /* 124f0fb7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 124f0fba pop esi */
  ESI = (pop32());
  /* 124f0fbb pop edi */
  EDI = (pop32());
  /* 124f0fbc pop ebx */
  EBX = (pop32());
  /* 124f0fbd ret  */
  ESPCHK(0x124f0f10u, _esp0);
  ESP += 4; return;
L_124f0fbe:;
  /* 124f0fbe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 124f0fc1 pop esi */
  ESI = (pop32());
  /* 124f0fc2 pop edi */
  EDI = (pop32());
  /* 124f0fc3 pop ebx */
  EBX = (pop32());
  /* 124f0fc4 ret  */
  ESPCHK(0x124f0f10u, _esp0);
  ESP += 4; return;
L_124f0fc5:;
  /* 124f0fc5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 124f0fc8 pop esi */
  ESI = (pop32());
  /* 124f0fc9 pop edi */
  EDI = (pop32());
  /* 124f0fca pop ebx */
  EBX = (pop32());
  /* 124f0fcb ret  */
  ESPCHK(0x124f0f10u, _esp0);
  ESP += 4; return;
  /* 124f0fcc jmp dword ptr [0x1250f398] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1250f398)))); return;
}

/* RtlUnwind @ 0x124f111c (6 bytes, 1 insns) */
void f_124f111c(void) {
  FTRACE(0x124f111cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124f111c jmp dword ptr [0x1250f314] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1250f314)))); return;
}

