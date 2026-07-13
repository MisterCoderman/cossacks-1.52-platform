#include "recomp.h"

/* FUN_10006780 @ 0x12d66780 (151 bytes, 46 insns) */
void f_12d66780(void) {
  FTRACE(0x12d66780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66780 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66781 mov ebp, esp */
  EBP = (ESP);
  /* 12d66783 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66784 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66787 cmp dword ptr [eax*4 + 0x12d7cb60], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12d7cb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6678f jne 0x12d66802 */
  if (!C.zf) goto L_12d66802;
  /* 12d66791 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12d66796 push 0x12d79e44 */
  push32((uint32_t)(0x12d79e44u));
  /* 12d6679b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6679d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12d6679f call 0x12d62d80 */
  push32(0x12d667a4u); f_12d62d80();
  /* 12d667a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d667a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d667aa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d667ae jne 0x12d667ba */
  if (!C.zf) goto L_12d667ba;
  /* 12d667b0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d667b2 call 0x12d61cf0 */
  push32(0x12d667b7u); f_12d61cf0();
  /* 12d667b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d667ba:;
  /* 12d667ba push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d667bc call 0x12d66780 */
  push32(0x12d667c1u); f_12d66780();
  /* 12d667c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d667c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d667c7 cmp dword ptr [ecx*4 + 0x12d7cb60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12d7cb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d667cf jne 0x12d667ea */
  if (!C.zf) goto L_12d667ea;
  /* 12d667d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d667d4 push edx */
  push32((uint32_t)(EDX));
  /* 12d667d5 call dword ptr [0x12d8031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8031c))), 0x12d667dbu);
  /* 12d667db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d667de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d667e1 mov dword ptr [eax*4 + 0x12d7cb60], ecx */
  w32((uint32_t)(EAX*4 + 0x12d7cb60), (ECX));
  /* 12d667e8 jmp 0x12d667f8 */
  goto L_12d667f8;
L_12d667ea:;
  /* 12d667ea push 2 */
  push32((uint32_t)(0x2u));
  /* 12d667ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d667ef push edx */
  push32((uint32_t)(EDX));
  /* 12d667f0 call 0x12d63810 */
  push32(0x12d667f5u); f_12d63810();
  /* 12d667f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d667f8:;
  /* 12d667f8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d667fa call 0x12d66820 */
  push32(0x12d667ffu); f_12d66820();
  /* 12d667ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d66802:;
  /* 12d66802 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66805 mov ecx, dword ptr [eax*4 + 0x12d7cb60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d7cb60)));
  /* 12d6680c push ecx */
  push32((uint32_t)(ECX));
  /* 12d6680d call dword ptr [0x12d80320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80320))), 0x12d66813u);
  /* 12d66813 mov esp, ebp */
  ESP = (EBP);
  /* 12d66815 pop ebp */
  EBP = (pop32());
  /* 12d66816 ret  */
  ESPCHK(0x12d66780u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x12d66820 (22 bytes, 8 insns) */
void f_12d66820(void) {
  FTRACE(0x12d66820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66820 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66821 mov ebp, esp */
  EBP = (ESP);
  /* 12d66823 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66826 mov ecx, dword ptr [eax*4 + 0x12d7cb60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d7cb60)));
  /* 12d6682d push ecx */
  push32((uint32_t)(ECX));
  /* 12d6682e call dword ptr [0x12d80324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80324))), 0x12d66834u);
  /* 12d66834 pop ebp */
  EBP = (pop32());
  /* 12d66835 ret  */
  ESPCHK(0x12d66820u, _esp0);
  ESP += 4; return;
}

/* FUN_10006840 @ 0x12d66840 (26 bytes, 10 insns) */
void f_12d66840(void) {
  FTRACE(0x12d66840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66840 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66841 mov ebp, esp */
  EBP = (ESP);
  /* 12d66843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66846 push eax */
  push32((uint32_t)(EAX));
  /* 12d66847 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d66849 call dword ptr [0x12d80328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80328))), 0x12d6684fu);
  /* 12d6684f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12d66854 call dword ptr [0x12d802ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802ac))), 0x12d6685au);
  /* 12d6685a pop ebp */
  EBP = (pop32());
  /* 12d6685b ret  */
  ESPCHK(0x12d66840u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12d66860 (446 bytes, 130 insns) */
void f_12d66860(void) {
  FTRACE(0x12d66860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66860 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66861 mov ebp, esp */
  EBP = (ESP);
  /* 12d66863 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d66866 call 0x12d627c0 */
  push32(0x12d6686bu); f_12d627c0();
  /* 12d6686b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d6686e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d66871 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12d66874 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66875 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66878 push edx */
  push32((uint32_t)(EDX));
  /* 12d66879 call 0x12d66a20 */
  push32(0x12d6687eu); f_12d66a20();
  /* 12d6687e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66881 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d66884 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66888 je 0x12d66893 */
  if (C.zf) goto L_12d66893;
  /* 12d6688a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6688d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66891 jne 0x12d668a2 */
  if (!C.zf) goto L_12d668a2;
L_12d66893:;
  /* 12d66893 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66896 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66897 call dword ptr [0x12d8032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8032c))), 0x12d6689du);
  /* 12d6689d jmp 0x12d66a1a */
  goto L_12d66a1a;
L_12d668a2:;
  /* 12d668a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d668a5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d668a9 jne 0x12d668bf */
  if (!C.zf) goto L_12d668bf;
  /* 12d668ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d668ae mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12d668b5 mov eax, 1 */
  EAX = (0x1u);
  /* 12d668ba jmp 0x12d66a1a */
  goto L_12d66a1a;
L_12d668bf:;
  /* 12d668bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d668c2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d668c6 jne 0x12d668d0 */
  if (!C.zf) goto L_12d668d0;
  /* 12d668c8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d668cb jmp 0x12d66a1a */
  goto L_12d66a1a;
L_12d668d0:;
  /* 12d668d0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d668d3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d668d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d668d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d668dc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 12d668df mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d668e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d668e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d668e8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 12d668eb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d668ee cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d668f2 jne 0x12d669f7 */
  if (!C.zf) goto L_12d669f7;
  /* 12d668f8 mov eax, dword ptr [0x12d7cc98] */
  EAX = (r32((uint32_t)(0x12d7cc98)));
  /* 12d668fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d66900 jmp 0x12d6690b */
  goto L_12d6690b;
L_12d66902:;
  /* 12d66902 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d66905 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66908 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12d6690b:;
  /* 12d6690b mov edx, dword ptr [0x12d7cc98] */
  EDX = (r32((uint32_t)(0x12d7cc98)));
  /* 12d66911 add edx, dword ptr [0x12d7cc9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d7cc9c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66917 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6691a jge 0x12d66932 */
  if ((C.sf==C.of)) goto L_12d66932;
  /* 12d6691c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6691f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d66922 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d66925 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12d66928 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12d66930 jmp 0x12d66902 */
  goto L_12d66902;
L_12d66932:;
  /* 12d66932 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d66935 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12d66938 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6693b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6693e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66944 jne 0x12d66955 */
  if (!C.zf) goto L_12d66955;
  /* 12d66946 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d66949 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12d66950 jmp 0x12d669dd */
  goto L_12d669dd;
L_12d66955:;
  /* 12d66955 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d66958 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6695e jne 0x12d6696c */
  if (!C.zf) goto L_12d6696c;
  /* 12d66960 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d66963 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 12d6696a jmp 0x12d669dd */
  goto L_12d669dd;
L_12d6696c:;
  /* 12d6696c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6696f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66975 jne 0x12d66983 */
  if (!C.zf) goto L_12d66983;
  /* 12d66977 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6697a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12d66981 jmp 0x12d669dd */
  goto L_12d669dd;
L_12d66983:;
  /* 12d66983 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d66986 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6698c jne 0x12d6699a */
  if (!C.zf) goto L_12d6699a;
  /* 12d6698e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d66991 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12d66998 jmp 0x12d669dd */
  goto L_12d669dd;
L_12d6699a:;
  /* 12d6699a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6699d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d669a3 jne 0x12d669b1 */
  if (!C.zf) goto L_12d669b1;
  /* 12d669a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d669a8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 12d669af jmp 0x12d669dd */
  goto L_12d669dd;
L_12d669b1:;
  /* 12d669b1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d669b4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d669ba jne 0x12d669c8 */
  if (!C.zf) goto L_12d669c8;
  /* 12d669bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d669bf mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12d669c6 jmp 0x12d669dd */
  goto L_12d669dd;
L_12d669c8:;
  /* 12d669c8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d669cb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d669d1 jne 0x12d669dd */
  if (!C.zf) goto L_12d669dd;
  /* 12d669d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d669d6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_12d669dd:;
  /* 12d669dd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d669e0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12d669e3 push edx */
  push32((uint32_t)(EDX));
  /* 12d669e4 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d669e6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12d669e9u);
  /* 12d669e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d669ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d669ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d669f2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12d669f5 jmp 0x12d66a0e */
  goto L_12d66a0e;
L_12d669f7:;
  /* 12d669f7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d669fa mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12d66a01 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d66a04 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d66a07 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66a08 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12d66a0bu);
  /* 12d66a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d66a0e:;
  /* 12d66a0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d66a11 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d66a14 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12d66a17 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d66a1a:;
  /* 12d66a1a mov esp, ebp */
  ESP = (EBP);
  /* 12d66a1c pop ebp */
  EBP = (pop32());
  /* 12d66a1d ret  */
  ESPCHK(0x12d66860u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a20 @ 0x12d66a20 (89 bytes, 35 insns) */
void f_12d66a20(void) {
  FTRACE(0x12d66a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66a21 mov ebp, esp */
  EBP = (ESP);
  /* 12d66a23 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66a24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66a27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d66a2a:;
  /* 12d66a2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66a2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d66a2f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66a32 je 0x12d66a52 */
  if (C.zf) goto L_12d66a52;
  /* 12d66a34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66a37 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66a3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d66a3d mov ecx, dword ptr [0x12d7cca4] */
  ECX = (r32((uint32_t)(0x12d7cca4)));
  /* 12d66a43 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d66a46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66a49 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66a4b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66a4e jae 0x12d66a52 */
  if (!C.cf) goto L_12d66a52;
  /* 12d66a50 jmp 0x12d66a2a */
  goto L_12d66a2a;
L_12d66a52:;
  /* 12d66a52 mov eax, dword ptr [0x12d7cca4] */
  EAX = (r32((uint32_t)(0x12d7cca4)));
  /* 12d66a57 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d66a5a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66a5d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66a5f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66a62 jae 0x12d66a6e */
  if (!C.cf) goto L_12d66a6e;
  /* 12d66a64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66a67 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d66a69 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66a6c je 0x12d66a72 */
  if (C.zf) goto L_12d66a72;
L_12d66a6e:;
  /* 12d66a6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d66a70 jmp 0x12d66a75 */
  goto L_12d66a75;
L_12d66a72:;
  /* 12d66a72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d66a75:;
  /* 12d66a75 mov esp, ebp */
  ESP = (EBP);
  /* 12d66a77 pop ebp */
  EBP = (pop32());
  /* 12d66a78 ret  */
  ESPCHK(0x12d66a20u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12d66a80 (48 bytes, 17 insns) */
void f_12d66a80(void) {
  FTRACE(0x12d66a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66a81 mov ebp, esp */
  EBP = (ESP);
  /* 12d66a83 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66a84 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d66a86 call 0x12d66780 */
  push32(0x12d66a8bu); f_12d66780();
  /* 12d66a8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66a8e mov eax, dword ptr [0x12d7e66c] */
  EAX = (r32((uint32_t)(0x12d7e66c)));
  /* 12d66a93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d66a96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66a99 mov dword ptr [0x12d7e66c], ecx */
  w32((uint32_t)(0x12d7e66c), (ECX));
  /* 12d66a9f push 9 */
  push32((uint32_t)(0x9u));
  /* 12d66aa1 call 0x12d66820 */
  push32(0x12d66aa6u); f_12d66820();
  /* 12d66aa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66aa9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66aac mov esp, ebp */
  ESP = (EBP);
  /* 12d66aae pop ebp */
  EBP = (pop32());
  /* 12d66aaf ret  */
  ESPCHK(0x12d66a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ab0 @ 0x12d66ab0 (10 bytes, 5 insns) */
void f_12d66ab0(void) {
  FTRACE(0x12d66ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12d66ab3 mov eax, dword ptr [0x12d7e66c] */
  EAX = (r32((uint32_t)(0x12d7e66c)));
  /* 12d66ab8 pop ebp */
  EBP = (pop32());
  /* 12d66ab9 ret  */
  ESPCHK(0x12d66ab0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12d66ac0 (45 bytes, 19 insns) */
void f_12d66ac0(void) {
  FTRACE(0x12d66ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12d66ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66ac4 mov eax, dword ptr [0x12d7e66c] */
  EAX = (r32((uint32_t)(0x12d7e66c)));
  /* 12d66ac9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d66acc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66ad0 je 0x12d66ae0 */
  if (C.zf) goto L_12d66ae0;
  /* 12d66ad2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66ad5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66ad6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12d66ad9u);
  /* 12d66ad9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66adc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d66ade jne 0x12d66ae4 */
  if (!C.zf) goto L_12d66ae4;
L_12d66ae0:;
  /* 12d66ae0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d66ae2 jmp 0x12d66ae9 */
  goto L_12d66ae9;
L_12d66ae4:;
  /* 12d66ae4 mov eax, 1 */
  EAX = (0x1u);
L_12d66ae9:;
  /* 12d66ae9 mov esp, ebp */
  ESP = (EBP);
  /* 12d66aeb pop ebp */
  EBP = (pop32());
  /* 12d66aec ret  */
  ESPCHK(0x12d66ac0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12d66af0 (88 bytes, 40 insns) */
void f_12d66af0(void) {
  FTRACE(0x12d66af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66af0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d66af4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d66af8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d66afa je 0x12d66b43 */
  if (C.zf) goto L_12d66b43;
  /* 12d66afc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d66afe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12d66b02 push edi */
  push32((uint32_t)(EDI));
  /* 12d66b03 mov edi, ecx */
  EDI = (ECX);
  /* 12d66b05 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66b08 jb 0x12d66b37 */
  if (C.cf) goto L_12d66b37;
  /* 12d66b0a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d66b0c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12d66b0f je 0x12d66b19 */
  if (C.zf) goto L_12d66b19;
  /* 12d66b11 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12d66b13:;
  /* 12d66b13 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d66b15 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d66b16 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d66b17 jne 0x12d66b13 */
  if (!C.zf) goto L_12d66b13;
L_12d66b19:;
  /* 12d66b19 mov ecx, eax */
  ECX = (EAX);
  /* 12d66b1b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12d66b1e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66b20 mov ecx, eax */
  ECX = (EAX);
  /* 12d66b22 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12d66b25 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66b27 mov ecx, edx */
  ECX = (EDX);
  /* 12d66b29 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d66b2c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d66b2f je 0x12d66b37 */
  if (C.zf) goto L_12d66b37;
  /* 12d66b31 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d66b33 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d66b35 je 0x12d66b3d */
  if (C.zf) goto L_12d66b3d;
L_12d66b37:;
  /* 12d66b37 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d66b39 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d66b3a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12d66b3b jne 0x12d66b37 */
  if (!C.zf) goto L_12d66b37;
L_12d66b3d:;
  /* 12d66b3d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d66b41 pop edi */
  EDI = (pop32());
  /* 12d66b42 ret  */
  ESPCHK(0x12d66af0u, _esp0);
  ESP += 4; return;
L_12d66b43:;
  /* 12d66b43 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d66b47 ret  */
  ESPCHK(0x12d66af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b50 @ 0x12d66b50 (23 bytes, 10 insns) */
void f_12d66b50(void) {
  FTRACE(0x12d66b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66b51 mov ebp, esp */
  EBP = (ESP);
  /* 12d66b53 mov eax, dword ptr [0x12d7e668] */
  EAX = (r32((uint32_t)(0x12d7e668)));
  /* 12d66b58 push eax */
  push32((uint32_t)(EAX));
  /* 12d66b59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66b5c push ecx */
  push32((uint32_t)(ECX));
  /* 12d66b5d call 0x12d66b70 */
  push32(0x12d66b62u); f_12d66b70();
  /* 12d66b62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66b65 pop ebp */
  EBP = (pop32());
  /* 12d66b66 ret  */
  ESPCHK(0x12d66b50u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12d66b70 (87 bytes, 34 insns) */
void f_12d66b70(void) {
  FTRACE(0x12d66b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66b71 mov ebp, esp */
  EBP = (ESP);
  /* 12d66b73 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66b74 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66b78 jbe 0x12d66b7e */
  if ((C.cf||C.zf)) goto L_12d66b7e;
  /* 12d66b7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d66b7c jmp 0x12d66bc3 */
  goto L_12d66bc3;
L_12d66b7e:;
  /* 12d66b7e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66b82 ja 0x12d66b95 */
  if ((!C.cf&&!C.zf)) goto L_12d66b95;
  /* 12d66b84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66b87 push eax */
  push32((uint32_t)(EAX));
  /* 12d66b88 call 0x12d66bd0 */
  push32(0x12d66b8du); f_12d66bd0();
  /* 12d66b8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66b90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d66b93 jmp 0x12d66b9c */
  goto L_12d66b9c;
L_12d66b95:;
  /* 12d66b95 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d66b9c:;
  /* 12d66b9c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66ba0 jne 0x12d66ba8 */
  if (!C.zf) goto L_12d66ba8;
  /* 12d66ba2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66ba6 jne 0x12d66bad */
  if (!C.zf) goto L_12d66bad;
L_12d66ba8:;
  /* 12d66ba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66bab jmp 0x12d66bc3 */
  goto L_12d66bc3;
L_12d66bad:;
  /* 12d66bad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66bb0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66bb1 call 0x12d66ac0 */
  push32(0x12d66bb6u); f_12d66ac0();
  /* 12d66bb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66bb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d66bbb jne 0x12d66bc1 */
  if (!C.zf) goto L_12d66bc1;
  /* 12d66bbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d66bbf jmp 0x12d66bc3 */
  goto L_12d66bc3;
L_12d66bc1:;
  /* 12d66bc1 jmp 0x12d66b7e */
  goto L_12d66b7e;
L_12d66bc3:;
  /* 12d66bc3 mov esp, ebp */
  ESP = (EBP);
  /* 12d66bc5 pop ebp */
  EBP = (pop32());
  /* 12d66bc6 ret  */
  ESPCHK(0x12d66b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bd0 @ 0x12d66bd0 (109 bytes, 37 insns) */
void f_12d66bd0(void) {
  FTRACE(0x12d66bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12d66bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66bd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66bd7 cmp eax, dword ptr [0x12d7ccb4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7ccb4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66bdd ja 0x12d66c0d */
  if ((!C.cf&&!C.zf)) goto L_12d66c0d;
  /* 12d66bdf push 9 */
  push32((uint32_t)(0x9u));
  /* 12d66be1 call 0x12d66780 */
  push32(0x12d66be6u); f_12d66780();
  /* 12d66be6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66be9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66bec push ecx */
  push32((uint32_t)(ECX));
  /* 12d66bed call 0x12d67710 */
  push32(0x12d66bf2u); f_12d67710();
  /* 12d66bf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66bf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d66bf8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d66bfa call 0x12d66820 */
  push32(0x12d66bffu); f_12d66820();
  /* 12d66bff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66c02 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66c06 je 0x12d66c0d */
  if (C.zf) goto L_12d66c0d;
  /* 12d66c08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66c0b jmp 0x12d66c39 */
  goto L_12d66c39;
L_12d66c0d:;
  /* 12d66c0d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66c11 jne 0x12d66c1a */
  if (!C.zf) goto L_12d66c1a;
  /* 12d66c13 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_12d66c1a:;
  /* 12d66c1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66c1d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66c20 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12d66c23 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d66c26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66c29 push eax */
  push32((uint32_t)(EAX));
  /* 12d66c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d66c2c mov ecx, dword ptr [0x12d7fe2c] */
  ECX = (r32((uint32_t)(0x12d7fe2c)));
  /* 12d66c32 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66c33 call dword ptr [0x12d80330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80330))), 0x12d66c39u);
L_12d66c39:;
  /* 12d66c39 mov esp, ebp */
  ESP = (EBP);
  /* 12d66c3b pop ebp */
  EBP = (pop32());
  /* 12d66c3c ret  */
  ESPCHK(0x12d66bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c40 @ 0x12d66c40 (10 bytes, 5 insns) */
void f_12d66c40(void) {
  FTRACE(0x12d66c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66c41 mov ebp, esp */
  EBP = (ESP);
  /* 12d66c43 mov eax, 1 */
  EAX = (0x1u);
  /* 12d66c48 pop ebp */
  EBP = (pop32());
  /* 12d66c49 ret  */
  ESPCHK(0x12d66c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c50 @ 0x12d66c50 (173 bytes, 59 insns) */
void f_12d66c50(void) {
  FTRACE(0x12d66c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66c51 mov ebp, esp */
  EBP = (ESP);
  /* 12d66c53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d66c56 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66c5a jbe 0x12d66c63 */
  if ((C.cf||C.zf)) goto L_12d66c63;
  /* 12d66c5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d66c5e jmp 0x12d66cf9 */
  goto L_12d66cf9;
L_12d66c63:;
  /* 12d66c63 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d66c65 call 0x12d66780 */
  push32(0x12d66c6au); f_12d66780();
  /* 12d66c6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66c6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66c70 push eax */
  push32((uint32_t)(EAX));
  /* 12d66c71 call 0x12d67080 */
  push32(0x12d66c76u); f_12d67080();
  /* 12d66c76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66c79 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d66c7c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66c80 je 0x12d66cc1 */
  if (C.zf) goto L_12d66cc1;
  /* 12d66c82 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d66c89 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66c8c cmp ecx, dword ptr [0x12d7ccb4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7ccb4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66c92 ja 0x12d66cb2 */
  if ((!C.cf&&!C.zf)) goto L_12d66cb2;
  /* 12d66c94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66c97 push edx */
  push32((uint32_t)(EDX));
  /* 12d66c98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66c9b push eax */
  push32((uint32_t)(EAX));
  /* 12d66c9c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d66c9f push ecx */
  push32((uint32_t)(ECX));
  /* 12d66ca0 call 0x12d67f50 */
  push32(0x12d66ca5u); f_12d67f50();
  /* 12d66ca5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66ca8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d66caa je 0x12d66cb2 */
  if (C.zf) goto L_12d66cb2;
  /* 12d66cac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66caf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d66cb2:;
  /* 12d66cb2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d66cb4 call 0x12d66820 */
  push32(0x12d66cb9u); f_12d66820();
  /* 12d66cb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66cbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66cbf jmp 0x12d66cf9 */
  goto L_12d66cf9;
L_12d66cc1:;
  /* 12d66cc1 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d66cc3 call 0x12d66820 */
  push32(0x12d66cc8u); f_12d66820();
  /* 12d66cc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66ccb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66ccf jne 0x12d66cd8 */
  if (!C.zf) goto L_12d66cd8;
  /* 12d66cd1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12d66cd8:;
  /* 12d66cd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66cdb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66cde and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12d66ce0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12d66ce3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66ce6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66ce7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66cea push edx */
  push32((uint32_t)(EDX));
  /* 12d66ceb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12d66ced mov eax, dword ptr [0x12d7fe2c] */
  EAX = (r32((uint32_t)(0x12d7fe2c)));
  /* 12d66cf2 push eax */
  push32((uint32_t)(EAX));
  /* 12d66cf3 call dword ptr [0x12d80334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80334))), 0x12d66cf9u);
L_12d66cf9:;
  /* 12d66cf9 mov esp, ebp */
  ESP = (EBP);
  /* 12d66cfb pop ebp */
  EBP = (pop32());
  /* 12d66cfc ret  */
  ESPCHK(0x12d66c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d00 @ 0x12d66d00 (490 bytes, 165 insns) */
void f_12d66d00(void) {
  FTRACE(0x12d66d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66d01 mov ebp, esp */
  EBP = (ESP);
  /* 12d66d03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d66d06 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66d0a jne 0x12d66d1d */
  if (!C.zf) goto L_12d66d1d;
  /* 12d66d0c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66d0f push eax */
  push32((uint32_t)(EAX));
  /* 12d66d10 call 0x12d66b50 */
  push32(0x12d66d15u); f_12d66b50();
  /* 12d66d15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66d18 jmp 0x12d66ee6 */
  goto L_12d66ee6;
L_12d66d1d:;
  /* 12d66d1d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66d21 jne 0x12d66d36 */
  if (!C.zf) goto L_12d66d36;
  /* 12d66d23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66d26 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66d27 call 0x12d66ef0 */
  push32(0x12d66d2cu); f_12d66ef0();
  /* 12d66d2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66d2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d66d31 jmp 0x12d66ee6 */
  goto L_12d66ee6;
L_12d66d36:;
  /* 12d66d36 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d66d3d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66d41 ja 0x12d66eb9 */
  if ((!C.cf&&!C.zf)) goto L_12d66eb9;
  /* 12d66d47 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d66d49 call 0x12d66780 */
  push32(0x12d66d4eu); f_12d66780();
  /* 12d66d4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66d51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66d54 push edx */
  push32((uint32_t)(EDX));
  /* 12d66d55 call 0x12d67080 */
  push32(0x12d66d5au); f_12d67080();
  /* 12d66d5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66d5d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d66d60 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66d64 je 0x12d66e7c */
  if (C.zf) goto L_12d66e7c;
  /* 12d66d6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66d6d cmp eax, dword ptr [0x12d7ccb4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7ccb4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66d73 ja 0x12d66df0 */
  if ((!C.cf&&!C.zf)) goto L_12d66df0;
  /* 12d66d75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66d78 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66d79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66d7c push edx */
  push32((uint32_t)(EDX));
  /* 12d66d7d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d66d80 push eax */
  push32((uint32_t)(EAX));
  /* 12d66d81 call 0x12d67f50 */
  push32(0x12d66d86u); f_12d67f50();
  /* 12d66d86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66d89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d66d8b je 0x12d66d95 */
  if (C.zf) goto L_12d66d95;
  /* 12d66d8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66d90 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d66d93 jmp 0x12d66df0 */
  goto L_12d66df0;
L_12d66d95:;
  /* 12d66d95 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66d98 push edx */
  push32((uint32_t)(EDX));
  /* 12d66d99 call 0x12d67710 */
  push32(0x12d66d9eu); f_12d67710();
  /* 12d66d9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66da1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d66da4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66da8 je 0x12d66df0 */
  if (C.zf) goto L_12d66df0;
  /* 12d66daa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66dad mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12d66db0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d66db3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d66db6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66db9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66dbc jae 0x12d66dc6 */
  if (!C.cf) goto L_12d66dc6;
  /* 12d66dbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66dc1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d66dc4 jmp 0x12d66dcc */
  goto L_12d66dcc;
L_12d66dc6:;
  /* 12d66dc6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66dc9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d66dcc:;
  /* 12d66dcc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d66dcf push edx */
  push32((uint32_t)(EDX));
  /* 12d66dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66dd3 push eax */
  push32((uint32_t)(EAX));
  /* 12d66dd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d66dd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66dd8 call 0x12d69660 */
  push32(0x12d66dddu); f_12d69660();
  /* 12d66ddd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66de0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66de3 push edx */
  push32((uint32_t)(EDX));
  /* 12d66de4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d66de7 push eax */
  push32((uint32_t)(EAX));
  /* 12d66de8 call 0x12d67140 */
  push32(0x12d66dedu); f_12d67140();
  /* 12d66ded add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d66df0:;
  /* 12d66df0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66df4 jne 0x12d66e70 */
  if (!C.zf) goto L_12d66e70;
  /* 12d66df6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66dfa jne 0x12d66e03 */
  if (!C.zf) goto L_12d66e03;
  /* 12d66dfc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12d66e03:;
  /* 12d66e03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66e06 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66e09 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12d66e0c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12d66e0f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66e12 push edx */
  push32((uint32_t)(EDX));
  /* 12d66e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d66e15 mov eax, dword ptr [0x12d7fe2c] */
  EAX = (r32((uint32_t)(0x12d7fe2c)));
  /* 12d66e1a push eax */
  push32((uint32_t)(EAX));
  /* 12d66e1b call dword ptr [0x12d80330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80330))), 0x12d66e21u);
  /* 12d66e21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d66e24 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66e28 je 0x12d66e70 */
  if (C.zf) goto L_12d66e70;
  /* 12d66e2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66e2d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12d66e30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d66e33 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d66e36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66e39 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66e3c jae 0x12d66e46 */
  if (!C.cf) goto L_12d66e46;
  /* 12d66e3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66e41 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d66e44 jmp 0x12d66e4c */
  goto L_12d66e4c;
L_12d66e46:;
  /* 12d66e46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66e49 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12d66e4c:;
  /* 12d66e4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d66e4f push eax */
  push32((uint32_t)(EAX));
  /* 12d66e50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66e53 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66e54 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d66e57 push edx */
  push32((uint32_t)(EDX));
  /* 12d66e58 call 0x12d69660 */
  push32(0x12d66e5du); f_12d69660();
  /* 12d66e5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66e60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66e63 push eax */
  push32((uint32_t)(EAX));
  /* 12d66e64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d66e67 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66e68 call 0x12d67140 */
  push32(0x12d66e6du); f_12d67140();
  /* 12d66e6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d66e70:;
  /* 12d66e70 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d66e72 call 0x12d66820 */
  push32(0x12d66e77u); f_12d66820();
  /* 12d66e77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66e7a jmp 0x12d66eb9 */
  goto L_12d66eb9;
L_12d66e7c:;
  /* 12d66e7c push 9 */
  push32((uint32_t)(0x9u));
  /* 12d66e7e call 0x12d66820 */
  push32(0x12d66e83u); f_12d66820();
  /* 12d66e83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66e86 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66e8a jne 0x12d66e93 */
  if (!C.zf) goto L_12d66e93;
  /* 12d66e8c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12d66e93:;
  /* 12d66e93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66e96 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66e99 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12d66e9c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12d66e9f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66ea2 push eax */
  push32((uint32_t)(EAX));
  /* 12d66ea3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66ea6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d66ea9 mov edx, dword ptr [0x12d7fe2c] */
  EDX = (r32((uint32_t)(0x12d7fe2c)));
  /* 12d66eaf push edx */
  push32((uint32_t)(EDX));
  /* 12d66eb0 call dword ptr [0x12d80334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80334))), 0x12d66eb6u);
  /* 12d66eb6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d66eb9:;
  /* 12d66eb9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66ebd jne 0x12d66ec8 */
  if (!C.zf) goto L_12d66ec8;
  /* 12d66ebf cmp dword ptr [0x12d7e668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66ec6 jne 0x12d66ecd */
  if (!C.zf) goto L_12d66ecd;
L_12d66ec8:;
  /* 12d66ec8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d66ecb jmp 0x12d66ee6 */
  goto L_12d66ee6;
L_12d66ecd:;
  /* 12d66ecd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66ed0 push eax */
  push32((uint32_t)(EAX));
  /* 12d66ed1 call 0x12d66ac0 */
  push32(0x12d66ed6u); f_12d66ac0();
  /* 12d66ed6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66ed9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d66edb jne 0x12d66ee1 */
  if (!C.zf) goto L_12d66ee1;
  /* 12d66edd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d66edf jmp 0x12d66ee6 */
  goto L_12d66ee6;
L_12d66ee1:;
  /* 12d66ee1 jmp 0x12d66d36 */
  goto L_12d66d36;
L_12d66ee6:;
  /* 12d66ee6 mov esp, ebp */
  ESP = (EBP);
  /* 12d66ee8 pop ebp */
  EBP = (pop32());
  /* 12d66ee9 ret  */
  ESPCHK(0x12d66d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ef0 @ 0x12d66ef0 (104 bytes, 38 insns) */
void f_12d66ef0(void) {
  FTRACE(0x12d66ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12d66ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66ef4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66ef8 jne 0x12d66efc */
  if (!C.zf) goto L_12d66efc;
  /* 12d66efa jmp 0x12d66f54 */
  goto L_12d66f54;
L_12d66efc:;
  /* 12d66efc push 9 */
  push32((uint32_t)(0x9u));
  /* 12d66efe call 0x12d66780 */
  push32(0x12d66f03u); f_12d66780();
  /* 12d66f03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66f06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66f09 push eax */
  push32((uint32_t)(EAX));
  /* 12d66f0a call 0x12d67080 */
  push32(0x12d66f0fu); f_12d67080();
  /* 12d66f0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66f12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d66f15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66f19 je 0x12d66f37 */
  if (C.zf) goto L_12d66f37;
  /* 12d66f1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66f1e push ecx */
  push32((uint32_t)(ECX));
  /* 12d66f1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66f22 push edx */
  push32((uint32_t)(EDX));
  /* 12d66f23 call 0x12d67140 */
  push32(0x12d66f28u); f_12d67140();
  /* 12d66f28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66f2b push 9 */
  push32((uint32_t)(0x9u));
  /* 12d66f2d call 0x12d66820 */
  push32(0x12d66f32u); f_12d66820();
  /* 12d66f32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66f35 jmp 0x12d66f54 */
  goto L_12d66f54;
L_12d66f37:;
  /* 12d66f37 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d66f39 call 0x12d66820 */
  push32(0x12d66f3eu); f_12d66820();
  /* 12d66f3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66f41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66f44 push eax */
  push32((uint32_t)(EAX));
  /* 12d66f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d66f47 mov ecx, dword ptr [0x12d7fe2c] */
  ECX = (r32((uint32_t)(0x12d7fe2c)));
  /* 12d66f4d push ecx */
  push32((uint32_t)(ECX));
  /* 12d66f4e call dword ptr [0x12d80310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80310))), 0x12d66f54u);
L_12d66f54:;
  /* 12d66f54 mov esp, ebp */
  ESP = (EBP);
  /* 12d66f56 pop ebp */
  EBP = (pop32());
  /* 12d66f57 ret  */
  ESPCHK(0x12d66ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f60 @ 0x12d66f60 (116 bytes, 34 insns) */
void f_12d66f60(void) {
  FTRACE(0x12d66f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66f60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66f61 mov ebp, esp */
  EBP = (ESP);
  /* 12d66f63 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66f64 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12d66f6b push 9 */
  push32((uint32_t)(0x9u));
  /* 12d66f6d call 0x12d66780 */
  push32(0x12d66f72u); f_12d66780();
  /* 12d66f72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66f75 call 0x12d68670 */
  push32(0x12d66f7au); f_12d68670();
  /* 12d66f7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d66f7c jge 0x12d66f85 */
  if ((C.sf==C.of)) goto L_12d66f85;
  /* 12d66f7e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12d66f85:;
  /* 12d66f85 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d66f87 call 0x12d66820 */
  push32(0x12d66f8cu); f_12d66820();
  /* 12d66f8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d66f91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d66f93 mov eax, dword ptr [0x12d7fe2c] */
  EAX = (r32((uint32_t)(0x12d7fe2c)));
  /* 12d66f98 push eax */
  push32((uint32_t)(EAX));
  /* 12d66f99 call dword ptr [0x12d80240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80240))), 0x12d66f9fu);
  /* 12d66f9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d66fa1 jne 0x12d66fcd */
  if (!C.zf) goto L_12d66fcd;
  /* 12d66fa3 call dword ptr [0x12d802d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802d0))), 0x12d66fa9u);
  /* 12d66fa9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66fac jne 0x12d66fc6 */
  if (!C.zf) goto L_12d66fc6;
  /* 12d66fae call 0x12d6ac60 */
  push32(0x12d66fb3u); f_12d6ac60();
  /* 12d66fb3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12d66fb9 call 0x12d6ac50 */
  push32(0x12d66fbeu); f_12d6ac50();
  /* 12d66fbe mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12d66fc4 jmp 0x12d66fcd */
  goto L_12d66fcd;
L_12d66fc6:;
  /* 12d66fc6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12d66fcd:;
  /* 12d66fcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66fd0 mov esp, ebp */
  ESP = (EBP);
  /* 12d66fd2 pop ebp */
  EBP = (pop32());
  /* 12d66fd3 ret  */
  ESPCHK(0x12d66f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fe0 @ 0x12d66fe0 (10 bytes, 5 insns) */
void f_12d66fe0(void) {
  FTRACE(0x12d66fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12d66fe3 call 0x12d66f60 */
  push32(0x12d66fe8u); f_12d66f60();
  /* 12d66fe8 pop ebp */
  EBP = (pop32());
  /* 12d66fe9 ret  */
  ESPCHK(0x12d66fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ff0 @ 0x12d66ff0 (10 bytes, 5 insns) */
void f_12d66ff0(void) {
  FTRACE(0x12d66ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12d66ff3 mov eax, dword ptr [0x12d7ccb4] */
  EAX = (r32((uint32_t)(0x12d7ccb4)));
  /* 12d66ff8 pop ebp */
  EBP = (pop32());
  /* 12d66ff9 ret  */
  ESPCHK(0x12d66ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007000 @ 0x12d67000 (31 bytes, 11 insns) */
void f_12d67000(void) {
  FTRACE(0x12d67000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d67000 push ebp */
  push32((uint32_t)(EBP));
  /* 12d67001 mov ebp, esp */
  EBP = (ESP);
  /* 12d67003 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6700a jbe 0x12d67010 */
  if ((C.cf||C.zf)) goto L_12d67010;
  /* 12d6700c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6700e jmp 0x12d6701d */
  goto L_12d6701d;
L_12d67010:;
  /* 12d67010 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d67013 mov dword ptr [0x12d7ccb4], eax */
  w32((uint32_t)(0x12d7ccb4), (EAX));
  /* 12d67018 mov eax, 1 */
  EAX = (0x1u);
L_12d6701d:;
  /* 12d6701d pop ebp */
  EBP = (pop32());
  /* 12d6701e ret  */
  ESPCHK(0x12d67000u, _esp0);
  ESP += 4; return;
}

/* FUN_10007020 @ 0x12d67020 (89 bytes, 20 insns) */
void f_12d67020(void) {
  FTRACE(0x12d67020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d67020 push ebp */
  push32((uint32_t)(EBP));
  /* 12d67021 mov ebp, esp */
  EBP = (ESP);
  /* 12d67023 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12d67028 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6702a mov eax, dword ptr [0x12d7fe2c] */
  EAX = (r32((uint32_t)(0x12d7fe2c)));
  /* 12d6702f push eax */
  push32((uint32_t)(EAX));
  /* 12d67030 call dword ptr [0x12d80330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80330))), 0x12d67036u);
  /* 12d67036 mov dword ptr [0x12d7fe28], eax */
  w32((uint32_t)(0x12d7fe28), (EAX));
  /* 12d6703b cmp dword ptr [0x12d7fe28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7fe28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67042 jne 0x12d67048 */
  if (!C.zf) goto L_12d67048;
  /* 12d67044 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d67046 jmp 0x12d67077 */
  goto L_12d67077;
L_12d67048:;
  /* 12d67048 mov ecx, dword ptr [0x12d7fe28] */
  ECX = (r32((uint32_t)(0x12d7fe28)));
  /* 12d6704e mov dword ptr [0x12d7fe1c], ecx */
  w32((uint32_t)(0x12d7fe1c), (ECX));
  /* 12d67054 mov dword ptr [0x12d7fe20], 0 */
  w32((uint32_t)(0x12d7fe20), (0x0u));
  /* 12d6705e mov dword ptr [0x12d7fe24], 0 */
  w32((uint32_t)(0x12d7fe24), (0x0u));
  /* 12d67068 mov dword ptr [0x12d7fe08], 0x10 */
  w32((uint32_t)(0x12d7fe08), (0x10u));
  /* 12d67072 mov eax, 1 */
  EAX = (0x1u);
L_12d67077:;
  /* 12d67077 pop ebp */
  EBP = (pop32());
  /* 12d67078 ret  */
  ESPCHK(0x12d67020u, _esp0);
  ESP += 4; return;
}

/* FUN_10007080 @ 0x12d67080 (85 bytes, 29 insns) */
void f_12d67080(void) {
  FTRACE(0x12d67080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d67080 push ebp */
  push32((uint32_t)(EBP));
  /* 12d67081 mov ebp, esp */
  EBP = (ESP);
  /* 12d67083 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67086 mov eax, dword ptr [0x12d7fe24] */
  EAX = (r32((uint32_t)(0x12d7fe24)));
  /* 12d6708b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6708e mov ecx, dword ptr [0x12d7fe28] */
  ECX = (r32((uint32_t)(0x12d7fe28)));
  /* 12d67094 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67096 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d67099 mov edx, dword ptr [0x12d7fe28] */
  EDX = (r32((uint32_t)(0x12d7fe28)));
  /* 12d6709f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d670a2:;
  /* 12d670a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d670a5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d670a8 jae 0x12d670cf */
  if (!C.cf) goto L_12d670cf;
  /* 12d670aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d670ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d670b0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d670b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d670b6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d670bd jae 0x12d670c4 */
  if (!C.cf) goto L_12d670c4;
  /* 12d670bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d670c2 jmp 0x12d670d1 */
  goto L_12d670d1;
L_12d670c4:;
  /* 12d670c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d670c7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d670ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d670cd jmp 0x12d670a2 */
  goto L_12d670a2;
L_12d670cf:;
  /* 12d670cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d670d1:;
  /* 12d670d1 mov esp, ebp */
  ESP = (EBP);
  /* 12d670d3 pop ebp */
  EBP = (pop32());
  /* 12d670d4 ret  */
  ESPCHK(0x12d67080u, _esp0);
  ESP += 4; return;
}

/* FUN_100070e0 @ 0x12d670e0 (95 bytes, 33 insns) */
void f_12d670e0(void) {
  FTRACE(0x12d670e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d670e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d670e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d670e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d670e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d670e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d670ec sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d670ef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d670f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d670f5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12d670f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d670fb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d67100 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67103 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d67105 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d67108 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d6710b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6710d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6710f jne 0x12d67131 */
  if (!C.zf) goto L_12d67131;
  /* 12d67111 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d67114 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12d67117 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d67119 jne 0x12d67131 */
  if (!C.zf) goto L_12d67131;
  /* 12d6711b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6711e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d67124 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d67126 je 0x12d67131 */
  if (C.zf) goto L_12d67131;
  /* 12d67128 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12d6712f jmp 0x12d67138 */
  goto L_12d67138;
L_12d67131:;
  /* 12d67131 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12d67138:;
  /* 12d67138 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6713b mov esp, ebp */
  ESP = (EBP);
  /* 12d6713d pop ebp */
  EBP = (pop32());
  /* 12d6713e ret  */
  ESPCHK(0x12d670e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007140 @ 0x12d67140 (1485 bytes, 453 insns) */
void f_12d67140(void) {
  FTRACE(0x12d67140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d67140 push ebp */
  push32((uint32_t)(EBP));
  /* 12d67141 mov ebp, esp */
  EBP = (ESP);
  /* 12d67143 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67146 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d67149 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d6714c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12d6714f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d67152 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d67155 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67158 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d6715b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6715e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12d67161 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d67164 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67167 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6716d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d67170 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12d67177 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6717a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6717d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67180 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d67183 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d67186 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d67188 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6718b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12d6718e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d67191 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67194 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12d67197 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d6719a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d6719c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d6719f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d671a2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12d671a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d671a8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d671ab and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d671ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d671b0 jne 0x12d672d8 */
  if (!C.zf) goto L_12d672d8;
  /* 12d671b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d671b9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12d671bc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d671bf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12d671c2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d671c6 jbe 0x12d671cf */
  if ((C.cf||C.zf)) goto L_12d671cf;
  /* 12d671c8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12d671cf:;
  /* 12d671cf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d671d2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d671d5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d671d8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d671db jne 0x12d672b1 */
  if (!C.zf) goto L_12d672b1;
  /* 12d671e1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d671e5 jae 0x12d67246 */
  if (!C.cf) goto L_12d67246;
  /* 12d671e7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d671ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d671ef shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d671f1 not eax */
  EAX = (~(EAX));
  /* 12d671f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d671f6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d671f9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12d671fd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d671ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67202 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d67205 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12d67209 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d6720c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6720f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12d67212 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d67215 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d67218 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6721b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12d6721e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d67221 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67224 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d67228 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6722a jne 0x12d67244 */
  if (!C.zf) goto L_12d67244;
  /* 12d6722c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d67231 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d67234 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d67236 not eax */
  EAX = (~(EAX));
  /* 12d67238 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6723b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d6723d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6723f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d67242 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d67244:;
  /* 12d67244 jmp 0x12d672b1 */
  goto L_12d672b1;
L_12d67246:;
  /* 12d67246 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d67249 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6724c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d67251 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d67253 not edx */
  EDX = (~(EDX));
  /* 12d67255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67258 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d6725b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12d67262 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d67264 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67267 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d6726a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12d67271 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d67274 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67277 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d6727a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d6727d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d67280 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67283 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12d67286 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d67289 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6728c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d67290 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d67292 jne 0x12d672b1 */
  if (!C.zf) goto L_12d672b1;
  /* 12d67294 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d67297 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6729a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d6729f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d672a1 not edx */
  EDX = (~(EDX));
  /* 12d672a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d672a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d672a9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d672ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d672ae mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12d672b1:;
  /* 12d672b1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d672b4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d672b7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d672ba mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d672bd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12d672c0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d672c3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d672c6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d672c9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d672cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d672cf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d672d2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d672d5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12d672d8:;
  /* 12d672d8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d672db sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12d672de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d672e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d672e4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d672e8 jbe 0x12d672f1 */
  if ((C.cf||C.zf)) goto L_12d672f1;
  /* 12d672ea mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12d672f1:;
  /* 12d672f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d672f4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d672f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d672f9 jne 0x12d67455 */
  if (!C.zf) goto L_12d67455;
  /* 12d672ff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d67302 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67305 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12d67308 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6730b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12d6730e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67311 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12d67314 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67318 jbe 0x12d67321 */
  if ((C.cf||C.zf)) goto L_12d67321;
  /* 12d6731a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12d67321:;
  /* 12d67321 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d67324 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67327 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12d6732a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d6732d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12d67330 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67333 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12d67336 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6733a jbe 0x12d67343 */
  if ((C.cf||C.zf)) goto L_12d67343;
  /* 12d6733c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12d67343:;
  /* 12d67343 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d67346 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67349 je 0x12d6744f */
  if (C.zf) goto L_12d6744f;
  /* 12d6734f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d67352 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d67355 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d67358 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6735b jne 0x12d67431 */
  if (!C.zf) goto L_12d67431;
  /* 12d67361 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67365 jae 0x12d673c6 */
  if (!C.cf) goto L_12d673c6;
  /* 12d67367 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d6736c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d6736f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d67371 not edx */
  EDX = (~(EDX));
  /* 12d67373 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67376 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d67379 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12d6737d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6737f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67382 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d67385 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12d67389 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d6738c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6738f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d67392 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d67395 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d67398 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6739b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12d6739e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d673a1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d673a4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d673a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d673aa jne 0x12d673c4 */
  if (!C.zf) goto L_12d673c4;
  /* 12d673ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d673b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d673b4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d673b6 not edx */
  EDX = (~(EDX));
  /* 12d673b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d673bb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d673bd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d673bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d673c2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d673c4:;
  /* 12d673c4 jmp 0x12d67431 */
  goto L_12d67431;
L_12d673c6:;
  /* 12d673c6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d673c9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d673cc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d673d1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d673d3 not eax */
  EAX = (~(EAX));
  /* 12d673d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d673d8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d673db mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12d673e2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d673e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d673e7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d673ea mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12d673f1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d673f4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d673f7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12d673fa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d673fd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d67400 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67403 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12d67406 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d67409 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6740c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d67410 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d67412 jne 0x12d67431 */
  if (!C.zf) goto L_12d67431;
  /* 12d67414 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d67417 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6741a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d6741f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d67421 not eax */
  EAX = (~(EAX));
  /* 12d67423 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d67426 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d67429 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6742b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6742e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12d67431:;
  /* 12d67431 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d67434 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d67437 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d6743a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d6743d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12d67440 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d67443 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d67446 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d67449 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d6744c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12d6744f:;
  /* 12d6744f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d67452 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12d67455:;
  /* 12d67455 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d67458 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6745b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6745d jne 0x12d6746b */
  if (!C.zf) goto L_12d6746b;
  /* 12d6745f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d67462 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67465 je 0x12d6757b */
  if (C.zf) goto L_12d6757b;
L_12d6746b:;
  /* 12d6746b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d6746e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d67471 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12d67474 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d67477 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d6747a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6747d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d67480 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d67483 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d67486 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d67489 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12d6748c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6748f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d67492 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12d67495 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d67498 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d6749b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d6749e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d674a1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d674a4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d674a7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d674aa cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d674ad jne 0x12d6757b */
  if (!C.zf) goto L_12d6757b;
  /* 12d674b3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d674b7 jae 0x12d67514 */
  if (!C.cf) goto L_12d67514;
  /* 12d674b9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d674bc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d674bf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d674c3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d674c6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d674c9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d674cc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d674cf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d674d2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d674d5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12d674d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d674da jne 0x12d674f2 */
  if (!C.zf) goto L_12d674f2;
  /* 12d674dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d674e1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d674e4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d674e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d674e9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d674eb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d674ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d674f0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d674f2:;
  /* 12d674f2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d674f7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d674fa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d674fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d674ff mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d67502 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12d67506 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d67508 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6750b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d6750e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12d67512 jmp 0x12d6757b */
  goto L_12d6757b;
L_12d67514:;
  /* 12d67514 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d67517 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6751a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d6751e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d67521 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67524 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d67527 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d6752a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d6752d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67530 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12d67533 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d67535 jne 0x12d67552 */
  if (!C.zf) goto L_12d67552;
  /* 12d67537 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d6753a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6753d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d67542 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d67544 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d67547 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d6754a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6754c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6754f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12d67552:;
  /* 12d67552 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d67555 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67558 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d6755d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d6755f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67562 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d67565 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12d6756c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6756e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67571 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d67574 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12d6757b:;
  /* 12d6757b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d6757e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d67581 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d67583 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d67586 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67589 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d6758c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12d6758f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d67592 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d67594 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67597 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6759a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d6759c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6759f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d675a2 jne 0x12d67709 */
  if (!C.zf) goto L_12d67709;
  /* 12d675a8 cmp dword ptr [0x12d7fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d675af je 0x12d676f8 */
  if (C.zf) goto L_12d676f8;
  /* 12d675b5 mov eax, dword ptr [0x12d7fe18] */
  EAX = (r32((uint32_t)(0x12d7fe18)));
  /* 12d675ba shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12d675bd mov ecx, dword ptr [0x12d7fe20] */
  ECX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d675c3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d675c6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d675c8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d675cb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12d675d0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12d675d5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d675d8 push eax */
  push32((uint32_t)(EAX));
  /* 12d675d9 call dword ptr [0x12d80314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80314))), 0x12d675dfu);
  /* 12d675df mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d675e4 mov ecx, dword ptr [0x12d7fe18] */
  ECX = (r32((uint32_t)(0x12d7fe18)));
  /* 12d675ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d675ec mov eax, dword ptr [0x12d7fe20] */
  EAX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d675f1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d675f4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d675f6 mov edx, dword ptr [0x12d7fe20] */
  EDX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d675fc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d675ff mov eax, dword ptr [0x12d7fe20] */
  EAX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d67604 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d67607 mov edx, dword ptr [0x12d7fe18] */
  EDX = (r32((uint32_t)(0x12d7fe18)));
  /* 12d6760d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12d67618 mov eax, dword ptr [0x12d7fe20] */
  EAX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d6761d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d67620 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12d67623 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d67626 mov eax, dword ptr [0x12d7fe20] */
  EAX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d6762b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d6762e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12d67631 mov edx, dword ptr [0x12d7fe20] */
  EDX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d67637 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d6763a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12d6763e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d67640 jne 0x12d67656 */
  if (!C.zf) goto L_12d67656;
  /* 12d67642 mov edx, dword ptr [0x12d7fe20] */
  EDX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d67648 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d6764b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12d6764d mov ecx, dword ptr [0x12d7fe20] */
  ECX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d67653 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12d67656:;
  /* 12d67656 mov edx, dword ptr [0x12d7fe20] */
  EDX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d6765c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67660 jne 0x12d676f8 */
  if (!C.zf) goto L_12d676f8;
  /* 12d67666 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12d6766b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6766d mov eax, dword ptr [0x12d7fe20] */
  EAX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d67672 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d67675 push ecx */
  push32((uint32_t)(ECX));
  /* 12d67676 call dword ptr [0x12d80314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80314))), 0x12d6767cu);
  /* 12d6767c mov edx, dword ptr [0x12d7fe20] */
  EDX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d67682 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d67685 push eax */
  push32((uint32_t)(EAX));
  /* 12d67686 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d67688 mov ecx, dword ptr [0x12d7fe2c] */
  ECX = (r32((uint32_t)(0x12d7fe2c)));
  /* 12d6768e push ecx */
  push32((uint32_t)(ECX));
  /* 12d6768f call dword ptr [0x12d80310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80310))), 0x12d67695u);
  /* 12d67695 mov edx, dword ptr [0x12d7fe24] */
  EDX = (r32((uint32_t)(0x12d7fe24)));
  /* 12d6769b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6769e mov eax, dword ptr [0x12d7fe28] */
  EAX = (r32((uint32_t)(0x12d7fe28)));
  /* 12d676a3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d676a5 mov ecx, dword ptr [0x12d7fe20] */
  ECX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d676ab add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d676ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d676b0 push eax */
  push32((uint32_t)(EAX));
  /* 12d676b1 mov edx, dword ptr [0x12d7fe20] */
  EDX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d676b7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d676ba push edx */
  push32((uint32_t)(EDX));
  /* 12d676bb mov eax, dword ptr [0x12d7fe20] */
  EAX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d676c0 push eax */
  push32((uint32_t)(EAX));
  /* 12d676c1 call 0x12d6ac70 */
  push32(0x12d676c6u); f_12d6ac70();
  /* 12d676c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d676c9 mov ecx, dword ptr [0x12d7fe24] */
  ECX = (r32((uint32_t)(0x12d7fe24)));
  /* 12d676cf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d676d2 mov dword ptr [0x12d7fe24], ecx */
  w32((uint32_t)(0x12d7fe24), (ECX));
  /* 12d676d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d676db cmp edx, dword ptr [0x12d7fe20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d7fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d676e1 jbe 0x12d676ec */
  if ((C.cf||C.zf)) goto L_12d676ec;
  /* 12d676e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d676e6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d676e9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d676ec:;
  /* 12d676ec mov ecx, dword ptr [0x12d7fe28] */
  ECX = (r32((uint32_t)(0x12d7fe28)));
  /* 12d676f2 mov dword ptr [0x12d7fe1c], ecx */
  w32((uint32_t)(0x12d7fe1c), (ECX));
L_12d676f8:;
  /* 12d676f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d676fb mov dword ptr [0x12d7fe20], edx */
  w32((uint32_t)(0x12d7fe20), (EDX));
  /* 12d67701 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67704 mov dword ptr [0x12d7fe18], eax */
  w32((uint32_t)(0x12d7fe18), (EAX));
L_12d67709:;
  /* 12d67709 mov esp, ebp */
  ESP = (EBP);
  /* 12d6770b pop ebp */
  EBP = (pop32());
  /* 12d6770c ret  */
  ESPCHK(0x12d67140u, _esp0);
  ESP += 4; return;
}

/* FUN_10007710 @ 0x12d67710 (1334 bytes, 427 insns) */
void f_12d67710(void) {
  FTRACE(0x12d67710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d67710 push ebp */
  push32((uint32_t)(EBP));
  /* 12d67711 mov ebp, esp */
  EBP = (ESP);
  /* 12d67713 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67716 push esi */
  push32((uint32_t)(ESI));
  /* 12d67717 mov eax, dword ptr [0x12d7fe24] */
  EAX = (r32((uint32_t)(0x12d7fe24)));
  /* 12d6771c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6771f mov ecx, dword ptr [0x12d7fe28] */
  ECX = (r32((uint32_t)(0x12d7fe28)));
  /* 12d67725 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67727 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12d6772a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6772d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67730 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12d67733 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12d67736 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d67739 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12d6773c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6773f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d67742 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67746 jge 0x12d6775c */
  if ((C.sf==C.of)) goto L_12d6775c;
  /* 12d67748 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6774b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6774e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d67750 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12d67753 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12d6775a jmp 0x12d67771 */
  goto L_12d67771;
L_12d6775c:;
  /* 12d6775c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d67763 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d67766 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67769 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6776c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d6776e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12d67771:;
  /* 12d67771 mov ecx, dword ptr [0x12d7fe1c] */
  ECX = (r32((uint32_t)(0x12d7fe1c)));
  /* 12d67777 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12d6777a:;
  /* 12d6777a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6777d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67780 jae 0x12d677a6 */
  if (!C.cf) goto L_12d677a6;
  /* 12d67782 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67785 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d67788 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12d6778a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6778d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d67790 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12d67793 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d67795 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d67797 je 0x12d6779b */
  if (C.zf) goto L_12d6779b;
  /* 12d67799 jmp 0x12d677a6 */
  goto L_12d677a6;
L_12d6779b:;
  /* 12d6779b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6779e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d677a1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d677a4 jmp 0x12d6777a */
  goto L_12d6777a;
L_12d677a6:;
  /* 12d677a6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d677a9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d677ac jne 0x12d6788d */
  if (!C.zf) goto L_12d6788d;
  /* 12d677b2 mov eax, dword ptr [0x12d7fe28] */
  EAX = (r32((uint32_t)(0x12d7fe28)));
  /* 12d677b7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12d677ba:;
  /* 12d677ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d677bd cmp ecx, dword ptr [0x12d7fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d677c3 jae 0x12d677e9 */
  if (!C.cf) goto L_12d677e9;
  /* 12d677c5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d677c8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d677cb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12d677cd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d677d0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d677d3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12d677d6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d677d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d677da je 0x12d677de */
  if (C.zf) goto L_12d677de;
  /* 12d677dc jmp 0x12d677e9 */
  goto L_12d677e9;
L_12d677de:;
  /* 12d677de mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d677e1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d677e4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d677e7 jmp 0x12d677ba */
  goto L_12d677ba;
L_12d677e9:;
  /* 12d677e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d677ec cmp ecx, dword ptr [0x12d7fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d677f2 jne 0x12d6788d */
  if (!C.zf) goto L_12d6788d;
L_12d677f8:;
  /* 12d677f8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d677fb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d677fe jae 0x12d67816 */
  if (!C.cf) goto L_12d67816;
  /* 12d67800 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67803 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67807 je 0x12d6780b */
  if (C.zf) goto L_12d6780b;
  /* 12d67809 jmp 0x12d67816 */
  goto L_12d67816;
L_12d6780b:;
  /* 12d6780b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6780e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67811 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d67814 jmp 0x12d677f8 */
  goto L_12d677f8;
L_12d67816:;
  /* 12d67816 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67819 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6781c jne 0x12d67867 */
  if (!C.zf) goto L_12d67867;
  /* 12d6781e mov eax, dword ptr [0x12d7fe28] */
  EAX = (r32((uint32_t)(0x12d7fe28)));
  /* 12d67823 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12d67826:;
  /* 12d67826 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67829 cmp ecx, dword ptr [0x12d7fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6782f jae 0x12d67847 */
  if (!C.cf) goto L_12d67847;
  /* 12d67831 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67834 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67838 je 0x12d6783c */
  if (C.zf) goto L_12d6783c;
  /* 12d6783a jmp 0x12d67847 */
  goto L_12d67847;
L_12d6783c:;
  /* 12d6783c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6783f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67842 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d67845 jmp 0x12d67826 */
  goto L_12d67826;
L_12d67847:;
  /* 12d67847 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6784a cmp ecx, dword ptr [0x12d7fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67850 jne 0x12d67867 */
  if (!C.zf) goto L_12d67867;
  /* 12d67852 call 0x12d67c50 */
  push32(0x12d67857u); f_12d67c50();
  /* 12d67857 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d6785a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6785e jne 0x12d67867 */
  if (!C.zf) goto L_12d67867;
  /* 12d67860 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d67862 jmp 0x12d67c41 */
  goto L_12d67c41;
L_12d67867:;
  /* 12d67867 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6786a push edx */
  push32((uint32_t)(EDX));
  /* 12d6786b call 0x12d67d60 */
  push32(0x12d67870u); f_12d67d60();
  /* 12d67870 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67873 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67876 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d67879 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d6787b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6787e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d67881 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67884 jne 0x12d6788d */
  if (!C.zf) goto L_12d6788d;
  /* 12d67886 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d67888 jmp 0x12d67c41 */
  goto L_12d67c41;
L_12d6788d:;
  /* 12d6788d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67890 mov dword ptr [0x12d7fe1c], edx */
  w32((uint32_t)(0x12d7fe1c), (EDX));
  /* 12d67896 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67899 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d6789c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12d6789f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d678a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d678a4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12d678a7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d678ab je 0x12d678d0 */
  if (C.zf) goto L_12d678d0;
  /* 12d678ad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d678b0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d678b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d678b6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12d678ba mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d678bd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d678c0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12d678c3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12d678ca or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12d678cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d678ce jne 0x12d67905 */
  if (!C.zf) goto L_12d67905;
L_12d678d0:;
  /* 12d678d0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12d678d7:;
  /* 12d678d7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d678da mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d678dd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d678e0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12d678e4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d678e7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d678ea mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12d678ed and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12d678f4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12d678f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d678f8 jne 0x12d67905 */
  if (!C.zf) goto L_12d67905;
  /* 12d678fa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d678fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67900 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12d67903 jmp 0x12d678d7 */
  goto L_12d678d7;
L_12d67905:;
  /* 12d67905 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d67908 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6790e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67911 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12d67918 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d6791b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d67922 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d67925 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67928 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d6792b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12d6792f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d67932 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67936 jne 0x12d67952 */
  if (!C.zf) goto L_12d67952;
  /* 12d67938 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 12d6793f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d67942 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67945 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d67948 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 12d6794f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12d67952:;
  /* 12d67952 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67956 jl 0x12d6796b */
  if ((C.sf!=C.of)) goto L_12d6796b;
  /* 12d67958 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d6795b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d6795d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d67960 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d67963 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67966 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d67969 jmp 0x12d67952 */
  goto L_12d67952;
L_12d6796b:;
  /* 12d6796b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6796e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67971 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12d67975 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d67978 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6797b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d6797d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67980 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d67983 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d67986 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12d67989 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6798c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d6798f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67993 jle 0x12d6799c */
  if ((C.zf||C.sf!=C.of)) goto L_12d6799c;
  /* 12d67995 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_12d6799c:;
  /* 12d6799c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6799f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d679a2 je 0x12d67bc0 */
  if (C.zf) goto L_12d67bc0;
  /* 12d679a8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d679ab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d679ae mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d679b1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d679b4 jne 0x12d67a8a */
  if (!C.zf) goto L_12d67a8a;
  /* 12d679ba cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d679be jge 0x12d67a1f */
  if ((C.sf==C.of)) goto L_12d67a1f;
  /* 12d679c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d679c5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d679c8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d679ca not eax */
  EAX = (~(EAX));
  /* 12d679cc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d679cf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d679d2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12d679d6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d679d8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d679db mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d679de mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12d679e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d679e5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d679e8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12d679eb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d679ee mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d679f1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d679f4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12d679f7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d679fa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d679fd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d67a01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d67a03 jne 0x12d67a1d */
  if (!C.zf) goto L_12d67a1d;
  /* 12d67a05 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d67a0a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d67a0d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d67a0f not eax */
  EAX = (~(EAX));
  /* 12d67a11 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67a14 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d67a16 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d67a18 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67a1b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d67a1d:;
  /* 12d67a1d jmp 0x12d67a8a */
  goto L_12d67a8a;
L_12d67a1f:;
  /* 12d67a1f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d67a22 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67a25 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d67a2a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d67a2c not edx */
  EDX = (~(EDX));
  /* 12d67a2e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d67a31 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67a34 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12d67a3b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d67a3d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d67a40 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67a43 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12d67a4a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67a4d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67a50 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d67a53 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d67a56 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67a59 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67a5c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12d67a5f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67a62 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67a65 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d67a69 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d67a6b jne 0x12d67a8a */
  if (!C.zf) goto L_12d67a8a;
  /* 12d67a6d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d67a70 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67a73 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d67a78 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d67a7a not edx */
  EDX = (~(EDX));
  /* 12d67a7c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67a7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d67a82 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d67a84 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67a87 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12d67a8a:;
  /* 12d67a8a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67a8d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d67a90 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67a93 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d67a96 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12d67a99 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67a9c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d67a9f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67aa2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d67aa5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d67aa8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67aac je 0x12d67bc0 */
  if (C.zf) goto L_12d67bc0;
  /* 12d67ab2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d67ab5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67ab8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12d67abb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d67abe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67ac1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d67ac4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d67ac7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12d67aca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67acd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d67ad0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d67ad3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d67ad6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67ad9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12d67adc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67adf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d67ae2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67ae5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12d67ae8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67aeb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67aee mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d67af1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67af4 jne 0x12d67bc0 */
  if (!C.zf) goto L_12d67bc0;
  /* 12d67afa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67afe jge 0x12d67b5a */
  if ((C.sf==C.of)) goto L_12d67b5a;
  /* 12d67b00 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67b03 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67b06 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d67b0a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67b0d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67b10 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12d67b13 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d67b15 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67b18 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67b1b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12d67b1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d67b20 jne 0x12d67b38 */
  if (!C.zf) goto L_12d67b38;
  /* 12d67b22 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d67b27 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d67b2a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d67b2c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67b2f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d67b31 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d67b33 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67b36 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d67b38:;
  /* 12d67b38 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d67b3d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d67b40 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d67b42 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d67b45 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67b48 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12d67b4c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d67b4e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d67b51 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67b54 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12d67b58 jmp 0x12d67bc0 */
  goto L_12d67bc0;
L_12d67b5a:;
  /* 12d67b5a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67b5d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67b60 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d67b64 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67b67 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67b6a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12d67b6d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d67b6f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67b72 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67b75 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12d67b78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d67b7a jne 0x12d67b97 */
  if (!C.zf) goto L_12d67b97;
  /* 12d67b7c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d67b7f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67b82 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d67b87 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d67b89 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67b8c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d67b8f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d67b91 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67b94 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12d67b97:;
  /* 12d67b97 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d67b9a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67b9d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d67ba2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d67ba4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d67ba7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67baa mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12d67bb1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d67bb3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d67bb6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67bb9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12d67bc0:;
  /* 12d67bc0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67bc4 je 0x12d67bda */
  if (C.zf) goto L_12d67bda;
  /* 12d67bc6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67bc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d67bcc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d67bce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67bd1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67bd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d67bd7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12d67bda:;
  /* 12d67bda mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67bdd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67be0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d67be3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d67be6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67be9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67bec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d67bee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d67bf1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67bf4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67bf7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67bfa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12d67bfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67c00 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d67c02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67c05 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d67c07 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67c0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67c0d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d67c0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d67c11 jne 0x12d67c33 */
  if (!C.zf) goto L_12d67c33;
  /* 12d67c13 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67c16 cmp eax, dword ptr [0x12d7fe20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67c1c jne 0x12d67c33 */
  if (!C.zf) goto L_12d67c33;
  /* 12d67c1e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d67c21 cmp ecx, dword ptr [0x12d7fe18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7fe18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67c27 jne 0x12d67c33 */
  if (!C.zf) goto L_12d67c33;
  /* 12d67c29 mov dword ptr [0x12d7fe20], 0 */
  w32((uint32_t)(0x12d7fe20), (0x0u));
L_12d67c33:;
  /* 12d67c33 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d67c36 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d67c39 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d67c3b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67c3e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12d67c41:;
  /* 12d67c41 pop esi */
  ESI = (pop32());
  /* 12d67c42 mov esp, ebp */
  ESP = (EBP);
  /* 12d67c44 pop ebp */
  EBP = (pop32());
  /* 12d67c45 ret  */
  ESPCHK(0x12d67710u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c50 @ 0x12d67c50 (271 bytes, 78 insns) */
void f_12d67c50(void) {
  FTRACE(0x12d67c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d67c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d67c51 mov ebp, esp */
  EBP = (ESP);
  /* 12d67c53 push ecx */
  push32((uint32_t)(ECX));
  /* 12d67c54 mov eax, dword ptr [0x12d7fe24] */
  EAX = (r32((uint32_t)(0x12d7fe24)));
  /* 12d67c59 cmp eax, dword ptr [0x12d7fe08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7fe08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67c5f jne 0x12d67cab */
  if (!C.zf) goto L_12d67cab;
  /* 12d67c61 mov ecx, dword ptr [0x12d7fe08] */
  ECX = (r32((uint32_t)(0x12d7fe08)));
  /* 12d67c67 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67c6a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d67c6d push ecx */
  push32((uint32_t)(ECX));
  /* 12d67c6e mov edx, dword ptr [0x12d7fe28] */
  EDX = (r32((uint32_t)(0x12d7fe28)));
  /* 12d67c74 push edx */
  push32((uint32_t)(EDX));
  /* 12d67c75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d67c77 mov eax, dword ptr [0x12d7fe2c] */
  EAX = (r32((uint32_t)(0x12d7fe2c)));
  /* 12d67c7c push eax */
  push32((uint32_t)(EAX));
  /* 12d67c7d call dword ptr [0x12d80334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80334))), 0x12d67c83u);
  /* 12d67c83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d67c86 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67c8a jne 0x12d67c93 */
  if (!C.zf) goto L_12d67c93;
  /* 12d67c8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d67c8e jmp 0x12d67d5b */
  goto L_12d67d5b;
L_12d67c93:;
  /* 12d67c93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67c96 mov dword ptr [0x12d7fe28], ecx */
  w32((uint32_t)(0x12d7fe28), (ECX));
  /* 12d67c9c mov edx, dword ptr [0x12d7fe08] */
  EDX = (r32((uint32_t)(0x12d7fe08)));
  /* 12d67ca2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67ca5 mov dword ptr [0x12d7fe08], edx */
  w32((uint32_t)(0x12d7fe08), (EDX));
L_12d67cab:;
  /* 12d67cab mov eax, dword ptr [0x12d7fe24] */
  EAX = (r32((uint32_t)(0x12d7fe24)));
  /* 12d67cb0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d67cb3 mov ecx, dword ptr [0x12d7fe28] */
  ECX = (r32((uint32_t)(0x12d7fe28)));
  /* 12d67cb9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67cbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d67cbe push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12d67cc3 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d67cc5 mov edx, dword ptr [0x12d7fe2c] */
  EDX = (r32((uint32_t)(0x12d7fe2c)));
  /* 12d67ccb push edx */
  push32((uint32_t)(EDX));
  /* 12d67ccc call dword ptr [0x12d80330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80330))), 0x12d67cd2u);
  /* 12d67cd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67cd5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12d67cd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67cdb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67cdf jne 0x12d67ce5 */
  if (!C.zf) goto L_12d67ce5;
  /* 12d67ce1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d67ce3 jmp 0x12d67d5b */
  goto L_12d67d5b;
L_12d67ce5:;
  /* 12d67ce5 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d67ce7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12d67cec push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12d67cf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d67cf3 call dword ptr [0x12d80338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80338))), 0x12d67cf9u);
  /* 12d67cf9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67cfc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12d67cff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67d02 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67d06 jne 0x12d67d22 */
  if (!C.zf) goto L_12d67d22;
  /* 12d67d08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67d0b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d67d0e push ecx */
  push32((uint32_t)(ECX));
  /* 12d67d0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d67d11 mov edx, dword ptr [0x12d7fe2c] */
  EDX = (r32((uint32_t)(0x12d7fe2c)));
  /* 12d67d17 push edx */
  push32((uint32_t)(EDX));
  /* 12d67d18 call dword ptr [0x12d80310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80310))), 0x12d67d1eu);
  /* 12d67d1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d67d20 jmp 0x12d67d5b */
  goto L_12d67d5b;
L_12d67d22:;
  /* 12d67d22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67d25 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d67d2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67d2e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12d67d35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67d38 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12d67d3f mov eax, dword ptr [0x12d7fe24] */
  EAX = (r32((uint32_t)(0x12d7fe24)));
  /* 12d67d44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67d47 mov dword ptr [0x12d7fe24], eax */
  w32((uint32_t)(0x12d7fe24), (EAX));
  /* 12d67d4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67d4f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d67d52 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12d67d58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d67d5b:;
  /* 12d67d5b mov esp, ebp */
  ESP = (EBP);
  /* 12d67d5d pop ebp */
  EBP = (pop32());
  /* 12d67d5e ret  */
  ESPCHK(0x12d67c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d60 @ 0x12d67d60 (494 bytes, 149 insns) */
void f_12d67d60(void) {
  FTRACE(0x12d67d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d67d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d67d61 mov ebp, esp */
  EBP = (ESP);
  /* 12d67d63 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67d66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d67d69 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d67d6c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12d67d6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d67d72 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d67d75 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d67d78 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12d67d7f:;
  /* 12d67d7f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67d83 jl 0x12d67d98 */
  if ((C.sf!=C.of)) goto L_12d67d98;
  /* 12d67d85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d67d88 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12d67d8a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d67d8d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d67d90 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67d93 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12d67d96 jmp 0x12d67d7f */
  goto L_12d67d7f;
L_12d67d98:;
  /* 12d67d98 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d67d9b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d67da1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d67da4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12d67dab mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d67dae mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d67db5 jmp 0x12d67dc0 */
  goto L_12d67dc0;
L_12d67db7:;
  /* 12d67db7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d67dba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67dbd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12d67dc0:;
  /* 12d67dc0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67dc4 jge 0x12d67de6 */
  if ((C.sf==C.of)) goto L_12d67de6;
  /* 12d67dc6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d67dc9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d67dcc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12d67dcf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d67dd2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67dd5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67dd8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12d67ddb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67dde mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67de1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12d67de4 jmp 0x12d67db7 */
  goto L_12d67db7;
L_12d67de6:;
  /* 12d67de6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d67de9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12d67dec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d67def mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d67df2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67df4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d67df7 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d67df9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12d67dfe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12d67e03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67e06 push edx */
  push32((uint32_t)(EDX));
  /* 12d67e07 call dword ptr [0x12d80338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80338))), 0x12d67e0du);
  /* 12d67e0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d67e0f jne 0x12d67e19 */
  if (!C.zf) goto L_12d67e19;
  /* 12d67e11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d67e14 jmp 0x12d67f4a */
  goto L_12d67f4a;
L_12d67e19:;
  /* 12d67e19 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67e1c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67e21 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d67e24 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67e27 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d67e2a jmp 0x12d67e38 */
  goto L_12d67e38;
L_12d67e2c:;
  /* 12d67e2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67e2f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67e35 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d67e38:;
  /* 12d67e38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67e3b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67e3e ja 0x12d67e9d */
  if ((!C.cf&&!C.zf)) goto L_12d67e9d;
  /* 12d67e40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67e43 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12d67e4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67e4d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12d67e57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67e5a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67e5d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d67e60 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67e63 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12d67e69 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67e6c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67e72 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67e75 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d67e78 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67e7b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67e81 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67e84 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d67e87 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67e8a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67e8f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d67e92 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d67e95 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12d67e9b jmp 0x12d67e2c */
  goto L_12d67e2c;
L_12d67e9d:;
  /* 12d67e9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d67ea0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67ea6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d67ea9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67eac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67eaf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d67eb2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12d67eb5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d67eb8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d67ebb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d67ebe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67ec1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d67ec4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12d67ec7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d67eca add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67ecd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d67ed0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12d67ed3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d67ed6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d67ed9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d67edc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d67edf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d67ee2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12d67ee5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d67ee8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d67eeb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12d67ef3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d67ef6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d67ef9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12d67f04 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d67f07 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12d67f0b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d67f0e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12d67f11 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d67f14 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d67f17 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12d67f1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d67f1c jne 0x12d67f2d */
  if (!C.zf) goto L_12d67f2d;
  /* 12d67f1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d67f21 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d67f24 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d67f27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d67f2a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12d67f2d:;
  /* 12d67f2d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d67f32 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d67f35 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d67f37 not edx */
  EDX = (~(EDX));
  /* 12d67f39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d67f3c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d67f3f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d67f41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d67f44 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d67f47 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12d67f4a:;
  /* 12d67f4a mov esp, ebp */
  ESP = (EBP);
  /* 12d67f4c pop ebp */
  EBP = (pop32());
  /* 12d67f4d ret  */
  ESPCHK(0x12d67d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f50 @ 0x12d67f50 (1515 bytes, 489 insns) */
void f_12d67f50(void) {
  FTRACE(0x12d67f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d67f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d67f51 mov ebp, esp */
  EBP = (ESP);
  /* 12d67f53 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67f56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d67f59 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67f5c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12d67f5e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d67f61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d67f64 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d67f67 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12d67f6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d67f6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d67f70 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67f73 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d67f76 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d67f79 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12d67f7c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d67f7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d67f82 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d67f88 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d67f8b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12d67f92 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d67f95 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d67f98 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67f9b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d67f9e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d67fa1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d67fa3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67fa6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12d67fa9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d67fac add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67faf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12d67fb2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d67fb5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d67fb7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d67fba mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d67fbd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67fc0 jle 0x12d68276 */
  if ((C.zf||C.sf!=C.of)) goto L_12d68276;
  /* 12d67fc6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67fc9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d67fcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d67fce jne 0x12d67fdb */
  if (!C.zf) goto L_12d67fdb;
  /* 12d67fd0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d67fd3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d67fd6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67fd9 jle 0x12d67fe2 */
  if ((C.zf||C.sf!=C.of)) goto L_12d67fe2;
L_12d67fdb:;
  /* 12d67fdb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d67fdd jmp 0x12d68537 */
  goto L_12d68537;
L_12d67fe2:;
  /* 12d67fe2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d67fe5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12d67fe8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d67feb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d67fee cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d67ff2 jbe 0x12d67ffb */
  if ((C.cf||C.zf)) goto L_12d67ffb;
  /* 12d67ff4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12d67ffb:;
  /* 12d67ffb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d67ffe mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d68001 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d68004 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68007 jne 0x12d680dd */
  if (!C.zf) goto L_12d680dd;
  /* 12d6800d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68011 jae 0x12d68072 */
  if (!C.cf) goto L_12d68072;
  /* 12d68013 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d68018 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6801b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d6801d not edx */
  EDX = (~(EDX));
  /* 12d6801f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d68022 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d68025 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12d68029 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6802b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6802e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d68031 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12d68035 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d68038 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6803b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d6803e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d68041 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d68044 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68047 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12d6804a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d6804d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68050 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d68054 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d68056 jne 0x12d68070 */
  if (!C.zf) goto L_12d68070;
  /* 12d68058 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d6805d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d68060 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d68062 not edx */
  EDX = (~(EDX));
  /* 12d68064 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d68067 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d68069 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6806b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6806e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d68070:;
  /* 12d68070 jmp 0x12d680dd */
  goto L_12d680dd;
L_12d68072:;
  /* 12d68072 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d68075 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d68078 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d6807d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d6807f not eax */
  EAX = (~(EAX));
  /* 12d68081 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d68084 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d68087 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12d6808e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d68090 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d68093 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d68096 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12d6809d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d680a0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d680a3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12d680a6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d680a9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d680ac add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d680af mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12d680b2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d680b5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d680b8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d680bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d680be jne 0x12d680dd */
  if (!C.zf) goto L_12d680dd;
  /* 12d680c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d680c3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d680c6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d680cb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d680cd not eax */
  EAX = (~(EAX));
  /* 12d680cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d680d2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d680d5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d680d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d680da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12d680dd:;
  /* 12d680dd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d680e0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d680e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d680e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d680e9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12d680ec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d680ef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d680f2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d680f5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d680f8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12d680fb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d680fe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68101 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d68104 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d68107 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6810b jle 0x12d68257 */
  if ((C.zf||C.sf!=C.of)) goto L_12d68257;
  /* 12d68111 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d68114 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68117 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12d6811a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6811d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12d68120 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d68123 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d68126 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6812a jbe 0x12d68133 */
  if ((C.cf||C.zf)) goto L_12d68133;
  /* 12d6812c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12d68133:;
  /* 12d68133 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d68136 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d68139 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12d6813c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d6813f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d68142 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d68145 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d68148 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d6814b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d6814e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d68151 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12d68154 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d68157 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d6815a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12d6815d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d68160 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d68163 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d68166 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d68169 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d6816c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d6816f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d68172 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68175 jne 0x12d68243 */
  if (!C.zf) goto L_12d68243;
  /* 12d6817b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6817f jae 0x12d681dc */
  if (!C.cf) goto L_12d681dc;
  /* 12d68181 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d68184 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68187 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d6818b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d6818e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68191 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d68194 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d68197 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d6819a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6819d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12d681a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d681a2 jne 0x12d681ba */
  if (!C.zf) goto L_12d681ba;
  /* 12d681a4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d681a9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d681ac shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d681ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d681b1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d681b3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d681b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d681b8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d681ba:;
  /* 12d681ba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d681bf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d681c2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d681c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d681c7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d681ca mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12d681ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d681d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d681d3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d681d6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12d681da jmp 0x12d68243 */
  goto L_12d68243;
L_12d681dc:;
  /* 12d681dc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d681df add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d681e2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d681e6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d681e9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d681ec mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d681ef add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d681f2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d681f5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d681f8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12d681fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d681fd jne 0x12d6821a */
  if (!C.zf) goto L_12d6821a;
  /* 12d681ff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d68202 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d68205 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d6820a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d6820c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6820f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d68212 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d68214 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d68217 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12d6821a:;
  /* 12d6821a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6821d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d68220 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d68225 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d68227 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6822a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d6822d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12d68234 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d68236 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d68239 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d6823c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12d68243:;
  /* 12d68243 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d68246 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d68249 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d6824b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d6824e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68251 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d68254 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12d68257:;
  /* 12d68257 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d6825a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6825d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d68260 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d68262 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d68265 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68268 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6826b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6826e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12d68271 jmp 0x12d68532 */
  goto L_12d68532;
L_12d68276:;
  /* 12d68276 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d68279 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6827c jge 0x12d68532 */
  if ((C.sf==C.of)) goto L_12d68532;
  /* 12d68282 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d68285 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68288 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6828b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d6828d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d68290 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68293 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d68296 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68299 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12d6829c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6829f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d682a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d682a5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d682a8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d682ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d682ae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d682b1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12d682b4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d682b7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d682ba cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d682be jbe 0x12d682c7 */
  if ((C.cf||C.zf)) goto L_12d682c7;
  /* 12d682c0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12d682c7:;
  /* 12d682c7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d682ca and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d682cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d682cf jne 0x12d68410 */
  if (!C.zf) goto L_12d68410;
  /* 12d682d5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d682d8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12d682db sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d682de mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d682e1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d682e5 jbe 0x12d682ee */
  if ((C.cf||C.zf)) goto L_12d682ee;
  /* 12d682e7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12d682ee:;
  /* 12d682ee mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d682f1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d682f4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d682f7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d682fa jne 0x12d683d0 */
  if (!C.zf) goto L_12d683d0;
  /* 12d68300 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68304 jae 0x12d68365 */
  if (!C.cf) goto L_12d68365;
  /* 12d68306 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d6830b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6830e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d68310 not edx */
  EDX = (~(EDX));
  /* 12d68312 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d68315 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d68318 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12d6831c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6831e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d68321 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d68324 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12d68328 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d6832b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6832e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d68331 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d68334 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d68337 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6833a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12d6833d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d68340 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68343 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d68347 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d68349 jne 0x12d68363 */
  if (!C.zf) goto L_12d68363;
  /* 12d6834b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d68350 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d68353 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d68355 not edx */
  EDX = (~(EDX));
  /* 12d68357 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6835a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d6835c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6835e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d68361 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d68363:;
  /* 12d68363 jmp 0x12d683d0 */
  goto L_12d683d0;
L_12d68365:;
  /* 12d68365 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d68368 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6836b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d68370 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d68372 not eax */
  EAX = (~(EAX));
  /* 12d68374 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d68377 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d6837a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12d68381 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d68383 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d68386 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d68389 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12d68390 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d68393 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68396 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12d68399 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d6839c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d6839f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d683a2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12d683a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d683a8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d683ab movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d683af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d683b1 jne 0x12d683d0 */
  if (!C.zf) goto L_12d683d0;
  /* 12d683b3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d683b6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d683b9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d683be shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d683c0 not eax */
  EAX = (~(EAX));
  /* 12d683c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d683c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d683c8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d683ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d683cd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12d683d0:;
  /* 12d683d0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d683d3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d683d6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d683d9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d683dc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12d683df mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d683e2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d683e5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d683e8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d683eb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12d683ee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d683f1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d683f4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d683f7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d683fa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12d683fd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d68400 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d68403 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68407 jbe 0x12d68410 */
  if ((C.cf||C.zf)) goto L_12d68410;
  /* 12d68409 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12d68410:;
  /* 12d68410 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68413 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d68416 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12d68419 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d6841c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6841f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d68422 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d68425 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12d68428 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6842b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6842e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d68431 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d68434 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d68437 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12d6843a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6843d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d68440 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d68443 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12d68446 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d68449 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6844c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d6844f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68452 jne 0x12d6851e */
  if (!C.zf) goto L_12d6851e;
  /* 12d68458 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6845c jae 0x12d684b8 */
  if (!C.cf) goto L_12d684b8;
  /* 12d6845e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d68461 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68464 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d68468 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d6846b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6846e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12d68471 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d68473 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d68476 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68479 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12d6847c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6847e jne 0x12d68496 */
  if (!C.zf) goto L_12d68496;
  /* 12d68480 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d68485 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68488 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d6848a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6848d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d6848f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d68491 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d68494 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d68496:;
  /* 12d68496 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d6849b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d6849e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d684a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d684a3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d684a6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12d684aa or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d684ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d684af mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d684b2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12d684b6 jmp 0x12d6851e */
  goto L_12d6851e;
L_12d684b8:;
  /* 12d684b8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d684bb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d684be movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d684c2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d684c5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d684c8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12d684cb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d684cd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d684d0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d684d3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12d684d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d684d8 jne 0x12d684f5 */
  if (!C.zf) goto L_12d684f5;
  /* 12d684da mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d684dd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d684e0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d684e5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d684e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d684ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d684ed or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d684ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d684f2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12d684f5:;
  /* 12d684f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d684f8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d684fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d68500 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d68502 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d68505 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d68508 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12d6850f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d68511 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d68514 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d68517 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12d6851e:;
  /* 12d6851e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d68521 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d68524 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d68526 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d68529 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6852c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d6852f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12d68532:;
  /* 12d68532 mov eax, 1 */
  EAX = (0x1u);
L_12d68537:;
  /* 12d68537 mov esp, ebp */
  ESP = (EBP);
  /* 12d68539 pop ebp */
  EBP = (pop32());
  /* 12d6853a ret  */
  ESPCHK(0x12d67f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008540 @ 0x12d68540 (304 bytes, 79 insns) */
void f_12d68540(void) {
  FTRACE(0x12d68540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d68540 push ebp */
  push32((uint32_t)(EBP));
  /* 12d68541 mov ebp, esp */
  EBP = (ESP);
  /* 12d68543 push ecx */
  push32((uint32_t)(ECX));
  /* 12d68544 cmp dword ptr [0x12d7fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6854b je 0x12d6866c */
  if (C.zf) goto L_12d6866c;
  /* 12d68551 mov eax, dword ptr [0x12d7fe18] */
  EAX = (r32((uint32_t)(0x12d7fe18)));
  /* 12d68556 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12d68559 mov ecx, dword ptr [0x12d7fe20] */
  ECX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d6855f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d68562 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68564 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d68567 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12d6856c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12d68571 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d68574 push eax */
  push32((uint32_t)(EAX));
  /* 12d68575 call dword ptr [0x12d80314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80314))), 0x12d6857bu);
  /* 12d6857b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d68580 mov ecx, dword ptr [0x12d7fe18] */
  ECX = (r32((uint32_t)(0x12d7fe18)));
  /* 12d68586 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d68588 mov eax, dword ptr [0x12d7fe20] */
  EAX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d6858d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d68590 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d68592 mov edx, dword ptr [0x12d7fe20] */
  EDX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d68598 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d6859b mov eax, dword ptr [0x12d7fe20] */
  EAX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d685a0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d685a3 mov edx, dword ptr [0x12d7fe18] */
  EDX = (r32((uint32_t)(0x12d7fe18)));
  /* 12d685a9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12d685b4 mov eax, dword ptr [0x12d7fe20] */
  EAX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d685b9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d685bc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12d685bf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d685c2 mov eax, dword ptr [0x12d7fe20] */
  EAX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d685c7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d685ca mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12d685cd mov edx, dword ptr [0x12d7fe20] */
  EDX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d685d3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d685d6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12d685da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d685dc jne 0x12d685f2 */
  if (!C.zf) goto L_12d685f2;
  /* 12d685de mov edx, dword ptr [0x12d7fe20] */
  EDX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d685e4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d685e7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12d685e9 mov ecx, dword ptr [0x12d7fe20] */
  ECX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d685ef mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12d685f2:;
  /* 12d685f2 mov edx, dword ptr [0x12d7fe20] */
  EDX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d685f8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d685fc jne 0x12d68662 */
  if (!C.zf) goto L_12d68662;
  /* 12d685fe cmp dword ptr [0x12d7fe24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7fe24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68605 jle 0x12d68662 */
  if ((C.zf||C.sf!=C.of)) goto L_12d68662;
  /* 12d68607 mov eax, dword ptr [0x12d7fe20] */
  EAX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d6860c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d6860f push ecx */
  push32((uint32_t)(ECX));
  /* 12d68610 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d68612 mov edx, dword ptr [0x12d7fe2c] */
  EDX = (r32((uint32_t)(0x12d7fe2c)));
  /* 12d68618 push edx */
  push32((uint32_t)(EDX));
  /* 12d68619 call dword ptr [0x12d80310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80310))), 0x12d6861fu);
  /* 12d6861f mov eax, dword ptr [0x12d7fe24] */
  EAX = (r32((uint32_t)(0x12d7fe24)));
  /* 12d68624 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d68627 mov ecx, dword ptr [0x12d7fe28] */
  ECX = (r32((uint32_t)(0x12d7fe28)));
  /* 12d6862d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6862f mov edx, dword ptr [0x12d7fe20] */
  EDX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d68635 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68638 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6863a push ecx */
  push32((uint32_t)(ECX));
  /* 12d6863b mov eax, dword ptr [0x12d7fe20] */
  EAX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d68640 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68643 push eax */
  push32((uint32_t)(EAX));
  /* 12d68644 mov ecx, dword ptr [0x12d7fe20] */
  ECX = (r32((uint32_t)(0x12d7fe20)));
  /* 12d6864a push ecx */
  push32((uint32_t)(ECX));
  /* 12d6864b call 0x12d6ac70 */
  push32(0x12d68650u); f_12d6ac70();
  /* 12d68650 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68653 mov edx, dword ptr [0x12d7fe24] */
  EDX = (r32((uint32_t)(0x12d7fe24)));
  /* 12d68659 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6865c mov dword ptr [0x12d7fe24], edx */
  w32((uint32_t)(0x12d7fe24), (EDX));
L_12d68662:;
  /* 12d68662 mov dword ptr [0x12d7fe20], 0 */
  w32((uint32_t)(0x12d7fe20), (0x0u));
L_12d6866c:;
  /* 12d6866c mov esp, ebp */
  ESP = (EBP);
  /* 12d6866e pop ebp */
  EBP = (pop32());
  /* 12d6866f ret  */
  ESPCHK(0x12d68540u, _esp0);
  ESP += 4; return;
}

/* FUN_10008670 @ 0x12d68670 (1565 bytes, 343 insns) */
void f_12d68670(void) {
  FTRACE(0x12d68670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d68670 push ebp */
  push32((uint32_t)(EBP));
  /* 12d68671 mov ebp, esp */
  EBP = (ESP);
  /* 12d68673 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d68679 mov eax, dword ptr [0x12d7fe24] */
  EAX = (r32((uint32_t)(0x12d7fe24)));
  /* 12d6867e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d68681 push eax */
  push32((uint32_t)(EAX));
  /* 12d68682 mov ecx, dword ptr [0x12d7fe28] */
  ECX = (r32((uint32_t)(0x12d7fe28)));
  /* 12d68688 push ecx */
  push32((uint32_t)(ECX));
  /* 12d68689 call dword ptr [0x12d802e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802e8))), 0x12d6868fu);
  /* 12d6868f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d68691 je 0x12d6869b */
  if (C.zf) goto L_12d6869b;
  /* 12d68693 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d68696 jmp 0x12d68c89 */
  goto L_12d68c89;
L_12d6869b:;
  /* 12d6869b mov edx, dword ptr [0x12d7fe28] */
  EDX = (r32((uint32_t)(0x12d7fe28)));
  /* 12d686a1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12d686a7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12d686b1 jmp 0x12d686c2 */
  goto L_12d686c2;
L_12d686b3:;
  /* 12d686b3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12d686b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d686bc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12d686c2:;
  /* 12d686c2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12d686c8 cmp ecx, dword ptr [0x12d7fe24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d686ce jge 0x12d68c87 */
  if ((C.sf==C.of)) goto L_12d68c87;
  /* 12d686d4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12d686da mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d686dd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12d686e3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12d686e8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12d686ee push ecx */
  push32((uint32_t)(ECX));
  /* 12d686ef call dword ptr [0x12d802e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802e8))), 0x12d686f5u);
  /* 12d686f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d686f7 je 0x12d68703 */
  if (C.zf) goto L_12d68703;
  /* 12d686f9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12d686fe jmp 0x12d68c89 */
  goto L_12d68c89;
L_12d68703:;
  /* 12d68703 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12d68709 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d6870c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12d68712 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12d68718 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6871e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d68721 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12d68727 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d6872a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6872d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12d68737 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12d68741 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d68748 jmp 0x12d68753 */
  goto L_12d68753;
L_12d6874a:;
  /* 12d6874a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6874d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68750 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12d68753:;
  /* 12d68753 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68757 jge 0x12d68c4b */
  if ((C.sf==C.of)) goto L_12d68c4b;
  /* 12d6875d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12d68767 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12d68771 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 12d6877b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12d68785 jmp 0x12d68796 */
  goto L_12d68796;
L_12d68787:;
  /* 12d68787 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12d6878d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68790 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12d68796:;
  /* 12d68796 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6879d jge 0x12d687b2 */
  if ((C.sf==C.of)) goto L_12d687b2;
  /* 12d6879f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12d687a5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12d687b0 jmp 0x12d68787 */
  goto L_12d68787;
L_12d687b2:;
  /* 12d687b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d687b6 jl 0x12d68bed */
  if ((C.sf!=C.of)) goto L_12d68bed;
  /* 12d687bc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12d687c1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12d687c7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d687c8 call dword ptr [0x12d802e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802e8))), 0x12d687ceu);
  /* 12d687ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d687d0 je 0x12d687dc */
  if (C.zf) goto L_12d687dc;
  /* 12d687d2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12d687d7 jmp 0x12d68c89 */
  goto L_12d68c89;
L_12d687dc:;
  /* 12d687dc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12d687e2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d687e5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 12d687ef jmp 0x12d68800 */
  goto L_12d68800;
L_12d687f1:;
  /* 12d687f1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12d687f7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d687fa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12d68800:;
  /* 12d68800 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68807 jge 0x12d68984 */
  if ((C.sf==C.of)) goto L_12d68984;
  /* 12d6880d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d68810 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68813 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12d68819 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d6881f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68825 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 12d6882b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d68831 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68835 jne 0x12d68842 */
  if (!C.zf) goto L_12d68842;
  /* 12d68837 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 12d6883d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68840 je 0x12d6884c */
  if (C.zf) goto L_12d6884c;
L_12d68842:;
  /* 12d68842 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12d68847 jmp 0x12d68c89 */
  goto L_12d68c89;
L_12d6884c:;
  /* 12d6884c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d68852 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d68854 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12d6885a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12d68860 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12d68866 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 12d6886c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6886f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d68871 je 0x12d688a9 */
  if (C.zf) goto L_12d688a9;
  /* 12d68873 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12d68879 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6887c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12d68882 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6888c jle 0x12d68898 */
  if ((C.zf||C.sf!=C.of)) goto L_12d68898;
  /* 12d6888e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12d68893 jmp 0x12d68c89 */
  goto L_12d68c89;
L_12d68898:;
  /* 12d68898 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 12d6889e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d688a1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12d688a7 jmp 0x12d688eb */
  goto L_12d688eb;
L_12d688a9:;
  /* 12d688a9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 12d688af sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12d688b2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d688b5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12d688bb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d688c2 jle 0x12d688ce */
  if ((C.zf||C.sf!=C.of)) goto L_12d688ce;
  /* 12d688c4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12d688ce:;
  /* 12d688ce mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12d688d4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 12d688db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d688de mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12d688e4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_12d688eb:;
  /* 12d688eb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d688f2 jl 0x12d6890d */
  if ((C.sf!=C.of)) goto L_12d6890d;
  /* 12d688f4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12d688fa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12d688fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d688ff jne 0x12d6890d */
  if (!C.zf) goto L_12d6890d;
  /* 12d68901 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6890b jle 0x12d68917 */
  if ((C.zf||C.sf!=C.of)) goto L_12d68917;
L_12d6890d:;
  /* 12d6890d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12d68912 jmp 0x12d68c89 */
  goto L_12d68c89;
L_12d68917:;
  /* 12d68917 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d6891d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68923 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12d68926 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6892c je 0x12d68938 */
  if (C.zf) goto L_12d68938;
  /* 12d6892e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12d68933 jmp 0x12d68c89 */
  goto L_12d68c89;
L_12d68938:;
  /* 12d68938 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d6893e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68944 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12d6894a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d68950 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68956 jb 0x12d6884c */
  if (C.cf) goto L_12d6884c;
  /* 12d6895c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d68962 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68968 je 0x12d68974 */
  if (C.zf) goto L_12d68974;
  /* 12d6896a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12d6896f jmp 0x12d68c89 */
  goto L_12d68c89;
L_12d68974:;
  /* 12d68974 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d68977 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6897c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d6897f jmp 0x12d687f1 */
  goto L_12d687f1;
L_12d68984:;
  /* 12d68984 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d68987 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d68989 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6898f je 0x12d6899b */
  if (C.zf) goto L_12d6899b;
  /* 12d68991 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12d68996 jmp 0x12d68c89 */
  goto L_12d68c89;
L_12d6899b:;
  /* 12d6899b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6899e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12d689a4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12d689ab jmp 0x12d689b6 */
  goto L_12d689b6;
L_12d689ad:;
  /* 12d689ad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d689b0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d689b3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12d689b6:;
  /* 12d689b6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d689ba jge 0x12d68bed */
  if ((C.sf==C.of)) goto L_12d68bed;
  /* 12d689c0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 12d689ca mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12d689d0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12d689d6:;
  /* 12d689d6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d689dc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d689df mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12d689e5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12d689eb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d689f1 je 0x12d68b1a */
  if (C.zf) goto L_12d68b1a;
  /* 12d689f7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d689fa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12d68a00 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68a07 je 0x12d68b1a */
  if (C.zf) goto L_12d68b1a;
  /* 12d68a0d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12d68a13 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68a19 jb 0x12d68a2e */
  if (C.cf) goto L_12d68a2e;
  /* 12d68a1b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 12d68a21 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68a26 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68a2c jb 0x12d68a38 */
  if (C.cf) goto L_12d68a38;
L_12d68a2e:;
  /* 12d68a2e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12d68a33 jmp 0x12d68c89 */
  goto L_12d68c89;
L_12d68a38:;
  /* 12d68a38 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12d68a3e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12d68a44 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 12d68a4a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12d68a50 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68a53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d68a56 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d68a59 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68a5e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12d68a64:;
  /* 12d68a64 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d68a67 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68a6d je 0x12d68a8e */
  if (C.zf) goto L_12d68a8e;
  /* 12d68a6f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d68a72 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68a78 jne 0x12d68a7c */
  if (!C.zf) goto L_12d68a7c;
  /* 12d68a7a jmp 0x12d68a8e */
  goto L_12d68a8e;
L_12d68a7c:;
  /* 12d68a7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d68a7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d68a81 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12d68a84 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d68a87 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68a89 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d68a8c jmp 0x12d68a64 */
  goto L_12d68a64;
L_12d68a8e:;
  /* 12d68a8e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d68a91 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68a97 jne 0x12d68aa3 */
  if (!C.zf) goto L_12d68aa3;
  /* 12d68a99 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 12d68a9e jmp 0x12d68c89 */
  goto L_12d68c89;
L_12d68aa3:;
  /* 12d68aa3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12d68aa9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d68aab sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12d68aae sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d68ab1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12d68ab7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68abe jle 0x12d68aca */
  if ((C.zf||C.sf!=C.of)) goto L_12d68aca;
  /* 12d68ac0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12d68aca:;
  /* 12d68aca mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12d68ad0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68ad3 je 0x12d68adf */
  if (C.zf) goto L_12d68adf;
  /* 12d68ad5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 12d68ada jmp 0x12d68c89 */
  goto L_12d68c89;
L_12d68adf:;
  /* 12d68adf mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12d68ae5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d68ae8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68aee je 0x12d68afa */
  if (C.zf) goto L_12d68afa;
  /* 12d68af0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12d68af5 jmp 0x12d68c89 */
  goto L_12d68c89;
L_12d68afa:;
  /* 12d68afa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12d68b00 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12d68b06 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12d68b0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68b0f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12d68b15 jmp 0x12d689d6 */
  goto L_12d689d6;
L_12d68b1a:;
  /* 12d68b1a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68b21 je 0x12d68b91 */
  if (C.zf) goto L_12d68b91;
  /* 12d68b23 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68b27 jge 0x12d68b5b */
  if ((C.sf==C.of)) goto L_12d68b5b;
  /* 12d68b29 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d68b2e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d68b31 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d68b33 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12d68b39 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d68b3b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12d68b41 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d68b46 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d68b49 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d68b4b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12d68b51 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d68b53 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12d68b59 jmp 0x12d68b91 */
  goto L_12d68b91;
L_12d68b5b:;
  /* 12d68b5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d68b5e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d68b61 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d68b66 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d68b68 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 12d68b6e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d68b70 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12d68b76 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d68b79 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d68b7c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d68b81 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d68b83 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12d68b89 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d68b8b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12d68b91:;
  /* 12d68b91 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d68b97 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d68b9a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68ba0 jne 0x12d68bb4 */
  if (!C.zf) goto L_12d68bb4;
  /* 12d68ba2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d68ba5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12d68bab cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68bb2 je 0x12d68bbe */
  if (C.zf) goto L_12d68bbe;
L_12d68bb4:;
  /* 12d68bb4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12d68bb9 jmp 0x12d68c89 */
  goto L_12d68c89;
L_12d68bbe:;
  /* 12d68bbe mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12d68bc4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d68bc7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68bcd je 0x12d68bd9 */
  if (C.zf) goto L_12d68bd9;
  /* 12d68bcf mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12d68bd4 jmp 0x12d68c89 */
  goto L_12d68c89;
L_12d68bd9:;
  /* 12d68bd9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 12d68bdf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68be2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12d68be8 jmp 0x12d689ad */
  goto L_12d689ad;
L_12d68bed:;
  /* 12d68bed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d68bf0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12d68bf6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12d68bfc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68c00 jne 0x12d68c1a */
  if (!C.zf) goto L_12d68c1a;
  /* 12d68c02 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d68c05 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12d68c0b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12d68c11 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68c18 je 0x12d68c21 */
  if (C.zf) goto L_12d68c21;
L_12d68c1a:;
  /* 12d68c1a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 12d68c1f jmp 0x12d68c89 */
  goto L_12d68c89;
L_12d68c21:;
  /* 12d68c21 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12d68c27 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68c2d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12d68c33 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d68c36 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68c3b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d68c3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d68c41 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12d68c43 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d68c46 jmp 0x12d6874a */
  goto L_12d6874a;
L_12d68c4b:;
  /* 12d68c4b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12d68c51 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12d68c57 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68c59 jne 0x12d68c6c */
  if (!C.zf) goto L_12d68c6c;
  /* 12d68c5b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12d68c61 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12d68c67 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68c6a je 0x12d68c73 */
  if (C.zf) goto L_12d68c73;
L_12d68c6c:;
  /* 12d68c6c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12d68c71 jmp 0x12d68c89 */
  goto L_12d68c89;
L_12d68c73:;
  /* 12d68c73 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12d68c79 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68c7c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12d68c82 jmp 0x12d686b3 */
  goto L_12d686b3;
L_12d68c87:;
  /* 12d68c87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d68c89:;
  /* 12d68c89 mov esp, ebp */
  ESP = (EBP);
  /* 12d68c8b pop ebp */
  EBP = (pop32());
  /* 12d68c8c ret  */
  ESPCHK(0x12d68670u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c90 @ 0x12d68c90 (250 bytes, 92 insns) */
void f_12d68c90(void) {
  FTRACE(0x12d68c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d68c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d68c91 mov ebp, esp */
  EBP = (ESP);
  /* 12d68c93 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d68c96 push ebx */
  push32((uint32_t)(EBX));
  /* 12d68c97 push esi */
  push32((uint32_t)(ESI));
  /* 12d68c98 push edi */
  push32((uint32_t)(EDI));
  /* 12d68c99 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12d68c9c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d68c9f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12d68ca2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12d68ca5:;
  /* 12d68ca5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68ca9 jne 0x12d68cc9 */
  if (!C.zf) goto L_12d68cc9;
  /* 12d68cab push 0x12d79dec */
  push32((uint32_t)(0x12d79decu));
  /* 12d68cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d68cb2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12d68cb4 push 0x12d79de0 */
  push32((uint32_t)(0x12d79de0u));
  /* 12d68cb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d68cbb call 0x12d61e40 */
  push32(0x12d68cc0u); f_12d61e40();
  /* 12d68cc0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68cc3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68cc6 jne 0x12d68cc9 */
  if (!C.zf) goto L_12d68cc9;
  /* 12d68cc8 int3  */
  x86_unimpl("int3 @ 0x12d68cc8");
L_12d68cc9:;
  /* 12d68cc9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d68ccb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d68ccd jne 0x12d68ca5 */
  if (!C.zf) goto L_12d68ca5;
L_12d68ccf:;
  /* 12d68ccf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68cd3 jne 0x12d68cf3 */
  if (!C.zf) goto L_12d68cf3;
  /* 12d68cd5 push 0x12d79dd0 */
  push32((uint32_t)(0x12d79dd0u));
  /* 12d68cda push 0 */
  push32((uint32_t)(0x0u));
  /* 12d68cdc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12d68cde push 0x12d79de0 */
  push32((uint32_t)(0x12d79de0u));
  /* 12d68ce3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d68ce5 call 0x12d61e40 */
  push32(0x12d68ceau); f_12d61e40();
  /* 12d68cea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68ced cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68cf0 jne 0x12d68cf3 */
  if (!C.zf) goto L_12d68cf3;
  /* 12d68cf2 int3  */
  x86_unimpl("int3 @ 0x12d68cf2");
L_12d68cf3:;
  /* 12d68cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d68cf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d68cf7 jne 0x12d68ccf */
  if (!C.zf) goto L_12d68ccf;
  /* 12d68cf9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68cfc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12d68d03 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d68d09 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d68d0c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68d0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d68d12 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d68d14 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68d17 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 12d68d1e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d68d21 push ecx */
  push32((uint32_t)(ECX));
  /* 12d68d22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d68d25 push edx */
  push32((uint32_t)(EDX));
  /* 12d68d26 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68d29 push eax */
  push32((uint32_t)(EAX));
  /* 12d68d2a call 0x12d69d10 */
  push32(0x12d68d2fu); f_12d69d10();
  /* 12d68d2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68d32 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d68d35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68d38 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d68d3b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d68d3e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68d41 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d68d44 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68d47 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68d4b jl 0x12d68d6f */
  if ((C.sf!=C.of)) goto L_12d68d6f;
  /* 12d68d4d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68d50 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d68d52 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d68d55 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d68d57 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d68d5d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12d68d60 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68d63 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d68d65 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68d68 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68d6b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d68d6d jmp 0x12d68d80 */
  goto L_12d68d80;
L_12d68d6f:;
  /* 12d68d6f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68d72 push edx */
  push32((uint32_t)(EDX));
  /* 12d68d73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d68d75 call 0x12d69a90 */
  push32(0x12d68d7au); f_12d69a90();
  /* 12d68d7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68d7d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12d68d80:;
  /* 12d68d80 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d68d83 pop edi */
  EDI = (pop32());
  /* 12d68d84 pop esi */
  ESI = (pop32());
  /* 12d68d85 pop ebx */
  EBX = (pop32());
  /* 12d68d86 mov esp, ebp */
  ESP = (EBP);
  /* 12d68d88 pop ebp */
  EBP = (pop32());
  /* 12d68d89 ret  */
  ESPCHK(0x12d68c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d90 @ 0x12d68d90 (183 bytes, 58 insns) */
void f_12d68d90(void) {
  FTRACE(0x12d68d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d68d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d68d91 mov ebp, esp */
  EBP = (ESP);
  /* 12d68d93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d68d96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d68d99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68d9c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68da1 ja 0x12d68dba */
  if ((!C.cf&&!C.zf)) goto L_12d68dba;
  /* 12d68da3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d68da6 mov edx, dword ptr [0x12d7ccb8] */
  EDX = (r32((uint32_t)(0x12d7ccb8)));
  /* 12d68dac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d68dae mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12d68db2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12d68db5 jmp 0x12d68e43 */
  goto L_12d68e43;
L_12d68dba:;
  /* 12d68dba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d68dbd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12d68dc0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d68dc6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d68dcc mov edx, dword ptr [0x12d7ccb8] */
  EDX = (r32((uint32_t)(0x12d7ccb8)));
  /* 12d68dd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d68dd4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12d68dd8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12d68ddd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d68ddf je 0x12d68e03 */
  if (C.zf) goto L_12d68e03;
  /* 12d68de1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d68de4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12d68de7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d68ded mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12d68df0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d68df3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12d68df6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 12d68dfa mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12d68e01 jmp 0x12d68e14 */
  goto L_12d68e14;
L_12d68e03:;
  /* 12d68e03 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d68e06 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12d68e09 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 12d68e0d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12d68e14:;
  /* 12d68e14 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d68e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d68e18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d68e1a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12d68e1d push ecx */
  push32((uint32_t)(ECX));
  /* 12d68e1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d68e21 push edx */
  push32((uint32_t)(EDX));
  /* 12d68e22 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12d68e25 push eax */
  push32((uint32_t)(EAX));
  /* 12d68e26 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d68e28 call 0x12d6afb0 */
  push32(0x12d68e2du); f_12d6afb0();
  /* 12d68e2d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68e30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d68e32 jne 0x12d68e38 */
  if (!C.zf) goto L_12d68e38;
  /* 12d68e34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d68e36 jmp 0x12d68e43 */
  goto L_12d68e43;
L_12d68e38:;
  /* 12d68e38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d68e3b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d68e40 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12d68e43:;
  /* 12d68e43 mov esp, ebp */
  ESP = (EBP);
  /* 12d68e45 pop ebp */
  EBP = (pop32());
  /* 12d68e46 ret  */
  ESPCHK(0x12d68d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e50 @ 0x12d68e50 (836 bytes, 238 insns) */
void f_12d68e50(void) {
  FTRACE(0x12d68e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d68e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d68e51 mov ebp, esp */
  EBP = (ESP);
  /* 12d68e53 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d68e56 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d68e58 call 0x12d66780 */
  push32(0x12d68e5du); f_12d66780();
  /* 12d68e5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68e60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d68e63 push eax */
  push32((uint32_t)(EAX));
  /* 12d68e64 call 0x12d691a0 */
  push32(0x12d68e69u); f_12d691a0();
  /* 12d68e69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68e6c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d68e6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d68e72 cmp ecx, dword ptr [0x12d7fb64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7fb64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68e78 jne 0x12d68e8b */
  if (!C.zf) goto L_12d68e8b;
  /* 12d68e7a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d68e7c call 0x12d66820 */
  push32(0x12d68e81u); f_12d66820();
  /* 12d68e81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68e84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d68e86 jmp 0x12d69190 */
  goto L_12d69190;
L_12d68e8b:;
  /* 12d68e8b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68e8f jne 0x12d68eac */
  if (!C.zf) goto L_12d68eac;
  /* 12d68e91 call 0x12d69280 */
  push32(0x12d68e96u); f_12d69280();
  /* 12d68e96 call 0x12d69300 */
  push32(0x12d68e9bu); f_12d69300();
  /* 12d68e9b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d68e9d call 0x12d66820 */
  push32(0x12d68ea2u); f_12d66820();
  /* 12d68ea2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68ea5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d68ea7 jmp 0x12d69190 */
  goto L_12d69190;
L_12d68eac:;
  /* 12d68eac mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d68eb3 jmp 0x12d68ebe */
  goto L_12d68ebe;
L_12d68eb5:;
  /* 12d68eb5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d68eb8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68ebb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d68ebe:;
  /* 12d68ebe cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68ec2 jae 0x12d6900f */
  if (!C.cf) goto L_12d6900f;
  /* 12d68ec8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d68ecb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d68ece mov ecx, dword ptr [eax + 0x12d7ced8] */
  ECX = (r32((uint32_t)(EAX + 0x12d7ced8)));
  /* 12d68ed4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68ed7 jne 0x12d6900a */
  if (!C.zf) goto L_12d6900a;
  /* 12d68edd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d68ee4 jmp 0x12d68eef */
  goto L_12d68eef;
L_12d68ee6:;
  /* 12d68ee6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68ee9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68eec mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12d68eef:;
  /* 12d68eef cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68ef6 jae 0x12d68f04 */
  if (!C.cf) goto L_12d68f04;
  /* 12d68ef8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68efb mov byte ptr [eax + 0x12d7fd00], 0 */
  w8((uint32_t)(EAX + 0x12d7fd00), (0x0u));
  /* 12d68f02 jmp 0x12d68ee6 */
  goto L_12d68ee6;
L_12d68f04:;
  /* 12d68f04 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d68f0b jmp 0x12d68f16 */
  goto L_12d68f16;
L_12d68f0d:;
  /* 12d68f0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d68f10 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68f13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12d68f16:;
  /* 12d68f16 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68f1a jae 0x12d68f97 */
  if (!C.cf) goto L_12d68f97;
  /* 12d68f1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d68f1f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d68f22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d68f25 lea ecx, [edx + eax*8 + 0x12d7cee8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12d7cee8));
  /* 12d68f2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d68f2f jmp 0x12d68f3a */
  goto L_12d68f3a;
L_12d68f31:;
  /* 12d68f31 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d68f34 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68f37 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d68f3a:;
  /* 12d68f3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d68f3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d68f3f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d68f41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d68f43 je 0x12d68f92 */
  if (C.zf) goto L_12d68f92;
  /* 12d68f45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d68f48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d68f4a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12d68f4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d68f4f je 0x12d68f92 */
  if (C.zf) goto L_12d68f92;
  /* 12d68f51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d68f54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d68f56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d68f58 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12d68f5b jmp 0x12d68f66 */
  goto L_12d68f66;
L_12d68f5d:;
  /* 12d68f5d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68f60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68f63 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d68f66:;
  /* 12d68f66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d68f69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d68f6b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12d68f6e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68f71 ja 0x12d68f90 */
  if ((!C.cf&&!C.zf)) goto L_12d68f90;
  /* 12d68f73 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68f76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d68f79 mov dl, byte ptr [eax + 0x12d7fd01] */
  DL = (r8((uint32_t)(EAX + 0x12d7fd01)));
  /* 12d68f7f or dl, byte ptr [ecx + 0x12d7ced0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12d7ced0))); DL = (_r); fl_logic(_r,8); }
  /* 12d68f85 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d68f88 mov byte ptr [eax + 0x12d7fd01], dl */
  w8((uint32_t)(EAX + 0x12d7fd01), (DL));
  /* 12d68f8e jmp 0x12d68f5d */
  goto L_12d68f5d;
L_12d68f90:;
  /* 12d68f90 jmp 0x12d68f31 */
  goto L_12d68f31;
L_12d68f92:;
  /* 12d68f92 jmp 0x12d68f0d */
  goto L_12d68f0d;
L_12d68f97:;
  /* 12d68f97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d68f9a mov dword ptr [0x12d7fb64], ecx */
  w32((uint32_t)(0x12d7fb64), (ECX));
  /* 12d68fa0 mov dword ptr [0x12d7fbec], 1 */
  w32((uint32_t)(0x12d7fbec), (0x1u));
  /* 12d68faa mov edx, dword ptr [0x12d7fb64] */
  EDX = (r32((uint32_t)(0x12d7fb64)));
  /* 12d68fb0 push edx */
  push32((uint32_t)(EDX));
  /* 12d68fb1 call 0x12d69200 */
  push32(0x12d68fb6u); f_12d69200();
  /* 12d68fb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68fb9 mov dword ptr [0x12d7fe04], eax */
  w32((uint32_t)(0x12d7fe04), (EAX));
  /* 12d68fbe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d68fc5 jmp 0x12d68fd0 */
  goto L_12d68fd0;
L_12d68fc7:;
  /* 12d68fc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d68fca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d68fcd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d68fd0:;
  /* 12d68fd0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d68fd4 jae 0x12d68ff4 */
  if (!C.cf) goto L_12d68ff4;
  /* 12d68fd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d68fd9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d68fdc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d68fdf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d68fe2 mov cx, word ptr [ecx + eax*2 + 0x12d7cedc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12d7cedc)));
  /* 12d68fea mov word ptr [edx*2 + 0x12d7fbe0], cx */
  w16((uint32_t)(EDX*2 + 0x12d7fbe0), (CX));
  /* 12d68ff2 jmp 0x12d68fc7 */
  goto L_12d68fc7;
L_12d68ff4:;
  /* 12d68ff4 call 0x12d69300 */
  push32(0x12d68ff9u); f_12d69300();
  /* 12d68ff9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d68ffb call 0x12d66820 */
  push32(0x12d69000u); f_12d66820();
  /* 12d69000 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69003 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d69005 jmp 0x12d69190 */
  goto L_12d69190;
L_12d6900a:;
  /* 12d6900a jmp 0x12d68eb5 */
  goto L_12d68eb5;
L_12d6900f:;
  /* 12d6900f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12d69012 push edx */
  push32((uint32_t)(EDX));
  /* 12d69013 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d69016 push eax */
  push32((uint32_t)(EAX));
  /* 12d69017 call dword ptr [0x12d8033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8033c))), 0x12d6901du);
  /* 12d6901d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69020 jne 0x12d69162 */
  if (!C.zf) goto L_12d69162;
  /* 12d69026 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d6902d jmp 0x12d69038 */
  goto L_12d69038;
L_12d6902f:;
  /* 12d6902f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d69032 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69035 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12d69038:;
  /* 12d69038 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6903f jae 0x12d6904d */
  if (!C.cf) goto L_12d6904d;
  /* 12d69041 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d69044 mov byte ptr [edx + 0x12d7fd00], 0 */
  w8((uint32_t)(EDX + 0x12d7fd00), (0x0u));
  /* 12d6904b jmp 0x12d6902f */
  goto L_12d6902f;
L_12d6904d:;
  /* 12d6904d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d69050 mov dword ptr [0x12d7fb64], eax */
  w32((uint32_t)(0x12d7fb64), (EAX));
  /* 12d69055 mov dword ptr [0x12d7fe04], 0 */
  w32((uint32_t)(0x12d7fe04), (0x0u));
  /* 12d6905f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69063 jbe 0x12d6911e */
  if ((C.cf||C.zf)) goto L_12d6911e;
  /* 12d69069 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12d6906c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12d6906f jmp 0x12d6907a */
  goto L_12d6907a;
L_12d69071:;
  /* 12d69071 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d69074 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69077 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12d6907a:;
  /* 12d6907a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d6907d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6907f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d69081 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d69083 je 0x12d690cc */
  if (C.zf) goto L_12d690cc;
  /* 12d69085 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d69088 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6908a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12d6908d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6908f je 0x12d690cc */
  if (C.zf) goto L_12d690cc;
  /* 12d69091 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d69094 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d69096 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d69098 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12d6909b jmp 0x12d690a6 */
  goto L_12d690a6;
L_12d6909d:;
  /* 12d6909d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d690a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d690a3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d690a6:;
  /* 12d690a6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d690a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d690ab mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12d690ae cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d690b1 ja 0x12d690ca */
  if ((!C.cf&&!C.zf)) goto L_12d690ca;
  /* 12d690b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d690b6 mov cl, byte ptr [eax + 0x12d7fd01] */
  CL = (r8((uint32_t)(EAX + 0x12d7fd01)));
  /* 12d690bc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12d690bf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d690c2 mov byte ptr [edx + 0x12d7fd01], cl */
  w8((uint32_t)(EDX + 0x12d7fd01), (CL));
  /* 12d690c8 jmp 0x12d6909d */
  goto L_12d6909d;
L_12d690ca:;
  /* 12d690ca jmp 0x12d69071 */
  goto L_12d69071;
L_12d690cc:;
  /* 12d690cc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12d690d3 jmp 0x12d690de */
  goto L_12d690de;
L_12d690d5:;
  /* 12d690d5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d690d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d690db mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d690de:;
  /* 12d690de cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d690e5 jae 0x12d690fe */
  if (!C.cf) goto L_12d690fe;
  /* 12d690e7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d690ea mov dl, byte ptr [ecx + 0x12d7fd01] */
  DL = (r8((uint32_t)(ECX + 0x12d7fd01)));
  /* 12d690f0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12d690f3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d690f6 mov byte ptr [eax + 0x12d7fd01], dl */
  w8((uint32_t)(EAX + 0x12d7fd01), (DL));
  /* 12d690fc jmp 0x12d690d5 */
  goto L_12d690d5;
L_12d690fe:;
  /* 12d690fe mov ecx, dword ptr [0x12d7fb64] */
  ECX = (r32((uint32_t)(0x12d7fb64)));
  /* 12d69104 push ecx */
  push32((uint32_t)(ECX));
  /* 12d69105 call 0x12d69200 */
  push32(0x12d6910au); f_12d69200();
  /* 12d6910a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6910d mov dword ptr [0x12d7fe04], eax */
  w32((uint32_t)(0x12d7fe04), (EAX));
  /* 12d69112 mov dword ptr [0x12d7fbec], 1 */
  w32((uint32_t)(0x12d7fbec), (0x1u));
  /* 12d6911c jmp 0x12d69128 */
  goto L_12d69128;
L_12d6911e:;
  /* 12d6911e mov dword ptr [0x12d7fbec], 0 */
  w32((uint32_t)(0x12d7fbec), (0x0u));
L_12d69128:;
  /* 12d69128 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d6912f jmp 0x12d6913a */
  goto L_12d6913a;
L_12d69131:;
  /* 12d69131 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d69134 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69137 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d6913a:;
  /* 12d6913a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6913e jae 0x12d6914f */
  if (!C.cf) goto L_12d6914f;
  /* 12d69140 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d69143 mov word ptr [eax*2 + 0x12d7fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x12d7fbe0), (0x0u));
  /* 12d6914d jmp 0x12d69131 */
  goto L_12d69131;
L_12d6914f:;
  /* 12d6914f call 0x12d69300 */
  push32(0x12d69154u); f_12d69300();
  /* 12d69154 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d69156 call 0x12d66820 */
  push32(0x12d6915bu); f_12d66820();
  /* 12d6915b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6915e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d69160 jmp 0x12d69190 */
  goto L_12d69190;
L_12d69162:;
  /* 12d69162 cmp dword ptr [0x12d7e670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69169 je 0x12d69183 */
  if (C.zf) goto L_12d69183;
  /* 12d6916b call 0x12d69280 */
  push32(0x12d69170u); f_12d69280();
  /* 12d69170 call 0x12d69300 */
  push32(0x12d69175u); f_12d69300();
  /* 12d69175 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d69177 call 0x12d66820 */
  push32(0x12d6917cu); f_12d66820();
  /* 12d6917c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6917f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d69181 jmp 0x12d69190 */
  goto L_12d69190;
L_12d69183:;
  /* 12d69183 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d69185 call 0x12d66820 */
  push32(0x12d6918au); f_12d66820();
  /* 12d6918a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6918d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d69190:;
  /* 12d69190 mov esp, ebp */
  ESP = (EBP);
  /* 12d69192 pop ebp */
  EBP = (pop32());
  /* 12d69193 ret  */
  ESPCHK(0x12d68e50u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12d691a0 (89 bytes, 21 insns) */
void f_12d691a0(void) {
  FTRACE(0x12d691a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d691a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d691a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d691a3 mov dword ptr [0x12d7e670], 0 */
  w32((uint32_t)(0x12d7e670), (0x0u));
  /* 12d691ad cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d691b1 jne 0x12d691c5 */
  if (!C.zf) goto L_12d691c5;
  /* 12d691b3 mov dword ptr [0x12d7e670], 1 */
  w32((uint32_t)(0x12d7e670), (0x1u));
  /* 12d691bd call dword ptr [0x12d80344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80344))), 0x12d691c3u);
  /* 12d691c3 jmp 0x12d691f7 */
  goto L_12d691f7;
L_12d691c5:;
  /* 12d691c5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d691c9 jne 0x12d691dd */
  if (!C.zf) goto L_12d691dd;
  /* 12d691cb mov dword ptr [0x12d7e670], 1 */
  w32((uint32_t)(0x12d7e670), (0x1u));
  /* 12d691d5 call dword ptr [0x12d80340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80340))), 0x12d691dbu);
  /* 12d691db jmp 0x12d691f7 */
  goto L_12d691f7;
L_12d691dd:;
  /* 12d691dd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d691e1 jne 0x12d691f4 */
  if (!C.zf) goto L_12d691f4;
  /* 12d691e3 mov dword ptr [0x12d7e670], 1 */
  w32((uint32_t)(0x12d7e670), (0x1u));
  /* 12d691ed mov eax, dword ptr [0x12d7e690] */
  EAX = (r32((uint32_t)(0x12d7e690)));
  /* 12d691f2 jmp 0x12d691f7 */
  goto L_12d691f7;
L_12d691f4:;
  /* 12d691f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12d691f7:;
  /* 12d691f7 pop ebp */
  EBP = (pop32());
  /* 12d691f8 ret  */
  ESPCHK(0x12d691a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009200 @ 0x12d69200 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12d69200(void) {
  FTRACE(0x12d69200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d69200 push ebp */
  push32((uint32_t)(EBP));
  /* 12d69201 mov ebp, esp */
  EBP = (ESP);
  /* 12d69203 push ecx */
  push32((uint32_t)(ECX));
  /* 12d69204 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d69207 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6920a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6920d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d69213 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d69216 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6921a ja 0x12d6924a */
  if ((!C.cf&&!C.zf)) goto L_12d6924a;
  /* 12d6921c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6921f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d69221 mov dl, byte ptr [eax + 0x12d69264] */
  DL = (r8((uint32_t)(EAX + 0x12d69264)));
  /* 12d69227 jmp dword ptr [edx*4 + 0x12d69250] */
  switch (EDX) {
    case 0: goto L_12d6922e;
    case 1: goto L_12d69235;
    case 2: goto L_12d6923c;
    case 3: goto L_12d69243;
    case 4: goto L_12d6924a;
    default: x86_unimpl("switch@0x12d69227 out of table"); return;
  }
L_12d6922e:;
  /* 12d6922e mov eax, 0x411 */
  EAX = (0x411u);
  /* 12d69233 jmp 0x12d6924c */
  goto L_12d6924c;
L_12d69235:;
  /* 12d69235 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12d6923a jmp 0x12d6924c */
  goto L_12d6924c;
L_12d6923c:;
  /* 12d6923c mov eax, 0x412 */
  EAX = (0x412u);
  /* 12d69241 jmp 0x12d6924c */
  goto L_12d6924c;
L_12d69243:;
  /* 12d69243 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12d69248 jmp 0x12d6924c */
  goto L_12d6924c;
L_12d6924a:;
  /* 12d6924a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d6924c:;
  /* 12d6924c mov esp, ebp */
  ESP = (EBP);
  /* 12d6924e pop ebp */
  EBP = (pop32());
  /* 12d6924f ret  */
  ESPCHK(0x12d69200u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12d69280 (116 bytes, 29 insns) */
void f_12d69280(void) {
  FTRACE(0x12d69280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d69280 push ebp */
  push32((uint32_t)(EBP));
  /* 12d69281 mov ebp, esp */
  EBP = (ESP);
  /* 12d69283 push ecx */
  push32((uint32_t)(ECX));
  /* 12d69284 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d6928b jmp 0x12d69296 */
  goto L_12d69296;
L_12d6928d:;
  /* 12d6928d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d69290 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69293 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d69296:;
  /* 12d69296 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6929d jge 0x12d692ab */
  if ((C.sf==C.of)) goto L_12d692ab;
  /* 12d6929f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d692a2 mov byte ptr [ecx + 0x12d7fd00], 0 */
  w8((uint32_t)(ECX + 0x12d7fd00), (0x0u));
  /* 12d692a9 jmp 0x12d6928d */
  goto L_12d6928d;
L_12d692ab:;
  /* 12d692ab mov dword ptr [0x12d7fb64], 0 */
  w32((uint32_t)(0x12d7fb64), (0x0u));
  /* 12d692b5 mov dword ptr [0x12d7fbec], 0 */
  w32((uint32_t)(0x12d7fbec), (0x0u));
  /* 12d692bf mov dword ptr [0x12d7fe04], 0 */
  w32((uint32_t)(0x12d7fe04), (0x0u));
  /* 12d692c9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d692d0 jmp 0x12d692db */
  goto L_12d692db;
L_12d692d2:;
  /* 12d692d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d692d5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d692d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d692db:;
  /* 12d692db cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d692df jge 0x12d692f0 */
  if ((C.sf==C.of)) goto L_12d692f0;
  /* 12d692e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d692e4 mov word ptr [eax*2 + 0x12d7fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x12d7fbe0), (0x0u));
  /* 12d692ee jmp 0x12d692d2 */
  goto L_12d692d2;
L_12d692f0:;
  /* 12d692f0 mov esp, ebp */
  ESP = (EBP);
  /* 12d692f2 pop ebp */
  EBP = (pop32());
  /* 12d692f3 ret  */
  ESPCHK(0x12d69280u, _esp0);
  ESP += 4; return;
}

/* FUN_10009300 @ 0x12d69300 (770 bytes, 175 insns) */
void f_12d69300(void) {
  FTRACE(0x12d69300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d69300 push ebp */
  push32((uint32_t)(EBP));
  /* 12d69301 mov ebp, esp */
  EBP = (ESP);
  /* 12d69303 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d69309 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 12d6930f push eax */
  push32((uint32_t)(EAX));
  /* 12d69310 mov ecx, dword ptr [0x12d7fb64] */
  ECX = (r32((uint32_t)(0x12d7fb64)));
  /* 12d69316 push ecx */
  push32((uint32_t)(ECX));
  /* 12d69317 call dword ptr [0x12d8033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8033c))), 0x12d6931du);
  /* 12d6931d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69320 jne 0x12d69539 */
  if (!C.zf) goto L_12d69539;
  /* 12d69326 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12d69330 jmp 0x12d69341 */
  goto L_12d69341;
L_12d69332:;
  /* 12d69332 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d69338 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6933b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12d69341:;
  /* 12d69341 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6934b jae 0x12d69362 */
  if (!C.cf) goto L_12d69362;
  /* 12d6934d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d69353 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12d69359 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12d69360 jmp 0x12d69332 */
  goto L_12d69332;
L_12d69362:;
  /* 12d69362 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12d69369 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 12d6936f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d69372 jmp 0x12d6937d */
  goto L_12d6937d;
L_12d69374:;
  /* 12d69374 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d69377 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6937a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d6937d:;
  /* 12d6937d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d69380 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d69382 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d69384 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d69386 je 0x12d693c8 */
  if (C.zf) goto L_12d693c8;
  /* 12d69388 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6938b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6938d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d6938f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12d69395 jmp 0x12d693a6 */
  goto L_12d693a6;
L_12d69397:;
  /* 12d69397 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d6939d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d693a0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12d693a6:;
  /* 12d693a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d693a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d693ab mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12d693ae cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d693b4 ja 0x12d693c6 */
  if ((!C.cf&&!C.zf)) goto L_12d693c6;
  /* 12d693b6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d693bc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12d693c4 jmp 0x12d69397 */
  goto L_12d69397;
L_12d693c6:;
  /* 12d693c6 jmp 0x12d69374 */
  goto L_12d69374;
L_12d693c8:;
  /* 12d693c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d693ca mov eax, dword ptr [0x12d7fe04] */
  EAX = (r32((uint32_t)(0x12d7fe04)));
  /* 12d693cf push eax */
  push32((uint32_t)(EAX));
  /* 12d693d0 mov ecx, dword ptr [0x12d7fb64] */
  ECX = (r32((uint32_t)(0x12d7fb64)));
  /* 12d693d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d693d7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 12d693dd push edx */
  push32((uint32_t)(EDX));
  /* 12d693de push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d693e3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12d693e9 push eax */
  push32((uint32_t)(EAX));
  /* 12d693ea push 1 */
  push32((uint32_t)(0x1u));
  /* 12d693ec call 0x12d6afb0 */
  push32(0x12d693f1u); f_12d6afb0();
  /* 12d693f1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d693f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d693f6 mov ecx, dword ptr [0x12d7fb64] */
  ECX = (r32((uint32_t)(0x12d7fb64)));
  /* 12d693fc push ecx */
  push32((uint32_t)(ECX));
  /* 12d693fd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d69402 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12d69408 push edx */
  push32((uint32_t)(EDX));
  /* 12d69409 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d6940e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12d69414 push eax */
  push32((uint32_t)(EAX));
  /* 12d69415 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d6941a mov ecx, dword ptr [0x12d7fe04] */
  ECX = (r32((uint32_t)(0x12d7fe04)));
  /* 12d69420 push ecx */
  push32((uint32_t)(ECX));
  /* 12d69421 call 0x12d6b170 */
  push32(0x12d69426u); f_12d6b170();
  /* 12d69426 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69429 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6942b mov edx, dword ptr [0x12d7fb64] */
  EDX = (r32((uint32_t)(0x12d7fb64)));
  /* 12d69431 push edx */
  push32((uint32_t)(EDX));
  /* 12d69432 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d69437 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12d6943d push eax */
  push32((uint32_t)(EAX));
  /* 12d6943e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d69443 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12d69449 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6944a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12d6944f mov edx, dword ptr [0x12d7fe04] */
  EDX = (r32((uint32_t)(0x12d7fe04)));
  /* 12d69455 push edx */
  push32((uint32_t)(EDX));
  /* 12d69456 call 0x12d6b170 */
  push32(0x12d6945bu); f_12d6b170();
  /* 12d6945b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6945e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12d69468 jmp 0x12d69479 */
  goto L_12d69479;
L_12d6946a:;
  /* 12d6946a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d69470 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69473 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12d69479:;
  /* 12d69479 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69483 jae 0x12d69534 */
  if (!C.cf) goto L_12d69534;
  /* 12d69489 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d6948f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d69491 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12d69499 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6949c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6949e je 0x12d694d6 */
  if (C.zf) goto L_12d694d6;
  /* 12d694a0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d694a6 mov cl, byte ptr [eax + 0x12d7fd01] */
  CL = (r8((uint32_t)(EAX + 0x12d7fd01)));
  /* 12d694ac or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12d694af mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d694b5 mov byte ptr [edx + 0x12d7fd01], cl */
  w8((uint32_t)(EDX + 0x12d7fd01), (CL));
  /* 12d694bb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d694c1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d694c7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12d694ce mov byte ptr [eax + 0x12d7fc00], dl */
  w8((uint32_t)(EAX + 0x12d7fc00), (DL));
  /* 12d694d4 jmp 0x12d6952f */
  goto L_12d6952f;
L_12d694d6:;
  /* 12d694d6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d694dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d694de mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12d694e6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12d694e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d694eb je 0x12d69522 */
  if (C.zf) goto L_12d69522;
  /* 12d694ed mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d694f3 mov al, byte ptr [edx + 0x12d7fd01] */
  AL = (r8((uint32_t)(EDX + 0x12d7fd01)));
  /* 12d694f9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12d694fb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d69501 mov byte ptr [ecx + 0x12d7fd01], al */
  w8((uint32_t)(ECX + 0x12d7fd01), (AL));
  /* 12d69507 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d6950d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d69513 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 12d6951a mov byte ptr [edx + 0x12d7fc00], cl */
  w8((uint32_t)(EDX + 0x12d7fc00), (CL));
  /* 12d69520 jmp 0x12d6952f */
  goto L_12d6952f;
L_12d69522:;
  /* 12d69522 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d69528 mov byte ptr [edx + 0x12d7fc00], 0 */
  w8((uint32_t)(EDX + 0x12d7fc00), (0x0u));
L_12d6952f:;
  /* 12d6952f jmp 0x12d6946a */
  goto L_12d6946a;
L_12d69534:;
  /* 12d69534 jmp 0x12d695fe */
  goto L_12d695fe;
L_12d69539:;
  /* 12d69539 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12d69543 jmp 0x12d69554 */
  goto L_12d69554;
L_12d69545:;
  /* 12d69545 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d6954b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6954e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12d69554:;
  /* 12d69554 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6955e jae 0x12d695fe */
  if (!C.cf) goto L_12d695fe;
  /* 12d69564 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6956b jb 0x12d695a8 */
  if (C.cf) goto L_12d695a8;
  /* 12d6956d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69574 ja 0x12d695a8 */
  if ((!C.cf&&!C.zf)) goto L_12d695a8;
  /* 12d69576 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d6957c mov dl, byte ptr [ecx + 0x12d7fd01] */
  DL = (r8((uint32_t)(ECX + 0x12d7fd01)));
  /* 12d69582 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12d69585 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d6958b mov byte ptr [eax + 0x12d7fd01], dl */
  w8((uint32_t)(EAX + 0x12d7fd01), (DL));
  /* 12d69591 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d69597 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6959a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d695a0 mov byte ptr [edx + 0x12d7fc00], cl */
  w8((uint32_t)(EDX + 0x12d7fc00), (CL));
  /* 12d695a6 jmp 0x12d695f9 */
  goto L_12d695f9;
L_12d695a8:;
  /* 12d695a8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d695af jb 0x12d695ec */
  if (C.cf) goto L_12d695ec;
  /* 12d695b1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d695b8 ja 0x12d695ec */
  if ((!C.cf&&!C.zf)) goto L_12d695ec;
  /* 12d695ba mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d695c0 mov cl, byte ptr [eax + 0x12d7fd01] */
  CL = (r8((uint32_t)(EAX + 0x12d7fd01)));
  /* 12d695c6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12d695c9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d695cf mov byte ptr [edx + 0x12d7fd01], cl */
  w8((uint32_t)(EDX + 0x12d7fd01), (CL));
  /* 12d695d5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d695db sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d695de mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d695e4 mov byte ptr [ecx + 0x12d7fc00], al */
  w8((uint32_t)(ECX + 0x12d7fc00), (AL));
  /* 12d695ea jmp 0x12d695f9 */
  goto L_12d695f9;
L_12d695ec:;
  /* 12d695ec mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d695f2 mov byte ptr [edx + 0x12d7fc00], 0 */
  w8((uint32_t)(EDX + 0x12d7fc00), (0x0u));
L_12d695f9:;
  /* 12d695f9 jmp 0x12d69545 */
  goto L_12d69545;
L_12d695fe:;
  /* 12d695fe mov esp, ebp */
  ESP = (EBP);
  /* 12d69600 pop ebp */
  EBP = (pop32());
  /* 12d69601 ret  */
  ESPCHK(0x12d69300u, _esp0);
  ESP += 4; return;
}

/* FUN_10009610 @ 0x12d69610 (23 bytes, 9 insns) */
void f_12d69610(void) {
  FTRACE(0x12d69610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d69610 push ebp */
  push32((uint32_t)(EBP));
  /* 12d69611 mov ebp, esp */
  EBP = (ESP);
  /* 12d69613 cmp dword ptr [0x12d7fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6961a je 0x12d69623 */
  if (C.zf) goto L_12d69623;
  /* 12d6961c mov eax, dword ptr [0x12d7fb64] */
  EAX = (r32((uint32_t)(0x12d7fb64)));
  /* 12d69621 jmp 0x12d69625 */
  goto L_12d69625;
L_12d69623:;
  /* 12d69623 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d69625:;
  /* 12d69625 pop ebp */
  EBP = (pop32());
  /* 12d69626 ret  */
  ESPCHK(0x12d69610u, _esp0);
  ESP += 4; return;
}

/* FUN_10009630 @ 0x12d69630 (34 bytes, 10 insns) */
void f_12d69630(void) {
  FTRACE(0x12d69630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d69630 push ebp */
  push32((uint32_t)(EBP));
  /* 12d69631 mov ebp, esp */
  EBP = (ESP);
  /* 12d69633 cmp dword ptr [0x12d7ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6963a jne 0x12d69650 */
  if (!C.zf) goto L_12d69650;
  /* 12d6963c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12d6963e call 0x12d68e50 */
  push32(0x12d69643u); f_12d68e50();
  /* 12d69643 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69646 mov dword ptr [0x12d7ffb0], 1 */
  w32((uint32_t)(0x12d7ffb0), (0x1u));
L_12d69650:;
  /* 12d69650 pop ebp */
  EBP = (pop32());
  /* 12d69651 ret  */
  ESPCHK(0x12d69630u, _esp0);
  ESP += 4; return;
}

/* FUN_10009660 @ 0x12d69660 (664 bytes, 267 insns) [15 switch table(s)] */
void f_12d69660(void) {
  FTRACE(0x12d69660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d69660 push ebp */
  push32((uint32_t)(EBP));
  /* 12d69661 mov ebp, esp */
  EBP = (ESP);
  /* 12d69663 push edi */
  push32((uint32_t)(EDI));
  /* 12d69664 push esi */
  push32((uint32_t)(ESI));
  /* 12d69665 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d69668 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6966b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6966e mov eax, ecx */
  EAX = (ECX);
  /* 12d69670 mov edx, ecx */
  EDX = (ECX);
  /* 12d69672 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69674 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69676 jbe 0x12d69680 */
  if ((C.cf||C.zf)) goto L_12d69680;
  /* 12d69678 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6967a jb 0x12d697f8 */
  if (C.cf) goto L_12d697f8;
L_12d69680:;
  /* 12d69680 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12d69686 jne 0x12d6969c */
  if (!C.zf) goto L_12d6969c;
  /* 12d69688 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d6968b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6968e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69691 jb 0x12d696bc */
  if (C.cf) goto L_12d696bc;
  /* 12d69693 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d69695 jmp dword ptr [edx*4 + 0x12d697a8] */
  switch (EDX) {
    case 0: goto L_12d697b8;
    case 1: goto L_12d697c0;
    case 2: goto L_12d697cc;
    case 3: goto L_12d697e0;
    default: x86_unimpl("switch@0x12d69695 out of table"); return;
  }
L_12d6969c:;
  /* 12d6969c mov eax, edi */
  EAX = (EDI);
  /* 12d6969e mov edx, 3 */
  EDX = (0x3u);
  /* 12d696a3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d696a6 jb 0x12d696b4 */
  if (C.cf) goto L_12d696b4;
  /* 12d696a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12d696ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d696ad jmp dword ptr [eax*4 + 0x12d696c0] */
  switch (EAX) {
    case 1: goto L_12d696d0;
    case 2: goto L_12d696fc;
    case 3: goto L_12d69720;
    default: x86_unimpl("switch@0x12d696ad out of table"); return;
  }
L_12d696b4:;
  /* 12d696b4 jmp dword ptr [ecx*4 + 0x12d697b8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12d697b8)))); return;
  /* 12d696bb nop  */
  /* nop */
L_12d696bc:;
  /* 12d696bc jmp dword ptr [ecx*4 + 0x12d6973c] */
  switch (ECX) {
    case 0: goto L_12d6979f;
    case 1: goto L_12d6978c;
    case 2: goto L_12d69784;
    case 3: goto L_12d6977c;
    case 4: goto L_12d69774;
    case 5: goto L_12d6976c;
    case 6: goto L_12d69764;
    case 7: goto L_12d6975c;
    default: x86_unimpl("switch@0x12d696bc out of table"); return;
  }
  /* 12d696c3 nop  */
  /* nop */
L_12d696d0:;
  /* 12d696d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d696d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d696d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d696d6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d696d9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d696dc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d696df shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d696e2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d696e5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d696e8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d696eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d696ee jb 0x12d696bc */
  if (C.cf) goto L_12d696bc;
  /* 12d696f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d696f2 jmp dword ptr [edx*4 + 0x12d697a8] */
  switch (EDX) {
    case 0: goto L_12d697b8;
    case 1: goto L_12d697c0;
    case 2: goto L_12d697cc;
    case 3: goto L_12d697e0;
    default: x86_unimpl("switch@0x12d696f2 out of table"); return;
  }
  /* 12d696f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d696fc:;
  /* 12d696fc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d696fe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d69700 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d69702 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d69705 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d69708 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d6970b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6970e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69711 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69714 jb 0x12d696bc */
  if (C.cf) goto L_12d696bc;
  /* 12d69716 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d69718 jmp dword ptr [edx*4 + 0x12d697a8] */
  switch (EDX) {
    case 0: goto L_12d697b8;
    case 1: goto L_12d697c0;
    case 2: goto L_12d697cc;
    case 3: goto L_12d697e0;
    default: x86_unimpl("switch@0x12d69718 out of table"); return;
  }
  /* 12d6971f nop  */
  /* nop */
L_12d69720:;
  /* 12d69720 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d69722 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d69724 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d69726 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d69727 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d6972a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d6972b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6972e jb 0x12d696bc */
  if (C.cf) goto L_12d696bc;
  /* 12d69730 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d69732 jmp dword ptr [edx*4 + 0x12d697a8] */
  switch (EDX) {
    case 0: goto L_12d697b8;
    case 1: goto L_12d697c0;
    case 2: goto L_12d697cc;
    case 3: goto L_12d697e0;
    default: x86_unimpl("switch@0x12d69732 out of table"); return;
  }
  /* 12d69739 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d6975c:;
  /* 12d6975c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12d69760 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12d69764:;
  /* 12d69764 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12d69768 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12d6976c:;
  /* 12d6976c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12d69770 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12d69774:;
  /* 12d69774 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12d69778 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12d6977c:;
  /* 12d6977c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12d69780 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12d69784:;
  /* 12d69784 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12d69788 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12d6978c:;
  /* 12d6978c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12d69790 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12d69794 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12d6979b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6979d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12d6979f:;
  /* 12d6979f jmp dword ptr [edx*4 + 0x12d697a8] */
  switch (EDX) {
    case 0: goto L_12d697b8;
    case 1: goto L_12d697c0;
    case 2: goto L_12d697cc;
    case 3: goto L_12d697e0;
    default: x86_unimpl("switch@0x12d6979f out of table"); return;
  }
  /* 12d697a6 mov edi, edi */
  EDI = (EDI);
L_12d697b8:;
  /* 12d697b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d697bb pop esi */
  ESI = (pop32());
  /* 12d697bc pop edi */
  EDI = (pop32());
  /* 12d697bd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d697be ret  */
  ESPCHK(0x12d69660u, _esp0);
  ESP += 4; return;
  /* 12d697bf nop  */
  /* nop */
L_12d697c0:;
  /* 12d697c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d697c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d697c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d697c7 pop esi */
  ESI = (pop32());
  /* 12d697c8 pop edi */
  EDI = (pop32());
  /* 12d697c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d697ca ret  */
  ESPCHK(0x12d69660u, _esp0);
  ESP += 4; return;
  /* 12d697cb nop  */
  /* nop */
L_12d697cc:;
  /* 12d697cc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d697ce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d697d0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d697d3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d697d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d697d9 pop esi */
  ESI = (pop32());
  /* 12d697da pop edi */
  EDI = (pop32());
  /* 12d697db leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d697dc ret  */
  ESPCHK(0x12d69660u, _esp0);
  ESP += 4; return;
  /* 12d697dd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d697e0:;
  /* 12d697e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d697e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d697e4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d697e7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d697ea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d697ed mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d697f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d697f3 pop esi */
  ESI = (pop32());
  /* 12d697f4 pop edi */
  EDI = (pop32());
  /* 12d697f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d697f6 ret  */
  ESPCHK(0x12d69660u, _esp0);
  ESP += 4; return;
  /* 12d697f7 nop  */
  /* nop */
L_12d697f8:;
  /* 12d697f8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12d697fc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12d69800 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12d69806 jne 0x12d6982c */
  if (!C.zf) goto L_12d6982c;
  /* 12d69808 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d6980b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6980e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69811 jb 0x12d69820 */
  if (C.cf) goto L_12d69820;
  /* 12d69813 std  */
  C.df=1;
  /* 12d69814 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d69816 cld  */
  C.df=0;
  /* 12d69817 jmp dword ptr [edx*4 + 0x12d69940] */
  switch (EDX) {
    case 0: goto L_12d69950;
    case 1: goto L_12d69958;
    case 2: goto L_12d69968;
    case 3: goto L_12d6997c;
    default: x86_unimpl("switch@0x12d69817 out of table"); return;
  }
  /* 12d6981e mov edi, edi */
  EDI = (EDI);
L_12d69820:;
  /* 12d69820 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d69822 jmp dword ptr [ecx*4 + 0x12d698f0] */
  switch (ECX) {
    case 0: goto L_12d69937;
    default: x86_unimpl("switch@0x12d69822 out of table"); return;
  }
  /* 12d69829 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d6982c:;
  /* 12d6982c mov eax, edi */
  EAX = (EDI);
  /* 12d6982e mov edx, 3 */
  EDX = (0x3u);
  /* 12d69833 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69836 jb 0x12d69844 */
  if (C.cf) goto L_12d69844;
  /* 12d69838 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6983b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6983d jmp dword ptr [eax*4 + 0x12d69848] */
  switch (EAX) {
    case 1: goto L_12d69858;
    case 2: goto L_12d69878;
    case 3: goto L_12d698a0;
    default: x86_unimpl("switch@0x12d6983d out of table"); return;
  }
L_12d69844:;
  /* 12d69844 jmp dword ptr [ecx*4 + 0x12d69940] */
  switch (ECX) {
    case 0: goto L_12d69950;
    case 1: goto L_12d69958;
    case 2: goto L_12d69968;
    case 3: goto L_12d6997c;
    default: x86_unimpl("switch@0x12d69844 out of table"); return;
  }
  /* 12d6984b nop  */
  /* nop */
L_12d69858:;
  /* 12d69858 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d6985b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6985d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d69860 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12d69861 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d69864 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12d69865 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69868 jb 0x12d69820 */
  if (C.cf) goto L_12d69820;
  /* 12d6986a std  */
  C.df=1;
  /* 12d6986b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d6986d cld  */
  C.df=0;
  /* 12d6986e jmp dword ptr [edx*4 + 0x12d69940] */
  switch (EDX) {
    case 0: goto L_12d69950;
    case 1: goto L_12d69958;
    case 2: goto L_12d69968;
    case 3: goto L_12d6997c;
    default: x86_unimpl("switch@0x12d6986e out of table"); return;
  }
  /* 12d69875 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d69878:;
  /* 12d69878 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d6987b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6987d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d69880 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d69883 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d69886 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d69889 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6988c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6988f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69892 jb 0x12d69820 */
  if (C.cf) goto L_12d69820;
  /* 12d69894 std  */
  C.df=1;
  /* 12d69895 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d69897 cld  */
  C.df=0;
  /* 12d69898 jmp dword ptr [edx*4 + 0x12d69940] */
  switch (EDX) {
    case 0: goto L_12d69950;
    case 1: goto L_12d69958;
    case 2: goto L_12d69968;
    case 3: goto L_12d6997c;
    default: x86_unimpl("switch@0x12d69898 out of table"); return;
  }
  /* 12d6989f nop  */
  /* nop */
L_12d698a0:;
  /* 12d698a0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d698a3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d698a5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d698a8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d698ab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d698ae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d698b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d698b4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d698b7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d698ba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d698bd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d698c0 jb 0x12d69820 */
  if (C.cf) goto L_12d69820;
  /* 12d698c6 std  */
  C.df=1;
  /* 12d698c7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d698c9 cld  */
  C.df=0;
  /* 12d698ca jmp dword ptr [edx*4 + 0x12d69940] */
  switch (EDX) {
    case 0: goto L_12d69950;
    case 1: goto L_12d69958;
    case 2: goto L_12d69968;
    case 3: goto L_12d6997c;
    default: x86_unimpl("switch@0x12d698ca out of table"); return;
  }
  /* 12d698d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12d698d4 hlt  */
  x86_unimpl("hlt @ 0x12d698d4");
  /* 12d698d5 cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 12d698d6 salc  */
  x86_unimpl("salc @ 0x12d698d6");
  /* 12d698d7 adc bh, ah */
  { uint32_t _a=(C.b.b.h),_b=(AH),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12d698d9 cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 12d698da salc  */
  x86_unimpl("salc @ 0x12d698da");
  /* 12d698db adc al, byte ptr [ecx + ebx*4] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + EBX*4))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d698de salc  */
  x86_unimpl("salc @ 0x12d698de");
  /* 12d698df adc cl, byte ptr [ecx + ebx*4] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(ECX + EBX*4))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d698e2 salc  */
  x86_unimpl("salc @ 0x12d698e2");
  /* 12d698e3 adc dl, byte ptr [ecx + ebx*4] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX + EBX*4))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d698e6 salc  */
  x86_unimpl("salc @ 0x12d698e6");
  /* 12d698e7 adc bl, byte ptr [ecx + ebx*4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(ECX + EBX*4))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d698ea salc  */
  x86_unimpl("salc @ 0x12d698ea");
  /* 12d698eb adc ah, byte ptr [ecx + ebx*4] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + EBX*4))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 12d698ee salc  */
  x86_unimpl("salc @ 0x12d698ee");
  /* 12d698f4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12d698f8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12d698fc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12d69900 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12d69904 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12d69908 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12d6990c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12d69910 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12d69914 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12d69918 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12d6991c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12d69920 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12d69924 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12d69928 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12d6992c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12d69933 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69935 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12d69937:;
  /* 12d69937 jmp dword ptr [edx*4 + 0x12d69940] */
  switch (EDX) {
    case 0: goto L_12d69950;
    case 1: goto L_12d69958;
    case 2: goto L_12d69968;
    case 3: goto L_12d6997c;
    default: x86_unimpl("switch@0x12d69937 out of table"); return;
  }
  /* 12d6993e mov edi, edi */
  EDI = (EDI);
L_12d69950:;
  /* 12d69950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d69953 pop esi */
  ESI = (pop32());
  /* 12d69954 pop edi */
  EDI = (pop32());
  /* 12d69955 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d69956 ret  */
  ESPCHK(0x12d69660u, _esp0);
  ESP += 4; return;
  /* 12d69957 nop  */
  /* nop */
L_12d69958:;
  /* 12d69958 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d6995b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d6995e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d69961 pop esi */
  ESI = (pop32());
  /* 12d69962 pop edi */
  EDI = (pop32());
  /* 12d69963 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d69964 ret  */
  ESPCHK(0x12d69660u, _esp0);
  ESP += 4; return;
  /* 12d69965 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d69968:;
  /* 12d69968 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d6996b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d6996e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d69971 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d69974 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d69977 pop esi */
  ESI = (pop32());
  /* 12d69978 pop edi */
  EDI = (pop32());
  /* 12d69979 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d6997a ret  */
  ESPCHK(0x12d69660u, _esp0);
  ESP += 4; return;
  /* 12d6997b nop  */
  /* nop */
L_12d6997c:;
  /* 12d6997c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d6997f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d69982 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d69985 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d69988 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d6998b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d6998e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d69991 pop esi */
  ESI = (pop32());
  /* 12d69992 pop edi */
  EDI = (pop32());
  /* 12d69993 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d69994 ret  */
  ESPCHK(0x12d69660u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12d699a0 (104 bytes, 43 insns) */
void f_12d699a0(void) {
  FTRACE(0x12d699a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d699a0 push ebx */
  push32((uint32_t)(EBX));
  /* 12d699a1 push esi */
  push32((uint32_t)(ESI));
  /* 12d699a2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12d699a6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d699a8 jne 0x12d699c2 */
  if (!C.zf) goto L_12d699c2;
  /* 12d699aa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12d699ae mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d699b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d699b4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d699b6 mov ebx, eax */
  EBX = (EAX);
  /* 12d699b8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d699bc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d699be mov edx, ebx */
  EDX = (EBX);
  /* 12d699c0 jmp 0x12d69a03 */
  goto L_12d69a03;
L_12d699c2:;
  /* 12d699c2 mov ecx, eax */
  ECX = (EAX);
  /* 12d699c4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12d699c8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d699cc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12d699d0:;
  /* 12d699d0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12d699d2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12d699d4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12d699d6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12d699d8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d699da jne 0x12d699d0 */
  if (!C.zf) goto L_12d699d0;
  /* 12d699dc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d699de mov esi, eax */
  ESI = (EAX);
  /* 12d699e0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d699e4 mov ecx, eax */
  ECX = (EAX);
  /* 12d699e6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12d699ea mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d699ec add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d699ee jb 0x12d699fe */
  if (C.cf) goto L_12d699fe;
  /* 12d699f0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d699f4 ja 0x12d699fe */
  if ((!C.cf&&!C.zf)) goto L_12d699fe;
  /* 12d699f6 jb 0x12d699ff */
  if (C.cf) goto L_12d699ff;
  /* 12d699f8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d699fc jbe 0x12d699ff */
  if ((C.cf||C.zf)) goto L_12d699ff;
L_12d699fe:;
  /* 12d699fe dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_12d699ff:;
  /* 12d699ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d69a01 mov eax, esi */
  EAX = (ESI);
L_12d69a03:;
  /* 12d69a03 pop esi */
  ESI = (pop32());
  /* 12d69a04 pop ebx */
  EBX = (pop32());
  /* 12d69a05 ret 0x10 */
  ESPCHK(0x12d699a0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12d69a10 (117 bytes, 44 insns) */
void f_12d69a10(void) {
  FTRACE(0x12d69a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d69a10 push ebx */
  push32((uint32_t)(EBX));
  /* 12d69a11 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12d69a15 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d69a17 jne 0x12d69a31 */
  if (!C.zf) goto L_12d69a31;
  /* 12d69a19 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d69a1d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d69a21 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d69a23 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d69a25 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d69a29 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d69a2b mov eax, edx */
  EAX = (EDX);
  /* 12d69a2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d69a2f jmp 0x12d69a81 */
  goto L_12d69a81;
L_12d69a31:;
  /* 12d69a31 mov ecx, eax */
  ECX = (EAX);
  /* 12d69a33 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d69a37 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d69a3b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_12d69a3f:;
  /* 12d69a3f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12d69a41 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12d69a43 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12d69a45 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12d69a47 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d69a49 jne 0x12d69a3f */
  if (!C.zf) goto L_12d69a3f;
  /* 12d69a4b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d69a4d mov ecx, eax */
  ECX = (EAX);
  /* 12d69a4f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d69a53 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12d69a54 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d69a58 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69a5a jb 0x12d69a6a */
  if (C.cf) goto L_12d69a6a;
  /* 12d69a5c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69a60 ja 0x12d69a6a */
  if ((!C.cf&&!C.zf)) goto L_12d69a6a;
  /* 12d69a62 jb 0x12d69a72 */
  if (C.cf) goto L_12d69a72;
  /* 12d69a64 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69a68 jbe 0x12d69a72 */
  if ((C.cf||C.zf)) goto L_12d69a72;
L_12d69a6a:;
  /* 12d69a6a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d69a6e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12d69a72:;
  /* 12d69a72 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d69a76 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d69a7a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d69a7c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d69a7e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12d69a81:;
  /* 12d69a81 pop ebx */
  EBX = (pop32());
  /* 12d69a82 ret 0x10 */
  ESPCHK(0x12d69a10u, _esp0);
  ESP += 20; return;
}

/* FUN_10009a90 @ 0x12d69a90 (628 bytes, 214 insns) */
void f_12d69a90(void) {
  FTRACE(0x12d69a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d69a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d69a91 mov ebp, esp */
  EBP = (ESP);
  /* 12d69a93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d69a96 push ebx */
  push32((uint32_t)(EBX));
  /* 12d69a97 push esi */
  push32((uint32_t)(ESI));
  /* 12d69a98 push edi */
  push32((uint32_t)(EDI));
L_12d69a99:;
  /* 12d69a99 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69a9d jne 0x12d69abd */
  if (!C.zf) goto L_12d69abd;
  /* 12d69a9f push 0x12d79e98 */
  push32((uint32_t)(0x12d79e98u));
  /* 12d69aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d69aa6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 12d69aa8 push 0x12d79e8c */
  push32((uint32_t)(0x12d79e8cu));
  /* 12d69aad push 2 */
  push32((uint32_t)(0x2u));
  /* 12d69aaf call 0x12d61e40 */
  push32(0x12d69ab4u); f_12d61e40();
  /* 12d69ab4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69ab7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69aba jne 0x12d69abd */
  if (!C.zf) goto L_12d69abd;
  /* 12d69abc int3  */
  x86_unimpl("int3 @ 0x12d69abc");
L_12d69abd:;
  /* 12d69abd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d69abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d69ac1 jne 0x12d69a99 */
  if (!C.zf) goto L_12d69a99;
  /* 12d69ac3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d69ac6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d69ac9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69acc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d69acf mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d69ad2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69ad5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d69ad8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 12d69ade test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d69ae0 je 0x12d69aef */
  if (C.zf) goto L_12d69aef;
  /* 12d69ae2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69ae5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d69ae8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12d69aeb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d69aed je 0x12d69b05 */
  if (C.zf) goto L_12d69b05;
L_12d69aef:;
  /* 12d69aef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69af2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d69af5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12d69af7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69afa mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12d69afd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d69b00 jmp 0x12d69cfd */
  goto L_12d69cfd;
L_12d69b05:;
  /* 12d69b05 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69b08 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d69b0b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12d69b0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d69b10 je 0x12d69b5c */
  if (C.zf) goto L_12d69b5c;
  /* 12d69b12 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69b15 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12d69b1c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69b1f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d69b22 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12d69b25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d69b27 je 0x12d69b45 */
  if (C.zf) goto L_12d69b45;
  /* 12d69b29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69b2c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69b2f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d69b32 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d69b34 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69b37 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d69b3a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 12d69b3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69b40 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d69b43 jmp 0x12d69b5c */
  goto L_12d69b5c;
L_12d69b45:;
  /* 12d69b45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69b48 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d69b4b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12d69b4e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69b51 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d69b54 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d69b57 jmp 0x12d69cfd */
  goto L_12d69cfd;
L_12d69b5c:;
  /* 12d69b5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69b5f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d69b62 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12d69b65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69b68 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d69b6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69b6e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d69b71 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12d69b74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69b77 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d69b7a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69b7d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12d69b84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d69b8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d69b8e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d69b91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69b94 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d69b97 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 12d69b9d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d69b9f jne 0x12d69bcf */
  if (!C.zf) goto L_12d69bcf;
  /* 12d69ba1 cmp dword ptr [ebp - 8], 0x12d7d160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12d7d160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69ba8 je 0x12d69bb3 */
  if (C.zf) goto L_12d69bb3;
  /* 12d69baa cmp dword ptr [ebp - 8], 0x12d7d180 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12d7d180u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69bb1 jne 0x12d69bc3 */
  if (!C.zf) goto L_12d69bc3;
L_12d69bb3:;
  /* 12d69bb3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d69bb6 push edx */
  push32((uint32_t)(EDX));
  /* 12d69bb7 call 0x12d6ba00 */
  push32(0x12d69bbcu); f_12d6ba00();
  /* 12d69bbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69bbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d69bc1 jne 0x12d69bcf */
  if (!C.zf) goto L_12d69bcf;
L_12d69bc3:;
  /* 12d69bc3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69bc6 push eax */
  push32((uint32_t)(EAX));
  /* 12d69bc7 call 0x12d6b930 */
  push32(0x12d69bccu); f_12d6b930();
  /* 12d69bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d69bcf:;
  /* 12d69bcf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69bd2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d69bd5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 12d69bdb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d69bdd je 0x12d69cbb */
  if (C.zf) goto L_12d69cbb;
L_12d69be3:;
  /* 12d69be3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69be6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69be9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 12d69beb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d69bee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d69bf0 jge 0x12d69c13 */
  if ((C.sf==C.of)) goto L_12d69c13;
  /* 12d69bf2 push 0x12d79e4c */
  push32((uint32_t)(0x12d79e4cu));
  /* 12d69bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d69bf9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 12d69bfe push 0x12d79e8c */
  push32((uint32_t)(0x12d79e8cu));
  /* 12d69c03 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d69c05 call 0x12d61e40 */
  push32(0x12d69c0au); f_12d61e40();
  /* 12d69c0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69c0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69c10 jne 0x12d69c13 */
  if (!C.zf) goto L_12d69c13;
  /* 12d69c12 int3  */
  x86_unimpl("int3 @ 0x12d69c12");
L_12d69c13:;
  /* 12d69c13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d69c15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d69c17 jne 0x12d69be3 */
  if (!C.zf) goto L_12d69be3;
  /* 12d69c19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69c1c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69c1f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12d69c21 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d69c24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d69c27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69c2a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d69c2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69c30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69c33 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d69c35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69c38 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d69c3b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d69c3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69c41 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d69c44 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69c48 jle 0x12d69c66 */
  if ((C.zf||C.sf!=C.of)) goto L_12d69c66;
  /* 12d69c4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d69c4d push ecx */
  push32((uint32_t)(ECX));
  /* 12d69c4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69c51 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d69c54 push eax */
  push32((uint32_t)(EAX));
  /* 12d69c55 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d69c58 push ecx */
  push32((uint32_t)(ECX));
  /* 12d69c59 call 0x12d6b620 */
  push32(0x12d69c5eu); f_12d6b620();
  /* 12d69c5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69c61 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d69c64 jmp 0x12d69cae */
  goto L_12d69cae;
L_12d69c66:;
  /* 12d69c66 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69c6a je 0x12d69c89 */
  if (C.zf) goto L_12d69c89;
  /* 12d69c6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d69c6f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12d69c72 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d69c75 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12d69c78 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d69c7b mov ecx, dword ptr [edx*4 + 0x12d7fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12d7fe60)));
  /* 12d69c82 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69c84 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d69c87 jmp 0x12d69c90 */
  goto L_12d69c90;
L_12d69c89:;
  /* 12d69c89 mov dword ptr [ebp - 0x14], 0x12d7ca78 */
  w32((uint32_t)(EBP + -0x14), (0x12d7ca78u));
L_12d69c90:;
  /* 12d69c90 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d69c93 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 12d69c97 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12d69c9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d69c9c je 0x12d69cae */
  if (C.zf) goto L_12d69cae;
  /* 12d69c9e push 2 */
  push32((uint32_t)(0x2u));
  /* 12d69ca0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d69ca2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d69ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d69ca6 call 0x12d6b4d0 */
  push32(0x12d69cabu); f_12d6b4d0();
  /* 12d69cab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d69cae:;
  /* 12d69cae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69cb1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d69cb4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d69cb7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12d69cb9 jmp 0x12d69cd9 */
  goto L_12d69cd9;
L_12d69cbb:;
  /* 12d69cbb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d69cc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d69cc5 push edx */
  push32((uint32_t)(EDX));
  /* 12d69cc6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12d69cc9 push eax */
  push32((uint32_t)(EAX));
  /* 12d69cca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d69ccd push ecx */
  push32((uint32_t)(ECX));
  /* 12d69cce call 0x12d6b620 */
  push32(0x12d69cd3u); f_12d6b620();
  /* 12d69cd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69cd6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d69cd9:;
  /* 12d69cd9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d69cdc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69cdf je 0x12d69cf5 */
  if (C.zf) goto L_12d69cf5;
  /* 12d69ce1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69ce4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d69ce7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12d69cea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69ced mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12d69cf0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d69cf3 jmp 0x12d69cfd */
  goto L_12d69cfd;
L_12d69cf5:;
  /* 12d69cf5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d69cf8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_12d69cfd:;
  /* 12d69cfd pop edi */
  EDI = (pop32());
  /* 12d69cfe pop esi */
  ESI = (pop32());
  /* 12d69cff pop ebx */
  EBX = (pop32());
  /* 12d69d00 mov esp, ebp */
  ESP = (EBP);
  /* 12d69d02 pop ebp */
  EBP = (pop32());
  /* 12d69d03 ret  */
  ESPCHK(0x12d69a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d10 @ 0x12d69d10 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12d69d10(void) {
  FTRACE(0x12d69d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d69d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12d69d11 mov ebp, esp */
  EBP = (ESP);
  /* 12d69d13 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d69d19 push ebx */
  push32((uint32_t)(EBX));
  /* 12d69d1a push esi */
  push32((uint32_t)(ESI));
  /* 12d69d1b push edi */
  push32((uint32_t)(EDI));
  /* 12d69d1c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d69d23 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 12d69d2d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12d69d34:;
  /* 12d69d34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d69d37 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d69d39 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 12d69d3c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d69d40 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d69d43 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69d46 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12d69d49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d69d4b je 0x12d6a927 */
  if (C.zf) goto L_12d6a927;
  /* 12d69d51 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69d58 jl 0x12d6a927 */
  if ((C.sf!=C.of)) goto L_12d6a927;
  /* 12d69d5e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d69d62 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69d65 jl 0x12d69d86 */
  if ((C.sf!=C.of)) goto L_12d69d86;
  /* 12d69d67 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d69d6b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69d6e jg 0x12d69d86 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d69d86;
  /* 12d69d70 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d69d74 movsx ecx, byte ptr [eax + 0x12d79e84] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12d79e84))));
  /* 12d69d7b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 12d69d7e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12d69d84 jmp 0x12d69d90 */
  goto L_12d69d90;
L_12d69d86:;
  /* 12d69d86 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_12d69d90:;
  /* 12d69d90 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 12d69d96 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d69d99 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d69d9c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d69d9f movsx edx, byte ptr [ecx + eax*8 + 0x12d79ea4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12d79ea4))));
  /* 12d69da7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12d69daa mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d69dad mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d69db0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 12d69db6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69dbd ja 0x12d6a922 */
  if ((!C.cf&&!C.zf)) goto L_12d6a922;
  /* 12d69dc3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 12d69dc9 jmp dword ptr [ecx*4 + 0x12d6a934] */
  switch (ECX) {
    case 0: goto L_12d69dd0;
    case 1: goto L_12d69e6a;
    case 2: goto L_12d69eac;
    case 3: goto L_12d69f1b;
    case 4: goto L_12d69f73;
    case 5: goto L_12d69f82;
    case 6: goto L_12d69fce;
    case 7: goto L_12d6a061;
    case 8: goto L_12d69ef8;
    case 9: goto L_12d69f03;
    case 10: goto L_12d69eee;
    case 11: goto L_12d69ee3;
    case 12: goto L_12d69f0e;
    case 13: goto L_12d69f16;
    default: x86_unimpl("switch@0x12d69dc9 out of table"); return;
  }
L_12d69dd0:;
  /* 12d69dd0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12d69dd7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d69dda and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d69de0 mov eax, dword ptr [0x12d7ccb8] */
  EAX = (r32((uint32_t)(0x12d7ccb8)));
  /* 12d69de5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d69de7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12d69deb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12d69df1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d69df3 je 0x12d69e4d */
  if (C.zf) goto L_12d69e4d;
  /* 12d69df5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 12d69dfb push edx */
  push32((uint32_t)(EDX));
  /* 12d69dfc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d69dff push eax */
  push32((uint32_t)(EAX));
  /* 12d69e00 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d69e04 push ecx */
  push32((uint32_t)(ECX));
  /* 12d69e05 call 0x12d6aa40 */
  push32(0x12d69e0au); f_12d6aa40();
  /* 12d69e0a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69e0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d69e10 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d69e12 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12d69e15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d69e18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69e1b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12d69e1e:;
  /* 12d69e1e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d69e22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d69e24 jne 0x12d69e47 */
  if (!C.zf) goto L_12d69e47;
  /* 12d69e26 push 0x12d79f24 */
  push32((uint32_t)(0x12d79f24u));
  /* 12d69e2b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d69e2d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12d69e32 push 0x12d79f18 */
  push32((uint32_t)(0x12d79f18u));
  /* 12d69e37 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d69e39 call 0x12d61e40 */
  push32(0x12d69e3eu); f_12d61e40();
  /* 12d69e3e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69e41 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69e44 jne 0x12d69e47 */
  if (!C.zf) goto L_12d69e47;
  /* 12d69e46 int3  */
  x86_unimpl("int3 @ 0x12d69e46");
L_12d69e47:;
  /* 12d69e47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d69e49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d69e4b jne 0x12d69e1e */
  if (!C.zf) goto L_12d69e1e;
L_12d69e4d:;
  /* 12d69e4d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12d69e53 push ecx */
  push32((uint32_t)(ECX));
  /* 12d69e54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d69e57 push edx */
  push32((uint32_t)(EDX));
  /* 12d69e58 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d69e5c push eax */
  push32((uint32_t)(EAX));
  /* 12d69e5d call 0x12d6aa40 */
  push32(0x12d69e62u); f_12d6aa40();
  /* 12d69e62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69e65 jmp 0x12d6a922 */
  goto L_12d6a922;
L_12d69e6a:;
  /* 12d69e6a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d69e71 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d69e74 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 12d69e7a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12d69e80 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12d69e86 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 12d69e8c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d69e8f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d69e96 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 12d69ea0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12d69ea7 jmp 0x12d6a922 */
  goto L_12d6a922;
L_12d69eac:;
  /* 12d69eac movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d69eb0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 12d69eb6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 12d69ebc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d69ebf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 12d69ec5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69ecc ja 0x12d69f16 */
  if ((!C.cf&&!C.zf)) goto L_12d69f16;
  /* 12d69ece mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12d69ed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d69ed6 mov al, byte ptr [ecx + 0x12d6a96c] */
  AL = (r8((uint32_t)(ECX + 0x12d6a96c)));
  /* 12d69edc jmp dword ptr [eax*4 + 0x12d6a954] */
  switch (EAX) {
    case 0: goto L_12d69ef8;
    case 1: goto L_12d69f03;
    case 2: goto L_12d69eee;
    case 3: goto L_12d69ee3;
    case 4: goto L_12d69f0e;
    case 5: goto L_12d69f16;
    default: x86_unimpl("switch@0x12d69edc out of table"); return;
  }
L_12d69ee3:;
  /* 12d69ee3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d69ee6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d69ee9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d69eec jmp 0x12d69f16 */
  goto L_12d69f16;
L_12d69eee:;
  /* 12d69eee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d69ef1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12d69ef3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d69ef6 jmp 0x12d69f16 */
  goto L_12d69f16;
L_12d69ef8:;
  /* 12d69ef8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d69efb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12d69efe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d69f01 jmp 0x12d69f16 */
  goto L_12d69f16;
L_12d69f03:;
  /* 12d69f03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d69f06 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12d69f09 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d69f0c jmp 0x12d69f16 */
  goto L_12d69f16;
L_12d69f0e:;
  /* 12d69f0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d69f11 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12d69f13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d69f16:;
  /* 12d69f16 jmp 0x12d6a922 */
  goto L_12d6a922;
L_12d69f1b:;
  /* 12d69f1b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d69f1f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69f22 jne 0x12d69f57 */
  if (!C.zf) goto L_12d69f57;
  /* 12d69f24 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12d69f27 push edx */
  push32((uint32_t)(EDX));
  /* 12d69f28 call 0x12d6ab50 */
  push32(0x12d69f2du); f_12d6ab50();
  /* 12d69f2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69f30 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12d69f36 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69f3d jge 0x12d69f55 */
  if ((C.sf==C.of)) goto L_12d69f55;
  /* 12d69f3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d69f42 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12d69f44 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d69f47 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12d69f4d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d69f4f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12d69f55:;
  /* 12d69f55 jmp 0x12d69f6e */
  goto L_12d69f6e;
L_12d69f57:;
  /* 12d69f57 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 12d69f5d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d69f60 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d69f64 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12d69f68 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12d69f6e:;
  /* 12d69f6e jmp 0x12d6a922 */
  goto L_12d6a922;
L_12d69f73:;
  /* 12d69f73 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 12d69f7d jmp 0x12d6a922 */
  goto L_12d6a922;
L_12d69f82:;
  /* 12d69f82 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d69f86 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69f89 jne 0x12d69fb2 */
  if (!C.zf) goto L_12d69fb2;
  /* 12d69f8b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12d69f8e push eax */
  push32((uint32_t)(EAX));
  /* 12d69f8f call 0x12d6ab50 */
  push32(0x12d69f94u); f_12d6ab50();
  /* 12d69f94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d69f97 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12d69f9d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69fa4 jge 0x12d69fb0 */
  if ((C.sf==C.of)) goto L_12d69fb0;
  /* 12d69fa6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12d69fb0:;
  /* 12d69fb0 jmp 0x12d69fc9 */
  goto L_12d69fc9;
L_12d69fb2:;
  /* 12d69fb2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12d69fb8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d69fbb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d69fbf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12d69fc3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12d69fc9:;
  /* 12d69fc9 jmp 0x12d6a922 */
  goto L_12d6a922;
L_12d69fce:;
  /* 12d69fce movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d69fd2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12d69fd8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12d69fde sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d69fe1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12d69fe7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d69fee ja 0x12d6a05c */
  if ((!C.cf&&!C.zf)) goto L_12d6a05c;
  /* 12d69ff0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12d69ff6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d69ff8 mov al, byte ptr [ecx + 0x12d6a991] */
  AL = (r8((uint32_t)(ECX + 0x12d6a991)));
  /* 12d69ffe jmp dword ptr [eax*4 + 0x12d6a97d] */
  switch (EAX) {
    case 0: goto L_12d6a010;
    case 1: goto L_12d6a049;
    case 2: goto L_12d6a005;
    case 3: goto L_12d6a053;
    case 4: goto L_12d6a05c;
    default: x86_unimpl("switch@0x12d69ffe out of table"); return;
  }
L_12d6a005:;
  /* 12d6a005 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a008 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6a00b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d6a00e jmp 0x12d6a05c */
  goto L_12d6a05c;
L_12d6a010:;
  /* 12d6a010 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6a013 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6a016 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a019 jne 0x12d6a03b */
  if (!C.zf) goto L_12d6a03b;
  /* 12d6a01b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6a01e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12d6a022 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a025 jne 0x12d6a03b */
  if (!C.zf) goto L_12d6a03b;
  /* 12d6a027 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6a02a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a02d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12d6a030 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a033 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12d6a036 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d6a039 jmp 0x12d6a047 */
  goto L_12d6a047;
L_12d6a03b:;
  /* 12d6a03b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12d6a042 jmp 0x12d69dd0 */
  goto L_12d69dd0;
L_12d6a047:;
  /* 12d6a047 jmp 0x12d6a05c */
  goto L_12d6a05c;
L_12d6a049:;
  /* 12d6a049 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a04c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12d6a04e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6a051 jmp 0x12d6a05c */
  goto L_12d6a05c;
L_12d6a053:;
  /* 12d6a053 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a056 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12d6a059 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d6a05c:;
  /* 12d6a05c jmp 0x12d6a922 */
  goto L_12d6a922;
L_12d6a061:;
  /* 12d6a061 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d6a065 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12d6a06b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12d6a071 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6a074 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12d6a07a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a081 ja 0x12d6a747 */
  if ((!C.cf&&!C.zf)) goto L_12d6a747;
  /* 12d6a087 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12d6a08d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6a08f mov cl, byte ptr [edx + 0x12d6a9fc] */
  CL = (r8((uint32_t)(EDX + 0x12d6a9fc)));
  /* 12d6a095 jmp dword ptr [ecx*4 + 0x12d6a9c0] */
  switch (ECX) {
    case 0: goto L_12d6a09c;
    case 1: goto L_12d6a330;
    case 2: goto L_12d6a1c0;
    case 3: goto L_12d6a469;
    case 4: goto L_12d6a12b;
    case 5: goto L_12d6a0b1;
    case 6: goto L_12d6a43b;
    case 7: goto L_12d6a340;
    case 8: goto L_12d6a2e5;
    case 9: goto L_12d6a4b5;
    case 10: goto L_12d6a45f;
    case 11: goto L_12d6a1d6;
    case 12: goto L_12d6a453;
    case 13: goto L_12d6a475;
    case 14: goto L_12d6a747;
    default: x86_unimpl("switch@0x12d6a095 out of table"); return;
  }
L_12d6a09c:;
  /* 12d6a09c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a09f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6a0a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6a0a6 jne 0x12d6a0b1 */
  if (!C.zf) goto L_12d6a0b1;
  /* 12d6a0a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a0ab or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12d6a0ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d6a0b1:;
  /* 12d6a0b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a0b4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6a0ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6a0bc je 0x12d6a0f7 */
  if (C.zf) goto L_12d6a0f7;
  /* 12d6a0be lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12d6a0c1 push eax */
  push32((uint32_t)(EAX));
  /* 12d6a0c2 call 0x12d6ab90 */
  push32(0x12d6a0c7u); f_12d6ab90();
  /* 12d6a0c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a0ca mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12d6a0ce mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12d6a0d2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6a0d3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12d6a0d9 push edx */
  push32((uint32_t)(EDX));
  /* 12d6a0da call 0x12d6bc70 */
  push32(0x12d6a0dfu); f_12d6bc70();
  /* 12d6a0df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a0e2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d6a0e5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a0e9 jge 0x12d6a0f5 */
  if ((C.sf==C.of)) goto L_12d6a0f5;
  /* 12d6a0eb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12d6a0f5:;
  /* 12d6a0f5 jmp 0x12d6a11d */
  goto L_12d6a11d;
L_12d6a0f7:;
  /* 12d6a0f7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12d6a0fa push eax */
  push32((uint32_t)(EAX));
  /* 12d6a0fb call 0x12d6ab50 */
  push32(0x12d6a100u); f_12d6ab50();
  /* 12d6a100 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a103 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12d6a10a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12d6a110 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12d6a116 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12d6a11d:;
  /* 12d6a11d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12d6a123 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d6a126 jmp 0x12d6a747 */
  goto L_12d6a747;
L_12d6a12b:;
  /* 12d6a12b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12d6a12e push eax */
  push32((uint32_t)(EAX));
  /* 12d6a12f call 0x12d6ab50 */
  push32(0x12d6a134u); f_12d6ab50();
  /* 12d6a134 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a137 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12d6a13d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a144 je 0x12d6a152 */
  if (C.zf) goto L_12d6a152;
  /* 12d6a146 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12d6a14c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a150 jne 0x12d6a16c */
  if (!C.zf) goto L_12d6a16c;
L_12d6a152:;
  /* 12d6a152 mov edx, dword ptr [0x12d7cfd0] */
  EDX = (r32((uint32_t)(0x12d7cfd0)));
  /* 12d6a158 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d6a15b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6a15e push eax */
  push32((uint32_t)(EAX));
  /* 12d6a15f call 0x12d65bb0 */
  push32(0x12d6a164u); f_12d65bb0();
  /* 12d6a164 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a167 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d6a16a jmp 0x12d6a1bb */
  goto L_12d6a1bb;
L_12d6a16c:;
  /* 12d6a16c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a16f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6a175 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6a177 je 0x12d6a19c */
  if (C.zf) goto L_12d6a19c;
  /* 12d6a179 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12d6a17f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d6a182 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d6a185 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12d6a18b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12d6a18e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12d6a190 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12d6a193 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12d6a19a jmp 0x12d6a1bb */
  goto L_12d6a1bb;
L_12d6a19c:;
  /* 12d6a19c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12d6a1a3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12d6a1a9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d6a1ac mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d6a1af mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12d6a1b5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12d6a1b8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d6a1bb:;
  /* 12d6a1bb jmp 0x12d6a747 */
  goto L_12d6a747;
L_12d6a1c0:;
  /* 12d6a1c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a1c3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6a1c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6a1cb jne 0x12d6a1d6 */
  if (!C.zf) goto L_12d6a1d6;
  /* 12d6a1cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a1d0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12d6a1d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d6a1d6:;
  /* 12d6a1d6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a1dd jne 0x12d6a1eb */
  if (!C.zf) goto L_12d6a1eb;
  /* 12d6a1df mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12d6a1e9 jmp 0x12d6a1f7 */
  goto L_12d6a1f7;
L_12d6a1eb:;
  /* 12d6a1eb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12d6a1f1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12d6a1f7:;
  /* 12d6a1f7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12d6a1fd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12d6a203 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12d6a206 push edx */
  push32((uint32_t)(EDX));
  /* 12d6a207 call 0x12d6ab50 */
  push32(0x12d6a20cu); f_12d6ab50();
  /* 12d6a20c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a20f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d6a212 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a215 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6a21a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6a21c je 0x12d6a286 */
  if (C.zf) goto L_12d6a286;
  /* 12d6a21e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a222 jne 0x12d6a22d */
  if (!C.zf) goto L_12d6a22d;
  /* 12d6a224 mov ecx, dword ptr [0x12d7cfd4] */
  ECX = (r32((uint32_t)(0x12d7cfd4)));
  /* 12d6a22a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12d6a22d:;
  /* 12d6a22d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12d6a234 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6a237 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12d6a23d:;
  /* 12d6a23d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12d6a243 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 12d6a249 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6a24c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12d6a252 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6a254 je 0x12d6a276 */
  if (C.zf) goto L_12d6a276;
  /* 12d6a256 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12d6a25c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6a25e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12d6a261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6a263 je 0x12d6a276 */
  if (C.zf) goto L_12d6a276;
  /* 12d6a265 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 12d6a26b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a26e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 12d6a274 jmp 0x12d6a23d */
  goto L_12d6a23d;
L_12d6a276:;
  /* 12d6a276 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12d6a27c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6a27f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12d6a281 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12d6a284 jmp 0x12d6a2e0 */
  goto L_12d6a2e0;
L_12d6a286:;
  /* 12d6a286 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a28a jne 0x12d6a294 */
  if (!C.zf) goto L_12d6a294;
  /* 12d6a28c mov eax, dword ptr [0x12d7cfd0] */
  EAX = (r32((uint32_t)(0x12d7cfd0)));
  /* 12d6a291 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12d6a294:;
  /* 12d6a294 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6a297 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_12d6a29d:;
  /* 12d6a29d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 12d6a2a3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12d6a2a9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6a2ac mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 12d6a2b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6a2b4 je 0x12d6a2d4 */
  if (C.zf) goto L_12d6a2d4;
  /* 12d6a2b6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12d6a2bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d6a2bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6a2c1 je 0x12d6a2d4 */
  if (C.zf) goto L_12d6a2d4;
  /* 12d6a2c3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 12d6a2c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a2cc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 12d6a2d2 jmp 0x12d6a29d */
  goto L_12d6a29d;
L_12d6a2d4:;
  /* 12d6a2d4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12d6a2da sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6a2dd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12d6a2e0:;
  /* 12d6a2e0 jmp 0x12d6a747 */
  goto L_12d6a747;
L_12d6a2e5:;
  /* 12d6a2e5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12d6a2e8 push edx */
  push32((uint32_t)(EDX));
  /* 12d6a2e9 call 0x12d6ab50 */
  push32(0x12d6a2eeu); f_12d6ab50();
  /* 12d6a2ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a2f1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 12d6a2f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a2fa and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6a2fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6a2ff je 0x12d6a313 */
  if (C.zf) goto L_12d6a313;
  /* 12d6a301 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12d6a307 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 12d6a30e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 12d6a311 jmp 0x12d6a321 */
  goto L_12d6a321;
L_12d6a313:;
  /* 12d6a313 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12d6a319 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12d6a31f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12d6a321:;
  /* 12d6a321 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 12d6a32b jmp 0x12d6a747 */
  goto L_12d6a747;
L_12d6a330:;
  /* 12d6a330 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12d6a337 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 12d6a33a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d6a33d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_12d6a340:;
  /* 12d6a340 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a343 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12d6a345 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6a348 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 12d6a34e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d6a351 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a358 jge 0x12d6a366 */
  if ((C.sf==C.of)) goto L_12d6a366;
  /* 12d6a35a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 12d6a364 jmp 0x12d6a382 */
  goto L_12d6a382;
L_12d6a366:;
  /* 12d6a366 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a36d jne 0x12d6a382 */
  if (!C.zf) goto L_12d6a382;
  /* 12d6a36f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d6a373 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a376 jne 0x12d6a382 */
  if (!C.zf) goto L_12d6a382;
  /* 12d6a378 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_12d6a382:;
  /* 12d6a382 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6a385 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a388 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12d6a38b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6a38e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6a391 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d6a393 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d6a396 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 12d6a39c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 12d6a3a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6a3a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6a3a6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12d6a3ac push edx */
  push32((uint32_t)(EDX));
  /* 12d6a3ad movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d6a3b1 push eax */
  push32((uint32_t)(EAX));
  /* 12d6a3b2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6a3b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6a3b6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 12d6a3bc push edx */
  push32((uint32_t)(EDX));
  /* 12d6a3bd call dword ptr [0x12d7d3c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7d3c0))), 0x12d6a3c3u);
  /* 12d6a3c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a3c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a3c9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6a3ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6a3d0 je 0x12d6a3e8 */
  if (C.zf) goto L_12d6a3e8;
  /* 12d6a3d2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a3d9 jne 0x12d6a3e8 */
  if (!C.zf) goto L_12d6a3e8;
  /* 12d6a3db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6a3de push ecx */
  push32((uint32_t)(ECX));
  /* 12d6a3df call dword ptr [0x12d7d3cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7d3cc))), 0x12d6a3e5u);
  /* 12d6a3e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6a3e8:;
  /* 12d6a3e8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d6a3ec cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a3ef jne 0x12d6a40a */
  if (!C.zf) goto L_12d6a40a;
  /* 12d6a3f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a3f4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6a3f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6a3fb jne 0x12d6a40a */
  if (!C.zf) goto L_12d6a40a;
  /* 12d6a3fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6a400 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6a401 call dword ptr [0x12d7d3c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7d3c4))), 0x12d6a407u);
  /* 12d6a407 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6a40a:;
  /* 12d6a40a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6a40d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d6a410 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a413 jne 0x12d6a427 */
  if (!C.zf) goto L_12d6a427;
  /* 12d6a415 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a418 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12d6a41b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d6a41e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6a421 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a424 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12d6a427:;
  /* 12d6a427 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6a42a push eax */
  push32((uint32_t)(EAX));
  /* 12d6a42b call 0x12d65bb0 */
  push32(0x12d6a430u); f_12d65bb0();
  /* 12d6a430 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a433 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d6a436 jmp 0x12d6a747 */
  goto L_12d6a747;
L_12d6a43b:;
  /* 12d6a43b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a43e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6a441 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d6a444 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12d6a44e jmp 0x12d6a4d5 */
  goto L_12d6a4d5;
L_12d6a453:;
  /* 12d6a453 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12d6a45d jmp 0x12d6a4d5 */
  goto L_12d6a4d5;
L_12d6a45f:;
  /* 12d6a45f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_12d6a469:;
  /* 12d6a469 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 12d6a473 jmp 0x12d6a47f */
  goto L_12d6a47f;
L_12d6a475:;
  /* 12d6a475 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_12d6a47f:;
  /* 12d6a47f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 12d6a489 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a48c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6a492 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6a494 je 0x12d6a4b3 */
  if (C.zf) goto L_12d6a4b3;
  /* 12d6a496 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 12d6a49d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 12d6a4a3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a4a6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 12d6a4ac mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_12d6a4b3:;
  /* 12d6a4b3 jmp 0x12d6a4d5 */
  goto L_12d6a4d5;
L_12d6a4b5:;
  /* 12d6a4b5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 12d6a4bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a4c2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6a4c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6a4ca je 0x12d6a4d5 */
  if (C.zf) goto L_12d6a4d5;
  /* 12d6a4cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a4cf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12d6a4d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d6a4d5:;
  /* 12d6a4d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a4d8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6a4dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6a4df je 0x12d6a4fe */
  if (C.zf) goto L_12d6a4fe;
  /* 12d6a4e1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12d6a4e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6a4e5 call 0x12d6ab70 */
  push32(0x12d6a4eau); f_12d6ab70();
  /* 12d6a4ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a4ed mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12d6a4f3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12d6a4f9 jmp 0x12d6a58f */
  goto L_12d6a58f;
L_12d6a4fe:;
  /* 12d6a4fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a501 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6a504 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6a506 je 0x12d6a550 */
  if (C.zf) goto L_12d6a550;
  /* 12d6a508 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a50b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6a50e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6a510 je 0x12d6a530 */
  if (C.zf) goto L_12d6a530;
  /* 12d6a512 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12d6a515 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6a516 call 0x12d6ab50 */
  push32(0x12d6a51bu); f_12d6ab50();
  /* 12d6a51b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a51e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 12d6a521 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d6a522 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12d6a528 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12d6a52e jmp 0x12d6a54e */
  goto L_12d6a54e;
L_12d6a530:;
  /* 12d6a530 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12d6a533 push edx */
  push32((uint32_t)(EDX));
  /* 12d6a534 call 0x12d6ab50 */
  push32(0x12d6a539u); f_12d6ab50();
  /* 12d6a539 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a53c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6a541 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d6a542 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12d6a548 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_12d6a54e:;
  /* 12d6a54e jmp 0x12d6a58f */
  goto L_12d6a58f;
L_12d6a550:;
  /* 12d6a550 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a553 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6a556 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6a558 je 0x12d6a575 */
  if (C.zf) goto L_12d6a575;
  /* 12d6a55a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12d6a55d push ecx */
  push32((uint32_t)(ECX));
  /* 12d6a55e call 0x12d6ab50 */
  push32(0x12d6a563u); f_12d6ab50();
  /* 12d6a563 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a566 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d6a567 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12d6a56d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12d6a573 jmp 0x12d6a58f */
  goto L_12d6a58f;
L_12d6a575:;
  /* 12d6a575 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12d6a578 push edx */
  push32((uint32_t)(EDX));
  /* 12d6a579 call 0x12d6ab50 */
  push32(0x12d6a57eu); f_12d6ab50();
  /* 12d6a57e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a581 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6a583 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12d6a589 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_12d6a58f:;
  /* 12d6a58f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a592 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6a595 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6a597 je 0x12d6a5d7 */
  if (C.zf) goto L_12d6a5d7;
  /* 12d6a599 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a5a0 jg 0x12d6a5d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d6a5d7;
  /* 12d6a5a2 jl 0x12d6a5ad */
  if ((C.sf!=C.of)) goto L_12d6a5ad;
  /* 12d6a5a4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a5ab jae 0x12d6a5d7 */
  if (!C.cf) goto L_12d6a5d7;
L_12d6a5ad:;
  /* 12d6a5ad mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12d6a5b3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d6a5b5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12d6a5bb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a5be neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d6a5c0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12d6a5c6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 12d6a5cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a5cf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12d6a5d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d6a5d5 jmp 0x12d6a5ef */
  goto L_12d6a5ef;
L_12d6a5d7:;
  /* 12d6a5d7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12d6a5dd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12d6a5e3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12d6a5e9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12d6a5ef:;
  /* 12d6a5ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a5f2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6a5f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6a5fa jne 0x12d6a617 */
  if (!C.zf) goto L_12d6a617;
  /* 12d6a5fc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12d6a602 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12d6a608 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6a60b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12d6a611 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12d6a617:;
  /* 12d6a617 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a61e jge 0x12d6a62c */
  if ((C.sf==C.of)) goto L_12d6a62c;
  /* 12d6a620 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 12d6a62a jmp 0x12d6a635 */
  goto L_12d6a635;
L_12d6a62c:;
  /* 12d6a62c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a62f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6a632 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d6a635:;
  /* 12d6a635 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12d6a63b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 12d6a641 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6a643 jne 0x12d6a64c */
  if (!C.zf) goto L_12d6a64c;
  /* 12d6a645 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12d6a64c:;
  /* 12d6a64c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12d6a64f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12d6a652:;
  /* 12d6a652 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12d6a658 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12d6a65e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6a661 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12d6a667 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6a669 jg 0x12d6a67f */
  if ((!C.zf&&C.sf==C.of)) goto L_12d6a67f;
  /* 12d6a66b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12d6a671 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 12d6a677 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6a679 je 0x12d6a700 */
  if (C.zf) goto L_12d6a700;
L_12d6a67f:;
  /* 12d6a67f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12d6a685 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d6a686 push edx */
  push32((uint32_t)(EDX));
  /* 12d6a687 push eax */
  push32((uint32_t)(EAX));
  /* 12d6a688 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 12d6a68e push edx */
  push32((uint32_t)(EDX));
  /* 12d6a68f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12d6a695 push eax */
  push32((uint32_t)(EAX));
  /* 12d6a696 call 0x12d69a10 */
  push32(0x12d6a69bu); f_12d69a10();
  /* 12d6a69b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a69e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 12d6a6a4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12d6a6aa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d6a6ab push edx */
  push32((uint32_t)(EDX));
  /* 12d6a6ac push eax */
  push32((uint32_t)(EAX));
  /* 12d6a6ad mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12d6a6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6a6b4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12d6a6ba push edx */
  push32((uint32_t)(EDX));
  /* 12d6a6bb call 0x12d699a0 */
  push32(0x12d6a6c0u); f_12d699a0();
  /* 12d6a6c0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12d6a6c6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 12d6a6cc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a6d3 jle 0x12d6a6e7 */
  if ((C.zf||C.sf!=C.of)) goto L_12d6a6e7;
  /* 12d6a6d5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 12d6a6db add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a6e1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_12d6a6e7:;
  /* 12d6a6e7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6a6ea mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 12d6a6f0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12d6a6f2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6a6f5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6a6f8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d6a6fb jmp 0x12d6a652 */
  goto L_12d6a652;
L_12d6a700:;
  /* 12d6a700 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12d6a703 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6a706 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d6a709 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6a70c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a70f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d6a712 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a715 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6a71a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6a71c je 0x12d6a747 */
  if (C.zf) goto L_12d6a747;
  /* 12d6a71e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6a721 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d6a724 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a727 jne 0x12d6a72f */
  if (!C.zf) goto L_12d6a72f;
  /* 12d6a729 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a72d jne 0x12d6a747 */
  if (!C.zf) goto L_12d6a747;
L_12d6a72f:;
  /* 12d6a72f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6a732 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6a735 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d6a738 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6a73b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 12d6a73e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d6a741 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a744 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12d6a747:;
  /* 12d6a747 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a74e jne 0x12d6a922 */
  if (!C.zf) goto L_12d6a922;
  /* 12d6a754 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a757 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6a75a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6a75c je 0x12d6a7ad */
  if (C.zf) goto L_12d6a7ad;
  /* 12d6a75e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a761 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6a767 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6a769 je 0x12d6a77b */
  if (C.zf) goto L_12d6a77b;
  /* 12d6a76b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 12d6a772 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12d6a779 jmp 0x12d6a7ad */
  goto L_12d6a7ad;
L_12d6a77b:;
  /* 12d6a77b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a77e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6a781 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6a783 je 0x12d6a795 */
  if (C.zf) goto L_12d6a795;
  /* 12d6a785 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 12d6a78c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12d6a793 jmp 0x12d6a7ad */
  goto L_12d6a7ad;
L_12d6a795:;
  /* 12d6a795 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a798 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6a79b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6a79d je 0x12d6a7ad */
  if (C.zf) goto L_12d6a7ad;
  /* 12d6a79f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 12d6a7a6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_12d6a7ad:;
  /* 12d6a7ad mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12d6a7b3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6a7b6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6a7b9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 12d6a7bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a7c2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6a7c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6a7c7 jne 0x12d6a7e5 */
  if (!C.zf) goto L_12d6a7e5;
  /* 12d6a7c9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12d6a7cf push eax */
  push32((uint32_t)(EAX));
  /* 12d6a7d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6a7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6a7d4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12d6a7da push edx */
  push32((uint32_t)(EDX));
  /* 12d6a7db push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12d6a7dd call 0x12d6aac0 */
  push32(0x12d6a7e2u); f_12d6aac0();
  /* 12d6a7e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6a7e5:;
  /* 12d6a7e5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12d6a7eb push eax */
  push32((uint32_t)(EAX));
  /* 12d6a7ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6a7ef push ecx */
  push32((uint32_t)(ECX));
  /* 12d6a7f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6a7f3 push edx */
  push32((uint32_t)(EDX));
  /* 12d6a7f4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 12d6a7fa push eax */
  push32((uint32_t)(EAX));
  /* 12d6a7fb call 0x12d6ab00 */
  push32(0x12d6a800u); f_12d6ab00();
  /* 12d6a800 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a803 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a806 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6a809 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6a80b je 0x12d6a833 */
  if (C.zf) goto L_12d6a833;
  /* 12d6a80d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a810 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6a813 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6a815 jne 0x12d6a833 */
  if (!C.zf) goto L_12d6a833;
  /* 12d6a817 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12d6a81d push eax */
  push32((uint32_t)(EAX));
  /* 12d6a81e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6a821 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6a822 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12d6a828 push edx */
  push32((uint32_t)(EDX));
  /* 12d6a829 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12d6a82b call 0x12d6aac0 */
  push32(0x12d6a830u); f_12d6aac0();
  /* 12d6a830 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6a833:;
  /* 12d6a833 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a837 je 0x12d6a8e1 */
  if (C.zf) goto L_12d6a8e1;
  /* 12d6a83d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a841 jle 0x12d6a8e1 */
  if ((C.zf||C.sf!=C.of)) goto L_12d6a8e1;
  /* 12d6a847 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6a84a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 12d6a850 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d6a853 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_12d6a859:;
  /* 12d6a859 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 12d6a85f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 12d6a865 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6a868 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 12d6a86e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6a870 je 0x12d6a8df */
  if (C.zf) goto L_12d6a8df;
  /* 12d6a872 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 12d6a878 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12d6a87b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 12d6a882 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 12d6a889 push eax */
  push32((uint32_t)(EAX));
  /* 12d6a88a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 12d6a890 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6a891 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 12d6a897 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a89a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 12d6a8a0 call 0x12d6bc70 */
  push32(0x12d6a8a5u); f_12d6bc70();
  /* 12d6a8a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a8a8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 12d6a8ae cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6a8b5 jg 0x12d6a8b9 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d6a8b9;
  /* 12d6a8b7 jmp 0x12d6a8df */
  goto L_12d6a8df;
L_12d6a8b9:;
  /* 12d6a8b9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12d6a8bf push eax */
  push32((uint32_t)(EAX));
  /* 12d6a8c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6a8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6a8c4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 12d6a8ca push edx */
  push32((uint32_t)(EDX));
  /* 12d6a8cb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 12d6a8d1 push eax */
  push32((uint32_t)(EAX));
  /* 12d6a8d2 call 0x12d6ab00 */
  push32(0x12d6a8d7u); f_12d6ab00();
  /* 12d6a8d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6a8da jmp 0x12d6a859 */
  goto L_12d6a859;
L_12d6a8df:;
  /* 12d6a8df jmp 0x12d6a8fc */
  goto L_12d6a8fc;
L_12d6a8e1:;
  /* 12d6a8e1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12d6a8e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6a8e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6a8eb push edx */
  push32((uint32_t)(EDX));
  /* 12d6a8ec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d6a8ef push eax */
  push32((uint32_t)(EAX));
  /* 12d6a8f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6a8f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6a8f4 call 0x12d6ab00 */
  push32(0x12d6a8f9u); f_12d6ab00();
  /* 12d6a8f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6a8fc:;
  /* 12d6a8fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6a8ff and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6a902 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6a904 je 0x12d6a922 */
  if (C.zf) goto L_12d6a922;
  /* 12d6a906 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12d6a90c push eax */
  push32((uint32_t)(EAX));
  /* 12d6a90d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6a910 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6a911 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12d6a917 push edx */
  push32((uint32_t)(EDX));
  /* 12d6a918 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12d6a91a call 0x12d6aac0 */
  push32(0x12d6a91fu); f_12d6aac0();
  /* 12d6a91f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6a922:;
  /* 12d6a922 jmp 0x12d69d34 */
  goto L_12d69d34;
L_12d6a927:;
  /* 12d6a927 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12d6a92d pop edi */
  EDI = (pop32());
  /* 12d6a92e pop esi */
  ESI = (pop32());
  /* 12d6a92f pop ebx */
  EBX = (pop32());
  /* 12d6a930 mov esp, ebp */
  ESP = (EBP);
  /* 12d6a932 pop ebp */
  EBP = (pop32());
  /* 12d6a933 ret  */
  ESPCHK(0x12d69d10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa40 @ 0x12d6aa40 (119 bytes, 44 insns) */
void f_12d6aa40(void) {
  FTRACE(0x12d6aa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6aa40 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6aa41 mov ebp, esp */
  EBP = (ESP);
  /* 12d6aa43 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6aa44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6aa47 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d6aa4a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6aa4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6aa50 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12d6aa53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6aa56 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6aa5a jl 0x12d6aa82 */
  if ((C.sf!=C.of)) goto L_12d6aa82;
  /* 12d6aa5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6aa5f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d6aa61 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d6aa64 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12d6aa66 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12d6aa6a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d6aa70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d6aa73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6aa76 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d6aa78 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6aa7b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6aa7e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d6aa80 jmp 0x12d6aa95 */
  goto L_12d6aa95;
L_12d6aa82:;
  /* 12d6aa82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6aa85 push edx */
  push32((uint32_t)(EDX));
  /* 12d6aa86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6aa89 push eax */
  push32((uint32_t)(EAX));
  /* 12d6aa8a call 0x12d69a90 */
  push32(0x12d6aa8fu); f_12d69a90();
  /* 12d6aa8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6aa92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d6aa95:;
  /* 12d6aa95 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6aa99 jne 0x12d6aaa6 */
  if (!C.zf) goto L_12d6aaa6;
  /* 12d6aa9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6aa9e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12d6aaa4 jmp 0x12d6aab3 */
  goto L_12d6aab3;
L_12d6aaa6:;
  /* 12d6aaa6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6aaa9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d6aaab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6aaae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6aab1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12d6aab3:;
  /* 12d6aab3 mov esp, ebp */
  ESP = (EBP);
  /* 12d6aab5 pop ebp */
  EBP = (pop32());
  /* 12d6aab6 ret  */
  ESPCHK(0x12d6aa40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aac0 @ 0x12d6aac0 (53 bytes, 23 insns) */
void f_12d6aac0(void) {
  FTRACE(0x12d6aac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6aac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6aac1 mov ebp, esp */
  EBP = (ESP);
L_12d6aac3:;
  /* 12d6aac3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6aac6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6aac9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6aacc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12d6aacf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6aad1 jle 0x12d6aaf3 */
  if ((C.zf||C.sf!=C.of)) goto L_12d6aaf3;
  /* 12d6aad3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d6aad6 push edx */
  push32((uint32_t)(EDX));
  /* 12d6aad7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6aada push eax */
  push32((uint32_t)(EAX));
  /* 12d6aadb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6aade push ecx */
  push32((uint32_t)(ECX));
  /* 12d6aadf call 0x12d6aa40 */
  push32(0x12d6aae4u); f_12d6aa40();
  /* 12d6aae4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6aae7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d6aaea cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6aaed jne 0x12d6aaf1 */
  if (!C.zf) goto L_12d6aaf1;
  /* 12d6aaef jmp 0x12d6aaf3 */
  goto L_12d6aaf3;
L_12d6aaf1:;
  /* 12d6aaf1 jmp 0x12d6aac3 */
  goto L_12d6aac3;
L_12d6aaf3:;
  /* 12d6aaf3 pop ebp */
  EBP = (pop32());
  /* 12d6aaf4 ret  */
  ESPCHK(0x12d6aac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab00 @ 0x12d6ab00 (74 bytes, 31 insns) */
void f_12d6ab00(void) {
  FTRACE(0x12d6ab00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6ab00 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6ab01 mov ebp, esp */
  EBP = (ESP);
  /* 12d6ab03 push ecx */
  push32((uint32_t)(ECX));
L_12d6ab04:;
  /* 12d6ab04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6ab07 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6ab0a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6ab0d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12d6ab10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6ab12 jle 0x12d6ab46 */
  if ((C.zf||C.sf!=C.of)) goto L_12d6ab46;
  /* 12d6ab14 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d6ab17 push edx */
  push32((uint32_t)(EDX));
  /* 12d6ab18 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6ab1b push eax */
  push32((uint32_t)(EAX));
  /* 12d6ab1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ab1f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d6ab22 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d6ab25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6ab28 push eax */
  push32((uint32_t)(EAX));
  /* 12d6ab29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ab2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ab2f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d6ab32 call 0x12d6aa40 */
  push32(0x12d6ab37u); f_12d6aa40();
  /* 12d6ab37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ab3a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d6ab3d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ab40 jne 0x12d6ab44 */
  if (!C.zf) goto L_12d6ab44;
  /* 12d6ab42 jmp 0x12d6ab46 */
  goto L_12d6ab46;
L_12d6ab44:;
  /* 12d6ab44 jmp 0x12d6ab04 */
  goto L_12d6ab04;
L_12d6ab46:;
  /* 12d6ab46 mov esp, ebp */
  ESP = (EBP);
  /* 12d6ab48 pop ebp */
  EBP = (pop32());
  /* 12d6ab49 ret  */
  ESPCHK(0x12d6ab00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab50 @ 0x12d6ab50 (26 bytes, 12 insns) */
void f_12d6ab50(void) {
  FTRACE(0x12d6ab50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6ab50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6ab51 mov ebp, esp */
  EBP = (ESP);
  /* 12d6ab53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ab56 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d6ab58 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ab5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ab5e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d6ab60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ab63 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d6ab65 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12d6ab68 pop ebp */
  EBP = (pop32());
  /* 12d6ab69 ret  */
  ESPCHK(0x12d6ab50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab70 @ 0x12d6ab70 (31 bytes, 14 insns) */
void f_12d6ab70(void) {
  FTRACE(0x12d6ab70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6ab70 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6ab71 mov ebp, esp */
  EBP = (ESP);
  /* 12d6ab73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ab76 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d6ab78 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ab7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ab7e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d6ab80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ab83 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d6ab85 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6ab88 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12d6ab8a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d6ab8d pop ebp */
  EBP = (pop32());
  /* 12d6ab8e ret  */
  ESPCHK(0x12d6ab70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab90 @ 0x12d6ab90 (27 bytes, 12 insns) */
void f_12d6ab90(void) {
  FTRACE(0x12d6ab90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6ab90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6ab91 mov ebp, esp */
  EBP = (ESP);
  /* 12d6ab93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ab96 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d6ab98 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ab9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ab9e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d6aba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6aba3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d6aba5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 12d6aba9 pop ebp */
  EBP = (pop32());
  /* 12d6abaa ret  */
  ESPCHK(0x12d6ab90u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x12d6abb0 (145 bytes, 42 insns) */
void f_12d6abb0(void) {
  FTRACE(0x12d6abb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6abb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6abb1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6abb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6abb4 call 0x12d6ac60 */
  push32(0x12d6abb9u); f_12d6ac60();
  /* 12d6abb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6abbc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d6abbe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d6abc5 jmp 0x12d6abd0 */
  goto L_12d6abd0;
L_12d6abc7:;
  /* 12d6abc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6abca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6abcd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d6abd0:;
  /* 12d6abd0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6abd4 jae 0x12d6abfa */
  if (!C.cf) goto L_12d6abfa;
  /* 12d6abd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6abd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6abdc cmp ecx, dword ptr [eax*8 + 0x12d7cfd8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12d7cfd8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6abe3 jne 0x12d6abf8 */
  if (!C.zf) goto L_12d6abf8;
  /* 12d6abe5 call 0x12d6ac50 */
  push32(0x12d6abeau); f_12d6ac50();
  /* 12d6abea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6abed mov ecx, dword ptr [edx*8 + 0x12d7cfdc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12d7cfdc)));
  /* 12d6abf4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d6abf6 jmp 0x12d6ac3d */
  goto L_12d6ac3d;
L_12d6abf8:;
  /* 12d6abf8 jmp 0x12d6abc7 */
  goto L_12d6abc7;
L_12d6abfa:;
  /* 12d6abfa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6abfe jb 0x12d6ac13 */
  if (C.cf) goto L_12d6ac13;
  /* 12d6ac00 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ac04 ja 0x12d6ac13 */
  if ((!C.cf&&!C.zf)) goto L_12d6ac13;
  /* 12d6ac06 call 0x12d6ac50 */
  push32(0x12d6ac0bu); f_12d6ac50();
  /* 12d6ac0b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12d6ac11 jmp 0x12d6ac3d */
  goto L_12d6ac3d;
L_12d6ac13:;
  /* 12d6ac13 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ac1a jb 0x12d6ac32 */
  if (C.cf) goto L_12d6ac32;
  /* 12d6ac1c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ac23 ja 0x12d6ac32 */
  if ((!C.cf&&!C.zf)) goto L_12d6ac32;
  /* 12d6ac25 call 0x12d6ac50 */
  push32(0x12d6ac2au); f_12d6ac50();
  /* 12d6ac2a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 12d6ac30 jmp 0x12d6ac3d */
  goto L_12d6ac3d;
L_12d6ac32:;
  /* 12d6ac32 call 0x12d6ac50 */
  push32(0x12d6ac37u); f_12d6ac50();
  /* 12d6ac37 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_12d6ac3d:;
  /* 12d6ac3d mov esp, ebp */
  ESP = (EBP);
  /* 12d6ac3f pop ebp */
  EBP = (pop32());
  /* 12d6ac40 ret  */
  ESPCHK(0x12d6abb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac50 @ 0x12d6ac50 (13 bytes, 6 insns) */
void f_12d6ac50(void) {
  FTRACE(0x12d6ac50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6ac50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6ac51 mov ebp, esp */
  EBP = (ESP);
  /* 12d6ac53 call 0x12d627c0 */
  push32(0x12d6ac58u); f_12d627c0();
  /* 12d6ac58 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ac5b pop ebp */
  EBP = (pop32());
  /* 12d6ac5c ret  */
  ESPCHK(0x12d6ac50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac60 @ 0x12d6ac60 (13 bytes, 6 insns) */
void f_12d6ac60(void) {
  FTRACE(0x12d6ac60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6ac60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6ac61 mov ebp, esp */
  EBP = (ESP);
  /* 12d6ac63 call 0x12d627c0 */
  push32(0x12d6ac68u); f_12d627c0();
  /* 12d6ac68 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ac6b pop ebp */
  EBP = (pop32());
  /* 12d6ac6c ret  */
  ESPCHK(0x12d6ac60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac70 @ 0x12d6ac70 (664 bytes, 265 insns) [15 switch table(s)] */
void f_12d6ac70(void) {
  FTRACE(0x12d6ac70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6ac70 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6ac71 mov ebp, esp */
  EBP = (ESP);
  /* 12d6ac73 push edi */
  push32((uint32_t)(EDI));
  /* 12d6ac74 push esi */
  push32((uint32_t)(ESI));
  /* 12d6ac75 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6ac78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6ac7b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ac7e mov eax, ecx */
  EAX = (ECX);
  /* 12d6ac80 mov edx, ecx */
  EDX = (ECX);
  /* 12d6ac82 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ac84 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ac86 jbe 0x12d6ac90 */
  if ((C.cf||C.zf)) goto L_12d6ac90;
  /* 12d6ac88 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ac8a jb 0x12d6ae08 */
  if (C.cf) goto L_12d6ae08;
L_12d6ac90:;
  /* 12d6ac90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12d6ac96 jne 0x12d6acac */
  if (!C.zf) goto L_12d6acac;
  /* 12d6ac98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d6ac9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6ac9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6aca1 jb 0x12d6accc */
  if (C.cf) goto L_12d6accc;
  /* 12d6aca3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d6aca5 jmp dword ptr [edx*4 + 0x12d6adb8] */
  switch (EDX) {
    case 0: goto L_12d6adc8;
    case 1: goto L_12d6add0;
    case 2: goto L_12d6addc;
    case 3: goto L_12d6adf0;
    default: x86_unimpl("switch@0x12d6aca5 out of table"); return;
  }
L_12d6acac:;
  /* 12d6acac mov eax, edi */
  EAX = (EDI);
  /* 12d6acae mov edx, 3 */
  EDX = (0x3u);
  /* 12d6acb3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6acb6 jb 0x12d6acc4 */
  if (C.cf) goto L_12d6acc4;
  /* 12d6acb8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6acbb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6acbd jmp dword ptr [eax*4 + 0x12d6acd0] */
  switch (EAX) {
    case 1: goto L_12d6ace0;
    case 2: goto L_12d6ad0c;
    case 3: goto L_12d6ad30;
    default: x86_unimpl("switch@0x12d6acbd out of table"); return;
  }
L_12d6acc4:;
  /* 12d6acc4 jmp dword ptr [ecx*4 + 0x12d6adc8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12d6adc8)))); return;
  /* 12d6accb nop  */
  /* nop */
L_12d6accc:;
  /* 12d6accc jmp dword ptr [ecx*4 + 0x12d6ad4c] */
  switch (ECX) {
    case 0: goto L_12d6adaf;
    case 1: goto L_12d6ad9c;
    case 2: goto L_12d6ad94;
    case 3: goto L_12d6ad8c;
    case 4: goto L_12d6ad84;
    case 5: goto L_12d6ad7c;
    case 6: goto L_12d6ad74;
    case 7: goto L_12d6ad6c;
    default: x86_unimpl("switch@0x12d6accc out of table"); return;
  }
  /* 12d6acd3 nop  */
  /* nop */
L_12d6ace0:;
  /* 12d6ace0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6ace2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d6ace4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d6ace6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d6ace9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d6acec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d6acef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d6acf2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d6acf5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6acf8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6acfb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6acfe jb 0x12d6accc */
  if (C.cf) goto L_12d6accc;
  /* 12d6ad00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d6ad02 jmp dword ptr [edx*4 + 0x12d6adb8] */
  switch (EDX) {
    case 0: goto L_12d6adc8;
    case 1: goto L_12d6add0;
    case 2: goto L_12d6addc;
    case 3: goto L_12d6adf0;
    default: x86_unimpl("switch@0x12d6ad02 out of table"); return;
  }
  /* 12d6ad09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d6ad0c:;
  /* 12d6ad0c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6ad0e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d6ad10 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d6ad12 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d6ad15 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d6ad18 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d6ad1b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ad1e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ad21 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ad24 jb 0x12d6accc */
  if (C.cf) goto L_12d6accc;
  /* 12d6ad26 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d6ad28 jmp dword ptr [edx*4 + 0x12d6adb8] */
  switch (EDX) {
    case 0: goto L_12d6adc8;
    case 1: goto L_12d6add0;
    case 2: goto L_12d6addc;
    case 3: goto L_12d6adf0;
    default: x86_unimpl("switch@0x12d6ad28 out of table"); return;
  }
  /* 12d6ad2f nop  */
  /* nop */
L_12d6ad30:;
  /* 12d6ad30 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6ad32 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d6ad34 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d6ad36 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d6ad37 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d6ad3a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d6ad3b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ad3e jb 0x12d6accc */
  if (C.cf) goto L_12d6accc;
  /* 12d6ad40 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d6ad42 jmp dword ptr [edx*4 + 0x12d6adb8] */
  switch (EDX) {
    case 0: goto L_12d6adc8;
    case 1: goto L_12d6add0;
    case 2: goto L_12d6addc;
    case 3: goto L_12d6adf0;
    default: x86_unimpl("switch@0x12d6ad42 out of table"); return;
  }
  /* 12d6ad49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d6ad6c:;
  /* 12d6ad6c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12d6ad70 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12d6ad74:;
  /* 12d6ad74 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12d6ad78 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12d6ad7c:;
  /* 12d6ad7c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12d6ad80 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12d6ad84:;
  /* 12d6ad84 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12d6ad88 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12d6ad8c:;
  /* 12d6ad8c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12d6ad90 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12d6ad94:;
  /* 12d6ad94 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12d6ad98 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12d6ad9c:;
  /* 12d6ad9c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12d6ada0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12d6ada4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12d6adab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6adad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12d6adaf:;
  /* 12d6adaf jmp dword ptr [edx*4 + 0x12d6adb8] */
  switch (EDX) {
    case 0: goto L_12d6adc8;
    case 1: goto L_12d6add0;
    case 2: goto L_12d6addc;
    case 3: goto L_12d6adf0;
    default: x86_unimpl("switch@0x12d6adaf out of table"); return;
  }
  /* 12d6adb6 mov edi, edi */
  EDI = (EDI);
L_12d6adc8:;
  /* 12d6adc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6adcb pop esi */
  ESI = (pop32());
  /* 12d6adcc pop edi */
  EDI = (pop32());
  /* 12d6adcd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d6adce ret  */
  ESPCHK(0x12d6ac70u, _esp0);
  ESP += 4; return;
  /* 12d6adcf nop  */
  /* nop */
L_12d6add0:;
  /* 12d6add0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d6add2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d6add4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6add7 pop esi */
  ESI = (pop32());
  /* 12d6add8 pop edi */
  EDI = (pop32());
  /* 12d6add9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d6adda ret  */
  ESPCHK(0x12d6ac70u, _esp0);
  ESP += 4; return;
  /* 12d6addb nop  */
  /* nop */
L_12d6addc:;
  /* 12d6addc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d6adde mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d6ade0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d6ade3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d6ade6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ade9 pop esi */
  ESI = (pop32());
  /* 12d6adea pop edi */
  EDI = (pop32());
  /* 12d6adeb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d6adec ret  */
  ESPCHK(0x12d6ac70u, _esp0);
  ESP += 4; return;
  /* 12d6aded lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d6adf0:;
  /* 12d6adf0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d6adf2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d6adf4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d6adf7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d6adfa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d6adfd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d6ae00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ae03 pop esi */
  ESI = (pop32());
  /* 12d6ae04 pop edi */
  EDI = (pop32());
  /* 12d6ae05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d6ae06 ret  */
  ESPCHK(0x12d6ac70u, _esp0);
  ESP += 4; return;
  /* 12d6ae07 nop  */
  /* nop */
L_12d6ae08:;
  /* 12d6ae08 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12d6ae0c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12d6ae10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12d6ae16 jne 0x12d6ae3c */
  if (!C.zf) goto L_12d6ae3c;
  /* 12d6ae18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d6ae1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6ae1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ae21 jb 0x12d6ae30 */
  if (C.cf) goto L_12d6ae30;
  /* 12d6ae23 std  */
  C.df=1;
  /* 12d6ae24 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d6ae26 cld  */
  C.df=0;
  /* 12d6ae27 jmp dword ptr [edx*4 + 0x12d6af50] */
  switch (EDX) {
    case 0: goto L_12d6af60;
    case 1: goto L_12d6af68;
    case 2: goto L_12d6af78;
    case 3: goto L_12d6af8c;
    default: x86_unimpl("switch@0x12d6ae27 out of table"); return;
  }
  /* 12d6ae2e mov edi, edi */
  EDI = (EDI);
L_12d6ae30:;
  /* 12d6ae30 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d6ae32 jmp dword ptr [ecx*4 + 0x12d6af00] */
  switch (ECX) {
    case 0: goto L_12d6af47;
    default: x86_unimpl("switch@0x12d6ae32 out of table"); return;
  }
  /* 12d6ae39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d6ae3c:;
  /* 12d6ae3c mov eax, edi */
  EAX = (EDI);
  /* 12d6ae3e mov edx, 3 */
  EDX = (0x3u);
  /* 12d6ae43 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ae46 jb 0x12d6ae54 */
  if (C.cf) goto L_12d6ae54;
  /* 12d6ae48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6ae4b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6ae4d jmp dword ptr [eax*4 + 0x12d6ae58] */
  switch (EAX) {
    case 1: goto L_12d6ae68;
    case 2: goto L_12d6ae88;
    case 3: goto L_12d6aeb0;
    default: x86_unimpl("switch@0x12d6ae4d out of table"); return;
  }
L_12d6ae54:;
  /* 12d6ae54 jmp dword ptr [ecx*4 + 0x12d6af50] */
  switch (ECX) {
    case 0: goto L_12d6af60;
    case 1: goto L_12d6af68;
    case 2: goto L_12d6af78;
    case 3: goto L_12d6af8c;
    default: x86_unimpl("switch@0x12d6ae54 out of table"); return;
  }
  /* 12d6ae5b nop  */
  /* nop */
L_12d6ae68:;
  /* 12d6ae68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d6ae6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6ae6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d6ae70 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12d6ae71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d6ae74 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12d6ae75 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ae78 jb 0x12d6ae30 */
  if (C.cf) goto L_12d6ae30;
  /* 12d6ae7a std  */
  C.df=1;
  /* 12d6ae7b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d6ae7d cld  */
  C.df=0;
  /* 12d6ae7e jmp dword ptr [edx*4 + 0x12d6af50] */
  switch (EDX) {
    case 0: goto L_12d6af60;
    case 1: goto L_12d6af68;
    case 2: goto L_12d6af78;
    case 3: goto L_12d6af8c;
    default: x86_unimpl("switch@0x12d6ae7e out of table"); return;
  }
  /* 12d6ae85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d6ae88:;
  /* 12d6ae88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d6ae8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6ae8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d6ae90 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d6ae93 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d6ae96 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d6ae99 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6ae9c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6ae9f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6aea2 jb 0x12d6ae30 */
  if (C.cf) goto L_12d6ae30;
  /* 12d6aea4 std  */
  C.df=1;
  /* 12d6aea5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d6aea7 cld  */
  C.df=0;
  /* 12d6aea8 jmp dword ptr [edx*4 + 0x12d6af50] */
  switch (EDX) {
    case 0: goto L_12d6af60;
    case 1: goto L_12d6af68;
    case 2: goto L_12d6af78;
    case 3: goto L_12d6af8c;
    default: x86_unimpl("switch@0x12d6aea8 out of table"); return;
  }
  /* 12d6aeaf nop  */
  /* nop */
L_12d6aeb0:;
  /* 12d6aeb0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d6aeb3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6aeb5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d6aeb8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d6aebb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d6aebe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d6aec1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d6aec4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d6aec7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6aeca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6aecd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6aed0 jb 0x12d6ae30 */
  if (C.cf) goto L_12d6ae30;
  /* 12d6aed6 std  */
  C.df=1;
  /* 12d6aed7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d6aed9 cld  */
  C.df=0;
  /* 12d6aeda jmp dword ptr [edx*4 + 0x12d6af50] */
  switch (EDX) {
    case 0: goto L_12d6af60;
    case 1: goto L_12d6af68;
    case 2: goto L_12d6af78;
    case 3: goto L_12d6af8c;
    default: x86_unimpl("switch@0x12d6aeda out of table"); return;
  }
  /* 12d6aee1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12d6aee4 add al, 0xaf */
  { uint32_t _a=(AL),_b=(0xafu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d6aee6 salc  */
  x86_unimpl("salc @ 0x12d6aee6");
  /* 12d6aee7 adc cl, byte ptr [edi + ebp*4] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EDI + EBP*4))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d6aeea salc  */
  x86_unimpl("salc @ 0x12d6aeea");
  /* 12d6aeeb adc dl, byte ptr [edi + ebp*4] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EDI + EBP*4))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d6aeee salc  */
  x86_unimpl("salc @ 0x12d6aeee");
  /* 12d6aeef adc bl, byte ptr [edi + ebp*4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EDI + EBP*4))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d6aef2 salc  */
  x86_unimpl("salc @ 0x12d6aef2");
  /* 12d6aef3 adc ah, byte ptr [edi + ebp*4] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(EDI + EBP*4))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 12d6aef6 salc  */
  x86_unimpl("salc @ 0x12d6aef6");
  /* 12d6aef7 adc ch, byte ptr [edi + ebp*4] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EDI + EBP*4))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12d6aefa salc  */
  x86_unimpl("salc @ 0x12d6aefa");
  /* 12d6aefb adc dh, byte ptr [edi + ebp*4] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(EDI + EBP*4))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12d6aefe salc  */
  x86_unimpl("salc @ 0x12d6aefe");
  /* 12d6af04 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12d6af08 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12d6af0c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12d6af10 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12d6af14 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12d6af18 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12d6af1c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12d6af20 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12d6af24 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12d6af28 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12d6af2c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12d6af30 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12d6af34 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12d6af38 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12d6af3c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12d6af43 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6af45 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12d6af47:;
  /* 12d6af47 jmp dword ptr [edx*4 + 0x12d6af50] */
  switch (EDX) {
    case 0: goto L_12d6af60;
    case 1: goto L_12d6af68;
    case 2: goto L_12d6af78;
    case 3: goto L_12d6af8c;
    default: x86_unimpl("switch@0x12d6af47 out of table"); return;
  }
  /* 12d6af4e mov edi, edi */
  EDI = (EDI);
L_12d6af60:;
  /* 12d6af60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6af63 pop esi */
  ESI = (pop32());
  /* 12d6af64 pop edi */
  EDI = (pop32());
  /* 12d6af65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d6af66 ret  */
  ESPCHK(0x12d6ac70u, _esp0);
  ESP += 4; return;
  /* 12d6af67 nop  */
  /* nop */
L_12d6af68:;
  /* 12d6af68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d6af6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d6af6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6af71 pop esi */
  ESI = (pop32());
  /* 12d6af72 pop edi */
  EDI = (pop32());
  /* 12d6af73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d6af74 ret  */
  ESPCHK(0x12d6ac70u, _esp0);
  ESP += 4; return;
  /* 12d6af75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d6af78:;
  /* 12d6af78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d6af7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d6af7e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d6af81 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d6af84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6af87 pop esi */
  ESI = (pop32());
  /* 12d6af88 pop edi */
  EDI = (pop32());
  /* 12d6af89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d6af8a ret  */
  ESPCHK(0x12d6ac70u, _esp0);
  ESP += 4; return;
  /* 12d6af8b nop  */
  /* nop */
L_12d6af8c:;
  /* 12d6af8c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d6af8f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d6af92 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d6af95 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d6af98 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d6af9b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d6af9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6afa1 pop esi */
  ESI = (pop32());
  /* 12d6afa2 pop edi */
  EDI = (pop32());
  /* 12d6afa3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d6afa4 ret  */
  ESPCHK(0x12d6ac70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afb0 @ 0x12d6afb0 (421 bytes, 148 insns) */
void f_12d6afb0(void) {
  FTRACE(0x12d6afb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6afb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6afb1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6afb3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d6afb5 push 0x12d79f40 */
  push32((uint32_t)(0x12d79f40u));
  /* 12d6afba push 0x12d6be88 */
  push32((uint32_t)(0x12d6be88u));
  /* 12d6afbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12d6afc5 push eax */
  push32((uint32_t)(EAX));
  /* 12d6afc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12d6afcd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6afd0 push ebx */
  push32((uint32_t)(EBX));
  /* 12d6afd1 push esi */
  push32((uint32_t)(ESI));
  /* 12d6afd2 push edi */
  push32((uint32_t)(EDI));
  /* 12d6afd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d6afd6 cmp dword ptr [0x12d7e674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6afdd jne 0x12d6b02e */
  if (!C.zf) goto L_12d6b02e;
  /* 12d6afdf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12d6afe2 push eax */
  push32((uint32_t)(EAX));
  /* 12d6afe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6afe5 push 0x12d79f38 */
  push32((uint32_t)(0x12d79f38u));
  /* 12d6afea push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6afec call dword ptr [0x12d80350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80350))), 0x12d6aff2u);
  /* 12d6aff2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6aff4 je 0x12d6b002 */
  if (C.zf) goto L_12d6b002;
  /* 12d6aff6 mov dword ptr [0x12d7e674], 1 */
  w32((uint32_t)(0x12d7e674), (0x1u));
  /* 12d6b000 jmp 0x12d6b02e */
  goto L_12d6b02e;
L_12d6b002:;
  /* 12d6b002 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12d6b005 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b006 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6b008 push 0x12d79f34 */
  push32((uint32_t)(0x12d79f34u));
  /* 12d6b00d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6b00f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b011 call dword ptr [0x12d8034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8034c))), 0x12d6b017u);
  /* 12d6b017 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6b019 je 0x12d6b027 */
  if (C.zf) goto L_12d6b027;
  /* 12d6b01b mov dword ptr [0x12d7e674], 2 */
  w32((uint32_t)(0x12d7e674), (0x2u));
  /* 12d6b025 jmp 0x12d6b02e */
  goto L_12d6b02e;
L_12d6b027:;
  /* 12d6b027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b029 jmp 0x12d6b158 */
  goto L_12d6b158;
L_12d6b02e:;
  /* 12d6b02e cmp dword ptr [0x12d7e674], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e674))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b035 jne 0x12d6b065 */
  if (!C.zf) goto L_12d6b065;
  /* 12d6b037 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b03b jne 0x12d6b046 */
  if (!C.zf) goto L_12d6b046;
  /* 12d6b03d mov edx, dword ptr [0x12d7e680] */
  EDX = (r32((uint32_t)(0x12d7e680)));
  /* 12d6b043 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12d6b046:;
  /* 12d6b046 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d6b049 push eax */
  push32((uint32_t)(EAX));
  /* 12d6b04a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6b04d push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b04e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6b051 push edx */
  push32((uint32_t)(EDX));
  /* 12d6b052 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b055 push eax */
  push32((uint32_t)(EAX));
  /* 12d6b056 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d6b059 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b05a call dword ptr [0x12d8034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8034c))), 0x12d6b060u);
  /* 12d6b060 jmp 0x12d6b158 */
  goto L_12d6b158;
L_12d6b065:;
  /* 12d6b065 cmp dword ptr [0x12d7e674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b06c jne 0x12d6b156 */
  if (!C.zf) goto L_12d6b156;
  /* 12d6b072 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b076 jne 0x12d6b081 */
  if (!C.zf) goto L_12d6b081;
  /* 12d6b078 mov edx, dword ptr [0x12d7e690] */
  EDX = (r32((uint32_t)(0x12d7e690)));
  /* 12d6b07e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_12d6b081:;
  /* 12d6b081 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b083 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b085 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6b088 push eax */
  push32((uint32_t)(EAX));
  /* 12d6b089 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6b08c push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b08d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d6b090 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d6b092 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6b094 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6b097 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b09a push edx */
  push32((uint32_t)(EDX));
  /* 12d6b09b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d6b09e push eax */
  push32((uint32_t)(EAX));
  /* 12d6b09f call dword ptr [0x12d80348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80348))), 0x12d6b0a5u);
  /* 12d6b0a5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d6b0a8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b0ac jne 0x12d6b0b5 */
  if (!C.zf) goto L_12d6b0b5;
  /* 12d6b0ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b0b0 jmp 0x12d6b158 */
  goto L_12d6b158;
L_12d6b0b5:;
  /* 12d6b0b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d6b0bc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6b0bf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d6b0c1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b0c4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d6b0c6 call 0x12d65f20 */
  push32(0x12d6b0cbu); f_12d65f20();
  /* 12d6b0cb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 12d6b0ce mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d6b0d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d6b0d4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d6b0d7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6b0da shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12d6b0dc push edx */
  push32((uint32_t)(EDX));
  /* 12d6b0dd push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b0df mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d6b0e2 push eax */
  push32((uint32_t)(EAX));
  /* 12d6b0e3 call 0x12d66af0 */
  push32(0x12d6b0e8u); f_12d66af0();
  /* 12d6b0e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b0eb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d6b0f2 jmp 0x12d6b10b */
  goto L_12d6b10b;
  /* 12d6b0f4 mov eax, 1 */
  EAX = (0x1u);
  /* 12d6b0f9 ret  */
  ESPCHK(0x12d6afb0u, _esp0);
  ESP += 4; return;
  /* 12d6b0fa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6b0fd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d6b104 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d6b10b:;
  /* 12d6b10b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b10f jne 0x12d6b115 */
  if (!C.zf) goto L_12d6b115;
  /* 12d6b111 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b113 jmp 0x12d6b158 */
  goto L_12d6b158;
L_12d6b115:;
  /* 12d6b115 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6b118 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b119 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d6b11c push edx */
  push32((uint32_t)(EDX));
  /* 12d6b11d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6b120 push eax */
  push32((uint32_t)(EAX));
  /* 12d6b121 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6b124 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b125 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6b127 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d6b12a push edx */
  push32((uint32_t)(EDX));
  /* 12d6b12b call dword ptr [0x12d80348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80348))), 0x12d6b131u);
  /* 12d6b131 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d6b134 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b138 jne 0x12d6b13e */
  if (!C.zf) goto L_12d6b13e;
  /* 12d6b13a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b13c jmp 0x12d6b158 */
  goto L_12d6b158;
L_12d6b13e:;
  /* 12d6b13e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d6b141 push eax */
  push32((uint32_t)(EAX));
  /* 12d6b142 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d6b145 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b146 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d6b149 push edx */
  push32((uint32_t)(EDX));
  /* 12d6b14a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b14d push eax */
  push32((uint32_t)(EAX));
  /* 12d6b14e call dword ptr [0x12d80350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80350))), 0x12d6b154u);
  /* 12d6b154 jmp 0x12d6b158 */
  goto L_12d6b158;
L_12d6b156:;
  /* 12d6b156 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d6b158:;
  /* 12d6b158 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 12d6b15b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6b15e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12d6b165 pop edi */
  EDI = (pop32());
  /* 12d6b166 pop esi */
  ESI = (pop32());
  /* 12d6b167 pop ebx */
  EBX = (pop32());
  /* 12d6b168 mov esp, ebp */
  ESP = (EBP);
  /* 12d6b16a pop ebp */
  EBP = (pop32());
  /* 12d6b16b ret  */
  ESPCHK(0x12d6afb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b170 @ 0x12d6b170 (727 bytes, 263 insns) */
void f_12d6b170(void) {
  FTRACE(0x12d6b170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6b170 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6b171 mov ebp, esp */
  EBP = (ESP);
  /* 12d6b173 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d6b175 push 0x12d79f50 */
  push32((uint32_t)(0x12d79f50u));
  /* 12d6b17a push 0x12d6be88 */
  push32((uint32_t)(0x12d6be88u));
  /* 12d6b17f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12d6b185 push eax */
  push32((uint32_t)(EAX));
  /* 12d6b186 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12d6b18d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b190 push ebx */
  push32((uint32_t)(EBX));
  /* 12d6b191 push esi */
  push32((uint32_t)(ESI));
  /* 12d6b192 push edi */
  push32((uint32_t)(EDI));
  /* 12d6b193 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d6b196 cmp dword ptr [0x12d7e698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b19d jne 0x12d6b1f6 */
  if (!C.zf) goto L_12d6b1f6;
  /* 12d6b19f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b1a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b1a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6b1a5 push 0x12d79f38 */
  push32((uint32_t)(0x12d79f38u));
  /* 12d6b1aa push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d6b1af push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b1b1 call dword ptr [0x12d80358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80358))), 0x12d6b1b7u);
  /* 12d6b1b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6b1b9 je 0x12d6b1c7 */
  if (C.zf) goto L_12d6b1c7;
  /* 12d6b1bb mov dword ptr [0x12d7e698], 1 */
  w32((uint32_t)(0x12d7e698), (0x1u));
  /* 12d6b1c5 jmp 0x12d6b1f6 */
  goto L_12d6b1f6;
L_12d6b1c7:;
  /* 12d6b1c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b1c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b1cb push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6b1cd push 0x12d79f34 */
  push32((uint32_t)(0x12d79f34u));
  /* 12d6b1d2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d6b1d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b1d9 call dword ptr [0x12d80354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80354))), 0x12d6b1dfu);
  /* 12d6b1df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6b1e1 je 0x12d6b1ef */
  if (C.zf) goto L_12d6b1ef;
  /* 12d6b1e3 mov dword ptr [0x12d7e698], 2 */
  w32((uint32_t)(0x12d7e698), (0x2u));
  /* 12d6b1ed jmp 0x12d6b1f6 */
  goto L_12d6b1f6;
L_12d6b1ef:;
  /* 12d6b1ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b1f1 jmp 0x12d6b461 */
  goto L_12d6b461;
L_12d6b1f6:;
  /* 12d6b1f6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b1fa jle 0x12d6b20f */
  if ((C.zf||C.sf!=C.of)) goto L_12d6b20f;
  /* 12d6b1fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d6b1ff push eax */
  push32((uint32_t)(EAX));
  /* 12d6b200 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6b203 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b204 call 0x12d6b480 */
  push32(0x12d6b209u); f_12d6b480();
  /* 12d6b209 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b20c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12d6b20f:;
  /* 12d6b20f cmp dword ptr [0x12d7e698], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e698))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b216 jne 0x12d6b23b */
  if (!C.zf) goto L_12d6b23b;
  /* 12d6b218 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d6b21b push edx */
  push32((uint32_t)(EDX));
  /* 12d6b21c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d6b21f push eax */
  push32((uint32_t)(EAX));
  /* 12d6b220 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d6b223 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b224 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6b227 push edx */
  push32((uint32_t)(EDX));
  /* 12d6b228 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6b22b push eax */
  push32((uint32_t)(EAX));
  /* 12d6b22c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b22f push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b230 call dword ptr [0x12d80354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80354))), 0x12d6b236u);
  /* 12d6b236 jmp 0x12d6b461 */
  goto L_12d6b461;
L_12d6b23b:;
  /* 12d6b23b cmp dword ptr [0x12d7e698], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e698))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b242 jne 0x12d6b45f */
  if (!C.zf) goto L_12d6b45f;
  /* 12d6b248 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b24c jne 0x12d6b257 */
  if (!C.zf) goto L_12d6b257;
  /* 12d6b24e mov edx, dword ptr [0x12d7e690] */
  EDX = (r32((uint32_t)(0x12d7e690)));
  /* 12d6b254 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12d6b257:;
  /* 12d6b257 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b259 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b25b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d6b25e push eax */
  push32((uint32_t)(EAX));
  /* 12d6b25f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6b262 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b263 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12d6b266 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d6b268 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6b26a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6b26d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b270 push edx */
  push32((uint32_t)(EDX));
  /* 12d6b271 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d6b274 push eax */
  push32((uint32_t)(EAX));
  /* 12d6b275 call dword ptr [0x12d80348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80348))), 0x12d6b27bu);
  /* 12d6b27b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d6b27e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b282 jne 0x12d6b28b */
  if (!C.zf) goto L_12d6b28b;
  /* 12d6b284 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b286 jmp 0x12d6b461 */
  goto L_12d6b461;
L_12d6b28b:;
  /* 12d6b28b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d6b292 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d6b295 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d6b297 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b29a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d6b29c call 0x12d65f20 */
  push32(0x12d6b2a1u); f_12d65f20();
  /* 12d6b2a1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12d6b2a4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d6b2a7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d6b2aa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d6b2ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d6b2b4 jmp 0x12d6b2cd */
  goto L_12d6b2cd;
  /* 12d6b2b6 mov eax, 1 */
  EAX = (0x1u);
  /* 12d6b2bb ret  */
  ESPCHK(0x12d6b170u, _esp0);
  ESP += 4; return;
  /* 12d6b2bc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6b2bf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d6b2c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d6b2cd:;
  /* 12d6b2cd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b2d1 jne 0x12d6b2da */
  if (!C.zf) goto L_12d6b2da;
  /* 12d6b2d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b2d5 jmp 0x12d6b461 */
  goto L_12d6b461;
L_12d6b2da:;
  /* 12d6b2da mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d6b2dd push edx */
  push32((uint32_t)(EDX));
  /* 12d6b2de mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d6b2e1 push eax */
  push32((uint32_t)(EAX));
  /* 12d6b2e2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d6b2e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b2e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6b2e9 push edx */
  push32((uint32_t)(EDX));
  /* 12d6b2ea push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6b2ec mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d6b2ef push eax */
  push32((uint32_t)(EAX));
  /* 12d6b2f0 call dword ptr [0x12d80348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80348))), 0x12d6b2f6u);
  /* 12d6b2f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6b2f8 jne 0x12d6b301 */
  if (!C.zf) goto L_12d6b301;
  /* 12d6b2fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b2fc jmp 0x12d6b461 */
  goto L_12d6b461;
L_12d6b301:;
  /* 12d6b301 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b303 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b305 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d6b308 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b309 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d6b30c push edx */
  push32((uint32_t)(EDX));
  /* 12d6b30d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6b310 push eax */
  push32((uint32_t)(EAX));
  /* 12d6b311 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b314 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b315 call dword ptr [0x12d80358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80358))), 0x12d6b31bu);
  /* 12d6b31b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d6b31e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b322 jne 0x12d6b32b */
  if (!C.zf) goto L_12d6b32b;
  /* 12d6b324 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b326 jmp 0x12d6b461 */
  goto L_12d6b461;
L_12d6b32b:;
  /* 12d6b32b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6b32e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6b334 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6b336 je 0x12d6b37b */
  if (C.zf) goto L_12d6b37b;
  /* 12d6b338 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b33c je 0x12d6b376 */
  if (C.zf) goto L_12d6b376;
  /* 12d6b33e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d6b341 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b344 jle 0x12d6b34d */
  if ((C.zf||C.sf!=C.of)) goto L_12d6b34d;
  /* 12d6b346 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b348 jmp 0x12d6b461 */
  goto L_12d6b461;
L_12d6b34d:;
  /* 12d6b34d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d6b350 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b351 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d6b354 push edx */
  push32((uint32_t)(EDX));
  /* 12d6b355 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d6b358 push eax */
  push32((uint32_t)(EAX));
  /* 12d6b359 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d6b35c push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b35d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6b360 push edx */
  push32((uint32_t)(EDX));
  /* 12d6b361 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b364 push eax */
  push32((uint32_t)(EAX));
  /* 12d6b365 call dword ptr [0x12d80358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80358))), 0x12d6b36bu);
  /* 12d6b36b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6b36d jne 0x12d6b376 */
  if (!C.zf) goto L_12d6b376;
  /* 12d6b36f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b371 jmp 0x12d6b461 */
  goto L_12d6b461;
L_12d6b376:;
  /* 12d6b376 jmp 0x12d6b45a */
  goto L_12d6b45a;
L_12d6b37b:;
  /* 12d6b37b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d6b37e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12d6b381 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d6b388 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d6b38b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d6b38d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b390 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d6b392 call 0x12d65f20 */
  push32(0x12d6b397u); f_12d65f20();
  /* 12d6b397 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12d6b39a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d6b39d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d6b3a0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d6b3a3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d6b3aa jmp 0x12d6b3c3 */
  goto L_12d6b3c3;
  /* 12d6b3ac mov eax, 1 */
  EAX = (0x1u);
  /* 12d6b3b1 ret  */
  ESPCHK(0x12d6b170u, _esp0);
  ESP += 4; return;
  /* 12d6b3b2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6b3b5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d6b3bc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d6b3c3:;
  /* 12d6b3c3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b3c7 jne 0x12d6b3d0 */
  if (!C.zf) goto L_12d6b3d0;
  /* 12d6b3c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b3cb jmp 0x12d6b461 */
  goto L_12d6b461;
L_12d6b3d0:;
  /* 12d6b3d0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d6b3d3 push eax */
  push32((uint32_t)(EAX));
  /* 12d6b3d4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6b3d7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b3d8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d6b3db push edx */
  push32((uint32_t)(EDX));
  /* 12d6b3dc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d6b3df push eax */
  push32((uint32_t)(EAX));
  /* 12d6b3e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6b3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b3e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b3e7 push edx */
  push32((uint32_t)(EDX));
  /* 12d6b3e8 call dword ptr [0x12d80358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80358))), 0x12d6b3eeu);
  /* 12d6b3ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6b3f0 jne 0x12d6b3f6 */
  if (!C.zf) goto L_12d6b3f6;
  /* 12d6b3f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b3f4 jmp 0x12d6b461 */
  goto L_12d6b461;
L_12d6b3f6:;
  /* 12d6b3f6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b3fa jne 0x12d6b42a */
  if (!C.zf) goto L_12d6b42a;
  /* 12d6b3fc push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b3fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b400 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b402 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b404 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d6b407 push eax */
  push32((uint32_t)(EAX));
  /* 12d6b408 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6b40b push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b40c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d6b411 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d6b414 push edx */
  push32((uint32_t)(EDX));
  /* 12d6b415 call dword ptr [0x12d802fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802fc))), 0x12d6b41bu);
  /* 12d6b41b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d6b41e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b422 jne 0x12d6b428 */
  if (!C.zf) goto L_12d6b428;
  /* 12d6b424 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b426 jmp 0x12d6b461 */
  goto L_12d6b461;
L_12d6b428:;
  /* 12d6b428 jmp 0x12d6b45a */
  goto L_12d6b45a;
L_12d6b42a:;
  /* 12d6b42a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b42c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b42e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d6b431 push eax */
  push32((uint32_t)(EAX));
  /* 12d6b432 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d6b435 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b436 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d6b439 push edx */
  push32((uint32_t)(EDX));
  /* 12d6b43a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6b43d push eax */
  push32((uint32_t)(EAX));
  /* 12d6b43e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d6b443 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d6b446 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b447 call dword ptr [0x12d802fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802fc))), 0x12d6b44du);
  /* 12d6b44d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d6b450 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b454 jne 0x12d6b45a */
  if (!C.zf) goto L_12d6b45a;
  /* 12d6b456 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b458 jmp 0x12d6b461 */
  goto L_12d6b461;
L_12d6b45a:;
  /* 12d6b45a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d6b45d jmp 0x12d6b461 */
  goto L_12d6b461;
L_12d6b45f:;
  /* 12d6b45f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d6b461:;
  /* 12d6b461 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12d6b464 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6b467 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12d6b46e pop edi */
  EDI = (pop32());
  /* 12d6b46f pop esi */
  ESI = (pop32());
  /* 12d6b470 pop ebx */
  EBX = (pop32());
  /* 12d6b471 mov esp, ebp */
  ESP = (EBP);
  /* 12d6b473 pop ebp */
  EBP = (pop32());
  /* 12d6b474 ret  */
  ESPCHK(0x12d6b170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b480 @ 0x12d6b480 (80 bytes, 32 insns) */
void f_12d6b480(void) {
  FTRACE(0x12d6b480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6b480 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6b481 mov ebp, esp */
  EBP = (ESP);
  /* 12d6b483 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6b486 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6b489 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d6b48c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b48f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d6b492:;
  /* 12d6b492 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6b495 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6b498 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6b49b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d6b49e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6b4a0 je 0x12d6b4b7 */
  if (C.zf) goto L_12d6b4b7;
  /* 12d6b4a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b4a5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d6b4a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6b4aa je 0x12d6b4b7 */
  if (C.zf) goto L_12d6b4b7;
  /* 12d6b4ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b4af add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b4b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6b4b5 jmp 0x12d6b492 */
  goto L_12d6b492;
L_12d6b4b7:;
  /* 12d6b4b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b4ba movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d6b4bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6b4bf jne 0x12d6b4c9 */
  if (!C.zf) goto L_12d6b4c9;
  /* 12d6b4c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b4c4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6b4c7 jmp 0x12d6b4cc */
  goto L_12d6b4cc;
L_12d6b4c9:;
  /* 12d6b4c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12d6b4cc:;
  /* 12d6b4cc mov esp, ebp */
  ESP = (EBP);
  /* 12d6b4ce pop ebp */
  EBP = (pop32());
  /* 12d6b4cf ret  */
  ESPCHK(0x12d6b480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4d0 @ 0x12d6b4d0 (130 bytes, 43 insns) */
void f_12d6b4d0(void) {
  FTRACE(0x12d6b4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6b4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6b4d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6b4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b4d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b4d7 cmp eax, dword ptr [0x12d7ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b4dd jae 0x12d6b501 */
  if (!C.cf) goto L_12d6b501;
  /* 12d6b4df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b4e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d6b4e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b4e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6b4eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6b4ee mov eax, dword ptr [ecx*4 + 0x12d7fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d7fe60)));
  /* 12d6b4f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d6b4fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6b4fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6b4ff jne 0x12d6b51c */
  if (!C.zf) goto L_12d6b51c;
L_12d6b501:;
  /* 12d6b501 call 0x12d6ac50 */
  push32(0x12d6b506u); f_12d6ac50();
  /* 12d6b506 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d6b50c call 0x12d6ac60 */
  push32(0x12d6b511u); f_12d6ac60();
  /* 12d6b511 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d6b517 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b51a jmp 0x12d6b54e */
  goto L_12d6b54e;
L_12d6b51c:;
  /* 12d6b51c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b51f push edx */
  push32((uint32_t)(EDX));
  /* 12d6b520 call 0x12d6c470 */
  push32(0x12d6b525u); f_12d6c470();
  /* 12d6b525 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b528 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6b52b push eax */
  push32((uint32_t)(EAX));
  /* 12d6b52c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6b52f push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b530 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b533 push edx */
  push32((uint32_t)(EDX));
  /* 12d6b534 call 0x12d6b560 */
  push32(0x12d6b539u); f_12d6b560();
  /* 12d6b539 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b53c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6b53f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b542 push eax */
  push32((uint32_t)(EAX));
  /* 12d6b543 call 0x12d6c500 */
  push32(0x12d6b548u); f_12d6c500();
  /* 12d6b548 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b54b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d6b54e:;
  /* 12d6b54e mov esp, ebp */
  ESP = (EBP);
  /* 12d6b550 pop ebp */
  EBP = (pop32());
  /* 12d6b551 ret  */
  ESPCHK(0x12d6b4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b560 @ 0x12d6b560 (178 bytes, 56 insns) */
void f_12d6b560(void) {
  FTRACE(0x12d6b560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6b560 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6b561 mov ebp, esp */
  EBP = (ESP);
  /* 12d6b563 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6b566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b569 push eax */
  push32((uint32_t)(EAX));
  /* 12d6b56a call 0x12d6c2f0 */
  push32(0x12d6b56fu); f_12d6c2f0();
  /* 12d6b56f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b572 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d6b575 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b579 jne 0x12d6b58e */
  if (!C.zf) goto L_12d6b58e;
  /* 12d6b57b call 0x12d6ac50 */
  push32(0x12d6b580u); f_12d6ac50();
  /* 12d6b580 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d6b586 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b589 jmp 0x12d6b60e */
  goto L_12d6b60e;
L_12d6b58e:;
  /* 12d6b58e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6b591 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b592 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b594 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6b597 push edx */
  push32((uint32_t)(EDX));
  /* 12d6b598 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6b59b push eax */
  push32((uint32_t)(EAX));
  /* 12d6b59c call dword ptr [0x12d802ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802ec))), 0x12d6b5a2u);
  /* 12d6b5a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d6b5a5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b5a9 jne 0x12d6b5b6 */
  if (!C.zf) goto L_12d6b5b6;
  /* 12d6b5ab call dword ptr [0x12d802d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802d0))), 0x12d6b5b1u);
  /* 12d6b5b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6b5b4 jmp 0x12d6b5bd */
  goto L_12d6b5bd;
L_12d6b5b6:;
  /* 12d6b5b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d6b5bd:;
  /* 12d6b5bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b5c1 je 0x12d6b5d4 */
  if (C.zf) goto L_12d6b5d4;
  /* 12d6b5c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b5c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b5c7 call 0x12d6abb0 */
  push32(0x12d6b5ccu); f_12d6abb0();
  /* 12d6b5cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b5cf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b5d2 jmp 0x12d6b60e */
  goto L_12d6b60e;
L_12d6b5d4:;
  /* 12d6b5d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b5d7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12d6b5da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b5dd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b5e0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6b5e3 mov ecx, dword ptr [edx*4 + 0x12d7fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12d7fe60)));
  /* 12d6b5ea mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 12d6b5ee and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12d6b5f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b5f4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d6b5f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b5fa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d6b5fd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6b600 mov eax, dword ptr [eax*4 + 0x12d7fe60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12d7fe60)));
  /* 12d6b607 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 12d6b60b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d6b60e:;
  /* 12d6b60e mov esp, ebp */
  ESP = (EBP);
  /* 12d6b610 pop ebp */
  EBP = (pop32());
  /* 12d6b611 ret  */
  ESPCHK(0x12d6b560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b620 @ 0x12d6b620 (130 bytes, 43 insns) */
void f_12d6b620(void) {
  FTRACE(0x12d6b620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6b620 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6b621 mov ebp, esp */
  EBP = (ESP);
  /* 12d6b623 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b627 cmp eax, dword ptr [0x12d7ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b62d jae 0x12d6b651 */
  if (!C.cf) goto L_12d6b651;
  /* 12d6b62f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b632 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d6b635 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b638 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6b63b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6b63e mov eax, dword ptr [ecx*4 + 0x12d7fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d7fe60)));
  /* 12d6b645 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d6b64a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6b64d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6b64f jne 0x12d6b66c */
  if (!C.zf) goto L_12d6b66c;
L_12d6b651:;
  /* 12d6b651 call 0x12d6ac50 */
  push32(0x12d6b656u); f_12d6ac50();
  /* 12d6b656 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d6b65c call 0x12d6ac60 */
  push32(0x12d6b661u); f_12d6ac60();
  /* 12d6b661 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d6b667 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b66a jmp 0x12d6b69e */
  goto L_12d6b69e;
L_12d6b66c:;
  /* 12d6b66c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b66f push edx */
  push32((uint32_t)(EDX));
  /* 12d6b670 call 0x12d6c470 */
  push32(0x12d6b675u); f_12d6c470();
  /* 12d6b675 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b678 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6b67b push eax */
  push32((uint32_t)(EAX));
  /* 12d6b67c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6b67f push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b680 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b683 push edx */
  push32((uint32_t)(EDX));
  /* 12d6b684 call 0x12d6b6b0 */
  push32(0x12d6b689u); f_12d6b6b0();
  /* 12d6b689 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b68c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6b68f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b692 push eax */
  push32((uint32_t)(EAX));
  /* 12d6b693 call 0x12d6c500 */
  push32(0x12d6b698u); f_12d6c500();
  /* 12d6b698 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b69b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d6b69e:;
  /* 12d6b69e mov esp, ebp */
  ESP = (EBP);
  /* 12d6b6a0 pop ebp */
  EBP = (pop32());
  /* 12d6b6a1 ret  */
  ESPCHK(0x12d6b620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6b0 @ 0x12d6b6b0 (627 bytes, 182 insns) */
void f_12d6b6b0(void) {
  FTRACE(0x12d6b6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6b6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6b6b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6b6b3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6b6b9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d6b6c0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6b6c3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12d6b6c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b6cd jne 0x12d6b6d6 */
  if (!C.zf) goto L_12d6b6d6;
  /* 12d6b6cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b6d1 jmp 0x12d6b91f */
  goto L_12d6b91f;
L_12d6b6d6:;
  /* 12d6b6d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b6d9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d6b6dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b6df and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6b6e2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6b6e5 mov eax, dword ptr [ecx*4 + 0x12d7fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d7fe60)));
  /* 12d6b6ec movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d6b6f1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6b6f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6b6f6 je 0x12d6b708 */
  if (C.zf) goto L_12d6b708;
  /* 12d6b6f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6b6fa push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b6fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b6ff push edx */
  push32((uint32_t)(EDX));
  /* 12d6b700 call 0x12d6b560 */
  push32(0x12d6b705u); f_12d6b560();
  /* 12d6b705 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6b708:;
  /* 12d6b708 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b70b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d6b70e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b711 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d6b714 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6b717 mov edx, dword ptr [eax*4 + 0x12d7fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d7fe60)));
  /* 12d6b71e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12d6b723 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6b72a je 0x12d6b83c */
  if (C.zf) goto L_12d6b83c;
  /* 12d6b730 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6b733 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d6b736 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12d6b73d:;
  /* 12d6b73d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b740 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6b743 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b746 jae 0x12d6b83a */
  if (!C.cf) goto L_12d6b83a;
  /* 12d6b74c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12d6b752 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d6b755:;
  /* 12d6b755 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6b758 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12d6b75e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6b760 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b766 jge 0x12d6b7c7 */
  if ((C.sf==C.of)) goto L_12d6b7c7;
  /* 12d6b768 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b76b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6b76e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b771 jae 0x12d6b7c7 */
  if (!C.cf) goto L_12d6b7c7;
  /* 12d6b773 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b776 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d6b778 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 12d6b77e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b781 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b784 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6b787 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 12d6b78e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b791 jne 0x12d6b7b1 */
  if (!C.zf) goto L_12d6b7b1;
  /* 12d6b793 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12d6b799 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b79c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12d6b7a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6b7a5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12d6b7a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6b7ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b7ae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d6b7b1:;
  /* 12d6b7b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6b7b4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 12d6b7ba mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12d6b7bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6b7bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b7c2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6b7c5 jmp 0x12d6b755 */
  goto L_12d6b755;
L_12d6b7c7:;
  /* 12d6b7c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b7c9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12d6b7cf push edx */
  push32((uint32_t)(EDX));
  /* 12d6b7d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6b7d3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12d6b7d9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6b7db push eax */
  push32((uint32_t)(EAX));
  /* 12d6b7dc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12d6b7e2 push edx */
  push32((uint32_t)(EDX));
  /* 12d6b7e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b7e6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d6b7e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b7ec and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d6b7ef imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6b7f2 mov edx, dword ptr [eax*4 + 0x12d7fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d7fe60)));
  /* 12d6b7f9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 12d6b7fc push eax */
  push32((uint32_t)(EAX));
  /* 12d6b7fd call dword ptr [0x12d80290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80290))), 0x12d6b803u);
  /* 12d6b803 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6b805 je 0x12d6b82a */
  if (C.zf) goto L_12d6b82a;
  /* 12d6b807 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6b80a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b810 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d6b813 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6b816 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12d6b81c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6b81e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b824 jge 0x12d6b828 */
  if ((C.sf==C.of)) goto L_12d6b828;
  /* 12d6b826 jmp 0x12d6b83a */
  goto L_12d6b83a;
L_12d6b828:;
  /* 12d6b828 jmp 0x12d6b835 */
  goto L_12d6b835;
L_12d6b82a:;
  /* 12d6b82a call dword ptr [0x12d802d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802d0))), 0x12d6b830u);
  /* 12d6b830 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d6b833 jmp 0x12d6b83a */
  goto L_12d6b83a;
L_12d6b835:;
  /* 12d6b835 jmp 0x12d6b73d */
  goto L_12d6b73d;
L_12d6b83a:;
  /* 12d6b83a jmp 0x12d6b88c */
  goto L_12d6b88c;
L_12d6b83c:;
  /* 12d6b83c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b83e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12d6b844 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b845 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6b848 push edx */
  push32((uint32_t)(EDX));
  /* 12d6b849 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6b84c push eax */
  push32((uint32_t)(EAX));
  /* 12d6b84d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b850 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d6b853 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b856 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6b859 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6b85c mov eax, dword ptr [ecx*4 + 0x12d7fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d7fe60)));
  /* 12d6b863 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12d6b866 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b867 call dword ptr [0x12d80290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80290))), 0x12d6b86du);
  /* 12d6b86d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6b86f je 0x12d6b883 */
  if (C.zf) goto L_12d6b883;
  /* 12d6b871 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d6b878 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 12d6b87e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d6b881 jmp 0x12d6b88c */
  goto L_12d6b88c;
L_12d6b883:;
  /* 12d6b883 call dword ptr [0x12d802d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802d0))), 0x12d6b889u);
  /* 12d6b889 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d6b88c:;
  /* 12d6b88c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b890 jne 0x12d6b916 */
  if (!C.zf) goto L_12d6b916;
  /* 12d6b896 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b89a je 0x12d6b8ca */
  if (C.zf) goto L_12d6b8ca;
  /* 12d6b89c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b8a0 jne 0x12d6b8b9 */
  if (!C.zf) goto L_12d6b8b9;
  /* 12d6b8a2 call 0x12d6ac50 */
  push32(0x12d6b8a7u); f_12d6ac50();
  /* 12d6b8a7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d6b8ad call 0x12d6ac60 */
  push32(0x12d6b8b2u); f_12d6ac60();
  /* 12d6b8b2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6b8b5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d6b8b7 jmp 0x12d6b8c5 */
  goto L_12d6b8c5;
L_12d6b8b9:;
  /* 12d6b8b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6b8bc push edx */
  push32((uint32_t)(EDX));
  /* 12d6b8bd call 0x12d6abb0 */
  push32(0x12d6b8c2u); f_12d6abb0();
  /* 12d6b8c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6b8c5:;
  /* 12d6b8c5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b8c8 jmp 0x12d6b91f */
  goto L_12d6b91f;
L_12d6b8ca:;
  /* 12d6b8ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b8cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d6b8d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b8d3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d6b8d6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6b8d9 mov edx, dword ptr [eax*4 + 0x12d7fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d7fe60)));
  /* 12d6b8e0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12d6b8e5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b8e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6b8ea je 0x12d6b8fb */
  if (C.zf) goto L_12d6b8fb;
  /* 12d6b8ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6b8ef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d6b8f2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b8f5 jne 0x12d6b8fb */
  if (!C.zf) goto L_12d6b8fb;
  /* 12d6b8f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b8f9 jmp 0x12d6b91f */
  goto L_12d6b91f;
L_12d6b8fb:;
  /* 12d6b8fb call 0x12d6ac50 */
  push32(0x12d6b900u); f_12d6ac50();
  /* 12d6b900 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12d6b906 call 0x12d6ac60 */
  push32(0x12d6b90bu); f_12d6ac60();
  /* 12d6b90b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d6b911 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b914 jmp 0x12d6b91f */
  goto L_12d6b91f;
L_12d6b916:;
  /* 12d6b916 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6b919 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12d6b91f:;
  /* 12d6b91f mov esp, ebp */
  ESP = (EBP);
  /* 12d6b921 pop ebp */
  EBP = (pop32());
  /* 12d6b922 ret  */
  ESPCHK(0x12d6b6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b930 @ 0x12d6b930 (199 bytes, 68 insns) */
void f_12d6b930(void) {
  FTRACE(0x12d6b930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6b930 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6b931 mov ebp, esp */
  EBP = (ESP);
  /* 12d6b933 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6b934 push ebx */
  push32((uint32_t)(EBX));
  /* 12d6b935 push esi */
  push32((uint32_t)(ESI));
  /* 12d6b936 push edi */
  push32((uint32_t)(EDI));
L_12d6b937:;
  /* 12d6b937 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b93b jne 0x12d6b95b */
  if (!C.zf) goto L_12d6b95b;
  /* 12d6b93d push 0x12d79e98 */
  push32((uint32_t)(0x12d79e98u));
  /* 12d6b942 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6b944 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12d6b946 push 0x12d79f68 */
  push32((uint32_t)(0x12d79f68u));
  /* 12d6b94b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6b94d call 0x12d61e40 */
  push32(0x12d6b952u); f_12d61e40();
  /* 12d6b952 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b955 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b958 jne 0x12d6b95b */
  if (!C.zf) goto L_12d6b95b;
  /* 12d6b95a int3  */
  x86_unimpl("int3 @ 0x12d6b95a");
L_12d6b95b:;
  /* 12d6b95b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6b95d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6b95f jne 0x12d6b937 */
  if (!C.zf) goto L_12d6b937;
  /* 12d6b961 mov ecx, dword ptr [0x12d7e69c] */
  ECX = (r32((uint32_t)(0x12d7e69c)));
  /* 12d6b967 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b96a mov dword ptr [0x12d7e69c], ecx */
  w32((uint32_t)(0x12d7e69c), (ECX));
  /* 12d6b970 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6b973 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d6b976 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12d6b978 push 0x12d79f68 */
  push32((uint32_t)(0x12d79f68u));
  /* 12d6b97d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6b97f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12d6b984 call 0x12d62d80 */
  push32(0x12d6b989u); f_12d62d80();
  /* 12d6b989 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b98c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b98f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12d6b992 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b995 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6b999 je 0x12d6b9b6 */
  if (C.zf) goto L_12d6b9b6;
  /* 12d6b99b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b99e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d6b9a1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6b9a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b9a7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12d6b9aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b9ad mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12d6b9b4 jmp 0x12d6b9db */
  goto L_12d6b9db;
L_12d6b9b6:;
  /* 12d6b9b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b9b9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d6b9bc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6b9bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b9c2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d6b9c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b9c8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6b9cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b9ce mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d6b9d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b9d4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_12d6b9db:;
  /* 12d6b9db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b9de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b9e1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d6b9e4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d6b9e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6b9e9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12d6b9f0 pop edi */
  EDI = (pop32());
  /* 12d6b9f1 pop esi */
  ESI = (pop32());
  /* 12d6b9f2 pop ebx */
  EBX = (pop32());
  /* 12d6b9f3 mov esp, ebp */
  ESP = (EBP);
  /* 12d6b9f5 pop ebp */
  EBP = (pop32());
  /* 12d6b9f6 ret  */
  ESPCHK(0x12d6b930u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12d6ba00 (50 bytes, 17 insns) */
void f_12d6ba00(void) {
  FTRACE(0x12d6ba00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6ba00 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6ba01 mov ebp, esp */
  EBP = (ESP);
  /* 12d6ba03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ba06 cmp eax, dword ptr [0x12d7ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ba0c jb 0x12d6ba12 */
  if (C.cf) goto L_12d6ba12;
  /* 12d6ba0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6ba10 jmp 0x12d6ba30 */
  goto L_12d6ba30;
L_12d6ba12:;
  /* 12d6ba12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ba15 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d6ba18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ba1b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6ba1e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6ba21 mov eax, dword ptr [ecx*4 + 0x12d7fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d7fe60)));
  /* 12d6ba28 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d6ba2d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12d6ba30:;
  /* 12d6ba30 pop ebp */
  EBP = (pop32());
  /* 12d6ba31 ret  */
  ESPCHK(0x12d6ba00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba40 @ 0x12d6ba40 (300 bytes, 80 insns) */
void f_12d6ba40(void) {
  FTRACE(0x12d6ba40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6ba40 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6ba41 mov ebp, esp */
  EBP = (ESP);
  /* 12d6ba43 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6ba44 cmp dword ptr [0x12d7fb60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7fb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ba4b jne 0x12d6ba59 */
  if (!C.zf) goto L_12d6ba59;
  /* 12d6ba4d mov dword ptr [0x12d7fb60], 0x200 */
  w32((uint32_t)(0x12d7fb60), (0x200u));
  /* 12d6ba57 jmp 0x12d6ba6c */
  goto L_12d6ba6c;
L_12d6ba59:;
  /* 12d6ba59 cmp dword ptr [0x12d7fb60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12d7fb60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ba60 jge 0x12d6ba6c */
  if ((C.sf==C.of)) goto L_12d6ba6c;
  /* 12d6ba62 mov dword ptr [0x12d7fb60], 0x14 */
  w32((uint32_t)(0x12d7fb60), (0x14u));
L_12d6ba6c:;
  /* 12d6ba6c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12d6ba71 push 0x12d79f74 */
  push32((uint32_t)(0x12d79f74u));
  /* 12d6ba76 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6ba78 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d6ba7a mov eax, dword ptr [0x12d7fb60] */
  EAX = (r32((uint32_t)(0x12d7fb60)));
  /* 12d6ba7f push eax */
  push32((uint32_t)(EAX));
  /* 12d6ba80 call 0x12d63190 */
  push32(0x12d6ba85u); f_12d63190();
  /* 12d6ba85 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ba88 mov dword ptr [0x12d7e810], eax */
  w32((uint32_t)(0x12d7e810), (EAX));
  /* 12d6ba8d cmp dword ptr [0x12d7e810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ba94 jne 0x12d6bad5 */
  if (!C.zf) goto L_12d6bad5;
  /* 12d6ba96 mov dword ptr [0x12d7fb60], 0x14 */
  w32((uint32_t)(0x12d7fb60), (0x14u));
  /* 12d6baa0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12d6baa5 push 0x12d79f74 */
  push32((uint32_t)(0x12d79f74u));
  /* 12d6baaa push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6baac push 4 */
  push32((uint32_t)(0x4u));
  /* 12d6baae mov ecx, dword ptr [0x12d7fb60] */
  ECX = (r32((uint32_t)(0x12d7fb60)));
  /* 12d6bab4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6bab5 call 0x12d63190 */
  push32(0x12d6babau); f_12d63190();
  /* 12d6baba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6babd mov dword ptr [0x12d7e810], eax */
  w32((uint32_t)(0x12d7e810), (EAX));
  /* 12d6bac2 cmp dword ptr [0x12d7e810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bac9 jne 0x12d6bad5 */
  if (!C.zf) goto L_12d6bad5;
  /* 12d6bacb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12d6bacd call 0x12d61cf0 */
  push32(0x12d6bad2u); f_12d61cf0();
  /* 12d6bad2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6bad5:;
  /* 12d6bad5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d6badc jmp 0x12d6bae7 */
  goto L_12d6bae7;
L_12d6bade:;
  /* 12d6bade mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6bae1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bae4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d6bae7:;
  /* 12d6bae7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6baeb jge 0x12d6bb06 */
  if ((C.sf==C.of)) goto L_12d6bb06;
  /* 12d6baed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6baf0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d6baf3 add eax, 0x12d7d140 */
  { uint32_t _a=(EAX),_b=(0x12d7d140u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6baf8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6bafb mov edx, dword ptr [0x12d7e810] */
  EDX = (r32((uint32_t)(0x12d7e810)));
  /* 12d6bb01 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12d6bb04 jmp 0x12d6bade */
  goto L_12d6bade;
L_12d6bb06:;
  /* 12d6bb06 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d6bb0d jmp 0x12d6bb18 */
  goto L_12d6bb18;
L_12d6bb0f:;
  /* 12d6bb0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6bb12 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bb15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d6bb18:;
  /* 12d6bb18 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bb1c jge 0x12d6bb68 */
  if ((C.sf==C.of)) goto L_12d6bb68;
  /* 12d6bb1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6bb21 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d6bb24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6bb27 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6bb2a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6bb2d mov eax, dword ptr [ecx*4 + 0x12d7fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d7fe60)));
  /* 12d6bb34 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bb38 je 0x12d6bb56 */
  if (C.zf) goto L_12d6bb56;
  /* 12d6bb3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6bb3d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d6bb40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6bb43 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6bb46 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6bb49 mov eax, dword ptr [ecx*4 + 0x12d7fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d7fe60)));
  /* 12d6bb50 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bb54 jne 0x12d6bb66 */
  if (!C.zf) goto L_12d6bb66;
L_12d6bb56:;
  /* 12d6bb56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6bb59 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d6bb5c mov dword ptr [ecx + 0x12d7d150], 0xffffffff */
  w32((uint32_t)(ECX + 0x12d7d150), (0xffffffffu));
L_12d6bb66:;
  /* 12d6bb66 jmp 0x12d6bb0f */
  goto L_12d6bb0f;
L_12d6bb68:;
  /* 12d6bb68 mov esp, ebp */
  ESP = (EBP);
  /* 12d6bb6a pop ebp */
  EBP = (pop32());
  /* 12d6bb6b ret  */
  ESPCHK(0x12d6ba40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb70 @ 0x12d6bb70 (26 bytes, 9 insns) */
void f_12d6bb70(void) {
  FTRACE(0x12d6bb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6bb70 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6bb71 mov ebp, esp */
  EBP = (ESP);
  /* 12d6bb73 call 0x12d6c770 */
  push32(0x12d6bb78u); f_12d6c770();
  /* 12d6bb78 movsx eax, byte ptr [0x12d7e4b4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12d7e4b4))));
  /* 12d6bb7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6bb81 je 0x12d6bb88 */
  if (C.zf) goto L_12d6bb88;
  /* 12d6bb83 call 0x12d6c530 */
  push32(0x12d6bb88u); f_12d6c530();
L_12d6bb88:;
  /* 12d6bb88 pop ebp */
  EBP = (pop32());
  /* 12d6bb89 ret  */
  ESPCHK(0x12d6bb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb90 @ 0x12d6bb90 (61 bytes, 20 insns) */
void f_12d6bb90(void) {
  FTRACE(0x12d6bb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6bb90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6bb91 mov ebp, esp */
  EBP = (ESP);
  /* 12d6bb93 cmp dword ptr [ebp + 8], 0x12d7d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12d7d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bb9a jb 0x12d6bbbe */
  if (C.cf) goto L_12d6bbbe;
  /* 12d6bb9c cmp dword ptr [ebp + 8], 0x12d7d3a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12d7d3a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bba3 ja 0x12d6bbbe */
  if ((!C.cf&&!C.zf)) goto L_12d6bbbe;
  /* 12d6bba5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6bba8 sub eax, 0x12d7d140 */
  { uint32_t _a=(EAX),_b=(0x12d7d140u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6bbad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d6bbb0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bbb3 push eax */
  push32((uint32_t)(EAX));
  /* 12d6bbb4 call 0x12d66780 */
  push32(0x12d6bbb9u); f_12d66780();
  /* 12d6bbb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bbbc jmp 0x12d6bbcb */
  goto L_12d6bbcb;
L_12d6bbbe:;
  /* 12d6bbbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6bbc1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bbc4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6bbc5 call dword ptr [0x12d80320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80320))), 0x12d6bbcbu);
L_12d6bbcb:;
  /* 12d6bbcb pop ebp */
  EBP = (pop32());
  /* 12d6bbcc ret  */
  ESPCHK(0x12d6bb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbd0 @ 0x12d6bbd0 (41 bytes, 16 insns) */
void f_12d6bbd0(void) {
  FTRACE(0x12d6bbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6bbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6bbd1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6bbd3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bbd7 jge 0x12d6bbea */
  if ((C.sf==C.of)) goto L_12d6bbea;
  /* 12d6bbd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6bbdc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bbdf push eax */
  push32((uint32_t)(EAX));
  /* 12d6bbe0 call 0x12d66780 */
  push32(0x12d6bbe5u); f_12d66780();
  /* 12d6bbe5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bbe8 jmp 0x12d6bbf7 */
  goto L_12d6bbf7;
L_12d6bbea:;
  /* 12d6bbea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6bbed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bbf0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6bbf1 call dword ptr [0x12d80320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80320))), 0x12d6bbf7u);
L_12d6bbf7:;
  /* 12d6bbf7 pop ebp */
  EBP = (pop32());
  /* 12d6bbf8 ret  */
  ESPCHK(0x12d6bbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc00 @ 0x12d6bc00 (61 bytes, 20 insns) */
void f_12d6bc00(void) {
  FTRACE(0x12d6bc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6bc00 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6bc01 mov ebp, esp */
  EBP = (ESP);
  /* 12d6bc03 cmp dword ptr [ebp + 8], 0x12d7d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12d7d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bc0a jb 0x12d6bc2e */
  if (C.cf) goto L_12d6bc2e;
  /* 12d6bc0c cmp dword ptr [ebp + 8], 0x12d7d3a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12d7d3a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bc13 ja 0x12d6bc2e */
  if ((!C.cf&&!C.zf)) goto L_12d6bc2e;
  /* 12d6bc15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6bc18 sub eax, 0x12d7d140 */
  { uint32_t _a=(EAX),_b=(0x12d7d140u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6bc1d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d6bc20 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bc23 push eax */
  push32((uint32_t)(EAX));
  /* 12d6bc24 call 0x12d66820 */
  push32(0x12d6bc29u); f_12d66820();
  /* 12d6bc29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bc2c jmp 0x12d6bc3b */
  goto L_12d6bc3b;
L_12d6bc2e:;
  /* 12d6bc2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6bc31 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bc34 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6bc35 call dword ptr [0x12d80324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80324))), 0x12d6bc3bu);
L_12d6bc3b:;
  /* 12d6bc3b pop ebp */
  EBP = (pop32());
  /* 12d6bc3c ret  */
  ESPCHK(0x12d6bc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc40 @ 0x12d6bc40 (41 bytes, 16 insns) */
void f_12d6bc40(void) {
  FTRACE(0x12d6bc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6bc40 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6bc41 mov ebp, esp */
  EBP = (ESP);
  /* 12d6bc43 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bc47 jge 0x12d6bc5a */
  if ((C.sf==C.of)) goto L_12d6bc5a;
  /* 12d6bc49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6bc4c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bc4f push eax */
  push32((uint32_t)(EAX));
  /* 12d6bc50 call 0x12d66820 */
  push32(0x12d6bc55u); f_12d66820();
  /* 12d6bc55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bc58 jmp 0x12d6bc67 */
  goto L_12d6bc67;
L_12d6bc5a:;
  /* 12d6bc5a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6bc5d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bc60 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6bc61 call dword ptr [0x12d80324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80324))), 0x12d6bc67u);
L_12d6bc67:;
  /* 12d6bc67 pop ebp */
  EBP = (pop32());
  /* 12d6bc68 ret  */
  ESPCHK(0x12d6bc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc70 @ 0x12d6bc70 (119 bytes, 34 insns) */
void f_12d6bc70(void) {
  FTRACE(0x12d6bc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6bc70 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6bc71 mov ebp, esp */
  EBP = (ESP);
  /* 12d6bc73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6bc76 push 0x12d7e80c */
  push32((uint32_t)(0x12d7e80cu));
  /* 12d6bc7b call dword ptr [0x12d802a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802a4))), 0x12d6bc81u);
  /* 12d6bc81 cmp dword ptr [0x12d7e7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bc88 je 0x12d6bca8 */
  if (C.zf) goto L_12d6bca8;
  /* 12d6bc8a push 0x12d7e80c */
  push32((uint32_t)(0x12d7e80cu));
  /* 12d6bc8f call dword ptr [0x12d80294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80294))), 0x12d6bc95u);
  /* 12d6bc95 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d6bc97 call 0x12d66780 */
  push32(0x12d6bc9cu); f_12d66780();
  /* 12d6bc9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bc9f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d6bca6 jmp 0x12d6bcaf */
  goto L_12d6bcaf;
L_12d6bca8:;
  /* 12d6bca8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d6bcaf:;
  /* 12d6bcaf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12d6bcb3 push eax */
  push32((uint32_t)(EAX));
  /* 12d6bcb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6bcb7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6bcb8 call 0x12d6bcf0 */
  push32(0x12d6bcbdu); f_12d6bcf0();
  /* 12d6bcbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bcc0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d6bcc3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bcc7 je 0x12d6bcd5 */
  if (C.zf) goto L_12d6bcd5;
  /* 12d6bcc9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d6bccb call 0x12d66820 */
  push32(0x12d6bcd0u); f_12d66820();
  /* 12d6bcd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bcd3 jmp 0x12d6bce0 */
  goto L_12d6bce0;
L_12d6bcd5:;
  /* 12d6bcd5 push 0x12d7e80c */
  push32((uint32_t)(0x12d7e80cu));
  /* 12d6bcda call dword ptr [0x12d80294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80294))), 0x12d6bce0u);
L_12d6bce0:;
  /* 12d6bce0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6bce3 mov esp, ebp */
  ESP = (EBP);
  /* 12d6bce5 pop ebp */
  EBP = (pop32());
  /* 12d6bce6 ret  */
  ESPCHK(0x12d6bc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcf0 @ 0x12d6bcf0 (160 bytes, 50 insns) */
void f_12d6bcf0(void) {
  FTRACE(0x12d6bcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6bcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6bcf1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6bcf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6bcf6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bcfa jne 0x12d6bd03 */
  if (!C.zf) goto L_12d6bd03;
  /* 12d6bcfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6bcfe jmp 0x12d6bd8c */
  goto L_12d6bd8c;
L_12d6bd03:;
  /* 12d6bd03 cmp dword ptr [0x12d7e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bd0a jne 0x12d6bd3a */
  if (!C.zf) goto L_12d6bd3a;
  /* 12d6bd0c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6bd0f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6bd14 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bd19 jle 0x12d6bd2b */
  if ((C.zf||C.sf!=C.of)) goto L_12d6bd2b;
  /* 12d6bd1b call 0x12d6ac50 */
  push32(0x12d6bd20u); f_12d6ac50();
  /* 12d6bd20 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12d6bd26 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6bd29 jmp 0x12d6bd8c */
  goto L_12d6bd8c;
L_12d6bd2b:;
  /* 12d6bd2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6bd2e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12d6bd31 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12d6bd33 mov eax, 1 */
  EAX = (0x1u);
  /* 12d6bd38 jmp 0x12d6bd8c */
  goto L_12d6bd8c;
L_12d6bd3a:;
  /* 12d6bd3a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d6bd41 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12d6bd44 push eax */
  push32((uint32_t)(EAX));
  /* 12d6bd45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6bd47 mov ecx, dword ptr [0x12d7cec4] */
  ECX = (r32((uint32_t)(0x12d7cec4)));
  /* 12d6bd4d push ecx */
  push32((uint32_t)(ECX));
  /* 12d6bd4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6bd51 push edx */
  push32((uint32_t)(EDX));
  /* 12d6bd52 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6bd54 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12d6bd57 push eax */
  push32((uint32_t)(EAX));
  /* 12d6bd58 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d6bd5d mov ecx, dword ptr [0x12d7e690] */
  ECX = (r32((uint32_t)(0x12d7e690)));
  /* 12d6bd63 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6bd64 call dword ptr [0x12d802fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802fc))), 0x12d6bd6au);
  /* 12d6bd6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6bd6d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bd71 je 0x12d6bd79 */
  if (C.zf) goto L_12d6bd79;
  /* 12d6bd73 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bd77 je 0x12d6bd89 */
  if (C.zf) goto L_12d6bd89;
L_12d6bd79:;
  /* 12d6bd79 call 0x12d6ac50 */
  push32(0x12d6bd7eu); f_12d6ac50();
  /* 12d6bd7e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12d6bd84 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6bd87 jmp 0x12d6bd8c */
  goto L_12d6bd8c;
L_12d6bd89:;
  /* 12d6bd89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d6bd8c:;
  /* 12d6bd8c mov esp, ebp */
  ESP = (EBP);
  /* 12d6bd8e pop ebp */
  EBP = (pop32());
  /* 12d6bd8f ret  */
  ESPCHK(0x12d6bcf0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12d6bd90 (32 bytes, 18 insns) */
void f_12d6bd90(void) {
  FTRACE(0x12d6bd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6bd90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6bd91 mov ebp, esp */
  EBP = (ESP);
  /* 12d6bd93 push ebx */
  push32((uint32_t)(EBX));
  /* 12d6bd94 push esi */
  push32((uint32_t)(ESI));
  /* 12d6bd95 push edi */
  push32((uint32_t)(EDI));
  /* 12d6bd96 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6bd97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6bd99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6bd9b push 0x12d6bda8 */
  push32((uint32_t)(0x12d6bda8u));
  /* 12d6bda0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12d6bda3 call 0x12d734dc */
  push32(0x12d6bda8u); f_12d734dc();
  /* 12d6bda8 pop ebp */
  EBP = (pop32());
  /* 12d6bda9 pop edi */
  EDI = (pop32());
  /* 12d6bdaa pop esi */
  ESI = (pop32());
  /* 12d6bdab pop ebx */
  EBX = (pop32());
  /* 12d6bdac mov esp, ebp */
  ESP = (EBP);
  /* 12d6bdae pop ebp */
  EBP = (pop32());
  /* 12d6bdaf ret  */
  ESPCHK(0x12d6bd90u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12d6bdd2 (104 bytes, 33 insns) */
void f_12d6bdd2(void) {
  FTRACE(0x12d6bdd2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6bdd2 push ebx */
  push32((uint32_t)(EBX));
  /* 12d6bdd3 push esi */
  push32((uint32_t)(ESI));
  /* 12d6bdd4 push edi */
  push32((uint32_t)(EDI));
  /* 12d6bdd5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d6bdd9 push eax */
  push32((uint32_t)(EAX));
  /* 12d6bdda push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 12d6bddc push 0x12d6bdb0 */
  push32((uint32_t)(0x12d6bdb0u));
  /* 12d6bde1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12d6bde8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_12d6bdef:;
  /* 12d6bdef mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12d6bdf3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d6bdf6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12d6bdf9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bdfc je 0x12d6be2c */
  if (C.zf) goto L_12d6be2c;
  /* 12d6bdfe cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6be02 je 0x12d6be2c */
  if (C.zf) goto L_12d6be2c;
  /* 12d6be04 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12d6be07 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 12d6be0a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12d6be0e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12d6be11 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6be16 jne 0x12d6be2a */
  if (!C.zf) goto L_12d6be2a;
  /* 12d6be18 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12d6be1d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12d6be21 call 0x12d6be66 */
  push32(0x12d6be26u); f_12d6be66();
  /* 12d6be26 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x12d6be2au);
L_12d6be2a:;
  /* 12d6be2a jmp 0x12d6bdef */
  goto L_12d6bdef;
L_12d6be2c:;
  /* 12d6be2c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12d6be33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6be36 pop edi */
  EDI = (pop32());
  /* 12d6be37 pop esi */
  ESI = (pop32());
  /* 12d6be38 pop ebx */
  EBX = (pop32());
  /* 12d6be39 ret  */
  ESPCHK(0x12d6bdd2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be66 @ 0x12d6be66 (24 bytes, 10 insns) */
void f_12d6be66(void) {
  FTRACE(0x12d6be66u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6be66 push ebx */
  push32((uint32_t)(EBX));
  /* 12d6be67 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6be68 mov ebx, 0x12d7d3d8 */
  EBX = (0x12d7d3d8u);
  /* 12d6be6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6be70 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12d6be73 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12d6be76 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12d6be79 pop ecx */
  ECX = (pop32());
  /* 12d6be7a pop ebx */
  EBX = (pop32());
  /* 12d6be7b ret 4 */
  ESPCHK(0x12d6be66u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bf45 @ 0x12d6bf45 (27 bytes, 11 insns) */
void f_12d6bf45(void) {
  FTRACE(0x12d6bf45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6bf45 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6bf46 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d6bf4a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 12d6bf4c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12d6bf4f push eax */
  push32((uint32_t)(EAX));
  /* 12d6bf50 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d6bf53 push eax */
  push32((uint32_t)(EAX));
  /* 12d6bf54 call 0x12d6bdd2 */
  push32(0x12d6bf59u); f_12d6bdd2();
  /* 12d6bf59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bf5c pop ebp */
  EBP = (pop32());
  /* 12d6bf5d ret 4 */
  ESPCHK(0x12d6bf45u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bf60 @ 0x12d6bf60 (482 bytes, 138 insns) */
void f_12d6bf60(void) {
  FTRACE(0x12d6bf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6bf60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6bf61 mov ebp, esp */
  EBP = (ESP);
  /* 12d6bf63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6bf66 push esi */
  push32((uint32_t)(ESI));
  /* 12d6bf67 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 12d6bf6e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12d6bf70 call 0x12d66780 */
  push32(0x12d6bf75u); f_12d66780();
  /* 12d6bf75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bf78 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d6bf7f jmp 0x12d6bf8a */
  goto L_12d6bf8a;
L_12d6bf81:;
  /* 12d6bf81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6bf84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bf87 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d6bf8a:;
  /* 12d6bf8a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bf8e jge 0x12d6c130 */
  if ((C.sf==C.of)) goto L_12d6c130;
  /* 12d6bf94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6bf97 cmp dword ptr [ecx*4 + 0x12d7fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12d7fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bf9f je 0x12d6c096 */
  if (C.zf) goto L_12d6c096;
  /* 12d6bfa5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6bfa8 mov eax, dword ptr [edx*4 + 0x12d7fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d7fe60)));
  /* 12d6bfaf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6bfb2 jmp 0x12d6bfbd */
  goto L_12d6bfbd;
L_12d6bfb4:;
  /* 12d6bfb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6bfb7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bfba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d6bfbd:;
  /* 12d6bfbd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6bfc0 mov eax, dword ptr [edx*4 + 0x12d7fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d7fe60)));
  /* 12d6bfc7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bfcc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bfcf jae 0x12d6c086 */
  if (!C.cf) goto L_12d6c086;
  /* 12d6bfd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6bfd8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d6bfdc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6bfdf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6bfe1 jne 0x12d6c081 */
  if (!C.zf) goto L_12d6c081;
  /* 12d6bfe7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6bfea cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6bfee jne 0x12d6c029 */
  if (!C.zf) goto L_12d6c029;
  /* 12d6bff0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d6bff2 call 0x12d66780 */
  push32(0x12d6bff7u); f_12d66780();
  /* 12d6bff7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6bffa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6bffd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c001 jne 0x12d6c01f */
  if (!C.zf) goto L_12d6c01f;
  /* 12d6c003 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c006 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c009 push edx */
  push32((uint32_t)(EDX));
  /* 12d6c00a call dword ptr [0x12d8031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8031c))), 0x12d6c010u);
  /* 12d6c010 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c013 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d6c016 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c019 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c01c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12d6c01f:;
  /* 12d6c01f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d6c021 call 0x12d66820 */
  push32(0x12d6c026u); f_12d66820();
  /* 12d6c026 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6c029:;
  /* 12d6c029 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c02c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c02f push eax */
  push32((uint32_t)(EAX));
  /* 12d6c030 call dword ptr [0x12d80320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80320))), 0x12d6c036u);
  /* 12d6c036 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c039 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d6c03d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6c040 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6c042 je 0x12d6c056 */
  if (C.zf) goto L_12d6c056;
  /* 12d6c044 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c047 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c04a push eax */
  push32((uint32_t)(EAX));
  /* 12d6c04b call dword ptr [0x12d80324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80324))), 0x12d6c051u);
  /* 12d6c051 jmp 0x12d6bfb4 */
  goto L_12d6bfb4;
L_12d6c056:;
  /* 12d6c056 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c059 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12d6c05f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6c062 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d6c065 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6c068 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c06b sub eax, dword ptr [edx*4 + 0x12d7fe60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12d7fe60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6c072 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d6c073 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12d6c078 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d6c07a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c07c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6c07f jmp 0x12d6c086 */
  goto L_12d6c086;
L_12d6c081:;
  /* 12d6c081 jmp 0x12d6bfb4 */
  goto L_12d6bfb4;
L_12d6c086:;
  /* 12d6c086 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c08a je 0x12d6c091 */
  if (C.zf) goto L_12d6c091;
  /* 12d6c08c jmp 0x12d6c130 */
  goto L_12d6c130;
L_12d6c091:;
  /* 12d6c091 jmp 0x12d6c12b */
  goto L_12d6c12b;
L_12d6c096:;
  /* 12d6c096 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12d6c098 push 0x12d79f7c */
  push32((uint32_t)(0x12d79f7cu));
  /* 12d6c09d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6c09f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12d6c0a4 call 0x12d62d80 */
  push32(0x12d6c0a9u); f_12d62d80();
  /* 12d6c0a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c0ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6c0af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c0b3 je 0x12d6c129 */
  if (C.zf) goto L_12d6c129;
  /* 12d6c0b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6c0b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c0bb mov dword ptr [eax*4 + 0x12d7fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x12d7fe60), (ECX));
  /* 12d6c0c2 mov edx, dword ptr [0x12d7ff9c] */
  EDX = (r32((uint32_t)(0x12d7ff9c)));
  /* 12d6c0c8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c0cb mov dword ptr [0x12d7ff9c], edx */
  w32((uint32_t)(0x12d7ff9c), (EDX));
  /* 12d6c0d1 jmp 0x12d6c0dc */
  goto L_12d6c0dc;
L_12d6c0d3:;
  /* 12d6c0d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c0d6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c0d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d6c0dc:;
  /* 12d6c0dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6c0df mov edx, dword ptr [ecx*4 + 0x12d7fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d7fe60)));
  /* 12d6c0e6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c0ec cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c0ef jae 0x12d6c114 */
  if (!C.cf) goto L_12d6c114;
  /* 12d6c0f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c0f4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12d6c0f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c0fb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12d6c101 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c104 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12d6c108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c10b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12d6c112 jmp 0x12d6c0d3 */
  goto L_12d6c0d3;
L_12d6c114:;
  /* 12d6c114 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6c117 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d6c11a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6c11d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c120 push edx */
  push32((uint32_t)(EDX));
  /* 12d6c121 call 0x12d6c470 */
  push32(0x12d6c126u); f_12d6c470();
  /* 12d6c126 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6c129:;
  /* 12d6c129 jmp 0x12d6c130 */
  goto L_12d6c130;
L_12d6c12b:;
  /* 12d6c12b jmp 0x12d6bf81 */
  goto L_12d6bf81;
L_12d6c130:;
  /* 12d6c130 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12d6c132 call 0x12d66820 */
  push32(0x12d6c137u); f_12d66820();
  /* 12d6c137 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c13a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c13d pop esi */
  ESI = (pop32());
  /* 12d6c13e mov esp, ebp */
  ESP = (EBP);
  /* 12d6c140 pop ebp */
  EBP = (pop32());
  /* 12d6c141 ret  */
  ESPCHK(0x12d6bf60u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12d6c150 (183 bytes, 57 insns) */
void f_12d6c150(void) {
  FTRACE(0x12d6c150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6c150 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6c151 mov ebp, esp */
  EBP = (ESP);
  /* 12d6c153 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6c154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c157 cmp eax, dword ptr [0x12d7ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c15d jae 0x12d6c1ea */
  if (!C.cf) goto L_12d6c1ea;
  /* 12d6c163 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c166 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d6c169 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c16c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6c16f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6c172 mov eax, dword ptr [ecx*4 + 0x12d7fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d7fe60)));
  /* 12d6c179 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c17d jne 0x12d6c1ea */
  if (!C.zf) goto L_12d6c1ea;
  /* 12d6c17f cmp dword ptr [0x12d7e474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c186 jne 0x12d6c1ca */
  if (!C.zf) goto L_12d6c1ca;
  /* 12d6c188 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c18b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d6c18e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c192 je 0x12d6c1a2 */
  if (C.zf) goto L_12d6c1a2;
  /* 12d6c194 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c198 je 0x12d6c1b0 */
  if (C.zf) goto L_12d6c1b0;
  /* 12d6c19a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c19e je 0x12d6c1be */
  if (C.zf) goto L_12d6c1be;
  /* 12d6c1a0 jmp 0x12d6c1ca */
  goto L_12d6c1ca;
L_12d6c1a2:;
  /* 12d6c1a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6c1a5 push edx */
  push32((uint32_t)(EDX));
  /* 12d6c1a6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12d6c1a8 call dword ptr [0x12d802f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802f0))), 0x12d6c1aeu);
  /* 12d6c1ae jmp 0x12d6c1ca */
  goto L_12d6c1ca;
L_12d6c1b0:;
  /* 12d6c1b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6c1b3 push eax */
  push32((uint32_t)(EAX));
  /* 12d6c1b4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12d6c1b6 call dword ptr [0x12d802f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802f0))), 0x12d6c1bcu);
  /* 12d6c1bc jmp 0x12d6c1ca */
  goto L_12d6c1ca;
L_12d6c1be:;
  /* 12d6c1be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6c1c1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6c1c2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12d6c1c4 call dword ptr [0x12d802f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802f0))), 0x12d6c1cau);
L_12d6c1ca:;
  /* 12d6c1ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c1cd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12d6c1d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c1d3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6c1d6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6c1d9 mov ecx, dword ptr [edx*4 + 0x12d7fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12d7fe60)));
  /* 12d6c1e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6c1e3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12d6c1e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6c1e8 jmp 0x12d6c203 */
  goto L_12d6c203;
L_12d6c1ea:;
  /* 12d6c1ea call 0x12d6ac50 */
  push32(0x12d6c1efu); f_12d6ac50();
  /* 12d6c1ef mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d6c1f5 call 0x12d6ac60 */
  push32(0x12d6c1fau); f_12d6ac60();
  /* 12d6c1fa mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d6c200 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d6c203:;
  /* 12d6c203 mov esp, ebp */
  ESP = (EBP);
  /* 12d6c205 pop ebp */
  EBP = (pop32());
  /* 12d6c206 ret  */
  ESPCHK(0x12d6c150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c210 @ 0x12d6c210 (216 bytes, 63 insns) */
void f_12d6c210(void) {
  FTRACE(0x12d6c210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6c210 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6c211 mov ebp, esp */
  EBP = (ESP);
  /* 12d6c213 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6c214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c217 cmp eax, dword ptr [0x12d7ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c21d jae 0x12d6c2cb */
  if (!C.cf) goto L_12d6c2cb;
  /* 12d6c223 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c226 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d6c229 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c22c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6c22f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6c232 mov eax, dword ptr [ecx*4 + 0x12d7fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d7fe60)));
  /* 12d6c239 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d6c23e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6c241 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6c243 je 0x12d6c2cb */
  if (C.zf) goto L_12d6c2cb;
  /* 12d6c249 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c24c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12d6c24f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c252 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6c255 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6c258 mov ecx, dword ptr [edx*4 + 0x12d7fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12d7fe60)));
  /* 12d6c25f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c263 je 0x12d6c2cb */
  if (C.zf) goto L_12d6c2cb;
  /* 12d6c265 cmp dword ptr [0x12d7e474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c26c jne 0x12d6c2aa */
  if (!C.zf) goto L_12d6c2aa;
  /* 12d6c26e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c271 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d6c274 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c278 je 0x12d6c288 */
  if (C.zf) goto L_12d6c288;
  /* 12d6c27a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c27e je 0x12d6c294 */
  if (C.zf) goto L_12d6c294;
  /* 12d6c280 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c284 je 0x12d6c2a0 */
  if (C.zf) goto L_12d6c2a0;
  /* 12d6c286 jmp 0x12d6c2aa */
  goto L_12d6c2aa;
L_12d6c288:;
  /* 12d6c288 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6c28a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12d6c28c call dword ptr [0x12d802f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802f0))), 0x12d6c292u);
  /* 12d6c292 jmp 0x12d6c2aa */
  goto L_12d6c2aa;
L_12d6c294:;
  /* 12d6c294 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6c296 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12d6c298 call dword ptr [0x12d802f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802f0))), 0x12d6c29eu);
  /* 12d6c29e jmp 0x12d6c2aa */
  goto L_12d6c2aa;
L_12d6c2a0:;
  /* 12d6c2a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6c2a2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12d6c2a4 call dword ptr [0x12d802f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802f0))), 0x12d6c2aau);
L_12d6c2aa:;
  /* 12d6c2aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c2ad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d6c2b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c2b3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d6c2b6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6c2b9 mov edx, dword ptr [eax*4 + 0x12d7fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d7fe60)));
  /* 12d6c2c0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 12d6c2c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6c2c9 jmp 0x12d6c2e4 */
  goto L_12d6c2e4;
L_12d6c2cb:;
  /* 12d6c2cb call 0x12d6ac50 */
  push32(0x12d6c2d0u); f_12d6ac50();
  /* 12d6c2d0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d6c2d6 call 0x12d6ac60 */
  push32(0x12d6c2dbu); f_12d6ac60();
  /* 12d6c2db mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d6c2e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d6c2e4:;
  /* 12d6c2e4 mov esp, ebp */
  ESP = (EBP);
  /* 12d6c2e6 pop ebp */
  EBP = (pop32());
  /* 12d6c2e7 ret  */
  ESPCHK(0x12d6c210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2f0 @ 0x12d6c2f0 (102 bytes, 30 insns) */
void f_12d6c2f0(void) {
  FTRACE(0x12d6c2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6c2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6c2f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6c2f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c2f6 cmp eax, dword ptr [0x12d7ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c2fc jae 0x12d6c33b */
  if (!C.cf) goto L_12d6c33b;
  /* 12d6c2fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c301 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d6c304 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c307 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6c30a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6c30d mov eax, dword ptr [ecx*4 + 0x12d7fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d7fe60)));
  /* 12d6c314 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d6c319 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6c31c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6c31e je 0x12d6c33b */
  if (C.zf) goto L_12d6c33b;
  /* 12d6c320 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c323 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12d6c326 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c329 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6c32c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6c32f mov ecx, dword ptr [edx*4 + 0x12d7fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12d7fe60)));
  /* 12d6c336 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12d6c339 jmp 0x12d6c354 */
  goto L_12d6c354;
L_12d6c33b:;
  /* 12d6c33b call 0x12d6ac50 */
  push32(0x12d6c340u); f_12d6ac50();
  /* 12d6c340 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d6c346 call 0x12d6ac60 */
  push32(0x12d6c34bu); f_12d6ac60();
  /* 12d6c34b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d6c351 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d6c354:;
  /* 12d6c354 pop ebp */
  EBP = (pop32());
  /* 12d6c355 ret  */
  ESPCHK(0x12d6c2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c360 @ 0x12d6c360 (260 bytes, 83 insns) */
void f_12d6c360(void) {
  FTRACE(0x12d6c360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6c360 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6c361 mov ebp, esp */
  EBP = (ESP);
  /* 12d6c363 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6c366 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d6c36a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6c36d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6c370 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6c372 je 0x12d6c37d */
  if (C.zf) goto L_12d6c37d;
  /* 12d6c374 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d6c377 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12d6c37a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_12d6c37d:;
  /* 12d6c37d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6c380 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6c386 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6c388 je 0x12d6c392 */
  if (C.zf) goto L_12d6c392;
  /* 12d6c38a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d6c38d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 12d6c38f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12d6c392:;
  /* 12d6c392 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6c395 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6c39b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6c39d je 0x12d6c3a8 */
  if (C.zf) goto L_12d6c3a8;
  /* 12d6c39f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d6c3a2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12d6c3a5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12d6c3a8:;
  /* 12d6c3a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c3ab push eax */
  push32((uint32_t)(EAX));
  /* 12d6c3ac call dword ptr [0x12d802dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802dc))), 0x12d6c3b2u);
  /* 12d6c3b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6c3b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c3b9 jne 0x12d6c3d2 */
  if (!C.zf) goto L_12d6c3d2;
  /* 12d6c3bb call dword ptr [0x12d802d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802d0))), 0x12d6c3c1u);
  /* 12d6c3c1 push eax */
  push32((uint32_t)(EAX));
  /* 12d6c3c2 call 0x12d6abb0 */
  push32(0x12d6c3c7u); f_12d6abb0();
  /* 12d6c3c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c3ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6c3cd jmp 0x12d6c460 */
  goto L_12d6c460;
L_12d6c3d2:;
  /* 12d6c3d2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c3d6 jne 0x12d6c3e3 */
  if (!C.zf) goto L_12d6c3e3;
  /* 12d6c3d8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d6c3db or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12d6c3de mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12d6c3e1 jmp 0x12d6c3f2 */
  goto L_12d6c3f2;
L_12d6c3e3:;
  /* 12d6c3e3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c3e7 jne 0x12d6c3f2 */
  if (!C.zf) goto L_12d6c3f2;
  /* 12d6c3e9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d6c3ec or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12d6c3ef mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12d6c3f2:;
  /* 12d6c3f2 call 0x12d6bf60 */
  push32(0x12d6c3f7u); f_12d6bf60();
  /* 12d6c3f7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d6c3fa cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c3fe jne 0x12d6c41b */
  if (!C.zf) goto L_12d6c41b;
  /* 12d6c400 call 0x12d6ac50 */
  push32(0x12d6c405u); f_12d6ac50();
  /* 12d6c405 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12d6c40b call 0x12d6ac60 */
  push32(0x12d6c410u); f_12d6ac60();
  /* 12d6c410 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d6c416 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6c419 jmp 0x12d6c460 */
  goto L_12d6c460;
L_12d6c41b:;
  /* 12d6c41b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c41e push eax */
  push32((uint32_t)(EAX));
  /* 12d6c41f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c422 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6c423 call 0x12d6c150 */
  push32(0x12d6c428u); f_12d6c150();
  /* 12d6c428 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c42b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d6c42e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12d6c431 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12d6c434 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c437 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d6c43a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c43d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d6c440 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6c443 mov edx, dword ptr [eax*4 + 0x12d7fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d7fe60)));
  /* 12d6c44a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d6c44d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12d6c451 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c454 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6c455 call 0x12d6c500 */
  push32(0x12d6c45au); f_12d6c500();
  /* 12d6c45a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c45d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d6c460:;
  /* 12d6c460 mov esp, ebp */
  ESP = (EBP);
  /* 12d6c462 pop ebp */
  EBP = (pop32());
  /* 12d6c463 ret  */
  ESPCHK(0x12d6c360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c470 @ 0x12d6c470 (134 bytes, 44 insns) */
void f_12d6c470(void) {
  FTRACE(0x12d6c470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6c470 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6c471 mov ebp, esp */
  EBP = (ESP);
  /* 12d6c473 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6c474 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c477 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d6c47a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c47d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d6c480 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6c483 mov edx, dword ptr [eax*4 + 0x12d7fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d7fe60)));
  /* 12d6c48a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c48c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d6c48f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c492 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c496 jne 0x12d6c4d1 */
  if (!C.zf) goto L_12d6c4d1;
  /* 12d6c498 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d6c49a call 0x12d66780 */
  push32(0x12d6c49fu); f_12d66780();
  /* 12d6c49f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c4a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c4a5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c4a9 jne 0x12d6c4c7 */
  if (!C.zf) goto L_12d6c4c7;
  /* 12d6c4ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c4ae add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c4b1 push edx */
  push32((uint32_t)(EDX));
  /* 12d6c4b2 call dword ptr [0x12d8031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8031c))), 0x12d6c4b8u);
  /* 12d6c4b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c4bb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d6c4be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c4c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c4c4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12d6c4c7:;
  /* 12d6c4c7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d6c4c9 call 0x12d66820 */
  push32(0x12d6c4ceu); f_12d66820();
  /* 12d6c4ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6c4d1:;
  /* 12d6c4d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c4d4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d6c4d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c4da and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d6c4dd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6c4e0 mov edx, dword ptr [eax*4 + 0x12d7fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d7fe60)));
  /* 12d6c4e7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12d6c4eb push eax */
  push32((uint32_t)(EAX));
  /* 12d6c4ec call dword ptr [0x12d80320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80320))), 0x12d6c4f2u);
  /* 12d6c4f2 mov esp, ebp */
  ESP = (EBP);
  /* 12d6c4f4 pop ebp */
  EBP = (pop32());
  /* 12d6c4f5 ret  */
  ESPCHK(0x12d6c470u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12d6c500 (38 bytes, 13 insns) */
void f_12d6c500(void) {
  FTRACE(0x12d6c500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6c500 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6c501 mov ebp, esp */
  EBP = (ESP);
  /* 12d6c503 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c506 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d6c509 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c50c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d6c50f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6c512 mov edx, dword ptr [eax*4 + 0x12d7fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d7fe60)));
  /* 12d6c519 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12d6c51d push eax */
  push32((uint32_t)(EAX));
  /* 12d6c51e call dword ptr [0x12d80324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80324))), 0x12d6c524u);
  /* 12d6c524 pop ebp */
  EBP = (pop32());
  /* 12d6c525 ret  */
  ESPCHK(0x12d6c500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c530 @ 0x12d6c530 (218 bytes, 63 insns) */
void f_12d6c530(void) {
  FTRACE(0x12d6c530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6c530 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6c531 mov ebp, esp */
  EBP = (ESP);
  /* 12d6c533 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6c536 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d6c53d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6c53f call 0x12d66780 */
  push32(0x12d6c544u); f_12d66780();
  /* 12d6c544 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c547 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12d6c54e jmp 0x12d6c559 */
  goto L_12d6c559;
L_12d6c550:;
  /* 12d6c550 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c553 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c556 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d6c559:;
  /* 12d6c559 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c55c cmp ecx, dword ptr [0x12d7fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c562 jge 0x12d6c5f9 */
  if ((C.sf==C.of)) goto L_12d6c5f9;
  /* 12d6c568 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c56b mov eax, dword ptr [0x12d7e810] */
  EAX = (r32((uint32_t)(0x12d7e810)));
  /* 12d6c570 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c574 je 0x12d6c5f4 */
  if (C.zf) goto L_12d6c5f4;
  /* 12d6c576 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c579 mov edx, dword ptr [0x12d7e810] */
  EDX = (r32((uint32_t)(0x12d7e810)));
  /* 12d6c57f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12d6c582 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d6c585 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6c58b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6c58d je 0x12d6c5b1 */
  if (C.zf) goto L_12d6c5b1;
  /* 12d6c58f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c592 mov eax, dword ptr [0x12d7e810] */
  EAX = (r32((uint32_t)(0x12d7e810)));
  /* 12d6c597 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d6c59a push ecx */
  push32((uint32_t)(ECX));
  /* 12d6c59b call 0x12d6d320 */
  push32(0x12d6c5a0u); f_12d6d320();
  /* 12d6c5a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c5a3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c5a6 je 0x12d6c5b1 */
  if (C.zf) goto L_12d6c5b1;
  /* 12d6c5a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c5ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c5ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d6c5b1:;
  /* 12d6c5b1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c5b5 jl 0x12d6c5f4 */
  if ((C.sf!=C.of)) goto L_12d6c5f4;
  /* 12d6c5b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c5ba mov ecx, dword ptr [0x12d7e810] */
  ECX = (r32((uint32_t)(0x12d7e810)));
  /* 12d6c5c0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d6c5c3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c5c6 push edx */
  push32((uint32_t)(EDX));
  /* 12d6c5c7 call dword ptr [0x12d802e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802e4))), 0x12d6c5cdu);
  /* 12d6c5cd push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6c5cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c5d2 mov ecx, dword ptr [0x12d7e810] */
  ECX = (r32((uint32_t)(0x12d7e810)));
  /* 12d6c5d8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d6c5db push edx */
  push32((uint32_t)(EDX));
  /* 12d6c5dc call 0x12d63810 */
  push32(0x12d6c5e1u); f_12d63810();
  /* 12d6c5e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c5e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c5e7 mov ecx, dword ptr [0x12d7e810] */
  ECX = (r32((uint32_t)(0x12d7e810)));
  /* 12d6c5ed mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12d6c5f4:;
  /* 12d6c5f4 jmp 0x12d6c550 */
  goto L_12d6c550;
L_12d6c5f9:;
  /* 12d6c5f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6c5fb call 0x12d66820 */
  push32(0x12d6c600u); f_12d66820();
  /* 12d6c600 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c603 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c606 mov esp, ebp */
  ESP = (EBP);
  /* 12d6c608 pop ebp */
  EBP = (pop32());
  /* 12d6c609 ret  */
  ESPCHK(0x12d6c530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c610 @ 0x12d6c610 (68 bytes, 26 insns) */
void f_12d6c610(void) {
  FTRACE(0x12d6c610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6c610 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6c611 mov ebp, esp */
  EBP = (ESP);
  /* 12d6c613 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6c614 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c618 jne 0x12d6c626 */
  if (!C.zf) goto L_12d6c626;
  /* 12d6c61a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6c61c call 0x12d6c780 */
  push32(0x12d6c621u); f_12d6c780();
  /* 12d6c621 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c624 jmp 0x12d6c650 */
  goto L_12d6c650;
L_12d6c626:;
  /* 12d6c626 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c629 push eax */
  push32((uint32_t)(EAX));
  /* 12d6c62a call 0x12d6bb90 */
  push32(0x12d6c62fu); f_12d6bb90();
  /* 12d6c62f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c632 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c635 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6c636 call 0x12d6c660 */
  push32(0x12d6c63bu); f_12d6c660();
  /* 12d6c63b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c63e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6c641 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c644 push edx */
  push32((uint32_t)(EDX));
  /* 12d6c645 call 0x12d6bc00 */
  push32(0x12d6c64au); f_12d6bc00();
  /* 12d6c64a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c64d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d6c650:;
  /* 12d6c650 mov esp, ebp */
  ESP = (EBP);
  /* 12d6c652 pop ebp */
  EBP = (pop32());
  /* 12d6c653 ret  */
  ESPCHK(0x12d6c610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c660 @ 0x12d6c660 (65 bytes, 26 insns) */
void f_12d6c660(void) {
  FTRACE(0x12d6c660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6c660 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6c661 mov ebp, esp */
  EBP = (ESP);
  /* 12d6c663 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c666 push eax */
  push32((uint32_t)(EAX));
  /* 12d6c667 call 0x12d6c6b0 */
  push32(0x12d6c66cu); f_12d6c6b0();
  /* 12d6c66c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c66f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6c671 je 0x12d6c678 */
  if (C.zf) goto L_12d6c678;
  /* 12d6c673 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6c676 jmp 0x12d6c69f */
  goto L_12d6c69f;
L_12d6c678:;
  /* 12d6c678 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c67b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d6c67e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6c684 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6c686 je 0x12d6c69d */
  if (C.zf) goto L_12d6c69d;
  /* 12d6c688 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c68b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d6c68e push ecx */
  push32((uint32_t)(ECX));
  /* 12d6c68f call 0x12d6d470 */
  push32(0x12d6c694u); f_12d6d470();
  /* 12d6c694 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c697 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d6c699 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6c69b jmp 0x12d6c69f */
  goto L_12d6c69f;
L_12d6c69d:;
  /* 12d6c69d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d6c69f:;
  /* 12d6c69f pop ebp */
  EBP = (pop32());
  /* 12d6c6a0 ret  */
  ESPCHK(0x12d6c660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6b0 @ 0x12d6c6b0 (183 bytes, 62 insns) */
void f_12d6c6b0(void) {
  FTRACE(0x12d6c6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6c6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6c6b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6c6b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6c6b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d6c6bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c6c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d6c6c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c6c6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d6c6c9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6c6cc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c6cf jne 0x12d6c74b */
  if (!C.zf) goto L_12d6c74b;
  /* 12d6c6d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c6d4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d6c6d7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6c6dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6c6df je 0x12d6c74b */
  if (C.zf) goto L_12d6c74b;
  /* 12d6c6e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c6e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c6e7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12d6c6e9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6c6ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6c6ef cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c6f3 jle 0x12d6c74b */
  if ((C.zf||C.sf!=C.of)) goto L_12d6c74b;
  /* 12d6c6f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6c6f8 push edx */
  push32((uint32_t)(EDX));
  /* 12d6c6f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c6fc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d6c6ff push ecx */
  push32((uint32_t)(ECX));
  /* 12d6c700 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c703 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d6c706 push eax */
  push32((uint32_t)(EAX));
  /* 12d6c707 call 0x12d6b620 */
  push32(0x12d6c70cu); f_12d6b620();
  /* 12d6c70c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c70f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c712 jne 0x12d6c735 */
  if (!C.zf) goto L_12d6c735;
  /* 12d6c714 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c717 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d6c71a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6c720 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6c722 je 0x12d6c733 */
  if (C.zf) goto L_12d6c733;
  /* 12d6c724 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c727 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d6c72a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 12d6c72d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c730 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12d6c733:;
  /* 12d6c733 jmp 0x12d6c74b */
  goto L_12d6c74b;
L_12d6c735:;
  /* 12d6c735 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c738 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d6c73b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6c73e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c741 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12d6c744 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d6c74b:;
  /* 12d6c74b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c74e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c751 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d6c754 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d6c756 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6c759 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12d6c760 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c763 mov esp, ebp */
  ESP = (EBP);
  /* 12d6c765 pop ebp */
  EBP = (pop32());
  /* 12d6c766 ret  */
  ESPCHK(0x12d6c6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c770 @ 0x12d6c770 (15 bytes, 7 insns) */
void f_12d6c770(void) {
  FTRACE(0x12d6c770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6c770 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6c771 mov ebp, esp */
  EBP = (ESP);
  /* 12d6c773 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6c775 call 0x12d6c780 */
  push32(0x12d6c77au); f_12d6c780();
  /* 12d6c77a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c77d pop ebp */
  EBP = (pop32());
  /* 12d6c77e ret  */
  ESPCHK(0x12d6c770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c780 @ 0x12d6c780 (319 bytes, 94 insns) */
void f_12d6c780(void) {
  FTRACE(0x12d6c780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6c780 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6c781 mov ebp, esp */
  EBP = (ESP);
  /* 12d6c783 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6c786 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d6c78d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d6c794 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6c796 call 0x12d66780 */
  push32(0x12d6c79bu); f_12d66780();
  /* 12d6c79b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c79e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d6c7a5 jmp 0x12d6c7b0 */
  goto L_12d6c7b0;
L_12d6c7a7:;
  /* 12d6c7a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6c7aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c7ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d6c7b0:;
  /* 12d6c7b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6c7b3 cmp ecx, dword ptr [0x12d7fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c7b9 jge 0x12d6c8a3 */
  if ((C.sf==C.of)) goto L_12d6c8a3;
  /* 12d6c7bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6c7c2 mov eax, dword ptr [0x12d7e810] */
  EAX = (r32((uint32_t)(0x12d7e810)));
  /* 12d6c7c7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c7cb je 0x12d6c89e */
  if (C.zf) goto L_12d6c89e;
  /* 12d6c7d1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6c7d4 mov edx, dword ptr [0x12d7e810] */
  EDX = (r32((uint32_t)(0x12d7e810)));
  /* 12d6c7da mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12d6c7dd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d6c7e0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6c7e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6c7e8 je 0x12d6c89e */
  if (C.zf) goto L_12d6c89e;
  /* 12d6c7ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6c7f1 mov eax, dword ptr [0x12d7e810] */
  EAX = (r32((uint32_t)(0x12d7e810)));
  /* 12d6c7f6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d6c7f9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6c7fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6c7fd push edx */
  push32((uint32_t)(EDX));
  /* 12d6c7fe call 0x12d6bbd0 */
  push32(0x12d6c803u); f_12d6bbd0();
  /* 12d6c803 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c806 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6c809 mov ecx, dword ptr [0x12d7e810] */
  ECX = (r32((uint32_t)(0x12d7e810)));
  /* 12d6c80f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d6c812 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d6c815 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6c81a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6c81c je 0x12d6c885 */
  if (C.zf) goto L_12d6c885;
  /* 12d6c81e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c822 jne 0x12d6c849 */
  if (!C.zf) goto L_12d6c849;
  /* 12d6c824 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6c827 mov edx, dword ptr [0x12d7e810] */
  EDX = (r32((uint32_t)(0x12d7e810)));
  /* 12d6c82d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12d6c830 push eax */
  push32((uint32_t)(EAX));
  /* 12d6c831 call 0x12d6c660 */
  push32(0x12d6c836u); f_12d6c660();
  /* 12d6c836 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c839 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c83c je 0x12d6c847 */
  if (C.zf) goto L_12d6c847;
  /* 12d6c83e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c841 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c844 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d6c847:;
  /* 12d6c847 jmp 0x12d6c885 */
  goto L_12d6c885;
L_12d6c849:;
  /* 12d6c849 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c84d jne 0x12d6c885 */
  if (!C.zf) goto L_12d6c885;
  /* 12d6c84f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6c852 mov eax, dword ptr [0x12d7e810] */
  EAX = (r32((uint32_t)(0x12d7e810)));
  /* 12d6c857 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d6c85a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d6c85d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6c860 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6c862 je 0x12d6c885 */
  if (C.zf) goto L_12d6c885;
  /* 12d6c864 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6c867 mov ecx, dword ptr [0x12d7e810] */
  ECX = (r32((uint32_t)(0x12d7e810)));
  /* 12d6c86d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d6c870 push edx */
  push32((uint32_t)(EDX));
  /* 12d6c871 call 0x12d6c660 */
  push32(0x12d6c876u); f_12d6c660();
  /* 12d6c876 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c879 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c87c jne 0x12d6c885 */
  if (!C.zf) goto L_12d6c885;
  /* 12d6c87e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12d6c885:;
  /* 12d6c885 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6c888 mov ecx, dword ptr [0x12d7e810] */
  ECX = (r32((uint32_t)(0x12d7e810)));
  /* 12d6c88e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d6c891 push edx */
  push32((uint32_t)(EDX));
  /* 12d6c892 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6c895 push eax */
  push32((uint32_t)(EAX));
  /* 12d6c896 call 0x12d6bc40 */
  push32(0x12d6c89bu); f_12d6bc40();
  /* 12d6c89b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6c89e:;
  /* 12d6c89e jmp 0x12d6c7a7 */
  goto L_12d6c7a7;
L_12d6c8a3:;
  /* 12d6c8a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6c8a5 call 0x12d66820 */
  push32(0x12d6c8aau); f_12d66820();
  /* 12d6c8aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c8ad cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c8b1 jne 0x12d6c8b8 */
  if (!C.zf) goto L_12d6c8b8;
  /* 12d6c8b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6c8b6 jmp 0x12d6c8bb */
  goto L_12d6c8bb;
L_12d6c8b8:;
  /* 12d6c8b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d6c8bb:;
  /* 12d6c8bb mov esp, ebp */
  ESP = (EBP);
  /* 12d6c8bd pop ebp */
  EBP = (pop32());
  /* 12d6c8be ret  */
  ESPCHK(0x12d6c780u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12d6c8c0 (15 bytes, 7 insns) */
void f_12d6c8c0(void) {
  FTRACE(0x12d6c8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6c8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6c8c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6c8c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6c8c5 call 0x12d61cf0 */
  push32(0x12d6c8cau); f_12d61cf0();
  /* 12d6c8ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c8cd pop ebp */
  EBP = (pop32());
  /* 12d6c8ce ret  */
  ESPCHK(0x12d6c8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8d0 @ 0x12d6c8d0 (1007 bytes, 269 insns) */
void f_12d6c8d0(void) {
  FTRACE(0x12d6c8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6c8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6c8d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6c8d3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6c8d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c8dd jl 0x12d6c8e5 */
  if ((C.sf!=C.of)) goto L_12d6c8e5;
  /* 12d6c8df cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c8e3 jle 0x12d6c8ec */
  if ((C.zf||C.sf!=C.of)) goto L_12d6c8ec;
L_12d6c8e5:;
  /* 12d6c8e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6c8e7 jmp 0x12d6ccbb */
  goto L_12d6ccbb;
L_12d6c8ec:;
  /* 12d6c8ec push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d6c8ee call 0x12d66780 */
  push32(0x12d6c8f3u); f_12d66780();
  /* 12d6c8f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c8f6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d6c8fd mov eax, dword ptr [0x12d7e7fc] */
  EAX = (r32((uint32_t)(0x12d7e7fc)));
  /* 12d6c902 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c905 mov dword ptr [0x12d7e7fc], eax */
  w32((uint32_t)(0x12d7e7fc), (EAX));
L_12d6c90a:;
  /* 12d6c90a cmp dword ptr [0x12d7e80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c911 je 0x12d6c91d */
  if (C.zf) goto L_12d6c91d;
  /* 12d6c913 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6c915 call dword ptr [0x12d80274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80274))), 0x12d6c91bu);
  /* 12d6c91b jmp 0x12d6c90a */
  goto L_12d6c90a;
L_12d6c91d:;
  /* 12d6c91d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c921 je 0x12d6c961 */
  if (C.zf) goto L_12d6c961;
  /* 12d6c923 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c927 je 0x12d6c941 */
  if (C.zf) goto L_12d6c941;
  /* 12d6c929 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6c92c push ecx */
  push32((uint32_t)(ECX));
  /* 12d6c92d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c930 push edx */
  push32((uint32_t)(EDX));
  /* 12d6c931 call 0x12d6ccc0 */
  push32(0x12d6c936u); f_12d6ccc0();
  /* 12d6c936 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c939 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12d6c93f jmp 0x12d6c953 */
  goto L_12d6c953;
L_12d6c941:;
  /* 12d6c941 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6c944 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6c947 mov ecx, dword ptr [eax + 0x12d7d4fc] */
  ECX = (r32((uint32_t)(EAX + 0x12d7d4fc)));
  /* 12d6c94d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12d6c953:;
  /* 12d6c953 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12d6c959 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d6c95c jmp 0x12d6cc9b */
  goto L_12d6cc9b;
L_12d6c961:;
  /* 12d6c961 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12d6c968 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d6c96f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c973 je 0x12d6cc93 */
  if (C.zf) goto L_12d6cc93;
  /* 12d6c979 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6c97c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6c97f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c982 jne 0x12d6cba4 */
  if (!C.zf) goto L_12d6cba4;
  /* 12d6c988 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6c98b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12d6c98f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c992 jne 0x12d6cba4 */
  if (!C.zf) goto L_12d6cba4;
  /* 12d6c998 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6c99b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 12d6c99f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c9a2 jne 0x12d6cba4 */
  if (!C.zf) goto L_12d6cba4;
  /* 12d6c9a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6c9ab mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12d6c9b1:;
  /* 12d6c9b1 push 0x12d79fcc */
  push32((uint32_t)(0x12d79fccu));
  /* 12d6c9b6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d6c9bc push ecx */
  push32((uint32_t)(ECX));
  /* 12d6c9bd call 0x12d6eb20 */
  push32(0x12d6c9c2u); f_12d6eb20();
  /* 12d6c9c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6c9c5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 12d6c9cb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c9d2 je 0x12d6c9fd */
  if (C.zf) goto L_12d6c9fd;
  /* 12d6c9d4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d6c9da sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6c9e0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12d6c9e6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c9ed je 0x12d6c9fd */
  if (C.zf) goto L_12d6c9fd;
  /* 12d6c9ef mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d6c9f5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6c9f8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6c9fb jne 0x12d6ca23 */
  if (!C.zf) goto L_12d6ca23;
L_12d6c9fd:;
  /* 12d6c9fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ca01 je 0x12d6ca1c */
  if (C.zf) goto L_12d6ca1c;
  /* 12d6ca03 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d6ca05 call 0x12d66820 */
  push32(0x12d6ca0au); f_12d66820();
  /* 12d6ca0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ca0d mov edx, dword ptr [0x12d7e7fc] */
  EDX = (r32((uint32_t)(0x12d7e7fc)));
  /* 12d6ca13 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6ca16 mov dword ptr [0x12d7e7fc], edx */
  w32((uint32_t)(0x12d7e7fc), (EDX));
L_12d6ca1c:;
  /* 12d6ca1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6ca1e jmp 0x12d6ccbb */
  goto L_12d6ccbb;
L_12d6ca23:;
  /* 12d6ca23 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12d6ca2a jmp 0x12d6ca35 */
  goto L_12d6ca35;
L_12d6ca2c:;
  /* 12d6ca2c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6ca2f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ca32 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12d6ca35:;
  /* 12d6ca35 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ca39 jg 0x12d6ca83 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d6ca83;
  /* 12d6ca3b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12d6ca41 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6ca42 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d6ca48 push edx */
  push32((uint32_t)(EDX));
  /* 12d6ca49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6ca4c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6ca4f mov ecx, dword ptr [eax + 0x12d7d4f8] */
  ECX = (r32((uint32_t)(EAX + 0x12d7d4f8)));
  /* 12d6ca55 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6ca56 call 0x12d6eae0 */
  push32(0x12d6ca5bu); f_12d6eae0();
  /* 12d6ca5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ca5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6ca60 jne 0x12d6ca81 */
  if (!C.zf) goto L_12d6ca81;
  /* 12d6ca62 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6ca65 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6ca68 mov eax, dword ptr [edx + 0x12d7d4f8] */
  EAX = (r32((uint32_t)(EDX + 0x12d7d4f8)));
  /* 12d6ca6e push eax */
  push32((uint32_t)(EAX));
  /* 12d6ca6f call 0x12d65bb0 */
  push32(0x12d6ca74u); f_12d65bb0();
  /* 12d6ca74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ca77 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ca7d jne 0x12d6ca81 */
  if (!C.zf) goto L_12d6ca81;
  /* 12d6ca7f jmp 0x12d6ca83 */
  goto L_12d6ca83;
L_12d6ca81:;
  /* 12d6ca81 jmp 0x12d6ca2c */
  goto L_12d6ca2c;
L_12d6ca83:;
  /* 12d6ca83 push 0x12d79fc8 */
  push32((uint32_t)(0x12d79fc8u));
  /* 12d6ca88 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d6ca8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ca91 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12d6ca97 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d6ca9d push edx */
  push32((uint32_t)(EDX));
  /* 12d6ca9e call 0x12d6eaa0 */
  push32(0x12d6caa3u); f_12d6eaa0();
  /* 12d6caa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6caa6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 12d6caac cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cab3 jne 0x12d6cae9 */
  if (!C.zf) goto L_12d6cae9;
  /* 12d6cab5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d6cabb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6cabe cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cac1 je 0x12d6cae9 */
  if (C.zf) goto L_12d6cae9;
  /* 12d6cac3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cac7 je 0x12d6cae2 */
  if (C.zf) goto L_12d6cae2;
  /* 12d6cac9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d6cacb call 0x12d66820 */
  push32(0x12d6cad0u); f_12d66820();
  /* 12d6cad0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cad3 mov edx, dword ptr [0x12d7e7fc] */
  EDX = (r32((uint32_t)(0x12d7e7fc)));
  /* 12d6cad9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6cadc mov dword ptr [0x12d7e7fc], edx */
  w32((uint32_t)(0x12d7e7fc), (EDX));
L_12d6cae2:;
  /* 12d6cae2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6cae4 jmp 0x12d6ccbb */
  goto L_12d6ccbb;
L_12d6cae9:;
  /* 12d6cae9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6caed jg 0x12d6cb3a */
  if ((!C.zf&&C.sf==C.of)) goto L_12d6cb3a;
  /* 12d6caef mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12d6caf5 push eax */
  push32((uint32_t)(EAX));
  /* 12d6caf6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d6cafc push ecx */
  push32((uint32_t)(ECX));
  /* 12d6cafd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12d6cb03 push edx */
  push32((uint32_t)(EDX));
  /* 12d6cb04 call 0x12d665a0 */
  push32(0x12d6cb09u); f_12d665a0();
  /* 12d6cb09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cb0c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12d6cb12 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 12d6cb1a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12d6cb20 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6cb21 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6cb24 push edx */
  push32((uint32_t)(EDX));
  /* 12d6cb25 call 0x12d6ccc0 */
  push32(0x12d6cb2au); f_12d6ccc0();
  /* 12d6cb2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cb2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6cb2f je 0x12d6cb3a */
  if (C.zf) goto L_12d6cb3a;
  /* 12d6cb31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6cb34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cb37 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d6cb3a:;
  /* 12d6cb3a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d6cb40 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cb46 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12d6cb4c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d6cb52 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d6cb55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6cb57 je 0x12d6cb68 */
  if (C.zf) goto L_12d6cb68;
  /* 12d6cb59 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d6cb5f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cb62 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12d6cb68:;
  /* 12d6cb68 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d6cb6e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d6cb71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6cb73 jne 0x12d6c9b1 */
  if (!C.zf) goto L_12d6c9b1;
  /* 12d6cb79 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cb7d je 0x12d6cb8c */
  if (C.zf) goto L_12d6cb8c;
  /* 12d6cb7f call 0x12d6ce60 */
  push32(0x12d6cb84u); f_12d6ce60();
  /* 12d6cb84 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 12d6cb8a jmp 0x12d6cb96 */
  goto L_12d6cb96;
L_12d6cb8c:;
  /* 12d6cb8c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12d6cb96:;
  /* 12d6cb96 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 12d6cb9c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6cb9f jmp 0x12d6cc91 */
  goto L_12d6cc91;
L_12d6cba4:;
  /* 12d6cba4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6cba7 push edx */
  push32((uint32_t)(EDX));
  /* 12d6cba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6cbaa push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6cbac lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12d6cbb2 push eax */
  push32((uint32_t)(EAX));
  /* 12d6cbb3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6cbb6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6cbb7 call 0x12d6cf60 */
  push32(0x12d6cbbcu); f_12d6cf60();
  /* 12d6cbbc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cbbf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d6cbc2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cbc6 je 0x12d6cc91 */
  if (C.zf) goto L_12d6cc91;
  /* 12d6cbcc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d6cbd3 jmp 0x12d6cbde */
  goto L_12d6cbde;
L_12d6cbd5:;
  /* 12d6cbd5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6cbd8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cbdb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d6cbde:;
  /* 12d6cbde cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cbe2 jg 0x12d6cc40 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d6cc40;
  /* 12d6cbe4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cbe8 je 0x12d6cc3e */
  if (C.zf) goto L_12d6cc3e;
  /* 12d6cbea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6cbed imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6cbf0 mov ecx, dword ptr [eax + 0x12d7d4fc] */
  ECX = (r32((uint32_t)(EAX + 0x12d7d4fc)));
  /* 12d6cbf6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6cbf7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12d6cbfd push edx */
  push32((uint32_t)(EDX));
  /* 12d6cbfe call 0x12d6ea10 */
  push32(0x12d6cc03u); f_12d6ea10();
  /* 12d6cc03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cc06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6cc08 je 0x12d6cc35 */
  if (C.zf) goto L_12d6cc35;
  /* 12d6cc0a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12d6cc10 push eax */
  push32((uint32_t)(EAX));
  /* 12d6cc11 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6cc14 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6cc15 call 0x12d6ccc0 */
  push32(0x12d6cc1au); f_12d6ccc0();
  /* 12d6cc1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cc1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6cc1f je 0x12d6cc2c */
  if (C.zf) goto L_12d6cc2c;
  /* 12d6cc21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6cc24 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cc27 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d6cc2a jmp 0x12d6cc33 */
  goto L_12d6cc33;
L_12d6cc2c:;
  /* 12d6cc2c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12d6cc33:;
  /* 12d6cc33 jmp 0x12d6cc3e */
  goto L_12d6cc3e;
L_12d6cc35:;
  /* 12d6cc35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6cc38 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cc3b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d6cc3e:;
  /* 12d6cc3e jmp 0x12d6cbd5 */
  goto L_12d6cbd5;
L_12d6cc40:;
  /* 12d6cc40 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cc44 je 0x12d6cc6b */
  if (C.zf) goto L_12d6cc6b;
  /* 12d6cc46 call 0x12d6ce60 */
  push32(0x12d6cc4bu); f_12d6ce60();
  /* 12d6cc4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d6cc4e push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6cc50 mov ecx, dword ptr [0x12d7d4fc] */
  ECX = (r32((uint32_t)(0x12d7d4fc)));
  /* 12d6cc56 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6cc57 call 0x12d63810 */
  push32(0x12d6cc5cu); f_12d63810();
  /* 12d6cc5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cc5f mov dword ptr [0x12d7d4fc], 0 */
  w32((uint32_t)(0x12d7d4fc), (0x0u));
  /* 12d6cc69 jmp 0x12d6cc91 */
  goto L_12d6cc91;
L_12d6cc6b:;
  /* 12d6cc6b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cc6f je 0x12d6cc7e */
  if (C.zf) goto L_12d6cc7e;
  /* 12d6cc71 call 0x12d6ce60 */
  push32(0x12d6cc76u); f_12d6ce60();
  /* 12d6cc76 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 12d6cc7c jmp 0x12d6cc88 */
  goto L_12d6cc88;
L_12d6cc7e:;
  /* 12d6cc7e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12d6cc88:;
  /* 12d6cc88 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 12d6cc8e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d6cc91:;
  /* 12d6cc91 jmp 0x12d6cc9b */
  goto L_12d6cc9b;
L_12d6cc93:;
  /* 12d6cc93 call 0x12d6ce60 */
  push32(0x12d6cc98u); f_12d6ce60();
  /* 12d6cc98 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d6cc9b:;
  /* 12d6cc9b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cc9f je 0x12d6ccb8 */
  if (C.zf) goto L_12d6ccb8;
  /* 12d6cca1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d6cca3 call 0x12d66820 */
  push32(0x12d6cca8u); f_12d66820();
  /* 12d6cca8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ccab mov eax, dword ptr [0x12d7e7fc] */
  EAX = (r32((uint32_t)(0x12d7e7fc)));
  /* 12d6ccb0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6ccb3 mov dword ptr [0x12d7e7fc], eax */
  w32((uint32_t)(0x12d7e7fc), (EAX));
L_12d6ccb8:;
  /* 12d6ccb8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d6ccbb:;
  /* 12d6ccbb mov esp, ebp */
  ESP = (EBP);
  /* 12d6ccbd pop ebp */
  EBP = (pop32());
  /* 12d6ccbe ret  */
  ESPCHK(0x12d6c8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccc0 @ 0x12d6ccc0 (403 bytes, 117 insns) */
void f_12d6ccc0(void) {
  FTRACE(0x12d6ccc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6ccc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6ccc1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6ccc3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6ccc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6cccc push eax */
  push32((uint32_t)(EAX));
  /* 12d6cccd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12d6ccd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6ccd4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 12d6ccda push edx */
  push32((uint32_t)(EDX));
  /* 12d6ccdb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12d6cce1 push eax */
  push32((uint32_t)(EAX));
  /* 12d6cce2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6cce5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6cce6 call 0x12d6cf60 */
  push32(0x12d6ccebu); f_12d6cf60();
  /* 12d6cceb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ccee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6ccf0 jne 0x12d6ccf9 */
  if (!C.zf) goto L_12d6ccf9;
  /* 12d6ccf2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6ccf4 jmp 0x12d6ce4f */
  goto L_12d6ce4f;
L_12d6ccf9:;
  /* 12d6ccf9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 12d6ccfe push 0x12d79fd0 */
  push32((uint32_t)(0x12d79fd0u));
  /* 12d6cd03 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6cd05 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 12d6cd0b push edx */
  push32((uint32_t)(EDX));
  /* 12d6cd0c call 0x12d65bb0 */
  push32(0x12d6cd11u); f_12d65bb0();
  /* 12d6cd11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cd14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cd17 push eax */
  push32((uint32_t)(EAX));
  /* 12d6cd18 call 0x12d62d80 */
  push32(0x12d6cd1du); f_12d62d80();
  /* 12d6cd1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cd20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d6cd23 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cd27 jne 0x12d6cd30 */
  if (!C.zf) goto L_12d6cd30;
  /* 12d6cd29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6cd2b jmp 0x12d6ce4f */
  goto L_12d6ce4f;
L_12d6cd30:;
  /* 12d6cd30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6cd33 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6cd36 mov ecx, dword ptr [eax + 0x12d7d4fc] */
  ECX = (r32((uint32_t)(EAX + 0x12d7d4fc)));
  /* 12d6cd3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6cd3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6cd42 mov eax, dword ptr [edx*4 + 0x12d7e678] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d7e678)));
  /* 12d6cd49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6cd4c push 6 */
  push32((uint32_t)(0x6u));
  /* 12d6cd4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6cd51 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6cd54 add ecx, 0x12d7e6c8 */
  { uint32_t _a=(ECX),_b=(0x12d7e6c8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cd5a push ecx */
  push32((uint32_t)(ECX));
  /* 12d6cd5b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 12d6cd5e push edx */
  push32((uint32_t)(EDX));
  /* 12d6cd5f call 0x12d69660 */
  push32(0x12d6cd64u); f_12d69660();
  /* 12d6cd64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cd67 mov eax, dword ptr [0x12d7e690] */
  EAX = (r32((uint32_t)(0x12d7e690)));
  /* 12d6cd6c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d6cd6f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12d6cd75 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6cd76 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6cd79 push edx */
  push32((uint32_t)(EDX));
  /* 12d6cd7a call 0x12d65d30 */
  push32(0x12d6cd7fu); f_12d65d30();
  /* 12d6cd7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cd82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6cd85 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6cd88 mov dword ptr [ecx + 0x12d7d4fc], eax */
  w32((uint32_t)(ECX + 0x12d7d4fc), (EAX));
  /* 12d6cd8e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12d6cd94 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6cd9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6cd9d mov dword ptr [eax*4 + 0x12d7e678], edx */
  w32((uint32_t)(EAX*4 + 0x12d7e678), (EDX));
  /* 12d6cda4 push 6 */
  push32((uint32_t)(0x6u));
  /* 12d6cda6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 12d6cdac push ecx */
  push32((uint32_t)(ECX));
  /* 12d6cdad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6cdb0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6cdb3 add edx, 0x12d7e6c8 */
  { uint32_t _a=(EDX),_b=(0x12d7e6c8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cdb9 push edx */
  push32((uint32_t)(EDX));
  /* 12d6cdba call 0x12d69660 */
  push32(0x12d6cdbfu); f_12d69660();
  /* 12d6cdbf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cdc2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cdc6 jne 0x12d6cdd3 */
  if (!C.zf) goto L_12d6cdd3;
  /* 12d6cdc8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d6cdce mov dword ptr [0x12d7e690], eax */
  w32((uint32_t)(0x12d7e690), (EAX));
L_12d6cdd3:;
  /* 12d6cdd3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cdd7 jne 0x12d6cde5 */
  if (!C.zf) goto L_12d6cde5;
  /* 12d6cdd9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d6cddf mov dword ptr [0x12d7e694], ecx */
  w32((uint32_t)(0x12d7e694), (ECX));
L_12d6cde5:;
  /* 12d6cde5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6cde8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6cdeb call dword ptr [edx + 0x12d7d500] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x12d7d500))), 0x12d6cdf1u);
  /* 12d6cdf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6cdf3 je 0x12d6ce2c */
  if (C.zf) goto L_12d6ce2c;
  /* 12d6cdf5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6cdf8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6cdfb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6cdfe mov dword ptr [eax + 0x12d7d4fc], ecx */
  w32((uint32_t)(EAX + 0x12d7d4fc), (ECX));
  /* 12d6ce04 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6ce06 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6ce09 push edx */
  push32((uint32_t)(EDX));
  /* 12d6ce0a call 0x12d63810 */
  push32(0x12d6ce0fu); f_12d63810();
  /* 12d6ce0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ce12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ce15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6ce18 mov dword ptr [eax*4 + 0x12d7e678], ecx */
  w32((uint32_t)(EAX*4 + 0x12d7e678), (ECX));
  /* 12d6ce1f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6ce22 mov dword ptr [0x12d7e690], edx */
  w32((uint32_t)(0x12d7e690), (EDX));
  /* 12d6ce28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6ce2a jmp 0x12d6ce4f */
  goto L_12d6ce4f;
L_12d6ce2c:;
  /* 12d6ce2c cmp dword ptr [ebp - 0xc], 0x12d7d3e8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x12d7d3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ce33 je 0x12d6ce43 */
  if (C.zf) goto L_12d6ce43;
  /* 12d6ce35 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6ce37 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6ce3a push eax */
  push32((uint32_t)(EAX));
  /* 12d6ce3b call 0x12d63810 */
  push32(0x12d6ce40u); f_12d63810();
  /* 12d6ce40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6ce43:;
  /* 12d6ce43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ce46 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6ce49 mov eax, dword ptr [ecx + 0x12d7d4fc] */
  EAX = (r32((uint32_t)(ECX + 0x12d7d4fc)));
L_12d6ce4f:;
  /* 12d6ce4f mov esp, ebp */
  ESP = (EBP);
  /* 12d6ce51 pop ebp */
  EBP = (pop32());
  /* 12d6ce52 ret  */
  ESPCHK(0x12d6ccc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce60 @ 0x12d6ce60 (256 bytes, 72 insns) */
void f_12d6ce60(void) {
  FTRACE(0x12d6ce60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6ce60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6ce61 mov ebp, esp */
  EBP = (ESP);
  /* 12d6ce63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6ce66 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12d6ce6d cmp dword ptr [0x12d7d4fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7d4fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ce74 jne 0x12d6ce94 */
  if (!C.zf) goto L_12d6ce94;
  /* 12d6ce76 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 12d6ce7b push 0x12d79fd0 */
  push32((uint32_t)(0x12d79fd0u));
  /* 12d6ce80 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6ce82 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12d6ce87 call 0x12d62d80 */
  push32(0x12d6ce8cu); f_12d62d80();
  /* 12d6ce8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ce8f mov dword ptr [0x12d7d4fc], eax */
  w32((uint32_t)(0x12d7d4fc), (EAX));
L_12d6ce94:;
  /* 12d6ce94 mov eax, dword ptr [0x12d7d4fc] */
  EAX = (r32((uint32_t)(0x12d7d4fc)));
  /* 12d6ce99 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d6ce9c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d6cea3 jmp 0x12d6ceae */
  goto L_12d6ceae;
L_12d6cea5:;
  /* 12d6cea5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6cea8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ceab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d6ceae:;
  /* 12d6ceae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6ceb1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6ceb4 mov eax, dword ptr [edx + 0x12d7d4fc] */
  EAX = (r32((uint32_t)(EDX + 0x12d7d4fc)));
  /* 12d6ceba push eax */
  push32((uint32_t)(EAX));
  /* 12d6cebb push 0x12d79fdc */
  push32((uint32_t)(0x12d79fdcu));
  /* 12d6cec0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6cec3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6cec6 mov edx, dword ptr [ecx + 0x12d7d4f8] */
  EDX = (r32((uint32_t)(ECX + 0x12d7d4f8)));
  /* 12d6cecc push edx */
  push32((uint32_t)(EDX));
  /* 12d6cecd push 3 */
  push32((uint32_t)(0x3u));
  /* 12d6cecf mov eax, dword ptr [0x12d7d4fc] */
  EAX = (r32((uint32_t)(0x12d7d4fc)));
  /* 12d6ced4 push eax */
  push32((uint32_t)(EAX));
  /* 12d6ced5 call 0x12d6d100 */
  push32(0x12d6cedau); f_12d6d100();
  /* 12d6ceda add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cedd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cee1 jge 0x12d6cf29 */
  if ((C.sf==C.of)) goto L_12d6cf29;
  /* 12d6cee3 push 0x12d79fc8 */
  push32((uint32_t)(0x12d79fc8u));
  /* 12d6cee8 mov ecx, dword ptr [0x12d7d4fc] */
  ECX = (r32((uint32_t)(0x12d7d4fc)));
  /* 12d6ceee push ecx */
  push32((uint32_t)(ECX));
  /* 12d6ceef call 0x12d65d40 */
  push32(0x12d6cef4u); f_12d65d40();
  /* 12d6cef4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cef7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6cefa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cefd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6cf00 mov eax, dword ptr [edx + 0x12d7d4fc] */
  EAX = (r32((uint32_t)(EDX + 0x12d7d4fc)));
  /* 12d6cf06 push eax */
  push32((uint32_t)(EAX));
  /* 12d6cf07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6cf0a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6cf0d mov edx, dword ptr [ecx + 0x12d7d4fc] */
  EDX = (r32((uint32_t)(ECX + 0x12d7d4fc)));
  /* 12d6cf13 push edx */
  push32((uint32_t)(EDX));
  /* 12d6cf14 call 0x12d6ea10 */
  push32(0x12d6cf19u); f_12d6ea10();
  /* 12d6cf19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cf1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6cf1e je 0x12d6cf27 */
  if (C.zf) goto L_12d6cf27;
  /* 12d6cf20 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d6cf27:;
  /* 12d6cf27 jmp 0x12d6cf57 */
  goto L_12d6cf57;
L_12d6cf29:;
  /* 12d6cf29 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cf2d jne 0x12d6cf36 */
  if (!C.zf) goto L_12d6cf36;
  /* 12d6cf2f mov eax, dword ptr [0x12d7d4fc] */
  EAX = (r32((uint32_t)(0x12d7d4fc)));
  /* 12d6cf34 jmp 0x12d6cf5c */
  goto L_12d6cf5c;
L_12d6cf36:;
  /* 12d6cf36 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6cf38 mov eax, dword ptr [0x12d7d4fc] */
  EAX = (r32((uint32_t)(0x12d7d4fc)));
  /* 12d6cf3d push eax */
  push32((uint32_t)(EAX));
  /* 12d6cf3e call 0x12d63810 */
  push32(0x12d6cf43u); f_12d63810();
  /* 12d6cf43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cf46 mov dword ptr [0x12d7d4fc], 0 */
  w32((uint32_t)(0x12d7d4fc), (0x0u));
  /* 12d6cf50 mov eax, dword ptr [0x12d7d514] */
  EAX = (r32((uint32_t)(0x12d7d514)));
  /* 12d6cf55 jmp 0x12d6cf5c */
  goto L_12d6cf5c;
L_12d6cf57:;
  /* 12d6cf57 jmp 0x12d6cea5 */
  goto L_12d6cea5;
L_12d6cf5c:;
  /* 12d6cf5c mov esp, ebp */
  ESP = (EBP);
  /* 12d6cf5e pop ebp */
  EBP = (pop32());
  /* 12d6cf5f ret  */
  ESPCHK(0x12d6ce60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf60 @ 0x12d6cf60 (388 bytes, 115 insns) */
void f_12d6cf60(void) {
  FTRACE(0x12d6cf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6cf60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6cf61 mov ebp, esp */
  EBP = (ESP);
  /* 12d6cf63 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6cf69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cf6d jne 0x12d6cf76 */
  if (!C.zf) goto L_12d6cf76;
  /* 12d6cf6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6cf71 jmp 0x12d6d0e0 */
  goto L_12d6d0e0;
L_12d6cf76:;
  /* 12d6cf76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6cf79 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6cf7c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cf7f jne 0x12d6cfd0 */
  if (!C.zf) goto L_12d6cfd0;
  /* 12d6cf81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6cf84 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12d6cf88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6cf8a jne 0x12d6cfd0 */
  if (!C.zf) goto L_12d6cfd0;
  /* 12d6cf8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6cf8f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12d6cf92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6cf95 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12d6cf99 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cf9d je 0x12d6cfb9 */
  if (C.zf) goto L_12d6cfb9;
  /* 12d6cf9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6cfa2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12d6cfa7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6cfaa mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12d6cfb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6cfb3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12d6cfb9:;
  /* 12d6cfb9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6cfbd je 0x12d6cfc8 */
  if (C.zf) goto L_12d6cfc8;
  /* 12d6cfbf mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d6cfc2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12d6cfc8:;
  /* 12d6cfc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6cfcb jmp 0x12d6d0e0 */
  goto L_12d6d0e0;
L_12d6cfd0:;
  /* 12d6cfd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6cfd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6cfd4 push 0x12d7d470 */
  push32((uint32_t)(0x12d7d470u));
  /* 12d6cfd9 call 0x12d6ea10 */
  push32(0x12d6cfdeu); f_12d6ea10();
  /* 12d6cfde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cfe1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6cfe3 je 0x12d6d098 */
  if (C.zf) goto L_12d6d098;
  /* 12d6cfe9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6cfec push edx */
  push32((uint32_t)(EDX));
  /* 12d6cfed push 0x12d7d3ec */
  push32((uint32_t)(0x12d7d3ecu));
  /* 12d6cff2 call 0x12d6ea10 */
  push32(0x12d6cff7u); f_12d6ea10();
  /* 12d6cff7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6cffa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6cffc je 0x12d6d098 */
  if (C.zf) goto L_12d6d098;
  /* 12d6d002 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d005 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d006 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 12d6d00c push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d00d call 0x12d6d150 */
  push32(0x12d6d012u); f_12d6d150();
  /* 12d6d012 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d015 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6d017 je 0x12d6d020 */
  if (C.zf) goto L_12d6d020;
  /* 12d6d019 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6d01b jmp 0x12d6d0e0 */
  goto L_12d6d0e0;
L_12d6d020:;
  /* 12d6d020 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12d6d026 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d027 push 0x12d7e6a0 */
  push32((uint32_t)(0x12d7e6a0u));
  /* 12d6d02c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12d6d032 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d033 call 0x12d6eb60 */
  push32(0x12d6d038u); f_12d6eb60();
  /* 12d6d038 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d03b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6d03d jne 0x12d6d046 */
  if (!C.zf) goto L_12d6d046;
  /* 12d6d03f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6d041 jmp 0x12d6d0e0 */
  goto L_12d6d0e0;
L_12d6d046:;
  /* 12d6d046 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d048 mov cx, word ptr [0x12d7e6a4] */
  CX = (r16((uint32_t)(0x12d7e6a4)));
  /* 12d6d04f mov dword ptr [0x12d7e6a8], ecx */
  w32((uint32_t)(0x12d7e6a8), (ECX));
  /* 12d6d055 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12d6d05b push edx */
  push32((uint32_t)(EDX));
  /* 12d6d05c push 0x12d7d470 */
  push32((uint32_t)(0x12d7d470u));
  /* 12d6d061 call 0x12d6d2b0 */
  push32(0x12d6d066u); f_12d6d2b0();
  /* 12d6d066 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d069 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d06c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6d06f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6d071 je 0x12d6d086 */
  if (C.zf) goto L_12d6d086;
  /* 12d6d073 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d076 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d077 push 0x12d7d3ec */
  push32((uint32_t)(0x12d7d3ecu));
  /* 12d6d07c call 0x12d65d30 */
  push32(0x12d6d081u); f_12d65d30();
  /* 12d6d081 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d084 jmp 0x12d6d098 */
  goto L_12d6d098;
L_12d6d086:;
  /* 12d6d086 push 0x12d7d470 */
  push32((uint32_t)(0x12d7d470u));
  /* 12d6d08b push 0x12d7d3ec */
  push32((uint32_t)(0x12d7d3ecu));
  /* 12d6d090 call 0x12d65d30 */
  push32(0x12d6d095u); f_12d65d30();
  /* 12d6d095 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6d098:;
  /* 12d6d098 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d09c je 0x12d6d0b1 */
  if (C.zf) goto L_12d6d0b1;
  /* 12d6d09e push 6 */
  push32((uint32_t)(0x6u));
  /* 12d6d0a0 push 0x12d7e6a0 */
  push32((uint32_t)(0x12d7e6a0u));
  /* 12d6d0a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6d0a8 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d0a9 call 0x12d69660 */
  push32(0x12d6d0aeu); f_12d69660();
  /* 12d6d0ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6d0b1:;
  /* 12d6d0b1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d0b5 je 0x12d6d0ca */
  if (C.zf) goto L_12d6d0ca;
  /* 12d6d0b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d6d0b9 push 0x12d7e6a8 */
  push32((uint32_t)(0x12d7e6a8u));
  /* 12d6d0be mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d6d0c1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d0c2 call 0x12d69660 */
  push32(0x12d6d0c7u); f_12d69660();
  /* 12d6d0c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6d0ca:;
  /* 12d6d0ca push 0x12d7d470 */
  push32((uint32_t)(0x12d7d470u));
  /* 12d6d0cf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6d0d2 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d0d3 call 0x12d65d30 */
  push32(0x12d6d0d8u); f_12d65d30();
  /* 12d6d0d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d0db mov eax, 0x12d7d470 */
  EAX = (0x12d7d470u);
L_12d6d0e0:;
  /* 12d6d0e0 mov esp, ebp */
  ESP = (EBP);
  /* 12d6d0e2 pop ebp */
  EBP = (pop32());
  /* 12d6d0e3 ret  */
  ESPCHK(0x12d6cf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0f0 @ 0x12d6d0f0 (7 bytes, 5 insns) */
void f_12d6d0f0(void) {
  FTRACE(0x12d6d0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6d0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6d0f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6d0f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6d0f5 pop ebp */
  EBP = (pop32());
  /* 12d6d0f6 ret  */
  ESPCHK(0x12d6d0f0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12d6d100 (79 bytes, 28 insns) */
void f_12d6d100(void) {
  FTRACE(0x12d6d100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6d100 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6d101 mov ebp, esp */
  EBP = (ESP);
  /* 12d6d103 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6d106 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12d6d109 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6d10c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d6d113 jmp 0x12d6d11e */
  goto L_12d6d11e;
L_12d6d115:;
  /* 12d6d115 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6d118 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d11b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d6d11e:;
  /* 12d6d11e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6d121 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d124 jge 0x12d6d144 */
  if ((C.sf==C.of)) goto L_12d6d144;
  /* 12d6d126 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d129 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d12c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6d12f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d132 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12d6d135 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d139 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d13a call 0x12d65d40 */
  push32(0x12d6d13fu); f_12d65d40();
  /* 12d6d13f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d142 jmp 0x12d6d115 */
  goto L_12d6d115;
L_12d6d144:;
  /* 12d6d144 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d6d14b mov esp, ebp */
  ESP = (EBP);
  /* 12d6d14d pop ebp */
  EBP = (pop32());
  /* 12d6d14e ret  */
  ESPCHK(0x12d6d100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d150 @ 0x12d6d150 (349 bytes, 122 insns) */
void f_12d6d150(void) {
  FTRACE(0x12d6d150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6d150 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6d151 mov ebp, esp */
  EBP = (ESP);
  /* 12d6d153 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6d156 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12d6d15b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6d15d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d160 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d161 call 0x12d66af0 */
  push32(0x12d6d166u); f_12d66af0();
  /* 12d6d166 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d169 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6d16c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d6d16f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6d171 jne 0x12d6d17a */
  if (!C.zf) goto L_12d6d17a;
  /* 12d6d173 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6d175 jmp 0x12d6d2a9 */
  goto L_12d6d2a9;
L_12d6d17a:;
  /* 12d6d17a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6d17d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6d180 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d183 jne 0x12d6d1b0 */
  if (!C.zf) goto L_12d6d1b0;
  /* 12d6d185 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6d188 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12d6d18c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6d18e je 0x12d6d1b0 */
  if (C.zf) goto L_12d6d1b0;
  /* 12d6d190 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6d193 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d196 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d197 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d19a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d1a0 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d1a1 call 0x12d65d30 */
  push32(0x12d6d1a6u); f_12d65d30();
  /* 12d6d1a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d1a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6d1ab jmp 0x12d6d2a9 */
  goto L_12d6d2a9;
L_12d6d1b0:;
  /* 12d6d1b0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d6d1b7 jmp 0x12d6d1c2 */
  goto L_12d6d1c2;
L_12d6d1b9:;
  /* 12d6d1b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d1bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d1bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d6d1c2:;
  /* 12d6d1c2 push 0x12d79fe0 */
  push32((uint32_t)(0x12d79fe0u));
  /* 12d6d1c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6d1ca push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d1cb call 0x12d6eaa0 */
  push32(0x12d6d1d0u); f_12d6eaa0();
  /* 12d6d1d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d1d3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d6d1d6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d1da jne 0x12d6d1e4 */
  if (!C.zf) goto L_12d6d1e4;
  /* 12d6d1dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6d1df jmp 0x12d6d2a9 */
  goto L_12d6d2a9;
L_12d6d1e4:;
  /* 12d6d1e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6d1e7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d1ea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d6d1ec mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12d6d1ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d1f3 jne 0x12d6d21a */
  if (!C.zf) goto L_12d6d21a;
  /* 12d6d1f5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d1f9 jge 0x12d6d21a */
  if ((C.sf==C.of)) goto L_12d6d21a;
  /* 12d6d1fb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d6d1ff cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d202 je 0x12d6d21a */
  if (C.zf) goto L_12d6d21a;
  /* 12d6d204 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d207 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d208 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6d20b push eax */
  push32((uint32_t)(EAX));
  /* 12d6d20c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d20f push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d210 call 0x12d665a0 */
  push32(0x12d6d215u); f_12d665a0();
  /* 12d6d215 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d218 jmp 0x12d6d280 */
  goto L_12d6d280;
L_12d6d21a:;
  /* 12d6d21a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d21e jne 0x12d6d248 */
  if (!C.zf) goto L_12d6d248;
  /* 12d6d220 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d224 jge 0x12d6d248 */
  if ((C.sf==C.of)) goto L_12d6d248;
  /* 12d6d226 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d6d22a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d22d je 0x12d6d248 */
  if (C.zf) goto L_12d6d248;
  /* 12d6d22f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d232 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d233 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6d236 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d237 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d23a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d23d push edx */
  push32((uint32_t)(EDX));
  /* 12d6d23e call 0x12d665a0 */
  push32(0x12d6d243u); f_12d665a0();
  /* 12d6d243 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d246 jmp 0x12d6d280 */
  goto L_12d6d280;
L_12d6d248:;
  /* 12d6d248 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d24c jne 0x12d6d27b */
  if (!C.zf) goto L_12d6d27b;
  /* 12d6d24e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d6d252 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6d254 je 0x12d6d25f */
  if (C.zf) goto L_12d6d25f;
  /* 12d6d256 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d6d25a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d25d jne 0x12d6d27b */
  if (!C.zf) goto L_12d6d27b;
L_12d6d25f:;
  /* 12d6d25f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d262 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d263 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6d266 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d267 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d26a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d270 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d271 call 0x12d665a0 */
  push32(0x12d6d276u); f_12d665a0();
  /* 12d6d276 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d279 jmp 0x12d6d280 */
  goto L_12d6d280;
L_12d6d27b:;
  /* 12d6d27b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6d27e jmp 0x12d6d2a9 */
  goto L_12d6d2a9;
L_12d6d280:;
  /* 12d6d280 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d6d284 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d287 jne 0x12d6d28b */
  if (!C.zf) goto L_12d6d28b;
  /* 12d6d289 jmp 0x12d6d2a7 */
  goto L_12d6d2a7;
L_12d6d28b:;
  /* 12d6d28b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d6d28f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6d291 jne 0x12d6d295 */
  if (!C.zf) goto L_12d6d295;
  /* 12d6d293 jmp 0x12d6d2a7 */
  goto L_12d6d2a7;
L_12d6d295:;
  /* 12d6d295 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d298 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6d29b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12d6d29f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12d6d2a2 jmp 0x12d6d1b9 */
  goto L_12d6d1b9;
L_12d6d2a7:;
  /* 12d6d2a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d6d2a9:;
  /* 12d6d2a9 mov esp, ebp */
  ESP = (EBP);
  /* 12d6d2ab pop ebp */
  EBP = (pop32());
  /* 12d6d2ac ret  */
  ESPCHK(0x12d6d150u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12d6d2b0 (101 bytes, 36 insns) */
void f_12d6d2b0(void) {
  FTRACE(0x12d6d2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6d2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6d2b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6d2b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6d2b6 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d2b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d2ba push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d2bb call 0x12d65d30 */
  push32(0x12d6d2c0u); f_12d65d30();
  /* 12d6d2c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d2c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6d2c6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12d6d2ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6d2cc je 0x12d6d2e8 */
  if (C.zf) goto L_12d6d2e8;
  /* 12d6d2ce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6d2d1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d2d4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d2d5 push 0x12d79fe8 */
  push32((uint32_t)(0x12d79fe8u));
  /* 12d6d2da push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6d2dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d2df push edx */
  push32((uint32_t)(EDX));
  /* 12d6d2e0 call 0x12d6d100 */
  push32(0x12d6d2e5u); f_12d6d100();
  /* 12d6d2e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6d2e8:;
  /* 12d6d2e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6d2eb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12d6d2f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6d2f4 je 0x12d6d313 */
  if (C.zf) goto L_12d6d313;
  /* 12d6d2f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6d2f9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d2ff push edx */
  push32((uint32_t)(EDX));
  /* 12d6d300 push 0x12d79fe4 */
  push32((uint32_t)(0x12d79fe4u));
  /* 12d6d305 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6d307 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d30a push eax */
  push32((uint32_t)(EAX));
  /* 12d6d30b call 0x12d6d100 */
  push32(0x12d6d310u); f_12d6d100();
  /* 12d6d310 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6d313:;
  /* 12d6d313 pop ebp */
  EBP = (pop32());
  /* 12d6d314 ret  */
  ESPCHK(0x12d6d2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d320 @ 0x12d6d320 (130 bytes, 50 insns) */
void f_12d6d320(void) {
  FTRACE(0x12d6d320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6d320 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6d321 mov ebp, esp */
  EBP = (ESP);
  /* 12d6d323 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d324 push ebx */
  push32((uint32_t)(EBX));
  /* 12d6d325 push esi */
  push32((uint32_t)(ESI));
  /* 12d6d326 push edi */
  push32((uint32_t)(EDI));
  /* 12d6d327 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d6d32e:;
  /* 12d6d32e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d332 jne 0x12d6d352 */
  if (!C.zf) goto L_12d6d352;
  /* 12d6d334 push 0x12d79ff8 */
  push32((uint32_t)(0x12d79ff8u));
  /* 12d6d339 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6d33b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12d6d33d push 0x12d79fec */
  push32((uint32_t)(0x12d79fecu));
  /* 12d6d342 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6d344 call 0x12d61e40 */
  push32(0x12d6d349u); f_12d61e40();
  /* 12d6d349 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d34c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d34f jne 0x12d6d352 */
  if (!C.zf) goto L_12d6d352;
  /* 12d6d351 int3  */
  x86_unimpl("int3 @ 0x12d6d351");
L_12d6d352:;
  /* 12d6d352 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6d354 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6d356 jne 0x12d6d32e */
  if (!C.zf) goto L_12d6d32e;
  /* 12d6d358 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d35b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d6d35e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6d361 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6d363 je 0x12d6d371 */
  if (C.zf) goto L_12d6d371;
  /* 12d6d365 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d368 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12d6d36f jmp 0x12d6d398 */
  goto L_12d6d398;
L_12d6d371:;
  /* 12d6d371 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d374 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d375 call 0x12d6bb90 */
  push32(0x12d6d37au); f_12d6bb90();
  /* 12d6d37a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d37d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d380 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d381 call 0x12d6d3b0 */
  push32(0x12d6d386u); f_12d6d3b0();
  /* 12d6d386 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d389 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6d38c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d38f push eax */
  push32((uint32_t)(EAX));
  /* 12d6d390 call 0x12d6bc00 */
  push32(0x12d6d395u); f_12d6bc00();
  /* 12d6d395 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6d398:;
  /* 12d6d398 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d39b pop edi */
  EDI = (pop32());
  /* 12d6d39c pop esi */
  ESI = (pop32());
  /* 12d6d39d pop ebx */
  EBX = (pop32());
  /* 12d6d39e mov esp, ebp */
  ESP = (EBP);
  /* 12d6d3a0 pop ebp */
  EBP = (pop32());
  /* 12d6d3a1 ret  */
  ESPCHK(0x12d6d320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3b0 @ 0x12d6d3b0 (190 bytes, 67 insns) */
void f_12d6d3b0(void) {
  FTRACE(0x12d6d3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6d3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6d3b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6d3b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6d3b6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d6d3b7 push esi */
  push32((uint32_t)(ESI));
  /* 12d6d3b8 push edi */
  push32((uint32_t)(EDI));
  /* 12d6d3b9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d6d3c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d3c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d6d3c6:;
  /* 12d6d3c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d3ca jne 0x12d6d3ea */
  if (!C.zf) goto L_12d6d3ea;
  /* 12d6d3cc push 0x12d79e98 */
  push32((uint32_t)(0x12d79e98u));
  /* 12d6d3d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6d3d3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12d6d3d5 push 0x12d79fec */
  push32((uint32_t)(0x12d79fecu));
  /* 12d6d3da push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6d3dc call 0x12d61e40 */
  push32(0x12d6d3e1u); f_12d61e40();
  /* 12d6d3e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d3e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d3e7 jne 0x12d6d3ea */
  if (!C.zf) goto L_12d6d3ea;
  /* 12d6d3e9 int3  */
  x86_unimpl("int3 @ 0x12d6d3e9");
L_12d6d3ea:;
  /* 12d6d3ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d3ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6d3ee jne 0x12d6d3c6 */
  if (!C.zf) goto L_12d6d3c6;
  /* 12d6d3f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6d3f3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d6d3f6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6d3fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6d3fd je 0x12d6d45a */
  if (C.zf) goto L_12d6d45a;
  /* 12d6d3ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6d402 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d403 call 0x12d6c6b0 */
  push32(0x12d6d408u); f_12d6c6b0();
  /* 12d6d408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d40b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6d40e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6d411 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d412 call 0x12d6fa30 */
  push32(0x12d6d417u); f_12d6fa30();
  /* 12d6d417 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d41a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6d41d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d6d420 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d421 call 0x12d6f900 */
  push32(0x12d6d426u); f_12d6f900();
  /* 12d6d426 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d429 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6d42b jge 0x12d6d436 */
  if ((C.sf==C.of)) goto L_12d6d436;
  /* 12d6d42d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d6d434 jmp 0x12d6d45a */
  goto L_12d6d45a;
L_12d6d436:;
  /* 12d6d436 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6d439 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d43d je 0x12d6d45a */
  if (C.zf) goto L_12d6d45a;
  /* 12d6d43f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6d441 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6d444 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12d6d447 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d448 call 0x12d63810 */
  push32(0x12d6d44du); f_12d63810();
  /* 12d6d44d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d450 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6d453 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12d6d45a:;
  /* 12d6d45a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6d45d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12d6d464 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d467 pop edi */
  EDI = (pop32());
  /* 12d6d468 pop esi */
  ESI = (pop32());
  /* 12d6d469 pop ebx */
  EBX = (pop32());
  /* 12d6d46a mov esp, ebp */
  ESP = (EBP);
  /* 12d6d46c pop ebp */
  EBP = (pop32());
  /* 12d6d46d ret  */
  ESPCHK(0x12d6d3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d470 @ 0x12d6d470 (210 bytes, 63 insns) */
void f_12d6d470(void) {
  FTRACE(0x12d6d470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6d470 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6d471 mov ebp, esp */
  EBP = (ESP);
  /* 12d6d473 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d474 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d477 cmp eax, dword ptr [0x12d7ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d47d jae 0x12d6d4a1 */
  if (!C.cf) goto L_12d6d4a1;
  /* 12d6d47f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d482 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d6d485 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d488 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6d48b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6d48e mov eax, dword ptr [ecx*4 + 0x12d7fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d7fe60)));
  /* 12d6d495 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d6d49a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d49d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6d49f jne 0x12d6d4b4 */
  if (!C.zf) goto L_12d6d4b4;
L_12d6d4a1:;
  /* 12d6d4a1 call 0x12d6ac50 */
  push32(0x12d6d4a6u); f_12d6ac50();
  /* 12d6d4a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d6d4ac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6d4af jmp 0x12d6d53e */
  goto L_12d6d53e;
L_12d6d4b4:;
  /* 12d6d4b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d4b7 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d4b8 call 0x12d6c470 */
  push32(0x12d6d4bdu); f_12d6c470();
  /* 12d6d4bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d4c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d4c3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d6d4c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d4c9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d4cc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6d4cf mov edx, dword ptr [eax*4 + 0x12d7fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d7fe60)));
  /* 12d6d4d6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12d6d4db and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6d4de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6d4e0 je 0x12d6d51d */
  if (C.zf) goto L_12d6d51d;
  /* 12d6d4e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d4e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d4e6 call 0x12d6c2f0 */
  push32(0x12d6d4ebu); f_12d6c2f0();
  /* 12d6d4eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d4ee push eax */
  push32((uint32_t)(EAX));
  /* 12d6d4ef call dword ptr [0x12d80270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80270))), 0x12d6d4f5u);
  /* 12d6d4f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6d4f7 jne 0x12d6d504 */
  if (!C.zf) goto L_12d6d504;
  /* 12d6d4f9 call dword ptr [0x12d802d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802d0))), 0x12d6d4ffu);
  /* 12d6d4ff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6d502 jmp 0x12d6d50b */
  goto L_12d6d50b;
L_12d6d504:;
  /* 12d6d504 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d6d50b:;
  /* 12d6d50b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d50f jne 0x12d6d513 */
  if (!C.zf) goto L_12d6d513;
  /* 12d6d511 jmp 0x12d6d52f */
  goto L_12d6d52f;
L_12d6d513:;
  /* 12d6d513 call 0x12d6ac60 */
  push32(0x12d6d518u); f_12d6ac60();
  /* 12d6d518 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d51b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d6d51d:;
  /* 12d6d51d call 0x12d6ac50 */
  push32(0x12d6d522u); f_12d6ac50();
  /* 12d6d522 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d6d528 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d6d52f:;
  /* 12d6d52f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d532 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d533 call 0x12d6c500 */
  push32(0x12d6d538u); f_12d6c500();
  /* 12d6d538 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d53b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d6d53e:;
  /* 12d6d53e mov esp, ebp */
  ESP = (EBP);
  /* 12d6d540 pop ebp */
  EBP = (pop32());
  /* 12d6d541 ret  */
  ESPCHK(0x12d6d470u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12d6d550 (219 bytes, 64 insns) */
void f_12d6d550(void) {
  FTRACE(0x12d6d550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6d550 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6d551 mov ebp, esp */
  EBP = (ESP);
  /* 12d6d553 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d554 cmp dword ptr [0x12d7e68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d55b je 0x12d6d5f1 */
  if (C.zf) goto L_12d6d5f1;
  /* 12d6d561 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12d6d563 push 0x12d7a008 */
  push32((uint32_t)(0x12d7a008u));
  /* 12d6d568 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6d56a push 0xac */
  push32((uint32_t)(0xacu));
  /* 12d6d56f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d571 call 0x12d63190 */
  push32(0x12d6d576u); f_12d63190();
  /* 12d6d576 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d579 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6d57c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d580 jne 0x12d6d58c */
  if (!C.zf) goto L_12d6d58c;
  /* 12d6d582 mov eax, 1 */
  EAX = (0x1u);
  /* 12d6d587 jmp 0x12d6d627 */
  goto L_12d6d627;
L_12d6d58c:;
  /* 12d6d58c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d58f push eax */
  push32((uint32_t)(EAX));
  /* 12d6d590 call 0x12d6d630 */
  push32(0x12d6d595u); f_12d6d630();
  /* 12d6d595 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6d59a je 0x12d6d5bd */
  if (C.zf) goto L_12d6d5bd;
  /* 12d6d59c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d59f push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d5a0 call 0x12d6dbc0 */
  push32(0x12d6d5a5u); f_12d6dbc0();
  /* 12d6d5a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d5a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6d5aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d5ad push edx */
  push32((uint32_t)(EDX));
  /* 12d6d5ae call 0x12d63810 */
  push32(0x12d6d5b3u); f_12d63810();
  /* 12d6d5b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d5b6 mov eax, 1 */
  EAX = (0x1u);
  /* 12d6d5bb jmp 0x12d6d627 */
  goto L_12d6d627;
L_12d6d5bd:;
  /* 12d6d5bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d5c0 mov dword ptr [0x12d7dcb8], eax */
  w32((uint32_t)(0x12d7dcb8), (EAX));
  /* 12d6d5c5 mov ecx, dword ptr [0x12d7e6ac] */
  ECX = (r32((uint32_t)(0x12d7e6ac)));
  /* 12d6d5cb push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d5cc call 0x12d6dbc0 */
  push32(0x12d6d5d1u); f_12d6dbc0();
  /* 12d6d5d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d5d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6d5d6 mov edx, dword ptr [0x12d7e6ac] */
  EDX = (r32((uint32_t)(0x12d7e6ac)));
  /* 12d6d5dc push edx */
  push32((uint32_t)(EDX));
  /* 12d6d5dd call 0x12d63810 */
  push32(0x12d6d5e2u); f_12d63810();
  /* 12d6d5e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d5e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d5e8 mov dword ptr [0x12d7e6ac], eax */
  w32((uint32_t)(0x12d7e6ac), (EAX));
  /* 12d6d5ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6d5ef jmp 0x12d6d627 */
  goto L_12d6d627;
L_12d6d5f1:;
  /* 12d6d5f1 mov dword ptr [0x12d7dcb8], 0x12d7dcc0 */
  w32((uint32_t)(0x12d7dcb8), (0x12d7dcc0u));
  /* 12d6d5fb mov ecx, dword ptr [0x12d7e6ac] */
  ECX = (r32((uint32_t)(0x12d7e6ac)));
  /* 12d6d601 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6d602 call 0x12d6dbc0 */
  push32(0x12d6d607u); f_12d6dbc0();
  /* 12d6d607 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d60a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6d60c mov edx, dword ptr [0x12d7e6ac] */
  EDX = (r32((uint32_t)(0x12d7e6ac)));
  /* 12d6d612 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d613 call 0x12d63810 */
  push32(0x12d6d618u); f_12d63810();
  /* 12d6d618 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d61b mov dword ptr [0x12d7e6ac], 0 */
  w32((uint32_t)(0x12d7e6ac), (0x0u));
  /* 12d6d625 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d6d627:;
  /* 12d6d627 mov esp, ebp */
  ESP = (EBP);
  /* 12d6d629 pop ebp */
  EBP = (pop32());
  /* 12d6d62a ret  */
  ESPCHK(0x12d6d550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d630 @ 0x12d6d630 (1423 bytes, 533 insns) */
void f_12d6d630(void) {
  FTRACE(0x12d6d630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6d630 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6d631 mov ebp, esp */
  EBP = (ESP);
  /* 12d6d633 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6d636 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d6d63d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6d63f mov ax, word ptr [0x12d7e6e6] */
  AX = (r16((uint32_t)(0x12d7e6e6)));
  /* 12d6d645 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6d648 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d64a mov cx, word ptr [0x12d7e6e8] */
  CX = (r16((uint32_t)(0x12d7e6e8)));
  /* 12d6d651 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6d654 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6d658 jne 0x12d6d662 */
  if (!C.zf) goto L_12d6d662;
  /* 12d6d65a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6d65d jmp 0x12d6dbbb */
  goto L_12d6dbbb;
L_12d6d662:;
  /* 12d6d662 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d665 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d668 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d669 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12d6d66b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d66e push eax */
  push32((uint32_t)(EAX));
  /* 12d6d66f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d671 call 0x12d70f40 */
  push32(0x12d6d676u); f_12d70f40();
  /* 12d6d676 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d679 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d67c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d67e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d681 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d684 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d687 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d688 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12d6d68a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d68d push eax */
  push32((uint32_t)(EAX));
  /* 12d6d68e push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d690 call 0x12d70f40 */
  push32(0x12d6d695u); f_12d70f40();
  /* 12d6d695 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d698 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d69b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d69d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d6a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d6a3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d6a6 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d6a7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12d6d6a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d6ac push eax */
  push32((uint32_t)(EAX));
  /* 12d6d6ad push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d6af call 0x12d70f40 */
  push32(0x12d6d6b4u); f_12d70f40();
  /* 12d6d6b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d6b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d6ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d6bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d6bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d6c2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d6c5 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d6c6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12d6d6c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d6cb push eax */
  push32((uint32_t)(EAX));
  /* 12d6d6cc push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d6ce call 0x12d70f40 */
  push32(0x12d6d6d3u); f_12d70f40();
  /* 12d6d6d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d6d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d6d9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d6db mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d6de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d6e1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d6e4 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d6e5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12d6d6e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d6ea push eax */
  push32((uint32_t)(EAX));
  /* 12d6d6eb push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d6ed call 0x12d70f40 */
  push32(0x12d6d6f2u); f_12d70f40();
  /* 12d6d6f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d6f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d6f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d6fa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d6fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d700 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d703 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d704 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12d6d706 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d709 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d70a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d70c call 0x12d70f40 */
  push32(0x12d6d711u); f_12d70f40();
  /* 12d6d711 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d714 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d717 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d719 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d71c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d71f push edx */
  push32((uint32_t)(EDX));
  /* 12d6d720 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12d6d722 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d725 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d726 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d728 call 0x12d70f40 */
  push32(0x12d6d72du); f_12d70f40();
  /* 12d6d72d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d730 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d733 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d735 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d738 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d73b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d73e push edx */
  push32((uint32_t)(EDX));
  /* 12d6d73f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12d6d741 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d744 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d745 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d747 call 0x12d70f40 */
  push32(0x12d6d74cu); f_12d70f40();
  /* 12d6d74c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d74f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d752 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d754 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d757 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d75a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d75d push edx */
  push32((uint32_t)(EDX));
  /* 12d6d75e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12d6d760 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d763 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d764 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d766 call 0x12d70f40 */
  push32(0x12d6d76bu); f_12d70f40();
  /* 12d6d76b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d76e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d771 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d773 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d776 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d779 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d77c push edx */
  push32((uint32_t)(EDX));
  /* 12d6d77d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 12d6d77f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d782 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d783 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d785 call 0x12d70f40 */
  push32(0x12d6d78au); f_12d70f40();
  /* 12d6d78a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d78d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d790 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d792 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d795 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d798 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d79b push edx */
  push32((uint32_t)(EDX));
  /* 12d6d79c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12d6d79e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d7a1 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d7a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d7a4 call 0x12d70f40 */
  push32(0x12d6d7a9u); f_12d70f40();
  /* 12d6d7a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d7ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d7af or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d7b1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d7b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d7b7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d7ba push edx */
  push32((uint32_t)(EDX));
  /* 12d6d7bb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12d6d7bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d7c0 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d7c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d7c3 call 0x12d70f40 */
  push32(0x12d6d7c8u); f_12d70f40();
  /* 12d6d7c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d7cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d7ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d7d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d7d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d7d6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d7d9 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d7da push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12d6d7dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d7df push eax */
  push32((uint32_t)(EAX));
  /* 12d6d7e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d7e2 call 0x12d70f40 */
  push32(0x12d6d7e7u); f_12d70f40();
  /* 12d6d7e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d7ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d7ed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d7ef mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d7f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d7f5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d7f8 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d7f9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12d6d7fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d7fe push eax */
  push32((uint32_t)(EAX));
  /* 12d6d7ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d801 call 0x12d70f40 */
  push32(0x12d6d806u); f_12d70f40();
  /* 12d6d806 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d809 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d80c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d80e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d811 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d814 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d817 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d818 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12d6d81a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d81d push eax */
  push32((uint32_t)(EAX));
  /* 12d6d81e push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d820 call 0x12d70f40 */
  push32(0x12d6d825u); f_12d70f40();
  /* 12d6d825 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d828 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d82b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d82d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d830 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d833 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d836 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d837 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12d6d839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d83c push eax */
  push32((uint32_t)(EAX));
  /* 12d6d83d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d83f call 0x12d70f40 */
  push32(0x12d6d844u); f_12d70f40();
  /* 12d6d844 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d847 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d84a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d84c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d84f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d852 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d855 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d856 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12d6d858 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d85b push eax */
  push32((uint32_t)(EAX));
  /* 12d6d85c push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d85e call 0x12d70f40 */
  push32(0x12d6d863u); f_12d70f40();
  /* 12d6d863 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d866 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d869 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d86b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d86e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d871 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d874 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d875 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12d6d877 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d87a push eax */
  push32((uint32_t)(EAX));
  /* 12d6d87b push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d87d call 0x12d70f40 */
  push32(0x12d6d882u); f_12d70f40();
  /* 12d6d882 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d885 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d888 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d88a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d88d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d890 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d893 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d894 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12d6d896 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d899 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d89a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d89c call 0x12d70f40 */
  push32(0x12d6d8a1u); f_12d70f40();
  /* 12d6d8a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d8a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d8a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d8a9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d8ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d8af add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d8b2 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d8b3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12d6d8b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d8b8 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d8b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d8bb call 0x12d70f40 */
  push32(0x12d6d8c0u); f_12d70f40();
  /* 12d6d8c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d8c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d8c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d8c8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d8cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d8ce add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d8d1 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d8d2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12d6d8d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d8d7 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d8d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d8da call 0x12d70f40 */
  push32(0x12d6d8dfu); f_12d70f40();
  /* 12d6d8df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d8e2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d8e5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d8e7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d8ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d8ed add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d8f0 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d8f1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12d6d8f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d8f6 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d8f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d8f9 call 0x12d70f40 */
  push32(0x12d6d8feu); f_12d70f40();
  /* 12d6d8fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d901 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d904 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d906 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d909 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d90c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d90f push edx */
  push32((uint32_t)(EDX));
  /* 12d6d910 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12d6d912 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d915 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d916 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d918 call 0x12d70f40 */
  push32(0x12d6d91du); f_12d70f40();
  /* 12d6d91d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d920 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d923 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d925 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d928 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d92b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d92e push edx */
  push32((uint32_t)(EDX));
  /* 12d6d92f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12d6d931 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d934 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d935 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d937 call 0x12d70f40 */
  push32(0x12d6d93cu); f_12d70f40();
  /* 12d6d93c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d93f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d942 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d944 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d947 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d94a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d94d push edx */
  push32((uint32_t)(EDX));
  /* 12d6d94e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12d6d950 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d953 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d954 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d956 call 0x12d70f40 */
  push32(0x12d6d95bu); f_12d70f40();
  /* 12d6d95b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d95e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d961 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d963 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d966 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d969 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d96c push edx */
  push32((uint32_t)(EDX));
  /* 12d6d96d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12d6d96f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d972 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d973 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d975 call 0x12d70f40 */
  push32(0x12d6d97au); f_12d70f40();
  /* 12d6d97a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d97d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d980 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d982 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d985 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d988 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d98b push edx */
  push32((uint32_t)(EDX));
  /* 12d6d98c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12d6d98e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d991 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d992 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d994 call 0x12d70f40 */
  push32(0x12d6d999u); f_12d70f40();
  /* 12d6d999 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d99c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d99f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d9a1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d9a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d9a7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d9aa push edx */
  push32((uint32_t)(EDX));
  /* 12d6d9ab push 0x39 */
  push32((uint32_t)(0x39u));
  /* 12d6d9ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d9b0 push eax */
  push32((uint32_t)(EAX));
  /* 12d6d9b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d9b3 call 0x12d70f40 */
  push32(0x12d6d9b8u); f_12d70f40();
  /* 12d6d9b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d9bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d9be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d9c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d9c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d9c6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d9c9 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d9ca push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12d6d9cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d9cf push eax */
  push32((uint32_t)(EAX));
  /* 12d6d9d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d9d2 call 0x12d70f40 */
  push32(0x12d6d9d7u); f_12d70f40();
  /* 12d6d9d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d9da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d9dd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d9df mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6d9e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6d9e5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d9e8 push edx */
  push32((uint32_t)(EDX));
  /* 12d6d9e9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12d6d9eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6d9ee push eax */
  push32((uint32_t)(EAX));
  /* 12d6d9ef push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6d9f1 call 0x12d70f40 */
  push32(0x12d6d9f6u); f_12d70f40();
  /* 12d6d9f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6d9f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6d9fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6d9fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6da01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6da04 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6da07 push edx */
  push32((uint32_t)(EDX));
  /* 12d6da08 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12d6da0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6da0d push eax */
  push32((uint32_t)(EAX));
  /* 12d6da0e push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6da10 call 0x12d70f40 */
  push32(0x12d6da15u); f_12d70f40();
  /* 12d6da15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6da18 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6da1b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6da1d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6da20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6da23 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6da26 push edx */
  push32((uint32_t)(EDX));
  /* 12d6da27 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12d6da29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6da2c push eax */
  push32((uint32_t)(EAX));
  /* 12d6da2d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6da2f call 0x12d70f40 */
  push32(0x12d6da34u); f_12d70f40();
  /* 12d6da34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6da37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6da3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6da3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6da3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6da42 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6da48 push edx */
  push32((uint32_t)(EDX));
  /* 12d6da49 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12d6da4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6da4e push eax */
  push32((uint32_t)(EAX));
  /* 12d6da4f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6da51 call 0x12d70f40 */
  push32(0x12d6da56u); f_12d70f40();
  /* 12d6da56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6da59 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6da5c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6da5e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6da61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6da64 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6da6a push edx */
  push32((uint32_t)(EDX));
  /* 12d6da6b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12d6da6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6da70 push eax */
  push32((uint32_t)(EAX));
  /* 12d6da71 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6da73 call 0x12d70f40 */
  push32(0x12d6da78u); f_12d70f40();
  /* 12d6da78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6da7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6da7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6da80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6da83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6da86 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6da8c push edx */
  push32((uint32_t)(EDX));
  /* 12d6da8d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12d6da8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6da92 push eax */
  push32((uint32_t)(EAX));
  /* 12d6da93 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6da95 call 0x12d70f40 */
  push32(0x12d6da9au); f_12d70f40();
  /* 12d6da9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6da9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6daa0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6daa2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6daa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6daa8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6daae push edx */
  push32((uint32_t)(EDX));
  /* 12d6daaf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12d6dab1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6dab4 push eax */
  push32((uint32_t)(EAX));
  /* 12d6dab5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6dab7 call 0x12d70f40 */
  push32(0x12d6dabcu); f_12d70f40();
  /* 12d6dabc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dabf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6dac2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6dac4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6dac7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6daca add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dad0 push edx */
  push32((uint32_t)(EDX));
  /* 12d6dad1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12d6dad3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6dad6 push eax */
  push32((uint32_t)(EAX));
  /* 12d6dad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6dad9 call 0x12d70f40 */
  push32(0x12d6dadeu); f_12d70f40();
  /* 12d6dade add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dae1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6dae4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6dae6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6dae9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6daec add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6daf2 push edx */
  push32((uint32_t)(EDX));
  /* 12d6daf3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12d6daf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6daf8 push eax */
  push32((uint32_t)(EAX));
  /* 12d6daf9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6dafb call 0x12d70f40 */
  push32(0x12d6db00u); f_12d70f40();
  /* 12d6db00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6db03 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6db06 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6db08 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6db0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6db0e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6db14 push edx */
  push32((uint32_t)(EDX));
  /* 12d6db15 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12d6db17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6db1a push eax */
  push32((uint32_t)(EAX));
  /* 12d6db1b push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6db1d call 0x12d70f40 */
  push32(0x12d6db22u); f_12d70f40();
  /* 12d6db22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6db25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6db28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6db2a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6db2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6db30 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6db36 push edx */
  push32((uint32_t)(EDX));
  /* 12d6db37 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12d6db39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6db3c push eax */
  push32((uint32_t)(EAX));
  /* 12d6db3d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6db3f call 0x12d70f40 */
  push32(0x12d6db44u); f_12d70f40();
  /* 12d6db44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6db47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6db4a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6db4c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6db4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6db52 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6db58 push edx */
  push32((uint32_t)(EDX));
  /* 12d6db59 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12d6db5b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6db5e push eax */
  push32((uint32_t)(EAX));
  /* 12d6db5f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6db61 call 0x12d70f40 */
  push32(0x12d6db66u); f_12d70f40();
  /* 12d6db66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6db69 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6db6c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6db6e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6db71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6db74 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6db7a push edx */
  push32((uint32_t)(EDX));
  /* 12d6db7b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12d6db7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6db80 push eax */
  push32((uint32_t)(EAX));
  /* 12d6db81 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6db83 call 0x12d70f40 */
  push32(0x12d6db88u); f_12d70f40();
  /* 12d6db88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6db8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6db8e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6db90 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6db93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6db96 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6db9c push edx */
  push32((uint32_t)(EDX));
  /* 12d6db9d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12d6dba2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6dba5 push eax */
  push32((uint32_t)(EAX));
  /* 12d6dba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6dba8 call 0x12d70f40 */
  push32(0x12d6dbadu); f_12d70f40();
  /* 12d6dbad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dbb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6dbb3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6dbb5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6dbb8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_12d6dbbb:;
  /* 12d6dbbb mov esp, ebp */
  ESP = (EBP);
  /* 12d6dbbd pop ebp */
  EBP = (pop32());
  /* 12d6dbbe ret  */
  ESPCHK(0x12d6d630u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12d6dbc0 (779 bytes, 265 insns) */
void f_12d6dbc0(void) {
  FTRACE(0x12d6dbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6dbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6dbc1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6dbc3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6dbc7 jne 0x12d6dbce */
  if (!C.zf) goto L_12d6dbce;
  /* 12d6dbc9 jmp 0x12d6dec9 */
  goto L_12d6dec9;
L_12d6dbce:;
  /* 12d6dbce push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dbd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dbd3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d6dbd6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6dbd7 call 0x12d63810 */
  push32(0x12d6dbdcu); f_12d63810();
  /* 12d6dbdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dbdf push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dbe1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dbe4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d6dbe7 push eax */
  push32((uint32_t)(EAX));
  /* 12d6dbe8 call 0x12d63810 */
  push32(0x12d6dbedu); f_12d63810();
  /* 12d6dbed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dbf0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dbf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dbf5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d6dbf8 push edx */
  push32((uint32_t)(EDX));
  /* 12d6dbf9 call 0x12d63810 */
  push32(0x12d6dbfeu); f_12d63810();
  /* 12d6dbfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dc01 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dc03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dc06 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d6dc09 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6dc0a call 0x12d63810 */
  push32(0x12d6dc0fu); f_12d63810();
  /* 12d6dc0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dc12 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dc14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dc17 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d6dc1a push eax */
  push32((uint32_t)(EAX));
  /* 12d6dc1b call 0x12d63810 */
  push32(0x12d6dc20u); f_12d63810();
  /* 12d6dc20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dc23 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dc25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dc28 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d6dc2b push edx */
  push32((uint32_t)(EDX));
  /* 12d6dc2c call 0x12d63810 */
  push32(0x12d6dc31u); f_12d63810();
  /* 12d6dc31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dc34 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dc36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dc39 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d6dc3b push ecx */
  push32((uint32_t)(ECX));
  /* 12d6dc3c call 0x12d63810 */
  push32(0x12d6dc41u); f_12d63810();
  /* 12d6dc41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dc44 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dc46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dc49 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12d6dc4c push eax */
  push32((uint32_t)(EAX));
  /* 12d6dc4d call 0x12d63810 */
  push32(0x12d6dc52u); f_12d63810();
  /* 12d6dc52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dc55 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dc57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dc5a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12d6dc5d push edx */
  push32((uint32_t)(EDX));
  /* 12d6dc5e call 0x12d63810 */
  push32(0x12d6dc63u); f_12d63810();
  /* 12d6dc63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dc66 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dc68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dc6b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 12d6dc6e push ecx */
  push32((uint32_t)(ECX));
  /* 12d6dc6f call 0x12d63810 */
  push32(0x12d6dc74u); f_12d63810();
  /* 12d6dc74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dc77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dc79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dc7c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 12d6dc7f push eax */
  push32((uint32_t)(EAX));
  /* 12d6dc80 call 0x12d63810 */
  push32(0x12d6dc85u); f_12d63810();
  /* 12d6dc85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dc88 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dc8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dc8d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12d6dc90 push edx */
  push32((uint32_t)(EDX));
  /* 12d6dc91 call 0x12d63810 */
  push32(0x12d6dc96u); f_12d63810();
  /* 12d6dc96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dc99 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dc9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dc9e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12d6dca1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6dca2 call 0x12d63810 */
  push32(0x12d6dca7u); f_12d63810();
  /* 12d6dca7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dcaa push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dcac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dcaf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d6dcb2 push eax */
  push32((uint32_t)(EAX));
  /* 12d6dcb3 call 0x12d63810 */
  push32(0x12d6dcb8u); f_12d63810();
  /* 12d6dcb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dcbb push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dcbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dcc0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12d6dcc3 push edx */
  push32((uint32_t)(EDX));
  /* 12d6dcc4 call 0x12d63810 */
  push32(0x12d6dcc9u); f_12d63810();
  /* 12d6dcc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dccc push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dcce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dcd1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12d6dcd4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6dcd5 call 0x12d63810 */
  push32(0x12d6dcdau); f_12d63810();
  /* 12d6dcda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dcdd push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dcdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dce2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12d6dce5 push eax */
  push32((uint32_t)(EAX));
  /* 12d6dce6 call 0x12d63810 */
  push32(0x12d6dcebu); f_12d63810();
  /* 12d6dceb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dcee push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dcf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dcf3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12d6dcf6 push edx */
  push32((uint32_t)(EDX));
  /* 12d6dcf7 call 0x12d63810 */
  push32(0x12d6dcfcu); f_12d63810();
  /* 12d6dcfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dcff push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dd01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dd04 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12d6dd07 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6dd08 call 0x12d63810 */
  push32(0x12d6dd0du); f_12d63810();
  /* 12d6dd0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dd10 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dd12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dd15 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12d6dd18 push eax */
  push32((uint32_t)(EAX));
  /* 12d6dd19 call 0x12d63810 */
  push32(0x12d6dd1eu); f_12d63810();
  /* 12d6dd1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dd21 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dd23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dd26 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12d6dd29 push edx */
  push32((uint32_t)(EDX));
  /* 12d6dd2a call 0x12d63810 */
  push32(0x12d6dd2fu); f_12d63810();
  /* 12d6dd2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dd32 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dd34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dd37 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12d6dd3a push ecx */
  push32((uint32_t)(ECX));
  /* 12d6dd3b call 0x12d63810 */
  push32(0x12d6dd40u); f_12d63810();
  /* 12d6dd40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dd43 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dd45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dd48 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 12d6dd4b push eax */
  push32((uint32_t)(EAX));
  /* 12d6dd4c call 0x12d63810 */
  push32(0x12d6dd51u); f_12d63810();
  /* 12d6dd51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dd54 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dd56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dd59 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 12d6dd5c push edx */
  push32((uint32_t)(EDX));
  /* 12d6dd5d call 0x12d63810 */
  push32(0x12d6dd62u); f_12d63810();
  /* 12d6dd62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dd65 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dd67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dd6a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 12d6dd6d push ecx */
  push32((uint32_t)(ECX));
  /* 12d6dd6e call 0x12d63810 */
  push32(0x12d6dd73u); f_12d63810();
  /* 12d6dd73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dd76 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dd78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dd7b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 12d6dd7e push eax */
  push32((uint32_t)(EAX));
  /* 12d6dd7f call 0x12d63810 */
  push32(0x12d6dd84u); f_12d63810();
  /* 12d6dd84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dd87 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dd89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dd8c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 12d6dd8f push edx */
  push32((uint32_t)(EDX));
  /* 12d6dd90 call 0x12d63810 */
  push32(0x12d6dd95u); f_12d63810();
  /* 12d6dd95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dd98 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dd9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dd9d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12d6dda0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6dda1 call 0x12d63810 */
  push32(0x12d6dda6u); f_12d63810();
  /* 12d6dda6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dda9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6ddab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ddae mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12d6ddb1 push eax */
  push32((uint32_t)(EAX));
  /* 12d6ddb2 call 0x12d63810 */
  push32(0x12d6ddb7u); f_12d63810();
  /* 12d6ddb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ddba push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6ddbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ddbf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12d6ddc2 push edx */
  push32((uint32_t)(EDX));
  /* 12d6ddc3 call 0x12d63810 */
  push32(0x12d6ddc8u); f_12d63810();
  /* 12d6ddc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ddcb push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6ddcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ddd0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12d6ddd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6ddd4 call 0x12d63810 */
  push32(0x12d6ddd9u); f_12d63810();
  /* 12d6ddd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dddc push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6ddde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dde1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12d6dde4 push eax */
  push32((uint32_t)(EAX));
  /* 12d6dde5 call 0x12d63810 */
  push32(0x12d6ddeau); f_12d63810();
  /* 12d6ddea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dded push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6ddef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ddf2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12d6ddf8 push edx */
  push32((uint32_t)(EDX));
  /* 12d6ddf9 call 0x12d63810 */
  push32(0x12d6ddfeu); f_12d63810();
  /* 12d6ddfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6de01 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6de03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6de06 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 12d6de0c push ecx */
  push32((uint32_t)(ECX));
  /* 12d6de0d call 0x12d63810 */
  push32(0x12d6de12u); f_12d63810();
  /* 12d6de12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6de15 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6de17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6de1a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12d6de20 push eax */
  push32((uint32_t)(EAX));
  /* 12d6de21 call 0x12d63810 */
  push32(0x12d6de26u); f_12d63810();
  /* 12d6de26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6de29 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6de2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6de2e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12d6de34 push edx */
  push32((uint32_t)(EDX));
  /* 12d6de35 call 0x12d63810 */
  push32(0x12d6de3au); f_12d63810();
  /* 12d6de3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6de3d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6de3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6de42 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12d6de48 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6de49 call 0x12d63810 */
  push32(0x12d6de4eu); f_12d63810();
  /* 12d6de4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6de51 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6de53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6de56 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 12d6de5c push eax */
  push32((uint32_t)(EAX));
  /* 12d6de5d call 0x12d63810 */
  push32(0x12d6de62u); f_12d63810();
  /* 12d6de62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6de65 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6de67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6de6a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12d6de70 push edx */
  push32((uint32_t)(EDX));
  /* 12d6de71 call 0x12d63810 */
  push32(0x12d6de76u); f_12d63810();
  /* 12d6de76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6de79 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6de7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6de7e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12d6de84 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6de85 call 0x12d63810 */
  push32(0x12d6de8au); f_12d63810();
  /* 12d6de8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6de8d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6de8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6de92 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12d6de98 push eax */
  push32((uint32_t)(EAX));
  /* 12d6de99 call 0x12d63810 */
  push32(0x12d6de9eu); f_12d63810();
  /* 12d6de9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dea1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dea3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6dea6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12d6deac push edx */
  push32((uint32_t)(EDX));
  /* 12d6dead call 0x12d63810 */
  push32(0x12d6deb2u); f_12d63810();
  /* 12d6deb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6deb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6deb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6deba mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12d6dec0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6dec1 call 0x12d63810 */
  push32(0x12d6dec6u); f_12d63810();
  /* 12d6dec6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6dec9:;
  /* 12d6dec9 pop ebp */
  EBP = (pop32());
  /* 12d6deca ret  */
  ESPCHK(0x12d6dbc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ded0 @ 0x12d6ded0 (678 bytes, 180 insns) */
void f_12d6ded0(void) {
  FTRACE(0x12d6ded0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6ded0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6ded1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6ded3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6ded6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d6dedd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6dedf mov ax, word ptr [0x12d7e6e2] */
  AX = (r16((uint32_t)(0x12d7e6e2)));
  /* 12d6dee5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6dee8 cmp dword ptr [0x12d7e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6deef je 0x12d6e04a */
  if (C.zf) goto L_12d6e04a;
  /* 12d6def5 push 0x12d7e6b0 */
  push32((uint32_t)(0x12d7e6b0u));
  /* 12d6defa push 0xe */
  push32((uint32_t)(0xeu));
  /* 12d6defc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6deff push ecx */
  push32((uint32_t)(ECX));
  /* 12d6df00 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6df02 call 0x12d70f40 */
  push32(0x12d6df07u); f_12d70f40();
  /* 12d6df07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6df0a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6df0d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6df0f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d6df12 push 0x12d7e6b4 */
  push32((uint32_t)(0x12d7e6b4u));
  /* 12d6df17 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12d6df19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6df1c push eax */
  push32((uint32_t)(EAX));
  /* 12d6df1d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6df1f call 0x12d70f40 */
  push32(0x12d6df24u); f_12d70f40();
  /* 12d6df24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6df27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6df2a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6df2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6df2f push 0x12d7e6b8 */
  push32((uint32_t)(0x12d7e6b8u));
  /* 12d6df34 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12d6df36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6df39 push edx */
  push32((uint32_t)(EDX));
  /* 12d6df3a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6df3c call 0x12d70f40 */
  push32(0x12d6df41u); f_12d70f40();
  /* 12d6df41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6df44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6df47 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6df49 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6df4c mov edx, dword ptr [0x12d7e6b8] */
  EDX = (r32((uint32_t)(0x12d7e6b8)));
  /* 12d6df52 push edx */
  push32((uint32_t)(EDX));
  /* 12d6df53 call 0x12d6e180 */
  push32(0x12d6df58u); f_12d6e180();
  /* 12d6df58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6df5b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6df5f je 0x12d6dfb9 */
  if (C.zf) goto L_12d6dfb9;
  /* 12d6df61 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6df63 mov eax, dword ptr [0x12d7e6b0] */
  EAX = (r32((uint32_t)(0x12d7e6b0)));
  /* 12d6df68 push eax */
  push32((uint32_t)(EAX));
  /* 12d6df69 call 0x12d63810 */
  push32(0x12d6df6eu); f_12d63810();
  /* 12d6df6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6df71 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6df73 mov ecx, dword ptr [0x12d7e6b4] */
  ECX = (r32((uint32_t)(0x12d7e6b4)));
  /* 12d6df79 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6df7a call 0x12d63810 */
  push32(0x12d6df7fu); f_12d63810();
  /* 12d6df7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6df82 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6df84 mov edx, dword ptr [0x12d7e6b8] */
  EDX = (r32((uint32_t)(0x12d7e6b8)));
  /* 12d6df8a push edx */
  push32((uint32_t)(EDX));
  /* 12d6df8b call 0x12d63810 */
  push32(0x12d6df90u); f_12d63810();
  /* 12d6df90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6df93 mov dword ptr [0x12d7e6b0], 0 */
  w32((uint32_t)(0x12d7e6b0), (0x0u));
  /* 12d6df9d mov dword ptr [0x12d7e6b4], 0 */
  w32((uint32_t)(0x12d7e6b4), (0x0u));
  /* 12d6dfa7 mov dword ptr [0x12d7e6b8], 0 */
  w32((uint32_t)(0x12d7e6b8), (0x0u));
  /* 12d6dfb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6dfb4 jmp 0x12d6e172 */
  goto L_12d6e172;
L_12d6dfb9:;
  /* 12d6dfb9 mov eax, dword ptr [0x12d7dda8] */
  EAX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6dfbe cmp dword ptr [eax], 0x12d7dd70 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12d7dd70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6dfc4 je 0x12d6e000 */
  if (C.zf) goto L_12d6e000;
  /* 12d6dfc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dfc8 mov ecx, dword ptr [0x12d7dda8] */
  ECX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6dfce mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d6dfd0 push edx */
  push32((uint32_t)(EDX));
  /* 12d6dfd1 call 0x12d63810 */
  push32(0x12d6dfd6u); f_12d63810();
  /* 12d6dfd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dfd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dfdb mov eax, dword ptr [0x12d7dda8] */
  EAX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6dfe0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d6dfe3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6dfe4 call 0x12d63810 */
  push32(0x12d6dfe9u); f_12d63810();
  /* 12d6dfe9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6dfec push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6dfee mov edx, dword ptr [0x12d7dda8] */
  EDX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6dff4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d6dff7 push eax */
  push32((uint32_t)(EAX));
  /* 12d6dff8 call 0x12d63810 */
  push32(0x12d6dffdu); f_12d63810();
  /* 12d6dffd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6e000:;
  /* 12d6e000 mov ecx, dword ptr [0x12d7dda8] */
  ECX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e006 mov edx, dword ptr [0x12d7e6b0] */
  EDX = (r32((uint32_t)(0x12d7e6b0)));
  /* 12d6e00c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d6e00e mov eax, dword ptr [0x12d7dda8] */
  EAX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e013 mov ecx, dword ptr [0x12d7e6b4] */
  ECX = (r32((uint32_t)(0x12d7e6b4)));
  /* 12d6e019 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12d6e01c mov edx, dword ptr [0x12d7dda8] */
  EDX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e022 mov eax, dword ptr [0x12d7e6b8] */
  EAX = (r32((uint32_t)(0x12d7e6b8)));
  /* 12d6e027 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d6e02a mov ecx, dword ptr [0x12d7dda8] */
  ECX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e030 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d6e032 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d6e034 mov byte ptr [0x12d7cec8], al */
  w8((uint32_t)(0x12d7cec8), (AL));
  /* 12d6e039 mov dword ptr [0x12d7cecc], 1 */
  w32((uint32_t)(0x12d7cecc), (0x1u));
  /* 12d6e043 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6e045 jmp 0x12d6e172 */
  goto L_12d6e172;
L_12d6e04a:;
  /* 12d6e04a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e04c mov ecx, dword ptr [0x12d7e6b0] */
  ECX = (r32((uint32_t)(0x12d7e6b0)));
  /* 12d6e052 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6e053 call 0x12d63810 */
  push32(0x12d6e058u); f_12d63810();
  /* 12d6e058 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e05b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e05d mov edx, dword ptr [0x12d7e6b4] */
  EDX = (r32((uint32_t)(0x12d7e6b4)));
  /* 12d6e063 push edx */
  push32((uint32_t)(EDX));
  /* 12d6e064 call 0x12d63810 */
  push32(0x12d6e069u); f_12d63810();
  /* 12d6e069 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e06c push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e06e mov eax, dword ptr [0x12d7e6b8] */
  EAX = (r32((uint32_t)(0x12d7e6b8)));
  /* 12d6e073 push eax */
  push32((uint32_t)(EAX));
  /* 12d6e074 call 0x12d63810 */
  push32(0x12d6e079u); f_12d63810();
  /* 12d6e079 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e07c mov dword ptr [0x12d7e6b0], 0 */
  w32((uint32_t)(0x12d7e6b0), (0x0u));
  /* 12d6e086 mov dword ptr [0x12d7e6b4], 0 */
  w32((uint32_t)(0x12d7e6b4), (0x0u));
  /* 12d6e090 mov dword ptr [0x12d7e6b8], 0 */
  w32((uint32_t)(0x12d7e6b8), (0x0u));
  /* 12d6e09a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12d6e09f push 0x12d7a014 */
  push32((uint32_t)(0x12d7a014u));
  /* 12d6e0a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e0a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e0a8 call 0x12d62d80 */
  push32(0x12d6e0adu); f_12d62d80();
  /* 12d6e0ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e0b0 mov ecx, dword ptr [0x12d7dda8] */
  ECX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e0b6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d6e0b8 mov edx, dword ptr [0x12d7dda8] */
  EDX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e0be cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e0c1 jne 0x12d6e0cb */
  if (!C.zf) goto L_12d6e0cb;
  /* 12d6e0c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6e0c6 jmp 0x12d6e172 */
  goto L_12d6e172;
L_12d6e0cb:;
  /* 12d6e0cb push 0x12d79fe4 */
  push32((uint32_t)(0x12d79fe4u));
  /* 12d6e0d0 mov eax, dword ptr [0x12d7dda8] */
  EAX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e0d5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d6e0d7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6e0d8 call 0x12d65d30 */
  push32(0x12d6e0ddu); f_12d65d30();
  /* 12d6e0dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e0e0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12d6e0e5 push 0x12d7a014 */
  push32((uint32_t)(0x12d7a014u));
  /* 12d6e0ea push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e0ec push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e0ee call 0x12d62d80 */
  push32(0x12d6e0f3u); f_12d62d80();
  /* 12d6e0f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e0f6 mov edx, dword ptr [0x12d7dda8] */
  EDX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e0fc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12d6e0ff mov eax, dword ptr [0x12d7dda8] */
  EAX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e104 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e108 jne 0x12d6e10f */
  if (!C.zf) goto L_12d6e10f;
  /* 12d6e10a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6e10d jmp 0x12d6e172 */
  goto L_12d6e172;
L_12d6e10f:;
  /* 12d6e10f mov ecx, dword ptr [0x12d7dda8] */
  ECX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e115 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d6e118 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12d6e11b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12d6e120 push 0x12d7a014 */
  push32((uint32_t)(0x12d7a014u));
  /* 12d6e125 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e127 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e129 call 0x12d62d80 */
  push32(0x12d6e12eu); f_12d62d80();
  /* 12d6e12e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e131 mov ecx, dword ptr [0x12d7dda8] */
  ECX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e137 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12d6e13a mov edx, dword ptr [0x12d7dda8] */
  EDX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e140 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e144 jne 0x12d6e14b */
  if (!C.zf) goto L_12d6e14b;
  /* 12d6e146 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6e149 jmp 0x12d6e172 */
  goto L_12d6e172;
L_12d6e14b:;
  /* 12d6e14b mov eax, dword ptr [0x12d7dda8] */
  EAX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e150 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d6e153 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12d6e156 mov edx, dword ptr [0x12d7dda8] */
  EDX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e15c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d6e15e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d6e160 mov byte ptr [0x12d7cec8], cl */
  w8((uint32_t)(0x12d7cec8), (CL));
  /* 12d6e166 mov dword ptr [0x12d7cecc], 1 */
  w32((uint32_t)(0x12d7cecc), (0x1u));
  /* 12d6e170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d6e172:;
  /* 12d6e172 mov esp, ebp */
  ESP = (EBP);
  /* 12d6e174 pop ebp */
  EBP = (pop32());
  /* 12d6e175 ret  */
  ESPCHK(0x12d6ded0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12d6e180 (125 bytes, 49 insns) */
void f_12d6e180(void) {
  FTRACE(0x12d6e180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6e180 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6e181 mov ebp, esp */
  EBP = (ESP);
  /* 12d6e183 push ecx */
  push32((uint32_t)(ECX));
L_12d6e184:;
  /* 12d6e184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e187 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6e18a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6e18c je 0x12d6e1f9 */
  if (C.zf) goto L_12d6e1f9;
  /* 12d6e18e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e191 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d6e194 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e197 jl 0x12d6e1bd */
  if ((C.sf!=C.of)) goto L_12d6e1bd;
  /* 12d6e199 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e19c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d6e19f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e1a2 jg 0x12d6e1bd */
  if ((!C.zf&&C.sf==C.of)) goto L_12d6e1bd;
  /* 12d6e1a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e1a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6e1aa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6e1ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e1b0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12d6e1b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e1b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e1b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d6e1bb jmp 0x12d6e1f7 */
  goto L_12d6e1f7;
L_12d6e1bd:;
  /* 12d6e1bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e1c0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d6e1c3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e1c6 jne 0x12d6e1ee */
  if (!C.zf) goto L_12d6e1ee;
  /* 12d6e1c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e1cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d6e1ce:;
  /* 12d6e1ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e1d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e1d4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12d6e1d7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d6e1d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e1dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e1df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d6e1e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e1e5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d6e1e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6e1ea jne 0x12d6e1ce */
  if (!C.zf) goto L_12d6e1ce;
  /* 12d6e1ec jmp 0x12d6e1f7 */
  goto L_12d6e1f7;
L_12d6e1ee:;
  /* 12d6e1ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e1f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e1f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12d6e1f7:;
  /* 12d6e1f7 jmp 0x12d6e184 */
  goto L_12d6e184;
L_12d6e1f9:;
  /* 12d6e1f9 mov esp, ebp */
  ESP = (EBP);
  /* 12d6e1fb pop ebp */
  EBP = (pop32());
  /* 12d6e1fc ret  */
  ESPCHK(0x12d6e180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e200 @ 0x12d6e200 (304 bytes, 85 insns) */
void f_12d6e200(void) {
  FTRACE(0x12d6e200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6e200 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6e201 mov ebp, esp */
  EBP = (ESP);
  /* 12d6e203 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6e204 cmp dword ptr [0x12d7e684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e20b je 0x12d6e2cc */
  if (C.zf) goto L_12d6e2cc;
  /* 12d6e211 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12d6e213 push 0x12d7a020 */
  push32((uint32_t)(0x12d7a020u));
  /* 12d6e218 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e21a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12d6e21c push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6e21e call 0x12d63190 */
  push32(0x12d6e223u); f_12d63190();
  /* 12d6e223 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e226 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6e229 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e22d jne 0x12d6e239 */
  if (!C.zf) goto L_12d6e239;
  /* 12d6e22f mov eax, 1 */
  EAX = (0x1u);
  /* 12d6e234 jmp 0x12d6e32c */
  goto L_12d6e32c;
L_12d6e239:;
  /* 12d6e239 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e23c push eax */
  push32((uint32_t)(EAX));
  /* 12d6e23d call 0x12d6e330 */
  push32(0x12d6e242u); f_12d6e330();
  /* 12d6e242 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6e247 je 0x12d6e26d */
  if (C.zf) goto L_12d6e26d;
  /* 12d6e249 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e24c push ecx */
  push32((uint32_t)(ECX));
  /* 12d6e24d call 0x12d6e5c0 */
  push32(0x12d6e252u); f_12d6e5c0();
  /* 12d6e252 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e255 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e257 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e25a push edx */
  push32((uint32_t)(EDX));
  /* 12d6e25b call 0x12d63810 */
  push32(0x12d6e260u); f_12d63810();
  /* 12d6e260 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e263 mov eax, 1 */
  EAX = (0x1u);
  /* 12d6e268 jmp 0x12d6e32c */
  goto L_12d6e32c;
L_12d6e26d:;
  /* 12d6e26d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e270 mov ecx, dword ptr [0x12d7dda8] */
  ECX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e276 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d6e278 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d6e27a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e27d mov ecx, dword ptr [0x12d7dda8] */
  ECX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e283 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d6e286 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d6e289 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e28c mov ecx, dword ptr [0x12d7dda8] */
  ECX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e292 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d6e295 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12d6e298 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e29b mov dword ptr [0x12d7dda8], eax */
  w32((uint32_t)(0x12d7dda8), (EAX));
  /* 12d6e2a0 mov ecx, dword ptr [0x12d7e6bc] */
  ECX = (r32((uint32_t)(0x12d7e6bc)));
  /* 12d6e2a6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6e2a7 call 0x12d6e5c0 */
  push32(0x12d6e2acu); f_12d6e5c0();
  /* 12d6e2ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e2af push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e2b1 mov edx, dword ptr [0x12d7e6bc] */
  EDX = (r32((uint32_t)(0x12d7e6bc)));
  /* 12d6e2b7 push edx */
  push32((uint32_t)(EDX));
  /* 12d6e2b8 call 0x12d63810 */
  push32(0x12d6e2bdu); f_12d63810();
  /* 12d6e2bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e2c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e2c3 mov dword ptr [0x12d7e6bc], eax */
  w32((uint32_t)(0x12d7e6bc), (EAX));
  /* 12d6e2c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6e2ca jmp 0x12d6e32c */
  goto L_12d6e32c;
L_12d6e2cc:;
  /* 12d6e2cc mov ecx, dword ptr [0x12d7dda8] */
  ECX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e2d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d6e2d4 mov dword ptr [0x12d7dd78], edx */
  w32((uint32_t)(0x12d7dd78), (EDX));
  /* 12d6e2da mov eax, dword ptr [0x12d7dda8] */
  EAX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e2df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d6e2e2 mov dword ptr [0x12d7dd7c], ecx */
  w32((uint32_t)(0x12d7dd7c), (ECX));
  /* 12d6e2e8 mov edx, dword ptr [0x12d7dda8] */
  EDX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d6e2ee mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d6e2f1 mov dword ptr [0x12d7dd80], eax */
  w32((uint32_t)(0x12d7dd80), (EAX));
  /* 12d6e2f6 mov dword ptr [0x12d7dda8], 0x12d7dd78 */
  w32((uint32_t)(0x12d7dda8), (0x12d7dd78u));
  /* 12d6e300 mov ecx, dword ptr [0x12d7e6bc] */
  ECX = (r32((uint32_t)(0x12d7e6bc)));
  /* 12d6e306 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6e307 call 0x12d6e5c0 */
  push32(0x12d6e30cu); f_12d6e5c0();
  /* 12d6e30c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e30f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e311 mov edx, dword ptr [0x12d7e6bc] */
  EDX = (r32((uint32_t)(0x12d7e6bc)));
  /* 12d6e317 push edx */
  push32((uint32_t)(EDX));
  /* 12d6e318 call 0x12d63810 */
  push32(0x12d6e31du); f_12d63810();
  /* 12d6e31d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e320 mov dword ptr [0x12d7e6bc], 0 */
  w32((uint32_t)(0x12d7e6bc), (0x0u));
  /* 12d6e32a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d6e32c:;
  /* 12d6e32c mov esp, ebp */
  ESP = (EBP);
  /* 12d6e32e pop ebp */
  EBP = (pop32());
  /* 12d6e32f ret  */
  ESPCHK(0x12d6e200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e330 @ 0x12d6e330 (525 bytes, 200 insns) */
void f_12d6e330(void) {
  FTRACE(0x12d6e330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6e330 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6e331 mov ebp, esp */
  EBP = (ESP);
  /* 12d6e333 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6e336 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d6e33d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6e33f mov ax, word ptr [0x12d7e6dc] */
  AX = (r16((uint32_t)(0x12d7e6dc)));
  /* 12d6e345 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6e348 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e34c jne 0x12d6e356 */
  if (!C.zf) goto L_12d6e356;
  /* 12d6e34e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6e351 jmp 0x12d6e539 */
  goto L_12d6e539;
L_12d6e356:;
  /* 12d6e356 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e359 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e35c push ecx */
  push32((uint32_t)(ECX));
  /* 12d6e35d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12d6e35f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e362 push edx */
  push32((uint32_t)(EDX));
  /* 12d6e363 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6e365 call 0x12d70f40 */
  push32(0x12d6e36au); f_12d70f40();
  /* 12d6e36a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e36d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6e370 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6e372 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6e375 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e378 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e37b push edx */
  push32((uint32_t)(EDX));
  /* 12d6e37c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12d6e37e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e381 push eax */
  push32((uint32_t)(EAX));
  /* 12d6e382 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6e384 call 0x12d70f40 */
  push32(0x12d6e389u); f_12d70f40();
  /* 12d6e389 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e38c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6e38f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6e391 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6e394 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e397 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e39a push edx */
  push32((uint32_t)(EDX));
  /* 12d6e39b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12d6e39d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e3a0 push eax */
  push32((uint32_t)(EAX));
  /* 12d6e3a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6e3a3 call 0x12d70f40 */
  push32(0x12d6e3a8u); f_12d70f40();
  /* 12d6e3a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e3ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6e3ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6e3b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6e3b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e3b6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e3b9 push edx */
  push32((uint32_t)(EDX));
  /* 12d6e3ba push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12d6e3bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e3bf push eax */
  push32((uint32_t)(EAX));
  /* 12d6e3c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6e3c2 call 0x12d70f40 */
  push32(0x12d6e3c7u); f_12d70f40();
  /* 12d6e3c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e3ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6e3cd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6e3cf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6e3d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e3d5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e3d8 push edx */
  push32((uint32_t)(EDX));
  /* 12d6e3d9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12d6e3db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e3de push eax */
  push32((uint32_t)(EAX));
  /* 12d6e3df push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6e3e1 call 0x12d70f40 */
  push32(0x12d6e3e6u); f_12d70f40();
  /* 12d6e3e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e3e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6e3ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6e3ee mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6e3f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e3f4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d6e3f7 push eax */
  push32((uint32_t)(EAX));
  /* 12d6e3f8 call 0x12d6e540 */
  push32(0x12d6e3fdu); f_12d6e540();
  /* 12d6e3fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e400 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e403 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e406 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6e407 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12d6e409 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e40c push edx */
  push32((uint32_t)(EDX));
  /* 12d6e40d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6e40f call 0x12d70f40 */
  push32(0x12d6e414u); f_12d70f40();
  /* 12d6e414 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e417 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6e41a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6e41c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6e41f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e422 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e425 push edx */
  push32((uint32_t)(EDX));
  /* 12d6e426 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12d6e428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e42b push eax */
  push32((uint32_t)(EAX));
  /* 12d6e42c push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6e42e call 0x12d70f40 */
  push32(0x12d6e433u); f_12d70f40();
  /* 12d6e433 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e436 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6e439 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6e43b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6e43e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e441 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e444 push edx */
  push32((uint32_t)(EDX));
  /* 12d6e445 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12d6e447 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e44a push eax */
  push32((uint32_t)(EAX));
  /* 12d6e44b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6e44d call 0x12d70f40 */
  push32(0x12d6e452u); f_12d70f40();
  /* 12d6e452 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e455 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6e458 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6e45a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6e45d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e460 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e463 push edx */
  push32((uint32_t)(EDX));
  /* 12d6e464 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d6e466 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e469 push eax */
  push32((uint32_t)(EAX));
  /* 12d6e46a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6e46c call 0x12d70f40 */
  push32(0x12d6e471u); f_12d70f40();
  /* 12d6e471 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e474 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6e477 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6e479 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6e47c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e47f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e482 push edx */
  push32((uint32_t)(EDX));
  /* 12d6e483 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12d6e485 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e488 push eax */
  push32((uint32_t)(EAX));
  /* 12d6e489 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6e48b call 0x12d70f40 */
  push32(0x12d6e490u); f_12d70f40();
  /* 12d6e490 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e493 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6e496 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6e498 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6e49b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e49e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e4a1 push edx */
  push32((uint32_t)(EDX));
  /* 12d6e4a2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12d6e4a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e4a7 push eax */
  push32((uint32_t)(EAX));
  /* 12d6e4a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6e4aa call 0x12d70f40 */
  push32(0x12d6e4afu); f_12d70f40();
  /* 12d6e4af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e4b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6e4b5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6e4b7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6e4ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e4bd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e4c0 push edx */
  push32((uint32_t)(EDX));
  /* 12d6e4c1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12d6e4c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e4c6 push eax */
  push32((uint32_t)(EAX));
  /* 12d6e4c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6e4c9 call 0x12d70f40 */
  push32(0x12d6e4ceu); f_12d70f40();
  /* 12d6e4ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e4d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6e4d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6e4d6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6e4d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e4dc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e4df push edx */
  push32((uint32_t)(EDX));
  /* 12d6e4e0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12d6e4e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e4e5 push eax */
  push32((uint32_t)(EAX));
  /* 12d6e4e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6e4e8 call 0x12d70f40 */
  push32(0x12d6e4edu); f_12d70f40();
  /* 12d6e4ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e4f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6e4f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6e4f5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6e4f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e4fb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e4fe push edx */
  push32((uint32_t)(EDX));
  /* 12d6e4ff push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12d6e501 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e504 push eax */
  push32((uint32_t)(EAX));
  /* 12d6e505 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6e507 call 0x12d70f40 */
  push32(0x12d6e50cu); f_12d70f40();
  /* 12d6e50c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e50f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6e512 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6e514 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6e517 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e51a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e51d push edx */
  push32((uint32_t)(EDX));
  /* 12d6e51e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12d6e520 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e523 push eax */
  push32((uint32_t)(EAX));
  /* 12d6e524 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6e526 call 0x12d70f40 */
  push32(0x12d6e52bu); f_12d70f40();
  /* 12d6e52b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e52e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6e531 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6e533 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6e536 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d6e539:;
  /* 12d6e539 mov esp, ebp */
  ESP = (EBP);
  /* 12d6e53b pop ebp */
  EBP = (pop32());
  /* 12d6e53c ret  */
  ESPCHK(0x12d6e330u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12d6e540 (125 bytes, 49 insns) */
void f_12d6e540(void) {
  FTRACE(0x12d6e540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6e540 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6e541 mov ebp, esp */
  EBP = (ESP);
  /* 12d6e543 push ecx */
  push32((uint32_t)(ECX));
L_12d6e544:;
  /* 12d6e544 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e547 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6e54a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6e54c je 0x12d6e5b9 */
  if (C.zf) goto L_12d6e5b9;
  /* 12d6e54e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e551 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d6e554 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e557 jl 0x12d6e57d */
  if ((C.sf!=C.of)) goto L_12d6e57d;
  /* 12d6e559 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e55c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d6e55f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e562 jg 0x12d6e57d */
  if ((!C.zf&&C.sf==C.of)) goto L_12d6e57d;
  /* 12d6e564 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e567 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6e56a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6e56d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e570 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12d6e572 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e575 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e578 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d6e57b jmp 0x12d6e5b7 */
  goto L_12d6e5b7;
L_12d6e57d:;
  /* 12d6e57d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e580 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d6e583 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e586 jne 0x12d6e5ae */
  if (!C.zf) goto L_12d6e5ae;
  /* 12d6e588 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e58b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d6e58e:;
  /* 12d6e58e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e591 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e594 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12d6e597 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d6e599 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e59c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e59f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d6e5a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6e5a5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d6e5a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6e5aa jne 0x12d6e58e */
  if (!C.zf) goto L_12d6e58e;
  /* 12d6e5ac jmp 0x12d6e5b7 */
  goto L_12d6e5b7;
L_12d6e5ae:;
  /* 12d6e5ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e5b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e5b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12d6e5b7:;
  /* 12d6e5b7 jmp 0x12d6e544 */
  goto L_12d6e544;
L_12d6e5b9:;
  /* 12d6e5b9 mov esp, ebp */
  ESP = (EBP);
  /* 12d6e5bb pop ebp */
  EBP = (pop32());
  /* 12d6e5bc ret  */
  ESPCHK(0x12d6e540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5c0 @ 0x12d6e5c0 (147 bytes, 52 insns) */
void f_12d6e5c0(void) {
  FTRACE(0x12d6e5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6e5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6e5c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6e5c3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e5c7 jne 0x12d6e5ce */
  if (!C.zf) goto L_12d6e5ce;
  /* 12d6e5c9 jmp 0x12d6e651 */
  goto L_12d6e651;
L_12d6e5ce:;
  /* 12d6e5ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e5d1 cmp dword ptr [eax + 0xc], 0x12d7e718 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12d7e718u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e5d8 je 0x12d6e651 */
  if (C.zf) goto L_12d6e651;
  /* 12d6e5da push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e5dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e5df mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d6e5e2 push edx */
  push32((uint32_t)(EDX));
  /* 12d6e5e3 call 0x12d63810 */
  push32(0x12d6e5e8u); f_12d63810();
  /* 12d6e5e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e5eb push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e5ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e5f0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d6e5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6e5f4 call 0x12d63810 */
  push32(0x12d6e5f9u); f_12d63810();
  /* 12d6e5f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e5fc push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e5fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e601 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d6e604 push eax */
  push32((uint32_t)(EAX));
  /* 12d6e605 call 0x12d63810 */
  push32(0x12d6e60au); f_12d63810();
  /* 12d6e60a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e60d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e60f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e612 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d6e615 push edx */
  push32((uint32_t)(EDX));
  /* 12d6e616 call 0x12d63810 */
  push32(0x12d6e61bu); f_12d63810();
  /* 12d6e61b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e61e push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e620 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e623 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12d6e626 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6e627 call 0x12d63810 */
  push32(0x12d6e62cu); f_12d63810();
  /* 12d6e62c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e62f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e631 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e634 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12d6e637 push eax */
  push32((uint32_t)(EAX));
  /* 12d6e638 call 0x12d63810 */
  push32(0x12d6e63du); f_12d63810();
  /* 12d6e63d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e640 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e642 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6e645 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12d6e648 push edx */
  push32((uint32_t)(EDX));
  /* 12d6e649 call 0x12d63810 */
  push32(0x12d6e64eu); f_12d63810();
  /* 12d6e64e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6e651:;
  /* 12d6e651 pop ebp */
  EBP = (pop32());
  /* 12d6e652 ret  */
  ESPCHK(0x12d6e5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e660 @ 0x12d6e660 (928 bytes, 284 insns) */
void f_12d6e660(void) {
  FTRACE(0x12d6e660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6e660 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6e661 mov ebp, esp */
  EBP = (ESP);
  /* 12d6e663 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6e666 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12d6e66d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12d6e674 cmp dword ptr [0x12d7e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e67b je 0x12d6e9b1 */
  if (C.zf) goto L_12d6e9b1;
  /* 12d6e681 cmp dword ptr [0x12d7e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e688 jne 0x12d6e6b0 */
  if (!C.zf) goto L_12d6e6b0;
  /* 12d6e68a push 0x12d7e690 */
  push32((uint32_t)(0x12d7e690u));
  /* 12d6e68f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12d6e694 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6e696 mov ax, word ptr [0x12d7e6d4] */
  AX = (r16((uint32_t)(0x12d7e6d4)));
  /* 12d6e69c push eax */
  push32((uint32_t)(EAX));
  /* 12d6e69d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6e69f call 0x12d70f40 */
  push32(0x12d6e6a4u); f_12d70f40();
  /* 12d6e6a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e6a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6e6a9 je 0x12d6e6b0 */
  if (C.zf) goto L_12d6e6b0;
  /* 12d6e6ab jmp 0x12d6e972 */
  goto L_12d6e972;
L_12d6e6b0:;
  /* 12d6e6b0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12d6e6b2 push 0x12d7a02c */
  push32((uint32_t)(0x12d7a02cu));
  /* 12d6e6b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e6b9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12d6e6be call 0x12d62d80 */
  push32(0x12d6e6c3u); f_12d62d80();
  /* 12d6e6c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e6c6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12d6e6c9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12d6e6cb push 0x12d7a02c */
  push32((uint32_t)(0x12d7a02cu));
  /* 12d6e6d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e6d2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12d6e6d7 call 0x12d62d80 */
  push32(0x12d6e6dcu); f_12d62d80();
  /* 12d6e6dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e6df mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d6e6e2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12d6e6e4 push 0x12d7a02c */
  push32((uint32_t)(0x12d7a02cu));
  /* 12d6e6e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e6eb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12d6e6f0 call 0x12d62d80 */
  push32(0x12d6e6f5u); f_12d62d80();
  /* 12d6e6f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e6f8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12d6e6fb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12d6e6fd push 0x12d7a02c */
  push32((uint32_t)(0x12d7a02cu));
  /* 12d6e702 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e704 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12d6e709 call 0x12d62d80 */
  push32(0x12d6e70eu); f_12d62d80();
  /* 12d6e70e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e711 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d6e714 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e718 je 0x12d6e72c */
  if (C.zf) goto L_12d6e72c;
  /* 12d6e71a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e71e je 0x12d6e72c */
  if (C.zf) goto L_12d6e72c;
  /* 12d6e720 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e724 je 0x12d6e72c */
  if (C.zf) goto L_12d6e72c;
  /* 12d6e726 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e72a jne 0x12d6e731 */
  if (!C.zf) goto L_12d6e731;
L_12d6e72c:;
  /* 12d6e72c jmp 0x12d6e972 */
  goto L_12d6e972;
L_12d6e731:;
  /* 12d6e731 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d6e734 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d6e737 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d6e73e jmp 0x12d6e749 */
  goto L_12d6e749;
L_12d6e740:;
  /* 12d6e740 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6e743 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e746 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12d6e749:;
  /* 12d6e749 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e750 jge 0x12d6e765 */
  if ((C.sf==C.of)) goto L_12d6e765;
  /* 12d6e752 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6e755 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12d6e758 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12d6e75a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6e75d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e760 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d6e763 jmp 0x12d6e740 */
  goto L_12d6e740;
L_12d6e765:;
  /* 12d6e765 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12d6e768 push eax */
  push32((uint32_t)(EAX));
  /* 12d6e769 mov ecx, dword ptr [0x12d7e690] */
  ECX = (r32((uint32_t)(0x12d7e690)));
  /* 12d6e76f push ecx */
  push32((uint32_t)(ECX));
  /* 12d6e770 call dword ptr [0x12d8033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8033c))), 0x12d6e776u);
  /* 12d6e776 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6e778 jne 0x12d6e77f */
  if (!C.zf) goto L_12d6e77f;
  /* 12d6e77a jmp 0x12d6e972 */
  goto L_12d6e972;
L_12d6e77f:;
  /* 12d6e77f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e783 jbe 0x12d6e78a */
  if ((C.cf||C.zf)) goto L_12d6e78a;
  /* 12d6e785 jmp 0x12d6e972 */
  goto L_12d6e972;
L_12d6e78a:;
  /* 12d6e78a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6e78d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6e793 mov dword ptr [0x12d7cec4], edx */
  w32((uint32_t)(0x12d7cec4), (EDX));
  /* 12d6e799 cmp dword ptr [0x12d7cec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7cec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e7a0 jle 0x12d6e7f9 */
  if ((C.zf||C.sf!=C.of)) goto L_12d6e7f9;
  /* 12d6e7a2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12d6e7a5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d6e7a8 jmp 0x12d6e7b3 */
  goto L_12d6e7b3;
L_12d6e7aa:;
  /* 12d6e7aa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6e7ad add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e7b0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12d6e7b3:;
  /* 12d6e7b3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6e7b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6e7b8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d6e7ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6e7bc je 0x12d6e7f9 */
  if (C.zf) goto L_12d6e7f9;
  /* 12d6e7be mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6e7c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6e7c3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12d6e7c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6e7c8 je 0x12d6e7f9 */
  if (C.zf) goto L_12d6e7f9;
  /* 12d6e7ca mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6e7cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6e7cf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d6e7d1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d6e7d4 jmp 0x12d6e7df */
  goto L_12d6e7df;
L_12d6e7d6:;
  /* 12d6e7d6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6e7d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e7dc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12d6e7df:;
  /* 12d6e7df mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6e7e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6e7e4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12d6e7e7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e7ea jg 0x12d6e7f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d6e7f7;
  /* 12d6e7ec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d6e7ef add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e7f2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12d6e7f5 jmp 0x12d6e7d6 */
  goto L_12d6e7d6;
L_12d6e7f7:;
  /* 12d6e7f7 jmp 0x12d6e7aa */
  goto L_12d6e7aa;
L_12d6e7f9:;
  /* 12d6e7f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6e7fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6e7fd push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6e7ff mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d6e802 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e805 push eax */
  push32((uint32_t)(EAX));
  /* 12d6e806 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d6e80b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d6e80e push ecx */
  push32((uint32_t)(ECX));
  /* 12d6e80f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6e811 call 0x12d6afb0 */
  push32(0x12d6e816u); f_12d6afb0();
  /* 12d6e816 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e819 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6e81b jne 0x12d6e822 */
  if (!C.zf) goto L_12d6e822;
  /* 12d6e81d jmp 0x12d6e972 */
  goto L_12d6e972;
L_12d6e822:;
  /* 12d6e822 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d6e825 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12d6e82a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d6e82d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d6e830 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d6e837 jmp 0x12d6e842 */
  goto L_12d6e842;
L_12d6e839:;
  /* 12d6e839 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6e83c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e83f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12d6e842:;
  /* 12d6e842 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e849 jge 0x12d6e860 */
  if ((C.sf==C.of)) goto L_12d6e860;
  /* 12d6e84b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d6e84e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12d6e852 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12d6e855 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d6e858 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e85b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d6e85e jmp 0x12d6e839 */
  goto L_12d6e839;
L_12d6e860:;
  /* 12d6e860 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6e862 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6e864 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d6e867 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e86a push edx */
  push32((uint32_t)(EDX));
  /* 12d6e86b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d6e870 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d6e873 push eax */
  push32((uint32_t)(EAX));
  /* 12d6e874 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6e876 call 0x12d711e0 */
  push32(0x12d6e87bu); f_12d711e0();
  /* 12d6e87b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e87e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6e880 jne 0x12d6e887 */
  if (!C.zf) goto L_12d6e887;
  /* 12d6e882 jmp 0x12d6e972 */
  goto L_12d6e972;
L_12d6e887:;
  /* 12d6e887 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d6e88a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12d6e88f cmp dword ptr [0x12d7cec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7cec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e896 jle 0x12d6e8f3 */
  if ((C.zf||C.sf!=C.of)) goto L_12d6e8f3;
  /* 12d6e898 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12d6e89b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d6e89e jmp 0x12d6e8a9 */
  goto L_12d6e8a9;
L_12d6e8a0:;
  /* 12d6e8a0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6e8a3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e8a6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12d6e8a9:;
  /* 12d6e8a9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6e8ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6e8ae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d6e8b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6e8b2 je 0x12d6e8f3 */
  if (C.zf) goto L_12d6e8f3;
  /* 12d6e8b4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6e8b7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6e8b9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12d6e8bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6e8be je 0x12d6e8f3 */
  if (C.zf) goto L_12d6e8f3;
  /* 12d6e8c0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6e8c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6e8c5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d6e8c7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d6e8ca jmp 0x12d6e8d5 */
  goto L_12d6e8d5;
L_12d6e8cc:;
  /* 12d6e8cc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6e8cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e8d2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12d6e8d5:;
  /* 12d6e8d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6e8d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6e8da mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12d6e8dd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e8e0 jg 0x12d6e8f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d6e8f1;
  /* 12d6e8e2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d6e8e5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d6e8e8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12d6e8ef jmp 0x12d6e8cc */
  goto L_12d6e8cc;
L_12d6e8f1:;
  /* 12d6e8f1 jmp 0x12d6e8a0 */
  goto L_12d6e8a0;
L_12d6e8f3:;
  /* 12d6e8f3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d6e8f6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e8f9 mov dword ptr [0x12d7ccb8], eax */
  w32((uint32_t)(0x12d7ccb8), (EAX));
  /* 12d6e8fe mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d6e901 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e904 mov dword ptr [0x12d7ccbc], ecx */
  w32((uint32_t)(0x12d7ccbc), (ECX));
  /* 12d6e90a cmp dword ptr [0x12d7e6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e911 je 0x12d6e924 */
  if (C.zf) goto L_12d6e924;
  /* 12d6e913 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e915 mov edx, dword ptr [0x12d7e6c0] */
  EDX = (r32((uint32_t)(0x12d7e6c0)));
  /* 12d6e91b push edx */
  push32((uint32_t)(EDX));
  /* 12d6e91c call 0x12d63810 */
  push32(0x12d6e921u); f_12d63810();
  /* 12d6e921 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6e924:;
  /* 12d6e924 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d6e927 mov dword ptr [0x12d7e6c0], eax */
  w32((uint32_t)(0x12d7e6c0), (EAX));
  /* 12d6e92c cmp dword ptr [0x12d7e6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6e933 je 0x12d6e946 */
  if (C.zf) goto L_12d6e946;
  /* 12d6e935 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e937 mov ecx, dword ptr [0x12d7e6c4] */
  ECX = (r32((uint32_t)(0x12d7e6c4)));
  /* 12d6e93d push ecx */
  push32((uint32_t)(ECX));
  /* 12d6e93e call 0x12d63810 */
  push32(0x12d6e943u); f_12d63810();
  /* 12d6e943 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6e946:;
  /* 12d6e946 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d6e949 mov dword ptr [0x12d7e6c4], edx */
  w32((uint32_t)(0x12d7e6c4), (EDX));
  /* 12d6e94f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e951 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d6e954 push eax */
  push32((uint32_t)(EAX));
  /* 12d6e955 call 0x12d63810 */
  push32(0x12d6e95au); f_12d63810();
  /* 12d6e95a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e95d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e95f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d6e962 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6e963 call 0x12d63810 */
  push32(0x12d6e968u); f_12d63810();
  /* 12d6e968 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e96b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6e96d jmp 0x12d6e9fc */
  goto L_12d6e9fc;
L_12d6e972:;
  /* 12d6e972 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e974 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d6e977 push edx */
  push32((uint32_t)(EDX));
  /* 12d6e978 call 0x12d63810 */
  push32(0x12d6e97du); f_12d63810();
  /* 12d6e97d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e980 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e982 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d6e985 push eax */
  push32((uint32_t)(EAX));
  /* 12d6e986 call 0x12d63810 */
  push32(0x12d6e98bu); f_12d63810();
  /* 12d6e98b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e98e push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e990 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d6e993 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6e994 call 0x12d63810 */
  push32(0x12d6e999u); f_12d63810();
  /* 12d6e999 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e99c push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e99e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d6e9a1 push edx */
  push32((uint32_t)(EDX));
  /* 12d6e9a2 call 0x12d63810 */
  push32(0x12d6e9a7u); f_12d63810();
  /* 12d6e9a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e9aa mov eax, 1 */
  EAX = (0x1u);
  /* 12d6e9af jmp 0x12d6e9fc */
  goto L_12d6e9fc;
L_12d6e9b1:;
  /* 12d6e9b1 mov dword ptr [0x12d7ccb8], 0x12d7ccc2 */
  w32((uint32_t)(0x12d7ccb8), (0x12d7ccc2u));
  /* 12d6e9bb mov dword ptr [0x12d7ccbc], 0x12d7ccc2 */
  w32((uint32_t)(0x12d7ccbc), (0x12d7ccc2u));
  /* 12d6e9c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e9c7 mov eax, dword ptr [0x12d7e6c0] */
  EAX = (r32((uint32_t)(0x12d7e6c0)));
  /* 12d6e9cc push eax */
  push32((uint32_t)(EAX));
  /* 12d6e9cd call 0x12d63810 */
  push32(0x12d6e9d2u); f_12d63810();
  /* 12d6e9d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e9d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6e9d7 mov ecx, dword ptr [0x12d7e6c4] */
  ECX = (r32((uint32_t)(0x12d7e6c4)));
  /* 12d6e9dd push ecx */
  push32((uint32_t)(ECX));
  /* 12d6e9de call 0x12d63810 */
  push32(0x12d6e9e3u); f_12d63810();
  /* 12d6e9e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6e9e6 mov dword ptr [0x12d7e6c0], 0 */
  w32((uint32_t)(0x12d7e6c0), (0x0u));
  /* 12d6e9f0 mov dword ptr [0x12d7e6c4], 0 */
  w32((uint32_t)(0x12d7e6c4), (0x0u));
  /* 12d6e9fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d6e9fc:;
  /* 12d6e9fc mov esp, ebp */
  ESP = (EBP);
  /* 12d6e9fe pop ebp */
  EBP = (pop32());
  /* 12d6e9ff ret  */
  ESPCHK(0x12d6e660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea00 @ 0x12d6ea00 (7 bytes, 5 insns) */
void f_12d6ea00(void) {
  FTRACE(0x12d6ea00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6ea00 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6ea01 mov ebp, esp */
  EBP = (ESP);
  /* 12d6ea03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6ea05 pop ebp */
  EBP = (pop32());
  /* 12d6ea06 ret  */
  ESPCHK(0x12d6ea00u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12d6ea10 (129 bytes, 56 insns) */
void f_12d6ea10(void) {
  FTRACE(0x12d6ea10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6ea10 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d6ea14 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d6ea18 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12d6ea1e jne 0x12d6ea5c */
  if (!C.zf) goto L_12d6ea5c;
L_12d6ea20:;
  /* 12d6ea20 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d6ea22 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d6ea24 jne 0x12d6ea54 */
  if (!C.zf) goto L_12d6ea54;
  /* 12d6ea26 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d6ea28 je 0x12d6ea50 */
  if (C.zf) goto L_12d6ea50;
  /* 12d6ea2a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d6ea2d jne 0x12d6ea54 */
  if (!C.zf) goto L_12d6ea54;
  /* 12d6ea2f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12d6ea31 je 0x12d6ea50 */
  if (C.zf) goto L_12d6ea50;
  /* 12d6ea33 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12d6ea36 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d6ea39 jne 0x12d6ea54 */
  if (!C.zf) goto L_12d6ea54;
  /* 12d6ea3b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d6ea3d je 0x12d6ea50 */
  if (C.zf) goto L_12d6ea50;
  /* 12d6ea3f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d6ea42 jne 0x12d6ea54 */
  if (!C.zf) goto L_12d6ea54;
  /* 12d6ea44 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ea47 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ea4a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12d6ea4c jne 0x12d6ea20 */
  if (!C.zf) goto L_12d6ea20;
  /* 12d6ea4e mov edi, edi */
  EDI = (EDI);
L_12d6ea50:;
  /* 12d6ea50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6ea52 ret  */
  ESPCHK(0x12d6ea10u, _esp0);
  ESP += 4; return;
  /* 12d6ea53 nop  */
  /* nop */
L_12d6ea54:;
  /* 12d6ea54 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6ea56 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d6ea58 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12d6ea59 ret  */
  ESPCHK(0x12d6ea10u, _esp0);
  ESP += 4; return;
  /* 12d6ea5a mov edi, edi */
  EDI = (EDI);
L_12d6ea5c:;
  /* 12d6ea5c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12d6ea62 je 0x12d6ea78 */
  if (C.zf) goto L_12d6ea78;
  /* 12d6ea64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d6ea66 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12d6ea67 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d6ea69 jne 0x12d6ea54 */
  if (!C.zf) goto L_12d6ea54;
  /* 12d6ea6b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12d6ea6c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d6ea6e je 0x12d6ea50 */
  if (C.zf) goto L_12d6ea50;
  /* 12d6ea70 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12d6ea76 je 0x12d6ea20 */
  if (C.zf) goto L_12d6ea20;
L_12d6ea78:;
  /* 12d6ea78 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12d6ea7b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ea7e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d6ea80 jne 0x12d6ea54 */
  if (!C.zf) goto L_12d6ea54;
  /* 12d6ea82 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d6ea84 je 0x12d6ea50 */
  if (C.zf) goto L_12d6ea50;
  /* 12d6ea86 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d6ea89 jne 0x12d6ea54 */
  if (!C.zf) goto L_12d6ea54;
  /* 12d6ea8b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12d6ea8d je 0x12d6ea50 */
  if (C.zf) goto L_12d6ea50;
  /* 12d6ea8f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ea92 jmp 0x12d6ea20 */
  goto L_12d6ea20;
}

/* FUN_1000eaa0 @ 0x12d6eaa0 (62 bytes, 35 insns) */
void f_12d6eaa0(void) {
  FTRACE(0x12d6eaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6eaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6eaa1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6eaa3 push esi */
  push32((uint32_t)(ESI));
  /* 12d6eaa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6eaa6 push eax */
  push32((uint32_t)(EAX));
  /* 12d6eaa7 push eax */
  push32((uint32_t)(EAX));
  /* 12d6eaa8 push eax */
  push32((uint32_t)(EAX));
  /* 12d6eaa9 push eax */
  push32((uint32_t)(EAX));
  /* 12d6eaaa push eax */
  push32((uint32_t)(EAX));
  /* 12d6eaab push eax */
  push32((uint32_t)(EAX));
  /* 12d6eaac push eax */
  push32((uint32_t)(EAX));
  /* 12d6eaad push eax */
  push32((uint32_t)(EAX));
  /* 12d6eaae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6eab1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d6eab4:;
  /* 12d6eab4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d6eab6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d6eab8 je 0x12d6eac1 */
  if (C.zf) goto L_12d6eac1;
  /* 12d6eaba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12d6eabb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12d6eabb");
  /* 12d6eabf jmp 0x12d6eab4 */
  goto L_12d6eab4;
L_12d6eac1:;
  /* 12d6eac1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6eac4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d6eac7 nop  */
  /* nop */
L_12d6eac8:;
  /* 12d6eac8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12d6eac9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d6eacb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d6eacd je 0x12d6ead6 */
  if (C.zf) goto L_12d6ead6;
  /* 12d6eacf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d6ead0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12d6ead0");
  /* 12d6ead4 jae 0x12d6eac8 */
  if (!C.cf) goto L_12d6eac8;
L_12d6ead6:;
  /* 12d6ead6 mov eax, ecx */
  EAX = (ECX);
  /* 12d6ead8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6eadb pop esi */
  ESI = (pop32());
  /* 12d6eadc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d6eadd ret  */
  ESPCHK(0x12d6eaa0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12d6eae0 (56 bytes, 31 insns) */
void f_12d6eae0(void) {
  FTRACE(0x12d6eae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6eae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6eae1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6eae3 push edi */
  push32((uint32_t)(EDI));
  /* 12d6eae4 push esi */
  push32((uint32_t)(ESI));
  /* 12d6eae5 push ebx */
  push32((uint32_t)(EBX));
  /* 12d6eae6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6eae9 jecxz 0x12d6eb11 */
  x86_unimpl("jecxz @ 0x12d6eae9");
  /* 12d6eaeb mov ebx, ecx */
  EBX = (ECX);
  /* 12d6eaed mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6eaf0 mov esi, edi */
  ESI = (EDI);
  /* 12d6eaf2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6eaf4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12d6eaf6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d6eaf8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6eafa mov edi, esi */
  EDI = (ESI);
  /* 12d6eafc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6eaff repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12d6eb01 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12d6eb04 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6eb06 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d6eb09 ja 0x12d6eb0f */
  if ((!C.cf&&!C.zf)) goto L_12d6eb0f;
  /* 12d6eb0b je 0x12d6eb11 */
  if (C.zf) goto L_12d6eb11;
  /* 12d6eb0d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d6eb0e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12d6eb0f:;
  /* 12d6eb0f not ecx */
  ECX = (~(ECX));
L_12d6eb11:;
  /* 12d6eb11 mov eax, ecx */
  EAX = (ECX);
  /* 12d6eb13 pop ebx */
  EBX = (pop32());
  /* 12d6eb14 pop esi */
  ESI = (pop32());
  /* 12d6eb15 pop edi */
  EDI = (pop32());
  /* 12d6eb16 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d6eb17 ret  */
  ESPCHK(0x12d6eae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb20 @ 0x12d6eb20 (58 bytes, 32 insns) */
void f_12d6eb20(void) {
  FTRACE(0x12d6eb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6eb20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6eb21 mov ebp, esp */
  EBP = (ESP);
  /* 12d6eb23 push esi */
  push32((uint32_t)(ESI));
  /* 12d6eb24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6eb26 push eax */
  push32((uint32_t)(EAX));
  /* 12d6eb27 push eax */
  push32((uint32_t)(EAX));
  /* 12d6eb28 push eax */
  push32((uint32_t)(EAX));
  /* 12d6eb29 push eax */
  push32((uint32_t)(EAX));
  /* 12d6eb2a push eax */
  push32((uint32_t)(EAX));
  /* 12d6eb2b push eax */
  push32((uint32_t)(EAX));
  /* 12d6eb2c push eax */
  push32((uint32_t)(EAX));
  /* 12d6eb2d push eax */
  push32((uint32_t)(EAX));
  /* 12d6eb2e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6eb31 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d6eb34:;
  /* 12d6eb34 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d6eb36 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d6eb38 je 0x12d6eb41 */
  if (C.zf) goto L_12d6eb41;
  /* 12d6eb3a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12d6eb3b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12d6eb3b");
  /* 12d6eb3f jmp 0x12d6eb34 */
  goto L_12d6eb34;
L_12d6eb41:;
  /* 12d6eb41 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12d6eb44:;
  /* 12d6eb44 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d6eb46 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d6eb48 je 0x12d6eb54 */
  if (C.zf) goto L_12d6eb54;
  /* 12d6eb4a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d6eb4b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12d6eb4b");
  /* 12d6eb4f jae 0x12d6eb44 */
  if (!C.cf) goto L_12d6eb44;
  /* 12d6eb51 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12d6eb54:;
  /* 12d6eb54 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6eb57 pop esi */
  ESI = (pop32());
  /* 12d6eb58 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d6eb59 ret  */
  ESPCHK(0x12d6eb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb60 @ 0x12d6eb60 (512 bytes, 147 insns) */
void f_12d6eb60(void) {
  FTRACE(0x12d6eb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6eb60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6eb61 mov ebp, esp */
  EBP = (ESP);
  /* 12d6eb63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6eb66 cmp dword ptr [0x12d7e70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6eb6d jne 0x12d6eb92 */
  if (!C.zf) goto L_12d6eb92;
  /* 12d6eb6f call 0x12d6f630 */
  push32(0x12d6eb74u); f_12d6f630();
  /* 12d6eb74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6eb76 je 0x12d6eb82 */
  if (C.zf) goto L_12d6eb82;
  /* 12d6eb78 mov eax, dword ptr [0x12d80264] */
  EAX = (r32((uint32_t)(0x12d80264)));
  /* 12d6eb7d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d6eb80 jmp 0x12d6eb89 */
  goto L_12d6eb89;
L_12d6eb82:;
  /* 12d6eb82 mov dword ptr [ebp - 8], 0x12d6f680 */
  w32((uint32_t)(EBP + -0x8), (0x12d6f680u));
L_12d6eb89:;
  /* 12d6eb89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6eb8c mov dword ptr [0x12d7e70c], ecx */
  w32((uint32_t)(0x12d7e70c), (ECX));
L_12d6eb92:;
  /* 12d6eb92 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6eb96 jne 0x12d6eba2 */
  if (!C.zf) goto L_12d6eba2;
  /* 12d6eb98 call 0x12d6f480 */
  push32(0x12d6eb9du); f_12d6f480();
  /* 12d6eb9d jmp 0x12d6ec6e */
  goto L_12d6ec6e;
L_12d6eba2:;
  /* 12d6eba2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6eba5 mov dword ptr [0x12d7e6fc], edx */
  w32((uint32_t)(0x12d7e6fc), (EDX));
  /* 12d6ebab cmp dword ptr [0x12d7e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ebb2 je 0x12d6ebd4 */
  if (C.zf) goto L_12d6ebd4;
  /* 12d6ebb4 mov eax, dword ptr [0x12d7e6fc] */
  EAX = (r32((uint32_t)(0x12d7e6fc)));
  /* 12d6ebb9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6ebbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6ebbe je 0x12d6ebd4 */
  if (C.zf) goto L_12d6ebd4;
  /* 12d6ebc0 push 0x12d7e6fc */
  push32((uint32_t)(0x12d7e6fcu));
  /* 12d6ebc5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12d6ebc7 push 0x12d7dab0 */
  push32((uint32_t)(0x12d7dab0u));
  /* 12d6ebcc call 0x12d6ed60 */
  push32(0x12d6ebd1u); f_12d6ed60();
  /* 12d6ebd1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6ebd4:;
  /* 12d6ebd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ebd7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ebda mov dword ptr [0x12d7e700], edx */
  w32((uint32_t)(0x12d7e700), (EDX));
  /* 12d6ebe0 cmp dword ptr [0x12d7e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ebe7 je 0x12d6ec09 */
  if (C.zf) goto L_12d6ec09;
  /* 12d6ebe9 mov eax, dword ptr [0x12d7e700] */
  EAX = (r32((uint32_t)(0x12d7e700)));
  /* 12d6ebee movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6ebf1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6ebf3 je 0x12d6ec09 */
  if (C.zf) goto L_12d6ec09;
  /* 12d6ebf5 push 0x12d7e700 */
  push32((uint32_t)(0x12d7e700u));
  /* 12d6ebfa push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12d6ebfc push 0x12d7d9f8 */
  push32((uint32_t)(0x12d7d9f8u));
  /* 12d6ec01 call 0x12d6ed60 */
  push32(0x12d6ec06u); f_12d6ed60();
  /* 12d6ec06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6ec09:;
  /* 12d6ec09 mov dword ptr [0x12d7e704], 0 */
  w32((uint32_t)(0x12d7e704), (0x0u));
  /* 12d6ec13 cmp dword ptr [0x12d7e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ec1a je 0x12d6ec4d */
  if (C.zf) goto L_12d6ec4d;
  /* 12d6ec1c mov edx, dword ptr [0x12d7e6fc] */
  EDX = (r32((uint32_t)(0x12d7e6fc)));
  /* 12d6ec22 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d6ec25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6ec27 je 0x12d6ec4d */
  if (C.zf) goto L_12d6ec4d;
  /* 12d6ec29 cmp dword ptr [0x12d7e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ec30 je 0x12d6ec46 */
  if (C.zf) goto L_12d6ec46;
  /* 12d6ec32 mov ecx, dword ptr [0x12d7e700] */
  ECX = (r32((uint32_t)(0x12d7e700)));
  /* 12d6ec38 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d6ec3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6ec3d je 0x12d6ec46 */
  if (C.zf) goto L_12d6ec46;
  /* 12d6ec3f call 0x12d6edf0 */
  push32(0x12d6ec44u); f_12d6edf0();
  /* 12d6ec44 jmp 0x12d6ec4b */
  goto L_12d6ec4b;
L_12d6ec46:;
  /* 12d6ec46 call 0x12d6f1e0 */
  push32(0x12d6ec4bu); f_12d6f1e0();
L_12d6ec4b:;
  /* 12d6ec4b jmp 0x12d6ec6e */
  goto L_12d6ec6e;
L_12d6ec4d:;
  /* 12d6ec4d cmp dword ptr [0x12d7e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ec54 je 0x12d6ec69 */
  if (C.zf) goto L_12d6ec69;
  /* 12d6ec56 mov eax, dword ptr [0x12d7e700] */
  EAX = (r32((uint32_t)(0x12d7e700)));
  /* 12d6ec5b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6ec5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6ec60 je 0x12d6ec69 */
  if (C.zf) goto L_12d6ec69;
  /* 12d6ec62 call 0x12d6f380 */
  push32(0x12d6ec67u); f_12d6f380();
  /* 12d6ec67 jmp 0x12d6ec6e */
  goto L_12d6ec6e;
L_12d6ec69:;
  /* 12d6ec69 call 0x12d6f480 */
  push32(0x12d6ec6eu); f_12d6f480();
L_12d6ec6e:;
  /* 12d6ec6e cmp dword ptr [0x12d7e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ec75 jne 0x12d6ec7e */
  if (!C.zf) goto L_12d6ec7e;
  /* 12d6ec77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6ec79 jmp 0x12d6ed5c */
  goto L_12d6ed5c;
L_12d6ec7e:;
  /* 12d6ec7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ec81 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ec87 push edx */
  push32((uint32_t)(EDX));
  /* 12d6ec88 call 0x12d6f4b0 */
  push32(0x12d6ec8du); f_12d6f4b0();
  /* 12d6ec8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ec90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6ec93 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ec97 je 0x12d6ecac */
  if (C.zf) goto L_12d6ecac;
  /* 12d6ec99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6ec9c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6eca1 push eax */
  push32((uint32_t)(EAX));
  /* 12d6eca2 call dword ptr [0x12d80268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80268))), 0x12d6eca8u);
  /* 12d6eca8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6ecaa jne 0x12d6ecb3 */
  if (!C.zf) goto L_12d6ecb3;
L_12d6ecac:;
  /* 12d6ecac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6ecae jmp 0x12d6ed5c */
  goto L_12d6ed5c;
L_12d6ecb3:;
  /* 12d6ecb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6ecb5 mov ecx, dword ptr [0x12d7e6ec] */
  ECX = (r32((uint32_t)(0x12d7e6ec)));
  /* 12d6ecbb push ecx */
  push32((uint32_t)(ECX));
  /* 12d6ecbc call dword ptr [0x12d80278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80278))), 0x12d6ecc2u);
  /* 12d6ecc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6ecc4 jne 0x12d6eccd */
  if (!C.zf) goto L_12d6eccd;
  /* 12d6ecc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6ecc8 jmp 0x12d6ed5c */
  goto L_12d6ed5c;
L_12d6eccd:;
  /* 12d6eccd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ecd1 je 0x12d6ecf8 */
  if (C.zf) goto L_12d6ecf8;
  /* 12d6ecd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6ecd6 mov ax, word ptr [0x12d7e6ec] */
  AX = (r16((uint32_t)(0x12d7e6ec)));
  /* 12d6ecdc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12d6ecdf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6ece2 mov dx, word ptr [0x12d7e708] */
  DX = (r16((uint32_t)(0x12d7e708)));
  /* 12d6ece9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 12d6eced mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6ecf0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12d6ecf4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12d6ecf8:;
  /* 12d6ecf8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ecfc je 0x12d6ed57 */
  if (C.zf) goto L_12d6ed57;
  /* 12d6ecfe push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12d6ed00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6ed03 push edx */
  push32((uint32_t)(EDX));
  /* 12d6ed04 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12d6ed09 mov eax, dword ptr [0x12d7e6ec] */
  EAX = (r32((uint32_t)(0x12d7e6ec)));
  /* 12d6ed0e push eax */
  push32((uint32_t)(EAX));
  /* 12d6ed0f call dword ptr [0x12d7e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7e70c))), 0x12d6ed15u);
  /* 12d6ed15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6ed17 jne 0x12d6ed1d */
  if (!C.zf) goto L_12d6ed1d;
  /* 12d6ed19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6ed1b jmp 0x12d6ed5c */
  goto L_12d6ed5c;
L_12d6ed1d:;
  /* 12d6ed1d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12d6ed1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6ed22 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ed25 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6ed26 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12d6ed2b mov edx, dword ptr [0x12d7e708] */
  EDX = (r32((uint32_t)(0x12d7e708)));
  /* 12d6ed31 push edx */
  push32((uint32_t)(EDX));
  /* 12d6ed32 call dword ptr [0x12d7e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7e70c))), 0x12d6ed38u);
  /* 12d6ed38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6ed3a jne 0x12d6ed40 */
  if (!C.zf) goto L_12d6ed40;
  /* 12d6ed3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6ed3e jmp 0x12d6ed5c */
  goto L_12d6ed5c;
L_12d6ed40:;
  /* 12d6ed40 push 0xa */
  push32((uint32_t)(0xau));
  /* 12d6ed42 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6ed45 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ed4a push eax */
  push32((uint32_t)(EAX));
  /* 12d6ed4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6ed4e push ecx */
  push32((uint32_t)(ECX));
  /* 12d6ed4f call 0x12d658c0 */
  push32(0x12d6ed54u); f_12d658c0();
  /* 12d6ed54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6ed57:;
  /* 12d6ed57 mov eax, 1 */
  EAX = (0x1u);
L_12d6ed5c:;
  /* 12d6ed5c mov esp, ebp */
  ESP = (EBP);
  /* 12d6ed5e pop ebp */
  EBP = (pop32());
  /* 12d6ed5f ret  */
  ESPCHK(0x12d6eb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed60 @ 0x12d6ed60 (130 bytes, 47 insns) */
void f_12d6ed60(void) {
  FTRACE(0x12d6ed60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6ed60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6ed61 mov ebp, esp */
  EBP = (ESP);
  /* 12d6ed63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6ed66 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12d6ed6d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12d6ed74:;
  /* 12d6ed74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6ed77 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ed7a jg 0x12d6edde */
  if ((!C.zf&&C.sf==C.of)) goto L_12d6edde;
  /* 12d6ed7c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ed80 je 0x12d6edde */
  if (C.zf) goto L_12d6edde;
  /* 12d6ed82 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6ed85 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ed88 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d6ed89 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6ed8b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d6ed8d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6ed90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6ed93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6ed96 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12d6ed99 push eax */
  push32((uint32_t)(EAX));
  /* 12d6ed9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6ed9d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d6ed9f push edx */
  push32((uint32_t)(EDX));
  /* 12d6eda0 call 0x12d71450 */
  push32(0x12d6eda5u); f_12d71450();
  /* 12d6eda5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6eda8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d6edab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6edaf jne 0x12d6edc2 */
  if (!C.zf) goto L_12d6edc2;
  /* 12d6edb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6edb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6edb7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12d6edbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6edbe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d6edc0 jmp 0x12d6eddc */
  goto L_12d6eddc;
L_12d6edc2:;
  /* 12d6edc2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6edc6 jge 0x12d6edd3 */
  if ((C.sf==C.of)) goto L_12d6edd3;
  /* 12d6edc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6edcb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6edce mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12d6edd1 jmp 0x12d6eddc */
  goto L_12d6eddc;
L_12d6edd3:;
  /* 12d6edd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6edd6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6edd9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d6eddc:;
  /* 12d6eddc jmp 0x12d6ed74 */
  goto L_12d6ed74;
L_12d6edde:;
  /* 12d6edde mov esp, ebp */
  ESP = (EBP);
  /* 12d6ede0 pop ebp */
  EBP = (pop32());
  /* 12d6ede1 ret  */
  ESPCHK(0x12d6ed60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000edf0 @ 0x12d6edf0 (186 bytes, 50 insns) */
void f_12d6edf0(void) {
  FTRACE(0x12d6edf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6edf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6edf1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6edf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6edf4 mov eax, dword ptr [0x12d7e6fc] */
  EAX = (r32((uint32_t)(0x12d7e6fc)));
  /* 12d6edf9 push eax */
  push32((uint32_t)(EAX));
  /* 12d6edfa call 0x12d65bb0 */
  push32(0x12d6edffu); f_12d65bb0();
  /* 12d6edff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ee02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6ee04 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ee07 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12d6ee0a mov dword ptr [0x12d7e6f8], ecx */
  w32((uint32_t)(0x12d7e6f8), (ECX));
  /* 12d6ee10 mov edx, dword ptr [0x12d7e700] */
  EDX = (r32((uint32_t)(0x12d7e700)));
  /* 12d6ee16 push edx */
  push32((uint32_t)(EDX));
  /* 12d6ee17 call 0x12d65bb0 */
  push32(0x12d6ee1cu); f_12d65bb0();
  /* 12d6ee1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ee1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6ee21 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ee24 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12d6ee27 mov dword ptr [0x12d7e6f0], ecx */
  w32((uint32_t)(0x12d7e6f0), (ECX));
  /* 12d6ee2d mov dword ptr [0x12d7e6ec], 0 */
  w32((uint32_t)(0x12d7e6ec), (0x0u));
  /* 12d6ee37 cmp dword ptr [0x12d7e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ee3e je 0x12d6ee49 */
  if (C.zf) goto L_12d6ee49;
  /* 12d6ee40 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12d6ee47 jmp 0x12d6ee5b */
  goto L_12d6ee5b;
L_12d6ee49:;
  /* 12d6ee49 mov edx, dword ptr [0x12d7e6fc] */
  EDX = (r32((uint32_t)(0x12d7e6fc)));
  /* 12d6ee4f push edx */
  push32((uint32_t)(EDX));
  /* 12d6ee50 call 0x12d6f890 */
  push32(0x12d6ee55u); f_12d6f890();
  /* 12d6ee55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ee58 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d6ee5b:;
  /* 12d6ee5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6ee5e mov dword ptr [0x12d7e6f4], eax */
  w32((uint32_t)(0x12d7e6f4), (EAX));
  /* 12d6ee63 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6ee65 push 0x12d6eeb0 */
  push32((uint32_t)(0x12d6eeb0u));
  /* 12d6ee6a call dword ptr [0x12d8026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8026c))), 0x12d6ee70u);
  /* 12d6ee70 mov ecx, dword ptr [0x12d7e704] */
  ECX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6ee76 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6ee7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6ee7e je 0x12d6ee9c */
  if (C.zf) goto L_12d6ee9c;
  /* 12d6ee80 mov edx, dword ptr [0x12d7e704] */
  EDX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6ee86 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6ee8c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6ee8e je 0x12d6ee9c */
  if (C.zf) goto L_12d6ee9c;
  /* 12d6ee90 mov eax, dword ptr [0x12d7e704] */
  EAX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6ee95 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6ee98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6ee9a jne 0x12d6eea6 */
  if (!C.zf) goto L_12d6eea6;
L_12d6ee9c:;
  /* 12d6ee9c mov dword ptr [0x12d7e704], 0 */
  w32((uint32_t)(0x12d7e704), (0x0u));
L_12d6eea6:;
  /* 12d6eea6 mov esp, ebp */
  ESP = (EBP);
  /* 12d6eea8 pop ebp */
  EBP = (pop32());
  /* 12d6eea9 ret  */
  ESPCHK(0x12d6edf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eeb0 @ 0x12d6eeb0 (804 bytes, 220 insns) */
void f_12d6eeb0(void) {
  FTRACE(0x12d6eeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6eeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6eeb1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6eeb3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6eeb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6eeb9 push eax */
  push32((uint32_t)(EAX));
  /* 12d6eeba call 0x12d6f810 */
  push32(0x12d6eebfu); f_12d6f810();
  /* 12d6eebf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6eec2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12d6eec5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d6eec7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d6eeca push ecx */
  push32((uint32_t)(ECX));
  /* 12d6eecb mov edx, dword ptr [0x12d7e6f0] */
  EDX = (r32((uint32_t)(0x12d7e6f0)));
  /* 12d6eed1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d6eed3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6eed5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6eedb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6eee1 push edx */
  push32((uint32_t)(EDX));
  /* 12d6eee2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6eee5 push eax */
  push32((uint32_t)(EAX));
  /* 12d6eee6 call dword ptr [0x12d7e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7e70c))), 0x12d6eeecu);
  /* 12d6eeec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6eeee jne 0x12d6ef04 */
  if (!C.zf) goto L_12d6ef04;
  /* 12d6eef0 mov dword ptr [0x12d7e704], 0 */
  w32((uint32_t)(0x12d7e704), (0x0u));
  /* 12d6eefa mov eax, 1 */
  EAX = (0x1u);
  /* 12d6eeff jmp 0x12d6f1ce */
  goto L_12d6f1ce;
L_12d6ef04:;
  /* 12d6ef04 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d6ef07 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6ef08 mov edx, dword ptr [0x12d7e700] */
  EDX = (r32((uint32_t)(0x12d7e700)));
  /* 12d6ef0e push edx */
  push32((uint32_t)(EDX));
  /* 12d6ef0f call 0x12d71450 */
  push32(0x12d6ef14u); f_12d71450();
  /* 12d6ef14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ef17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6ef19 jne 0x12d6f03f */
  if (!C.zf) goto L_12d6f03f;
  /* 12d6ef1f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d6ef21 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d6ef24 push eax */
  push32((uint32_t)(EAX));
  /* 12d6ef25 mov ecx, dword ptr [0x12d7e6f8] */
  ECX = (r32((uint32_t)(0x12d7e6f8)));
  /* 12d6ef2b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d6ef2d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6ef2f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6ef35 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ef3b push ecx */
  push32((uint32_t)(ECX));
  /* 12d6ef3c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6ef3f push edx */
  push32((uint32_t)(EDX));
  /* 12d6ef40 call dword ptr [0x12d7e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7e70c))), 0x12d6ef46u);
  /* 12d6ef46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6ef48 jne 0x12d6ef5e */
  if (!C.zf) goto L_12d6ef5e;
  /* 12d6ef4a mov dword ptr [0x12d7e704], 0 */
  w32((uint32_t)(0x12d7e704), (0x0u));
  /* 12d6ef54 mov eax, 1 */
  EAX = (0x1u);
  /* 12d6ef59 jmp 0x12d6f1ce */
  goto L_12d6f1ce;
L_12d6ef5e:;
  /* 12d6ef5e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d6ef61 push eax */
  push32((uint32_t)(EAX));
  /* 12d6ef62 mov ecx, dword ptr [0x12d7e6fc] */
  ECX = (r32((uint32_t)(0x12d7e6fc)));
  /* 12d6ef68 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6ef69 call 0x12d71450 */
  push32(0x12d6ef6eu); f_12d71450();
  /* 12d6ef6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ef71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6ef73 jne 0x12d6efa0 */
  if (!C.zf) goto L_12d6efa0;
  /* 12d6ef75 mov edx, dword ptr [0x12d7e704] */
  EDX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6ef7b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6ef81 mov dword ptr [0x12d7e704], edx */
  w32((uint32_t)(0x12d7e704), (EDX));
  /* 12d6ef87 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6ef8a mov dword ptr [0x12d7e708], eax */
  w32((uint32_t)(0x12d7e708), (EAX));
  /* 12d6ef8f mov ecx, dword ptr [0x12d7e708] */
  ECX = (r32((uint32_t)(0x12d7e708)));
  /* 12d6ef95 mov dword ptr [0x12d7e6ec], ecx */
  w32((uint32_t)(0x12d7e6ec), (ECX));
  /* 12d6ef9b jmp 0x12d6f03f */
  goto L_12d6f03f;
L_12d6efa0:;
  /* 12d6efa0 mov edx, dword ptr [0x12d7e704] */
  EDX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6efa6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6efa9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6efab jne 0x12d6f03f */
  if (!C.zf) goto L_12d6f03f;
  /* 12d6efb1 cmp dword ptr [0x12d7e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6efb8 je 0x12d6f00d */
  if (C.zf) goto L_12d6f00d;
  /* 12d6efba mov eax, dword ptr [0x12d7e6f4] */
  EAX = (r32((uint32_t)(0x12d7e6f4)));
  /* 12d6efbf push eax */
  push32((uint32_t)(EAX));
  /* 12d6efc0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d6efc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6efc4 mov edx, dword ptr [0x12d7e6fc] */
  EDX = (r32((uint32_t)(0x12d7e6fc)));
  /* 12d6efca push edx */
  push32((uint32_t)(EDX));
  /* 12d6efcb call 0x12d71520 */
  push32(0x12d6efd0u); f_12d71520();
  /* 12d6efd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6efd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6efd5 jne 0x12d6f00d */
  if (!C.zf) goto L_12d6f00d;
  /* 12d6efd7 mov eax, dword ptr [0x12d7e704] */
  EAX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6efdc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12d6efde mov dword ptr [0x12d7e704], eax */
  w32((uint32_t)(0x12d7e704), (EAX));
  /* 12d6efe3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6efe6 mov dword ptr [0x12d7e708], ecx */
  w32((uint32_t)(0x12d7e708), (ECX));
  /* 12d6efec mov edx, dword ptr [0x12d7e6fc] */
  EDX = (r32((uint32_t)(0x12d7e6fc)));
  /* 12d6eff2 push edx */
  push32((uint32_t)(EDX));
  /* 12d6eff3 call 0x12d65bb0 */
  push32(0x12d6eff8u); f_12d65bb0();
  /* 12d6eff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6effb cmp eax, dword ptr [0x12d7e6f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7e6f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f001 jne 0x12d6f00b */
  if (!C.zf) goto L_12d6f00b;
  /* 12d6f003 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6f006 mov dword ptr [0x12d7e6ec], eax */
  w32((uint32_t)(0x12d7e6ec), (EAX));
L_12d6f00b:;
  /* 12d6f00b jmp 0x12d6f03f */
  goto L_12d6f03f;
L_12d6f00d:;
  /* 12d6f00d mov ecx, dword ptr [0x12d7e704] */
  ECX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6f013 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6f016 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6f018 jne 0x12d6f03f */
  if (!C.zf) goto L_12d6f03f;
  /* 12d6f01a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6f01d push edx */
  push32((uint32_t)(EDX));
  /* 12d6f01e call 0x12d6f550 */
  push32(0x12d6f023u); f_12d6f550();
  /* 12d6f023 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f026 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f028 je 0x12d6f03f */
  if (C.zf) goto L_12d6f03f;
  /* 12d6f02a mov eax, dword ptr [0x12d7e704] */
  EAX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6f02f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12d6f031 mov dword ptr [0x12d7e704], eax */
  w32((uint32_t)(0x12d7e704), (EAX));
  /* 12d6f036 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6f039 mov dword ptr [0x12d7e708], ecx */
  w32((uint32_t)(0x12d7e708), (ECX));
L_12d6f03f:;
  /* 12d6f03f mov edx, dword ptr [0x12d7e704] */
  EDX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6f045 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6f04b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f051 je 0x12d6f1c1 */
  if (C.zf) goto L_12d6f1c1;
  /* 12d6f057 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d6f059 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d6f05c push eax */
  push32((uint32_t)(EAX));
  /* 12d6f05d mov ecx, dword ptr [0x12d7e6f8] */
  ECX = (r32((uint32_t)(0x12d7e6f8)));
  /* 12d6f063 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d6f065 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6f067 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6f06d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f073 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f074 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6f077 push edx */
  push32((uint32_t)(EDX));
  /* 12d6f078 call dword ptr [0x12d7e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7e70c))), 0x12d6f07eu);
  /* 12d6f07e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f080 jne 0x12d6f096 */
  if (!C.zf) goto L_12d6f096;
  /* 12d6f082 mov dword ptr [0x12d7e704], 0 */
  w32((uint32_t)(0x12d7e704), (0x0u));
  /* 12d6f08c mov eax, 1 */
  EAX = (0x1u);
  /* 12d6f091 jmp 0x12d6f1ce */
  goto L_12d6f1ce;
L_12d6f096:;
  /* 12d6f096 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d6f099 push eax */
  push32((uint32_t)(EAX));
  /* 12d6f09a mov ecx, dword ptr [0x12d7e6fc] */
  ECX = (r32((uint32_t)(0x12d7e6fc)));
  /* 12d6f0a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f0a1 call 0x12d71450 */
  push32(0x12d6f0a6u); f_12d71450();
  /* 12d6f0a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f0a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f0ab jne 0x12d6f160 */
  if (!C.zf) goto L_12d6f160;
  /* 12d6f0b1 mov edx, dword ptr [0x12d7e704] */
  EDX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6f0b7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12d6f0ba mov dword ptr [0x12d7e704], edx */
  w32((uint32_t)(0x12d7e704), (EDX));
  /* 12d6f0c0 cmp dword ptr [0x12d7e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f0c7 je 0x12d6f0ea */
  if (C.zf) goto L_12d6f0ea;
  /* 12d6f0c9 mov eax, dword ptr [0x12d7e704] */
  EAX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6f0ce or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12d6f0d1 mov dword ptr [0x12d7e704], eax */
  w32((uint32_t)(0x12d7e704), (EAX));
  /* 12d6f0d6 cmp dword ptr [0x12d7e6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f0dd jne 0x12d6f0e8 */
  if (!C.zf) goto L_12d6f0e8;
  /* 12d6f0df mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6f0e2 mov dword ptr [0x12d7e6ec], ecx */
  w32((uint32_t)(0x12d7e6ec), (ECX));
L_12d6f0e8:;
  /* 12d6f0e8 jmp 0x12d6f15e */
  goto L_12d6f15e;
L_12d6f0ea:;
  /* 12d6f0ea cmp dword ptr [0x12d7e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f0f1 je 0x12d6f13f */
  if (C.zf) goto L_12d6f13f;
  /* 12d6f0f3 mov edx, dword ptr [0x12d7e6fc] */
  EDX = (r32((uint32_t)(0x12d7e6fc)));
  /* 12d6f0f9 push edx */
  push32((uint32_t)(EDX));
  /* 12d6f0fa call 0x12d65bb0 */
  push32(0x12d6f0ffu); f_12d65bb0();
  /* 12d6f0ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f102 cmp eax, dword ptr [0x12d7e6f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7e6f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f108 jne 0x12d6f13f */
  if (!C.zf) goto L_12d6f13f;
  /* 12d6f10a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6f10c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6f10f push eax */
  push32((uint32_t)(EAX));
  /* 12d6f110 call 0x12d6f5a0 */
  push32(0x12d6f115u); f_12d6f5a0();
  /* 12d6f115 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f11a je 0x12d6f13d */
  if (C.zf) goto L_12d6f13d;
  /* 12d6f11c mov ecx, dword ptr [0x12d7e704] */
  ECX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6f122 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12d6f125 mov dword ptr [0x12d7e704], ecx */
  w32((uint32_t)(0x12d7e704), (ECX));
  /* 12d6f12b cmp dword ptr [0x12d7e6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f132 jne 0x12d6f13d */
  if (!C.zf) goto L_12d6f13d;
  /* 12d6f134 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6f137 mov dword ptr [0x12d7e6ec], edx */
  w32((uint32_t)(0x12d7e6ec), (EDX));
L_12d6f13d:;
  /* 12d6f13d jmp 0x12d6f15e */
  goto L_12d6f15e;
L_12d6f13f:;
  /* 12d6f13f mov eax, dword ptr [0x12d7e704] */
  EAX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6f144 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12d6f147 mov dword ptr [0x12d7e704], eax */
  w32((uint32_t)(0x12d7e704), (EAX));
  /* 12d6f14c cmp dword ptr [0x12d7e6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f153 jne 0x12d6f15e */
  if (!C.zf) goto L_12d6f15e;
  /* 12d6f155 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6f158 mov dword ptr [0x12d7e6ec], ecx */
  w32((uint32_t)(0x12d7e6ec), (ECX));
L_12d6f15e:;
  /* 12d6f15e jmp 0x12d6f1c1 */
  goto L_12d6f1c1;
L_12d6f160:;
  /* 12d6f160 cmp dword ptr [0x12d7e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f167 jne 0x12d6f1c1 */
  if (!C.zf) goto L_12d6f1c1;
  /* 12d6f169 cmp dword ptr [0x12d7e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f170 je 0x12d6f1c1 */
  if (C.zf) goto L_12d6f1c1;
  /* 12d6f172 mov edx, dword ptr [0x12d7e6f4] */
  EDX = (r32((uint32_t)(0x12d7e6f4)));
  /* 12d6f178 push edx */
  push32((uint32_t)(EDX));
  /* 12d6f179 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d6f17c push eax */
  push32((uint32_t)(EAX));
  /* 12d6f17d mov ecx, dword ptr [0x12d7e6fc] */
  ECX = (r32((uint32_t)(0x12d7e6fc)));
  /* 12d6f183 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f184 call 0x12d71520 */
  push32(0x12d6f189u); f_12d71520();
  /* 12d6f189 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f18c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f18e jne 0x12d6f1c1 */
  if (!C.zf) goto L_12d6f1c1;
  /* 12d6f190 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6f192 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6f195 push edx */
  push32((uint32_t)(EDX));
  /* 12d6f196 call 0x12d6f5a0 */
  push32(0x12d6f19bu); f_12d6f5a0();
  /* 12d6f19b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f19e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f1a0 je 0x12d6f1c1 */
  if (C.zf) goto L_12d6f1c1;
  /* 12d6f1a2 mov eax, dword ptr [0x12d7e704] */
  EAX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6f1a7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12d6f1aa mov dword ptr [0x12d7e704], eax */
  w32((uint32_t)(0x12d7e704), (EAX));
  /* 12d6f1af cmp dword ptr [0x12d7e6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f1b6 jne 0x12d6f1c1 */
  if (!C.zf) goto L_12d6f1c1;
  /* 12d6f1b8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6f1bb mov dword ptr [0x12d7e6ec], ecx */
  w32((uint32_t)(0x12d7e6ec), (ECX));
L_12d6f1c1:;
  /* 12d6f1c1 mov eax, dword ptr [0x12d7e704] */
  EAX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6f1c6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6f1c9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d6f1cb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6f1cd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12d6f1ce:;
  /* 12d6f1ce mov esp, ebp */
  ESP = (EBP);
  /* 12d6f1d0 pop ebp */
  EBP = (pop32());
  /* 12d6f1d1 ret 4 */
  ESPCHK(0x12d6eeb0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f1e0 @ 0x12d6f1e0 (116 bytes, 33 insns) */
void f_12d6f1e0(void) {
  FTRACE(0x12d6f1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6f1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6f1e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6f1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f1e4 mov eax, dword ptr [0x12d7e6fc] */
  EAX = (r32((uint32_t)(0x12d7e6fc)));
  /* 12d6f1e9 push eax */
  push32((uint32_t)(EAX));
  /* 12d6f1ea call 0x12d65bb0 */
  push32(0x12d6f1efu); f_12d65bb0();
  /* 12d6f1ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f1f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6f1f4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f1f7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12d6f1fa mov dword ptr [0x12d7e6f8], ecx */
  w32((uint32_t)(0x12d7e6f8), (ECX));
  /* 12d6f200 cmp dword ptr [0x12d7e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f207 je 0x12d6f212 */
  if (C.zf) goto L_12d6f212;
  /* 12d6f209 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12d6f210 jmp 0x12d6f224 */
  goto L_12d6f224;
L_12d6f212:;
  /* 12d6f212 mov edx, dword ptr [0x12d7e6fc] */
  EDX = (r32((uint32_t)(0x12d7e6fc)));
  /* 12d6f218 push edx */
  push32((uint32_t)(EDX));
  /* 12d6f219 call 0x12d6f890 */
  push32(0x12d6f21eu); f_12d6f890();
  /* 12d6f21e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f221 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d6f224:;
  /* 12d6f224 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6f227 mov dword ptr [0x12d7e6f4], eax */
  w32((uint32_t)(0x12d7e6f4), (EAX));
  /* 12d6f22c push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6f22e push 0x12d6f260 */
  push32((uint32_t)(0x12d6f260u));
  /* 12d6f233 call dword ptr [0x12d8026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8026c))), 0x12d6f239u);
  /* 12d6f239 mov ecx, dword ptr [0x12d7e704] */
  ECX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6f23f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6f242 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6f244 jne 0x12d6f250 */
  if (!C.zf) goto L_12d6f250;
  /* 12d6f246 mov dword ptr [0x12d7e704], 0 */
  w32((uint32_t)(0x12d7e704), (0x0u));
L_12d6f250:;
  /* 12d6f250 mov esp, ebp */
  ESP = (EBP);
  /* 12d6f252 pop ebp */
  EBP = (pop32());
  /* 12d6f253 ret  */
  ESPCHK(0x12d6f1e0u, _esp0);
  ESP += 4; return;
}

