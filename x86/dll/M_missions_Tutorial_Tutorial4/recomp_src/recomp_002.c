#include "recomp.h"

/* FUN_100147d0 @ 0x124647d0 (878 bytes, 273 insns) */
void f_124647d0(void) {
  FTRACE(0x124647d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124647d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124647d1 mov ebp, esp */
  EBP = (ESP);
  /* 124647d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124647d6 push esi */
  push32((uint32_t)(ESI));
  /* 124647d7 mov eax, dword ptr [0x12482c98] */
  EAX = (r32((uint32_t)(0x12482c98)));
  /* 124647dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124647df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124647e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124647ed jmp 0x124647f8 */
  goto L_124647f8;
L_124647ef:;
  /* 124647ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124647f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124647f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_124647f8:;
  /* 124647f8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124647fc jae 0x12464831 */
  if (!C.cf) goto L_12464831;
  /* 124647fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12464801 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464804 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12464807 push ecx */
  push32((uint32_t)(ECX));
  /* 12464808 call 0x1245a650 */
  push32(0x1246480du); f_1245a650();
  /* 1246480d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464810 mov esi, eax */
  ESI = (EAX);
  /* 12464812 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12464815 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464818 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1246481c push ecx */
  push32((uint32_t)(ECX));
  /* 1246481d call 0x1245a650 */
  push32(0x12464822u); f_1245a650();
  /* 12464822 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464825 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464828 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1246482c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1246482f jmp 0x124647ef */
  goto L_124647ef;
L_12464831:;
  /* 12464831 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12464838 jmp 0x12464843 */
  goto L_12464843;
L_1246483a:;
  /* 1246483a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1246483d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464840 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12464843:;
  /* 12464843 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464847 jae 0x1246487d */
  if (!C.cf) goto L_1246487d;
  /* 12464849 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1246484c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246484f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12464853 push eax */
  push32((uint32_t)(EAX));
  /* 12464854 call 0x1245a650 */
  push32(0x12464859u); f_1245a650();
  /* 12464859 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246485c mov esi, eax */
  ESI = (EAX);
  /* 1246485e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12464861 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464864 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12464868 push eax */
  push32((uint32_t)(EAX));
  /* 12464869 call 0x1245a650 */
  push32(0x1246486eu); f_1245a650();
  /* 1246486e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464871 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464874 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12464878 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1246487b jmp 0x1246483a */
  goto L_1246483a;
L_1246487d:;
  /* 1246487d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464880 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12464886 push eax */
  push32((uint32_t)(EAX));
  /* 12464887 call 0x1245a650 */
  push32(0x1246488cu); f_1245a650();
  /* 1246488c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246488f mov esi, eax */
  ESI = (EAX);
  /* 12464891 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464894 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1246489a push edx */
  push32((uint32_t)(EDX));
  /* 1246489b call 0x1245a650 */
  push32(0x124648a0u); f_1245a650();
  /* 124648a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124648a3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124648a6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 124648aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124648ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124648b0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 124648b6 push edx */
  push32((uint32_t)(EDX));
  /* 124648b7 call 0x1245a650 */
  push32(0x124648bcu); f_1245a650();
  /* 124648bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124648bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124648c2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 124648c6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124648c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124648cc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 124648d2 push ecx */
  push32((uint32_t)(ECX));
  /* 124648d3 call 0x1245a650 */
  push32(0x124648d8u); f_1245a650();
  /* 124648d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124648db mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124648de lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 124648e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124648e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124648e8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 124648ee push edx */
  push32((uint32_t)(EDX));
  /* 124648ef call 0x1245a650 */
  push32(0x124648f4u); f_1245a650();
  /* 124648f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124648f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124648fa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 124648fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12464901 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12464904 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464909 push eax */
  push32((uint32_t)(EAX));
  /* 1246490a call 0x12457800 */
  push32(0x1246490fu); f_12457800();
  /* 1246490f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464912 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12464915 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464919 je 0x12464b36 */
  if (C.zf) goto L_12464b36;
  /* 1246491f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12464922 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12464925 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12464928 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246492e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12464931 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12464936 mov eax, dword ptr [0x12482c98] */
  EAX = (r32((uint32_t)(0x12482c98)));
  /* 1246493b push eax */
  push32((uint32_t)(EAX));
  /* 1246493c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246493f push ecx */
  push32((uint32_t)(ECX));
  /* 12464940 call 0x1245e100 */
  push32(0x12464945u); f_1245e100();
  /* 12464945 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464948 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1246494f jmp 0x1246495a */
  goto L_1246495a;
L_12464951:;
  /* 12464951 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12464954 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464957 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1246495a:;
  /* 1246495a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246495e jae 0x124649ce */
  if (!C.cf) goto L_124649ce;
  /* 12464960 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12464963 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12464966 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464969 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1246496c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1246496f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464972 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12464975 push edx */
  push32((uint32_t)(EDX));
  /* 12464976 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464979 push eax */
  push32((uint32_t)(EAX));
  /* 1246497a call 0x1245a7d0 */
  push32(0x1246497fu); f_1245a7d0();
  /* 1246497f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464982 push eax */
  push32((uint32_t)(EAX));
  /* 12464983 call 0x1245a650 */
  push32(0x12464988u); f_1245a650();
  /* 12464988 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246498b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1246498e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12464992 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12464995 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12464998 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1246499b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1246499e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 124649a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124649a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124649a8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 124649ac push edx */
  push32((uint32_t)(EDX));
  /* 124649ad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124649b0 push eax */
  push32((uint32_t)(EAX));
  /* 124649b1 call 0x1245a7d0 */
  push32(0x124649b6u); f_1245a7d0();
  /* 124649b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124649b9 push eax */
  push32((uint32_t)(EAX));
  /* 124649ba call 0x1245a650 */
  push32(0x124649bfu); f_1245a650();
  /* 124649bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124649c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124649c5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 124649c9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124649cc jmp 0x12464951 */
  goto L_12464951;
L_124649ce:;
  /* 124649ce mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124649d5 jmp 0x124649e0 */
  goto L_124649e0;
L_124649d7:;
  /* 124649d7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124649da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124649dd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_124649e0:;
  /* 124649e0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124649e4 jae 0x12464a56 */
  if (!C.cf) goto L_12464a56;
  /* 124649e6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124649e9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124649ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124649ef mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 124649f3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124649f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124649f9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 124649fd push eax */
  push32((uint32_t)(EAX));
  /* 124649fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464a01 push ecx */
  push32((uint32_t)(ECX));
  /* 12464a02 call 0x1245a7d0 */
  push32(0x12464a07u); f_1245a7d0();
  /* 12464a07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464a0a push eax */
  push32((uint32_t)(EAX));
  /* 12464a0b call 0x1245a650 */
  push32(0x12464a10u); f_1245a650();
  /* 12464a10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464a13 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464a16 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12464a1a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12464a1d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12464a20 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12464a23 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464a26 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12464a2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12464a2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464a30 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12464a34 push eax */
  push32((uint32_t)(EAX));
  /* 12464a35 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464a38 push ecx */
  push32((uint32_t)(ECX));
  /* 12464a39 call 0x1245a7d0 */
  push32(0x12464a3eu); f_1245a7d0();
  /* 12464a3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464a41 push eax */
  push32((uint32_t)(EAX));
  /* 12464a42 call 0x1245a650 */
  push32(0x12464a47u); f_1245a650();
  /* 12464a47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464a4a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464a4d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12464a51 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12464a54 jmp 0x124649d7 */
  goto L_124649d7;
L_12464a56:;
  /* 12464a56 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12464a59 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464a5c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12464a62 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464a65 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12464a6b push ecx */
  push32((uint32_t)(ECX));
  /* 12464a6c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464a6f push edx */
  push32((uint32_t)(EDX));
  /* 12464a70 call 0x1245a7d0 */
  push32(0x12464a75u); f_1245a7d0();
  /* 12464a75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464a78 push eax */
  push32((uint32_t)(EAX));
  /* 12464a79 call 0x1245a650 */
  push32(0x12464a7eu); f_1245a650();
  /* 12464a7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464a81 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464a84 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12464a88 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12464a8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12464a8e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464a91 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12464a97 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464a9a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12464aa0 push eax */
  push32((uint32_t)(EAX));
  /* 12464aa1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464aa4 push ecx */
  push32((uint32_t)(ECX));
  /* 12464aa5 call 0x1245a7d0 */
  push32(0x12464aaau); f_1245a7d0();
  /* 12464aaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464aad push eax */
  push32((uint32_t)(EAX));
  /* 12464aae call 0x1245a650 */
  push32(0x12464ab3u); f_1245a650();
  /* 12464ab3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464ab6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464ab9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12464abd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12464ac0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12464ac3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464ac6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12464acc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464acf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12464ad5 push ecx */
  push32((uint32_t)(ECX));
  /* 12464ad6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464ad9 push edx */
  push32((uint32_t)(EDX));
  /* 12464ada call 0x1245a7d0 */
  push32(0x12464adfu); f_1245a7d0();
  /* 12464adf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464ae2 push eax */
  push32((uint32_t)(EAX));
  /* 12464ae3 call 0x1245a650 */
  push32(0x12464ae8u); f_1245a650();
  /* 12464ae8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464aeb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464aee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12464af2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12464af5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12464af8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464afb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12464b01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464b04 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12464b0a push eax */
  push32((uint32_t)(EAX));
  /* 12464b0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464b0e push ecx */
  push32((uint32_t)(ECX));
  /* 12464b0f call 0x1245a7d0 */
  push32(0x12464b14u); f_1245a7d0();
  /* 12464b14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464b17 push eax */
  push32((uint32_t)(EAX));
  /* 12464b18 call 0x1245a650 */
  push32(0x12464b1du); f_1245a650();
  /* 12464b1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464b20 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464b23 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12464b27 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12464b2a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12464b2d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12464b30 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12464b36:;
  /* 12464b36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12464b39 pop esi */
  ESI = (pop32());
  /* 12464b3a mov esp, ebp */
  ESP = (EBP);
  /* 12464b3c pop ebp */
  EBP = (pop32());
  /* 12464b3d ret  */
  ESPCHK(0x124647d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b40 @ 0x12464b40 (31 bytes, 15 insns) */
void f_12464b40(void) {
  FTRACE(0x12464b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12464b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12464b41 mov ebp, esp */
  EBP = (ESP);
  /* 12464b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12464b45 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464b48 push eax */
  push32((uint32_t)(EAX));
  /* 12464b49 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464b4c push ecx */
  push32((uint32_t)(ECX));
  /* 12464b4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464b50 push edx */
  push32((uint32_t)(EDX));
  /* 12464b51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464b54 push eax */
  push32((uint32_t)(EAX));
  /* 12464b55 call 0x12464b60 */
  push32(0x12464b5au); f_12464b60();
  /* 12464b5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464b5d pop ebp */
  EBP = (pop32());
  /* 12464b5e ret  */
  ESPCHK(0x12464b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b60 @ 0x12464b60 (393 bytes, 123 insns) */
void f_12464b60(void) {
  FTRACE(0x12464b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12464b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12464b61 mov ebp, esp */
  EBP = (ESP);
  /* 12464b63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12464b66 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464b6a jne 0x12464b76 */
  if (!C.zf) goto L_12464b76;
  /* 12464b6c mov eax, dword ptr [0x12482c98] */
  EAX = (r32((uint32_t)(0x12482c98)));
  /* 12464b71 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12464b74 jmp 0x12464b7c */
  goto L_12464b7c;
L_12464b76:;
  /* 12464b76 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12464b79 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12464b7c:;
  /* 12464b7c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12464b7f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12464b82 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464b85 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12464b88 push 0x12483be4 */
  push32((uint32_t)(0x12483be4u));
  /* 12464b8d call dword ptr [0x1248635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248635c))), 0x12464b93u);
  /* 12464b93 cmp dword ptr [0x12483bd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483bd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464b9a je 0x12464bba */
  if (C.zf) goto L_12464bba;
  /* 12464b9c push 0x12483be4 */
  push32((uint32_t)(0x12483be4u));
  /* 12464ba1 call dword ptr [0x1248634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248634c))), 0x12464ba7u);
  /* 12464ba7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12464ba9 call 0x1245b220 */
  push32(0x12464baeu); f_1245b220();
  /* 12464bae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464bb1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12464bb8 jmp 0x12464bc1 */
  goto L_12464bc1;
L_12464bba:;
  /* 12464bba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12464bc1:;
  /* 12464bc1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464bc5 jbe 0x12464cb2 */
  if ((C.cf||C.zf)) goto L_12464cb2;
  /* 12464bcb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464bce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12464bd0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12464bd3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12464bd7 je 0x12464be1 */
  if (C.zf) goto L_12464be1;
  /* 12464bd9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12464bdd je 0x12464be6 */
  if (C.zf) goto L_12464be6;
  /* 12464bdf jmp 0x12464c40 */
  goto L_12464c40;
L_12464be1:;
  /* 12464be1 jmp 0x12464cb2 */
  goto L_12464cb2;
L_12464be6:;
  /* 12464be6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464be9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464bec mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12464bef mov dword ptr [0x12483bc0], 0 */
  w32((uint32_t)(0x12483bc0), (0x0u));
  /* 12464bf9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464bfc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12464bff cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464c02 jne 0x12464c17 */
  if (!C.zf) goto L_12464c17;
  /* 12464c04 mov dword ptr [0x12483bc0], 1 */
  w32((uint32_t)(0x12483bc0), (0x1u));
  /* 12464c0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464c11 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464c14 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12464c17:;
  /* 12464c17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12464c1a push ecx */
  push32((uint32_t)(ECX));
  /* 12464c1b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12464c1e push edx */
  push32((uint32_t)(EDX));
  /* 12464c1f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12464c22 push eax */
  push32((uint32_t)(EAX));
  /* 12464c23 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464c26 push ecx */
  push32((uint32_t)(ECX));
  /* 12464c27 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464c2a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12464c2c push eax */
  push32((uint32_t)(EAX));
  /* 12464c2d call 0x12464cf0 */
  push32(0x12464c32u); f_12464cf0();
  /* 12464c32 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464c35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464c38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464c3b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12464c3e jmp 0x12464cad */
  goto L_12464cad;
L_12464c40:;
  /* 12464c40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464c43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12464c45 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12464c47 mov ecx, dword ptr [0x12481c98] */
  ECX = (r32((uint32_t)(0x12481c98)));
  /* 12464c4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12464c4f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12464c53 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12464c59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12464c5b je 0x12464c88 */
  if (C.zf) goto L_12464c88;
  /* 12464c5d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464c61 jbe 0x12464c88 */
  if ((C.cf||C.zf)) goto L_12464c88;
  /* 12464c63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464c66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464c69 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12464c6b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12464c6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464c70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464c73 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12464c76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464c79 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464c7c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12464c7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464c82 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12464c85 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12464c88:;
  /* 12464c88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464c8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464c8e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12464c90 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12464c92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464c95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464c98 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12464c9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464c9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464ca1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12464ca4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464ca7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12464caa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12464cad:;
  /* 12464cad jmp 0x12464bc1 */
  goto L_12464bc1;
L_12464cb2:;
  /* 12464cb2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464cb6 je 0x12464cc4 */
  if (C.zf) goto L_12464cc4;
  /* 12464cb8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12464cba call 0x1245b2c0 */
  push32(0x12464cbfu); f_1245b2c0();
  /* 12464cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464cc2 jmp 0x12464ccf */
  goto L_12464ccf;
L_12464cc4:;
  /* 12464cc4 push 0x12483be4 */
  push32((uint32_t)(0x12483be4u));
  /* 12464cc9 call dword ptr [0x1248634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248634c))), 0x12464ccfu);
L_12464ccf:;
  /* 12464ccf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464cd3 jbe 0x12464ce3 */
  if ((C.cf||C.zf)) goto L_12464ce3;
  /* 12464cd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12464cd8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12464cdb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464cde sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12464ce1 jmp 0x12464ce5 */
  goto L_12464ce5;
L_12464ce3:;
  /* 12464ce3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12464ce5:;
  /* 12464ce5 mov esp, ebp */
  ESP = (EBP);
  /* 12464ce7 pop ebp */
  EBP = (pop32());
  /* 12464ce8 ret  */
  ESPCHK(0x12464b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10014cf0 @ 0x12464cf0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12464cf0(void) {
  FTRACE(0x12464cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12464cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12464cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12464cf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12464cf6 push esi */
  push32((uint32_t)(ESI));
  /* 12464cf7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12464cfb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12464cfe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464d01 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12464d04 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12464d07 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464d0b ja 0x12465258 */
  if ((!C.cf&&!C.zf)) goto L_12465258;
  /* 12464d11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12464d14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12464d16 mov dl, byte ptr [eax + 0x124652b9] */
  DL = (r8((uint32_t)(EAX + 0x124652b9)));
  /* 12464d1c jmp dword ptr [edx*4 + 0x1246525d] */
  switch (EDX) {
    case 0: goto L_12465236;
    case 1: goto L_12464d45;
    case 2: goto L_12464d8b;
    case 3: goto L_12464ed8;
    case 4: goto L_12464f00;
    case 5: goto L_12464f9f;
    case 6: goto L_1246500b;
    case 7: goto L_12465034;
    case 8: goto L_12465075;
    case 9: goto L_12465157;
    case 10: goto L_124651be;
    case 11: goto L_1246520b;
    case 12: goto L_12464d23;
    case 13: goto L_12464d68;
    case 14: goto L_12464dae;
    case 15: goto L_12464eae;
    case 16: goto L_12464f45;
    case 17: goto L_12464f72;
    case 18: goto L_12464fc7;
    case 19: goto L_1246504b;
    case 20: goto L_124650f9;
    case 21: goto L_12465188;
    case 22: goto L_12465258;
    default: x86_unimpl("switch@0x12464d1c out of table"); return;
  }
L_12464d23:;
  /* 12464d23 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464d26 push ecx */
  push32((uint32_t)(ECX));
  /* 12464d27 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464d2a push edx */
  push32((uint32_t)(EDX));
  /* 12464d2b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464d2e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12464d31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12464d34 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12464d37 push eax */
  push32((uint32_t)(EAX));
  /* 12464d38 call 0x12465310 */
  push32(0x12464d3du); f_12465310();
  /* 12464d3d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464d40 jmp 0x12465258 */
  goto L_12465258;
L_12464d45:;
  /* 12464d45 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464d48 push ecx */
  push32((uint32_t)(ECX));
  /* 12464d49 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464d4c push edx */
  push32((uint32_t)(EDX));
  /* 12464d4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464d50 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12464d53 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12464d56 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12464d5a push eax */
  push32((uint32_t)(EAX));
  /* 12464d5b call 0x12465310 */
  push32(0x12464d60u); f_12465310();
  /* 12464d60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464d63 jmp 0x12465258 */
  goto L_12465258;
L_12464d68:;
  /* 12464d68 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464d6b push ecx */
  push32((uint32_t)(ECX));
  /* 12464d6c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464d6f push edx */
  push32((uint32_t)(EDX));
  /* 12464d70 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464d73 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12464d76 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12464d79 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12464d7d push eax */
  push32((uint32_t)(EAX));
  /* 12464d7e call 0x12465310 */
  push32(0x12464d83u); f_12465310();
  /* 12464d83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464d86 jmp 0x12465258 */
  goto L_12465258;
L_12464d8b:;
  /* 12464d8b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464d8e push ecx */
  push32((uint32_t)(ECX));
  /* 12464d8f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464d92 push edx */
  push32((uint32_t)(EDX));
  /* 12464d93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464d96 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12464d99 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12464d9c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12464da0 push eax */
  push32((uint32_t)(EAX));
  /* 12464da1 call 0x12465310 */
  push32(0x12464da6u); f_12465310();
  /* 12464da6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464da9 jmp 0x12465258 */
  goto L_12465258;
L_12464dae:;
  /* 12464dae cmp dword ptr [0x12483bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464db5 je 0x12464e36 */
  if (C.zf) goto L_12464e36;
  /* 12464db7 mov dword ptr [0x12483bc0], 0 */
  w32((uint32_t)(0x12483bc0), (0x0u));
  /* 12464dc1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12464dc4 push ecx */
  push32((uint32_t)(ECX));
  /* 12464dc5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464dc8 push edx */
  push32((uint32_t)(EDX));
  /* 12464dc9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464dcc push eax */
  push32((uint32_t)(EAX));
  /* 12464dcd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464dd0 push ecx */
  push32((uint32_t)(ECX));
  /* 12464dd1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12464dd4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12464dda push eax */
  push32((uint32_t)(EAX));
  /* 12464ddb call 0x124654c0 */
  push32(0x12464de0u); f_124654c0();
  /* 12464de0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464de3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464de6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464de9 jne 0x12464df0 */
  if (!C.zf) goto L_12464df0;
  /* 12464deb jmp 0x12465258 */
  goto L_12465258;
L_12464df0:;
  /* 12464df0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464df3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12464df5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12464df8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464dfb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12464dfd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464e00 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464e03 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12464e05 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464e08 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12464e0a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12464e0d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464e10 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12464e12 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12464e15 push ecx */
  push32((uint32_t)(ECX));
  /* 12464e16 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464e19 push edx */
  push32((uint32_t)(EDX));
  /* 12464e1a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464e1d push eax */
  push32((uint32_t)(EAX));
  /* 12464e1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464e21 push ecx */
  push32((uint32_t)(ECX));
  /* 12464e22 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12464e25 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12464e2b push eax */
  push32((uint32_t)(EAX));
  /* 12464e2c call 0x124654c0 */
  push32(0x12464e31u); f_124654c0();
  /* 12464e31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464e34 jmp 0x12464ea9 */
  goto L_12464ea9;
L_12464e36:;
  /* 12464e36 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12464e39 push ecx */
  push32((uint32_t)(ECX));
  /* 12464e3a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464e3d push edx */
  push32((uint32_t)(EDX));
  /* 12464e3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464e41 push eax */
  push32((uint32_t)(EAX));
  /* 12464e42 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464e45 push ecx */
  push32((uint32_t)(ECX));
  /* 12464e46 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12464e49 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12464e4f push eax */
  push32((uint32_t)(EAX));
  /* 12464e50 call 0x124654c0 */
  push32(0x12464e55u); f_124654c0();
  /* 12464e55 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464e58 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464e5b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464e5e jne 0x12464e65 */
  if (!C.zf) goto L_12464e65;
  /* 12464e60 jmp 0x12465258 */
  goto L_12465258;
L_12464e65:;
  /* 12464e65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464e68 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12464e6a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12464e6d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464e70 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12464e72 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464e75 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464e78 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12464e7a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464e7d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12464e7f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12464e82 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464e85 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12464e87 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12464e8a push ecx */
  push32((uint32_t)(ECX));
  /* 12464e8b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464e8e push edx */
  push32((uint32_t)(EDX));
  /* 12464e8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464e92 push eax */
  push32((uint32_t)(EAX));
  /* 12464e93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464e96 push ecx */
  push32((uint32_t)(ECX));
  /* 12464e97 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12464e9a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12464ea0 push eax */
  push32((uint32_t)(EAX));
  /* 12464ea1 call 0x124654c0 */
  push32(0x12464ea6u); f_124654c0();
  /* 12464ea6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12464ea9:;
  /* 12464ea9 jmp 0x12465258 */
  goto L_12465258;
L_12464eae:;
  /* 12464eae mov ecx, dword ptr [0x12483bc0] */
  ECX = (r32((uint32_t)(0x12483bc0)));
  /* 12464eb4 mov dword ptr [0x12483bd0], ecx */
  w32((uint32_t)(0x12483bd0), (ECX));
  /* 12464eba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464ebd push edx */
  push32((uint32_t)(EDX));
  /* 12464ebe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464ec1 push eax */
  push32((uint32_t)(EAX));
  /* 12464ec2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12464ec4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464ec7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12464eca push edx */
  push32((uint32_t)(EDX));
  /* 12464ecb call 0x12465360 */
  push32(0x12464ed0u); f_12465360();
  /* 12464ed0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464ed3 jmp 0x12465258 */
  goto L_12465258;
L_12464ed8:;
  /* 12464ed8 mov eax, dword ptr [0x12483bc0] */
  EAX = (r32((uint32_t)(0x12483bc0)));
  /* 12464edd mov dword ptr [0x12483bd0], eax */
  w32((uint32_t)(0x12483bd0), (EAX));
  /* 12464ee2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464ee5 push ecx */
  push32((uint32_t)(ECX));
  /* 12464ee6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464ee9 push edx */
  push32((uint32_t)(EDX));
  /* 12464eea push 2 */
  push32((uint32_t)(0x2u));
  /* 12464eec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464eef mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12464ef2 push ecx */
  push32((uint32_t)(ECX));
  /* 12464ef3 call 0x12465360 */
  push32(0x12464ef8u); f_12465360();
  /* 12464ef8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464efb jmp 0x12465258 */
  goto L_12465258;
L_12464f00:;
  /* 12464f00 mov edx, dword ptr [0x12483bc0] */
  EDX = (r32((uint32_t)(0x12483bc0)));
  /* 12464f06 mov dword ptr [0x12483bd0], edx */
  w32((uint32_t)(0x12483bd0), (EDX));
  /* 12464f0c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464f0f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12464f12 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12464f13 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12464f18 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12464f1a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12464f1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464f21 jne 0x12464f2a */
  if (!C.zf) goto L_12464f2a;
  /* 12464f23 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12464f2a:;
  /* 12464f2a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464f2d push edx */
  push32((uint32_t)(EDX));
  /* 12464f2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464f31 push eax */
  push32((uint32_t)(EAX));
  /* 12464f32 push 2 */
  push32((uint32_t)(0x2u));
  /* 12464f34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12464f37 push ecx */
  push32((uint32_t)(ECX));
  /* 12464f38 call 0x12465360 */
  push32(0x12464f3du); f_12465360();
  /* 12464f3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464f40 jmp 0x12465258 */
  goto L_12465258;
L_12464f45:;
  /* 12464f45 mov edx, dword ptr [0x12483bc0] */
  EDX = (r32((uint32_t)(0x12483bc0)));
  /* 12464f4b mov dword ptr [0x12483bd0], edx */
  w32((uint32_t)(0x12483bd0), (EDX));
  /* 12464f51 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464f54 push eax */
  push32((uint32_t)(EAX));
  /* 12464f55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464f58 push ecx */
  push32((uint32_t)(ECX));
  /* 12464f59 push 3 */
  push32((uint32_t)(0x3u));
  /* 12464f5b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464f5e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12464f61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464f64 push eax */
  push32((uint32_t)(EAX));
  /* 12464f65 call 0x12465360 */
  push32(0x12464f6au); f_12465360();
  /* 12464f6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464f6d jmp 0x12465258 */
  goto L_12465258;
L_12464f72:;
  /* 12464f72 mov ecx, dword ptr [0x12483bc0] */
  ECX = (r32((uint32_t)(0x12483bc0)));
  /* 12464f78 mov dword ptr [0x12483bd0], ecx */
  w32((uint32_t)(0x12483bd0), (ECX));
  /* 12464f7e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464f81 push edx */
  push32((uint32_t)(EDX));
  /* 12464f82 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464f85 push eax */
  push32((uint32_t)(EAX));
  /* 12464f86 push 2 */
  push32((uint32_t)(0x2u));
  /* 12464f88 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464f8b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12464f8e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12464f91 push edx */
  push32((uint32_t)(EDX));
  /* 12464f92 call 0x12465360 */
  push32(0x12464f97u); f_12465360();
  /* 12464f97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464f9a jmp 0x12465258 */
  goto L_12465258;
L_12464f9f:;
  /* 12464f9f mov eax, dword ptr [0x12483bc0] */
  EAX = (r32((uint32_t)(0x12483bc0)));
  /* 12464fa4 mov dword ptr [0x12483bd0], eax */
  w32((uint32_t)(0x12483bd0), (EAX));
  /* 12464fa9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464fac push ecx */
  push32((uint32_t)(ECX));
  /* 12464fad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464fb0 push edx */
  push32((uint32_t)(EDX));
  /* 12464fb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12464fb3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464fb6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12464fb9 push ecx */
  push32((uint32_t)(ECX));
  /* 12464fba call 0x12465360 */
  push32(0x12464fbfu); f_12465360();
  /* 12464fbf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464fc2 jmp 0x12465258 */
  goto L_12465258;
L_12464fc7:;
  /* 12464fc7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12464fca cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12464fce jg 0x12464fec */
  if ((!C.zf&&C.sf==C.of)) goto L_12464fec;
  /* 12464fd0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464fd3 push eax */
  push32((uint32_t)(EAX));
  /* 12464fd4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464fd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12464fd8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12464fdb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12464fe1 push eax */
  push32((uint32_t)(EAX));
  /* 12464fe2 call 0x12465310 */
  push32(0x12464fe7u); f_12465310();
  /* 12464fe7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12464fea jmp 0x12465006 */
  goto L_12465006;
L_12464fec:;
  /* 12464fec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12464fef push ecx */
  push32((uint32_t)(ECX));
  /* 12464ff0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12464ff3 push edx */
  push32((uint32_t)(EDX));
  /* 12464ff4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12464ff7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12464ffd push ecx */
  push32((uint32_t)(ECX));
  /* 12464ffe call 0x12465310 */
  push32(0x12465003u); f_12465310();
  /* 12465003 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12465006:;
  /* 12465006 jmp 0x12465258 */
  goto L_12465258;
L_1246500b:;
  /* 1246500b mov edx, dword ptr [0x12483bc0] */
  EDX = (r32((uint32_t)(0x12483bc0)));
  /* 12465011 mov dword ptr [0x12483bd0], edx */
  w32((uint32_t)(0x12483bd0), (EDX));
  /* 12465017 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1246501a push eax */
  push32((uint32_t)(EAX));
  /* 1246501b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246501e push ecx */
  push32((uint32_t)(ECX));
  /* 1246501f push 2 */
  push32((uint32_t)(0x2u));
  /* 12465021 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465024 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12465026 push eax */
  push32((uint32_t)(EAX));
  /* 12465027 call 0x12465360 */
  push32(0x1246502cu); f_12465360();
  /* 1246502c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246502f jmp 0x12465258 */
  goto L_12465258;
L_12465034:;
  /* 12465034 mov ecx, dword ptr [0x12483bc0] */
  ECX = (r32((uint32_t)(0x12483bc0)));
  /* 1246503a mov dword ptr [0x12483bd0], ecx */
  w32((uint32_t)(0x12483bd0), (ECX));
  /* 12465040 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465043 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12465046 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12465049 jmp 0x1246509d */
  goto L_1246509d;
L_1246504b:;
  /* 1246504b mov ecx, dword ptr [0x12483bc0] */
  ECX = (r32((uint32_t)(0x12483bc0)));
  /* 12465051 mov dword ptr [0x12483bd0], ecx */
  w32((uint32_t)(0x12483bd0), (ECX));
  /* 12465057 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1246505a push edx */
  push32((uint32_t)(EDX));
  /* 1246505b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246505e push eax */
  push32((uint32_t)(EAX));
  /* 1246505f push 1 */
  push32((uint32_t)(0x1u));
  /* 12465061 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465064 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12465067 push edx */
  push32((uint32_t)(EDX));
  /* 12465068 call 0x12465360 */
  push32(0x1246506du); f_12465360();
  /* 1246506d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12465070 jmp 0x12465258 */
  goto L_12465258;
L_12465075:;
  /* 12465075 mov eax, dword ptr [0x12483bc0] */
  EAX = (r32((uint32_t)(0x12483bc0)));
  /* 1246507a mov dword ptr [0x12483bd0], eax */
  w32((uint32_t)(0x12483bd0), (EAX));
  /* 1246507f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465082 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465086 jne 0x12465091 */
  if (!C.zf) goto L_12465091;
  /* 12465088 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1246508f jmp 0x1246509d */
  goto L_1246509d;
L_12465091:;
  /* 12465091 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465094 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12465097 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1246509a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1246509d:;
  /* 1246509d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124650a0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 124650a3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124650a6 jge 0x124650b1 */
  if ((C.sf==C.of)) goto L_124650b1;
  /* 124650a8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124650af jmp 0x124650de */
  goto L_124650de;
L_124650b1:;
  /* 124650b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124650b4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 124650b7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124650b8 mov ecx, 7 */
  ECX = (0x7u);
  /* 124650bd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124650bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124650c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124650c5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124650c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124650c9 mov ecx, 7 */
  ECX = (0x7u);
  /* 124650ce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124650d0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124650d3 jl 0x124650de */
  if ((C.sf!=C.of)) goto L_124650de;
  /* 124650d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124650d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124650db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124650de:;
  /* 124650de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124650e1 push eax */
  push32((uint32_t)(EAX));
  /* 124650e2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124650e5 push ecx */
  push32((uint32_t)(ECX));
  /* 124650e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 124650e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124650eb push edx */
  push32((uint32_t)(EDX));
  /* 124650ec call 0x12465360 */
  push32(0x124650f1u); f_12465360();
  /* 124650f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124650f4 jmp 0x12465258 */
  goto L_12465258;
L_124650f9:;
  /* 124650f9 cmp dword ptr [0x12483bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465100 je 0x12465130 */
  if (C.zf) goto L_12465130;
  /* 12465102 mov dword ptr [0x12483bc0], 0 */
  w32((uint32_t)(0x12483bc0), (0x0u));
  /* 1246510c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1246510f push eax */
  push32((uint32_t)(EAX));
  /* 12465110 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465113 push ecx */
  push32((uint32_t)(ECX));
  /* 12465114 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465117 push edx */
  push32((uint32_t)(EDX));
  /* 12465118 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1246511b push eax */
  push32((uint32_t)(EAX));
  /* 1246511c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1246511f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12465125 push edx */
  push32((uint32_t)(EDX));
  /* 12465126 call 0x124654c0 */
  push32(0x1246512bu); f_124654c0();
  /* 1246512b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246512e jmp 0x12465152 */
  goto L_12465152;
L_12465130:;
  /* 12465130 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12465133 push eax */
  push32((uint32_t)(EAX));
  /* 12465134 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465137 push ecx */
  push32((uint32_t)(ECX));
  /* 12465138 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246513b push edx */
  push32((uint32_t)(EDX));
  /* 1246513c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1246513f push eax */
  push32((uint32_t)(EAX));
  /* 12465140 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12465143 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12465149 push edx */
  push32((uint32_t)(EDX));
  /* 1246514a call 0x124654c0 */
  push32(0x1246514fu); f_124654c0();
  /* 1246514f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12465152:;
  /* 12465152 jmp 0x12465258 */
  goto L_12465258;
L_12465157:;
  /* 12465157 mov dword ptr [0x12483bc0], 0 */
  w32((uint32_t)(0x12483bc0), (0x0u));
  /* 12465161 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12465164 push eax */
  push32((uint32_t)(EAX));
  /* 12465165 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465168 push ecx */
  push32((uint32_t)(ECX));
  /* 12465169 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246516c push edx */
  push32((uint32_t)(EDX));
  /* 1246516d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465170 push eax */
  push32((uint32_t)(EAX));
  /* 12465171 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12465174 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1246517a push edx */
  push32((uint32_t)(EDX));
  /* 1246517b call 0x124654c0 */
  push32(0x12465180u); f_124654c0();
  /* 12465180 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12465183 jmp 0x12465258 */
  goto L_12465258;
L_12465188:;
  /* 12465188 mov eax, dword ptr [0x12483bc0] */
  EAX = (r32((uint32_t)(0x12483bc0)));
  /* 1246518d mov dword ptr [0x12483bd0], eax */
  w32((uint32_t)(0x12483bd0), (EAX));
  /* 12465192 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465195 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12465198 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12465199 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1246519e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124651a0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124651a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124651a6 push edx */
  push32((uint32_t)(EDX));
  /* 124651a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124651aa push eax */
  push32((uint32_t)(EAX));
  /* 124651ab push 2 */
  push32((uint32_t)(0x2u));
  /* 124651ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124651b0 push ecx */
  push32((uint32_t)(ECX));
  /* 124651b1 call 0x12465360 */
  push32(0x124651b6u); f_12465360();
  /* 124651b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124651b9 jmp 0x12465258 */
  goto L_12465258;
L_124651be:;
  /* 124651be mov edx, dword ptr [0x12483bc0] */
  EDX = (r32((uint32_t)(0x12483bc0)));
  /* 124651c4 mov dword ptr [0x12483bd0], edx */
  w32((uint32_t)(0x12483bd0), (EDX));
  /* 124651ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124651cd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 124651d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124651d1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 124651d6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124651d8 mov ecx, eax */
  ECX = (EAX);
  /* 124651da add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124651dd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124651e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124651e3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124651e6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124651e7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 124651ec idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124651ee add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124651f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124651f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124651f6 push eax */
  push32((uint32_t)(EAX));
  /* 124651f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124651fa push ecx */
  push32((uint32_t)(ECX));
  /* 124651fb push 4 */
  push32((uint32_t)(0x4u));
  /* 124651fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12465200 push edx */
  push32((uint32_t)(EDX));
  /* 12465201 call 0x12465360 */
  push32(0x12465206u); f_12465360();
  /* 12465206 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12465209 jmp 0x12465258 */
  goto L_12465258;
L_1246520b:;
  /* 1246520b call 0x12466320 */
  push32(0x12465210u); f_12466320();
  /* 12465210 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465213 push eax */
  push32((uint32_t)(EAX));
  /* 12465214 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465217 push ecx */
  push32((uint32_t)(ECX));
  /* 12465218 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1246521b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1246521d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465221 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12465224 mov ecx, dword ptr [eax*4 + 0x12482e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12482e1c)));
  /* 1246522b push ecx */
  push32((uint32_t)(ECX));
  /* 1246522c call 0x12465310 */
  push32(0x12465231u); f_12465310();
  /* 12465231 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12465234 jmp 0x12465258 */
  goto L_12465258;
L_12465236:;
  /* 12465236 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465239 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1246523b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1246523e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465241 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12465243 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12465246 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465249 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1246524b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1246524e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12465250 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12465253 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465256 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12465258:;
  /* 12465258 pop esi */
  ESI = (pop32());
  /* 12465259 mov esp, ebp */
  ESP = (EBP);
  /* 1246525b pop ebp */
  EBP = (pop32());
  /* 1246525c ret  */
  ESPCHK(0x12464cf0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12465310 (72 bytes, 30 insns) */
void f_12465310(void) {
  FTRACE(0x12465310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12465310 push ebp */
  push32((uint32_t)(EBP));
  /* 12465311 mov ebp, esp */
  EBP = (ESP);
L_12465313:;
  /* 12465313 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465316 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465319 je 0x12465356 */
  if (C.zf) goto L_12465356;
  /* 1246531b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246531e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12465321 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12465323 je 0x12465356 */
  if (C.zf) goto L_12465356;
  /* 12465325 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465328 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1246532a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246532d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1246532f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12465331 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465334 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12465336 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12465339 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1246533c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1246533e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12465341 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12465344 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12465347 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246534a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1246534c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1246534f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465352 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12465354 jmp 0x12465313 */
  goto L_12465313;
L_12465356:;
  /* 12465356 pop ebp */
  EBP = (pop32());
  /* 12465357 ret  */
  ESPCHK(0x12465310u, _esp0);
  ESP += 4; return;
}

/* FUN_10015360 @ 0x12465360 (173 bytes, 64 insns) */
void f_12465360(void) {
  FTRACE(0x12465360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12465360 push ebp */
  push32((uint32_t)(EBP));
  /* 12465361 mov ebp, esp */
  EBP = (ESP);
  /* 12465363 push ecx */
  push32((uint32_t)(ECX));
  /* 12465364 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1246536b cmp dword ptr [0x12483bd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483bd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465372 je 0x1246538a */
  if (C.zf) goto L_1246538a;
  /* 12465374 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465377 push eax */
  push32((uint32_t)(EAX));
  /* 12465378 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246537b push ecx */
  push32((uint32_t)(ECX));
  /* 1246537c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246537f push edx */
  push32((uint32_t)(EDX));
  /* 12465380 call 0x12465410 */
  push32(0x12465385u); f_12465410();
  /* 12465385 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12465388 jmp 0x12465409 */
  goto L_12465409;
L_1246538a:;
  /* 1246538a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1246538d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465390 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465392 jae 0x12465400 */
  if (!C.cf) goto L_12465400;
  /* 12465394 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465397 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1246539a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1246539d jmp 0x124653a8 */
  goto L_124653a8;
L_1246539f:;
  /* 1246539f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124653a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124653a5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_124653a8:;
  /* 124653a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124653ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124653ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124653b0 je 0x124653e4 */
  if (C.zf) goto L_124653e4;
  /* 124653b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124653b5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124653b6 mov ecx, 0xa */
  ECX = (0xau);
  /* 124653bb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124653bd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124653c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124653c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124653c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124653c8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 124653cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124653ce cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124653cf mov ecx, 0xa */
  ECX = (0xau);
  /* 124653d4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124653d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124653d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124653dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124653df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124653e2 jmp 0x1246539f */
  goto L_1246539f;
L_124653e4:;
  /* 124653e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124653e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124653e9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124653ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124653ef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124653f1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124653f4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124653f6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124653f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124653fc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124653fe jmp 0x12465409 */
  goto L_12465409;
L_12465400:;
  /* 12465400 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465403 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12465409:;
  /* 12465409 mov esp, ebp */
  ESP = (EBP);
  /* 1246540b pop ebp */
  EBP = (pop32());
  /* 1246540c ret  */
  ESPCHK(0x12465360u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12465410 (172 bytes, 65 insns) */
void f_12465410(void) {
  FTRACE(0x12465410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12465410 push ebp */
  push32((uint32_t)(EBP));
  /* 12465411 mov ebp, esp */
  EBP = (ESP);
  /* 12465413 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12465416 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465419 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1246541b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1246541e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465421 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465424 jbe 0x1246546b */
  if ((C.cf||C.zf)) goto L_1246546b;
L_12465426:;
  /* 12465426 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12465429 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1246542a mov ecx, 0xa */
  ECX = (0xau);
  /* 1246542f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12465431 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12465434 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12465437 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12465439 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246543c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246543f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12465442 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465445 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12465447 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1246544a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246544d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1246544f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12465452 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12465453 mov ecx, 0xa */
  ECX = (0xau);
  /* 12465458 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1246545a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1246545d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465461 jle 0x1246546b */
  if ((C.zf||C.sf!=C.of)) goto L_1246546b;
  /* 12465463 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465466 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465469 ja 0x12465426 */
  if ((!C.cf&&!C.zf)) goto L_12465426;
L_1246546b:;
  /* 1246546b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1246546e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12465470 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12465473 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465476 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12465479 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1246547b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246547e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12465481 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12465484:;
  /* 12465484 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12465487 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12465489 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1246548c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246548f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12465492 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12465494 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12465496 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12465499 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1246549c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1246549f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124654a2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 124654a5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 124654a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124654aa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124654ad mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124654b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124654b3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124654b6 jb 0x12465484 */
  if (C.cf) goto L_12465484;
  /* 124654b8 mov esp, ebp */
  ESP = (EBP);
  /* 124654ba pop ebp */
  EBP = (pop32());
  /* 124654bb ret  */
  ESPCHK(0x12465410u, _esp0);
  ESP += 4; return;
}

/* FUN_100154c0 @ 0x124654c0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_124654c0(void) {
  FTRACE(0x124654c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124654c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124654c1 mov ebp, esp */
  EBP = (ESP);
  /* 124654c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_124654c6:;
  /* 124654c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124654c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124654cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124654ce je 0x1246593c */
  if (C.zf) goto L_1246593c;
  /* 124654d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124654d7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124654da je 0x1246593c */
  if (C.zf) goto L_1246593c;
  /* 124654e0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 124654e4 mov dword ptr [0x12483bd0], 0 */
  w32((uint32_t)(0x12483bd0), (0x0u));
  /* 124654ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124654f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124654f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124654fb jmp 0x12465506 */
  goto L_12465506;
L_124654fd:;
  /* 124654fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12465500 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12465503 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12465506:;
  /* 12465506 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12465509 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1246550c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246550f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12465512 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12465515 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12465518 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1246551b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246551d jne 0x12465521 */
  if (!C.zf) goto L_12465521;
  /* 1246551f jmp 0x124654fd */
  goto L_124654fd;
L_12465521:;
  /* 12465521 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12465524 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12465527 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1246552a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246552d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12465530 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12465533 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12465536 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12465539 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1246553c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465540 ja 0x12465890 */
  if ((!C.cf&&!C.zf)) goto L_12465890;
  /* 12465546 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12465549 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1246554b mov al, byte ptr [ecx + 0x1246596c] */
  AL = (r8((uint32_t)(ECX + 0x1246596c)));
  /* 12465551 jmp dword ptr [eax*4 + 0x12465940] */
  switch (EAX) {
    case 0: goto L_124657af;
    case 1: goto L_12465693;
    case 2: goto L_1246561e;
    case 3: goto L_12465558;
    case 4: goto L_12465596;
    case 5: goto L_124655f7;
    case 6: goto L_12465645;
    case 7: goto L_1246566c;
    case 8: goto L_124656da;
    case 9: goto L_124655d4;
    case 10: goto L_12465890;
    default: x86_unimpl("switch@0x12465551 out of table"); return;
  }
L_12465558:;
  /* 12465558 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246555b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1246555e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12465561 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12465564 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12465567 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246556b ja 0x12465591 */
  if ((!C.cf&&!C.zf)) goto L_12465591;
  /* 1246556d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12465570 jmp dword ptr [ecx*4 + 0x124659bf] */
  switch (ECX) {
    case 0: goto L_12465577;
    case 1: goto L_12465581;
    case 2: goto L_12465587;
    case 3: goto L_1246558d;
    case 4: goto L_124655b5;
    case 5: goto L_124655bf;
    case 6: goto L_124655c5;
    case 7: goto L_124655cb;
    default: x86_unimpl("switch@0x12465570 out of table"); return;
  }
L_12465577:;
  /* 12465577 mov dword ptr [0x12483bd0], 1 */
  w32((uint32_t)(0x12483bd0), (0x1u));
L_12465581:;
  /* 12465581 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12465585 jmp 0x12465591 */
  goto L_12465591;
L_12465587:;
  /* 12465587 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1246558b jmp 0x12465591 */
  goto L_12465591;
L_1246558d:;
  /* 1246558d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12465591:;
  /* 12465591 jmp 0x12465890 */
  goto L_12465890;
L_12465596:;
  /* 12465596 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12465599 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1246559c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1246559f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124655a2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124655a5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124655a9 ja 0x124655cf */
  if ((!C.cf&&!C.zf)) goto L_124655cf;
  /* 124655ab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124655ae jmp dword ptr [ecx*4 + 0x124659cf] */
  switch (ECX) {
    case 0: goto L_124655b5;
    case 1: goto L_124655bf;
    case 2: goto L_124655c5;
    case 3: goto L_124655cb;
    default: x86_unimpl("switch@0x124655ae out of table"); return;
  }
L_124655b5:;
  /* 124655b5 mov dword ptr [0x12483bd0], 1 */
  w32((uint32_t)(0x12483bd0), (0x1u));
L_124655bf:;
  /* 124655bf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 124655c3 jmp 0x124655cf */
  goto L_124655cf;
L_124655c5:;
  /* 124655c5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 124655c9 jmp 0x124655cf */
  goto L_124655cf;
L_124655cb:;
  /* 124655cb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_124655cf:;
  /* 124655cf jmp 0x12465890 */
  goto L_12465890;
L_124655d4:;
  /* 124655d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124655d7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 124655da cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124655de je 0x124655e8 */
  if (C.zf) goto L_124655e8;
  /* 124655e0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124655e4 je 0x124655ee */
  if (C.zf) goto L_124655ee;
  /* 124655e6 jmp 0x124655f2 */
  goto L_124655f2;
L_124655e8:;
  /* 124655e8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 124655ec jmp 0x124655f2 */
  goto L_124655f2;
L_124655ee:;
  /* 124655ee mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_124655f2:;
  /* 124655f2 jmp 0x12465890 */
  goto L_12465890;
L_124655f7:;
  /* 124655f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124655fa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 124655fd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465601 je 0x1246560b */
  if (C.zf) goto L_1246560b;
  /* 12465603 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465607 je 0x12465615 */
  if (C.zf) goto L_12465615;
  /* 12465609 jmp 0x12465619 */
  goto L_12465619;
L_1246560b:;
  /* 1246560b mov dword ptr [0x12483bd0], 1 */
  w32((uint32_t)(0x12483bd0), (0x1u));
L_12465615:;
  /* 12465615 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12465619:;
  /* 12465619 jmp 0x12465890 */
  goto L_12465890;
L_1246561e:;
  /* 1246561e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12465621 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12465624 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465628 je 0x12465632 */
  if (C.zf) goto L_12465632;
  /* 1246562a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246562e je 0x1246563c */
  if (C.zf) goto L_1246563c;
  /* 12465630 jmp 0x12465640 */
  goto L_12465640;
L_12465632:;
  /* 12465632 mov dword ptr [0x12483bd0], 1 */
  w32((uint32_t)(0x12483bd0), (0x1u));
L_1246563c:;
  /* 1246563c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12465640:;
  /* 12465640 jmp 0x12465890 */
  goto L_12465890;
L_12465645:;
  /* 12465645 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12465648 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1246564b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246564f je 0x12465659 */
  if (C.zf) goto L_12465659;
  /* 12465651 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465655 je 0x12465663 */
  if (C.zf) goto L_12465663;
  /* 12465657 jmp 0x12465667 */
  goto L_12465667;
L_12465659:;
  /* 12465659 mov dword ptr [0x12483bd0], 1 */
  w32((uint32_t)(0x12483bd0), (0x1u));
L_12465663:;
  /* 12465663 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12465667:;
  /* 12465667 jmp 0x12465890 */
  goto L_12465890;
L_1246566c:;
  /* 1246566c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246566f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12465672 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465676 je 0x12465680 */
  if (C.zf) goto L_12465680;
  /* 12465678 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246567c je 0x1246568a */
  if (C.zf) goto L_1246568a;
  /* 1246567e jmp 0x1246568e */
  goto L_1246568e;
L_12465680:;
  /* 12465680 mov dword ptr [0x12483bd0], 1 */
  w32((uint32_t)(0x12483bd0), (0x1u));
L_1246568a:;
  /* 1246568a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1246568e:;
  /* 1246568e jmp 0x12465890 */
  goto L_12465890;
L_12465693:;
  /* 12465693 push 0x1247ff84 */
  push32((uint32_t)(0x1247ff84u));
  /* 12465698 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246569b push ecx */
  push32((uint32_t)(ECX));
  /* 1246569c call 0x12465ef0 */
  push32(0x124656a1u); f_12465ef0();
  /* 124656a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124656a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124656a6 jne 0x124656b3 */
  if (!C.zf) goto L_124656b3;
  /* 124656a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124656ab add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124656ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124656b1 jmp 0x124656d1 */
  goto L_124656d1;
L_124656b3:;
  /* 124656b3 push 0x1247ff80 */
  push32((uint32_t)(0x1247ff80u));
  /* 124656b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124656bb push eax */
  push32((uint32_t)(EAX));
  /* 124656bc call 0x12465ef0 */
  push32(0x124656c1u); f_12465ef0();
  /* 124656c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124656c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124656c6 jne 0x124656d1 */
  if (!C.zf) goto L_124656d1;
  /* 124656c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124656cb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124656ce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124656d1:;
  /* 124656d1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 124656d5 jmp 0x12465890 */
  goto L_12465890;
L_124656da:;
  /* 124656da mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124656dd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124656e1 jg 0x124656f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_124656f1;
  /* 124656e3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124656e6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 124656ec mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 124656ef jmp 0x124656fd */
  goto L_124656fd;
L_124656f1:;
  /* 124656f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124656f4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 124656fa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_124656fd:;
  /* 124656fd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465701 jle 0x124657a4 */
  if ((C.zf||C.sf!=C.of)) goto L_124657a4;
  /* 12465707 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1246570a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246570d jbe 0x124657a4 */
  if ((C.cf||C.zf)) goto L_124657a4;
  /* 12465713 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12465716 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12465718 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1246571a mov ecx, dword ptr [0x12481c98] */
  ECX = (r32((uint32_t)(0x12481c98)));
  /* 12465720 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12465722 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12465726 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1246572c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1246572e je 0x12465767 */
  if (C.zf) goto L_12465767;
  /* 12465730 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465733 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465736 jbe 0x12465767 */
  if ((C.cf||C.zf)) goto L_12465767;
  /* 12465738 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246573b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1246573d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12465740 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12465742 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12465744 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465747 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12465749 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246574c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246574f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12465751 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12465754 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12465757 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1246575a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1246575d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1246575f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12465762 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465765 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12465767:;
  /* 12465767 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246576a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1246576c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1246576f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12465771 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12465773 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465776 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12465778 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246577b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246577e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12465780 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12465783 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12465786 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12465789 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1246578c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1246578e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12465791 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465794 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12465796 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12465799 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1246579c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1246579f jmp 0x124656fd */
  goto L_124656fd;
L_124657a4:;
  /* 124657a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124657a7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124657aa jmp 0x124654c6 */
  goto L_124654c6;
L_124657af:;
  /* 124657af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124657b2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124657b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124657b7 je 0x12465882 */
  if (C.zf) goto L_12465882;
  /* 124657bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124657c0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124657c3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_124657c6:;
  /* 124657c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124657c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124657cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124657ce je 0x12465880 */
  if (C.zf) goto L_12465880;
  /* 124657d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124657d7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124657da je 0x12465880 */
  if (C.zf) goto L_12465880;
  /* 124657e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124657e3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124657e6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124657e9 jne 0x124657f9 */
  if (!C.zf) goto L_124657f9;
  /* 124657eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124657ee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124657f1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 124657f4 jmp 0x12465880 */
  goto L_12465880;
L_124657f9:;
  /* 124657f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124657fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124657fe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12465800 mov edx, dword ptr [0x12481c98] */
  EDX = (r32((uint32_t)(0x12481c98)));
  /* 12465806 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12465808 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1246580c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12465811 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12465813 je 0x1246584c */
  if (C.zf) goto L_1246584c;
  /* 12465815 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465818 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246581b jbe 0x1246584c */
  if ((C.cf||C.zf)) goto L_1246584c;
  /* 1246581d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465820 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12465822 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12465825 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12465827 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12465829 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246582c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1246582e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12465831 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465834 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12465836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12465839 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246583c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1246583f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465842 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12465844 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12465847 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1246584a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1246584c:;
  /* 1246584c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246584f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12465851 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12465854 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12465856 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12465858 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246585b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1246585d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12465860 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465863 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12465865 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12465868 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246586b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1246586e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465871 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12465873 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12465876 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465879 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1246587b jmp 0x124657c6 */
  goto L_124657c6;
L_12465880:;
  /* 12465880 jmp 0x1246588b */
  goto L_1246588b;
L_12465882:;
  /* 12465882 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12465885 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12465888 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1246588b:;
  /* 1246588b jmp 0x124654c6 */
  goto L_124654c6;
L_12465890:;
  /* 12465890 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12465894 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12465896 je 0x124658bc */
  if (C.zf) goto L_124658bc;
  /* 12465898 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1246589b push edx */
  push32((uint32_t)(EDX));
  /* 1246589c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1246589f push eax */
  push32((uint32_t)(EAX));
  /* 124658a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124658a3 push ecx */
  push32((uint32_t)(ECX));
  /* 124658a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124658a7 push edx */
  push32((uint32_t)(EDX));
  /* 124658a8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 124658ab push eax */
  push32((uint32_t)(EAX));
  /* 124658ac call 0x12464cf0 */
  push32(0x124658b1u); f_12464cf0();
  /* 124658b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124658b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124658b7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 124658ba jmp 0x12465937 */
  goto L_12465937;
L_124658bc:;
  /* 124658bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124658bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124658c1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124658c3 mov ecx, dword ptr [0x12481c98] */
  ECX = (r32((uint32_t)(0x12481c98)));
  /* 124658c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124658cb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124658cf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 124658d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124658d7 je 0x12465908 */
  if (C.zf) goto L_12465908;
  /* 124658d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124658dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124658de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124658e1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124658e3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 124658e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124658e8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124658ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124658ed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124658f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124658f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124658f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124658f8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 124658fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124658fe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12465900 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12465903 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465906 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12465908:;
  /* 12465908 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246590b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1246590d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12465910 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12465912 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12465914 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465917 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12465919 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246591c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1246591f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12465921 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12465924 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12465927 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1246592a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1246592d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1246592f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12465932 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465935 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12465937:;
  /* 12465937 jmp 0x124654c6 */
  goto L_124654c6;
L_1246593c:;
  /* 1246593c mov esp, ebp */
  ESP = (EBP);
  /* 1246593e pop ebp */
  EBP = (pop32());
  /* 1246593f ret  */
  ESPCHK(0x124654c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100159e0 @ 0x124659e0 (650 bytes, 178 insns) */
void f_124659e0(void) {
  FTRACE(0x124659e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124659e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124659e1 mov ebp, esp */
  EBP = (ESP);
  /* 124659e3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124659e9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124659ed jne 0x12465b49 */
  if (!C.zf) goto L_12465b49;
  /* 124659f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124659f6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 124659fc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12465a02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12465a05 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12465a0c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12465a16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12465a18 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12465a1e push edx */
  push32((uint32_t)(EDX));
  /* 12465a1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12465a22 push eax */
  push32((uint32_t)(EAX));
  /* 12465a23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465a26 push ecx */
  push32((uint32_t)(ECX));
  /* 12465a27 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465a2a push edx */
  push32((uint32_t)(EDX));
  /* 12465a2b call 0x12466e00 */
  push32(0x12465a30u); f_12466e00();
  /* 12465a30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12465a33 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12465a36 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465a3a jne 0x12465acf */
  if (!C.zf) goto L_12465acf;
  /* 12465a40 call dword ptr [0x12486388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486388))), 0x12465a46u);
  /* 12465a46 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465a49 je 0x12465a50 */
  if (C.zf) goto L_12465a50;
  /* 12465a4b jmp 0x12465b2d */
  goto L_12465b2d;
L_12465a50:;
  /* 12465a50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12465a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12465a54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12465a56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465a59 push eax */
  push32((uint32_t)(EAX));
  /* 12465a5a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465a5d push ecx */
  push32((uint32_t)(ECX));
  /* 12465a5e call 0x12466e00 */
  push32(0x12465a63u); f_12466e00();
  /* 12465a63 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12465a66 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12465a6c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465a73 jne 0x12465a7a */
  if (!C.zf) goto L_12465a7a;
  /* 12465a75 jmp 0x12465b2d */
  goto L_12465b2d;
L_12465a7a:;
  /* 12465a7a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12465a7c push 0x1247ff8c */
  push32((uint32_t)(0x1247ff8cu));
  /* 12465a81 push 2 */
  push32((uint32_t)(0x2u));
  /* 12465a83 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12465a89 push edx */
  push32((uint32_t)(EDX));
  /* 12465a8a call 0x12457820 */
  push32(0x12465a8fu); f_12457820();
  /* 12465a8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12465a92 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12465a95 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465a99 jne 0x12465aa0 */
  if (!C.zf) goto L_12465aa0;
  /* 12465a9b jmp 0x12465b2d */
  goto L_12465b2d;
L_12465aa0:;
  /* 12465aa0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12465aa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12465aa9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12465aaf push eax */
  push32((uint32_t)(EAX));
  /* 12465ab0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12465ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 12465ab4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465ab7 push edx */
  push32((uint32_t)(EDX));
  /* 12465ab8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465abb push eax */
  push32((uint32_t)(EAX));
  /* 12465abc call 0x12466e00 */
  push32(0x12465ac1u); f_12466e00();
  /* 12465ac1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12465ac4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12465ac7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465acb jne 0x12465acf */
  if (!C.zf) goto L_12465acf;
  /* 12465acd jmp 0x12465b2d */
  goto L_12465b2d;
L_12465acf:;
  /* 12465acf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12465ad1 push 0x1247ff8c */
  push32((uint32_t)(0x1247ff8cu));
  /* 12465ad6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12465ad8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12465adb push ecx */
  push32((uint32_t)(ECX));
  /* 12465adc call 0x12457820 */
  push32(0x12465ae1u); f_12457820();
  /* 12465ae1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12465ae4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12465aea mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12465aec mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12465af2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465af5 jne 0x12465af9 */
  if (!C.zf) goto L_12465af9;
  /* 12465af7 jmp 0x12465b2d */
  goto L_12465b2d;
L_12465af9:;
  /* 12465af9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12465afc push ecx */
  push32((uint32_t)(ECX));
  /* 12465afd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12465b00 push edx */
  push32((uint32_t)(EDX));
  /* 12465b01 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12465b07 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12465b09 push ecx */
  push32((uint32_t)(ECX));
  /* 12465b0a call 0x1245b040 */
  push32(0x12465b0fu); f_1245b040();
  /* 12465b0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12465b12 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465b16 je 0x12465b26 */
  if (C.zf) goto L_12465b26;
  /* 12465b18 push 2 */
  push32((uint32_t)(0x2u));
  /* 12465b1a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12465b1d push edx */
  push32((uint32_t)(EDX));
  /* 12465b1e call 0x124582b0 */
  push32(0x12465b23u); f_124582b0();
  /* 12465b23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12465b26:;
  /* 12465b26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12465b28 jmp 0x12465c66 */
  goto L_12465c66;
L_12465b2d:;
  /* 12465b2d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465b31 je 0x12465b41 */
  if (C.zf) goto L_12465b41;
  /* 12465b33 push 2 */
  push32((uint32_t)(0x2u));
  /* 12465b35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12465b38 push eax */
  push32((uint32_t)(EAX));
  /* 12465b39 call 0x124582b0 */
  push32(0x12465b3eu); f_124582b0();
  /* 12465b3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12465b41:;
  /* 12465b41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12465b44 jmp 0x12465c66 */
  goto L_12465c66;
L_12465b49:;
  /* 12465b49 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465b4d jne 0x12465c63 */
  if (!C.zf) goto L_12465c63;
  /* 12465b53 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12465b5d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465b60 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12465b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12465b68 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12465b6e push edx */
  push32((uint32_t)(EDX));
  /* 12465b6f push 0x12483ae8 */
  push32((uint32_t)(0x12483ae8u));
  /* 12465b74 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465b77 push eax */
  push32((uint32_t)(EAX));
  /* 12465b78 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465b7b push ecx */
  push32((uint32_t)(ECX));
  /* 12465b7c call 0x12466c60 */
  push32(0x12465b81u); f_12466c60();
  /* 12465b81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12465b84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12465b86 jne 0x12465b90 */
  if (!C.zf) goto L_12465b90;
  /* 12465b88 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12465b8b jmp 0x12465c66 */
  goto L_12465c66;
L_12465b90:;
  /* 12465b90 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12465b96 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12465b99 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12465ba3 jmp 0x12465bb4 */
  goto L_12465bb4;
L_12465ba5:;
  /* 12465ba5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12465bab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12465bae mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12465bb4:;
  /* 12465bb4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465bbb jge 0x12465c5f */
  if ((C.sf==C.of)) goto L_12465c5f;
  /* 12465bc1 cmp dword ptr [0x12481ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12481ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465bc8 jle 0x12465bfb */
  if ((C.zf||C.sf!=C.of)) goto L_12465bfb;
  /* 12465bca push 4 */
  push32((uint32_t)(0x4u));
  /* 12465bcc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12465bd2 mov dl, byte ptr [ecx*2 + 0x12483ae8] */
  DL = (r8((uint32_t)(ECX*2 + 0x12483ae8)));
  /* 12465bd9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12465bdf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12465be5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12465bea push eax */
  push32((uint32_t)(EAX));
  /* 12465beb call 0x1245d830 */
  push32(0x12465bf0u); f_1245d830();
  /* 12465bf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12465bf3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12465bf9 jmp 0x12465c2e */
  goto L_12465c2e;
L_12465bfb:;
  /* 12465bfb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12465c01 mov dl, byte ptr [ecx*2 + 0x12483ae8] */
  DL = (r8((uint32_t)(ECX*2 + 0x12483ae8)));
  /* 12465c08 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12465c0e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12465c14 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12465c19 mov ecx, dword ptr [0x12481c98] */
  ECX = (r32((uint32_t)(0x12481c98)));
  /* 12465c1f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12465c21 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12465c25 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12465c28 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12465c2e:;
  /* 12465c2e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465c35 je 0x12465c58 */
  if (C.zf) goto L_12465c58;
  /* 12465c37 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12465c3d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12465c40 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12465c43 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12465c4a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12465c4e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12465c54 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12465c56 jmp 0x12465c5a */
  goto L_12465c5a;
L_12465c58:;
  /* 12465c58 jmp 0x12465c5f */
  goto L_12465c5f;
L_12465c5a:;
  /* 12465c5a jmp 0x12465ba5 */
  goto L_12465ba5;
L_12465c5f:;
  /* 12465c5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12465c61 jmp 0x12465c66 */
  goto L_12465c66;
L_12465c63:;
  /* 12465c63 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12465c66:;
  /* 12465c66 mov esp, ebp */
  ESP = (EBP);
  /* 12465c68 pop ebp */
  EBP = (pop32());
  /* 12465c69 ret  */
  ESPCHK(0x124659e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c70 @ 0x12465c70 (10 bytes, 5 insns) */
void f_12465c70(void) {
  FTRACE(0x12465c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12465c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12465c71 mov ebp, esp */
  EBP = (ESP);
  /* 12465c73 mov eax, dword ptr [0x12482d88] */
  EAX = (r32((uint32_t)(0x12482d88)));
  /* 12465c78 pop ebp */
  EBP = (pop32());
  /* 12465c79 ret  */
  ESPCHK(0x12465c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c80 @ 0x12465c80 (575 bytes, 196 insns) */
void f_12465c80(void) {
  FTRACE(0x12465c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12465c80 push ebp */
  push32((uint32_t)(EBP));
  /* 12465c81 mov ebp, esp */
  EBP = (ESP);
  /* 12465c83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12465c85 push 0x1247ff98 */
  push32((uint32_t)(0x1247ff98u));
  /* 12465c8a push 0x12460928 */
  push32((uint32_t)(0x12460928u));
  /* 12465c8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12465c95 push eax */
  push32((uint32_t)(EAX));
  /* 12465c96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12465c9d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12465ca0 push ebx */
  push32((uint32_t)(EBX));
  /* 12465ca1 push esi */
  push32((uint32_t)(ESI));
  /* 12465ca2 push edi */
  push32((uint32_t)(EDI));
  /* 12465ca3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12465ca6 cmp dword ptr [0x12483af4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483af4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465cad jne 0x12465cfe */
  if (!C.zf) goto L_12465cfe;
  /* 12465caf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12465cb2 push eax */
  push32((uint32_t)(EAX));
  /* 12465cb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12465cb5 push 0x1247f6c8 */
  push32((uint32_t)(0x1247f6c8u));
  /* 12465cba push 1 */
  push32((uint32_t)(0x1u));
  /* 12465cbc call dword ptr [0x124862f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862f4))), 0x12465cc2u);
  /* 12465cc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12465cc4 je 0x12465cd2 */
  if (C.zf) goto L_12465cd2;
  /* 12465cc6 mov dword ptr [0x12483af4], 1 */
  w32((uint32_t)(0x12483af4), (0x1u));
  /* 12465cd0 jmp 0x12465cfe */
  goto L_12465cfe;
L_12465cd2:;
  /* 12465cd2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12465cd5 push ecx */
  push32((uint32_t)(ECX));
  /* 12465cd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12465cd8 push 0x1247f6c4 */
  push32((uint32_t)(0x1247f6c4u));
  /* 12465cdd push 1 */
  push32((uint32_t)(0x1u));
  /* 12465cdf push 0 */
  push32((uint32_t)(0x0u));
  /* 12465ce1 call dword ptr [0x124862f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862f8))), 0x12465ce7u);
  /* 12465ce7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12465ce9 je 0x12465cf7 */
  if (C.zf) goto L_12465cf7;
  /* 12465ceb mov dword ptr [0x12483af4], 2 */
  w32((uint32_t)(0x12483af4), (0x2u));
  /* 12465cf5 jmp 0x12465cfe */
  goto L_12465cfe;
L_12465cf7:;
  /* 12465cf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12465cf9 jmp 0x12465ed9 */
  goto L_12465ed9;
L_12465cfe:;
  /* 12465cfe cmp dword ptr [0x12483af4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12483af4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465d05 jne 0x12465d22 */
  if (!C.zf) goto L_12465d22;
  /* 12465d07 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465d0a push edx */
  push32((uint32_t)(EDX));
  /* 12465d0b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465d0e push eax */
  push32((uint32_t)(EAX));
  /* 12465d0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465d12 push ecx */
  push32((uint32_t)(ECX));
  /* 12465d13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12465d16 push edx */
  push32((uint32_t)(EDX));
  /* 12465d17 call dword ptr [0x124862f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862f4))), 0x12465d1du);
  /* 12465d1d jmp 0x12465ed9 */
  goto L_12465ed9;
L_12465d22:;
  /* 12465d22 cmp dword ptr [0x12483af4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12483af4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465d29 jne 0x12465ed7 */
  if (!C.zf) goto L_12465ed7;
  /* 12465d2f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465d33 jne 0x12465d3d */
  if (!C.zf) goto L_12465d3d;
  /* 12465d35 mov eax, dword ptr [0x12483a68] */
  EAX = (r32((uint32_t)(0x12483a68)));
  /* 12465d3a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12465d3d:;
  /* 12465d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12465d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12465d41 push 0 */
  push32((uint32_t)(0x0u));
  /* 12465d43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12465d45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465d48 push ecx */
  push32((uint32_t)(ECX));
  /* 12465d49 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465d4c push edx */
  push32((uint32_t)(EDX));
  /* 12465d4d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12465d52 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12465d55 push eax */
  push32((uint32_t)(EAX));
  /* 12465d56 call dword ptr [0x124863b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863b0))), 0x12465d5cu);
  /* 12465d5c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12465d5f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465d63 jne 0x12465d6c */
  if (!C.zf) goto L_12465d6c;
  /* 12465d65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12465d67 jmp 0x12465ed9 */
  goto L_12465ed9;
L_12465d6c:;
  /* 12465d6c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12465d73 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12465d76 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12465d79 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12465d7b call 0x1245a9c0 */
  push32(0x12465d80u); f_1245a9c0();
  /* 12465d80 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12465d83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12465d86 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12465d89 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12465d8c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12465d8f push edx */
  push32((uint32_t)(EDX));
  /* 12465d90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12465d92 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12465d95 push eax */
  push32((uint32_t)(EAX));
  /* 12465d96 call 0x1245b590 */
  push32(0x12465d9bu); f_1245b590();
  /* 12465d9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12465d9e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12465da5 jmp 0x12465dbe */
  goto L_12465dbe;
  /* 12465da7 mov eax, 1 */
  EAX = (0x1u);
  /* 12465dac ret  */
  ESPCHK(0x12465c80u, _esp0);
  ESP += 4; return;
  /* 12465dad mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12465db0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12465db7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12465dbe:;
  /* 12465dbe cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465dc2 jne 0x12465dcb */
  if (!C.zf) goto L_12465dcb;
  /* 12465dc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12465dc6 jmp 0x12465ed9 */
  goto L_12465ed9;
L_12465dcb:;
  /* 12465dcb push 0 */
  push32((uint32_t)(0x0u));
  /* 12465dcd push 0 */
  push32((uint32_t)(0x0u));
  /* 12465dcf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12465dd2 push ecx */
  push32((uint32_t)(ECX));
  /* 12465dd3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12465dd6 push edx */
  push32((uint32_t)(EDX));
  /* 12465dd7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465dda push eax */
  push32((uint32_t)(EAX));
  /* 12465ddb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12465dde push ecx */
  push32((uint32_t)(ECX));
  /* 12465ddf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12465de4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12465de7 push edx */
  push32((uint32_t)(EDX));
  /* 12465de8 call dword ptr [0x124863b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863b0))), 0x12465deeu);
  /* 12465dee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12465df0 jne 0x12465df9 */
  if (!C.zf) goto L_12465df9;
  /* 12465df2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12465df4 jmp 0x12465ed9 */
  goto L_12465ed9;
L_12465df9:;
  /* 12465df9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12465e00 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12465e03 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12465e07 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12465e0a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12465e0c call 0x1245a9c0 */
  push32(0x12465e11u); f_1245a9c0();
  /* 12465e11 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12465e14 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12465e17 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12465e1a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12465e1d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12465e24 jmp 0x12465e3d */
  goto L_12465e3d;
  /* 12465e26 mov eax, 1 */
  EAX = (0x1u);
  /* 12465e2b ret  */
  ESPCHK(0x12465c80u, _esp0);
  ESP += 4; return;
  /* 12465e2c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12465e2f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12465e36 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12465e3d:;
  /* 12465e3d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465e41 jne 0x12465e4a */
  if (!C.zf) goto L_12465e4a;
  /* 12465e43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12465e45 jmp 0x12465ed9 */
  goto L_12465ed9;
L_12465e4a:;
  /* 12465e4a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465e4e jne 0x12465e59 */
  if (!C.zf) goto L_12465e59;
  /* 12465e50 mov edx, dword ptr [0x12483a58] */
  EDX = (r32((uint32_t)(0x12483a58)));
  /* 12465e56 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12465e59:;
  /* 12465e59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465e5c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12465e5f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12465e65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465e68 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12465e6b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12465e72 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12465e75 push ecx */
  push32((uint32_t)(ECX));
  /* 12465e76 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12465e79 push edx */
  push32((uint32_t)(EDX));
  /* 12465e7a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12465e7d push eax */
  push32((uint32_t)(EAX));
  /* 12465e7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12465e81 push ecx */
  push32((uint32_t)(ECX));
  /* 12465e82 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12465e85 push edx */
  push32((uint32_t)(EDX));
  /* 12465e86 call dword ptr [0x124862f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862f8))), 0x12465e8cu);
  /* 12465e8c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12465e8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465e92 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12465e95 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12465e97 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12465e9c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465ea2 je 0x12465eb8 */
  if (C.zf) goto L_12465eb8;
  /* 12465ea4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465ea7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12465eaa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12465eac mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12465eb0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465eb6 je 0x12465ebc */
  if (C.zf) goto L_12465ebc;
L_12465eb8:;
  /* 12465eb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12465eba jmp 0x12465ed9 */
  goto L_12465ed9;
L_12465ebc:;
  /* 12465ebc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465ebf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12465ec1 push eax */
  push32((uint32_t)(EAX));
  /* 12465ec2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12465ec5 push ecx */
  push32((uint32_t)(ECX));
  /* 12465ec6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12465ec9 push edx */
  push32((uint32_t)(EDX));
  /* 12465eca call 0x1245f710 */
  push32(0x12465ecfu); f_1245f710();
  /* 12465ecf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12465ed2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12465ed5 jmp 0x12465ed9 */
  goto L_12465ed9;
L_12465ed7:;
  /* 12465ed7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12465ed9:;
  /* 12465ed9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12465edc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12465edf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12465ee6 pop edi */
  EDI = (pop32());
  /* 12465ee7 pop esi */
  ESI = (pop32());
  /* 12465ee8 pop ebx */
  EBX = (pop32());
  /* 12465ee9 mov esp, ebp */
  ESP = (EBP);
  /* 12465eeb pop ebp */
  EBP = (pop32());
  /* 12465eec ret  */
  ESPCHK(0x12465c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ef0 @ 0x12465ef0 (208 bytes, 85 insns) */
void f_12465ef0(void) {
  FTRACE(0x12465ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12465ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12465ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12465ef3 push edi */
  push32((uint32_t)(EDI));
  /* 12465ef4 push esi */
  push32((uint32_t)(ESI));
  /* 12465ef5 push ebx */
  push32((uint32_t)(EBX));
  /* 12465ef6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12465ef9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12465efc lea eax, [0x12483a50] */
  EAX = ((uint32_t)(0x12483a50));
  /* 12465f02 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465f06 jne 0x12465f43 */
  if (!C.zf) goto L_12465f43;
  /* 12465f08 mov al, 0xff */
  AL = (0xffu);
  /* 12465f0a mov edi, edi */
  EDI = (EDI);
L_12465f0c:;
  /* 12465f0c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12465f0e je 0x12465f3e */
  if (C.zf) goto L_12465f3e;
  /* 12465f10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12465f12 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12465f13 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12465f15 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12465f16 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12465f18 je 0x12465f0c */
  if (C.zf) goto L_12465f0c;
  /* 12465f1a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12465f1c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12465f1e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12465f20 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12465f23 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12465f25 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12465f27 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12465f29 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12465f2b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12465f2d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12465f2f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12465f32 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12465f34 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12465f36 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12465f38 je 0x12465f0c */
  if (C.zf) goto L_12465f0c;
  /* 12465f3a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12465f3c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12465f3e:;
  /* 12465f3e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12465f41 jmp 0x12465fbb */
  goto L_12465fbb;
L_12465f43:;
  /* 12465f43 lock inc dword ptr [0x12483be4] */
  x86_unimpl("lock inc @ 0x12465f43");
  /* 12465f4a cmp dword ptr [0x12483bd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483bd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465f51 jg 0x12465f57 */
  if ((!C.zf&&C.sf==C.of)) goto L_12465f57;
  /* 12465f53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12465f55 jmp 0x12465f6c */
  goto L_12465f6c;
L_12465f57:;
  /* 12465f57 lock dec dword ptr [0x12483be4] */
  x86_unimpl("lock dec @ 0x12465f57");
  /* 12465f5e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12465f60 call 0x1245b220 */
  push32(0x12465f65u); f_1245b220();
  /* 12465f65 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12465f6c:;
  /* 12465f6c mov eax, 0xff */
  EAX = (0xffu);
  /* 12465f71 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12465f73 nop  */
  /* nop */
L_12465f74:;
  /* 12465f74 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12465f76 je 0x12465f9f */
  if (C.zf) goto L_12465f9f;
  /* 12465f78 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12465f7a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12465f7b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12465f7d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12465f7e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12465f80 je 0x12465f74 */
  if (C.zf) goto L_12465f74;
  /* 12465f82 push eax */
  push32((uint32_t)(EAX));
  /* 12465f83 push ebx */
  push32((uint32_t)(EBX));
  /* 12465f84 call 0x12467060 */
  push32(0x12465f89u); f_12467060();
  /* 12465f89 mov ebx, eax */
  EBX = (EAX);
  /* 12465f8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12465f8e call 0x12467060 */
  push32(0x12465f93u); f_12467060();
  /* 12465f93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12465f96 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12465f98 je 0x12465f74 */
  if (C.zf) goto L_12465f74;
  /* 12465f9a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12465f9c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12465f9f:;
  /* 12465f9f mov ebx, eax */
  EBX = (EAX);
  /* 12465fa1 pop eax */
  EAX = (pop32());
  /* 12465fa2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12465fa4 jne 0x12465faf */
  if (!C.zf) goto L_12465faf;
  /* 12465fa6 lock dec dword ptr [0x12483be4] */
  x86_unimpl("lock dec @ 0x12465fa6");
  /* 12465fad jmp 0x12465fb9 */
  goto L_12465fb9;
L_12465faf:;
  /* 12465faf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12465fb1 call 0x1245b2c0 */
  push32(0x12465fb6u); f_1245b2c0();
  /* 12465fb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12465fb9:;
  /* 12465fb9 mov eax, ebx */
  EAX = (EBX);
L_12465fbb:;
  /* 12465fbb pop ebx */
  EBX = (pop32());
  /* 12465fbc pop esi */
  ESI = (pop32());
  /* 12465fbd pop edi */
  EDI = (pop32());
  /* 12465fbe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12465fbf ret  */
  ESPCHK(0x12465ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015fc0 @ 0x12465fc0 (257 bytes, 103 insns) */
void f_12465fc0(void) {
  FTRACE(0x12465fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12465fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12465fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12465fc3 push edi */
  push32((uint32_t)(EDI));
  /* 12465fc4 push esi */
  push32((uint32_t)(ESI));
  /* 12465fc5 push ebx */
  push32((uint32_t)(EBX));
  /* 12465fc6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12465fc9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12465fcb je 0x124660ba */
  if (C.zf) goto L_124660ba;
  /* 12465fd1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12465fd4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12465fd7 lea eax, [0x12483a50] */
  EAX = ((uint32_t)(0x12483a50));
  /* 12465fdd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12465fe1 jne 0x12466031 */
  if (!C.zf) goto L_12466031;
  /* 12465fe3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12465fe5 mov bl, 0x5a */
  BL = (0x5au);
  /* 12465fe7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12465fe9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12465fec:;
  /* 12465fec mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12465fee or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12465ff0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12465ff2 je 0x12466015 */
  if (C.zf) goto L_12466015;
  /* 12465ff4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12465ff6 je 0x12466015 */
  if (C.zf) goto L_12466015;
  /* 12465ff8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12465ff9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12465ffa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12465ffc jb 0x12466004 */
  if (C.cf) goto L_12466004;
  /* 12465ffe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12466000 ja 0x12466004 */
  if ((!C.cf&&!C.zf)) goto L_12466004;
  /* 12466002 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12466004:;
  /* 12466004 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12466006 jb 0x1246600e */
  if (C.cf) goto L_1246600e;
  /* 12466008 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1246600a ja 0x1246600e */
  if ((!C.cf&&!C.zf)) goto L_1246600e;
  /* 1246600c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1246600e:;
  /* 1246600e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12466010 jne 0x1246601f */
  if (!C.zf) goto L_1246601f;
  /* 12466012 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12466013 jne 0x12465fec */
  if (!C.zf) goto L_12465fec;
L_12466015:;
  /* 12466015 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12466017 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12466019 je 0x124660ba */
  if (C.zf) goto L_124660ba;
L_1246601f:;
  /* 1246601f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12466024 jb 0x124660ba */
  if (C.cf) goto L_124660ba;
  /* 1246602a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1246602c jmp 0x124660ba */
  goto L_124660ba;
L_12466031:;
  /* 12466031 lock inc dword ptr [0x12483be4] */
  x86_unimpl("lock inc @ 0x12466031");
  /* 12466038 cmp dword ptr [0x12483bd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483bd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246603f jg 0x12466045 */
  if ((!C.zf&&C.sf==C.of)) goto L_12466045;
  /* 12466041 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466043 jmp 0x1246605e */
  goto L_1246605e;
L_12466045:;
  /* 12466045 lock dec dword ptr [0x12483be4] */
  x86_unimpl("lock dec @ 0x12466045");
  /* 1246604c mov ebx, ecx */
  EBX = (ECX);
  /* 1246604e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12466050 call 0x1245b220 */
  push32(0x12466055u); f_1245b220();
  /* 12466055 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1246605c mov ecx, ebx */
  ECX = (EBX);
L_1246605e:;
  /* 1246605e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12466060 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12466062 mov edi, edi */
  EDI = (EDI);
L_12466064:;
  /* 12466064 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12466066 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12466068 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1246606a je 0x1246608f */
  if (C.zf) goto L_1246608f;
  /* 1246606c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1246606e je 0x1246608f */
  if (C.zf) goto L_1246608f;
  /* 12466070 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12466071 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12466072 push ecx */
  push32((uint32_t)(ECX));
  /* 12466073 push eax */
  push32((uint32_t)(EAX));
  /* 12466074 push ebx */
  push32((uint32_t)(EBX));
  /* 12466075 call 0x12467060 */
  push32(0x1246607au); f_12467060();
  /* 1246607a mov ebx, eax */
  EBX = (EAX);
  /* 1246607c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246607f call 0x12467060 */
  push32(0x12466084u); f_12467060();
  /* 12466084 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12466087 pop ecx */
  ECX = (pop32());
  /* 12466088 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246608a jne 0x12466095 */
  if (!C.zf) goto L_12466095;
  /* 1246608c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1246608d jne 0x12466064 */
  if (!C.zf) goto L_12466064;
L_1246608f:;
  /* 1246608f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12466091 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466093 je 0x1246609e */
  if (C.zf) goto L_1246609e;
L_12466095:;
  /* 12466095 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1246609a jb 0x1246609e */
  if (C.cf) goto L_1246609e;
  /* 1246609c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1246609e:;
  /* 1246609e pop eax */
  EAX = (pop32());
  /* 1246609f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124660a1 jne 0x124660ac */
  if (!C.zf) goto L_124660ac;
  /* 124660a3 lock dec dword ptr [0x12483be4] */
  x86_unimpl("lock dec @ 0x124660a3");
  /* 124660aa jmp 0x124660ba */
  goto L_124660ba;
L_124660ac:;
  /* 124660ac mov ebx, ecx */
  EBX = (ECX);
  /* 124660ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124660b0 call 0x1245b2c0 */
  push32(0x124660b5u); f_1245b2c0();
  /* 124660b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124660b8 mov ecx, ebx */
  ECX = (EBX);
L_124660ba:;
  /* 124660ba mov eax, ecx */
  EAX = (ECX);
  /* 124660bc pop ebx */
  EBX = (pop32());
  /* 124660bd pop esi */
  ESI = (pop32());
  /* 124660be pop edi */
  EDI = (pop32());
  /* 124660bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124660c0 ret  */
  ESPCHK(0x12465fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100160d0 @ 0x124660d0 (255 bytes, 88 insns) */
void f_124660d0(void) {
  FTRACE(0x124660d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124660d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124660d1 mov ebp, esp */
  EBP = (ESP);
  /* 124660d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_124660d6:;
  /* 124660d6 cmp dword ptr [0x12481ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12481ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124660dd jle 0x124660f6 */
  if ((C.zf||C.sf!=C.of)) goto L_124660f6;
  /* 124660df push 8 */
  push32((uint32_t)(0x8u));
  /* 124660e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124660e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124660e6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124660e8 push ecx */
  push32((uint32_t)(ECX));
  /* 124660e9 call 0x1245d830 */
  push32(0x124660eeu); f_1245d830();
  /* 124660ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124660f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 124660f4 jmp 0x1246610f */
  goto L_1246610f;
L_124660f6:;
  /* 124660f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124660f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124660fb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124660fd mov ecx, dword ptr [0x12481c98] */
  ECX = (r32((uint32_t)(0x12481c98)));
  /* 12466103 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12466105 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12466109 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1246610c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1246610f:;
  /* 1246610f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466113 je 0x12466120 */
  if (C.zf) goto L_12466120;
  /* 12466115 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466118 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246611b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1246611e jmp 0x124660d6 */
  goto L_124660d6;
L_12466120:;
  /* 12466120 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466123 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12466125 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12466127 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1246612a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246612d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466130 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12466133 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12466136 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12466139 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246613d je 0x12466145 */
  if (C.zf) goto L_12466145;
  /* 1246613f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466143 jne 0x12466158 */
  if (!C.zf) goto L_12466158;
L_12466145:;
  /* 12466145 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466148 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1246614a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1246614c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1246614f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466152 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466155 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12466158:;
  /* 12466158 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1246615f:;
  /* 1246615f cmp dword ptr [0x12481ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12481ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466166 jle 0x1246617b */
  if ((C.zf||C.sf!=C.of)) goto L_1246617b;
  /* 12466168 push 4 */
  push32((uint32_t)(0x4u));
  /* 1246616a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246616d push edx */
  push32((uint32_t)(EDX));
  /* 1246616e call 0x1245d830 */
  push32(0x12466173u); f_1245d830();
  /* 12466173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12466176 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12466179 jmp 0x12466190 */
  goto L_12466190;
L_1246617b:;
  /* 1246617b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246617e mov ecx, dword ptr [0x12481c98] */
  ECX = (r32((uint32_t)(0x12481c98)));
  /* 12466184 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12466186 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1246618a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1246618d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12466190:;
  /* 12466190 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466194 je 0x124661bb */
  if (C.zf) goto L_124661bb;
  /* 12466196 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12466199 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1246619c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246619f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 124661a3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124661a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124661a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124661ab mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124661ad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124661b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124661b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124661b6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 124661b9 jmp 0x1246615f */
  goto L_1246615f;
L_124661bb:;
  /* 124661bb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124661bf jne 0x124661c8 */
  if (!C.zf) goto L_124661c8;
  /* 124661c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124661c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124661c6 jmp 0x124661cb */
  goto L_124661cb;
L_124661c8:;
  /* 124661c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_124661cb:;
  /* 124661cb mov esp, ebp */
  ESP = (EBP);
  /* 124661cd pop ebp */
  EBP = (pop32());
  /* 124661ce ret  */
  ESPCHK(0x124660d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100161d0 @ 0x124661d0 (17 bytes, 8 insns) */
void f_124661d0(void) {
  FTRACE(0x124661d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124661d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124661d1 mov ebp, esp */
  EBP = (ESP);
  /* 124661d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124661d6 push eax */
  push32((uint32_t)(EAX));
  /* 124661d7 call 0x124660d0 */
  push32(0x124661dcu); f_124660d0();
  /* 124661dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124661df pop ebp */
  EBP = (pop32());
  /* 124661e0 ret  */
  ESPCHK(0x124661d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100161f0 @ 0x124661f0 (297 bytes, 106 insns) */
void f_124661f0(void) {
  FTRACE(0x124661f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124661f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124661f1 mov ebp, esp */
  EBP = (ESP);
  /* 124661f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124661f6 push esi */
  push32((uint32_t)(ESI));
L_124661f7:;
  /* 124661f7 cmp dword ptr [0x12481ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12481ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124661fe jle 0x12466217 */
  if ((C.zf||C.sf!=C.of)) goto L_12466217;
  /* 12466200 push 8 */
  push32((uint32_t)(0x8u));
  /* 12466202 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466205 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12466207 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12466209 push ecx */
  push32((uint32_t)(ECX));
  /* 1246620a call 0x1245d830 */
  push32(0x1246620fu); f_1245d830();
  /* 1246620f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12466212 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12466215 jmp 0x12466230 */
  goto L_12466230;
L_12466217:;
  /* 12466217 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246621a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1246621c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1246621e mov ecx, dword ptr [0x12481c98] */
  ECX = (r32((uint32_t)(0x12481c98)));
  /* 12466224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12466226 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1246622a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1246622d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12466230:;
  /* 12466230 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466234 je 0x12466241 */
  if (C.zf) goto L_12466241;
  /* 12466236 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466239 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246623c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1246623f jmp 0x124661f7 */
  goto L_124661f7;
L_12466241:;
  /* 12466241 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466244 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12466246 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12466248 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1246624b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246624e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466251 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12466254 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12466257 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1246625a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246625e je 0x12466266 */
  if (C.zf) goto L_12466266;
  /* 12466260 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466264 jne 0x12466279 */
  if (!C.zf) goto L_12466279;
L_12466266:;
  /* 12466266 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466269 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1246626b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1246626d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12466270 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466273 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466276 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12466279:;
  /* 12466279 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12466280 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12466287:;
  /* 12466287 cmp dword ptr [0x12481ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12481ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246628e jle 0x124662a3 */
  if ((C.zf||C.sf!=C.of)) goto L_124662a3;
  /* 12466290 push 4 */
  push32((uint32_t)(0x4u));
  /* 12466292 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12466295 push edx */
  push32((uint32_t)(EDX));
  /* 12466296 call 0x1245d830 */
  push32(0x1246629bu); f_1245d830();
  /* 1246629b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246629e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124662a1 jmp 0x124662b8 */
  goto L_124662b8;
L_124662a3:;
  /* 124662a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124662a6 mov ecx, dword ptr [0x12481c98] */
  ECX = (r32((uint32_t)(0x12481c98)));
  /* 124662ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124662ae mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124662b2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 124662b5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_124662b8:;
  /* 124662b8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124662bc je 0x124662f9 */
  if (C.zf) goto L_124662f9;
  /* 124662be push 0 */
  push32((uint32_t)(0x0u));
  /* 124662c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 124662c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124662c5 push eax */
  push32((uint32_t)(EAX));
  /* 124662c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124662c9 push ecx */
  push32((uint32_t)(ECX));
  /* 124662ca call 0x12467190 */
  push32(0x124662cfu); f_12467190();
  /* 124662cf mov ecx, eax */
  ECX = (EAX);
  /* 124662d1 mov esi, edx */
  ESI = (EDX);
  /* 124662d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124662d6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124662d9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124662da add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124662dc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 124662de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124662e1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 124662e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124662e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124662e9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124662eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124662ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124662f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124662f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 124662f7 jmp 0x12466287 */
  goto L_12466287;
L_124662f9:;
  /* 124662f9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124662fd jne 0x1246630e */
  if (!C.zf) goto L_1246630e;
  /* 124662ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12466302 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12466304 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12466307 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246630a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1246630c jmp 0x12466314 */
  goto L_12466314;
L_1246630e:;
  /* 1246630e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12466311 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12466314:;
  /* 12466314 pop esi */
  ESI = (pop32());
  /* 12466315 mov esp, ebp */
  ESP = (EBP);
  /* 12466317 pop ebp */
  EBP = (pop32());
  /* 12466318 ret  */
  ESPCHK(0x124661f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016320 @ 0x12466320 (61 bytes, 18 insns) */
void f_12466320(void) {
  FTRACE(0x12466320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12466320 push ebp */
  push32((uint32_t)(EBP));
  /* 12466321 mov ebp, esp */
  EBP = (ESP);
  /* 12466323 cmp dword ptr [0x12483bb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483bb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246632a jne 0x1246635b */
  if (!C.zf) goto L_1246635b;
  /* 1246632c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1246632e call 0x1245b220 */
  push32(0x12466333u); f_1245b220();
  /* 12466333 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12466336 cmp dword ptr [0x12483bb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483bb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246633d jne 0x12466351 */
  if (!C.zf) goto L_12466351;
  /* 1246633f call 0x12466380 */
  push32(0x12466344u); f_12466380();
  /* 12466344 mov eax, dword ptr [0x12483bb0] */
  EAX = (r32((uint32_t)(0x12483bb0)));
  /* 12466349 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246634c mov dword ptr [0x12483bb0], eax */
  w32((uint32_t)(0x12483bb0), (EAX));
L_12466351:;
  /* 12466351 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12466353 call 0x1245b2c0 */
  push32(0x12466358u); f_1245b2c0();
  /* 12466358 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1246635b:;
  /* 1246635b pop ebp */
  EBP = (pop32());
  /* 1246635c ret  */
  ESPCHK(0x12466320u, _esp0);
  ESP += 4; return;
}

/* FUN_10016360 @ 0x12466360 (30 bytes, 11 insns) */
void f_12466360(void) {
  FTRACE(0x12466360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12466360 push ebp */
  push32((uint32_t)(EBP));
  /* 12466361 mov ebp, esp */
  EBP = (ESP);
  /* 12466363 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12466365 call 0x1245b220 */
  push32(0x1246636au); f_1245b220();
  /* 1246636a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246636d call 0x12466380 */
  push32(0x12466372u); f_12466380();
  /* 12466372 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12466374 call 0x1245b2c0 */
  push32(0x12466379u); f_1245b2c0();
  /* 12466379 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246637c pop ebp */
  EBP = (pop32());
  /* 1246637d ret  */
  ESPCHK(0x12466360u, _esp0);
  ESP += 4; return;
}

/* FUN_10016380 @ 0x12466380 (939 bytes, 266 insns) */
void f_12466380(void) {
  FTRACE(0x12466380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12466380 push ebp */
  push32((uint32_t)(EBP));
  /* 12466381 mov ebp, esp */
  EBP = (ESP);
  /* 12466383 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12466386 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1246638d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1246638f call 0x1245b220 */
  push32(0x12466394u); f_1245b220();
  /* 12466394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12466397 mov dword ptr [0x12483af8], 0 */
  w32((uint32_t)(0x12483af8), (0x0u));
  /* 124663a1 mov dword ptr [0x12482e38], 0xffffffff */
  w32((uint32_t)(0x12482e38), (0xffffffffu));
  /* 124663ab mov eax, dword ptr [0x12482e38] */
  EAX = (r32((uint32_t)(0x12482e38)));
  /* 124663b0 mov dword ptr [0x12482e28], eax */
  w32((uint32_t)(0x12482e28), (EAX));
  /* 124663b5 push 0x1247fff8 */
  push32((uint32_t)(0x1247fff8u));
  /* 124663ba call 0x12467200 */
  push32(0x124663bfu); f_12467200();
  /* 124663bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124663c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124663c5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124663c9 jne 0x12466503 */
  if (!C.zf) goto L_12466503;
  /* 124663cf push 0xc */
  push32((uint32_t)(0xcu));
  /* 124663d1 call 0x1245b2c0 */
  push32(0x124663d6u); f_1245b2c0();
  /* 124663d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124663d9 push 0x12483b00 */
  push32((uint32_t)(0x12483b00u));
  /* 124663de call dword ptr [0x124862b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862b8))), 0x124663e4u);
  /* 124663e4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124663e7 je 0x124664fe */
  if (C.zf) goto L_124664fe;
  /* 124663ed mov dword ptr [0x12483af8], 1 */
  w32((uint32_t)(0x12483af8), (0x1u));
  /* 124663f7 mov ecx, dword ptr [0x12483b00] */
  ECX = (r32((uint32_t)(0x12483b00)));
  /* 124663fd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12466400 mov dword ptr [0x12482d90], ecx */
  w32((uint32_t)(0x12482d90), (ECX));
  /* 12466406 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12466408 mov dx, word ptr [0x12483b46] */
  DX = (r16((uint32_t)(0x12483b46)));
  /* 1246640f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12466411 je 0x12466429 */
  if (C.zf) goto L_12466429;
  /* 12466413 mov eax, dword ptr [0x12483b54] */
  EAX = (r32((uint32_t)(0x12483b54)));
  /* 12466418 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1246641b mov ecx, dword ptr [0x12482d90] */
  ECX = (r32((uint32_t)(0x12482d90)));
  /* 12466421 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466423 mov dword ptr [0x12482d90], ecx */
  w32((uint32_t)(0x12482d90), (ECX));
L_12466429:;
  /* 12466429 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1246642b mov dx, word ptr [0x12483b9a] */
  DX = (r16((uint32_t)(0x12483b9a)));
  /* 12466432 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12466434 je 0x1246645e */
  if (C.zf) goto L_1246645e;
  /* 12466436 cmp dword ptr [0x12483ba8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483ba8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246643d je 0x1246645e */
  if (C.zf) goto L_1246645e;
  /* 1246643f mov dword ptr [0x12482d94], 1 */
  w32((uint32_t)(0x12482d94), (0x1u));
  /* 12466449 mov eax, dword ptr [0x12483ba8] */
  EAX = (r32((uint32_t)(0x12483ba8)));
  /* 1246644e sub eax, dword ptr [0x12483b54] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12483b54))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12466454 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12466457 mov dword ptr [0x12482d98], eax */
  w32((uint32_t)(0x12482d98), (EAX));
  /* 1246645c jmp 0x12466472 */
  goto L_12466472;
L_1246645e:;
  /* 1246645e mov dword ptr [0x12482d94], 0 */
  w32((uint32_t)(0x12482d94), (0x0u));
  /* 12466468 mov dword ptr [0x12482d98], 0 */
  w32((uint32_t)(0x12482d98), (0x0u));
L_12466472:;
  /* 12466472 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12466475 push ecx */
  push32((uint32_t)(ECX));
  /* 12466476 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466478 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1246647a mov edx, dword ptr [0x12482e1c] */
  EDX = (r32((uint32_t)(0x12482e1c)));
  /* 12466480 push edx */
  push32((uint32_t)(EDX));
  /* 12466481 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12466483 push 0x12483b04 */
  push32((uint32_t)(0x12483b04u));
  /* 12466488 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1246648d mov eax, dword ptr [0x12483a68] */
  EAX = (r32((uint32_t)(0x12483a68)));
  /* 12466492 push eax */
  push32((uint32_t)(EAX));
  /* 12466493 call dword ptr [0x124863b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863b0))), 0x12466499u);
  /* 12466499 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1246649b je 0x124664af */
  if (C.zf) goto L_124664af;
  /* 1246649d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124664a1 jne 0x124664af */
  if (!C.zf) goto L_124664af;
  /* 124664a3 mov ecx, dword ptr [0x12482e1c] */
  ECX = (r32((uint32_t)(0x12482e1c)));
  /* 124664a9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 124664ad jmp 0x124664b8 */
  goto L_124664b8;
L_124664af:;
  /* 124664af mov edx, dword ptr [0x12482e1c] */
  EDX = (r32((uint32_t)(0x12482e1c)));
  /* 124664b5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_124664b8:;
  /* 124664b8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 124664bb push eax */
  push32((uint32_t)(EAX));
  /* 124664bc push 0 */
  push32((uint32_t)(0x0u));
  /* 124664be push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 124664c0 mov ecx, dword ptr [0x12482e20] */
  ECX = (r32((uint32_t)(0x12482e20)));
  /* 124664c6 push ecx */
  push32((uint32_t)(ECX));
  /* 124664c7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124664c9 push 0x12483b58 */
  push32((uint32_t)(0x12483b58u));
  /* 124664ce push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124664d3 mov edx, dword ptr [0x12483a68] */
  EDX = (r32((uint32_t)(0x12483a68)));
  /* 124664d9 push edx */
  push32((uint32_t)(EDX));
  /* 124664da call dword ptr [0x124863b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863b0))), 0x124664e0u);
  /* 124664e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124664e2 je 0x124664f5 */
  if (C.zf) goto L_124664f5;
  /* 124664e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124664e8 jne 0x124664f5 */
  if (!C.zf) goto L_124664f5;
  /* 124664ea mov eax, dword ptr [0x12482e20] */
  EAX = (r32((uint32_t)(0x12482e20)));
  /* 124664ef mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 124664f3 jmp 0x124664fe */
  goto L_124664fe;
L_124664f5:;
  /* 124664f5 mov ecx, dword ptr [0x12482e20] */
  ECX = (r32((uint32_t)(0x12482e20)));
  /* 124664fb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_124664fe:;
  /* 124664fe jmp 0x12466727 */
  goto L_12466727;
L_12466503:;
  /* 12466503 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12466506 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12466509 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1246650b je 0x1246652d */
  if (C.zf) goto L_1246652d;
  /* 1246650d cmp dword ptr [0x12483bac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483bac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466514 je 0x1246653c */
  if (C.zf) goto L_1246653c;
  /* 12466516 mov ecx, dword ptr [0x12483bac] */
  ECX = (r32((uint32_t)(0x12483bac)));
  /* 1246651c push ecx */
  push32((uint32_t)(ECX));
  /* 1246651d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12466520 push edx */
  push32((uint32_t)(EDX));
  /* 12466521 call 0x124634b0 */
  push32(0x12466526u); f_124634b0();
  /* 12466526 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12466529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1246652b jne 0x1246653c */
  if (!C.zf) goto L_1246653c;
L_1246652d:;
  /* 1246652d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1246652f call 0x1245b2c0 */
  push32(0x12466534u); f_1245b2c0();
  /* 12466534 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12466537 jmp 0x12466727 */
  goto L_12466727;
L_1246653c:;
  /* 1246653c push 2 */
  push32((uint32_t)(0x2u));
  /* 1246653e mov eax, dword ptr [0x12483bac] */
  EAX = (r32((uint32_t)(0x12483bac)));
  /* 12466543 push eax */
  push32((uint32_t)(EAX));
  /* 12466544 call 0x124582b0 */
  push32(0x12466549u); f_124582b0();
  /* 12466549 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246654c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12466551 push 0x1247fff0 */
  push32((uint32_t)(0x1247fff0u));
  /* 12466556 push 2 */
  push32((uint32_t)(0x2u));
  /* 12466558 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246655b push ecx */
  push32((uint32_t)(ECX));
  /* 1246655c call 0x1245a650 */
  push32(0x12466561u); f_1245a650();
  /* 12466561 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12466564 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466567 push eax */
  push32((uint32_t)(EAX));
  /* 12466568 call 0x12457820 */
  push32(0x1246656du); f_12457820();
  /* 1246656d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12466570 mov dword ptr [0x12483bac], eax */
  w32((uint32_t)(0x12483bac), (EAX));
  /* 12466575 cmp dword ptr [0x12483bac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483bac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246657c jne 0x1246658d */
  if (!C.zf) goto L_1246658d;
  /* 1246657e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12466580 call 0x1245b2c0 */
  push32(0x12466585u); f_1245b2c0();
  /* 12466585 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12466588 jmp 0x12466727 */
  goto L_12466727;
L_1246658d:;
  /* 1246658d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12466590 push edx */
  push32((uint32_t)(EDX));
  /* 12466591 mov eax, dword ptr [0x12483bac] */
  EAX = (r32((uint32_t)(0x12483bac)));
  /* 12466596 push eax */
  push32((uint32_t)(EAX));
  /* 12466597 call 0x1245a7d0 */
  push32(0x1246659cu); f_1245a7d0();
  /* 1246659c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246659f push 0xc */
  push32((uint32_t)(0xcu));
  /* 124665a1 call 0x1245b2c0 */
  push32(0x124665a6u); f_1245b2c0();
  /* 124665a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124665a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 124665ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124665ae push ecx */
  push32((uint32_t)(ECX));
  /* 124665af mov edx, dword ptr [0x12482e1c] */
  EDX = (r32((uint32_t)(0x12482e1c)));
  /* 124665b5 push edx */
  push32((uint32_t)(EDX));
  /* 124665b6 call 0x1245b040 */
  push32(0x124665bbu); f_1245b040();
  /* 124665bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124665be mov eax, dword ptr [0x12482e1c] */
  EAX = (r32((uint32_t)(0x12482e1c)));
  /* 124665c3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 124665c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124665ca add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124665cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124665d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124665d3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124665d6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124665d9 jne 0x124665ed */
  if (!C.zf) goto L_124665ed;
  /* 124665db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124665de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124665e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124665e4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124665e7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124665ea mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_124665ed:;
  /* 124665ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124665f0 push eax */
  push32((uint32_t)(EAX));
  /* 124665f1 call 0x124660d0 */
  push32(0x124665f6u); f_124660d0();
  /* 124665f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124665f9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124665ff mov dword ptr [0x12482d90], eax */
  w32((uint32_t)(0x12482d90), (EAX));
L_12466604:;
  /* 12466604 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12466607 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1246660a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246660d je 0x12466625 */
  if (C.zf) goto L_12466625;
  /* 1246660f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12466612 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12466615 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466618 jl 0x12466630 */
  if ((C.sf!=C.of)) goto L_12466630;
  /* 1246661a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246661d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12466620 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466623 jg 0x12466630 */
  if ((!C.zf&&C.sf==C.of)) goto L_12466630;
L_12466625:;
  /* 12466625 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12466628 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246662b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1246662e jmp 0x12466604 */
  goto L_12466604;
L_12466630:;
  /* 12466630 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12466633 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12466636 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466639 jne 0x124666d5 */
  if (!C.zf) goto L_124666d5;
  /* 1246663f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12466642 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466645 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12466648 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246664b push edx */
  push32((uint32_t)(EDX));
  /* 1246664c call 0x124660d0 */
  push32(0x12466651u); f_124660d0();
  /* 12466651 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12466654 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12466657 mov ecx, dword ptr [0x12482d90] */
  ECX = (r32((uint32_t)(0x12482d90)));
  /* 1246665d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246665f mov dword ptr [0x12482d90], ecx */
  w32((uint32_t)(0x12482d90), (ECX));
L_12466665:;
  /* 12466665 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12466668 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1246666b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246666e jl 0x12466686 */
  if ((C.sf!=C.of)) goto L_12466686;
  /* 12466670 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12466673 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12466676 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466679 jg 0x12466686 */
  if ((!C.zf&&C.sf==C.of)) goto L_12466686;
  /* 1246667b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246667e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466681 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12466684 jmp 0x12466665 */
  goto L_12466665;
L_12466686:;
  /* 12466686 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12466689 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1246668c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246668f jne 0x124666d5 */
  if (!C.zf) goto L_124666d5;
  /* 12466691 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12466694 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466697 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1246669a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246669d push ecx */
  push32((uint32_t)(ECX));
  /* 1246669e call 0x124660d0 */
  push32(0x124666a3u); f_124660d0();
  /* 124666a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124666a6 mov edx, dword ptr [0x12482d90] */
  EDX = (r32((uint32_t)(0x12482d90)));
  /* 124666ac add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124666ae mov dword ptr [0x12482d90], edx */
  w32((uint32_t)(0x12482d90), (EDX));
L_124666b4:;
  /* 124666b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124666b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124666ba cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124666bd jl 0x124666d5 */
  if ((C.sf!=C.of)) goto L_124666d5;
  /* 124666bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124666c2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124666c5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124666c8 jg 0x124666d5 */
  if ((!C.zf&&C.sf==C.of)) goto L_124666d5;
  /* 124666ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124666cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124666d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124666d3 jmp 0x124666b4 */
  goto L_124666b4;
L_124666d5:;
  /* 124666d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124666d9 je 0x124666e9 */
  if (C.zf) goto L_124666e9;
  /* 124666db mov edx, dword ptr [0x12482d90] */
  EDX = (r32((uint32_t)(0x12482d90)));
  /* 124666e1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124666e3 mov dword ptr [0x12482d90], edx */
  w32((uint32_t)(0x12482d90), (EDX));
L_124666e9:;
  /* 124666e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124666ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124666ef mov dword ptr [0x12482d94], ecx */
  w32((uint32_t)(0x12482d94), (ECX));
  /* 124666f5 cmp dword ptr [0x12482d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12482d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124666fc je 0x1246671e */
  if (C.zf) goto L_1246671e;
  /* 124666fe push 3 */
  push32((uint32_t)(0x3u));
  /* 12466700 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12466703 push edx */
  push32((uint32_t)(EDX));
  /* 12466704 mov eax, dword ptr [0x12482e20] */
  EAX = (r32((uint32_t)(0x12482e20)));
  /* 12466709 push eax */
  push32((uint32_t)(EAX));
  /* 1246670a call 0x1245b040 */
  push32(0x1246670fu); f_1245b040();
  /* 1246670f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12466712 mov ecx, dword ptr [0x12482e20] */
  ECX = (r32((uint32_t)(0x12482e20)));
  /* 12466718 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1246671c jmp 0x12466727 */
  goto L_12466727;
L_1246671e:;
  /* 1246671e mov edx, dword ptr [0x12482e20] */
  EDX = (r32((uint32_t)(0x12482e20)));
  /* 12466724 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12466727:;
  /* 12466727 mov esp, ebp */
  ESP = (EBP);
  /* 12466729 pop ebp */
  EBP = (pop32());
  /* 1246672a ret  */
  ESPCHK(0x12466380u, _esp0);
  ESP += 4; return;
}

/* FUN_10016730 @ 0x12466730 (46 bytes, 18 insns) */
void f_12466730(void) {
  FTRACE(0x12466730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12466730 push ebp */
  push32((uint32_t)(EBP));
  /* 12466731 mov ebp, esp */
  EBP = (ESP);
  /* 12466733 push ecx */
  push32((uint32_t)(ECX));
  /* 12466734 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12466736 call 0x1245b220 */
  push32(0x1246673bu); f_1245b220();
  /* 1246673b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246673e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466741 push eax */
  push32((uint32_t)(EAX));
  /* 12466742 call 0x12466760 */
  push32(0x12466747u); f_12466760();
  /* 12466747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246674a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1246674d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1246674f call 0x1245b2c0 */
  push32(0x12466754u); f_1245b2c0();
  /* 12466754 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12466757 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246675a mov esp, ebp */
  ESP = (EBP);
  /* 1246675c pop ebp */
  EBP = (pop32());
  /* 1246675d ret  */
  ESPCHK(0x12466730u, _esp0);
  ESP += 4; return;
}

/* FUN_10016760 @ 0x12466760 (762 bytes, 246 insns) */
void f_12466760(void) {
  FTRACE(0x12466760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12466760 push ebp */
  push32((uint32_t)(EBP));
  /* 12466761 mov ebp, esp */
  EBP = (ESP);
  /* 12466763 push ecx */
  push32((uint32_t)(ECX));
  /* 12466764 cmp dword ptr [0x12482d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12482d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246676b jne 0x12466774 */
  if (!C.zf) goto L_12466774;
  /* 1246676d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1246676f jmp 0x12466a56 */
  goto L_12466a56;
L_12466774:;
  /* 12466774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466777 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1246677a cmp ecx, dword ptr [0x12482e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12482e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466780 jne 0x12466794 */
  if (!C.zf) goto L_12466794;
  /* 12466782 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466785 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12466788 cmp eax, dword ptr [0x12482e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12482e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246678e je 0x1246695b */
  if (C.zf) goto L_1246695b;
L_12466794:;
  /* 12466794 cmp dword ptr [0x12483af8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483af8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246679b je 0x12466915 */
  if (C.zf) goto L_12466915;
  /* 124667a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124667a3 mov cx, word ptr [0x12483b98] */
  CX = (r16((uint32_t)(0x12483b98)));
  /* 124667aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124667ac jne 0x12466809 */
  if (!C.zf) goto L_12466809;
  /* 124667ae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124667b0 mov dx, word ptr [0x12483ba6] */
  DX = (r16((uint32_t)(0x12483ba6)));
  /* 124667b7 push edx */
  push32((uint32_t)(EDX));
  /* 124667b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124667ba mov ax, word ptr [0x12483ba4] */
  AX = (r16((uint32_t)(0x12483ba4)));
  /* 124667c0 push eax */
  push32((uint32_t)(EAX));
  /* 124667c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124667c3 mov cx, word ptr [0x12483ba2] */
  CX = (r16((uint32_t)(0x12483ba2)));
  /* 124667ca push ecx */
  push32((uint32_t)(ECX));
  /* 124667cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124667cd mov dx, word ptr [0x12483ba0] */
  DX = (r16((uint32_t)(0x12483ba0)));
  /* 124667d4 push edx */
  push32((uint32_t)(EDX));
  /* 124667d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124667d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124667d9 mov ax, word ptr [0x12483b9c] */
  AX = (r16((uint32_t)(0x12483b9c)));
  /* 124667df push eax */
  push32((uint32_t)(EAX));
  /* 124667e0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124667e2 mov cx, word ptr [0x12483b9e] */
  CX = (r16((uint32_t)(0x12483b9e)));
  /* 124667e9 push ecx */
  push32((uint32_t)(ECX));
  /* 124667ea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124667ec mov dx, word ptr [0x12483b9a] */
  DX = (r16((uint32_t)(0x12483b9a)));
  /* 124667f3 push edx */
  push32((uint32_t)(EDX));
  /* 124667f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124667f7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 124667fa push ecx */
  push32((uint32_t)(ECX));
  /* 124667fb push 1 */
  push32((uint32_t)(0x1u));
  /* 124667fd push 1 */
  push32((uint32_t)(0x1u));
  /* 124667ff call 0x12466a60 */
  push32(0x12466804u); f_12466a60();
  /* 12466804 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12466807 jmp 0x1246685a */
  goto L_1246685a;
L_12466809:;
  /* 12466809 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1246680b mov dx, word ptr [0x12483ba6] */
  DX = (r16((uint32_t)(0x12483ba6)));
  /* 12466812 push edx */
  push32((uint32_t)(EDX));
  /* 12466813 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12466815 mov ax, word ptr [0x12483ba4] */
  AX = (r16((uint32_t)(0x12483ba4)));
  /* 1246681b push eax */
  push32((uint32_t)(EAX));
  /* 1246681c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1246681e mov cx, word ptr [0x12483ba2] */
  CX = (r16((uint32_t)(0x12483ba2)));
  /* 12466825 push ecx */
  push32((uint32_t)(ECX));
  /* 12466826 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12466828 mov dx, word ptr [0x12483ba0] */
  DX = (r16((uint32_t)(0x12483ba0)));
  /* 1246682f push edx */
  push32((uint32_t)(EDX));
  /* 12466830 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12466832 mov ax, word ptr [0x12483b9e] */
  AX = (r16((uint32_t)(0x12483b9e)));
  /* 12466838 push eax */
  push32((uint32_t)(EAX));
  /* 12466839 push 0 */
  push32((uint32_t)(0x0u));
  /* 1246683b push 0 */
  push32((uint32_t)(0x0u));
  /* 1246683d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1246683f mov cx, word ptr [0x12483b9a] */
  CX = (r16((uint32_t)(0x12483b9a)));
  /* 12466846 push ecx */
  push32((uint32_t)(ECX));
  /* 12466847 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246684a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1246684d push eax */
  push32((uint32_t)(EAX));
  /* 1246684e push 0 */
  push32((uint32_t)(0x0u));
  /* 12466850 push 1 */
  push32((uint32_t)(0x1u));
  /* 12466852 call 0x12466a60 */
  push32(0x12466857u); f_12466a60();
  /* 12466857 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1246685a:;
  /* 1246685a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1246685c mov cx, word ptr [0x12483b44] */
  CX = (r16((uint32_t)(0x12483b44)));
  /* 12466863 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12466865 jne 0x124668c2 */
  if (!C.zf) goto L_124668c2;
  /* 12466867 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12466869 mov dx, word ptr [0x12483b52] */
  DX = (r16((uint32_t)(0x12483b52)));
  /* 12466870 push edx */
  push32((uint32_t)(EDX));
  /* 12466871 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12466873 mov ax, word ptr [0x12483b50] */
  AX = (r16((uint32_t)(0x12483b50)));
  /* 12466879 push eax */
  push32((uint32_t)(EAX));
  /* 1246687a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1246687c mov cx, word ptr [0x12483b4e] */
  CX = (r16((uint32_t)(0x12483b4e)));
  /* 12466883 push ecx */
  push32((uint32_t)(ECX));
  /* 12466884 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12466886 mov dx, word ptr [0x12483b4c] */
  DX = (r16((uint32_t)(0x12483b4c)));
  /* 1246688d push edx */
  push32((uint32_t)(EDX));
  /* 1246688e push 0 */
  push32((uint32_t)(0x0u));
  /* 12466890 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12466892 mov ax, word ptr [0x12483b48] */
  AX = (r16((uint32_t)(0x12483b48)));
  /* 12466898 push eax */
  push32((uint32_t)(EAX));
  /* 12466899 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1246689b mov cx, word ptr [0x12483b4a] */
  CX = (r16((uint32_t)(0x12483b4a)));
  /* 124668a2 push ecx */
  push32((uint32_t)(ECX));
  /* 124668a3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124668a5 mov dx, word ptr [0x12483b46] */
  DX = (r16((uint32_t)(0x12483b46)));
  /* 124668ac push edx */
  push32((uint32_t)(EDX));
  /* 124668ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124668b0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 124668b3 push ecx */
  push32((uint32_t)(ECX));
  /* 124668b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 124668b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124668b8 call 0x12466a60 */
  push32(0x124668bdu); f_12466a60();
  /* 124668bd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124668c0 jmp 0x12466913 */
  goto L_12466913;
L_124668c2:;
  /* 124668c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124668c4 mov dx, word ptr [0x12483b52] */
  DX = (r16((uint32_t)(0x12483b52)));
  /* 124668cb push edx */
  push32((uint32_t)(EDX));
  /* 124668cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124668ce mov ax, word ptr [0x12483b50] */
  AX = (r16((uint32_t)(0x12483b50)));
  /* 124668d4 push eax */
  push32((uint32_t)(EAX));
  /* 124668d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124668d7 mov cx, word ptr [0x12483b4e] */
  CX = (r16((uint32_t)(0x12483b4e)));
  /* 124668de push ecx */
  push32((uint32_t)(ECX));
  /* 124668df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124668e1 mov dx, word ptr [0x12483b4c] */
  DX = (r16((uint32_t)(0x12483b4c)));
  /* 124668e8 push edx */
  push32((uint32_t)(EDX));
  /* 124668e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124668eb mov ax, word ptr [0x12483b4a] */
  AX = (r16((uint32_t)(0x12483b4a)));
  /* 124668f1 push eax */
  push32((uint32_t)(EAX));
  /* 124668f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124668f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124668f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124668f8 mov cx, word ptr [0x12483b46] */
  CX = (r16((uint32_t)(0x12483b46)));
  /* 124668ff push ecx */
  push32((uint32_t)(ECX));
  /* 12466900 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466903 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12466906 push eax */
  push32((uint32_t)(EAX));
  /* 12466907 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466909 push 0 */
  push32((uint32_t)(0x0u));
  /* 1246690b call 0x12466a60 */
  push32(0x12466910u); f_12466a60();
  /* 12466910 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12466913:;
  /* 12466913 jmp 0x1246695b */
  goto L_1246695b;
L_12466915:;
  /* 12466915 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466917 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466919 push 0 */
  push32((uint32_t)(0x0u));
  /* 1246691b push 2 */
  push32((uint32_t)(0x2u));
  /* 1246691d push 0 */
  push32((uint32_t)(0x0u));
  /* 1246691f push 0 */
  push32((uint32_t)(0x0u));
  /* 12466921 push 1 */
  push32((uint32_t)(0x1u));
  /* 12466923 push 4 */
  push32((uint32_t)(0x4u));
  /* 12466925 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466928 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1246692b push edx */
  push32((uint32_t)(EDX));
  /* 1246692c push 1 */
  push32((uint32_t)(0x1u));
  /* 1246692e push 1 */
  push32((uint32_t)(0x1u));
  /* 12466930 call 0x12466a60 */
  push32(0x12466935u); f_12466a60();
  /* 12466935 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12466938 push 0 */
  push32((uint32_t)(0x0u));
  /* 1246693a push 0 */
  push32((uint32_t)(0x0u));
  /* 1246693c push 0 */
  push32((uint32_t)(0x0u));
  /* 1246693e push 2 */
  push32((uint32_t)(0x2u));
  /* 12466940 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466942 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466944 push 5 */
  push32((uint32_t)(0x5u));
  /* 12466946 push 0xa */
  push32((uint32_t)(0xau));
  /* 12466948 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246694b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1246694e push ecx */
  push32((uint32_t)(ECX));
  /* 1246694f push 1 */
  push32((uint32_t)(0x1u));
  /* 12466951 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466953 call 0x12466a60 */
  push32(0x12466958u); f_12466a60();
  /* 12466958 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1246695b:;
  /* 1246695b mov edx, dword ptr [0x12482e2c] */
  EDX = (r32((uint32_t)(0x12482e2c)));
  /* 12466961 cmp edx, dword ptr [0x12482e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12482e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466967 jge 0x124669b4 */
  if ((C.sf==C.of)) goto L_124669b4;
  /* 12466969 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246696c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1246696f cmp ecx, dword ptr [0x12482e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12482e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466975 jl 0x12466985 */
  if ((C.sf!=C.of)) goto L_12466985;
  /* 12466977 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246697a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1246697d cmp eax, dword ptr [0x12482e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12482e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466983 jle 0x1246698c */
  if ((C.zf||C.sf!=C.of)) goto L_1246698c;
L_12466985:;
  /* 12466985 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12466987 jmp 0x12466a56 */
  goto L_12466a56;
L_1246698c:;
  /* 1246698c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246698f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12466992 cmp edx, dword ptr [0x12482e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12482e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466998 jle 0x124669b2 */
  if ((C.zf||C.sf!=C.of)) goto L_124669b2;
  /* 1246699a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246699d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 124669a0 cmp ecx, dword ptr [0x12482e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12482e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124669a6 jge 0x124669b2 */
  if ((C.sf==C.of)) goto L_124669b2;
  /* 124669a8 mov eax, 1 */
  EAX = (0x1u);
  /* 124669ad jmp 0x12466a56 */
  goto L_12466a56;
L_124669b2:;
  /* 124669b2 jmp 0x124669f7 */
  goto L_124669f7;
L_124669b4:;
  /* 124669b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124669b7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124669ba cmp eax, dword ptr [0x12482e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12482e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124669c0 jl 0x124669d0 */
  if ((C.sf!=C.of)) goto L_124669d0;
  /* 124669c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124669c5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 124669c8 cmp edx, dword ptr [0x12482e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12482e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124669ce jle 0x124669d7 */
  if ((C.zf||C.sf!=C.of)) goto L_124669d7;
L_124669d0:;
  /* 124669d0 mov eax, 1 */
  EAX = (0x1u);
  /* 124669d5 jmp 0x12466a56 */
  goto L_12466a56;
L_124669d7:;
  /* 124669d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124669da mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 124669dd cmp ecx, dword ptr [0x12482e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12482e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124669e3 jle 0x124669f7 */
  if ((C.zf||C.sf!=C.of)) goto L_124669f7;
  /* 124669e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124669e8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124669eb cmp eax, dword ptr [0x12482e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12482e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124669f1 jge 0x124669f7 */
  if ((C.sf==C.of)) goto L_124669f7;
  /* 124669f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124669f5 jmp 0x12466a56 */
  goto L_12466a56;
L_124669f7:;
  /* 124669f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124669fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124669fd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12466a00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466a03 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12466a05 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466a07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466a0a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12466a0d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12466a13 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466a15 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12466a1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12466a1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466a21 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12466a24 cmp edx, dword ptr [0x12482e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12482e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466a2a jne 0x12466a42 */
  if (!C.zf) goto L_12466a42;
  /* 12466a2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12466a2f cmp eax, dword ptr [0x12482e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12482e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466a35 jl 0x12466a3e */
  if ((C.sf!=C.of)) goto L_12466a3e;
  /* 12466a37 mov eax, 1 */
  EAX = (0x1u);
  /* 12466a3c jmp 0x12466a56 */
  goto L_12466a56;
L_12466a3e:;
  /* 12466a3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12466a40 jmp 0x12466a56 */
  goto L_12466a56;
L_12466a42:;
  /* 12466a42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12466a45 cmp ecx, dword ptr [0x12482e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12482e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466a4b jge 0x12466a54 */
  if ((C.sf==C.of)) goto L_12466a54;
  /* 12466a4d mov eax, 1 */
  EAX = (0x1u);
  /* 12466a52 jmp 0x12466a56 */
  goto L_12466a56;
L_12466a54:;
  /* 12466a54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12466a56:;
  /* 12466a56 mov esp, ebp */
  ESP = (EBP);
  /* 12466a58 pop ebp */
  EBP = (pop32());
  /* 12466a59 ret  */
  ESPCHK(0x12466760u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a60 @ 0x12466a60 (504 bytes, 145 insns) */
void f_12466a60(void) {
  FTRACE(0x12466a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12466a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12466a61 mov ebp, esp */
  EBP = (ESP);
  /* 12466a63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12466a66 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466a6a jne 0x12466b3c */
  if (!C.zf) goto L_12466b3c;
  /* 12466a70 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12466a73 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12466a76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12466a78 jne 0x12466a89 */
  if (!C.zf) goto L_12466a89;
  /* 12466a7a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12466a7d mov edx, dword ptr [ecx*4 + 0x12482e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12482e4c)));
  /* 12466a84 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12466a87 jmp 0x12466a96 */
  goto L_12466a96;
L_12466a89:;
  /* 12466a89 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12466a8c mov ecx, dword ptr [eax*4 + 0x12482e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12482e80)));
  /* 12466a93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12466a96:;
  /* 12466a96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12466a99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466a9c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12466a9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12466aa2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12466aa5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12466aab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12466aae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466ab0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12466ab3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12466ab6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12466ab9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12466abd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12466abe mov ecx, 7 */
  ECX = (0x7u);
  /* 12466ac3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12466ac5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12466ac8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12466acb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466ace jge 0x12466ae9 */
  if ((C.sf==C.of)) goto L_12466ae9;
  /* 12466ad0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12466ad3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12466ad6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12466ad9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12466adc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12466adf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466ae2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466ae4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12466ae7 jmp 0x12466afd */
  goto L_12466afd;
L_12466ae9:;
  /* 12466ae9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12466aec sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12466aef mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12466af2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12466af5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466af8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466afa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12466afd:;
  /* 12466afd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466b01 jne 0x12466b3a */
  if (!C.zf) goto L_12466b3a;
  /* 12466b03 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12466b06 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12466b09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12466b0b jne 0x12466b1c */
  if (!C.zf) goto L_12466b1c;
  /* 12466b0d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12466b10 mov eax, dword ptr [edx*4 + 0x12482e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12482e50)));
  /* 12466b17 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12466b1a jmp 0x12466b29 */
  goto L_12466b29;
L_12466b1c:;
  /* 12466b1c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12466b1f mov edx, dword ptr [ecx*4 + 0x12482e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12482e84)));
  /* 12466b26 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12466b29:;
  /* 12466b29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12466b2c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466b2f jle 0x12466b3a */
  if ((C.zf||C.sf!=C.of)) goto L_12466b3a;
  /* 12466b31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12466b34 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12466b37 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12466b3a:;
  /* 12466b3a jmp 0x12466b71 */
  goto L_12466b71;
L_12466b3c:;
  /* 12466b3c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12466b3f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12466b42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12466b44 jne 0x12466b55 */
  if (!C.zf) goto L_12466b55;
  /* 12466b46 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12466b49 mov ecx, dword ptr [eax*4 + 0x12482e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12482e4c)));
  /* 12466b50 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12466b53 jmp 0x12466b62 */
  goto L_12466b62;
L_12466b55:;
  /* 12466b55 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12466b58 mov eax, dword ptr [edx*4 + 0x12482e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12482e80)));
  /* 12466b5f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12466b62:;
  /* 12466b62 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12466b65 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12466b68 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12466b6b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466b6e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12466b71:;
  /* 12466b71 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466b75 jne 0x12466bb1 */
  if (!C.zf) goto L_12466bb1;
  /* 12466b77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12466b7a mov dword ptr [0x12482e2c], eax */
  w32((uint32_t)(0x12482e2c), (EAX));
  /* 12466b7f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12466b82 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12466b85 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12466b88 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466b8a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12466b8d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12466b90 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466b92 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12466b98 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12466b9b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466b9d mov dword ptr [0x12482e30], ecx */
  w32((uint32_t)(0x12482e30), (ECX));
  /* 12466ba3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12466ba6 mov dword ptr [0x12482e28], edx */
  w32((uint32_t)(0x12482e28), (EDX));
  /* 12466bac jmp 0x12466c54 */
  goto L_12466c54;
L_12466bb1:;
  /* 12466bb1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12466bb4 mov dword ptr [0x12482e3c], eax */
  w32((uint32_t)(0x12482e3c), (EAX));
  /* 12466bb9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12466bbc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12466bbf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12466bc2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466bc4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12466bc7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12466bca add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466bcc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12466bd2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12466bd5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466bd7 mov dword ptr [0x12482e40], ecx */
  w32((uint32_t)(0x12482e40), (ECX));
  /* 12466bdd mov edx, dword ptr [0x12482d98] */
  EDX = (r32((uint32_t)(0x12482d98)));
  /* 12466be3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12466be9 mov eax, dword ptr [0x12482e40] */
  EAX = (r32((uint32_t)(0x12482e40)));
  /* 12466bee add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466bf0 mov dword ptr [0x12482e40], eax */
  w32((uint32_t)(0x12482e40), (EAX));
  /* 12466bf5 cmp dword ptr [0x12482e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12482e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466bfc jge 0x12466c21 */
  if ((C.sf==C.of)) goto L_12466c21;
  /* 12466bfe mov ecx, dword ptr [0x12482e40] */
  ECX = (r32((uint32_t)(0x12482e40)));
  /* 12466c04 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466c0a mov dword ptr [0x12482e40], ecx */
  w32((uint32_t)(0x12482e40), (ECX));
  /* 12466c10 mov edx, dword ptr [0x12482e3c] */
  EDX = (r32((uint32_t)(0x12482e3c)));
  /* 12466c16 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12466c19 mov dword ptr [0x12482e3c], edx */
  w32((uint32_t)(0x12482e3c), (EDX));
  /* 12466c1f jmp 0x12466c4b */
  goto L_12466c4b;
L_12466c21:;
  /* 12466c21 cmp dword ptr [0x12482e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12482e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466c2b jl 0x12466c4b */
  if ((C.sf!=C.of)) goto L_12466c4b;
  /* 12466c2d mov eax, dword ptr [0x12482e40] */
  EAX = (r32((uint32_t)(0x12482e40)));
  /* 12466c32 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12466c37 mov dword ptr [0x12482e40], eax */
  w32((uint32_t)(0x12482e40), (EAX));
  /* 12466c3c mov ecx, dword ptr [0x12482e3c] */
  ECX = (r32((uint32_t)(0x12482e3c)));
  /* 12466c42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466c45 mov dword ptr [0x12482e3c], ecx */
  w32((uint32_t)(0x12482e3c), (ECX));
L_12466c4b:;
  /* 12466c4b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12466c4e mov dword ptr [0x12482e38], edx */
  w32((uint32_t)(0x12482e38), (EDX));
L_12466c54:;
  /* 12466c54 mov esp, ebp */
  ESP = (EBP);
  /* 12466c56 pop ebp */
  EBP = (pop32());
  /* 12466c57 ret  */
  ESPCHK(0x12466a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10016c60 @ 0x12466c60 (382 bytes, 135 insns) */
void f_12466c60(void) {
  FTRACE(0x12466c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12466c60 push ebp */
  push32((uint32_t)(EBP));
  /* 12466c61 mov ebp, esp */
  EBP = (ESP);
  /* 12466c63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12466c65 push 0x12480000 */
  push32((uint32_t)(0x12480000u));
  /* 12466c6a push 0x12460928 */
  push32((uint32_t)(0x12460928u));
  /* 12466c6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12466c75 push eax */
  push32((uint32_t)(EAX));
  /* 12466c76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12466c7d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12466c80 push ebx */
  push32((uint32_t)(EBX));
  /* 12466c81 push esi */
  push32((uint32_t)(ESI));
  /* 12466c82 push edi */
  push32((uint32_t)(EDI));
  /* 12466c83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12466c86 cmp dword ptr [0x12483bb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483bb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466c8d jne 0x12466cd2 */
  if (!C.zf) goto L_12466cd2;
  /* 12466c8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12466c91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466c93 push 1 */
  push32((uint32_t)(0x1u));
  /* 12466c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466c97 call dword ptr [0x124862b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862b4))), 0x12466c9du);
  /* 12466c9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12466c9f je 0x12466cad */
  if (C.zf) goto L_12466cad;
  /* 12466ca1 mov dword ptr [0x12483bb4], 1 */
  w32((uint32_t)(0x12483bb4), (0x1u));
  /* 12466cab jmp 0x12466cd2 */
  goto L_12466cd2;
L_12466cad:;
  /* 12466cad push 0 */
  push32((uint32_t)(0x0u));
  /* 12466caf push 0 */
  push32((uint32_t)(0x0u));
  /* 12466cb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12466cb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466cb5 call dword ptr [0x124862cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862cc))), 0x12466cbbu);
  /* 12466cbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12466cbd je 0x12466ccb */
  if (C.zf) goto L_12466ccb;
  /* 12466cbf mov dword ptr [0x12483bb4], 2 */
  w32((uint32_t)(0x12483bb4), (0x2u));
  /* 12466cc9 jmp 0x12466cd2 */
  goto L_12466cd2;
L_12466ccb:;
  /* 12466ccb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12466ccd jmp 0x12466de1 */
  goto L_12466de1;
L_12466cd2:;
  /* 12466cd2 cmp dword ptr [0x12483bb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12483bb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466cd9 jne 0x12466cf6 */
  if (!C.zf) goto L_12466cf6;
  /* 12466cdb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12466cde push eax */
  push32((uint32_t)(EAX));
  /* 12466cdf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12466ce2 push ecx */
  push32((uint32_t)(ECX));
  /* 12466ce3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12466ce6 push edx */
  push32((uint32_t)(EDX));
  /* 12466ce7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466cea push eax */
  push32((uint32_t)(EAX));
  /* 12466ceb call dword ptr [0x124862b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862b4))), 0x12466cf1u);
  /* 12466cf1 jmp 0x12466de1 */
  goto L_12466de1;
L_12466cf6:;
  /* 12466cf6 cmp dword ptr [0x12483bb4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12483bb4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466cfd jne 0x12466ddf */
  if (!C.zf) goto L_12466ddf;
  /* 12466d03 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466d07 jne 0x12466d12 */
  if (!C.zf) goto L_12466d12;
  /* 12466d09 mov ecx, dword ptr [0x12483a68] */
  ECX = (r32((uint32_t)(0x12483a68)));
  /* 12466d0f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12466d12:;
  /* 12466d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466d16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12466d19 push edx */
  push32((uint32_t)(EDX));
  /* 12466d1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466d1d push eax */
  push32((uint32_t)(EAX));
  /* 12466d1e call dword ptr [0x124862cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862cc))), 0x12466d24u);
  /* 12466d24 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12466d27 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466d2b jne 0x12466d34 */
  if (!C.zf) goto L_12466d34;
  /* 12466d2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12466d2f jmp 0x12466de1 */
  goto L_12466de1;
L_12466d34:;
  /* 12466d34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12466d3b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12466d3e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466d41 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12466d43 call 0x1245a9c0 */
  push32(0x12466d48u); f_1245a9c0();
  /* 12466d48 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12466d4b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12466d4e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12466d51 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12466d54 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12466d5b jmp 0x12466d74 */
  goto L_12466d74;
  /* 12466d5d mov eax, 1 */
  EAX = (0x1u);
  /* 12466d62 ret  */
  ESPCHK(0x12466c60u, _esp0);
  ESP += 4; return;
  /* 12466d63 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12466d66 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12466d6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12466d74:;
  /* 12466d74 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466d78 jne 0x12466d7e */
  if (!C.zf) goto L_12466d7e;
  /* 12466d7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12466d7c jmp 0x12466de1 */
  goto L_12466de1;
L_12466d7e:;
  /* 12466d7e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12466d81 push edx */
  push32((uint32_t)(EDX));
  /* 12466d82 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12466d85 push eax */
  push32((uint32_t)(EAX));
  /* 12466d86 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12466d89 push ecx */
  push32((uint32_t)(ECX));
  /* 12466d8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466d8d push edx */
  push32((uint32_t)(EDX));
  /* 12466d8e call dword ptr [0x124862cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862cc))), 0x12466d94u);
  /* 12466d94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12466d96 jne 0x12466d9c */
  if (!C.zf) goto L_12466d9c;
  /* 12466d98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12466d9a jmp 0x12466de1 */
  goto L_12466de1;
L_12466d9c:;
  /* 12466d9c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466da0 jne 0x12466dbd */
  if (!C.zf) goto L_12466dbd;
  /* 12466da2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466da4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466da6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12466da8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12466dab push eax */
  push32((uint32_t)(EAX));
  /* 12466dac push 1 */
  push32((uint32_t)(0x1u));
  /* 12466dae mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12466db1 push ecx */
  push32((uint32_t)(ECX));
  /* 12466db2 call dword ptr [0x124862fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862fc))), 0x12466db8u);
  /* 12466db8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12466dbb jmp 0x12466dda */
  goto L_12466dda;
L_12466dbd:;
  /* 12466dbd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12466dc0 push edx */
  push32((uint32_t)(EDX));
  /* 12466dc1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12466dc4 push eax */
  push32((uint32_t)(EAX));
  /* 12466dc5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12466dc7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12466dca push ecx */
  push32((uint32_t)(ECX));
  /* 12466dcb push 1 */
  push32((uint32_t)(0x1u));
  /* 12466dcd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12466dd0 push edx */
  push32((uint32_t)(EDX));
  /* 12466dd1 call dword ptr [0x124862fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862fc))), 0x12466dd7u);
  /* 12466dd7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12466dda:;
  /* 12466dda mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12466ddd jmp 0x12466de1 */
  goto L_12466de1;
L_12466ddf:;
  /* 12466ddf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12466de1:;
  /* 12466de1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12466de4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12466de7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12466dee pop edi */
  EDI = (pop32());
  /* 12466def pop esi */
  ESI = (pop32());
  /* 12466df0 pop ebx */
  EBX = (pop32());
  /* 12466df1 mov esp, ebp */
  ESP = (EBP);
  /* 12466df3 pop ebp */
  EBP = (pop32());
  /* 12466df4 ret  */
  ESPCHK(0x12466c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10016e00 @ 0x12466e00 (398 bytes, 140 insns) */
void f_12466e00(void) {
  FTRACE(0x12466e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12466e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12466e01 mov ebp, esp */
  EBP = (ESP);
  /* 12466e03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12466e05 push 0x12480010 */
  push32((uint32_t)(0x12480010u));
  /* 12466e0a push 0x12460928 */
  push32((uint32_t)(0x12460928u));
  /* 12466e0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12466e15 push eax */
  push32((uint32_t)(EAX));
  /* 12466e16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12466e1d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12466e20 push ebx */
  push32((uint32_t)(EBX));
  /* 12466e21 push esi */
  push32((uint32_t)(ESI));
  /* 12466e22 push edi */
  push32((uint32_t)(EDI));
  /* 12466e23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12466e26 cmp dword ptr [0x12483bb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483bb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466e2d jne 0x12466e72 */
  if (!C.zf) goto L_12466e72;
  /* 12466e2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12466e31 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466e33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12466e35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466e37 call dword ptr [0x124862b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862b4))), 0x12466e3du);
  /* 12466e3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12466e3f je 0x12466e4d */
  if (C.zf) goto L_12466e4d;
  /* 12466e41 mov dword ptr [0x12483bb8], 1 */
  w32((uint32_t)(0x12483bb8), (0x1u));
  /* 12466e4b jmp 0x12466e72 */
  goto L_12466e72;
L_12466e4d:;
  /* 12466e4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12466e4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12466e51 push 1 */
  push32((uint32_t)(0x1u));
  /* 12466e53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466e55 call dword ptr [0x124862cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862cc))), 0x12466e5bu);
  /* 12466e5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12466e5d je 0x12466e6b */
  if (C.zf) goto L_12466e6b;
  /* 12466e5f mov dword ptr [0x12483bb8], 2 */
  w32((uint32_t)(0x12483bb8), (0x2u));
  /* 12466e69 jmp 0x12466e72 */
  goto L_12466e72;
L_12466e6b:;
  /* 12466e6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12466e6d jmp 0x12466f91 */
  goto L_12466f91;
L_12466e72:;
  /* 12466e72 cmp dword ptr [0x12483bb8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12483bb8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466e79 jne 0x12466e96 */
  if (!C.zf) goto L_12466e96;
  /* 12466e7b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12466e7e push eax */
  push32((uint32_t)(EAX));
  /* 12466e7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12466e82 push ecx */
  push32((uint32_t)(ECX));
  /* 12466e83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12466e86 push edx */
  push32((uint32_t)(EDX));
  /* 12466e87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466e8a push eax */
  push32((uint32_t)(EAX));
  /* 12466e8b call dword ptr [0x124862cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862cc))), 0x12466e91u);
  /* 12466e91 jmp 0x12466f91 */
  goto L_12466f91;
L_12466e96:;
  /* 12466e96 cmp dword ptr [0x12483bb8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12483bb8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466e9d jne 0x12466f8f */
  if (!C.zf) goto L_12466f8f;
  /* 12466ea3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466ea7 jne 0x12466eb2 */
  if (!C.zf) goto L_12466eb2;
  /* 12466ea9 mov ecx, dword ptr [0x12483a68] */
  ECX = (r32((uint32_t)(0x12483a68)));
  /* 12466eaf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12466eb2:;
  /* 12466eb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466eb6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12466eb9 push edx */
  push32((uint32_t)(EDX));
  /* 12466eba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466ebd push eax */
  push32((uint32_t)(EAX));
  /* 12466ebe call dword ptr [0x124862b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862b4))), 0x12466ec4u);
  /* 12466ec4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12466ec7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466ecb jne 0x12466ed4 */
  if (!C.zf) goto L_12466ed4;
  /* 12466ecd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12466ecf jmp 0x12466f91 */
  goto L_12466f91;
L_12466ed4:;
  /* 12466ed4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12466edb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12466ede shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12466ee0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466ee3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12466ee5 call 0x1245a9c0 */
  push32(0x12466eeau); f_1245a9c0();
  /* 12466eea mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12466eed mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12466ef0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12466ef3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12466ef6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12466efd jmp 0x12466f16 */
  goto L_12466f16;
  /* 12466eff mov eax, 1 */
  EAX = (0x1u);
  /* 12466f04 ret  */
  ESPCHK(0x12466e00u, _esp0);
  ESP += 4; return;
  /* 12466f05 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12466f08 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12466f0f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12466f16:;
  /* 12466f16 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466f1a jne 0x12466f20 */
  if (!C.zf) goto L_12466f20;
  /* 12466f1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12466f1e jmp 0x12466f91 */
  goto L_12466f91;
L_12466f20:;
  /* 12466f20 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12466f23 push edx */
  push32((uint32_t)(EDX));
  /* 12466f24 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12466f27 push eax */
  push32((uint32_t)(EAX));
  /* 12466f28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12466f2b push ecx */
  push32((uint32_t)(ECX));
  /* 12466f2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466f2f push edx */
  push32((uint32_t)(EDX));
  /* 12466f30 call dword ptr [0x124862b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862b4))), 0x12466f36u);
  /* 12466f36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12466f38 jne 0x12466f3e */
  if (!C.zf) goto L_12466f3e;
  /* 12466f3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12466f3c jmp 0x12466f91 */
  goto L_12466f91;
L_12466f3e:;
  /* 12466f3e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466f42 jne 0x12466f66 */
  if (!C.zf) goto L_12466f66;
  /* 12466f44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466f46 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466f48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466f4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12466f4c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12466f4e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12466f51 push eax */
  push32((uint32_t)(EAX));
  /* 12466f52 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12466f57 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12466f5a push ecx */
  push32((uint32_t)(ECX));
  /* 12466f5b call dword ptr [0x124863b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863b0))), 0x12466f61u);
  /* 12466f61 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12466f64 jmp 0x12466f8a */
  goto L_12466f8a;
L_12466f66:;
  /* 12466f66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466f68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12466f6a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12466f6d push edx */
  push32((uint32_t)(EDX));
  /* 12466f6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12466f71 push eax */
  push32((uint32_t)(EAX));
  /* 12466f72 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12466f74 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12466f77 push ecx */
  push32((uint32_t)(ECX));
  /* 12466f78 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12466f7d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12466f80 push edx */
  push32((uint32_t)(EDX));
  /* 12466f81 call dword ptr [0x124863b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863b0))), 0x12466f87u);
  /* 12466f87 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12466f8a:;
  /* 12466f8a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12466f8d jmp 0x12466f91 */
  goto L_12466f91;
L_12466f8f:;
  /* 12466f8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12466f91:;
  /* 12466f91 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12466f94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12466f97 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12466f9e pop edi */
  EDI = (pop32());
  /* 12466f9f pop esi */
  ESI = (pop32());
  /* 12466fa0 pop ebx */
  EBX = (pop32());
  /* 12466fa1 mov esp, ebp */
  ESP = (EBP);
  /* 12466fa3 pop ebp */
  EBP = (pop32());
  /* 12466fa4 ret  */
  ESPCHK(0x12466e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10016fb0 @ 0x12466fb0 (11 bytes, 6 insns) */
void f_12466fb0(void) {
  FTRACE(0x12466fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12466fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12466fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12466fb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466fb6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466fb9 pop ebp */
  EBP = (pop32());
  /* 12466fba ret  */
  ESPCHK(0x12466fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016fc0 @ 0x12466fc0 (147 bytes, 43 insns) */
void f_12466fc0(void) {
  FTRACE(0x12466fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12466fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12466fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12466fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12466fc4 cmp dword ptr [0x12483a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466fcb jne 0x12466fe7 */
  if (!C.zf) goto L_12466fe7;
  /* 12466fcd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466fd1 jl 0x12466fe2 */
  if ((C.sf!=C.of)) goto L_12466fe2;
  /* 12466fd3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466fd7 jg 0x12466fe2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12466fe2;
  /* 12466fd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466fdc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12466fdf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12466fe2:;
  /* 12466fe2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12466fe5 jmp 0x1246704f */
  goto L_1246704f;
L_12466fe7:;
  /* 12466fe7 push 0x12483be4 */
  push32((uint32_t)(0x12483be4u));
  /* 12466fec call dword ptr [0x1248635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248635c))), 0x12466ff2u);
  /* 12466ff2 cmp dword ptr [0x12483bd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483bd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12466ff9 je 0x12467019 */
  if (C.zf) goto L_12467019;
  /* 12466ffb push 0x12483be4 */
  push32((uint32_t)(0x12483be4u));
  /* 12467000 call dword ptr [0x1248634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248634c))), 0x12467006u);
  /* 12467006 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12467008 call 0x1245b220 */
  push32(0x1246700du); f_1245b220();
  /* 1246700d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467010 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12467017 jmp 0x12467020 */
  goto L_12467020;
L_12467019:;
  /* 12467019 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12467020:;
  /* 12467020 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467023 push ecx */
  push32((uint32_t)(ECX));
  /* 12467024 call 0x12467060 */
  push32(0x12467029u); f_12467060();
  /* 12467029 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246702c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1246702f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467033 je 0x12467041 */
  if (C.zf) goto L_12467041;
  /* 12467035 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12467037 call 0x1245b2c0 */
  push32(0x1246703cu); f_1245b2c0();
  /* 1246703c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246703f jmp 0x1246704c */
  goto L_1246704c;
L_12467041:;
  /* 12467041 push 0x12483be4 */
  push32((uint32_t)(0x12483be4u));
  /* 12467046 call dword ptr [0x1248634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248634c))), 0x1246704cu);
L_1246704c:;
  /* 1246704c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1246704f:;
  /* 1246704f mov esp, ebp */
  ESP = (EBP);
  /* 12467051 pop ebp */
  EBP = (pop32());
  /* 12467052 ret  */
  ESPCHK(0x12466fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017060 @ 0x12467060 (299 bytes, 91 insns) */
void f_12467060(void) {
  FTRACE(0x12467060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12467060 push ebp */
  push32((uint32_t)(EBP));
  /* 12467061 mov ebp, esp */
  EBP = (ESP);
  /* 12467063 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12467066 cmp dword ptr [0x12483a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246706d jne 0x1246708c */
  if (!C.zf) goto L_1246708c;
  /* 1246706f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467073 jl 0x12467084 */
  if ((C.sf!=C.of)) goto L_12467084;
  /* 12467075 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467079 jg 0x12467084 */
  if ((!C.zf&&C.sf==C.of)) goto L_12467084;
  /* 1246707b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246707e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12467081 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12467084:;
  /* 12467084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467087 jmp 0x12467187 */
  goto L_12467187;
L_1246708c:;
  /* 1246708c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467093 jge 0x124670d3 */
  if ((C.sf==C.of)) goto L_124670d3;
  /* 12467095 cmp dword ptr [0x12481ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12481ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246709c jle 0x124670b1 */
  if ((C.zf||C.sf!=C.of)) goto L_124670b1;
  /* 1246709e push 1 */
  push32((uint32_t)(0x1u));
  /* 124670a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124670a3 push ecx */
  push32((uint32_t)(ECX));
  /* 124670a4 call 0x1245d830 */
  push32(0x124670a9u); f_1245d830();
  /* 124670a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124670ac mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 124670af jmp 0x124670c5 */
  goto L_124670c5;
L_124670b1:;
  /* 124670b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124670b4 mov eax, dword ptr [0x12481c98] */
  EAX = (r32((uint32_t)(0x12481c98)));
  /* 124670b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124670bb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 124670bf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124670c2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_124670c5:;
  /* 124670c5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124670c9 jne 0x124670d3 */
  if (!C.zf) goto L_124670d3;
  /* 124670cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124670ce jmp 0x12467187 */
  goto L_12467187;
L_124670d3:;
  /* 124670d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124670d6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 124670d9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 124670df and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 124670e5 mov eax, dword ptr [0x12481c98] */
  EAX = (r32((uint32_t)(0x12481c98)));
  /* 124670ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124670ec mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 124670f0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 124670f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124670f8 je 0x1246711c */
  if (C.zf) goto L_1246711c;
  /* 124670fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124670fd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12467100 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12467106 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12467109 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1246710c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 1246710f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12467113 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1246711a jmp 0x1246712d */
  goto L_1246712d;
L_1246711c:;
  /* 1246711c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1246711f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12467122 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12467126 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1246712d:;
  /* 1246712d push 1 */
  push32((uint32_t)(0x1u));
  /* 1246712f push 0 */
  push32((uint32_t)(0x0u));
  /* 12467131 push 3 */
  push32((uint32_t)(0x3u));
  /* 12467133 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12467136 push edx */
  push32((uint32_t)(EDX));
  /* 12467137 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246713a push eax */
  push32((uint32_t)(EAX));
  /* 1246713b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1246713e push ecx */
  push32((uint32_t)(ECX));
  /* 1246713f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12467144 mov edx, dword ptr [0x12483a58] */
  EDX = (r32((uint32_t)(0x12483a58)));
  /* 1246714a push edx */
  push32((uint32_t)(EDX));
  /* 1246714b call 0x1245fc10 */
  push32(0x12467150u); f_1245fc10();
  /* 12467150 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467153 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12467156 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246715a jne 0x12467161 */
  if (!C.zf) goto L_12467161;
  /* 1246715c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1246715f jmp 0x12467187 */
  goto L_12467187;
L_12467161:;
  /* 12467161 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467165 jne 0x12467171 */
  if (!C.zf) goto L_12467171;
  /* 12467167 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246716a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1246716f jmp 0x12467187 */
  goto L_12467187;
L_12467171:;
  /* 12467171 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12467174 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12467179 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1246717c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12467182 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12467185 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12467187:;
  /* 12467187 mov esp, ebp */
  ESP = (EBP);
  /* 12467189 pop ebp */
  EBP = (pop32());
  /* 1246718a ret  */
  ESPCHK(0x12467060u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12467190 (52 bytes, 19 insns) */
void f_12467190(void) {
  FTRACE(0x12467190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12467190 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12467194 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12467198 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1246719a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1246719e jne 0x124671a9 */
  if (!C.zf) goto L_124671a9;
  /* 124671a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 124671a4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124671a6 ret 0x10 */
  ESPCHK(0x12467190u, _esp0);
  ESP += 20; return;
L_124671a9:;
  /* 124671a9 push ebx */
  push32((uint32_t)(EBX));
  /* 124671aa mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124671ac mov ebx, eax */
  EBX = (EAX);
  /* 124671ae mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 124671b2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124671b6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 124671b8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 124671bc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124671be add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124671c0 pop ebx */
  EBX = (pop32());
  /* 124671c1 ret 0x10 */
  ESPCHK(0x12467190u, _esp0);
  ESP += 20; return;
}

/* FUN_100171d0 @ 0x124671d0 (46 bytes, 18 insns) */
void f_124671d0(void) {
  FTRACE(0x124671d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124671d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124671d1 mov ebp, esp */
  EBP = (ESP);
  /* 124671d3 push ecx */
  push32((uint32_t)(ECX));
  /* 124671d4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 124671d6 call 0x1245b220 */
  push32(0x124671dbu); f_1245b220();
  /* 124671db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124671de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124671e1 push eax */
  push32((uint32_t)(EAX));
  /* 124671e2 call 0x12467200 */
  push32(0x124671e7u); f_12467200();
  /* 124671e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124671ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124671ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 124671ef call 0x1245b2c0 */
  push32(0x124671f4u); f_1245b2c0();
  /* 124671f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124671f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124671fa mov esp, ebp */
  ESP = (EBP);
  /* 124671fc pop ebp */
  EBP = (pop32());
  /* 124671fd ret  */
  ESPCHK(0x124671d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12467200 (198 bytes, 69 insns) */
void f_12467200(void) {
  FTRACE(0x12467200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12467200 push ebp */
  push32((uint32_t)(EBP));
  /* 12467201 mov ebp, esp */
  EBP = (ESP);
  /* 12467203 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12467206 mov eax, dword ptr [0x12483878] */
  EAX = (r32((uint32_t)(0x12483878)));
  /* 1246720b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1246720e cmp dword ptr [0x12485380], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12485380))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467215 jne 0x1246721e */
  if (!C.zf) goto L_1246721e;
  /* 12467217 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12467219 jmp 0x124672c2 */
  goto L_124672c2;
L_1246721e:;
  /* 1246721e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467222 jne 0x12467246 */
  if (!C.zf) goto L_12467246;
  /* 12467224 cmp dword ptr [0x12483880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246722b je 0x12467246 */
  if (C.zf) goto L_12467246;
  /* 1246722d call 0x12467320 */
  push32(0x12467232u); f_12467320();
  /* 12467232 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12467234 je 0x1246723d */
  if (C.zf) goto L_1246723d;
  /* 12467236 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12467238 jmp 0x124672c2 */
  goto L_124672c2;
L_1246723d:;
  /* 1246723d mov ecx, dword ptr [0x12483878] */
  ECX = (r32((uint32_t)(0x12483878)));
  /* 12467243 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12467246:;
  /* 12467246 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246724a je 0x124672c0 */
  if (C.zf) goto L_124672c0;
  /* 1246724c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467250 je 0x124672c0 */
  if (C.zf) goto L_124672c0;
  /* 12467252 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467255 push edx */
  push32((uint32_t)(EDX));
  /* 12467256 call 0x1245a650 */
  push32(0x1246725bu); f_1245a650();
  /* 1246725b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246725e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12467261:;
  /* 12467261 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12467264 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467267 je 0x124672c0 */
  if (C.zf) goto L_124672c0;
  /* 12467269 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1246726c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1246726e push edx */
  push32((uint32_t)(EDX));
  /* 1246726f call 0x1245a650 */
  push32(0x12467274u); f_1245a650();
  /* 12467274 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467277 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246727a jbe 0x124672b5 */
  if ((C.cf||C.zf)) goto L_124672b5;
  /* 1246727c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1246727f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12467281 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467284 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12467288 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246728b jne 0x124672b5 */
  if (!C.zf) goto L_124672b5;
  /* 1246728d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467290 push ecx */
  push32((uint32_t)(ECX));
  /* 12467291 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467294 push edx */
  push32((uint32_t)(EDX));
  /* 12467295 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12467298 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1246729a push ecx */
  push32((uint32_t)(ECX));
  /* 1246729b call 0x124672d0 */
  push32(0x124672a0u); f_124672d0();
  /* 124672a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124672a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124672a5 jne 0x124672b5 */
  if (!C.zf) goto L_124672b5;
  /* 124672a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124672aa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124672ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124672af lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 124672b3 jmp 0x124672c2 */
  goto L_124672c2;
L_124672b5:;
  /* 124672b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124672b8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124672bb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124672be jmp 0x12467261 */
  goto L_12467261;
L_124672c0:;
  /* 124672c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124672c2:;
  /* 124672c2 mov esp, ebp */
  ESP = (EBP);
  /* 124672c4 pop ebp */
  EBP = (pop32());
  /* 124672c5 ret  */
  ESPCHK(0x12467200u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x124672d0 (79 bytes, 32 insns) */
void f_124672d0(void) {
  FTRACE(0x124672d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124672d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124672d1 mov ebp, esp */
  EBP = (ESP);
  /* 124672d3 push ecx */
  push32((uint32_t)(ECX));
  /* 124672d4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124672d8 jne 0x124672de */
  if (!C.zf) goto L_124672de;
  /* 124672da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124672dc jmp 0x1246731b */
  goto L_1246731b;
L_124672de:;
  /* 124672de mov eax, dword ptr [0x12484f44] */
  EAX = (r32((uint32_t)(0x12484f44)));
  /* 124672e3 push eax */
  push32((uint32_t)(EAX));
  /* 124672e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124672e7 push ecx */
  push32((uint32_t)(ECX));
  /* 124672e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124672eb push edx */
  push32((uint32_t)(EDX));
  /* 124672ec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124672ef push eax */
  push32((uint32_t)(EAX));
  /* 124672f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124672f3 push ecx */
  push32((uint32_t)(ECX));
  /* 124672f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 124672f6 mov edx, dword ptr [0x124851e4] */
  EDX = (r32((uint32_t)(0x124851e4)));
  /* 124672fc push edx */
  push32((uint32_t)(EDX));
  /* 124672fd call 0x124673d0 */
  push32(0x12467302u); f_124673d0();
  /* 12467302 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467305 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12467308 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246730c jne 0x12467315 */
  if (!C.zf) goto L_12467315;
  /* 1246730e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12467313 jmp 0x1246731b */
  goto L_1246731b;
L_12467315:;
  /* 12467315 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467318 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1246731b:;
  /* 1246731b mov esp, ebp */
  ESP = (EBP);
  /* 1246731d pop ebp */
  EBP = (pop32());
  /* 1246731e ret  */
  ESPCHK(0x124672d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017320 @ 0x12467320 (174 bytes, 66 insns) */
void f_12467320(void) {
  FTRACE(0x12467320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12467320 push ebp */
  push32((uint32_t)(EBP));
  /* 12467321 mov ebp, esp */
  EBP = (ESP);
  /* 12467323 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12467326 mov eax, dword ptr [0x12483880] */
  EAX = (r32((uint32_t)(0x12483880)));
  /* 1246732b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1246732e:;
  /* 1246732e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467331 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467334 je 0x124673c8 */
  if (C.zf) goto L_124673c8;
  /* 1246733a push 0 */
  push32((uint32_t)(0x0u));
  /* 1246733c push 0 */
  push32((uint32_t)(0x0u));
  /* 1246733e push 0 */
  push32((uint32_t)(0x0u));
  /* 12467340 push 0 */
  push32((uint32_t)(0x0u));
  /* 12467342 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12467344 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467347 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12467349 push eax */
  push32((uint32_t)(EAX));
  /* 1246734a push 0 */
  push32((uint32_t)(0x0u));
  /* 1246734c push 1 */
  push32((uint32_t)(0x1u));
  /* 1246734e call dword ptr [0x124863b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863b0))), 0x12467354u);
  /* 12467354 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12467357 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246735b jne 0x12467362 */
  if (!C.zf) goto L_12467362;
  /* 1246735d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12467360 jmp 0x124673ca */
  goto L_124673ca;
L_12467362:;
  /* 12467362 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12467364 push 0x1248001c */
  push32((uint32_t)(0x1248001cu));
  /* 12467369 push 2 */
  push32((uint32_t)(0x2u));
  /* 1246736b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246736e push ecx */
  push32((uint32_t)(ECX));
  /* 1246736f call 0x12457820 */
  push32(0x12467374u); f_12457820();
  /* 12467374 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467377 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1246737a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246737e jne 0x12467385 */
  if (!C.zf) goto L_12467385;
  /* 12467380 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12467383 jmp 0x124673ca */
  goto L_124673ca;
L_12467385:;
  /* 12467385 push 0 */
  push32((uint32_t)(0x0u));
  /* 12467387 push 0 */
  push32((uint32_t)(0x0u));
  /* 12467389 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1246738c push edx */
  push32((uint32_t)(EDX));
  /* 1246738d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12467390 push eax */
  push32((uint32_t)(EAX));
  /* 12467391 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12467393 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467396 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12467398 push edx */
  push32((uint32_t)(EDX));
  /* 12467399 push 0 */
  push32((uint32_t)(0x0u));
  /* 1246739b push 1 */
  push32((uint32_t)(0x1u));
  /* 1246739d call dword ptr [0x124863b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863b0))), 0x124673a3u);
  /* 124673a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124673a5 jne 0x124673ac */
  if (!C.zf) goto L_124673ac;
  /* 124673a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124673aa jmp 0x124673ca */
  goto L_124673ca;
L_124673ac:;
  /* 124673ac push 0 */
  push32((uint32_t)(0x0u));
  /* 124673ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124673b1 push eax */
  push32((uint32_t)(EAX));
  /* 124673b2 call 0x12467820 */
  push32(0x124673b7u); f_12467820();
  /* 124673b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124673ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124673bd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124673c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124673c3 jmp 0x1246732e */
  goto L_1246732e;
L_124673c8:;
  /* 124673c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124673ca:;
  /* 124673ca mov esp, ebp */
  ESP = (EBP);
  /* 124673cc pop ebp */
  EBP = (pop32());
  /* 124673cd ret  */
  ESPCHK(0x12467320u, _esp0);
  ESP += 4; return;
}

/* FUN_100173d0 @ 0x124673d0 (970 bytes, 340 insns) */
void f_124673d0(void) {
  FTRACE(0x124673d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124673d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124673d1 mov ebp, esp */
  EBP = (ESP);
  /* 124673d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124673d5 push 0x12480070 */
  push32((uint32_t)(0x12480070u));
  /* 124673da push 0x12460928 */
  push32((uint32_t)(0x12460928u));
  /* 124673df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 124673e5 push eax */
  push32((uint32_t)(EAX));
  /* 124673e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 124673ed add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124673f0 push ebx */
  push32((uint32_t)(EBX));
  /* 124673f1 push esi */
  push32((uint32_t)(ESI));
  /* 124673f2 push edi */
  push32((uint32_t)(EDI));
  /* 124673f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124673f6 cmp dword ptr [0x12483bbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483bbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124673fd jne 0x12467456 */
  if (!C.zf) goto L_12467456;
  /* 124673ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12467401 push 0x1247f6c8 */
  push32((uint32_t)(0x1247f6c8u));
  /* 12467406 push 1 */
  push32((uint32_t)(0x1u));
  /* 12467408 push 0x1247f6c8 */
  push32((uint32_t)(0x1247f6c8u));
  /* 1246740d push 0 */
  push32((uint32_t)(0x0u));
  /* 1246740f push 0 */
  push32((uint32_t)(0x0u));
  /* 12467411 call dword ptr [0x124862ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862ac))), 0x12467417u);
  /* 12467417 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12467419 je 0x12467427 */
  if (C.zf) goto L_12467427;
  /* 1246741b mov dword ptr [0x12483bbc], 1 */
  w32((uint32_t)(0x12483bbc), (0x1u));
  /* 12467425 jmp 0x12467456 */
  goto L_12467456;
L_12467427:;
  /* 12467427 push 1 */
  push32((uint32_t)(0x1u));
  /* 12467429 push 0x1247f6c4 */
  push32((uint32_t)(0x1247f6c4u));
  /* 1246742e push 1 */
  push32((uint32_t)(0x1u));
  /* 12467430 push 0x1247f6c4 */
  push32((uint32_t)(0x1247f6c4u));
  /* 12467435 push 0 */
  push32((uint32_t)(0x0u));
  /* 12467437 push 0 */
  push32((uint32_t)(0x0u));
  /* 12467439 call dword ptr [0x124862b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862b0))), 0x1246743fu);
  /* 1246743f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12467441 je 0x1246744f */
  if (C.zf) goto L_1246744f;
  /* 12467443 mov dword ptr [0x12483bbc], 2 */
  w32((uint32_t)(0x12483bbc), (0x2u));
  /* 1246744d jmp 0x12467456 */
  goto L_12467456;
L_1246744f:;
  /* 1246744f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12467451 jmp 0x124677b4 */
  goto L_124677b4;
L_12467456:;
  /* 12467456 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246745a jle 0x1246746f */
  if ((C.zf||C.sf!=C.of)) goto L_1246746f;
  /* 1246745c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1246745f push eax */
  push32((uint32_t)(EAX));
  /* 12467460 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12467463 push ecx */
  push32((uint32_t)(ECX));
  /* 12467464 call 0x124677d0 */
  push32(0x12467469u); f_124677d0();
  /* 12467469 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246746c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1246746f:;
  /* 1246746f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467473 jle 0x12467488 */
  if ((C.zf||C.sf!=C.of)) goto L_12467488;
  /* 12467475 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12467478 push edx */
  push32((uint32_t)(EDX));
  /* 12467479 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1246747c push eax */
  push32((uint32_t)(EAX));
  /* 1246747d call 0x124677d0 */
  push32(0x12467482u); f_124677d0();
  /* 12467482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467485 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12467488:;
  /* 12467488 cmp dword ptr [0x12483bbc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12483bbc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246748f jne 0x124674b4 */
  if (!C.zf) goto L_124674b4;
  /* 12467491 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12467494 push ecx */
  push32((uint32_t)(ECX));
  /* 12467495 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12467498 push edx */
  push32((uint32_t)(EDX));
  /* 12467499 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1246749c push eax */
  push32((uint32_t)(EAX));
  /* 1246749d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124674a0 push ecx */
  push32((uint32_t)(ECX));
  /* 124674a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124674a4 push edx */
  push32((uint32_t)(EDX));
  /* 124674a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124674a8 push eax */
  push32((uint32_t)(EAX));
  /* 124674a9 call dword ptr [0x124862b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862b0))), 0x124674afu);
  /* 124674af jmp 0x124677b4 */
  goto L_124677b4;
L_124674b4:;
  /* 124674b4 cmp dword ptr [0x12483bbc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12483bbc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124674bb jne 0x124677b2 */
  if (!C.zf) goto L_124677b2;
  /* 124674c1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124674c5 jne 0x124674d0 */
  if (!C.zf) goto L_124674d0;
  /* 124674c7 mov ecx, dword ptr [0x12483a68] */
  ECX = (r32((uint32_t)(0x12483a68)));
  /* 124674cd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_124674d0:;
  /* 124674d0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124674d4 je 0x124674e0 */
  if (C.zf) goto L_124674e0;
  /* 124674d6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124674da jne 0x1246765c */
  if (!C.zf) goto L_1246765c;
L_124674e0:;
  /* 124674e0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124674e3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124674e6 jne 0x124674f2 */
  if (!C.zf) goto L_124674f2;
  /* 124674e8 mov eax, 2 */
  EAX = (0x2u);
  /* 124674ed jmp 0x124677b4 */
  goto L_124677b4;
L_124674f2:;
  /* 124674f2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124674f6 jle 0x12467502 */
  if ((C.zf||C.sf!=C.of)) goto L_12467502;
  /* 124674f8 mov eax, 1 */
  EAX = (0x1u);
  /* 124674fd jmp 0x124677b4 */
  goto L_124677b4;
L_12467502:;
  /* 12467502 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467506 jle 0x12467512 */
  if ((C.zf||C.sf!=C.of)) goto L_12467512;
  /* 12467508 mov eax, 3 */
  EAX = (0x3u);
  /* 1246750d jmp 0x124677b4 */
  goto L_124677b4;
L_12467512:;
  /* 12467512 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12467515 push eax */
  push32((uint32_t)(EAX));
  /* 12467516 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12467519 push ecx */
  push32((uint32_t)(ECX));
  /* 1246751a call dword ptr [0x12486308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486308))), 0x12467520u);
  /* 12467520 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12467522 jne 0x1246752b */
  if (!C.zf) goto L_1246752b;
  /* 12467524 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12467526 jmp 0x124677b4 */
  goto L_124677b4;
L_1246752b:;
  /* 1246752b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246752f jne 0x12467537 */
  if (!C.zf) goto L_12467537;
  /* 12467531 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467535 je 0x12467564 */
  if (C.zf) goto L_12467564;
L_12467537:;
  /* 12467537 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246753b jne 0x12467543 */
  if (!C.zf) goto L_12467543;
  /* 1246753d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467541 je 0x12467564 */
  if (C.zf) goto L_12467564;
L_12467543:;
  /* 12467543 push 0x12480030 */
  push32((uint32_t)(0x12480030u));
  /* 12467548 push 0 */
  push32((uint32_t)(0x0u));
  /* 1246754a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1246754f push 0x12480028 */
  push32((uint32_t)(0x12480028u));
  /* 12467554 push 2 */
  push32((uint32_t)(0x2u));
  /* 12467556 call 0x124568e0 */
  push32(0x1246755bu); f_124568e0();
  /* 1246755b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246755e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467561 jne 0x12467564 */
  if (!C.zf) goto L_12467564;
  /* 12467563 int3  */
  x86_unimpl("int3 @ 0x12467563");
L_12467564:;
  /* 12467564 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12467566 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12467568 jne 0x1246752b */
  if (!C.zf) goto L_1246752b;
  /* 1246756a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246756e jle 0x124675e3 */
  if ((C.zf||C.sf!=C.of)) goto L_124675e3;
  /* 12467570 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467574 jae 0x12467580 */
  if (!C.cf) goto L_12467580;
  /* 12467576 mov eax, 3 */
  EAX = (0x3u);
  /* 1246757b jmp 0x124677b4 */
  goto L_124677b4;
L_12467580:;
  /* 12467580 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12467583 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12467586 jmp 0x12467591 */
  goto L_12467591;
L_12467588:;
  /* 12467588 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1246758b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246758e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12467591:;
  /* 12467591 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12467594 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12467596 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12467598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1246759a je 0x124675d9 */
  if (C.zf) goto L_124675d9;
  /* 1246759c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1246759f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124675a1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 124675a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124675a6 je 0x124675d9 */
  if (C.zf) goto L_124675d9;
  /* 124675a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124675ab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124675ad mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124675af mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 124675b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124675b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124675b6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124675b8 jl 0x124675d7 */
  if ((C.sf!=C.of)) goto L_124675d7;
  /* 124675ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124675bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124675bf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124675c1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 124675c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124675c6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 124675c9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124675cb jg 0x124675d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_124675d7;
  /* 124675cd mov eax, 2 */
  EAX = (0x2u);
  /* 124675d2 jmp 0x124677b4 */
  goto L_124677b4;
L_124675d7:;
  /* 124675d7 jmp 0x12467588 */
  goto L_12467588;
L_124675d9:;
  /* 124675d9 mov eax, 3 */
  EAX = (0x3u);
  /* 124675de jmp 0x124677b4 */
  goto L_124677b4;
L_124675e3:;
  /* 124675e3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124675e7 jle 0x1246765c */
  if ((C.zf||C.sf!=C.of)) goto L_1246765c;
  /* 124675e9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124675ed jae 0x124675f9 */
  if (!C.cf) goto L_124675f9;
  /* 124675ef mov eax, 1 */
  EAX = (0x1u);
  /* 124675f4 jmp 0x124677b4 */
  goto L_124677b4;
L_124675f9:;
  /* 124675f9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 124675fc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 124675ff jmp 0x1246760a */
  goto L_1246760a;
L_12467601:;
  /* 12467601 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12467604 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12467607 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1246760a:;
  /* 1246760a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1246760d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1246760f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12467611 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12467613 je 0x12467652 */
  if (C.zf) goto L_12467652;
  /* 12467615 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12467618 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1246761a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1246761d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1246761f je 0x12467652 */
  if (C.zf) goto L_12467652;
  /* 12467621 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12467624 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12467626 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12467628 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1246762b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1246762d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1246762f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467631 jl 0x12467650 */
  if ((C.sf!=C.of)) goto L_12467650;
  /* 12467633 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12467636 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12467638 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1246763a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1246763d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1246763f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12467642 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467644 jg 0x12467650 */
  if ((!C.zf&&C.sf==C.of)) goto L_12467650;
  /* 12467646 mov eax, 2 */
  EAX = (0x2u);
  /* 1246764b jmp 0x124677b4 */
  goto L_124677b4;
L_12467650:;
  /* 12467650 jmp 0x12467601 */
  goto L_12467601;
L_12467652:;
  /* 12467652 mov eax, 1 */
  EAX = (0x1u);
  /* 12467657 jmp 0x124677b4 */
  goto L_124677b4;
L_1246765c:;
  /* 1246765c push 0 */
  push32((uint32_t)(0x0u));
  /* 1246765e push 0 */
  push32((uint32_t)(0x0u));
  /* 12467660 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12467663 push ecx */
  push32((uint32_t)(ECX));
  /* 12467664 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12467667 push edx */
  push32((uint32_t)(EDX));
  /* 12467668 push 9 */
  push32((uint32_t)(0x9u));
  /* 1246766a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1246766d push eax */
  push32((uint32_t)(EAX));
  /* 1246766e call dword ptr [0x124862fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862fc))), 0x12467674u);
  /* 12467674 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12467677 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246767b jne 0x12467684 */
  if (!C.zf) goto L_12467684;
  /* 1246767d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1246767f jmp 0x124677b4 */
  goto L_124677b4;
L_12467684:;
  /* 12467684 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1246768b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1246768e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12467690 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12467693 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12467695 call 0x1245a9c0 */
  push32(0x1246769au); f_1245a9c0();
  /* 1246769a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1246769d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124676a0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 124676a3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 124676a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124676ad jmp 0x124676c6 */
  goto L_124676c6;
  /* 124676af mov eax, 1 */
  EAX = (0x1u);
  /* 124676b4 ret  */
  ESPCHK(0x124673d0u, _esp0);
  ESP += 4; return;
  /* 124676b5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124676b8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 124676bf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124676c6:;
  /* 124676c6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124676ca jne 0x124676d3 */
  if (!C.zf) goto L_124676d3;
  /* 124676cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124676ce jmp 0x124677b4 */
  goto L_124677b4;
L_124676d3:;
  /* 124676d3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124676d6 push edx */
  push32((uint32_t)(EDX));
  /* 124676d7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124676da push eax */
  push32((uint32_t)(EAX));
  /* 124676db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124676de push ecx */
  push32((uint32_t)(ECX));
  /* 124676df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124676e2 push edx */
  push32((uint32_t)(EDX));
  /* 124676e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124676e5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 124676e8 push eax */
  push32((uint32_t)(EAX));
  /* 124676e9 call dword ptr [0x124862fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862fc))), 0x124676efu);
  /* 124676ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124676f1 jne 0x124676fa */
  if (!C.zf) goto L_124676fa;
  /* 124676f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124676f5 jmp 0x124677b4 */
  goto L_124677b4;
L_124676fa:;
  /* 124676fa push 0 */
  push32((uint32_t)(0x0u));
  /* 124676fc push 0 */
  push32((uint32_t)(0x0u));
  /* 124676fe mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12467701 push ecx */
  push32((uint32_t)(ECX));
  /* 12467702 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12467705 push edx */
  push32((uint32_t)(EDX));
  /* 12467706 push 9 */
  push32((uint32_t)(0x9u));
  /* 12467708 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1246770b push eax */
  push32((uint32_t)(EAX));
  /* 1246770c call dword ptr [0x124862fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862fc))), 0x12467712u);
  /* 12467712 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12467715 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467719 jne 0x12467722 */
  if (!C.zf) goto L_12467722;
  /* 1246771b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1246771d jmp 0x124677b4 */
  goto L_124677b4;
L_12467722:;
  /* 12467722 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12467729 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1246772c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1246772e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12467731 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12467733 call 0x1245a9c0 */
  push32(0x12467738u); f_1245a9c0();
  /* 12467738 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1246773b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1246773e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12467741 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12467744 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1246774b jmp 0x12467764 */
  goto L_12467764;
  /* 1246774d mov eax, 1 */
  EAX = (0x1u);
  /* 12467752 ret  */
  ESPCHK(0x124673d0u, _esp0);
  ESP += 4; return;
  /* 12467753 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12467756 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1246775d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12467764:;
  /* 12467764 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467768 jne 0x1246776e */
  if (!C.zf) goto L_1246776e;
  /* 1246776a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1246776c jmp 0x124677b4 */
  goto L_124677b4;
L_1246776e:;
  /* 1246776e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12467771 push edx */
  push32((uint32_t)(EDX));
  /* 12467772 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12467775 push eax */
  push32((uint32_t)(EAX));
  /* 12467776 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12467779 push ecx */
  push32((uint32_t)(ECX));
  /* 1246777a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1246777d push edx */
  push32((uint32_t)(EDX));
  /* 1246777e push 1 */
  push32((uint32_t)(0x1u));
  /* 12467780 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12467783 push eax */
  push32((uint32_t)(EAX));
  /* 12467784 call dword ptr [0x124862fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862fc))), 0x1246778au);
  /* 1246778a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1246778c jne 0x12467792 */
  if (!C.zf) goto L_12467792;
  /* 1246778e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12467790 jmp 0x124677b4 */
  goto L_124677b4;
L_12467792:;
  /* 12467792 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12467795 push ecx */
  push32((uint32_t)(ECX));
  /* 12467796 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12467799 push edx */
  push32((uint32_t)(EDX));
  /* 1246779a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1246779d push eax */
  push32((uint32_t)(EAX));
  /* 1246779e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124677a1 push ecx */
  push32((uint32_t)(ECX));
  /* 124677a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124677a5 push edx */
  push32((uint32_t)(EDX));
  /* 124677a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124677a9 push eax */
  push32((uint32_t)(EAX));
  /* 124677aa call dword ptr [0x124862ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862ac))), 0x124677b0u);
  /* 124677b0 jmp 0x124677b4 */
  goto L_124677b4;
L_124677b2:;
  /* 124677b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124677b4:;
  /* 124677b4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 124677b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124677ba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 124677c1 pop edi */
  EDI = (pop32());
  /* 124677c2 pop esi */
  ESI = (pop32());
  /* 124677c3 pop ebx */
  EBX = (pop32());
  /* 124677c4 mov esp, ebp */
  ESP = (EBP);
  /* 124677c6 pop ebp */
  EBP = (pop32());
  /* 124677c7 ret  */
  ESPCHK(0x124673d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100177d0 @ 0x124677d0 (80 bytes, 32 insns) */
void f_124677d0(void) {
  FTRACE(0x124677d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124677d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124677d1 mov ebp, esp */
  EBP = (ESP);
  /* 124677d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124677d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124677d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124677dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124677df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124677e2:;
  /* 124677e2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124677e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124677e8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124677eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124677ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124677f0 je 0x12467807 */
  if (C.zf) goto L_12467807;
  /* 124677f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124677f5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124677f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124677fa je 0x12467807 */
  if (C.zf) goto L_12467807;
  /* 124677fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124677ff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12467802 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12467805 jmp 0x124677e2 */
  goto L_124677e2;
L_12467807:;
  /* 12467807 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1246780a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1246780d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1246780f jne 0x12467819 */
  if (!C.zf) goto L_12467819;
  /* 12467811 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467814 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12467817 jmp 0x1246781c */
  goto L_1246781c;
L_12467819:;
  /* 12467819 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1246781c:;
  /* 1246781c mov esp, ebp */
  ESP = (EBP);
  /* 1246781e pop ebp */
  EBP = (pop32());
  /* 1246781f ret  */
  ESPCHK(0x124677d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017820 @ 0x12467820 (736 bytes, 224 insns) */
void f_12467820(void) {
  FTRACE(0x12467820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12467820 push ebp */
  push32((uint32_t)(EBP));
  /* 12467821 mov ebp, esp */
  EBP = (ESP);
  /* 12467823 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12467826 push esi */
  push32((uint32_t)(ESI));
  /* 12467827 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246782b je 0x1246784c */
  if (C.zf) goto L_1246784c;
  /* 1246782d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1246782f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467832 push eax */
  push32((uint32_t)(EAX));
  /* 12467833 call 0x12467c70 */
  push32(0x12467838u); f_12467c70();
  /* 12467838 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1246783b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1246783e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467842 je 0x1246784c */
  if (C.zf) goto L_1246784c;
  /* 12467844 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467847 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246784a jne 0x12467854 */
  if (!C.zf) goto L_12467854;
L_1246784c:;
  /* 1246784c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1246784f jmp 0x12467afb */
  goto L_12467afb;
L_12467854:;
  /* 12467854 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12467857 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1246785b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1246785d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1246785f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12467860 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12467863 mov ecx, dword ptr [0x12483878] */
  ECX = (r32((uint32_t)(0x12483878)));
  /* 12467869 cmp ecx, dword ptr [0x1248387c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1248387c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246786f jne 0x12467885 */
  if (!C.zf) goto L_12467885;
  /* 12467871 mov edx, dword ptr [0x12483878] */
  EDX = (r32((uint32_t)(0x12483878)));
  /* 12467877 push edx */
  push32((uint32_t)(EDX));
  /* 12467878 call 0x12467b80 */
  push32(0x1246787du); f_12467b80();
  /* 1246787d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467880 mov dword ptr [0x12483878], eax */
  w32((uint32_t)(0x12483878), (EAX));
L_12467885:;
  /* 12467885 cmp dword ptr [0x12483878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246788c jne 0x12467945 */
  if (!C.zf) goto L_12467945;
  /* 12467892 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467896 je 0x124678b7 */
  if (C.zf) goto L_124678b7;
  /* 12467898 cmp dword ptr [0x12483880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246789f je 0x124678b7 */
  if (C.zf) goto L_124678b7;
  /* 124678a1 call 0x12467320 */
  push32(0x124678a6u); f_12467320();
  /* 124678a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124678a8 je 0x124678b2 */
  if (C.zf) goto L_124678b2;
  /* 124678aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124678ad jmp 0x12467afb */
  goto L_12467afb;
L_124678b2:;
  /* 124678b2 jmp 0x12467945 */
  goto L_12467945;
L_124678b7:;
  /* 124678b7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124678bb je 0x124678c4 */
  if (C.zf) goto L_124678c4;
  /* 124678bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124678bf jmp 0x12467afb */
  goto L_12467afb;
L_124678c4:;
  /* 124678c4 cmp dword ptr [0x12483878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124678cb jne 0x12467904 */
  if (!C.zf) goto L_12467904;
  /* 124678cd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 124678d2 push 0x12480088 */
  push32((uint32_t)(0x12480088u));
  /* 124678d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 124678d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 124678db call 0x12457820 */
  push32(0x124678e0u); f_12457820();
  /* 124678e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124678e3 mov dword ptr [0x12483878], eax */
  w32((uint32_t)(0x12483878), (EAX));
  /* 124678e8 cmp dword ptr [0x12483878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124678ef jne 0x124678f9 */
  if (!C.zf) goto L_124678f9;
  /* 124678f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124678f4 jmp 0x12467afb */
  goto L_12467afb;
L_124678f9:;
  /* 124678f9 mov eax, dword ptr [0x12483878] */
  EAX = (r32((uint32_t)(0x12483878)));
  /* 124678fe mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12467904:;
  /* 12467904 cmp dword ptr [0x12483880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246790b jne 0x12467945 */
  if (!C.zf) goto L_12467945;
  /* 1246790d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12467912 push 0x12480088 */
  push32((uint32_t)(0x12480088u));
  /* 12467917 push 2 */
  push32((uint32_t)(0x2u));
  /* 12467919 push 4 */
  push32((uint32_t)(0x4u));
  /* 1246791b call 0x12457820 */
  push32(0x12467920u); f_12457820();
  /* 12467920 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467923 mov dword ptr [0x12483880], eax */
  w32((uint32_t)(0x12483880), (EAX));
  /* 12467928 cmp dword ptr [0x12483880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246792f jne 0x12467939 */
  if (!C.zf) goto L_12467939;
  /* 12467931 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12467934 jmp 0x12467afb */
  goto L_12467afb;
L_12467939:;
  /* 12467939 mov ecx, dword ptr [0x12483880] */
  ECX = (r32((uint32_t)(0x12483880)));
  /* 1246793f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12467945:;
  /* 12467945 mov edx, dword ptr [0x12483878] */
  EDX = (r32((uint32_t)(0x12483878)));
  /* 1246794b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1246794e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12467951 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12467954 push eax */
  push32((uint32_t)(EAX));
  /* 12467955 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467958 push ecx */
  push32((uint32_t)(ECX));
  /* 12467959 call 0x12467b00 */
  push32(0x1246795eu); f_12467b00();
  /* 1246795e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467961 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12467964 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467968 jl 0x12467a01 */
  if ((C.sf!=C.of)) goto L_12467a01;
  /* 1246796e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12467971 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467974 je 0x12467a01 */
  if (C.zf) goto L_12467a01;
  /* 1246797a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1246797e je 0x124679f3 */
  if (C.zf) goto L_124679f3;
  /* 12467980 push 2 */
  push32((uint32_t)(0x2u));
  /* 12467982 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12467985 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12467988 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1246798b push edx */
  push32((uint32_t)(EDX));
  /* 1246798c call 0x124582b0 */
  push32(0x12467991u); f_124582b0();
  /* 12467991 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467994 jmp 0x1246799f */
  goto L_1246799f;
L_12467996:;
  /* 12467996 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12467999 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1246799c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1246799f:;
  /* 1246799f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124679a2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124679a5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124679a9 je 0x124679c0 */
  if (C.zf) goto L_124679c0;
  /* 124679ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124679ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124679b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124679b4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 124679b7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 124679bb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 124679be jmp 0x12467996 */
  goto L_12467996;
L_124679c0:;
  /* 124679c0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 124679c5 push 0x12480088 */
  push32((uint32_t)(0x12480088u));
  /* 124679ca push 2 */
  push32((uint32_t)(0x2u));
  /* 124679cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124679cf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 124679d2 push eax */
  push32((uint32_t)(EAX));
  /* 124679d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124679d6 push ecx */
  push32((uint32_t)(ECX));
  /* 124679d7 call 0x12457cb0 */
  push32(0x124679dcu); f_12457cb0();
  /* 124679dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124679df mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124679e2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124679e6 je 0x124679f1 */
  if (C.zf) goto L_124679f1;
  /* 124679e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124679eb mov dword ptr [0x12483878], edx */
  w32((uint32_t)(0x12483878), (EDX));
L_124679f1:;
  /* 124679f1 jmp 0x124679ff */
  goto L_124679ff;
L_124679f3:;
  /* 124679f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124679f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124679f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124679fc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_124679ff:;
  /* 124679ff jmp 0x12467a74 */
  goto L_12467a74;
L_12467a01:;
  /* 12467a01 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467a05 jne 0x12467a6d */
  if (!C.zf) goto L_12467a6d;
  /* 12467a07 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467a0b jge 0x12467a15 */
  if ((C.sf==C.of)) goto L_12467a15;
  /* 12467a0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12467a10 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12467a12 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12467a15:;
  /* 12467a15 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12467a1a push 0x12480088 */
  push32((uint32_t)(0x12480088u));
  /* 12467a1f push 2 */
  push32((uint32_t)(0x2u));
  /* 12467a21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12467a24 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12467a2b push edx */
  push32((uint32_t)(EDX));
  /* 12467a2c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12467a2f push eax */
  push32((uint32_t)(EAX));
  /* 12467a30 call 0x12457cb0 */
  push32(0x12467a35u); f_12457cb0();
  /* 12467a35 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467a38 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12467a3b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467a3f jne 0x12467a49 */
  if (!C.zf) goto L_12467a49;
  /* 12467a41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12467a44 jmp 0x12467afb */
  goto L_12467afb;
L_12467a49:;
  /* 12467a49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12467a4c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12467a4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467a52 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12467a55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12467a58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12467a5b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12467a63 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12467a66 mov dword ptr [0x12483878], eax */
  w32((uint32_t)(0x12483878), (EAX));
  /* 12467a6b jmp 0x12467a74 */
  goto L_12467a74;
L_12467a6d:;
  /* 12467a6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12467a6f jmp 0x12467afb */
  goto L_12467afb;
L_12467a74:;
  /* 12467a74 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467a78 je 0x12467af9 */
  if (C.zf) goto L_12467af9;
  /* 12467a7a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12467a7f push 0x12480088 */
  push32((uint32_t)(0x12480088u));
  /* 12467a84 push 2 */
  push32((uint32_t)(0x2u));
  /* 12467a86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467a89 push ecx */
  push32((uint32_t)(ECX));
  /* 12467a8a call 0x1245a650 */
  push32(0x12467a8fu); f_1245a650();
  /* 12467a8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467a92 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12467a95 push eax */
  push32((uint32_t)(EAX));
  /* 12467a96 call 0x12457820 */
  push32(0x12467a9bu); f_12457820();
  /* 12467a9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467a9e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12467aa1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467aa5 je 0x12467af9 */
  if (C.zf) goto L_12467af9;
  /* 12467aa7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467aaa push edx */
  push32((uint32_t)(EDX));
  /* 12467aab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12467aae push eax */
  push32((uint32_t)(EAX));
  /* 12467aaf call 0x1245a7d0 */
  push32(0x12467ab4u); f_1245a7d0();
  /* 12467ab4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467ab7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12467aba sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12467abd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12467ac0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12467ac2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12467ac5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467ac8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12467acb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467ace add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12467ad1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12467ad4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12467ad7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12467ad9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12467adb not edx */
  EDX = (~(EDX));
  /* 12467add and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12467ae0 push edx */
  push32((uint32_t)(EDX));
  /* 12467ae1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12467ae4 push eax */
  push32((uint32_t)(EAX));
  /* 12467ae5 call dword ptr [0x124862a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862a8))), 0x12467aebu);
  /* 12467aeb push 2 */
  push32((uint32_t)(0x2u));
  /* 12467aed mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12467af0 push ecx */
  push32((uint32_t)(ECX));
  /* 12467af1 call 0x124582b0 */
  push32(0x12467af6u); f_124582b0();
  /* 12467af6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12467af9:;
  /* 12467af9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12467afb:;
  /* 12467afb pop esi */
  ESI = (pop32());
  /* 12467afc mov esp, ebp */
  ESP = (EBP);
  /* 12467afe pop ebp */
  EBP = (pop32());
  /* 12467aff ret  */
  ESPCHK(0x12467820u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12467b00 (124 bytes, 47 insns) */
void f_12467b00(void) {
  FTRACE(0x12467b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12467b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12467b01 mov ebp, esp */
  EBP = (ESP);
  /* 12467b03 push ecx */
  push32((uint32_t)(ECX));
  /* 12467b04 mov eax, dword ptr [0x12483878] */
  EAX = (r32((uint32_t)(0x12483878)));
  /* 12467b09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12467b0c jmp 0x12467b17 */
  goto L_12467b17;
L_12467b0e:;
  /* 12467b0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467b11 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12467b14 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12467b17:;
  /* 12467b17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467b1a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467b1d je 0x12467b6a */
  if (C.zf) goto L_12467b6a;
  /* 12467b1f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12467b22 push eax */
  push32((uint32_t)(EAX));
  /* 12467b23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467b26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12467b28 push edx */
  push32((uint32_t)(EDX));
  /* 12467b29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467b2c push eax */
  push32((uint32_t)(EAX));
  /* 12467b2d call 0x124672d0 */
  push32(0x12467b32u); f_124672d0();
  /* 12467b32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467b35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12467b37 jne 0x12467b68 */
  if (!C.zf) goto L_12467b68;
  /* 12467b39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467b3c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12467b3e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12467b41 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12467b45 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467b48 je 0x12467b5a */
  if (C.zf) goto L_12467b5a;
  /* 12467b4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467b4d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12467b4f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12467b52 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12467b56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12467b58 jne 0x12467b68 */
  if (!C.zf) goto L_12467b68;
L_12467b5a:;
  /* 12467b5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467b5d sub eax, dword ptr [0x12483878] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12483878))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12467b63 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12467b66 jmp 0x12467b78 */
  goto L_12467b78;
L_12467b68:;
  /* 12467b68 jmp 0x12467b0e */
  goto L_12467b0e;
L_12467b6a:;
  /* 12467b6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467b6d sub eax, dword ptr [0x12483878] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12483878))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12467b73 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12467b76 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12467b78:;
  /* 12467b78 mov esp, ebp */
  ESP = (EBP);
  /* 12467b7a pop ebp */
  EBP = (pop32());
  /* 12467b7b ret  */
  ESPCHK(0x12467b00u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12467b80 (238 bytes, 80 insns) */
void f_12467b80(void) {
  FTRACE(0x12467b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12467b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12467b81 mov ebp, esp */
  EBP = (ESP);
  /* 12467b83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12467b86 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12467b8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467b90 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12467b93 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467b97 jne 0x12467ba0 */
  if (!C.zf) goto L_12467ba0;
  /* 12467b99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12467b9b jmp 0x12467c6a */
  goto L_12467c6a;
L_12467ba0:;
  /* 12467ba0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12467ba3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12467ba5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12467ba8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12467bab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12467bae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12467bb0 je 0x12467bbd */
  if (C.zf) goto L_12467bbd;
  /* 12467bb2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12467bb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12467bb8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12467bbb jmp 0x12467ba0 */
  goto L_12467ba0;
L_12467bbd:;
  /* 12467bbd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12467bc2 push 0x12480088 */
  push32((uint32_t)(0x12480088u));
  /* 12467bc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12467bc9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12467bcc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12467bd3 push eax */
  push32((uint32_t)(EAX));
  /* 12467bd4 call 0x12457820 */
  push32(0x12467bd9u); f_12457820();
  /* 12467bd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467bdc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12467bdf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12467be2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12467be5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467be9 jne 0x12467bf5 */
  if (!C.zf) goto L_12467bf5;
  /* 12467beb push 9 */
  push32((uint32_t)(0x9u));
  /* 12467bed call 0x12456790 */
  push32(0x12467bf2u); f_12456790();
  /* 12467bf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12467bf5:;
  /* 12467bf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467bf8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12467bfb:;
  /* 12467bfb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12467bfe cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467c01 je 0x12467c5e */
  if (C.zf) goto L_12467c5e;
  /* 12467c03 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12467c08 push 0x12480088 */
  push32((uint32_t)(0x12480088u));
  /* 12467c0d push 2 */
  push32((uint32_t)(0x2u));
  /* 12467c0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12467c12 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12467c14 push edx */
  push32((uint32_t)(EDX));
  /* 12467c15 call 0x1245a650 */
  push32(0x12467c1au); f_1245a650();
  /* 12467c1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467c1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12467c20 push eax */
  push32((uint32_t)(EAX));
  /* 12467c21 call 0x12457820 */
  push32(0x12467c26u); f_12457820();
  /* 12467c26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467c29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12467c2c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12467c2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12467c31 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467c34 je 0x12467c4a */
  if (C.zf) goto L_12467c4a;
  /* 12467c36 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12467c39 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12467c3b push ecx */
  push32((uint32_t)(ECX));
  /* 12467c3c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12467c3f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12467c41 push eax */
  push32((uint32_t)(EAX));
  /* 12467c42 call 0x1245a7d0 */
  push32(0x12467c47u); f_1245a7d0();
  /* 12467c47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12467c4a:;
  /* 12467c4a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12467c4d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12467c50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12467c53 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12467c56 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12467c59 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12467c5c jmp 0x12467bfb */
  goto L_12467bfb;
L_12467c5e:;
  /* 12467c5e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12467c61 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12467c67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12467c6a:;
  /* 12467c6a mov esp, ebp */
  ESP = (EBP);
  /* 12467c6c pop ebp */
  EBP = (pop32());
  /* 12467c6d ret  */
  ESPCHK(0x12467b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10017c70 @ 0x12467c70 (237 bytes, 81 insns) */
void f_12467c70(void) {
  FTRACE(0x12467c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12467c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12467c71 mov ebp, esp */
  EBP = (ESP);
  /* 12467c73 push ecx */
  push32((uint32_t)(ECX));
  /* 12467c74 cmp dword ptr [0x12484fcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12484fcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467c7b jne 0x12467c92 */
  if (!C.zf) goto L_12467c92;
  /* 12467c7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12467c80 push eax */
  push32((uint32_t)(EAX));
  /* 12467c81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467c84 push ecx */
  push32((uint32_t)(ECX));
  /* 12467c85 call 0x12467d70 */
  push32(0x12467c8au); f_12467d70();
  /* 12467c8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467c8d jmp 0x12467d59 */
  goto L_12467d59;
L_12467c92:;
  /* 12467c92 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12467c94 call 0x1245b220 */
  push32(0x12467c99u); f_1245b220();
  /* 12467c99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467c9c jmp 0x12467ca7 */
  goto L_12467ca7;
L_12467c9e:;
  /* 12467c9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467ca1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12467ca4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12467ca7:;
  /* 12467ca7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467caa movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12467cae mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12467cb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467cb5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12467cbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12467cbd je 0x12467d3b */
  if (C.zf) goto L_12467d3b;
  /* 12467cbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467cc2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12467cc7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12467cc9 mov cl, byte ptr [eax + 0x124850e1] */
  CL = (r8((uint32_t)(EAX + 0x124850e1)));
  /* 12467ccf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12467cd2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12467cd4 je 0x12467d26 */
  if (C.zf) goto L_12467d26;
  /* 12467cd6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467cd9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12467cdc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12467cdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467ce2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12467ce4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12467ce6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12467ce8 jne 0x12467cf8 */
  if (!C.zf) goto L_12467cf8;
  /* 12467cea push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12467cec call 0x1245b2c0 */
  push32(0x12467cf1u); f_1245b2c0();
  /* 12467cf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467cf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12467cf6 jmp 0x12467d59 */
  goto L_12467d59;
L_12467cf8:;
  /* 12467cf8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467cfb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12467d01 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12467d04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467d07 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12467d09 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12467d0b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12467d0d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467d10 jne 0x12467d24 */
  if (!C.zf) goto L_12467d24;
  /* 12467d12 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12467d14 call 0x1245b2c0 */
  push32(0x12467d19u); f_1245b2c0();
  /* 12467d19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467d1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467d1f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12467d22 jmp 0x12467d59 */
  goto L_12467d59;
L_12467d24:;
  /* 12467d24 jmp 0x12467d36 */
  goto L_12467d36;
L_12467d26:;
  /* 12467d26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467d29 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12467d2f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467d32 jne 0x12467d36 */
  if (!C.zf) goto L_12467d36;
  /* 12467d34 jmp 0x12467d3b */
  goto L_12467d3b;
L_12467d36:;
  /* 12467d36 jmp 0x12467c9e */
  goto L_12467c9e;
L_12467d3b:;
  /* 12467d3b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12467d3d call 0x1245b2c0 */
  push32(0x12467d42u); f_1245b2c0();
  /* 12467d42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12467d45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12467d48 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12467d4d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12467d50 jne 0x12467d57 */
  if (!C.zf) goto L_12467d57;
  /* 12467d52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12467d55 jmp 0x12467d59 */
  goto L_12467d59;
L_12467d57:;
  /* 12467d57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12467d59:;
  /* 12467d59 mov esp, ebp */
  ESP = (EBP);
  /* 12467d5b pop ebp */
  EBP = (pop32());
  /* 12467d5c ret  */
  ESPCHK(0x12467c70u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12467d70 (193 bytes, 87 insns) */
void f_12467d70(void) {
  FTRACE(0x12467d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12467d70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12467d72 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12467d76 push ebx */
  push32((uint32_t)(EBX));
  /* 12467d77 mov ebx, eax */
  EBX = (EAX);
  /* 12467d79 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12467d7c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12467d80 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12467d86 je 0x12467d9b */
  if (C.zf) goto L_12467d9b;
L_12467d88:;
  /* 12467d88 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12467d8a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12467d8b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12467d8d je 0x12467d60 */
  if (C.zf) { jmp_ind(0x12467d60u); return; }
  /* 12467d8f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12467d91 je 0x12467de4 */
  if (C.zf) goto L_12467de4;
  /* 12467d93 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12467d99 jne 0x12467d88 */
  if (!C.zf) goto L_12467d88;
L_12467d9b:;
  /* 12467d9b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12467d9d push edi */
  push32((uint32_t)(EDI));
  /* 12467d9e mov eax, ebx */
  EAX = (EBX);
  /* 12467da0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12467da3 push esi */
  push32((uint32_t)(ESI));
  /* 12467da4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12467da6:;
  /* 12467da6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12467da8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12467dad mov eax, ecx */
  EAX = (ECX);
  /* 12467daf mov esi, edi */
  ESI = (EDI);
  /* 12467db1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12467db3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12467db5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12467db7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12467dba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12467dbd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12467dbf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12467dc1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12467dc4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12467dca jne 0x12467de8 */
  if (!C.zf) goto L_12467de8;
  /* 12467dcc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12467dd1 je 0x12467da6 */
  if (C.zf) goto L_12467da6;
  /* 12467dd3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12467dd8 jne 0x12467de2 */
  if (!C.zf) goto L_12467de2;
  /* 12467dda and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12467de0 jne 0x12467da6 */
  if (!C.zf) goto L_12467da6;
L_12467de2:;
  /* 12467de2 pop esi */
  ESI = (pop32());
  /* 12467de3 pop edi */
  EDI = (pop32());
L_12467de4:;
  /* 12467de4 pop ebx */
  EBX = (pop32());
  /* 12467de5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12467de7 ret  */
  ESPCHK(0x12467d70u, _esp0);
  ESP += 4; return;
L_12467de8:;
  /* 12467de8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12467deb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12467ded je 0x12467e25 */
  if (C.zf) goto L_12467e25;
  /* 12467def test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12467df1 je 0x12467de2 */
  if (C.zf) goto L_12467de2;
  /* 12467df3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12467df5 je 0x12467e1e */
  if (C.zf) goto L_12467e1e;
  /* 12467df7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12467df9 je 0x12467de2 */
  if (C.zf) goto L_12467de2;
  /* 12467dfb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12467dfe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12467e00 je 0x12467e17 */
  if (C.zf) goto L_12467e17;
  /* 12467e02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12467e04 je 0x12467de2 */
  if (C.zf) goto L_12467de2;
  /* 12467e06 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12467e08 je 0x12467e10 */
  if (C.zf) goto L_12467e10;
  /* 12467e0a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12467e0c je 0x12467de2 */
  if (C.zf) goto L_12467de2;
  /* 12467e0e jmp 0x12467da6 */
  goto L_12467da6;
L_12467e10:;
  /* 12467e10 pop esi */
  ESI = (pop32());
  /* 12467e11 pop edi */
  EDI = (pop32());
  /* 12467e12 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12467e15 pop ebx */
  EBX = (pop32());
  /* 12467e16 ret  */
  ESPCHK(0x12467d70u, _esp0);
  ESP += 4; return;
L_12467e17:;
  /* 12467e17 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12467e1a pop esi */
  ESI = (pop32());
  /* 12467e1b pop edi */
  EDI = (pop32());
  /* 12467e1c pop ebx */
  EBX = (pop32());
  /* 12467e1d ret  */
  ESPCHK(0x12467d70u, _esp0);
  ESP += 4; return;
L_12467e1e:;
  /* 12467e1e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12467e21 pop esi */
  ESI = (pop32());
  /* 12467e22 pop edi */
  EDI = (pop32());
  /* 12467e23 pop ebx */
  EBX = (pop32());
  /* 12467e24 ret  */
  ESPCHK(0x12467d70u, _esp0);
  ESP += 4; return;
L_12467e25:;
  /* 12467e25 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12467e28 pop esi */
  ESI = (pop32());
  /* 12467e29 pop edi */
  EDI = (pop32());
  /* 12467e2a pop ebx */
  EBX = (pop32());
  /* 12467e2b ret  */
  ESPCHK(0x12467d70u, _esp0);
  ESP += 4; return;
  /* 12467e2c jmp dword ptr [0x12486338] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12486338)))); return;
}

/* RtlUnwind @ 0x12467f7c (6 bytes, 1 insns) */
void f_12467f7c(void) {
  FTRACE(0x12467f7cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12467f7c jmp dword ptr [0x124862e4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x124862e4)))); return;
}

