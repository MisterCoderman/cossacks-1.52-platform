#include "recomp.h"

/* FUN_100057d0 @ 0x11a857d0 (98 bytes, 39 insns) */
void f_11a857d0(void) {
  FTRACE(0x11a857d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a857d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a857d1 mov ebp, esp */
  EBP = (ESP);
  /* 11a857d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a857d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a857d7 push esi */
  push32((uint32_t)(ESI));
  /* 11a857d8 push edi */
  push32((uint32_t)(EDI));
  /* 11a857d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a857da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11a857dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11a857e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11a857e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a857e9 pop ecx */
  ECX = (pop32());
  /* 11a857ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a857ed mov esi, esp */
  ESI = (ESP);
  /* 11a857ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11a857f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a857f4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a857f7 push eax */
  push32((uint32_t)(EAX));
  /* 11a857f8 call dword ptr [0x11abc4d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc4d0))), 0x11a857feu);
  /* 11a857fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85801 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85803 call 0x11a860d0 */
  push32(0x11a85808u); f_11a860d0();
  /* 11a85808 mov esi, esp */
  ESI = (ESP);
  /* 11a8580a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8580d mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11a85810 push edx */
  push32((uint32_t)(EDX));
  /* 11a85811 call dword ptr [0x11abc458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc458))), 0x11a85817u);
  /* 11a85817 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8581a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8581c call 0x11a860d0 */
  push32(0x11a85821u); f_11a860d0();
  /* 11a85821 pop edi */
  EDI = (pop32());
  /* 11a85822 pop esi */
  ESI = (pop32());
  /* 11a85823 pop ebx */
  EBX = (pop32());
  /* 11a85824 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85827 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85829 call 0x11a860d0 */
  push32(0x11a8582eu); f_11a860d0();
  /* 11a8582e mov esp, ebp */
  ESP = (EBP);
  /* 11a85830 pop ebp */
  EBP = (pop32());
  /* 11a85831 ret  */
  ESPCHK(0x11a857d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005850 @ 0x11a85850 (402 bytes, 129 insns) [1 switch table(s)] */
void f_11a85850(void) {
  FTRACE(0x11a85850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a85850 push ebp */
  push32((uint32_t)(EBP));
  /* 11a85851 mov ebp, esp */
  EBP = (ESP);
  /* 11a85853 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a85856 push ebx */
  push32((uint32_t)(EBX));
  /* 11a85857 push esi */
  push32((uint32_t)(ESI));
  /* 11a85858 push edi */
  push32((uint32_t)(EDI));
  /* 11a85859 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8585a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11a8585d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11a85862 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11a85867 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a85869 pop ecx */
  ECX = (pop32());
  /* 11a8586a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8586d mov esi, esp */
  ESI = (ESP);
  /* 11a8586f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a85871 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85874 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85877 push eax */
  push32((uint32_t)(EAX));
  /* 11a85878 call dword ptr [0x11abc4d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc4d0))), 0x11a8587eu);
  /* 11a8587e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85881 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85883 call 0x11a860d0 */
  push32(0x11a85888u); f_11a860d0();
  /* 11a85888 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8588b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11a8588e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a85891 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a85894 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a85897 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8589a cmp dword ptr [ebp - 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8589e ja 0x11a859d1 */
  if ((!C.cf&&!C.zf)) goto L_11a859d1;
  /* 11a858a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a858a7 jmp dword ptr [ecx*4 + 0x11a859e2] */
  switch (ECX) {
    case 0: goto L_11a858ae;
    case 1: goto L_11a858e7;
    case 2: goto L_11a8592b;
    case 3: goto L_11a85961;
    case 4: goto L_11a859a5;
    default: x86_unimpl("switch@0x11a858a7 out of table"); return;
  }
L_11a858ae:;
  /* 11a858ae mov esi, esp */
  ESI = (ESP);
  /* 11a858b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a858b3 mov al, byte ptr [edx + 0x18] */
  AL = (r8((uint32_t)(EDX + 0x18)));
  /* 11a858b6 push eax */
  push32((uint32_t)(EAX));
  /* 11a858b7 call dword ptr [0x11abc460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc460))), 0x11a858bdu);
  /* 11a858bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a858c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a858c2 call 0x11a860d0 */
  push32(0x11a858c7u); f_11a860d0();
  /* 11a858c7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a858cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a858ce je 0x11a858e2 */
  if (C.zf) goto L_11a858e2;
  /* 11a858d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a858d3 call 0x11a81136 */
  push32(0x11a858d8u); f_11a81136();
  /* 11a858d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a858db mov dword ptr [ecx + 0x14], 2 */
  w32((uint32_t)(ECX + 0x14), (0x2u));
L_11a858e2:;
  /* 11a858e2 jmp 0x11a859d1 */
  goto L_11a859d1;
L_11a858e7:;
  /* 11a858e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a858ea call 0x11a810d7 */
  push32(0x11a858efu); f_11a810d7();
  /* 11a858ef and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a858f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a858f6 je 0x11a85926 */
  if (C.zf) goto L_11a85926;
  /* 11a858f8 mov esi, esp */
  ESI = (ESP);
  /* 11a858fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11a858fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a858fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85901 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a85904 push eax */
  push32((uint32_t)(EAX));
  /* 11a85905 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85908 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11a8590b push edx */
  push32((uint32_t)(EDX));
  /* 11a8590c call dword ptr [0x11abc4e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc4e0))), 0x11a85912u);
  /* 11a85912 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85915 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85917 call 0x11a860d0 */
  push32(0x11a8591cu); f_11a860d0();
  /* 11a8591c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8591f mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
L_11a85926:;
  /* 11a85926 jmp 0x11a859d1 */
  goto L_11a859d1;
L_11a8592b:;
  /* 11a8592b mov esi, esp */
  ESI = (ESP);
  /* 11a8592d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85930 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11a85933 push edx */
  push32((uint32_t)(EDX));
  /* 11a85934 call dword ptr [0x11abc460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc460))), 0x11a8593au);
  /* 11a8593a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8593d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8593f call 0x11a860d0 */
  push32(0x11a85944u); f_11a860d0();
  /* 11a85944 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a85949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8594b je 0x11a8595f */
  if (C.zf) goto L_11a8595f;
  /* 11a8594d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85950 call 0x11a81055 */
  push32(0x11a85955u); f_11a81055();
  /* 11a85955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85958 mov dword ptr [eax + 0x14], 4 */
  w32((uint32_t)(EAX + 0x14), (0x4u));
L_11a8595f:;
  /* 11a8595f jmp 0x11a859d1 */
  goto L_11a859d1;
L_11a85961:;
  /* 11a85961 mov esi, esp */
  ESI = (ESP);
  /* 11a85963 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85966 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11a85969 push edx */
  push32((uint32_t)(EDX));
  /* 11a8596a call dword ptr [0x11abc46c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc46c))), 0x11a85970u);
  /* 11a85970 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85973 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85975 call 0x11a860d0 */
  push32(0x11a8597au); f_11a860d0();
  /* 11a8597a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8597c jne 0x11a859a3 */
  if (!C.zf) goto L_11a859a3;
  /* 11a8597e mov esi, esp */
  ESI = (ESP);
  /* 11a85980 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a85982 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85985 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11a85988 push ecx */
  push32((uint32_t)(ECX));
  /* 11a85989 call dword ptr [0x11abc4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc4a0))), 0x11a8598fu);
  /* 11a8598f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85992 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85994 call 0x11a860d0 */
  push32(0x11a85999u); f_11a860d0();
  /* 11a85999 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8599c mov dword ptr [edx + 0x14], 5 */
  w32((uint32_t)(EDX + 0x14), (0x5u));
L_11a859a3:;
  /* 11a859a3 jmp 0x11a859d1 */
  goto L_11a859d1;
L_11a859a5:;
  /* 11a859a5 mov esi, esp */
  ESI = (ESP);
  /* 11a859a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a859aa mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11a859ad push ecx */
  push32((uint32_t)(ECX));
  /* 11a859ae call dword ptr [0x11abc4ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc4ac))), 0x11a859b4u);
  /* 11a859b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a859b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a859b9 call 0x11a860d0 */
  push32(0x11a859beu); f_11a860d0();
  /* 11a859be and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a859c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a859c5 je 0x11a859d1 */
  if (C.zf) goto L_11a859d1;
  /* 11a859c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a859ca mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
L_11a859d1:;
  /* 11a859d1 pop edi */
  EDI = (pop32());
  /* 11a859d2 pop esi */
  ESI = (pop32());
  /* 11a859d3 pop ebx */
  EBX = (pop32());
  /* 11a859d4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a859d7 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a859d9 call 0x11a860d0 */
  push32(0x11a859deu); f_11a860d0();
  /* 11a859de mov esp, ebp */
  ESP = (EBP);
  /* 11a859e0 pop ebp */
  EBP = (pop32());
  /* 11a859e1 ret  */
  ESPCHK(0x11a85850u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a60 @ 0x11a85a60 (39 bytes, 18 insns) */
void f_11a85a60(void) {
  FTRACE(0x11a85a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a85a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11a85a61 mov ebp, esp */
  EBP = (ESP);
  /* 11a85a63 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a85a66 push ebx */
  push32((uint32_t)(EBX));
  /* 11a85a67 push esi */
  push32((uint32_t)(ESI));
  /* 11a85a68 push edi */
  push32((uint32_t)(EDI));
  /* 11a85a69 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11a85a6c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11a85a71 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11a85a76 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a85a78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a85a7b mov dword ptr [0x11aba07c], eax */
  w32((uint32_t)(0x11aba07c), (EAX));
  /* 11a85a80 pop edi */
  EDI = (pop32());
  /* 11a85a81 pop esi */
  ESI = (pop32());
  /* 11a85a82 pop ebx */
  EBX = (pop32());
  /* 11a85a83 mov esp, ebp */
  ESP = (EBP);
  /* 11a85a85 pop ebp */
  EBP = (pop32());
  /* 11a85a86 ret  */
  ESPCHK(0x11a85a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a90 @ 0x11a85a90 (93 bytes, 34 insns) */
void f_11a85a90(void) {
  FTRACE(0x11a85a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a85a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11a85a91 mov ebp, esp */
  EBP = (ESP);
  /* 11a85a93 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a85a96 push ebx */
  push32((uint32_t)(EBX));
  /* 11a85a97 push esi */
  push32((uint32_t)(ESI));
  /* 11a85a98 push edi */
  push32((uint32_t)(EDI));
  /* 11a85a99 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11a85a9c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11a85aa1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11a85aa6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a85aa8 cmp dword ptr [0x11aba07c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba07c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85aaf je 0x11a85adc */
  if (C.zf) goto L_11a85adc;
  /* 11a85ab1 mov ecx, dword ptr [0x11aba07c] */
  ECX = (r32((uint32_t)(0x11aba07c)));
  /* 11a85ab7 call 0x11a8109b */
  push32(0x11a85abcu); f_11a8109b();
  /* 11a85abc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a85ac1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a85ac3 je 0x11a85adc */
  if (C.zf) goto L_11a85adc;
  /* 11a85ac5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a85ac8 push eax */
  push32((uint32_t)(EAX));
  /* 11a85ac9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a85acc push ecx */
  push32((uint32_t)(ECX));
  /* 11a85acd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a85ad0 push edx */
  push32((uint32_t)(EDX));
  /* 11a85ad1 mov ecx, dword ptr [0x11aba07c] */
  ECX = (r32((uint32_t)(0x11aba07c)));
  /* 11a85ad7 call 0x11a810b4 */
  push32(0x11a85adcu); f_11a810b4();
L_11a85adc:;
  /* 11a85adc pop edi */
  EDI = (pop32());
  /* 11a85add pop esi */
  ESI = (pop32());
  /* 11a85ade pop ebx */
  EBX = (pop32());
  /* 11a85adf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85ae2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85ae4 call 0x11a860d0 */
  push32(0x11a85ae9u); f_11a860d0();
  /* 11a85ae9 mov esp, ebp */
  ESP = (EBP);
  /* 11a85aeb pop ebp */
  EBP = (pop32());
  /* 11a85aec ret  */
  ESPCHK(0x11a85a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b10 @ 0x11a85b10 (437 bytes, 146 insns) */
void f_11a85b10(void) {
  FTRACE(0x11a85b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a85b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11a85b11 mov ebp, esp */
  EBP = (ESP);
  /* 11a85b13 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a85b16 push ebx */
  push32((uint32_t)(EBX));
  /* 11a85b17 push esi */
  push32((uint32_t)(ESI));
  /* 11a85b18 push edi */
  push32((uint32_t)(EDI));
  /* 11a85b19 push ecx */
  push32((uint32_t)(ECX));
  /* 11a85b1a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11a85b1d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11a85b22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11a85b27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a85b29 pop ecx */
  ECX = (pop32());
  /* 11a85b2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a85b2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85b30 call 0x11a81037 */
  push32(0x11a85b35u); f_11a81037();
  /* 11a85b35 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a85b3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a85b3c je 0x11a85cb4 */
  if (C.zf) goto L_11a85cb4;
  /* 11a85b42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85b45 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11a85b48 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11a85b4b cmp byte ptr [ebp - 8], 1 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a85b4f je 0x11a85c09 */
  if (C.zf) goto L_11a85c09;
  /* 11a85b55 cmp byte ptr [ebp - 8], 2 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a85b59 je 0x11a85b60 */
  if (C.zf) goto L_11a85b60;
  /* 11a85b5b jmp 0x11a85c5f */
  goto L_11a85c5f;
L_11a85b60:;
  /* 11a85b60 cmp dword ptr [0x11aba084], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba084))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85b67 je 0x11a85baf */
  if (C.zf) goto L_11a85baf;
  /* 11a85b69 mov esi, esp */
  ESI = (ESP);
  /* 11a85b6b push 3 */
  push32((uint32_t)(0x3u));
  /* 11a85b6d mov edx, dword ptr [0x11aba084] */
  EDX = (r32((uint32_t)(0x11aba084)));
  /* 11a85b73 push edx */
  push32((uint32_t)(EDX));
  /* 11a85b74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85b77 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85b7a push eax */
  push32((uint32_t)(EAX));
  /* 11a85b7b call dword ptr [0x11abc470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc470))), 0x11a85b81u);
  /* 11a85b81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85b84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85b86 call 0x11a860d0 */
  push32(0x11a85b8bu); f_11a860d0();
  /* 11a85b8b mov esi, esp */
  ESI = (ESP);
  /* 11a85b8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a85b8f mov ecx, dword ptr [0x11aba084] */
  ECX = (r32((uint32_t)(0x11aba084)));
  /* 11a85b95 push ecx */
  push32((uint32_t)(ECX));
  /* 11a85b96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85b99 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85b9c push edx */
  push32((uint32_t)(EDX));
  /* 11a85b9d call dword ptr [0x11abc470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc470))), 0x11a85ba3u);
  /* 11a85ba3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85ba6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85ba8 call 0x11a860d0 */
  push32(0x11a85badu); f_11a860d0();
  /* 11a85bad jmp 0x11a85c04 */
  goto L_11a85c04;
L_11a85baf:;
  /* 11a85baf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85bb2 call 0x11a81078 */
  push32(0x11a85bb7u); f_11a81078();
  /* 11a85bb7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a85bbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a85bbe jne 0x11a85c04 */
  if (!C.zf) goto L_11a85c04;
  /* 11a85bc0 mov esi, esp */
  ESI = (ESP);
  /* 11a85bc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a85bc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85bc7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85bca push eax */
  push32((uint32_t)(EAX));
  /* 11a85bcb call dword ptr [0x11abc4d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc4d0))), 0x11a85bd1u);
  /* 11a85bd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85bd4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85bd6 call 0x11a860d0 */
  push32(0x11a85bdbu); f_11a860d0();
  /* 11a85bdb mov esi, esp */
  ESI = (ESP);
  /* 11a85bdd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a85bdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85be2 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11a85be5 push edx */
  push32((uint32_t)(EDX));
  /* 11a85be6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85be9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85bec push eax */
  push32((uint32_t)(EAX));
  /* 11a85bed mov cl, byte ptr [0x11aba080] */
  CL = (r8((uint32_t)(0x11aba080)));
  /* 11a85bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a85bf4 call dword ptr [0x11abc45c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc45c))), 0x11a85bfau);
  /* 11a85bfa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85bfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85bff call 0x11a860d0 */
  push32(0x11a85c04u); f_11a860d0();
L_11a85c04:;
  /* 11a85c04 jmp 0x11a85cb4 */
  goto L_11a85cb4;
L_11a85c09:;
  /* 11a85c09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85c0c call 0x11a81078 */
  push32(0x11a85c11u); f_11a81078();
  /* 11a85c11 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a85c16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a85c18 jne 0x11a85c5d */
  if (!C.zf) goto L_11a85c5d;
  /* 11a85c1a mov esi, esp */
  ESI = (ESP);
  /* 11a85c1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a85c1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85c21 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85c24 push edx */
  push32((uint32_t)(EDX));
  /* 11a85c25 call dword ptr [0x11abc4d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc4d0))), 0x11a85c2bu);
  /* 11a85c2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85c2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85c30 call 0x11a860d0 */
  push32(0x11a85c35u); f_11a860d0();
  /* 11a85c35 mov esi, esp */
  ESI = (ESP);
  /* 11a85c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a85c39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85c3c mov cl, byte ptr [eax + 8] */
  CL = (r8((uint32_t)(EAX + 0x8)));
  /* 11a85c3f push ecx */
  push32((uint32_t)(ECX));
  /* 11a85c40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85c43 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85c46 push edx */
  push32((uint32_t)(EDX));
  /* 11a85c47 mov al, byte ptr [0x11aba080] */
  AL = (r8((uint32_t)(0x11aba080)));
  /* 11a85c4c push eax */
  push32((uint32_t)(EAX));
  /* 11a85c4d call dword ptr [0x11abc45c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc45c))), 0x11a85c53u);
  /* 11a85c53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85c56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85c58 call 0x11a860d0 */
  push32(0x11a85c5du); f_11a860d0();
L_11a85c5d:;
  /* 11a85c5d jmp 0x11a85cb4 */
  goto L_11a85cb4;
L_11a85c5f:;
  /* 11a85c5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85c62 call 0x11a81078 */
  push32(0x11a85c67u); f_11a81078();
  /* 11a85c67 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a85c6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a85c6e jne 0x11a85cb4 */
  if (!C.zf) goto L_11a85cb4;
  /* 11a85c70 mov esi, esp */
  ESI = (ESP);
  /* 11a85c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a85c74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85c77 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85c7a push ecx */
  push32((uint32_t)(ECX));
  /* 11a85c7b call dword ptr [0x11abc4d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc4d0))), 0x11a85c81u);
  /* 11a85c81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85c84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85c86 call 0x11a860d0 */
  push32(0x11a85c8bu); f_11a860d0();
  /* 11a85c8b mov esi, esp */
  ESI = (ESP);
  /* 11a85c8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a85c8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85c92 mov al, byte ptr [edx + 8] */
  AL = (r8((uint32_t)(EDX + 0x8)));
  /* 11a85c95 push eax */
  push32((uint32_t)(EAX));
  /* 11a85c96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85c99 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85c9c push ecx */
  push32((uint32_t)(ECX));
  /* 11a85c9d mov dl, byte ptr [0x11aba080] */
  DL = (r8((uint32_t)(0x11aba080)));
  /* 11a85ca3 push edx */
  push32((uint32_t)(EDX));
  /* 11a85ca4 call dword ptr [0x11abc4e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc4e0))), 0x11a85caau);
  /* 11a85caa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85cad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85caf call 0x11a860d0 */
  push32(0x11a85cb4u); f_11a860d0();
L_11a85cb4:;
  /* 11a85cb4 pop edi */
  EDI = (pop32());
  /* 11a85cb5 pop esi */
  ESI = (pop32());
  /* 11a85cb6 pop ebx */
  EBX = (pop32());
  /* 11a85cb7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85cba cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85cbc call 0x11a860d0 */
  push32(0x11a85cc1u); f_11a860d0();
  /* 11a85cc1 mov esp, ebp */
  ESP = (EBP);
  /* 11a85cc3 pop ebp */
  EBP = (pop32());
  /* 11a85cc4 ret  */
  ESPCHK(0x11a85b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d40 @ 0x11a85d40 (235 bytes, 78 insns) */
void f_11a85d40(void) {
  FTRACE(0x11a85d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a85d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11a85d41 mov ebp, esp */
  EBP = (ESP);
  /* 11a85d43 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a85d49 push ebx */
  push32((uint32_t)(EBX));
  /* 11a85d4a push esi */
  push32((uint32_t)(ESI));
  /* 11a85d4b push edi */
  push32((uint32_t)(EDI));
  /* 11a85d4c push ecx */
  push32((uint32_t)(ECX));
  /* 11a85d4d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11a85d53 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11a85d58 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11a85d5d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a85d5f pop ecx */
  ECX = (pop32());
  /* 11a85d60 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a85d63 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 11a85d6a mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11a85d71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85d74 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85d77 mov esi, esp */
  ESI = (ESP);
  /* 11a85d79 push eax */
  push32((uint32_t)(EAX));
  /* 11a85d7a call dword ptr [0x11abc4e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc4e4))), 0x11a85d80u);
  /* 11a85d80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85d83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85d85 call 0x11a860d0 */
  push32(0x11a85d8au); f_11a860d0();
  /* 11a85d8a mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11a85d8d cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85d91 jle 0x11a85e04 */
  if ((C.zf||C.sf!=C.of)) goto L_11a85e04;
  /* 11a85d93 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11a85d9a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11a85da1 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 11a85da8 jmp 0x11a85db3 */
  goto L_11a85db3;
L_11a85daa:;
  /* 11a85daa mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11a85dad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85db0 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_11a85db3:;
  /* 11a85db3 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 11a85db6 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85db9 jge 0x11a85df0 */
  if ((C.sf==C.of)) goto L_11a85df0;
  /* 11a85dbb mov esi, esp */
  ESI = (ESP);
  /* 11a85dbd lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11a85dc0 push eax */
  push32((uint32_t)(EAX));
  /* 11a85dc1 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11a85dc4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a85dc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85dc8 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85dcb push edx */
  push32((uint32_t)(EDX));
  /* 11a85dcc call dword ptr [0x11abc4dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc4dc))), 0x11a85dd2u);
  /* 11a85dd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85dd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85dd7 call 0x11a860d0 */
  push32(0x11a85ddcu); f_11a860d0();
  /* 11a85ddc mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11a85ddf add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85de2 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11a85de5 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11a85de8 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85deb mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11a85dee jmp 0x11a85daa */
  goto L_11a85daa;
L_11a85df0:;
  /* 11a85df0 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11a85df3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a85df4 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a85df7 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11a85dfa mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11a85dfd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a85dfe idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a85e01 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11a85e04:;
  /* 11a85e04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a85e07 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a85e0a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11a85e0c mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11a85e0f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11a85e12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a85e15 pop edi */
  EDI = (pop32());
  /* 11a85e16 pop esi */
  ESI = (pop32());
  /* 11a85e17 pop ebx */
  EBX = (pop32());
  /* 11a85e18 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85e1e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85e20 call 0x11a860d0 */
  push32(0x11a85e25u); f_11a860d0();
  /* 11a85e25 mov esp, ebp */
  ESP = (EBP);
  /* 11a85e27 pop ebp */
  EBP = (pop32());
  /* 11a85e28 ret 4 */
  ESPCHK(0x11a85d40u, _esp0);
  ESP += 8; return;
}

/* FUN_10005e70 @ 0x11a85e70 (120 bytes, 47 insns) */
void f_11a85e70(void) {
  FTRACE(0x11a85e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a85e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11a85e71 mov ebp, esp */
  EBP = (ESP);
  /* 11a85e73 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a85e76 push ebx */
  push32((uint32_t)(EBX));
  /* 11a85e77 push esi */
  push32((uint32_t)(ESI));
  /* 11a85e78 push edi */
  push32((uint32_t)(EDI));
  /* 11a85e79 push ecx */
  push32((uint32_t)(ECX));
  /* 11a85e7a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11a85e7d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11a85e82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11a85e87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a85e89 pop ecx */
  ECX = (pop32());
  /* 11a85e8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a85e8d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a85e91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85e94 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85e97 mov esi, esp */
  ESI = (ESP);
  /* 11a85e99 push eax */
  push32((uint32_t)(EAX));
  /* 11a85e9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85e9d add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85ea0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a85ea1 call dword ptr [0x11abc484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc484))), 0x11a85ea7u);
  /* 11a85ea7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85eaa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85eac call 0x11a860d0 */
  push32(0x11a85eb1u); f_11a860d0();
  /* 11a85eb1 mov esi, eax */
  ESI = (EAX);
  /* 11a85eb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85eb6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85eb9 mov edi, esp */
  EDI = (ESP);
  /* 11a85ebb push edx */
  push32((uint32_t)(EDX));
  /* 11a85ebc call dword ptr [0x11abc4e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc4e4))), 0x11a85ec2u);
  /* 11a85ec2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85ec5 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85ec7 call 0x11a860d0 */
  push32(0x11a85eccu); f_11a860d0();
  /* 11a85ecc cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85ece jne 0x11a85ed4 */
  if (!C.zf) goto L_11a85ed4;
  /* 11a85ed0 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11a85ed4:;
  /* 11a85ed4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11a85ed7 pop edi */
  EDI = (pop32());
  /* 11a85ed8 pop esi */
  ESI = (pop32());
  /* 11a85ed9 pop ebx */
  EBX = (pop32());
  /* 11a85eda add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85edd cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85edf call 0x11a860d0 */
  push32(0x11a85ee4u); f_11a860d0();
  /* 11a85ee4 mov esp, ebp */
  ESP = (EBP);
  /* 11a85ee6 pop ebp */
  EBP = (pop32());
  /* 11a85ee7 ret  */
  ESPCHK(0x11a85e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f10 @ 0x11a85f10 (86 bytes, 35 insns) */
void f_11a85f10(void) {
  FTRACE(0x11a85f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a85f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11a85f11 mov ebp, esp */
  EBP = (ESP);
  /* 11a85f13 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a85f16 push ebx */
  push32((uint32_t)(EBX));
  /* 11a85f17 push esi */
  push32((uint32_t)(ESI));
  /* 11a85f18 push edi */
  push32((uint32_t)(EDI));
  /* 11a85f19 push ecx */
  push32((uint32_t)(ECX));
  /* 11a85f1a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11a85f1d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11a85f22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11a85f27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a85f29 pop ecx */
  ECX = (pop32());
  /* 11a85f2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a85f2d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a85f31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85f34 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85f37 mov esi, esp */
  ESI = (ESP);
  /* 11a85f39 push eax */
  push32((uint32_t)(EAX));
  /* 11a85f3a call dword ptr [0x11abc4e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc4e4))), 0x11a85f40u);
  /* 11a85f40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85f43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85f45 call 0x11a860d0 */
  push32(0x11a85f4au); f_11a860d0();
  /* 11a85f4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a85f4c jle 0x11a85f52 */
  if ((C.zf||C.sf!=C.of)) goto L_11a85f52;
  /* 11a85f4e mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11a85f52:;
  /* 11a85f52 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11a85f55 pop edi */
  EDI = (pop32());
  /* 11a85f56 pop esi */
  ESI = (pop32());
  /* 11a85f57 pop ebx */
  EBX = (pop32());
  /* 11a85f58 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85f5b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a85f5d call 0x11a860d0 */
  push32(0x11a85f62u); f_11a860d0();
  /* 11a85f62 mov esp, ebp */
  ESP = (EBP);
  /* 11a85f64 pop ebp */
  EBP = (pop32());
  /* 11a85f65 ret  */
  ESPCHK(0x11a85f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f80 @ 0x11a85f80 (42 bytes, 21 insns) */
void f_11a85f80(void) {
  FTRACE(0x11a85f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a85f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11a85f81 mov ebp, esp */
  EBP = (ESP);
  /* 11a85f83 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a85f86 push ebx */
  push32((uint32_t)(EBX));
  /* 11a85f87 push esi */
  push32((uint32_t)(ESI));
  /* 11a85f88 push edi */
  push32((uint32_t)(EDI));
  /* 11a85f89 push ecx */
  push32((uint32_t)(ECX));
  /* 11a85f8a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11a85f8d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11a85f92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11a85f97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a85f99 pop ecx */
  ECX = (pop32());
  /* 11a85f9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a85f9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a85fa0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a85fa3 pop edi */
  EDI = (pop32());
  /* 11a85fa4 pop esi */
  ESI = (pop32());
  /* 11a85fa5 pop ebx */
  EBX = (pop32());
  /* 11a85fa6 mov esp, ebp */
  ESP = (EBP);
  /* 11a85fa8 pop ebp */
  EBP = (pop32());
  /* 11a85fa9 ret  */
  ESPCHK(0x11a85f80u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11a860d0 (56 bytes, 28 insns) */
void f_11a860d0(void) {
  FTRACE(0x11a860d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a860d0 jne 0x11a860d3 */
  if (!C.zf) goto L_11a860d3;
  /* 11a860d2 ret  */
  ESPCHK(0x11a860d0u, _esp0);
  ESP += 4; return;
L_11a860d3:;
  /* 11a860d3 push ebp */
  push32((uint32_t)(EBP));
  /* 11a860d4 mov ebp, esp */
  EBP = (ESP);
  /* 11a860d6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a860d9 push eax */
  push32((uint32_t)(EAX));
  /* 11a860da push edx */
  push32((uint32_t)(EDX));
  /* 11a860db push ebx */
  push32((uint32_t)(EBX));
  /* 11a860dc push esi */
  push32((uint32_t)(ESI));
  /* 11a860dd push edi */
  push32((uint32_t)(EDI));
  /* 11a860de push 0x11ab4318 */
  push32((uint32_t)(0x11ab4318u));
  /* 11a860e3 push 0x11ab4314 */
  push32((uint32_t)(0x11ab4314u));
  /* 11a860e8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11a860ea push 0x11ab4304 */
  push32((uint32_t)(0x11ab4304u));
  /* 11a860ef push 1 */
  push32((uint32_t)(0x1u));
  /* 11a860f1 call 0x11a868a0 */
  push32(0x11a860f6u); f_11a868a0();
  /* 11a860f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a860f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a860fc jne 0x11a860ff */
  if (!C.zf) goto L_11a860ff;
  /* 11a860fe int3  */
  x86_unimpl("int3 @ 0x11a860fe");
L_11a860ff:;
  /* 11a860ff pop edi */
  EDI = (pop32());
  /* 11a86100 pop esi */
  ESI = (pop32());
  /* 11a86101 pop ebx */
  EBX = (pop32());
  /* 11a86102 pop edx */
  EDX = (pop32());
  /* 11a86103 pop eax */
  EAX = (pop32());
  /* 11a86104 mov esp, ebp */
  ESP = (EBP);
  /* 11a86106 pop ebp */
  EBP = (pop32());
  /* 11a86107 ret  */
  ESPCHK(0x11a860d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006110 @ 0x11a86110 (250 bytes, 92 insns) */
void f_11a86110(void) {
  FTRACE(0x11a86110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a86110 push ebp */
  push32((uint32_t)(EBP));
  /* 11a86111 mov ebp, esp */
  EBP = (ESP);
  /* 11a86113 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a86116 push ebx */
  push32((uint32_t)(EBX));
  /* 11a86117 push esi */
  push32((uint32_t)(ESI));
  /* 11a86118 push edi */
  push32((uint32_t)(EDI));
  /* 11a86119 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11a8611c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a8611f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11a86122 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11a86125:;
  /* 11a86125 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86129 jne 0x11a86149 */
  if (!C.zf) goto L_11a86149;
  /* 11a8612b push 0x11ab4410 */
  push32((uint32_t)(0x11ab4410u));
  /* 11a86130 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a86132 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11a86134 push 0x11ab4404 */
  push32((uint32_t)(0x11ab4404u));
  /* 11a86139 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8613b call 0x11a868a0 */
  push32(0x11a86140u); f_11a868a0();
  /* 11a86140 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86143 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86146 jne 0x11a86149 */
  if (!C.zf) goto L_11a86149;
  /* 11a86148 int3  */
  x86_unimpl("int3 @ 0x11a86148");
L_11a86149:;
  /* 11a86149 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8614b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8614d jne 0x11a86125 */
  if (!C.zf) goto L_11a86125;
L_11a8614f:;
  /* 11a8614f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86153 jne 0x11a86173 */
  if (!C.zf) goto L_11a86173;
  /* 11a86155 push 0x11ab43f4 */
  push32((uint32_t)(0x11ab43f4u));
  /* 11a8615a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8615c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11a8615e push 0x11ab4404 */
  push32((uint32_t)(0x11ab4404u));
  /* 11a86163 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a86165 call 0x11a868a0 */
  push32(0x11a8616au); f_11a868a0();
  /* 11a8616a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8616d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86170 jne 0x11a86173 */
  if (!C.zf) goto L_11a86173;
  /* 11a86172 int3  */
  x86_unimpl("int3 @ 0x11a86172");
L_11a86173:;
  /* 11a86173 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a86175 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a86177 jne 0x11a8614f */
  if (!C.zf) goto L_11a8614f;
  /* 11a86179 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8617c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11a86183 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a86186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a86189 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11a8618c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8618f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a86192 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a86194 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a86197 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 11a8619e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a861a1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a861a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a861a5 push edx */
  push32((uint32_t)(EDX));
  /* 11a861a6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a861a9 push eax */
  push32((uint32_t)(EAX));
  /* 11a861aa call 0x11a871c0 */
  push32(0x11a861afu); f_11a871c0();
  /* 11a861af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a861b2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11a861b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a861b8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a861bb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a861be mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a861c1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11a861c4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a861c7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a861cb jl 0x11a861ef */
  if ((C.sf!=C.of)) goto L_11a861ef;
  /* 11a861cd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a861d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a861d2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11a861d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a861d7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a861dd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11a861e0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a861e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a861e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a861e8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a861eb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a861ed jmp 0x11a86200 */
  goto L_11a86200;
L_11a861ef:;
  /* 11a861ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a861f2 push edx */
  push32((uint32_t)(EDX));
  /* 11a861f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a861f5 call 0x11a86f40 */
  push32(0x11a861fau); f_11a86f40();
  /* 11a861fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a861fd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11a86200:;
  /* 11a86200 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a86203 pop edi */
  EDI = (pop32());
  /* 11a86204 pop esi */
  ESI = (pop32());
  /* 11a86205 pop ebx */
  EBX = (pop32());
  /* 11a86206 mov esp, ebp */
  ESP = (EBP);
  /* 11a86208 pop ebp */
  EBP = (pop32());
  /* 11a86209 ret  */
  ESPCHK(0x11a86110u, _esp0);
  ESP += 4; return;
}

/* FUN_10006210 @ 0x11a86210 (10 bytes, 2 insns) */
void f_11a86210(void) {
  FTRACE(0x11a86210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a86210 mov edx, 0x11ab7ab0 */
  EDX = (0x11ab7ab0u);
  /* 11a86215 jmp 0x11a8818b */
  f_11a8818b(); return;
}

/* FUN_10006230 @ 0x11a86230 (33 bytes, 15 insns) */
void f_11a86230(void) {
  FTRACE(0x11a86230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a86230 push ebp */
  push32((uint32_t)(EBP));
  /* 11a86231 mov ebp, esp */
  EBP = (ESP);
  /* 11a86233 push ebx */
  push32((uint32_t)(EBX));
  /* 11a86234 push esi */
  push32((uint32_t)(ESI));
  /* 11a86235 push edi */
  push32((uint32_t)(EDI));
  /* 11a86236 call 0x11a86270 */
  push32(0x11a8623bu); f_11a86270();
  /* 11a8623b call 0x11a88400 */
  push32(0x11a86240u); f_11a88400();
  /* 11a86240 mov dword ptr [0x11aba0a0], eax */
  w32((uint32_t)(0x11aba0a0), (EAX));
  /* 11a86245 call 0x11a88380 */
  push32(0x11a8624au); f_11a88380();
  /* 11a8624a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11a8624c pop edi */
  EDI = (pop32());
  /* 11a8624d pop esi */
  ESI = (pop32());
  /* 11a8624e pop ebx */
  EBX = (pop32());
  /* 11a8624f pop ebp */
  EBP = (pop32());
  /* 11a86250 ret  */
  ESPCHK(0x11a86230u, _esp0);
  ESP += 4; return;
}

/* FUN_10006260 @ 0x11a86260 (5 bytes, 4 insns) */
void f_11a86260(void) {
  FTRACE(0x11a86260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a86260 push ebp */
  push32((uint32_t)(EBP));
  /* 11a86261 mov ebp, esp */
  EBP = (ESP);
  /* 11a86263 pop ebp */
  EBP = (pop32());
  /* 11a86264 ret  */
  ESPCHK(0x11a86260u, _esp0);
  ESP += 4; return;
}

/* FUN_10006270 @ 0x11a86270 (65 bytes, 10 insns) */
void f_11a86270(void) {
  FTRACE(0x11a86270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a86270 push ebp */
  push32((uint32_t)(EBP));
  /* 11a86271 mov ebp, esp */
  EBP = (ESP);
  /* 11a86273 mov dword ptr [0x11ab7b00], 0x11a88af0 */
  w32((uint32_t)(0x11ab7b00), (0x11a88af0u));
  /* 11a8627d mov dword ptr [0x11ab7b04], 0x11a88500 */
  w32((uint32_t)(0x11ab7b04), (0x11a88500u));
  /* 11a86287 mov dword ptr [0x11ab7b08], 0x11a88610 */
  w32((uint32_t)(0x11ab7b08), (0x11a88610u));
  /* 11a86291 mov dword ptr [0x11ab7b0c], 0x11a88450 */
  w32((uint32_t)(0x11ab7b0c), (0x11a88450u));
  /* 11a8629b mov dword ptr [0x11ab7b10], 0x11a885e0 */
  w32((uint32_t)(0x11ab7b10), (0x11a885e0u));
  /* 11a862a5 mov dword ptr [0x11ab7b14], 0x11a88af0 */
  w32((uint32_t)(0x11ab7b14), (0x11a88af0u));
  /* 11a862af pop ebp */
  EBP = (pop32());
  /* 11a862b0 ret  */
  ESPCHK(0x11a86270u, _esp0);
  ESP += 4; return;
}

/* FUN_100062c0 @ 0x11a862c0 (28 bytes, 11 insns) */
void f_11a862c0(void) {
  FTRACE(0x11a862c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a862c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a862c1 mov ebp, esp */
  EBP = (ESP);
  /* 11a862c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a862c4 mov eax, dword ptr [0x11aba09c] */
  EAX = (r32((uint32_t)(0x11aba09c)));
  /* 11a862c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a862cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a862cf mov dword ptr [0x11aba09c], ecx */
  w32((uint32_t)(0x11aba09c), (ECX));
  /* 11a862d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a862d8 mov esp, ebp */
  ESP = (EBP);
  /* 11a862da pop ebp */
  EBP = (pop32());
  /* 11a862db ret  */
  ESPCHK(0x11a862c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062e0 @ 0x11a862e0 (20 bytes, 6 insns) */
void f_11a862e0(void) {
  FTRACE(0x11a862e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a862e0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a862e3 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11a862e6 call 0x11a88dd8 */
  push32(0x11a862ebu); f_11a88dd8();
  /* 11a862eb call 0x11a862fd */
  push32(0x11a862f0u); f_11a862fd();
  /* 11a862f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a862f3 ret  */
  ESPCHK(0x11a862e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f4 @ 0x11a862f4 (9 bytes, 2 insns) */
void f_11a862f4(void) {
  FTRACE(0x11a862f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a862f4 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11a862f8 call 0x11a88d95 */
  push32(0x11a862fdu); f_11a88d95();
}

/* FUN_100062fd @ 0x11a862fd (125 bytes, 34 insns) */
void f_11a862fd(void) {
  FTRACE(0x11a862fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a862fd push edx */
  push32((uint32_t)(EDX));
  /* 11a862fe wait  */
  /* wait (no observable integer/reg state) */
  /* 11a862ff fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11a86302 je 0x11a8633a */
  if (C.zf) goto L_11a8633a;
  /* 11a86304 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a8630a je 0x11a86312 */
  if (C.zf) goto L_11a86312;
  /* 11a8630c fldcw word ptr [0x11ab47b8] */
  C.fcw = r16((uint32_t)(0x11ab47b8));
L_11a86312:;
  /* 11a86312 fld1  */
  fpu_push(1.0);
  /* 11a86314 fpatan  */
  { double _r=__builtin_atan2(FPU_ST(1), FPU_ST(0)); (void)fpu_pop(); FPU_ST(0)=_r; }
L_11a86316:;
  /* 11a86316 cmp dword ptr [0x11aba09c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba09c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8631d jne 0x11a88dee */
  if (!C.zf) { jmp_ind(0x11a88deeu); return; }
  /* 11a86323 mov edx, 0xf */
  EDX = (0xfu);
  /* 11a86328 lea ecx, [0x11ab7a50] */
  ECX = ((uint32_t)(0x11ab7a50));
  /* 11a8632e jmp 0x11a88dfb */
  f_11a88dfb(); return;
L_11a86333:;
  /* 11a86333 call 0x11a88d7c */
  push32(0x11a86338u); f_11a88d7c();
  /* 11a86338 jmp 0x11a86360 */
  goto L_11a86360;
L_11a8633a:;
  /* 11a8633a test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11a8633f jne 0x11a86333 */
  if (!C.zf) goto L_11a86333;
  /* 11a86341 cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86346 jne 0x11a86333 */
  if (!C.zf) goto L_11a86333;
  /* 11a86348 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11a8634a fld xword ptr [0x11ab7b2a] */
  fpu_push(rf80((uint32_t)(0x11ab7b2a)));
  /* 11a86350 test eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); fl_logic(_r,32); }
  /* 11a86355 je 0x11a86316 */
  if (C.zf) goto L_11a86316;
  /* 11a86357 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11a86359 jmp 0x11a86316 */
  goto L_11a86316;
  /* 11a8635b mov eax, 1 */
  EAX = (0x1u);
L_11a86360:;
  /* 11a86360 cmp dword ptr [0x11aba09c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba09c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86367 jne 0x11a88dee */
  if (!C.zf) { jmp_ind(0x11a88deeu); return; }
  /* 11a8636d mov edx, 0xf */
  EDX = (0xfu);
  /* 11a86372 lea ecx, [0x11ab7a50] */
  ECX = ((uint32_t)(0x11ab7a50));
  /* 11a86378 call 0x11a88ef7 */
  push32(0x11a8637du); f_11a88ef7();
  /* 11a8637d pop edx */
  EDX = (pop32());
  /* 11a8637e ret  */
  ESPCHK(0x11a862fdu, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x11a86380 (39 bytes, 16 insns) */
void f_11a86380(void) {
  FTRACE(0x11a86380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a86380 push ebp */
  push32((uint32_t)(EBP));
  /* 11a86381 mov ebp, esp */
  EBP = (ESP);
  /* 11a86383 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86386 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a86387 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 11a8638a wait  */
  /* wait (no observable integer/reg state) */
  /* 11a8638b mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 11a8638f or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11a86392 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11a86396 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11a86399 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 11a8639c fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 11a8639f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a863a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a863a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a863a6 ret  */
  ESPCHK(0x11a86380u, _esp0);
  ESP += 4; return;
}

/* FUN_100063b0 @ 0x11a863b0 (20 bytes, 6 insns) */
void f_11a863b0(void) {
  FTRACE(0x11a863b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a863b0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a863b3 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11a863b6 call 0x11a88dd8 */
  push32(0x11a863bbu); f_11a88dd8();
  /* 11a863bb call 0x11a863cd */
  push32(0x11a863c0u); f_11a863cd();
  /* 11a863c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a863c3 ret  */
  ESPCHK(0x11a863b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100063c4 @ 0x11a863c4 (9 bytes, 2 insns) */
void f_11a863c4(void) {
  FTRACE(0x11a863c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a863c4 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11a863c8 call 0x11a88d95 */
  push32(0x11a863cdu); f_11a88d95();
}

/* FUN_100063cd @ 0x11a863cd (145 bytes, 43 insns) */
void f_11a863cd(void) {
  FTRACE(0x11a863cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a863cd push edx */
  push32((uint32_t)(EDX));
  /* 11a863ce wait  */
  /* wait (no observable integer/reg state) */
  /* 11a863cf fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11a863d2 je 0x11a86424 */
  if (C.zf) goto L_11a86424;
  /* 11a863d4 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a863da je 0x11a863e2 */
  if (C.zf) goto L_11a863e2;
  /* 11a863dc fldcw word ptr [0x11ab47b8] */
  C.fcw = r16((uint32_t)(0x11ab47b8));
L_11a863e2:;
  /* 11a863e2 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 11a863e4 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a863e5 fnstsw ax */
  AX = fpu_status();
  /* 11a863e7 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11a863e8 jp 0x11a86407 */
  if (C.pf) goto L_11a86407;
L_11a863ea:;
  /* 11a863ea cmp dword ptr [0x11aba09c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba09c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a863f1 jne 0x11a88dee */
  if (!C.zf) { jmp_ind(0x11a88deeu); return; }
  /* 11a863f7 mov edx, 0x12 */
  EDX = (0x12u);
  /* 11a863fc lea ecx, [0x11ab7a60] */
  ECX = ((uint32_t)(0x11ab7a60));
  /* 11a86402 jmp 0x11a88dfb */
  f_11a88dfb(); return;
L_11a86407:;
  /* 11a86407 fld xword ptr [0x11ab47ba] */
  fpu_push(rf80((uint32_t)(0x11ab47ba)));
  /* 11a8640d fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_11a8640f:;
  /* 11a8640f fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 11a86411 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a86412 fnstsw ax */
  AX = fpu_status();
  /* 11a86414 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11a86415 jp 0x11a8640f */
  if (C.pf) goto L_11a8640f;
  /* 11a86417 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 11a86419 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 11a8641b jmp 0x11a863ea */
  goto L_11a863ea;
L_11a8641d:;
  /* 11a8641d call 0x11a88d7c */
  push32(0x11a86422u); f_11a88d7c();
  /* 11a86422 jmp 0x11a8643f */
  goto L_11a8643f;
L_11a86424:;
  /* 11a86424 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11a86429 jne 0x11a8641d */
  if (!C.zf) goto L_11a8641d;
  /* 11a8642b cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86430 jne 0x11a8641d */
  if (!C.zf) goto L_11a8641d;
  /* 11a86432 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11a86434 fld xword ptr [0x11ab7b20] */
  fpu_push(rf80((uint32_t)(0x11ab7b20)));
  /* 11a8643a mov eax, 1 */
  EAX = (0x1u);
L_11a8643f:;
  /* 11a8643f cmp dword ptr [0x11aba09c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba09c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86446 jne 0x11a88dee */
  if (!C.zf) { jmp_ind(0x11a88deeu); return; }
  /* 11a8644c mov edx, 0x12 */
  EDX = (0x12u);
  /* 11a86451 lea ecx, [0x11ab7a60] */
  ECX = ((uint32_t)(0x11ab7a60));
  /* 11a86457 call 0x11a88ef7 */
  push32(0x11a8645cu); f_11a88ef7();
  /* 11a8645c pop edx */
  EDX = (pop32());
  /* 11a8645d ret  */
  ESPCHK(0x11a863cdu, _esp0);
  ESP += 4; return;
}

/* FUN_10006460 @ 0x11a86460 (20 bytes, 6 insns) */
void f_11a86460(void) {
  FTRACE(0x11a86460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a86460 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a86463 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11a86466 call 0x11a88dd8 */
  push32(0x11a8646bu); f_11a88dd8();
  /* 11a8646b call 0x11a8647d */
  push32(0x11a86470u); f_11a8647d();
  /* 11a86470 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86473 ret  */
  ESPCHK(0x11a86460u, _esp0);
  ESP += 4; return;
}

/* FUN_10006474 @ 0x11a86474 (9 bytes, 2 insns) */
void f_11a86474(void) {
  FTRACE(0x11a86474u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a86474 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11a86478 call 0x11a88d95 */
  push32(0x11a8647du); f_11a88d95();
}

/* FUN_1000647d @ 0x11a8647d (158 bytes, 48 insns) */
void f_11a8647d(void) {
  FTRACE(0x11a8647du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8647d push edx */
  push32((uint32_t)(EDX));
  /* 11a8647e wait  */
  /* wait (no observable integer/reg state) */
  /* 11a8647f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11a86482 je 0x11a864d4 */
  if (C.zf) goto L_11a864d4;
  /* 11a86484 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a8648a je 0x11a86492 */
  if (C.zf) goto L_11a86492;
  /* 11a8648c fldcw word ptr [0x11ab47b8] */
  C.fcw = r16((uint32_t)(0x11ab47b8));
L_11a86492:;
  /* 11a86492 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11a86494 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a86495 fnstsw ax */
  AX = fpu_status();
  /* 11a86497 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11a86498 jp 0x11a864b7 */
  if (C.pf) goto L_11a864b7;
L_11a8649a:;
  /* 11a8649a cmp dword ptr [0x11aba09c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba09c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a864a1 jne 0x11a88dee */
  if (!C.zf) { jmp_ind(0x11a88deeu); return; }
  /* 11a864a7 mov edx, 0x1e */
  EDX = (0x1eu);
  /* 11a864ac lea ecx, [0x11ab7a70] */
  ECX = ((uint32_t)(0x11ab7a70));
  /* 11a864b2 jmp 0x11a88dfb */
  f_11a88dfb(); return;
L_11a864b7:;
  /* 11a864b7 fld xword ptr [0x11ab47ba] */
  fpu_push(rf80((uint32_t)(0x11ab47ba)));
  /* 11a864bd fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_11a864bf:;
  /* 11a864bf fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 11a864c1 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a864c2 fnstsw ax */
  AX = fpu_status();
  /* 11a864c4 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11a864c5 jp 0x11a864bf */
  if (C.pf) goto L_11a864bf;
  /* 11a864c7 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 11a864c9 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11a864cb jmp 0x11a8649a */
  goto L_11a8649a;
L_11a864cd:;
  /* 11a864cd call 0x11a88d7c */
  push32(0x11a864d2u); f_11a88d7c();
  /* 11a864d2 jmp 0x11a864ef */
  goto L_11a864ef;
L_11a864d4:;
  /* 11a864d4 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11a864d9 jne 0x11a864cd */
  if (!C.zf) goto L_11a864cd;
  /* 11a864db cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a864e0 jne 0x11a864cd */
  if (!C.zf) goto L_11a864cd;
  /* 11a864e2 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11a864e4 fld xword ptr [0x11ab7b20] */
  fpu_push(rf80((uint32_t)(0x11ab7b20)));
  /* 11a864ea mov eax, 1 */
  EAX = (0x1u);
L_11a864ef:;
  /* 11a864ef cmp dword ptr [0x11aba09c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba09c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a864f6 jne 0x11a88dee */
  if (!C.zf) { jmp_ind(0x11a88deeu); return; }
  /* 11a864fc mov edx, 0x1e */
  EDX = (0x1eu);
  /* 11a86501 lea ecx, [0x11ab7a70] */
  ECX = ((uint32_t)(0x11ab7a70));
  /* 11a86507 call 0x11a88ef7 */
  push32(0x11a8650cu); f_11a88ef7();
  /* 11a8650c pop edx */
  EDX = (pop32());
  /* 11a8650d ret  */
  ESPCHK(0x11a8647du, _esp0);
  ESP += 4; return;
  /* 11a8650e int3  */
  x86_unimpl("int3 @ 0x11a8650e");
  /* 11a8650f int3  */
  x86_unimpl("int3 @ 0x11a8650f");
  /* 11a86510 push ebp */
  push32((uint32_t)(EBP));
  /* 11a86511 mov ebp, esp */
  EBP = (ESP);
  /* 11a86513 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
}

/* FUN_10006510 @ 0x11a86510 (313 bytes, 78 insns) */
void f_11a86510(void) {
  FTRACE(0x11a86510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a86510 push ebp */
  push32((uint32_t)(EBP));
  /* 11a86511 mov ebp, esp */
  EBP = (ESP);
  /* 11a86513 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86517 jne 0x11a865d7 */
  if (!C.zf) goto L_11a865d7;
  /* 11a8651d call dword ptr [0x11abc384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc384))), 0x11a86523u);
  /* 11a86523 mov dword ptr [0x11aba0c0], eax */
  w32((uint32_t)(0x11aba0c0), (EAX));
  /* 11a86528 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8652a call 0x11a8bfd0 */
  push32(0x11a8652fu); f_11a8bfd0();
  /* 11a8652f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86532 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a86534 jne 0x11a8653d */
  if (!C.zf) goto L_11a8653d;
  /* 11a86536 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a86538 jmp 0x11a86645 */
  goto L_11a86645;
L_11a8653d:;
  /* 11a8653d mov eax, dword ptr [0x11aba0c0] */
  EAX = (r32((uint32_t)(0x11aba0c0)));
  /* 11a86542 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a86545 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8654a mov dword ptr [0x11aba0cc], eax */
  w32((uint32_t)(0x11aba0cc), (EAX));
  /* 11a8654f mov ecx, dword ptr [0x11aba0c0] */
  ECX = (r32((uint32_t)(0x11aba0c0)));
  /* 11a86555 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8655b mov dword ptr [0x11aba0c8], ecx */
  w32((uint32_t)(0x11aba0c8), (ECX));
  /* 11a86561 mov edx, dword ptr [0x11aba0c8] */
  EDX = (r32((uint32_t)(0x11aba0c8)));
  /* 11a86567 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11a8656a add edx, dword ptr [0x11aba0cc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11aba0cc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86570 mov dword ptr [0x11aba0c4], edx */
  w32((uint32_t)(0x11aba0c4), (EDX));
  /* 11a86576 mov eax, dword ptr [0x11aba0c0] */
  EAX = (r32((uint32_t)(0x11aba0c0)));
  /* 11a8657b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a8657e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a86583 mov dword ptr [0x11aba0c0], eax */
  w32((uint32_t)(0x11aba0c0), (EAX));
  /* 11a86588 call 0x11a89140 */
  push32(0x11a8658du); f_11a89140();
  /* 11a8658d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8658f jne 0x11a8659d */
  if (!C.zf) goto L_11a8659d;
  /* 11a86591 call 0x11a8c020 */
  push32(0x11a86596u); f_11a8c020();
  /* 11a86596 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a86598 jmp 0x11a86645 */
  goto L_11a86645;
L_11a8659d:;
  /* 11a8659d call dword ptr [0x11abc380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc380))), 0x11a865a3u);
  /* 11a865a3 mov dword ptr [0x11abbbe8], eax */
  w32((uint32_t)(0x11abbbe8), (EAX));
  /* 11a865a8 call 0x11a8bdb0 */
  push32(0x11a865adu); f_11a8bdb0();
  /* 11a865ad mov dword ptr [0x11aba0a8], eax */
  w32((uint32_t)(0x11aba0a8), (EAX));
  /* 11a865b2 call 0x11a893f0 */
  push32(0x11a865b7u); f_11a893f0();
  /* 11a865b7 call 0x11a8b8a0 */
  push32(0x11a865bcu); f_11a8b8a0();
  /* 11a865bc call 0x11a8b750 */
  push32(0x11a865c1u); f_11a8b750();
  /* 11a865c1 call 0x11a88f40 */
  push32(0x11a865c6u); f_11a88f40();
  /* 11a865c6 mov ecx, dword ptr [0x11aba0a4] */
  ECX = (r32((uint32_t)(0x11aba0a4)));
  /* 11a865cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a865cf mov dword ptr [0x11aba0a4], ecx */
  w32((uint32_t)(0x11aba0a4), (ECX));
  /* 11a865d5 jmp 0x11a86640 */
  goto L_11a86640;
L_11a865d7:;
  /* 11a865d7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a865db jne 0x11a86630 */
  if (!C.zf) goto L_11a86630;
  /* 11a865dd cmp dword ptr [0x11aba0a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a865e4 jle 0x11a8662a */
  if ((C.zf||C.sf!=C.of)) goto L_11a8662a;
  /* 11a865e6 mov edx, dword ptr [0x11aba0a4] */
  EDX = (r32((uint32_t)(0x11aba0a4)));
  /* 11a865ec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a865ef mov dword ptr [0x11aba0a4], edx */
  w32((uint32_t)(0x11aba0a4), (EDX));
  /* 11a865f5 cmp dword ptr [0x11aba0f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a865fc jne 0x11a86603 */
  if (!C.zf) goto L_11a86603;
  /* 11a865fe call 0x11a88fc0 */
  push32(0x11a86603u); f_11a88fc0();
L_11a86603:;
  /* 11a86603 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a86605 call 0x11a8acf0 */
  push32(0x11a8660au); f_11a8acf0();
  /* 11a8660a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8660d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11a86610 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a86612 je 0x11a86619 */
  if (C.zf) goto L_11a86619;
  /* 11a86614 call 0x11a8b600 */
  push32(0x11a86619u); f_11a8b600();
L_11a86619:;
  /* 11a86619 call 0x11a89720 */
  push32(0x11a8661eu); f_11a89720();
  /* 11a8661e call 0x11a891d0 */
  push32(0x11a86623u); f_11a891d0();
  /* 11a86623 call 0x11a8c020 */
  push32(0x11a86628u); f_11a8c020();
  /* 11a86628 jmp 0x11a8662e */
  goto L_11a8662e;
L_11a8662a:;
  /* 11a8662a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8662c jmp 0x11a86645 */
  goto L_11a86645;
L_11a8662e:;
  /* 11a8662e jmp 0x11a86640 */
  goto L_11a86640;
L_11a86630:;
  /* 11a86630 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86634 jne 0x11a86640 */
  if (!C.zf) goto L_11a86640;
  /* 11a86636 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a86638 call 0x11a892c0 */
  push32(0x11a8663du); f_11a892c0();
  /* 11a8663d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a86640:;
  /* 11a86640 mov eax, 1 */
  EAX = (0x1u);
L_11a86645:;
  /* 11a86645 pop ebp */
  EBP = (pop32());
  /* 11a86646 ret 0xc */
  ESPCHK(0x11a86510u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11a86650 (243 bytes, 86 insns) */
void f_11a86650(void) {
  FTRACE(0x11a86650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a86650 push ebp */
  push32((uint32_t)(EBP));
  /* 11a86651 mov ebp, esp */
  EBP = (ESP);
  /* 11a86653 push ecx */
  push32((uint32_t)(ECX));
  /* 11a86654 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a8665b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8665f jne 0x11a86671 */
  if (!C.zf) goto L_11a86671;
  /* 11a86661 cmp dword ptr [0x11aba0a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86668 jne 0x11a86671 */
  if (!C.zf) goto L_11a86671;
  /* 11a8666a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8666c jmp 0x11a8673d */
  goto L_11a8673d;
L_11a86671:;
  /* 11a86671 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86675 je 0x11a8667d */
  if (C.zf) goto L_11a8667d;
  /* 11a86677 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8667b jne 0x11a866bf */
  if (!C.zf) goto L_11a866bf;
L_11a8667d:;
  /* 11a8667d cmp dword ptr [0x11abbbf8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11abbbf8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86684 je 0x11a8669b */
  if (C.zf) goto L_11a8669b;
  /* 11a86686 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a86689 push eax */
  push32((uint32_t)(EAX));
  /* 11a8668a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8668d push ecx */
  push32((uint32_t)(ECX));
  /* 11a8668e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a86691 push edx */
  push32((uint32_t)(EDX));
  /* 11a86692 call dword ptr [0x11abbbf8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abbbf8))), 0x11a86698u);
  /* 11a86698 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8669b:;
  /* 11a8669b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8669f je 0x11a866b5 */
  if (C.zf) goto L_11a866b5;
  /* 11a866a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a866a4 push eax */
  push32((uint32_t)(EAX));
  /* 11a866a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a866a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11a866a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a866ac push edx */
  push32((uint32_t)(EDX));
  /* 11a866ad call 0x11a86510 */
  push32(0x11a866b2u); f_11a86510();
  /* 11a866b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a866b5:;
  /* 11a866b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a866b9 jne 0x11a866bf */
  if (!C.zf) goto L_11a866bf;
  /* 11a866bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a866bd jmp 0x11a8673d */
  goto L_11a8673d;
L_11a866bf:;
  /* 11a866bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a866c2 push eax */
  push32((uint32_t)(EAX));
  /* 11a866c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a866c6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a866c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a866ca push edx */
  push32((uint32_t)(EDX));
  /* 11a866cb call 0x11a8104b */
  push32(0x11a866d0u); f_11a8104b();
  /* 11a866d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a866d3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a866d7 jne 0x11a866ee */
  if (!C.zf) goto L_11a866ee;
  /* 11a866d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a866dd jne 0x11a866ee */
  if (!C.zf) goto L_11a866ee;
  /* 11a866df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a866e2 push eax */
  push32((uint32_t)(EAX));
  /* 11a866e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a866e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a866e8 push ecx */
  push32((uint32_t)(ECX));
  /* 11a866e9 call 0x11a86510 */
  push32(0x11a866eeu); f_11a86510();
L_11a866ee:;
  /* 11a866ee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a866f2 je 0x11a866fa */
  if (C.zf) goto L_11a866fa;
  /* 11a866f4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a866f8 jne 0x11a8673a */
  if (!C.zf) goto L_11a8673a;
L_11a866fa:;
  /* 11a866fa mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a866fd push edx */
  push32((uint32_t)(EDX));
  /* 11a866fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a86701 push eax */
  push32((uint32_t)(EAX));
  /* 11a86702 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a86705 push ecx */
  push32((uint32_t)(ECX));
  /* 11a86706 call 0x11a86510 */
  push32(0x11a8670bu); f_11a86510();
  /* 11a8670b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8670d jne 0x11a86716 */
  if (!C.zf) goto L_11a86716;
  /* 11a8670f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11a86716:;
  /* 11a86716 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8671a je 0x11a8673a */
  if (C.zf) goto L_11a8673a;
  /* 11a8671c cmp dword ptr [0x11abbbf8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11abbbf8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86723 je 0x11a8673a */
  if (C.zf) goto L_11a8673a;
  /* 11a86725 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a86728 push edx */
  push32((uint32_t)(EDX));
  /* 11a86729 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8672c push eax */
  push32((uint32_t)(EAX));
  /* 11a8672d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a86730 push ecx */
  push32((uint32_t)(ECX));
  /* 11a86731 call dword ptr [0x11abbbf8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abbbf8))), 0x11a86737u);
  /* 11a86737 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8673a:;
  /* 11a8673a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11a8673d:;
  /* 11a8673d mov esp, ebp */
  ESP = (EBP);
  /* 11a8673f pop ebp */
  EBP = (pop32());
  /* 11a86740 ret 0xc */
  ESPCHK(0x11a86650u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11a86750 (58 bytes, 18 insns) */
void f_11a86750(void) {
  FTRACE(0x11a86750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a86750 push ebp */
  push32((uint32_t)(EBP));
  /* 11a86751 mov ebp, esp */
  EBP = (ESP);
  /* 11a86753 cmp dword ptr [0x11aba0b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8675a je 0x11a8676e */
  if (C.zf) goto L_11a8676e;
  /* 11a8675c cmp dword ptr [0x11aba0b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86763 jne 0x11a86773 */
  if (!C.zf) goto L_11a86773;
  /* 11a86765 cmp dword ptr [0x11aba0b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8676c jne 0x11a86773 */
  if (!C.zf) goto L_11a86773;
L_11a8676e:;
  /* 11a8676e call 0x11a8c0c0 */
  push32(0x11a86773u); f_11a8c0c0();
L_11a86773:;
  /* 11a86773 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a86776 push eax */
  push32((uint32_t)(EAX));
  /* 11a86777 call 0x11a8c110 */
  push32(0x11a8677cu); f_11a8c110();
  /* 11a8677c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8677f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11a86784 call dword ptr [0x11ab7a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ab7a74))), 0x11a8678au);
  /* 11a8678a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8678d pop ebp */
  EBP = (pop32());
  /* 11a8678e ret  */
  ESPCHK(0x11a86750u, _esp0);
  ESP += 4; return;
}

/* FUN_10006790 @ 0x11a86790 (11 bytes, 5 insns) */
void f_11a86790(void) {
  FTRACE(0x11a86790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a86790 push ebp */
  push32((uint32_t)(EBP));
  /* 11a86791 mov ebp, esp */
  EBP = (ESP);
  /* 11a86793 call dword ptr [0x11abc388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc388))), 0x11a86799u);
  /* 11a86799 pop ebp */
  EBP = (pop32());
  /* 11a8679a ret  */
  ESPCHK(0x11a86790u, _esp0);
  ESP += 4; return;
}

/* FUN_100067a0 @ 0x11a867a0 (87 bytes, 30 insns) */
void f_11a867a0(void) {
  FTRACE(0x11a867a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a867a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a867a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a867a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a867a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a867a8 jl 0x11a867b0 */
  if ((C.sf!=C.of)) goto L_11a867b0;
  /* 11a867aa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a867ae jl 0x11a867b5 */
  if ((C.sf!=C.of)) goto L_11a867b5;
L_11a867b0:;
  /* 11a867b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a867b3 jmp 0x11a867f3 */
  goto L_11a867f3;
L_11a867b5:;
  /* 11a867b5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a867b9 jne 0x11a867c7 */
  if (!C.zf) goto L_11a867c7;
  /* 11a867bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a867be mov eax, dword ptr [eax*4 + 0x11ab7a7c] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11ab7a7c)));
  /* 11a867c5 jmp 0x11a867f3 */
  goto L_11a867f3;
L_11a867c7:;
  /* 11a867c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a867ca and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11a867cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a867cf je 0x11a867d6 */
  if (C.zf) goto L_11a867d6;
  /* 11a867d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a867d4 jmp 0x11a867f3 */
  goto L_11a867f3;
L_11a867d6:;
  /* 11a867d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a867d9 mov eax, dword ptr [edx*4 + 0x11ab7a7c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11ab7a7c)));
  /* 11a867e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a867e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a867e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a867e9 mov dword ptr [ecx*4 + 0x11ab7a7c], edx */
  w32((uint32_t)(ECX*4 + 0x11ab7a7c), (EDX));
  /* 11a867f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11a867f3:;
  /* 11a867f3 mov esp, ebp */
  ESP = (EBP);
  /* 11a867f5 pop ebp */
  EBP = (pop32());
  /* 11a867f6 ret  */
  ESPCHK(0x11a867a0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11a86800 (126 bytes, 38 insns) */
void f_11a86800(void) {
  FTRACE(0x11a86800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a86800 push ebp */
  push32((uint32_t)(EBP));
  /* 11a86801 mov ebp, esp */
  EBP = (ESP);
  /* 11a86803 push ecx */
  push32((uint32_t)(ECX));
  /* 11a86804 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86808 jl 0x11a86810 */
  if ((C.sf!=C.of)) goto L_11a86810;
  /* 11a8680a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8680e jl 0x11a86817 */
  if ((C.sf!=C.of)) goto L_11a86817;
L_11a86810:;
  /* 11a86810 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11a86815 jmp 0x11a8687a */
  goto L_11a8687a;
L_11a86817:;
  /* 11a86817 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8681b jne 0x11a86829 */
  if (!C.zf) goto L_11a86829;
  /* 11a8681d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a86820 mov eax, dword ptr [eax*4 + 0x11ab7a88] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11ab7a88)));
  /* 11a86827 jmp 0x11a8687a */
  goto L_11a8687a;
L_11a86829:;
  /* 11a86829 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8682c mov edx, dword ptr [ecx*4 + 0x11ab7a88] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ab7a88)));
  /* 11a86833 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a86836 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8683a jne 0x11a86850 */
  if (!C.zf) goto L_11a86850;
  /* 11a8683c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11a8683e call dword ptr [0x11abc38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc38c))), 0x11a86844u);
  /* 11a86844 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a86847 mov dword ptr [ecx*4 + 0x11ab7a88], eax */
  w32((uint32_t)(ECX*4 + 0x11ab7a88), (EAX));
  /* 11a8684e jmp 0x11a86877 */
  goto L_11a86877;
L_11a86850:;
  /* 11a86850 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86854 jne 0x11a8686a */
  if (!C.zf) goto L_11a8686a;
  /* 11a86856 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11a86858 call dword ptr [0x11abc38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc38c))), 0x11a8685eu);
  /* 11a8685e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a86861 mov dword ptr [edx*4 + 0x11ab7a88], eax */
  w32((uint32_t)(EDX*4 + 0x11ab7a88), (EAX));
  /* 11a86868 jmp 0x11a86877 */
  goto L_11a86877;
L_11a8686a:;
  /* 11a8686a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8686d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a86870 mov dword ptr [eax*4 + 0x11ab7a88], ecx */
  w32((uint32_t)(EAX*4 + 0x11ab7a88), (ECX));
L_11a86877:;
  /* 11a86877 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11a8687a:;
  /* 11a8687a mov esp, ebp */
  ESP = (EBP);
  /* 11a8687c pop ebp */
  EBP = (pop32());
  /* 11a8687d ret  */
  ESPCHK(0x11a86800u, _esp0);
  ESP += 4; return;
}

/* FUN_10006880 @ 0x11a86880 (28 bytes, 11 insns) */
void f_11a86880(void) {
  FTRACE(0x11a86880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a86880 push ebp */
  push32((uint32_t)(EBP));
  /* 11a86881 mov ebp, esp */
  EBP = (ESP);
  /* 11a86883 push ecx */
  push32((uint32_t)(ECX));
  /* 11a86884 mov eax, dword ptr [0x11abbbdc] */
  EAX = (r32((uint32_t)(0x11abbbdc)));
  /* 11a86889 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8688c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8688f mov dword ptr [0x11abbbdc], ecx */
  w32((uint32_t)(0x11abbbdc), (ECX));
  /* 11a86895 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a86898 mov esp, ebp */
  ESP = (EBP);
  /* 11a8689a pop ebp */
  EBP = (pop32());
  /* 11a8689b ret  */
  ESPCHK(0x11a86880u, _esp0);
  ESP += 4; return;
}

/* FUN_100068a0 @ 0x11a868a0 (912 bytes, 248 insns) */
void f_11a868a0(void) {
  FTRACE(0x11a868a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a868a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a868a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a868a3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11a868a8 call 0x11a8c980 */
  push32(0x11a868adu); f_11a8c980();
  /* 11a868ad push edi */
  push32((uint32_t)(EDI));
  /* 11a868ae mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11a868b5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11a868ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a868bc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11a868c2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a868c4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11a868c6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a868c7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 11a868ce mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11a868d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a868d5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 11a868db rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a868dd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11a868df stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a868e0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11a868e7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11a868ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a868ee lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11a868f4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a868f6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11a868f8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a868f9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 11a868fc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11a86902 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86906 jl 0x11a8690e */
  if ((C.sf!=C.of)) goto L_11a8690e;
  /* 11a86908 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8690c jl 0x11a86916 */
  if ((C.sf!=C.of)) goto L_11a86916;
L_11a8690e:;
  /* 11a8690e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a86911 jmp 0x11a86c2b */
  goto L_11a86c2b;
L_11a86916:;
  /* 11a86916 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8691a jne 0x11a869c0 */
  if (!C.zf) goto L_11a869c0;
  /* 11a86920 push 0x11ab7a78 */
  push32((uint32_t)(0x11ab7a78u));
  /* 11a86925 call dword ptr [0x11abc3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3a4))), 0x11a8692bu);
  /* 11a8692b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8692d jle 0x11a869c0 */
  if ((C.zf||C.sf!=C.of)) goto L_11a869c0;
  /* 11a86933 cmp dword ptr [0x11aba0b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8693a jne 0x11a8697e */
  if (!C.zf) goto L_11a8697e;
  /* 11a8693c push 0x11ab44ec */
  push32((uint32_t)(0x11ab44ecu));
  /* 11a86941 call dword ptr [0x11abc3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3a0))), 0x11a86947u);
  /* 11a86947 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 11a8694d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86954 je 0x11a86976 */
  if (C.zf) goto L_11a86976;
  /* 11a86956 push 0x11ab44e0 */
  push32((uint32_t)(0x11ab44e0u));
  /* 11a8695b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 11a86961 push ecx */
  push32((uint32_t)(ECX));
  /* 11a86962 call dword ptr [0x11abc39c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc39c))), 0x11a86968u);
  /* 11a86968 mov dword ptr [0x11aba0b8], eax */
  w32((uint32_t)(0x11aba0b8), (EAX));
  /* 11a8696d cmp dword ptr [0x11aba0b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86974 jne 0x11a8697e */
  if (!C.zf) goto L_11a8697e;
L_11a86976:;
  /* 11a86976 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a86979 jmp 0x11a86c2b */
  goto L_11a86c2b;
L_11a8697e:;
  /* 11a8697e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a86981 push edx */
  push32((uint32_t)(EDX));
  /* 11a86982 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a86985 push eax */
  push32((uint32_t)(EAX));
  /* 11a86986 push 0x11ab44ac */
  push32((uint32_t)(0x11ab44acu));
  /* 11a8698b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11a86991 push ecx */
  push32((uint32_t)(ECX));
  /* 11a86992 call dword ptr [0x11aba0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11aba0b8))), 0x11a86998u);
  /* 11a86998 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8699b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11a869a1 push edx */
  push32((uint32_t)(EDX));
  /* 11a869a2 call dword ptr [0x11abc398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc398))), 0x11a869a8u);
  /* 11a869a8 push 0x11ab7a78 */
  push32((uint32_t)(0x11ab7a78u));
  /* 11a869ad call dword ptr [0x11abc394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc394))), 0x11a869b3u);
  /* 11a869b3 call 0x11a86790 */
  push32(0x11a869b8u); f_11a86790();
  /* 11a869b8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a869bb jmp 0x11a86c2b */
  goto L_11a86c2b;
L_11a869c0:;
  /* 11a869c0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a869c4 je 0x11a869fd */
  if (C.zf) goto L_11a869fd;
  /* 11a869c6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 11a869cc push eax */
  push32((uint32_t)(EAX));
  /* 11a869cd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a869d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a869d1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11a869d6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 11a869dc push edx */
  push32((uint32_t)(EDX));
  /* 11a869dd call 0x11a8c880 */
  push32(0x11a869e2u); f_11a8c880();
  /* 11a869e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a869e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a869e7 jge 0x11a869fd */
  if ((C.sf==C.of)) goto L_11a869fd;
  /* 11a869e9 push 0x11ab4480 */
  push32((uint32_t)(0x11ab4480u));
  /* 11a869ee lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11a869f4 push eax */
  push32((uint32_t)(EAX));
  /* 11a869f5 call 0x11a8c790 */
  push32(0x11a869fau); f_11a8c790();
  /* 11a869fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a869fd:;
  /* 11a869fd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86a01 jne 0x11a86a35 */
  if (!C.zf) goto L_11a86a35;
  /* 11a86a03 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86a07 je 0x11a86a15 */
  if (C.zf) goto L_11a86a15;
  /* 11a86a09 mov dword ptr [ebp - 0x3028], 0x11ab446c */
  w32((uint32_t)(EBP + -0x3028), (0x11ab446cu));
  /* 11a86a13 jmp 0x11a86a1f */
  goto L_11a86a1f;
L_11a86a15:;
  /* 11a86a15 mov dword ptr [ebp - 0x3028], 0x11ab4458 */
  w32((uint32_t)(EBP + -0x3028), (0x11ab4458u));
L_11a86a1f:;
  /* 11a86a1f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11a86a25 push ecx */
  push32((uint32_t)(ECX));
  /* 11a86a26 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11a86a2c push edx */
  push32((uint32_t)(EDX));
  /* 11a86a2d call 0x11a8c790 */
  push32(0x11a86a32u); f_11a8c790();
  /* 11a86a32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a86a35:;
  /* 11a86a35 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11a86a3b push eax */
  push32((uint32_t)(EAX));
  /* 11a86a3c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11a86a42 push ecx */
  push32((uint32_t)(ECX));
  /* 11a86a43 call 0x11a8c7a0 */
  push32(0x11a86a48u); f_11a8c7a0();
  /* 11a86a48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86a4b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86a4f jne 0x11a86a8a */
  if (!C.zf) goto L_11a86a8a;
  /* 11a86a51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a86a54 mov eax, dword ptr [edx*4 + 0x11ab7a7c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11ab7a7c)));
  /* 11a86a5b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11a86a5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a86a60 je 0x11a86a76 */
  if (C.zf) goto L_11a86a76;
  /* 11a86a62 push 0x11ab4454 */
  push32((uint32_t)(0x11ab4454u));
  /* 11a86a67 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11a86a6d push ecx */
  push32((uint32_t)(ECX));
  /* 11a86a6e call 0x11a8c7a0 */
  push32(0x11a86a73u); f_11a8c7a0();
  /* 11a86a73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a86a76:;
  /* 11a86a76 push 0x11ab4450 */
  push32((uint32_t)(0x11ab4450u));
  /* 11a86a7b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11a86a81 push edx */
  push32((uint32_t)(EDX));
  /* 11a86a82 call 0x11a8c7a0 */
  push32(0x11a86a87u); f_11a8c7a0();
  /* 11a86a87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a86a8a:;
  /* 11a86a8a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86a8e je 0x11a86ad2 */
  if (C.zf) goto L_11a86ad2;
  /* 11a86a90 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11a86a96 push eax */
  push32((uint32_t)(EAX));
  /* 11a86a97 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a86a9a push ecx */
  push32((uint32_t)(ECX));
  /* 11a86a9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a86a9e push edx */
  push32((uint32_t)(EDX));
  /* 11a86a9f push 0x11ab4444 */
  push32((uint32_t)(0x11ab4444u));
  /* 11a86aa4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a86aa9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11a86aaf push eax */
  push32((uint32_t)(EAX));
  /* 11a86ab0 call 0x11a8c690 */
  push32(0x11a86ab5u); f_11a8c690();
  /* 11a86ab5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86ab8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a86aba jge 0x11a86ad0 */
  if ((C.sf==C.of)) goto L_11a86ad0;
  /* 11a86abc push 0x11ab4480 */
  push32((uint32_t)(0x11ab4480u));
  /* 11a86ac1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11a86ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 11a86ac8 call 0x11a8c790 */
  push32(0x11a86acdu); f_11a8c790();
  /* 11a86acd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a86ad0:;
  /* 11a86ad0 jmp 0x11a86ae8 */
  goto L_11a86ae8;
L_11a86ad2:;
  /* 11a86ad2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11a86ad8 push edx */
  push32((uint32_t)(EDX));
  /* 11a86ad9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11a86adf push eax */
  push32((uint32_t)(EAX));
  /* 11a86ae0 call 0x11a8c790 */
  push32(0x11a86ae5u); f_11a8c790();
  /* 11a86ae5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a86ae8:;
  /* 11a86ae8 cmp dword ptr [0x11abbbdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11abbbdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86aef je 0x11a86b2c */
  if (C.zf) goto L_11a86b2c;
  /* 11a86af1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11a86af7 push ecx */
  push32((uint32_t)(ECX));
  /* 11a86af8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11a86afe push edx */
  push32((uint32_t)(EDX));
  /* 11a86aff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a86b02 push eax */
  push32((uint32_t)(EAX));
  /* 11a86b03 call dword ptr [0x11abbbdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abbbdc))), 0x11a86b09u);
  /* 11a86b09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86b0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a86b0e je 0x11a86b2c */
  if (C.zf) goto L_11a86b2c;
  /* 11a86b10 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86b14 jne 0x11a86b21 */
  if (!C.zf) goto L_11a86b21;
  /* 11a86b16 push 0x11ab7a78 */
  push32((uint32_t)(0x11ab7a78u));
  /* 11a86b1b call dword ptr [0x11abc394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc394))), 0x11a86b21u);
L_11a86b21:;
  /* 11a86b21 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11a86b27 jmp 0x11a86c2b */
  goto L_11a86c2b;
L_11a86b2c:;
  /* 11a86b2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a86b2f mov edx, dword ptr [ecx*4 + 0x11ab7a7c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ab7a7c)));
  /* 11a86b36 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a86b39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a86b3b je 0x11a86b7b */
  if (C.zf) goto L_11a86b7b;
  /* 11a86b3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a86b40 cmp dword ptr [eax*4 + 0x11ab7a88], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11ab7a88))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86b48 je 0x11a86b7b */
  if (C.zf) goto L_11a86b7b;
  /* 11a86b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a86b4c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11a86b52 push ecx */
  push32((uint32_t)(ECX));
  /* 11a86b53 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11a86b59 push edx */
  push32((uint32_t)(EDX));
  /* 11a86b5a call 0x11a8c610 */
  push32(0x11a86b5fu); f_11a8c610();
  /* 11a86b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86b62 push eax */
  push32((uint32_t)(EAX));
  /* 11a86b63 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11a86b69 push eax */
  push32((uint32_t)(EAX));
  /* 11a86b6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a86b6d mov edx, dword ptr [ecx*4 + 0x11ab7a88] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ab7a88)));
  /* 11a86b74 push edx */
  push32((uint32_t)(EDX));
  /* 11a86b75 call dword ptr [0x11abc390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc390))), 0x11a86b7bu);
L_11a86b7b:;
  /* 11a86b7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a86b7e mov ecx, dword ptr [eax*4 + 0x11ab7a7c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11ab7a7c)));
  /* 11a86b85 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11a86b88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a86b8a je 0x11a86b99 */
  if (C.zf) goto L_11a86b99;
  /* 11a86b8c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11a86b92 push edx */
  push32((uint32_t)(EDX));
  /* 11a86b93 call dword ptr [0x11abc398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc398))), 0x11a86b99u);
L_11a86b99:;
  /* 11a86b99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a86b9c mov ecx, dword ptr [eax*4 + 0x11ab7a7c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11ab7a7c)));
  /* 11a86ba3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11a86ba6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a86ba8 je 0x11a86c18 */
  if (C.zf) goto L_11a86c18;
  /* 11a86baa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86bae je 0x11a86bcd */
  if (C.zf) goto L_11a86bcd;
  /* 11a86bb0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a86bb2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11a86bb8 push edx */
  push32((uint32_t)(EDX));
  /* 11a86bb9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a86bbc push eax */
  push32((uint32_t)(EAX));
  /* 11a86bbd call 0x11a8c320 */
  push32(0x11a86bc2u); f_11a8c320();
  /* 11a86bc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86bc5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 11a86bcb jmp 0x11a86bd7 */
  goto L_11a86bd7;
L_11a86bcd:;
  /* 11a86bcd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11a86bd7:;
  /* 11a86bd7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 11a86bdd push ecx */
  push32((uint32_t)(ECX));
  /* 11a86bde mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a86be1 push edx */
  push32((uint32_t)(EDX));
  /* 11a86be2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11a86be8 push eax */
  push32((uint32_t)(EAX));
  /* 11a86be9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a86bec push ecx */
  push32((uint32_t)(ECX));
  /* 11a86bed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a86bf0 push edx */
  push32((uint32_t)(EDX));
  /* 11a86bf1 call 0x11a86c30 */
  push32(0x11a86bf6u); f_11a86c30();
  /* 11a86bf6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86bf9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 11a86bff cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86c03 jne 0x11a86c10 */
  if (!C.zf) goto L_11a86c10;
  /* 11a86c05 push 0x11ab7a78 */
  push32((uint32_t)(0x11ab7a78u));
  /* 11a86c0a call dword ptr [0x11abc394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc394))), 0x11a86c10u);
L_11a86c10:;
  /* 11a86c10 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11a86c16 jmp 0x11a86c2b */
  goto L_11a86c2b;
L_11a86c18:;
  /* 11a86c18 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86c1c jne 0x11a86c29 */
  if (!C.zf) goto L_11a86c29;
  /* 11a86c1e push 0x11ab7a78 */
  push32((uint32_t)(0x11ab7a78u));
  /* 11a86c23 call dword ptr [0x11abc394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc394))), 0x11a86c29u);
L_11a86c29:;
  /* 11a86c29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a86c2b:;
  /* 11a86c2b pop edi */
  EDI = (pop32());
  /* 11a86c2c mov esp, ebp */
  ESP = (EBP);
  /* 11a86c2e pop ebp */
  EBP = (pop32());
  /* 11a86c2f ret  */
  ESPCHK(0x11a868a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c30 @ 0x11a86c30 (780 bytes, 197 insns) */
void f_11a86c30(void) {
  FTRACE(0x11a86c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a86c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11a86c31 mov ebp, esp */
  EBP = (ESP);
  /* 11a86c33 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11a86c38 call 0x11a8c980 */
  push32(0x11a86c3du); f_11a8c980();
L_11a86c3d:;
  /* 11a86c3d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86c41 jne 0x11a86c68 */
  if (!C.zf) goto L_11a86c68;
  /* 11a86c43 push 0x11ab463c */
  push32((uint32_t)(0x11ab463cu));
  /* 11a86c48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a86c4a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 11a86c4f push 0x11ab4630 */
  push32((uint32_t)(0x11ab4630u));
  /* 11a86c54 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a86c56 call 0x11a868a0 */
  push32(0x11a86c5bu); f_11a868a0();
  /* 11a86c5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86c5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86c61 jne 0x11a86c68 */
  if (!C.zf) goto L_11a86c68;
  /* 11a86c63 call 0x11a86790 */
  push32(0x11a86c68u); f_11a86790();
L_11a86c68:;
  /* 11a86c68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a86c6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a86c6c jne 0x11a86c3d */
  if (!C.zf) goto L_11a86c3d;
  /* 11a86c6e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11a86c73 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 11a86c79 push ecx */
  push32((uint32_t)(ECX));
  /* 11a86c7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a86c7c call dword ptr [0x11abc3a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3a8))), 0x11a86c82u);
  /* 11a86c82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a86c84 jne 0x11a86c9a */
  if (!C.zf) goto L_11a86c9a;
  /* 11a86c86 push 0x11ab4618 */
  push32((uint32_t)(0x11ab4618u));
  /* 11a86c8b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11a86c91 push edx */
  push32((uint32_t)(EDX));
  /* 11a86c92 call 0x11a8c790 */
  push32(0x11a86c97u); f_11a8c790();
  /* 11a86c97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a86c9a:;
  /* 11a86c9a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11a86ca0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a86ca3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a86ca6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a86ca7 call 0x11a8c610 */
  push32(0x11a86cacu); f_11a8c610();
  /* 11a86cac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86caf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86cb2 jbe 0x11a86cdd */
  if ((C.cf||C.zf)) goto L_11a86cdd;
  /* 11a86cb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a86cb7 push edx */
  push32((uint32_t)(EDX));
  /* 11a86cb8 call 0x11a8c610 */
  push32(0x11a86cbdu); f_11a8c610();
  /* 11a86cbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86cc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a86cc3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11a86cc7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a86cca push 3 */
  push32((uint32_t)(0x3u));
  /* 11a86ccc push 0x11ab4614 */
  push32((uint32_t)(0x11ab4614u));
  /* 11a86cd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a86cd4 push eax */
  push32((uint32_t)(EAX));
  /* 11a86cd5 call 0x11a8d000 */
  push32(0x11a86cdau); f_11a8d000();
  /* 11a86cda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a86cdd:;
  /* 11a86cdd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a86ce0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11a86ce6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86ced je 0x11a86d38 */
  if (C.zf) goto L_11a86d38;
  /* 11a86cef mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11a86cf5 push edx */
  push32((uint32_t)(EDX));
  /* 11a86cf6 call 0x11a8c610 */
  push32(0x11a86cfbu); f_11a8c610();
  /* 11a86cfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86cfe cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86d01 jbe 0x11a86d38 */
  if ((C.cf||C.zf)) goto L_11a86d38;
  /* 11a86d03 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11a86d09 push eax */
  push32((uint32_t)(EAX));
  /* 11a86d0a call 0x11a8c610 */
  push32(0x11a86d0fu); f_11a8c610();
  /* 11a86d0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86d12 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11a86d18 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11a86d1c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11a86d22 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a86d24 push 0x11ab4614 */
  push32((uint32_t)(0x11ab4614u));
  /* 11a86d29 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11a86d2f push eax */
  push32((uint32_t)(EAX));
  /* 11a86d30 call 0x11a8d000 */
  push32(0x11a86d35u); f_11a8d000();
  /* 11a86d35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a86d38:;
  /* 11a86d38 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86d3c jne 0x11a86d4a */
  if (!C.zf) goto L_11a86d4a;
  /* 11a86d3e mov dword ptr [ebp - 0x1114], 0x11ab45a0 */
  w32((uint32_t)(EBP + -0x1114), (0x11ab45a0u));
  /* 11a86d48 jmp 0x11a86d54 */
  goto L_11a86d54;
L_11a86d4a:;
  /* 11a86d4a mov dword ptr [ebp - 0x1114], 0x11ab4314 */
  w32((uint32_t)(EBP + -0x1114), (0x11ab4314u));
L_11a86d54:;
  /* 11a86d54 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a86d57 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a86d5a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a86d5c je 0x11a86d69 */
  if (C.zf) goto L_11a86d69;
  /* 11a86d5e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a86d61 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11a86d67 jmp 0x11a86d73 */
  goto L_11a86d73;
L_11a86d69:;
  /* 11a86d69 mov dword ptr [ebp - 0x1118], 0x11ab4314 */
  w32((uint32_t)(EBP + -0x1118), (0x11ab4314u));
L_11a86d73:;
  /* 11a86d73 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a86d76 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a86d79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a86d7b je 0x11a86d8f */
  if (C.zf) goto L_11a86d8f;
  /* 11a86d7d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86d81 jne 0x11a86d8f */
  if (!C.zf) goto L_11a86d8f;
  /* 11a86d83 mov dword ptr [ebp - 0x111c], 0x11ab4590 */
  w32((uint32_t)(EBP + -0x111c), (0x11ab4590u));
  /* 11a86d8d jmp 0x11a86d99 */
  goto L_11a86d99;
L_11a86d8f:;
  /* 11a86d8f mov dword ptr [ebp - 0x111c], 0x11ab4314 */
  w32((uint32_t)(EBP + -0x111c), (0x11ab4314u));
L_11a86d99:;
  /* 11a86d99 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a86d9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a86d9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a86da1 je 0x11a86daf */
  if (C.zf) goto L_11a86daf;
  /* 11a86da3 mov dword ptr [ebp - 0x1120], 0x11ab458c */
  w32((uint32_t)(EBP + -0x1120), (0x11ab458cu));
  /* 11a86dad jmp 0x11a86db9 */
  goto L_11a86db9;
L_11a86daf:;
  /* 11a86daf mov dword ptr [ebp - 0x1120], 0x11ab4314 */
  w32((uint32_t)(EBP + -0x1120), (0x11ab4314u));
L_11a86db9:;
  /* 11a86db9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86dbd je 0x11a86dca */
  if (C.zf) goto L_11a86dca;
  /* 11a86dbf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a86dc2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11a86dc8 jmp 0x11a86dd4 */
  goto L_11a86dd4;
L_11a86dca:;
  /* 11a86dca mov dword ptr [ebp - 0x1124], 0x11ab4314 */
  w32((uint32_t)(EBP + -0x1124), (0x11ab4314u));
L_11a86dd4:;
  /* 11a86dd4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86dd8 je 0x11a86de6 */
  if (C.zf) goto L_11a86de6;
  /* 11a86dda mov dword ptr [ebp - 0x1128], 0x11ab4584 */
  w32((uint32_t)(EBP + -0x1128), (0x11ab4584u));
  /* 11a86de4 jmp 0x11a86df0 */
  goto L_11a86df0;
L_11a86de6:;
  /* 11a86de6 mov dword ptr [ebp - 0x1128], 0x11ab4314 */
  w32((uint32_t)(EBP + -0x1128), (0x11ab4314u));
L_11a86df0:;
  /* 11a86df0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86df4 je 0x11a86e01 */
  if (C.zf) goto L_11a86e01;
  /* 11a86df6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a86df9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11a86dff jmp 0x11a86e0b */
  goto L_11a86e0b;
L_11a86e01:;
  /* 11a86e01 mov dword ptr [ebp - 0x112c], 0x11ab4314 */
  w32((uint32_t)(EBP + -0x112c), (0x11ab4314u));
L_11a86e0b:;
  /* 11a86e0b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86e0f je 0x11a86e1d */
  if (C.zf) goto L_11a86e1d;
  /* 11a86e11 mov dword ptr [ebp - 0x1130], 0x11ab457c */
  w32((uint32_t)(EBP + -0x1130), (0x11ab457cu));
  /* 11a86e1b jmp 0x11a86e27 */
  goto L_11a86e27;
L_11a86e1d:;
  /* 11a86e1d mov dword ptr [ebp - 0x1130], 0x11ab4314 */
  w32((uint32_t)(EBP + -0x1130), (0x11ab4314u));
L_11a86e27:;
  /* 11a86e27 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86e2e je 0x11a86e3e */
  if (C.zf) goto L_11a86e3e;
  /* 11a86e30 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11a86e36 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11a86e3c jmp 0x11a86e48 */
  goto L_11a86e48;
L_11a86e3e:;
  /* 11a86e3e mov dword ptr [ebp - 0x1134], 0x11ab4314 */
  w32((uint32_t)(EBP + -0x1134), (0x11ab4314u));
L_11a86e48:;
  /* 11a86e48 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86e4f je 0x11a86e5d */
  if (C.zf) goto L_11a86e5d;
  /* 11a86e51 mov dword ptr [ebp - 0x1138], 0x11ab4570 */
  w32((uint32_t)(EBP + -0x1138), (0x11ab4570u));
  /* 11a86e5b jmp 0x11a86e67 */
  goto L_11a86e67;
L_11a86e5d:;
  /* 11a86e5d mov dword ptr [ebp - 0x1138], 0x11ab4314 */
  w32((uint32_t)(EBP + -0x1138), (0x11ab4314u));
L_11a86e67:;
  /* 11a86e67 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11a86e6d push edx */
  push32((uint32_t)(EDX));
  /* 11a86e6e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11a86e74 push eax */
  push32((uint32_t)(EAX));
  /* 11a86e75 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11a86e7b push ecx */
  push32((uint32_t)(ECX));
  /* 11a86e7c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11a86e82 push edx */
  push32((uint32_t)(EDX));
  /* 11a86e83 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11a86e89 push eax */
  push32((uint32_t)(EAX));
  /* 11a86e8a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11a86e90 push ecx */
  push32((uint32_t)(ECX));
  /* 11a86e91 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11a86e97 push edx */
  push32((uint32_t)(EDX));
  /* 11a86e98 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11a86e9e push eax */
  push32((uint32_t)(EAX));
  /* 11a86e9f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11a86ea5 push ecx */
  push32((uint32_t)(ECX));
  /* 11a86ea6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11a86eac push edx */
  push32((uint32_t)(EDX));
  /* 11a86ead mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a86eb0 push eax */
  push32((uint32_t)(EAX));
  /* 11a86eb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a86eb4 mov edx, dword ptr [ecx*4 + 0x11ab7a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ab7a94)));
  /* 11a86ebb push edx */
  push32((uint32_t)(EDX));
  /* 11a86ebc push 0x11ab451c */
  push32((uint32_t)(0x11ab451cu));
  /* 11a86ec1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a86ec6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11a86ecc push eax */
  push32((uint32_t)(EAX));
  /* 11a86ecd call 0x11a8c690 */
  push32(0x11a86ed2u); f_11a8c690();
  /* 11a86ed2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86ed5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a86ed7 jge 0x11a86eed */
  if ((C.sf==C.of)) goto L_11a86eed;
  /* 11a86ed9 push 0x11ab4480 */
  push32((uint32_t)(0x11ab4480u));
  /* 11a86ede lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11a86ee4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a86ee5 call 0x11a8c790 */
  push32(0x11a86eeau); f_11a8c790();
  /* 11a86eea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a86eed:;
  /* 11a86eed push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11a86ef2 push 0x11ab44f8 */
  push32((uint32_t)(0x11ab44f8u));
  /* 11a86ef7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11a86efd push edx */
  push32((uint32_t)(EDX));
  /* 11a86efe call 0x11a8cf40 */
  push32(0x11a86f03u); f_11a8cf40();
  /* 11a86f03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86f06 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11a86f0c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86f13 jne 0x11a86f26 */
  if (!C.zf) goto L_11a86f26;
  /* 11a86f15 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11a86f17 call 0x11a8cc80 */
  push32(0x11a86f1cu); f_11a8cc80();
  /* 11a86f1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86f1f push 3 */
  push32((uint32_t)(0x3u));
  /* 11a86f21 call 0x11a88fa0 */
  push32(0x11a86f26u); f_11a88fa0();
L_11a86f26:;
  /* 11a86f26 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86f2d jne 0x11a86f36 */
  if (!C.zf) goto L_11a86f36;
  /* 11a86f2f mov eax, 1 */
  EAX = (0x1u);
  /* 11a86f34 jmp 0x11a86f38 */
  goto L_11a86f38;
L_11a86f36:;
  /* 11a86f36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a86f38:;
  /* 11a86f38 mov esp, ebp */
  ESP = (EBP);
  /* 11a86f3a pop ebp */
  EBP = (pop32());
  /* 11a86f3b ret  */
  ESPCHK(0x11a86c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f40 @ 0x11a86f40 (628 bytes, 214 insns) */
void f_11a86f40(void) {
  FTRACE(0x11a86f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a86f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11a86f41 mov ebp, esp */
  EBP = (ESP);
  /* 11a86f43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a86f46 push ebx */
  push32((uint32_t)(EBX));
  /* 11a86f47 push esi */
  push32((uint32_t)(ESI));
  /* 11a86f48 push edi */
  push32((uint32_t)(EDI));
L_11a86f49:;
  /* 11a86f49 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86f4d jne 0x11a86f6d */
  if (!C.zf) goto L_11a86f6d;
  /* 11a86f4f push 0x11ab46a0 */
  push32((uint32_t)(0x11ab46a0u));
  /* 11a86f54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a86f56 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 11a86f58 push 0x11ab4694 */
  push32((uint32_t)(0x11ab4694u));
  /* 11a86f5d push 2 */
  push32((uint32_t)(0x2u));
  /* 11a86f5f call 0x11a868a0 */
  push32(0x11a86f64u); f_11a868a0();
  /* 11a86f64 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a86f67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a86f6a jne 0x11a86f6d */
  if (!C.zf) goto L_11a86f6d;
  /* 11a86f6c int3  */
  x86_unimpl("int3 @ 0x11a86f6c");
L_11a86f6d:;
  /* 11a86f6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a86f6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a86f71 jne 0x11a86f49 */
  if (!C.zf) goto L_11a86f49;
  /* 11a86f73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a86f76 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a86f79 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a86f7c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11a86f7f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a86f82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a86f85 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a86f88 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 11a86f8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a86f90 je 0x11a86f9f */
  if (C.zf) goto L_11a86f9f;
  /* 11a86f92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a86f95 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11a86f98 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11a86f9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a86f9d je 0x11a86fb5 */
  if (C.zf) goto L_11a86fb5;
L_11a86f9f:;
  /* 11a86f9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a86fa2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11a86fa5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11a86fa7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a86faa mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11a86fad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a86fb0 jmp 0x11a871ad */
  goto L_11a871ad;
L_11a86fb5:;
  /* 11a86fb5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a86fb8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11a86fbb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11a86fbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a86fc0 je 0x11a8700c */
  if (C.zf) goto L_11a8700c;
  /* 11a86fc2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a86fc5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11a86fcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a86fcf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11a86fd2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11a86fd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a86fd7 je 0x11a86ff5 */
  if (C.zf) goto L_11a86ff5;
  /* 11a86fd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a86fdc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a86fdf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a86fe2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a86fe4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a86fe7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a86fea and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 11a86fed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a86ff0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11a86ff3 jmp 0x11a8700c */
  goto L_11a8700c;
L_11a86ff5:;
  /* 11a86ff5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a86ff8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a86ffb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11a86ffe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a87001 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11a87004 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a87007 jmp 0x11a871ad */
  goto L_11a871ad;
L_11a8700c:;
  /* 11a8700c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8700f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a87012 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11a87015 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a87018 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11a8701b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8701e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a87021 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11a87024 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a87027 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11a8702a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8702d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11a87034 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a8703b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8703e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a87041 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a87044 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11a87047 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8704d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8704f jne 0x11a8707f */
  if (!C.zf) goto L_11a8707f;
  /* 11a87051 cmp dword ptr [ebp - 8], 0x11ab7c60 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11ab7c60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87058 je 0x11a87063 */
  if (C.zf) goto L_11a87063;
  /* 11a8705a cmp dword ptr [ebp - 8], 0x11ab7c80 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11ab7c80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87061 jne 0x11a87073 */
  if (!C.zf) goto L_11a87073;
L_11a87063:;
  /* 11a87063 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a87066 push edx */
  push32((uint32_t)(EDX));
  /* 11a87067 call 0x11a8d630 */
  push32(0x11a8706cu); f_11a8d630();
  /* 11a8706c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8706f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a87071 jne 0x11a8707f */
  if (!C.zf) goto L_11a8707f;
L_11a87073:;
  /* 11a87073 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a87076 push eax */
  push32((uint32_t)(EAX));
  /* 11a87077 call 0x11a8d560 */
  push32(0x11a8707cu); f_11a8d560();
  /* 11a8707c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8707f:;
  /* 11a8707f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a87082 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a87085 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8708b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8708d je 0x11a8716b */
  if (C.zf) goto L_11a8716b;
L_11a87093:;
  /* 11a87093 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a87096 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a87099 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11a8709b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8709e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a870a0 jge 0x11a870c3 */
  if ((C.sf==C.of)) goto L_11a870c3;
  /* 11a870a2 push 0x11ab4654 */
  push32((uint32_t)(0x11ab4654u));
  /* 11a870a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a870a9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11a870ae push 0x11ab4694 */
  push32((uint32_t)(0x11ab4694u));
  /* 11a870b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a870b5 call 0x11a868a0 */
  push32(0x11a870bau); f_11a868a0();
  /* 11a870ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a870bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a870c0 jne 0x11a870c3 */
  if (!C.zf) goto L_11a870c3;
  /* 11a870c2 int3  */
  x86_unimpl("int3 @ 0x11a870c2");
L_11a870c3:;
  /* 11a870c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a870c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a870c7 jne 0x11a87093 */
  if (!C.zf) goto L_11a87093;
  /* 11a870c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a870cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a870cf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a870d1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a870d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a870d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a870da mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a870dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a870e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a870e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a870e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a870e8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11a870eb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a870ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a870f1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11a870f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a870f8 jle 0x11a87116 */
  if ((C.zf||C.sf!=C.of)) goto L_11a87116;
  /* 11a870fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a870fd push ecx */
  push32((uint32_t)(ECX));
  /* 11a870fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a87101 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a87104 push eax */
  push32((uint32_t)(EAX));
  /* 11a87105 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a87108 push ecx */
  push32((uint32_t)(ECX));
  /* 11a87109 call 0x11a8d250 */
  push32(0x11a8710eu); f_11a8d250();
  /* 11a8710e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87111 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a87114 jmp 0x11a8715e */
  goto L_11a8715e;
L_11a87116:;
  /* 11a87116 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8711a je 0x11a87139 */
  if (C.zf) goto L_11a87139;
  /* 11a8711c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8711f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11a87122 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a87125 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a87128 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8712b mov ecx, dword ptr [edx*4 + 0x11abba80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11abba80)));
  /* 11a87132 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87134 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a87137 jmp 0x11a87140 */
  goto L_11a87140;
L_11a87139:;
  /* 11a87139 mov dword ptr [ebp - 0x14], 0x11ab7b58 */
  w32((uint32_t)(EBP + -0x14), (0x11ab7b58u));
L_11a87140:;
  /* 11a87140 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a87143 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 11a87147 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8714a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8714c je 0x11a8715e */
  if (C.zf) goto L_11a8715e;
  /* 11a8714e push 2 */
  push32((uint32_t)(0x2u));
  /* 11a87150 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a87152 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a87155 push ecx */
  push32((uint32_t)(ECX));
  /* 11a87156 call 0x11a8d100 */
  push32(0x11a8715bu); f_11a8d100();
  /* 11a8715b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8715e:;
  /* 11a8715e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a87161 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a87164 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11a87167 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11a87169 jmp 0x11a87189 */
  goto L_11a87189;
L_11a8716b:;
  /* 11a8716b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a87172 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87175 push edx */
  push32((uint32_t)(EDX));
  /* 11a87176 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11a87179 push eax */
  push32((uint32_t)(EAX));
  /* 11a8717a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8717d push ecx */
  push32((uint32_t)(ECX));
  /* 11a8717e call 0x11a8d250 */
  push32(0x11a87183u); f_11a8d250();
  /* 11a87183 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87186 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11a87189:;
  /* 11a87189 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8718c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8718f je 0x11a871a5 */
  if (C.zf) goto L_11a871a5;
  /* 11a87191 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a87194 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11a87197 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8719a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8719d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11a871a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a871a3 jmp 0x11a871ad */
  goto L_11a871ad;
L_11a871a5:;
  /* 11a871a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a871a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_11a871ad:;
  /* 11a871ad pop edi */
  EDI = (pop32());
  /* 11a871ae pop esi */
  ESI = (pop32());
  /* 11a871af pop ebx */
  EBX = (pop32());
  /* 11a871b0 mov esp, ebp */
  ESP = (EBP);
  /* 11a871b2 pop ebp */
  EBP = (pop32());
  /* 11a871b3 ret  */
  ESPCHK(0x11a86f40u, _esp0);
  ESP += 4; return;
}

/* FUN_100071c0 @ 0x11a871c0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_11a871c0(void) {
  FTRACE(0x11a871c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a871c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a871c1 mov ebp, esp */
  EBP = (ESP);
  /* 11a871c3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a871c9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a871ca push esi */
  push32((uint32_t)(ESI));
  /* 11a871cb push edi */
  push32((uint32_t)(EDI));
  /* 11a871cc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11a871d3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 11a871dd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11a871e4:;
  /* 11a871e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a871e7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a871e9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11a871ec movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11a871f0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a871f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a871f6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11a871f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a871fb je 0x11a87dd7 */
  if (C.zf) goto L_11a87dd7;
  /* 11a87201 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87208 jl 0x11a87dd7 */
  if ((C.sf!=C.of)) goto L_11a87dd7;
  /* 11a8720e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11a87212 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87215 jl 0x11a87236 */
  if ((C.sf!=C.of)) goto L_11a87236;
  /* 11a87217 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11a8721b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8721e jg 0x11a87236 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a87236;
  /* 11a87220 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11a87224 movsx ecx, byte ptr [eax + 0x11ab468c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x11ab468c))));
  /* 11a8722b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8722e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 11a87234 jmp 0x11a87240 */
  goto L_11a87240;
L_11a87236:;
  /* 11a87236 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_11a87240:;
  /* 11a87240 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 11a87246 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a87249 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8724c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8724f movsx edx, byte ptr [ecx + eax*8 + 0x11ab46ac] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x11ab46ac))));
  /* 11a87257 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11a8725a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11a8725d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a87260 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 11a87266 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8726d ja 0x11a87dd2 */
  if ((!C.cf&&!C.zf)) goto L_11a87dd2;
  /* 11a87273 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 11a87279 jmp dword ptr [ecx*4 + 0x11a87de4] */
  switch (ECX) {
    case 0: goto L_11a87280;
    case 1: goto L_11a8731a;
    case 2: goto L_11a8735c;
    case 3: goto L_11a873cb;
    case 4: goto L_11a87423;
    case 5: goto L_11a87432;
    case 6: goto L_11a8747e;
    case 7: goto L_11a87511;
    case 8: goto L_11a873a8;
    case 9: goto L_11a873b3;
    case 10: goto L_11a8739e;
    case 11: goto L_11a87393;
    case 12: goto L_11a873be;
    case 13: goto L_11a873c6;
    default: x86_unimpl("switch@0x11a87279 out of table"); return;
  }
L_11a87280:;
  /* 11a87280 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11a87287 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a8728a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a87290 mov eax, dword ptr [0x11ab7ec0] */
  EAX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a87295 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a87297 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11a8729b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11a872a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a872a3 je 0x11a872fd */
  if (C.zf) goto L_11a872fd;
  /* 11a872a5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 11a872ab push edx */
  push32((uint32_t)(EDX));
  /* 11a872ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a872af push eax */
  push32((uint32_t)(EAX));
  /* 11a872b0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11a872b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a872b5 call 0x11a87ef0 */
  push32(0x11a872bau); f_11a87ef0();
  /* 11a872ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a872bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a872c0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a872c2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 11a872c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a872c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a872cb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11a872ce:;
  /* 11a872ce movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11a872d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a872d4 jne 0x11a872f7 */
  if (!C.zf) goto L_11a872f7;
  /* 11a872d6 push 0x11ab472c */
  push32((uint32_t)(0x11ab472cu));
  /* 11a872db push 0 */
  push32((uint32_t)(0x0u));
  /* 11a872dd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 11a872e2 push 0x11ab4720 */
  push32((uint32_t)(0x11ab4720u));
  /* 11a872e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a872e9 call 0x11a868a0 */
  push32(0x11a872eeu); f_11a868a0();
  /* 11a872ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a872f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a872f4 jne 0x11a872f7 */
  if (!C.zf) goto L_11a872f7;
  /* 11a872f6 int3  */
  x86_unimpl("int3 @ 0x11a872f6");
L_11a872f7:;
  /* 11a872f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a872f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a872fb jne 0x11a872ce */
  if (!C.zf) goto L_11a872ce;
L_11a872fd:;
  /* 11a872fd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11a87303 push ecx */
  push32((uint32_t)(ECX));
  /* 11a87304 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a87307 push edx */
  push32((uint32_t)(EDX));
  /* 11a87308 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11a8730c push eax */
  push32((uint32_t)(EAX));
  /* 11a8730d call 0x11a87ef0 */
  push32(0x11a87312u); f_11a87ef0();
  /* 11a87312 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87315 jmp 0x11a87dd2 */
  goto L_11a87dd2;
L_11a8731a:;
  /* 11a8731a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a87321 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a87324 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 11a8732a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 11a87330 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 11a87336 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 11a8733c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a8733f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a87346 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 11a87350 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11a87357 jmp 0x11a87dd2 */
  goto L_11a87dd2;
L_11a8735c:;
  /* 11a8735c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11a87360 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 11a87366 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 11a8736c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8736f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 11a87375 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8737c ja 0x11a873c6 */
  if ((!C.cf&&!C.zf)) goto L_11a873c6;
  /* 11a8737e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 11a87384 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a87386 mov al, byte ptr [ecx + 0x11a87e1c] */
  AL = (r8((uint32_t)(ECX + 0x11a87e1c)));
  /* 11a8738c jmp dword ptr [eax*4 + 0x11a87e04] */
  switch (EAX) {
    case 0: goto L_11a873a8;
    case 1: goto L_11a873b3;
    case 2: goto L_11a8739e;
    case 3: goto L_11a87393;
    case 4: goto L_11a873be;
    case 5: goto L_11a873c6;
    default: x86_unimpl("switch@0x11a8738c out of table"); return;
  }
L_11a87393:;
  /* 11a87393 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87396 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11a87399 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a8739c jmp 0x11a873c6 */
  goto L_11a873c6;
L_11a8739e:;
  /* 11a8739e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a873a1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11a873a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a873a6 jmp 0x11a873c6 */
  goto L_11a873c6;
L_11a873a8:;
  /* 11a873a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a873ab or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11a873ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a873b1 jmp 0x11a873c6 */
  goto L_11a873c6;
L_11a873b3:;
  /* 11a873b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a873b6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 11a873b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a873bc jmp 0x11a873c6 */
  goto L_11a873c6;
L_11a873be:;
  /* 11a873be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a873c1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11a873c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a873c6:;
  /* 11a873c6 jmp 0x11a87dd2 */
  goto L_11a87dd2;
L_11a873cb:;
  /* 11a873cb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11a873cf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a873d2 jne 0x11a87407 */
  if (!C.zf) goto L_11a87407;
  /* 11a873d4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11a873d7 push edx */
  push32((uint32_t)(EDX));
  /* 11a873d8 call 0x11a88000 */
  push32(0x11a873ddu); f_11a88000();
  /* 11a873dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a873e0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 11a873e6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a873ed jge 0x11a87405 */
  if ((C.sf==C.of)) goto L_11a87405;
  /* 11a873ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a873f2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11a873f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a873f7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11a873fd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a873ff mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11a87405:;
  /* 11a87405 jmp 0x11a8741e */
  goto L_11a8741e;
L_11a87407:;
  /* 11a87407 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 11a8740d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a87410 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11a87414 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 11a87418 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11a8741e:;
  /* 11a8741e jmp 0x11a87dd2 */
  goto L_11a87dd2;
L_11a87423:;
  /* 11a87423 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 11a8742d jmp 0x11a87dd2 */
  goto L_11a87dd2;
L_11a87432:;
  /* 11a87432 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11a87436 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87439 jne 0x11a87462 */
  if (!C.zf) goto L_11a87462;
  /* 11a8743b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11a8743e push eax */
  push32((uint32_t)(EAX));
  /* 11a8743f call 0x11a88000 */
  push32(0x11a87444u); f_11a88000();
  /* 11a87444 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87447 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11a8744d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87454 jge 0x11a87460 */
  if ((C.sf==C.of)) goto L_11a87460;
  /* 11a87456 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_11a87460:;
  /* 11a87460 jmp 0x11a87479 */
  goto L_11a87479;
L_11a87462:;
  /* 11a87462 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 11a87468 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8746b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11a8746f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11a87473 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_11a87479:;
  /* 11a87479 jmp 0x11a87dd2 */
  goto L_11a87dd2;
L_11a8747e:;
  /* 11a8747e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11a87482 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 11a87488 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11a8748e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a87491 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 11a87497 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8749e ja 0x11a8750c */
  if ((!C.cf&&!C.zf)) goto L_11a8750c;
  /* 11a874a0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11a874a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a874a8 mov al, byte ptr [ecx + 0x11a87e41] */
  AL = (r8((uint32_t)(ECX + 0x11a87e41)));
  /* 11a874ae jmp dword ptr [eax*4 + 0x11a87e2d] */
  switch (EAX) {
    case 0: goto L_11a874c0;
    case 1: goto L_11a874f9;
    case 2: goto L_11a874b5;
    case 3: goto L_11a87503;
    case 4: goto L_11a8750c;
    default: x86_unimpl("switch@0x11a874ae out of table"); return;
  }
L_11a874b5:;
  /* 11a874b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a874b8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11a874bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a874be jmp 0x11a8750c */
  goto L_11a8750c;
L_11a874c0:;
  /* 11a874c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a874c3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a874c6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a874c9 jne 0x11a874eb */
  if (!C.zf) goto L_11a874eb;
  /* 11a874cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a874ce movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11a874d2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a874d5 jne 0x11a874eb */
  if (!C.zf) goto L_11a874eb;
  /* 11a874d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a874da add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a874dd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11a874e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a874e3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11a874e6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a874e9 jmp 0x11a874f7 */
  goto L_11a874f7;
L_11a874eb:;
  /* 11a874eb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11a874f2 jmp 0x11a87280 */
  goto L_11a87280;
L_11a874f7:;
  /* 11a874f7 jmp 0x11a8750c */
  goto L_11a8750c;
L_11a874f9:;
  /* 11a874f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a874fc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11a874fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a87501 jmp 0x11a8750c */
  goto L_11a8750c;
L_11a87503:;
  /* 11a87503 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87506 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11a87509 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a8750c:;
  /* 11a8750c jmp 0x11a87dd2 */
  goto L_11a87dd2;
L_11a87511:;
  /* 11a87511 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11a87515 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 11a8751b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11a87521 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a87524 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 11a8752a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87531 ja 0x11a87bf7 */
  if ((!C.cf&&!C.zf)) goto L_11a87bf7;
  /* 11a87537 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11a8753d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8753f mov cl, byte ptr [edx + 0x11a87eac] */
  CL = (r8((uint32_t)(EDX + 0x11a87eac)));
  /* 11a87545 jmp dword ptr [ecx*4 + 0x11a87e70] */
  switch (ECX) {
    case 0: goto L_11a8754c;
    case 1: goto L_11a877e0;
    case 2: goto L_11a87670;
    case 3: goto L_11a87919;
    case 4: goto L_11a875db;
    case 5: goto L_11a87561;
    case 6: goto L_11a878eb;
    case 7: goto L_11a877f0;
    case 8: goto L_11a87795;
    case 9: goto L_11a87965;
    case 10: goto L_11a8790f;
    case 11: goto L_11a87686;
    case 12: goto L_11a87903;
    case 13: goto L_11a87925;
    case 14: goto L_11a87bf7;
    default: x86_unimpl("switch@0x11a87545 out of table"); return;
  }
L_11a8754c:;
  /* 11a8754c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8754f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 11a87554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a87556 jne 0x11a87561 */
  if (!C.zf) goto L_11a87561;
  /* 11a87558 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8755b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11a8755e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a87561:;
  /* 11a87561 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87564 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8756a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8756c je 0x11a875a7 */
  if (C.zf) goto L_11a875a7;
  /* 11a8756e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11a87571 push eax */
  push32((uint32_t)(EAX));
  /* 11a87572 call 0x11a88040 */
  push32(0x11a87577u); f_11a88040();
  /* 11a87577 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8757a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 11a8757e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11a87582 push ecx */
  push32((uint32_t)(ECX));
  /* 11a87583 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11a87589 push edx */
  push32((uint32_t)(EDX));
  /* 11a8758a call 0x11a8d8a0 */
  push32(0x11a8758fu); f_11a8d8a0();
  /* 11a8758f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87592 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a87595 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87599 jge 0x11a875a5 */
  if ((C.sf==C.of)) goto L_11a875a5;
  /* 11a8759b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_11a875a5:;
  /* 11a875a5 jmp 0x11a875cd */
  goto L_11a875cd;
L_11a875a7:;
  /* 11a875a7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11a875aa push eax */
  push32((uint32_t)(EAX));
  /* 11a875ab call 0x11a88000 */
  push32(0x11a875b0u); f_11a88000();
  /* 11a875b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a875b3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 11a875ba mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 11a875c0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 11a875c6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_11a875cd:;
  /* 11a875cd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11a875d3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11a875d6 jmp 0x11a87bf7 */
  goto L_11a87bf7;
L_11a875db:;
  /* 11a875db lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11a875de push eax */
  push32((uint32_t)(EAX));
  /* 11a875df call 0x11a88000 */
  push32(0x11a875e4u); f_11a88000();
  /* 11a875e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a875e7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 11a875ed cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a875f4 je 0x11a87602 */
  if (C.zf) goto L_11a87602;
  /* 11a875f6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11a875fc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87600 jne 0x11a8761c */
  if (!C.zf) goto L_11a8761c;
L_11a87602:;
  /* 11a87602 mov edx, dword ptr [0x11ab7aa0] */
  EDX = (r32((uint32_t)(0x11ab7aa0)));
  /* 11a87608 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11a8760b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a8760e push eax */
  push32((uint32_t)(EAX));
  /* 11a8760f call 0x11a8c610 */
  push32(0x11a87614u); f_11a8c610();
  /* 11a87614 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87617 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a8761a jmp 0x11a8766b */
  goto L_11a8766b;
L_11a8761c:;
  /* 11a8761c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8761f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 11a87625 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a87627 je 0x11a8764c */
  if (C.zf) goto L_11a8764c;
  /* 11a87629 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11a8762f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a87632 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a87635 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11a8763b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 11a8763e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11a87640 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11a87643 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11a8764a jmp 0x11a8766b */
  goto L_11a8766b;
L_11a8764c:;
  /* 11a8764c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11a87653 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11a87659 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a8765c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11a8765f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11a87665 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 11a87668 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11a8766b:;
  /* 11a8766b jmp 0x11a87bf7 */
  goto L_11a87bf7;
L_11a87670:;
  /* 11a87670 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87673 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 11a87679 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8767b jne 0x11a87686 */
  if (!C.zf) goto L_11a87686;
  /* 11a8767d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87680 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11a87683 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a87686:;
  /* 11a87686 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8768d jne 0x11a8769b */
  if (!C.zf) goto L_11a8769b;
  /* 11a8768f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 11a87699 jmp 0x11a876a7 */
  goto L_11a876a7;
L_11a8769b:;
  /* 11a8769b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11a876a1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_11a876a7:;
  /* 11a876a7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 11a876ad mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11a876b3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11a876b6 push edx */
  push32((uint32_t)(EDX));
  /* 11a876b7 call 0x11a88000 */
  push32(0x11a876bcu); f_11a88000();
  /* 11a876bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a876bf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a876c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a876c5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 11a876ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a876cc je 0x11a87736 */
  if (C.zf) goto L_11a87736;
  /* 11a876ce cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a876d2 jne 0x11a876dd */
  if (!C.zf) goto L_11a876dd;
  /* 11a876d4 mov ecx, dword ptr [0x11ab7aa4] */
  ECX = (r32((uint32_t)(0x11ab7aa4)));
  /* 11a876da mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11a876dd:;
  /* 11a876dd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11a876e4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a876e7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_11a876ed:;
  /* 11a876ed mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11a876f3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 11a876f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a876fc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11a87702 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a87704 je 0x11a87726 */
  if (C.zf) goto L_11a87726;
  /* 11a87706 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11a8770c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8770e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11a87711 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a87713 je 0x11a87726 */
  if (C.zf) goto L_11a87726;
  /* 11a87715 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 11a8771b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8771e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 11a87724 jmp 0x11a876ed */
  goto L_11a876ed;
L_11a87726:;
  /* 11a87726 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11a8772c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8772f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11a87731 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11a87734 jmp 0x11a87790 */
  goto L_11a87790;
L_11a87736:;
  /* 11a87736 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8773a jne 0x11a87744 */
  if (!C.zf) goto L_11a87744;
  /* 11a8773c mov eax, dword ptr [0x11ab7aa0] */
  EAX = (r32((uint32_t)(0x11ab7aa0)));
  /* 11a87741 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11a87744:;
  /* 11a87744 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a87747 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_11a8774d:;
  /* 11a8774d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 11a87753 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11a87759 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8775c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 11a87762 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a87764 je 0x11a87784 */
  if (C.zf) goto L_11a87784;
  /* 11a87766 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11a8776c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a8776f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a87771 je 0x11a87784 */
  if (C.zf) goto L_11a87784;
  /* 11a87773 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 11a87779 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8777c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 11a87782 jmp 0x11a8774d */
  goto L_11a8774d;
L_11a87784:;
  /* 11a87784 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11a8778a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8778d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11a87790:;
  /* 11a87790 jmp 0x11a87bf7 */
  goto L_11a87bf7;
L_11a87795:;
  /* 11a87795 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11a87798 push edx */
  push32((uint32_t)(EDX));
  /* 11a87799 call 0x11a88000 */
  push32(0x11a8779eu); f_11a88000();
  /* 11a8779e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a877a1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 11a877a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a877aa and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11a877ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a877af je 0x11a877c3 */
  if (C.zf) goto L_11a877c3;
  /* 11a877b1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11a877b7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 11a877be mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11a877c1 jmp 0x11a877d1 */
  goto L_11a877d1;
L_11a877c3:;
  /* 11a877c3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11a877c9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11a877cf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11a877d1:;
  /* 11a877d1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 11a877db jmp 0x11a87bf7 */
  goto L_11a87bf7;
L_11a877e0:;
  /* 11a877e0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11a877e7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 11a877ea add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a877ed mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_11a877f0:;
  /* 11a877f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a877f3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11a877f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a877f8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 11a877fe mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11a87801 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87808 jge 0x11a87816 */
  if ((C.sf==C.of)) goto L_11a87816;
  /* 11a8780a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 11a87814 jmp 0x11a87832 */
  goto L_11a87832;
L_11a87816:;
  /* 11a87816 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8781d jne 0x11a87832 */
  if (!C.zf) goto L_11a87832;
  /* 11a8781f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11a87823 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87826 jne 0x11a87832 */
  if (!C.zf) goto L_11a87832;
  /* 11a87828 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_11a87832:;
  /* 11a87832 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a87835 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87838 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11a8783b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8783e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a87841 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a87843 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a87846 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 11a8784c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 11a87852 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a87855 push ecx */
  push32((uint32_t)(ECX));
  /* 11a87856 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11a8785c push edx */
  push32((uint32_t)(EDX));
  /* 11a8785d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11a87861 push eax */
  push32((uint32_t)(EAX));
  /* 11a87862 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a87865 push ecx */
  push32((uint32_t)(ECX));
  /* 11a87866 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 11a8786c push edx */
  push32((uint32_t)(EDX));
  /* 11a8786d call dword ptr [0x11ab7b00] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ab7b00))), 0x11a87873u);
  /* 11a87873 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87876 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87879 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8787e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a87880 je 0x11a87898 */
  if (C.zf) goto L_11a87898;
  /* 11a87882 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87889 jne 0x11a87898 */
  if (!C.zf) goto L_11a87898;
  /* 11a8788b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a8788e push ecx */
  push32((uint32_t)(ECX));
  /* 11a8788f call dword ptr [0x11ab7b0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ab7b0c))), 0x11a87895u);
  /* 11a87895 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a87898:;
  /* 11a87898 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11a8789c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8789f jne 0x11a878ba */
  if (!C.zf) goto L_11a878ba;
  /* 11a878a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a878a4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11a878a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a878ab jne 0x11a878ba */
  if (!C.zf) goto L_11a878ba;
  /* 11a878ad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a878b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a878b1 call dword ptr [0x11ab7b04] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ab7b04))), 0x11a878b7u);
  /* 11a878b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a878ba:;
  /* 11a878ba mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a878bd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a878c0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a878c3 jne 0x11a878d7 */
  if (!C.zf) goto L_11a878d7;
  /* 11a878c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a878c8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11a878cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a878ce mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a878d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a878d4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11a878d7:;
  /* 11a878d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a878da push eax */
  push32((uint32_t)(EAX));
  /* 11a878db call 0x11a8c610 */
  push32(0x11a878e0u); f_11a8c610();
  /* 11a878e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a878e3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a878e6 jmp 0x11a87bf7 */
  goto L_11a87bf7;
L_11a878eb:;
  /* 11a878eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a878ee or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11a878f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a878f4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11a878fe jmp 0x11a87985 */
  goto L_11a87985;
L_11a87903:;
  /* 11a87903 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11a8790d jmp 0x11a87985 */
  goto L_11a87985;
L_11a8790f:;
  /* 11a8790f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_11a87919:;
  /* 11a87919 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 11a87923 jmp 0x11a8792f */
  goto L_11a8792f;
L_11a87925:;
  /* 11a87925 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_11a8792f:;
  /* 11a8792f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 11a87939 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8793c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11a87942 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a87944 je 0x11a87963 */
  if (C.zf) goto L_11a87963;
  /* 11a87946 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 11a8794d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 11a87953 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87956 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 11a8795c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_11a87963:;
  /* 11a87963 jmp 0x11a87985 */
  goto L_11a87985;
L_11a87965:;
  /* 11a87965 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 11a8796f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87972 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11a87978 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8797a je 0x11a87985 */
  if (C.zf) goto L_11a87985;
  /* 11a8797c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8797f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11a87982 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a87985:;
  /* 11a87985 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87988 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8798d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8798f je 0x11a879ae */
  if (C.zf) goto L_11a879ae;
  /* 11a87991 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11a87994 push ecx */
  push32((uint32_t)(ECX));
  /* 11a87995 call 0x11a88020 */
  push32(0x11a8799au); f_11a88020();
  /* 11a8799a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8799d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11a879a3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11a879a9 jmp 0x11a87a3f */
  goto L_11a87a3f;
L_11a879ae:;
  /* 11a879ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a879b1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11a879b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a879b6 je 0x11a87a00 */
  if (C.zf) goto L_11a87a00;
  /* 11a879b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a879bb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11a879be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a879c0 je 0x11a879e0 */
  if (C.zf) goto L_11a879e0;
  /* 11a879c2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11a879c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11a879c6 call 0x11a88000 */
  push32(0x11a879cbu); f_11a88000();
  /* 11a879cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a879ce movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11a879d1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a879d2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11a879d8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11a879de jmp 0x11a879fe */
  goto L_11a879fe;
L_11a879e0:;
  /* 11a879e0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11a879e3 push edx */
  push32((uint32_t)(EDX));
  /* 11a879e4 call 0x11a88000 */
  push32(0x11a879e9u); f_11a88000();
  /* 11a879e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a879ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a879f1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a879f2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11a879f8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_11a879fe:;
  /* 11a879fe jmp 0x11a87a3f */
  goto L_11a87a3f;
L_11a87a00:;
  /* 11a87a00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87a03 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11a87a06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a87a08 je 0x11a87a25 */
  if (C.zf) goto L_11a87a25;
  /* 11a87a0a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11a87a0d push ecx */
  push32((uint32_t)(ECX));
  /* 11a87a0e call 0x11a88000 */
  push32(0x11a87a13u); f_11a88000();
  /* 11a87a13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87a16 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a87a17 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11a87a1d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11a87a23 jmp 0x11a87a3f */
  goto L_11a87a3f;
L_11a87a25:;
  /* 11a87a25 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11a87a28 push edx */
  push32((uint32_t)(EDX));
  /* 11a87a29 call 0x11a88000 */
  push32(0x11a87a2eu); f_11a88000();
  /* 11a87a2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87a31 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a87a33 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11a87a39 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_11a87a3f:;
  /* 11a87a3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87a42 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11a87a45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a87a47 je 0x11a87a87 */
  if (C.zf) goto L_11a87a87;
  /* 11a87a49 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87a50 jg 0x11a87a87 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a87a87;
  /* 11a87a52 jl 0x11a87a5d */
  if ((C.sf!=C.of)) goto L_11a87a5d;
  /* 11a87a54 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87a5b jae 0x11a87a87 */
  if (!C.cf) goto L_11a87a87;
L_11a87a5d:;
  /* 11a87a5d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11a87a63 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a87a65 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11a87a6b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87a6e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a87a70 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11a87a76 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 11a87a7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87a7f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11a87a82 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a87a85 jmp 0x11a87a9f */
  goto L_11a87a9f;
L_11a87a87:;
  /* 11a87a87 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11a87a8d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11a87a93 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11a87a99 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11a87a9f:;
  /* 11a87a9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87aa2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11a87aa8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a87aaa jne 0x11a87ac7 */
  if (!C.zf) goto L_11a87ac7;
  /* 11a87aac mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11a87ab2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11a87ab8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 11a87abb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11a87ac1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11a87ac7:;
  /* 11a87ac7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87ace jge 0x11a87adc */
  if ((C.sf==C.of)) goto L_11a87adc;
  /* 11a87ad0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 11a87ada jmp 0x11a87ae5 */
  goto L_11a87ae5;
L_11a87adc:;
  /* 11a87adc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87adf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11a87ae2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a87ae5:;
  /* 11a87ae5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11a87aeb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 11a87af1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a87af3 jne 0x11a87afc */
  if (!C.zf) goto L_11a87afc;
  /* 11a87af5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11a87afc:;
  /* 11a87afc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11a87aff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11a87b02:;
  /* 11a87b02 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11a87b08 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11a87b0e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a87b11 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11a87b17 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a87b19 jg 0x11a87b2f */
  if ((!C.zf&&C.sf==C.of)) goto L_11a87b2f;
  /* 11a87b1b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11a87b21 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 11a87b27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a87b29 je 0x11a87bb0 */
  if (C.zf) goto L_11a87bb0;
L_11a87b2f:;
  /* 11a87b2f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11a87b35 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a87b36 push edx */
  push32((uint32_t)(EDX));
  /* 11a87b37 push eax */
  push32((uint32_t)(EAX));
  /* 11a87b38 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 11a87b3e push edx */
  push32((uint32_t)(EDX));
  /* 11a87b3f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11a87b45 push eax */
  push32((uint32_t)(EAX));
  /* 11a87b46 call 0x11a8da30 */
  push32(0x11a87b4bu); f_11a8da30();
  /* 11a87b4b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87b4e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11a87b54 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11a87b5a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a87b5b push edx */
  push32((uint32_t)(EDX));
  /* 11a87b5c push eax */
  push32((uint32_t)(EAX));
  /* 11a87b5d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11a87b63 push ecx */
  push32((uint32_t)(ECX));
  /* 11a87b64 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11a87b6a push edx */
  push32((uint32_t)(EDX));
  /* 11a87b6b call 0x11a8d9c0 */
  push32(0x11a87b70u); f_11a8d9c0();
  /* 11a87b70 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11a87b76 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 11a87b7c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87b83 jle 0x11a87b97 */
  if ((C.zf||C.sf!=C.of)) goto L_11a87b97;
  /* 11a87b85 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 11a87b8b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87b91 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11a87b97:;
  /* 11a87b97 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a87b9a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11a87ba0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11a87ba2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a87ba5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a87ba8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a87bab jmp 0x11a87b02 */
  goto L_11a87b02;
L_11a87bb0:;
  /* 11a87bb0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11a87bb3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a87bb6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11a87bb9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a87bbc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87bbf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11a87bc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87bc5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 11a87bca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a87bcc je 0x11a87bf7 */
  if (C.zf) goto L_11a87bf7;
  /* 11a87bce mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a87bd1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a87bd4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87bd7 jne 0x11a87bdf */
  if (!C.zf) goto L_11a87bdf;
  /* 11a87bd9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87bdd jne 0x11a87bf7 */
  if (!C.zf) goto L_11a87bf7;
L_11a87bdf:;
  /* 11a87bdf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a87be2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a87be5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a87be8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a87beb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 11a87bee mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a87bf1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87bf4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11a87bf7:;
  /* 11a87bf7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87bfe jne 0x11a87dd2 */
  if (!C.zf) goto L_11a87dd2;
  /* 11a87c04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87c07 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11a87c0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a87c0c je 0x11a87c5d */
  if (C.zf) goto L_11a87c5d;
  /* 11a87c0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87c11 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11a87c17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a87c19 je 0x11a87c2b */
  if (C.zf) goto L_11a87c2b;
  /* 11a87c1b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 11a87c22 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11a87c29 jmp 0x11a87c5d */
  goto L_11a87c5d;
L_11a87c2b:;
  /* 11a87c2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87c2e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a87c31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a87c33 je 0x11a87c45 */
  if (C.zf) goto L_11a87c45;
  /* 11a87c35 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 11a87c3c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11a87c43 jmp 0x11a87c5d */
  goto L_11a87c5d;
L_11a87c45:;
  /* 11a87c45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87c48 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11a87c4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a87c4d je 0x11a87c5d */
  if (C.zf) goto L_11a87c5d;
  /* 11a87c4f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11a87c56 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_11a87c5d:;
  /* 11a87c5d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11a87c63 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a87c66 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a87c69 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 11a87c6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87c72 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11a87c75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a87c77 jne 0x11a87c95 */
  if (!C.zf) goto L_11a87c95;
  /* 11a87c79 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11a87c7f push eax */
  push32((uint32_t)(EAX));
  /* 11a87c80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a87c83 push ecx */
  push32((uint32_t)(ECX));
  /* 11a87c84 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11a87c8a push edx */
  push32((uint32_t)(EDX));
  /* 11a87c8b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11a87c8d call 0x11a87f70 */
  push32(0x11a87c92u); f_11a87f70();
  /* 11a87c92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a87c95:;
  /* 11a87c95 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11a87c9b push eax */
  push32((uint32_t)(EAX));
  /* 11a87c9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a87c9f push ecx */
  push32((uint32_t)(ECX));
  /* 11a87ca0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a87ca3 push edx */
  push32((uint32_t)(EDX));
  /* 11a87ca4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 11a87caa push eax */
  push32((uint32_t)(EAX));
  /* 11a87cab call 0x11a87fb0 */
  push32(0x11a87cb0u); f_11a87fb0();
  /* 11a87cb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87cb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87cb6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11a87cb9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a87cbb je 0x11a87ce3 */
  if (C.zf) goto L_11a87ce3;
  /* 11a87cbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87cc0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11a87cc3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a87cc5 jne 0x11a87ce3 */
  if (!C.zf) goto L_11a87ce3;
  /* 11a87cc7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11a87ccd push eax */
  push32((uint32_t)(EAX));
  /* 11a87cce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a87cd1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a87cd2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11a87cd8 push edx */
  push32((uint32_t)(EDX));
  /* 11a87cd9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11a87cdb call 0x11a87f70 */
  push32(0x11a87ce0u); f_11a87f70();
  /* 11a87ce0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a87ce3:;
  /* 11a87ce3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87ce7 je 0x11a87d91 */
  if (C.zf) goto L_11a87d91;
  /* 11a87ced cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87cf1 jle 0x11a87d91 */
  if ((C.zf||C.sf!=C.of)) goto L_11a87d91;
  /* 11a87cf7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a87cfa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 11a87d00 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a87d03 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_11a87d09:;
  /* 11a87d09 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 11a87d0f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 11a87d15 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a87d18 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 11a87d1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a87d20 je 0x11a87d8f */
  if (C.zf) goto L_11a87d8f;
  /* 11a87d22 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 11a87d28 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11a87d2b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 11a87d32 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 11a87d39 push eax */
  push32((uint32_t)(EAX));
  /* 11a87d3a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 11a87d40 push ecx */
  push32((uint32_t)(ECX));
  /* 11a87d41 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 11a87d47 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87d4a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11a87d50 call 0x11a8d8a0 */
  push32(0x11a87d55u); f_11a8d8a0();
  /* 11a87d55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87d58 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 11a87d5e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87d65 jg 0x11a87d69 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a87d69;
  /* 11a87d67 jmp 0x11a87d8f */
  goto L_11a87d8f;
L_11a87d69:;
  /* 11a87d69 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11a87d6f push eax */
  push32((uint32_t)(EAX));
  /* 11a87d70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a87d73 push ecx */
  push32((uint32_t)(ECX));
  /* 11a87d74 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 11a87d7a push edx */
  push32((uint32_t)(EDX));
  /* 11a87d7b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11a87d81 push eax */
  push32((uint32_t)(EAX));
  /* 11a87d82 call 0x11a87fb0 */
  push32(0x11a87d87u); f_11a87fb0();
  /* 11a87d87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87d8a jmp 0x11a87d09 */
  goto L_11a87d09;
L_11a87d8f:;
  /* 11a87d8f jmp 0x11a87dac */
  goto L_11a87dac;
L_11a87d91:;
  /* 11a87d91 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11a87d97 push ecx */
  push32((uint32_t)(ECX));
  /* 11a87d98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a87d9b push edx */
  push32((uint32_t)(EDX));
  /* 11a87d9c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a87d9f push eax */
  push32((uint32_t)(EAX));
  /* 11a87da0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a87da3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a87da4 call 0x11a87fb0 */
  push32(0x11a87da9u); f_11a87fb0();
  /* 11a87da9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a87dac:;
  /* 11a87dac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87daf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11a87db2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a87db4 je 0x11a87dd2 */
  if (C.zf) goto L_11a87dd2;
  /* 11a87db6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11a87dbc push eax */
  push32((uint32_t)(EAX));
  /* 11a87dbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a87dc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a87dc1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11a87dc7 push edx */
  push32((uint32_t)(EDX));
  /* 11a87dc8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11a87dca call 0x11a87f70 */
  push32(0x11a87dcfu); f_11a87f70();
  /* 11a87dcf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a87dd2:;
  /* 11a87dd2 jmp 0x11a871e4 */
  goto L_11a871e4;
L_11a87dd7:;
  /* 11a87dd7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11a87ddd pop edi */
  EDI = (pop32());
  /* 11a87dde pop esi */
  ESI = (pop32());
  /* 11a87ddf pop ebx */
  EBX = (pop32());
  /* 11a87de0 mov esp, ebp */
  ESP = (EBP);
  /* 11a87de2 pop ebp */
  EBP = (pop32());
  /* 11a87de3 ret  */
  ESPCHK(0x11a871c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ef0 @ 0x11a87ef0 (119 bytes, 44 insns) */
void f_11a87ef0(void) {
  FTRACE(0x11a87ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a87ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a87ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11a87ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a87ef4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a87ef7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a87efa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a87efd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a87f00 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11a87f03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a87f06 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87f0a jl 0x11a87f32 */
  if ((C.sf!=C.of)) goto L_11a87f32;
  /* 11a87f0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a87f0f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a87f11 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11a87f14 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11a87f16 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11a87f1a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a87f20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a87f23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a87f26 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a87f28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87f2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a87f2e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a87f30 jmp 0x11a87f45 */
  goto L_11a87f45;
L_11a87f32:;
  /* 11a87f32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a87f35 push edx */
  push32((uint32_t)(EDX));
  /* 11a87f36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a87f39 push eax */
  push32((uint32_t)(EAX));
  /* 11a87f3a call 0x11a86f40 */
  push32(0x11a87f3fu); f_11a86f40();
  /* 11a87f3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87f42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a87f45:;
  /* 11a87f45 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87f49 jne 0x11a87f56 */
  if (!C.zf) goto L_11a87f56;
  /* 11a87f4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a87f4e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11a87f54 jmp 0x11a87f63 */
  goto L_11a87f63;
L_11a87f56:;
  /* 11a87f56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a87f59 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a87f5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87f5e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a87f61 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11a87f63:;
  /* 11a87f63 mov esp, ebp */
  ESP = (EBP);
  /* 11a87f65 pop ebp */
  EBP = (pop32());
  /* 11a87f66 ret  */
  ESPCHK(0x11a87ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f70 @ 0x11a87f70 (53 bytes, 23 insns) */
void f_11a87f70(void) {
  FTRACE(0x11a87f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a87f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11a87f71 mov ebp, esp */
  EBP = (ESP);
L_11a87f73:;
  /* 11a87f73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a87f76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a87f79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a87f7c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11a87f7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a87f81 jle 0x11a87fa3 */
  if ((C.zf||C.sf!=C.of)) goto L_11a87fa3;
  /* 11a87f83 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a87f86 push edx */
  push32((uint32_t)(EDX));
  /* 11a87f87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a87f8a push eax */
  push32((uint32_t)(EAX));
  /* 11a87f8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a87f8e push ecx */
  push32((uint32_t)(ECX));
  /* 11a87f8f call 0x11a87ef0 */
  push32(0x11a87f94u); f_11a87ef0();
  /* 11a87f94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87f97 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a87f9a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87f9d jne 0x11a87fa1 */
  if (!C.zf) goto L_11a87fa1;
  /* 11a87f9f jmp 0x11a87fa3 */
  goto L_11a87fa3;
L_11a87fa1:;
  /* 11a87fa1 jmp 0x11a87f73 */
  goto L_11a87f73;
L_11a87fa3:;
  /* 11a87fa3 pop ebp */
  EBP = (pop32());
  /* 11a87fa4 ret  */
  ESPCHK(0x11a87f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fb0 @ 0x11a87fb0 (74 bytes, 31 insns) */
void f_11a87fb0(void) {
  FTRACE(0x11a87fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a87fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a87fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11a87fb3 push ecx */
  push32((uint32_t)(ECX));
L_11a87fb4:;
  /* 11a87fb4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a87fb7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a87fba sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a87fbd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11a87fc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a87fc2 jle 0x11a87ff6 */
  if ((C.zf||C.sf!=C.of)) goto L_11a87ff6;
  /* 11a87fc4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a87fc7 push edx */
  push32((uint32_t)(EDX));
  /* 11a87fc8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a87fcb push eax */
  push32((uint32_t)(EAX));
  /* 11a87fcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a87fcf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a87fd2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a87fd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a87fd8 push eax */
  push32((uint32_t)(EAX));
  /* 11a87fd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a87fdc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87fdf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11a87fe2 call 0x11a87ef0 */
  push32(0x11a87fe7u); f_11a87ef0();
  /* 11a87fe7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a87fea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a87fed cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a87ff0 jne 0x11a87ff4 */
  if (!C.zf) goto L_11a87ff4;
  /* 11a87ff2 jmp 0x11a87ff6 */
  goto L_11a87ff6;
L_11a87ff4:;
  /* 11a87ff4 jmp 0x11a87fb4 */
  goto L_11a87fb4;
L_11a87ff6:;
  /* 11a87ff6 mov esp, ebp */
  ESP = (EBP);
  /* 11a87ff8 pop ebp */
  EBP = (pop32());
  /* 11a87ff9 ret  */
  ESPCHK(0x11a87fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008000 @ 0x11a88000 (26 bytes, 12 insns) */
void f_11a88000(void) {
  FTRACE(0x11a88000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88000 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88001 mov ebp, esp */
  EBP = (ESP);
  /* 11a88003 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88006 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a88008 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8800b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8800e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a88010 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88013 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a88015 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11a88018 pop ebp */
  EBP = (pop32());
  /* 11a88019 ret  */
  ESPCHK(0x11a88000u, _esp0);
  ESP += 4; return;
}

/* FUN_10008020 @ 0x11a88020 (31 bytes, 14 insns) */
void f_11a88020(void) {
  FTRACE(0x11a88020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88020 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88021 mov ebp, esp */
  EBP = (ESP);
  /* 11a88023 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88026 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a88028 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8802b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8802e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a88030 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88033 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a88035 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a88038 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a8803a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a8803d pop ebp */
  EBP = (pop32());
  /* 11a8803e ret  */
  ESPCHK(0x11a88020u, _esp0);
  ESP += 4; return;
}

/* FUN_10008040 @ 0x11a88040 (27 bytes, 12 insns) */
void f_11a88040(void) {
  FTRACE(0x11a88040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88040 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88041 mov ebp, esp */
  EBP = (ESP);
  /* 11a88043 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88046 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a88048 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8804b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8804e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a88050 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88053 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a88055 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11a88059 pop ebp */
  EBP = (pop32());
  /* 11a8805a ret  */
  ESPCHK(0x11a88040u, _esp0);
  ESP += 4; return;
}

/* FUN_100080cc @ 0x11a880cc (9 bytes, 3 insns) */
void f_11a880cc(void) {
  FTRACE(0x11a880ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a880cc fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11a880ce fld xword ptr [0x11ab7b2a] */
  fpu_push(rf80((uint32_t)(0x11ab7b2a)));
  /* 11a880d4 ret  */
  ESPCHK(0x11a880ccu, _esp0);
  ESP += 4; return;
}

/* __cintrindisp2 @ 0x11a88110 (62 bytes, 20 insns) */
void f_11a88110(void) {
  FTRACE(0x11a88110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88110 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88111 mov ebp, esp */
  EBP = (ESP);
  /* 11a88113 add esp, 0xfffffd30 */
  { uint32_t _a=(ESP),_b=(0xfffffd30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88119 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8811a wait  */
  /* wait (no observable integer/reg state) */
  /* 11a8811b fnstcw word ptr [ebp - 0xa4] */
  w16((uint32_t)(EBP + -0xa4), C.fcw);
  /* 11a88121 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a88122 cmp dword ptr [0x11ab86f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ab86f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88129 je 0x11a8813f */
  if (C.zf) goto L_11a8813f;
L_11a8812b:;
  /* 11a8812b call 0x11a88be7 */
  push32(0x11a88130u); f_11a88be7();
  /* 11a88130 or byte ptr [ebp - 0x2c8], 3 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2c8)))|(0x3u); w8((uint32_t)(EBP + -0x2c8), (_r)); fl_logic(_r,8); }
  /* 11a88137 call 0x11a881da */
  push32(0x11a8813cu); f_11a881da();
  /* 11a8813c pop ebx */
  EBX = (pop32());
  /* 11a8813d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a8813e ret  */
  ESPCHK(0x11a88110u, _esp0);
  ESP += 4; return;
L_11a8813f:;
  /* 11a8813f fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
  /* 11a88141 fst qword ptr [ebp - 0x86] */
  wf64((uint32_t)(EBP + -0x86), FPU_ST(0));
  /* 11a88147 fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
  /* 11a88149 fst qword ptr [ebp - 0x7e] */
  wf64((uint32_t)(EBP + -0x7e), FPU_ST(0));
  /* 11a8814c jmp 0x11a8812b */
  goto L_11a8812b;
}

/* __cintrindisp1 @ 0x11a8814e (61 bytes, 17 insns) */
void f_11a8814e(void) {
  FTRACE(0x11a8814eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8814e push ebp */
  push32((uint32_t)(EBP));
  /* 11a8814f mov ebp, esp */
  EBP = (ESP);
  /* 11a88151 add esp, 0xfffffd30 */
  { uint32_t _a=(ESP),_b=(0xfffffd30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88157 push ebx */
  push32((uint32_t)(EBX));
  /* 11a88158 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a88159 fnstcw word ptr [ebp - 0xa4] */
  w16((uint32_t)(EBP + -0xa4), C.fcw);
  /* 11a8815f cmp dword ptr [0x11ab86f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ab86f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88166 je 0x11a88183 */
  if (C.zf) goto L_11a88183;
L_11a88168:;
  /* 11a88168 call 0x11a88b80 */
  push32(0x11a8816du); f_11a88b80();
  /* 11a8816d or byte ptr [ebp - 0x2c8], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2c8)))|(0x1u); w8((uint32_t)(EBP + -0x2c8), (_r)); fl_logic(_r,8); }
  /* 11a88174 and byte ptr [ebp - 0x2c8], 0xfd */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2c8)))&(0xfdu); w8((uint32_t)(EBP + -0x2c8), (_r)); fl_logic(_r,8); }
  /* 11a8817b call 0x11a881da */
  push32(0x11a88180u); f_11a881da();
  /* 11a88180 pop ebx */
  EBX = (pop32());
  /* 11a88181 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a88182 ret  */
  ESPCHK(0x11a8814eu, _esp0);
  ESP += 4; return;
L_11a88183:;
  /* 11a88183 fst qword ptr [ebp - 0x86] */
  wf64((uint32_t)(EBP + -0x86), FPU_ST(0));
  /* 11a88189 jmp 0x11a88168 */
  goto L_11a88168;
}

/* __ctrandisp2 @ 0x11a8818b (72 bytes, 21 insns) */
void f_11a8818b(void) {
  FTRACE(0x11a8818bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8818b push ebp */
  push32((uint32_t)(EBP));
  /* 11a8818c mov ebp, esp */
  EBP = (ESP);
  /* 11a8818e add esp, 0xfffffd30 */
  { uint32_t _a=(ESP),_b=(0xfffffd30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88194 push ebx */
  push32((uint32_t)(EBX));
  /* 11a88195 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a88198 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a8819b call 0x11a8833e */
  push32(0x11a881a0u); f_11a8833e();
  /* 11a881a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a881a3 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a881a6 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a881a9 call 0x11a8833e */
  push32(0x11a881aeu); f_11a8833e();
  /* 11a881ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a881b1 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a881b2 fnstcw word ptr [ebp - 0xa4] */
  w16((uint32_t)(EBP + -0xa4), C.fcw);
  /* 11a881b8 or byte ptr [ebp - 0x2c8], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2c8)))|(0x2u); w8((uint32_t)(EBP + -0x2c8), (_r)); fl_logic(_r,8); }
  /* 11a881bf mov byte ptr [ebp - 0x8f], 1 */
  w8((uint32_t)(EBP + -0x8f), (0x1u));
  /* 11a881c6 call 0x11a88be7 */
  push32(0x11a881cbu); f_11a88be7();
  /* 11a881cb call 0x11a881d3 */
  push32(0x11a881d0u); f_11a881d3();
  /* 11a881d0 pop ebx */
  EBX = (pop32());
  /* 11a881d1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a881d2 ret  */
  ESPCHK(0x11a8818bu, _esp0);
  ESP += 4; return;
}

/* FUN_100081d3 @ 0x11a881d3 (7 bytes, 1 insns) */
void f_11a881d3(void) {
  FTRACE(0x11a881d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a881d3 and byte ptr [ebp - 0x2c8], 0xfe */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2c8)))&(0xfeu); w8((uint32_t)(EBP + -0x2c8), (_r)); fl_logic(_r,8); }
}

/* FUN_100081da @ 0x11a881da (305 bytes, 94 insns) */
void f_11a881da(void) {
  FTRACE(0x11a881dau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a881da cmp dword ptr [0x11aba09c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba09c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a881e1 jne 0x11a8822f */
  if (!C.zf) goto L_11a8822f;
  /* 11a881e3 fst qword ptr [ebp - 0x2d0] */
  wf64((uint32_t)(EBP + -0x2d0), FPU_ST(0));
  /* 11a881e9 mov al, byte ptr [ebp - 0x90] */
  AL = (r8((uint32_t)(EBP + -0x90)));
  /* 11a881ef or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a881f1 je 0x11a8820d */
  if (C.zf) goto L_11a8820d;
  /* 11a881f3 cmp al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a881f5 je 0x11a88237 */
  if (C.zf) goto L_11a88237;
  /* 11a881f7 cmp al, 0xfe */
  { uint32_t _a=(AL),_b=(0xfeu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a881f9 je 0x11a88237 */
  if (C.zf) goto L_11a88237;
  /* 11a881fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a881fd je 0x11a8822f */
  if (C.zf) goto L_11a8822f;
  /* 11a881ff movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11a88202 mov dword ptr [ebp - 0x8e], eax */
  w32((uint32_t)(EBP + -0x8e), (EAX));
  /* 11a88208 jmp 0x11a882a9 */
  goto L_11a882a9;
L_11a8820d:;
  /* 11a8820d mov ax, word ptr [ebp - 0xa4] */
  AX = (r16((uint32_t)(EBP + -0xa4)));
  /* 11a88214 and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 11a88218 jne 0x11a8822f */
  if (!C.zf) goto L_11a8822f;
  /* 11a8821a wait  */
  /* wait (no observable integer/reg state) */
  /* 11a8821b fnstsw ax */
  AX = fpu_status();
  /* 11a8821d and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 11a88221 je 0x11a8822f */
  if (C.zf) goto L_11a8822f;
  /* 11a88223 mov dword ptr [ebp - 0x8e], 8 */
  w32((uint32_t)(EBP + -0x8e), (0x8u));
  /* 11a8822d jmp 0x11a882a9 */
  goto L_11a882a9;
L_11a8822f:;
  /* 11a8822f fldcw word ptr [ebp - 0xa4] */
  C.fcw = r16((uint32_t)(EBP + -0xa4));
  /* 11a88235 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a88236 ret  */
  ESPCHK(0x11a881dau, _esp0);
  ESP += 4; return;
L_11a88237:;
  /* 11a88237 mov ax, word ptr [ebp - 0x2ca] */
  AX = (r16((uint32_t)(EBP + -0x2ca)));
  /* 11a8823e and ax, 0x7ff0 */
  { uint32_t _r=(AX)&(0x7ff0u); AX = (_r); fl_logic(_r,16); }
  /* 11a88242 or ax, ax */
  { uint32_t _r=(AX)|(AX); AX = (_r); fl_logic(_r,16); }
  /* 11a88245 je 0x11a8824f */
  if (C.zf) goto L_11a8824f;
  /* 11a88247 cmp ax, 0x7ff0 */
  { uint32_t _a=(AX),_b=(0x7ff0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a8824b je 0x11a8827d */
  if (C.zf) goto L_11a8827d;
  /* 11a8824d jmp 0x11a8820d */
  goto L_11a8820d;
L_11a8824f:;
  /* 11a8824f mov dword ptr [ebp - 0x8e], 4 */
  w32((uint32_t)(EBP + -0x8e), (0x4u));
  /* 11a88259 fld qword ptr [0x11ab4758] */
  fpu_push(rf64((uint32_t)(0x11ab4758)));
  /* 11a8825f fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
  /* 11a88261 fscale  */
  FPU_ST(0) = FPU_ST(0) * __builtin_exp2(__builtin_trunc(FPU_ST(1)));
  /* 11a88263 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 11a88265 fld st(0) */
  { double _v=FPU_ST(0); fpu_push(_v); }
  /* 11a88267 fabs  */
  FPU_ST(0) = __builtin_fabs(FPU_ST(0));
  /* 11a88269 fcomp qword ptr [0x11ab4748] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11ab4748)));
  (void)fpu_pop();
  /* 11a8826f wait  */
  /* wait (no observable integer/reg state) */
  /* 11a88270 fnstsw ax */
  AX = fpu_status();
  /* 11a88272 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11a88273 jae 0x11a882a9 */
  if (!C.cf) goto L_11a882a9;
  /* 11a88275 fmul qword ptr [0x11ab4768] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11ab4768)));
  /* 11a8827b jmp 0x11a882a9 */
  goto L_11a882a9;
L_11a8827d:;
  /* 11a8827d mov dword ptr [ebp - 0x8e], 3 */
  w32((uint32_t)(EBP + -0x8e), (0x3u));
  /* 11a88287 fld qword ptr [0x11ab4750] */
  fpu_push(rf64((uint32_t)(0x11ab4750)));
  /* 11a8828d fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
  /* 11a8828f fscale  */
  FPU_ST(0) = FPU_ST(0) * __builtin_exp2(__builtin_trunc(FPU_ST(1)));
  /* 11a88291 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 11a88293 fld st(0) */
  { double _v=FPU_ST(0); fpu_push(_v); }
  /* 11a88295 fabs  */
  FPU_ST(0) = __builtin_fabs(FPU_ST(0));
  /* 11a88297 fcomp qword ptr [0x11ab4740] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11ab4740)));
  (void)fpu_pop();
  /* 11a8829d wait  */
  /* wait (no observable integer/reg state) */
  /* 11a8829e fnstsw ax */
  AX = fpu_status();
  /* 11a882a0 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11a882a1 jbe 0x11a882a9 */
  if ((C.cf||C.zf)) goto L_11a882a9;
  /* 11a882a3 fmul qword ptr [0x11ab4760] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11ab4760)));
L_11a882a9:;
  /* 11a882a9 push esi */
  push32((uint32_t)(ESI));
  /* 11a882aa push edi */
  push32((uint32_t)(EDI));
  /* 11a882ab mov ebx, dword ptr [ebp - 0x94] */
  EBX = (r32((uint32_t)(EBP + -0x94)));
  /* 11a882b1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a882b2 mov dword ptr [ebp - 0x8a], ebx */
  w32((uint32_t)(EBP + -0x8a), (EBX));
  /* 11a882b8 test byte ptr [ebp - 0x2c8], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2c8)))&(0x1u); fl_logic(_r,8); }
  /* 11a882bf jne 0x11a882db */
  if (!C.zf) goto L_11a882db;
  /* 11a882c1 cld  */
  C.df=0;
  /* 11a882c2 lea esi, [ebp + 8] */
  ESI = ((uint32_t)(EBP + 0x8));
  /* 11a882c5 lea edi, [ebp - 0x86] */
  EDI = ((uint32_t)(EBP + -0x86));
  /* 11a882cb movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a882cc movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a882cd cmp byte ptr [ebx + 0xc], 1 */
  { uint32_t _a=(r8((uint32_t)(EBX + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a882d1 je 0x11a882db */
  if (C.zf) goto L_11a882db;
  /* 11a882d3 lea esi, [ebp + 0x10] */
  ESI = ((uint32_t)(EBP + 0x10));
  /* 11a882d6 lea edi, [ebp - 0x7e] */
  EDI = ((uint32_t)(EBP + -0x7e));
  /* 11a882d9 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a882da movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
L_11a882db:;
  /* 11a882db fstp qword ptr [ebp - 0x76] */
  wf64((uint32_t)(EBP + -0x76), FPU_ST(0));
  (void)fpu_pop();
  /* 11a882de lea eax, [ebp - 0x8e] */
  EAX = ((uint32_t)(EBP + -0x8e));
  /* 11a882e4 lea ebx, [ebp - 0xa4] */
  EBX = ((uint32_t)(EBP + -0xa4));
  /* 11a882ea push ebx */
  push32((uint32_t)(EBX));
  /* 11a882eb push eax */
  push32((uint32_t)(EAX));
  /* 11a882ec mov ebx, dword ptr [ebp - 0x94] */
  EBX = (r32((uint32_t)(EBP + -0x94)));
  /* 11a882f2 mov al, byte ptr [ebx + 0xe] */
  AL = (r8((uint32_t)(EBX + 0xe)));
  /* 11a882f5 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11a882f8 push eax */
  push32((uint32_t)(EAX));
  /* 11a882f9 call 0x11a8dab0 */
  push32(0x11a882feu); f_11a8dab0();
  /* 11a882fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88301 pop edi */
  EDI = (pop32());
  /* 11a88302 pop esi */
  ESI = (pop32());
  /* 11a88303 fld qword ptr [ebp - 0x76] */
  fpu_push(rf64((uint32_t)(EBP + -0x76)));
  /* 11a88306 jmp 0x11a8822f */
  goto L_11a8822f;
}

/* __ctrandisp1 @ 0x11a8830b (51 bytes, 16 insns) */
void f_11a8830b(void) {
  FTRACE(0x11a8830bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8830b push ebp */
  push32((uint32_t)(EBP));
  /* 11a8830c mov ebp, esp */
  EBP = (ESP);
  /* 11a8830e add esp, 0xfffffd30 */
  { uint32_t _a=(ESP),_b=(0xfffffd30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88314 push ebx */
  push32((uint32_t)(EBX));
  /* 11a88315 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a88318 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a8831b call 0x11a8833e */
  push32(0x11a88320u); f_11a8833e();
  /* 11a88320 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88323 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a88324 fnstcw word ptr [ebp - 0xa4] */
  w16((uint32_t)(EBP + -0xa4), C.fcw);
  /* 11a8832a and byte ptr [ebp - 0x2c8], 0xfd */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2c8)))&(0xfdu); w8((uint32_t)(EBP + -0x2c8), (_r)); fl_logic(_r,8); }
  /* 11a88331 call 0x11a88b80 */
  push32(0x11a88336u); f_11a88b80();
  /* 11a88336 call 0x11a881d3 */
  push32(0x11a8833bu); f_11a881d3();
  /* 11a8833b pop ebx */
  EBX = (pop32());
  /* 11a8833c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a8833d ret  */
  ESPCHK(0x11a8830bu, _esp0);
  ESP += 4; return;
}

/* __fload @ 0x11a8833e (60 bytes, 22 insns) */
void f_11a8833e(void) {
  FTRACE(0x11a8833eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8833e push ebp */
  push32((uint32_t)(EBP));
  /* 11a8833f mov ebp, esp */
  EBP = (ESP);
  /* 11a88341 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88344 push ebx */
  push32((uint32_t)(EBX));
  /* 11a88345 mov ax, word ptr [ebp + 0xe] */
  AX = (r16((uint32_t)(EBP + 0xe)));
  /* 11a88349 mov bx, ax */
  BX = (AX);
  /* 11a8834c and ax, 0x7ff0 */
  { uint32_t _r=(AX)&(0x7ff0u); AX = (_r); fl_logic(_r,16); }
  /* 11a88350 cmp ax, 0x7ff0 */
  { uint32_t _a=(AX),_b=(0x7ff0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a88354 jne 0x11a88374 */
  if (!C.zf) goto L_11a88374;
  /* 11a88356 or bx, 0x7fff */
  { uint32_t _r=(BX)|(0x7fffu); BX = (_r); fl_logic(_r,16); }
  /* 11a8835b mov word ptr [ebp - 2], bx */
  w16((uint32_t)(EBP + -0x2), (BX));
  /* 11a8835f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a88362 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88365 shld eax, ebx, 0xb */
  EAX = (sh_shld((uint32_t)(EAX),(uint32_t)(EBX),(0xbu)&0x1f,32));
  /* 11a88369 mov dword ptr [ebp - 6], eax */
  w32((uint32_t)(EBP + -0x6), (EAX));
  /* 11a8836c mov dword ptr [ebp - 0xa], ebx */
  w32((uint32_t)(EBP + -0xa), (EBX));
  /* 11a8836f fld xword ptr [ebp - 0xa] */
  fpu_push(rf80((uint32_t)(EBP + -0xa)));
  /* 11a88372 jmp 0x11a88377 */
  goto L_11a88377;
L_11a88374:;
  /* 11a88374 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
L_11a88377:;
  /* 11a88377 pop ebx */
  EBX = (pop32());
  /* 11a88378 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a88379 ret  */
  ESPCHK(0x11a8833eu, _esp0);
  ESP += 4; return;
}

/* __setdefaultprecision @ 0x11a88380 (23 bytes, 8 insns) */
void f_11a88380(void) {
  FTRACE(0x11a88380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88380 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88381 mov ebp, esp */
  EBP = (ESP);
  /* 11a88383 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 11a88388 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 11a8838d call 0x11a8dcc0 */
  push32(0x11a88392u); f_11a8dcc0();
  /* 11a88392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88395 pop ebp */
  EBP = (pop32());
  /* 11a88396 ret  */
  ESPCHK(0x11a88380u, _esp0);
  ESP += 4; return;
}

/* FUN_100083a0 @ 0x11a883a0 (94 bytes, 30 insns) */
void f_11a883a0(void) {
  FTRACE(0x11a883a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a883a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a883a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a883a3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a883a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a883a7 push esi */
  push32((uint32_t)(ESI));
  /* 11a883a8 push edi */
  push32((uint32_t)(EDI));
  /* 11a883a9 mov dword ptr [ebp - 0x18], 0x80000000 */
  w32((uint32_t)(EBP + -0x18), (0x80000000u));
  /* 11a883b0 mov dword ptr [ebp - 0x14], 0x4147ffff */
  w32((uint32_t)(EBP + -0x14), (0x4147ffffu));
  /* 11a883b7 mov dword ptr [ebp - 8], 0xc0000000 */
  w32((uint32_t)(EBP + -0x8), (0xc0000000u));
  /* 11a883be mov dword ptr [ebp - 4], 0x4150017e */
  w32((uint32_t)(EBP + -0x4), (0x4150017eu));
  /* 11a883c5 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11a883c8 fdiv qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x18)));
  /* 11a883cb fmul qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x18)));
  /* 11a883ce fsubr qword ptr [ebp - 8] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x8))) - FPU_ST(0);
  /* 11a883d1 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11a883d4 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11a883d7 fcomp qword ptr [0x11ab4770] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11ab4770)));
  (void)fpu_pop();
  /* 11a883dd fnstsw ax */
  AX = fpu_status();
  /* 11a883df test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11a883e2 jne 0x11a883ed */
  if (!C.zf) goto L_11a883ed;
  /* 11a883e4 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11a883eb jmp 0x11a883f4 */
  goto L_11a883f4;
L_11a883ed:;
  /* 11a883ed mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_11a883f4:;
  /* 11a883f4 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a883f7 pop edi */
  EDI = (pop32());
  /* 11a883f8 pop esi */
  ESI = (pop32());
  /* 11a883f9 pop ebx */
  EBX = (pop32());
  /* 11a883fa mov esp, ebp */
  ESP = (EBP);
  /* 11a883fc pop ebp */
  EBP = (pop32());
  /* 11a883fd ret  */
  ESPCHK(0x11a883a0u, _esp0);
  ESP += 4; return;
}

/* __ms_p5_mp_test_fdiv @ 0x11a88400 (66 bytes, 22 insns) */
void f_11a88400(void) {
  FTRACE(0x11a88400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88400 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88401 mov ebp, esp */
  EBP = (ESP);
  /* 11a88403 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a88406 push 0x11ab4794 */
  push32((uint32_t)(0x11ab4794u));
  /* 11a8840b call dword ptr [0x11abc3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3ac))), 0x11a88411u);
  /* 11a88411 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a88414 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88418 je 0x11a88439 */
  if (C.zf) goto L_11a88439;
  /* 11a8841a push 0x11ab4778 */
  push32((uint32_t)(0x11ab4778u));
  /* 11a8841f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88422 push eax */
  push32((uint32_t)(EAX));
  /* 11a88423 call dword ptr [0x11abc39c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc39c))), 0x11a88429u);
  /* 11a88429 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8842c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88430 je 0x11a88439 */
  if (C.zf) goto L_11a88439;
  /* 11a88432 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a88434 call dword ptr [ebp - 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x8))), 0x11a88437u);
  /* 11a88437 jmp 0x11a8843e */
  goto L_11a8843e;
L_11a88439:;
  /* 11a88439 call 0x11a883a0 */
  push32(0x11a8843eu); f_11a883a0();
L_11a8843e:;
  /* 11a8843e mov esp, ebp */
  ESP = (EBP);
  /* 11a88440 pop ebp */
  EBP = (pop32());
  /* 11a88441 ret  */
  ESPCHK(0x11a88400u, _esp0);
  ESP += 4; return;
}

/* FUN_10008450 @ 0x11a88450 (168 bytes, 59 insns) */
void f_11a88450(void) {
  FTRACE(0x11a88450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88450 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88451 mov ebp, esp */
  EBP = (ESP);
  /* 11a88453 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a88456 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88459 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a8845c push ecx */
  push32((uint32_t)(ECX));
  /* 11a8845d call 0x11a8e1a0 */
  push32(0x11a88462u); f_11a8e1a0();
  /* 11a88462 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88465 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88468 je 0x11a884b0 */
  if (C.zf) goto L_11a884b0;
L_11a8846a:;
  /* 11a8846a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8846d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88470 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11a88473 cmp dword ptr [0x11ab80d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ab80d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8847a jle 0x11a88492 */
  if ((C.zf||C.sf!=C.of)) goto L_11a88492;
  /* 11a8847c push 4 */
  push32((uint32_t)(0x4u));
  /* 11a8847e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88481 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a88484 push ecx */
  push32((uint32_t)(ECX));
  /* 11a88485 call 0x11a8e0d0 */
  push32(0x11a8848au); f_11a8e0d0();
  /* 11a8848a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8848d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a88490 jmp 0x11a884aa */
  goto L_11a884aa;
L_11a88492:;
  /* 11a88492 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88495 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a88498 mov ecx, dword ptr [0x11ab7ec0] */
  ECX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a8849e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a884a0 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11a884a4 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11a884a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11a884aa:;
  /* 11a884aa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a884ae jne 0x11a8846a */
  if (!C.zf) goto L_11a8846a;
L_11a884b0:;
  /* 11a884b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a884b3 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a884b5 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11a884b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a884bb mov al, byte ptr [0x11ab80d4] */
  AL = (r8((uint32_t)(0x11ab80d4)));
  /* 11a884c0 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11a884c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a884c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a884c8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11a884cb:;
  /* 11a884cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a884ce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a884d0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11a884d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a884d6 mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 11a884d9 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11a884db mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 11a884de mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11a884e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a884e4 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a884e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a884ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a884ed mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a884f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a884f2 jne 0x11a884cb */
  if (!C.zf) goto L_11a884cb;
  /* 11a884f4 mov esp, ebp */
  ESP = (EBP);
  /* 11a884f6 pop ebp */
  EBP = (pop32());
  /* 11a884f7 ret  */
  ESPCHK(0x11a88450u, _esp0);
  ESP += 4; return;
}

/* __cropzeros @ 0x11a88500 (215 bytes, 78 insns) */
void f_11a88500(void) {
  FTRACE(0x11a88500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88500 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88501 mov ebp, esp */
  EBP = (ESP);
  /* 11a88503 push ecx */
  push32((uint32_t)(ECX));
L_11a88504:;
  /* 11a88504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88507 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a8850a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8850c je 0x11a8852a */
  if (C.zf) goto L_11a8852a;
  /* 11a8850e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88511 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a88514 movsx ecx, byte ptr [0x11ab80d4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11ab80d4))));
  /* 11a8851b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8851d je 0x11a8852a */
  if (C.zf) goto L_11a8852a;
  /* 11a8851f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88522 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88525 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11a88528 jmp 0x11a88504 */
  goto L_11a88504;
L_11a8852a:;
  /* 11a8852a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8852d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a88530 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88533 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88536 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11a88539 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8853b je 0x11a885d3 */
  if (C.zf) goto L_11a885d3;
L_11a88541:;
  /* 11a88541 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88544 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a88547 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a88549 je 0x11a8856c */
  if (C.zf) goto L_11a8856c;
  /* 11a8854b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8854e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a88551 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88554 je 0x11a8856c */
  if (C.zf) goto L_11a8856c;
  /* 11a88556 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88559 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a8855c cmp edx, 0x45 */
  { uint32_t _a=(EDX),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8855f je 0x11a8856c */
  if (C.zf) goto L_11a8856c;
  /* 11a88561 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88564 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88567 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a8856a jmp 0x11a88541 */
  goto L_11a88541;
L_11a8856c:;
  /* 11a8856c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8856f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a88572 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88575 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a88578 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11a8857b:;
  /* 11a8857b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8857e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a88581 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88584 jne 0x11a88591 */
  if (!C.zf) goto L_11a88591;
  /* 11a88586 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88589 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8858c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11a8858f jmp 0x11a8857b */
  goto L_11a8857b;
L_11a88591:;
  /* 11a88591 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88594 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a88597 movsx edx, byte ptr [0x11ab80d4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11ab80d4))));
  /* 11a8859e cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a885a0 jne 0x11a885ab */
  if (!C.zf) goto L_11a885ab;
  /* 11a885a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a885a5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a885a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11a885ab:;
  /* 11a885ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a885ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a885b1 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11a885b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a885b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a885ba mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a885bc mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11a885be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a885c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a885c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a885c7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a885ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a885cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a885cf je 0x11a885d3 */
  if (C.zf) goto L_11a885d3;
  /* 11a885d1 jmp 0x11a885ab */
  goto L_11a885ab;
L_11a885d3:;
  /* 11a885d3 mov esp, ebp */
  ESP = (EBP);
  /* 11a885d5 pop ebp */
  EBP = (pop32());
  /* 11a885d6 ret  */
  ESPCHK(0x11a88500u, _esp0);
  ESP += 4; return;
}

/* __positive @ 0x11a885e0 (45 bytes, 16 insns) */
void f_11a885e0(void) {
  FTRACE(0x11a885e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a885e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a885e1 mov ebp, esp */
  EBP = (ESP);
  /* 11a885e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a885e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a885e7 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11a885e9 fcomp qword ptr [0x11ab47a0] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11ab47a0)));
  (void)fpu_pop();
  /* 11a885ef fnstsw ax */
  AX = fpu_status();
  /* 11a885f1 test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11a885f4 jne 0x11a885ff */
  if (!C.zf) goto L_11a885ff;
  /* 11a885f6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a885fd jmp 0x11a88606 */
  goto L_11a88606;
L_11a885ff:;
  /* 11a885ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11a88606:;
  /* 11a88606 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88609 mov esp, ebp */
  ESP = (EBP);
  /* 11a8860b pop ebp */
  EBP = (pop32());
  /* 11a8860c ret  */
  ESPCHK(0x11a885e0u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x11a88610 (72 bytes, 29 insns) */
void f_11a88610(void) {
  FTRACE(0x11a88610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88610 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88611 mov ebp, esp */
  EBP = (ESP);
  /* 11a88613 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a88616 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8861a je 0x11a8863c */
  if (C.zf) goto L_11a8863c;
  /* 11a8861c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8861f push eax */
  push32((uint32_t)(EAX));
  /* 11a88620 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11a88623 push ecx */
  push32((uint32_t)(ECX));
  /* 11a88624 call 0x11a8ea90 */
  push32(0x11a88629u); f_11a8ea90();
  /* 11a88629 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8862c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8862f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a88632 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11a88634 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88637 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11a8863a jmp 0x11a88654 */
  goto L_11a88654;
L_11a8863c:;
  /* 11a8863c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8863f push edx */
  push32((uint32_t)(EDX));
  /* 11a88640 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11a88643 push eax */
  push32((uint32_t)(EAX));
  /* 11a88644 call 0x11a8eb10 */
  push32(0x11a88649u); f_11a8eb10();
  /* 11a88649 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8864c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8864f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a88652 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
L_11a88654:;
  /* 11a88654 mov esp, ebp */
  ESP = (EBP);
  /* 11a88656 pop ebp */
  EBP = (pop32());
  /* 11a88657 ret  */
  ESPCHK(0x11a88610u, _esp0);
  ESP += 4; return;
}

/* FUN_10008660 @ 0x11a88660 (118 bytes, 49 insns) */
void f_11a88660(void) {
  FTRACE(0x11a88660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88660 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88661 mov ebp, esp */
  EBP = (ESP);
  /* 11a88663 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a88666 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11a88669 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8866c lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11a8866f push ecx */
  push32((uint32_t)(ECX));
  /* 11a88670 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11a88673 push edx */
  push32((uint32_t)(EDX));
  /* 11a88674 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88677 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a8867a push ecx */
  push32((uint32_t)(ECX));
  /* 11a8867b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11a8867d push edx */
  push32((uint32_t)(EDX));
  /* 11a8867e call 0x11a8ec50 */
  push32(0x11a88683u); f_11a8ec50();
  /* 11a88683 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88686 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88689 push eax */
  push32((uint32_t)(EAX));
  /* 11a8868a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8868d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88690 push ecx */
  push32((uint32_t)(ECX));
  /* 11a88691 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88694 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a88696 cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88699 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11a8869c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8869f add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a886a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a886a3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a886a7 setg dl */
  DL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11a886aa add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a886ac push ecx */
  push32((uint32_t)(ECX));
  /* 11a886ad call 0x11a8eb50 */
  push32(0x11a886b2u); f_11a8eb50();
  /* 11a886b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a886b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a886b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a886ba push eax */
  push32((uint32_t)(EAX));
  /* 11a886bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a886be push ecx */
  push32((uint32_t)(ECX));
  /* 11a886bf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a886c2 push edx */
  push32((uint32_t)(EDX));
  /* 11a886c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a886c6 push eax */
  push32((uint32_t)(EAX));
  /* 11a886c7 call 0x11a886e0 */
  push32(0x11a886ccu); f_11a886e0();
  /* 11a886cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a886cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a886d2 mov esp, ebp */
  ESP = (EBP);
  /* 11a886d4 pop ebp */
  EBP = (pop32());
  /* 11a886d5 ret  */
  ESPCHK(0x11a88660u, _esp0);
  ESP += 4; return;
}

/* FUN_100086e0 @ 0x11a886e0 (358 bytes, 128 insns) */
void f_11a886e0(void) {
  FTRACE(0x11a886e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a886e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a886e1 mov ebp, esp */
  EBP = (ESP);
  /* 11a886e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a886e6 movsx eax, byte ptr [ebp + 0x18] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 11a886ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a886ec je 0x11a88717 */
  if (C.zf) goto L_11a88717;
  /* 11a886ee mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a886f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a886f3 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a886f6 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11a886f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a886fc add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a886fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a88701 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a88703 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88707 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11a8870a push ecx */
  push32((uint32_t)(ECX));
  /* 11a8870b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8870e push edx */
  push32((uint32_t)(EDX));
  /* 11a8870f call 0x11a88b50 */
  push32(0x11a88714u); f_11a88b50();
  /* 11a88714 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a88717:;
  /* 11a88717 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8871a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8871d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a88720 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88723 jne 0x11a88734 */
  if (!C.zf) goto L_11a88734;
  /* 11a88725 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88728 mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
  /* 11a8872b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8872e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88731 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a88734:;
  /* 11a88734 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88738 jle 0x11a88758 */
  if ((C.zf||C.sf!=C.of)) goto L_11a88758;
  /* 11a8873a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8873d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88740 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11a88743 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11a88745 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88748 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8874b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8874e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88751 mov al, byte ptr [0x11ab80d4] */
  AL = (r8((uint32_t)(0x11ab80d4)));
  /* 11a88756 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
L_11a88758:;
  /* 11a88758 push 0x11ab47a8 */
  push32((uint32_t)(0x11ab47a8u));
  /* 11a8875d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88760 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88763 movsx edx, byte ptr [ebp + 0x18] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 11a88767 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a88769 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8876b inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a8876c add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8876e push ecx */
  push32((uint32_t)(ECX));
  /* 11a8876f call 0x11a8c790 */
  push32(0x11a88774u); f_11a8c790();
  /* 11a88774 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88777 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8877a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8877e je 0x11a88786 */
  if (C.zf) goto L_11a88786;
  /* 11a88780 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88783 mov byte ptr [eax], 0x45 */
  w8((uint32_t)(EAX), (0x45u));
L_11a88786:;
  /* 11a88786 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88789 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8878c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8878f mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a88792 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11a88795 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a88798 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8879b je 0x11a8883f */
  if (C.zf) goto L_11a8883f;
  /* 11a887a1 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a887a4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a887a7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a887aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a887ad cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a887b1 jge 0x11a887c1 */
  if ((C.sf==C.of)) goto L_11a887c1;
  /* 11a887b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a887b6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a887b8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a887bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a887be mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
L_11a887c1:;
  /* 11a887c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a887c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a887c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a887ca cmp dword ptr [ebp - 8], 0x64 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a887ce jl 0x11a887f5 */
  if ((C.sf!=C.of)) goto L_11a887f5;
  /* 11a887d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a887d3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a887d4 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11a887d9 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a887db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a887de mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11a887e0 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a887e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a887e5 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11a887e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a887ea cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a887eb mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11a887f0 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a887f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11a887f5:;
  /* 11a887f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a887f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a887fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a887fe cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88802 jl 0x11a88829 */
  if ((C.sf!=C.of)) goto L_11a88829;
  /* 11a88804 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a88807 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a88808 mov ecx, 0xa */
  ECX = (0xau);
  /* 11a8880d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a8880f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88812 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11a88814 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a88816 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88819 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11a8881b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8881e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a8881f mov ecx, 0xa */
  ECX = (0xau);
  /* 11a88824 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a88826 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11a88829:;
  /* 11a88829 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8882c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8882f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a88832 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88835 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a88837 add cl, byte ptr [ebp - 8] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + -0x8))),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a8883a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8883d mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
L_11a8883f:;
  /* 11a8883f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88842 mov esp, ebp */
  ESP = (EBP);
  /* 11a88844 pop ebp */
  EBP = (pop32());
  /* 11a88845 ret  */
  ESPCHK(0x11a886e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008850 @ 0x11a88850 (106 bytes, 44 insns) */
void f_11a88850(void) {
  FTRACE(0x11a88850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88850 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88851 mov ebp, esp */
  EBP = (ESP);
  /* 11a88853 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a88856 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11a88859 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8885c lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11a8885f push ecx */
  push32((uint32_t)(ECX));
  /* 11a88860 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11a88863 push edx */
  push32((uint32_t)(EDX));
  /* 11a88864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88867 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a8886a push ecx */
  push32((uint32_t)(ECX));
  /* 11a8886b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11a8886d push edx */
  push32((uint32_t)(EDX));
  /* 11a8886e call 0x11a8ec50 */
  push32(0x11a88873u); f_11a8ec50();
  /* 11a88873 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88876 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88879 push eax */
  push32((uint32_t)(EAX));
  /* 11a8887a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8887d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a88880 add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88883 push edx */
  push32((uint32_t)(EDX));
  /* 11a88884 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88887 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a88889 cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8888c sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11a8888f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a88892 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88894 push edx */
  push32((uint32_t)(EDX));
  /* 11a88895 call 0x11a8eb50 */
  push32(0x11a8889au); f_11a8eb50();
  /* 11a8889a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8889d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8889f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a888a2 push eax */
  push32((uint32_t)(EAX));
  /* 11a888a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a888a6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a888a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a888aa push edx */
  push32((uint32_t)(EDX));
  /* 11a888ab call 0x11a888c0 */
  push32(0x11a888b0u); f_11a888c0();
  /* 11a888b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a888b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a888b6 mov esp, ebp */
  ESP = (EBP);
  /* 11a888b8 pop ebp */
  EBP = (pop32());
  /* 11a888b9 ret  */
  ESPCHK(0x11a88850u, _esp0);
  ESP += 4; return;
}

/* FUN_100088c0 @ 0x11a888c0 (317 bytes, 113 insns) */
void f_11a888c0(void) {
  FTRACE(0x11a888c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a888c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a888c1 mov ebp, esp */
  EBP = (ESP);
  /* 11a888c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a888c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a888c9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a888cc sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a888cf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a888d2 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 11a888d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a888d8 je 0x11a88913 */
  if (C.zf) goto L_11a88913;
  /* 11a888da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a888dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a888df cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a888e2 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11a888e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a888e8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a888ea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a888ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a888f0 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a888f3 jne 0x11a88913 */
  if (!C.zf) goto L_11a88913;
  /* 11a888f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a888f8 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a888fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a888fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a88901 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11a88904 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a88907 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8890a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8890d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a88910 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11a88913:;
  /* 11a88913 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88916 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a88919 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8891c cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8891f jne 0x11a88930 */
  if (!C.zf) goto L_11a88930;
  /* 11a88921 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88924 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11a88927 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8892a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8892d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a88930:;
  /* 11a88930 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a88933 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88937 jg 0x11a88958 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a88958;
  /* 11a88939 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8893b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8893e push ecx */
  push32((uint32_t)(ECX));
  /* 11a8893f call 0x11a88b50 */
  push32(0x11a88944u); f_11a88b50();
  /* 11a88944 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88947 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8894a mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11a8894d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88950 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88953 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a88956 jmp 0x11a88964 */
  goto L_11a88964;
L_11a88958:;
  /* 11a88958 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8895b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8895e add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88961 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a88964:;
  /* 11a88964 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88968 jle 0x11a889f6 */
  if ((C.zf||C.sf!=C.of)) goto L_11a889f6;
  /* 11a8896e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a88970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88973 push eax */
  push32((uint32_t)(EAX));
  /* 11a88974 call 0x11a88b50 */
  push32(0x11a88979u); f_11a88b50();
  /* 11a88979 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8897c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8897f mov dl, byte ptr [0x11ab80d4] */
  DL = (r8((uint32_t)(0x11ab80d4)));
  /* 11a88985 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11a88987 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8898a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8898d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a88990 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a88993 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88997 jge 0x11a889f6 */
  if ((C.sf==C.of)) goto L_11a889f6;
  /* 11a88999 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 11a8899d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8899f je 0x11a889ae */
  if (C.zf) goto L_11a889ae;
  /* 11a889a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a889a4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a889a7 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a889a9 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11a889ac jmp 0x11a889d4 */
  goto L_11a889d4;
L_11a889ae:;
  /* 11a889ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a889b1 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a889b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a889b6 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a889b9 jge 0x11a889c3 */
  if ((C.sf==C.of)) goto L_11a889c3;
  /* 11a889bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a889be mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a889c1 jmp 0x11a889ce */
  goto L_11a889ce;
L_11a889c3:;
  /* 11a889c3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a889c6 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a889c9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a889cb mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11a889ce:;
  /* 11a889ce mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a889d1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11a889d4:;
  /* 11a889d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a889d7 push edx */
  push32((uint32_t)(EDX));
  /* 11a889d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a889db push eax */
  push32((uint32_t)(EAX));
  /* 11a889dc call 0x11a88b50 */
  push32(0x11a889e1u); f_11a88b50();
  /* 11a889e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a889e4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a889e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11a889e8 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11a889ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a889ed push edx */
  push32((uint32_t)(EDX));
  /* 11a889ee call 0x11a8ee40 */
  push32(0x11a889f3u); f_11a8ee40();
  /* 11a889f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a889f6:;
  /* 11a889f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a889f9 mov esp, ebp */
  ESP = (EBP);
  /* 11a889fb pop ebp */
  EBP = (pop32());
  /* 11a889fc ret  */
  ESPCHK(0x11a888c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a00 @ 0x11a88a00 (229 bytes, 89 insns) */
void f_11a88a00(void) {
  FTRACE(0x11a88a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88a01 mov ebp, esp */
  EBP = (ESP);
  /* 11a88a03 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a88a06 mov byte ptr [ebp - 0x30], 0 */
  w8((uint32_t)(EBP + -0x30), (0x0u));
  /* 11a88a0a lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11a88a0d mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11a88a10 lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11a88a13 push ecx */
  push32((uint32_t)(ECX));
  /* 11a88a14 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11a88a17 push edx */
  push32((uint32_t)(EDX));
  /* 11a88a18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88a1b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a88a1e push ecx */
  push32((uint32_t)(ECX));
  /* 11a88a1f mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11a88a21 push edx */
  push32((uint32_t)(EDX));
  /* 11a88a22 call 0x11a8ec50 */
  push32(0x11a88a27u); f_11a8ec50();
  /* 11a88a27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88a2a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a88a2d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a88a30 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a88a33 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 11a88a36 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a88a39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a88a3b cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88a3e sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11a88a41 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a88a44 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88a46 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a88a49 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a88a4c push edx */
  push32((uint32_t)(EDX));
  /* 11a88a4d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a88a50 push eax */
  push32((uint32_t)(EAX));
  /* 11a88a51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88a54 push ecx */
  push32((uint32_t)(ECX));
  /* 11a88a55 call 0x11a8eb50 */
  push32(0x11a88a5au); f_11a8eb50();
  /* 11a88a5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88a5d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a88a60 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a88a63 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a88a66 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a88a68 cmp dword ptr [ebp - 0x34], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88a6b setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11a88a6e mov byte ptr [ebp - 0x30], cl */
  w8((uint32_t)(EBP + -0x30), (CL));
  /* 11a88a71 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a88a74 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a88a77 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a88a7a mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11a88a7d cmp dword ptr [ebp - 0x34], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88a81 jl 0x11a88a8b */
  if ((C.sf!=C.of)) goto L_11a88a8b;
  /* 11a88a83 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11a88a86 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88a89 jl 0x11a88aa7 */
  if ((C.sf!=C.of)) goto L_11a88aa7;
L_11a88a8b:;
  /* 11a88a8b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a88a8d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a88a90 push edx */
  push32((uint32_t)(EDX));
  /* 11a88a91 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a88a94 push eax */
  push32((uint32_t)(EAX));
  /* 11a88a95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a88a98 push ecx */
  push32((uint32_t)(ECX));
  /* 11a88a99 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a88a9c push edx */
  push32((uint32_t)(EDX));
  /* 11a88a9d call 0x11a886e0 */
  push32(0x11a88aa2u); f_11a886e0();
  /* 11a88aa2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88aa5 jmp 0x11a88ae1 */
  goto L_11a88ae1;
L_11a88aa7:;
  /* 11a88aa7 movsx eax, byte ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x30))));
  /* 11a88aab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a88aad je 0x11a88acb */
  if (C.zf) goto L_11a88acb;
L_11a88aaf:;
  /* 11a88aaf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88ab2 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a88ab5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88ab8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88abb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a88abe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a88ac0 je 0x11a88ac4 */
  if (C.zf) goto L_11a88ac4;
  /* 11a88ac2 jmp 0x11a88aaf */
  goto L_11a88aaf;
L_11a88ac4:;
  /* 11a88ac4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a88ac7 mov byte ptr [ecx - 2], 0 */
  w8((uint32_t)(ECX + -0x2), (0x0u));
L_11a88acb:;
  /* 11a88acb push 1 */
  push32((uint32_t)(0x1u));
  /* 11a88acd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a88ad0 push edx */
  push32((uint32_t)(EDX));
  /* 11a88ad1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a88ad4 push eax */
  push32((uint32_t)(EAX));
  /* 11a88ad5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a88ad8 push ecx */
  push32((uint32_t)(ECX));
  /* 11a88ad9 call 0x11a888c0 */
  push32(0x11a88adeu); f_11a888c0();
  /* 11a88ade add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a88ae1:;
  /* 11a88ae1 mov esp, ebp */
  ESP = (EBP);
  /* 11a88ae3 pop ebp */
  EBP = (pop32());
  /* 11a88ae4 ret  */
  ESPCHK(0x11a88a00u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x11a88af0 (95 bytes, 40 insns) */
void f_11a88af0(void) {
  FTRACE(0x11a88af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88af1 mov ebp, esp */
  EBP = (ESP);
  /* 11a88af3 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88af7 je 0x11a88aff */
  if (C.zf) goto L_11a88aff;
  /* 11a88af9 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88afd jne 0x11a88b19 */
  if (!C.zf) goto L_11a88b19;
L_11a88aff:;
  /* 11a88aff mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a88b02 push eax */
  push32((uint32_t)(EAX));
  /* 11a88b03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a88b06 push ecx */
  push32((uint32_t)(ECX));
  /* 11a88b07 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a88b0a push edx */
  push32((uint32_t)(EDX));
  /* 11a88b0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88b0e push eax */
  push32((uint32_t)(EAX));
  /* 11a88b0f call 0x11a88660 */
  push32(0x11a88b14u); f_11a88660();
  /* 11a88b14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88b17 jmp 0x11a88b4d */
  goto L_11a88b4d;
L_11a88b19:;
  /* 11a88b19 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88b1d jne 0x11a88b35 */
  if (!C.zf) goto L_11a88b35;
  /* 11a88b1f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a88b22 push ecx */
  push32((uint32_t)(ECX));
  /* 11a88b23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a88b26 push edx */
  push32((uint32_t)(EDX));
  /* 11a88b27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88b2a push eax */
  push32((uint32_t)(EAX));
  /* 11a88b2b call 0x11a88850 */
  push32(0x11a88b30u); f_11a88850();
  /* 11a88b30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88b33 jmp 0x11a88b4d */
  goto L_11a88b4d;
L_11a88b35:;
  /* 11a88b35 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a88b38 push ecx */
  push32((uint32_t)(ECX));
  /* 11a88b39 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a88b3c push edx */
  push32((uint32_t)(EDX));
  /* 11a88b3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a88b40 push eax */
  push32((uint32_t)(EAX));
  /* 11a88b41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88b44 push ecx */
  push32((uint32_t)(ECX));
  /* 11a88b45 call 0x11a88a00 */
  push32(0x11a88b4au); f_11a88a00();
  /* 11a88b4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a88b4d:;
  /* 11a88b4d pop ebp */
  EBP = (pop32());
  /* 11a88b4e ret  */
  ESPCHK(0x11a88af0u, _esp0);
  ESP += 4; return;
}

/* __shift @ 0x11a88b50 (46 bytes, 19 insns) */
void f_11a88b50(void) {
  FTRACE(0x11a88b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88b51 mov ebp, esp */
  EBP = (ESP);
  /* 11a88b53 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88b57 je 0x11a88b7c */
  if (C.zf) goto L_11a88b7c;
  /* 11a88b59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88b5c push eax */
  push32((uint32_t)(EAX));
  /* 11a88b5d call 0x11a8c610 */
  push32(0x11a88b62u); f_11a8c610();
  /* 11a88b62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88b65 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88b68 push eax */
  push32((uint32_t)(EAX));
  /* 11a88b69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88b6c push ecx */
  push32((uint32_t)(ECX));
  /* 11a88b6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88b70 add edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88b73 push edx */
  push32((uint32_t)(EDX));
  /* 11a88b74 call 0x11a8eea0 */
  push32(0x11a88b79u); f_11a8eea0();
  /* 11a88b79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a88b7c:;
  /* 11a88b7c pop ebp */
  EBP = (pop32());
  /* 11a88b7d ret  */
  ESPCHK(0x11a88b50u, _esp0);
  ESP += 4; return;
}

/* __trandisp1 @ 0x11a88b80 (103 bytes, 30 insns) */
void f_11a88b80(void) {
  FTRACE(0x11a88b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88b80 cmp byte ptr [edx + 0xe], 5 */
  { uint32_t _a=(r8((uint32_t)(EDX + 0xe))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a88b84 jne 0x11a88b97 */
  if (!C.zf) goto L_11a88b97;
  /* 11a88b86 mov bx, word ptr [ebp - 0xa4] */
  BX = (r16((uint32_t)(EBP + -0xa4)));
  /* 11a88b8d or bh, 2 */
  { uint32_t _r=(C.b.b.h)|(0x2u); C.b.b.h = (_r); fl_logic(_r,8); }
  /* 11a88b90 and bh, 0xfe */
  { uint32_t _r=(C.b.b.h)&(0xfeu); C.b.b.h = (_r); fl_logic(_r,8); }
  /* 11a88b93 mov bl, 0x3f */
  BL = (0x3fu);
  /* 11a88b95 jmp 0x11a88b9b */
  goto L_11a88b9b;
L_11a88b97:;
  /* 11a88b97 mov bx, 0x133f */
  BX = (0x133fu);
L_11a88b9b:;
  /* 11a88b9b mov word ptr [ebp - 0xa2], bx */
  w16((uint32_t)(EBP + -0xa2), (BX));
  /* 11a88ba2 fldcw word ptr [ebp - 0xa2] */
  C.fcw = r16((uint32_t)(EBP + -0xa2));
  /* 11a88ba8 mov ebx, 0x11ab7b3c */
  EBX = (0x11ab7b3cu);
  /* 11a88bad fxam  */
  { double _v=FPU_ST(0); C.fsw_c1=(__builtin_signbit(_v)!=0); if(_v!=_v){C.fsw_c3=0;C.fsw_c2=1;C.fsw_c0=1;} else if(__builtin_isinf(_v)){C.fsw_c3=0;C.fsw_c2=1;C.fsw_c0=1;} else if(_v==0.0){C.fsw_c3=1;C.fsw_c2=0;C.fsw_c0=0;} else {C.fsw_c3=0;C.fsw_c2=1;C.fsw_c0=0;} }
  /* 11a88baf mov dword ptr [ebp - 0x94], edx */
  w32((uint32_t)(EBP + -0x94), (EDX));
  /* 11a88bb5 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a88bb6 fnstsw word ptr [ebp - 0xa0] */
  w16((uint32_t)(EBP + -0xa0), fpu_status());
  /* 11a88bbc mov byte ptr [ebp - 0x90], 0 */
  w8((uint32_t)(EBP + -0x90), (0x0u));
  /* 11a88bc3 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a88bc4 mov cl, byte ptr [ebp - 0x9f] */
  CL = (r8((uint32_t)(EBP + -0x9f)));
  /* 11a88bca shl cl, 1 */
  CL = (sh_shl((uint32_t)(CL), (0x1u)&0x1f, 8));
  /* 11a88bcc sar cl, 1 */
  CL = (sh_sar((uint32_t)(CL), (0x1u)&0x1f, 8));
  /* 11a88bce rol cl, 1 */
  { uint32_t _n=0x1u&0x7; if(_n){ uint32_t _r=(uint32_t)((uint8_t)(((uint8_t)(CL)<<((0x1u)&7))|((uint8_t)(CL)>>((8-((0x1u)&7))&7)))); CL = (_r); C.cf=_r&1; C.of=((_r>>7)&1)^(C.cf); } }
  /* 11a88bd0 mov al, cl */
  AL = (CL);
  /* 11a88bd2 and al, 0xf */
  { uint32_t _r=(AL)&(0xfu); AL = (_r); fl_logic(_r,8); }
  /* 11a88bd4 xlatb  */
  x86_unimpl("xlatb @ 0x11a88bd4");
  /* 11a88bd5 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11a88bd8 and ecx, 0x404 */
  { uint32_t _r=(ECX)&(0x404u); ECX = (_r); fl_logic(_r,32); }
  /* 11a88bde mov ebx, edx */
  EBX = (EDX);
  /* 11a88be0 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88be2 add ebx, 0x10 */
  { uint32_t _a=(EBX),_b=(0x10u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88be5 jmp dword ptr [ebx] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX)))); return;
}

/* __trandisp2 @ 0x11a88be7 (140 bytes, 45 insns) */
void f_11a88be7(void) {
  FTRACE(0x11a88be7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88be7 cmp byte ptr [edx + 0xe], 5 */
  { uint32_t _a=(r8((uint32_t)(EDX + 0xe))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a88beb jne 0x11a88bfe */
  if (!C.zf) goto L_11a88bfe;
  /* 11a88bed mov bx, word ptr [ebp - 0xa4] */
  BX = (r16((uint32_t)(EBP + -0xa4)));
  /* 11a88bf4 or bh, 2 */
  { uint32_t _r=(C.b.b.h)|(0x2u); C.b.b.h = (_r); fl_logic(_r,8); }
  /* 11a88bf7 and bh, 0xfe */
  { uint32_t _r=(C.b.b.h)&(0xfeu); C.b.b.h = (_r); fl_logic(_r,8); }
  /* 11a88bfa mov bl, 0x3f */
  BL = (0x3fu);
  /* 11a88bfc jmp 0x11a88c02 */
  goto L_11a88c02;
L_11a88bfe:;
  /* 11a88bfe mov bx, 0x133f */
  BX = (0x133fu);
L_11a88c02:;
  /* 11a88c02 mov word ptr [ebp - 0xa2], bx */
  w16((uint32_t)(EBP + -0xa2), (BX));
  /* 11a88c09 fldcw word ptr [ebp - 0xa2] */
  C.fcw = r16((uint32_t)(EBP + -0xa2));
  /* 11a88c0f mov ebx, 0x11ab7b3c */
  EBX = (0x11ab7b3cu);
  /* 11a88c14 fxam  */
  { double _v=FPU_ST(0); C.fsw_c1=(__builtin_signbit(_v)!=0); if(_v!=_v){C.fsw_c3=0;C.fsw_c2=1;C.fsw_c0=1;} else if(__builtin_isinf(_v)){C.fsw_c3=0;C.fsw_c2=1;C.fsw_c0=1;} else if(_v==0.0){C.fsw_c3=1;C.fsw_c2=0;C.fsw_c0=0;} else {C.fsw_c3=0;C.fsw_c2=1;C.fsw_c0=0;} }
  /* 11a88c16 mov dword ptr [ebp - 0x94], edx */
  w32((uint32_t)(EBP + -0x94), (EDX));
  /* 11a88c1c wait  */
  /* wait (no observable integer/reg state) */
  /* 11a88c1d fnstsw word ptr [ebp - 0xa0] */
  w16((uint32_t)(EBP + -0xa0), fpu_status());
  /* 11a88c23 mov byte ptr [ebp - 0x90], 0 */
  w8((uint32_t)(EBP + -0x90), (0x0u));
  /* 11a88c2a fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
  /* 11a88c2c mov cl, byte ptr [ebp - 0x9f] */
  CL = (r8((uint32_t)(EBP + -0x9f)));
  /* 11a88c32 fxam  */
  { double _v=FPU_ST(0); C.fsw_c1=(__builtin_signbit(_v)!=0); if(_v!=_v){C.fsw_c3=0;C.fsw_c2=1;C.fsw_c0=1;} else if(__builtin_isinf(_v)){C.fsw_c3=0;C.fsw_c2=1;C.fsw_c0=1;} else if(_v==0.0){C.fsw_c3=1;C.fsw_c2=0;C.fsw_c0=0;} else {C.fsw_c3=0;C.fsw_c2=1;C.fsw_c0=0;} }
  /* 11a88c34 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a88c35 fnstsw word ptr [ebp - 0xa0] */
  w16((uint32_t)(EBP + -0xa0), fpu_status());
  /* 11a88c3b fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
  /* 11a88c3d mov ch, byte ptr [ebp - 0x9f] */
  C.c.b.h = (r8((uint32_t)(EBP + -0x9f)));
  /* 11a88c43 shl ch, 1 */
  C.c.b.h = (sh_shl((uint32_t)(C.c.b.h), (0x1u)&0x1f, 8));
  /* 11a88c45 sar ch, 1 */
  C.c.b.h = (sh_sar((uint32_t)(C.c.b.h), (0x1u)&0x1f, 8));
  /* 11a88c47 rol ch, 1 */
  { uint32_t _n=0x1u&0x7; if(_n){ uint32_t _r=(uint32_t)((uint8_t)(((uint8_t)(C.c.b.h)<<((0x1u)&7))|((uint8_t)(C.c.b.h)>>((8-((0x1u)&7))&7)))); C.c.b.h = (_r); C.cf=_r&1; C.of=((_r>>7)&1)^(C.cf); } }
  /* 11a88c49 mov al, ch */
  AL = (C.c.b.h);
  /* 11a88c4b and al, 0xf */
  { uint32_t _r=(AL)&(0xfu); AL = (_r); fl_logic(_r,8); }
  /* 11a88c4d xlatb  */
  x86_unimpl("xlatb @ 0x11a88c4d");
  /* 11a88c4e mov ah, al */
  AH = (AL);
  /* 11a88c50 shl cl, 1 */
  CL = (sh_shl((uint32_t)(CL), (0x1u)&0x1f, 8));
  /* 11a88c52 sar cl, 1 */
  CL = (sh_sar((uint32_t)(CL), (0x1u)&0x1f, 8));
  /* 11a88c54 rol cl, 1 */
  { uint32_t _n=0x1u&0x7; if(_n){ uint32_t _r=(uint32_t)((uint8_t)(((uint8_t)(CL)<<((0x1u)&7))|((uint8_t)(CL)>>((8-((0x1u)&7))&7)))); CL = (_r); C.cf=_r&1; C.of=((_r>>7)&1)^(C.cf); } }
  /* 11a88c56 mov al, cl */
  AL = (CL);
  /* 11a88c58 and al, 0xf */
  { uint32_t _r=(AL)&(0xfu); AL = (_r); fl_logic(_r,8); }
  /* 11a88c5a xlatb  */
  x86_unimpl("xlatb @ 0x11a88c5a");
  /* 11a88c5b shl ah, 1 */
  AH = (sh_shl((uint32_t)(AH), (0x1u)&0x1f, 8));
  /* 11a88c5d shl ah, 1 */
  AH = (sh_shl((uint32_t)(AH), (0x1u)&0x1f, 8));
  /* 11a88c5f or al, ah */
  { uint32_t _r=(AL)|(AH); AL = (_r); fl_logic(_r,8); }
  /* 11a88c61 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11a88c64 and ecx, 0x404 */
  { uint32_t _r=(ECX)&(0x404u); ECX = (_r); fl_logic(_r,32); }
  /* 11a88c6a mov ebx, edx */
  EBX = (EDX);
  /* 11a88c6c add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88c6e add ebx, 0x10 */
  { uint32_t _a=(EBX),_b=(0x10u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88c71 jmp dword ptr [ebx] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX)))); return;
}

/* FUN_10008c86 @ 0x11a88c86 (5 bytes, 3 insns) */
void f_11a88c86(void) {
  FTRACE(0x11a88c86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88c86 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11a88c88 fldz  */
  fpu_push(0.0);
  /* 11a88c8a ret  */
  ESPCHK(0x11a88c86u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d43 @ 0x11a88d43 (7 bytes, 4 insns) */
void f_11a88d43(void) {
  FTRACE(0x11a88d43u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88d43 or cl, cl */
  { uint32_t _r=(CL)|(CL); CL = (_r); fl_logic(_r,8); }
  /* 11a88d45 je 0x11a88d49 */
  if (C.zf) goto L_11a88d49;
  /* 11a88d47 fchs  */
  FPU_ST(0) = -FPU_ST(0);
L_11a88d49:;
  /* 11a88d49 ret  */
  ESPCHK(0x11a88d43u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d7c @ 0x11a88d7c (25 bytes, 7 insns) */
void f_11a88d7c(void) {
  FTRACE(0x11a88d7cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88d7c test eax, 0x80000 */
  { uint32_t _r=(EAX)&(0x80000u); fl_logic(_r,32); }
  /* 11a88d81 je 0x11a88d89 */
  if (C.zf) goto L_11a88d89;
  /* 11a88d83 mov eax, 7 */
  EAX = (0x7u);
  /* 11a88d88 ret  */
  ESPCHK(0x11a88d7cu, _esp0);
  ESP += 4; return;
L_11a88d89:;
  /* 11a88d89 fadd qword ptr [0x11ab47b0] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x11ab47b0)));
  /* 11a88d8f mov eax, 1 */
  EAX = (0x1u);
  /* 11a88d94 ret  */
  ESPCHK(0x11a88d7cu, _esp0);
  ESP += 4; return;
}

/* __fload_withFB @ 0x11a88d95 (67 bytes, 21 insns) */
void f_11a88d95(void) {
  FTRACE(0x11a88d95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88d95 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a88d98 and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 11a88d9d cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88da2 je 0x11a88da7 */
  if (C.zf) goto L_11a88da7;
  /* 11a88da4 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 11a88da6 ret  */
  ESPCHK(0x11a88d95u, _esp0);
  ESP += 4; return;
L_11a88da7:;
  /* 11a88da7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a88daa sub esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a88dad or eax, 0x7fff0000 */
  { uint32_t _r=(EAX)|(0x7fff0000u); EAX = (_r); fl_logic(_r,32); }
  /* 11a88db2 mov dword ptr [esp + 6], eax */
  w32((uint32_t)(ESP + 0x6), (EAX));
  /* 11a88db6 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a88db9 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11a88dbb shld eax, ecx, 0xb */
  EAX = (sh_shld((uint32_t)(EAX),(uint32_t)(ECX),(0xbu)&0x1f,32));
  /* 11a88dbf shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 11a88dc2 mov dword ptr [esp + 4], eax */
  w32((uint32_t)(ESP + 0x4), (EAX));
  /* 11a88dc6 mov dword ptr [esp], ecx */
  w32((uint32_t)(ESP), (ECX));
  /* 11a88dc9 fld xword ptr [esp] */
  fpu_push(rf80((uint32_t)(ESP)));
  /* 11a88dcc add esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88dcf test eax, 0 */
  { uint32_t _r=(EAX)&(0x0u); fl_logic(_r,32); }
  /* 11a88dd4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a88dd7 ret  */
  ESPCHK(0x11a88d95u, _esp0);
  ESP += 4; return;
}

/* FUN_10008dd8 @ 0x11a88dd8 (22 bytes, 7 insns) */
void f_11a88dd8(void) {
  FTRACE(0x11a88dd8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88dd8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a88ddc and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 11a88de1 cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88de6 je 0x11a88de9 */
  if (C.zf) goto L_11a88de9;
  /* 11a88de8 ret  */
  ESPCHK(0x11a88dd8u, _esp0);
  ESP += 4; return;
L_11a88de9:;
  /* 11a88de9 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a88ded ret  */
  ESPCHK(0x11a88dd8u, _esp0);
  ESP += 4; return;
}

/* __math_exit @ 0x11a88dfb (42 bytes, 16 insns) */
void f_11a88dfb(void) {
  FTRACE(0x11a88dfbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88dfb mov ax, word ptr [esp] */
  AX = (r16((uint32_t)(ESP)));
  /* 11a88dff cmp ax, 0x27f */
  { uint32_t _a=(AX),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a88e03 je 0x11a88e23 */
  if (C.zf) goto L_11a88e23;
  /* 11a88e05 and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 11a88e09 je 0x11a88e20 */
  if (C.zf) goto L_11a88e20;
  /* 11a88e0b wait  */
  /* wait (no observable integer/reg state) */
  /* 11a88e0c fnstsw ax */
  AX = fpu_status();
  /* 11a88e0e and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 11a88e12 je 0x11a88e20 */
  if (C.zf) goto L_11a88e20;
  /* 11a88e14 mov eax, 8 */
  EAX = (0x8u);
  /* 11a88e19 call 0x11a88ef7 */
  push32(0x11a88e1eu); f_11a88ef7();
  /* 11a88e1e pop edx */
  EDX = (pop32());
  /* 11a88e1f ret  */
  ESPCHK(0x11a88dfbu, _esp0);
  ESP += 4; return;
L_11a88e20:;
  /* 11a88e20 fldcw word ptr [esp] */
  C.fcw = r16((uint32_t)(ESP));
L_11a88e23:;
  /* 11a88e23 pop edx */
  EDX = (pop32());
  /* 11a88e24 ret  */
  ESPCHK(0x11a88dfbu, _esp0);
  ESP += 4; return;
}

/* FUN_10008ee0 @ 0x11a88ee0 (23 bytes, 9 insns) */
void f_11a88ee0(void) {
  FTRACE(0x11a88ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11a88ee3 add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88ee6 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a88ee9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a88eec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a88eef mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a88ef2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a88ef5 jmp 0x11a88f00 */
  jmp_ind(0x11a88f00u); return;
}

/* __startOneArgErrorHandling @ 0x11a88ef7 (60 bytes, 23 insns) */
void f_11a88ef7(void) {
  FTRACE(0x11a88ef7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88ef7 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88ef8 mov ebp, esp */
  EBP = (ESP);
  /* 11a88efa add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88efd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a88f00 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11a88f03 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11a88f06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a88f09 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a88f0c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a88f0f mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a88f12 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11a88f15 lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 11a88f18 push eax */
  push32((uint32_t)(EAX));
  /* 11a88f19 push ecx */
  push32((uint32_t)(ECX));
  /* 11a88f1a push edx */
  push32((uint32_t)(EDX));
  /* 11a88f1b call 0x11a8dab0 */
  push32(0x11a88f20u); f_11a8dab0();
  /* 11a88f20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88f23 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11a88f26 cmp word ptr [ebp + 8], 0x27f */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a88f2c je 0x11a88f31 */
  if (C.zf) goto L_11a88f31;
  /* 11a88f2e fldcw word ptr [ebp + 8] */
  C.fcw = r16((uint32_t)(EBP + 0x8));
L_11a88f31:;
  /* 11a88f31 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a88f32 ret  */
  ESPCHK(0x11a88ef7u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f40 @ 0x11a88f40 (56 bytes, 15 insns) */
void f_11a88f40(void) {
  FTRACE(0x11a88f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88f41 mov ebp, esp */
  EBP = (ESP);
  /* 11a88f43 cmp dword ptr [0x11ab7a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ab7a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a88f4a je 0x11a88f52 */
  if (C.zf) goto L_11a88f52;
  /* 11a88f4c call dword ptr [0x11ab7a38] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ab7a38))), 0x11a88f52u);
L_11a88f52:;
  /* 11a88f52 push 0x11ab7418 */
  push32((uint32_t)(0x11ab7418u));
  /* 11a88f57 push 0x11ab7208 */
  push32((uint32_t)(0x11ab7208u));
  /* 11a88f5c call 0x11a89110 */
  push32(0x11a88f61u); f_11a89110();
  /* 11a88f61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88f64 push 0x11ab7104 */
  push32((uint32_t)(0x11ab7104u));
  /* 11a88f69 push 0x11ab7000 */
  push32((uint32_t)(0x11ab7000u));
  /* 11a88f6e call 0x11a89110 */
  push32(0x11a88f73u); f_11a89110();
  /* 11a88f73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88f76 pop ebp */
  EBP = (pop32());
  /* 11a88f77 ret  */
  ESPCHK(0x11a88f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f80 @ 0x11a88f80 (21 bytes, 10 insns) */
void f_11a88f80(void) {
  FTRACE(0x11a88f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88f81 mov ebp, esp */
  EBP = (ESP);
  /* 11a88f83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a88f85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a88f87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88f8a push eax */
  push32((uint32_t)(EAX));
  /* 11a88f8b call 0x11a89000 */
  push32(0x11a88f90u); f_11a89000();
  /* 11a88f90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88f93 pop ebp */
  EBP = (pop32());
  /* 11a88f94 ret  */
  ESPCHK(0x11a88f80u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11a88fa0 (21 bytes, 10 insns) */
void f_11a88fa0(void) {
  FTRACE(0x11a88fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11a88fa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a88fa5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a88fa7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a88faa push eax */
  push32((uint32_t)(EAX));
  /* 11a88fab call 0x11a89000 */
  push32(0x11a88fb0u); f_11a89000();
  /* 11a88fb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88fb3 pop ebp */
  EBP = (pop32());
  /* 11a88fb4 ret  */
  ESPCHK(0x11a88fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fc0 @ 0x11a88fc0 (19 bytes, 9 insns) */
void f_11a88fc0(void) {
  FTRACE(0x11a88fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88fc1 mov ebp, esp */
  EBP = (ESP);
  /* 11a88fc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a88fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a88fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a88fc9 call 0x11a89000 */
  push32(0x11a88fceu); f_11a89000();
  /* 11a88fce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88fd1 pop ebp */
  EBP = (pop32());
  /* 11a88fd2 ret  */
  ESPCHK(0x11a88fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fe0 @ 0x11a88fe0 (19 bytes, 9 insns) */
void f_11a88fe0(void) {
  FTRACE(0x11a88fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a88fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a88fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11a88fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a88fe5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a88fe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a88fe9 call 0x11a89000 */
  push32(0x11a88feeu); f_11a89000();
  /* 11a88fee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a88ff1 pop ebp */
  EBP = (pop32());
  /* 11a88ff2 ret  */
  ESPCHK(0x11a88fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009000 @ 0x11a89000 (227 bytes, 61 insns) */
void f_11a89000(void) {
  FTRACE(0x11a89000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a89000 push ebp */
  push32((uint32_t)(EBP));
  /* 11a89001 mov ebp, esp */
  EBP = (ESP);
  /* 11a89003 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89004 call 0x11a890f0 */
  push32(0x11a89009u); f_11a890f0();
  /* 11a89009 cmp dword ptr [0x11aba0fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89010 jne 0x11a89023 */
  if (!C.zf) goto L_11a89023;
  /* 11a89012 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89015 push eax */
  push32((uint32_t)(EAX));
  /* 11a89016 call dword ptr [0x11abc2cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2cc))), 0x11a8901cu);
  /* 11a8901c push eax */
  push32((uint32_t)(EAX));
  /* 11a8901d call dword ptr [0x11abc3b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3b4))), 0x11a89023u);
L_11a89023:;
  /* 11a89023 mov dword ptr [0x11aba0f8], 1 */
  w32((uint32_t)(0x11aba0f8), (0x1u));
  /* 11a8902d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11a89030 mov byte ptr [0x11aba0f4], cl */
  w8((uint32_t)(0x11aba0f4), (CL));
  /* 11a89036 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8903a jne 0x11a89083 */
  if (!C.zf) goto L_11a89083;
  /* 11a8903c cmp dword ptr [0x11abbbd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11abbbd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89043 je 0x11a89071 */
  if (C.zf) goto L_11a89071;
  /* 11a89045 mov edx, dword ptr [0x11abbbd4] */
  EDX = (r32((uint32_t)(0x11abbbd4)));
  /* 11a8904b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a8904e:;
  /* 11a8904e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89051 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a89054 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a89057 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8905a cmp ecx, dword ptr [0x11abbbd8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11abbbd8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89060 jb 0x11a89071 */
  if (C.cf) goto L_11a89071;
  /* 11a89062 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89065 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89068 je 0x11a8906f */
  if (C.zf) goto L_11a8906f;
  /* 11a8906a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8906d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11a8906fu);
L_11a8906f:;
  /* 11a8906f jmp 0x11a8904e */
  goto L_11a8904e;
L_11a89071:;
  /* 11a89071 push 0x11ab7724 */
  push32((uint32_t)(0x11ab7724u));
  /* 11a89076 push 0x11ab751c */
  push32((uint32_t)(0x11ab751cu));
  /* 11a8907b call 0x11a89110 */
  push32(0x11a89080u); f_11a89110();
  /* 11a89080 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a89083:;
  /* 11a89083 push 0x11ab792c */
  push32((uint32_t)(0x11ab792cu));
  /* 11a89088 push 0x11ab7828 */
  push32((uint32_t)(0x11ab7828u));
  /* 11a8908d call 0x11a89110 */
  push32(0x11a89092u); f_11a89110();
  /* 11a89092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89095 cmp dword ptr [0x11aba100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8909c jne 0x11a890be */
  if (!C.zf) goto L_11a890be;
  /* 11a8909e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a890a0 call 0x11a8acf0 */
  push32(0x11a890a5u); f_11a8acf0();
  /* 11a890a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a890a8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11a890ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a890ad je 0x11a890be */
  if (C.zf) goto L_11a890be;
  /* 11a890af mov dword ptr [0x11aba100], 1 */
  w32((uint32_t)(0x11aba100), (0x1u));
  /* 11a890b9 call 0x11a8b600 */
  push32(0x11a890beu); f_11a8b600();
L_11a890be:;
  /* 11a890be cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a890c2 je 0x11a890cb */
  if (C.zf) goto L_11a890cb;
  /* 11a890c4 call 0x11a89100 */
  push32(0x11a890c9u); f_11a89100();
  /* 11a890c9 jmp 0x11a890df */
  goto L_11a890df;
L_11a890cb:;
  /* 11a890cb mov dword ptr [0x11aba0fc], 1 */
  w32((uint32_t)(0x11aba0fc), (0x1u));
  /* 11a890d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a890d8 push ecx */
  push32((uint32_t)(ECX));
  /* 11a890d9 call dword ptr [0x11abc3b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3b0))), 0x11a890dfu);
L_11a890df:;
  /* 11a890df mov esp, ebp */
  ESP = (EBP);
  /* 11a890e1 pop ebp */
  EBP = (pop32());
  /* 11a890e2 ret  */
  ESPCHK(0x11a89000u, _esp0);
  ESP += 4; return;
}

/* FUN_100090f0 @ 0x11a890f0 (15 bytes, 7 insns) */
void f_11a890f0(void) {
  FTRACE(0x11a890f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a890f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a890f1 mov ebp, esp */
  EBP = (ESP);
  /* 11a890f3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a890f5 call 0x11a8f2d0 */
  push32(0x11a890fau); f_11a8f2d0();
  /* 11a890fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a890fd pop ebp */
  EBP = (pop32());
  /* 11a890fe ret  */
  ESPCHK(0x11a890f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009100 @ 0x11a89100 (15 bytes, 7 insns) */
void f_11a89100(void) {
  FTRACE(0x11a89100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a89100 push ebp */
  push32((uint32_t)(EBP));
  /* 11a89101 mov ebp, esp */
  EBP = (ESP);
  /* 11a89103 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a89105 call 0x11a8f370 */
  push32(0x11a8910au); f_11a8f370();
  /* 11a8910a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8910d pop ebp */
  EBP = (pop32());
  /* 11a8910e ret  */
  ESPCHK(0x11a89100u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11a89110 (37 bytes, 16 insns) */
void f_11a89110(void) {
  FTRACE(0x11a89110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a89110 push ebp */
  push32((uint32_t)(EBP));
  /* 11a89111 mov ebp, esp */
  EBP = (ESP);
L_11a89113:;
  /* 11a89113 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89116 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89119 jae 0x11a89133 */
  if (!C.cf) goto L_11a89133;
  /* 11a8911b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8911e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89121 je 0x11a89128 */
  if (C.zf) goto L_11a89128;
  /* 11a89123 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89126 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11a89128u);
L_11a89128:;
  /* 11a89128 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8912b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8912e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a89131 jmp 0x11a89113 */
  goto L_11a89113;
L_11a89133:;
  /* 11a89133 pop ebp */
  EBP = (pop32());
  /* 11a89134 ret  */
  ESPCHK(0x11a89110u, _esp0);
  ESP += 4; return;
}

/* FUN_10009140 @ 0x11a89140 (130 bytes, 42 insns) */
void f_11a89140(void) {
  FTRACE(0x11a89140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a89140 push ebp */
  push32((uint32_t)(EBP));
  /* 11a89141 mov ebp, esp */
  EBP = (ESP);
  /* 11a89143 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89144 call 0x11a8f1f0 */
  push32(0x11a89149u); f_11a8f1f0();
  /* 11a89149 call dword ptr [0x11abc3c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3c4))), 0x11a8914fu);
  /* 11a8914f mov dword ptr [0x11ab7b50], eax */
  w32((uint32_t)(0x11ab7b50), (EAX));
  /* 11a89154 cmp dword ptr [0x11ab7b50], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11ab7b50))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8915b jne 0x11a89161 */
  if (!C.zf) goto L_11a89161;
  /* 11a8915d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8915f jmp 0x11a891be */
  goto L_11a891be;
L_11a89161:;
  /* 11a89161 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11a89163 push 0x11ab47f4 */
  push32((uint32_t)(0x11ab47f4u));
  /* 11a89168 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8916a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11a8916c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8916e call 0x11a89bf0 */
  push32(0x11a89173u); f_11a89bf0();
  /* 11a89173 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89176 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a89179 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8917d je 0x11a89194 */
  if (C.zf) goto L_11a89194;
  /* 11a8917f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89182 push eax */
  push32((uint32_t)(EAX));
  /* 11a89183 mov ecx, dword ptr [0x11ab7b50] */
  ECX = (r32((uint32_t)(0x11ab7b50)));
  /* 11a89189 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8918a call dword ptr [0x11abc3c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3c0))), 0x11a89190u);
  /* 11a89190 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a89192 jne 0x11a89198 */
  if (!C.zf) goto L_11a89198;
L_11a89194:;
  /* 11a89194 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a89196 jmp 0x11a891be */
  goto L_11a891be;
L_11a89198:;
  /* 11a89198 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8919b push edx */
  push32((uint32_t)(EDX));
  /* 11a8919c call 0x11a89200 */
  push32(0x11a891a1u); f_11a89200();
  /* 11a891a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a891a4 call dword ptr [0x11abc2d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2d0))), 0x11a891aau);
  /* 11a891aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a891ad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a891af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a891b2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11a891b9 mov eax, 1 */
  EAX = (0x1u);
L_11a891be:;
  /* 11a891be mov esp, ebp */
  ESP = (EBP);
  /* 11a891c0 pop ebp */
  EBP = (pop32());
  /* 11a891c1 ret  */
  ESPCHK(0x11a89140u, _esp0);
  ESP += 4; return;
}

/* FUN_100091d0 @ 0x11a891d0 (41 bytes, 11 insns) */
void f_11a891d0(void) {
  FTRACE(0x11a891d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a891d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a891d1 mov ebp, esp */
  EBP = (ESP);
  /* 11a891d3 call 0x11a8f230 */
  push32(0x11a891d8u); f_11a8f230();
  /* 11a891d8 cmp dword ptr [0x11ab7b50], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11ab7b50))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a891df je 0x11a891f7 */
  if (C.zf) goto L_11a891f7;
  /* 11a891e1 mov eax, dword ptr [0x11ab7b50] */
  EAX = (r32((uint32_t)(0x11ab7b50)));
  /* 11a891e6 push eax */
  push32((uint32_t)(EAX));
  /* 11a891e7 call dword ptr [0x11abc3c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3c8))), 0x11a891edu);
  /* 11a891ed mov dword ptr [0x11ab7b50], 0xffffffff */
  w32((uint32_t)(0x11ab7b50), (0xffffffffu));
L_11a891f7:;
  /* 11a891f7 pop ebp */
  EBP = (pop32());
  /* 11a891f8 ret  */
  ESPCHK(0x11a891d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009200 @ 0x11a89200 (25 bytes, 8 insns) */
void f_11a89200(void) {
  FTRACE(0x11a89200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a89200 push ebp */
  push32((uint32_t)(EBP));
  /* 11a89201 mov ebp, esp */
  EBP = (ESP);
  /* 11a89203 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89206 mov dword ptr [eax + 0x50], 0x11ab81d0 */
  w32((uint32_t)(EAX + 0x50), (0x11ab81d0u));
  /* 11a8920d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89210 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11a89217 pop ebp */
  EBP = (pop32());
  /* 11a89218 ret  */
  ESPCHK(0x11a89200u, _esp0);
  ESP += 4; return;
}

/* FUN_10009220 @ 0x11a89220 (152 bytes, 48 insns) */
void f_11a89220(void) {
  FTRACE(0x11a89220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a89220 push ebp */
  push32((uint32_t)(EBP));
  /* 11a89221 mov ebp, esp */
  EBP = (ESP);
  /* 11a89223 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a89226 call dword ptr [0x11abc3d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3d4))), 0x11a8922cu);
  /* 11a8922c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8922f mov eax, dword ptr [0x11ab7b50] */
  EAX = (r32((uint32_t)(0x11ab7b50)));
  /* 11a89234 push eax */
  push32((uint32_t)(EAX));
  /* 11a89235 call dword ptr [0x11abc3d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3d0))), 0x11a8923bu);
  /* 11a8923b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8923e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89242 jne 0x11a892a7 */
  if (!C.zf) goto L_11a892a7;
  /* 11a89244 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11a89249 push 0x11ab47f4 */
  push32((uint32_t)(0x11ab47f4u));
  /* 11a8924e push 2 */
  push32((uint32_t)(0x2u));
  /* 11a89250 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11a89252 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a89254 call 0x11a89bf0 */
  push32(0x11a89259u); f_11a89bf0();
  /* 11a89259 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8925c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8925f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89263 je 0x11a8929d */
  if (C.zf) goto L_11a8929d;
  /* 11a89265 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89268 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89269 mov edx, dword ptr [0x11ab7b50] */
  EDX = (r32((uint32_t)(0x11ab7b50)));
  /* 11a8926f push edx */
  push32((uint32_t)(EDX));
  /* 11a89270 call dword ptr [0x11abc3c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3c0))), 0x11a89276u);
  /* 11a89276 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a89278 je 0x11a8929d */
  if (C.zf) goto L_11a8929d;
  /* 11a8927a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8927d push eax */
  push32((uint32_t)(EAX));
  /* 11a8927e call 0x11a89200 */
  push32(0x11a89283u); f_11a89200();
  /* 11a89283 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89286 call dword ptr [0x11abc2d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2d0))), 0x11a8928cu);
  /* 11a8928c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8928f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a89291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89294 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11a8929b jmp 0x11a892a7 */
  goto L_11a892a7;
L_11a8929d:;
  /* 11a8929d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a8929f call 0x11a86750 */
  push32(0x11a892a4u); f_11a86750();
  /* 11a892a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a892a7:;
  /* 11a892a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a892aa push eax */
  push32((uint32_t)(EAX));
  /* 11a892ab call dword ptr [0x11abc3cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3cc))), 0x11a892b1u);
  /* 11a892b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a892b4 mov esp, ebp */
  ESP = (EBP);
  /* 11a892b6 pop ebp */
  EBP = (pop32());
  /* 11a892b7 ret  */
  ESPCHK(0x11a89220u, _esp0);
  ESP += 4; return;
}

/* FUN_100092c0 @ 0x11a892c0 (263 bytes, 86 insns) */
void f_11a892c0(void) {
  FTRACE(0x11a892c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a892c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a892c1 mov ebp, esp */
  EBP = (ESP);
  /* 11a892c3 cmp dword ptr [0x11ab7b50], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11ab7b50))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a892ca je 0x11a893c5 */
  if (C.zf) goto L_11a893c5;
  /* 11a892d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a892d4 jne 0x11a892e5 */
  if (!C.zf) goto L_11a892e5;
  /* 11a892d6 mov eax, dword ptr [0x11ab7b50] */
  EAX = (r32((uint32_t)(0x11ab7b50)));
  /* 11a892db push eax */
  push32((uint32_t)(EAX));
  /* 11a892dc call dword ptr [0x11abc3d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3d0))), 0x11a892e2u);
  /* 11a892e2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11a892e5:;
  /* 11a892e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a892e9 je 0x11a893b6 */
  if (C.zf) goto L_11a893b6;
  /* 11a892ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a892f2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a892f6 je 0x11a89309 */
  if (C.zf) goto L_11a89309;
  /* 11a892f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a892fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a892fd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11a89300 push eax */
  push32((uint32_t)(EAX));
  /* 11a89301 call 0x11a8a270 */
  push32(0x11a89306u); f_11a8a270();
  /* 11a89306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a89309:;
  /* 11a89309 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8930c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89310 je 0x11a89323 */
  if (C.zf) goto L_11a89323;
  /* 11a89312 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a89314 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89317 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11a8931a push eax */
  push32((uint32_t)(EAX));
  /* 11a8931b call 0x11a8a270 */
  push32(0x11a89320u); f_11a8a270();
  /* 11a89320 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a89323:;
  /* 11a89323 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89326 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8932a je 0x11a8933d */
  if (C.zf) goto L_11a8933d;
  /* 11a8932c push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8932e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89331 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11a89334 push eax */
  push32((uint32_t)(EAX));
  /* 11a89335 call 0x11a8a270 */
  push32(0x11a8933au); f_11a8a270();
  /* 11a8933a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8933d:;
  /* 11a8933d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89340 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89344 je 0x11a89357 */
  if (C.zf) goto L_11a89357;
  /* 11a89346 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a89348 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8934b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11a8934e push eax */
  push32((uint32_t)(EAX));
  /* 11a8934f call 0x11a8a270 */
  push32(0x11a89354u); f_11a8a270();
  /* 11a89354 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a89357:;
  /* 11a89357 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8935a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8935e je 0x11a89371 */
  if (C.zf) goto L_11a89371;
  /* 11a89360 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a89362 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89365 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11a89368 push eax */
  push32((uint32_t)(EAX));
  /* 11a89369 call 0x11a8a270 */
  push32(0x11a8936eu); f_11a8a270();
  /* 11a8936e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a89371:;
  /* 11a89371 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89374 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89378 je 0x11a8938b */
  if (C.zf) goto L_11a8938b;
  /* 11a8937a push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8937c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8937f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11a89382 push eax */
  push32((uint32_t)(EAX));
  /* 11a89383 call 0x11a8a270 */
  push32(0x11a89388u); f_11a8a270();
  /* 11a89388 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8938b:;
  /* 11a8938b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8938e cmp dword ptr [ecx + 0x50], 0x11ab81d0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x11ab81d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89395 je 0x11a893a8 */
  if (C.zf) goto L_11a893a8;
  /* 11a89397 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a89399 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8939c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11a8939f push eax */
  push32((uint32_t)(EAX));
  /* 11a893a0 call 0x11a8a270 */
  push32(0x11a893a5u); f_11a8a270();
  /* 11a893a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a893a8:;
  /* 11a893a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a893aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a893ad push ecx */
  push32((uint32_t)(ECX));
  /* 11a893ae call 0x11a8a270 */
  push32(0x11a893b3u); f_11a8a270();
  /* 11a893b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a893b6:;
  /* 11a893b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a893b8 mov edx, dword ptr [0x11ab7b50] */
  EDX = (r32((uint32_t)(0x11ab7b50)));
  /* 11a893be push edx */
  push32((uint32_t)(EDX));
  /* 11a893bf call dword ptr [0x11abc3c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3c0))), 0x11a893c5u);
L_11a893c5:;
  /* 11a893c5 pop ebp */
  EBP = (pop32());
  /* 11a893c6 ret  */
  ESPCHK(0x11a892c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093d0 @ 0x11a893d0 (11 bytes, 5 insns) */
void f_11a893d0(void) {
  FTRACE(0x11a893d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a893d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a893d1 mov ebp, esp */
  EBP = (ESP);
  /* 11a893d3 call dword ptr [0x11abc2d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2d0))), 0x11a893d9u);
  /* 11a893d9 pop ebp */
  EBP = (pop32());
  /* 11a893da ret  */
  ESPCHK(0x11a893d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093e0 @ 0x11a893e0 (11 bytes, 5 insns) */
void f_11a893e0(void) {
  FTRACE(0x11a893e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a893e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a893e1 mov ebp, esp */
  EBP = (ESP);
  /* 11a893e3 call dword ptr [0x11abc3b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3b8))), 0x11a893e9u);
  /* 11a893e9 pop ebp */
  EBP = (pop32());
  /* 11a893ea ret  */
  ESPCHK(0x11a893e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093f0 @ 0x11a893f0 (804 bytes, 236 insns) */
void f_11a893f0(void) {
  FTRACE(0x11a893f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a893f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a893f1 mov ebp, esp */
  EBP = (ESP);
  /* 11a893f3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a893f6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11a893fb push 0x11ab4800 */
  push32((uint32_t)(0x11ab4800u));
  /* 11a89400 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a89402 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11a89407 call 0x11a897e0 */
  push32(0x11a8940cu); f_11a897e0();
  /* 11a8940c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8940f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11a89412 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89416 jne 0x11a89422 */
  if (!C.zf) goto L_11a89422;
  /* 11a89418 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11a8941a call 0x11a86750 */
  push32(0x11a8941fu); f_11a86750();
  /* 11a8941f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a89422:;
  /* 11a89422 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a89425 mov dword ptr [0x11abba80], eax */
  w32((uint32_t)(0x11abba80), (EAX));
  /* 11a8942a mov dword ptr [0x11abbbbc], 0x20 */
  w32((uint32_t)(0x11abbbbc), (0x20u));
  /* 11a89434 jmp 0x11a8943f */
  goto L_11a8943f;
L_11a89436:;
  /* 11a89436 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a89439 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8943c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_11a8943f:;
  /* 11a8943f mov edx, dword ptr [0x11abba80] */
  EDX = (r32((uint32_t)(0x11abba80)));
  /* 11a89445 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8944b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8944e jae 0x11a89473 */
  if (!C.cf) goto L_11a89473;
  /* 11a89450 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a89453 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11a89457 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a8945a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11a89460 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a89463 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11a89467 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a8946a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11a89471 jmp 0x11a89436 */
  goto L_11a89436;
L_11a89473:;
  /* 11a89473 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11a89476 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89477 call dword ptr [0x11abc3e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3e0))), 0x11a8947du);
  /* 11a8947d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11a89480 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a89486 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a89488 je 0x11a89615 */
  if (C.zf) goto L_11a89615;
  /* 11a8948e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89492 je 0x11a89615 */
  if (C.zf) goto L_11a89615;
  /* 11a89498 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8949b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8949d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11a894a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a894a3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a894a6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a894a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a894ac add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a894af mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11a894b2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a894b9 jge 0x11a894c3 */
  if ((C.sf==C.of)) goto L_11a894c3;
  /* 11a894bb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11a894be mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11a894c1 jmp 0x11a894ca */
  goto L_11a894ca;
L_11a894c3:;
  /* 11a894c3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_11a894ca:;
  /* 11a894ca mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11a894cd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11a894d0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11a894d7 jmp 0x11a894e2 */
  goto L_11a894e2;
L_11a894d9:;
  /* 11a894d9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11a894dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a894df mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11a894e2:;
  /* 11a894e2 mov ecx, dword ptr [0x11abbbbc] */
  ECX = (r32((uint32_t)(0x11abbbbc)));
  /* 11a894e8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a894eb jge 0x11a89582 */
  if ((C.sf==C.of)) goto L_11a89582;
  /* 11a894f1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11a894f6 push 0x11ab4800 */
  push32((uint32_t)(0x11ab4800u));
  /* 11a894fb push 2 */
  push32((uint32_t)(0x2u));
  /* 11a894fd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11a89502 call 0x11a897e0 */
  push32(0x11a89507u); f_11a897e0();
  /* 11a89507 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8950a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11a8950d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89511 jne 0x11a8951e */
  if (!C.zf) goto L_11a8951e;
  /* 11a89513 mov edx, dword ptr [0x11abbbbc] */
  EDX = (r32((uint32_t)(0x11abbbbc)));
  /* 11a89519 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11a8951c jmp 0x11a89582 */
  goto L_11a89582;
L_11a8951e:;
  /* 11a8951e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11a89521 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a89524 mov dword ptr [eax*4 + 0x11abba80], ecx */
  w32((uint32_t)(EAX*4 + 0x11abba80), (ECX));
  /* 11a8952b mov edx, dword ptr [0x11abbbbc] */
  EDX = (r32((uint32_t)(0x11abbbbc)));
  /* 11a89531 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89534 mov dword ptr [0x11abbbbc], edx */
  w32((uint32_t)(0x11abbbbc), (EDX));
  /* 11a8953a jmp 0x11a89545 */
  goto L_11a89545;
L_11a8953c:;
  /* 11a8953c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a8953f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89542 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11a89545:;
  /* 11a89545 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11a89548 mov edx, dword ptr [ecx*4 + 0x11abba80] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11abba80)));
  /* 11a8954f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89555 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89558 jae 0x11a8957d */
  if (!C.cf) goto L_11a8957d;
  /* 11a8955a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a8955d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11a89561 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a89564 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11a8956a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a8956d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11a89571 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a89574 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11a8957b jmp 0x11a8953c */
  goto L_11a8953c;
L_11a8957d:;
  /* 11a8957d jmp 0x11a894d9 */
  goto L_11a894d9;
L_11a89582:;
  /* 11a89582 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11a89589 jmp 0x11a895a6 */
  goto L_11a895a6;
L_11a8958b:;
  /* 11a8958b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11a8958e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89591 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11a89594 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89597 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8959a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a8959d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11a895a0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a895a3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11a895a6:;
  /* 11a895a6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11a895a9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a895ac jge 0x11a89615 */
  if ((C.sf==C.of)) goto L_11a89615;
  /* 11a895ae mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11a895b1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a895b4 je 0x11a89610 */
  if (C.zf) goto L_11a89610;
  /* 11a895b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a895b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a895bc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a895bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a895c1 je 0x11a89610 */
  if (C.zf) goto L_11a89610;
  /* 11a895c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a895c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a895c9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11a895cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a895ce jne 0x11a895e0 */
  if (!C.zf) goto L_11a895e0;
  /* 11a895d0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11a895d3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a895d5 push edx */
  push32((uint32_t)(EDX));
  /* 11a895d6 call dword ptr [0x11abc3dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3dc))), 0x11a895dcu);
  /* 11a895dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a895de je 0x11a89610 */
  if (C.zf) goto L_11a89610;
L_11a895e0:;
  /* 11a895e0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11a895e3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a895e6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11a895e9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11a895ec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a895ef mov edx, dword ptr [eax*4 + 0x11abba80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11abba80)));
  /* 11a895f6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a895f8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11a895fb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a895fe mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11a89601 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a89603 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a89605 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a89608 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8960b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a8960d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11a89610:;
  /* 11a89610 jmp 0x11a8958b */
  goto L_11a8958b;
L_11a89615:;
  /* 11a89615 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11a8961c jmp 0x11a89627 */
  goto L_11a89627;
L_11a8961e:;
  /* 11a8961e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11a89621 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89624 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11a89627:;
  /* 11a89627 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8962b jge 0x11a89704 */
  if ((C.sf==C.of)) goto L_11a89704;
  /* 11a89631 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11a89634 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a89637 mov edx, dword ptr [0x11abba80] */
  EDX = (r32((uint32_t)(0x11abba80)));
  /* 11a8963d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8963f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11a89642 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a89645 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89648 jne 0x11a896f0 */
  if (!C.zf) goto L_11a896f0;
  /* 11a8964e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a89651 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11a89655 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89659 jne 0x11a89664 */
  if (!C.zf) goto L_11a89664;
  /* 11a8965b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11a89662 jmp 0x11a89674 */
  goto L_11a89674;
L_11a89664:;
  /* 11a89664 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11a89667 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8966a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a8966c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8966e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89671 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11a89674:;
  /* 11a89674 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11a89677 push eax */
  push32((uint32_t)(EAX));
  /* 11a89678 call dword ptr [0x11abc38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc38c))), 0x11a8967eu);
  /* 11a8967e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11a89681 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89685 je 0x11a896df */
  if (C.zf) goto L_11a896df;
  /* 11a89687 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11a8968a push ecx */
  push32((uint32_t)(ECX));
  /* 11a8968b call dword ptr [0x11abc3dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3dc))), 0x11a89691u);
  /* 11a89691 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11a89694 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89698 je 0x11a896df */
  if (C.zf) goto L_11a896df;
  /* 11a8969a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a8969d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11a896a0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11a896a2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11a896a5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a896ab cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a896ae jne 0x11a896c0 */
  if (!C.zf) goto L_11a896c0;
  /* 11a896b0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a896b3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11a896b6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11a896b8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a896bb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 11a896be jmp 0x11a896dd */
  goto L_11a896dd;
L_11a896c0:;
  /* 11a896c0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11a896c3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a896c9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a896cc jne 0x11a896dd */
  if (!C.zf) goto L_11a896dd;
  /* 11a896ce mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a896d1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11a896d4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11a896d7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a896da mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11a896dd:;
  /* 11a896dd jmp 0x11a896ee */
  goto L_11a896ee;
L_11a896df:;
  /* 11a896df mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a896e2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11a896e5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11a896e8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a896eb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11a896ee:;
  /* 11a896ee jmp 0x11a896ff */
  goto L_11a896ff;
L_11a896f0:;
  /* 11a896f0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a896f3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11a896f6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11a896f9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a896fc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11a896ff:;
  /* 11a896ff jmp 0x11a8961e */
  goto L_11a8961e;
L_11a89704:;
  /* 11a89704 mov eax, dword ptr [0x11abbbbc] */
  EAX = (r32((uint32_t)(0x11abbbbc)));
  /* 11a89709 push eax */
  push32((uint32_t)(EAX));
  /* 11a8970a call dword ptr [0x11abc3d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3d8))), 0x11a89710u);
  /* 11a89710 mov esp, ebp */
  ESP = (EBP);
  /* 11a89712 pop ebp */
  EBP = (pop32());
  /* 11a89713 ret  */
  ESPCHK(0x11a893f0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11a89720 (155 bytes, 45 insns) */
void f_11a89720(void) {
  FTRACE(0x11a89720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a89720 push ebp */
  push32((uint32_t)(EBP));
  /* 11a89721 mov ebp, esp */
  EBP = (ESP);
  /* 11a89723 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a89726 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a8972d jmp 0x11a89738 */
  goto L_11a89738;
L_11a8972f:;
  /* 11a8972f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a89732 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89735 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a89738:;
  /* 11a89738 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8973c jge 0x11a897b7 */
  if ((C.sf==C.of)) goto L_11a897b7;
  /* 11a8973e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a89741 cmp dword ptr [ecx*4 + 0x11abba80], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11abba80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89749 je 0x11a897b2 */
  if (C.zf) goto L_11a897b2;
  /* 11a8974b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8974e mov eax, dword ptr [edx*4 + 0x11abba80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11abba80)));
  /* 11a89755 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a89758 jmp 0x11a89763 */
  goto L_11a89763;
L_11a8975a:;
  /* 11a8975a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8975d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89760 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a89763:;
  /* 11a89763 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a89766 mov eax, dword ptr [edx*4 + 0x11abba80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11abba80)));
  /* 11a8976d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89772 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89775 jae 0x11a8978f */
  if (!C.cf) goto L_11a8978f;
  /* 11a89777 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8977a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8977e je 0x11a8978d */
  if (C.zf) goto L_11a8978d;
  /* 11a89780 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89783 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89786 push edx */
  push32((uint32_t)(EDX));
  /* 11a89787 call dword ptr [0x11abc3e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3e4))), 0x11a8978du);
L_11a8978d:;
  /* 11a8978d jmp 0x11a8975a */
  goto L_11a8975a;
L_11a8978f:;
  /* 11a8978f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a89791 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a89794 mov ecx, dword ptr [eax*4 + 0x11abba80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11abba80)));
  /* 11a8979b push ecx */
  push32((uint32_t)(ECX));
  /* 11a8979c call 0x11a8a270 */
  push32(0x11a897a1u); f_11a8a270();
  /* 11a897a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a897a4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a897a7 mov dword ptr [edx*4 + 0x11abba80], 0 */
  w32((uint32_t)(EDX*4 + 0x11abba80), (0x0u));
L_11a897b2:;
  /* 11a897b2 jmp 0x11a8972f */
  goto L_11a8972f;
L_11a897b7:;
  /* 11a897b7 mov esp, ebp */
  ESP = (EBP);
  /* 11a897b9 pop ebp */
  EBP = (pop32());
  /* 11a897ba ret  */
  ESPCHK(0x11a89720u, _esp0);
  ESP += 4; return;
}

/* FUN_100097c0 @ 0x11a897c0 (29 bytes, 13 insns) */
void f_11a897c0(void) {
  FTRACE(0x11a897c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a897c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a897c1 mov ebp, esp */
  EBP = (ESP);
  /* 11a897c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a897c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a897c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a897c9 mov eax, dword ptr [0x11aba2a8] */
  EAX = (r32((uint32_t)(0x11aba2a8)));
  /* 11a897ce push eax */
  push32((uint32_t)(EAX));
  /* 11a897cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a897d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11a897d3 call 0x11a89830 */
  push32(0x11a897d8u); f_11a89830();
  /* 11a897d8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a897db pop ebp */
  EBP = (pop32());
  /* 11a897dc ret  */
  ESPCHK(0x11a897c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100097e0 @ 0x11a897e0 (35 bytes, 16 insns) */
void f_11a897e0(void) {
  FTRACE(0x11a897e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a897e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a897e1 mov ebp, esp */
  EBP = (ESP);
  /* 11a897e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a897e6 push eax */
  push32((uint32_t)(EAX));
  /* 11a897e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a897ea push ecx */
  push32((uint32_t)(ECX));
  /* 11a897eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a897ee push edx */
  push32((uint32_t)(EDX));
  /* 11a897ef mov eax, dword ptr [0x11aba2a8] */
  EAX = (r32((uint32_t)(0x11aba2a8)));
  /* 11a897f4 push eax */
  push32((uint32_t)(EAX));
  /* 11a897f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a897f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11a897f9 call 0x11a89830 */
  push32(0x11a897feu); f_11a89830();
  /* 11a897fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89801 pop ebp */
  EBP = (pop32());
  /* 11a89802 ret  */
  ESPCHK(0x11a897e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009810 @ 0x11a89810 (27 bytes, 13 insns) */
void f_11a89810(void) {
  FTRACE(0x11a89810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a89810 push ebp */
  push32((uint32_t)(EBP));
  /* 11a89811 mov ebp, esp */
  EBP = (ESP);
  /* 11a89813 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89815 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89817 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a89819 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8981c push eax */
  push32((uint32_t)(EAX));
  /* 11a8981d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89820 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89821 call 0x11a89830 */
  push32(0x11a89826u); f_11a89830();
  /* 11a89826 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89829 pop ebp */
  EBP = (pop32());
  /* 11a8982a ret  */
  ESPCHK(0x11a89810u, _esp0);
  ESP += 4; return;
}

/* FUN_10009830 @ 0x11a89830 (94 bytes, 38 insns) */
void f_11a89830(void) {
  FTRACE(0x11a89830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a89830 push ebp */
  push32((uint32_t)(EBP));
  /* 11a89831 mov ebp, esp */
  EBP = (ESP);
  /* 11a89833 push ecx */
  push32((uint32_t)(ECX));
L_11a89834:;
  /* 11a89834 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a89836 call 0x11a8f2d0 */
  push32(0x11a8983bu); f_11a8f2d0();
  /* 11a8983b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8983e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a89841 push eax */
  push32((uint32_t)(EAX));
  /* 11a89842 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a89845 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89846 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a89849 push edx */
  push32((uint32_t)(EDX));
  /* 11a8984a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8984d push eax */
  push32((uint32_t)(EAX));
  /* 11a8984e call 0x11a898b0 */
  push32(0x11a89853u); f_11a898b0();
  /* 11a89853 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89856 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a89859 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8985b call 0x11a8f370 */
  push32(0x11a89860u); f_11a8f370();
  /* 11a89860 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89863 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89867 jne 0x11a8986f */
  if (!C.zf) goto L_11a8986f;
  /* 11a89869 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8986d jne 0x11a89874 */
  if (!C.zf) goto L_11a89874;
L_11a8986f:;
  /* 11a8986f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89872 jmp 0x11a8988a */
  goto L_11a8988a;
L_11a89874:;
  /* 11a89874 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89877 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89878 call 0x11a8f610 */
  push32(0x11a8987du); f_11a8f610();
  /* 11a8987d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89880 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a89882 jne 0x11a89888 */
  if (!C.zf) goto L_11a89888;
  /* 11a89884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a89886 jmp 0x11a8988a */
  goto L_11a8988a;
L_11a89888:;
  /* 11a89888 jmp 0x11a89834 */
  goto L_11a89834;
L_11a8988a:;
  /* 11a8988a mov esp, ebp */
  ESP = (EBP);
  /* 11a8988c pop ebp */
  EBP = (pop32());
  /* 11a8988d ret  */
  ESPCHK(0x11a89830u, _esp0);
  ESP += 4; return;
}

/* FUN_10009890 @ 0x11a89890 (23 bytes, 11 insns) */
void f_11a89890(void) {
  FTRACE(0x11a89890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a89890 push ebp */
  push32((uint32_t)(EBP));
  /* 11a89891 mov ebp, esp */
  EBP = (ESP);
  /* 11a89893 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89895 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89897 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a89899 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8989c push eax */
  push32((uint32_t)(EAX));
  /* 11a8989d call 0x11a898b0 */
  push32(0x11a898a2u); f_11a898b0();
  /* 11a898a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a898a5 pop ebp */
  EBP = (pop32());
  /* 11a898a6 ret  */
  ESPCHK(0x11a89890u, _esp0);
  ESP += 4; return;
}

/* FUN_100098b0 @ 0x11a898b0 (787 bytes, 254 insns) */
void f_11a898b0(void) {
  FTRACE(0x11a898b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a898b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a898b1 mov ebp, esp */
  EBP = (ESP);
  /* 11a898b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a898b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a898b7 push esi */
  push32((uint32_t)(ESI));
  /* 11a898b8 push edi */
  push32((uint32_t)(EDI));
  /* 11a898b9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a898c0 mov eax, dword ptr [0x11ab7b7c] */
  EAX = (r32((uint32_t)(0x11ab7b7c)));
  /* 11a898c5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11a898c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a898ca je 0x11a898fc */
  if (C.zf) goto L_11a898fc;
L_11a898cc:;
  /* 11a898cc call 0x11a8a980 */
  push32(0x11a898d1u); f_11a8a980();
  /* 11a898d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a898d3 jne 0x11a898f6 */
  if (!C.zf) goto L_11a898f6;
  /* 11a898d5 push 0x11ab48f4 */
  push32((uint32_t)(0x11ab48f4u));
  /* 11a898da push 0 */
  push32((uint32_t)(0x0u));
  /* 11a898dc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11a898e1 push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a898e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a898e8 call 0x11a868a0 */
  push32(0x11a898edu); f_11a868a0();
  /* 11a898ed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a898f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a898f3 jne 0x11a898f6 */
  if (!C.zf) goto L_11a898f6;
  /* 11a898f5 int3  */
  x86_unimpl("int3 @ 0x11a898f5");
L_11a898f6:;
  /* 11a898f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a898f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a898fa jne 0x11a898cc */
  if (!C.zf) goto L_11a898cc;
L_11a898fc:;
  /* 11a898fc mov edx, dword ptr [0x11ab7b80] */
  EDX = (r32((uint32_t)(0x11ab7b80)));
  /* 11a89902 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a89905 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a89908 cmp eax, dword ptr [0x11ab7b84] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ab7b84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8990e jne 0x11a89911 */
  if (!C.zf) goto L_11a89911;
  /* 11a89910 int3  */
  x86_unimpl("int3 @ 0x11a89910");
L_11a89911:;
  /* 11a89911 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a89914 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89915 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a89918 push edx */
  push32((uint32_t)(EDX));
  /* 11a89919 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8991c push eax */
  push32((uint32_t)(EAX));
  /* 11a8991d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a89920 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89921 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89924 push edx */
  push32((uint32_t)(EDX));
  /* 11a89925 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89927 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a89929 call dword ptr [0x11ab8258] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ab8258))), 0x11a8992fu);
  /* 11a8992f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89932 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a89934 jne 0x11a89994 */
  if (!C.zf) goto L_11a89994;
  /* 11a89936 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8993a je 0x11a89967 */
  if (C.zf) goto L_11a89967;
L_11a8993c:;
  /* 11a8993c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a8993f push eax */
  push32((uint32_t)(EAX));
  /* 11a89940 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a89943 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89944 push 0x11ab48b0 */
  push32((uint32_t)(0x11ab48b0u));
  /* 11a89949 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8994b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8994d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8994f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89951 call 0x11a868a0 */
  push32(0x11a89956u); f_11a868a0();
  /* 11a89956 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89959 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8995c jne 0x11a8995f */
  if (!C.zf) goto L_11a8995f;
  /* 11a8995e int3  */
  x86_unimpl("int3 @ 0x11a8995e");
L_11a8995f:;
  /* 11a8995f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a89961 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a89963 jne 0x11a8993c */
  if (!C.zf) goto L_11a8993c;
  /* 11a89965 jmp 0x11a8998d */
  goto L_11a8998d;
L_11a89967:;
  /* 11a89967 push 0x11ab488c */
  push32((uint32_t)(0x11ab488cu));
  /* 11a8996c push 0x11ab4888 */
  push32((uint32_t)(0x11ab4888u));
  /* 11a89971 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89973 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89975 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89977 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89979 call 0x11a868a0 */
  push32(0x11a8997eu); f_11a868a0();
  /* 11a8997e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89981 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89984 jne 0x11a89987 */
  if (!C.zf) goto L_11a89987;
  /* 11a89986 int3  */
  x86_unimpl("int3 @ 0x11a89986");
L_11a89987:;
  /* 11a89987 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a89989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8998b jne 0x11a89967 */
  if (!C.zf) goto L_11a89967;
L_11a8998d:;
  /* 11a8998d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8998f jmp 0x11a89bbc */
  goto L_11a89bbc;
L_11a89994:;
  /* 11a89994 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a89997 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8999d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a899a0 je 0x11a899b6 */
  if (C.zf) goto L_11a899b6;
  /* 11a899a2 mov edx, dword ptr [0x11ab7b7c] */
  EDX = (r32((uint32_t)(0x11ab7b7c)));
  /* 11a899a8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a899ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a899ad jne 0x11a899b6 */
  if (!C.zf) goto L_11a899b6;
  /* 11a899af mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11a899b6:;
  /* 11a899b6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a899ba ja 0x11a899c7 */
  if ((!C.cf&&!C.zf)) goto L_11a899c7;
  /* 11a899bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a899bf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a899c2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a899c5 jbe 0x11a899f3 */
  if ((C.cf||C.zf)) goto L_11a899f3;
L_11a899c7:;
  /* 11a899c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a899ca push ecx */
  push32((uint32_t)(ECX));
  /* 11a899cb push 0x11ab4864 */
  push32((uint32_t)(0x11ab4864u));
  /* 11a899d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a899d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a899d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a899d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a899d8 call 0x11a868a0 */
  push32(0x11a899ddu); f_11a868a0();
  /* 11a899dd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a899e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a899e3 jne 0x11a899e6 */
  if (!C.zf) goto L_11a899e6;
  /* 11a899e5 int3  */
  x86_unimpl("int3 @ 0x11a899e5");
L_11a899e6:;
  /* 11a899e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a899e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a899ea jne 0x11a899c7 */
  if (!C.zf) goto L_11a899c7;
  /* 11a899ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a899ee jmp 0x11a89bbc */
  goto L_11a89bbc;
L_11a899f3:;
  /* 11a899f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a899f6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a899fb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a899fe je 0x11a89a40 */
  if (C.zf) goto L_11a89a40;
  /* 11a89a00 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89a04 je 0x11a89a40 */
  if (C.zf) goto L_11a89a40;
  /* 11a89a06 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a89a09 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a89a0f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89a12 je 0x11a89a40 */
  if (C.zf) goto L_11a89a40;
  /* 11a89a14 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89a18 je 0x11a89a40 */
  if (C.zf) goto L_11a89a40;
L_11a89a1a:;
  /* 11a89a1a push 0x11ab4830 */
  push32((uint32_t)(0x11ab4830u));
  /* 11a89a1f push 0x11ab4888 */
  push32((uint32_t)(0x11ab4888u));
  /* 11a89a24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89a28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89a2a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a89a2c call 0x11a868a0 */
  push32(0x11a89a31u); f_11a868a0();
  /* 11a89a31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89a34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89a37 jne 0x11a89a3a */
  if (!C.zf) goto L_11a89a3a;
  /* 11a89a39 int3  */
  x86_unimpl("int3 @ 0x11a89a39");
L_11a89a3a:;
  /* 11a89a3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a89a3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a89a3e jne 0x11a89a1a */
  if (!C.zf) goto L_11a89a1a;
L_11a89a40:;
  /* 11a89a40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89a43 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89a46 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a89a49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a89a4c push ecx */
  push32((uint32_t)(ECX));
  /* 11a89a4d call 0x11a8f6c0 */
  push32(0x11a89a52u); f_11a8f6c0();
  /* 11a89a52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89a55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a89a58 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89a5c jne 0x11a89a65 */
  if (!C.zf) goto L_11a89a65;
  /* 11a89a5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a89a60 jmp 0x11a89bbc */
  goto L_11a89bbc;
L_11a89a65:;
  /* 11a89a65 mov edx, dword ptr [0x11ab7b80] */
  EDX = (r32((uint32_t)(0x11ab7b80)));
  /* 11a89a6b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89a6e mov dword ptr [0x11ab7b80], edx */
  w32((uint32_t)(0x11ab7b80), (EDX));
  /* 11a89a74 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89a78 je 0x11a89ac3 */
  if (C.zf) goto L_11a89ac3;
  /* 11a89a7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89a7d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11a89a83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89a86 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11a89a8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89a90 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11a89a97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89a9a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11a89aa1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89aa4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89aa7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11a89aaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89aad mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11a89ab4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89ab7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 11a89abe jmp 0x11a89b63 */
  goto L_11a89b63;
L_11a89ac3:;
  /* 11a89ac3 mov edx, dword ptr [0x11aba108] */
  EDX = (r32((uint32_t)(0x11aba108)));
  /* 11a89ac9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89acc mov dword ptr [0x11aba108], edx */
  w32((uint32_t)(0x11aba108), (EDX));
  /* 11a89ad2 mov eax, dword ptr [0x11aba110] */
  EAX = (r32((uint32_t)(0x11aba110)));
  /* 11a89ad7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89ada mov dword ptr [0x11aba110], eax */
  w32((uint32_t)(0x11aba110), (EAX));
  /* 11a89adf mov ecx, dword ptr [0x11aba110] */
  ECX = (r32((uint32_t)(0x11aba110)));
  /* 11a89ae5 cmp ecx, dword ptr [0x11aba114] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11aba114))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89aeb jbe 0x11a89af9 */
  if ((C.cf||C.zf)) goto L_11a89af9;
  /* 11a89aed mov edx, dword ptr [0x11aba110] */
  EDX = (r32((uint32_t)(0x11aba110)));
  /* 11a89af3 mov dword ptr [0x11aba114], edx */
  w32((uint32_t)(0x11aba114), (EDX));
L_11a89af9:;
  /* 11a89af9 cmp dword ptr [0x11aba10c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba10c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89b00 je 0x11a89b0f */
  if (C.zf) goto L_11a89b0f;
  /* 11a89b02 mov eax, dword ptr [0x11aba10c] */
  EAX = (r32((uint32_t)(0x11aba10c)));
  /* 11a89b07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89b0a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a89b0d jmp 0x11a89b18 */
  goto L_11a89b18;
L_11a89b0f:;
  /* 11a89b0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89b12 mov dword ptr [0x11aba104], edx */
  w32((uint32_t)(0x11aba104), (EDX));
L_11a89b18:;
  /* 11a89b18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89b1b mov ecx, dword ptr [0x11aba10c] */
  ECX = (r32((uint32_t)(0x11aba10c)));
  /* 11a89b21 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a89b23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89b26 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11a89b2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89b30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a89b33 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11a89b36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89b39 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a89b3c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 11a89b3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89b42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89b45 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11a89b48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89b4b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a89b4e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11a89b51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89b54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a89b57 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 11a89b5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89b5d mov dword ptr [0x11aba10c], ecx */
  w32((uint32_t)(0x11aba10c), (ECX));
L_11a89b63:;
  /* 11a89b63 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a89b65 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a89b67 mov dl, byte ptr [0x11ab7b88] */
  DL = (r8((uint32_t)(0x11ab7b88)));
  /* 11a89b6d push edx */
  push32((uint32_t)(EDX));
  /* 11a89b6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89b71 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89b74 push eax */
  push32((uint32_t)(EAX));
  /* 11a89b75 call 0x11a8ee40 */
  push32(0x11a89b7au); f_11a8ee40();
  /* 11a89b7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89b7d push 4 */
  push32((uint32_t)(0x4u));
  /* 11a89b7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a89b81 mov cl, byte ptr [0x11ab7b88] */
  CL = (r8((uint32_t)(0x11ab7b88)));
  /* 11a89b87 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89b88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89b8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89b8e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11a89b92 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89b93 call 0x11a8ee40 */
  push32(0x11a89b98u); f_11a8ee40();
  /* 11a89b98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89b9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89b9e push edx */
  push32((uint32_t)(EDX));
  /* 11a89b9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a89ba1 mov al, byte ptr [0x11ab7b8a] */
  AL = (r8((uint32_t)(0x11ab7b8a)));
  /* 11a89ba6 push eax */
  push32((uint32_t)(EAX));
  /* 11a89ba7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89baa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89bad push ecx */
  push32((uint32_t)(ECX));
  /* 11a89bae call 0x11a8ee40 */
  push32(0x11a89bb3u); f_11a8ee40();
  /* 11a89bb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89bb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89bb9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a89bbc:;
  /* 11a89bbc pop edi */
  EDI = (pop32());
  /* 11a89bbd pop esi */
  ESI = (pop32());
  /* 11a89bbe pop ebx */
  EBX = (pop32());
  /* 11a89bbf mov esp, ebp */
  ESP = (EBP);
  /* 11a89bc1 pop ebp */
  EBP = (pop32());
  /* 11a89bc2 ret  */
  ESPCHK(0x11a898b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bd0 @ 0x11a89bd0 (27 bytes, 13 insns) */
void f_11a89bd0(void) {
  FTRACE(0x11a89bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a89bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a89bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11a89bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89bd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89bd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a89bd9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a89bdc push eax */
  push32((uint32_t)(EAX));
  /* 11a89bdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89be0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89be1 call 0x11a89bf0 */
  push32(0x11a89be6u); f_11a89bf0();
  /* 11a89be6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89be9 pop ebp */
  EBP = (pop32());
  /* 11a89bea ret  */
  ESPCHK(0x11a89bd0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11a89bf0 (96 bytes, 37 insns) */
void f_11a89bf0(void) {
  FTRACE(0x11a89bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a89bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a89bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11a89bf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a89bf6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a89bf9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a89bfd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11a89c00 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a89c03 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89c04 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a89c07 push edx */
  push32((uint32_t)(EDX));
  /* 11a89c08 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a89c0b push eax */
  push32((uint32_t)(EAX));
  /* 11a89c0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a89c0f push ecx */
  push32((uint32_t)(ECX));
  /* 11a89c10 call 0x11a897e0 */
  push32(0x11a89c15u); f_11a897e0();
  /* 11a89c15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89c18 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a89c1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89c1f je 0x11a89c49 */
  if (C.zf) goto L_11a89c49;
  /* 11a89c21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a89c24 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a89c27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a89c2a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89c2d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a89c30:;
  /* 11a89c30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a89c33 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89c36 jae 0x11a89c49 */
  if (!C.cf) goto L_11a89c49;
  /* 11a89c38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a89c3b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11a89c3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a89c41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89c44 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a89c47 jmp 0x11a89c30 */
  goto L_11a89c30;
L_11a89c49:;
  /* 11a89c49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a89c4c mov esp, ebp */
  ESP = (EBP);
  /* 11a89c4e pop ebp */
  EBP = (pop32());
  /* 11a89c4f ret  */
  ESPCHK(0x11a89bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c50 @ 0x11a89c50 (27 bytes, 13 insns) */
void f_11a89c50(void) {
  FTRACE(0x11a89c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a89c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11a89c51 mov ebp, esp */
  EBP = (ESP);
  /* 11a89c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89c57 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a89c59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a89c5c push eax */
  push32((uint32_t)(EAX));
  /* 11a89c5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89c60 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89c61 call 0x11a89c70 */
  push32(0x11a89c66u); f_11a89c70();
  /* 11a89c66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89c69 pop ebp */
  EBP = (pop32());
  /* 11a89c6a ret  */
  ESPCHK(0x11a89c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c70 @ 0x11a89c70 (64 bytes, 27 insns) */
void f_11a89c70(void) {
  FTRACE(0x11a89c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a89c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11a89c71 mov ebp, esp */
  EBP = (ESP);
  /* 11a89c73 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89c74 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a89c76 call 0x11a8f2d0 */
  push32(0x11a89c7bu); f_11a8f2d0();
  /* 11a89c7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89c7e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a89c80 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a89c83 push eax */
  push32((uint32_t)(EAX));
  /* 11a89c84 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a89c87 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89c88 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a89c8b push edx */
  push32((uint32_t)(EDX));
  /* 11a89c8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a89c8f push eax */
  push32((uint32_t)(EAX));
  /* 11a89c90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89c93 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89c94 call 0x11a89cb0 */
  push32(0x11a89c99u); f_11a89cb0();
  /* 11a89c99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89c9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a89c9f push 9 */
  push32((uint32_t)(0x9u));
  /* 11a89ca1 call 0x11a8f370 */
  push32(0x11a89ca6u); f_11a8f370();
  /* 11a89ca6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89ca9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a89cac mov esp, ebp */
  ESP = (EBP);
  /* 11a89cae pop ebp */
  EBP = (pop32());
  /* 11a89caf ret  */
  ESPCHK(0x11a89c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009cb0 @ 0x11a89cb0 (1297 bytes, 431 insns) */
void f_11a89cb0(void) {
  FTRACE(0x11a89cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a89cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a89cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11a89cb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a89cb6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a89cb7 push esi */
  push32((uint32_t)(ESI));
  /* 11a89cb8 push edi */
  push32((uint32_t)(EDI));
  /* 11a89cb9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11a89cc0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89cc4 jne 0x11a89ce3 */
  if (!C.zf) goto L_11a89ce3;
  /* 11a89cc6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a89cc9 push eax */
  push32((uint32_t)(EAX));
  /* 11a89cca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a89ccd push ecx */
  push32((uint32_t)(ECX));
  /* 11a89cce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a89cd1 push edx */
  push32((uint32_t)(EDX));
  /* 11a89cd2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a89cd5 push eax */
  push32((uint32_t)(EAX));
  /* 11a89cd6 call 0x11a897e0 */
  push32(0x11a89cdbu); f_11a897e0();
  /* 11a89cdb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89cde jmp 0x11a8a1ba */
  goto L_11a8a1ba;
L_11a89ce3:;
  /* 11a89ce3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89ce7 je 0x11a89d06 */
  if (C.zf) goto L_11a89d06;
  /* 11a89ce9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89ced jne 0x11a89d06 */
  if (!C.zf) goto L_11a89d06;
  /* 11a89cef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a89cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89cf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89cf6 push edx */
  push32((uint32_t)(EDX));
  /* 11a89cf7 call 0x11a8a270 */
  push32(0x11a89cfcu); f_11a8a270();
  /* 11a89cfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89cff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a89d01 jmp 0x11a8a1ba */
  goto L_11a8a1ba;
L_11a89d06:;
  /* 11a89d06 mov eax, dword ptr [0x11ab7b7c] */
  EAX = (r32((uint32_t)(0x11ab7b7c)));
  /* 11a89d0b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11a89d0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a89d10 je 0x11a89d42 */
  if (C.zf) goto L_11a89d42;
L_11a89d12:;
  /* 11a89d12 call 0x11a8a980 */
  push32(0x11a89d17u); f_11a8a980();
  /* 11a89d17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a89d19 jne 0x11a89d3c */
  if (!C.zf) goto L_11a89d3c;
  /* 11a89d1b push 0x11ab48f4 */
  push32((uint32_t)(0x11ab48f4u));
  /* 11a89d20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89d22 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11a89d27 push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a89d2c push 2 */
  push32((uint32_t)(0x2u));
  /* 11a89d2e call 0x11a868a0 */
  push32(0x11a89d33u); f_11a868a0();
  /* 11a89d33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89d36 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89d39 jne 0x11a89d3c */
  if (!C.zf) goto L_11a89d3c;
  /* 11a89d3b int3  */
  x86_unimpl("int3 @ 0x11a89d3b");
L_11a89d3c:;
  /* 11a89d3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a89d3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a89d40 jne 0x11a89d12 */
  if (!C.zf) goto L_11a89d12;
L_11a89d42:;
  /* 11a89d42 mov edx, dword ptr [0x11ab7b80] */
  EDX = (r32((uint32_t)(0x11ab7b80)));
  /* 11a89d48 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11a89d4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a89d4e cmp eax, dword ptr [0x11ab7b84] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ab7b84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89d54 jne 0x11a89d57 */
  if (!C.zf) goto L_11a89d57;
  /* 11a89d56 int3  */
  x86_unimpl("int3 @ 0x11a89d56");
L_11a89d57:;
  /* 11a89d57 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a89d5a push ecx */
  push32((uint32_t)(ECX));
  /* 11a89d5b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a89d5e push edx */
  push32((uint32_t)(EDX));
  /* 11a89d5f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a89d62 push eax */
  push32((uint32_t)(EAX));
  /* 11a89d63 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a89d66 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89d67 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a89d6a push edx */
  push32((uint32_t)(EDX));
  /* 11a89d6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89d6e push eax */
  push32((uint32_t)(EAX));
  /* 11a89d6f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a89d71 call dword ptr [0x11ab8258] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ab8258))), 0x11a89d77u);
  /* 11a89d77 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89d7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a89d7c jne 0x11a89ddc */
  if (!C.zf) goto L_11a89ddc;
  /* 11a89d7e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89d82 je 0x11a89daf */
  if (C.zf) goto L_11a89daf;
L_11a89d84:;
  /* 11a89d84 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a89d87 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89d88 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a89d8b push edx */
  push32((uint32_t)(EDX));
  /* 11a89d8c push 0x11ab4a70 */
  push32((uint32_t)(0x11ab4a70u));
  /* 11a89d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89d93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89d95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89d97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89d99 call 0x11a868a0 */
  push32(0x11a89d9eu); f_11a868a0();
  /* 11a89d9e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89da1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89da4 jne 0x11a89da7 */
  if (!C.zf) goto L_11a89da7;
  /* 11a89da6 int3  */
  x86_unimpl("int3 @ 0x11a89da6");
L_11a89da7:;
  /* 11a89da7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a89da9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a89dab jne 0x11a89d84 */
  if (!C.zf) goto L_11a89d84;
  /* 11a89dad jmp 0x11a89dd5 */
  goto L_11a89dd5;
L_11a89daf:;
  /* 11a89daf push 0x11ab4a4c */
  push32((uint32_t)(0x11ab4a4cu));
  /* 11a89db4 push 0x11ab4888 */
  push32((uint32_t)(0x11ab4888u));
  /* 11a89db9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89dbb push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89dbd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89dbf push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89dc1 call 0x11a868a0 */
  push32(0x11a89dc6u); f_11a868a0();
  /* 11a89dc6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89dc9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89dcc jne 0x11a89dcf */
  if (!C.zf) goto L_11a89dcf;
  /* 11a89dce int3  */
  x86_unimpl("int3 @ 0x11a89dce");
L_11a89dcf:;
  /* 11a89dcf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a89dd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a89dd3 jne 0x11a89daf */
  if (!C.zf) goto L_11a89daf;
L_11a89dd5:;
  /* 11a89dd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a89dd7 jmp 0x11a8a1ba */
  goto L_11a8a1ba;
L_11a89ddc:;
  /* 11a89ddc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89de0 jbe 0x11a89e0e */
  if ((C.cf||C.zf)) goto L_11a89e0e;
L_11a89de2:;
  /* 11a89de2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a89de5 push edx */
  push32((uint32_t)(EDX));
  /* 11a89de6 push 0x11ab4a1c */
  push32((uint32_t)(0x11ab4a1cu));
  /* 11a89deb push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89ded push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89def push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89df1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a89df3 call 0x11a868a0 */
  push32(0x11a89df8u); f_11a868a0();
  /* 11a89df8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89dfb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89dfe jne 0x11a89e01 */
  if (!C.zf) goto L_11a89e01;
  /* 11a89e00 int3  */
  x86_unimpl("int3 @ 0x11a89e00");
L_11a89e01:;
  /* 11a89e01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a89e03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a89e05 jne 0x11a89de2 */
  if (!C.zf) goto L_11a89de2;
  /* 11a89e07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a89e09 jmp 0x11a8a1ba */
  goto L_11a8a1ba;
L_11a89e0e:;
  /* 11a89e0e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89e12 je 0x11a89e56 */
  if (C.zf) goto L_11a89e56;
  /* 11a89e14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a89e17 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a89e1d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89e20 je 0x11a89e56 */
  if (C.zf) goto L_11a89e56;
  /* 11a89e22 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a89e25 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a89e2b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89e2e je 0x11a89e56 */
  if (C.zf) goto L_11a89e56;
L_11a89e30:;
  /* 11a89e30 push 0x11ab4830 */
  push32((uint32_t)(0x11ab4830u));
  /* 11a89e35 push 0x11ab4888 */
  push32((uint32_t)(0x11ab4888u));
  /* 11a89e3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89e3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89e3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89e40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a89e42 call 0x11a868a0 */
  push32(0x11a89e47u); f_11a868a0();
  /* 11a89e47 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89e4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89e4d jne 0x11a89e50 */
  if (!C.zf) goto L_11a89e50;
  /* 11a89e4f int3  */
  x86_unimpl("int3 @ 0x11a89e4f");
L_11a89e50:;
  /* 11a89e50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a89e52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a89e54 jne 0x11a89e30 */
  if (!C.zf) goto L_11a89e30;
L_11a89e56:;
  /* 11a89e56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89e59 push ecx */
  push32((uint32_t)(ECX));
  /* 11a89e5a call 0x11a8ade0 */
  push32(0x11a89e5fu); f_11a8ade0();
  /* 11a89e5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89e62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a89e64 jne 0x11a89e87 */
  if (!C.zf) goto L_11a89e87;
  /* 11a89e66 push 0x11ab49f8 */
  push32((uint32_t)(0x11ab49f8u));
  /* 11a89e6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89e6d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11a89e72 push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a89e77 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a89e79 call 0x11a868a0 */
  push32(0x11a89e7eu); f_11a868a0();
  /* 11a89e7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89e81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89e84 jne 0x11a89e87 */
  if (!C.zf) goto L_11a89e87;
  /* 11a89e86 int3  */
  x86_unimpl("int3 @ 0x11a89e86");
L_11a89e87:;
  /* 11a89e87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a89e89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a89e8b jne 0x11a89e56 */
  if (!C.zf) goto L_11a89e56;
  /* 11a89e8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a89e90 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a89e93 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a89e96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a89e99 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89e9d jne 0x11a89ea6 */
  if (!C.zf) goto L_11a89ea6;
  /* 11a89e9f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11a89ea6:;
  /* 11a89ea6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89eaa je 0x11a89eea */
  if (C.zf) goto L_11a89eea;
L_11a89eac:;
  /* 11a89eac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a89eaf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89eb6 jne 0x11a89ec1 */
  if (!C.zf) goto L_11a89ec1;
  /* 11a89eb8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a89ebb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89ebf je 0x11a89ee2 */
  if (C.zf) goto L_11a89ee2;
L_11a89ec1:;
  /* 11a89ec1 push 0x11ab49b0 */
  push32((uint32_t)(0x11ab49b0u));
  /* 11a89ec6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89ec8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11a89ecd push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a89ed2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a89ed4 call 0x11a868a0 */
  push32(0x11a89ed9u); f_11a868a0();
  /* 11a89ed9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89edc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89edf jne 0x11a89ee2 */
  if (!C.zf) goto L_11a89ee2;
  /* 11a89ee1 int3  */
  x86_unimpl("int3 @ 0x11a89ee1");
L_11a89ee2:;
  /* 11a89ee2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a89ee4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a89ee6 jne 0x11a89eac */
  if (!C.zf) goto L_11a89eac;
  /* 11a89ee8 jmp 0x11a89f4e */
  goto L_11a89f4e;
L_11a89eea:;
  /* 11a89eea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a89eed mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a89ef0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a89ef5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89ef8 jne 0x11a89f0f */
  if (!C.zf) goto L_11a89f0f;
  /* 11a89efa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a89efd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a89f03 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89f06 jne 0x11a89f0f */
  if (!C.zf) goto L_11a89f0f;
  /* 11a89f08 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11a89f0f:;
  /* 11a89f0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a89f12 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a89f15 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a89f1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a89f1d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a89f23 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89f25 je 0x11a89f48 */
  if (C.zf) goto L_11a89f48;
  /* 11a89f27 push 0x11ab4974 */
  push32((uint32_t)(0x11ab4974u));
  /* 11a89f2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a89f2e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11a89f33 push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a89f38 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a89f3a call 0x11a868a0 */
  push32(0x11a89f3fu); f_11a868a0();
  /* 11a89f3f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89f42 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89f45 jne 0x11a89f48 */
  if (!C.zf) goto L_11a89f48;
  /* 11a89f47 int3  */
  x86_unimpl("int3 @ 0x11a89f47");
L_11a89f48:;
  /* 11a89f48 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a89f4a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a89f4c jne 0x11a89f0f */
  if (!C.zf) goto L_11a89f0f;
L_11a89f4e:;
  /* 11a89f4e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89f52 je 0x11a89f79 */
  if (C.zf) goto L_11a89f79;
  /* 11a89f54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a89f57 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89f5a push eax */
  push32((uint32_t)(EAX));
  /* 11a89f5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a89f5e push ecx */
  push32((uint32_t)(ECX));
  /* 11a89f5f call 0x11a8f7f0 */
  push32(0x11a89f64u); f_11a8f7f0();
  /* 11a89f64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89f67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a89f6a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89f6e jne 0x11a89f77 */
  if (!C.zf) goto L_11a89f77;
  /* 11a89f70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a89f72 jmp 0x11a8a1ba */
  goto L_11a8a1ba;
L_11a89f77:;
  /* 11a89f77 jmp 0x11a89f9c */
  goto L_11a89f9c;
L_11a89f79:;
  /* 11a89f79 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a89f7c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89f7f push edx */
  push32((uint32_t)(EDX));
  /* 11a89f80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a89f83 push eax */
  push32((uint32_t)(EAX));
  /* 11a89f84 call 0x11a8f740 */
  push32(0x11a89f89u); f_11a8f740();
  /* 11a89f89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89f8c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a89f8f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89f93 jne 0x11a89f9c */
  if (!C.zf) goto L_11a89f9c;
  /* 11a89f95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a89f97 jmp 0x11a8a1ba */
  goto L_11a8a1ba;
L_11a89f9c:;
  /* 11a89f9c mov ecx, dword ptr [0x11ab7b80] */
  ECX = (r32((uint32_t)(0x11ab7b80)));
  /* 11a89fa2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89fa5 mov dword ptr [0x11ab7b80], ecx */
  w32((uint32_t)(0x11ab7b80), (ECX));
  /* 11a89fab cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89faf jne 0x11a8a007 */
  if (!C.zf) goto L_11a8a007;
  /* 11a89fb1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a89fb4 mov eax, dword ptr [0x11aba108] */
  EAX = (r32((uint32_t)(0x11aba108)));
  /* 11a89fb9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a89fbc mov dword ptr [0x11aba108], eax */
  w32((uint32_t)(0x11aba108), (EAX));
  /* 11a89fc1 mov ecx, dword ptr [0x11aba108] */
  ECX = (r32((uint32_t)(0x11aba108)));
  /* 11a89fc7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89fca mov dword ptr [0x11aba108], ecx */
  w32((uint32_t)(0x11aba108), (ECX));
  /* 11a89fd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a89fd3 mov eax, dword ptr [0x11aba110] */
  EAX = (r32((uint32_t)(0x11aba110)));
  /* 11a89fd8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a89fdb mov dword ptr [0x11aba110], eax */
  w32((uint32_t)(0x11aba110), (EAX));
  /* 11a89fe0 mov ecx, dword ptr [0x11aba110] */
  ECX = (r32((uint32_t)(0x11aba110)));
  /* 11a89fe6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a89fe9 mov dword ptr [0x11aba110], ecx */
  w32((uint32_t)(0x11aba110), (ECX));
  /* 11a89fef mov edx, dword ptr [0x11aba110] */
  EDX = (r32((uint32_t)(0x11aba110)));
  /* 11a89ff5 cmp edx, dword ptr [0x11aba114] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11aba114))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a89ffb jbe 0x11a8a007 */
  if ((C.cf||C.zf)) goto L_11a8a007;
  /* 11a89ffd mov eax, dword ptr [0x11aba110] */
  EAX = (r32((uint32_t)(0x11aba110)));
  /* 11a8a002 mov dword ptr [0x11aba114], eax */
  w32((uint32_t)(0x11aba114), (EAX));
L_11a8a007:;
  /* 11a8a007 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a00a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a00d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8a010 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a013 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8a016 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a019 jbe 0x11a8a03f */
  if ((C.cf||C.zf)) goto L_11a8a03f;
  /* 11a8a01b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a01e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8a021 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8a024 push edx */
  push32((uint32_t)(EDX));
  /* 11a8a025 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8a027 mov al, byte ptr [0x11ab7b8a] */
  AL = (r8((uint32_t)(0x11ab7b8a)));
  /* 11a8a02c push eax */
  push32((uint32_t)(EAX));
  /* 11a8a02d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a030 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a033 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a036 push edx */
  push32((uint32_t)(EDX));
  /* 11a8a037 call 0x11a8ee40 */
  push32(0x11a8a03cu); f_11a8ee40();
  /* 11a8a03c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8a03f:;
  /* 11a8a03f push 4 */
  push32((uint32_t)(0x4u));
  /* 11a8a041 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8a043 mov al, byte ptr [0x11ab7b88] */
  AL = (r8((uint32_t)(0x11ab7b88)));
  /* 11a8a048 push eax */
  push32((uint32_t)(EAX));
  /* 11a8a049 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a04c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a04f push ecx */
  push32((uint32_t)(ECX));
  /* 11a8a050 call 0x11a8ee40 */
  push32(0x11a8a055u); f_11a8ee40();
  /* 11a8a055 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a058 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a05c jne 0x11a8a079 */
  if (!C.zf) goto L_11a8a079;
  /* 11a8a05e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a061 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a8a064 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11a8a067 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a06a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8a06d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11a8a070 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a073 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8a076 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11a8a079:;
  /* 11a8a079 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a07c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8a07f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11a8a082:;
  /* 11a8a082 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a086 jne 0x11a8a0b7 */
  if (!C.zf) goto L_11a8a0b7;
  /* 11a8a088 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a08c jne 0x11a8a096 */
  if (!C.zf) goto L_11a8a096;
  /* 11a8a08e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a091 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a094 je 0x11a8a0b7 */
  if (C.zf) goto L_11a8a0b7;
L_11a8a096:;
  /* 11a8a096 push 0x11ab4940 */
  push32((uint32_t)(0x11ab4940u));
  /* 11a8a09b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a09d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11a8a0a2 push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a8a0a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8a0a9 call 0x11a868a0 */
  push32(0x11a8a0aeu); f_11a868a0();
  /* 11a8a0ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a0b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a0b4 jne 0x11a8a0b7 */
  if (!C.zf) goto L_11a8a0b7;
  /* 11a8a0b6 int3  */
  x86_unimpl("int3 @ 0x11a8a0b6");
L_11a8a0b7:;
  /* 11a8a0b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8a0b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8a0bb jne 0x11a8a082 */
  if (!C.zf) goto L_11a8a082;
  /* 11a8a0bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a0c0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a0c3 je 0x11a8a0cb */
  if (C.zf) goto L_11a8a0cb;
  /* 11a8a0c5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a0c9 je 0x11a8a0d3 */
  if (C.zf) goto L_11a8a0d3;
L_11a8a0cb:;
  /* 11a8a0cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a0ce jmp 0x11a8a1ba */
  goto L_11a8a1ba;
L_11a8a0d3:;
  /* 11a8a0d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a0d6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a0d9 je 0x11a8a0eb */
  if (C.zf) goto L_11a8a0eb;
  /* 11a8a0db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a0de mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a8a0e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a0e3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a8a0e6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11a8a0e9 jmp 0x11a8a127 */
  goto L_11a8a127;
L_11a8a0eb:;
  /* 11a8a0eb mov eax, dword ptr [0x11aba104] */
  EAX = (r32((uint32_t)(0x11aba104)));
  /* 11a8a0f0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a0f3 je 0x11a8a116 */
  if (C.zf) goto L_11a8a116;
  /* 11a8a0f5 push 0x11ab4924 */
  push32((uint32_t)(0x11ab4924u));
  /* 11a8a0fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a0fc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11a8a101 push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a8a106 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8a108 call 0x11a868a0 */
  push32(0x11a8a10du); f_11a868a0();
  /* 11a8a10d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a110 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a113 jne 0x11a8a116 */
  if (!C.zf) goto L_11a8a116;
  /* 11a8a115 int3  */
  x86_unimpl("int3 @ 0x11a8a115");
L_11a8a116:;
  /* 11a8a116 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8a118 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8a11a jne 0x11a8a0eb */
  if (!C.zf) goto L_11a8a0eb;
  /* 11a8a11c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a11f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a8a122 mov dword ptr [0x11aba104], eax */
  w32((uint32_t)(0x11aba104), (EAX));
L_11a8a127:;
  /* 11a8a127 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a12a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a12e je 0x11a8a13f */
  if (C.zf) goto L_11a8a13f;
  /* 11a8a130 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a133 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a8a136 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a139 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8a13b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a8a13d jmp 0x11a8a17a */
  goto L_11a8a17a;
L_11a8a13f:;
  /* 11a8a13f mov eax, dword ptr [0x11aba10c] */
  EAX = (r32((uint32_t)(0x11aba10c)));
  /* 11a8a144 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a147 je 0x11a8a16a */
  if (C.zf) goto L_11a8a16a;
  /* 11a8a149 push 0x11ab4908 */
  push32((uint32_t)(0x11ab4908u));
  /* 11a8a14e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a150 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11a8a155 push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a8a15a push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8a15c call 0x11a868a0 */
  push32(0x11a8a161u); f_11a868a0();
  /* 11a8a161 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a164 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a167 jne 0x11a8a16a */
  if (!C.zf) goto L_11a8a16a;
  /* 11a8a169 int3  */
  x86_unimpl("int3 @ 0x11a8a169");
L_11a8a16a:;
  /* 11a8a16a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8a16c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8a16e jne 0x11a8a13f */
  if (!C.zf) goto L_11a8a13f;
  /* 11a8a170 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a173 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a8a175 mov dword ptr [0x11aba10c], eax */
  w32((uint32_t)(0x11aba10c), (EAX));
L_11a8a17a:;
  /* 11a8a17a cmp dword ptr [0x11aba10c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba10c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a181 je 0x11a8a191 */
  if (C.zf) goto L_11a8a191;
  /* 11a8a183 mov ecx, dword ptr [0x11aba10c] */
  ECX = (r32((uint32_t)(0x11aba10c)));
  /* 11a8a189 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a18c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11a8a18f jmp 0x11a8a199 */
  goto L_11a8a199;
L_11a8a191:;
  /* 11a8a191 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a194 mov dword ptr [0x11aba104], eax */
  w32((uint32_t)(0x11aba104), (EAX));
L_11a8a199:;
  /* 11a8a199 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a19c mov edx, dword ptr [0x11aba10c] */
  EDX = (r32((uint32_t)(0x11aba10c)));
  /* 11a8a1a2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a8a1a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a1a7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11a8a1ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a1b1 mov dword ptr [0x11aba10c], ecx */
  w32((uint32_t)(0x11aba10c), (ECX));
  /* 11a8a1b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11a8a1ba:;
  /* 11a8a1ba pop edi */
  EDI = (pop32());
  /* 11a8a1bb pop esi */
  ESI = (pop32());
  /* 11a8a1bc pop ebx */
  EBX = (pop32());
  /* 11a8a1bd mov esp, ebp */
  ESP = (EBP);
  /* 11a8a1bf pop ebp */
  EBP = (pop32());
  /* 11a8a1c0 ret  */
  ESPCHK(0x11a89cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1d0 @ 0x11a8a1d0 (27 bytes, 13 insns) */
void f_11a8a1d0(void) {
  FTRACE(0x11a8a1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8a1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8a1d1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8a1d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a1d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a1d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8a1d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8a1dc push eax */
  push32((uint32_t)(EAX));
  /* 11a8a1dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a1e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8a1e1 call 0x11a8a1f0 */
  push32(0x11a8a1e6u); f_11a8a1f0();
  /* 11a8a1e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a1e9 pop ebp */
  EBP = (pop32());
  /* 11a8a1ea ret  */
  ESPCHK(0x11a8a1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1f0 @ 0x11a8a1f0 (64 bytes, 27 insns) */
void f_11a8a1f0(void) {
  FTRACE(0x11a8a1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8a1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8a1f1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8a1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8a1f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8a1f6 call 0x11a8f2d0 */
  push32(0x11a8a1fbu); f_11a8f2d0();
  /* 11a8a1fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a1fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a200 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8a203 push eax */
  push32((uint32_t)(EAX));
  /* 11a8a204 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a8a207 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8a208 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8a20b push edx */
  push32((uint32_t)(EDX));
  /* 11a8a20c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8a20f push eax */
  push32((uint32_t)(EAX));
  /* 11a8a210 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a213 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8a214 call 0x11a89cb0 */
  push32(0x11a8a219u); f_11a89cb0();
  /* 11a8a219 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a21c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8a21f push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8a221 call 0x11a8f370 */
  push32(0x11a8a226u); f_11a8f370();
  /* 11a8a226 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a229 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a22c mov esp, ebp */
  ESP = (EBP);
  /* 11a8a22e pop ebp */
  EBP = (pop32());
  /* 11a8a22f ret  */
  ESPCHK(0x11a8a1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a230 @ 0x11a8a230 (19 bytes, 9 insns) */
void f_11a8a230(void) {
  FTRACE(0x11a8a230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8a230 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8a231 mov ebp, esp */
  EBP = (ESP);
  /* 11a8a233 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8a235 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a238 push eax */
  push32((uint32_t)(EAX));
  /* 11a8a239 call 0x11a8a270 */
  push32(0x11a8a23eu); f_11a8a270();
  /* 11a8a23e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a241 pop ebp */
  EBP = (pop32());
  /* 11a8a242 ret  */
  ESPCHK(0x11a8a230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a250 @ 0x11a8a250 (19 bytes, 9 insns) */
void f_11a8a250(void) {
  FTRACE(0x11a8a250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8a250 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8a251 mov ebp, esp */
  EBP = (ESP);
  /* 11a8a253 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8a255 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a258 push eax */
  push32((uint32_t)(EAX));
  /* 11a8a259 call 0x11a8a2a0 */
  push32(0x11a8a25eu); f_11a8a2a0();
  /* 11a8a25e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a261 pop ebp */
  EBP = (pop32());
  /* 11a8a262 ret  */
  ESPCHK(0x11a8a250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a270 @ 0x11a8a270 (41 bytes, 16 insns) */
void f_11a8a270(void) {
  FTRACE(0x11a8a270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8a270 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8a271 mov ebp, esp */
  EBP = (ESP);
  /* 11a8a273 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8a275 call 0x11a8f2d0 */
  push32(0x11a8a27au); f_11a8f2d0();
  /* 11a8a27a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a27d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8a280 push eax */
  push32((uint32_t)(EAX));
  /* 11a8a281 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a284 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8a285 call 0x11a8a2a0 */
  push32(0x11a8a28au); f_11a8a2a0();
  /* 11a8a28a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a28d push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8a28f call 0x11a8f370 */
  push32(0x11a8a294u); f_11a8f370();
  /* 11a8a294 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a297 pop ebp */
  EBP = (pop32());
  /* 11a8a298 ret  */
  ESPCHK(0x11a8a270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2a0 @ 0x11a8a2a0 (1004 bytes, 342 insns) */
void f_11a8a2a0(void) {
  FTRACE(0x11a8a2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8a2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8a2a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8a2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8a2a4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8a2a5 push esi */
  push32((uint32_t)(ESI));
  /* 11a8a2a6 push edi */
  push32((uint32_t)(EDI));
  /* 11a8a2a7 mov eax, dword ptr [0x11ab7b7c] */
  EAX = (r32((uint32_t)(0x11ab7b7c)));
  /* 11a8a2ac and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8a2af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8a2b1 je 0x11a8a2e3 */
  if (C.zf) goto L_11a8a2e3;
L_11a8a2b3:;
  /* 11a8a2b3 call 0x11a8a980 */
  push32(0x11a8a2b8u); f_11a8a980();
  /* 11a8a2b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8a2ba jne 0x11a8a2dd */
  if (!C.zf) goto L_11a8a2dd;
  /* 11a8a2bc push 0x11ab48f4 */
  push32((uint32_t)(0x11ab48f4u));
  /* 11a8a2c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a2c3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11a8a2c8 push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a8a2cd push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8a2cf call 0x11a868a0 */
  push32(0x11a8a2d4u); f_11a868a0();
  /* 11a8a2d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a2d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a2da jne 0x11a8a2dd */
  if (!C.zf) goto L_11a8a2dd;
  /* 11a8a2dc int3  */
  x86_unimpl("int3 @ 0x11a8a2dc");
L_11a8a2dd:;
  /* 11a8a2dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8a2df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8a2e1 jne 0x11a8a2b3 */
  if (!C.zf) goto L_11a8a2b3;
L_11a8a2e3:;
  /* 11a8a2e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a2e7 jne 0x11a8a2ee */
  if (!C.zf) goto L_11a8a2ee;
  /* 11a8a2e9 jmp 0x11a8a685 */
  goto L_11a8a685;
L_11a8a2ee:;
  /* 11a8a2ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a2f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a2f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a2f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8a2f7 push edx */
  push32((uint32_t)(EDX));
  /* 11a8a2f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a2fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a2fd push eax */
  push32((uint32_t)(EAX));
  /* 11a8a2fe push 3 */
  push32((uint32_t)(0x3u));
  /* 11a8a300 call dword ptr [0x11ab8258] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ab8258))), 0x11a8a306u);
  /* 11a8a306 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a309 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8a30b jne 0x11a8a338 */
  if (!C.zf) goto L_11a8a338;
L_11a8a30d:;
  /* 11a8a30d push 0x11ab4bb8 */
  push32((uint32_t)(0x11ab4bb8u));
  /* 11a8a312 push 0x11ab4888 */
  push32((uint32_t)(0x11ab4888u));
  /* 11a8a317 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a319 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a31b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a31d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a31f call 0x11a868a0 */
  push32(0x11a8a324u); f_11a868a0();
  /* 11a8a324 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a327 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a32a jne 0x11a8a32d */
  if (!C.zf) goto L_11a8a32d;
  /* 11a8a32c int3  */
  x86_unimpl("int3 @ 0x11a8a32c");
L_11a8a32d:;
  /* 11a8a32d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8a32f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8a331 jne 0x11a8a30d */
  if (!C.zf) goto L_11a8a30d;
  /* 11a8a333 jmp 0x11a8a685 */
  goto L_11a8a685;
L_11a8a338:;
  /* 11a8a338 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a33b push edx */
  push32((uint32_t)(EDX));
  /* 11a8a33c call 0x11a8ade0 */
  push32(0x11a8a341u); f_11a8ade0();
  /* 11a8a341 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8a346 jne 0x11a8a369 */
  if (!C.zf) goto L_11a8a369;
  /* 11a8a348 push 0x11ab49f8 */
  push32((uint32_t)(0x11ab49f8u));
  /* 11a8a34d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a34f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11a8a354 push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a8a359 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8a35b call 0x11a868a0 */
  push32(0x11a8a360u); f_11a868a0();
  /* 11a8a360 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a363 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a366 jne 0x11a8a369 */
  if (!C.zf) goto L_11a8a369;
  /* 11a8a368 int3  */
  x86_unimpl("int3 @ 0x11a8a368");
L_11a8a369:;
  /* 11a8a369 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8a36b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8a36d jne 0x11a8a338 */
  if (!C.zf) goto L_11a8a338;
  /* 11a8a36f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a372 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8a375 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a8a378:;
  /* 11a8a378 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a37b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a8a37e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8a383 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a386 je 0x11a8a3cb */
  if (C.zf) goto L_11a8a3cb;
  /* 11a8a388 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a38b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a38f je 0x11a8a3cb */
  if (C.zf) goto L_11a8a3cb;
  /* 11a8a391 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a394 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a8a397 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8a39c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a39f je 0x11a8a3cb */
  if (C.zf) goto L_11a8a3cb;
  /* 11a8a3a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a3a4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a3a8 je 0x11a8a3cb */
  if (C.zf) goto L_11a8a3cb;
  /* 11a8a3aa push 0x11ab4b90 */
  push32((uint32_t)(0x11ab4b90u));
  /* 11a8a3af push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a3b1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11a8a3b6 push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a8a3bb push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8a3bd call 0x11a868a0 */
  push32(0x11a8a3c2u); f_11a868a0();
  /* 11a8a3c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a3c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a3c8 jne 0x11a8a3cb */
  if (!C.zf) goto L_11a8a3cb;
  /* 11a8a3ca int3  */
  x86_unimpl("int3 @ 0x11a8a3ca");
L_11a8a3cb:;
  /* 11a8a3cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8a3cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8a3cf jne 0x11a8a378 */
  if (!C.zf) goto L_11a8a378;
  /* 11a8a3d1 mov eax, dword ptr [0x11ab7b7c] */
  EAX = (r32((uint32_t)(0x11ab7b7c)));
  /* 11a8a3d6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8a3d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8a3db jne 0x11a8a4a6 */
  if (!C.zf) goto L_11a8a4a6;
  /* 11a8a3e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a8a3e3 mov cl, byte ptr [0x11ab7b88] */
  CL = (r8((uint32_t)(0x11ab7b88)));
  /* 11a8a3e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8a3ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a3ed add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a3f0 push edx */
  push32((uint32_t)(EDX));
  /* 11a8a3f1 call 0x11a8a8f0 */
  push32(0x11a8a3f6u); f_11a8a8f0();
  /* 11a8a3f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a3f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8a3fb jne 0x11a8a440 */
  if (!C.zf) goto L_11a8a440;
L_11a8a3fd:;
  /* 11a8a3fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a400 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a403 push eax */
  push32((uint32_t)(EAX));
  /* 11a8a404 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a407 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11a8a40a push edx */
  push32((uint32_t)(EDX));
  /* 11a8a40b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a40e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11a8a411 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8a417 mov edx, dword ptr [ecx*4 + 0x11ab7b8c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ab7b8c)));
  /* 11a8a41e push edx */
  push32((uint32_t)(EDX));
  /* 11a8a41f push 0x11ab4b64 */
  push32((uint32_t)(0x11ab4b64u));
  /* 11a8a424 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a426 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a428 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a42a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8a42c call 0x11a868a0 */
  push32(0x11a8a431u); f_11a868a0();
  /* 11a8a431 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a434 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a437 jne 0x11a8a43a */
  if (!C.zf) goto L_11a8a43a;
  /* 11a8a439 int3  */
  x86_unimpl("int3 @ 0x11a8a439");
L_11a8a43a:;
  /* 11a8a43a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8a43c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8a43e jne 0x11a8a3fd */
  if (!C.zf) goto L_11a8a3fd;
L_11a8a440:;
  /* 11a8a440 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a8a442 mov cl, byte ptr [0x11ab7b88] */
  CL = (r8((uint32_t)(0x11ab7b88)));
  /* 11a8a448 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8a449 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a44c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11a8a44f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a452 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11a8a456 push edx */
  push32((uint32_t)(EDX));
  /* 11a8a457 call 0x11a8a8f0 */
  push32(0x11a8a45cu); f_11a8a8f0();
  /* 11a8a45c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a45f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8a461 jne 0x11a8a4a6 */
  if (!C.zf) goto L_11a8a4a6;
L_11a8a463:;
  /* 11a8a463 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a466 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a469 push eax */
  push32((uint32_t)(EAX));
  /* 11a8a46a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a46d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11a8a470 push edx */
  push32((uint32_t)(EDX));
  /* 11a8a471 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a474 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11a8a477 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8a47d mov edx, dword ptr [ecx*4 + 0x11ab7b8c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ab7b8c)));
  /* 11a8a484 push edx */
  push32((uint32_t)(EDX));
  /* 11a8a485 push 0x11ab4b38 */
  push32((uint32_t)(0x11ab4b38u));
  /* 11a8a48a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a48c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a48e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a490 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8a492 call 0x11a868a0 */
  push32(0x11a8a497u); f_11a868a0();
  /* 11a8a497 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a49a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a49d jne 0x11a8a4a0 */
  if (!C.zf) goto L_11a8a4a0;
  /* 11a8a49f int3  */
  x86_unimpl("int3 @ 0x11a8a49f");
L_11a8a4a0:;
  /* 11a8a4a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8a4a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8a4a4 jne 0x11a8a463 */
  if (!C.zf) goto L_11a8a463;
L_11a8a4a6:;
  /* 11a8a4a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a4a9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a4ad jne 0x11a8a51b */
  if (!C.zf) goto L_11a8a51b;
L_11a8a4af:;
  /* 11a8a4af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a4b2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a4b9 jne 0x11a8a4c4 */
  if (!C.zf) goto L_11a8a4c4;
  /* 11a8a4bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a4be cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a4c2 je 0x11a8a4e5 */
  if (C.zf) goto L_11a8a4e5;
L_11a8a4c4:;
  /* 11a8a4c4 push 0x11ab4af8 */
  push32((uint32_t)(0x11ab4af8u));
  /* 11a8a4c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a4cb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11a8a4d0 push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a8a4d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8a4d7 call 0x11a868a0 */
  push32(0x11a8a4dcu); f_11a868a0();
  /* 11a8a4dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a4df cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a4e2 jne 0x11a8a4e5 */
  if (!C.zf) goto L_11a8a4e5;
  /* 11a8a4e4 int3  */
  x86_unimpl("int3 @ 0x11a8a4e4");
L_11a8a4e5:;
  /* 11a8a4e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8a4e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8a4e9 jne 0x11a8a4af */
  if (!C.zf) goto L_11a8a4af;
  /* 11a8a4eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a4ee mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11a8a4f1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a4f4 push eax */
  push32((uint32_t)(EAX));
  /* 11a8a4f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8a4f7 mov cl, byte ptr [0x11ab7b89] */
  CL = (r8((uint32_t)(0x11ab7b89)));
  /* 11a8a4fd push ecx */
  push32((uint32_t)(ECX));
  /* 11a8a4fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a501 push edx */
  push32((uint32_t)(EDX));
  /* 11a8a502 call 0x11a8ee40 */
  push32(0x11a8a507u); f_11a8ee40();
  /* 11a8a507 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a50a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a50d push eax */
  push32((uint32_t)(EAX));
  /* 11a8a50e call 0x11a8f9e0 */
  push32(0x11a8a513u); f_11a8f9e0();
  /* 11a8a513 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a516 jmp 0x11a8a685 */
  goto L_11a8a685;
L_11a8a51b:;
  /* 11a8a51b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a51e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a522 jne 0x11a8a531 */
  if (!C.zf) goto L_11a8a531;
  /* 11a8a524 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a528 jne 0x11a8a531 */
  if (!C.zf) goto L_11a8a531;
  /* 11a8a52a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11a8a531:;
  /* 11a8a531 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a534 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a8a537 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a53a je 0x11a8a55d */
  if (C.zf) goto L_11a8a55d;
  /* 11a8a53c push 0x11ab4ad8 */
  push32((uint32_t)(0x11ab4ad8u));
  /* 11a8a541 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a543 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11a8a548 push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a8a54d push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8a54f call 0x11a868a0 */
  push32(0x11a8a554u); f_11a868a0();
  /* 11a8a554 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a557 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a55a jne 0x11a8a55d */
  if (!C.zf) goto L_11a8a55d;
  /* 11a8a55c int3  */
  x86_unimpl("int3 @ 0x11a8a55c");
L_11a8a55d:;
  /* 11a8a55d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8a55f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8a561 jne 0x11a8a531 */
  if (!C.zf) goto L_11a8a531;
  /* 11a8a563 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a566 mov eax, dword ptr [0x11aba110] */
  EAX = (r32((uint32_t)(0x11aba110)));
  /* 11a8a56b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8a56e mov dword ptr [0x11aba110], eax */
  w32((uint32_t)(0x11aba110), (EAX));
  /* 11a8a573 mov ecx, dword ptr [0x11ab7b7c] */
  ECX = (r32((uint32_t)(0x11ab7b7c)));
  /* 11a8a579 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8a57c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8a57e jne 0x11a8a65c */
  if (!C.zf) goto L_11a8a65c;
  /* 11a8a584 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a587 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a58a je 0x11a8a59c */
  if (C.zf) goto L_11a8a59c;
  /* 11a8a58c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a58f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8a591 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a594 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a8a597 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11a8a59a jmp 0x11a8a5da */
  goto L_11a8a5da;
L_11a8a59c:;
  /* 11a8a59c mov ecx, dword ptr [0x11aba104] */
  ECX = (r32((uint32_t)(0x11aba104)));
  /* 11a8a5a2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a5a5 je 0x11a8a5c8 */
  if (C.zf) goto L_11a8a5c8;
  /* 11a8a5a7 push 0x11ab4ac0 */
  push32((uint32_t)(0x11ab4ac0u));
  /* 11a8a5ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a5ae push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11a8a5b3 push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a8a5b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8a5ba call 0x11a868a0 */
  push32(0x11a8a5bfu); f_11a868a0();
  /* 11a8a5bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a5c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a5c5 jne 0x11a8a5c8 */
  if (!C.zf) goto L_11a8a5c8;
  /* 11a8a5c7 int3  */
  x86_unimpl("int3 @ 0x11a8a5c7");
L_11a8a5c8:;
  /* 11a8a5c8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8a5ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8a5cc jne 0x11a8a59c */
  if (!C.zf) goto L_11a8a59c;
  /* 11a8a5ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a5d1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a8a5d4 mov dword ptr [0x11aba104], ecx */
  w32((uint32_t)(0x11aba104), (ECX));
L_11a8a5da:;
  /* 11a8a5da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a5dd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a5e1 je 0x11a8a5f2 */
  if (C.zf) goto L_11a8a5f2;
  /* 11a8a5e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a5e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a8a5e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a5ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a8a5ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a8a5f0 jmp 0x11a8a62f */
  goto L_11a8a62f;
L_11a8a5f2:;
  /* 11a8a5f2 mov ecx, dword ptr [0x11aba10c] */
  ECX = (r32((uint32_t)(0x11aba10c)));
  /* 11a8a5f8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a5fb je 0x11a8a61e */
  if (C.zf) goto L_11a8a61e;
  /* 11a8a5fd push 0x11ab4aa8 */
  push32((uint32_t)(0x11ab4aa8u));
  /* 11a8a602 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a604 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11a8a609 push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a8a60e push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8a610 call 0x11a868a0 */
  push32(0x11a8a615u); f_11a868a0();
  /* 11a8a615 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a618 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a61b jne 0x11a8a61e */
  if (!C.zf) goto L_11a8a61e;
  /* 11a8a61d int3  */
  x86_unimpl("int3 @ 0x11a8a61d");
L_11a8a61e:;
  /* 11a8a61e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8a620 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8a622 jne 0x11a8a5f2 */
  if (!C.zf) goto L_11a8a5f2;
  /* 11a8a624 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a627 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8a629 mov dword ptr [0x11aba10c], ecx */
  w32((uint32_t)(0x11aba10c), (ECX));
L_11a8a62f:;
  /* 11a8a62f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a632 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11a8a635 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a638 push eax */
  push32((uint32_t)(EAX));
  /* 11a8a639 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8a63b mov cl, byte ptr [0x11ab7b89] */
  CL = (r8((uint32_t)(0x11ab7b89)));
  /* 11a8a641 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8a642 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a645 push edx */
  push32((uint32_t)(EDX));
  /* 11a8a646 call 0x11a8ee40 */
  push32(0x11a8a64bu); f_11a8ee40();
  /* 11a8a64b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a64e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a651 push eax */
  push32((uint32_t)(EAX));
  /* 11a8a652 call 0x11a8f9e0 */
  push32(0x11a8a657u); f_11a8f9e0();
  /* 11a8a657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a65a jmp 0x11a8a685 */
  goto L_11a8a685;
L_11a8a65c:;
  /* 11a8a65c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a65f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11a8a666 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a669 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11a8a66c push eax */
  push32((uint32_t)(EAX));
  /* 11a8a66d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8a66f mov cl, byte ptr [0x11ab7b89] */
  CL = (r8((uint32_t)(0x11ab7b89)));
  /* 11a8a675 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8a676 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a679 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a67c push edx */
  push32((uint32_t)(EDX));
  /* 11a8a67d call 0x11a8ee40 */
  push32(0x11a8a682u); f_11a8ee40();
  /* 11a8a682 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8a685:;
  /* 11a8a685 pop edi */
  EDI = (pop32());
  /* 11a8a686 pop esi */
  ESI = (pop32());
  /* 11a8a687 pop ebx */
  EBX = (pop32());
  /* 11a8a688 mov esp, ebp */
  ESP = (EBP);
  /* 11a8a68a pop ebp */
  EBP = (pop32());
  /* 11a8a68b ret  */
  ESPCHK(0x11a8a2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a690 @ 0x11a8a690 (19 bytes, 9 insns) */
void f_11a8a690(void) {
  FTRACE(0x11a8a690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8a690 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8a691 mov ebp, esp */
  EBP = (ESP);
  /* 11a8a693 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8a695 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a698 push eax */
  push32((uint32_t)(EAX));
  /* 11a8a699 call 0x11a8a6b0 */
  push32(0x11a8a69eu); f_11a8a6b0();
  /* 11a8a69e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a6a1 pop ebp */
  EBP = (pop32());
  /* 11a8a6a2 ret  */
  ESPCHK(0x11a8a690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6b0 @ 0x11a8a6b0 (342 bytes, 119 insns) */
void f_11a8a6b0(void) {
  FTRACE(0x11a8a6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8a6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8a6b1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8a6b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8a6b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8a6b7 push esi */
  push32((uint32_t)(ESI));
  /* 11a8a6b8 push edi */
  push32((uint32_t)(EDI));
  /* 11a8a6b9 mov eax, dword ptr [0x11ab7b7c] */
  EAX = (r32((uint32_t)(0x11ab7b7c)));
  /* 11a8a6be and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8a6c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8a6c3 je 0x11a8a6f5 */
  if (C.zf) goto L_11a8a6f5;
L_11a8a6c5:;
  /* 11a8a6c5 call 0x11a8a980 */
  push32(0x11a8a6cau); f_11a8a980();
  /* 11a8a6ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8a6cc jne 0x11a8a6ef */
  if (!C.zf) goto L_11a8a6ef;
  /* 11a8a6ce push 0x11ab48f4 */
  push32((uint32_t)(0x11ab48f4u));
  /* 11a8a6d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a6d5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 11a8a6da push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a8a6df push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8a6e1 call 0x11a868a0 */
  push32(0x11a8a6e6u); f_11a868a0();
  /* 11a8a6e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a6e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a6ec jne 0x11a8a6ef */
  if (!C.zf) goto L_11a8a6ef;
  /* 11a8a6ee int3  */
  x86_unimpl("int3 @ 0x11a8a6ee");
L_11a8a6ef:;
  /* 11a8a6ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8a6f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8a6f3 jne 0x11a8a6c5 */
  if (!C.zf) goto L_11a8a6c5;
L_11a8a6f5:;
  /* 11a8a6f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8a6f7 call 0x11a8f2d0 */
  push32(0x11a8a6fcu); f_11a8f2d0();
  /* 11a8a6fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8a6ff:;
  /* 11a8a6ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a702 push edx */
  push32((uint32_t)(EDX));
  /* 11a8a703 call 0x11a8ade0 */
  push32(0x11a8a708u); f_11a8ade0();
  /* 11a8a708 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a70b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8a70d jne 0x11a8a730 */
  if (!C.zf) goto L_11a8a730;
  /* 11a8a70f push 0x11ab49f8 */
  push32((uint32_t)(0x11ab49f8u));
  /* 11a8a714 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a716 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 11a8a71b push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a8a720 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8a722 call 0x11a868a0 */
  push32(0x11a8a727u); f_11a868a0();
  /* 11a8a727 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a72a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a72d jne 0x11a8a730 */
  if (!C.zf) goto L_11a8a730;
  /* 11a8a72f int3  */
  x86_unimpl("int3 @ 0x11a8a72f");
L_11a8a730:;
  /* 11a8a730 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8a732 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8a734 jne 0x11a8a6ff */
  if (!C.zf) goto L_11a8a6ff;
  /* 11a8a736 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a739 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8a73c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11a8a73f:;
  /* 11a8a73f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8a742 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a8a745 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8a74a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a74d je 0x11a8a792 */
  if (C.zf) goto L_11a8a792;
  /* 11a8a74f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8a752 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a756 je 0x11a8a792 */
  if (C.zf) goto L_11a8a792;
  /* 11a8a758 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8a75b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a8a75e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8a763 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a766 je 0x11a8a792 */
  if (C.zf) goto L_11a8a792;
  /* 11a8a768 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8a76b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a76f je 0x11a8a792 */
  if (C.zf) goto L_11a8a792;
  /* 11a8a771 push 0x11ab4b90 */
  push32((uint32_t)(0x11ab4b90u));
  /* 11a8a776 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a778 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 11a8a77d push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a8a782 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8a784 call 0x11a868a0 */
  push32(0x11a8a789u); f_11a868a0();
  /* 11a8a789 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a78c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a78f jne 0x11a8a792 */
  if (!C.zf) goto L_11a8a792;
  /* 11a8a791 int3  */
  x86_unimpl("int3 @ 0x11a8a791");
L_11a8a792:;
  /* 11a8a792 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8a794 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8a796 jne 0x11a8a73f */
  if (!C.zf) goto L_11a8a73f;
  /* 11a8a798 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8a79b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a79f jne 0x11a8a7ae */
  if (!C.zf) goto L_11a8a7ae;
  /* 11a8a7a1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a7a5 jne 0x11a8a7ae */
  if (!C.zf) goto L_11a8a7ae;
  /* 11a8a7a7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11a8a7ae:;
  /* 11a8a7ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8a7b1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a7b5 je 0x11a8a7e9 */
  if (C.zf) goto L_11a8a7e9;
L_11a8a7b7:;
  /* 11a8a7b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8a7ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a8a7bd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a7c0 je 0x11a8a7e3 */
  if (C.zf) goto L_11a8a7e3;
  /* 11a8a7c2 push 0x11ab4ad8 */
  push32((uint32_t)(0x11ab4ad8u));
  /* 11a8a7c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a7c9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 11a8a7ce push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a8a7d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8a7d5 call 0x11a868a0 */
  push32(0x11a8a7dau); f_11a868a0();
  /* 11a8a7da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a7dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a7e0 jne 0x11a8a7e3 */
  if (!C.zf) goto L_11a8a7e3;
  /* 11a8a7e2 int3  */
  x86_unimpl("int3 @ 0x11a8a7e2");
L_11a8a7e3:;
  /* 11a8a7e3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8a7e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8a7e7 jne 0x11a8a7b7 */
  if (!C.zf) goto L_11a8a7b7;
L_11a8a7e9:;
  /* 11a8a7e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8a7ec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11a8a7ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8a7f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8a7f4 call 0x11a8f370 */
  push32(0x11a8a7f9u); f_11a8f370();
  /* 11a8a7f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a7fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a7ff pop edi */
  EDI = (pop32());
  /* 11a8a800 pop esi */
  ESI = (pop32());
  /* 11a8a801 pop ebx */
  EBX = (pop32());
  /* 11a8a802 mov esp, ebp */
  ESP = (EBP);
  /* 11a8a804 pop ebp */
  EBP = (pop32());
  /* 11a8a805 ret  */
  ESPCHK(0x11a8a6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a810 @ 0x11a8a810 (28 bytes, 11 insns) */
void f_11a8a810(void) {
  FTRACE(0x11a8a810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8a810 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8a811 mov ebp, esp */
  EBP = (ESP);
  /* 11a8a813 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8a814 mov eax, dword ptr [0x11ab7b84] */
  EAX = (r32((uint32_t)(0x11ab7b84)));
  /* 11a8a819 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8a81c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a81f mov dword ptr [0x11ab7b84], ecx */
  w32((uint32_t)(0x11ab7b84), (ECX));
  /* 11a8a825 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a828 mov esp, ebp */
  ESP = (EBP);
  /* 11a8a82a pop ebp */
  EBP = (pop32());
  /* 11a8a82b ret  */
  ESPCHK(0x11a8a810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a830 @ 0x11a8a830 (157 bytes, 59 insns) */
void f_11a8a830(void) {
  FTRACE(0x11a8a830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8a830 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8a831 mov ebp, esp */
  EBP = (ESP);
  /* 11a8a833 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8a834 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8a835 push esi */
  push32((uint32_t)(ESI));
  /* 11a8a836 push edi */
  push32((uint32_t)(EDI));
  /* 11a8a837 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8a839 call 0x11a8f2d0 */
  push32(0x11a8a83eu); f_11a8f2d0();
  /* 11a8a83e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a841 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a844 push eax */
  push32((uint32_t)(EAX));
  /* 11a8a845 call 0x11a8ade0 */
  push32(0x11a8a84au); f_11a8ade0();
  /* 11a8a84a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a84d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8a84f je 0x11a8a8bc */
  if (C.zf) goto L_11a8a8bc;
  /* 11a8a851 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a854 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8a857 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a8a85a:;
  /* 11a8a85a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a85d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a8a860 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8a865 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a868 je 0x11a8a8ad */
  if (C.zf) goto L_11a8a8ad;
  /* 11a8a86a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a86d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a871 je 0x11a8a8ad */
  if (C.zf) goto L_11a8a8ad;
  /* 11a8a873 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a876 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a8a879 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8a87e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a881 je 0x11a8a8ad */
  if (C.zf) goto L_11a8a8ad;
  /* 11a8a883 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a886 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a88a je 0x11a8a8ad */
  if (C.zf) goto L_11a8a8ad;
  /* 11a8a88c push 0x11ab4b90 */
  push32((uint32_t)(0x11ab4b90u));
  /* 11a8a891 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a893 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11a8a898 push 0x11ab48e8 */
  push32((uint32_t)(0x11ab48e8u));
  /* 11a8a89d push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8a89f call 0x11a868a0 */
  push32(0x11a8a8a4u); f_11a868a0();
  /* 11a8a8a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a8a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a8aa jne 0x11a8a8ad */
  if (!C.zf) goto L_11a8a8ad;
  /* 11a8a8ac int3  */
  x86_unimpl("int3 @ 0x11a8a8ac");
L_11a8a8ad:;
  /* 11a8a8ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8a8af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8a8b1 jne 0x11a8a85a */
  if (!C.zf) goto L_11a8a85a;
  /* 11a8a8b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a8b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8a8b9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_11a8a8bc:;
  /* 11a8a8bc push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8a8be call 0x11a8f370 */
  push32(0x11a8a8c3u); f_11a8f370();
  /* 11a8a8c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a8c6 pop edi */
  EDI = (pop32());
  /* 11a8a8c7 pop esi */
  ESI = (pop32());
  /* 11a8a8c8 pop ebx */
  EBX = (pop32());
  /* 11a8a8c9 mov esp, ebp */
  ESP = (EBP);
  /* 11a8a8cb pop ebp */
  EBP = (pop32());
  /* 11a8a8cc ret  */
  ESPCHK(0x11a8a830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8d0 @ 0x11a8a8d0 (28 bytes, 11 insns) */
void f_11a8a8d0(void) {
  FTRACE(0x11a8a8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8a8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8a8d1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8a8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8a8d4 mov eax, dword ptr [0x11ab8258] */
  EAX = (r32((uint32_t)(0x11ab8258)));
  /* 11a8a8d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8a8dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a8df mov dword ptr [0x11ab8258], ecx */
  w32((uint32_t)(0x11ab8258), (ECX));
  /* 11a8a8e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a8e8 mov esp, ebp */
  ESP = (EBP);
  /* 11a8a8ea pop ebp */
  EBP = (pop32());
  /* 11a8a8eb ret  */
  ESPCHK(0x11a8a8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8f0 @ 0x11a8a8f0 (136 bytes, 55 insns) */
void f_11a8a8f0(void) {
  FTRACE(0x11a8a8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8a8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8a8f1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8a8f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8a8f4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8a8f5 push esi */
  push32((uint32_t)(ESI));
  /* 11a8a8f6 push edi */
  push32((uint32_t)(EDI));
  /* 11a8a8f7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11a8a8fe:;
  /* 11a8a8fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8a901 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8a904 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8a907 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11a8a90a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8a90c je 0x11a8a96e */
  if (C.zf) goto L_11a8a96e;
  /* 11a8a90e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a911 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8a913 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a8a915 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8a918 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8a91e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a921 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a924 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11a8a927 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a929 je 0x11a8a96c */
  if (C.zf) goto L_11a8a96c;
L_11a8a92b:;
  /* 11a8a92b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8a92e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8a933 push eax */
  push32((uint32_t)(EAX));
  /* 11a8a934 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a937 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8a939 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 11a8a93c push edx */
  push32((uint32_t)(EDX));
  /* 11a8a93d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8a940 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8a943 push eax */
  push32((uint32_t)(EAX));
  /* 11a8a944 push 0x11ab4bd4 */
  push32((uint32_t)(0x11ab4bd4u));
  /* 11a8a949 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a94b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a94d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a94f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a951 call 0x11a868a0 */
  push32(0x11a8a956u); f_11a868a0();
  /* 11a8a956 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a959 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a95c jne 0x11a8a95f */
  if (!C.zf) goto L_11a8a95f;
  /* 11a8a95e int3  */
  x86_unimpl("int3 @ 0x11a8a95e");
L_11a8a95f:;
  /* 11a8a95f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8a961 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8a963 jne 0x11a8a92b */
  if (!C.zf) goto L_11a8a92b;
  /* 11a8a965 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11a8a96c:;
  /* 11a8a96c jmp 0x11a8a8fe */
  goto L_11a8a8fe;
L_11a8a96e:;
  /* 11a8a96e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8a971 pop edi */
  EDI = (pop32());
  /* 11a8a972 pop esi */
  ESI = (pop32());
  /* 11a8a973 pop ebx */
  EBX = (pop32());
  /* 11a8a974 mov esp, ebp */
  ESP = (EBP);
  /* 11a8a976 pop ebp */
  EBP = (pop32());
  /* 11a8a977 ret  */
  ESPCHK(0x11a8a8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a980 @ 0x11a8a980 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11a8a980(void) {
  FTRACE(0x11a8a980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8a980 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8a981 mov ebp, esp */
  EBP = (ESP);
  /* 11a8a983 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8a986 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8a987 push esi */
  push32((uint32_t)(ESI));
  /* 11a8a988 push edi */
  push32((uint32_t)(EDI));
  /* 11a8a989 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a8a990 mov eax, dword ptr [0x11ab7b7c] */
  EAX = (r32((uint32_t)(0x11ab7b7c)));
  /* 11a8a995 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8a998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8a99a jne 0x11a8a9a6 */
  if (!C.zf) goto L_11a8a9a6;
  /* 11a8a99c mov eax, 1 */
  EAX = (0x1u);
  /* 11a8a9a1 jmp 0x11a8acd8 */
  goto L_11a8acd8;
L_11a8a9a6:;
  /* 11a8a9a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8a9a8 call 0x11a8f2d0 */
  push32(0x11a8a9adu); f_11a8f2d0();
  /* 11a8a9ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a9b0 call 0x11a8fa50 */
  push32(0x11a8a9b5u); f_11a8fa50();
  /* 11a8a9b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8a9b8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a9bc je 0x11a8aac9 */
  if (C.zf) goto L_11a8aac9;
  /* 11a8a9c2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a9c6 je 0x11a8aac9 */
  if (C.zf) goto L_11a8aac9;
  /* 11a8a9cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8a9cf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11a8a9d2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8a9d5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8a9d8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11a8a9db cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8a9df ja 0x11a8aa92 */
  if ((!C.cf&&!C.zf)) goto L_11a8aa92;
  /* 11a8a9e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8a9e8 jmp dword ptr [eax*4 + 0x11a8acdf] */
  switch (EAX) {
    case 0: goto L_11a8aa6a;
    case 1: goto L_11a8aa42;
    case 2: goto L_11a8aa1a;
    case 3: goto L_11a8a9ef;
    default: x86_unimpl("switch@0x11a8a9e8 out of table"); return;
  }
L_11a8a9ef:;
  /* 11a8a9ef push 0x11ab4d28 */
  push32((uint32_t)(0x11ab4d28u));
  /* 11a8a9f4 push 0x11ab4888 */
  push32((uint32_t)(0x11ab4888u));
  /* 11a8a9f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a9fb push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a9fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8a9ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aa01 call 0x11a868a0 */
  push32(0x11a8aa06u); f_11a868a0();
  /* 11a8aa06 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8aa09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8aa0c jne 0x11a8aa0f */
  if (!C.zf) goto L_11a8aa0f;
  /* 11a8aa0e int3  */
  x86_unimpl("int3 @ 0x11a8aa0e");
L_11a8aa0f:;
  /* 11a8aa0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8aa11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8aa13 jne 0x11a8a9ef */
  if (!C.zf) goto L_11a8a9ef;
  /* 11a8aa15 jmp 0x11a8aab8 */
  goto L_11a8aab8;
L_11a8aa1a:;
  /* 11a8aa1a push 0x11ab4d04 */
  push32((uint32_t)(0x11ab4d04u));
  /* 11a8aa1f push 0x11ab4888 */
  push32((uint32_t)(0x11ab4888u));
  /* 11a8aa24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aa26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aa28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aa2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aa2c call 0x11a868a0 */
  push32(0x11a8aa31u); f_11a868a0();
  /* 11a8aa31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8aa34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8aa37 jne 0x11a8aa3a */
  if (!C.zf) goto L_11a8aa3a;
  /* 11a8aa39 int3  */
  x86_unimpl("int3 @ 0x11a8aa39");
L_11a8aa3a:;
  /* 11a8aa3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8aa3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8aa3e jne 0x11a8aa1a */
  if (!C.zf) goto L_11a8aa1a;
  /* 11a8aa40 jmp 0x11a8aab8 */
  goto L_11a8aab8;
L_11a8aa42:;
  /* 11a8aa42 push 0x11ab4ce0 */
  push32((uint32_t)(0x11ab4ce0u));
  /* 11a8aa47 push 0x11ab4888 */
  push32((uint32_t)(0x11ab4888u));
  /* 11a8aa4c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aa4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aa50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aa52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aa54 call 0x11a868a0 */
  push32(0x11a8aa59u); f_11a868a0();
  /* 11a8aa59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8aa5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8aa5f jne 0x11a8aa62 */
  if (!C.zf) goto L_11a8aa62;
  /* 11a8aa61 int3  */
  x86_unimpl("int3 @ 0x11a8aa61");
L_11a8aa62:;
  /* 11a8aa62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8aa64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8aa66 jne 0x11a8aa42 */
  if (!C.zf) goto L_11a8aa42;
  /* 11a8aa68 jmp 0x11a8aab8 */
  goto L_11a8aab8;
L_11a8aa6a:;
  /* 11a8aa6a push 0x11ab4cbc */
  push32((uint32_t)(0x11ab4cbcu));
  /* 11a8aa6f push 0x11ab4888 */
  push32((uint32_t)(0x11ab4888u));
  /* 11a8aa74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aa76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aa78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aa7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aa7c call 0x11a868a0 */
  push32(0x11a8aa81u); f_11a868a0();
  /* 11a8aa81 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8aa84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8aa87 jne 0x11a8aa8a */
  if (!C.zf) goto L_11a8aa8a;
  /* 11a8aa89 int3  */
  x86_unimpl("int3 @ 0x11a8aa89");
L_11a8aa8a:;
  /* 11a8aa8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8aa8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8aa8e jne 0x11a8aa6a */
  if (!C.zf) goto L_11a8aa6a;
  /* 11a8aa90 jmp 0x11a8aab8 */
  goto L_11a8aab8;
L_11a8aa92:;
  /* 11a8aa92 push 0x11ab4c90 */
  push32((uint32_t)(0x11ab4c90u));
  /* 11a8aa97 push 0x11ab4888 */
  push32((uint32_t)(0x11ab4888u));
  /* 11a8aa9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aa9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aaa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aaa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aaa4 call 0x11a868a0 */
  push32(0x11a8aaa9u); f_11a868a0();
  /* 11a8aaa9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8aaac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8aaaf jne 0x11a8aab2 */
  if (!C.zf) goto L_11a8aab2;
  /* 11a8aab1 int3  */
  x86_unimpl("int3 @ 0x11a8aab1");
L_11a8aab2:;
  /* 11a8aab2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8aab4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8aab6 jne 0x11a8aa92 */
  if (!C.zf) goto L_11a8aa92;
L_11a8aab8:;
  /* 11a8aab8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8aaba call 0x11a8f370 */
  push32(0x11a8aabfu); f_11a8f370();
  /* 11a8aabf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8aac2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8aac4 jmp 0x11a8acd8 */
  goto L_11a8acd8;
L_11a8aac9:;
  /* 11a8aac9 mov eax, dword ptr [0x11aba10c] */
  EAX = (r32((uint32_t)(0x11aba10c)));
  /* 11a8aace mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8aad1 jmp 0x11a8aadb */
  goto L_11a8aadb;
L_11a8aad3:;
  /* 11a8aad3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8aad6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8aad8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11a8aadb:;
  /* 11a8aadb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8aadf je 0x11a8accb */
  if (C.zf) goto L_11a8accb;
  /* 11a8aae5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11a8aaec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8aaef mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11a8aaf2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8aaf8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8aafb je 0x11a8ab20 */
  if (C.zf) goto L_11a8ab20;
  /* 11a8aafd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8ab00 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ab04 je 0x11a8ab20 */
  if (C.zf) goto L_11a8ab20;
  /* 11a8ab06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8ab09 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11a8ab0c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8ab12 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ab15 je 0x11a8ab20 */
  if (C.zf) goto L_11a8ab20;
  /* 11a8ab17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8ab1a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ab1e jne 0x11a8ab38 */
  if (!C.zf) goto L_11a8ab38;
L_11a8ab20:;
  /* 11a8ab20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8ab23 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11a8ab26 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8ab2c mov edx, dword ptr [ecx*4 + 0x11ab7b8c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ab7b8c)));
  /* 11a8ab33 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11a8ab36 jmp 0x11a8ab3f */
  goto L_11a8ab3f;
L_11a8ab38:;
  /* 11a8ab38 mov dword ptr [ebp - 0x14], 0x11ab4c88 */
  w32((uint32_t)(EBP + -0x14), (0x11ab4c88u));
L_11a8ab3f:;
  /* 11a8ab3f push 4 */
  push32((uint32_t)(0x4u));
  /* 11a8ab41 mov al, byte ptr [0x11ab7b88] */
  AL = (r8((uint32_t)(0x11ab7b88)));
  /* 11a8ab46 push eax */
  push32((uint32_t)(EAX));
  /* 11a8ab47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8ab4a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ab4d push ecx */
  push32((uint32_t)(ECX));
  /* 11a8ab4e call 0x11a8a8f0 */
  push32(0x11a8ab53u); f_11a8a8f0();
  /* 11a8ab53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ab56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8ab58 jne 0x11a8ab94 */
  if (!C.zf) goto L_11a8ab94;
L_11a8ab5a:;
  /* 11a8ab5a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8ab5d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ab60 push edx */
  push32((uint32_t)(EDX));
  /* 11a8ab61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8ab64 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11a8ab67 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8ab68 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8ab6b push edx */
  push32((uint32_t)(EDX));
  /* 11a8ab6c push 0x11ab4b64 */
  push32((uint32_t)(0x11ab4b64u));
  /* 11a8ab71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ab73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ab75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ab77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ab79 call 0x11a868a0 */
  push32(0x11a8ab7eu); f_11a868a0();
  /* 11a8ab7e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ab81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ab84 jne 0x11a8ab87 */
  if (!C.zf) goto L_11a8ab87;
  /* 11a8ab86 int3  */
  x86_unimpl("int3 @ 0x11a8ab86");
L_11a8ab87:;
  /* 11a8ab87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8ab89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8ab8b jne 0x11a8ab5a */
  if (!C.zf) goto L_11a8ab5a;
  /* 11a8ab8d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11a8ab94:;
  /* 11a8ab94 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a8ab96 mov cl, byte ptr [0x11ab7b88] */
  CL = (r8((uint32_t)(0x11ab7b88)));
  /* 11a8ab9c push ecx */
  push32((uint32_t)(ECX));
  /* 11a8ab9d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8aba0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11a8aba3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8aba6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11a8abaa push edx */
  push32((uint32_t)(EDX));
  /* 11a8abab call 0x11a8a8f0 */
  push32(0x11a8abb0u); f_11a8a8f0();
  /* 11a8abb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8abb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8abb5 jne 0x11a8abf1 */
  if (!C.zf) goto L_11a8abf1;
L_11a8abb7:;
  /* 11a8abb7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8abba add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8abbd push eax */
  push32((uint32_t)(EAX));
  /* 11a8abbe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8abc1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11a8abc4 push edx */
  push32((uint32_t)(EDX));
  /* 11a8abc5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8abc8 push eax */
  push32((uint32_t)(EAX));
  /* 11a8abc9 push 0x11ab4b38 */
  push32((uint32_t)(0x11ab4b38u));
  /* 11a8abce push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8abd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8abd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8abd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8abd6 call 0x11a868a0 */
  push32(0x11a8abdbu); f_11a868a0();
  /* 11a8abdb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8abde cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8abe1 jne 0x11a8abe4 */
  if (!C.zf) goto L_11a8abe4;
  /* 11a8abe3 int3  */
  x86_unimpl("int3 @ 0x11a8abe3");
L_11a8abe4:;
  /* 11a8abe4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8abe6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8abe8 jne 0x11a8abb7 */
  if (!C.zf) goto L_11a8abb7;
  /* 11a8abea mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11a8abf1:;
  /* 11a8abf1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8abf4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8abf8 jne 0x11a8ac4a */
  if (!C.zf) goto L_11a8ac4a;
  /* 11a8abfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8abfd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a8ac00 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8ac01 mov dl, byte ptr [0x11ab7b89] */
  DL = (r8((uint32_t)(0x11ab7b89)));
  /* 11a8ac07 push edx */
  push32((uint32_t)(EDX));
  /* 11a8ac08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8ac0b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ac0e push eax */
  push32((uint32_t)(EAX));
  /* 11a8ac0f call 0x11a8a8f0 */
  push32(0x11a8ac14u); f_11a8a8f0();
  /* 11a8ac14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ac17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8ac19 jne 0x11a8ac4a */
  if (!C.zf) goto L_11a8ac4a;
L_11a8ac1b:;
  /* 11a8ac1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8ac1e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ac21 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8ac22 push 0x11ab4c5c */
  push32((uint32_t)(0x11ab4c5cu));
  /* 11a8ac27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ac29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ac2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ac2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ac2f call 0x11a868a0 */
  push32(0x11a8ac34u); f_11a868a0();
  /* 11a8ac34 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ac37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ac3a jne 0x11a8ac3d */
  if (!C.zf) goto L_11a8ac3d;
  /* 11a8ac3c int3  */
  x86_unimpl("int3 @ 0x11a8ac3c");
L_11a8ac3d:;
  /* 11a8ac3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8ac3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8ac41 jne 0x11a8ac1b */
  if (!C.zf) goto L_11a8ac1b;
  /* 11a8ac43 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11a8ac4a:;
  /* 11a8ac4a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ac4e jne 0x11a8acc6 */
  if (!C.zf) goto L_11a8acc6;
  /* 11a8ac50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8ac53 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ac57 je 0x11a8ac8c */
  if (C.zf) goto L_11a8ac8c;
L_11a8ac59:;
  /* 11a8ac59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8ac5c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a8ac5f push edx */
  push32((uint32_t)(EDX));
  /* 11a8ac60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8ac63 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a8ac66 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8ac67 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8ac6a push edx */
  push32((uint32_t)(EDX));
  /* 11a8ac6b push 0x11ab4c3c */
  push32((uint32_t)(0x11ab4c3cu));
  /* 11a8ac70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ac72 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ac74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ac76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ac78 call 0x11a868a0 */
  push32(0x11a8ac7du); f_11a868a0();
  /* 11a8ac7d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ac80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ac83 jne 0x11a8ac86 */
  if (!C.zf) goto L_11a8ac86;
  /* 11a8ac85 int3  */
  x86_unimpl("int3 @ 0x11a8ac85");
L_11a8ac86:;
  /* 11a8ac86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8ac88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8ac8a jne 0x11a8ac59 */
  if (!C.zf) goto L_11a8ac59;
L_11a8ac8c:;
  /* 11a8ac8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8ac8f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11a8ac92 push edx */
  push32((uint32_t)(EDX));
  /* 11a8ac93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8ac96 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ac99 push eax */
  push32((uint32_t)(EAX));
  /* 11a8ac9a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8ac9d push ecx */
  push32((uint32_t)(ECX));
  /* 11a8ac9e push 0x11ab4c10 */
  push32((uint32_t)(0x11ab4c10u));
  /* 11a8aca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8aca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8acab call 0x11a868a0 */
  push32(0x11a8acb0u); f_11a868a0();
  /* 11a8acb0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8acb3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8acb6 jne 0x11a8acb9 */
  if (!C.zf) goto L_11a8acb9;
  /* 11a8acb8 int3  */
  x86_unimpl("int3 @ 0x11a8acb8");
L_11a8acb9:;
  /* 11a8acb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8acbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8acbd jne 0x11a8ac8c */
  if (!C.zf) goto L_11a8ac8c;
  /* 11a8acbf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11a8acc6:;
  /* 11a8acc6 jmp 0x11a8aad3 */
  goto L_11a8aad3;
L_11a8accb:;
  /* 11a8accb push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8accd call 0x11a8f370 */
  push32(0x11a8acd2u); f_11a8f370();
  /* 11a8acd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8acd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11a8acd8:;
  /* 11a8acd8 pop edi */
  EDI = (pop32());
  /* 11a8acd9 pop esi */
  ESI = (pop32());
  /* 11a8acda pop ebx */
  EBX = (pop32());
  /* 11a8acdb mov esp, ebp */
  ESP = (EBP);
  /* 11a8acdd pop ebp */
  EBP = (pop32());
  /* 11a8acde ret  */
  ESPCHK(0x11a8a980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acf0 @ 0x11a8acf0 (34 bytes, 13 insns) */
void f_11a8acf0(void) {
  FTRACE(0x11a8acf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8acf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8acf1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8acf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8acf4 mov eax, dword ptr [0x11ab7b7c] */
  EAX = (r32((uint32_t)(0x11ab7b7c)));
  /* 11a8acf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8acfc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ad00 je 0x11a8ad0b */
  if (C.zf) goto L_11a8ad0b;
  /* 11a8ad02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ad05 mov dword ptr [0x11ab7b7c], ecx */
  w32((uint32_t)(0x11ab7b7c), (ECX));
L_11a8ad0b:;
  /* 11a8ad0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ad0e mov esp, ebp */
  ESP = (EBP);
  /* 11a8ad10 pop ebp */
  EBP = (pop32());
  /* 11a8ad11 ret  */
  ESPCHK(0x11a8acf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad20 @ 0x11a8ad20 (103 bytes, 38 insns) */
void f_11a8ad20(void) {
  FTRACE(0x11a8ad20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8ad20 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8ad21 mov ebp, esp */
  EBP = (ESP);
  /* 11a8ad23 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8ad24 mov eax, dword ptr [0x11ab7b7c] */
  EAX = (r32((uint32_t)(0x11ab7b7c)));
  /* 11a8ad29 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8ad2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8ad2e jne 0x11a8ad32 */
  if (!C.zf) goto L_11a8ad32;
  /* 11a8ad30 jmp 0x11a8ad83 */
  goto L_11a8ad83;
L_11a8ad32:;
  /* 11a8ad32 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8ad34 call 0x11a8f2d0 */
  push32(0x11a8ad39u); f_11a8f2d0();
  /* 11a8ad39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ad3c mov ecx, dword ptr [0x11aba10c] */
  ECX = (r32((uint32_t)(0x11aba10c)));
  /* 11a8ad42 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8ad45 jmp 0x11a8ad4f */
  goto L_11a8ad4f;
L_11a8ad47:;
  /* 11a8ad47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ad4a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a8ad4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8ad4f:;
  /* 11a8ad4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ad53 je 0x11a8ad79 */
  if (C.zf) goto L_11a8ad79;
  /* 11a8ad55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ad58 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11a8ad5b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8ad61 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ad64 jne 0x11a8ad77 */
  if (!C.zf) goto L_11a8ad77;
  /* 11a8ad66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8ad69 push eax */
  push32((uint32_t)(EAX));
  /* 11a8ad6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ad6d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ad70 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8ad71 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11a8ad74u);
  /* 11a8ad74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8ad77:;
  /* 11a8ad77 jmp 0x11a8ad47 */
  goto L_11a8ad47;
L_11a8ad79:;
  /* 11a8ad79 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8ad7b call 0x11a8f370 */
  push32(0x11a8ad80u); f_11a8f370();
  /* 11a8ad80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8ad83:;
  /* 11a8ad83 mov esp, ebp */
  ESP = (EBP);
  /* 11a8ad85 pop ebp */
  EBP = (pop32());
  /* 11a8ad86 ret  */
  ESPCHK(0x11a8ad20u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11a8ad90 (75 bytes, 28 insns) */
void f_11a8ad90(void) {
  FTRACE(0x11a8ad90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8ad90 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8ad91 mov ebp, esp */
  EBP = (ESP);
  /* 11a8ad93 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8ad94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ad98 je 0x11a8adcd */
  if (C.zf) goto L_11a8adcd;
  /* 11a8ad9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8ad9d push eax */
  push32((uint32_t)(EAX));
  /* 11a8ad9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ada1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8ada2 call dword ptr [0x11abc3ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3ec))), 0x11a8ada8u);
  /* 11a8ada8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8adaa jne 0x11a8adcd */
  if (!C.zf) goto L_11a8adcd;
  /* 11a8adac cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8adb0 je 0x11a8adc4 */
  if (C.zf) goto L_11a8adc4;
  /* 11a8adb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8adb5 push edx */
  push32((uint32_t)(EDX));
  /* 11a8adb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8adb9 push eax */
  push32((uint32_t)(EAX));
  /* 11a8adba call dword ptr [0x11abc3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3e8))), 0x11a8adc0u);
  /* 11a8adc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8adc2 jne 0x11a8adcd */
  if (!C.zf) goto L_11a8adcd;
L_11a8adc4:;
  /* 11a8adc4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a8adcb jmp 0x11a8add4 */
  goto L_11a8add4;
L_11a8adcd:;
  /* 11a8adcd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11a8add4:;
  /* 11a8add4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8add7 mov esp, ebp */
  ESP = (EBP);
  /* 11a8add9 pop ebp */
  EBP = (pop32());
  /* 11a8adda ret  */
  ESPCHK(0x11a8ad90u, _esp0);
  ESP += 4; return;
}

