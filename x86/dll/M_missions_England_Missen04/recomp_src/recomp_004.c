#include "recomp.h"

/* FUN_100247a0 @ 0x104847a0 (68 bytes, 26 insns) */
void f_104847a0(void) {
  FTRACE(0x104847a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104847a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104847a1 mov ebp, esp */
  EBP = (ESP);
  /* 104847a3 push ecx */
  push32((uint32_t)(ECX));
  /* 104847a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104847a8 jne 0x104847b6 */
  if (!C.zf) goto L_104847b6;
  /* 104847aa push 0 */
  push32((uint32_t)(0x0u));
  /* 104847ac call 0x10484910 */
  push32(0x104847b1u); f_10484910();
  /* 104847b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104847b4 jmp 0x104847e0 */
  goto L_104847e0;
L_104847b6:;
  /* 104847b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104847b9 push eax */
  push32((uint32_t)(EAX));
  /* 104847ba call 0x10483d20 */
  push32(0x104847bfu); f_10483d20();
  /* 104847bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104847c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104847c5 push ecx */
  push32((uint32_t)(ECX));
  /* 104847c6 call 0x104847f0 */
  push32(0x104847cbu); f_104847f0();
  /* 104847cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104847ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104847d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104847d4 push edx */
  push32((uint32_t)(EDX));
  /* 104847d5 call 0x10483d90 */
  push32(0x104847dau); f_10483d90();
  /* 104847da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104847dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104847e0:;
  /* 104847e0 mov esp, ebp */
  ESP = (EBP);
  /* 104847e2 pop ebp */
  EBP = (pop32());
  /* 104847e3 ret  */
  ESPCHK(0x104847a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100247f0 @ 0x104847f0 (65 bytes, 26 insns) */
void f_104847f0(void) {
  FTRACE(0x104847f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104847f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104847f1 mov ebp, esp */
  EBP = (ESP);
  /* 104847f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104847f6 push eax */
  push32((uint32_t)(EAX));
  /* 104847f7 call 0x10484840 */
  push32(0x104847fcu); f_10484840();
  /* 104847fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104847ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10484801 je 0x10484808 */
  if (C.zf) goto L_10484808;
  /* 10484803 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10484806 jmp 0x1048482f */
  goto L_1048482f;
L_10484808:;
  /* 10484808 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048480b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1048480e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10484814 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10484816 je 0x1048482d */
  if (C.zf) goto L_1048482d;
  /* 10484818 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048481b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1048481e push ecx */
  push32((uint32_t)(ECX));
  /* 1048481f call 0x10485600 */
  push32(0x10484824u); f_10485600();
  /* 10484824 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484827 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10484829 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1048482b jmp 0x1048482f */
  goto L_1048482f;
L_1048482d:;
  /* 1048482d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1048482f:;
  /* 1048482f pop ebp */
  EBP = (pop32());
  /* 10484830 ret  */
  ESPCHK(0x104847f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10024840 @ 0x10484840 (183 bytes, 62 insns) */
void f_10484840(void) {
  FTRACE(0x10484840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10484840 push ebp */
  push32((uint32_t)(EBP));
  /* 10484841 mov ebp, esp */
  EBP = (ESP);
  /* 10484843 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10484846 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1048484d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484850 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10484853 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10484856 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10484859 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1048485c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048485f jne 0x104848db */
  if (!C.zf) goto L_104848db;
  /* 10484861 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10484864 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10484867 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1048486d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1048486f je 0x104848db */
  if (C.zf) goto L_104848db;
  /* 10484871 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10484874 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10484877 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10484879 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1048487c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1048487f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484883 jle 0x104848db */
  if ((C.zf||C.sf!=C.of)) goto L_104848db;
  /* 10484885 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10484888 push edx */
  push32((uint32_t)(EDX));
  /* 10484889 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1048488c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1048488f push ecx */
  push32((uint32_t)(ECX));
  /* 10484890 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10484893 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10484896 push eax */
  push32((uint32_t)(EAX));
  /* 10484897 call 0x104837b0 */
  push32(0x1048489cu); f_104837b0();
  /* 1048489c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048489f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104848a2 jne 0x104848c5 */
  if (!C.zf) goto L_104848c5;
  /* 104848a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104848a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104848aa and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 104848b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104848b2 je 0x104848c3 */
  if (C.zf) goto L_104848c3;
  /* 104848b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104848b7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104848ba and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 104848bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104848c0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_104848c3:;
  /* 104848c3 jmp 0x104848db */
  goto L_104848db;
L_104848c5:;
  /* 104848c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104848c8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104848cb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 104848ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104848d1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 104848d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104848db:;
  /* 104848db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104848de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104848e1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104848e4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104848e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104848e9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 104848f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104848f3 mov esp, ebp */
  ESP = (EBP);
  /* 104848f5 pop ebp */
  EBP = (pop32());
  /* 104848f6 ret  */
  ESPCHK(0x10484840u, _esp0);
  ESP += 4; return;
}

/* FUN_10024900 @ 0x10484900 (15 bytes, 7 insns) */
void f_10484900(void) {
  FTRACE(0x10484900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10484900 push ebp */
  push32((uint32_t)(EBP));
  /* 10484901 mov ebp, esp */
  EBP = (ESP);
  /* 10484903 push 1 */
  push32((uint32_t)(0x1u));
  /* 10484905 call 0x10484910 */
  push32(0x1048490au); f_10484910();
  /* 1048490a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048490d pop ebp */
  EBP = (pop32());
  /* 1048490e ret  */
  ESPCHK(0x10484900u, _esp0);
  ESP += 4; return;
}

/* FUN_10024910 @ 0x10484910 (319 bytes, 94 insns) */
void f_10484910(void) {
  FTRACE(0x10484910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10484910 push ebp */
  push32((uint32_t)(EBP));
  /* 10484911 mov ebp, esp */
  EBP = (ESP);
  /* 10484913 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10484916 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1048491d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10484924 push 2 */
  push32((uint32_t)(0x2u));
  /* 10484926 call 0x1047e910 */
  push32(0x1048492bu); f_1047e910();
  /* 1048492b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048492e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10484935 jmp 0x10484940 */
  goto L_10484940;
L_10484937:;
  /* 10484937 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1048493a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048493d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10484940:;
  /* 10484940 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10484943 cmp ecx, dword ptr [0x1002fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1002fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484949 jge 0x10484a33 */
  if ((C.sf==C.of)) goto L_10484a33;
  /* 1048494f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10484952 mov eax, dword ptr [0x1002e810] */
  EAX = (r32((uint32_t)(0x1002e810)));
  /* 10484957 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048495b je 0x10484a2e */
  if (C.zf) goto L_10484a2e;
  /* 10484961 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10484964 mov edx, dword ptr [0x1002e810] */
  EDX = (r32((uint32_t)(0x1002e810)));
  /* 1048496a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1048496d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10484970 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10484976 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10484978 je 0x10484a2e */
  if (C.zf) goto L_10484a2e;
  /* 1048497e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10484981 mov eax, dword ptr [0x1002e810] */
  EAX = (r32((uint32_t)(0x1002e810)));
  /* 10484986 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10484989 push ecx */
  push32((uint32_t)(ECX));
  /* 1048498a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1048498d push edx */
  push32((uint32_t)(EDX));
  /* 1048498e call 0x10483d60 */
  push32(0x10484993u); f_10483d60();
  /* 10484993 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484996 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10484999 mov ecx, dword ptr [0x1002e810] */
  ECX = (r32((uint32_t)(0x1002e810)));
  /* 1048499f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 104849a2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104849a5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 104849aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104849ac je 0x10484a15 */
  if (C.zf) goto L_10484a15;
  /* 104849ae cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104849b2 jne 0x104849d9 */
  if (!C.zf) goto L_104849d9;
  /* 104849b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104849b7 mov edx, dword ptr [0x1002e810] */
  EDX = (r32((uint32_t)(0x1002e810)));
  /* 104849bd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 104849c0 push eax */
  push32((uint32_t)(EAX));
  /* 104849c1 call 0x104847f0 */
  push32(0x104849c6u); f_104847f0();
  /* 104849c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104849c9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104849cc je 0x104849d7 */
  if (C.zf) goto L_104849d7;
  /* 104849ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104849d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104849d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104849d7:;
  /* 104849d7 jmp 0x10484a15 */
  goto L_10484a15;
L_104849d9:;
  /* 104849d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104849dd jne 0x10484a15 */
  if (!C.zf) goto L_10484a15;
  /* 104849df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104849e2 mov eax, dword ptr [0x1002e810] */
  EAX = (r32((uint32_t)(0x1002e810)));
  /* 104849e7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 104849ea mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104849ed and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 104849f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104849f2 je 0x10484a15 */
  if (C.zf) goto L_10484a15;
  /* 104849f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104849f7 mov ecx, dword ptr [0x1002e810] */
  ECX = (r32((uint32_t)(0x1002e810)));
  /* 104849fd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10484a00 push edx */
  push32((uint32_t)(EDX));
  /* 10484a01 call 0x104847f0 */
  push32(0x10484a06u); f_104847f0();
  /* 10484a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484a09 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484a0c jne 0x10484a15 */
  if (!C.zf) goto L_10484a15;
  /* 10484a0e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10484a15:;
  /* 10484a15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10484a18 mov ecx, dword ptr [0x1002e810] */
  ECX = (r32((uint32_t)(0x1002e810)));
  /* 10484a1e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10484a21 push edx */
  push32((uint32_t)(EDX));
  /* 10484a22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10484a25 push eax */
  push32((uint32_t)(EAX));
  /* 10484a26 call 0x10483dd0 */
  push32(0x10484a2bu); f_10483dd0();
  /* 10484a2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10484a2e:;
  /* 10484a2e jmp 0x10484937 */
  goto L_10484937;
L_10484a33:;
  /* 10484a33 push 2 */
  push32((uint32_t)(0x2u));
  /* 10484a35 call 0x1047e9b0 */
  push32(0x10484a3au); f_1047e9b0();
  /* 10484a3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484a3d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484a41 jne 0x10484a48 */
  if (!C.zf) goto L_10484a48;
  /* 10484a43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10484a46 jmp 0x10484a4b */
  goto L_10484a4b;
L_10484a48:;
  /* 10484a48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10484a4b:;
  /* 10484a4b mov esp, ebp */
  ESP = (EBP);
  /* 10484a4d pop ebp */
  EBP = (pop32());
  /* 10484a4e ret  */
  ESPCHK(0x10484910u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10484a50 (15 bytes, 7 insns) */
void f_10484a50(void) {
  FTRACE(0x10484a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10484a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10484a51 mov ebp, esp */
  EBP = (ESP);
  /* 10484a53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10484a55 call 0x10479e80 */
  push32(0x10484a5au); f_10479e80();
  /* 10484a5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484a5d pop ebp */
  EBP = (pop32());
  /* 10484a5e ret  */
  ESPCHK(0x10484a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10024a60 @ 0x10484a60 (1007 bytes, 269 insns) */
void f_10484a60(void) {
  FTRACE(0x10484a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10484a60 push ebp */
  push32((uint32_t)(EBP));
  /* 10484a61 mov ebp, esp */
  EBP = (ESP);
  /* 10484a63 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10484a69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484a6d jl 0x10484a75 */
  if ((C.sf!=C.of)) goto L_10484a75;
  /* 10484a6f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484a73 jle 0x10484a7c */
  if ((C.zf||C.sf!=C.of)) goto L_10484a7c;
L_10484a75:;
  /* 10484a75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10484a77 jmp 0x10484e4b */
  goto L_10484e4b;
L_10484a7c:;
  /* 10484a7c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10484a7e call 0x1047e910 */
  push32(0x10484a83u); f_1047e910();
  /* 10484a83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484a86 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10484a8d mov eax, dword ptr [0x1002e7fc] */
  EAX = (r32((uint32_t)(0x1002e7fc)));
  /* 10484a92 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10484a95 mov dword ptr [0x1002e7fc], eax */
  w32((uint32_t)(0x1002e7fc), (EAX));
L_10484a9a:;
  /* 10484a9a cmp dword ptr [0x1002e80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484aa1 je 0x10484aad */
  if (C.zf) goto L_10484aad;
  /* 10484aa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10484aa5 call dword ptr [0x1003026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003026c))), 0x10484aabu);
  /* 10484aab jmp 0x10484a9a */
  goto L_10484a9a;
L_10484aad:;
  /* 10484aad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484ab1 je 0x10484af1 */
  if (C.zf) goto L_10484af1;
  /* 10484ab3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484ab7 je 0x10484ad1 */
  if (C.zf) goto L_10484ad1;
  /* 10484ab9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10484abc push ecx */
  push32((uint32_t)(ECX));
  /* 10484abd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484ac0 push edx */
  push32((uint32_t)(EDX));
  /* 10484ac1 call 0x10484e50 */
  push32(0x10484ac6u); f_10484e50();
  /* 10484ac6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484ac9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10484acf jmp 0x10484ae3 */
  goto L_10484ae3;
L_10484ad1:;
  /* 10484ad1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484ad4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10484ad7 mov ecx, dword ptr [eax + 0x1002d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1002d4dc)));
  /* 10484add mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10484ae3:;
  /* 10484ae3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10484ae9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10484aec jmp 0x10484e2b */
  goto L_10484e2b;
L_10484af1:;
  /* 10484af1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10484af8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10484aff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484b03 je 0x10484e23 */
  if (C.zf) goto L_10484e23;
  /* 10484b09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10484b0c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10484b0f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484b12 jne 0x10484d34 */
  if (!C.zf) goto L_10484d34;
  /* 10484b18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10484b1b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10484b1f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484b22 jne 0x10484d34 */
  if (!C.zf) goto L_10484d34;
  /* 10484b28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10484b2b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10484b2f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484b32 jne 0x10484d34 */
  if (!C.zf) goto L_10484d34;
  /* 10484b38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10484b3b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10484b41:;
  /* 10484b41 push 0x1002a034 */
  push32((uint32_t)(0x1002a034u));
  /* 10484b46 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10484b4c push ecx */
  push32((uint32_t)(ECX));
  /* 10484b4d call 0x10486cb0 */
  push32(0x10484b52u); f_10486cb0();
  /* 10484b52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484b55 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10484b5b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484b62 je 0x10484b8d */
  if (C.zf) goto L_10484b8d;
  /* 10484b64 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10484b6a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10484b70 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10484b76 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484b7d je 0x10484b8d */
  if (C.zf) goto L_10484b8d;
  /* 10484b7f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10484b85 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10484b88 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484b8b jne 0x10484bb3 */
  if (!C.zf) goto L_10484bb3;
L_10484b8d:;
  /* 10484b8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484b91 je 0x10484bac */
  if (C.zf) goto L_10484bac;
  /* 10484b93 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10484b95 call 0x1047e9b0 */
  push32(0x10484b9au); f_1047e9b0();
  /* 10484b9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484b9d mov edx, dword ptr [0x1002e7fc] */
  EDX = (r32((uint32_t)(0x1002e7fc)));
  /* 10484ba3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10484ba6 mov dword ptr [0x1002e7fc], edx */
  w32((uint32_t)(0x1002e7fc), (EDX));
L_10484bac:;
  /* 10484bac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10484bae jmp 0x10484e4b */
  goto L_10484e4b;
L_10484bb3:;
  /* 10484bb3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10484bba jmp 0x10484bc5 */
  goto L_10484bc5;
L_10484bbc:;
  /* 10484bbc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10484bbf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10484bc2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10484bc5:;
  /* 10484bc5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484bc9 jg 0x10484c13 */
  if ((!C.zf&&C.sf==C.of)) goto L_10484c13;
  /* 10484bcb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10484bd1 push ecx */
  push32((uint32_t)(ECX));
  /* 10484bd2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10484bd8 push edx */
  push32((uint32_t)(EDX));
  /* 10484bd9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10484bdc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10484bdf mov ecx, dword ptr [eax + 0x1002d4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1002d4d8)));
  /* 10484be5 push ecx */
  push32((uint32_t)(ECX));
  /* 10484be6 call 0x10486c70 */
  push32(0x10484bebu); f_10486c70();
  /* 10484beb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484bee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10484bf0 jne 0x10484c11 */
  if (!C.zf) goto L_10484c11;
  /* 10484bf2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10484bf5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10484bf8 mov eax, dword ptr [edx + 0x1002d4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1002d4d8)));
  /* 10484bfe push eax */
  push32((uint32_t)(EAX));
  /* 10484bff call 0x1047dd40 */
  push32(0x10484c04u); f_1047dd40();
  /* 10484c04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484c07 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484c0d jne 0x10484c11 */
  if (!C.zf) goto L_10484c11;
  /* 10484c0f jmp 0x10484c13 */
  goto L_10484c13;
L_10484c11:;
  /* 10484c11 jmp 0x10484bbc */
  goto L_10484bbc;
L_10484c13:;
  /* 10484c13 push 0x1002a030 */
  push32((uint32_t)(0x1002a030u));
  /* 10484c18 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10484c1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10484c21 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10484c27 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10484c2d push edx */
  push32((uint32_t)(EDX));
  /* 10484c2e call 0x10486c30 */
  push32(0x10484c33u); f_10486c30();
  /* 10484c33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484c36 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10484c3c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484c43 jne 0x10484c79 */
  if (!C.zf) goto L_10484c79;
  /* 10484c45 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10484c4b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10484c4e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484c51 je 0x10484c79 */
  if (C.zf) goto L_10484c79;
  /* 10484c53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484c57 je 0x10484c72 */
  if (C.zf) goto L_10484c72;
  /* 10484c59 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10484c5b call 0x1047e9b0 */
  push32(0x10484c60u); f_1047e9b0();
  /* 10484c60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484c63 mov edx, dword ptr [0x1002e7fc] */
  EDX = (r32((uint32_t)(0x1002e7fc)));
  /* 10484c69 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10484c6c mov dword ptr [0x1002e7fc], edx */
  w32((uint32_t)(0x1002e7fc), (EDX));
L_10484c72:;
  /* 10484c72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10484c74 jmp 0x10484e4b */
  goto L_10484e4b;
L_10484c79:;
  /* 10484c79 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484c7d jg 0x10484cca */
  if ((!C.zf&&C.sf==C.of)) goto L_10484cca;
  /* 10484c7f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10484c85 push eax */
  push32((uint32_t)(EAX));
  /* 10484c86 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10484c8c push ecx */
  push32((uint32_t)(ECX));
  /* 10484c8d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10484c93 push edx */
  push32((uint32_t)(EDX));
  /* 10484c94 call 0x1047e730 */
  push32(0x10484c99u); f_1047e730();
  /* 10484c99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484c9c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10484ca2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10484caa lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10484cb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10484cb1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10484cb4 push edx */
  push32((uint32_t)(EDX));
  /* 10484cb5 call 0x10484e50 */
  push32(0x10484cbau); f_10484e50();
  /* 10484cba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484cbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10484cbf je 0x10484cca */
  if (C.zf) goto L_10484cca;
  /* 10484cc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10484cc4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10484cc7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10484cca:;
  /* 10484cca mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10484cd0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10484cd6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10484cdc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10484ce2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10484ce5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10484ce7 je 0x10484cf8 */
  if (C.zf) goto L_10484cf8;
  /* 10484ce9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10484cef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10484cf2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10484cf8:;
  /* 10484cf8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10484cfe movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10484d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10484d03 jne 0x10484b41 */
  if (!C.zf) goto L_10484b41;
  /* 10484d09 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484d0d je 0x10484d1c */
  if (C.zf) goto L_10484d1c;
  /* 10484d0f call 0x10484ff0 */
  push32(0x10484d14u); f_10484ff0();
  /* 10484d14 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10484d1a jmp 0x10484d26 */
  goto L_10484d26;
L_10484d1c:;
  /* 10484d1c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10484d26:;
  /* 10484d26 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10484d2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10484d2f jmp 0x10484e21 */
  goto L_10484e21;
L_10484d34:;
  /* 10484d34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484d37 push edx */
  push32((uint32_t)(EDX));
  /* 10484d38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10484d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10484d3c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10484d42 push eax */
  push32((uint32_t)(EAX));
  /* 10484d43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10484d46 push ecx */
  push32((uint32_t)(ECX));
  /* 10484d47 call 0x104850f0 */
  push32(0x10484d4cu); f_104850f0();
  /* 10484d4c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484d4f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10484d52 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484d56 je 0x10484e21 */
  if (C.zf) goto L_10484e21;
  /* 10484d5c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10484d63 jmp 0x10484d6e */
  goto L_10484d6e;
L_10484d65:;
  /* 10484d65 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10484d68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10484d6b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10484d6e:;
  /* 10484d6e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484d72 jg 0x10484dd0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10484dd0;
  /* 10484d74 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484d78 je 0x10484dce */
  if (C.zf) goto L_10484dce;
  /* 10484d7a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10484d7d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10484d80 mov ecx, dword ptr [eax + 0x1002d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1002d4dc)));
  /* 10484d86 push ecx */
  push32((uint32_t)(ECX));
  /* 10484d87 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10484d8d push edx */
  push32((uint32_t)(EDX));
  /* 10484d8e call 0x10486ba0 */
  push32(0x10484d93u); f_10486ba0();
  /* 10484d93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484d96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10484d98 je 0x10484dc5 */
  if (C.zf) goto L_10484dc5;
  /* 10484d9a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10484da0 push eax */
  push32((uint32_t)(EAX));
  /* 10484da1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10484da4 push ecx */
  push32((uint32_t)(ECX));
  /* 10484da5 call 0x10484e50 */
  push32(0x10484daau); f_10484e50();
  /* 10484daa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484dad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10484daf je 0x10484dbc */
  if (C.zf) goto L_10484dbc;
  /* 10484db1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10484db4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10484db7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10484dba jmp 0x10484dc3 */
  goto L_10484dc3;
L_10484dbc:;
  /* 10484dbc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10484dc3:;
  /* 10484dc3 jmp 0x10484dce */
  goto L_10484dce;
L_10484dc5:;
  /* 10484dc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10484dc8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10484dcb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10484dce:;
  /* 10484dce jmp 0x10484d65 */
  goto L_10484d65;
L_10484dd0:;
  /* 10484dd0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484dd4 je 0x10484dfb */
  if (C.zf) goto L_10484dfb;
  /* 10484dd6 call 0x10484ff0 */
  push32(0x10484ddbu); f_10484ff0();
  /* 10484ddb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10484dde push 2 */
  push32((uint32_t)(0x2u));
  /* 10484de0 mov ecx, dword ptr [0x1002d4dc] */
  ECX = (r32((uint32_t)(0x1002d4dc)));
  /* 10484de6 push ecx */
  push32((uint32_t)(ECX));
  /* 10484de7 call 0x1047b9a0 */
  push32(0x10484decu); f_1047b9a0();
  /* 10484dec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484def mov dword ptr [0x1002d4dc], 0 */
  w32((uint32_t)(0x1002d4dc), (0x0u));
  /* 10484df9 jmp 0x10484e21 */
  goto L_10484e21;
L_10484dfb:;
  /* 10484dfb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484dff je 0x10484e0e */
  if (C.zf) goto L_10484e0e;
  /* 10484e01 call 0x10484ff0 */
  push32(0x10484e06u); f_10484ff0();
  /* 10484e06 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10484e0c jmp 0x10484e18 */
  goto L_10484e18;
L_10484e0e:;
  /* 10484e0e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10484e18:;
  /* 10484e18 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10484e1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10484e21:;
  /* 10484e21 jmp 0x10484e2b */
  goto L_10484e2b;
L_10484e23:;
  /* 10484e23 call 0x10484ff0 */
  push32(0x10484e28u); f_10484ff0();
  /* 10484e28 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10484e2b:;
  /* 10484e2b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484e2f je 0x10484e48 */
  if (C.zf) goto L_10484e48;
  /* 10484e31 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10484e33 call 0x1047e9b0 */
  push32(0x10484e38u); f_1047e9b0();
  /* 10484e38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484e3b mov eax, dword ptr [0x1002e7fc] */
  EAX = (r32((uint32_t)(0x1002e7fc)));
  /* 10484e40 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10484e43 mov dword ptr [0x1002e7fc], eax */
  w32((uint32_t)(0x1002e7fc), (EAX));
L_10484e48:;
  /* 10484e48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10484e4b:;
  /* 10484e4b mov esp, ebp */
  ESP = (EBP);
  /* 10484e4d pop ebp */
  EBP = (pop32());
  /* 10484e4e ret  */
  ESPCHK(0x10484a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10024e50 @ 0x10484e50 (403 bytes, 117 insns) */
void f_10484e50(void) {
  FTRACE(0x10484e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10484e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10484e51 mov ebp, esp */
  EBP = (ESP);
  /* 10484e53 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10484e59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484e5c push eax */
  push32((uint32_t)(EAX));
  /* 10484e5d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10484e63 push ecx */
  push32((uint32_t)(ECX));
  /* 10484e64 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10484e6a push edx */
  push32((uint32_t)(EDX));
  /* 10484e6b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10484e71 push eax */
  push32((uint32_t)(EAX));
  /* 10484e72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10484e75 push ecx */
  push32((uint32_t)(ECX));
  /* 10484e76 call 0x104850f0 */
  push32(0x10484e7bu); f_104850f0();
  /* 10484e7b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484e7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10484e80 jne 0x10484e89 */
  if (!C.zf) goto L_10484e89;
  /* 10484e82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10484e84 jmp 0x10484fdf */
  goto L_10484fdf;
L_10484e89:;
  /* 10484e89 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10484e8e push 0x1002a038 */
  push32((uint32_t)(0x1002a038u));
  /* 10484e93 push 2 */
  push32((uint32_t)(0x2u));
  /* 10484e95 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10484e9b push edx */
  push32((uint32_t)(EDX));
  /* 10484e9c call 0x1047dd40 */
  push32(0x10484ea1u); f_1047dd40();
  /* 10484ea1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484ea4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10484ea7 push eax */
  push32((uint32_t)(EAX));
  /* 10484ea8 call 0x1047af10 */
  push32(0x10484eadu); f_1047af10();
  /* 10484ead add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484eb0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10484eb3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484eb7 jne 0x10484ec0 */
  if (!C.zf) goto L_10484ec0;
  /* 10484eb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10484ebb jmp 0x10484fdf */
  goto L_10484fdf;
L_10484ec0:;
  /* 10484ec0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484ec3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10484ec6 mov ecx, dword ptr [eax + 0x1002d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1002d4dc)));
  /* 10484ecc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10484ecf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484ed2 mov eax, dword ptr [edx*4 + 0x1002e678] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1002e678)));
  /* 10484ed9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10484edc push 6 */
  push32((uint32_t)(0x6u));
  /* 10484ede mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484ee1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10484ee4 add ecx, 0x1002e6c8 */
  { uint32_t _a=(ECX),_b=(0x1002e6c8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10484eea push ecx */
  push32((uint32_t)(ECX));
  /* 10484eeb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10484eee push edx */
  push32((uint32_t)(EDX));
  /* 10484eef call 0x104817f0 */
  push32(0x10484ef4u); f_104817f0();
  /* 10484ef4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484ef7 mov eax, dword ptr [0x1002e690] */
  EAX = (r32((uint32_t)(0x1002e690)));
  /* 10484efc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10484eff lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10484f05 push ecx */
  push32((uint32_t)(ECX));
  /* 10484f06 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10484f09 push edx */
  push32((uint32_t)(EDX));
  /* 10484f0a call 0x1047dec0 */
  push32(0x10484f0fu); f_1047dec0();
  /* 10484f0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484f12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484f15 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10484f18 mov dword ptr [ecx + 0x1002d4dc], eax */
  w32((uint32_t)(ECX + 0x1002d4dc), (EAX));
  /* 10484f1e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10484f24 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10484f2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484f2d mov dword ptr [eax*4 + 0x1002e678], edx */
  w32((uint32_t)(EAX*4 + 0x1002e678), (EDX));
  /* 10484f34 push 6 */
  push32((uint32_t)(0x6u));
  /* 10484f36 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10484f3c push ecx */
  push32((uint32_t)(ECX));
  /* 10484f3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484f40 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10484f43 add edx, 0x1002e6c8 */
  { uint32_t _a=(EDX),_b=(0x1002e6c8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10484f49 push edx */
  push32((uint32_t)(EDX));
  /* 10484f4a call 0x104817f0 */
  push32(0x10484f4fu); f_104817f0();
  /* 10484f4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484f52 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484f56 jne 0x10484f63 */
  if (!C.zf) goto L_10484f63;
  /* 10484f58 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10484f5e mov dword ptr [0x1002e690], eax */
  w32((uint32_t)(0x1002e690), (EAX));
L_10484f63:;
  /* 10484f63 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484f67 jne 0x10484f75 */
  if (!C.zf) goto L_10484f75;
  /* 10484f69 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10484f6f mov dword ptr [0x1002e694], ecx */
  w32((uint32_t)(0x1002e694), (ECX));
L_10484f75:;
  /* 10484f75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484f78 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10484f7b call dword ptr [edx + 0x1002d4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1002d4e0))), 0x10484f81u);
  /* 10484f81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10484f83 je 0x10484fbc */
  if (C.zf) goto L_10484fbc;
  /* 10484f85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484f88 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10484f8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10484f8e mov dword ptr [eax + 0x1002d4dc], ecx */
  w32((uint32_t)(EAX + 0x1002d4dc), (ECX));
  /* 10484f94 push 2 */
  push32((uint32_t)(0x2u));
  /* 10484f96 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10484f99 push edx */
  push32((uint32_t)(EDX));
  /* 10484f9a call 0x1047b9a0 */
  push32(0x10484f9fu); f_1047b9a0();
  /* 10484f9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10484fa2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484fa5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10484fa8 mov dword ptr [eax*4 + 0x1002e678], ecx */
  w32((uint32_t)(EAX*4 + 0x1002e678), (ECX));
  /* 10484faf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10484fb2 mov dword ptr [0x1002e690], edx */
  w32((uint32_t)(0x1002e690), (EDX));
  /* 10484fb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10484fba jmp 0x10484fdf */
  goto L_10484fdf;
L_10484fbc:;
  /* 10484fbc cmp dword ptr [ebp - 0xc], 0x1002d3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1002d3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10484fc3 je 0x10484fd3 */
  if (C.zf) goto L_10484fd3;
  /* 10484fc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10484fc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10484fca push eax */
  push32((uint32_t)(EAX));
  /* 10484fcb call 0x1047b9a0 */
  push32(0x10484fd0u); f_1047b9a0();
  /* 10484fd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10484fd3:;
  /* 10484fd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10484fd6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10484fd9 mov eax, dword ptr [ecx + 0x1002d4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1002d4dc)));
L_10484fdf:;
  /* 10484fdf mov esp, ebp */
  ESP = (EBP);
  /* 10484fe1 pop ebp */
  EBP = (pop32());
  /* 10484fe2 ret  */
  ESPCHK(0x10484e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10024ff0 @ 0x10484ff0 (256 bytes, 72 insns) */
void f_10484ff0(void) {
  FTRACE(0x10484ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10484ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10484ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10484ff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10484ff6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10484ffd cmp dword ptr [0x1002d4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002d4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10485004 jne 0x10485024 */
  if (!C.zf) goto L_10485024;
  /* 10485006 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1048500b push 0x1002a038 */
  push32((uint32_t)(0x1002a038u));
  /* 10485010 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485012 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10485017 call 0x1047af10 */
  push32(0x1048501cu); f_1047af10();
  /* 1048501c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048501f mov dword ptr [0x1002d4dc], eax */
  w32((uint32_t)(0x1002d4dc), (EAX));
L_10485024:;
  /* 10485024 mov eax, dword ptr [0x1002d4dc] */
  EAX = (r32((uint32_t)(0x1002d4dc)));
  /* 10485029 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1048502c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10485033 jmp 0x1048503e */
  goto L_1048503e;
L_10485035:;
  /* 10485035 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485038 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048503b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1048503e:;
  /* 1048503e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485041 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10485044 mov eax, dword ptr [edx + 0x1002d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1002d4dc)));
  /* 1048504a push eax */
  push32((uint32_t)(EAX));
  /* 1048504b push 0x1002a044 */
  push32((uint32_t)(0x1002a044u));
  /* 10485050 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485053 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10485056 mov edx, dword ptr [ecx + 0x1002d4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1002d4d8)));
  /* 1048505c push edx */
  push32((uint32_t)(EDX));
  /* 1048505d push 3 */
  push32((uint32_t)(0x3u));
  /* 1048505f mov eax, dword ptr [0x1002d4dc] */
  EAX = (r32((uint32_t)(0x1002d4dc)));
  /* 10485064 push eax */
  push32((uint32_t)(EAX));
  /* 10485065 call 0x10485290 */
  push32(0x1048506au); f_10485290();
  /* 1048506a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048506d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10485071 jge 0x104850b9 */
  if ((C.sf==C.of)) goto L_104850b9;
  /* 10485073 push 0x1002a030 */
  push32((uint32_t)(0x1002a030u));
  /* 10485078 mov ecx, dword ptr [0x1002d4dc] */
  ECX = (r32((uint32_t)(0x1002d4dc)));
  /* 1048507e push ecx */
  push32((uint32_t)(ECX));
  /* 1048507f call 0x1047ded0 */
  push32(0x10485084u); f_1047ded0();
  /* 10485084 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485087 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048508a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048508d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10485090 mov eax, dword ptr [edx + 0x1002d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1002d4dc)));
  /* 10485096 push eax */
  push32((uint32_t)(EAX));
  /* 10485097 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048509a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1048509d mov edx, dword ptr [ecx + 0x1002d4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1002d4dc)));
  /* 104850a3 push edx */
  push32((uint32_t)(EDX));
  /* 104850a4 call 0x10486ba0 */
  push32(0x104850a9u); f_10486ba0();
  /* 104850a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104850ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104850ae je 0x104850b7 */
  if (C.zf) goto L_104850b7;
  /* 104850b0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_104850b7:;
  /* 104850b7 jmp 0x104850e7 */
  goto L_104850e7;
L_104850b9:;
  /* 104850b9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104850bd jne 0x104850c6 */
  if (!C.zf) goto L_104850c6;
  /* 104850bf mov eax, dword ptr [0x1002d4dc] */
  EAX = (r32((uint32_t)(0x1002d4dc)));
  /* 104850c4 jmp 0x104850ec */
  goto L_104850ec;
L_104850c6:;
  /* 104850c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 104850c8 mov eax, dword ptr [0x1002d4dc] */
  EAX = (r32((uint32_t)(0x1002d4dc)));
  /* 104850cd push eax */
  push32((uint32_t)(EAX));
  /* 104850ce call 0x1047b9a0 */
  push32(0x104850d3u); f_1047b9a0();
  /* 104850d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104850d6 mov dword ptr [0x1002d4dc], 0 */
  w32((uint32_t)(0x1002d4dc), (0x0u));
  /* 104850e0 mov eax, dword ptr [0x1002d4f4] */
  EAX = (r32((uint32_t)(0x1002d4f4)));
  /* 104850e5 jmp 0x104850ec */
  goto L_104850ec;
L_104850e7:;
  /* 104850e7 jmp 0x10485035 */
  goto L_10485035;
L_104850ec:;
  /* 104850ec mov esp, ebp */
  ESP = (EBP);
  /* 104850ee pop ebp */
  EBP = (pop32());
  /* 104850ef ret  */
  ESPCHK(0x10484ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100250f0 @ 0x104850f0 (388 bytes, 115 insns) */
void f_104850f0(void) {
  FTRACE(0x104850f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104850f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104850f1 mov ebp, esp */
  EBP = (ESP);
  /* 104850f3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104850f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104850fd jne 0x10485106 */
  if (!C.zf) goto L_10485106;
  /* 104850ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10485101 jmp 0x10485270 */
  goto L_10485270;
L_10485106:;
  /* 10485106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485109 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1048510c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048510f jne 0x10485160 */
  if (!C.zf) goto L_10485160;
  /* 10485111 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485114 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10485118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048511a jne 0x10485160 */
  if (!C.zf) goto L_10485160;
  /* 1048511c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1048511f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10485122 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10485125 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10485129 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048512d je 0x10485149 */
  if (C.zf) goto L_10485149;
  /* 1048512f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10485132 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10485137 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1048513a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10485140 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10485143 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10485149:;
  /* 10485149 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048514d je 0x10485158 */
  if (C.zf) goto L_10485158;
  /* 1048514f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10485152 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10485158:;
  /* 10485158 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1048515b jmp 0x10485270 */
  goto L_10485270;
L_10485160:;
  /* 10485160 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485163 push ecx */
  push32((uint32_t)(ECX));
  /* 10485164 push 0x1002d450 */
  push32((uint32_t)(0x1002d450u));
  /* 10485169 call 0x10486ba0 */
  push32(0x1048516eu); f_10486ba0();
  /* 1048516e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485171 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10485173 je 0x10485228 */
  if (C.zf) goto L_10485228;
  /* 10485179 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048517c push edx */
  push32((uint32_t)(EDX));
  /* 1048517d push 0x1002d3cc */
  push32((uint32_t)(0x1002d3ccu));
  /* 10485182 call 0x10486ba0 */
  push32(0x10485187u); f_10486ba0();
  /* 10485187 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048518a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048518c je 0x10485228 */
  if (C.zf) goto L_10485228;
  /* 10485192 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485195 push eax */
  push32((uint32_t)(EAX));
  /* 10485196 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1048519c push ecx */
  push32((uint32_t)(ECX));
  /* 1048519d call 0x104852e0 */
  push32(0x104851a2u); f_104852e0();
  /* 104851a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104851a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104851a7 je 0x104851b0 */
  if (C.zf) goto L_104851b0;
  /* 104851a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104851ab jmp 0x10485270 */
  goto L_10485270;
L_104851b0:;
  /* 104851b0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 104851b6 push edx */
  push32((uint32_t)(EDX));
  /* 104851b7 push 0x1002e6a0 */
  push32((uint32_t)(0x1002e6a0u));
  /* 104851bc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 104851c2 push eax */
  push32((uint32_t)(EAX));
  /* 104851c3 call 0x10486cf0 */
  push32(0x104851c8u); f_10486cf0();
  /* 104851c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104851cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104851cd jne 0x104851d6 */
  if (!C.zf) goto L_104851d6;
  /* 104851cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104851d1 jmp 0x10485270 */
  goto L_10485270;
L_104851d6:;
  /* 104851d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104851d8 mov cx, word ptr [0x1002e6a4] */
  CX = (r16((uint32_t)(0x1002e6a4)));
  /* 104851df mov dword ptr [0x1002e6a8], ecx */
  w32((uint32_t)(0x1002e6a8), (ECX));
  /* 104851e5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 104851eb push edx */
  push32((uint32_t)(EDX));
  /* 104851ec push 0x1002d450 */
  push32((uint32_t)(0x1002d450u));
  /* 104851f1 call 0x10485440 */
  push32(0x104851f6u); f_10485440();
  /* 104851f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104851f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104851fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104851ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10485201 je 0x10485216 */
  if (C.zf) goto L_10485216;
  /* 10485203 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485206 push edx */
  push32((uint32_t)(EDX));
  /* 10485207 push 0x1002d3cc */
  push32((uint32_t)(0x1002d3ccu));
  /* 1048520c call 0x1047dec0 */
  push32(0x10485211u); f_1047dec0();
  /* 10485211 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485214 jmp 0x10485228 */
  goto L_10485228;
L_10485216:;
  /* 10485216 push 0x1002d450 */
  push32((uint32_t)(0x1002d450u));
  /* 1048521b push 0x1002d3cc */
  push32((uint32_t)(0x1002d3ccu));
  /* 10485220 call 0x1047dec0 */
  push32(0x10485225u); f_1047dec0();
  /* 10485225 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10485228:;
  /* 10485228 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048522c je 0x10485241 */
  if (C.zf) goto L_10485241;
  /* 1048522e push 6 */
  push32((uint32_t)(0x6u));
  /* 10485230 push 0x1002e6a0 */
  push32((uint32_t)(0x1002e6a0u));
  /* 10485235 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10485238 push eax */
  push32((uint32_t)(EAX));
  /* 10485239 call 0x104817f0 */
  push32(0x1048523eu); f_104817f0();
  /* 1048523e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10485241:;
  /* 10485241 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10485245 je 0x1048525a */
  if (C.zf) goto L_1048525a;
  /* 10485247 push 4 */
  push32((uint32_t)(0x4u));
  /* 10485249 push 0x1002e6a8 */
  push32((uint32_t)(0x1002e6a8u));
  /* 1048524e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10485251 push ecx */
  push32((uint32_t)(ECX));
  /* 10485252 call 0x104817f0 */
  push32(0x10485257u); f_104817f0();
  /* 10485257 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1048525a:;
  /* 1048525a push 0x1002d450 */
  push32((uint32_t)(0x1002d450u));
  /* 1048525f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10485262 push edx */
  push32((uint32_t)(EDX));
  /* 10485263 call 0x1047dec0 */
  push32(0x10485268u); f_1047dec0();
  /* 10485268 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048526b mov eax, 0x1002d450 */
  EAX = (0x1002d450u);
L_10485270:;
  /* 10485270 mov esp, ebp */
  ESP = (EBP);
  /* 10485272 pop ebp */
  EBP = (pop32());
  /* 10485273 ret  */
  ESPCHK(0x104850f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10025280 @ 0x10485280 (7 bytes, 5 insns) */
void f_10485280(void) {
  FTRACE(0x10485280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10485280 push ebp */
  push32((uint32_t)(EBP));
  /* 10485281 mov ebp, esp */
  EBP = (ESP);
  /* 10485283 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10485285 pop ebp */
  EBP = (pop32());
  /* 10485286 ret  */
  ESPCHK(0x10485280u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10485290 (79 bytes, 28 insns) */
void f_10485290(void) {
  FTRACE(0x10485290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10485290 push ebp */
  push32((uint32_t)(EBP));
  /* 10485291 mov ebp, esp */
  EBP = (ESP);
  /* 10485293 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10485296 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10485299 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1048529c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104852a3 jmp 0x104852ae */
  goto L_104852ae;
L_104852a5:;
  /* 104852a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104852a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104852ab mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_104852ae:;
  /* 104852ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104852b1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104852b4 jge 0x104852d4 */
  if ((C.sf==C.of)) goto L_104852d4;
  /* 104852b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104852b9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104852bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104852bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104852c2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 104852c5 push edx */
  push32((uint32_t)(EDX));
  /* 104852c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104852c9 push eax */
  push32((uint32_t)(EAX));
  /* 104852ca call 0x1047ded0 */
  push32(0x104852cfu); f_1047ded0();
  /* 104852cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104852d2 jmp 0x104852a5 */
  goto L_104852a5;
L_104852d4:;
  /* 104852d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104852db mov esp, ebp */
  ESP = (EBP);
  /* 104852dd pop ebp */
  EBP = (pop32());
  /* 104852de ret  */
  ESPCHK(0x10485290u, _esp0);
  ESP += 4; return;
}

/* FUN_100252e0 @ 0x104852e0 (349 bytes, 122 insns) */
void f_104852e0(void) {
  FTRACE(0x104852e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104852e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104852e1 mov ebp, esp */
  EBP = (ESP);
  /* 104852e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104852e6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 104852eb push 0 */
  push32((uint32_t)(0x0u));
  /* 104852ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104852f0 push eax */
  push32((uint32_t)(EAX));
  /* 104852f1 call 0x1047ec80 */
  push32(0x104852f6u); f_1047ec80();
  /* 104852f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104852f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104852fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104852ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10485301 jne 0x1048530a */
  if (!C.zf) goto L_1048530a;
  /* 10485303 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10485305 jmp 0x10485439 */
  goto L_10485439;
L_1048530a:;
  /* 1048530a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1048530d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10485310 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10485313 jne 0x10485340 */
  if (!C.zf) goto L_10485340;
  /* 10485315 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10485318 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1048531c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048531e je 0x10485340 */
  if (C.zf) goto L_10485340;
  /* 10485320 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10485323 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485326 push ecx */
  push32((uint32_t)(ECX));
  /* 10485327 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048532a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485330 push edx */
  push32((uint32_t)(EDX));
  /* 10485331 call 0x1047dec0 */
  push32(0x10485336u); f_1047dec0();
  /* 10485336 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485339 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1048533b jmp 0x10485439 */
  goto L_10485439;
L_10485340:;
  /* 10485340 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10485347 jmp 0x10485352 */
  goto L_10485352;
L_10485349:;
  /* 10485349 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048534c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048534f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10485352:;
  /* 10485352 push 0x1002a048 */
  push32((uint32_t)(0x1002a048u));
  /* 10485357 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1048535a push ecx */
  push32((uint32_t)(ECX));
  /* 1048535b call 0x10486c30 */
  push32(0x10485360u); f_10486c30();
  /* 10485360 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485363 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10485366 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048536a jne 0x10485374 */
  if (!C.zf) goto L_10485374;
  /* 1048536c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1048536f jmp 0x10485439 */
  goto L_10485439;
L_10485374:;
  /* 10485374 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10485377 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048537a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1048537c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1048537f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10485383 jne 0x104853aa */
  if (!C.zf) goto L_104853aa;
  /* 10485385 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10485389 jge 0x104853aa */
  if ((C.sf==C.of)) goto L_104853aa;
  /* 1048538b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1048538f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10485392 je 0x104853aa */
  if (C.zf) goto L_104853aa;
  /* 10485394 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485397 push edx */
  push32((uint32_t)(EDX));
  /* 10485398 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1048539b push eax */
  push32((uint32_t)(EAX));
  /* 1048539c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048539f push ecx */
  push32((uint32_t)(ECX));
  /* 104853a0 call 0x1047e730 */
  push32(0x104853a5u); f_1047e730();
  /* 104853a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104853a8 jmp 0x10485410 */
  goto L_10485410;
L_104853aa:;
  /* 104853aa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104853ae jne 0x104853d8 */
  if (!C.zf) goto L_104853d8;
  /* 104853b0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104853b4 jge 0x104853d8 */
  if ((C.sf==C.of)) goto L_104853d8;
  /* 104853b6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104853ba cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104853bd je 0x104853d8 */
  if (C.zf) goto L_104853d8;
  /* 104853bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104853c2 push eax */
  push32((uint32_t)(EAX));
  /* 104853c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104853c6 push ecx */
  push32((uint32_t)(ECX));
  /* 104853c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104853ca add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104853cd push edx */
  push32((uint32_t)(EDX));
  /* 104853ce call 0x1047e730 */
  push32(0x104853d3u); f_1047e730();
  /* 104853d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104853d6 jmp 0x10485410 */
  goto L_10485410;
L_104853d8:;
  /* 104853d8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104853dc jne 0x1048540b */
  if (!C.zf) goto L_1048540b;
  /* 104853de movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104853e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104853e4 je 0x104853ef */
  if (C.zf) goto L_104853ef;
  /* 104853e6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104853ea cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104853ed jne 0x1048540b */
  if (!C.zf) goto L_1048540b;
L_104853ef:;
  /* 104853ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104853f2 push edx */
  push32((uint32_t)(EDX));
  /* 104853f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104853f6 push eax */
  push32((uint32_t)(EAX));
  /* 104853f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104853fa add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485400 push ecx */
  push32((uint32_t)(ECX));
  /* 10485401 call 0x1047e730 */
  push32(0x10485406u); f_1047e730();
  /* 10485406 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485409 jmp 0x10485410 */
  goto L_10485410;
L_1048540b:;
  /* 1048540b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1048540e jmp 0x10485439 */
  goto L_10485439;
L_10485410:;
  /* 10485410 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10485414 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10485417 jne 0x1048541b */
  if (!C.zf) goto L_1048541b;
  /* 10485419 jmp 0x10485437 */
  goto L_10485437;
L_1048541b:;
  /* 1048541b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1048541f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10485421 jne 0x10485425 */
  if (!C.zf) goto L_10485425;
  /* 10485423 jmp 0x10485437 */
  goto L_10485437;
L_10485425:;
  /* 10485425 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485428 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1048542b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1048542f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10485432 jmp 0x10485349 */
  goto L_10485349;
L_10485437:;
  /* 10485437 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10485439:;
  /* 10485439 mov esp, ebp */
  ESP = (EBP);
  /* 1048543b pop ebp */
  EBP = (pop32());
  /* 1048543c ret  */
  ESPCHK(0x104852e0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10485440 (101 bytes, 36 insns) */
void f_10485440(void) {
  FTRACE(0x10485440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10485440 push ebp */
  push32((uint32_t)(EBP));
  /* 10485441 mov ebp, esp */
  EBP = (ESP);
  /* 10485443 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10485446 push eax */
  push32((uint32_t)(EAX));
  /* 10485447 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048544a push ecx */
  push32((uint32_t)(ECX));
  /* 1048544b call 0x1047dec0 */
  push32(0x10485450u); f_1047dec0();
  /* 10485450 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485453 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10485456 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1048545a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048545c je 0x10485478 */
  if (C.zf) goto L_10485478;
  /* 1048545e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10485461 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485464 push ecx */
  push32((uint32_t)(ECX));
  /* 10485465 push 0x1002a050 */
  push32((uint32_t)(0x1002a050u));
  /* 1048546a push 2 */
  push32((uint32_t)(0x2u));
  /* 1048546c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048546f push edx */
  push32((uint32_t)(EDX));
  /* 10485470 call 0x10485290 */
  push32(0x10485475u); f_10485290();
  /* 10485475 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10485478:;
  /* 10485478 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1048547b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10485482 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10485484 je 0x104854a3 */
  if (C.zf) goto L_104854a3;
  /* 10485486 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10485489 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048548f push edx */
  push32((uint32_t)(EDX));
  /* 10485490 push 0x1002a04c */
  push32((uint32_t)(0x1002a04cu));
  /* 10485495 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485497 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048549a push eax */
  push32((uint32_t)(EAX));
  /* 1048549b call 0x10485290 */
  push32(0x104854a0u); f_10485290();
  /* 104854a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104854a3:;
  /* 104854a3 pop ebp */
  EBP = (pop32());
  /* 104854a4 ret  */
  ESPCHK(0x10485440u, _esp0);
  ESP += 4; return;
}

/* FUN_100254b0 @ 0x104854b0 (130 bytes, 50 insns) */
void f_104854b0(void) {
  FTRACE(0x104854b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104854b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104854b1 mov ebp, esp */
  EBP = (ESP);
  /* 104854b3 push ecx */
  push32((uint32_t)(ECX));
  /* 104854b4 push ebx */
  push32((uint32_t)(EBX));
  /* 104854b5 push esi */
  push32((uint32_t)(ESI));
  /* 104854b6 push edi */
  push32((uint32_t)(EDI));
  /* 104854b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104854be:;
  /* 104854be cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104854c2 jne 0x104854e2 */
  if (!C.zf) goto L_104854e2;
  /* 104854c4 push 0x1002a060 */
  push32((uint32_t)(0x1002a060u));
  /* 104854c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104854cb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 104854cd push 0x1002a054 */
  push32((uint32_t)(0x1002a054u));
  /* 104854d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 104854d4 call 0x10479fd0 */
  push32(0x104854d9u); f_10479fd0();
  /* 104854d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104854dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104854df jne 0x104854e2 */
  if (!C.zf) goto L_104854e2;
  /* 104854e1 int3  */
  x86_unimpl("int3 @ 0x104854e1");
L_104854e2:;
  /* 104854e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104854e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104854e6 jne 0x104854be */
  if (!C.zf) goto L_104854be;
  /* 104854e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104854eb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104854ee and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 104854f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104854f3 je 0x10485501 */
  if (C.zf) goto L_10485501;
  /* 104854f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104854f8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 104854ff jmp 0x10485528 */
  goto L_10485528;
L_10485501:;
  /* 10485501 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485504 push ecx */
  push32((uint32_t)(ECX));
  /* 10485505 call 0x10483d20 */
  push32(0x1048550au); f_10483d20();
  /* 1048550a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048550d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485510 push edx */
  push32((uint32_t)(EDX));
  /* 10485511 call 0x10485540 */
  push32(0x10485516u); f_10485540();
  /* 10485516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485519 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1048551c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048551f push eax */
  push32((uint32_t)(EAX));
  /* 10485520 call 0x10483d90 */
  push32(0x10485525u); f_10483d90();
  /* 10485525 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10485528:;
  /* 10485528 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048552b pop edi */
  EDI = (pop32());
  /* 1048552c pop esi */
  ESI = (pop32());
  /* 1048552d pop ebx */
  EBX = (pop32());
  /* 1048552e mov esp, ebp */
  ESP = (EBP);
  /* 10485530 pop ebp */
  EBP = (pop32());
  /* 10485531 ret  */
  ESPCHK(0x104854b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10025540 @ 0x10485540 (190 bytes, 67 insns) */
void f_10485540(void) {
  FTRACE(0x10485540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10485540 push ebp */
  push32((uint32_t)(EBP));
  /* 10485541 mov ebp, esp */
  EBP = (ESP);
  /* 10485543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10485546 push ebx */
  push32((uint32_t)(EBX));
  /* 10485547 push esi */
  push32((uint32_t)(ESI));
  /* 10485548 push edi */
  push32((uint32_t)(EDI));
  /* 10485549 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10485550 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485553 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10485556:;
  /* 10485556 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048555a jne 0x1048557a */
  if (!C.zf) goto L_1048557a;
  /* 1048555c push 0x10029f04 */
  push32((uint32_t)(0x10029f04u));
  /* 10485561 push 0 */
  push32((uint32_t)(0x0u));
  /* 10485563 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10485565 push 0x1002a054 */
  push32((uint32_t)(0x1002a054u));
  /* 1048556a push 2 */
  push32((uint32_t)(0x2u));
  /* 1048556c call 0x10479fd0 */
  push32(0x10485571u); f_10479fd0();
  /* 10485571 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485574 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10485577 jne 0x1048557a */
  if (!C.zf) goto L_1048557a;
  /* 10485579 int3  */
  x86_unimpl("int3 @ 0x10485579");
L_1048557a:;
  /* 1048557a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1048557c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1048557e jne 0x10485556 */
  if (!C.zf) goto L_10485556;
  /* 10485580 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10485583 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10485586 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1048558b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048558d je 0x104855ea */
  if (C.zf) goto L_104855ea;
  /* 1048558f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10485592 push ecx */
  push32((uint32_t)(ECX));
  /* 10485593 call 0x10484840 */
  push32(0x10485598u); f_10484840();
  /* 10485598 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048559b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1048559e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104855a1 push edx */
  push32((uint32_t)(EDX));
  /* 104855a2 call 0x10487bc0 */
  push32(0x104855a7u); f_10487bc0();
  /* 104855a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104855aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104855ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104855b0 push ecx */
  push32((uint32_t)(ECX));
  /* 104855b1 call 0x10487a90 */
  push32(0x104855b6u); f_10487a90();
  /* 104855b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104855b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104855bb jge 0x104855c6 */
  if ((C.sf==C.of)) goto L_104855c6;
  /* 104855bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104855c4 jmp 0x104855ea */
  goto L_104855ea;
L_104855c6:;
  /* 104855c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104855c9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104855cd je 0x104855ea */
  if (C.zf) goto L_104855ea;
  /* 104855cf push 2 */
  push32((uint32_t)(0x2u));
  /* 104855d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104855d4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 104855d7 push ecx */
  push32((uint32_t)(ECX));
  /* 104855d8 call 0x1047b9a0 */
  push32(0x104855ddu); f_1047b9a0();
  /* 104855dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104855e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104855e3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_104855ea:;
  /* 104855ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104855ed mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 104855f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104855f7 pop edi */
  EDI = (pop32());
  /* 104855f8 pop esi */
  ESI = (pop32());
  /* 104855f9 pop ebx */
  EBX = (pop32());
  /* 104855fa mov esp, ebp */
  ESP = (EBP);
  /* 104855fc pop ebp */
  EBP = (pop32());
  /* 104855fd ret  */
  ESPCHK(0x10485540u, _esp0);
  ESP += 4; return;
}

/* FUN_10025600 @ 0x10485600 (210 bytes, 63 insns) */
void f_10485600(void) {
  FTRACE(0x10485600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10485600 push ebp */
  push32((uint32_t)(EBP));
  /* 10485601 mov ebp, esp */
  EBP = (ESP);
  /* 10485603 push ecx */
  push32((uint32_t)(ECX));
  /* 10485604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485607 cmp eax, dword ptr [0x1002ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1002ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048560d jae 0x10485631 */
  if (!C.cf) goto L_10485631;
  /* 1048560f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485612 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10485615 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485618 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1048561b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1048561e mov eax, dword ptr [ecx*4 + 0x1002fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1002fe60)));
  /* 10485625 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1048562a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1048562d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1048562f jne 0x10485644 */
  if (!C.zf) goto L_10485644;
L_10485631:;
  /* 10485631 call 0x10482de0 */
  push32(0x10485636u); f_10482de0();
  /* 10485636 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1048563c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1048563f jmp 0x104856ce */
  goto L_104856ce;
L_10485644:;
  /* 10485644 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485647 push edx */
  push32((uint32_t)(EDX));
  /* 10485648 call 0x10484600 */
  push32(0x1048564du); f_10484600();
  /* 1048564d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485650 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485653 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10485656 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485659 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1048565c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1048565f mov edx, dword ptr [eax*4 + 0x1002fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1002fe60)));
  /* 10485666 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1048566b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1048566e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10485670 je 0x104856ad */
  if (C.zf) goto L_104856ad;
  /* 10485672 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485675 push ecx */
  push32((uint32_t)(ECX));
  /* 10485676 call 0x10484480 */
  push32(0x1048567bu); f_10484480();
  /* 1048567b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048567e push eax */
  push32((uint32_t)(EAX));
  /* 1048567f call dword ptr [0x10030268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030268))), 0x10485685u);
  /* 10485685 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10485687 jne 0x10485694 */
  if (!C.zf) goto L_10485694;
  /* 10485689 call dword ptr [0x100302c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302c0))), 0x1048568fu);
  /* 1048568f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10485692 jmp 0x1048569b */
  goto L_1048569b;
L_10485694:;
  /* 10485694 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1048569b:;
  /* 1048569b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048569f jne 0x104856a3 */
  if (!C.zf) goto L_104856a3;
  /* 104856a1 jmp 0x104856bf */
  goto L_104856bf;
L_104856a3:;
  /* 104856a3 call 0x10482df0 */
  push32(0x104856a8u); f_10482df0();
  /* 104856a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104856ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104856ad:;
  /* 104856ad call 0x10482de0 */
  push32(0x104856b2u); f_10482de0();
  /* 104856b2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 104856b8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104856bf:;
  /* 104856bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104856c2 push eax */
  push32((uint32_t)(EAX));
  /* 104856c3 call 0x10484690 */
  push32(0x104856c8u); f_10484690();
  /* 104856c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104856cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104856ce:;
  /* 104856ce mov esp, ebp */
  ESP = (EBP);
  /* 104856d0 pop ebp */
  EBP = (pop32());
  /* 104856d1 ret  */
  ESPCHK(0x10485600u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x104856e0 (219 bytes, 64 insns) */
void f_104856e0(void) {
  FTRACE(0x104856e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104856e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104856e1 mov ebp, esp */
  EBP = (ESP);
  /* 104856e3 push ecx */
  push32((uint32_t)(ECX));
  /* 104856e4 cmp dword ptr [0x1002e68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104856eb je 0x10485781 */
  if (C.zf) goto L_10485781;
  /* 104856f1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 104856f3 push 0x1002a070 */
  push32((uint32_t)(0x1002a070u));
  /* 104856f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 104856fa push 0xac */
  push32((uint32_t)(0xacu));
  /* 104856ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10485701 call 0x1047b320 */
  push32(0x10485706u); f_1047b320();
  /* 10485706 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485709 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1048570c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10485710 jne 0x1048571c */
  if (!C.zf) goto L_1048571c;
  /* 10485712 mov eax, 1 */
  EAX = (0x1u);
  /* 10485717 jmp 0x104857b7 */
  goto L_104857b7;
L_1048571c:;
  /* 1048571c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048571f push eax */
  push32((uint32_t)(EAX));
  /* 10485720 call 0x104857c0 */
  push32(0x10485725u); f_104857c0();
  /* 10485725 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048572a je 0x1048574d */
  if (C.zf) goto L_1048574d;
  /* 1048572c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048572f push ecx */
  push32((uint32_t)(ECX));
  /* 10485730 call 0x10485d50 */
  push32(0x10485735u); f_10485d50();
  /* 10485735 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485738 push 2 */
  push32((uint32_t)(0x2u));
  /* 1048573a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048573d push edx */
  push32((uint32_t)(EDX));
  /* 1048573e call 0x1047b9a0 */
  push32(0x10485743u); f_1047b9a0();
  /* 10485743 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485746 mov eax, 1 */
  EAX = (0x1u);
  /* 1048574b jmp 0x104857b7 */
  goto L_104857b7;
L_1048574d:;
  /* 1048574d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485750 mov dword ptr [0x1002dc98], eax */
  w32((uint32_t)(0x1002dc98), (EAX));
  /* 10485755 mov ecx, dword ptr [0x1002e6ac] */
  ECX = (r32((uint32_t)(0x1002e6ac)));
  /* 1048575b push ecx */
  push32((uint32_t)(ECX));
  /* 1048575c call 0x10485d50 */
  push32(0x10485761u); f_10485d50();
  /* 10485761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485764 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485766 mov edx, dword ptr [0x1002e6ac] */
  EDX = (r32((uint32_t)(0x1002e6ac)));
  /* 1048576c push edx */
  push32((uint32_t)(EDX));
  /* 1048576d call 0x1047b9a0 */
  push32(0x10485772u); f_1047b9a0();
  /* 10485772 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485775 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485778 mov dword ptr [0x1002e6ac], eax */
  w32((uint32_t)(0x1002e6ac), (EAX));
  /* 1048577d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1048577f jmp 0x104857b7 */
  goto L_104857b7;
L_10485781:;
  /* 10485781 mov dword ptr [0x1002dc98], 0x1002dca0 */
  w32((uint32_t)(0x1002dc98), (0x1002dca0u));
  /* 1048578b mov ecx, dword ptr [0x1002e6ac] */
  ECX = (r32((uint32_t)(0x1002e6ac)));
  /* 10485791 push ecx */
  push32((uint32_t)(ECX));
  /* 10485792 call 0x10485d50 */
  push32(0x10485797u); f_10485d50();
  /* 10485797 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048579a push 2 */
  push32((uint32_t)(0x2u));
  /* 1048579c mov edx, dword ptr [0x1002e6ac] */
  EDX = (r32((uint32_t)(0x1002e6ac)));
  /* 104857a2 push edx */
  push32((uint32_t)(EDX));
  /* 104857a3 call 0x1047b9a0 */
  push32(0x104857a8u); f_1047b9a0();
  /* 104857a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104857ab mov dword ptr [0x1002e6ac], 0 */
  w32((uint32_t)(0x1002e6ac), (0x0u));
  /* 104857b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104857b7:;
  /* 104857b7 mov esp, ebp */
  ESP = (EBP);
  /* 104857b9 pop ebp */
  EBP = (pop32());
  /* 104857ba ret  */
  ESPCHK(0x104856e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100257c0 @ 0x104857c0 (1423 bytes, 533 insns) */
void f_104857c0(void) {
  FTRACE(0x104857c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104857c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104857c1 mov ebp, esp */
  EBP = (ESP);
  /* 104857c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104857c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104857cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104857cf mov ax, word ptr [0x1002e6e6] */
  AX = (r16((uint32_t)(0x1002e6e6)));
  /* 104857d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104857d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104857da mov cx, word ptr [0x1002e6e8] */
  CX = (r16((uint32_t)(0x1002e6e8)));
  /* 104857e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104857e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104857e8 jne 0x104857f2 */
  if (!C.zf) goto L_104857f2;
  /* 104857ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104857ed jmp 0x10485d4b */
  goto L_10485d4b;
L_104857f2:;
  /* 104857f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104857f5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104857f8 push edx */
  push32((uint32_t)(EDX));
  /* 104857f9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 104857fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104857fe push eax */
  push32((uint32_t)(EAX));
  /* 104857ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10485801 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485806u);
  /* 10485806 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485809 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1048580c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1048580e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485811 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485814 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485817 push edx */
  push32((uint32_t)(EDX));
  /* 10485818 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1048581a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048581d push eax */
  push32((uint32_t)(EAX));
  /* 1048581e push 1 */
  push32((uint32_t)(0x1u));
  /* 10485820 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485825u);
  /* 10485825 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485828 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1048582b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1048582d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485830 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485833 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485836 push edx */
  push32((uint32_t)(EDX));
  /* 10485837 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10485839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048583c push eax */
  push32((uint32_t)(EAX));
  /* 1048583d push 1 */
  push32((uint32_t)(0x1u));
  /* 1048583f call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485844u);
  /* 10485844 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485847 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1048584a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1048584c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1048584f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485852 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485855 push edx */
  push32((uint32_t)(EDX));
  /* 10485856 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10485858 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048585b push eax */
  push32((uint32_t)(EAX));
  /* 1048585c push 1 */
  push32((uint32_t)(0x1u));
  /* 1048585e call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485863u);
  /* 10485863 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485866 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485869 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1048586b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1048586e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485871 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485874 push edx */
  push32((uint32_t)(EDX));
  /* 10485875 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10485877 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048587a push eax */
  push32((uint32_t)(EAX));
  /* 1048587b push 1 */
  push32((uint32_t)(0x1u));
  /* 1048587d call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485882u);
  /* 10485882 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485885 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485888 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1048588a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1048588d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485890 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485893 push edx */
  push32((uint32_t)(EDX));
  /* 10485894 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10485896 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485899 push eax */
  push32((uint32_t)(EAX));
  /* 1048589a push 1 */
  push32((uint32_t)(0x1u));
  /* 1048589c call 0x104890d0 */
  call_ind(0x104890d0u, 0x104858a1u);
  /* 104858a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104858a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104858a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104858a9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104858ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104858af push edx */
  push32((uint32_t)(EDX));
  /* 104858b0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 104858b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104858b5 push eax */
  push32((uint32_t)(EAX));
  /* 104858b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 104858b8 call 0x104890d0 */
  call_ind(0x104890d0u, 0x104858bdu);
  /* 104858bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104858c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104858c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104858c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104858c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104858cb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104858ce push edx */
  push32((uint32_t)(EDX));
  /* 104858cf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 104858d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104858d4 push eax */
  push32((uint32_t)(EAX));
  /* 104858d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 104858d7 call 0x104890d0 */
  call_ind(0x104890d0u, 0x104858dcu);
  /* 104858dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104858df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104858e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104858e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104858e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104858ea add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104858ed push edx */
  push32((uint32_t)(EDX));
  /* 104858ee push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 104858f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104858f3 push eax */
  push32((uint32_t)(EAX));
  /* 104858f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 104858f6 call 0x104890d0 */
  call_ind(0x104890d0u, 0x104858fbu);
  /* 104858fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104858fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485901 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485903 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485906 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485909 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048590c push edx */
  push32((uint32_t)(EDX));
  /* 1048590d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1048590f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485912 push eax */
  push32((uint32_t)(EAX));
  /* 10485913 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485915 call 0x104890d0 */
  call_ind(0x104890d0u, 0x1048591au);
  /* 1048591a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048591d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485920 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485922 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485925 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485928 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048592b push edx */
  push32((uint32_t)(EDX));
  /* 1048592c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1048592e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485931 push eax */
  push32((uint32_t)(EAX));
  /* 10485932 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485934 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485939u);
  /* 10485939 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048593c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1048593f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485941 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485944 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485947 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048594a push edx */
  push32((uint32_t)(EDX));
  /* 1048594b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1048594d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485950 push eax */
  push32((uint32_t)(EAX));
  /* 10485951 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485953 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485958u);
  /* 10485958 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048595b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1048595e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485960 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485963 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485966 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485969 push edx */
  push32((uint32_t)(EDX));
  /* 1048596a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1048596c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048596f push eax */
  push32((uint32_t)(EAX));
  /* 10485970 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485972 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485977u);
  /* 10485977 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048597a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1048597d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1048597f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485982 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485985 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485988 push edx */
  push32((uint32_t)(EDX));
  /* 10485989 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1048598b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048598e push eax */
  push32((uint32_t)(EAX));
  /* 1048598f push 1 */
  push32((uint32_t)(0x1u));
  /* 10485991 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485996u);
  /* 10485996 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485999 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1048599c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1048599e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104859a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104859a4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104859a7 push edx */
  push32((uint32_t)(EDX));
  /* 104859a8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 104859aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104859ad push eax */
  push32((uint32_t)(EAX));
  /* 104859ae push 1 */
  push32((uint32_t)(0x1u));
  /* 104859b0 call 0x104890d0 */
  call_ind(0x104890d0u, 0x104859b5u);
  /* 104859b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104859b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104859bb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104859bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104859c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104859c3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104859c6 push edx */
  push32((uint32_t)(EDX));
  /* 104859c7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 104859c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104859cc push eax */
  push32((uint32_t)(EAX));
  /* 104859cd push 1 */
  push32((uint32_t)(0x1u));
  /* 104859cf call 0x104890d0 */
  call_ind(0x104890d0u, 0x104859d4u);
  /* 104859d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104859d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104859da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104859dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104859df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104859e2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104859e5 push edx */
  push32((uint32_t)(EDX));
  /* 104859e6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 104859e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104859eb push eax */
  push32((uint32_t)(EAX));
  /* 104859ec push 1 */
  push32((uint32_t)(0x1u));
  /* 104859ee call 0x104890d0 */
  call_ind(0x104890d0u, 0x104859f3u);
  /* 104859f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104859f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104859f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104859fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104859fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485a01 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485a04 push edx */
  push32((uint32_t)(EDX));
  /* 10485a05 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10485a07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485a0a push eax */
  push32((uint32_t)(EAX));
  /* 10485a0b push 1 */
  push32((uint32_t)(0x1u));
  /* 10485a0d call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485a12u);
  /* 10485a12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485a15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485a18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485a1a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485a1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485a20 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485a23 push edx */
  push32((uint32_t)(EDX));
  /* 10485a24 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10485a26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485a29 push eax */
  push32((uint32_t)(EAX));
  /* 10485a2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10485a2c call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485a31u);
  /* 10485a31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485a34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485a37 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485a39 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485a3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485a3f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485a42 push edx */
  push32((uint32_t)(EDX));
  /* 10485a43 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10485a45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485a48 push eax */
  push32((uint32_t)(EAX));
  /* 10485a49 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485a4b call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485a50u);
  /* 10485a50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485a53 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485a56 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485a58 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485a5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485a5e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485a61 push edx */
  push32((uint32_t)(EDX));
  /* 10485a62 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10485a64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485a67 push eax */
  push32((uint32_t)(EAX));
  /* 10485a68 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485a6a call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485a6fu);
  /* 10485a6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485a72 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485a75 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485a77 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485a7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485a7d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485a80 push edx */
  push32((uint32_t)(EDX));
  /* 10485a81 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10485a83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485a86 push eax */
  push32((uint32_t)(EAX));
  /* 10485a87 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485a89 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485a8eu);
  /* 10485a8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485a91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485a94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485a96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485a99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485a9c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485a9f push edx */
  push32((uint32_t)(EDX));
  /* 10485aa0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10485aa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485aa5 push eax */
  push32((uint32_t)(EAX));
  /* 10485aa6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485aa8 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485aadu);
  /* 10485aad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485ab0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485ab3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485ab5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485ab8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485abb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485abe push edx */
  push32((uint32_t)(EDX));
  /* 10485abf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10485ac1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485ac4 push eax */
  push32((uint32_t)(EAX));
  /* 10485ac5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485ac7 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485accu);
  /* 10485acc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485acf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485ad2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485ad4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485ad7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485ada add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485add push edx */
  push32((uint32_t)(EDX));
  /* 10485ade push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10485ae0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485ae3 push eax */
  push32((uint32_t)(EAX));
  /* 10485ae4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485ae6 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485aebu);
  /* 10485aeb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485aee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485af1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485af3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485af6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485af9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485afc push edx */
  push32((uint32_t)(EDX));
  /* 10485afd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10485aff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485b02 push eax */
  push32((uint32_t)(EAX));
  /* 10485b03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485b05 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485b0au);
  /* 10485b0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485b0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485b10 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485b12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485b15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485b18 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485b1b push edx */
  push32((uint32_t)(EDX));
  /* 10485b1c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10485b1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485b21 push eax */
  push32((uint32_t)(EAX));
  /* 10485b22 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485b24 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485b29u);
  /* 10485b29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485b2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485b2f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485b31 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485b34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485b37 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485b3a push edx */
  push32((uint32_t)(EDX));
  /* 10485b3b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10485b3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485b40 push eax */
  push32((uint32_t)(EAX));
  /* 10485b41 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485b43 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485b48u);
  /* 10485b48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485b4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485b4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485b50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485b53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485b56 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485b59 push edx */
  push32((uint32_t)(EDX));
  /* 10485b5a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10485b5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485b5f push eax */
  push32((uint32_t)(EAX));
  /* 10485b60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485b62 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485b67u);
  /* 10485b67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485b6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485b6d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485b6f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485b72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485b75 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485b78 push edx */
  push32((uint32_t)(EDX));
  /* 10485b79 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10485b7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485b7e push eax */
  push32((uint32_t)(EAX));
  /* 10485b7f push 1 */
  push32((uint32_t)(0x1u));
  /* 10485b81 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485b86u);
  /* 10485b86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485b89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485b8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485b8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485b91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485b94 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485b97 push edx */
  push32((uint32_t)(EDX));
  /* 10485b98 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10485b9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485b9d push eax */
  push32((uint32_t)(EAX));
  /* 10485b9e push 1 */
  push32((uint32_t)(0x1u));
  /* 10485ba0 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485ba5u);
  /* 10485ba5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485ba8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485bab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485bad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485bb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485bb3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485bb6 push edx */
  push32((uint32_t)(EDX));
  /* 10485bb7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10485bb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485bbc push eax */
  push32((uint32_t)(EAX));
  /* 10485bbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10485bbf call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485bc4u);
  /* 10485bc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485bc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485bca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485bcc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485bcf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485bd2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485bd8 push edx */
  push32((uint32_t)(EDX));
  /* 10485bd9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10485bdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485bde push eax */
  push32((uint32_t)(EAX));
  /* 10485bdf push 1 */
  push32((uint32_t)(0x1u));
  /* 10485be1 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485be6u);
  /* 10485be6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485be9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485bec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485bee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485bf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485bf4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485bfa push edx */
  push32((uint32_t)(EDX));
  /* 10485bfb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10485bfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485c00 push eax */
  push32((uint32_t)(EAX));
  /* 10485c01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485c03 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485c08u);
  /* 10485c08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485c0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485c0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485c10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485c13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485c16 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485c1c push edx */
  push32((uint32_t)(EDX));
  /* 10485c1d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10485c1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485c22 push eax */
  push32((uint32_t)(EAX));
  /* 10485c23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485c25 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485c2au);
  /* 10485c2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485c2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485c30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485c32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485c35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485c38 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485c3e push edx */
  push32((uint32_t)(EDX));
  /* 10485c3f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10485c41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485c44 push eax */
  push32((uint32_t)(EAX));
  /* 10485c45 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485c47 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485c4cu);
  /* 10485c4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485c4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485c52 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485c54 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485c57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485c5a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485c60 push edx */
  push32((uint32_t)(EDX));
  /* 10485c61 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10485c63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485c66 push eax */
  push32((uint32_t)(EAX));
  /* 10485c67 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485c69 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485c6eu);
  /* 10485c6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485c71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485c74 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485c76 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485c79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485c7c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485c82 push edx */
  push32((uint32_t)(EDX));
  /* 10485c83 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10485c85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485c88 push eax */
  push32((uint32_t)(EAX));
  /* 10485c89 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485c8b call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485c90u);
  /* 10485c90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485c93 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485c96 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485c98 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485c9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485c9e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485ca4 push edx */
  push32((uint32_t)(EDX));
  /* 10485ca5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10485ca7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485caa push eax */
  push32((uint32_t)(EAX));
  /* 10485cab push 1 */
  push32((uint32_t)(0x1u));
  /* 10485cad call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485cb2u);
  /* 10485cb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485cb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485cb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485cba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485cbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485cc0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485cc6 push edx */
  push32((uint32_t)(EDX));
  /* 10485cc7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10485cc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10485ccc push eax */
  push32((uint32_t)(EAX));
  /* 10485ccd push 1 */
  push32((uint32_t)(0x1u));
  /* 10485ccf call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485cd4u);
  /* 10485cd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485cd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485cda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485cdc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485cdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485ce2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485ce8 push edx */
  push32((uint32_t)(EDX));
  /* 10485ce9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10485ceb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10485cee push eax */
  push32((uint32_t)(EAX));
  /* 10485cef push 1 */
  push32((uint32_t)(0x1u));
  /* 10485cf1 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485cf6u);
  /* 10485cf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485cf9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485cfc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485cfe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485d01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485d04 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485d0a push edx */
  push32((uint32_t)(EDX));
  /* 10485d0b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10485d0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10485d10 push eax */
  push32((uint32_t)(EAX));
  /* 10485d11 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485d13 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485d18u);
  /* 10485d18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485d1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485d1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485d20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485d23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485d26 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10485d2c push edx */
  push32((uint32_t)(EDX));
  /* 10485d2d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10485d32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10485d35 push eax */
  push32((uint32_t)(EAX));
  /* 10485d36 push 1 */
  push32((uint32_t)(0x1u));
  /* 10485d38 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10485d3du);
  /* 10485d3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485d40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10485d43 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10485d45 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10485d48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10485d4b:;
  /* 10485d4b mov esp, ebp */
  ESP = (EBP);
  /* 10485d4d pop ebp */
  EBP = (pop32());
  /* 10485d4e ret  */
  ESPCHK(0x104857c0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10485d50 (779 bytes, 265 insns) */
void f_10485d50(void) {
  FTRACE(0x10485d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10485d50 push ebp */
  push32((uint32_t)(EBP));
  /* 10485d51 mov ebp, esp */
  EBP = (ESP);
  /* 10485d53 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10485d57 jne 0x10485d5e */
  if (!C.zf) goto L_10485d5e;
  /* 10485d59 jmp 0x10486059 */
  goto L_10486059;
L_10485d5e:;
  /* 10485d5e push 2 */
  push32((uint32_t)(0x2u));
  /* 10485d60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485d63 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10485d66 push ecx */
  push32((uint32_t)(ECX));
  /* 10485d67 call 0x1047b9a0 */
  push32(0x10485d6cu); f_1047b9a0();
  /* 10485d6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485d6f push 2 */
  push32((uint32_t)(0x2u));
  /* 10485d71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485d74 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10485d77 push eax */
  push32((uint32_t)(EAX));
  /* 10485d78 call 0x1047b9a0 */
  push32(0x10485d7du); f_1047b9a0();
  /* 10485d7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485d80 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485d82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485d85 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10485d88 push edx */
  push32((uint32_t)(EDX));
  /* 10485d89 call 0x1047b9a0 */
  push32(0x10485d8eu); f_1047b9a0();
  /* 10485d8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485d91 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485d93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485d96 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10485d99 push ecx */
  push32((uint32_t)(ECX));
  /* 10485d9a call 0x1047b9a0 */
  push32(0x10485d9fu); f_1047b9a0();
  /* 10485d9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485da2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485da4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485da7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10485daa push eax */
  push32((uint32_t)(EAX));
  /* 10485dab call 0x1047b9a0 */
  push32(0x10485db0u); f_1047b9a0();
  /* 10485db0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485db3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485db5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485db8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10485dbb push edx */
  push32((uint32_t)(EDX));
  /* 10485dbc call 0x1047b9a0 */
  push32(0x10485dc1u); f_1047b9a0();
  /* 10485dc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485dc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485dc9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10485dcb push ecx */
  push32((uint32_t)(ECX));
  /* 10485dcc call 0x1047b9a0 */
  push32(0x10485dd1u); f_1047b9a0();
  /* 10485dd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485dd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485dd6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485dd9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10485ddc push eax */
  push32((uint32_t)(EAX));
  /* 10485ddd call 0x1047b9a0 */
  push32(0x10485de2u); f_1047b9a0();
  /* 10485de2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485de5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485de7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485dea mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10485ded push edx */
  push32((uint32_t)(EDX));
  /* 10485dee call 0x1047b9a0 */
  push32(0x10485df3u); f_1047b9a0();
  /* 10485df3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485df6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485df8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485dfb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10485dfe push ecx */
  push32((uint32_t)(ECX));
  /* 10485dff call 0x1047b9a0 */
  push32(0x10485e04u); f_1047b9a0();
  /* 10485e04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485e07 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485e09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485e0c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10485e0f push eax */
  push32((uint32_t)(EAX));
  /* 10485e10 call 0x1047b9a0 */
  push32(0x10485e15u); f_1047b9a0();
  /* 10485e15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485e18 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485e1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485e1d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10485e20 push edx */
  push32((uint32_t)(EDX));
  /* 10485e21 call 0x1047b9a0 */
  push32(0x10485e26u); f_1047b9a0();
  /* 10485e26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485e29 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485e2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485e2e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10485e31 push ecx */
  push32((uint32_t)(ECX));
  /* 10485e32 call 0x1047b9a0 */
  push32(0x10485e37u); f_1047b9a0();
  /* 10485e37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485e3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10485e3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485e3f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10485e42 push eax */
  push32((uint32_t)(EAX));
  /* 10485e43 call 0x1047b9a0 */
  push32(0x10485e48u); f_1047b9a0();
  /* 10485e48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485e4b push 2 */
  push32((uint32_t)(0x2u));
  /* 10485e4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485e50 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10485e53 push edx */
  push32((uint32_t)(EDX));
  /* 10485e54 call 0x1047b9a0 */
  push32(0x10485e59u); f_1047b9a0();
  /* 10485e59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485e5c push 2 */
  push32((uint32_t)(0x2u));
  /* 10485e5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485e61 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10485e64 push ecx */
  push32((uint32_t)(ECX));
  /* 10485e65 call 0x1047b9a0 */
  push32(0x10485e6au); f_1047b9a0();
  /* 10485e6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485e6d push 2 */
  push32((uint32_t)(0x2u));
  /* 10485e6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485e72 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10485e75 push eax */
  push32((uint32_t)(EAX));
  /* 10485e76 call 0x1047b9a0 */
  push32(0x10485e7bu); f_1047b9a0();
  /* 10485e7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485e7e push 2 */
  push32((uint32_t)(0x2u));
  /* 10485e80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485e83 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10485e86 push edx */
  push32((uint32_t)(EDX));
  /* 10485e87 call 0x1047b9a0 */
  push32(0x10485e8cu); f_1047b9a0();
  /* 10485e8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485e8f push 2 */
  push32((uint32_t)(0x2u));
  /* 10485e91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485e94 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10485e97 push ecx */
  push32((uint32_t)(ECX));
  /* 10485e98 call 0x1047b9a0 */
  push32(0x10485e9du); f_1047b9a0();
  /* 10485e9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485ea0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485ea2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485ea5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10485ea8 push eax */
  push32((uint32_t)(EAX));
  /* 10485ea9 call 0x1047b9a0 */
  push32(0x10485eaeu); f_1047b9a0();
  /* 10485eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485eb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485eb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485eb6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10485eb9 push edx */
  push32((uint32_t)(EDX));
  /* 10485eba call 0x1047b9a0 */
  push32(0x10485ebfu); f_1047b9a0();
  /* 10485ebf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485ec2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485ec4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485ec7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10485eca push ecx */
  push32((uint32_t)(ECX));
  /* 10485ecb call 0x1047b9a0 */
  push32(0x10485ed0u); f_1047b9a0();
  /* 10485ed0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485ed3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485ed5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485ed8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10485edb push eax */
  push32((uint32_t)(EAX));
  /* 10485edc call 0x1047b9a0 */
  push32(0x10485ee1u); f_1047b9a0();
  /* 10485ee1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485ee4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485ee6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485ee9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10485eec push edx */
  push32((uint32_t)(EDX));
  /* 10485eed call 0x1047b9a0 */
  push32(0x10485ef2u); f_1047b9a0();
  /* 10485ef2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485ef5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485ef7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485efa mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10485efd push ecx */
  push32((uint32_t)(ECX));
  /* 10485efe call 0x1047b9a0 */
  push32(0x10485f03u); f_1047b9a0();
  /* 10485f03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485f06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485f08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485f0b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10485f0e push eax */
  push32((uint32_t)(EAX));
  /* 10485f0f call 0x1047b9a0 */
  push32(0x10485f14u); f_1047b9a0();
  /* 10485f14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485f17 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485f19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485f1c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10485f1f push edx */
  push32((uint32_t)(EDX));
  /* 10485f20 call 0x1047b9a0 */
  push32(0x10485f25u); f_1047b9a0();
  /* 10485f25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485f28 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485f2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485f2d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10485f30 push ecx */
  push32((uint32_t)(ECX));
  /* 10485f31 call 0x1047b9a0 */
  push32(0x10485f36u); f_1047b9a0();
  /* 10485f36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485f39 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485f3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485f3e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10485f41 push eax */
  push32((uint32_t)(EAX));
  /* 10485f42 call 0x1047b9a0 */
  push32(0x10485f47u); f_1047b9a0();
  /* 10485f47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485f4a push 2 */
  push32((uint32_t)(0x2u));
  /* 10485f4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485f4f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10485f52 push edx */
  push32((uint32_t)(EDX));
  /* 10485f53 call 0x1047b9a0 */
  push32(0x10485f58u); f_1047b9a0();
  /* 10485f58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485f5b push 2 */
  push32((uint32_t)(0x2u));
  /* 10485f5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485f60 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10485f63 push ecx */
  push32((uint32_t)(ECX));
  /* 10485f64 call 0x1047b9a0 */
  push32(0x10485f69u); f_1047b9a0();
  /* 10485f69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485f6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10485f6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485f71 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10485f74 push eax */
  push32((uint32_t)(EAX));
  /* 10485f75 call 0x1047b9a0 */
  push32(0x10485f7au); f_1047b9a0();
  /* 10485f7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485f7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10485f7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485f82 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10485f88 push edx */
  push32((uint32_t)(EDX));
  /* 10485f89 call 0x1047b9a0 */
  push32(0x10485f8eu); f_1047b9a0();
  /* 10485f8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485f91 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485f93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485f96 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10485f9c push ecx */
  push32((uint32_t)(ECX));
  /* 10485f9d call 0x1047b9a0 */
  push32(0x10485fa2u); f_1047b9a0();
  /* 10485fa2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485fa5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485fa7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485faa mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10485fb0 push eax */
  push32((uint32_t)(EAX));
  /* 10485fb1 call 0x1047b9a0 */
  push32(0x10485fb6u); f_1047b9a0();
  /* 10485fb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485fb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485fbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485fbe mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10485fc4 push edx */
  push32((uint32_t)(EDX));
  /* 10485fc5 call 0x1047b9a0 */
  push32(0x10485fcau); f_1047b9a0();
  /* 10485fca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485fcd push 2 */
  push32((uint32_t)(0x2u));
  /* 10485fcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485fd2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10485fd8 push ecx */
  push32((uint32_t)(ECX));
  /* 10485fd9 call 0x1047b9a0 */
  push32(0x10485fdeu); f_1047b9a0();
  /* 10485fde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485fe1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485fe3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485fe6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10485fec push eax */
  push32((uint32_t)(EAX));
  /* 10485fed call 0x1047b9a0 */
  push32(0x10485ff2u); f_1047b9a0();
  /* 10485ff2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10485ff5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10485ff7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10485ffa mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10486000 push edx */
  push32((uint32_t)(EDX));
  /* 10486001 call 0x1047b9a0 */
  push32(0x10486006u); f_1047b9a0();
  /* 10486006 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486009 push 2 */
  push32((uint32_t)(0x2u));
  /* 1048600b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048600e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10486014 push ecx */
  push32((uint32_t)(ECX));
  /* 10486015 call 0x1047b9a0 */
  push32(0x1048601au); f_1047b9a0();
  /* 1048601a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048601d push 2 */
  push32((uint32_t)(0x2u));
  /* 1048601f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486022 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10486028 push eax */
  push32((uint32_t)(EAX));
  /* 10486029 call 0x1047b9a0 */
  push32(0x1048602eu); f_1047b9a0();
  /* 1048602e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486031 push 2 */
  push32((uint32_t)(0x2u));
  /* 10486033 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486036 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1048603c push edx */
  push32((uint32_t)(EDX));
  /* 1048603d call 0x1047b9a0 */
  push32(0x10486042u); f_1047b9a0();
  /* 10486042 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486045 push 2 */
  push32((uint32_t)(0x2u));
  /* 10486047 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048604a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10486050 push ecx */
  push32((uint32_t)(ECX));
  /* 10486051 call 0x1047b9a0 */
  push32(0x10486056u); f_1047b9a0();
  /* 10486056 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10486059:;
  /* 10486059 pop ebp */
  EBP = (pop32());
  /* 1048605a ret  */
  ESPCHK(0x10485d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10026060 @ 0x10486060 (678 bytes, 180 insns) */
void f_10486060(void) {
  FTRACE(0x10486060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10486060 push ebp */
  push32((uint32_t)(EBP));
  /* 10486061 mov ebp, esp */
  EBP = (ESP);
  /* 10486063 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10486066 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1048606d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1048606f mov ax, word ptr [0x1002e6e2] */
  AX = (r16((uint32_t)(0x1002e6e2)));
  /* 10486075 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10486078 cmp dword ptr [0x1002e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048607f je 0x104861da */
  if (C.zf) goto L_104861da;
  /* 10486085 push 0x1002e6b0 */
  push32((uint32_t)(0x1002e6b0u));
  /* 1048608a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1048608c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048608f push ecx */
  push32((uint32_t)(ECX));
  /* 10486090 push 1 */
  push32((uint32_t)(0x1u));
  /* 10486092 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10486097u);
  /* 10486097 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048609a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1048609d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1048609f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104860a2 push 0x1002e6b4 */
  push32((uint32_t)(0x1002e6b4u));
  /* 104860a7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 104860a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104860ac push eax */
  push32((uint32_t)(EAX));
  /* 104860ad push 1 */
  push32((uint32_t)(0x1u));
  /* 104860af call 0x104890d0 */
  call_ind(0x104890d0u, 0x104860b4u);
  /* 104860b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104860b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104860ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104860bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104860bf push 0x1002e6b8 */
  push32((uint32_t)(0x1002e6b8u));
  /* 104860c4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 104860c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104860c9 push edx */
  push32((uint32_t)(EDX));
  /* 104860ca push 1 */
  push32((uint32_t)(0x1u));
  /* 104860cc call 0x104890d0 */
  call_ind(0x104890d0u, 0x104860d1u);
  /* 104860d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104860d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104860d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104860d9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104860dc mov edx, dword ptr [0x1002e6b8] */
  EDX = (r32((uint32_t)(0x1002e6b8)));
  /* 104860e2 push edx */
  push32((uint32_t)(EDX));
  /* 104860e3 call 0x10486310 */
  push32(0x104860e8u); f_10486310();
  /* 104860e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104860eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104860ef je 0x10486149 */
  if (C.zf) goto L_10486149;
  /* 104860f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 104860f3 mov eax, dword ptr [0x1002e6b0] */
  EAX = (r32((uint32_t)(0x1002e6b0)));
  /* 104860f8 push eax */
  push32((uint32_t)(EAX));
  /* 104860f9 call 0x1047b9a0 */
  push32(0x104860feu); f_1047b9a0();
  /* 104860fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486101 push 2 */
  push32((uint32_t)(0x2u));
  /* 10486103 mov ecx, dword ptr [0x1002e6b4] */
  ECX = (r32((uint32_t)(0x1002e6b4)));
  /* 10486109 push ecx */
  push32((uint32_t)(ECX));
  /* 1048610a call 0x1047b9a0 */
  push32(0x1048610fu); f_1047b9a0();
  /* 1048610f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486112 push 2 */
  push32((uint32_t)(0x2u));
  /* 10486114 mov edx, dword ptr [0x1002e6b8] */
  EDX = (r32((uint32_t)(0x1002e6b8)));
  /* 1048611a push edx */
  push32((uint32_t)(EDX));
  /* 1048611b call 0x1047b9a0 */
  push32(0x10486120u); f_1047b9a0();
  /* 10486120 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486123 mov dword ptr [0x1002e6b0], 0 */
  w32((uint32_t)(0x1002e6b0), (0x0u));
  /* 1048612d mov dword ptr [0x1002e6b4], 0 */
  w32((uint32_t)(0x1002e6b4), (0x0u));
  /* 10486137 mov dword ptr [0x1002e6b8], 0 */
  w32((uint32_t)(0x1002e6b8), (0x0u));
  /* 10486141 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10486144 jmp 0x10486302 */
  goto L_10486302;
L_10486149:;
  /* 10486149 mov eax, dword ptr [0x1002dd88] */
  EAX = (r32((uint32_t)(0x1002dd88)));
  /* 1048614e cmp dword ptr [eax], 0x1002dd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1002dd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486154 je 0x10486190 */
  if (C.zf) goto L_10486190;
  /* 10486156 push 2 */
  push32((uint32_t)(0x2u));
  /* 10486158 mov ecx, dword ptr [0x1002dd88] */
  ECX = (r32((uint32_t)(0x1002dd88)));
  /* 1048615e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10486160 push edx */
  push32((uint32_t)(EDX));
  /* 10486161 call 0x1047b9a0 */
  push32(0x10486166u); f_1047b9a0();
  /* 10486166 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486169 push 2 */
  push32((uint32_t)(0x2u));
  /* 1048616b mov eax, dword ptr [0x1002dd88] */
  EAX = (r32((uint32_t)(0x1002dd88)));
  /* 10486170 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10486173 push ecx */
  push32((uint32_t)(ECX));
  /* 10486174 call 0x1047b9a0 */
  push32(0x10486179u); f_1047b9a0();
  /* 10486179 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048617c push 2 */
  push32((uint32_t)(0x2u));
  /* 1048617e mov edx, dword ptr [0x1002dd88] */
  EDX = (r32((uint32_t)(0x1002dd88)));
  /* 10486184 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10486187 push eax */
  push32((uint32_t)(EAX));
  /* 10486188 call 0x1047b9a0 */
  push32(0x1048618du); f_1047b9a0();
  /* 1048618d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10486190:;
  /* 10486190 mov ecx, dword ptr [0x1002dd88] */
  ECX = (r32((uint32_t)(0x1002dd88)));
  /* 10486196 mov edx, dword ptr [0x1002e6b0] */
  EDX = (r32((uint32_t)(0x1002e6b0)));
  /* 1048619c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1048619e mov eax, dword ptr [0x1002dd88] */
  EAX = (r32((uint32_t)(0x1002dd88)));
  /* 104861a3 mov ecx, dword ptr [0x1002e6b4] */
  ECX = (r32((uint32_t)(0x1002e6b4)));
  /* 104861a9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 104861ac mov edx, dword ptr [0x1002dd88] */
  EDX = (r32((uint32_t)(0x1002dd88)));
  /* 104861b2 mov eax, dword ptr [0x1002e6b8] */
  EAX = (r32((uint32_t)(0x1002e6b8)));
  /* 104861b7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104861ba mov ecx, dword ptr [0x1002dd88] */
  ECX = (r32((uint32_t)(0x1002dd88)));
  /* 104861c0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104861c2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104861c4 mov byte ptr [0x1002cea8], al */
  w8((uint32_t)(0x1002cea8), (AL));
  /* 104861c9 mov dword ptr [0x1002ceac], 1 */
  w32((uint32_t)(0x1002ceac), (0x1u));
  /* 104861d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104861d5 jmp 0x10486302 */
  goto L_10486302;
L_104861da:;
  /* 104861da push 2 */
  push32((uint32_t)(0x2u));
  /* 104861dc mov ecx, dword ptr [0x1002e6b0] */
  ECX = (r32((uint32_t)(0x1002e6b0)));
  /* 104861e2 push ecx */
  push32((uint32_t)(ECX));
  /* 104861e3 call 0x1047b9a0 */
  push32(0x104861e8u); f_1047b9a0();
  /* 104861e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104861eb push 2 */
  push32((uint32_t)(0x2u));
  /* 104861ed mov edx, dword ptr [0x1002e6b4] */
  EDX = (r32((uint32_t)(0x1002e6b4)));
  /* 104861f3 push edx */
  push32((uint32_t)(EDX));
  /* 104861f4 call 0x1047b9a0 */
  push32(0x104861f9u); f_1047b9a0();
  /* 104861f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104861fc push 2 */
  push32((uint32_t)(0x2u));
  /* 104861fe mov eax, dword ptr [0x1002e6b8] */
  EAX = (r32((uint32_t)(0x1002e6b8)));
  /* 10486203 push eax */
  push32((uint32_t)(EAX));
  /* 10486204 call 0x1047b9a0 */
  push32(0x10486209u); f_1047b9a0();
  /* 10486209 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048620c mov dword ptr [0x1002e6b0], 0 */
  w32((uint32_t)(0x1002e6b0), (0x0u));
  /* 10486216 mov dword ptr [0x1002e6b4], 0 */
  w32((uint32_t)(0x1002e6b4), (0x0u));
  /* 10486220 mov dword ptr [0x1002e6b8], 0 */
  w32((uint32_t)(0x1002e6b8), (0x0u));
  /* 1048622a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1048622f push 0x1002a07c */
  push32((uint32_t)(0x1002a07cu));
  /* 10486234 push 2 */
  push32((uint32_t)(0x2u));
  /* 10486236 push 2 */
  push32((uint32_t)(0x2u));
  /* 10486238 call 0x1047af10 */
  push32(0x1048623du); f_1047af10();
  /* 1048623d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486240 mov ecx, dword ptr [0x1002dd88] */
  ECX = (r32((uint32_t)(0x1002dd88)));
  /* 10486246 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10486248 mov edx, dword ptr [0x1002dd88] */
  EDX = (r32((uint32_t)(0x1002dd88)));
  /* 1048624e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486251 jne 0x1048625b */
  if (!C.zf) goto L_1048625b;
  /* 10486253 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10486256 jmp 0x10486302 */
  goto L_10486302;
L_1048625b:;
  /* 1048625b push 0x1002a04c */
  push32((uint32_t)(0x1002a04cu));
  /* 10486260 mov eax, dword ptr [0x1002dd88] */
  EAX = (r32((uint32_t)(0x1002dd88)));
  /* 10486265 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10486267 push ecx */
  push32((uint32_t)(ECX));
  /* 10486268 call 0x1047dec0 */
  push32(0x1048626du); f_1047dec0();
  /* 1048626d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486270 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10486275 push 0x1002a07c */
  push32((uint32_t)(0x1002a07cu));
  /* 1048627a push 2 */
  push32((uint32_t)(0x2u));
  /* 1048627c push 2 */
  push32((uint32_t)(0x2u));
  /* 1048627e call 0x1047af10 */
  push32(0x10486283u); f_1047af10();
  /* 10486283 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486286 mov edx, dword ptr [0x1002dd88] */
  EDX = (r32((uint32_t)(0x1002dd88)));
  /* 1048628c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1048628f mov eax, dword ptr [0x1002dd88] */
  EAX = (r32((uint32_t)(0x1002dd88)));
  /* 10486294 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486298 jne 0x1048629f */
  if (!C.zf) goto L_1048629f;
  /* 1048629a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1048629d jmp 0x10486302 */
  goto L_10486302;
L_1048629f:;
  /* 1048629f mov ecx, dword ptr [0x1002dd88] */
  ECX = (r32((uint32_t)(0x1002dd88)));
  /* 104862a5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104862a8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 104862ab push 0x92 */
  push32((uint32_t)(0x92u));
  /* 104862b0 push 0x1002a07c */
  push32((uint32_t)(0x1002a07cu));
  /* 104862b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 104862b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 104862b9 call 0x1047af10 */
  push32(0x104862beu); f_1047af10();
  /* 104862be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104862c1 mov ecx, dword ptr [0x1002dd88] */
  ECX = (r32((uint32_t)(0x1002dd88)));
  /* 104862c7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 104862ca mov edx, dword ptr [0x1002dd88] */
  EDX = (r32((uint32_t)(0x1002dd88)));
  /* 104862d0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104862d4 jne 0x104862db */
  if (!C.zf) goto L_104862db;
  /* 104862d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104862d9 jmp 0x10486302 */
  goto L_10486302;
L_104862db:;
  /* 104862db mov eax, dword ptr [0x1002dd88] */
  EAX = (r32((uint32_t)(0x1002dd88)));
  /* 104862e0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104862e3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 104862e6 mov edx, dword ptr [0x1002dd88] */
  EDX = (r32((uint32_t)(0x1002dd88)));
  /* 104862ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104862ee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104862f0 mov byte ptr [0x1002cea8], cl */
  w8((uint32_t)(0x1002cea8), (CL));
  /* 104862f6 mov dword ptr [0x1002ceac], 1 */
  w32((uint32_t)(0x1002ceac), (0x1u));
  /* 10486300 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10486302:;
  /* 10486302 mov esp, ebp */
  ESP = (EBP);
  /* 10486304 pop ebp */
  EBP = (pop32());
  /* 10486305 ret  */
  ESPCHK(0x10486060u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10486310 (125 bytes, 49 insns) */
void f_10486310(void) {
  FTRACE(0x10486310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10486310 push ebp */
  push32((uint32_t)(EBP));
  /* 10486311 mov ebp, esp */
  EBP = (ESP);
  /* 10486313 push ecx */
  push32((uint32_t)(ECX));
L_10486314:;
  /* 10486314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486317 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1048631a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1048631c je 0x10486389 */
  if (C.zf) goto L_10486389;
  /* 1048631e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486321 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10486324 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486327 jl 0x1048634d */
  if ((C.sf!=C.of)) goto L_1048634d;
  /* 10486329 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048632c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1048632f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486332 jg 0x1048634d */
  if ((!C.zf&&C.sf==C.of)) goto L_1048634d;
  /* 10486334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486337 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1048633a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1048633d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486340 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10486342 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486345 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486348 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1048634b jmp 0x10486387 */
  goto L_10486387;
L_1048634d:;
  /* 1048634d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486350 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10486353 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486356 jne 0x1048637e */
  if (!C.zf) goto L_1048637e;
  /* 10486358 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048635b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1048635e:;
  /* 1048635e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486361 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486364 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10486367 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10486369 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048636c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048636f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10486372 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486375 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10486378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048637a jne 0x1048635e */
  if (!C.zf) goto L_1048635e;
  /* 1048637c jmp 0x10486387 */
  goto L_10486387;
L_1048637e:;
  /* 1048637e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486381 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486384 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10486387:;
  /* 10486387 jmp 0x10486314 */
  goto L_10486314;
L_10486389:;
  /* 10486389 mov esp, ebp */
  ESP = (EBP);
  /* 1048638b pop ebp */
  EBP = (pop32());
  /* 1048638c ret  */
  ESPCHK(0x10486310u, _esp0);
  ESP += 4; return;
}

/* FUN_10026390 @ 0x10486390 (304 bytes, 85 insns) */
void f_10486390(void) {
  FTRACE(0x10486390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10486390 push ebp */
  push32((uint32_t)(EBP));
  /* 10486391 mov ebp, esp */
  EBP = (ESP);
  /* 10486393 push ecx */
  push32((uint32_t)(ECX));
  /* 10486394 cmp dword ptr [0x1002e684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048639b je 0x1048645c */
  if (C.zf) goto L_1048645c;
  /* 104863a1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 104863a3 push 0x1002a088 */
  push32((uint32_t)(0x1002a088u));
  /* 104863a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 104863aa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 104863ac push 1 */
  push32((uint32_t)(0x1u));
  /* 104863ae call 0x1047b320 */
  push32(0x104863b3u); f_1047b320();
  /* 104863b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104863b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104863b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104863bd jne 0x104863c9 */
  if (!C.zf) goto L_104863c9;
  /* 104863bf mov eax, 1 */
  EAX = (0x1u);
  /* 104863c4 jmp 0x104864bc */
  goto L_104864bc;
L_104863c9:;
  /* 104863c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104863cc push eax */
  push32((uint32_t)(EAX));
  /* 104863cd call 0x104864c0 */
  push32(0x104863d2u); f_104864c0();
  /* 104863d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104863d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104863d7 je 0x104863fd */
  if (C.zf) goto L_104863fd;
  /* 104863d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104863dc push ecx */
  push32((uint32_t)(ECX));
  /* 104863dd call 0x10486750 */
  push32(0x104863e2u); f_10486750();
  /* 104863e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104863e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 104863e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104863ea push edx */
  push32((uint32_t)(EDX));
  /* 104863eb call 0x1047b9a0 */
  push32(0x104863f0u); f_1047b9a0();
  /* 104863f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104863f3 mov eax, 1 */
  EAX = (0x1u);
  /* 104863f8 jmp 0x104864bc */
  goto L_104864bc;
L_104863fd:;
  /* 104863fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486400 mov ecx, dword ptr [0x1002dd88] */
  ECX = (r32((uint32_t)(0x1002dd88)));
  /* 10486406 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10486408 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1048640a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048640d mov ecx, dword ptr [0x1002dd88] */
  ECX = (r32((uint32_t)(0x1002dd88)));
  /* 10486413 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10486416 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10486419 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048641c mov ecx, dword ptr [0x1002dd88] */
  ECX = (r32((uint32_t)(0x1002dd88)));
  /* 10486422 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10486425 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10486428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048642b mov dword ptr [0x1002dd88], eax */
  w32((uint32_t)(0x1002dd88), (EAX));
  /* 10486430 mov ecx, dword ptr [0x1002e6bc] */
  ECX = (r32((uint32_t)(0x1002e6bc)));
  /* 10486436 push ecx */
  push32((uint32_t)(ECX));
  /* 10486437 call 0x10486750 */
  push32(0x1048643cu); f_10486750();
  /* 1048643c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048643f push 2 */
  push32((uint32_t)(0x2u));
  /* 10486441 mov edx, dword ptr [0x1002e6bc] */
  EDX = (r32((uint32_t)(0x1002e6bc)));
  /* 10486447 push edx */
  push32((uint32_t)(EDX));
  /* 10486448 call 0x1047b9a0 */
  push32(0x1048644du); f_1047b9a0();
  /* 1048644d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486450 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486453 mov dword ptr [0x1002e6bc], eax */
  w32((uint32_t)(0x1002e6bc), (EAX));
  /* 10486458 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1048645a jmp 0x104864bc */
  goto L_104864bc;
L_1048645c:;
  /* 1048645c mov ecx, dword ptr [0x1002dd88] */
  ECX = (r32((uint32_t)(0x1002dd88)));
  /* 10486462 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10486464 mov dword ptr [0x1002dd58], edx */
  w32((uint32_t)(0x1002dd58), (EDX));
  /* 1048646a mov eax, dword ptr [0x1002dd88] */
  EAX = (r32((uint32_t)(0x1002dd88)));
  /* 1048646f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10486472 mov dword ptr [0x1002dd5c], ecx */
  w32((uint32_t)(0x1002dd5c), (ECX));
  /* 10486478 mov edx, dword ptr [0x1002dd88] */
  EDX = (r32((uint32_t)(0x1002dd88)));
  /* 1048647e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10486481 mov dword ptr [0x1002dd60], eax */
  w32((uint32_t)(0x1002dd60), (EAX));
  /* 10486486 mov dword ptr [0x1002dd88], 0x1002dd58 */
  w32((uint32_t)(0x1002dd88), (0x1002dd58u));
  /* 10486490 mov ecx, dword ptr [0x1002e6bc] */
  ECX = (r32((uint32_t)(0x1002e6bc)));
  /* 10486496 push ecx */
  push32((uint32_t)(ECX));
  /* 10486497 call 0x10486750 */
  push32(0x1048649cu); f_10486750();
  /* 1048649c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048649f push 2 */
  push32((uint32_t)(0x2u));
  /* 104864a1 mov edx, dword ptr [0x1002e6bc] */
  EDX = (r32((uint32_t)(0x1002e6bc)));
  /* 104864a7 push edx */
  push32((uint32_t)(EDX));
  /* 104864a8 call 0x1047b9a0 */
  push32(0x104864adu); f_1047b9a0();
  /* 104864ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104864b0 mov dword ptr [0x1002e6bc], 0 */
  w32((uint32_t)(0x1002e6bc), (0x0u));
  /* 104864ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104864bc:;
  /* 104864bc mov esp, ebp */
  ESP = (EBP);
  /* 104864be pop ebp */
  EBP = (pop32());
  /* 104864bf ret  */
  ESPCHK(0x10486390u, _esp0);
  ESP += 4; return;
}

/* FUN_100264c0 @ 0x104864c0 (525 bytes, 200 insns) */
void f_104864c0(void) {
  FTRACE(0x104864c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104864c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104864c1 mov ebp, esp */
  EBP = (ESP);
  /* 104864c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104864c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104864cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104864cf mov ax, word ptr [0x1002e6dc] */
  AX = (r16((uint32_t)(0x1002e6dc)));
  /* 104864d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104864d8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104864dc jne 0x104864e6 */
  if (!C.zf) goto L_104864e6;
  /* 104864de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104864e1 jmp 0x104866c9 */
  goto L_104866c9;
L_104864e6:;
  /* 104864e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104864e9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104864ec push ecx */
  push32((uint32_t)(ECX));
  /* 104864ed push 0x15 */
  push32((uint32_t)(0x15u));
  /* 104864ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104864f2 push edx */
  push32((uint32_t)(EDX));
  /* 104864f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104864f5 call 0x104890d0 */
  call_ind(0x104890d0u, 0x104864fau);
  /* 104864fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104864fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10486500 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10486502 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10486505 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486508 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048650b push edx */
  push32((uint32_t)(EDX));
  /* 1048650c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1048650e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486511 push eax */
  push32((uint32_t)(EAX));
  /* 10486512 push 1 */
  push32((uint32_t)(0x1u));
  /* 10486514 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10486519u);
  /* 10486519 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048651c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1048651f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10486521 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10486524 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486527 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048652a push edx */
  push32((uint32_t)(EDX));
  /* 1048652b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1048652d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486530 push eax */
  push32((uint32_t)(EAX));
  /* 10486531 push 1 */
  push32((uint32_t)(0x1u));
  /* 10486533 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10486538u);
  /* 10486538 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048653b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1048653e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10486540 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10486543 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486546 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486549 push edx */
  push32((uint32_t)(EDX));
  /* 1048654a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1048654c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048654f push eax */
  push32((uint32_t)(EAX));
  /* 10486550 push 1 */
  push32((uint32_t)(0x1u));
  /* 10486552 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10486557u);
  /* 10486557 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048655a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1048655d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1048655f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10486562 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486565 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486568 push edx */
  push32((uint32_t)(EDX));
  /* 10486569 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1048656b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048656e push eax */
  push32((uint32_t)(EAX));
  /* 1048656f push 1 */
  push32((uint32_t)(0x1u));
  /* 10486571 call 0x104890d0 */
  call_ind(0x104890d0u, 0x10486576u);
  /* 10486576 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486579 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1048657c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1048657e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10486581 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486584 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10486587 push eax */
  push32((uint32_t)(EAX));
  /* 10486588 call 0x104866d0 */
  push32(0x1048658du); f_104866d0();
  /* 1048658d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486590 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486593 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486596 push ecx */
  push32((uint32_t)(ECX));
  /* 10486597 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10486599 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048659c push edx */
  push32((uint32_t)(EDX));
  /* 1048659d push 1 */
  push32((uint32_t)(0x1u));
  /* 1048659f call 0x104890d0 */
  call_ind(0x104890d0u, 0x104865a4u);
  /* 104865a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104865a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104865aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104865ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104865af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104865b2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104865b5 push edx */
  push32((uint32_t)(EDX));
  /* 104865b6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 104865b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104865bb push eax */
  push32((uint32_t)(EAX));
  /* 104865bc push 1 */
  push32((uint32_t)(0x1u));
  /* 104865be call 0x104890d0 */
  call_ind(0x104890d0u, 0x104865c3u);
  /* 104865c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104865c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104865c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104865cb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104865ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104865d1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104865d4 push edx */
  push32((uint32_t)(EDX));
  /* 104865d5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 104865d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104865da push eax */
  push32((uint32_t)(EAX));
  /* 104865db push 0 */
  push32((uint32_t)(0x0u));
  /* 104865dd call 0x104890d0 */
  call_ind(0x104890d0u, 0x104865e2u);
  /* 104865e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104865e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104865e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104865ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104865ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104865f0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104865f3 push edx */
  push32((uint32_t)(EDX));
  /* 104865f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104865f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104865f9 push eax */
  push32((uint32_t)(EAX));
  /* 104865fa push 0 */
  push32((uint32_t)(0x0u));
  /* 104865fc call 0x104890d0 */
  call_ind(0x104890d0u, 0x10486601u);
  /* 10486601 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486604 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10486607 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10486609 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1048660c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048660f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486612 push edx */
  push32((uint32_t)(EDX));
  /* 10486613 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10486615 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486618 push eax */
  push32((uint32_t)(EAX));
  /* 10486619 push 0 */
  push32((uint32_t)(0x0u));
  /* 1048661b call 0x104890d0 */
  call_ind(0x104890d0u, 0x10486620u);
  /* 10486620 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486623 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10486626 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10486628 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1048662b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048662e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486631 push edx */
  push32((uint32_t)(EDX));
  /* 10486632 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10486634 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486637 push eax */
  push32((uint32_t)(EAX));
  /* 10486638 push 0 */
  push32((uint32_t)(0x0u));
  /* 1048663a call 0x104890d0 */
  call_ind(0x104890d0u, 0x1048663fu);
  /* 1048663f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486642 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10486645 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10486647 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1048664a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048664d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486650 push edx */
  push32((uint32_t)(EDX));
  /* 10486651 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10486653 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486656 push eax */
  push32((uint32_t)(EAX));
  /* 10486657 push 0 */
  push32((uint32_t)(0x0u));
  /* 10486659 call 0x104890d0 */
  call_ind(0x104890d0u, 0x1048665eu);
  /* 1048665e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486661 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10486664 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10486666 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10486669 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048666c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048666f push edx */
  push32((uint32_t)(EDX));
  /* 10486670 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10486672 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486675 push eax */
  push32((uint32_t)(EAX));
  /* 10486676 push 0 */
  push32((uint32_t)(0x0u));
  /* 10486678 call 0x104890d0 */
  call_ind(0x104890d0u, 0x1048667du);
  /* 1048667d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486680 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10486683 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10486685 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10486688 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048668b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048668e push edx */
  push32((uint32_t)(EDX));
  /* 1048668f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10486691 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486694 push eax */
  push32((uint32_t)(EAX));
  /* 10486695 push 0 */
  push32((uint32_t)(0x0u));
  /* 10486697 call 0x104890d0 */
  call_ind(0x104890d0u, 0x1048669cu);
  /* 1048669c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048669f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104866a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104866a4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104866a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104866aa add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104866ad push edx */
  push32((uint32_t)(EDX));
  /* 104866ae push 0x53 */
  push32((uint32_t)(0x53u));
  /* 104866b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104866b3 push eax */
  push32((uint32_t)(EAX));
  /* 104866b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104866b6 call 0x104890d0 */
  call_ind(0x104890d0u, 0x104866bbu);
  /* 104866bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104866be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104866c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104866c3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104866c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_104866c9:;
  /* 104866c9 mov esp, ebp */
  ESP = (EBP);
  /* 104866cb pop ebp */
  EBP = (pop32());
  /* 104866cc ret  */
  ESPCHK(0x104864c0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x104866d0 (125 bytes, 49 insns) */
void f_104866d0(void) {
  FTRACE(0x104866d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104866d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104866d1 mov ebp, esp */
  EBP = (ESP);
  /* 104866d3 push ecx */
  push32((uint32_t)(ECX));
L_104866d4:;
  /* 104866d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104866d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104866da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104866dc je 0x10486749 */
  if (C.zf) goto L_10486749;
  /* 104866de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104866e1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104866e4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104866e7 jl 0x1048670d */
  if ((C.sf!=C.of)) goto L_1048670d;
  /* 104866e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104866ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104866ef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104866f2 jg 0x1048670d */
  if ((!C.zf&&C.sf==C.of)) goto L_1048670d;
  /* 104866f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104866f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104866fa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104866fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486700 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10486702 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486705 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486708 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1048670b jmp 0x10486747 */
  goto L_10486747;
L_1048670d:;
  /* 1048670d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486710 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10486713 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486716 jne 0x1048673e */
  if (!C.zf) goto L_1048673e;
  /* 10486718 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048671b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1048671e:;
  /* 1048671e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486721 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486724 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10486727 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10486729 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048672c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048672f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10486732 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486735 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10486738 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048673a jne 0x1048671e */
  if (!C.zf) goto L_1048671e;
  /* 1048673c jmp 0x10486747 */
  goto L_10486747;
L_1048673e:;
  /* 1048673e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486741 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486744 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10486747:;
  /* 10486747 jmp 0x104866d4 */
  goto L_104866d4;
L_10486749:;
  /* 10486749 mov esp, ebp */
  ESP = (EBP);
  /* 1048674b pop ebp */
  EBP = (pop32());
  /* 1048674c ret  */
  ESPCHK(0x104866d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10026750 @ 0x10486750 (147 bytes, 52 insns) */
void f_10486750(void) {
  FTRACE(0x10486750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10486750 push ebp */
  push32((uint32_t)(EBP));
  /* 10486751 mov ebp, esp */
  EBP = (ESP);
  /* 10486753 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486757 jne 0x1048675e */
  if (!C.zf) goto L_1048675e;
  /* 10486759 jmp 0x104867e1 */
  goto L_104867e1;
L_1048675e:;
  /* 1048675e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486761 cmp dword ptr [eax + 0xc], 0x1002e718 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1002e718u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486768 je 0x104867e1 */
  if (C.zf) goto L_104867e1;
  /* 1048676a push 2 */
  push32((uint32_t)(0x2u));
  /* 1048676c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048676f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10486772 push edx */
  push32((uint32_t)(EDX));
  /* 10486773 call 0x1047b9a0 */
  push32(0x10486778u); f_1047b9a0();
  /* 10486778 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048677b push 2 */
  push32((uint32_t)(0x2u));
  /* 1048677d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486780 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10486783 push ecx */
  push32((uint32_t)(ECX));
  /* 10486784 call 0x1047b9a0 */
  push32(0x10486789u); f_1047b9a0();
  /* 10486789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048678c push 2 */
  push32((uint32_t)(0x2u));
  /* 1048678e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486791 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10486794 push eax */
  push32((uint32_t)(EAX));
  /* 10486795 call 0x1047b9a0 */
  push32(0x1048679au); f_1047b9a0();
  /* 1048679a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048679d push 2 */
  push32((uint32_t)(0x2u));
  /* 1048679f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104867a2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 104867a5 push edx */
  push32((uint32_t)(EDX));
  /* 104867a6 call 0x1047b9a0 */
  push32(0x104867abu); f_1047b9a0();
  /* 104867ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104867ae push 2 */
  push32((uint32_t)(0x2u));
  /* 104867b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104867b3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 104867b6 push ecx */
  push32((uint32_t)(ECX));
  /* 104867b7 call 0x1047b9a0 */
  push32(0x104867bcu); f_1047b9a0();
  /* 104867bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104867bf push 2 */
  push32((uint32_t)(0x2u));
  /* 104867c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104867c4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 104867c7 push eax */
  push32((uint32_t)(EAX));
  /* 104867c8 call 0x1047b9a0 */
  push32(0x104867cdu); f_1047b9a0();
  /* 104867cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104867d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 104867d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104867d5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 104867d8 push edx */
  push32((uint32_t)(EDX));
  /* 104867d9 call 0x1047b9a0 */
  push32(0x104867deu); f_1047b9a0();
  /* 104867de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104867e1:;
  /* 104867e1 pop ebp */
  EBP = (pop32());
  /* 104867e2 ret  */
  ESPCHK(0x10486750u, _esp0);
  ESP += 4; return;
}

/* FUN_100267f0 @ 0x104867f0 (928 bytes, 284 insns) */
void f_104867f0(void) {
  FTRACE(0x104867f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104867f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104867f1 mov ebp, esp */
  EBP = (ESP);
  /* 104867f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104867f6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 104867fd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10486804 cmp dword ptr [0x1002e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048680b je 0x10486b41 */
  if (C.zf) goto L_10486b41;
  /* 10486811 cmp dword ptr [0x1002e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486818 jne 0x10486840 */
  if (!C.zf) goto L_10486840;
  /* 1048681a push 0x1002e690 */
  push32((uint32_t)(0x1002e690u));
  /* 1048681f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10486824 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10486826 mov ax, word ptr [0x1002e6d4] */
  AX = (r16((uint32_t)(0x1002e6d4)));
  /* 1048682c push eax */
  push32((uint32_t)(EAX));
  /* 1048682d push 0 */
  push32((uint32_t)(0x0u));
  /* 1048682f call 0x104890d0 */
  call_ind(0x104890d0u, 0x10486834u);
  /* 10486834 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486837 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10486839 je 0x10486840 */
  if (C.zf) goto L_10486840;
  /* 1048683b jmp 0x10486b02 */
  goto L_10486b02;
L_10486840:;
  /* 10486840 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10486842 push 0x1002a094 */
  push32((uint32_t)(0x1002a094u));
  /* 10486847 push 2 */
  push32((uint32_t)(0x2u));
  /* 10486849 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1048684e call 0x1047af10 */
  push32(0x10486853u); f_1047af10();
  /* 10486853 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486856 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10486859 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1048685b push 0x1002a094 */
  push32((uint32_t)(0x1002a094u));
  /* 10486860 push 2 */
  push32((uint32_t)(0x2u));
  /* 10486862 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10486867 call 0x1047af10 */
  push32(0x1048686cu); f_1047af10();
  /* 1048686c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048686f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10486872 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10486874 push 0x1002a094 */
  push32((uint32_t)(0x1002a094u));
  /* 10486879 push 2 */
  push32((uint32_t)(0x2u));
  /* 1048687b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10486880 call 0x1047af10 */
  push32(0x10486885u); f_1047af10();
  /* 10486885 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486888 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1048688b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1048688d push 0x1002a094 */
  push32((uint32_t)(0x1002a094u));
  /* 10486892 push 2 */
  push32((uint32_t)(0x2u));
  /* 10486894 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10486899 call 0x1047af10 */
  push32(0x1048689eu); f_1047af10();
  /* 1048689e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104868a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104868a4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104868a8 je 0x104868bc */
  if (C.zf) goto L_104868bc;
  /* 104868aa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104868ae je 0x104868bc */
  if (C.zf) goto L_104868bc;
  /* 104868b0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104868b4 je 0x104868bc */
  if (C.zf) goto L_104868bc;
  /* 104868b6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104868ba jne 0x104868c1 */
  if (!C.zf) goto L_104868c1;
L_104868bc:;
  /* 104868bc jmp 0x10486b02 */
  goto L_10486b02;
L_104868c1:;
  /* 104868c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104868c4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104868c7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 104868ce jmp 0x104868d9 */
  goto L_104868d9;
L_104868d0:;
  /* 104868d0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104868d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104868d6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_104868d9:;
  /* 104868d9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104868e0 jge 0x104868f5 */
  if ((C.sf==C.of)) goto L_104868f5;
  /* 104868e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104868e5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 104868e8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 104868ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104868ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104868f0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104868f3 jmp 0x104868d0 */
  goto L_104868d0;
L_104868f5:;
  /* 104868f5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 104868f8 push eax */
  push32((uint32_t)(EAX));
  /* 104868f9 mov ecx, dword ptr [0x1002e690] */
  ECX = (r32((uint32_t)(0x1002e690)));
  /* 104868ff push ecx */
  push32((uint32_t)(ECX));
  /* 10486900 call dword ptr [0x1003032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003032c))), 0x10486906u);
  /* 10486906 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10486908 jne 0x1048690f */
  if (!C.zf) goto L_1048690f;
  /* 1048690a jmp 0x10486b02 */
  goto L_10486b02;
L_1048690f:;
  /* 1048690f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486913 jbe 0x1048691a */
  if ((C.cf||C.zf)) goto L_1048691a;
  /* 10486915 jmp 0x10486b02 */
  goto L_10486b02;
L_1048691a:;
  /* 1048691a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1048691d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10486923 mov dword ptr [0x1002cea4], edx */
  w32((uint32_t)(0x1002cea4), (EDX));
  /* 10486929 cmp dword ptr [0x1002cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1002cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486930 jle 0x10486989 */
  if ((C.zf||C.sf!=C.of)) goto L_10486989;
  /* 10486932 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10486935 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10486938 jmp 0x10486943 */
  goto L_10486943;
L_1048693a:;
  /* 1048693a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1048693d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486940 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10486943:;
  /* 10486943 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10486946 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10486948 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1048694a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048694c je 0x10486989 */
  if (C.zf) goto L_10486989;
  /* 1048694e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10486951 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10486953 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10486956 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10486958 je 0x10486989 */
  if (C.zf) goto L_10486989;
  /* 1048695a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1048695d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1048695f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10486961 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10486964 jmp 0x1048696f */
  goto L_1048696f;
L_10486966:;
  /* 10486966 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10486969 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048696c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1048696f:;
  /* 1048696f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10486972 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10486974 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10486977 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048697a jg 0x10486987 */
  if ((!C.zf&&C.sf==C.of)) goto L_10486987;
  /* 1048697c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1048697f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486982 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10486985 jmp 0x10486966 */
  goto L_10486966;
L_10486987:;
  /* 10486987 jmp 0x1048693a */
  goto L_1048693a;
L_10486989:;
  /* 10486989 push 0 */
  push32((uint32_t)(0x0u));
  /* 1048698b push 0 */
  push32((uint32_t)(0x0u));
  /* 1048698d push 0 */
  push32((uint32_t)(0x0u));
  /* 1048698f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10486992 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486995 push eax */
  push32((uint32_t)(EAX));
  /* 10486996 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1048699b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1048699e push ecx */
  push32((uint32_t)(ECX));
  /* 1048699f push 1 */
  push32((uint32_t)(0x1u));
  /* 104869a1 call 0x10483140 */
  push32(0x104869a6u); f_10483140();
  /* 104869a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104869a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104869ab jne 0x104869b2 */
  if (!C.zf) goto L_104869b2;
  /* 104869ad jmp 0x10486b02 */
  goto L_10486b02;
L_104869b2:;
  /* 104869b2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104869b5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 104869ba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104869bd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104869c0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 104869c7 jmp 0x104869d2 */
  goto L_104869d2;
L_104869c9:;
  /* 104869c9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104869cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104869cf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_104869d2:;
  /* 104869d2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104869d9 jge 0x104869f0 */
  if ((C.sf==C.of)) goto L_104869f0;
  /* 104869db mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104869de mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 104869e2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 104869e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104869e8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104869eb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 104869ee jmp 0x104869c9 */
  goto L_104869c9;
L_104869f0:;
  /* 104869f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104869f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104869f4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104869f7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104869fa push edx */
  push32((uint32_t)(EDX));
  /* 104869fb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10486a00 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10486a03 push eax */
  push32((uint32_t)(EAX));
  /* 10486a04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10486a06 call 0x10489370 */
  call_ind(0x10489370u, 0x10486a0bu);
  /* 10486a0b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10486a10 jne 0x10486a17 */
  if (!C.zf) goto L_10486a17;
  /* 10486a12 jmp 0x10486b02 */
  goto L_10486b02;
L_10486a17:;
  /* 10486a17 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10486a1a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10486a1f cmp dword ptr [0x1002cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1002cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486a26 jle 0x10486a83 */
  if ((C.zf||C.sf!=C.of)) goto L_10486a83;
  /* 10486a28 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10486a2b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10486a2e jmp 0x10486a39 */
  goto L_10486a39;
L_10486a30:;
  /* 10486a30 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10486a33 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486a36 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10486a39:;
  /* 10486a39 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10486a3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10486a3e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10486a40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10486a42 je 0x10486a83 */
  if (C.zf) goto L_10486a83;
  /* 10486a44 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10486a47 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10486a49 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10486a4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10486a4e je 0x10486a83 */
  if (C.zf) goto L_10486a83;
  /* 10486a50 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10486a53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10486a55 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10486a57 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10486a5a jmp 0x10486a65 */
  goto L_10486a65;
L_10486a5c:;
  /* 10486a5c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10486a5f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486a62 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10486a65:;
  /* 10486a65 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10486a68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10486a6a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10486a6d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486a70 jg 0x10486a81 */
  if ((!C.zf&&C.sf==C.of)) goto L_10486a81;
  /* 10486a72 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10486a75 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10486a78 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10486a7f jmp 0x10486a5c */
  goto L_10486a5c;
L_10486a81:;
  /* 10486a81 jmp 0x10486a30 */
  goto L_10486a30;
L_10486a83:;
  /* 10486a83 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10486a86 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486a89 mov dword ptr [0x1002cc98], eax */
  w32((uint32_t)(0x1002cc98), (EAX));
  /* 10486a8e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10486a91 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486a94 mov dword ptr [0x1002cc9c], ecx */
  w32((uint32_t)(0x1002cc9c), (ECX));
  /* 10486a9a cmp dword ptr [0x1002e6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486aa1 je 0x10486ab4 */
  if (C.zf) goto L_10486ab4;
  /* 10486aa3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10486aa5 mov edx, dword ptr [0x1002e6c0] */
  EDX = (r32((uint32_t)(0x1002e6c0)));
  /* 10486aab push edx */
  push32((uint32_t)(EDX));
  /* 10486aac call 0x1047b9a0 */
  push32(0x10486ab1u); f_1047b9a0();
  /* 10486ab1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10486ab4:;
  /* 10486ab4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10486ab7 mov dword ptr [0x1002e6c0], eax */
  w32((uint32_t)(0x1002e6c0), (EAX));
  /* 10486abc cmp dword ptr [0x1002e6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486ac3 je 0x10486ad6 */
  if (C.zf) goto L_10486ad6;
  /* 10486ac5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10486ac7 mov ecx, dword ptr [0x1002e6c4] */
  ECX = (r32((uint32_t)(0x1002e6c4)));
  /* 10486acd push ecx */
  push32((uint32_t)(ECX));
  /* 10486ace call 0x1047b9a0 */
  push32(0x10486ad3u); f_1047b9a0();
  /* 10486ad3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10486ad6:;
  /* 10486ad6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10486ad9 mov dword ptr [0x1002e6c4], edx */
  w32((uint32_t)(0x1002e6c4), (EDX));
  /* 10486adf push 2 */
  push32((uint32_t)(0x2u));
  /* 10486ae1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10486ae4 push eax */
  push32((uint32_t)(EAX));
  /* 10486ae5 call 0x1047b9a0 */
  push32(0x10486aeau); f_1047b9a0();
  /* 10486aea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486aed push 2 */
  push32((uint32_t)(0x2u));
  /* 10486aef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10486af2 push ecx */
  push32((uint32_t)(ECX));
  /* 10486af3 call 0x1047b9a0 */
  push32(0x10486af8u); f_1047b9a0();
  /* 10486af8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486afb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10486afd jmp 0x10486b8c */
  goto L_10486b8c;
L_10486b02:;
  /* 10486b02 push 2 */
  push32((uint32_t)(0x2u));
  /* 10486b04 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10486b07 push edx */
  push32((uint32_t)(EDX));
  /* 10486b08 call 0x1047b9a0 */
  push32(0x10486b0du); f_1047b9a0();
  /* 10486b0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486b10 push 2 */
  push32((uint32_t)(0x2u));
  /* 10486b12 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10486b15 push eax */
  push32((uint32_t)(EAX));
  /* 10486b16 call 0x1047b9a0 */
  push32(0x10486b1bu); f_1047b9a0();
  /* 10486b1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486b1e push 2 */
  push32((uint32_t)(0x2u));
  /* 10486b20 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10486b23 push ecx */
  push32((uint32_t)(ECX));
  /* 10486b24 call 0x1047b9a0 */
  push32(0x10486b29u); f_1047b9a0();
  /* 10486b29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486b2c push 2 */
  push32((uint32_t)(0x2u));
  /* 10486b2e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10486b31 push edx */
  push32((uint32_t)(EDX));
  /* 10486b32 call 0x1047b9a0 */
  push32(0x10486b37u); f_1047b9a0();
  /* 10486b37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486b3a mov eax, 1 */
  EAX = (0x1u);
  /* 10486b3f jmp 0x10486b8c */
  goto L_10486b8c;
L_10486b41:;
  /* 10486b41 mov dword ptr [0x1002cc98], 0x1002cca2 */
  w32((uint32_t)(0x1002cc98), (0x1002cca2u));
  /* 10486b4b mov dword ptr [0x1002cc9c], 0x1002cca2 */
  w32((uint32_t)(0x1002cc9c), (0x1002cca2u));
  /* 10486b55 push 2 */
  push32((uint32_t)(0x2u));
  /* 10486b57 mov eax, dword ptr [0x1002e6c0] */
  EAX = (r32((uint32_t)(0x1002e6c0)));
  /* 10486b5c push eax */
  push32((uint32_t)(EAX));
  /* 10486b5d call 0x1047b9a0 */
  push32(0x10486b62u); f_1047b9a0();
  /* 10486b62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486b65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10486b67 mov ecx, dword ptr [0x1002e6c4] */
  ECX = (r32((uint32_t)(0x1002e6c4)));
  /* 10486b6d push ecx */
  push32((uint32_t)(ECX));
  /* 10486b6e call 0x1047b9a0 */
  push32(0x10486b73u); f_1047b9a0();
  /* 10486b73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486b76 mov dword ptr [0x1002e6c0], 0 */
  w32((uint32_t)(0x1002e6c0), (0x0u));
  /* 10486b80 mov dword ptr [0x1002e6c4], 0 */
  w32((uint32_t)(0x1002e6c4), (0x0u));
  /* 10486b8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10486b8c:;
  /* 10486b8c mov esp, ebp */
  ESP = (EBP);
  /* 10486b8e pop ebp */
  EBP = (pop32());
  /* 10486b8f ret  */
  ESPCHK(0x104867f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10026b90 @ 0x10486b90 (7 bytes, 5 insns) */
void f_10486b90(void) {
  FTRACE(0x10486b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10486b90 push ebp */
  push32((uint32_t)(EBP));
  /* 10486b91 mov ebp, esp */
  EBP = (ESP);
  /* 10486b93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10486b95 pop ebp */
  EBP = (pop32());
  /* 10486b96 ret  */
  ESPCHK(0x10486b90u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10486ba0 (129 bytes, 56 insns) */
void f_10486ba0(void) {
  FTRACE(0x10486ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10486ba0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10486ba4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10486ba8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10486bae jne 0x10486bec */
  if (!C.zf) goto L_10486bec;
L_10486bb0:;
  /* 10486bb0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10486bb2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10486bb4 jne 0x10486be4 */
  if (!C.zf) goto L_10486be4;
  /* 10486bb6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10486bb8 je 0x10486be0 */
  if (C.zf) goto L_10486be0;
  /* 10486bba cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10486bbd jne 0x10486be4 */
  if (!C.zf) goto L_10486be4;
  /* 10486bbf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10486bc1 je 0x10486be0 */
  if (C.zf) goto L_10486be0;
  /* 10486bc3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10486bc6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10486bc9 jne 0x10486be4 */
  if (!C.zf) goto L_10486be4;
  /* 10486bcb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10486bcd je 0x10486be0 */
  if (C.zf) goto L_10486be0;
  /* 10486bcf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10486bd2 jne 0x10486be4 */
  if (!C.zf) goto L_10486be4;
  /* 10486bd4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486bd7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486bda or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10486bdc jne 0x10486bb0 */
  if (!C.zf) goto L_10486bb0;
  /* 10486bde mov edi, edi */
  EDI = (EDI);
L_10486be0:;
  /* 10486be0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10486be2 ret  */
  ESPCHK(0x10486ba0u, _esp0);
  ESP += 4; return;
  /* 10486be3 nop  */
  /* nop */
L_10486be4:;
  /* 10486be4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10486be6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10486be8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10486be9 ret  */
  ESPCHK(0x10486ba0u, _esp0);
  ESP += 4; return;
  /* 10486bea mov edi, edi */
  EDI = (EDI);
L_10486bec:;
  /* 10486bec test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10486bf2 je 0x10486c08 */
  if (C.zf) goto L_10486c08;
  /* 10486bf4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10486bf6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10486bf7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10486bf9 jne 0x10486be4 */
  if (!C.zf) goto L_10486be4;
  /* 10486bfb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10486bfc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10486bfe je 0x10486be0 */
  if (C.zf) goto L_10486be0;
  /* 10486c00 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10486c06 je 0x10486bb0 */
  if (C.zf) goto L_10486bb0;
L_10486c08:;
  /* 10486c08 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10486c0b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486c0e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10486c10 jne 0x10486be4 */
  if (!C.zf) goto L_10486be4;
  /* 10486c12 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10486c14 je 0x10486be0 */
  if (C.zf) goto L_10486be0;
  /* 10486c16 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10486c19 jne 0x10486be4 */
  if (!C.zf) goto L_10486be4;
  /* 10486c1b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10486c1d je 0x10486be0 */
  if (C.zf) goto L_10486be0;
  /* 10486c1f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486c22 jmp 0x10486bb0 */
  goto L_10486bb0;
}

/* FUN_10026c30 @ 0x10486c30 (62 bytes, 35 insns) */
void f_10486c30(void) {
  FTRACE(0x10486c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10486c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10486c31 mov ebp, esp */
  EBP = (ESP);
  /* 10486c33 push esi */
  push32((uint32_t)(ESI));
  /* 10486c34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10486c36 push eax */
  push32((uint32_t)(EAX));
  /* 10486c37 push eax */
  push32((uint32_t)(EAX));
  /* 10486c38 push eax */
  push32((uint32_t)(EAX));
  /* 10486c39 push eax */
  push32((uint32_t)(EAX));
  /* 10486c3a push eax */
  push32((uint32_t)(EAX));
  /* 10486c3b push eax */
  push32((uint32_t)(EAX));
  /* 10486c3c push eax */
  push32((uint32_t)(EAX));
  /* 10486c3d push eax */
  push32((uint32_t)(EAX));
  /* 10486c3e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10486c41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10486c44:;
  /* 10486c44 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10486c46 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10486c48 je 0x10486c51 */
  if (C.zf) goto L_10486c51;
  /* 10486c4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10486c4b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10486c4b");
  /* 10486c4f jmp 0x10486c44 */
  goto L_10486c44;
L_10486c51:;
  /* 10486c51 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10486c54 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10486c57 nop  */
  /* nop */
L_10486c58:;
  /* 10486c58 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10486c59 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10486c5b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10486c5d je 0x10486c66 */
  if (C.zf) goto L_10486c66;
  /* 10486c5f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10486c60 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10486c60");
  /* 10486c64 jae 0x10486c58 */
  if (!C.cf) goto L_10486c58;
L_10486c66:;
  /* 10486c66 mov eax, ecx */
  EAX = (ECX);
  /* 10486c68 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486c6b pop esi */
  ESI = (pop32());
  /* 10486c6c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10486c6d ret  */
  ESPCHK(0x10486c30u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10486c70 (56 bytes, 31 insns) */
void f_10486c70(void) {
  FTRACE(0x10486c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10486c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10486c71 mov ebp, esp */
  EBP = (ESP);
  /* 10486c73 push edi */
  push32((uint32_t)(EDI));
  /* 10486c74 push esi */
  push32((uint32_t)(ESI));
  /* 10486c75 push ebx */
  push32((uint32_t)(EBX));
  /* 10486c76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10486c79 jecxz 0x10486ca1 */
  x86_unimpl("jecxz @ 0x10486c79");
  /* 10486c7b mov ebx, ecx */
  EBX = (ECX);
  /* 10486c7d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10486c80 mov esi, edi */
  ESI = (EDI);
  /* 10486c82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10486c84 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10486c86 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10486c88 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486c8a mov edi, esi */
  EDI = (ESI);
  /* 10486c8c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10486c8f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10486c91 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10486c94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10486c96 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10486c99 ja 0x10486c9f */
  if ((!C.cf&&!C.zf)) goto L_10486c9f;
  /* 10486c9b je 0x10486ca1 */
  if (C.zf) goto L_10486ca1;
  /* 10486c9d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10486c9e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10486c9f:;
  /* 10486c9f not ecx */
  ECX = (~(ECX));
L_10486ca1:;
  /* 10486ca1 mov eax, ecx */
  EAX = (ECX);
  /* 10486ca3 pop ebx */
  EBX = (pop32());
  /* 10486ca4 pop esi */
  ESI = (pop32());
  /* 10486ca5 pop edi */
  EDI = (pop32());
  /* 10486ca6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10486ca7 ret  */
  ESPCHK(0x10486c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10026cb0 @ 0x10486cb0 (58 bytes, 32 insns) */
void f_10486cb0(void) {
  FTRACE(0x10486cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10486cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10486cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10486cb3 push esi */
  push32((uint32_t)(ESI));
  /* 10486cb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10486cb6 push eax */
  push32((uint32_t)(EAX));
  /* 10486cb7 push eax */
  push32((uint32_t)(EAX));
  /* 10486cb8 push eax */
  push32((uint32_t)(EAX));
  /* 10486cb9 push eax */
  push32((uint32_t)(EAX));
  /* 10486cba push eax */
  push32((uint32_t)(EAX));
  /* 10486cbb push eax */
  push32((uint32_t)(EAX));
  /* 10486cbc push eax */
  push32((uint32_t)(EAX));
  /* 10486cbd push eax */
  push32((uint32_t)(EAX));
  /* 10486cbe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10486cc1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10486cc4:;
  /* 10486cc4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10486cc6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10486cc8 je 0x10486cd1 */
  if (C.zf) goto L_10486cd1;
  /* 10486cca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10486ccb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10486ccb");
  /* 10486ccf jmp 0x10486cc4 */
  goto L_10486cc4;
L_10486cd1:;
  /* 10486cd1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10486cd4:;
  /* 10486cd4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10486cd6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10486cd8 je 0x10486ce4 */
  if (C.zf) goto L_10486ce4;
  /* 10486cda inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10486cdb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10486cdb");
  /* 10486cdf jae 0x10486cd4 */
  if (!C.cf) goto L_10486cd4;
  /* 10486ce1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10486ce4:;
  /* 10486ce4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486ce7 pop esi */
  ESI = (pop32());
  /* 10486ce8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10486ce9 ret  */
  ESPCHK(0x10486cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10026cf0 @ 0x10486cf0 (512 bytes, 147 insns) */
void f_10486cf0(void) {
  FTRACE(0x10486cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10486cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10486cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10486cf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10486cf6 cmp dword ptr [0x1002e70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486cfd jne 0x10486d22 */
  if (!C.zf) goto L_10486d22;
  /* 10486cff call 0x104877c0 */
  push32(0x10486d04u); f_104877c0();
  /* 10486d04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10486d06 je 0x10486d12 */
  if (C.zf) goto L_10486d12;
  /* 10486d08 mov eax, dword ptr [0x1003025c] */
  EAX = (r32((uint32_t)(0x1003025c)));
  /* 10486d0d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10486d10 jmp 0x10486d19 */
  goto L_10486d19;
L_10486d12:;
  /* 10486d12 mov dword ptr [ebp - 8], 0x1000f810 */
  w32((uint32_t)(EBP + -0x8), (0x1000f810u));
L_10486d19:;
  /* 10486d19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10486d1c mov dword ptr [0x1002e70c], ecx */
  w32((uint32_t)(0x1002e70c), (ECX));
L_10486d22:;
  /* 10486d22 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486d26 jne 0x10486d32 */
  if (!C.zf) goto L_10486d32;
  /* 10486d28 call 0x10487610 */
  push32(0x10486d2du); f_10487610();
  /* 10486d2d jmp 0x10486dfe */
  goto L_10486dfe;
L_10486d32:;
  /* 10486d32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486d35 mov dword ptr [0x1002e6fc], edx */
  w32((uint32_t)(0x1002e6fc), (EDX));
  /* 10486d3b cmp dword ptr [0x1002e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486d42 je 0x10486d64 */
  if (C.zf) goto L_10486d64;
  /* 10486d44 mov eax, dword ptr [0x1002e6fc] */
  EAX = (r32((uint32_t)(0x1002e6fc)));
  /* 10486d49 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10486d4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10486d4e je 0x10486d64 */
  if (C.zf) goto L_10486d64;
  /* 10486d50 push 0x1002e6fc */
  push32((uint32_t)(0x1002e6fcu));
  /* 10486d55 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10486d57 push 0x1002da90 */
  push32((uint32_t)(0x1002da90u));
  /* 10486d5c call 0x10486ef0 */
  push32(0x10486d61u); f_10486ef0();
  /* 10486d61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10486d64:;
  /* 10486d64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486d67 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486d6a mov dword ptr [0x1002e700], edx */
  w32((uint32_t)(0x1002e700), (EDX));
  /* 10486d70 cmp dword ptr [0x1002e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486d77 je 0x10486d99 */
  if (C.zf) goto L_10486d99;
  /* 10486d79 mov eax, dword ptr [0x1002e700] */
  EAX = (r32((uint32_t)(0x1002e700)));
  /* 10486d7e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10486d81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10486d83 je 0x10486d99 */
  if (C.zf) goto L_10486d99;
  /* 10486d85 push 0x1002e700 */
  push32((uint32_t)(0x1002e700u));
  /* 10486d8a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10486d8c push 0x1002d9d8 */
  push32((uint32_t)(0x1002d9d8u));
  /* 10486d91 call 0x10486ef0 */
  push32(0x10486d96u); f_10486ef0();
  /* 10486d96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10486d99:;
  /* 10486d99 mov dword ptr [0x1002e704], 0 */
  w32((uint32_t)(0x1002e704), (0x0u));
  /* 10486da3 cmp dword ptr [0x1002e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486daa je 0x10486ddd */
  if (C.zf) goto L_10486ddd;
  /* 10486dac mov edx, dword ptr [0x1002e6fc] */
  EDX = (r32((uint32_t)(0x1002e6fc)));
  /* 10486db2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10486db5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10486db7 je 0x10486ddd */
  if (C.zf) goto L_10486ddd;
  /* 10486db9 cmp dword ptr [0x1002e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486dc0 je 0x10486dd6 */
  if (C.zf) goto L_10486dd6;
  /* 10486dc2 mov ecx, dword ptr [0x1002e700] */
  ECX = (r32((uint32_t)(0x1002e700)));
  /* 10486dc8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10486dcb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10486dcd je 0x10486dd6 */
  if (C.zf) goto L_10486dd6;
  /* 10486dcf call 0x10486f80 */
  push32(0x10486dd4u); f_10486f80();
  /* 10486dd4 jmp 0x10486ddb */
  goto L_10486ddb;
L_10486dd6:;
  /* 10486dd6 call 0x10487370 */
  push32(0x10486ddbu); f_10487370();
L_10486ddb:;
  /* 10486ddb jmp 0x10486dfe */
  goto L_10486dfe;
L_10486ddd:;
  /* 10486ddd cmp dword ptr [0x1002e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486de4 je 0x10486df9 */
  if (C.zf) goto L_10486df9;
  /* 10486de6 mov eax, dword ptr [0x1002e700] */
  EAX = (r32((uint32_t)(0x1002e700)));
  /* 10486deb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10486dee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10486df0 je 0x10486df9 */
  if (C.zf) goto L_10486df9;
  /* 10486df2 call 0x10487510 */
  push32(0x10486df7u); f_10487510();
  /* 10486df7 jmp 0x10486dfe */
  goto L_10486dfe;
L_10486df9:;
  /* 10486df9 call 0x10487610 */
  push32(0x10486dfeu); f_10487610();
L_10486dfe:;
  /* 10486dfe cmp dword ptr [0x1002e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486e05 jne 0x10486e0e */
  if (!C.zf) goto L_10486e0e;
  /* 10486e07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10486e09 jmp 0x10486eec */
  goto L_10486eec;
L_10486e0e:;
  /* 10486e0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486e11 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486e17 push edx */
  push32((uint32_t)(EDX));
  /* 10486e18 call 0x10487640 */
  push32(0x10486e1du); f_10487640();
  /* 10486e1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486e20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10486e23 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486e27 je 0x10486e3c */
  if (C.zf) goto L_10486e3c;
  /* 10486e29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486e2c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10486e31 push eax */
  push32((uint32_t)(EAX));
  /* 10486e32 call dword ptr [0x10030260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030260))), 0x10486e38u);
  /* 10486e38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10486e3a jne 0x10486e43 */
  if (!C.zf) goto L_10486e43;
L_10486e3c:;
  /* 10486e3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10486e3e jmp 0x10486eec */
  goto L_10486eec;
L_10486e43:;
  /* 10486e43 push 1 */
  push32((uint32_t)(0x1u));
  /* 10486e45 mov ecx, dword ptr [0x1002e6ec] */
  ECX = (r32((uint32_t)(0x1002e6ec)));
  /* 10486e4b push ecx */
  push32((uint32_t)(ECX));
  /* 10486e4c call dword ptr [0x100302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302e4))), 0x10486e52u);
  /* 10486e52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10486e54 jne 0x10486e5d */
  if (!C.zf) goto L_10486e5d;
  /* 10486e56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10486e58 jmp 0x10486eec */
  goto L_10486eec;
L_10486e5d:;
  /* 10486e5d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486e61 je 0x10486e88 */
  if (C.zf) goto L_10486e88;
  /* 10486e63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10486e66 mov ax, word ptr [0x1002e6ec] */
  AX = (r16((uint32_t)(0x1002e6ec)));
  /* 10486e6c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10486e6f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10486e72 mov dx, word ptr [0x1002e708] */
  DX = (r16((uint32_t)(0x1002e708)));
  /* 10486e79 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10486e7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10486e80 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10486e84 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10486e88:;
  /* 10486e88 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486e8c je 0x10486ee7 */
  if (C.zf) goto L_10486ee7;
  /* 10486e8e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10486e90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10486e93 push edx */
  push32((uint32_t)(EDX));
  /* 10486e94 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10486e99 mov eax, dword ptr [0x1002e6ec] */
  EAX = (r32((uint32_t)(0x1002e6ec)));
  /* 10486e9e push eax */
  push32((uint32_t)(EAX));
  /* 10486e9f call dword ptr [0x1002e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002e70c))), 0x10486ea5u);
  /* 10486ea5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10486ea7 jne 0x10486ead */
  if (!C.zf) goto L_10486ead;
  /* 10486ea9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10486eab jmp 0x10486eec */
  goto L_10486eec;
L_10486ead:;
  /* 10486ead push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10486eaf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10486eb2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486eb5 push ecx */
  push32((uint32_t)(ECX));
  /* 10486eb6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10486ebb mov edx, dword ptr [0x1002e708] */
  EDX = (r32((uint32_t)(0x1002e708)));
  /* 10486ec1 push edx */
  push32((uint32_t)(EDX));
  /* 10486ec2 call dword ptr [0x1002e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002e70c))), 0x10486ec8u);
  /* 10486ec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10486eca jne 0x10486ed0 */
  if (!C.zf) goto L_10486ed0;
  /* 10486ecc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10486ece jmp 0x10486eec */
  goto L_10486eec;
L_10486ed0:;
  /* 10486ed0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10486ed2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10486ed5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486eda push eax */
  push32((uint32_t)(EAX));
  /* 10486edb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486ede push ecx */
  push32((uint32_t)(ECX));
  /* 10486edf call 0x1047da50 */
  push32(0x10486ee4u); f_1047da50();
  /* 10486ee4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10486ee7:;
  /* 10486ee7 mov eax, 1 */
  EAX = (0x1u);
L_10486eec:;
  /* 10486eec mov esp, ebp */
  ESP = (EBP);
  /* 10486eee pop ebp */
  EBP = (pop32());
  /* 10486eef ret  */
  ESPCHK(0x10486cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10026ef0 @ 0x10486ef0 (130 bytes, 47 insns) */
void f_10486ef0(void) {
  FTRACE(0x10486ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10486ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10486ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10486ef3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10486ef6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10486efd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10486f04:;
  /* 10486f04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10486f07 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486f0a jg 0x10486f6e */
  if ((!C.zf&&C.sf==C.of)) goto L_10486f6e;
  /* 10486f0c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486f10 je 0x10486f6e */
  if (C.zf) goto L_10486f6e;
  /* 10486f12 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10486f15 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486f18 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10486f19 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10486f1b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10486f1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10486f20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486f23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486f26 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10486f29 push eax */
  push32((uint32_t)(EAX));
  /* 10486f2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10486f2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10486f2f push edx */
  push32((uint32_t)(EDX));
  /* 10486f30 call 0x104895e0 */
  call_ind(0x104895e0u, 0x10486f35u);
  /* 10486f35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486f38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10486f3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486f3f jne 0x10486f52 */
  if (!C.zf) goto L_10486f52;
  /* 10486f41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486f44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10486f47 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10486f4b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10486f4e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10486f50 jmp 0x10486f6c */
  goto L_10486f6c;
L_10486f52:;
  /* 10486f52 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486f56 jge 0x10486f63 */
  if ((C.sf==C.of)) goto L_10486f63;
  /* 10486f58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486f5b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10486f5e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10486f61 jmp 0x10486f6c */
  goto L_10486f6c;
L_10486f63:;
  /* 10486f63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486f66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10486f69 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10486f6c:;
  /* 10486f6c jmp 0x10486f04 */
  goto L_10486f04;
L_10486f6e:;
  /* 10486f6e mov esp, ebp */
  ESP = (EBP);
  /* 10486f70 pop ebp */
  EBP = (pop32());
  /* 10486f71 ret  */
  ESPCHK(0x10486ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10026f80 @ 0x10486f80 (186 bytes, 50 insns) */
void f_10486f80(void) {
  FTRACE(0x10486f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10486f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10486f81 mov ebp, esp */
  EBP = (ESP);
  /* 10486f83 push ecx */
  push32((uint32_t)(ECX));
  /* 10486f84 mov eax, dword ptr [0x1002e6fc] */
  EAX = (r32((uint32_t)(0x1002e6fc)));
  /* 10486f89 push eax */
  push32((uint32_t)(EAX));
  /* 10486f8a call 0x1047dd40 */
  push32(0x10486f8fu); f_1047dd40();
  /* 10486f8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486f92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10486f94 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486f97 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10486f9a mov dword ptr [0x1002e6f8], ecx */
  w32((uint32_t)(0x1002e6f8), (ECX));
  /* 10486fa0 mov edx, dword ptr [0x1002e700] */
  EDX = (r32((uint32_t)(0x1002e700)));
  /* 10486fa6 push edx */
  push32((uint32_t)(EDX));
  /* 10486fa7 call 0x1047dd40 */
  push32(0x10486facu); f_1047dd40();
  /* 10486fac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486faf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10486fb1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486fb4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10486fb7 mov dword ptr [0x1002e6f0], ecx */
  w32((uint32_t)(0x1002e6f0), (ECX));
  /* 10486fbd mov dword ptr [0x1002e6ec], 0 */
  w32((uint32_t)(0x1002e6ec), (0x0u));
  /* 10486fc7 cmp dword ptr [0x1002e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10486fce je 0x10486fd9 */
  if (C.zf) goto L_10486fd9;
  /* 10486fd0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10486fd7 jmp 0x10486feb */
  goto L_10486feb;
L_10486fd9:;
  /* 10486fd9 mov edx, dword ptr [0x1002e6fc] */
  EDX = (r32((uint32_t)(0x1002e6fc)));
  /* 10486fdf push edx */
  push32((uint32_t)(EDX));
  /* 10486fe0 call 0x10487a20 */
  push32(0x10486fe5u); f_10487a20();
  /* 10486fe5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10486fe8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10486feb:;
  /* 10486feb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10486fee mov dword ptr [0x1002e6f4], eax */
  w32((uint32_t)(0x1002e6f4), (EAX));
  /* 10486ff3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10486ff5 push 0x1000f040 */
  push32((uint32_t)(0x1000f040u));
  /* 10486ffa call dword ptr [0x10030264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030264))), 0x10487000u);
  /* 10487000 mov ecx, dword ptr [0x1002e704] */
  ECX = (r32((uint32_t)(0x1002e704)));
  /* 10487006 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1048700c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1048700e je 0x1048702c */
  if (C.zf) goto L_1048702c;
  /* 10487010 mov edx, dword ptr [0x1002e704] */
  EDX = (r32((uint32_t)(0x1002e704)));
  /* 10487016 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1048701c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1048701e je 0x1048702c */
  if (C.zf) goto L_1048702c;
  /* 10487020 mov eax, dword ptr [0x1002e704] */
  EAX = (r32((uint32_t)(0x1002e704)));
  /* 10487025 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10487028 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048702a jne 0x10487036 */
  if (!C.zf) goto L_10487036;
L_1048702c:;
  /* 1048702c mov dword ptr [0x1002e704], 0 */
  w32((uint32_t)(0x1002e704), (0x0u));
L_10487036:;
  /* 10487036 mov esp, ebp */
  ESP = (EBP);
  /* 10487038 pop ebp */
  EBP = (pop32());
  /* 10487039 ret  */
  ESPCHK(0x10486f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10027040 @ 0x10487040 (804 bytes, 220 insns) */
void f_10487040(void) {
  FTRACE(0x10487040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10487040 push ebp */
  push32((uint32_t)(EBP));
  /* 10487041 mov ebp, esp */
  EBP = (ESP);
  /* 10487043 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10487046 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487049 push eax */
  push32((uint32_t)(EAX));
  /* 1048704a call 0x104879a0 */
  push32(0x1048704fu); f_104879a0();
  /* 1048704f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487052 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10487055 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10487057 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1048705a push ecx */
  push32((uint32_t)(ECX));
  /* 1048705b mov edx, dword ptr [0x1002e6f0] */
  EDX = (r32((uint32_t)(0x1002e6f0)));
  /* 10487061 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10487063 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10487065 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1048706b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487071 push edx */
  push32((uint32_t)(EDX));
  /* 10487072 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10487075 push eax */
  push32((uint32_t)(EAX));
  /* 10487076 call dword ptr [0x1002e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002e70c))), 0x1048707cu);
  /* 1048707c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048707e jne 0x10487094 */
  if (!C.zf) goto L_10487094;
  /* 10487080 mov dword ptr [0x1002e704], 0 */
  w32((uint32_t)(0x1002e704), (0x0u));
  /* 1048708a mov eax, 1 */
  EAX = (0x1u);
  /* 1048708f jmp 0x1048735e */
  goto L_1048735e;
L_10487094:;
  /* 10487094 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10487097 push ecx */
  push32((uint32_t)(ECX));
  /* 10487098 mov edx, dword ptr [0x1002e700] */
  EDX = (r32((uint32_t)(0x1002e700)));
  /* 1048709e push edx */
  push32((uint32_t)(EDX));
  /* 1048709f call 0x104895e0 */
  call_ind(0x104895e0u, 0x104870a4u);
  /* 104870a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104870a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104870a9 jne 0x104871cf */
  if (!C.zf) goto L_104871cf;
  /* 104870af push 0x78 */
  push32((uint32_t)(0x78u));
  /* 104870b1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 104870b4 push eax */
  push32((uint32_t)(EAX));
  /* 104870b5 mov ecx, dword ptr [0x1002e6f8] */
  ECX = (r32((uint32_t)(0x1002e6f8)));
  /* 104870bb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104870bd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104870bf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 104870c5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104870cb push ecx */
  push32((uint32_t)(ECX));
  /* 104870cc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104870cf push edx */
  push32((uint32_t)(EDX));
  /* 104870d0 call dword ptr [0x1002e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002e70c))), 0x104870d6u);
  /* 104870d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104870d8 jne 0x104870ee */
  if (!C.zf) goto L_104870ee;
  /* 104870da mov dword ptr [0x1002e704], 0 */
  w32((uint32_t)(0x1002e704), (0x0u));
  /* 104870e4 mov eax, 1 */
  EAX = (0x1u);
  /* 104870e9 jmp 0x1048735e */
  goto L_1048735e;
L_104870ee:;
  /* 104870ee lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 104870f1 push eax */
  push32((uint32_t)(EAX));
  /* 104870f2 mov ecx, dword ptr [0x1002e6fc] */
  ECX = (r32((uint32_t)(0x1002e6fc)));
  /* 104870f8 push ecx */
  push32((uint32_t)(ECX));
  /* 104870f9 call 0x104895e0 */
  call_ind(0x104895e0u, 0x104870feu);
  /* 104870fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487101 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10487103 jne 0x10487130 */
  if (!C.zf) goto L_10487130;
  /* 10487105 mov edx, dword ptr [0x1002e704] */
  EDX = (r32((uint32_t)(0x1002e704)));
  /* 1048710b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10487111 mov dword ptr [0x1002e704], edx */
  w32((uint32_t)(0x1002e704), (EDX));
  /* 10487117 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1048711a mov dword ptr [0x1002e708], eax */
  w32((uint32_t)(0x1002e708), (EAX));
  /* 1048711f mov ecx, dword ptr [0x1002e708] */
  ECX = (r32((uint32_t)(0x1002e708)));
  /* 10487125 mov dword ptr [0x1002e6ec], ecx */
  w32((uint32_t)(0x1002e6ec), (ECX));
  /* 1048712b jmp 0x104871cf */
  goto L_104871cf;
L_10487130:;
  /* 10487130 mov edx, dword ptr [0x1002e704] */
  EDX = (r32((uint32_t)(0x1002e704)));
  /* 10487136 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10487139 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1048713b jne 0x104871cf */
  if (!C.zf) goto L_104871cf;
  /* 10487141 cmp dword ptr [0x1002e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487148 je 0x1048719d */
  if (C.zf) goto L_1048719d;
  /* 1048714a mov eax, dword ptr [0x1002e6f4] */
  EAX = (r32((uint32_t)(0x1002e6f4)));
  /* 1048714f push eax */
  push32((uint32_t)(EAX));
  /* 10487150 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10487153 push ecx */
  push32((uint32_t)(ECX));
  /* 10487154 mov edx, dword ptr [0x1002e6fc] */
  EDX = (r32((uint32_t)(0x1002e6fc)));
  /* 1048715a push edx */
  push32((uint32_t)(EDX));
  /* 1048715b call 0x104896b0 */
  call_ind(0x104896b0u, 0x10487160u);
  /* 10487160 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10487165 jne 0x1048719d */
  if (!C.zf) goto L_1048719d;
  /* 10487167 mov eax, dword ptr [0x1002e704] */
  EAX = (r32((uint32_t)(0x1002e704)));
  /* 1048716c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1048716e mov dword ptr [0x1002e704], eax */
  w32((uint32_t)(0x1002e704), (EAX));
  /* 10487173 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10487176 mov dword ptr [0x1002e708], ecx */
  w32((uint32_t)(0x1002e708), (ECX));
  /* 1048717c mov edx, dword ptr [0x1002e6fc] */
  EDX = (r32((uint32_t)(0x1002e6fc)));
  /* 10487182 push edx */
  push32((uint32_t)(EDX));
  /* 10487183 call 0x1047dd40 */
  push32(0x10487188u); f_1047dd40();
  /* 10487188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048718b cmp eax, dword ptr [0x1002e6f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1002e6f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487191 jne 0x1048719b */
  if (!C.zf) goto L_1048719b;
  /* 10487193 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10487196 mov dword ptr [0x1002e6ec], eax */
  w32((uint32_t)(0x1002e6ec), (EAX));
L_1048719b:;
  /* 1048719b jmp 0x104871cf */
  goto L_104871cf;
L_1048719d:;
  /* 1048719d mov ecx, dword ptr [0x1002e704] */
  ECX = (r32((uint32_t)(0x1002e704)));
  /* 104871a3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104871a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104871a8 jne 0x104871cf */
  if (!C.zf) goto L_104871cf;
  /* 104871aa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104871ad push edx */
  push32((uint32_t)(EDX));
  /* 104871ae call 0x104876e0 */
  push32(0x104871b3u); f_104876e0();
  /* 104871b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104871b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104871b8 je 0x104871cf */
  if (C.zf) goto L_104871cf;
  /* 104871ba mov eax, dword ptr [0x1002e704] */
  EAX = (r32((uint32_t)(0x1002e704)));
  /* 104871bf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 104871c1 mov dword ptr [0x1002e704], eax */
  w32((uint32_t)(0x1002e704), (EAX));
  /* 104871c6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104871c9 mov dword ptr [0x1002e708], ecx */
  w32((uint32_t)(0x1002e708), (ECX));
L_104871cf:;
  /* 104871cf mov edx, dword ptr [0x1002e704] */
  EDX = (r32((uint32_t)(0x1002e704)));
  /* 104871d5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 104871db cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104871e1 je 0x10487351 */
  if (C.zf) goto L_10487351;
  /* 104871e7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 104871e9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 104871ec push eax */
  push32((uint32_t)(EAX));
  /* 104871ed mov ecx, dword ptr [0x1002e6f8] */
  ECX = (r32((uint32_t)(0x1002e6f8)));
  /* 104871f3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104871f5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104871f7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 104871fd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487203 push ecx */
  push32((uint32_t)(ECX));
  /* 10487204 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10487207 push edx */
  push32((uint32_t)(EDX));
  /* 10487208 call dword ptr [0x1002e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002e70c))), 0x1048720eu);
  /* 1048720e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10487210 jne 0x10487226 */
  if (!C.zf) goto L_10487226;
  /* 10487212 mov dword ptr [0x1002e704], 0 */
  w32((uint32_t)(0x1002e704), (0x0u));
  /* 1048721c mov eax, 1 */
  EAX = (0x1u);
  /* 10487221 jmp 0x1048735e */
  goto L_1048735e;
L_10487226:;
  /* 10487226 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10487229 push eax */
  push32((uint32_t)(EAX));
  /* 1048722a mov ecx, dword ptr [0x1002e6fc] */
  ECX = (r32((uint32_t)(0x1002e6fc)));
  /* 10487230 push ecx */
  push32((uint32_t)(ECX));
  /* 10487231 call 0x104895e0 */
  call_ind(0x104895e0u, 0x10487236u);
  /* 10487236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487239 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048723b jne 0x104872f0 */
  if (!C.zf) goto L_104872f0;
  /* 10487241 mov edx, dword ptr [0x1002e704] */
  EDX = (r32((uint32_t)(0x1002e704)));
  /* 10487247 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1048724a mov dword ptr [0x1002e704], edx */
  w32((uint32_t)(0x1002e704), (EDX));
  /* 10487250 cmp dword ptr [0x1002e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487257 je 0x1048727a */
  if (C.zf) goto L_1048727a;
  /* 10487259 mov eax, dword ptr [0x1002e704] */
  EAX = (r32((uint32_t)(0x1002e704)));
  /* 1048725e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10487261 mov dword ptr [0x1002e704], eax */
  w32((uint32_t)(0x1002e704), (EAX));
  /* 10487266 cmp dword ptr [0x1002e6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048726d jne 0x10487278 */
  if (!C.zf) goto L_10487278;
  /* 1048726f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10487272 mov dword ptr [0x1002e6ec], ecx */
  w32((uint32_t)(0x1002e6ec), (ECX));
L_10487278:;
  /* 10487278 jmp 0x104872ee */
  goto L_104872ee;
L_1048727a:;
  /* 1048727a cmp dword ptr [0x1002e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487281 je 0x104872cf */
  if (C.zf) goto L_104872cf;
  /* 10487283 mov edx, dword ptr [0x1002e6fc] */
  EDX = (r32((uint32_t)(0x1002e6fc)));
  /* 10487289 push edx */
  push32((uint32_t)(EDX));
  /* 1048728a call 0x1047dd40 */
  push32(0x1048728fu); f_1047dd40();
  /* 1048728f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487292 cmp eax, dword ptr [0x1002e6f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1002e6f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487298 jne 0x104872cf */
  if (!C.zf) goto L_104872cf;
  /* 1048729a push 1 */
  push32((uint32_t)(0x1u));
  /* 1048729c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1048729f push eax */
  push32((uint32_t)(EAX));
  /* 104872a0 call 0x10487730 */
  push32(0x104872a5u); f_10487730();
  /* 104872a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104872a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104872aa je 0x104872cd */
  if (C.zf) goto L_104872cd;
  /* 104872ac mov ecx, dword ptr [0x1002e704] */
  ECX = (r32((uint32_t)(0x1002e704)));
  /* 104872b2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 104872b5 mov dword ptr [0x1002e704], ecx */
  w32((uint32_t)(0x1002e704), (ECX));
  /* 104872bb cmp dword ptr [0x1002e6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104872c2 jne 0x104872cd */
  if (!C.zf) goto L_104872cd;
  /* 104872c4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104872c7 mov dword ptr [0x1002e6ec], edx */
  w32((uint32_t)(0x1002e6ec), (EDX));
L_104872cd:;
  /* 104872cd jmp 0x104872ee */
  goto L_104872ee;
L_104872cf:;
  /* 104872cf mov eax, dword ptr [0x1002e704] */
  EAX = (r32((uint32_t)(0x1002e704)));
  /* 104872d4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 104872d7 mov dword ptr [0x1002e704], eax */
  w32((uint32_t)(0x1002e704), (EAX));
  /* 104872dc cmp dword ptr [0x1002e6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104872e3 jne 0x104872ee */
  if (!C.zf) goto L_104872ee;
  /* 104872e5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104872e8 mov dword ptr [0x1002e6ec], ecx */
  w32((uint32_t)(0x1002e6ec), (ECX));
L_104872ee:;
  /* 104872ee jmp 0x10487351 */
  goto L_10487351;
L_104872f0:;
  /* 104872f0 cmp dword ptr [0x1002e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104872f7 jne 0x10487351 */
  if (!C.zf) goto L_10487351;
  /* 104872f9 cmp dword ptr [0x1002e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487300 je 0x10487351 */
  if (C.zf) goto L_10487351;
  /* 10487302 mov edx, dword ptr [0x1002e6f4] */
  EDX = (r32((uint32_t)(0x1002e6f4)));
  /* 10487308 push edx */
  push32((uint32_t)(EDX));
  /* 10487309 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1048730c push eax */
  push32((uint32_t)(EAX));
  /* 1048730d mov ecx, dword ptr [0x1002e6fc] */
  ECX = (r32((uint32_t)(0x1002e6fc)));
  /* 10487313 push ecx */
  push32((uint32_t)(ECX));
  /* 10487314 call 0x104896b0 */
  call_ind(0x104896b0u, 0x10487319u);
  /* 10487319 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048731c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048731e jne 0x10487351 */
  if (!C.zf) goto L_10487351;
  /* 10487320 push 0 */
  push32((uint32_t)(0x0u));
  /* 10487322 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10487325 push edx */
  push32((uint32_t)(EDX));
  /* 10487326 call 0x10487730 */
  push32(0x1048732bu); f_10487730();
  /* 1048732b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048732e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10487330 je 0x10487351 */
  if (C.zf) goto L_10487351;
  /* 10487332 mov eax, dword ptr [0x1002e704] */
  EAX = (r32((uint32_t)(0x1002e704)));
  /* 10487337 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1048733a mov dword ptr [0x1002e704], eax */
  w32((uint32_t)(0x1002e704), (EAX));
  /* 1048733f cmp dword ptr [0x1002e6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487346 jne 0x10487351 */
  if (!C.zf) goto L_10487351;
  /* 10487348 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1048734b mov dword ptr [0x1002e6ec], ecx */
  w32((uint32_t)(0x1002e6ec), (ECX));
L_10487351:;
  /* 10487351 mov eax, dword ptr [0x1002e704] */
  EAX = (r32((uint32_t)(0x1002e704)));
  /* 10487356 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10487359 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1048735b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1048735d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1048735e:;
  /* 1048735e mov esp, ebp */
  ESP = (EBP);
  /* 10487360 pop ebp */
  EBP = (pop32());
  /* 10487361 ret 4 */
  ESPCHK(0x10487040u, _esp0);
  ESP += 8; return;
}

/* FUN_10027370 @ 0x10487370 (116 bytes, 33 insns) */
void f_10487370(void) {
  FTRACE(0x10487370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10487370 push ebp */
  push32((uint32_t)(EBP));
  /* 10487371 mov ebp, esp */
  EBP = (ESP);
  /* 10487373 push ecx */
  push32((uint32_t)(ECX));
  /* 10487374 mov eax, dword ptr [0x1002e6fc] */
  EAX = (r32((uint32_t)(0x1002e6fc)));
  /* 10487379 push eax */
  push32((uint32_t)(EAX));
  /* 1048737a call 0x1047dd40 */
  push32(0x1048737fu); f_1047dd40();
  /* 1048737f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487382 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10487384 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487387 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1048738a mov dword ptr [0x1002e6f8], ecx */
  w32((uint32_t)(0x1002e6f8), (ECX));
  /* 10487390 cmp dword ptr [0x1002e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487397 je 0x104873a2 */
  if (C.zf) goto L_104873a2;
  /* 10487399 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 104873a0 jmp 0x104873b4 */
  goto L_104873b4;
L_104873a2:;
  /* 104873a2 mov edx, dword ptr [0x1002e6fc] */
  EDX = (r32((uint32_t)(0x1002e6fc)));
  /* 104873a8 push edx */
  push32((uint32_t)(EDX));
  /* 104873a9 call 0x10487a20 */
  push32(0x104873aeu); f_10487a20();
  /* 104873ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104873b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104873b4:;
  /* 104873b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104873b7 mov dword ptr [0x1002e6f4], eax */
  w32((uint32_t)(0x1002e6f4), (EAX));
  /* 104873bc push 1 */
  push32((uint32_t)(0x1u));
  /* 104873be push 0x1000f3f0 */
  push32((uint32_t)(0x1000f3f0u));
  /* 104873c3 call dword ptr [0x10030264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030264))), 0x104873c9u);
  /* 104873c9 mov ecx, dword ptr [0x1002e704] */
  ECX = (r32((uint32_t)(0x1002e704)));
  /* 104873cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 104873d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104873d4 jne 0x104873e0 */
  if (!C.zf) goto L_104873e0;
  /* 104873d6 mov dword ptr [0x1002e704], 0 */
  w32((uint32_t)(0x1002e704), (0x0u));
L_104873e0:;
  /* 104873e0 mov esp, ebp */
  ESP = (EBP);
  /* 104873e2 pop ebp */
  EBP = (pop32());
  /* 104873e3 ret  */
  ESPCHK(0x10487370u, _esp0);
  ESP += 4; return;
}

/* FUN_100273f0 @ 0x104873f0 (287 bytes, 86 insns) */
void f_104873f0(void) {
  FTRACE(0x104873f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104873f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104873f1 mov ebp, esp */
  EBP = (ESP);
  /* 104873f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104873f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104873f9 push eax */
  push32((uint32_t)(EAX));
  /* 104873fa call 0x104879a0 */
  push32(0x104873ffu); f_104879a0();
  /* 104873ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487402 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10487405 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10487407 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1048740a push ecx */
  push32((uint32_t)(ECX));
  /* 1048740b mov edx, dword ptr [0x1002e6f8] */
  EDX = (r32((uint32_t)(0x1002e6f8)));
  /* 10487411 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10487413 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10487415 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1048741b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487421 push edx */
  push32((uint32_t)(EDX));
  /* 10487422 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10487425 push eax */
  push32((uint32_t)(EAX));
  /* 10487426 call dword ptr [0x1002e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002e70c))), 0x1048742cu);
  /* 1048742c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048742e jne 0x10487444 */
  if (!C.zf) goto L_10487444;
  /* 10487430 mov dword ptr [0x1002e704], 0 */
  w32((uint32_t)(0x1002e704), (0x0u));
  /* 1048743a mov eax, 1 */
  EAX = (0x1u);
  /* 1048743f jmp 0x10487509 */
  goto L_10487509;
L_10487444:;
  /* 10487444 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10487447 push ecx */
  push32((uint32_t)(ECX));
  /* 10487448 mov edx, dword ptr [0x1002e6fc] */
  EDX = (r32((uint32_t)(0x1002e6fc)));
  /* 1048744e push edx */
  push32((uint32_t)(EDX));
  /* 1048744f call 0x104895e0 */
  call_ind(0x104895e0u, 0x10487454u);
  /* 10487454 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487457 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10487459 jne 0x10487499 */
  if (!C.zf) goto L_10487499;
  /* 1048745b cmp dword ptr [0x1002e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487462 jne 0x10487476 */
  if (!C.zf) goto L_10487476;
  /* 10487464 push 1 */
  push32((uint32_t)(0x1u));
  /* 10487466 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10487469 push eax */
  push32((uint32_t)(EAX));
  /* 1048746a call 0x10487730 */
  push32(0x1048746fu); f_10487730();
  /* 1048746f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487472 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10487474 je 0x10487497 */
  if (C.zf) goto L_10487497;
L_10487476:;
  /* 10487476 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10487479 mov dword ptr [0x1002e708], ecx */
  w32((uint32_t)(0x1002e708), (ECX));
  /* 1048747f mov edx, dword ptr [0x1002e708] */
  EDX = (r32((uint32_t)(0x1002e708)));
  /* 10487485 mov dword ptr [0x1002e6ec], edx */
  w32((uint32_t)(0x1002e6ec), (EDX));
  /* 1048748b mov eax, dword ptr [0x1002e704] */
  EAX = (r32((uint32_t)(0x1002e704)));
  /* 10487490 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10487492 mov dword ptr [0x1002e704], eax */
  w32((uint32_t)(0x1002e704), (EAX));
L_10487497:;
  /* 10487497 jmp 0x104874fc */
  goto L_104874fc;
L_10487499:;
  /* 10487499 cmp dword ptr [0x1002e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104874a0 jne 0x104874fc */
  if (!C.zf) goto L_104874fc;
  /* 104874a2 cmp dword ptr [0x1002e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104874a9 je 0x104874fc */
  if (C.zf) goto L_104874fc;
  /* 104874ab mov ecx, dword ptr [0x1002e6f4] */
  ECX = (r32((uint32_t)(0x1002e6f4)));
  /* 104874b1 push ecx */
  push32((uint32_t)(ECX));
  /* 104874b2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 104874b5 push edx */
  push32((uint32_t)(EDX));
  /* 104874b6 mov eax, dword ptr [0x1002e6fc] */
  EAX = (r32((uint32_t)(0x1002e6fc)));
  /* 104874bb push eax */
  push32((uint32_t)(EAX));
  /* 104874bc call 0x104896b0 */
  call_ind(0x104896b0u, 0x104874c1u);
  /* 104874c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104874c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104874c6 jne 0x104874fc */
  if (!C.zf) goto L_104874fc;
  /* 104874c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104874ca mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104874cd push ecx */
  push32((uint32_t)(ECX));
  /* 104874ce call 0x10487730 */
  push32(0x104874d3u); f_10487730();
  /* 104874d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104874d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104874d8 je 0x104874fc */
  if (C.zf) goto L_104874fc;
  /* 104874da mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104874dd mov dword ptr [0x1002e708], edx */
  w32((uint32_t)(0x1002e708), (EDX));
  /* 104874e3 mov eax, dword ptr [0x1002e708] */
  EAX = (r32((uint32_t)(0x1002e708)));
  /* 104874e8 mov dword ptr [0x1002e6ec], eax */
  w32((uint32_t)(0x1002e6ec), (EAX));
  /* 104874ed mov ecx, dword ptr [0x1002e704] */
  ECX = (r32((uint32_t)(0x1002e704)));
  /* 104874f3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 104874f6 mov dword ptr [0x1002e704], ecx */
  w32((uint32_t)(0x1002e704), (ECX));
L_104874fc:;
  /* 104874fc mov eax, dword ptr [0x1002e704] */
  EAX = (r32((uint32_t)(0x1002e704)));
  /* 10487501 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10487504 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10487506 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10487508 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10487509:;
  /* 10487509 mov esp, ebp */
  ESP = (EBP);
  /* 1048750b pop ebp */
  EBP = (pop32());
  /* 1048750c ret 4 */
  ESPCHK(0x104873f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10027510 @ 0x10487510 (69 bytes, 20 insns) */
void f_10487510(void) {
  FTRACE(0x10487510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10487510 push ebp */
  push32((uint32_t)(EBP));
  /* 10487511 mov ebp, esp */
  EBP = (ESP);
  /* 10487513 mov eax, dword ptr [0x1002e700] */
  EAX = (r32((uint32_t)(0x1002e700)));
  /* 10487518 push eax */
  push32((uint32_t)(EAX));
  /* 10487519 call 0x1047dd40 */
  push32(0x1048751eu); f_1047dd40();
  /* 1048751e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487521 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10487523 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487526 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10487529 mov dword ptr [0x1002e6f0], ecx */
  w32((uint32_t)(0x1002e6f0), (ECX));
  /* 1048752f push 1 */
  push32((uint32_t)(0x1u));
  /* 10487531 push 0x1000f560 */
  push32((uint32_t)(0x1000f560u));
  /* 10487536 call dword ptr [0x10030264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030264))), 0x1048753cu);
  /* 1048753c mov edx, dword ptr [0x1002e704] */
  EDX = (r32((uint32_t)(0x1002e704)));
  /* 10487542 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10487545 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10487547 jne 0x10487553 */
  if (!C.zf) goto L_10487553;
  /* 10487549 mov dword ptr [0x1002e704], 0 */
  w32((uint32_t)(0x1002e704), (0x0u));
L_10487553:;
  /* 10487553 pop ebp */
  EBP = (pop32());
  /* 10487554 ret  */
  ESPCHK(0x10487510u, _esp0);
  ESP += 4; return;
}

/* FUN_10027560 @ 0x10487560 (172 bytes, 54 insns) */
void f_10487560(void) {
  FTRACE(0x10487560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10487560 push ebp */
  push32((uint32_t)(EBP));
  /* 10487561 mov ebp, esp */
  EBP = (ESP);
  /* 10487563 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10487566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487569 push eax */
  push32((uint32_t)(EAX));
  /* 1048756a call 0x104879a0 */
  push32(0x1048756fu); f_104879a0();
  /* 1048756f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487572 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10487575 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10487577 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1048757a push ecx */
  push32((uint32_t)(ECX));
  /* 1048757b mov edx, dword ptr [0x1002e6f0] */
  EDX = (r32((uint32_t)(0x1002e6f0)));
  /* 10487581 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10487583 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10487585 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1048758b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487591 push edx */
  push32((uint32_t)(EDX));
  /* 10487592 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10487595 push eax */
  push32((uint32_t)(EAX));
  /* 10487596 call dword ptr [0x1002e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002e70c))), 0x1048759cu);
  /* 1048759c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1048759e jne 0x104875b1 */
  if (!C.zf) goto L_104875b1;
  /* 104875a0 mov dword ptr [0x1002e704], 0 */
  w32((uint32_t)(0x1002e704), (0x0u));
  /* 104875aa mov eax, 1 */
  EAX = (0x1u);
  /* 104875af jmp 0x10487606 */
  goto L_10487606;
L_104875b1:;
  /* 104875b1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 104875b4 push ecx */
  push32((uint32_t)(ECX));
  /* 104875b5 mov edx, dword ptr [0x1002e700] */
  EDX = (r32((uint32_t)(0x1002e700)));
  /* 104875bb push edx */
  push32((uint32_t)(EDX));
  /* 104875bc call 0x104895e0 */
  call_ind(0x104895e0u, 0x104875c1u);
  /* 104875c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104875c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104875c6 jne 0x104875f9 */
  if (!C.zf) goto L_104875f9;
  /* 104875c8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104875cb push eax */
  push32((uint32_t)(EAX));
  /* 104875cc call 0x104876e0 */
  push32(0x104875d1u); f_104876e0();
  /* 104875d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104875d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104875d6 je 0x104875f9 */
  if (C.zf) goto L_104875f9;
  /* 104875d8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104875db mov dword ptr [0x1002e708], ecx */
  w32((uint32_t)(0x1002e708), (ECX));
  /* 104875e1 mov edx, dword ptr [0x1002e708] */
  EDX = (r32((uint32_t)(0x1002e708)));
  /* 104875e7 mov dword ptr [0x1002e6ec], edx */
  w32((uint32_t)(0x1002e6ec), (EDX));
  /* 104875ed mov eax, dword ptr [0x1002e704] */
  EAX = (r32((uint32_t)(0x1002e704)));
  /* 104875f2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 104875f4 mov dword ptr [0x1002e704], eax */
  w32((uint32_t)(0x1002e704), (EAX));
L_104875f9:;
  /* 104875f9 mov eax, dword ptr [0x1002e704] */
  EAX = (r32((uint32_t)(0x1002e704)));
  /* 104875fe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10487601 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10487603 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10487605 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10487606:;
  /* 10487606 mov esp, ebp */
  ESP = (EBP);
  /* 10487608 pop ebp */
  EBP = (pop32());
  /* 10487609 ret 4 */
  ESPCHK(0x10487560u, _esp0);
  ESP += 8; return;
}

/* FUN_10027610 @ 0x10487610 (43 bytes, 11 insns) */
void f_10487610(void) {
  FTRACE(0x10487610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10487610 push ebp */
  push32((uint32_t)(EBP));
  /* 10487611 mov ebp, esp */
  EBP = (ESP);
  /* 10487613 mov eax, dword ptr [0x1002e704] */
  EAX = (r32((uint32_t)(0x1002e704)));
  /* 10487618 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1048761d mov dword ptr [0x1002e704], eax */
  w32((uint32_t)(0x1002e704), (EAX));
  /* 10487622 call dword ptr [0x10030254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030254))), 0x10487628u);
  /* 10487628 mov dword ptr [0x1002e708], eax */
  w32((uint32_t)(0x1002e708), (EAX));
  /* 1048762d mov ecx, dword ptr [0x1002e708] */
  ECX = (r32((uint32_t)(0x1002e708)));
  /* 10487633 mov dword ptr [0x1002e6ec], ecx */
  w32((uint32_t)(0x1002e6ec), (ECX));
  /* 10487639 pop ebp */
  EBP = (pop32());
  /* 1048763a ret  */
  ESPCHK(0x10487610u, _esp0);
  ESP += 4; return;
}

/* FUN_10027640 @ 0x10487640 (155 bytes, 57 insns) */
void f_10487640(void) {
  FTRACE(0x10487640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10487640 push ebp */
  push32((uint32_t)(EBP));
  /* 10487641 mov ebp, esp */
  EBP = (ESP);
  /* 10487643 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10487646 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048764a je 0x1048766b */
  if (C.zf) goto L_1048766b;
  /* 1048764c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048764f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10487652 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10487654 je 0x1048766b */
  if (C.zf) goto L_1048766b;
  /* 10487656 push 0x1002a724 */
  push32((uint32_t)(0x1002a724u));
  /* 1048765b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048765e push edx */
  push32((uint32_t)(EDX));
  /* 1048765f call 0x10486ba0 */
  push32(0x10487664u); f_10486ba0();
  /* 10487664 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10487669 jne 0x10487693 */
  if (!C.zf) goto L_10487693;
L_1048766b:;
  /* 1048766b push 8 */
  push32((uint32_t)(0x8u));
  /* 1048766d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10487670 push eax */
  push32((uint32_t)(EAX));
  /* 10487671 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10487676 mov ecx, dword ptr [0x1002e708] */
  ECX = (r32((uint32_t)(0x1002e708)));
  /* 1048767c push ecx */
  push32((uint32_t)(ECX));
  /* 1048767d call dword ptr [0x1002e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002e70c))), 0x10487683u);
  /* 10487683 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10487685 jne 0x1048768b */
  if (!C.zf) goto L_1048768b;
  /* 10487687 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10487689 jmp 0x104876d7 */
  goto L_104876d7;
L_1048768b:;
  /* 1048768b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1048768e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10487691 jmp 0x104876cb */
  goto L_104876cb;
L_10487693:;
  /* 10487693 push 0x1002a720 */
  push32((uint32_t)(0x1002a720u));
  /* 10487698 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048769b push eax */
  push32((uint32_t)(EAX));
  /* 1048769c call 0x10486ba0 */
  push32(0x104876a1u); f_10486ba0();
  /* 104876a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104876a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104876a6 jne 0x104876cb */
  if (!C.zf) goto L_104876cb;
  /* 104876a8 push 8 */
  push32((uint32_t)(0x8u));
  /* 104876aa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 104876ad push ecx */
  push32((uint32_t)(ECX));
  /* 104876ae push 0xb */
  push32((uint32_t)(0xbu));
  /* 104876b0 mov edx, dword ptr [0x1002e708] */
  EDX = (r32((uint32_t)(0x1002e708)));
  /* 104876b6 push edx */
  push32((uint32_t)(EDX));
  /* 104876b7 call dword ptr [0x1002e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002e70c))), 0x104876bdu);
  /* 104876bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104876bf jne 0x104876c5 */
  if (!C.zf) goto L_104876c5;
  /* 104876c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104876c3 jmp 0x104876d7 */
  goto L_104876d7;
L_104876c5:;
  /* 104876c5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 104876c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_104876cb:;
  /* 104876cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104876ce push ecx */
  push32((uint32_t)(ECX));
  /* 104876cf call 0x104897c0 */
  call_ind(0x104897c0u, 0x104876d4u);
  /* 104876d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104876d7:;
  /* 104876d7 mov esp, ebp */
  ESP = (EBP);
  /* 104876d9 pop ebp */
  EBP = (pop32());
  /* 104876da ret  */
  ESPCHK(0x10487640u, _esp0);
  ESP += 4; return;
}

/* FUN_100276e0 @ 0x104876e0 (79 bytes, 26 insns) */
void f_104876e0(void) {
  FTRACE(0x104876e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104876e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104876e1 mov ebp, esp */
  EBP = (ESP);
  /* 104876e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104876e6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 104876ea mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 104876ee mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104876f5 jmp 0x10487700 */
  goto L_10487700;
L_104876f7:;
  /* 104876f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104876fa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104876fd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10487700:;
  /* 10487700 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487704 jae 0x10487726 */
  if (!C.cf) goto L_10487726;
  /* 10487706 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10487709 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1048770f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10487712 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10487714 mov cx, word ptr [eax*2 + 0x1002d9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1002d9c4)));
  /* 1048771c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048771e jne 0x10487724 */
  if (!C.zf) goto L_10487724;
  /* 10487720 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10487722 jmp 0x1048772b */
  goto L_1048772b;
L_10487724:;
  /* 10487724 jmp 0x104876f7 */
  goto L_104876f7;
L_10487726:;
  /* 10487726 mov eax, 1 */
  EAX = (0x1u);
L_1048772b:;
  /* 1048772b mov esp, ebp */
  ESP = (EBP);
  /* 1048772d pop ebp */
  EBP = (pop32());
  /* 1048772e ret  */
  ESPCHK(0x104876e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10027730 @ 0x10487730 (135 bytes, 48 insns) */
void f_10487730(void) {
  FTRACE(0x10487730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10487730 push ebp */
  push32((uint32_t)(EBP));
  /* 10487731 mov ebp, esp */
  EBP = (ESP);
  /* 10487733 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10487736 push esi */
  push32((uint32_t)(ESI));
  /* 10487737 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048773a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1048773f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10487744 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10487749 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1048774c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10487751 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10487754 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10487756 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10487759 push ecx */
  push32((uint32_t)(ECX));
  /* 1048775a push 1 */
  push32((uint32_t)(0x1u));
  /* 1048775c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1048775f push edx */
  push32((uint32_t)(EDX));
  /* 10487760 call dword ptr [0x1002e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002e70c))), 0x10487766u);
  /* 10487766 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10487768 jne 0x1048776e */
  if (!C.zf) goto L_1048776e;
  /* 1048776a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1048776c jmp 0x104877b2 */
  goto L_104877b2;
L_1048776e:;
  /* 1048776e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10487771 push eax */
  push32((uint32_t)(EAX));
  /* 10487772 call 0x104879a0 */
  push32(0x10487777u); f_104879a0();
  /* 10487777 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048777a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048777d je 0x104877ad */
  if (C.zf) goto L_104877ad;
  /* 1048777f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487783 je 0x104877ad */
  if (C.zf) goto L_104877ad;
  /* 10487785 mov ecx, dword ptr [0x1002e6fc] */
  ECX = (r32((uint32_t)(0x1002e6fc)));
  /* 1048778b push ecx */
  push32((uint32_t)(ECX));
  /* 1048778c call 0x10487a20 */
  push32(0x10487791u); f_10487a20();
  /* 10487791 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487794 mov esi, eax */
  ESI = (EAX);
  /* 10487796 mov edx, dword ptr [0x1002e6fc] */
  EDX = (r32((uint32_t)(0x1002e6fc)));
  /* 1048779c push edx */
  push32((uint32_t)(EDX));
  /* 1048779d call 0x1047dd40 */
  push32(0x104877a2u); f_1047dd40();
  /* 104877a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104877a5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104877a7 jne 0x104877ad */
  if (!C.zf) goto L_104877ad;
  /* 104877a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104877ab jmp 0x104877b2 */
  goto L_104877b2;
L_104877ad:;
  /* 104877ad mov eax, 1 */
  EAX = (0x1u);
L_104877b2:;
  /* 104877b2 pop esi */
  ESI = (pop32());
  /* 104877b3 mov esp, ebp */
  ESP = (EBP);
  /* 104877b5 pop ebp */
  EBP = (pop32());
  /* 104877b6 ret  */
  ESPCHK(0x10487730u, _esp0);
  ESP += 4; return;
}

/* FUN_100277c0 @ 0x104877c0 (77 bytes, 18 insns) */
void f_104877c0(void) {
  FTRACE(0x104877c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104877c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104877c1 mov ebp, esp */
  EBP = (ESP);
  /* 104877c3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104877c9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 104877d3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 104877d9 push eax */
  push32((uint32_t)(EAX));
  /* 104877da call dword ptr [0x10030250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030250))), 0x104877e0u);
  /* 104877e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104877e2 je 0x104877f9 */
  if (C.zf) goto L_104877f9;
  /* 104877e4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104877eb jne 0x104877f9 */
  if (!C.zf) goto L_104877f9;
  /* 104877ed mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 104877f7 jmp 0x10487803 */
  goto L_10487803;
L_104877f9:;
  /* 104877f9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10487803:;
  /* 10487803 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10487809 mov esp, ebp */
  ESP = (EBP);
  /* 1048780b pop ebp */
  EBP = (pop32());
  /* 1048780c ret  */
  ESPCHK(0x104877c0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10487810 (388 bytes, 118 insns) */
void f_10487810(void) {
  FTRACE(0x10487810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10487810 push ebp */
  push32((uint32_t)(EBP));
  /* 10487811 mov ebp, esp */
  EBP = (ESP);
  /* 10487813 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10487816 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1048781d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10487824 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1048782b:;
  /* 1048782b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1048782e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487831 jg 0x10487978 */
  if ((!C.zf&&C.sf==C.of)) goto L_10487978;
  /* 10487837 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1048783a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048783d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1048783e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10487840 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10487842 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10487845 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487848 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1048784b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1048784e cmp edx, dword ptr [ecx + 0x1002d520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1002d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487854 jne 0x1048794e */
  if (!C.zf) goto L_1048794e;
  /* 1048785a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1048785d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10487860 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487864 ja 0x10487887 */
  if ((!C.cf&&!C.zf)) goto L_10487887;
  /* 10487866 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048786a je 0x104878f9 */
  if (C.zf) goto L_104878f9;
  /* 10487870 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487874 je 0x104878a4 */
  if (C.zf) goto L_104878a4;
  /* 10487876 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048787a je 0x104878c6 */
  if (C.zf) goto L_104878c6;
  /* 1048787c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487880 je 0x104878e8 */
  if (C.zf) goto L_104878e8;
  /* 10487882 jmp 0x10487918 */
  goto L_10487918;
L_10487887:;
  /* 10487887 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048788e je 0x104878b5 */
  if (C.zf) goto L_104878b5;
  /* 10487890 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487897 je 0x104878d7 */
  if (C.zf) goto L_104878d7;
  /* 10487899 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104878a0 je 0x1048790a */
  if (C.zf) goto L_1048790a;
  /* 104878a2 jmp 0x10487918 */
  goto L_10487918;
L_104878a4:;
  /* 104878a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104878a7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104878aa add ecx, 0x1002d524 */
  { uint32_t _a=(ECX),_b=(0x1002d524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104878b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104878b3 jmp 0x10487918 */
  goto L_10487918;
L_104878b5:;
  /* 104878b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104878b8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104878bb mov eax, dword ptr [edx + 0x1002d52c] */
  EAX = (r32((uint32_t)(EDX + 0x1002d52c)));
  /* 104878c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104878c4 jmp 0x10487918 */
  goto L_10487918;
L_104878c6:;
  /* 104878c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104878c9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104878cc add ecx, 0x1002d530 */
  { uint32_t _a=(ECX),_b=(0x1002d530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104878d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104878d5 jmp 0x10487918 */
  goto L_10487918;
L_104878d7:;
  /* 104878d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104878da imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104878dd mov eax, dword ptr [edx + 0x1002d534] */
  EAX = (r32((uint32_t)(EDX + 0x1002d534)));
  /* 104878e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104878e6 jmp 0x10487918 */
  goto L_10487918;
L_104878e8:;
  /* 104878e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104878eb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104878ee add ecx, 0x1002d538 */
  { uint32_t _a=(ECX),_b=(0x1002d538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104878f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104878f7 jmp 0x10487918 */
  goto L_10487918;
L_104878f9:;
  /* 104878f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104878fc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104878ff add edx, 0x1002d53c */
  { uint32_t _a=(EDX),_b=(0x1002d53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487905 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10487908 jmp 0x10487918 */
  goto L_10487918;
L_1048790a:;
  /* 1048790a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1048790d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10487910 add eax, 0x1002d544 */
  { uint32_t _a=(EAX),_b=(0x1002d544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487915 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10487918:;
  /* 10487918 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048791c je 0x10487924 */
  if (C.zf) goto L_10487924;
  /* 1048791e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487922 jge 0x10487926 */
  if ((C.sf==C.of)) goto L_10487926;
L_10487924:;
  /* 10487924 jmp 0x10487978 */
  goto L_10487978;
L_10487926:;
  /* 10487926 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10487929 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1048792c push ecx */
  push32((uint32_t)(ECX));
  /* 1048792d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10487930 push edx */
  push32((uint32_t)(EDX));
  /* 10487931 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10487934 push eax */
  push32((uint32_t)(EAX));
  /* 10487935 call 0x1047e730 */
  push32(0x1048793au); f_1047e730();
  /* 1048793a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1048793d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10487940 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487943 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10487947 mov eax, 1 */
  EAX = (0x1u);
  /* 1048794c jmp 0x1048798e */
  goto L_1048798e;
L_1048794e:;
  /* 1048794e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487951 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10487954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487957 cmp eax, dword ptr [edx + 0x1002d520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1002d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1048795d jae 0x1048796a */
  if (!C.cf) goto L_1048796a;
  /* 1048795f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487962 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10487965 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10487968 jmp 0x10487973 */
  goto L_10487973;
L_1048796a:;
  /* 1048796a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1048796d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487970 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10487973:;
  /* 10487973 jmp 0x1048782b */
  goto L_1048782b;
L_10487978:;
  /* 10487978 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1048797b push eax */
  push32((uint32_t)(EAX));
  /* 1048797c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1048797f push ecx */
  push32((uint32_t)(ECX));
  /* 10487980 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10487983 push edx */
  push32((uint32_t)(EDX));
  /* 10487984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487987 push eax */
  push32((uint32_t)(EAX));
  /* 10487988 call dword ptr [0x1003025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003025c))), 0x1048798eu);
L_1048798e:;
  /* 1048798e mov esp, ebp */
  ESP = (EBP);
  /* 10487990 pop ebp */
  EBP = (pop32());
  /* 10487991 ret 0x10 */
  ESPCHK(0x10487810u, _esp0);
  ESP += 20; return;
}

/* FUN_100279a0 @ 0x104879a0 (118 bytes, 42 insns) */
void f_104879a0(void) {
  FTRACE(0x104879a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104879a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104879a1 mov ebp, esp */
  EBP = (ESP);
  /* 104879a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104879a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104879ad:;
  /* 104879ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104879b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104879b2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 104879b5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104879b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104879bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104879bf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104879c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104879c4 je 0x10487a0f */
  if (C.zf) goto L_10487a0f;
  /* 104879c6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104879ca cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104879cd jl 0x104879e2 */
  if ((C.sf!=C.of)) goto L_104879e2;
  /* 104879cf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104879d3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104879d6 jg 0x104879e2 */
  if ((!C.zf&&C.sf==C.of)) goto L_104879e2;
  /* 104879d8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 104879db add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104879dd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 104879e0 jmp 0x104879fc */
  goto L_104879fc;
L_104879e2:;
  /* 104879e2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104879e6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104879e9 jl 0x104879fc */
  if ((C.sf!=C.of)) goto L_104879fc;
  /* 104879eb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104879ef cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104879f2 jg 0x104879fc */
  if ((!C.zf&&C.sf==C.of)) goto L_104879fc;
  /* 104879f4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 104879f7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104879f9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_104879fc:;
  /* 104879fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104879ff shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10487a02 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10487a06 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10487a0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10487a0d jmp 0x104879ad */
  goto L_104879ad;
L_10487a0f:;
  /* 10487a0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10487a12 mov esp, ebp */
  ESP = (EBP);
  /* 10487a14 pop ebp */
  EBP = (pop32());
  /* 10487a15 ret  */
  ESPCHK(0x104879a0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10487a20 (101 bytes, 36 insns) */
void f_10487a20(void) {
  FTRACE(0x10487a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10487a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10487a21 mov ebp, esp */
  EBP = (ESP);
  /* 10487a23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10487a26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10487a2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487a30 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10487a32 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10487a35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487a38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487a3b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10487a3e:;
  /* 10487a3e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10487a42 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487a45 jl 0x10487a50 */
  if ((C.sf!=C.of)) goto L_10487a50;
  /* 10487a47 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10487a4b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487a4e jle 0x10487a62 */
  if ((C.zf||C.sf!=C.of)) goto L_10487a62;
L_10487a50:;
  /* 10487a50 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10487a54 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487a57 jl 0x10487a7e */
  if ((C.sf!=C.of)) goto L_10487a7e;
  /* 10487a59 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10487a5d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487a60 jg 0x10487a7e */
  if ((!C.zf&&C.sf==C.of)) goto L_10487a7e;
L_10487a62:;
  /* 10487a62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10487a65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487a68 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10487a6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487a6e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10487a70 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10487a73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487a76 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487a79 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10487a7c jmp 0x10487a3e */
  goto L_10487a3e;
L_10487a7e:;
  /* 10487a7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10487a81 mov esp, ebp */
  ESP = (EBP);
  /* 10487a83 pop ebp */
  EBP = (pop32());
  /* 10487a84 ret  */
  ESPCHK(0x10487a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10027a90 @ 0x10487a90 (122 bytes, 39 insns) */
void f_10487a90(void) {
  FTRACE(0x10487a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10487a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10487a91 mov ebp, esp */
  EBP = (ESP);
  /* 10487a93 push ecx */
  push32((uint32_t)(ECX));
  /* 10487a94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487a97 cmp eax, dword ptr [0x1002ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1002ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487a9d jae 0x10487ac1 */
  if (!C.cf) goto L_10487ac1;
  /* 10487a9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487aa2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10487aa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487aa8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10487aab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10487aae mov eax, dword ptr [ecx*4 + 0x1002fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1002fe60)));
  /* 10487ab5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10487aba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10487abd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10487abf jne 0x10487adc */
  if (!C.zf) goto L_10487adc;
L_10487ac1:;
  /* 10487ac1 call 0x10482de0 */
  push32(0x10487ac6u); f_10482de0();
  /* 10487ac6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10487acc call 0x10482df0 */
  push32(0x10487ad1u); f_10482df0();
  /* 10487ad1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10487ad7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10487ada jmp 0x10487b06 */
  goto L_10487b06;
L_10487adc:;
  /* 10487adc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487adf push edx */
  push32((uint32_t)(EDX));
  /* 10487ae0 call 0x10484600 */
  push32(0x10487ae5u); f_10484600();
  /* 10487ae5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487ae8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487aeb push eax */
  push32((uint32_t)(EAX));
  /* 10487aec call 0x10487b10 */
  push32(0x10487af1u); f_10487b10();
  /* 10487af1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487af4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10487af7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487afa push ecx */
  push32((uint32_t)(ECX));
  /* 10487afb call 0x10484690 */
  push32(0x10487b00u); f_10484690();
  /* 10487b00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487b03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10487b06:;
  /* 10487b06 mov esp, ebp */
  ESP = (EBP);
  /* 10487b08 pop ebp */
  EBP = (pop32());
  /* 10487b09 ret  */
  ESPCHK(0x10487a90u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10487b10 (170 bytes, 59 insns) */
void f_10487b10(void) {
  FTRACE(0x10487b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10487b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10487b11 mov ebp, esp */
  EBP = (ESP);
  /* 10487b13 push ecx */
  push32((uint32_t)(ECX));
  /* 10487b14 push esi */
  push32((uint32_t)(ESI));
  /* 10487b15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487b18 push eax */
  push32((uint32_t)(EAX));
  /* 10487b19 call 0x10484480 */
  push32(0x10487b1eu); f_10484480();
  /* 10487b1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487b21 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487b24 je 0x10487b63 */
  if (C.zf) goto L_10487b63;
  /* 10487b26 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487b2a je 0x10487b32 */
  if (C.zf) goto L_10487b32;
  /* 10487b2c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487b30 jne 0x10487b4c */
  if (!C.zf) goto L_10487b4c;
L_10487b32:;
  /* 10487b32 push 1 */
  push32((uint32_t)(0x1u));
  /* 10487b34 call 0x10484480 */
  push32(0x10487b39u); f_10484480();
  /* 10487b39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487b3c mov esi, eax */
  ESI = (EAX);
  /* 10487b3e push 2 */
  push32((uint32_t)(0x2u));
  /* 10487b40 call 0x10484480 */
  push32(0x10487b45u); f_10484480();
  /* 10487b45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487b48 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487b4a je 0x10487b63 */
  if (C.zf) goto L_10487b63;
L_10487b4c:;
  /* 10487b4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487b4f push ecx */
  push32((uint32_t)(ECX));
  /* 10487b50 call 0x10484480 */
  push32(0x10487b55u); f_10484480();
  /* 10487b55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487b58 push eax */
  push32((uint32_t)(EAX));
  /* 10487b59 call dword ptr [0x10030258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030258))), 0x10487b5fu);
  /* 10487b5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10487b61 je 0x10487b6c */
  if (C.zf) goto L_10487b6c;
L_10487b63:;
  /* 10487b63 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10487b6a jmp 0x10487b75 */
  goto L_10487b75;
L_10487b6c:;
  /* 10487b6c call dword ptr [0x100302c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302c0))), 0x10487b72u);
  /* 10487b72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10487b75:;
  /* 10487b75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487b78 push edx */
  push32((uint32_t)(EDX));
  /* 10487b79 call 0x104843a0 */
  push32(0x10487b7eu); f_104843a0();
  /* 10487b7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487b81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487b84 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10487b87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487b8a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10487b8d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10487b90 mov edx, dword ptr [eax*4 + 0x1002fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1002fe60)));
  /* 10487b97 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10487b9c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487ba0 je 0x10487bb3 */
  if (C.zf) goto L_10487bb3;
  /* 10487ba2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10487ba5 push eax */
  push32((uint32_t)(EAX));
  /* 10487ba6 call 0x10482d40 */
  push32(0x10487babu); f_10482d40();
  /* 10487bab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487bae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10487bb1 jmp 0x10487bb5 */
  goto L_10487bb5;
L_10487bb3:;
  /* 10487bb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10487bb5:;
  /* 10487bb5 pop esi */
  ESI = (pop32());
  /* 10487bb6 mov esp, ebp */
  ESP = (EBP);
  /* 10487bb8 pop ebp */
  EBP = (pop32());
  /* 10487bb9 ret  */
  ESPCHK(0x10487b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10027bc0 @ 0x10487bc0 (146 bytes, 52 insns) */
void f_10487bc0(void) {
  FTRACE(0x10487bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10487bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10487bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10487bc3 push ebx */
  push32((uint32_t)(EBX));
  /* 10487bc4 push esi */
  push32((uint32_t)(ESI));
  /* 10487bc5 push edi */
  push32((uint32_t)(EDI));
L_10487bc6:;
  /* 10487bc6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487bca jne 0x10487bea */
  if (!C.zf) goto L_10487bea;
  /* 10487bcc push 0x1002a060 */
  push32((uint32_t)(0x1002a060u));
  /* 10487bd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10487bd3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10487bd5 push 0x1002a728 */
  push32((uint32_t)(0x1002a728u));
  /* 10487bda push 2 */
  push32((uint32_t)(0x2u));
  /* 10487bdc call 0x10479fd0 */
  push32(0x10487be1u); f_10479fd0();
  /* 10487be1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487be4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487be7 jne 0x10487bea */
  if (!C.zf) goto L_10487bea;
  /* 10487be9 int3  */
  x86_unimpl("int3 @ 0x10487be9");
L_10487bea:;
  /* 10487bea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10487bec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10487bee jne 0x10487bc6 */
  if (!C.zf) goto L_10487bc6;
  /* 10487bf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487bf3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10487bf6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10487bfc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10487bfe je 0x10487c4d */
  if (C.zf) goto L_10487c4d;
  /* 10487c00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487c03 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10487c06 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10487c09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10487c0b je 0x10487c4d */
  if (C.zf) goto L_10487c4d;
  /* 10487c0d push 2 */
  push32((uint32_t)(0x2u));
  /* 10487c0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487c12 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10487c15 push eax */
  push32((uint32_t)(EAX));
  /* 10487c16 call 0x1047b9a0 */
  push32(0x10487c1bu); f_1047b9a0();
  /* 10487c1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487c1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487c21 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10487c24 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10487c2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487c2d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10487c30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487c33 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10487c39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487c3c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10487c43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10487c46 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10487c4d:;
  /* 10487c4d pop edi */
  EDI = (pop32());
  /* 10487c4e pop esi */
  ESI = (pop32());
  /* 10487c4f pop ebx */
  EBX = (pop32());
  /* 10487c50 pop ebp */
  EBP = (pop32());
  /* 10487c51 ret  */
  ESPCHK(0x10487bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10027c60 @ 0x10487c60 (289 bytes, 97 insns) */
void f_10487c60(void) {
  FTRACE(0x10487c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10487c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10487c61 mov ebp, esp */
  EBP = (ESP);
  /* 10487c63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10487c66 push esi */
  push32((uint32_t)(ESI));
  /* 10487c67 mov eax, dword ptr [0x1002dc98] */
  EAX = (r32((uint32_t)(0x1002dc98)));
  /* 10487c6c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10487c6f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10487c76 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10487c7d jmp 0x10487c88 */
  goto L_10487c88;
L_10487c7f:;
  /* 10487c7f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10487c82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487c85 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10487c88:;
  /* 10487c88 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487c8c jae 0x10487cc1 */
  if (!C.cf) goto L_10487cc1;
  /* 10487c8e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10487c91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487c94 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10487c97 push ecx */
  push32((uint32_t)(ECX));
  /* 10487c98 call 0x1047dd40 */
  push32(0x10487c9du); f_1047dd40();
  /* 10487c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487ca0 mov esi, eax */
  ESI = (EAX);
  /* 10487ca2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10487ca5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487ca8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10487cac push ecx */
  push32((uint32_t)(ECX));
  /* 10487cad call 0x1047dd40 */
  push32(0x10487cb2u); f_1047dd40();
  /* 10487cb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487cb5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487cb8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10487cbc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10487cbf jmp 0x10487c7f */
  goto L_10487c7f;
L_10487cc1:;
  /* 10487cc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10487cc4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487cc7 push eax */
  push32((uint32_t)(EAX));
  /* 10487cc8 call 0x1047aef0 */
  push32(0x10487ccdu); f_1047aef0();
  /* 10487ccd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487cd0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10487cd3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487cd7 je 0x10487d79 */
  if (C.zf) goto L_10487d79;
  /* 10487cdd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10487ce0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10487ce3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10487cea jmp 0x10487cf5 */
  goto L_10487cf5;
L_10487cec:;
  /* 10487cec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10487cef add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487cf2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10487cf5:;
  /* 10487cf5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487cf9 jae 0x10487d6a */
  if (!C.cf) goto L_10487d6a;
  /* 10487cfb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487cfe mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10487d01 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487d04 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487d07 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10487d0a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10487d0d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487d10 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10487d13 push ecx */
  push32((uint32_t)(ECX));
  /* 10487d14 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487d17 push edx */
  push32((uint32_t)(EDX));
  /* 10487d18 call 0x1047dec0 */
  push32(0x10487d1du); f_1047dec0();
  /* 10487d1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487d20 push eax */
  push32((uint32_t)(EAX));
  /* 10487d21 call 0x1047dd40 */
  push32(0x10487d26u); f_1047dd40();
  /* 10487d26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487d29 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487d2c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487d2e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10487d31 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487d34 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10487d37 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487d3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487d3d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10487d40 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10487d43 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487d46 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10487d4a push eax */
  push32((uint32_t)(EAX));
  /* 10487d4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487d4e push ecx */
  push32((uint32_t)(ECX));
  /* 10487d4f call 0x1047dec0 */
  push32(0x10487d54u); f_1047dec0();
  /* 10487d54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487d57 push eax */
  push32((uint32_t)(EAX));
  /* 10487d58 call 0x1047dd40 */
  push32(0x10487d5du); f_1047dd40();
  /* 10487d5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487d60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487d63 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487d65 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10487d68 jmp 0x10487cec */
  goto L_10487cec;
L_10487d6a:;
  /* 10487d6a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487d6d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10487d70 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487d73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487d76 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10487d79:;
  /* 10487d79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10487d7c pop esi */
  ESI = (pop32());
  /* 10487d7d mov esp, ebp */
  ESP = (EBP);
  /* 10487d7f pop ebp */
  EBP = (pop32());
  /* 10487d80 ret  */
  ESPCHK(0x10487c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10027d90 @ 0x10487d90 (291 bytes, 97 insns) */
void f_10487d90(void) {
  FTRACE(0x10487d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10487d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10487d91 mov ebp, esp */
  EBP = (ESP);
  /* 10487d93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10487d96 push esi */
  push32((uint32_t)(ESI));
  /* 10487d97 mov eax, dword ptr [0x1002dc98] */
  EAX = (r32((uint32_t)(0x1002dc98)));
  /* 10487d9c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10487d9f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10487da6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10487dad jmp 0x10487db8 */
  goto L_10487db8;
L_10487daf:;
  /* 10487daf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10487db2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487db5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10487db8:;
  /* 10487db8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487dbc jae 0x10487df2 */
  if (!C.cf) goto L_10487df2;
  /* 10487dbe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10487dc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487dc4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10487dc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10487dc9 call 0x1047dd40 */
  push32(0x10487dceu); f_1047dd40();
  /* 10487dce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487dd1 mov esi, eax */
  ESI = (EAX);
  /* 10487dd3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10487dd6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487dd9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10487ddd push ecx */
  push32((uint32_t)(ECX));
  /* 10487dde call 0x1047dd40 */
  push32(0x10487de3u); f_1047dd40();
  /* 10487de3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487de6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487de9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10487ded mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10487df0 jmp 0x10487daf */
  goto L_10487daf;
L_10487df2:;
  /* 10487df2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10487df5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487df8 push eax */
  push32((uint32_t)(EAX));
  /* 10487df9 call 0x1047aef0 */
  push32(0x10487dfeu); f_1047aef0();
  /* 10487dfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487e01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10487e04 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487e08 je 0x10487eab */
  if (C.zf) goto L_10487eab;
  /* 10487e0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10487e11 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10487e14 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10487e1b jmp 0x10487e26 */
  goto L_10487e26;
L_10487e1d:;
  /* 10487e1d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10487e20 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487e23 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10487e26:;
  /* 10487e26 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487e2a jae 0x10487e9c */
  if (!C.cf) goto L_10487e9c;
  /* 10487e2c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487e2f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10487e32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487e35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487e38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10487e3b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10487e3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487e41 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10487e45 push ecx */
  push32((uint32_t)(ECX));
  /* 10487e46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487e49 push edx */
  push32((uint32_t)(EDX));
  /* 10487e4a call 0x1047dec0 */
  push32(0x10487e4fu); f_1047dec0();
  /* 10487e4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487e52 push eax */
  push32((uint32_t)(EAX));
  /* 10487e53 call 0x1047dd40 */
  push32(0x10487e58u); f_1047dd40();
  /* 10487e58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487e5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487e5e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487e60 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10487e63 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487e66 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10487e69 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487e6c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487e6f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10487e72 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10487e75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487e78 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10487e7c push eax */
  push32((uint32_t)(EAX));
  /* 10487e7d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487e80 push ecx */
  push32((uint32_t)(ECX));
  /* 10487e81 call 0x1047dec0 */
  push32(0x10487e86u); f_1047dec0();
  /* 10487e86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487e89 push eax */
  push32((uint32_t)(EAX));
  /* 10487e8a call 0x1047dd40 */
  push32(0x10487e8fu); f_1047dd40();
  /* 10487e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487e92 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487e95 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487e97 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10487e9a jmp 0x10487e1d */
  goto L_10487e1d;
L_10487e9c:;
  /* 10487e9c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487e9f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10487ea2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10487ea5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487ea8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10487eab:;
  /* 10487eab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10487eae pop esi */
  ESI = (pop32());
  /* 10487eaf mov esp, ebp */
  ESP = (EBP);
  /* 10487eb1 pop ebp */
  EBP = (pop32());
  /* 10487eb2 ret  */
  ESPCHK(0x10487d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10027ec0 @ 0x10487ec0 (673 bytes, 346 insns) */
void f_10487ec0(void) {
  FTRACE(0x10487ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10487ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10487ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10487ec3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10487ec6 push esi */
  push32((uint32_t)(ESI));
  /* 10487ec7 mov eax, dword ptr [0x1002dc98] */
  EAX = (r32((uint32_t)(0x1002dc98)));
  /* 10487ecc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10487ecf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10487ed6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10487edd jmp 0x10487ee8 */
  goto L_10487ee8;
L_10487edf:;
  /* 10487edf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10487ee2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487ee5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10487ee8:;
  /* 10487ee8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487eec jae 0x10487f21 */
  if (!C.cf) goto L_10487f21;
  /* 10487eee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10487ef1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487ef4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10487ef7 push ecx */
  push32((uint32_t)(ECX));
  /* 10487ef8 call 0x1047dd40 */
  push32(0x10487efdu); f_1047dd40();
  /* 10487efd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487f00 mov esi, eax */
  ESI = (EAX);
  /* 10487f02 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10487f05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487f08 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10487f0c push ecx */
  push32((uint32_t)(ECX));
  /* 10487f0d call 0x1047dd40 */
  push32(0x10487f12u); f_1047dd40();
  /* 10487f12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487f15 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487f18 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10487f1c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10487f1f jmp 0x10487edf */
  goto L_10487edf;
L_10487f21:;
  /* 10487f21 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10487f28 jmp 0x10487f33 */
  goto L_10487f33;
L_10487f2a:;
  /* 10487f2a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10487f2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487f30 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10487f33:;
  /* 10487f33 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10487f37 jae 0x10487f6d */
  if (!C.cf) goto L_10487f6d;
  /* 10487f39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10487f3c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487f3f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10487f43 push eax */
  push32((uint32_t)(EAX));
  /* 10487f44 call 0x1047dd40 */
  push32(0x10487f49u); f_1047dd40();
  /* 10487f49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487f4c mov esi, eax */
  ESI = (EAX);
  /* 10487f4e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10487f51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487f54 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10487f58 push eax */
  push32((uint32_t)(EAX));
  /* 10487f59 call 0x1047dd40 */
  push32(0x10487f5eu); f_1047dd40();
  /* 10487f5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487f61 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487f64 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10487f68 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10487f6b jmp 0x10487f2a */
  goto L_10487f2a;
L_10487f6d:;
  /* 10487f6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487f70 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10487f76 push eax */
  push32((uint32_t)(EAX));
  /* 10487f77 call 0x1047dd40 */
  push32(0x10487f7cu); f_1047dd40();
  /* 10487f7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487f7f mov esi, eax */
  ESI = (EAX);
  /* 10487f81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487f84 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10487f8a push edx */
  push32((uint32_t)(EDX));
  /* 10487f8b call 0x1047dd40 */
  push32(0x10487f90u); f_1047dd40();
  /* 10487f90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487f93 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487f96 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10487f9a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10487f9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487fa0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10487fa6 push edx */
  push32((uint32_t)(EDX));
  /* 10487fa7 call 0x1047dd40 */
  push32(0x10487facu); f_1047dd40();
  /* 10487fac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487faf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10487fb2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10487fb6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10487fb9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487fbc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10487fc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10487fc3 call 0x1047dd40 */
  push32(0x10487fc8u); f_1047dd40();
  /* 10487fc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487fcb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10487fce lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10487fd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10487fd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10487fd8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10487fde push edx */
  push32((uint32_t)(EDX));
  /* 10487fdf call 0x1047dd40 */
  push32(0x10487fe4u); f_1047dd40();
  /* 10487fe4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10487fe7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10487fea lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10487fee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10487ff1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10487ff4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10487ff9 push eax */
  push32((uint32_t)(EAX));
  /* 10487ffa call 0x1047aef0 */
  push32(0x10487fffu); f_1047aef0();
  /* 10487fff add dword ptr [ebx], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0x0u),_r=_a+_b; w32((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10488002 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488004 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10488005 out dx, al */
  x86_unimpl("out @ 0x10488005");
  /* 10488006 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488008 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048800a add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048800c add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048800e add al, 0 */
  { uint32_t _a=(AL),_b=(0x0u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10488010 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10488011 out dx, al */
  x86_unimpl("out @ 0x10488011");
  /* 10488012 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488014 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488016 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488018 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048801a add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048801c push 0xee */
  push32((uint32_t)(0xeeu));
  /* 10488021 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488023 add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488025 add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488027 add byte ptr [ebp - 0x12], dh */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(C.d.b.h),_r=_a+_b; w8((uint32_t)(EBP + -0x12), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048802a add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048802c add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048802e add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488030 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488032 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488034 lcall 0, 0xee */
  x86_unimpl("lcall @ 0x10488034");
  /* 1048803b add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048803d add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048803f add byte ptr [ecx + 0xee], ah */
  { uint32_t _a=(r8((uint32_t)(ECX + 0xee))),_b=(AH),_r=_a+_b; w8((uint32_t)(ECX + 0xee), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488045 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488047 add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488049 add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048804b add byte ptr [ebp + 0xee], bh */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xee))),_b=(C.b.b.h),_r=_a+_b; w8((uint32_t)(EBP + 0xee), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488051 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488053 add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488055 add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488057 add ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10488059 out dx, al */
  x86_unimpl("out @ 0x10488059");
  /* 1048805a add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048805c add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048805e add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488060 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488062 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488064 test edi, ebp */
  { uint32_t _r=(EDI)&(EBP); fl_logic(_r,32); }
  /* 10488066 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488068 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048806a add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048806c add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048806e add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488070 pushfd  */
  x86_unimpl("pushfd @ 0x10488070");
  /* 10488071 out dx, eax */
  x86_unimpl("out @ 0x10488071");
  /* 10488072 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488074 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488076 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488078 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048807a add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048807c mov byte ptr [0xef], al */
  w8((uint32_t)(0xef), (AL));
  /* 10488081 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488083 add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488085 add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488087 add byte ptr [ecx + 0xef], bh */
  { uint32_t _a=(r8((uint32_t)(ECX + 0xef))),_b=(C.b.b.h),_r=_a+_b; w8((uint32_t)(ECX + 0xef), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048808d add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048808f add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488091 add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488093 add byte ptr [edi + 0xef], bh */
  { uint32_t _a=(r8((uint32_t)(EDI + 0xef))),_b=(C.b.b.h),_r=_a+_b; w8((uint32_t)(EDI + 0xef), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488099 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048809b add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048809d add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048809f add cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 104880a1 out dx, eax */
  x86_unimpl("out @ 0x104880a1");
  /* 104880a2 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880a4 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880a6 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880a8 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104880aa add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104880ac fucomi st(7) */
  { double _a=FPU_ST(0),_b=FPU_ST(7); if(_a>_b){C.zf=0;C.pf=0;C.cf=0;} else if(_a<_b){C.zf=0;C.pf=0;C.cf=1;} else if(_a==_b){C.zf=1;C.pf=0;C.cf=0;} else {C.zf=1;C.pf=1;C.cf=1;} }
  /* 104880ae add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880b0 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880b2 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880b4 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104880b6 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104880b8 out dx, eax */
  x86_unimpl("out @ 0x104880b8");
  /* 104880b9 out dx, eax */
  x86_unimpl("out @ 0x104880b9");
  /* 104880ba add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880bc add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880be add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880c0 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104880c2 add dword ptr [eax], eax */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 104880c4 imul bh */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(C.b.b.h); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 104880c6 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880c8 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880ca add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880cc add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104880ce add al, 0 */
  { uint32_t _a=(AL),_b=(0x0u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104880d0 cld  */
  C.df=0;
  /* 104880d1 out dx, eax */
  x86_unimpl("out @ 0x104880d1");
  /* 104880d2 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880d4 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880d6 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880d8 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104880da add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104880dc add dh, al */
  { uint32_t _a=(C.d.b.h),_b=(AL),_r=_a+_b; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 104880de add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880e0 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880e2 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880e4 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104880e6 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104880e8 adc dh, al */
  { uint32_t _a=(C.d.b.h),_b=(AL),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 104880ea add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880ec add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880ee add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880f0 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104880f2 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104880f4 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 104880f6 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880f8 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880fa add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104880fc add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104880fe add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488100 lock add byte ptr cs:[eax], al */
  x86_unimpl("lock add @ 0x10488100");
  /* 10488104 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488106 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488108 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1048810a:;
  /* 1048810a add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048810c pop ebp */
  EBP = (pop32());
  /* 1048810d lock add byte ptr [eax], al */
  x86_unimpl("lock add @ 0x1048810d");
  /* 10488110 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488112 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488114 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488116 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488118 js 0x1048810a */
  if (C.sf) goto L_1048810a;
  /* 1048811a add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048811c add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048811e add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488120 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488122 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488124 xor al, 0 */
  { uint32_t _r=(AL)^(0x0u); AL = (_r); fl_logic(_r,8); }
  /* 10488127 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488129 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048812b add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048812d add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048812f add byte ptr [edx + 0xf0], bl */
  { uint32_t _a=(r8((uint32_t)(EDX + 0xf0))),_b=(BL),_r=_a+_b; w8((uint32_t)(EDX + 0xf0), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488135 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488137 add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488139 add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048813b add byte ptr [edi + 0xf0], dh */
  { uint32_t _a=(r8((uint32_t)(EDI + 0xf0))),_b=(C.d.b.h),_r=_a+_b; w8((uint32_t)(EDI + 0xf0), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488141 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488143 add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488145 add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488147 add dl, dl */
  { uint32_t _a=(DL),_b=(DL),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10488149 lock add byte ptr [eax], al */
  x86_unimpl("lock add @ 0x10488149");
  /* 1048814c add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048814e add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488150 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488152 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488154 fdivr st(0), st(0) */
  FPU_ST(0) = FPU_ST(0) / FPU_ST(0);
  /* 10488156 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488158 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048815a add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048815c add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048815e add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488160 hlt  */
  x86_unimpl("hlt @ 0x10488160");
  /* 10488161 lock add byte ptr [eax], al */
  x86_unimpl("lock add @ 0x10488161");
  /* 10488164 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488166 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488168 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048816a add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048816c pop es */
  C.seg_es = (pop32());
  /* 1048816d int1  */
  x86_unimpl("int1 @ 0x1048816d");
  /* 1048816e add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488170 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488172 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488174 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488176 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488178 adc esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1048817a add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048817c add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048817e add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488180 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488182 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488184 sbb esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b-C.cf; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10488186 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488188 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048818a add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1048818c add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048818e add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488190 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10488192 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488194 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488196 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488198 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048819a add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1048819c daa  */
  x86_unimpl("daa @ 0x1048819c");
  /* 1048819d int1  */
  x86_unimpl("int1 @ 0x1048819d");
  /* 1048819e add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881a0 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881a2 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881a4 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104881a6 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104881a8 xor dh, cl */
  { uint32_t _r=(C.d.b.h)^(CL); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 104881aa add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881ac add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881ae add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881b0 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104881b2 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104881b4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 104881b5 int1  */
  x86_unimpl("int1 @ 0x104881b5");
  /* 104881b6 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881b8 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881ba add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881bc add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104881be add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104881c0 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 104881c1 int1  */
  x86_unimpl("int1 @ 0x104881c1");
  /* 104881c2 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881c4 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881c6 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881c8 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104881ca add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104881cc push esi */
  push32((uint32_t)(ESI));
  /* 104881cd int1  */
  x86_unimpl("int1 @ 0x104881cd");
  /* 104881ce add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881d0 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881d2 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881d4 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104881d6 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104881d8 push 0xf1 */
  push32((uint32_t)(0xf1u));
  /* 104881dd add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881df add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881e1 add byte ptr [ebx], al */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
L_104881e3:;
  /* 104881e3 add byte ptr [edi - 0xf], ch */
  { uint32_t _a=(r8((uint32_t)(EDI + -0xf))),_b=(C.c.b.h),_r=_a+_b; w8((uint32_t)(EDI + -0xf), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881e6 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881e8 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881ea add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881ec add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104881ee add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104881f0 js 0x104881e3 */
  if (C.sf) goto L_104881e3;
  /* 104881f2 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881f4 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881f6 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 104881f8 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104881fa add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104881fc jle 0x104881ef */
  if ((C.zf||C.sf!=C.of)) goto L_104881ef;
  /* 104881fe add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488200 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488202 add byte ptr [eax], al */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(AL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10488204 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10488206 add eax, dword ptr [eax] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_104881ef: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x104881ef (unresolved jump table)"); return;
}

