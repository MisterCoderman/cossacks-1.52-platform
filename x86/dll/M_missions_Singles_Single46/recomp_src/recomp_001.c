#include "recomp.h"

/* FUN_1000d860 @ 0x1179d860 (26 bytes, 10 insns) */
void f_1179d860(void) {
  FTRACE(0x1179d860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179d860 push ebp */
  push32((uint32_t)(EBP));
  /* 1179d861 mov ebp, esp */
  EBP = (ESP);
  /* 1179d863 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179d866 push eax */
  push32((uint32_t)(EAX));
  /* 1179d867 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179d869 call dword ptr [0x117ca348] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca348))), 0x1179d86fu);
  /* 1179d86f push 0xff */
  push32((uint32_t)(0xffu));
  /* 1179d874 call dword ptr [0x117ca3dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3dc))), 0x1179d87au);
  /* 1179d87a pop ebp */
  EBP = (pop32());
  /* 1179d87b ret  */
  ESPCHK(0x1179d860u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x1179d880 (446 bytes, 130 insns) */
void f_1179d880(void) {
  FTRACE(0x1179d880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179d880 push ebp */
  push32((uint32_t)(EBP));
  /* 1179d881 mov ebp, esp */
  EBP = (ESP);
  /* 1179d883 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179d886 call 0x117994f0 */
  push32(0x1179d88bu); f_117994f0();
  /* 1179d88b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1179d88e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179d891 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1179d894 push ecx */
  push32((uint32_t)(ECX));
  /* 1179d895 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179d898 push edx */
  push32((uint32_t)(EDX));
  /* 1179d899 call 0x1179da40 */
  push32(0x1179d89eu); f_1179da40();
  /* 1179d89e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179d8a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1179d8a4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179d8a8 je 0x1179d8b3 */
  if (C.zf) goto L_1179d8b3;
  /* 1179d8aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179d8ad cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179d8b1 jne 0x1179d8c2 */
  if (!C.zf) goto L_1179d8c2;
L_1179d8b3:;
  /* 1179d8b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179d8b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1179d8b7 call dword ptr [0x117ca344] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca344))), 0x1179d8bdu);
  /* 1179d8bd jmp 0x1179da3a */
  goto L_1179da3a;
L_1179d8c2:;
  /* 1179d8c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179d8c5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179d8c9 jne 0x1179d8df */
  if (!C.zf) goto L_1179d8df;
  /* 1179d8cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179d8ce mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1179d8d5 mov eax, 1 */
  EAX = (0x1u);
  /* 1179d8da jmp 0x1179da3a */
  goto L_1179da3a;
L_1179d8df:;
  /* 1179d8df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179d8e2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179d8e6 jne 0x1179d8f0 */
  if (!C.zf) goto L_1179d8f0;
  /* 1179d8e8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1179d8eb jmp 0x1179da3a */
  goto L_1179da3a;
L_1179d8f0:;
  /* 1179d8f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179d8f3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1179d8f6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1179d8f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179d8fc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1179d8ff mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1179d902 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179d905 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179d908 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1179d90b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179d90e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179d912 jne 0x1179da17 */
  if (!C.zf) goto L_1179da17;
  /* 1179d918 mov eax, dword ptr [0x117c5c78] */
  EAX = (r32((uint32_t)(0x117c5c78)));
  /* 1179d91d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1179d920 jmp 0x1179d92b */
  goto L_1179d92b;
L_1179d922:;
  /* 1179d922 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179d925 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179d928 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1179d92b:;
  /* 1179d92b mov edx, dword ptr [0x117c5c78] */
  EDX = (r32((uint32_t)(0x117c5c78)));
  /* 1179d931 add edx, dword ptr [0x117c5c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x117c5c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179d937 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179d93a jge 0x1179d952 */
  if ((C.sf==C.of)) goto L_1179d952;
  /* 1179d93c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179d93f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179d942 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179d945 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1179d948 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1179d950 jmp 0x1179d922 */
  goto L_1179d922;
L_1179d952:;
  /* 1179d952 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179d955 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1179d958 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1179d95b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179d95e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179d964 jne 0x1179d975 */
  if (!C.zf) goto L_1179d975;
  /* 1179d966 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179d969 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 1179d970 jmp 0x1179d9fd */
  goto L_1179d9fd;
L_1179d975:;
  /* 1179d975 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179d978 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179d97e jne 0x1179d98c */
  if (!C.zf) goto L_1179d98c;
  /* 1179d980 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179d983 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1179d98a jmp 0x1179d9fd */
  goto L_1179d9fd;
L_1179d98c:;
  /* 1179d98c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179d98f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179d995 jne 0x1179d9a3 */
  if (!C.zf) goto L_1179d9a3;
  /* 1179d997 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179d99a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 1179d9a1 jmp 0x1179d9fd */
  goto L_1179d9fd;
L_1179d9a3:;
  /* 1179d9a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179d9a6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179d9ac jne 0x1179d9ba */
  if (!C.zf) goto L_1179d9ba;
  /* 1179d9ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179d9b1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 1179d9b8 jmp 0x1179d9fd */
  goto L_1179d9fd;
L_1179d9ba:;
  /* 1179d9ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179d9bd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179d9c3 jne 0x1179d9d1 */
  if (!C.zf) goto L_1179d9d1;
  /* 1179d9c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179d9c8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1179d9cf jmp 0x1179d9fd */
  goto L_1179d9fd;
L_1179d9d1:;
  /* 1179d9d1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179d9d4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179d9da jne 0x1179d9e8 */
  if (!C.zf) goto L_1179d9e8;
  /* 1179d9dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179d9df mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 1179d9e6 jmp 0x1179d9fd */
  goto L_1179d9fd;
L_1179d9e8:;
  /* 1179d9e8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179d9eb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179d9f1 jne 0x1179d9fd */
  if (!C.zf) goto L_1179d9fd;
  /* 1179d9f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179d9f6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1179d9fd:;
  /* 1179d9fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179da00 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1179da03 push edx */
  push32((uint32_t)(EDX));
  /* 1179da04 push 8 */
  push32((uint32_t)(0x8u));
  /* 1179da06 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1179da09u);
  /* 1179da09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179da0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179da0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179da12 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 1179da15 jmp 0x1179da2e */
  goto L_1179da2e;
L_1179da17:;
  /* 1179da17 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179da1a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1179da21 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179da24 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1179da27 push ecx */
  push32((uint32_t)(ECX));
  /* 1179da28 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1179da2bu);
  /* 1179da2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1179da2e:;
  /* 1179da2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179da31 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179da34 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 1179da37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1179da3a:;
  /* 1179da3a mov esp, ebp */
  ESP = (EBP);
  /* 1179da3c pop ebp */
  EBP = (pop32());
  /* 1179da3d ret  */
  ESPCHK(0x1179d880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da40 @ 0x1179da40 (89 bytes, 35 insns) */
void f_1179da40(void) {
  FTRACE(0x1179da40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179da40 push ebp */
  push32((uint32_t)(EBP));
  /* 1179da41 mov ebp, esp */
  EBP = (ESP);
  /* 1179da43 push ecx */
  push32((uint32_t)(ECX));
  /* 1179da44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179da47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1179da4a:;
  /* 1179da4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179da4d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1179da4f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179da52 je 0x1179da72 */
  if (C.zf) goto L_1179da72;
  /* 1179da54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179da57 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179da5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1179da5d mov ecx, dword ptr [0x117c5c84] */
  ECX = (r32((uint32_t)(0x117c5c84)));
  /* 1179da63 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179da66 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179da69 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179da6b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179da6e jae 0x1179da72 */
  if (!C.cf) goto L_1179da72;
  /* 1179da70 jmp 0x1179da4a */
  goto L_1179da4a;
L_1179da72:;
  /* 1179da72 mov eax, dword ptr [0x117c5c84] */
  EAX = (r32((uint32_t)(0x117c5c84)));
  /* 1179da77 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179da7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179da7d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179da7f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179da82 jae 0x1179da8e */
  if (!C.cf) goto L_1179da8e;
  /* 1179da84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179da87 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1179da89 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179da8c je 0x1179da92 */
  if (C.zf) goto L_1179da92;
L_1179da8e:;
  /* 1179da8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179da90 jmp 0x1179da95 */
  goto L_1179da95;
L_1179da92:;
  /* 1179da92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1179da95:;
  /* 1179da95 mov esp, ebp */
  ESP = (EBP);
  /* 1179da97 pop ebp */
  EBP = (pop32());
  /* 1179da98 ret  */
  ESPCHK(0x1179da40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000daa0 @ 0x1179daa0 (61 bytes, 18 insns) */
void f_1179daa0(void) {
  FTRACE(0x1179daa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179daa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1179daa1 mov ebp, esp */
  EBP = (ESP);
  /* 1179daa3 cmp dword ptr [0x117c7e58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179daaa jne 0x1179dadb */
  if (!C.zf) goto L_1179dadb;
  /* 1179daac push 0xb */
  push32((uint32_t)(0xbu));
  /* 1179daae call 0x1179d7a0 */
  push32(0x1179dab3u); f_1179d7a0();
  /* 1179dab3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dab6 cmp dword ptr [0x117c7e58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179dabd jne 0x1179dad1 */
  if (!C.zf) goto L_1179dad1;
  /* 1179dabf call 0x1179db00 */
  push32(0x1179dac4u); f_1179db00();
  /* 1179dac4 mov eax, dword ptr [0x117c7e58] */
  EAX = (r32((uint32_t)(0x117c7e58)));
  /* 1179dac9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dacc mov dword ptr [0x117c7e58], eax */
  w32((uint32_t)(0x117c7e58), (EAX));
L_1179dad1:;
  /* 1179dad1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 1179dad3 call 0x1179d840 */
  push32(0x1179dad8u); f_1179d840();
  /* 1179dad8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1179dadb:;
  /* 1179dadb pop ebp */
  EBP = (pop32());
  /* 1179dadc ret  */
  ESPCHK(0x1179daa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dae0 @ 0x1179dae0 (30 bytes, 11 insns) */
void f_1179dae0(void) {
  FTRACE(0x1179dae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179dae0 push ebp */
  push32((uint32_t)(EBP));
  /* 1179dae1 mov ebp, esp */
  EBP = (ESP);
  /* 1179dae3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 1179dae5 call 0x1179d7a0 */
  push32(0x1179daeau); f_1179d7a0();
  /* 1179daea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179daed call 0x1179db00 */
  push32(0x1179daf2u); f_1179db00();
  /* 1179daf2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 1179daf4 call 0x1179d840 */
  push32(0x1179daf9u); f_1179d840();
  /* 1179daf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dafc pop ebp */
  EBP = (pop32());
  /* 1179dafd ret  */
  ESPCHK(0x1179dae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db00 @ 0x1179db00 (939 bytes, 266 insns) */
void f_1179db00(void) {
  FTRACE(0x1179db00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179db00 push ebp */
  push32((uint32_t)(EBP));
  /* 1179db01 mov ebp, esp */
  EBP = (ESP);
  /* 1179db03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179db06 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1179db0d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1179db0f call 0x1179d7a0 */
  push32(0x1179db14u); f_1179d7a0();
  /* 1179db14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179db17 mov dword ptr [0x117c7da0], 0 */
  w32((uint32_t)(0x117c7da0), (0x0u));
  /* 1179db21 mov dword ptr [0x117c5d30], 0xffffffff */
  w32((uint32_t)(0x117c5d30), (0xffffffffu));
  /* 1179db2b mov eax, dword ptr [0x117c5d30] */
  EAX = (r32((uint32_t)(0x117c5d30)));
  /* 1179db30 mov dword ptr [0x117c5d20], eax */
  w32((uint32_t)(0x117c5d20), (EAX));
  /* 1179db35 push 0x117c2cf8 */
  push32((uint32_t)(0x117c2cf8u));
  /* 1179db3a call 0x117a28e0 */
  push32(0x1179db3fu); f_117a28e0();
  /* 1179db3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179db42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1179db45 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179db49 jne 0x1179dc83 */
  if (!C.zf) goto L_1179dc83;
  /* 1179db4f push 0xc */
  push32((uint32_t)(0xcu));
  /* 1179db51 call 0x1179d840 */
  push32(0x1179db56u); f_1179d840();
  /* 1179db56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179db59 push 0x117c7da8 */
  push32((uint32_t)(0x117c7da8u));
  /* 1179db5e call dword ptr [0x117ca388] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca388))), 0x1179db64u);
  /* 1179db64 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179db67 je 0x1179dc7e */
  if (C.zf) goto L_1179dc7e;
  /* 1179db6d mov dword ptr [0x117c7da0], 1 */
  w32((uint32_t)(0x117c7da0), (0x1u));
  /* 1179db77 mov ecx, dword ptr [0x117c7da8] */
  ECX = (r32((uint32_t)(0x117c7da8)));
  /* 1179db7d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179db80 mov dword ptr [0x117c5c88], ecx */
  w32((uint32_t)(0x117c5c88), (ECX));
  /* 1179db86 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1179db88 mov dx, word ptr [0x117c7dee] */
  DX = (r16((uint32_t)(0x117c7dee)));
  /* 1179db8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1179db91 je 0x1179dba9 */
  if (C.zf) goto L_1179dba9;
  /* 1179db93 mov eax, dword ptr [0x117c7dfc] */
  EAX = (r32((uint32_t)(0x117c7dfc)));
  /* 1179db98 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179db9b mov ecx, dword ptr [0x117c5c88] */
  ECX = (r32((uint32_t)(0x117c5c88)));
  /* 1179dba1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dba3 mov dword ptr [0x117c5c88], ecx */
  w32((uint32_t)(0x117c5c88), (ECX));
L_1179dba9:;
  /* 1179dba9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1179dbab mov dx, word ptr [0x117c7e42] */
  DX = (r16((uint32_t)(0x117c7e42)));
  /* 1179dbb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1179dbb4 je 0x1179dbde */
  if (C.zf) goto L_1179dbde;
  /* 1179dbb6 cmp dword ptr [0x117c7e50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179dbbd je 0x1179dbde */
  if (C.zf) goto L_1179dbde;
  /* 1179dbbf mov dword ptr [0x117c5c8c], 1 */
  w32((uint32_t)(0x117c5c8c), (0x1u));
  /* 1179dbc9 mov eax, dword ptr [0x117c7e50] */
  EAX = (r32((uint32_t)(0x117c7e50)));
  /* 1179dbce sub eax, dword ptr [0x117c7dfc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c7dfc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179dbd4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179dbd7 mov dword ptr [0x117c5c90], eax */
  w32((uint32_t)(0x117c5c90), (EAX));
  /* 1179dbdc jmp 0x1179dbf2 */
  goto L_1179dbf2;
L_1179dbde:;
  /* 1179dbde mov dword ptr [0x117c5c8c], 0 */
  w32((uint32_t)(0x117c5c8c), (0x0u));
  /* 1179dbe8 mov dword ptr [0x117c5c90], 0 */
  w32((uint32_t)(0x117c5c90), (0x0u));
L_1179dbf2:;
  /* 1179dbf2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1179dbf5 push ecx */
  push32((uint32_t)(ECX));
  /* 1179dbf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179dbf8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1179dbfa mov edx, dword ptr [0x117c5d14] */
  EDX = (r32((uint32_t)(0x117c5d14)));
  /* 1179dc00 push edx */
  push32((uint32_t)(EDX));
  /* 1179dc01 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1179dc03 push 0x117c7dac */
  push32((uint32_t)(0x117c7dacu));
  /* 1179dc08 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1179dc0d mov eax, dword ptr [0x117c7e80] */
  EAX = (r32((uint32_t)(0x117c7e80)));
  /* 1179dc12 push eax */
  push32((uint32_t)(EAX));
  /* 1179dc13 call dword ptr [0x117ca374] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca374))), 0x1179dc19u);
  /* 1179dc19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1179dc1b je 0x1179dc2f */
  if (C.zf) goto L_1179dc2f;
  /* 1179dc1d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179dc21 jne 0x1179dc2f */
  if (!C.zf) goto L_1179dc2f;
  /* 1179dc23 mov ecx, dword ptr [0x117c5d14] */
  ECX = (r32((uint32_t)(0x117c5d14)));
  /* 1179dc29 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1179dc2d jmp 0x1179dc38 */
  goto L_1179dc38;
L_1179dc2f:;
  /* 1179dc2f mov edx, dword ptr [0x117c5d14] */
  EDX = (r32((uint32_t)(0x117c5d14)));
  /* 1179dc35 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_1179dc38:;
  /* 1179dc38 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1179dc3b push eax */
  push32((uint32_t)(EAX));
  /* 1179dc3c push 0 */
  push32((uint32_t)(0x0u));
  /* 1179dc3e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1179dc40 mov ecx, dword ptr [0x117c5d18] */
  ECX = (r32((uint32_t)(0x117c5d18)));
  /* 1179dc46 push ecx */
  push32((uint32_t)(ECX));
  /* 1179dc47 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1179dc49 push 0x117c7e00 */
  push32((uint32_t)(0x117c7e00u));
  /* 1179dc4e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1179dc53 mov edx, dword ptr [0x117c7e80] */
  EDX = (r32((uint32_t)(0x117c7e80)));
  /* 1179dc59 push edx */
  push32((uint32_t)(EDX));
  /* 1179dc5a call dword ptr [0x117ca374] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca374))), 0x1179dc60u);
  /* 1179dc60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1179dc62 je 0x1179dc75 */
  if (C.zf) goto L_1179dc75;
  /* 1179dc64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179dc68 jne 0x1179dc75 */
  if (!C.zf) goto L_1179dc75;
  /* 1179dc6a mov eax, dword ptr [0x117c5d18] */
  EAX = (r32((uint32_t)(0x117c5d18)));
  /* 1179dc6f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 1179dc73 jmp 0x1179dc7e */
  goto L_1179dc7e;
L_1179dc75:;
  /* 1179dc75 mov ecx, dword ptr [0x117c5d18] */
  ECX = (r32((uint32_t)(0x117c5d18)));
  /* 1179dc7b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1179dc7e:;
  /* 1179dc7e jmp 0x1179dea7 */
  goto L_1179dea7;
L_1179dc83:;
  /* 1179dc83 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179dc86 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1179dc89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1179dc8b je 0x1179dcad */
  if (C.zf) goto L_1179dcad;
  /* 1179dc8d cmp dword ptr [0x117c7e54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179dc94 je 0x1179dcbc */
  if (C.zf) goto L_1179dcbc;
  /* 1179dc96 mov ecx, dword ptr [0x117c7e54] */
  ECX = (r32((uint32_t)(0x117c7e54)));
  /* 1179dc9c push ecx */
  push32((uint32_t)(ECX));
  /* 1179dc9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179dca0 push edx */
  push32((uint32_t)(EDX));
  /* 1179dca1 call 0x117a2820 */
  push32(0x1179dca6u); f_117a2820();
  /* 1179dca6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dca9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1179dcab jne 0x1179dcbc */
  if (!C.zf) goto L_1179dcbc;
L_1179dcad:;
  /* 1179dcad push 0xc */
  push32((uint32_t)(0xcu));
  /* 1179dcaf call 0x1179d840 */
  push32(0x1179dcb4u); f_1179d840();
  /* 1179dcb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dcb7 jmp 0x1179dea7 */
  goto L_1179dea7;
L_1179dcbc:;
  /* 1179dcbc push 2 */
  push32((uint32_t)(0x2u));
  /* 1179dcbe mov eax, dword ptr [0x117c7e54] */
  EAX = (r32((uint32_t)(0x117c7e54)));
  /* 1179dcc3 push eax */
  push32((uint32_t)(EAX));
  /* 1179dcc4 call 0x1179a830 */
  push32(0x1179dcc9u); f_1179a830();
  /* 1179dcc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dccc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 1179dcd1 push 0x117c2cf0 */
  push32((uint32_t)(0x117c2cf0u));
  /* 1179dcd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1179dcd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179dcdb push ecx */
  push32((uint32_t)(ECX));
  /* 1179dcdc call 0x1179cbd0 */
  push32(0x1179dce1u); f_1179cbd0();
  /* 1179dce1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dce4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dce7 push eax */
  push32((uint32_t)(EAX));
  /* 1179dce8 call 0x11799da0 */
  push32(0x1179dcedu); f_11799da0();
  /* 1179dced add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dcf0 mov dword ptr [0x117c7e54], eax */
  w32((uint32_t)(0x117c7e54), (EAX));
  /* 1179dcf5 cmp dword ptr [0x117c7e54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179dcfc jne 0x1179dd0d */
  if (!C.zf) goto L_1179dd0d;
  /* 1179dcfe push 0xc */
  push32((uint32_t)(0xcu));
  /* 1179dd00 call 0x1179d840 */
  push32(0x1179dd05u); f_1179d840();
  /* 1179dd05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dd08 jmp 0x1179dea7 */
  goto L_1179dea7;
L_1179dd0d:;
  /* 1179dd0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179dd10 push edx */
  push32((uint32_t)(EDX));
  /* 1179dd11 mov eax, dword ptr [0x117c7e54] */
  EAX = (r32((uint32_t)(0x117c7e54)));
  /* 1179dd16 push eax */
  push32((uint32_t)(EAX));
  /* 1179dd17 call 0x1179cd50 */
  push32(0x1179dd1cu); f_1179cd50();
  /* 1179dd1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dd1f push 0xc */
  push32((uint32_t)(0xcu));
  /* 1179dd21 call 0x1179d840 */
  push32(0x1179dd26u); f_1179d840();
  /* 1179dd26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dd29 push 3 */
  push32((uint32_t)(0x3u));
  /* 1179dd2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179dd2e push ecx */
  push32((uint32_t)(ECX));
  /* 1179dd2f mov edx, dword ptr [0x117c5d14] */
  EDX = (r32((uint32_t)(0x117c5d14)));
  /* 1179dd35 push edx */
  push32((uint32_t)(EDX));
  /* 1179dd36 call 0x1179d5c0 */
  push32(0x1179dd3bu); f_1179d5c0();
  /* 1179dd3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dd3e mov eax, dword ptr [0x117c5d14] */
  EAX = (r32((uint32_t)(0x117c5d14)));
  /* 1179dd43 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 1179dd47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179dd4a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dd4d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1179dd50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179dd53 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1179dd56 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179dd59 jne 0x1179dd6d */
  if (!C.zf) goto L_1179dd6d;
  /* 1179dd5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179dd5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dd61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1179dd64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179dd67 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dd6a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1179dd6d:;
  /* 1179dd6d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179dd70 push eax */
  push32((uint32_t)(EAX));
  /* 1179dd71 call 0x117a25d0 */
  push32(0x1179dd76u); f_117a25d0();
  /* 1179dd76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dd79 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179dd7f mov dword ptr [0x117c5c88], eax */
  w32((uint32_t)(0x117c5c88), (EAX));
L_1179dd84:;
  /* 1179dd84 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179dd87 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1179dd8a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179dd8d je 0x1179dda5 */
  if (C.zf) goto L_1179dda5;
  /* 1179dd8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179dd92 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1179dd95 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179dd98 jl 0x1179ddb0 */
  if ((C.sf!=C.of)) goto L_1179ddb0;
  /* 1179dd9a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179dd9d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1179dda0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179dda3 jg 0x1179ddb0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1179ddb0;
L_1179dda5:;
  /* 1179dda5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179dda8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ddab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1179ddae jmp 0x1179dd84 */
  goto L_1179dd84;
L_1179ddb0:;
  /* 1179ddb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179ddb3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1179ddb6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179ddb9 jne 0x1179de55 */
  if (!C.zf) goto L_1179de55;
  /* 1179ddbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179ddc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ddc5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1179ddc8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179ddcb push edx */
  push32((uint32_t)(EDX));
  /* 1179ddcc call 0x117a25d0 */
  push32(0x1179ddd1u); f_117a25d0();
  /* 1179ddd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ddd4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179ddd7 mov ecx, dword ptr [0x117c5c88] */
  ECX = (r32((uint32_t)(0x117c5c88)));
  /* 1179dddd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179dddf mov dword ptr [0x117c5c88], ecx */
  w32((uint32_t)(0x117c5c88), (ECX));
L_1179dde5:;
  /* 1179dde5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179dde8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1179ddeb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179ddee jl 0x1179de06 */
  if ((C.sf!=C.of)) goto L_1179de06;
  /* 1179ddf0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179ddf3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1179ddf6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179ddf9 jg 0x1179de06 */
  if ((!C.zf&&C.sf==C.of)) goto L_1179de06;
  /* 1179ddfb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179ddfe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179de01 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1179de04 jmp 0x1179dde5 */
  goto L_1179dde5;
L_1179de06:;
  /* 1179de06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179de09 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1179de0c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179de0f jne 0x1179de55 */
  if (!C.zf) goto L_1179de55;
  /* 1179de11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179de14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179de17 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1179de1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179de1d push ecx */
  push32((uint32_t)(ECX));
  /* 1179de1e call 0x117a25d0 */
  push32(0x1179de23u); f_117a25d0();
  /* 1179de23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179de26 mov edx, dword ptr [0x117c5c88] */
  EDX = (r32((uint32_t)(0x117c5c88)));
  /* 1179de2c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179de2e mov dword ptr [0x117c5c88], edx */
  w32((uint32_t)(0x117c5c88), (EDX));
L_1179de34:;
  /* 1179de34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179de37 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1179de3a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179de3d jl 0x1179de55 */
  if ((C.sf!=C.of)) goto L_1179de55;
  /* 1179de3f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179de42 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1179de45 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179de48 jg 0x1179de55 */
  if ((!C.zf&&C.sf==C.of)) goto L_1179de55;
  /* 1179de4a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179de4d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179de50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1179de53 jmp 0x1179de34 */
  goto L_1179de34;
L_1179de55:;
  /* 1179de55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179de59 je 0x1179de69 */
  if (C.zf) goto L_1179de69;
  /* 1179de5b mov edx, dword ptr [0x117c5c88] */
  EDX = (r32((uint32_t)(0x117c5c88)));
  /* 1179de61 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1179de63 mov dword ptr [0x117c5c88], edx */
  w32((uint32_t)(0x117c5c88), (EDX));
L_1179de69:;
  /* 1179de69 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179de6c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1179de6f mov dword ptr [0x117c5c8c], ecx */
  w32((uint32_t)(0x117c5c8c), (ECX));
  /* 1179de75 cmp dword ptr [0x117c5c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c5c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179de7c je 0x1179de9e */
  if (C.zf) goto L_1179de9e;
  /* 1179de7e push 3 */
  push32((uint32_t)(0x3u));
  /* 1179de80 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179de83 push edx */
  push32((uint32_t)(EDX));
  /* 1179de84 mov eax, dword ptr [0x117c5d18] */
  EAX = (r32((uint32_t)(0x117c5d18)));
  /* 1179de89 push eax */
  push32((uint32_t)(EAX));
  /* 1179de8a call 0x1179d5c0 */
  push32(0x1179de8fu); f_1179d5c0();
  /* 1179de8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179de92 mov ecx, dword ptr [0x117c5d18] */
  ECX = (r32((uint32_t)(0x117c5d18)));
  /* 1179de98 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1179de9c jmp 0x1179dea7 */
  goto L_1179dea7;
L_1179de9e:;
  /* 1179de9e mov edx, dword ptr [0x117c5d18] */
  EDX = (r32((uint32_t)(0x117c5d18)));
  /* 1179dea4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_1179dea7:;
  /* 1179dea7 mov esp, ebp */
  ESP = (EBP);
  /* 1179dea9 pop ebp */
  EBP = (pop32());
  /* 1179deaa ret  */
  ESPCHK(0x1179db00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000deb0 @ 0x1179deb0 (46 bytes, 18 insns) */
void f_1179deb0(void) {
  FTRACE(0x1179deb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179deb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1179deb1 mov ebp, esp */
  EBP = (ESP);
  /* 1179deb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1179deb4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 1179deb6 call 0x1179d7a0 */
  push32(0x1179debbu); f_1179d7a0();
  /* 1179debb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179debe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179dec1 push eax */
  push32((uint32_t)(EAX));
  /* 1179dec2 call 0x1179dee0 */
  push32(0x1179dec7u); f_1179dee0();
  /* 1179dec7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179deca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1179decd push 0xb */
  push32((uint32_t)(0xbu));
  /* 1179decf call 0x1179d840 */
  push32(0x1179ded4u); f_1179d840();
  /* 1179ded4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ded7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179deda mov esp, ebp */
  ESP = (EBP);
  /* 1179dedc pop ebp */
  EBP = (pop32());
  /* 1179dedd ret  */
  ESPCHK(0x1179deb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dee0 @ 0x1179dee0 (762 bytes, 246 insns) */
void f_1179dee0(void) {
  FTRACE(0x1179dee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179dee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1179dee1 mov ebp, esp */
  EBP = (ESP);
  /* 1179dee3 push ecx */
  push32((uint32_t)(ECX));
  /* 1179dee4 cmp dword ptr [0x117c5c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c5c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179deeb jne 0x1179def4 */
  if (!C.zf) goto L_1179def4;
  /* 1179deed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179deef jmp 0x1179e1d6 */
  goto L_1179e1d6;
L_1179def4:;
  /* 1179def4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179def7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1179defa cmp ecx, dword ptr [0x117c5d20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117c5d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179df00 jne 0x1179df14 */
  if (!C.zf) goto L_1179df14;
  /* 1179df02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179df05 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1179df08 cmp eax, dword ptr [0x117c5d30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c5d30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179df0e je 0x1179e0db */
  if (C.zf) goto L_1179e0db;
L_1179df14:;
  /* 1179df14 cmp dword ptr [0x117c7da0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7da0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179df1b je 0x1179e095 */
  if (C.zf) goto L_1179e095;
  /* 1179df21 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1179df23 mov cx, word ptr [0x117c7e40] */
  CX = (r16((uint32_t)(0x117c7e40)));
  /* 1179df2a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179df2c jne 0x1179df89 */
  if (!C.zf) goto L_1179df89;
  /* 1179df2e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1179df30 mov dx, word ptr [0x117c7e4e] */
  DX = (r16((uint32_t)(0x117c7e4e)));
  /* 1179df37 push edx */
  push32((uint32_t)(EDX));
  /* 1179df38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179df3a mov ax, word ptr [0x117c7e4c] */
  AX = (r16((uint32_t)(0x117c7e4c)));
  /* 1179df40 push eax */
  push32((uint32_t)(EAX));
  /* 1179df41 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1179df43 mov cx, word ptr [0x117c7e4a] */
  CX = (r16((uint32_t)(0x117c7e4a)));
  /* 1179df4a push ecx */
  push32((uint32_t)(ECX));
  /* 1179df4b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1179df4d mov dx, word ptr [0x117c7e48] */
  DX = (r16((uint32_t)(0x117c7e48)));
  /* 1179df54 push edx */
  push32((uint32_t)(EDX));
  /* 1179df55 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179df57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179df59 mov ax, word ptr [0x117c7e44] */
  AX = (r16((uint32_t)(0x117c7e44)));
  /* 1179df5f push eax */
  push32((uint32_t)(EAX));
  /* 1179df60 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1179df62 mov cx, word ptr [0x117c7e46] */
  CX = (r16((uint32_t)(0x117c7e46)));
  /* 1179df69 push ecx */
  push32((uint32_t)(ECX));
  /* 1179df6a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1179df6c mov dx, word ptr [0x117c7e42] */
  DX = (r16((uint32_t)(0x117c7e42)));
  /* 1179df73 push edx */
  push32((uint32_t)(EDX));
  /* 1179df74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179df77 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1179df7a push ecx */
  push32((uint32_t)(ECX));
  /* 1179df7b push 1 */
  push32((uint32_t)(0x1u));
  /* 1179df7d push 1 */
  push32((uint32_t)(0x1u));
  /* 1179df7f call 0x1179e1e0 */
  push32(0x1179df84u); f_1179e1e0();
  /* 1179df84 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179df87 jmp 0x1179dfda */
  goto L_1179dfda;
L_1179df89:;
  /* 1179df89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1179df8b mov dx, word ptr [0x117c7e4e] */
  DX = (r16((uint32_t)(0x117c7e4e)));
  /* 1179df92 push edx */
  push32((uint32_t)(EDX));
  /* 1179df93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179df95 mov ax, word ptr [0x117c7e4c] */
  AX = (r16((uint32_t)(0x117c7e4c)));
  /* 1179df9b push eax */
  push32((uint32_t)(EAX));
  /* 1179df9c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1179df9e mov cx, word ptr [0x117c7e4a] */
  CX = (r16((uint32_t)(0x117c7e4a)));
  /* 1179dfa5 push ecx */
  push32((uint32_t)(ECX));
  /* 1179dfa6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1179dfa8 mov dx, word ptr [0x117c7e48] */
  DX = (r16((uint32_t)(0x117c7e48)));
  /* 1179dfaf push edx */
  push32((uint32_t)(EDX));
  /* 1179dfb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179dfb2 mov ax, word ptr [0x117c7e46] */
  AX = (r16((uint32_t)(0x117c7e46)));
  /* 1179dfb8 push eax */
  push32((uint32_t)(EAX));
  /* 1179dfb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179dfbb push 0 */
  push32((uint32_t)(0x0u));
  /* 1179dfbd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1179dfbf mov cx, word ptr [0x117c7e42] */
  CX = (r16((uint32_t)(0x117c7e42)));
  /* 1179dfc6 push ecx */
  push32((uint32_t)(ECX));
  /* 1179dfc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179dfca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1179dfcd push eax */
  push32((uint32_t)(EAX));
  /* 1179dfce push 0 */
  push32((uint32_t)(0x0u));
  /* 1179dfd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1179dfd2 call 0x1179e1e0 */
  push32(0x1179dfd7u); f_1179e1e0();
  /* 1179dfd7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1179dfda:;
  /* 1179dfda xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1179dfdc mov cx, word ptr [0x117c7dec] */
  CX = (r16((uint32_t)(0x117c7dec)));
  /* 1179dfe3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179dfe5 jne 0x1179e042 */
  if (!C.zf) goto L_1179e042;
  /* 1179dfe7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1179dfe9 mov dx, word ptr [0x117c7dfa] */
  DX = (r16((uint32_t)(0x117c7dfa)));
  /* 1179dff0 push edx */
  push32((uint32_t)(EDX));
  /* 1179dff1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179dff3 mov ax, word ptr [0x117c7df8] */
  AX = (r16((uint32_t)(0x117c7df8)));
  /* 1179dff9 push eax */
  push32((uint32_t)(EAX));
  /* 1179dffa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1179dffc mov cx, word ptr [0x117c7df6] */
  CX = (r16((uint32_t)(0x117c7df6)));
  /* 1179e003 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e004 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1179e006 mov dx, word ptr [0x117c7df4] */
  DX = (r16((uint32_t)(0x117c7df4)));
  /* 1179e00d push edx */
  push32((uint32_t)(EDX));
  /* 1179e00e push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e010 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179e012 mov ax, word ptr [0x117c7df0] */
  AX = (r16((uint32_t)(0x117c7df0)));
  /* 1179e018 push eax */
  push32((uint32_t)(EAX));
  /* 1179e019 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1179e01b mov cx, word ptr [0x117c7df2] */
  CX = (r16((uint32_t)(0x117c7df2)));
  /* 1179e022 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e023 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1179e025 mov dx, word ptr [0x117c7dee] */
  DX = (r16((uint32_t)(0x117c7dee)));
  /* 1179e02c push edx */
  push32((uint32_t)(EDX));
  /* 1179e02d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e030 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1179e033 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e034 push 1 */
  push32((uint32_t)(0x1u));
  /* 1179e036 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e038 call 0x1179e1e0 */
  push32(0x1179e03du); f_1179e1e0();
  /* 1179e03d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e040 jmp 0x1179e093 */
  goto L_1179e093;
L_1179e042:;
  /* 1179e042 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1179e044 mov dx, word ptr [0x117c7dfa] */
  DX = (r16((uint32_t)(0x117c7dfa)));
  /* 1179e04b push edx */
  push32((uint32_t)(EDX));
  /* 1179e04c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179e04e mov ax, word ptr [0x117c7df8] */
  AX = (r16((uint32_t)(0x117c7df8)));
  /* 1179e054 push eax */
  push32((uint32_t)(EAX));
  /* 1179e055 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1179e057 mov cx, word ptr [0x117c7df6] */
  CX = (r16((uint32_t)(0x117c7df6)));
  /* 1179e05e push ecx */
  push32((uint32_t)(ECX));
  /* 1179e05f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1179e061 mov dx, word ptr [0x117c7df4] */
  DX = (r16((uint32_t)(0x117c7df4)));
  /* 1179e068 push edx */
  push32((uint32_t)(EDX));
  /* 1179e069 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179e06b mov ax, word ptr [0x117c7df2] */
  AX = (r16((uint32_t)(0x117c7df2)));
  /* 1179e071 push eax */
  push32((uint32_t)(EAX));
  /* 1179e072 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e074 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e076 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1179e078 mov cx, word ptr [0x117c7dee] */
  CX = (r16((uint32_t)(0x117c7dee)));
  /* 1179e07f push ecx */
  push32((uint32_t)(ECX));
  /* 1179e080 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e083 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1179e086 push eax */
  push32((uint32_t)(EAX));
  /* 1179e087 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e089 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e08b call 0x1179e1e0 */
  push32(0x1179e090u); f_1179e1e0();
  /* 1179e090 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1179e093:;
  /* 1179e093 jmp 0x1179e0db */
  goto L_1179e0db;
L_1179e095:;
  /* 1179e095 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e097 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e099 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e09b push 2 */
  push32((uint32_t)(0x2u));
  /* 1179e09d push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e09f push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e0a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1179e0a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 1179e0a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e0a8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1179e0ab push edx */
  push32((uint32_t)(EDX));
  /* 1179e0ac push 1 */
  push32((uint32_t)(0x1u));
  /* 1179e0ae push 1 */
  push32((uint32_t)(0x1u));
  /* 1179e0b0 call 0x1179e1e0 */
  push32(0x1179e0b5u); f_1179e1e0();
  /* 1179e0b5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e0b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e0ba push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e0bc push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e0be push 2 */
  push32((uint32_t)(0x2u));
  /* 1179e0c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e0c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e0c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 1179e0c6 push 0xa */
  push32((uint32_t)(0xau));
  /* 1179e0c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e0cb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1179e0ce push ecx */
  push32((uint32_t)(ECX));
  /* 1179e0cf push 1 */
  push32((uint32_t)(0x1u));
  /* 1179e0d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e0d3 call 0x1179e1e0 */
  push32(0x1179e0d8u); f_1179e1e0();
  /* 1179e0d8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1179e0db:;
  /* 1179e0db mov edx, dword ptr [0x117c5d24] */
  EDX = (r32((uint32_t)(0x117c5d24)));
  /* 1179e0e1 cmp edx, dword ptr [0x117c5d34] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x117c5d34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e0e7 jge 0x1179e134 */
  if ((C.sf==C.of)) goto L_1179e134;
  /* 1179e0e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e0ec mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1179e0ef cmp ecx, dword ptr [0x117c5d24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117c5d24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e0f5 jl 0x1179e105 */
  if ((C.sf!=C.of)) goto L_1179e105;
  /* 1179e0f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e0fa mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1179e0fd cmp eax, dword ptr [0x117c5d34] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c5d34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e103 jle 0x1179e10c */
  if ((C.zf||C.sf!=C.of)) goto L_1179e10c;
L_1179e105:;
  /* 1179e105 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179e107 jmp 0x1179e1d6 */
  goto L_1179e1d6;
L_1179e10c:;
  /* 1179e10c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e10f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1179e112 cmp edx, dword ptr [0x117c5d24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x117c5d24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e118 jle 0x1179e132 */
  if ((C.zf||C.sf!=C.of)) goto L_1179e132;
  /* 1179e11a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e11d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1179e120 cmp ecx, dword ptr [0x117c5d34] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117c5d34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e126 jge 0x1179e132 */
  if ((C.sf==C.of)) goto L_1179e132;
  /* 1179e128 mov eax, 1 */
  EAX = (0x1u);
  /* 1179e12d jmp 0x1179e1d6 */
  goto L_1179e1d6;
L_1179e132:;
  /* 1179e132 jmp 0x1179e177 */
  goto L_1179e177;
L_1179e134:;
  /* 1179e134 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e137 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1179e13a cmp eax, dword ptr [0x117c5d34] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c5d34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e140 jl 0x1179e150 */
  if ((C.sf!=C.of)) goto L_1179e150;
  /* 1179e142 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e145 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1179e148 cmp edx, dword ptr [0x117c5d24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x117c5d24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e14e jle 0x1179e157 */
  if ((C.zf||C.sf!=C.of)) goto L_1179e157;
L_1179e150:;
  /* 1179e150 mov eax, 1 */
  EAX = (0x1u);
  /* 1179e155 jmp 0x1179e1d6 */
  goto L_1179e1d6;
L_1179e157:;
  /* 1179e157 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e15a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1179e15d cmp ecx, dword ptr [0x117c5d34] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117c5d34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e163 jle 0x1179e177 */
  if ((C.zf||C.sf!=C.of)) goto L_1179e177;
  /* 1179e165 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e168 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1179e16b cmp eax, dword ptr [0x117c5d24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c5d24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e171 jge 0x1179e177 */
  if ((C.sf==C.of)) goto L_1179e177;
  /* 1179e173 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179e175 jmp 0x1179e1d6 */
  goto L_1179e1d6;
L_1179e177:;
  /* 1179e177 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e17a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1179e17d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179e180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e183 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1179e185 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e187 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e18a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1179e18d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179e193 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e195 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179e19b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1179e19e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e1a1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1179e1a4 cmp edx, dword ptr [0x117c5d24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x117c5d24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e1aa jne 0x1179e1c2 */
  if (!C.zf) goto L_1179e1c2;
  /* 1179e1ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179e1af cmp eax, dword ptr [0x117c5d28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c5d28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e1b5 jl 0x1179e1be */
  if ((C.sf!=C.of)) goto L_1179e1be;
  /* 1179e1b7 mov eax, 1 */
  EAX = (0x1u);
  /* 1179e1bc jmp 0x1179e1d6 */
  goto L_1179e1d6;
L_1179e1be:;
  /* 1179e1be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179e1c0 jmp 0x1179e1d6 */
  goto L_1179e1d6;
L_1179e1c2:;
  /* 1179e1c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179e1c5 cmp ecx, dword ptr [0x117c5d38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117c5d38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e1cb jge 0x1179e1d4 */
  if ((C.sf==C.of)) goto L_1179e1d4;
  /* 1179e1cd mov eax, 1 */
  EAX = (0x1u);
  /* 1179e1d2 jmp 0x1179e1d6 */
  goto L_1179e1d6;
L_1179e1d4:;
  /* 1179e1d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1179e1d6:;
  /* 1179e1d6 mov esp, ebp */
  ESP = (EBP);
  /* 1179e1d8 pop ebp */
  EBP = (pop32());
  /* 1179e1d9 ret  */
  ESPCHK(0x1179dee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1e0 @ 0x1179e1e0 (504 bytes, 145 insns) */
void f_1179e1e0(void) {
  FTRACE(0x1179e1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179e1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1179e1e1 mov ebp, esp */
  EBP = (ESP);
  /* 1179e1e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179e1e6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e1ea jne 0x1179e2bc */
  if (!C.zf) goto L_1179e2bc;
  /* 1179e1f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1179e1f3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1179e1f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1179e1f8 jne 0x1179e209 */
  if (!C.zf) goto L_1179e209;
  /* 1179e1fa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1179e1fd mov edx, dword ptr [ecx*4 + 0x117c5d38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x117c5d38)));
  /* 1179e204 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1179e207 jmp 0x1179e216 */
  goto L_1179e216;
L_1179e209:;
  /* 1179e209 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1179e20c mov ecx, dword ptr [eax*4 + 0x117c5d6c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x117c5d6c)));
  /* 1179e213 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1179e216:;
  /* 1179e216 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179e219 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e21c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1179e21f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1179e222 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179e225 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179e22b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179e22e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e230 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1179e233 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179e236 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 1179e239 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1179e23d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1179e23e mov ecx, 7 */
  ECX = (0x7u);
  /* 1179e243 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1179e245 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1179e248 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179e24b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e24e jge 0x1179e269 */
  if ((C.sf==C.of)) goto L_1179e269;
  /* 1179e250 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1179e253 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179e256 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1179e259 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179e25c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179e25f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e262 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e264 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1179e267 jmp 0x1179e27d */
  goto L_1179e27d;
L_1179e269:;
  /* 1179e269 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1179e26c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179e26f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1179e272 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179e275 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e278 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e27a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1179e27d:;
  /* 1179e27d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e281 jne 0x1179e2ba */
  if (!C.zf) goto L_1179e2ba;
  /* 1179e283 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1179e286 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1179e289 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179e28b jne 0x1179e29c */
  if (!C.zf) goto L_1179e29c;
  /* 1179e28d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1179e290 mov eax, dword ptr [edx*4 + 0x117c5d3c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x117c5d3c)));
  /* 1179e297 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1179e29a jmp 0x1179e2a9 */
  goto L_1179e2a9;
L_1179e29c:;
  /* 1179e29c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1179e29f mov edx, dword ptr [ecx*4 + 0x117c5d70] */
  EDX = (r32((uint32_t)(ECX*4 + 0x117c5d70)));
  /* 1179e2a6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1179e2a9:;
  /* 1179e2a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179e2ac cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e2af jle 0x1179e2ba */
  if ((C.zf||C.sf!=C.of)) goto L_1179e2ba;
  /* 1179e2b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179e2b4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179e2b7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1179e2ba:;
  /* 1179e2ba jmp 0x1179e2f1 */
  goto L_1179e2f1;
L_1179e2bc:;
  /* 1179e2bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1179e2bf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1179e2c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1179e2c4 jne 0x1179e2d5 */
  if (!C.zf) goto L_1179e2d5;
  /* 1179e2c6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1179e2c9 mov ecx, dword ptr [eax*4 + 0x117c5d38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x117c5d38)));
  /* 1179e2d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1179e2d3 jmp 0x1179e2e2 */
  goto L_1179e2e2;
L_1179e2d5:;
  /* 1179e2d5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1179e2d8 mov eax, dword ptr [edx*4 + 0x117c5d6c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x117c5d6c)));
  /* 1179e2df mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1179e2e2:;
  /* 1179e2e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179e2e5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1179e2e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179e2eb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e2ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1179e2f1:;
  /* 1179e2f1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e2f5 jne 0x1179e331 */
  if (!C.zf) goto L_1179e331;
  /* 1179e2f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179e2fa mov dword ptr [0x117c5d24], eax */
  w32((uint32_t)(0x117c5d24), (EAX));
  /* 1179e2ff mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1179e302 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179e305 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 1179e308 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e30a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179e30d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1179e310 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e312 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179e318 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1179e31b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e31d mov dword ptr [0x117c5d28], ecx */
  w32((uint32_t)(0x117c5d28), (ECX));
  /* 1179e323 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1179e326 mov dword ptr [0x117c5d20], edx */
  w32((uint32_t)(0x117c5d20), (EDX));
  /* 1179e32c jmp 0x1179e3d4 */
  goto L_1179e3d4;
L_1179e331:;
  /* 1179e331 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179e334 mov dword ptr [0x117c5d34], eax */
  w32((uint32_t)(0x117c5d34), (EAX));
  /* 1179e339 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1179e33c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179e33f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 1179e342 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e344 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179e347 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1179e34a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e34c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179e352 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1179e355 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e357 mov dword ptr [0x117c5d38], ecx */
  w32((uint32_t)(0x117c5d38), (ECX));
  /* 1179e35d mov edx, dword ptr [0x117c5c90] */
  EDX = (r32((uint32_t)(0x117c5c90)));
  /* 1179e363 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179e369 mov eax, dword ptr [0x117c5d38] */
  EAX = (r32((uint32_t)(0x117c5d38)));
  /* 1179e36e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e370 mov dword ptr [0x117c5d38], eax */
  w32((uint32_t)(0x117c5d38), (EAX));
  /* 1179e375 cmp dword ptr [0x117c5d38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c5d38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e37c jge 0x1179e3a1 */
  if ((C.sf==C.of)) goto L_1179e3a1;
  /* 1179e37e mov ecx, dword ptr [0x117c5d38] */
  ECX = (r32((uint32_t)(0x117c5d38)));
  /* 1179e384 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e38a mov dword ptr [0x117c5d38], ecx */
  w32((uint32_t)(0x117c5d38), (ECX));
  /* 1179e390 mov edx, dword ptr [0x117c5d34] */
  EDX = (r32((uint32_t)(0x117c5d34)));
  /* 1179e396 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179e399 mov dword ptr [0x117c5d34], edx */
  w32((uint32_t)(0x117c5d34), (EDX));
  /* 1179e39f jmp 0x1179e3cb */
  goto L_1179e3cb;
L_1179e3a1:;
  /* 1179e3a1 cmp dword ptr [0x117c5d38], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x117c5d38))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e3ab jl 0x1179e3cb */
  if ((C.sf!=C.of)) goto L_1179e3cb;
  /* 1179e3ad mov eax, dword ptr [0x117c5d38] */
  EAX = (r32((uint32_t)(0x117c5d38)));
  /* 1179e3b2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179e3b7 mov dword ptr [0x117c5d38], eax */
  w32((uint32_t)(0x117c5d38), (EAX));
  /* 1179e3bc mov ecx, dword ptr [0x117c5d34] */
  ECX = (r32((uint32_t)(0x117c5d34)));
  /* 1179e3c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e3c5 mov dword ptr [0x117c5d34], ecx */
  w32((uint32_t)(0x117c5d34), (ECX));
L_1179e3cb:;
  /* 1179e3cb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1179e3ce mov dword ptr [0x117c5d30], edx */
  w32((uint32_t)(0x117c5d30), (EDX));
L_1179e3d4:;
  /* 1179e3d4 mov esp, ebp */
  ESP = (EBP);
  /* 1179e3d6 pop ebp */
  EBP = (pop32());
  /* 1179e3d7 ret  */
  ESPCHK(0x1179e1e0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x1179e3e0 (48 bytes, 17 insns) */
void f_1179e3e0(void) {
  FTRACE(0x1179e3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179e3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1179e3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1179e3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e3e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 1179e3e6 call 0x1179d7a0 */
  push32(0x1179e3ebu); f_1179d7a0();
  /* 1179e3eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e3ee mov eax, dword ptr [0x117c7e60] */
  EAX = (r32((uint32_t)(0x117c7e60)));
  /* 1179e3f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1179e3f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e3f9 mov dword ptr [0x117c7e60], ecx */
  w32((uint32_t)(0x117c7e60), (ECX));
  /* 1179e3ff push 9 */
  push32((uint32_t)(0x9u));
  /* 1179e401 call 0x1179d840 */
  push32(0x1179e406u); f_1179d840();
  /* 1179e406 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e409 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179e40c mov esp, ebp */
  ESP = (EBP);
  /* 1179e40e pop ebp */
  EBP = (pop32());
  /* 1179e40f ret  */
  ESPCHK(0x1179e3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e410 @ 0x1179e410 (10 bytes, 5 insns) */
void f_1179e410(void) {
  FTRACE(0x1179e410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179e410 push ebp */
  push32((uint32_t)(EBP));
  /* 1179e411 mov ebp, esp */
  EBP = (ESP);
  /* 1179e413 mov eax, dword ptr [0x117c7e60] */
  EAX = (r32((uint32_t)(0x117c7e60)));
  /* 1179e418 pop ebp */
  EBP = (pop32());
  /* 1179e419 ret  */
  ESPCHK(0x1179e410u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x1179e420 (45 bytes, 19 insns) */
void f_1179e420(void) {
  FTRACE(0x1179e420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179e420 push ebp */
  push32((uint32_t)(EBP));
  /* 1179e421 mov ebp, esp */
  EBP = (ESP);
  /* 1179e423 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e424 mov eax, dword ptr [0x117c7e60] */
  EAX = (r32((uint32_t)(0x117c7e60)));
  /* 1179e429 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1179e42c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e430 je 0x1179e440 */
  if (C.zf) goto L_1179e440;
  /* 1179e432 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e435 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e436 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1179e439u);
  /* 1179e439 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e43c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1179e43e jne 0x1179e444 */
  if (!C.zf) goto L_1179e444;
L_1179e440:;
  /* 1179e440 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179e442 jmp 0x1179e449 */
  goto L_1179e449;
L_1179e444:;
  /* 1179e444 mov eax, 1 */
  EAX = (0x1u);
L_1179e449:;
  /* 1179e449 mov esp, ebp */
  ESP = (EBP);
  /* 1179e44b pop ebp */
  EBP = (pop32());
  /* 1179e44c ret  */
  ESPCHK(0x1179e420u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x1179e450 (88 bytes, 40 insns) */
void f_1179e450(void) {
  FTRACE(0x1179e450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179e450 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1179e454 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1179e458 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1179e45a je 0x1179e4a3 */
  if (C.zf) goto L_1179e4a3;
  /* 1179e45c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179e45e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1179e462 push edi */
  push32((uint32_t)(EDI));
  /* 1179e463 mov edi, ecx */
  EDI = (ECX);
  /* 1179e465 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e468 jb 0x1179e497 */
  if (C.cf) goto L_1179e497;
  /* 1179e46a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1179e46c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1179e46f je 0x1179e479 */
  if (C.zf) goto L_1179e479;
  /* 1179e471 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1179e473:;
  /* 1179e473 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1179e475 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1179e476 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1179e477 jne 0x1179e473 */
  if (!C.zf) goto L_1179e473;
L_1179e479:;
  /* 1179e479 mov ecx, eax */
  ECX = (EAX);
  /* 1179e47b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1179e47e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e480 mov ecx, eax */
  ECX = (EAX);
  /* 1179e482 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1179e485 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e487 mov ecx, edx */
  ECX = (EDX);
  /* 1179e489 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1179e48c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1179e48f je 0x1179e497 */
  if (C.zf) goto L_1179e497;
  /* 1179e491 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1179e493 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1179e495 je 0x1179e49d */
  if (C.zf) goto L_1179e49d;
L_1179e497:;
  /* 1179e497 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1179e499 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1179e49a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1179e49b jne 0x1179e497 */
  if (!C.zf) goto L_1179e497;
L_1179e49d:;
  /* 1179e49d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1179e4a1 pop edi */
  EDI = (pop32());
  /* 1179e4a2 ret  */
  ESPCHK(0x1179e450u, _esp0);
  ESP += 4; return;
L_1179e4a3:;
  /* 1179e4a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1179e4a7 ret  */
  ESPCHK(0x1179e450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4b0 @ 0x1179e4b0 (23 bytes, 10 insns) */
void f_1179e4b0(void) {
  FTRACE(0x1179e4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179e4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1179e4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1179e4b3 mov eax, dword ptr [0x117c7e5c] */
  EAX = (r32((uint32_t)(0x117c7e5c)));
  /* 1179e4b8 push eax */
  push32((uint32_t)(EAX));
  /* 1179e4b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e4bc push ecx */
  push32((uint32_t)(ECX));
  /* 1179e4bd call 0x1179e4d0 */
  push32(0x1179e4c2u); f_1179e4d0();
  /* 1179e4c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e4c5 pop ebp */
  EBP = (pop32());
  /* 1179e4c6 ret  */
  ESPCHK(0x1179e4b0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x1179e4d0 (87 bytes, 34 insns) */
void f_1179e4d0(void) {
  FTRACE(0x1179e4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179e4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1179e4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1179e4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e4d4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e4d8 jbe 0x1179e4de */
  if ((C.cf||C.zf)) goto L_1179e4de;
  /* 1179e4da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179e4dc jmp 0x1179e523 */
  goto L_1179e523;
L_1179e4de:;
  /* 1179e4de cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e4e2 ja 0x1179e4f5 */
  if ((!C.cf&&!C.zf)) goto L_1179e4f5;
  /* 1179e4e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e4e7 push eax */
  push32((uint32_t)(EAX));
  /* 1179e4e8 call 0x1179e530 */
  push32(0x1179e4edu); f_1179e530();
  /* 1179e4ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e4f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1179e4f3 jmp 0x1179e4fc */
  goto L_1179e4fc;
L_1179e4f5:;
  /* 1179e4f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1179e4fc:;
  /* 1179e4fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e500 jne 0x1179e508 */
  if (!C.zf) goto L_1179e508;
  /* 1179e502 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e506 jne 0x1179e50d */
  if (!C.zf) goto L_1179e50d;
L_1179e508:;
  /* 1179e508 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179e50b jmp 0x1179e523 */
  goto L_1179e523;
L_1179e50d:;
  /* 1179e50d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e510 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e511 call 0x1179e420 */
  push32(0x1179e516u); f_1179e420();
  /* 1179e516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1179e51b jne 0x1179e521 */
  if (!C.zf) goto L_1179e521;
  /* 1179e51d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179e51f jmp 0x1179e523 */
  goto L_1179e523;
L_1179e521:;
  /* 1179e521 jmp 0x1179e4de */
  goto L_1179e4de;
L_1179e523:;
  /* 1179e523 mov esp, ebp */
  ESP = (EBP);
  /* 1179e525 pop ebp */
  EBP = (pop32());
  /* 1179e526 ret  */
  ESPCHK(0x1179e4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e530 @ 0x1179e530 (109 bytes, 37 insns) */
void f_1179e530(void) {
  FTRACE(0x1179e530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179e530 push ebp */
  push32((uint32_t)(EBP));
  /* 1179e531 mov ebp, esp */
  EBP = (ESP);
  /* 1179e533 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e534 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e537 cmp eax, dword ptr [0x117c5db4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c5db4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e53d ja 0x1179e56d */
  if ((!C.cf&&!C.zf)) goto L_1179e56d;
  /* 1179e53f push 9 */
  push32((uint32_t)(0x9u));
  /* 1179e541 call 0x1179d7a0 */
  push32(0x1179e546u); f_1179d7a0();
  /* 1179e546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e549 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e54c push ecx */
  push32((uint32_t)(ECX));
  /* 1179e54d call 0x1179f070 */
  push32(0x1179e552u); f_1179f070();
  /* 1179e552 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e555 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1179e558 push 9 */
  push32((uint32_t)(0x9u));
  /* 1179e55a call 0x1179d840 */
  push32(0x1179e55fu); f_1179d840();
  /* 1179e55f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e562 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e566 je 0x1179e56d */
  if (C.zf) goto L_1179e56d;
  /* 1179e568 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179e56b jmp 0x1179e599 */
  goto L_1179e599;
L_1179e56d:;
  /* 1179e56d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e571 jne 0x1179e57a */
  if (!C.zf) goto L_1179e57a;
  /* 1179e573 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1179e57a:;
  /* 1179e57a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e57d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e580 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1179e583 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1179e586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e589 push eax */
  push32((uint32_t)(EAX));
  /* 1179e58a push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e58c mov ecx, dword ptr [0x117c956c] */
  ECX = (r32((uint32_t)(0x117c956c)));
  /* 1179e592 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e593 call dword ptr [0x117ca340] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca340))), 0x1179e599u);
L_1179e599:;
  /* 1179e599 mov esp, ebp */
  ESP = (EBP);
  /* 1179e59b pop ebp */
  EBP = (pop32());
  /* 1179e59c ret  */
  ESPCHK(0x1179e530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5a0 @ 0x1179e5a0 (10 bytes, 5 insns) */
void f_1179e5a0(void) {
  FTRACE(0x1179e5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179e5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1179e5a1 mov ebp, esp */
  EBP = (ESP);
  /* 1179e5a3 mov eax, 1 */
  EAX = (0x1u);
  /* 1179e5a8 pop ebp */
  EBP = (pop32());
  /* 1179e5a9 ret  */
  ESPCHK(0x1179e5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5b0 @ 0x1179e5b0 (173 bytes, 59 insns) */
void f_1179e5b0(void) {
  FTRACE(0x1179e5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179e5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1179e5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1179e5b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179e5b6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e5ba jbe 0x1179e5c3 */
  if ((C.cf||C.zf)) goto L_1179e5c3;
  /* 1179e5bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179e5be jmp 0x1179e659 */
  goto L_1179e659;
L_1179e5c3:;
  /* 1179e5c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1179e5c5 call 0x1179d7a0 */
  push32(0x1179e5cau); f_1179d7a0();
  /* 1179e5ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e5cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e5d0 push eax */
  push32((uint32_t)(EAX));
  /* 1179e5d1 call 0x1179e9e0 */
  push32(0x1179e5d6u); f_1179e9e0();
  /* 1179e5d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e5d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1179e5dc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e5e0 je 0x1179e621 */
  if (C.zf) goto L_1179e621;
  /* 1179e5e2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1179e5e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179e5ec cmp ecx, dword ptr [0x117c5db4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117c5db4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e5f2 ja 0x1179e612 */
  if ((!C.cf&&!C.zf)) goto L_1179e612;
  /* 1179e5f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179e5f7 push edx */
  push32((uint32_t)(EDX));
  /* 1179e5f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e5fb push eax */
  push32((uint32_t)(EAX));
  /* 1179e5fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179e5ff push ecx */
  push32((uint32_t)(ECX));
  /* 1179e600 call 0x1179f8b0 */
  push32(0x1179e605u); f_1179f8b0();
  /* 1179e605 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1179e60a je 0x1179e612 */
  if (C.zf) goto L_1179e612;
  /* 1179e60c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e60f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1179e612:;
  /* 1179e612 push 9 */
  push32((uint32_t)(0x9u));
  /* 1179e614 call 0x1179d840 */
  push32(0x1179e619u); f_1179d840();
  /* 1179e619 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e61c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179e61f jmp 0x1179e659 */
  goto L_1179e659;
L_1179e621:;
  /* 1179e621 push 9 */
  push32((uint32_t)(0x9u));
  /* 1179e623 call 0x1179d840 */
  push32(0x1179e628u); f_1179d840();
  /* 1179e628 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e62b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e62f jne 0x1179e638 */
  if (!C.zf) goto L_1179e638;
  /* 1179e631 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1179e638:;
  /* 1179e638 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179e63b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e63e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1179e640 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1179e643 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179e646 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e647 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e64a push edx */
  push32((uint32_t)(EDX));
  /* 1179e64b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1179e64d mov eax, dword ptr [0x117c956c] */
  EAX = (r32((uint32_t)(0x117c956c)));
  /* 1179e652 push eax */
  push32((uint32_t)(EAX));
  /* 1179e653 call dword ptr [0x117ca33c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca33c))), 0x1179e659u);
L_1179e659:;
  /* 1179e659 mov esp, ebp */
  ESP = (EBP);
  /* 1179e65b pop ebp */
  EBP = (pop32());
  /* 1179e65c ret  */
  ESPCHK(0x1179e5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e660 @ 0x1179e660 (490 bytes, 165 insns) */
void f_1179e660(void) {
  FTRACE(0x1179e660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179e660 push ebp */
  push32((uint32_t)(EBP));
  /* 1179e661 mov ebp, esp */
  EBP = (ESP);
  /* 1179e663 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179e666 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e66a jne 0x1179e67d */
  if (!C.zf) goto L_1179e67d;
  /* 1179e66c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179e66f push eax */
  push32((uint32_t)(EAX));
  /* 1179e670 call 0x1179e4b0 */
  push32(0x1179e675u); f_1179e4b0();
  /* 1179e675 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e678 jmp 0x1179e846 */
  goto L_1179e846;
L_1179e67d:;
  /* 1179e67d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e681 jne 0x1179e696 */
  if (!C.zf) goto L_1179e696;
  /* 1179e683 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e686 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e687 call 0x1179e850 */
  push32(0x1179e68cu); f_1179e850();
  /* 1179e68c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e68f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179e691 jmp 0x1179e846 */
  goto L_1179e846;
L_1179e696:;
  /* 1179e696 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1179e69d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e6a1 ja 0x1179e819 */
  if ((!C.cf&&!C.zf)) goto L_1179e819;
  /* 1179e6a7 push 9 */
  push32((uint32_t)(0x9u));
  /* 1179e6a9 call 0x1179d7a0 */
  push32(0x1179e6aeu); f_1179d7a0();
  /* 1179e6ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e6b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e6b4 push edx */
  push32((uint32_t)(EDX));
  /* 1179e6b5 call 0x1179e9e0 */
  push32(0x1179e6bau); f_1179e9e0();
  /* 1179e6ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e6bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1179e6c0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e6c4 je 0x1179e7dc */
  if (C.zf) goto L_1179e7dc;
  /* 1179e6ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179e6cd cmp eax, dword ptr [0x117c5db4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c5db4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e6d3 ja 0x1179e750 */
  if ((!C.cf&&!C.zf)) goto L_1179e750;
  /* 1179e6d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179e6d8 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e6d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e6dc push edx */
  push32((uint32_t)(EDX));
  /* 1179e6dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179e6e0 push eax */
  push32((uint32_t)(EAX));
  /* 1179e6e1 call 0x1179f8b0 */
  push32(0x1179e6e6u); f_1179f8b0();
  /* 1179e6e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e6e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1179e6eb je 0x1179e6f5 */
  if (C.zf) goto L_1179e6f5;
  /* 1179e6ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e6f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1179e6f3 jmp 0x1179e750 */
  goto L_1179e750;
L_1179e6f5:;
  /* 1179e6f5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179e6f8 push edx */
  push32((uint32_t)(EDX));
  /* 1179e6f9 call 0x1179f070 */
  push32(0x1179e6feu); f_1179f070();
  /* 1179e6fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e701 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1179e704 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e708 je 0x1179e750 */
  if (C.zf) goto L_1179e750;
  /* 1179e70a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e70d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1179e710 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179e713 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1179e716 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179e719 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e71c jae 0x1179e726 */
  if (!C.cf) goto L_1179e726;
  /* 1179e71e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179e721 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1179e724 jmp 0x1179e72c */
  goto L_1179e72c;
L_1179e726:;
  /* 1179e726 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179e729 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1179e72c:;
  /* 1179e72c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179e72f push edx */
  push32((uint32_t)(EDX));
  /* 1179e730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e733 push eax */
  push32((uint32_t)(EAX));
  /* 1179e734 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179e737 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e738 call 0x117a0fc0 */
  push32(0x1179e73du); f_117a0fc0();
  /* 1179e73d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e740 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e743 push edx */
  push32((uint32_t)(EDX));
  /* 1179e744 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179e747 push eax */
  push32((uint32_t)(EAX));
  /* 1179e748 call 0x1179eaa0 */
  push32(0x1179e74du); f_1179eaa0();
  /* 1179e74d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1179e750:;
  /* 1179e750 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e754 jne 0x1179e7d0 */
  if (!C.zf) goto L_1179e7d0;
  /* 1179e756 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e75a jne 0x1179e763 */
  if (!C.zf) goto L_1179e763;
  /* 1179e75c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1179e763:;
  /* 1179e763 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179e766 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e769 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1179e76c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1179e76f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179e772 push edx */
  push32((uint32_t)(EDX));
  /* 1179e773 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e775 mov eax, dword ptr [0x117c956c] */
  EAX = (r32((uint32_t)(0x117c956c)));
  /* 1179e77a push eax */
  push32((uint32_t)(EAX));
  /* 1179e77b call dword ptr [0x117ca340] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca340))), 0x1179e781u);
  /* 1179e781 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1179e784 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e788 je 0x1179e7d0 */
  if (C.zf) goto L_1179e7d0;
  /* 1179e78a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e78d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1179e790 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179e793 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1179e796 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179e799 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e79c jae 0x1179e7a6 */
  if (!C.cf) goto L_1179e7a6;
  /* 1179e79e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179e7a1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1179e7a4 jmp 0x1179e7ac */
  goto L_1179e7ac;
L_1179e7a6:;
  /* 1179e7a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179e7a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1179e7ac:;
  /* 1179e7ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179e7af push eax */
  push32((uint32_t)(EAX));
  /* 1179e7b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e7b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e7b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179e7b7 push edx */
  push32((uint32_t)(EDX));
  /* 1179e7b8 call 0x117a0fc0 */
  push32(0x1179e7bdu); f_117a0fc0();
  /* 1179e7bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e7c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e7c3 push eax */
  push32((uint32_t)(EAX));
  /* 1179e7c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179e7c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e7c8 call 0x1179eaa0 */
  push32(0x1179e7cdu); f_1179eaa0();
  /* 1179e7cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1179e7d0:;
  /* 1179e7d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 1179e7d2 call 0x1179d840 */
  push32(0x1179e7d7u); f_1179d840();
  /* 1179e7d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e7da jmp 0x1179e819 */
  goto L_1179e819;
L_1179e7dc:;
  /* 1179e7dc push 9 */
  push32((uint32_t)(0x9u));
  /* 1179e7de call 0x1179d840 */
  push32(0x1179e7e3u); f_1179d840();
  /* 1179e7e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e7e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e7ea jne 0x1179e7f3 */
  if (!C.zf) goto L_1179e7f3;
  /* 1179e7ec mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1179e7f3:;
  /* 1179e7f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179e7f6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e7f9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1179e7fc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1179e7ff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179e802 push eax */
  push32((uint32_t)(EAX));
  /* 1179e803 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e806 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e807 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e809 mov edx, dword ptr [0x117c956c] */
  EDX = (r32((uint32_t)(0x117c956c)));
  /* 1179e80f push edx */
  push32((uint32_t)(EDX));
  /* 1179e810 call dword ptr [0x117ca33c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca33c))), 0x1179e816u);
  /* 1179e816 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1179e819:;
  /* 1179e819 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e81d jne 0x1179e828 */
  if (!C.zf) goto L_1179e828;
  /* 1179e81f cmp dword ptr [0x117c7e5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e826 jne 0x1179e82d */
  if (!C.zf) goto L_1179e82d;
L_1179e828:;
  /* 1179e828 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179e82b jmp 0x1179e846 */
  goto L_1179e846;
L_1179e82d:;
  /* 1179e82d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179e830 push eax */
  push32((uint32_t)(EAX));
  /* 1179e831 call 0x1179e420 */
  push32(0x1179e836u); f_1179e420();
  /* 1179e836 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1179e83b jne 0x1179e841 */
  if (!C.zf) goto L_1179e841;
  /* 1179e83d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179e83f jmp 0x1179e846 */
  goto L_1179e846;
L_1179e841:;
  /* 1179e841 jmp 0x1179e696 */
  goto L_1179e696;
L_1179e846:;
  /* 1179e846 mov esp, ebp */
  ESP = (EBP);
  /* 1179e848 pop ebp */
  EBP = (pop32());
  /* 1179e849 ret  */
  ESPCHK(0x1179e660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e850 @ 0x1179e850 (104 bytes, 38 insns) */
void f_1179e850(void) {
  FTRACE(0x1179e850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179e850 push ebp */
  push32((uint32_t)(EBP));
  /* 1179e851 mov ebp, esp */
  EBP = (ESP);
  /* 1179e853 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e854 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e858 jne 0x1179e85c */
  if (!C.zf) goto L_1179e85c;
  /* 1179e85a jmp 0x1179e8b4 */
  goto L_1179e8b4;
L_1179e85c:;
  /* 1179e85c push 9 */
  push32((uint32_t)(0x9u));
  /* 1179e85e call 0x1179d7a0 */
  push32(0x1179e863u); f_1179d7a0();
  /* 1179e863 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e866 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e869 push eax */
  push32((uint32_t)(EAX));
  /* 1179e86a call 0x1179e9e0 */
  push32(0x1179e86fu); f_1179e9e0();
  /* 1179e86f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e872 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1179e875 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e879 je 0x1179e897 */
  if (C.zf) goto L_1179e897;
  /* 1179e87b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e87e push ecx */
  push32((uint32_t)(ECX));
  /* 1179e87f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179e882 push edx */
  push32((uint32_t)(EDX));
  /* 1179e883 call 0x1179eaa0 */
  push32(0x1179e888u); f_1179eaa0();
  /* 1179e888 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e88b push 9 */
  push32((uint32_t)(0x9u));
  /* 1179e88d call 0x1179d840 */
  push32(0x1179e892u); f_1179d840();
  /* 1179e892 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e895 jmp 0x1179e8b4 */
  goto L_1179e8b4;
L_1179e897:;
  /* 1179e897 push 9 */
  push32((uint32_t)(0x9u));
  /* 1179e899 call 0x1179d840 */
  push32(0x1179e89eu); f_1179d840();
  /* 1179e89e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e8a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e8a4 push eax */
  push32((uint32_t)(EAX));
  /* 1179e8a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e8a7 mov ecx, dword ptr [0x117c956c] */
  ECX = (r32((uint32_t)(0x117c956c)));
  /* 1179e8ad push ecx */
  push32((uint32_t)(ECX));
  /* 1179e8ae call dword ptr [0x117ca360] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca360))), 0x1179e8b4u);
L_1179e8b4:;
  /* 1179e8b4 mov esp, ebp */
  ESP = (EBP);
  /* 1179e8b6 pop ebp */
  EBP = (pop32());
  /* 1179e8b7 ret  */
  ESPCHK(0x1179e850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8c0 @ 0x1179e8c0 (116 bytes, 34 insns) */
void f_1179e8c0(void) {
  FTRACE(0x1179e8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179e8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1179e8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1179e8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1179e8c4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1179e8cb push 9 */
  push32((uint32_t)(0x9u));
  /* 1179e8cd call 0x1179d7a0 */
  push32(0x1179e8d2u); f_1179d7a0();
  /* 1179e8d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e8d5 call 0x1179ffd0 */
  push32(0x1179e8dau); f_1179ffd0();
  /* 1179e8da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1179e8dc jge 0x1179e8e5 */
  if ((C.sf==C.of)) goto L_1179e8e5;
  /* 1179e8de mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1179e8e5:;
  /* 1179e8e5 push 9 */
  push32((uint32_t)(0x9u));
  /* 1179e8e7 call 0x1179d840 */
  push32(0x1179e8ecu); f_1179d840();
  /* 1179e8ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e8ef push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e8f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e8f3 mov eax, dword ptr [0x117c956c] */
  EAX = (r32((uint32_t)(0x117c956c)));
  /* 1179e8f8 push eax */
  push32((uint32_t)(EAX));
  /* 1179e8f9 call dword ptr [0x117ca380] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca380))), 0x1179e8ffu);
  /* 1179e8ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1179e901 jne 0x1179e92d */
  if (!C.zf) goto L_1179e92d;
  /* 1179e903 call dword ptr [0x117ca3d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3d8))), 0x1179e909u);
  /* 1179e909 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e90c jne 0x1179e926 */
  if (!C.zf) goto L_1179e926;
  /* 1179e90e call 0x117a25c0 */
  push32(0x1179e913u); f_117a25c0();
  /* 1179e913 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1179e919 call 0x117a25b0 */
  push32(0x1179e91eu); f_117a25b0();
  /* 1179e91e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1179e924 jmp 0x1179e92d */
  goto L_1179e92d;
L_1179e926:;
  /* 1179e926 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1179e92d:;
  /* 1179e92d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179e930 mov esp, ebp */
  ESP = (EBP);
  /* 1179e932 pop ebp */
  EBP = (pop32());
  /* 1179e933 ret  */
  ESPCHK(0x1179e8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e940 @ 0x1179e940 (10 bytes, 5 insns) */
void f_1179e940(void) {
  FTRACE(0x1179e940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179e940 push ebp */
  push32((uint32_t)(EBP));
  /* 1179e941 mov ebp, esp */
  EBP = (ESP);
  /* 1179e943 call 0x1179e8c0 */
  push32(0x1179e948u); f_1179e8c0();
  /* 1179e948 pop ebp */
  EBP = (pop32());
  /* 1179e949 ret  */
  ESPCHK(0x1179e940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e950 @ 0x1179e950 (10 bytes, 5 insns) */
void f_1179e950(void) {
  FTRACE(0x1179e950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179e950 push ebp */
  push32((uint32_t)(EBP));
  /* 1179e951 mov ebp, esp */
  EBP = (ESP);
  /* 1179e953 mov eax, dword ptr [0x117c5db4] */
  EAX = (r32((uint32_t)(0x117c5db4)));
  /* 1179e958 pop ebp */
  EBP = (pop32());
  /* 1179e959 ret  */
  ESPCHK(0x1179e950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e960 @ 0x1179e960 (31 bytes, 11 insns) */
void f_1179e960(void) {
  FTRACE(0x1179e960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179e960 push ebp */
  push32((uint32_t)(EBP));
  /* 1179e961 mov ebp, esp */
  EBP = (ESP);
  /* 1179e963 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e96a jbe 0x1179e970 */
  if ((C.cf||C.zf)) goto L_1179e970;
  /* 1179e96c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179e96e jmp 0x1179e97d */
  goto L_1179e97d;
L_1179e970:;
  /* 1179e970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179e973 mov dword ptr [0x117c5db4], eax */
  w32((uint32_t)(0x117c5db4), (EAX));
  /* 1179e978 mov eax, 1 */
  EAX = (0x1u);
L_1179e97d:;
  /* 1179e97d pop ebp */
  EBP = (pop32());
  /* 1179e97e ret  */
  ESPCHK(0x1179e960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e980 @ 0x1179e980 (89 bytes, 20 insns) */
void f_1179e980(void) {
  FTRACE(0x1179e980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179e980 push ebp */
  push32((uint32_t)(EBP));
  /* 1179e981 mov ebp, esp */
  EBP = (ESP);
  /* 1179e983 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1179e988 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179e98a mov eax, dword ptr [0x117c956c] */
  EAX = (r32((uint32_t)(0x117c956c)));
  /* 1179e98f push eax */
  push32((uint32_t)(EAX));
  /* 1179e990 call dword ptr [0x117ca340] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca340))), 0x1179e996u);
  /* 1179e996 mov dword ptr [0x117c9568], eax */
  w32((uint32_t)(0x117c9568), (EAX));
  /* 1179e99b cmp dword ptr [0x117c9568], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c9568))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179e9a2 jne 0x1179e9a8 */
  if (!C.zf) goto L_1179e9a8;
  /* 1179e9a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179e9a6 jmp 0x1179e9d7 */
  goto L_1179e9d7;
L_1179e9a8:;
  /* 1179e9a8 mov ecx, dword ptr [0x117c9568] */
  ECX = (r32((uint32_t)(0x117c9568)));
  /* 1179e9ae mov dword ptr [0x117c955c], ecx */
  w32((uint32_t)(0x117c955c), (ECX));
  /* 1179e9b4 mov dword ptr [0x117c9560], 0 */
  w32((uint32_t)(0x117c9560), (0x0u));
  /* 1179e9be mov dword ptr [0x117c9564], 0 */
  w32((uint32_t)(0x117c9564), (0x0u));
  /* 1179e9c8 mov dword ptr [0x117c9548], 0x10 */
  w32((uint32_t)(0x117c9548), (0x10u));
  /* 1179e9d2 mov eax, 1 */
  EAX = (0x1u);
L_1179e9d7:;
  /* 1179e9d7 pop ebp */
  EBP = (pop32());
  /* 1179e9d8 ret  */
  ESPCHK(0x1179e980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9e0 @ 0x1179e9e0 (85 bytes, 29 insns) */
void f_1179e9e0(void) {
  FTRACE(0x1179e9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179e9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1179e9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1179e9e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179e9e6 mov eax, dword ptr [0x117c9564] */
  EAX = (r32((uint32_t)(0x117c9564)));
  /* 1179e9eb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179e9ee mov ecx, dword ptr [0x117c9568] */
  ECX = (r32((uint32_t)(0x117c9568)));
  /* 1179e9f4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179e9f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1179e9f9 mov edx, dword ptr [0x117c9568] */
  EDX = (r32((uint32_t)(0x117c9568)));
  /* 1179e9ff mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1179ea02:;
  /* 1179ea02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179ea05 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179ea08 jae 0x1179ea2f */
  if (!C.cf) goto L_1179ea2f;
  /* 1179ea0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179ea0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179ea10 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179ea13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1179ea16 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179ea1d jae 0x1179ea24 */
  if (!C.cf) goto L_1179ea24;
  /* 1179ea1f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179ea22 jmp 0x1179ea31 */
  goto L_1179ea31;
L_1179ea24:;
  /* 1179ea24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179ea27 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ea2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1179ea2d jmp 0x1179ea02 */
  goto L_1179ea02;
L_1179ea2f:;
  /* 1179ea2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1179ea31:;
  /* 1179ea31 mov esp, ebp */
  ESP = (EBP);
  /* 1179ea33 pop ebp */
  EBP = (pop32());
  /* 1179ea34 ret  */
  ESPCHK(0x1179e9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea40 @ 0x1179ea40 (95 bytes, 33 insns) */
void f_1179ea40(void) {
  FTRACE(0x1179ea40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179ea40 push ebp */
  push32((uint32_t)(EBP));
  /* 1179ea41 mov ebp, esp */
  EBP = (ESP);
  /* 1179ea43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179ea46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179ea49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179ea4c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179ea4f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1179ea52 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179ea55 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1179ea58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1179ea5b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179ea60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179ea63 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179ea65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179ea68 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1179ea6b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1179ea6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1179ea6f jne 0x1179ea91 */
  if (!C.zf) goto L_1179ea91;
  /* 1179ea71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179ea74 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1179ea77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1179ea79 jne 0x1179ea91 */
  if (!C.zf) goto L_1179ea91;
  /* 1179ea7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179ea7e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1179ea84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179ea86 je 0x1179ea91 */
  if (C.zf) goto L_1179ea91;
  /* 1179ea88 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1179ea8f jmp 0x1179ea98 */
  goto L_1179ea98;
L_1179ea91:;
  /* 1179ea91 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1179ea98:;
  /* 1179ea98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179ea9b mov esp, ebp */
  ESP = (EBP);
  /* 1179ea9d pop ebp */
  EBP = (pop32());
  /* 1179ea9e ret  */
  ESPCHK(0x1179ea40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaa0 @ 0x1179eaa0 (1485 bytes, 453 insns) */
void f_1179eaa0(void) {
  FTRACE(0x1179eaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179eaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1179eaa1 mov ebp, esp */
  EBP = (ESP);
  /* 1179eaa3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179eaa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179eaa9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1179eaac mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1179eaaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179eab2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179eab5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179eab8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1179eabb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179eabe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1179eac1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1179eac4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179eac7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179eacd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ead0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1179ead7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1179eada mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179eadd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179eae0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1179eae3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179eae6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1179eae8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179eaeb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1179eaee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179eaf1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179eaf4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1179eaf7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179eafa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1179eafc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1179eaff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179eb02 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1179eb05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1179eb08 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179eb0b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1179eb0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179eb10 jne 0x1179ec38 */
  if (!C.zf) goto L_1179ec38;
  /* 1179eb16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179eb19 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1179eb1c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179eb1f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1179eb22 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179eb26 jbe 0x1179eb2f */
  if ((C.cf||C.zf)) goto L_1179eb2f;
  /* 1179eb28 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1179eb2f:;
  /* 1179eb2f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179eb32 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179eb35 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1179eb38 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179eb3b jne 0x1179ec11 */
  if (!C.zf) goto L_1179ec11;
  /* 1179eb41 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179eb45 jae 0x1179eba6 */
  if (!C.cf) goto L_1179eba6;
  /* 1179eb47 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179eb4c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1179eb4f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179eb51 not eax */
  EAX = (~(EAX));
  /* 1179eb53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179eb56 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179eb59 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1179eb5d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1179eb5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179eb62 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179eb65 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1179eb69 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179eb6c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179eb6f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1179eb72 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1179eb75 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179eb78 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179eb7b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1179eb7e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179eb81 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179eb84 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1179eb88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1179eb8a jne 0x1179eba4 */
  if (!C.zf) goto L_1179eba4;
  /* 1179eb8c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179eb91 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1179eb94 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179eb96 not eax */
  EAX = (~(EAX));
  /* 1179eb98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179eb9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1179eb9d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1179eb9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179eba2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1179eba4:;
  /* 1179eba4 jmp 0x1179ec11 */
  goto L_1179ec11;
L_1179eba6:;
  /* 1179eba6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1179eba9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179ebac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179ebb1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179ebb3 not edx */
  EDX = (~(EDX));
  /* 1179ebb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179ebb8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ebbb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1179ebc2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1179ebc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179ebc7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ebca mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1179ebd1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ebd4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ebd7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1179ebda sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1179ebdd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ebe0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ebe3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1179ebe6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ebe9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ebec movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1179ebf0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179ebf2 jne 0x1179ec11 */
  if (!C.zf) goto L_1179ec11;
  /* 1179ebf4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1179ebf7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179ebfa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179ebff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179ec01 not edx */
  EDX = (~(EDX));
  /* 1179ec03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179ec06 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1179ec09 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1179ec0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179ec0e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1179ec11:;
  /* 1179ec11 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179ec14 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1179ec17 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179ec1a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1179ec1d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1179ec20 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179ec23 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1179ec26 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179ec29 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1179ec2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1179ec2f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179ec32 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ec35 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1179ec38:;
  /* 1179ec38 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179ec3b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1179ec3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179ec41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1179ec44 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179ec48 jbe 0x1179ec51 */
  if ((C.cf||C.zf)) goto L_1179ec51;
  /* 1179ec4a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1179ec51:;
  /* 1179ec51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179ec54 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1179ec57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179ec59 jne 0x1179edb5 */
  if (!C.zf) goto L_1179edb5;
  /* 1179ec5f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179ec62 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179ec65 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1179ec68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179ec6b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1179ec6e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179ec71 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1179ec74 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179ec78 jbe 0x1179ec81 */
  if ((C.cf||C.zf)) goto L_1179ec81;
  /* 1179ec7a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1179ec81:;
  /* 1179ec81 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179ec84 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ec87 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1179ec8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179ec8d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1179ec90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179ec93 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1179ec96 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179ec9a jbe 0x1179eca3 */
  if ((C.cf||C.zf)) goto L_1179eca3;
  /* 1179ec9c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1179eca3:;
  /* 1179eca3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179eca6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179eca9 je 0x1179edaf */
  if (C.zf) goto L_1179edaf;
  /* 1179ecaf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1179ecb2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1179ecb5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1179ecb8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179ecbb jne 0x1179ed91 */
  if (!C.zf) goto L_1179ed91;
  /* 1179ecc1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179ecc5 jae 0x1179ed26 */
  if (!C.cf) goto L_1179ed26;
  /* 1179ecc7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179eccc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179eccf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179ecd1 not edx */
  EDX = (~(EDX));
  /* 1179ecd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179ecd6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ecd9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1179ecdd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1179ecdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179ece2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ece5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1179ece9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ecec add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ecef mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1179ecf2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1179ecf5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ecf8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ecfb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1179ecfe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ed01 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ed04 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1179ed08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179ed0a jne 0x1179ed24 */
  if (!C.zf) goto L_1179ed24;
  /* 1179ed0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179ed11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179ed14 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179ed16 not edx */
  EDX = (~(EDX));
  /* 1179ed18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179ed1b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1179ed1d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1179ed1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179ed22 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1179ed24:;
  /* 1179ed24 jmp 0x1179ed91 */
  goto L_1179ed91;
L_1179ed26:;
  /* 1179ed26 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179ed29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179ed2c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179ed31 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179ed33 not eax */
  EAX = (~(EAX));
  /* 1179ed35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179ed38 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ed3b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1179ed42 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1179ed44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179ed47 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ed4a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1179ed51 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ed54 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ed57 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1179ed5a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1179ed5d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ed60 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ed63 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1179ed66 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ed69 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ed6c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1179ed70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1179ed72 jne 0x1179ed91 */
  if (!C.zf) goto L_1179ed91;
  /* 1179ed74 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179ed77 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179ed7a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179ed7f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179ed81 not eax */
  EAX = (~(EAX));
  /* 1179ed83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179ed86 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1179ed89 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1179ed8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179ed8e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1179ed91:;
  /* 1179ed91 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1179ed94 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1179ed97 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1179ed9a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1179ed9d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1179eda0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1179eda3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1179eda6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1179eda9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1179edac mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1179edaf:;
  /* 1179edaf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1179edb2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1179edb5:;
  /* 1179edb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179edb8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1179edbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179edbd jne 0x1179edcb */
  if (!C.zf) goto L_1179edcb;
  /* 1179edbf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179edc2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179edc5 je 0x1179eedb */
  if (C.zf) goto L_1179eedb;
L_1179edcb:;
  /* 1179edcb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179edce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179edd1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1179edd4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1179edd7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179edda mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179eddd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1179ede0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1179ede3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179ede6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179ede9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1179edec mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179edef mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179edf2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1179edf5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179edf8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1179edfb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179edfe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1179ee01 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179ee04 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179ee07 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1179ee0a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179ee0d jne 0x1179eedb */
  if (!C.zf) goto L_1179eedb;
  /* 1179ee13 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179ee17 jae 0x1179ee74 */
  if (!C.cf) goto L_1179ee74;
  /* 1179ee19 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ee1c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ee1f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1179ee23 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ee26 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ee29 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1179ee2c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1179ee2f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ee32 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ee35 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1179ee38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1179ee3a jne 0x1179ee52 */
  if (!C.zf) goto L_1179ee52;
  /* 1179ee3c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179ee41 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179ee44 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179ee46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179ee49 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1179ee4b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1179ee4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179ee50 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1179ee52:;
  /* 1179ee52 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179ee57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179ee5a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179ee5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179ee5f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ee62 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1179ee66 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1179ee68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179ee6b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ee6e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1179ee72 jmp 0x1179eedb */
  goto L_1179eedb;
L_1179ee74:;
  /* 1179ee74 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ee77 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ee7a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1179ee7e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ee81 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ee84 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1179ee87 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1179ee8a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179ee8d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ee90 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1179ee93 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1179ee95 jne 0x1179eeb2 */
  if (!C.zf) goto L_1179eeb2;
  /* 1179ee97 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179ee9a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179ee9d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179eea2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179eea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179eea7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1179eeaa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1179eeac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179eeaf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1179eeb2:;
  /* 1179eeb2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179eeb5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179eeb8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179eebd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179eebf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179eec2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179eec5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1179eecc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1179eece mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179eed1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1179eed4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1179eedb:;
  /* 1179eedb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179eede mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179eee1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1179eee3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179eee6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179eee9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179eeec mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1179eeef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179eef2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1179eef4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179eef7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179eefa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1179eefc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179eeff cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179ef02 jne 0x1179f069 */
  if (!C.zf) goto L_1179f069;
  /* 1179ef08 cmp dword ptr [0x117c9560], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c9560))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179ef0f je 0x1179f058 */
  if (C.zf) goto L_1179f058;
  /* 1179ef15 mov eax, dword ptr [0x117c9558] */
  EAX = (r32((uint32_t)(0x117c9558)));
  /* 1179ef1a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1179ef1d mov ecx, dword ptr [0x117c9560] */
  ECX = (r32((uint32_t)(0x117c9560)));
  /* 1179ef23 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1179ef26 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ef28 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1179ef2b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1179ef30 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1179ef35 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179ef38 push eax */
  push32((uint32_t)(EAX));
  /* 1179ef39 call dword ptr [0x117ca35c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca35c))), 0x1179ef3fu);
  /* 1179ef3f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179ef44 mov ecx, dword ptr [0x117c9558] */
  ECX = (r32((uint32_t)(0x117c9558)));
  /* 1179ef4a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179ef4c mov eax, dword ptr [0x117c9560] */
  EAX = (r32((uint32_t)(0x117c9560)));
  /* 1179ef51 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1179ef54 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1179ef56 mov edx, dword ptr [0x117c9560] */
  EDX = (r32((uint32_t)(0x117c9560)));
  /* 1179ef5c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1179ef5f mov eax, dword ptr [0x117c9560] */
  EAX = (r32((uint32_t)(0x117c9560)));
  /* 1179ef64 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1179ef67 mov edx, dword ptr [0x117c9558] */
  EDX = (r32((uint32_t)(0x117c9558)));
  /* 1179ef6d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1179ef78 mov eax, dword ptr [0x117c9560] */
  EAX = (r32((uint32_t)(0x117c9560)));
  /* 1179ef7d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1179ef80 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1179ef83 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1179ef86 mov eax, dword ptr [0x117c9560] */
  EAX = (r32((uint32_t)(0x117c9560)));
  /* 1179ef8b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1179ef8e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1179ef91 mov edx, dword ptr [0x117c9560] */
  EDX = (r32((uint32_t)(0x117c9560)));
  /* 1179ef97 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1179ef9a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1179ef9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179efa0 jne 0x1179efb6 */
  if (!C.zf) goto L_1179efb6;
  /* 1179efa2 mov edx, dword ptr [0x117c9560] */
  EDX = (r32((uint32_t)(0x117c9560)));
  /* 1179efa8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1179efab and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1179efad mov ecx, dword ptr [0x117c9560] */
  ECX = (r32((uint32_t)(0x117c9560)));
  /* 1179efb3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1179efb6:;
  /* 1179efb6 mov edx, dword ptr [0x117c9560] */
  EDX = (r32((uint32_t)(0x117c9560)));
  /* 1179efbc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179efc0 jne 0x1179f058 */
  if (!C.zf) goto L_1179f058;
  /* 1179efc6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1179efcb push 0 */
  push32((uint32_t)(0x0u));
  /* 1179efcd mov eax, dword ptr [0x117c9560] */
  EAX = (r32((uint32_t)(0x117c9560)));
  /* 1179efd2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1179efd5 push ecx */
  push32((uint32_t)(ECX));
  /* 1179efd6 call dword ptr [0x117ca35c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca35c))), 0x1179efdcu);
  /* 1179efdc mov edx, dword ptr [0x117c9560] */
  EDX = (r32((uint32_t)(0x117c9560)));
  /* 1179efe2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1179efe5 push eax */
  push32((uint32_t)(EAX));
  /* 1179efe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179efe8 mov ecx, dword ptr [0x117c956c] */
  ECX = (r32((uint32_t)(0x117c956c)));
  /* 1179efee push ecx */
  push32((uint32_t)(ECX));
  /* 1179efef call dword ptr [0x117ca360] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca360))), 0x1179eff5u);
  /* 1179eff5 mov edx, dword ptr [0x117c9564] */
  EDX = (r32((uint32_t)(0x117c9564)));
  /* 1179effb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179effe mov eax, dword ptr [0x117c9568] */
  EAX = (r32((uint32_t)(0x117c9568)));
  /* 1179f003 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f005 mov ecx, dword ptr [0x117c9560] */
  ECX = (r32((uint32_t)(0x117c9560)));
  /* 1179f00b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f00e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f010 push eax */
  push32((uint32_t)(EAX));
  /* 1179f011 mov edx, dword ptr [0x117c9560] */
  EDX = (r32((uint32_t)(0x117c9560)));
  /* 1179f017 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f01a push edx */
  push32((uint32_t)(EDX));
  /* 1179f01b mov eax, dword ptr [0x117c9560] */
  EAX = (r32((uint32_t)(0x117c9560)));
  /* 1179f020 push eax */
  push32((uint32_t)(EAX));
  /* 1179f021 call 0x117a29b0 */
  push32(0x1179f026u); f_117a29b0();
  /* 1179f026 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f029 mov ecx, dword ptr [0x117c9564] */
  ECX = (r32((uint32_t)(0x117c9564)));
  /* 1179f02f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f032 mov dword ptr [0x117c9564], ecx */
  w32((uint32_t)(0x117c9564), (ECX));
  /* 1179f038 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179f03b cmp edx, dword ptr [0x117c9560] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x117c9560))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f041 jbe 0x1179f04c */
  if ((C.cf||C.zf)) goto L_1179f04c;
  /* 1179f043 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179f046 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f049 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1179f04c:;
  /* 1179f04c mov ecx, dword ptr [0x117c9568] */
  ECX = (r32((uint32_t)(0x117c9568)));
  /* 1179f052 mov dword ptr [0x117c955c], ecx */
  w32((uint32_t)(0x117c955c), (ECX));
L_1179f058:;
  /* 1179f058 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179f05b mov dword ptr [0x117c9560], edx */
  w32((uint32_t)(0x117c9560), (EDX));
  /* 1179f061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f064 mov dword ptr [0x117c9558], eax */
  w32((uint32_t)(0x117c9558), (EAX));
L_1179f069:;
  /* 1179f069 mov esp, ebp */
  ESP = (EBP);
  /* 1179f06b pop ebp */
  EBP = (pop32());
  /* 1179f06c ret  */
  ESPCHK(0x1179eaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f070 @ 0x1179f070 (1334 bytes, 427 insns) */
void f_1179f070(void) {
  FTRACE(0x1179f070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179f070 push ebp */
  push32((uint32_t)(EBP));
  /* 1179f071 mov ebp, esp */
  EBP = (ESP);
  /* 1179f073 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f076 push esi */
  push32((uint32_t)(ESI));
  /* 1179f077 mov eax, dword ptr [0x117c9564] */
  EAX = (r32((uint32_t)(0x117c9564)));
  /* 1179f07c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179f07f mov ecx, dword ptr [0x117c9568] */
  ECX = (r32((uint32_t)(0x117c9568)));
  /* 1179f085 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f087 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1179f08a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179f08d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f090 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1179f093 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1179f096 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179f099 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1179f09c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f09f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1179f0a2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f0a6 jge 0x1179f0bc */
  if ((C.sf==C.of)) goto L_1179f0bc;
  /* 1179f0a8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1179f0ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179f0ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179f0b0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1179f0b3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1179f0ba jmp 0x1179f0d1 */
  goto L_1179f0d1;
L_1179f0bc:;
  /* 1179f0bc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1179f0c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179f0c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f0c9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1179f0cc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179f0ce mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1179f0d1:;
  /* 1179f0d1 mov ecx, dword ptr [0x117c955c] */
  ECX = (r32((uint32_t)(0x117c955c)));
  /* 1179f0d7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1179f0da:;
  /* 1179f0da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f0dd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f0e0 jae 0x1179f106 */
  if (!C.cf) goto L_1179f106;
  /* 1179f0e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f0e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1179f0e8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1179f0ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f0ed mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1179f0f0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1179f0f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1179f0f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179f0f7 je 0x1179f0fb */
  if (C.zf) goto L_1179f0fb;
  /* 1179f0f9 jmp 0x1179f106 */
  goto L_1179f106;
L_1179f0fb:;
  /* 1179f0fb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f0fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f101 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1179f104 jmp 0x1179f0da */
  goto L_1179f0da;
L_1179f106:;
  /* 1179f106 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f109 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f10c jne 0x1179f1ed */
  if (!C.zf) goto L_1179f1ed;
  /* 1179f112 mov eax, dword ptr [0x117c9568] */
  EAX = (r32((uint32_t)(0x117c9568)));
  /* 1179f117 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1179f11a:;
  /* 1179f11a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f11d cmp ecx, dword ptr [0x117c955c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117c955c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f123 jae 0x1179f149 */
  if (!C.cf) goto L_1179f149;
  /* 1179f125 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f128 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1179f12b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1179f12d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f130 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1179f133 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1179f136 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1179f138 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1179f13a je 0x1179f13e */
  if (C.zf) goto L_1179f13e;
  /* 1179f13c jmp 0x1179f149 */
  goto L_1179f149;
L_1179f13e:;
  /* 1179f13e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f141 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f144 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1179f147 jmp 0x1179f11a */
  goto L_1179f11a;
L_1179f149:;
  /* 1179f149 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f14c cmp ecx, dword ptr [0x117c955c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117c955c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f152 jne 0x1179f1ed */
  if (!C.zf) goto L_1179f1ed;
L_1179f158:;
  /* 1179f158 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f15b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f15e jae 0x1179f176 */
  if (!C.cf) goto L_1179f176;
  /* 1179f160 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f163 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f167 je 0x1179f16b */
  if (C.zf) goto L_1179f16b;
  /* 1179f169 jmp 0x1179f176 */
  goto L_1179f176;
L_1179f16b:;
  /* 1179f16b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f16e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f171 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1179f174 jmp 0x1179f158 */
  goto L_1179f158;
L_1179f176:;
  /* 1179f176 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f179 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f17c jne 0x1179f1c7 */
  if (!C.zf) goto L_1179f1c7;
  /* 1179f17e mov eax, dword ptr [0x117c9568] */
  EAX = (r32((uint32_t)(0x117c9568)));
  /* 1179f183 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1179f186:;
  /* 1179f186 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f189 cmp ecx, dword ptr [0x117c955c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117c955c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f18f jae 0x1179f1a7 */
  if (!C.cf) goto L_1179f1a7;
  /* 1179f191 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f194 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f198 je 0x1179f19c */
  if (C.zf) goto L_1179f19c;
  /* 1179f19a jmp 0x1179f1a7 */
  goto L_1179f1a7;
L_1179f19c:;
  /* 1179f19c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f19f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f1a2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1179f1a5 jmp 0x1179f186 */
  goto L_1179f186;
L_1179f1a7:;
  /* 1179f1a7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f1aa cmp ecx, dword ptr [0x117c955c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117c955c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f1b0 jne 0x1179f1c7 */
  if (!C.zf) goto L_1179f1c7;
  /* 1179f1b2 call 0x1179f5b0 */
  push32(0x1179f1b7u); f_1179f5b0();
  /* 1179f1b7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1179f1ba cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f1be jne 0x1179f1c7 */
  if (!C.zf) goto L_1179f1c7;
  /* 1179f1c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179f1c2 jmp 0x1179f5a1 */
  goto L_1179f5a1;
L_1179f1c7:;
  /* 1179f1c7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f1ca push edx */
  push32((uint32_t)(EDX));
  /* 1179f1cb call 0x1179f6c0 */
  push32(0x1179f1d0u); f_1179f6c0();
  /* 1179f1d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f1d3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f1d6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1179f1d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1179f1db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f1de mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1179f1e1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f1e4 jne 0x1179f1ed */
  if (!C.zf) goto L_1179f1ed;
  /* 1179f1e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179f1e8 jmp 0x1179f5a1 */
  goto L_1179f5a1;
L_1179f1ed:;
  /* 1179f1ed mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f1f0 mov dword ptr [0x117c955c], edx */
  w32((uint32_t)(0x117c955c), (EDX));
  /* 1179f1f6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f1f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1179f1fc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1179f1ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f202 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1179f204 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1179f207 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f20b je 0x1179f230 */
  if (C.zf) goto L_1179f230;
  /* 1179f20d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f210 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f213 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1179f216 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1179f21a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f21d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f220 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1179f223 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1179f22a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1179f22c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1179f22e jne 0x1179f265 */
  if (!C.zf) goto L_1179f265;
L_1179f230:;
  /* 1179f230 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1179f237:;
  /* 1179f237 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f23a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f23d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1179f240 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1179f244 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f247 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f24a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1179f24d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1179f254 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1179f256 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1179f258 jne 0x1179f265 */
  if (!C.zf) goto L_1179f265;
  /* 1179f25a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f25d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f260 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1179f263 jmp 0x1179f237 */
  goto L_1179f237;
L_1179f265:;
  /* 1179f265 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f268 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179f26e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f271 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1179f278 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1179f27b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1179f282 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f285 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f288 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1179f28b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1179f28f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1179f292 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f296 jne 0x1179f2b2 */
  if (!C.zf) goto L_1179f2b2;
  /* 1179f298 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1179f29f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f2a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f2a5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1179f2a8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1179f2af mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1179f2b2:;
  /* 1179f2b2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f2b6 jl 0x1179f2cb */
  if ((C.sf!=C.of)) goto L_1179f2cb;
  /* 1179f2b8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179f2bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1179f2bd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1179f2c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179f2c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f2c6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1179f2c9 jmp 0x1179f2b2 */
  goto L_1179f2b2;
L_1179f2cb:;
  /* 1179f2cb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179f2ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f2d1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1179f2d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1179f2d8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f2db mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1179f2dd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f2e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1179f2e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179f2e6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1179f2e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f2ec mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1179f2ef cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f2f3 jle 0x1179f2fc */
  if ((C.zf||C.sf!=C.of)) goto L_1179f2fc;
  /* 1179f2f5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1179f2fc:;
  /* 1179f2fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179f2ff cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f302 je 0x1179f520 */
  if (C.zf) goto L_1179f520;
  /* 1179f308 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f30b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f30e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1179f311 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f314 jne 0x1179f3ea */
  if (!C.zf) goto L_1179f3ea;
  /* 1179f31a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f31e jge 0x1179f37f */
  if ((C.sf==C.of)) goto L_1179f37f;
  /* 1179f320 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179f325 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179f328 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179f32a not eax */
  EAX = (~(EAX));
  /* 1179f32c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f32f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f332 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1179f336 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1179f338 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f33b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f33e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1179f342 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f345 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f348 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1179f34b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1179f34e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f351 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f354 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1179f357 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f35a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f35d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1179f361 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1179f363 jne 0x1179f37d */
  if (!C.zf) goto L_1179f37d;
  /* 1179f365 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179f36a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179f36d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179f36f not eax */
  EAX = (~(EAX));
  /* 1179f371 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f374 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1179f376 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1179f378 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f37b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1179f37d:;
  /* 1179f37d jmp 0x1179f3ea */
  goto L_1179f3ea;
L_1179f37f:;
  /* 1179f37f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179f382 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f385 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179f38a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179f38c not edx */
  EDX = (~(EDX));
  /* 1179f38e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f391 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f394 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1179f39b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1179f39d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f3a0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f3a3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1179f3aa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f3ad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f3b0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1179f3b3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1179f3b6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f3b9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f3bc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1179f3bf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f3c2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f3c5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1179f3c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179f3cb jne 0x1179f3ea */
  if (!C.zf) goto L_1179f3ea;
  /* 1179f3cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179f3d0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f3d3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179f3d8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179f3da not edx */
  EDX = (~(EDX));
  /* 1179f3dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f3df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1179f3e2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1179f3e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f3e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1179f3ea:;
  /* 1179f3ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f3ed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1179f3f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f3f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1179f3f6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1179f3f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f3fc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1179f3ff mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f402 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1179f405 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1179f408 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f40c je 0x1179f520 */
  if (C.zf) goto L_1179f520;
  /* 1179f412 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179f415 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f418 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1179f41b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1179f41e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f421 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179f424 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1179f427 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1179f42a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f42d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179f430 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1179f433 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179f436 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f439 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1179f43c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f43f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1179f442 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f445 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1179f448 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f44b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f44e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1179f451 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f454 jne 0x1179f520 */
  if (!C.zf) goto L_1179f520;
  /* 1179f45a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f45e jge 0x1179f4ba */
  if ((C.sf==C.of)) goto L_1179f4ba;
  /* 1179f460 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f463 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f466 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1179f46a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f46d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f470 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1179f473 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1179f475 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f478 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f47b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1179f47e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179f480 jne 0x1179f498 */
  if (!C.zf) goto L_1179f498;
  /* 1179f482 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179f487 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179f48a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179f48c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f48f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1179f491 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1179f493 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f496 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1179f498:;
  /* 1179f498 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179f49d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179f4a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179f4a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f4a5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f4a8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1179f4ac or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1179f4ae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f4b1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f4b4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1179f4b8 jmp 0x1179f520 */
  goto L_1179f520;
L_1179f4ba:;
  /* 1179f4ba mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f4bd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f4c0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1179f4c4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f4c7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f4ca mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1179f4cd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1179f4cf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f4d2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f4d5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1179f4d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179f4da jne 0x1179f4f7 */
  if (!C.zf) goto L_1179f4f7;
  /* 1179f4dc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179f4df sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f4e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179f4e7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179f4e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f4ec mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1179f4ef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1179f4f1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f4f4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1179f4f7:;
  /* 1179f4f7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179f4fa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f4fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179f502 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179f504 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f507 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f50a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1179f511 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1179f513 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f516 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f519 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1179f520:;
  /* 1179f520 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f524 je 0x1179f53a */
  if (C.zf) goto L_1179f53a;
  /* 1179f526 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f529 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179f52c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1179f52e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f531 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f534 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179f537 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1179f53a:;
  /* 1179f53a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f53d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f540 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1179f543 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179f546 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f549 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f54c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1179f54e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179f551 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f554 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f557 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f55a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1179f55d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f560 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1179f562 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f565 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1179f567 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f56a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f56d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1179f56f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179f571 jne 0x1179f593 */
  if (!C.zf) goto L_1179f593;
  /* 1179f573 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f576 cmp eax, dword ptr [0x117c9560] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c9560))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f57c jne 0x1179f593 */
  if (!C.zf) goto L_1179f593;
  /* 1179f57e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f581 cmp ecx, dword ptr [0x117c9558] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117c9558))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f587 jne 0x1179f593 */
  if (!C.zf) goto L_1179f593;
  /* 1179f589 mov dword ptr [0x117c9560], 0 */
  w32((uint32_t)(0x117c9560), (0x0u));
L_1179f593:;
  /* 1179f593 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1179f596 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f599 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1179f59b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f59e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1179f5a1:;
  /* 1179f5a1 pop esi */
  ESI = (pop32());
  /* 1179f5a2 mov esp, ebp */
  ESP = (EBP);
  /* 1179f5a4 pop ebp */
  EBP = (pop32());
  /* 1179f5a5 ret  */
  ESPCHK(0x1179f070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5b0 @ 0x1179f5b0 (271 bytes, 78 insns) */
void f_1179f5b0(void) {
  FTRACE(0x1179f5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179f5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1179f5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1179f5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1179f5b4 mov eax, dword ptr [0x117c9564] */
  EAX = (r32((uint32_t)(0x117c9564)));
  /* 1179f5b9 cmp eax, dword ptr [0x117c9548] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c9548))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f5bf jne 0x1179f60b */
  if (!C.zf) goto L_1179f60b;
  /* 1179f5c1 mov ecx, dword ptr [0x117c9548] */
  ECX = (r32((uint32_t)(0x117c9548)));
  /* 1179f5c7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f5ca imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179f5cd push ecx */
  push32((uint32_t)(ECX));
  /* 1179f5ce mov edx, dword ptr [0x117c9568] */
  EDX = (r32((uint32_t)(0x117c9568)));
  /* 1179f5d4 push edx */
  push32((uint32_t)(EDX));
  /* 1179f5d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179f5d7 mov eax, dword ptr [0x117c956c] */
  EAX = (r32((uint32_t)(0x117c956c)));
  /* 1179f5dc push eax */
  push32((uint32_t)(EAX));
  /* 1179f5dd call dword ptr [0x117ca33c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca33c))), 0x1179f5e3u);
  /* 1179f5e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1179f5e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f5ea jne 0x1179f5f3 */
  if (!C.zf) goto L_1179f5f3;
  /* 1179f5ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179f5ee jmp 0x1179f6bb */
  goto L_1179f6bb;
L_1179f5f3:;
  /* 1179f5f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f5f6 mov dword ptr [0x117c9568], ecx */
  w32((uint32_t)(0x117c9568), (ECX));
  /* 1179f5fc mov edx, dword ptr [0x117c9548] */
  EDX = (r32((uint32_t)(0x117c9548)));
  /* 1179f602 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f605 mov dword ptr [0x117c9548], edx */
  w32((uint32_t)(0x117c9548), (EDX));
L_1179f60b:;
  /* 1179f60b mov eax, dword ptr [0x117c9564] */
  EAX = (r32((uint32_t)(0x117c9564)));
  /* 1179f610 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179f613 mov ecx, dword ptr [0x117c9568] */
  ECX = (r32((uint32_t)(0x117c9568)));
  /* 1179f619 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f61b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1179f61e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1179f623 push 8 */
  push32((uint32_t)(0x8u));
  /* 1179f625 mov edx, dword ptr [0x117c956c] */
  EDX = (r32((uint32_t)(0x117c956c)));
  /* 1179f62b push edx */
  push32((uint32_t)(EDX));
  /* 1179f62c call dword ptr [0x117ca340] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca340))), 0x1179f632u);
  /* 1179f632 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f635 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1179f638 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f63b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f63f jne 0x1179f645 */
  if (!C.zf) goto L_1179f645;
  /* 1179f641 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179f643 jmp 0x1179f6bb */
  goto L_1179f6bb;
L_1179f645:;
  /* 1179f645 push 4 */
  push32((uint32_t)(0x4u));
  /* 1179f647 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1179f64c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1179f651 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179f653 call dword ptr [0x117ca338] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca338))), 0x1179f659u);
  /* 1179f659 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f65c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1179f65f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f662 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f666 jne 0x1179f682 */
  if (!C.zf) goto L_1179f682;
  /* 1179f668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f66b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1179f66e push ecx */
  push32((uint32_t)(ECX));
  /* 1179f66f push 0 */
  push32((uint32_t)(0x0u));
  /* 1179f671 mov edx, dword ptr [0x117c956c] */
  EDX = (r32((uint32_t)(0x117c956c)));
  /* 1179f677 push edx */
  push32((uint32_t)(EDX));
  /* 1179f678 call dword ptr [0x117ca360] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca360))), 0x1179f67eu);
  /* 1179f67e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179f680 jmp 0x1179f6bb */
  goto L_1179f6bb;
L_1179f682:;
  /* 1179f682 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f685 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1179f68b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f68e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1179f695 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f698 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1179f69f mov eax, dword ptr [0x117c9564] */
  EAX = (r32((uint32_t)(0x117c9564)));
  /* 1179f6a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f6a7 mov dword ptr [0x117c9564], eax */
  w32((uint32_t)(0x117c9564), (EAX));
  /* 1179f6ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f6af mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1179f6b2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1179f6b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1179f6bb:;
  /* 1179f6bb mov esp, ebp */
  ESP = (EBP);
  /* 1179f6bd pop ebp */
  EBP = (pop32());
  /* 1179f6be ret  */
  ESPCHK(0x1179f5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6c0 @ 0x1179f6c0 (494 bytes, 149 insns) */
void f_1179f6c0(void) {
  FTRACE(0x1179f6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179f6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1179f6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1179f6c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f6c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179f6c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1179f6cc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1179f6cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179f6d2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1179f6d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1179f6d8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1179f6df:;
  /* 1179f6df cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f6e3 jl 0x1179f6f8 */
  if ((C.sf!=C.of)) goto L_1179f6f8;
  /* 1179f6e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179f6e8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1179f6ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1179f6ed mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179f6f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f6f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1179f6f6 jmp 0x1179f6df */
  goto L_1179f6df;
L_1179f6f8:;
  /* 1179f6f8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179f6fb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179f701 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179f704 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1179f70b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1179f70e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1179f715 jmp 0x1179f720 */
  goto L_1179f720;
L_1179f717:;
  /* 1179f717 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179f71a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f71d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1179f720:;
  /* 1179f720 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f724 jge 0x1179f746 */
  if ((C.sf==C.of)) goto L_1179f746;
  /* 1179f726 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179f729 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179f72c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1179f72f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1179f732 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f735 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f738 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1179f73b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f73e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f741 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1179f744 jmp 0x1179f717 */
  goto L_1179f717;
L_1179f746:;
  /* 1179f746 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179f749 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1179f74c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179f74f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1179f752 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f754 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1179f757 push 4 */
  push32((uint32_t)(0x4u));
  /* 1179f759 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1179f75e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1179f763 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f766 push edx */
  push32((uint32_t)(EDX));
  /* 1179f767 call dword ptr [0x117ca338] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca338))), 0x1179f76du);
  /* 1179f76d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1179f76f jne 0x1179f779 */
  if (!C.zf) goto L_1179f779;
  /* 1179f771 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1179f774 jmp 0x1179f8aa */
  goto L_1179f8aa;
L_1179f779:;
  /* 1179f779 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f77c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f781 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1179f784 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f787 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1179f78a jmp 0x1179f798 */
  goto L_1179f798;
L_1179f78c:;
  /* 1179f78c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f78f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f795 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1179f798:;
  /* 1179f798 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f79b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f79e ja 0x1179f7fd */
  if ((!C.cf&&!C.zf)) goto L_1179f7fd;
  /* 1179f7a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f7a3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1179f7aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f7ad mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1179f7b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f7ba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f7bd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1179f7c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f7c3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1179f7c9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f7cc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f7d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f7d5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1179f7d8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f7db sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f7e1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f7e4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1179f7e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f7ea add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f7ef mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1179f7f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1179f7f5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1179f7fb jmp 0x1179f78c */
  goto L_1179f78c;
L_1179f7fd:;
  /* 1179f7fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179f800 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f806 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1179f809 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f80c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f80f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179f812 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1179f815 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179f818 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1179f81b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1179f81e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f821 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179f824 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1179f827 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179f82a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f82d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179f830 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1179f833 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179f836 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1179f839 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1179f83c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179f83f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179f842 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1179f845 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179f848 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179f84b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1179f853 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179f856 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179f859 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1179f864 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179f867 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1179f86b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179f86e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1179f871 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1179f874 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179f877 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1179f87a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1179f87c jne 0x1179f88d */
  if (!C.zf) goto L_1179f88d;
  /* 1179f87e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179f881 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1179f884 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1179f887 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179f88a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1179f88d:;
  /* 1179f88d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179f892 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179f895 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179f897 not edx */
  EDX = (~(EDX));
  /* 1179f899 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179f89c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1179f89f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1179f8a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179f8a4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1179f8a7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1179f8aa:;
  /* 1179f8aa mov esp, ebp */
  ESP = (EBP);
  /* 1179f8ac pop ebp */
  EBP = (pop32());
  /* 1179f8ad ret  */
  ESPCHK(0x1179f6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8b0 @ 0x1179f8b0 (1515 bytes, 489 insns) */
void f_1179f8b0(void) {
  FTRACE(0x1179f8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179f8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1179f8b1 mov ebp, esp */
  EBP = (ESP);
  /* 1179f8b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f8b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1179f8b9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f8bc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1179f8be mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1179f8c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179f8c4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1179f8c7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1179f8ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179f8cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179f8d0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f8d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1179f8d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1179f8d9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1179f8dc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1179f8df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f8e2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179f8e8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f8eb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1179f8f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1179f8f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1179f8f8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f8fb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1179f8fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179f901 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1179f903 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f906 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1179f909 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179f90c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f90f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1179f912 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179f915 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1179f917 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1179f91a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179f91d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f920 jle 0x1179fbd6 */
  if ((C.zf||C.sf!=C.of)) goto L_1179fbd6;
  /* 1179f926 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f929 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1179f92c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179f92e jne 0x1179f93b */
  if (!C.zf) goto L_1179f93b;
  /* 1179f930 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179f933 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f936 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f939 jle 0x1179f942 */
  if ((C.zf||C.sf!=C.of)) goto L_1179f942;
L_1179f93b:;
  /* 1179f93b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1179f93d jmp 0x1179fe97 */
  goto L_1179fe97;
L_1179f942:;
  /* 1179f942 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179f945 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1179f948 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f94b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1179f94e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f952 jbe 0x1179f95b */
  if ((C.cf||C.zf)) goto L_1179f95b;
  /* 1179f954 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1179f95b:;
  /* 1179f95b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179f95e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179f961 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1179f964 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f967 jne 0x1179fa3d */
  if (!C.zf) goto L_1179fa3d;
  /* 1179f96d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179f971 jae 0x1179f9d2 */
  if (!C.cf) goto L_1179f9d2;
  /* 1179f973 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179f978 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179f97b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179f97d not edx */
  EDX = (~(EDX));
  /* 1179f97f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f982 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f985 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1179f989 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1179f98b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f98e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f991 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1179f995 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f998 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f99b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1179f99e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1179f9a1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f9a4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f9a7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1179f9aa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f9ad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179f9b0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1179f9b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179f9b6 jne 0x1179f9d0 */
  if (!C.zf) goto L_1179f9d0;
  /* 1179f9b8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179f9bd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179f9c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179f9c2 not edx */
  EDX = (~(EDX));
  /* 1179f9c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179f9c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1179f9c9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1179f9cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179f9ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1179f9d0:;
  /* 1179f9d0 jmp 0x1179fa3d */
  goto L_1179fa3d;
L_1179f9d2:;
  /* 1179f9d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179f9d5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179f9d8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179f9dd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179f9df not eax */
  EAX = (~(EAX));
  /* 1179f9e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f9e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f9e7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1179f9ee and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1179f9f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179f9f3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179f9f6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1179f9fd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fa00 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fa03 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1179fa06 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1179fa09 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fa0c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fa0f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1179fa12 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fa15 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fa18 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1179fa1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1179fa1e jne 0x1179fa3d */
  if (!C.zf) goto L_1179fa3d;
  /* 1179fa20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179fa23 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179fa26 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179fa2b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179fa2d not eax */
  EAX = (~(EAX));
  /* 1179fa2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179fa32 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1179fa35 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1179fa37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179fa3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1179fa3d:;
  /* 1179fa3d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179fa40 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1179fa43 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179fa46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1179fa49 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1179fa4c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179fa4f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1179fa52 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179fa55 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1179fa58 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1179fa5b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179fa5e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fa61 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179fa64 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1179fa67 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179fa6b jle 0x1179fbb7 */
  if ((C.zf||C.sf!=C.of)) goto L_1179fbb7;
  /* 1179fa71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179fa74 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fa77 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1179fa7a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179fa7d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1179fa80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179fa83 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1179fa86 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179fa8a jbe 0x1179fa93 */
  if ((C.cf||C.zf)) goto L_1179fa93;
  /* 1179fa8c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1179fa93:;
  /* 1179fa93 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179fa96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179fa99 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1179fa9c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1179fa9f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179faa2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179faa5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1179faa8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1179faab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179faae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179fab1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1179fab4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179fab7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179faba mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1179fabd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179fac0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1179fac3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179fac6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1179fac9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179facc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179facf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1179fad2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179fad5 jne 0x1179fba3 */
  if (!C.zf) goto L_1179fba3;
  /* 1179fadb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179fadf jae 0x1179fb3c */
  if (!C.cf) goto L_1179fb3c;
  /* 1179fae1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fae4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fae7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1179faeb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179faee add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179faf1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1179faf4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1179faf7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fafa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fafd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1179fb00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1179fb02 jne 0x1179fb1a */
  if (!C.zf) goto L_1179fb1a;
  /* 1179fb04 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179fb09 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179fb0c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179fb0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179fb11 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1179fb13 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1179fb15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179fb18 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1179fb1a:;
  /* 1179fb1a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179fb1f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179fb22 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179fb24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179fb27 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fb2a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1179fb2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1179fb30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179fb33 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fb36 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1179fb3a jmp 0x1179fba3 */
  goto L_1179fba3;
L_1179fb3c:;
  /* 1179fb3c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fb3f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fb42 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1179fb46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fb49 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fb4c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1179fb4f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1179fb52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fb55 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fb58 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1179fb5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1179fb5d jne 0x1179fb7a */
  if (!C.zf) goto L_1179fb7a;
  /* 1179fb5f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179fb62 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179fb65 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179fb6a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179fb6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179fb6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1179fb72 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1179fb74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179fb77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1179fb7a:;
  /* 1179fb7a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179fb7d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179fb80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179fb85 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179fb87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179fb8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fb8d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1179fb94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1179fb96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179fb99 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fb9c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1179fba3:;
  /* 1179fba3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179fba6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179fba9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1179fbab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179fbae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fbb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179fbb4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1179fbb7:;
  /* 1179fbb7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179fbba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fbbd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179fbc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1179fbc2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179fbc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fbc8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179fbcb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fbce mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1179fbd1 jmp 0x1179fe92 */
  goto L_1179fe92;
L_1179fbd6:;
  /* 1179fbd6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179fbd9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179fbdc jge 0x1179fe92 */
  if ((C.sf==C.of)) goto L_1179fe92;
  /* 1179fbe2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179fbe5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fbe8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179fbeb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1179fbed mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1179fbf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fbf3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179fbf6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fbf9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1179fbfc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179fbff add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fc02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1179fc05 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179fc08 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179fc0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1179fc0e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179fc11 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1179fc14 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179fc17 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1179fc1a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179fc1e jbe 0x1179fc27 */
  if ((C.cf||C.zf)) goto L_1179fc27;
  /* 1179fc20 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1179fc27:;
  /* 1179fc27 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179fc2a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1179fc2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1179fc2f jne 0x1179fd70 */
  if (!C.zf) goto L_1179fd70;
  /* 1179fc35 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1179fc38 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1179fc3b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179fc3e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1179fc41 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179fc45 jbe 0x1179fc4e */
  if ((C.cf||C.zf)) goto L_1179fc4e;
  /* 1179fc47 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1179fc4e:;
  /* 1179fc4e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179fc51 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179fc54 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1179fc57 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179fc5a jne 0x1179fd30 */
  if (!C.zf) goto L_1179fd30;
  /* 1179fc60 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179fc64 jae 0x1179fcc5 */
  if (!C.cf) goto L_1179fcc5;
  /* 1179fc66 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179fc6b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179fc6e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179fc70 not edx */
  EDX = (~(EDX));
  /* 1179fc72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179fc75 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fc78 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1179fc7c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1179fc7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179fc81 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fc84 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1179fc88 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fc8b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fc8e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1179fc91 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1179fc94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fc97 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fc9a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1179fc9d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fca0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fca3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1179fca7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179fca9 jne 0x1179fcc3 */
  if (!C.zf) goto L_1179fcc3;
  /* 1179fcab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179fcb0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179fcb3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179fcb5 not edx */
  EDX = (~(EDX));
  /* 1179fcb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179fcba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1179fcbc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1179fcbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179fcc1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1179fcc3:;
  /* 1179fcc3 jmp 0x1179fd30 */
  goto L_1179fd30;
L_1179fcc5:;
  /* 1179fcc5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179fcc8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179fccb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179fcd0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179fcd2 not eax */
  EAX = (~(EAX));
  /* 1179fcd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179fcd7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fcda mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1179fce1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1179fce3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179fce6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fce9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1179fcf0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fcf3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fcf6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1179fcf9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1179fcfc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fcff add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fd02 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1179fd05 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fd08 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fd0b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1179fd0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1179fd11 jne 0x1179fd30 */
  if (!C.zf) goto L_1179fd30;
  /* 1179fd13 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1179fd16 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179fd19 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179fd1e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179fd20 not eax */
  EAX = (~(EAX));
  /* 1179fd22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179fd25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1179fd28 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1179fd2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179fd2d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1179fd30:;
  /* 1179fd30 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179fd33 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1179fd36 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179fd39 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1179fd3c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1179fd3f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179fd42 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1179fd45 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1179fd48 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1179fd4b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1179fd4e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179fd51 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fd54 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1179fd57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179fd5a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1179fd5d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179fd60 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1179fd63 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179fd67 jbe 0x1179fd70 */
  if ((C.cf||C.zf)) goto L_1179fd70;
  /* 1179fd69 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1179fd70:;
  /* 1179fd70 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1179fd73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1179fd76 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1179fd79 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1179fd7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179fd7f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179fd82 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1179fd85 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1179fd88 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179fd8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179fd8e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1179fd91 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1179fd94 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179fd97 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1179fd9a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179fd9d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1179fda0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179fda3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1179fda6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179fda9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179fdac mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1179fdaf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179fdb2 jne 0x1179fe7e */
  if (!C.zf) goto L_1179fe7e;
  /* 1179fdb8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179fdbc jae 0x1179fe18 */
  if (!C.cf) goto L_1179fe18;
  /* 1179fdbe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fdc1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fdc4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1179fdc8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fdcb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fdce mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1179fdd1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1179fdd3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fdd6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fdd9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1179fddc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179fdde jne 0x1179fdf6 */
  if (!C.zf) goto L_1179fdf6;
  /* 1179fde0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179fde5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1179fde8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179fdea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179fded mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1179fdef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1179fdf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179fdf4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1179fdf6:;
  /* 1179fdf6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179fdfb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1179fdfe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179fe00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179fe03 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fe06 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1179fe0a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1179fe0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179fe0f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fe12 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1179fe16 jmp 0x1179fe7e */
  goto L_1179fe7e;
L_1179fe18:;
  /* 1179fe18 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fe1b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fe1e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1179fe22 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fe25 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fe28 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1179fe2b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1179fe2d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fe30 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fe33 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1179fe36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179fe38 jne 0x1179fe55 */
  if (!C.zf) goto L_1179fe55;
  /* 1179fe3a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1179fe3d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179fe40 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1179fe45 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1179fe47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179fe4a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1179fe4d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1179fe4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1179fe52 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1179fe55:;
  /* 1179fe55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1179fe58 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179fe5b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179fe60 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179fe62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179fe65 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fe68 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1179fe6f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1179fe71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179fe74 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1179fe77 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1179fe7e:;
  /* 1179fe7e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179fe81 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179fe84 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1179fe86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1179fe89 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fe8c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1179fe8f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1179fe92:;
  /* 1179fe92 mov eax, 1 */
  EAX = (0x1u);
L_1179fe97:;
  /* 1179fe97 mov esp, ebp */
  ESP = (EBP);
  /* 1179fe99 pop ebp */
  EBP = (pop32());
  /* 1179fe9a ret  */
  ESPCHK(0x1179f8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fea0 @ 0x1179fea0 (304 bytes, 79 insns) */
void f_1179fea0(void) {
  FTRACE(0x1179fea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179fea0 push ebp */
  push32((uint32_t)(EBP));
  /* 1179fea1 mov ebp, esp */
  EBP = (ESP);
  /* 1179fea3 push ecx */
  push32((uint32_t)(ECX));
  /* 1179fea4 cmp dword ptr [0x117c9560], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c9560))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179feab je 0x1179ffcc */
  if (C.zf) goto L_1179ffcc;
  /* 1179feb1 mov eax, dword ptr [0x117c9558] */
  EAX = (r32((uint32_t)(0x117c9558)));
  /* 1179feb6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1179feb9 mov ecx, dword ptr [0x117c9560] */
  ECX = (r32((uint32_t)(0x117c9560)));
  /* 1179febf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1179fec2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179fec4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1179fec7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1179fecc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1179fed1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1179fed4 push eax */
  push32((uint32_t)(EAX));
  /* 1179fed5 call dword ptr [0x117ca35c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca35c))), 0x1179fedbu);
  /* 1179fedb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1179fee0 mov ecx, dword ptr [0x117c9558] */
  ECX = (r32((uint32_t)(0x117c9558)));
  /* 1179fee6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1179fee8 mov eax, dword ptr [0x117c9560] */
  EAX = (r32((uint32_t)(0x117c9560)));
  /* 1179feed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1179fef0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1179fef2 mov edx, dword ptr [0x117c9560] */
  EDX = (r32((uint32_t)(0x117c9560)));
  /* 1179fef8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1179fefb mov eax, dword ptr [0x117c9560] */
  EAX = (r32((uint32_t)(0x117c9560)));
  /* 1179ff00 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1179ff03 mov edx, dword ptr [0x117c9558] */
  EDX = (r32((uint32_t)(0x117c9558)));
  /* 1179ff09 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1179ff14 mov eax, dword ptr [0x117c9560] */
  EAX = (r32((uint32_t)(0x117c9560)));
  /* 1179ff19 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1179ff1c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1179ff1f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1179ff22 mov eax, dword ptr [0x117c9560] */
  EAX = (r32((uint32_t)(0x117c9560)));
  /* 1179ff27 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1179ff2a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1179ff2d mov edx, dword ptr [0x117c9560] */
  EDX = (r32((uint32_t)(0x117c9560)));
  /* 1179ff33 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1179ff36 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1179ff3a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1179ff3c jne 0x1179ff52 */
  if (!C.zf) goto L_1179ff52;
  /* 1179ff3e mov edx, dword ptr [0x117c9560] */
  EDX = (r32((uint32_t)(0x117c9560)));
  /* 1179ff44 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1179ff47 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1179ff49 mov ecx, dword ptr [0x117c9560] */
  ECX = (r32((uint32_t)(0x117c9560)));
  /* 1179ff4f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1179ff52:;
  /* 1179ff52 mov edx, dword ptr [0x117c9560] */
  EDX = (r32((uint32_t)(0x117c9560)));
  /* 1179ff58 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179ff5c jne 0x1179ffc2 */
  if (!C.zf) goto L_1179ffc2;
  /* 1179ff5e cmp dword ptr [0x117c9564], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117c9564))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1179ff65 jle 0x1179ffc2 */
  if ((C.zf||C.sf!=C.of)) goto L_1179ffc2;
  /* 1179ff67 mov eax, dword ptr [0x117c9560] */
  EAX = (r32((uint32_t)(0x117c9560)));
  /* 1179ff6c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1179ff6f push ecx */
  push32((uint32_t)(ECX));
  /* 1179ff70 push 0 */
  push32((uint32_t)(0x0u));
  /* 1179ff72 mov edx, dword ptr [0x117c956c] */
  EDX = (r32((uint32_t)(0x117c956c)));
  /* 1179ff78 push edx */
  push32((uint32_t)(EDX));
  /* 1179ff79 call dword ptr [0x117ca360] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca360))), 0x1179ff7fu);
  /* 1179ff7f mov eax, dword ptr [0x117c9564] */
  EAX = (r32((uint32_t)(0x117c9564)));
  /* 1179ff84 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179ff87 mov ecx, dword ptr [0x117c9568] */
  ECX = (r32((uint32_t)(0x117c9568)));
  /* 1179ff8d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ff8f mov edx, dword ptr [0x117c9560] */
  EDX = (r32((uint32_t)(0x117c9560)));
  /* 1179ff95 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ff98 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179ff9a push ecx */
  push32((uint32_t)(ECX));
  /* 1179ff9b mov eax, dword ptr [0x117c9560] */
  EAX = (r32((uint32_t)(0x117c9560)));
  /* 1179ffa0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ffa3 push eax */
  push32((uint32_t)(EAX));
  /* 1179ffa4 mov ecx, dword ptr [0x117c9560] */
  ECX = (r32((uint32_t)(0x117c9560)));
  /* 1179ffaa push ecx */
  push32((uint32_t)(ECX));
  /* 1179ffab call 0x117a29b0 */
  push32(0x1179ffb0u); f_117a29b0();
  /* 1179ffb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1179ffb3 mov edx, dword ptr [0x117c9564] */
  EDX = (r32((uint32_t)(0x117c9564)));
  /* 1179ffb9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179ffbc mov dword ptr [0x117c9564], edx */
  w32((uint32_t)(0x117c9564), (EDX));
L_1179ffc2:;
  /* 1179ffc2 mov dword ptr [0x117c9560], 0 */
  w32((uint32_t)(0x117c9560), (0x0u));
L_1179ffcc:;
  /* 1179ffcc mov esp, ebp */
  ESP = (EBP);
  /* 1179ffce pop ebp */
  EBP = (pop32());
  /* 1179ffcf ret  */
  ESPCHK(0x1179fea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffd0 @ 0x1179ffd0 (1565 bytes, 343 insns) */
void f_1179ffd0(void) {
  FTRACE(0x1179ffd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1179ffd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1179ffd1 mov ebp, esp */
  EBP = (ESP);
  /* 1179ffd3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1179ffd9 mov eax, dword ptr [0x117c9564] */
  EAX = (r32((uint32_t)(0x117c9564)));
  /* 1179ffde imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1179ffe1 push eax */
  push32((uint32_t)(EAX));
  /* 1179ffe2 mov ecx, dword ptr [0x117c9568] */
  ECX = (r32((uint32_t)(0x117c9568)));
  /* 1179ffe8 push ecx */
  push32((uint32_t)(ECX));
  /* 1179ffe9 call dword ptr [0x117ca3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3bc))), 0x1179ffefu);
  /* 1179ffef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1179fff1 je 0x1179fffb */
  if (C.zf) goto L_1179fffb;
  /* 1179fff3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1179fff6 jmp 0x117a05e9 */
  goto L_117a05e9;
L_1179fffb:;
  /* 1179fffb mov edx, dword ptr [0x117c9568] */
  EDX = (r32((uint32_t)(0x117c9568)));
  /* 117a0001 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 117a0007 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 117a0011 jmp 0x117a0022 */
  goto L_117a0022;
L_117a0013:;
  /* 117a0013 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 117a0019 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a001c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_117a0022:;
  /* 117a0022 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 117a0028 cmp ecx, dword ptr [0x117c9564] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117c9564))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a002e jge 0x117a05e7 */
  if ((C.sf==C.of)) goto L_117a05e7;
  /* 117a0034 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 117a003a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 117a003d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 117a0043 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 117a0048 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 117a004e push ecx */
  push32((uint32_t)(ECX));
  /* 117a004f call dword ptr [0x117ca3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3bc))), 0x117a0055u);
  /* 117a0055 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a0057 je 0x117a0063 */
  if (C.zf) goto L_117a0063;
  /* 117a0059 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 117a005e jmp 0x117a05e9 */
  goto L_117a05e9;
L_117a0063:;
  /* 117a0063 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 117a0069 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 117a006c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 117a0072 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 117a0078 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a007e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 117a0081 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 117a0087 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117a008a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a008d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 117a0097 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 117a00a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117a00a8 jmp 0x117a00b3 */
  goto L_117a00b3;
L_117a00aa:;
  /* 117a00aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a00ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a00b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_117a00b3:;
  /* 117a00b3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a00b7 jge 0x117a05ab */
  if ((C.sf==C.of)) goto L_117a05ab;
  /* 117a00bd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 117a00c7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 117a00d1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 117a00db mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 117a00e5 jmp 0x117a00f6 */
  goto L_117a00f6;
L_117a00e7:;
  /* 117a00e7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 117a00ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a00f0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_117a00f6:;
  /* 117a00f6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a00fd jge 0x117a0112 */
  if ((C.sf==C.of)) goto L_117a0112;
  /* 117a00ff mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 117a0105 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 117a0110 jmp 0x117a00e7 */
  goto L_117a00e7;
L_117a0112:;
  /* 117a0112 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0116 jl 0x117a054d */
  if ((C.sf!=C.of)) goto L_117a054d;
  /* 117a011c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 117a0121 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 117a0127 push ecx */
  push32((uint32_t)(ECX));
  /* 117a0128 call dword ptr [0x117ca3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3bc))), 0x117a012eu);
  /* 117a012e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a0130 je 0x117a013c */
  if (C.zf) goto L_117a013c;
  /* 117a0132 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 117a0137 jmp 0x117a05e9 */
  goto L_117a05e9;
L_117a013c:;
  /* 117a013c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 117a0142 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117a0145 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 117a014f jmp 0x117a0160 */
  goto L_117a0160;
L_117a0151:;
  /* 117a0151 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 117a0157 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a015a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_117a0160:;
  /* 117a0160 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0167 jge 0x117a02e4 */
  if ((C.sf==C.of)) goto L_117a02e4;
  /* 117a016d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a0170 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0173 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 117a0179 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 117a017f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0185 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 117a018b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 117a0191 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0195 jne 0x117a01a2 */
  if (!C.zf) goto L_117a01a2;
  /* 117a0197 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 117a019d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a01a0 je 0x117a01ac */
  if (C.zf) goto L_117a01ac;
L_117a01a2:;
  /* 117a01a2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 117a01a7 jmp 0x117a05e9 */
  goto L_117a05e9;
L_117a01ac:;
  /* 117a01ac mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 117a01b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a01b4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 117a01ba mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 117a01c0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 117a01c6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 117a01cc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 117a01cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a01d1 je 0x117a0209 */
  if (C.zf) goto L_117a0209;
  /* 117a01d3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 117a01d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a01dc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 117a01e2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a01ec jle 0x117a01f8 */
  if ((C.zf||C.sf!=C.of)) goto L_117a01f8;
  /* 117a01ee mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 117a01f3 jmp 0x117a05e9 */
  goto L_117a05e9;
L_117a01f8:;
  /* 117a01f8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 117a01fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0201 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 117a0207 jmp 0x117a024b */
  goto L_117a024b;
L_117a0209:;
  /* 117a0209 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 117a020f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 117a0212 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a0215 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 117a021b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0222 jle 0x117a022e */
  if ((C.zf||C.sf!=C.of)) goto L_117a022e;
  /* 117a0224 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_117a022e:;
  /* 117a022e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 117a0234 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 117a023b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a023e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 117a0244 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_117a024b:;
  /* 117a024b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0252 jl 0x117a026d */
  if ((C.sf!=C.of)) goto L_117a026d;
  /* 117a0254 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 117a025a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 117a025d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a025f jne 0x117a026d */
  if (!C.zf) goto L_117a026d;
  /* 117a0261 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a026b jle 0x117a0277 */
  if ((C.zf||C.sf!=C.of)) goto L_117a0277;
L_117a026d:;
  /* 117a026d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 117a0272 jmp 0x117a05e9 */
  goto L_117a05e9;
L_117a0277:;
  /* 117a0277 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 117a027d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0283 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 117a0286 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a028c je 0x117a0298 */
  if (C.zf) goto L_117a0298;
  /* 117a028e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 117a0293 jmp 0x117a05e9 */
  goto L_117a05e9;
L_117a0298:;
  /* 117a0298 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 117a029e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a02a4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 117a02aa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 117a02b0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a02b6 jb 0x117a01ac */
  if (C.cf) goto L_117a01ac;
  /* 117a02bc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 117a02c2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a02c8 je 0x117a02d4 */
  if (C.zf) goto L_117a02d4;
  /* 117a02ca mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 117a02cf jmp 0x117a05e9 */
  goto L_117a05e9;
L_117a02d4:;
  /* 117a02d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a02d7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a02dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a02df jmp 0x117a0151 */
  goto L_117a0151;
L_117a02e4:;
  /* 117a02e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a02e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a02e9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a02ef je 0x117a02fb */
  if (C.zf) goto L_117a02fb;
  /* 117a02f1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 117a02f6 jmp 0x117a05e9 */
  goto L_117a05e9;
L_117a02fb:;
  /* 117a02fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a02fe mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 117a0304 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 117a030b jmp 0x117a0316 */
  goto L_117a0316;
L_117a030d:;
  /* 117a030d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a0310 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0313 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_117a0316:;
  /* 117a0316 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a031a jge 0x117a054d */
  if ((C.sf==C.of)) goto L_117a054d;
  /* 117a0320 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 117a032a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 117a0330 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_117a0336:;
  /* 117a0336 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 117a033c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117a033f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 117a0345 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 117a034b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0351 je 0x117a047a */
  if (C.zf) goto L_117a047a;
  /* 117a0357 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a035a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 117a0360 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0367 je 0x117a047a */
  if (C.zf) goto L_117a047a;
  /* 117a036d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 117a0373 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0379 jb 0x117a038e */
  if (C.cf) goto L_117a038e;
  /* 117a037b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 117a0381 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0386 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a038c jb 0x117a0398 */
  if (C.cf) goto L_117a0398;
L_117a038e:;
  /* 117a038e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 117a0393 jmp 0x117a05e9 */
  goto L_117a05e9;
L_117a0398:;
  /* 117a0398 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 117a039e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 117a03a4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 117a03aa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 117a03b0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a03b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 117a03b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a03b9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a03be mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_117a03c4:;
  /* 117a03c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a03c7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a03cd je 0x117a03ee */
  if (C.zf) goto L_117a03ee;
  /* 117a03cf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a03d2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a03d8 jne 0x117a03dc */
  if (!C.zf) goto L_117a03dc;
  /* 117a03da jmp 0x117a03ee */
  goto L_117a03ee;
L_117a03dc:;
  /* 117a03dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a03df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a03e1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 117a03e4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a03e7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a03e9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 117a03ec jmp 0x117a03c4 */
  goto L_117a03c4;
L_117a03ee:;
  /* 117a03ee mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a03f1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a03f7 jne 0x117a0403 */
  if (!C.zf) goto L_117a0403;
  /* 117a03f9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 117a03fe jmp 0x117a05e9 */
  goto L_117a05e9;
L_117a0403:;
  /* 117a0403 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 117a0409 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a040b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 117a040e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a0411 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 117a0417 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a041e jle 0x117a042a */
  if ((C.zf||C.sf!=C.of)) goto L_117a042a;
  /* 117a0420 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_117a042a:;
  /* 117a042a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 117a0430 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0433 je 0x117a043f */
  if (C.zf) goto L_117a043f;
  /* 117a0435 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 117a043a jmp 0x117a05e9 */
  goto L_117a05e9;
L_117a043f:;
  /* 117a043f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 117a0445 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117a0448 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a044e je 0x117a045a */
  if (C.zf) goto L_117a045a;
  /* 117a0450 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 117a0455 jmp 0x117a05e9 */
  goto L_117a05e9;
L_117a045a:;
  /* 117a045a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 117a0460 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 117a0466 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 117a046c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a046f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 117a0475 jmp 0x117a0336 */
  goto L_117a0336;
L_117a047a:;
  /* 117a047a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0481 je 0x117a04f1 */
  if (C.zf) goto L_117a04f1;
  /* 117a0483 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0487 jge 0x117a04bb */
  if ((C.sf==C.of)) goto L_117a04bb;
  /* 117a0489 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117a048e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a0491 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117a0493 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 117a0499 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117a049b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 117a04a1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117a04a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a04a9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117a04ab mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 117a04b1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117a04b3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 117a04b9 jmp 0x117a04f1 */
  goto L_117a04f1;
L_117a04bb:;
  /* 117a04bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a04be sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a04c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117a04c6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117a04c8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 117a04ce or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117a04d0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 117a04d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a04d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a04dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117a04e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117a04e3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 117a04e9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117a04eb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_117a04f1:;
  /* 117a04f1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 117a04f7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117a04fa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0500 jne 0x117a0514 */
  if (!C.zf) goto L_117a0514;
  /* 117a0502 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a0505 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 117a050b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0512 je 0x117a051e */
  if (C.zf) goto L_117a051e;
L_117a0514:;
  /* 117a0514 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 117a0519 jmp 0x117a05e9 */
  goto L_117a05e9;
L_117a051e:;
  /* 117a051e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 117a0524 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117a0527 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a052d je 0x117a0539 */
  if (C.zf) goto L_117a0539;
  /* 117a052f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 117a0534 jmp 0x117a05e9 */
  goto L_117a05e9;
L_117a0539:;
  /* 117a0539 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 117a053f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0542 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 117a0548 jmp 0x117a030d */
  goto L_117a030d;
L_117a054d:;
  /* 117a054d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a0550 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 117a0556 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 117a055c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0560 jne 0x117a057a */
  if (!C.zf) goto L_117a057a;
  /* 117a0562 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a0565 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 117a056b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 117a0571 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0578 je 0x117a0581 */
  if (C.zf) goto L_117a0581;
L_117a057a:;
  /* 117a057a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 117a057f jmp 0x117a05e9 */
  goto L_117a05e9;
L_117a0581:;
  /* 117a0581 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 117a0587 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a058d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 117a0593 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a0596 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a059b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117a059e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a05a1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 117a05a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a05a6 jmp 0x117a00aa */
  goto L_117a00aa;
L_117a05ab:;
  /* 117a05ab mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 117a05b1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 117a05b7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a05b9 jne 0x117a05cc */
  if (!C.zf) goto L_117a05cc;
  /* 117a05bb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 117a05c1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 117a05c7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a05ca je 0x117a05d3 */
  if (C.zf) goto L_117a05d3;
L_117a05cc:;
  /* 117a05cc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 117a05d1 jmp 0x117a05e9 */
  goto L_117a05e9;
L_117a05d3:;
  /* 117a05d3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 117a05d9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a05dc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 117a05e2 jmp 0x117a0013 */
  goto L_117a0013;
L_117a05e7:;
  /* 117a05e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a05e9:;
  /* 117a05e9 mov esp, ebp */
  ESP = (EBP);
  /* 117a05eb pop ebp */
  EBP = (pop32());
  /* 117a05ec ret  */
  ESPCHK(0x1179ffd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100105f0 @ 0x117a05f0 (250 bytes, 92 insns) */
void f_117a05f0(void) {
  FTRACE(0x117a05f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a05f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a05f1 mov ebp, esp */
  EBP = (ESP);
  /* 117a05f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a05f6 push ebx */
  push32((uint32_t)(EBX));
  /* 117a05f7 push esi */
  push32((uint32_t)(ESI));
  /* 117a05f8 push edi */
  push32((uint32_t)(EDI));
  /* 117a05f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 117a05fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 117a05ff lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 117a0602 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_117a0605:;
  /* 117a0605 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0609 jne 0x117a0629 */
  if (!C.zf) goto L_117a0629;
  /* 117a060b push 0x117c2c50 */
  push32((uint32_t)(0x117c2c50u));
  /* 117a0610 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a0612 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 117a0614 push 0x117c2c44 */
  push32((uint32_t)(0x117c2c44u));
  /* 117a0619 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a061b call 0x11798d70 */
  push32(0x117a0620u); f_11798d70();
  /* 117a0620 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0623 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0626 jne 0x117a0629 */
  if (!C.zf) goto L_117a0629;
  /* 117a0628 int3  */
  x86_unimpl("int3 @ 0x117a0628");
L_117a0629:;
  /* 117a0629 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a062b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a062d jne 0x117a0605 */
  if (!C.zf) goto L_117a0605;
L_117a062f:;
  /* 117a062f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0633 jne 0x117a0653 */
  if (!C.zf) goto L_117a0653;
  /* 117a0635 push 0x117c2c34 */
  push32((uint32_t)(0x117c2c34u));
  /* 117a063a push 0 */
  push32((uint32_t)(0x0u));
  /* 117a063c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 117a063e push 0x117c2c44 */
  push32((uint32_t)(0x117c2c44u));
  /* 117a0643 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a0645 call 0x11798d70 */
  push32(0x117a064au); f_11798d70();
  /* 117a064a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a064d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0650 jne 0x117a0653 */
  if (!C.zf) goto L_117a0653;
  /* 117a0652 int3  */
  x86_unimpl("int3 @ 0x117a0652");
L_117a0653:;
  /* 117a0653 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a0655 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a0657 jne 0x117a062f */
  if (!C.zf) goto L_117a062f;
  /* 117a0659 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a065c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 117a0663 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a0666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a0669 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 117a066c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a066f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a0672 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 117a0674 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a0677 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 117a067e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117a0681 push ecx */
  push32((uint32_t)(ECX));
  /* 117a0682 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a0685 push edx */
  push32((uint32_t)(EDX));
  /* 117a0686 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a0689 push eax */
  push32((uint32_t)(EAX));
  /* 117a068a call 0x117a1670 */
  push32(0x117a068fu); f_117a1670();
  /* 117a068f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0692 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117a0695 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a0698 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117a069b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a069e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a06a1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 117a06a4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a06a7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a06ab jl 0x117a06cf */
  if ((C.sf!=C.of)) goto L_117a06cf;
  /* 117a06ad mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a06b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a06b2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 117a06b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a06b7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117a06bd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 117a06c0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a06c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a06c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a06c8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a06cb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117a06cd jmp 0x117a06e0 */
  goto L_117a06e0;
L_117a06cf:;
  /* 117a06cf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a06d2 push edx */
  push32((uint32_t)(EDX));
  /* 117a06d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a06d5 call 0x117a13f0 */
  push32(0x117a06dau); f_117a13f0();
  /* 117a06da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a06dd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_117a06e0:;
  /* 117a06e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a06e3 pop edi */
  EDI = (pop32());
  /* 117a06e4 pop esi */
  ESI = (pop32());
  /* 117a06e5 pop ebx */
  EBX = (pop32());
  /* 117a06e6 mov esp, ebp */
  ESP = (EBP);
  /* 117a06e8 pop ebp */
  EBP = (pop32());
  /* 117a06e9 ret  */
  ESPCHK(0x117a05f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100106f0 @ 0x117a06f0 (183 bytes, 58 insns) */
void f_117a06f0(void) {
  FTRACE(0x117a06f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a06f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a06f1 mov ebp, esp */
  EBP = (ESP);
  /* 117a06f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a06f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a06f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a06fc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0701 ja 0x117a071a */
  if ((!C.cf&&!C.zf)) goto L_117a071a;
  /* 117a0703 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a0706 mov edx, dword ptr [0x117c5db8] */
  EDX = (r32((uint32_t)(0x117c5db8)));
  /* 117a070c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a070e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 117a0712 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 117a0715 jmp 0x117a07a3 */
  goto L_117a07a3;
L_117a071a:;
  /* 117a071a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a071d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 117a0720 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117a0726 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117a072c mov edx, dword ptr [0x117c5db8] */
  EDX = (r32((uint32_t)(0x117c5db8)));
  /* 117a0732 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a0734 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 117a0738 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 117a073d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a073f je 0x117a0763 */
  if (C.zf) goto L_117a0763;
  /* 117a0741 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a0744 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 117a0747 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117a074d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 117a0750 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 117a0753 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 117a0756 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 117a075a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 117a0761 jmp 0x117a0774 */
  goto L_117a0774;
L_117a0763:;
  /* 117a0763 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 117a0766 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 117a0769 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 117a076d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_117a0774:;
  /* 117a0774 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a0776 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a0778 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a077a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 117a077d push ecx */
  push32((uint32_t)(ECX));
  /* 117a077e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a0781 push edx */
  push32((uint32_t)(EDX));
  /* 117a0782 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 117a0785 push eax */
  push32((uint32_t)(EAX));
  /* 117a0786 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a0788 call 0x117a2cf0 */
  push32(0x117a078du); f_117a2cf0();
  /* 117a078d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0790 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a0792 jne 0x117a0798 */
  if (!C.zf) goto L_117a0798;
  /* 117a0794 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a0796 jmp 0x117a07a3 */
  goto L_117a07a3;
L_117a0798:;
  /* 117a0798 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a079b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a07a0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_117a07a3:;
  /* 117a07a3 mov esp, ebp */
  ESP = (EBP);
  /* 117a07a5 pop ebp */
  EBP = (pop32());
  /* 117a07a6 ret  */
  ESPCHK(0x117a06f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100107b0 @ 0x117a07b0 (836 bytes, 238 insns) */
void f_117a07b0(void) {
  FTRACE(0x117a07b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a07b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a07b1 mov ebp, esp */
  EBP = (ESP);
  /* 117a07b3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a07b6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117a07b8 call 0x1179d7a0 */
  push32(0x117a07bdu); f_1179d7a0();
  /* 117a07bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a07c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a07c3 push eax */
  push32((uint32_t)(EAX));
  /* 117a07c4 call 0x117a0b00 */
  push32(0x117a07c9u); f_117a0b00();
  /* 117a07c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a07cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117a07cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a07d2 cmp ecx, dword ptr [0x117c92a4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117c92a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a07d8 jne 0x117a07eb */
  if (!C.zf) goto L_117a07eb;
  /* 117a07da push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117a07dc call 0x1179d840 */
  push32(0x117a07e1u); f_1179d840();
  /* 117a07e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a07e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a07e6 jmp 0x117a0af0 */
  goto L_117a0af0;
L_117a07eb:;
  /* 117a07eb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a07ef jne 0x117a080c */
  if (!C.zf) goto L_117a080c;
  /* 117a07f1 call 0x117a0be0 */
  push32(0x117a07f6u); f_117a0be0();
  /* 117a07f6 call 0x117a0c60 */
  push32(0x117a07fbu); f_117a0c60();
  /* 117a07fb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117a07fd call 0x1179d840 */
  push32(0x117a0802u); f_1179d840();
  /* 117a0802 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0805 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a0807 jmp 0x117a0af0 */
  goto L_117a0af0;
L_117a080c:;
  /* 117a080c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a0813 jmp 0x117a081e */
  goto L_117a081e;
L_117a0815:;
  /* 117a0815 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a0818 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a081b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117a081e:;
  /* 117a081e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0822 jae 0x117a096f */
  if (!C.cf) goto L_117a096f;
  /* 117a0828 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a082b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a082e mov ecx, dword ptr [eax + 0x117c5fd8] */
  ECX = (r32((uint32_t)(EAX + 0x117c5fd8)));
  /* 117a0834 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0837 jne 0x117a096a */
  if (!C.zf) goto L_117a096a;
  /* 117a083d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 117a0844 jmp 0x117a084f */
  goto L_117a084f;
L_117a0846:;
  /* 117a0846 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a0849 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a084c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_117a084f:;
  /* 117a084f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0856 jae 0x117a0864 */
  if (!C.cf) goto L_117a0864;
  /* 117a0858 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a085b mov byte ptr [eax + 0x117c9440], 0 */
  w8((uint32_t)(EAX + 0x117c9440), (0x0u));
  /* 117a0862 jmp 0x117a0846 */
  goto L_117a0846;
L_117a0864:;
  /* 117a0864 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117a086b jmp 0x117a0876 */
  goto L_117a0876;
L_117a086d:;
  /* 117a086d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a0870 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0873 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_117a0876:;
  /* 117a0876 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a087a jae 0x117a08f7 */
  if (!C.cf) goto L_117a08f7;
  /* 117a087c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a087f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a0882 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a0885 lea ecx, [edx + eax*8 + 0x117c5fe8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x117c5fe8));
  /* 117a088c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a088f jmp 0x117a089a */
  goto L_117a089a;
L_117a0891:;
  /* 117a0891 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a0894 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0897 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_117a089a:;
  /* 117a089a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a089d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a089f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117a08a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a08a3 je 0x117a08f2 */
  if (C.zf) goto L_117a08f2;
  /* 117a08a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a08a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a08aa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 117a08ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a08af je 0x117a08f2 */
  if (C.zf) goto L_117a08f2;
  /* 117a08b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a08b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a08b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117a08b8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 117a08bb jmp 0x117a08c6 */
  goto L_117a08c6;
L_117a08bd:;
  /* 117a08bd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a08c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a08c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_117a08c6:;
  /* 117a08c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a08c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a08cb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 117a08ce cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a08d1 ja 0x117a08f0 */
  if ((!C.cf&&!C.zf)) goto L_117a08f0;
  /* 117a08d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a08d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a08d9 mov dl, byte ptr [eax + 0x117c9441] */
  DL = (r8((uint32_t)(EAX + 0x117c9441)));
  /* 117a08df or dl, byte ptr [ecx + 0x117c5fd0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x117c5fd0))); DL = (_r); fl_logic(_r,8); }
  /* 117a08e5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a08e8 mov byte ptr [eax + 0x117c9441], dl */
  w8((uint32_t)(EAX + 0x117c9441), (DL));
  /* 117a08ee jmp 0x117a08bd */
  goto L_117a08bd;
L_117a08f0:;
  /* 117a08f0 jmp 0x117a0891 */
  goto L_117a0891;
L_117a08f2:;
  /* 117a08f2 jmp 0x117a086d */
  goto L_117a086d;
L_117a08f7:;
  /* 117a08f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a08fa mov dword ptr [0x117c92a4], ecx */
  w32((uint32_t)(0x117c92a4), (ECX));
  /* 117a0900 mov dword ptr [0x117c932c], 1 */
  w32((uint32_t)(0x117c932c), (0x1u));
  /* 117a090a mov edx, dword ptr [0x117c92a4] */
  EDX = (r32((uint32_t)(0x117c92a4)));
  /* 117a0910 push edx */
  push32((uint32_t)(EDX));
  /* 117a0911 call 0x117a0b60 */
  push32(0x117a0916u); f_117a0b60();
  /* 117a0916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0919 mov dword ptr [0x117c9544], eax */
  w32((uint32_t)(0x117c9544), (EAX));
  /* 117a091e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117a0925 jmp 0x117a0930 */
  goto L_117a0930;
L_117a0927:;
  /* 117a0927 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a092a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a092d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_117a0930:;
  /* 117a0930 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0934 jae 0x117a0954 */
  if (!C.cf) goto L_117a0954;
  /* 117a0936 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a0939 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a093c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a093f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a0942 mov cx, word ptr [ecx + eax*2 + 0x117c5fdc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x117c5fdc)));
  /* 117a094a mov word ptr [edx*2 + 0x117c9320], cx */
  w16((uint32_t)(EDX*2 + 0x117c9320), (CX));
  /* 117a0952 jmp 0x117a0927 */
  goto L_117a0927;
L_117a0954:;
  /* 117a0954 call 0x117a0c60 */
  push32(0x117a0959u); f_117a0c60();
  /* 117a0959 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117a095b call 0x1179d840 */
  push32(0x117a0960u); f_1179d840();
  /* 117a0960 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0963 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a0965 jmp 0x117a0af0 */
  goto L_117a0af0;
L_117a096a:;
  /* 117a096a jmp 0x117a0815 */
  goto L_117a0815;
L_117a096f:;
  /* 117a096f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 117a0972 push edx */
  push32((uint32_t)(EDX));
  /* 117a0973 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a0976 push eax */
  push32((uint32_t)(EAX));
  /* 117a0977 call dword ptr [0x117ca334] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca334))), 0x117a097du);
  /* 117a097d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0980 jne 0x117a0ac2 */
  if (!C.zf) goto L_117a0ac2;
  /* 117a0986 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 117a098d jmp 0x117a0998 */
  goto L_117a0998;
L_117a098f:;
  /* 117a098f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a0992 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0995 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_117a0998:;
  /* 117a0998 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a099f jae 0x117a09ad */
  if (!C.cf) goto L_117a09ad;
  /* 117a09a1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a09a4 mov byte ptr [edx + 0x117c9440], 0 */
  w8((uint32_t)(EDX + 0x117c9440), (0x0u));
  /* 117a09ab jmp 0x117a098f */
  goto L_117a098f;
L_117a09ad:;
  /* 117a09ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a09b0 mov dword ptr [0x117c92a4], eax */
  w32((uint32_t)(0x117c92a4), (EAX));
  /* 117a09b5 mov dword ptr [0x117c9544], 0 */
  w32((uint32_t)(0x117c9544), (0x0u));
  /* 117a09bf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a09c3 jbe 0x117a0a7e */
  if ((C.cf||C.zf)) goto L_117a0a7e;
  /* 117a09c9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 117a09cc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 117a09cf jmp 0x117a09da */
  goto L_117a09da;
L_117a09d1:;
  /* 117a09d1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a09d4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a09d7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_117a09da:;
  /* 117a09da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a09dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a09df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117a09e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a09e3 je 0x117a0a2c */
  if (C.zf) goto L_117a0a2c;
  /* 117a09e5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a09e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a09ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 117a09ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a09ef je 0x117a0a2c */
  if (C.zf) goto L_117a0a2c;
  /* 117a09f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a09f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a09f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117a09f8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 117a09fb jmp 0x117a0a06 */
  goto L_117a0a06;
L_117a09fd:;
  /* 117a09fd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a0a00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0a03 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_117a0a06:;
  /* 117a0a06 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a0a09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a0a0b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 117a0a0e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0a11 ja 0x117a0a2a */
  if ((!C.cf&&!C.zf)) goto L_117a0a2a;
  /* 117a0a13 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a0a16 mov cl, byte ptr [eax + 0x117c9441] */
  CL = (r8((uint32_t)(EAX + 0x117c9441)));
  /* 117a0a1c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 117a0a1f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a0a22 mov byte ptr [edx + 0x117c9441], cl */
  w8((uint32_t)(EDX + 0x117c9441), (CL));
  /* 117a0a28 jmp 0x117a09fd */
  goto L_117a09fd;
L_117a0a2a:;
  /* 117a0a2a jmp 0x117a09d1 */
  goto L_117a09d1;
L_117a0a2c:;
  /* 117a0a2c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 117a0a33 jmp 0x117a0a3e */
  goto L_117a0a3e;
L_117a0a35:;
  /* 117a0a35 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a0a38 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0a3b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_117a0a3e:;
  /* 117a0a3e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0a45 jae 0x117a0a5e */
  if (!C.cf) goto L_117a0a5e;
  /* 117a0a47 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a0a4a mov dl, byte ptr [ecx + 0x117c9441] */
  DL = (r8((uint32_t)(ECX + 0x117c9441)));
  /* 117a0a50 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 117a0a53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a0a56 mov byte ptr [eax + 0x117c9441], dl */
  w8((uint32_t)(EAX + 0x117c9441), (DL));
  /* 117a0a5c jmp 0x117a0a35 */
  goto L_117a0a35;
L_117a0a5e:;
  /* 117a0a5e mov ecx, dword ptr [0x117c92a4] */
  ECX = (r32((uint32_t)(0x117c92a4)));
  /* 117a0a64 push ecx */
  push32((uint32_t)(ECX));
  /* 117a0a65 call 0x117a0b60 */
  push32(0x117a0a6au); f_117a0b60();
  /* 117a0a6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0a6d mov dword ptr [0x117c9544], eax */
  w32((uint32_t)(0x117c9544), (EAX));
  /* 117a0a72 mov dword ptr [0x117c932c], 1 */
  w32((uint32_t)(0x117c932c), (0x1u));
  /* 117a0a7c jmp 0x117a0a88 */
  goto L_117a0a88;
L_117a0a7e:;
  /* 117a0a7e mov dword ptr [0x117c932c], 0 */
  w32((uint32_t)(0x117c932c), (0x0u));
L_117a0a88:;
  /* 117a0a88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117a0a8f jmp 0x117a0a9a */
  goto L_117a0a9a;
L_117a0a91:;
  /* 117a0a91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a0a94 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0a97 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_117a0a9a:;
  /* 117a0a9a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0a9e jae 0x117a0aaf */
  if (!C.cf) goto L_117a0aaf;
  /* 117a0aa0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a0aa3 mov word ptr [eax*2 + 0x117c9320], 0 */
  w16((uint32_t)(EAX*2 + 0x117c9320), (0x0u));
  /* 117a0aad jmp 0x117a0a91 */
  goto L_117a0a91;
L_117a0aaf:;
  /* 117a0aaf call 0x117a0c60 */
  push32(0x117a0ab4u); f_117a0c60();
  /* 117a0ab4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117a0ab6 call 0x1179d840 */
  push32(0x117a0abbu); f_1179d840();
  /* 117a0abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0abe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a0ac0 jmp 0x117a0af0 */
  goto L_117a0af0;
L_117a0ac2:;
  /* 117a0ac2 cmp dword ptr [0x117c7e64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0ac9 je 0x117a0ae3 */
  if (C.zf) goto L_117a0ae3;
  /* 117a0acb call 0x117a0be0 */
  push32(0x117a0ad0u); f_117a0be0();
  /* 117a0ad0 call 0x117a0c60 */
  push32(0x117a0ad5u); f_117a0c60();
  /* 117a0ad5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117a0ad7 call 0x1179d840 */
  push32(0x117a0adcu); f_1179d840();
  /* 117a0adc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0adf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a0ae1 jmp 0x117a0af0 */
  goto L_117a0af0;
L_117a0ae3:;
  /* 117a0ae3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117a0ae5 call 0x1179d840 */
  push32(0x117a0aeau); f_1179d840();
  /* 117a0aea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0aed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_117a0af0:;
  /* 117a0af0 mov esp, ebp */
  ESP = (EBP);
  /* 117a0af2 pop ebp */
  EBP = (pop32());
  /* 117a0af3 ret  */
  ESPCHK(0x117a07b0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x117a0b00 (89 bytes, 21 insns) */
void f_117a0b00(void) {
  FTRACE(0x117a0b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a0b00 push ebp */
  push32((uint32_t)(EBP));
  /* 117a0b01 mov ebp, esp */
  EBP = (ESP);
  /* 117a0b03 mov dword ptr [0x117c7e64], 0 */
  w32((uint32_t)(0x117c7e64), (0x0u));
  /* 117a0b0d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0b11 jne 0x117a0b25 */
  if (!C.zf) goto L_117a0b25;
  /* 117a0b13 mov dword ptr [0x117c7e64], 1 */
  w32((uint32_t)(0x117c7e64), (0x1u));
  /* 117a0b1d call dword ptr [0x117ca32c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca32c))), 0x117a0b23u);
  /* 117a0b23 jmp 0x117a0b57 */
  goto L_117a0b57;
L_117a0b25:;
  /* 117a0b25 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0b29 jne 0x117a0b3d */
  if (!C.zf) goto L_117a0b3d;
  /* 117a0b2b mov dword ptr [0x117c7e64], 1 */
  w32((uint32_t)(0x117c7e64), (0x1u));
  /* 117a0b35 call dword ptr [0x117ca330] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca330))), 0x117a0b3bu);
  /* 117a0b3b jmp 0x117a0b57 */
  goto L_117a0b57;
L_117a0b3d:;
  /* 117a0b3d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0b41 jne 0x117a0b54 */
  if (!C.zf) goto L_117a0b54;
  /* 117a0b43 mov dword ptr [0x117c7e64], 1 */
  w32((uint32_t)(0x117c7e64), (0x1u));
  /* 117a0b4d mov eax, dword ptr [0x117c7e80] */
  EAX = (r32((uint32_t)(0x117c7e80)));
  /* 117a0b52 jmp 0x117a0b57 */
  goto L_117a0b57;
L_117a0b54:;
  /* 117a0b54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_117a0b57:;
  /* 117a0b57 pop ebp */
  EBP = (pop32());
  /* 117a0b58 ret  */
  ESPCHK(0x117a0b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b60 @ 0x117a0b60 (80 bytes, 26 insns) [1 switch table(s)] */
void f_117a0b60(void) {
  FTRACE(0x117a0b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a0b60 push ebp */
  push32((uint32_t)(EBP));
  /* 117a0b61 mov ebp, esp */
  EBP = (ESP);
  /* 117a0b63 push ecx */
  push32((uint32_t)(ECX));
  /* 117a0b64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a0b67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a0b6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a0b6d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a0b73 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a0b76 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0b7a ja 0x117a0baa */
  if ((!C.cf&&!C.zf)) goto L_117a0baa;
  /* 117a0b7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a0b7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a0b81 mov dl, byte ptr [eax + 0x117a0bc4] */
  DL = (r8((uint32_t)(EAX + 0x117a0bc4)));
  /* 117a0b87 jmp dword ptr [edx*4 + 0x117a0bb0] */
  switch (EDX) {
    case 0: goto L_117a0b8e;
    case 1: goto L_117a0b95;
    case 2: goto L_117a0b9c;
    case 3: goto L_117a0ba3;
    case 4: goto L_117a0baa;
    default: x86_unimpl("switch@0x117a0b87 out of table"); return;
  }
L_117a0b8e:;
  /* 117a0b8e mov eax, 0x411 */
  EAX = (0x411u);
  /* 117a0b93 jmp 0x117a0bac */
  goto L_117a0bac;
L_117a0b95:;
  /* 117a0b95 mov eax, 0x804 */
  EAX = (0x804u);
  /* 117a0b9a jmp 0x117a0bac */
  goto L_117a0bac;
L_117a0b9c:;
  /* 117a0b9c mov eax, 0x412 */
  EAX = (0x412u);
  /* 117a0ba1 jmp 0x117a0bac */
  goto L_117a0bac;
L_117a0ba3:;
  /* 117a0ba3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 117a0ba8 jmp 0x117a0bac */
  goto L_117a0bac;
L_117a0baa:;
  /* 117a0baa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a0bac:;
  /* 117a0bac mov esp, ebp */
  ESP = (EBP);
  /* 117a0bae pop ebp */
  EBP = (pop32());
  /* 117a0baf ret  */
  ESPCHK(0x117a0b60u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x117a0be0 (116 bytes, 29 insns) */
void f_117a0be0(void) {
  FTRACE(0x117a0be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a0be0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a0be1 mov ebp, esp */
  EBP = (ESP);
  /* 117a0be3 push ecx */
  push32((uint32_t)(ECX));
  /* 117a0be4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a0beb jmp 0x117a0bf6 */
  goto L_117a0bf6;
L_117a0bed:;
  /* 117a0bed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a0bf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0bf3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117a0bf6:;
  /* 117a0bf6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0bfd jge 0x117a0c0b */
  if ((C.sf==C.of)) goto L_117a0c0b;
  /* 117a0bff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a0c02 mov byte ptr [ecx + 0x117c9440], 0 */
  w8((uint32_t)(ECX + 0x117c9440), (0x0u));
  /* 117a0c09 jmp 0x117a0bed */
  goto L_117a0bed;
L_117a0c0b:;
  /* 117a0c0b mov dword ptr [0x117c92a4], 0 */
  w32((uint32_t)(0x117c92a4), (0x0u));
  /* 117a0c15 mov dword ptr [0x117c932c], 0 */
  w32((uint32_t)(0x117c932c), (0x0u));
  /* 117a0c1f mov dword ptr [0x117c9544], 0 */
  w32((uint32_t)(0x117c9544), (0x0u));
  /* 117a0c29 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a0c30 jmp 0x117a0c3b */
  goto L_117a0c3b;
L_117a0c32:;
  /* 117a0c32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a0c35 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0c38 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117a0c3b:;
  /* 117a0c3b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0c3f jge 0x117a0c50 */
  if ((C.sf==C.of)) goto L_117a0c50;
  /* 117a0c41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a0c44 mov word ptr [eax*2 + 0x117c9320], 0 */
  w16((uint32_t)(EAX*2 + 0x117c9320), (0x0u));
  /* 117a0c4e jmp 0x117a0c32 */
  goto L_117a0c32;
L_117a0c50:;
  /* 117a0c50 mov esp, ebp */
  ESP = (EBP);
  /* 117a0c52 pop ebp */
  EBP = (pop32());
  /* 117a0c53 ret  */
  ESPCHK(0x117a0be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c60 @ 0x117a0c60 (770 bytes, 175 insns) */
void f_117a0c60(void) {
  FTRACE(0x117a0c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a0c60 push ebp */
  push32((uint32_t)(EBP));
  /* 117a0c61 mov ebp, esp */
  EBP = (ESP);
  /* 117a0c63 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a0c69 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 117a0c6f push eax */
  push32((uint32_t)(EAX));
  /* 117a0c70 mov ecx, dword ptr [0x117c92a4] */
  ECX = (r32((uint32_t)(0x117c92a4)));
  /* 117a0c76 push ecx */
  push32((uint32_t)(ECX));
  /* 117a0c77 call dword ptr [0x117ca334] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca334))), 0x117a0c7du);
  /* 117a0c7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0c80 jne 0x117a0e99 */
  if (!C.zf) goto L_117a0e99;
  /* 117a0c86 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 117a0c90 jmp 0x117a0ca1 */
  goto L_117a0ca1;
L_117a0c92:;
  /* 117a0c92 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0c98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0c9b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_117a0ca1:;
  /* 117a0ca1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0cab jae 0x117a0cc2 */
  if (!C.cf) goto L_117a0cc2;
  /* 117a0cad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0cb3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 117a0cb9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 117a0cc0 jmp 0x117a0c92 */
  goto L_117a0c92;
L_117a0cc2:;
  /* 117a0cc2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 117a0cc9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 117a0ccf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a0cd2 jmp 0x117a0cdd */
  goto L_117a0cdd;
L_117a0cd4:;
  /* 117a0cd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a0cd7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0cda mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117a0cdd:;
  /* 117a0cdd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a0ce0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a0ce2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117a0ce4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a0ce6 je 0x117a0d28 */
  if (C.zf) goto L_117a0d28;
  /* 117a0ce8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a0ceb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a0ced mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117a0cef mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 117a0cf5 jmp 0x117a0d06 */
  goto L_117a0d06;
L_117a0cf7:;
  /* 117a0cf7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0cfd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0d00 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_117a0d06:;
  /* 117a0d06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a0d09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a0d0b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 117a0d0e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0d14 ja 0x117a0d26 */
  if ((!C.cf&&!C.zf)) goto L_117a0d26;
  /* 117a0d16 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0d1c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 117a0d24 jmp 0x117a0cf7 */
  goto L_117a0cf7;
L_117a0d26:;
  /* 117a0d26 jmp 0x117a0cd4 */
  goto L_117a0cd4;
L_117a0d28:;
  /* 117a0d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a0d2a mov eax, dword ptr [0x117c9544] */
  EAX = (r32((uint32_t)(0x117c9544)));
  /* 117a0d2f push eax */
  push32((uint32_t)(EAX));
  /* 117a0d30 mov ecx, dword ptr [0x117c92a4] */
  ECX = (r32((uint32_t)(0x117c92a4)));
  /* 117a0d36 push ecx */
  push32((uint32_t)(ECX));
  /* 117a0d37 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 117a0d3d push edx */
  push32((uint32_t)(EDX));
  /* 117a0d3e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117a0d43 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 117a0d49 push eax */
  push32((uint32_t)(EAX));
  /* 117a0d4a push 1 */
  push32((uint32_t)(0x1u));
  /* 117a0d4c call 0x117a2cf0 */
  push32(0x117a0d51u); f_117a2cf0();
  /* 117a0d51 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a0d56 mov ecx, dword ptr [0x117c92a4] */
  ECX = (r32((uint32_t)(0x117c92a4)));
  /* 117a0d5c push ecx */
  push32((uint32_t)(ECX));
  /* 117a0d5d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117a0d62 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 117a0d68 push edx */
  push32((uint32_t)(EDX));
  /* 117a0d69 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117a0d6e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 117a0d74 push eax */
  push32((uint32_t)(EAX));
  /* 117a0d75 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117a0d7a mov ecx, dword ptr [0x117c9544] */
  ECX = (r32((uint32_t)(0x117c9544)));
  /* 117a0d80 push ecx */
  push32((uint32_t)(ECX));
  /* 117a0d81 call 0x117a2eb0 */
  push32(0x117a0d86u); f_117a2eb0();
  /* 117a0d86 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0d89 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a0d8b mov edx, dword ptr [0x117c92a4] */
  EDX = (r32((uint32_t)(0x117c92a4)));
  /* 117a0d91 push edx */
  push32((uint32_t)(EDX));
  /* 117a0d92 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117a0d97 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 117a0d9d push eax */
  push32((uint32_t)(EAX));
  /* 117a0d9e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117a0da3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 117a0da9 push ecx */
  push32((uint32_t)(ECX));
  /* 117a0daa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 117a0daf mov edx, dword ptr [0x117c9544] */
  EDX = (r32((uint32_t)(0x117c9544)));
  /* 117a0db5 push edx */
  push32((uint32_t)(EDX));
  /* 117a0db6 call 0x117a2eb0 */
  push32(0x117a0dbbu); f_117a2eb0();
  /* 117a0dbb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0dbe mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 117a0dc8 jmp 0x117a0dd9 */
  goto L_117a0dd9;
L_117a0dca:;
  /* 117a0dca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0dd0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0dd3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_117a0dd9:;
  /* 117a0dd9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0de3 jae 0x117a0e94 */
  if (!C.cf) goto L_117a0e94;
  /* 117a0de9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0def xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a0df1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 117a0df9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 117a0dfc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a0dfe je 0x117a0e36 */
  if (C.zf) goto L_117a0e36;
  /* 117a0e00 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0e06 mov cl, byte ptr [eax + 0x117c9441] */
  CL = (r8((uint32_t)(EAX + 0x117c9441)));
  /* 117a0e0c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 117a0e0f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0e15 mov byte ptr [edx + 0x117c9441], cl */
  w8((uint32_t)(EDX + 0x117c9441), (CL));
  /* 117a0e1b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0e21 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0e27 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 117a0e2e mov byte ptr [eax + 0x117c9340], dl */
  w8((uint32_t)(EAX + 0x117c9340), (DL));
  /* 117a0e34 jmp 0x117a0e8f */
  goto L_117a0e8f;
L_117a0e36:;
  /* 117a0e36 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0e3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a0e3e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 117a0e46 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 117a0e49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a0e4b je 0x117a0e82 */
  if (C.zf) goto L_117a0e82;
  /* 117a0e4d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0e53 mov al, byte ptr [edx + 0x117c9441] */
  AL = (r8((uint32_t)(EDX + 0x117c9441)));
  /* 117a0e59 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 117a0e5b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0e61 mov byte ptr [ecx + 0x117c9441], al */
  w8((uint32_t)(ECX + 0x117c9441), (AL));
  /* 117a0e67 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0e6d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0e73 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 117a0e7a mov byte ptr [edx + 0x117c9340], cl */
  w8((uint32_t)(EDX + 0x117c9340), (CL));
  /* 117a0e80 jmp 0x117a0e8f */
  goto L_117a0e8f;
L_117a0e82:;
  /* 117a0e82 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0e88 mov byte ptr [edx + 0x117c9340], 0 */
  w8((uint32_t)(EDX + 0x117c9340), (0x0u));
L_117a0e8f:;
  /* 117a0e8f jmp 0x117a0dca */
  goto L_117a0dca;
L_117a0e94:;
  /* 117a0e94 jmp 0x117a0f5e */
  goto L_117a0f5e;
L_117a0e99:;
  /* 117a0e99 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 117a0ea3 jmp 0x117a0eb4 */
  goto L_117a0eb4;
L_117a0ea5:;
  /* 117a0ea5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0eab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0eae mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_117a0eb4:;
  /* 117a0eb4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0ebe jae 0x117a0f5e */
  if (!C.cf) goto L_117a0f5e;
  /* 117a0ec4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0ecb jb 0x117a0f08 */
  if (C.cf) goto L_117a0f08;
  /* 117a0ecd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0ed4 ja 0x117a0f08 */
  if ((!C.cf&&!C.zf)) goto L_117a0f08;
  /* 117a0ed6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0edc mov dl, byte ptr [ecx + 0x117c9441] */
  DL = (r8((uint32_t)(ECX + 0x117c9441)));
  /* 117a0ee2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 117a0ee5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0eeb mov byte ptr [eax + 0x117c9441], dl */
  w8((uint32_t)(EAX + 0x117c9441), (DL));
  /* 117a0ef1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0ef7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0efa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0f00 mov byte ptr [edx + 0x117c9340], cl */
  w8((uint32_t)(EDX + 0x117c9340), (CL));
  /* 117a0f06 jmp 0x117a0f59 */
  goto L_117a0f59;
L_117a0f08:;
  /* 117a0f08 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0f0f jb 0x117a0f4c */
  if (C.cf) goto L_117a0f4c;
  /* 117a0f11 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0f18 ja 0x117a0f4c */
  if ((!C.cf&&!C.zf)) goto L_117a0f4c;
  /* 117a0f1a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0f20 mov cl, byte ptr [eax + 0x117c9441] */
  CL = (r8((uint32_t)(EAX + 0x117c9441)));
  /* 117a0f26 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 117a0f29 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0f2f mov byte ptr [edx + 0x117c9441], cl */
  w8((uint32_t)(EDX + 0x117c9441), (CL));
  /* 117a0f35 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0f3b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a0f3e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0f44 mov byte ptr [ecx + 0x117c9340], al */
  w8((uint32_t)(ECX + 0x117c9340), (AL));
  /* 117a0f4a jmp 0x117a0f59 */
  goto L_117a0f59;
L_117a0f4c:;
  /* 117a0f4c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117a0f52 mov byte ptr [edx + 0x117c9340], 0 */
  w8((uint32_t)(EDX + 0x117c9340), (0x0u));
L_117a0f59:;
  /* 117a0f59 jmp 0x117a0ea5 */
  goto L_117a0ea5;
L_117a0f5e:;
  /* 117a0f5e mov esp, ebp */
  ESP = (EBP);
  /* 117a0f60 pop ebp */
  EBP = (pop32());
  /* 117a0f61 ret  */
  ESPCHK(0x117a0c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f70 @ 0x117a0f70 (23 bytes, 9 insns) */
void f_117a0f70(void) {
  FTRACE(0x117a0f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a0f70 push ebp */
  push32((uint32_t)(EBP));
  /* 117a0f71 mov ebp, esp */
  EBP = (ESP);
  /* 117a0f73 cmp dword ptr [0x117c932c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c932c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0f7a je 0x117a0f83 */
  if (C.zf) goto L_117a0f83;
  /* 117a0f7c mov eax, dword ptr [0x117c92a4] */
  EAX = (r32((uint32_t)(0x117c92a4)));
  /* 117a0f81 jmp 0x117a0f85 */
  goto L_117a0f85;
L_117a0f83:;
  /* 117a0f83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a0f85:;
  /* 117a0f85 pop ebp */
  EBP = (pop32());
  /* 117a0f86 ret  */
  ESPCHK(0x117a0f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f90 @ 0x117a0f90 (34 bytes, 10 insns) */
void f_117a0f90(void) {
  FTRACE(0x117a0f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a0f90 push ebp */
  push32((uint32_t)(EBP));
  /* 117a0f91 mov ebp, esp */
  EBP = (ESP);
  /* 117a0f93 cmp dword ptr [0x117c96f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c96f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0f9a jne 0x117a0fb0 */
  if (!C.zf) goto L_117a0fb0;
  /* 117a0f9c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 117a0f9e call 0x117a07b0 */
  push32(0x117a0fa3u); f_117a07b0();
  /* 117a0fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0fa6 mov dword ptr [0x117c96f0], 1 */
  w32((uint32_t)(0x117c96f0), (0x1u));
L_117a0fb0:;
  /* 117a0fb0 pop ebp */
  EBP = (pop32());
  /* 117a0fb1 ret  */
  ESPCHK(0x117a0f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fc0 @ 0x117a0fc0 (664 bytes, 264 insns) [15 switch table(s)] */
void f_117a0fc0(void) {
  FTRACE(0x117a0fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a0fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a0fc1 mov ebp, esp */
  EBP = (ESP);
  /* 117a0fc3 push edi */
  push32((uint32_t)(EDI));
  /* 117a0fc4 push esi */
  push32((uint32_t)(ESI));
  /* 117a0fc5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 117a0fc8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a0fcb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 117a0fce mov eax, ecx */
  EAX = (ECX);
  /* 117a0fd0 mov edx, ecx */
  EDX = (ECX);
  /* 117a0fd2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a0fd4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0fd6 jbe 0x117a0fe0 */
  if ((C.cf||C.zf)) goto L_117a0fe0;
  /* 117a0fd8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0fda jb 0x117a1158 */
  if (C.cf) goto L_117a1158;
L_117a0fe0:;
  /* 117a0fe0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117a0fe6 jne 0x117a0ffc */
  if (!C.zf) goto L_117a0ffc;
  /* 117a0fe8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117a0feb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117a0fee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a0ff1 jb 0x117a101c */
  if (C.cf) goto L_117a101c;
  /* 117a0ff3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117a0ff5 jmp dword ptr [edx*4 + 0x117a1108] */
  switch (EDX) {
    case 0: goto L_117a1118;
    case 1: goto L_117a1120;
    case 2: goto L_117a112c;
    case 3: goto L_117a1140;
    default: x86_unimpl("switch@0x117a0ff5 out of table"); return;
  }
L_117a0ffc:;
  /* 117a0ffc mov eax, edi */
  EAX = (EDI);
  /* 117a0ffe mov edx, 3 */
  EDX = (0x3u);
  /* 117a1003 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a1006 jb 0x117a1014 */
  if (C.cf) goto L_117a1014;
  /* 117a1008 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 117a100b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a100d jmp dword ptr [eax*4 + 0x117a1020] */
  switch (EAX) {
    case 1: goto L_117a1030;
    case 2: goto L_117a105c;
    case 3: goto L_117a1080;
    default: x86_unimpl("switch@0x117a100d out of table"); return;
  }
L_117a1014:;
  /* 117a1014 jmp dword ptr [ecx*4 + 0x117a1118] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x117a1118)))); return;
  /* 117a101b nop  */
  /* nop */
L_117a101c:;
  /* 117a101c jmp dword ptr [ecx*4 + 0x117a109c] */
  switch (ECX) {
    case 0: goto L_117a10ff;
    case 1: goto L_117a10ec;
    case 2: goto L_117a10e4;
    case 3: goto L_117a10dc;
    case 4: goto L_117a10d4;
    case 5: goto L_117a10cc;
    case 6: goto L_117a10c4;
    case 7: goto L_117a10bc;
    default: x86_unimpl("switch@0x117a101c out of table"); return;
  }
  /* 117a1023 nop  */
  /* nop */
L_117a1030:;
  /* 117a1030 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117a1032 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117a1034 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117a1036 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117a1039 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117a103c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117a103f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117a1042 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117a1045 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1048 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117a104b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a104e jb 0x117a101c */
  if (C.cf) goto L_117a101c;
  /* 117a1050 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117a1052 jmp dword ptr [edx*4 + 0x117a1108] */
  switch (EDX) {
    case 0: goto L_117a1118;
    case 1: goto L_117a1120;
    case 2: goto L_117a112c;
    case 3: goto L_117a1140;
    default: x86_unimpl("switch@0x117a1052 out of table"); return;
  }
  /* 117a1059 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117a105c:;
  /* 117a105c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117a105e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117a1060 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117a1062 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117a1065 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117a1068 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117a106b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117a106e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1071 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1074 jb 0x117a101c */
  if (C.cf) goto L_117a101c;
  /* 117a1076 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117a1078 jmp dword ptr [edx*4 + 0x117a1108] */
  switch (EDX) {
    case 0: goto L_117a1118;
    case 1: goto L_117a1120;
    case 2: goto L_117a112c;
    case 3: goto L_117a1140;
    default: x86_unimpl("switch@0x117a1078 out of table"); return;
  }
  /* 117a107f nop  */
  /* nop */
L_117a1080:;
  /* 117a1080 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117a1082 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117a1084 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117a1086 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117a1087 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117a108a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117a108b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a108e jb 0x117a101c */
  if (C.cf) goto L_117a101c;
  /* 117a1090 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117a1092 jmp dword ptr [edx*4 + 0x117a1108] */
  switch (EDX) {
    case 0: goto L_117a1118;
    case 1: goto L_117a1120;
    case 2: goto L_117a112c;
    case 3: goto L_117a1140;
    default: x86_unimpl("switch@0x117a1092 out of table"); return;
  }
  /* 117a1099 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117a10bc:;
  /* 117a10bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 117a10c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_117a10c4:;
  /* 117a10c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 117a10c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_117a10cc:;
  /* 117a10cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 117a10d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_117a10d4:;
  /* 117a10d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 117a10d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_117a10dc:;
  /* 117a10dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 117a10e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_117a10e4:;
  /* 117a10e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 117a10e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_117a10ec:;
  /* 117a10ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 117a10f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 117a10f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117a10fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117a10fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117a10ff:;
  /* 117a10ff jmp dword ptr [edx*4 + 0x117a1108] */
  switch (EDX) {
    case 0: goto L_117a1118;
    case 1: goto L_117a1120;
    case 2: goto L_117a112c;
    case 3: goto L_117a1140;
    default: x86_unimpl("switch@0x117a10ff out of table"); return;
  }
  /* 117a1106 mov edi, edi */
  EDI = (EDI);
L_117a1118:;
  /* 117a1118 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a111b pop esi */
  ESI = (pop32());
  /* 117a111c pop edi */
  EDI = (pop32());
  /* 117a111d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a111e ret  */
  ESPCHK(0x117a0fc0u, _esp0);
  ESP += 4; return;
  /* 117a111f nop  */
  /* nop */
L_117a1120:;
  /* 117a1120 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117a1122 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117a1124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a1127 pop esi */
  ESI = (pop32());
  /* 117a1128 pop edi */
  EDI = (pop32());
  /* 117a1129 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a112a ret  */
  ESPCHK(0x117a0fc0u, _esp0);
  ESP += 4; return;
  /* 117a112b nop  */
  /* nop */
L_117a112c:;
  /* 117a112c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117a112e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117a1130 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117a1133 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117a1136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a1139 pop esi */
  ESI = (pop32());
  /* 117a113a pop edi */
  EDI = (pop32());
  /* 117a113b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a113c ret  */
  ESPCHK(0x117a0fc0u, _esp0);
  ESP += 4; return;
  /* 117a113d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117a1140:;
  /* 117a1140 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117a1142 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117a1144 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117a1147 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117a114a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117a114d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117a1150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a1153 pop esi */
  ESI = (pop32());
  /* 117a1154 pop edi */
  EDI = (pop32());
  /* 117a1155 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a1156 ret  */
  ESPCHK(0x117a0fc0u, _esp0);
  ESP += 4; return;
  /* 117a1157 nop  */
  /* nop */
L_117a1158:;
  /* 117a1158 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 117a115c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 117a1160 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117a1166 jne 0x117a118c */
  if (!C.zf) goto L_117a118c;
  /* 117a1168 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117a116b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117a116e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1171 jb 0x117a1180 */
  if (C.cf) goto L_117a1180;
  /* 117a1173 std  */
  C.df=1;
  /* 117a1174 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117a1176 cld  */
  C.df=0;
  /* 117a1177 jmp dword ptr [edx*4 + 0x117a12a0] */
  switch (EDX) {
    case 0: goto L_117a12b0;
    case 1: goto L_117a12b8;
    case 2: goto L_117a12c8;
    case 3: goto L_117a12dc;
    default: x86_unimpl("switch@0x117a1177 out of table"); return;
  }
  /* 117a117e mov edi, edi */
  EDI = (EDI);
L_117a1180:;
  /* 117a1180 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a1182 jmp dword ptr [ecx*4 + 0x117a1250] */
  switch (ECX) {
    case 0: goto L_117a1297;
    default: x86_unimpl("switch@0x117a1182 out of table"); return;
  }
  /* 117a1189 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117a118c:;
  /* 117a118c mov eax, edi */
  EAX = (EDI);
  /* 117a118e mov edx, 3 */
  EDX = (0x3u);
  /* 117a1193 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1196 jb 0x117a11a4 */
  if (C.cf) goto L_117a11a4;
  /* 117a1198 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 117a119b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a119d jmp dword ptr [eax*4 + 0x117a11a8] */
  switch (EAX) {
    case 1: goto L_117a11b8;
    case 2: goto L_117a11d8;
    case 3: goto L_117a1200;
    default: x86_unimpl("switch@0x117a119d out of table"); return;
  }
L_117a11a4:;
  /* 117a11a4 jmp dword ptr [ecx*4 + 0x117a12a0] */
  switch (ECX) {
    case 0: goto L_117a12b0;
    case 1: goto L_117a12b8;
    case 2: goto L_117a12c8;
    case 3: goto L_117a12dc;
    default: x86_unimpl("switch@0x117a11a4 out of table"); return;
  }
  /* 117a11ab nop  */
  /* nop */
L_117a11b8:;
  /* 117a11b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117a11bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117a11bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117a11c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 117a11c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117a11c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 117a11c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a11c8 jb 0x117a1180 */
  if (C.cf) goto L_117a1180;
  /* 117a11ca std  */
  C.df=1;
  /* 117a11cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117a11cd cld  */
  C.df=0;
  /* 117a11ce jmp dword ptr [edx*4 + 0x117a12a0] */
  switch (EDX) {
    case 0: goto L_117a12b0;
    case 1: goto L_117a12b8;
    case 2: goto L_117a12c8;
    case 3: goto L_117a12dc;
    default: x86_unimpl("switch@0x117a11ce out of table"); return;
  }
  /* 117a11d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117a11d8:;
  /* 117a11d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117a11db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117a11dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117a11e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117a11e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117a11e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117a11e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a11ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a11ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a11f2 jb 0x117a1180 */
  if (C.cf) goto L_117a1180;
  /* 117a11f4 std  */
  C.df=1;
  /* 117a11f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117a11f7 cld  */
  C.df=0;
  /* 117a11f8 jmp dword ptr [edx*4 + 0x117a12a0] */
  switch (EDX) {
    case 0: goto L_117a12b0;
    case 1: goto L_117a12b8;
    case 2: goto L_117a12c8;
    case 3: goto L_117a12dc;
    default: x86_unimpl("switch@0x117a11f8 out of table"); return;
  }
  /* 117a11ff nop  */
  /* nop */
L_117a1200:;
  /* 117a1200 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117a1203 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117a1205 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117a1208 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117a120b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117a120e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117a1211 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117a1214 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117a1217 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a121a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a121d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1220 jb 0x117a1180 */
  if (C.cf) goto L_117a1180;
  /* 117a1226 std  */
  C.df=1;
  /* 117a1227 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117a1229 cld  */
  C.df=0;
  /* 117a122a jmp dword ptr [edx*4 + 0x117a12a0] */
  switch (EDX) {
    case 0: goto L_117a12b0;
    case 1: goto L_117a12b8;
    case 2: goto L_117a12c8;
    case 3: goto L_117a12dc;
    default: x86_unimpl("switch@0x117a122a out of table"); return;
  }
  /* 117a1231 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 117a1234 push esp */
  push32((uint32_t)(ESP));
  /* 117a1235 adc bh, byte ptr [edx + 0x11] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EDX + 0x11))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 117a1238 pop esp */
  ESP = (pop32());
  /* 117a1239 adc bh, byte ptr [edx + 0x11] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EDX + 0x11))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 117a123c adc bh, byte ptr fs:[edx + 0x11] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EDX + 0x11))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 117a1240 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x117a1240");
  /* 117a1241 adc bh, byte ptr [edx + 0x11] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EDX + 0x11))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 117a1244 je 0x117a1258 */
  if (C.zf) goto L_117a1258;
  /* 117a1246 jp 0x117a1259 */
  if (C.pf) goto L_117a1259;
  /* 117a1248 jl 0x117a125c */
  if ((C.sf!=C.of)) goto L_117a125c;
  /* 117a124a jp 0x117a125d */
  if (C.pf) goto L_117a125d;
  /* 117a124c test byte ptr [edx], dl */
  { uint32_t _r=(r8((uint32_t)(EDX)))&(DL); fl_logic(_r,8); }
  /* 117a124e jp 0x117a1261 */
  if (C.pf) goto L_117a1261;
  /* 117a1254 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
L_117a1258:;
  /* 117a1258 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
L_117a125c:;
  /* 117a125c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 117a1260 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 117a1264 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 117a1268 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 117a126c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 117a1270 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 117a1274 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 117a1278 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 117a127c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 117a1280 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 117a1284 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 117a1288 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 117a128c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117a1293 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1295 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117a1297:;
  /* 117a1297 jmp dword ptr [edx*4 + 0x117a12a0] */
  switch (EDX) {
    case 0: goto L_117a12b0;
    case 1: goto L_117a12b8;
    case 2: goto L_117a12c8;
    case 3: goto L_117a12dc;
    default: x86_unimpl("switch@0x117a1297 out of table"); return;
  }
  /* 117a129e mov edi, edi */
  EDI = (EDI);
L_117a12b0:;
  /* 117a12b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a12b3 pop esi */
  ESI = (pop32());
  /* 117a12b4 pop edi */
  EDI = (pop32());
  /* 117a12b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a12b6 ret  */
  ESPCHK(0x117a0fc0u, _esp0);
  ESP += 4; return;
  /* 117a12b7 nop  */
  /* nop */
L_117a12b8:;
  /* 117a12b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117a12bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117a12be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a12c1 pop esi */
  ESI = (pop32());
  /* 117a12c2 pop edi */
  EDI = (pop32());
  /* 117a12c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a12c4 ret  */
  ESPCHK(0x117a0fc0u, _esp0);
  ESP += 4; return;
  /* 117a12c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117a12c8:;
  /* 117a12c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117a12cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117a12ce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117a12d1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117a12d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a12d7 pop esi */
  ESI = (pop32());
  /* 117a12d8 pop edi */
  EDI = (pop32());
  /* 117a12d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a12da ret  */
  ESPCHK(0x117a0fc0u, _esp0);
  ESP += 4; return;
  /* 117a12db nop  */
  /* nop */
L_117a12dc:;
  /* 117a12dc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117a12df mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117a12e2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117a12e5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117a12e8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117a12eb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117a12ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a12f1 pop esi */
  ESI = (pop32());
  /* 117a12f2 pop edi */
  EDI = (pop32());
  /* 117a12f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a12f4 ret  */
  ESPCHK(0x117a0fc0u, _esp0);
  ESP += 4; return;
L_117a1259: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117a1259 (unresolved jump table)"); return;
L_117a125d: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117a125d (unresolved jump table)"); return;
L_117a1261: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117a1261 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x117a1300 (104 bytes, 43 insns) */
void f_117a1300(void) {
  FTRACE(0x117a1300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a1300 push ebx */
  push32((uint32_t)(EBX));
  /* 117a1301 push esi */
  push32((uint32_t)(ESI));
  /* 117a1302 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 117a1306 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a1308 jne 0x117a1322 */
  if (!C.zf) goto L_117a1322;
  /* 117a130a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 117a130e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 117a1312 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a1314 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117a1316 mov ebx, eax */
  EBX = (EAX);
  /* 117a1318 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 117a131c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117a131e mov edx, ebx */
  EDX = (EBX);
  /* 117a1320 jmp 0x117a1363 */
  goto L_117a1363;
L_117a1322:;
  /* 117a1322 mov ecx, eax */
  ECX = (EAX);
  /* 117a1324 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 117a1328 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 117a132c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_117a1330:;
  /* 117a1330 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 117a1332 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 117a1334 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 117a1336 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 117a1338 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a133a jne 0x117a1330 */
  if (!C.zf) goto L_117a1330;
  /* 117a133c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117a133e mov esi, eax */
  ESI = (EAX);
  /* 117a1340 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 117a1344 mov ecx, eax */
  ECX = (EAX);
  /* 117a1346 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 117a134a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 117a134c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a134e jb 0x117a135e */
  if (C.cf) goto L_117a135e;
  /* 117a1350 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1354 ja 0x117a135e */
  if ((!C.cf&&!C.zf)) goto L_117a135e;
  /* 117a1356 jb 0x117a135f */
  if (C.cf) goto L_117a135f;
  /* 117a1358 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a135c jbe 0x117a135f */
  if ((C.cf||C.zf)) goto L_117a135f;
L_117a135e:;
  /* 117a135e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_117a135f:;
  /* 117a135f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a1361 mov eax, esi */
  EAX = (ESI);
L_117a1363:;
  /* 117a1363 pop esi */
  ESI = (pop32());
  /* 117a1364 pop ebx */
  EBX = (pop32());
  /* 117a1365 ret 0x10 */
  ESPCHK(0x117a1300u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x117a1370 (117 bytes, 44 insns) */
void f_117a1370(void) {
  FTRACE(0x117a1370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a1370 push ebx */
  push32((uint32_t)(EBX));
  /* 117a1371 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 117a1375 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a1377 jne 0x117a1391 */
  if (!C.zf) goto L_117a1391;
  /* 117a1379 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 117a137d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 117a1381 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a1383 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117a1385 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117a1389 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117a138b mov eax, edx */
  EAX = (EDX);
  /* 117a138d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a138f jmp 0x117a13e1 */
  goto L_117a13e1;
L_117a1391:;
  /* 117a1391 mov ecx, eax */
  ECX = (EAX);
  /* 117a1393 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 117a1397 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 117a139b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_117a139f:;
  /* 117a139f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 117a13a1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 117a13a3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 117a13a5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 117a13a7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a13a9 jne 0x117a139f */
  if (!C.zf) goto L_117a139f;
  /* 117a13ab div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117a13ad mov ecx, eax */
  ECX = (EAX);
  /* 117a13af mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 117a13b3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 117a13b4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 117a13b8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a13ba jb 0x117a13ca */
  if (C.cf) goto L_117a13ca;
  /* 117a13bc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a13c0 ja 0x117a13ca */
  if ((!C.cf&&!C.zf)) goto L_117a13ca;
  /* 117a13c2 jb 0x117a13d2 */
  if (C.cf) goto L_117a13d2;
  /* 117a13c4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a13c8 jbe 0x117a13d2 */
  if ((C.cf||C.zf)) goto L_117a13d2;
L_117a13ca:;
  /* 117a13ca sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a13ce sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_117a13d2:;
  /* 117a13d2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a13d6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a13da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a13dc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a13de sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_117a13e1:;
  /* 117a13e1 pop ebx */
  EBX = (pop32());
  /* 117a13e2 ret 0x10 */
  ESPCHK(0x117a1370u, _esp0);
  ESP += 20; return;
}

/* FUN_100113f0 @ 0x117a13f0 (628 bytes, 214 insns) */
void f_117a13f0(void) {
  FTRACE(0x117a13f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a13f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a13f1 mov ebp, esp */
  EBP = (ESP);
  /* 117a13f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a13f6 push ebx */
  push32((uint32_t)(EBX));
  /* 117a13f7 push esi */
  push32((uint32_t)(ESI));
  /* 117a13f8 push edi */
  push32((uint32_t)(EDI));
L_117a13f9:;
  /* 117a13f9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a13fd jne 0x117a141d */
  if (!C.zf) goto L_117a141d;
  /* 117a13ff push 0x117c2d48 */
  push32((uint32_t)(0x117c2d48u));
  /* 117a1404 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a1406 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 117a1408 push 0x117c2d3c */
  push32((uint32_t)(0x117c2d3cu));
  /* 117a140d push 2 */
  push32((uint32_t)(0x2u));
  /* 117a140f call 0x11798d70 */
  push32(0x117a1414u); f_11798d70();
  /* 117a1414 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1417 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a141a jne 0x117a141d */
  if (!C.zf) goto L_117a141d;
  /* 117a141c int3  */
  x86_unimpl("int3 @ 0x117a141c");
L_117a141d:;
  /* 117a141d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a141f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a1421 jne 0x117a13f9 */
  if (!C.zf) goto L_117a13f9;
  /* 117a1423 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a1426 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a1429 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a142c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 117a142f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117a1432 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a1435 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117a1438 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 117a143e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a1440 je 0x117a144f */
  if (C.zf) goto L_117a144f;
  /* 117a1442 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a1445 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 117a1448 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 117a144b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a144d je 0x117a1465 */
  if (C.zf) goto L_117a1465;
L_117a144f:;
  /* 117a144f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a1452 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 117a1455 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 117a1457 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a145a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 117a145d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a1460 jmp 0x117a165d */
  goto L_117a165d;
L_117a1465:;
  /* 117a1465 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a1468 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 117a146b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 117a146e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a1470 je 0x117a14bc */
  if (C.zf) goto L_117a14bc;
  /* 117a1472 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a1475 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 117a147c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a147f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 117a1482 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 117a1485 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a1487 je 0x117a14a5 */
  if (C.zf) goto L_117a14a5;
  /* 117a1489 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a148c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a148f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117a1492 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117a1494 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a1497 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117a149a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 117a149d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a14a0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 117a14a3 jmp 0x117a14bc */
  goto L_117a14bc;
L_117a14a5:;
  /* 117a14a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a14a8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117a14ab or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 117a14ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a14b1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 117a14b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a14b7 jmp 0x117a165d */
  goto L_117a165d;
L_117a14bc:;
  /* 117a14bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a14bf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117a14c2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 117a14c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a14c8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 117a14cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a14ce mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117a14d1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 117a14d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a14d7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 117a14da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a14dd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 117a14e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a14eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a14ee mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 117a14f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a14f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 117a14f7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 117a14fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a14ff jne 0x117a152f */
  if (!C.zf) goto L_117a152f;
  /* 117a1501 cmp dword ptr [ebp - 8], 0x117c6260 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x117c6260u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1508 je 0x117a1513 */
  if (C.zf) goto L_117a1513;
  /* 117a150a cmp dword ptr [ebp - 8], 0x117c6280 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x117c6280u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1511 jne 0x117a1523 */
  if (!C.zf) goto L_117a1523;
L_117a1513:;
  /* 117a1513 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a1516 push edx */
  push32((uint32_t)(EDX));
  /* 117a1517 call 0x117a3740 */
  push32(0x117a151cu); f_117a3740();
  /* 117a151c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a151f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a1521 jne 0x117a152f */
  if (!C.zf) goto L_117a152f;
L_117a1523:;
  /* 117a1523 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a1526 push eax */
  push32((uint32_t)(EAX));
  /* 117a1527 call 0x117a3670 */
  push32(0x117a152cu); f_117a3670();
  /* 117a152c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a152f:;
  /* 117a152f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a1532 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117a1535 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 117a153b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a153d je 0x117a161b */
  if (C.zf) goto L_117a161b;
L_117a1543:;
  /* 117a1543 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a1546 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a1549 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 117a154b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a154e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a1550 jge 0x117a1573 */
  if ((C.sf==C.of)) goto L_117a1573;
  /* 117a1552 push 0x117c2cfc */
  push32((uint32_t)(0x117c2cfcu));
  /* 117a1557 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a1559 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 117a155e push 0x117c2d3c */
  push32((uint32_t)(0x117c2d3cu));
  /* 117a1563 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a1565 call 0x11798d70 */
  push32(0x117a156au); f_11798d70();
  /* 117a156a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a156d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1570 jne 0x117a1573 */
  if (!C.zf) goto L_117a1573;
  /* 117a1572 int3  */
  x86_unimpl("int3 @ 0x117a1572");
L_117a1573:;
  /* 117a1573 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a1575 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a1577 jne 0x117a1543 */
  if (!C.zf) goto L_117a1543;
  /* 117a1579 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a157c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a157f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 117a1581 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a1584 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a1587 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a158a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117a158d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1590 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a1593 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117a1595 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a1598 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 117a159b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a159e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a15a1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 117a15a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a15a8 jle 0x117a15c6 */
  if ((C.zf||C.sf!=C.of)) goto L_117a15c6;
  /* 117a15aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a15ad push ecx */
  push32((uint32_t)(ECX));
  /* 117a15ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a15b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117a15b4 push eax */
  push32((uint32_t)(EAX));
  /* 117a15b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a15b8 push ecx */
  push32((uint32_t)(ECX));
  /* 117a15b9 call 0x117a3360 */
  push32(0x117a15beu); f_117a3360();
  /* 117a15be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a15c1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117a15c4 jmp 0x117a160e */
  goto L_117a160e;
L_117a15c6:;
  /* 117a15c6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a15ca je 0x117a15e9 */
  if (C.zf) goto L_117a15e9;
  /* 117a15cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a15cf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 117a15d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a15d5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 117a15d8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a15db mov ecx, dword ptr [edx*4 + 0x117c95a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x117c95a0)));
  /* 117a15e2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a15e4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 117a15e7 jmp 0x117a15f0 */
  goto L_117a15f0;
L_117a15e9:;
  /* 117a15e9 mov dword ptr [ebp - 0x14], 0x117c5a60 */
  w32((uint32_t)(EBP + -0x14), (0x117c5a60u));
L_117a15f0:;
  /* 117a15f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a15f3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 117a15f7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 117a15fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a15fc je 0x117a160e */
  if (C.zf) goto L_117a160e;
  /* 117a15fe push 2 */
  push32((uint32_t)(0x2u));
  /* 117a1600 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a1602 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a1605 push ecx */
  push32((uint32_t)(ECX));
  /* 117a1606 call 0x117a3210 */
  push32(0x117a160bu); f_117a3210();
  /* 117a160b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a160e:;
  /* 117a160e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a1611 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117a1614 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 117a1617 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 117a1619 jmp 0x117a1639 */
  goto L_117a1639;
L_117a161b:;
  /* 117a161b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117a1622 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1625 push edx */
  push32((uint32_t)(EDX));
  /* 117a1626 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 117a1629 push eax */
  push32((uint32_t)(EAX));
  /* 117a162a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a162d push ecx */
  push32((uint32_t)(ECX));
  /* 117a162e call 0x117a3360 */
  push32(0x117a1633u); f_117a3360();
  /* 117a1633 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1636 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_117a1639:;
  /* 117a1639 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a163c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a163f je 0x117a1655 */
  if (C.zf) goto L_117a1655;
  /* 117a1641 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a1644 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 117a1647 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 117a164a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a164d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 117a1650 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a1653 jmp 0x117a165d */
  goto L_117a165d;
L_117a1655:;
  /* 117a1655 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a1658 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_117a165d:;
  /* 117a165d pop edi */
  EDI = (pop32());
  /* 117a165e pop esi */
  ESI = (pop32());
  /* 117a165f pop ebx */
  EBX = (pop32());
  /* 117a1660 mov esp, ebp */
  ESP = (EBP);
  /* 117a1662 pop ebp */
  EBP = (pop32());
  /* 117a1663 ret  */
  ESPCHK(0x117a13f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011670 @ 0x117a1670 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_117a1670(void) {
  FTRACE(0x117a1670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a1670 push ebp */
  push32((uint32_t)(EBP));
  /* 117a1671 mov ebp, esp */
  EBP = (ESP);
  /* 117a1673 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a1679 push ebx */
  push32((uint32_t)(EBX));
  /* 117a167a push esi */
  push32((uint32_t)(ESI));
  /* 117a167b push edi */
  push32((uint32_t)(EDI));
  /* 117a167c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 117a1683 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 117a168d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_117a1694:;
  /* 117a1694 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a1697 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117a1699 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 117a169c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117a16a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a16a3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a16a6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 117a16a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a16ab je 0x117a2287 */
  if (C.zf) goto L_117a2287;
  /* 117a16b1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a16b8 jl 0x117a2287 */
  if ((C.sf!=C.of)) goto L_117a2287;
  /* 117a16be movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117a16c2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a16c5 jl 0x117a16e6 */
  if ((C.sf!=C.of)) goto L_117a16e6;
  /* 117a16c7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117a16cb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a16ce jg 0x117a16e6 */
  if ((!C.zf&&C.sf==C.of)) goto L_117a16e6;
  /* 117a16d0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117a16d4 movsx ecx, byte ptr [eax + 0x117c2d34] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x117c2d34))));
  /* 117a16db and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 117a16de mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 117a16e4 jmp 0x117a16f0 */
  goto L_117a16f0;
L_117a16e6:;
  /* 117a16e6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_117a16f0:;
  /* 117a16f0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 117a16f6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 117a16f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a16fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a16ff movsx edx, byte ptr [ecx + eax*8 + 0x117c2d54] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x117c2d54))));
  /* 117a1707 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 117a170a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 117a170d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a1710 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 117a1716 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a171d ja 0x117a2282 */
  if ((!C.cf&&!C.zf)) goto L_117a2282;
  /* 117a1723 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 117a1729 jmp dword ptr [ecx*4 + 0x117a2294] */
  switch (ECX) {
    case 0: goto L_117a1730;
    case 1: goto L_117a17ca;
    case 2: goto L_117a180c;
    case 3: goto L_117a187b;
    case 4: goto L_117a18d3;
    case 5: goto L_117a18e2;
    case 6: goto L_117a192e;
    case 7: goto L_117a19c1;
    case 8: goto L_117a1858;
    case 9: goto L_117a1863;
    case 10: goto L_117a184e;
    case 11: goto L_117a1843;
    case 12: goto L_117a186e;
    case 13: goto L_117a1876;
    default: x86_unimpl("switch@0x117a1729 out of table"); return;
  }
L_117a1730:;
  /* 117a1730 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 117a1737 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a173a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117a1740 mov eax, dword ptr [0x117c5db8] */
  EAX = (r32((uint32_t)(0x117c5db8)));
  /* 117a1745 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a1747 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 117a174b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 117a1751 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a1753 je 0x117a17ad */
  if (C.zf) goto L_117a17ad;
  /* 117a1755 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 117a175b push edx */
  push32((uint32_t)(EDX));
  /* 117a175c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a175f push eax */
  push32((uint32_t)(EAX));
  /* 117a1760 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117a1764 push ecx */
  push32((uint32_t)(ECX));
  /* 117a1765 call 0x117a23a0 */
  push32(0x117a176au); f_117a23a0();
  /* 117a176a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a176d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a1770 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a1772 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 117a1775 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a1778 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a177b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_117a177e:;
  /* 117a177e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117a1782 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a1784 jne 0x117a17a7 */
  if (!C.zf) goto L_117a17a7;
  /* 117a1786 push 0x117c2dd4 */
  push32((uint32_t)(0x117c2dd4u));
  /* 117a178b push 0 */
  push32((uint32_t)(0x0u));
  /* 117a178d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 117a1792 push 0x117c2dc8 */
  push32((uint32_t)(0x117c2dc8u));
  /* 117a1797 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a1799 call 0x11798d70 */
  push32(0x117a179eu); f_11798d70();
  /* 117a179e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a17a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a17a4 jne 0x117a17a7 */
  if (!C.zf) goto L_117a17a7;
  /* 117a17a6 int3  */
  x86_unimpl("int3 @ 0x117a17a6");
L_117a17a7:;
  /* 117a17a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a17a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a17ab jne 0x117a177e */
  if (!C.zf) goto L_117a177e;
L_117a17ad:;
  /* 117a17ad lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 117a17b3 push ecx */
  push32((uint32_t)(ECX));
  /* 117a17b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a17b7 push edx */
  push32((uint32_t)(EDX));
  /* 117a17b8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117a17bc push eax */
  push32((uint32_t)(EAX));
  /* 117a17bd call 0x117a23a0 */
  push32(0x117a17c2u); f_117a23a0();
  /* 117a17c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a17c5 jmp 0x117a2282 */
  goto L_117a2282;
L_117a17ca:;
  /* 117a17ca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117a17d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a17d4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 117a17da mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 117a17e0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 117a17e6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 117a17ec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117a17ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a17f6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 117a1800 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 117a1807 jmp 0x117a2282 */
  goto L_117a2282;
L_117a180c:;
  /* 117a180c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117a1810 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 117a1816 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 117a181c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a181f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 117a1825 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a182c ja 0x117a1876 */
  if ((!C.cf&&!C.zf)) goto L_117a1876;
  /* 117a182e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 117a1834 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a1836 mov al, byte ptr [ecx + 0x117a22cc] */
  AL = (r8((uint32_t)(ECX + 0x117a22cc)));
  /* 117a183c jmp dword ptr [eax*4 + 0x117a22b4] */
  switch (EAX) {
    case 0: goto L_117a1858;
    case 1: goto L_117a1863;
    case 2: goto L_117a184e;
    case 3: goto L_117a1843;
    case 4: goto L_117a186e;
    case 5: goto L_117a1876;
    default: x86_unimpl("switch@0x117a183c out of table"); return;
  }
L_117a1843:;
  /* 117a1843 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1846 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 117a1849 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a184c jmp 0x117a1876 */
  goto L_117a1876;
L_117a184e:;
  /* 117a184e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1851 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 117a1853 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a1856 jmp 0x117a1876 */
  goto L_117a1876;
L_117a1858:;
  /* 117a1858 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a185b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 117a185e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a1861 jmp 0x117a1876 */
  goto L_117a1876;
L_117a1863:;
  /* 117a1863 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1866 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 117a1869 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a186c jmp 0x117a1876 */
  goto L_117a1876;
L_117a186e:;
  /* 117a186e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1871 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 117a1873 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117a1876:;
  /* 117a1876 jmp 0x117a2282 */
  goto L_117a2282;
L_117a187b:;
  /* 117a187b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117a187f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1882 jne 0x117a18b7 */
  if (!C.zf) goto L_117a18b7;
  /* 117a1884 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 117a1887 push edx */
  push32((uint32_t)(EDX));
  /* 117a1888 call 0x117a24b0 */
  push32(0x117a188du); f_117a24b0();
  /* 117a188d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1890 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 117a1896 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a189d jge 0x117a18b5 */
  if ((C.sf==C.of)) goto L_117a18b5;
  /* 117a189f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a18a2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 117a18a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a18a7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 117a18ad neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a18af mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_117a18b5:;
  /* 117a18b5 jmp 0x117a18ce */
  goto L_117a18ce;
L_117a18b7:;
  /* 117a18b7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 117a18bd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a18c0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117a18c4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 117a18c8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_117a18ce:;
  /* 117a18ce jmp 0x117a2282 */
  goto L_117a2282;
L_117a18d3:;
  /* 117a18d3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 117a18dd jmp 0x117a2282 */
  goto L_117a2282;
L_117a18e2:;
  /* 117a18e2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117a18e6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a18e9 jne 0x117a1912 */
  if (!C.zf) goto L_117a1912;
  /* 117a18eb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 117a18ee push eax */
  push32((uint32_t)(EAX));
  /* 117a18ef call 0x117a24b0 */
  push32(0x117a18f4u); f_117a24b0();
  /* 117a18f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a18f7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 117a18fd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1904 jge 0x117a1910 */
  if ((C.sf==C.of)) goto L_117a1910;
  /* 117a1906 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_117a1910:;
  /* 117a1910 jmp 0x117a1929 */
  goto L_117a1929;
L_117a1912:;
  /* 117a1912 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 117a1918 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a191b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117a191f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 117a1923 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_117a1929:;
  /* 117a1929 jmp 0x117a2282 */
  goto L_117a2282;
L_117a192e:;
  /* 117a192e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117a1932 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 117a1938 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 117a193e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a1941 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 117a1947 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a194e ja 0x117a19bc */
  if ((!C.cf&&!C.zf)) goto L_117a19bc;
  /* 117a1950 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 117a1956 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a1958 mov al, byte ptr [ecx + 0x117a22f1] */
  AL = (r8((uint32_t)(ECX + 0x117a22f1)));
  /* 117a195e jmp dword ptr [eax*4 + 0x117a22dd] */
  switch (EAX) {
    case 0: goto L_117a1970;
    case 1: goto L_117a19a9;
    case 2: goto L_117a1965;
    case 3: goto L_117a19b3;
    case 4: goto L_117a19bc;
    default: x86_unimpl("switch@0x117a195e out of table"); return;
  }
L_117a1965:;
  /* 117a1965 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1968 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 117a196b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a196e jmp 0x117a19bc */
  goto L_117a19bc;
L_117a1970:;
  /* 117a1970 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a1973 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a1976 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1979 jne 0x117a199b */
  if (!C.zf) goto L_117a199b;
  /* 117a197b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a197e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 117a1982 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1985 jne 0x117a199b */
  if (!C.zf) goto L_117a199b;
  /* 117a1987 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a198a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a198d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 117a1990 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1993 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 117a1996 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a1999 jmp 0x117a19a7 */
  goto L_117a19a7;
L_117a199b:;
  /* 117a199b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 117a19a2 jmp 0x117a1730 */
  goto L_117a1730;
L_117a19a7:;
  /* 117a19a7 jmp 0x117a19bc */
  goto L_117a19bc;
L_117a19a9:;
  /* 117a19a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a19ac or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 117a19ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a19b1 jmp 0x117a19bc */
  goto L_117a19bc;
L_117a19b3:;
  /* 117a19b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a19b6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 117a19b9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117a19bc:;
  /* 117a19bc jmp 0x117a2282 */
  goto L_117a2282;
L_117a19c1:;
  /* 117a19c1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117a19c5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 117a19cb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 117a19d1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a19d4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 117a19da cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a19e1 ja 0x117a20a7 */
  if ((!C.cf&&!C.zf)) goto L_117a20a7;
  /* 117a19e7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 117a19ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a19ef mov cl, byte ptr [edx + 0x117a235c] */
  CL = (r8((uint32_t)(EDX + 0x117a235c)));
  /* 117a19f5 jmp dword ptr [ecx*4 + 0x117a2320] */
  switch (ECX) {
    case 0: goto L_117a19fc;
    case 1: goto L_117a1c90;
    case 2: goto L_117a1b20;
    case 3: goto L_117a1dc9;
    case 4: goto L_117a1a8b;
    case 5: goto L_117a1a11;
    case 6: goto L_117a1d9b;
    case 7: goto L_117a1ca0;
    case 8: goto L_117a1c45;
    case 9: goto L_117a1e15;
    case 10: goto L_117a1dbf;
    case 11: goto L_117a1b36;
    case 12: goto L_117a1db3;
    case 13: goto L_117a1dd5;
    case 14: goto L_117a20a7;
    default: x86_unimpl("switch@0x117a19f5 out of table"); return;
  }
L_117a19fc:;
  /* 117a19fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a19ff and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 117a1a04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a1a06 jne 0x117a1a11 */
  if (!C.zf) goto L_117a1a11;
  /* 117a1a08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1a0b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 117a1a0e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117a1a11:;
  /* 117a1a11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1a14 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 117a1a1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a1a1c je 0x117a1a57 */
  if (C.zf) goto L_117a1a57;
  /* 117a1a1e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 117a1a21 push eax */
  push32((uint32_t)(EAX));
  /* 117a1a22 call 0x117a24f0 */
  push32(0x117a1a27u); f_117a24f0();
  /* 117a1a27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1a2a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 117a1a2e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 117a1a32 push ecx */
  push32((uint32_t)(ECX));
  /* 117a1a33 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 117a1a39 push edx */
  push32((uint32_t)(EDX));
  /* 117a1a3a call 0x117a39b0 */
  push32(0x117a1a3fu); f_117a39b0();
  /* 117a1a3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1a42 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 117a1a45 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1a49 jge 0x117a1a55 */
  if ((C.sf==C.of)) goto L_117a1a55;
  /* 117a1a4b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_117a1a55:;
  /* 117a1a55 jmp 0x117a1a7d */
  goto L_117a1a7d;
L_117a1a57:;
  /* 117a1a57 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 117a1a5a push eax */
  push32((uint32_t)(EAX));
  /* 117a1a5b call 0x117a24b0 */
  push32(0x117a1a60u); f_117a24b0();
  /* 117a1a60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1a63 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 117a1a6a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 117a1a70 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 117a1a76 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_117a1a7d:;
  /* 117a1a7d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 117a1a83 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 117a1a86 jmp 0x117a20a7 */
  goto L_117a20a7;
L_117a1a8b:;
  /* 117a1a8b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 117a1a8e push eax */
  push32((uint32_t)(EAX));
  /* 117a1a8f call 0x117a24b0 */
  push32(0x117a1a94u); f_117a24b0();
  /* 117a1a94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1a97 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 117a1a9d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1aa4 je 0x117a1ab2 */
  if (C.zf) goto L_117a1ab2;
  /* 117a1aa6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 117a1aac cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1ab0 jne 0x117a1acc */
  if (!C.zf) goto L_117a1acc;
L_117a1ab2:;
  /* 117a1ab2 mov edx, dword ptr [0x117c60d0] */
  EDX = (r32((uint32_t)(0x117c60d0)));
  /* 117a1ab8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 117a1abb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a1abe push eax */
  push32((uint32_t)(EAX));
  /* 117a1abf call 0x1179cbd0 */
  push32(0x117a1ac4u); f_1179cbd0();
  /* 117a1ac4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1ac7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 117a1aca jmp 0x117a1b1b */
  goto L_117a1b1b;
L_117a1acc:;
  /* 117a1acc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1acf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 117a1ad5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a1ad7 je 0x117a1afc */
  if (C.zf) goto L_117a1afc;
  /* 117a1ad9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 117a1adf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 117a1ae2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117a1ae5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 117a1aeb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 117a1aee shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 117a1af0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 117a1af3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 117a1afa jmp 0x117a1b1b */
  goto L_117a1b1b;
L_117a1afc:;
  /* 117a1afc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 117a1b03 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 117a1b09 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117a1b0c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 117a1b0f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 117a1b15 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 117a1b18 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_117a1b1b:;
  /* 117a1b1b jmp 0x117a20a7 */
  goto L_117a20a7;
L_117a1b20:;
  /* 117a1b20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1b23 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 117a1b29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a1b2b jne 0x117a1b36 */
  if (!C.zf) goto L_117a1b36;
  /* 117a1b2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1b30 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 117a1b33 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117a1b36:;
  /* 117a1b36 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1b3d jne 0x117a1b4b */
  if (!C.zf) goto L_117a1b4b;
  /* 117a1b3f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 117a1b49 jmp 0x117a1b57 */
  goto L_117a1b57;
L_117a1b4b:;
  /* 117a1b4b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 117a1b51 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_117a1b57:;
  /* 117a1b57 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 117a1b5d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 117a1b63 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 117a1b66 push edx */
  push32((uint32_t)(EDX));
  /* 117a1b67 call 0x117a24b0 */
  push32(0x117a1b6cu); f_117a24b0();
  /* 117a1b6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1b6f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117a1b72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1b75 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 117a1b7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a1b7c je 0x117a1be6 */
  if (C.zf) goto L_117a1be6;
  /* 117a1b7e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1b82 jne 0x117a1b8d */
  if (!C.zf) goto L_117a1b8d;
  /* 117a1b84 mov ecx, dword ptr [0x117c60d4] */
  ECX = (r32((uint32_t)(0x117c60d4)));
  /* 117a1b8a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_117a1b8d:;
  /* 117a1b8d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 117a1b94 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a1b97 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_117a1b9d:;
  /* 117a1b9d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 117a1ba3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 117a1ba9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a1bac mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 117a1bb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a1bb4 je 0x117a1bd6 */
  if (C.zf) goto L_117a1bd6;
  /* 117a1bb6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 117a1bbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a1bbe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 117a1bc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a1bc3 je 0x117a1bd6 */
  if (C.zf) goto L_117a1bd6;
  /* 117a1bc5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 117a1bcb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1bce mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 117a1bd4 jmp 0x117a1b9d */
  goto L_117a1b9d;
L_117a1bd6:;
  /* 117a1bd6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 117a1bdc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a1bdf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 117a1be1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 117a1be4 jmp 0x117a1c40 */
  goto L_117a1c40;
L_117a1be6:;
  /* 117a1be6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1bea jne 0x117a1bf4 */
  if (!C.zf) goto L_117a1bf4;
  /* 117a1bec mov eax, dword ptr [0x117c60d0] */
  EAX = (r32((uint32_t)(0x117c60d0)));
  /* 117a1bf1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_117a1bf4:;
  /* 117a1bf4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a1bf7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_117a1bfd:;
  /* 117a1bfd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 117a1c03 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 117a1c09 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a1c0c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 117a1c12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a1c14 je 0x117a1c34 */
  if (C.zf) goto L_117a1c34;
  /* 117a1c16 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 117a1c1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117a1c1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a1c21 je 0x117a1c34 */
  if (C.zf) goto L_117a1c34;
  /* 117a1c23 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 117a1c29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1c2c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 117a1c32 jmp 0x117a1bfd */
  goto L_117a1bfd;
L_117a1c34:;
  /* 117a1c34 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 117a1c3a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a1c3d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_117a1c40:;
  /* 117a1c40 jmp 0x117a20a7 */
  goto L_117a20a7;
L_117a1c45:;
  /* 117a1c45 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 117a1c48 push edx */
  push32((uint32_t)(EDX));
  /* 117a1c49 call 0x117a24b0 */
  push32(0x117a1c4eu); f_117a24b0();
  /* 117a1c4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1c51 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 117a1c57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1c5a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 117a1c5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a1c5f je 0x117a1c73 */
  if (C.zf) goto L_117a1c73;
  /* 117a1c61 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 117a1c67 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 117a1c6e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 117a1c71 jmp 0x117a1c81 */
  goto L_117a1c81;
L_117a1c73:;
  /* 117a1c73 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 117a1c79 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 117a1c7f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_117a1c81:;
  /* 117a1c81 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 117a1c8b jmp 0x117a20a7 */
  goto L_117a20a7;
L_117a1c90:;
  /* 117a1c90 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 117a1c97 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 117a1c9a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 117a1c9d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_117a1ca0:;
  /* 117a1ca0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1ca3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 117a1ca5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a1ca8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 117a1cae mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 117a1cb1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1cb8 jge 0x117a1cc6 */
  if ((C.sf==C.of)) goto L_117a1cc6;
  /* 117a1cba mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 117a1cc4 jmp 0x117a1ce2 */
  goto L_117a1ce2;
L_117a1cc6:;
  /* 117a1cc6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1ccd jne 0x117a1ce2 */
  if (!C.zf) goto L_117a1ce2;
  /* 117a1ccf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117a1cd3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1cd6 jne 0x117a1ce2 */
  if (!C.zf) goto L_117a1ce2;
  /* 117a1cd8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_117a1ce2:;
  /* 117a1ce2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a1ce5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1ce8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 117a1ceb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a1cee sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a1cf1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a1cf3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 117a1cf6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 117a1cfc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 117a1d02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a1d05 push ecx */
  push32((uint32_t)(ECX));
  /* 117a1d06 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 117a1d0c push edx */
  push32((uint32_t)(EDX));
  /* 117a1d0d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117a1d11 push eax */
  push32((uint32_t)(EAX));
  /* 117a1d12 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a1d15 push ecx */
  push32((uint32_t)(ECX));
  /* 117a1d16 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 117a1d1c push edx */
  push32((uint32_t)(EDX));
  /* 117a1d1d call dword ptr [0x117c64c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117c64c0))), 0x117a1d23u);
  /* 117a1d23 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1d26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1d29 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 117a1d2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a1d30 je 0x117a1d48 */
  if (C.zf) goto L_117a1d48;
  /* 117a1d32 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1d39 jne 0x117a1d48 */
  if (!C.zf) goto L_117a1d48;
  /* 117a1d3b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a1d3e push ecx */
  push32((uint32_t)(ECX));
  /* 117a1d3f call dword ptr [0x117c64cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117c64cc))), 0x117a1d45u);
  /* 117a1d45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a1d48:;
  /* 117a1d48 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117a1d4c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1d4f jne 0x117a1d6a */
  if (!C.zf) goto L_117a1d6a;
  /* 117a1d51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1d54 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 117a1d59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a1d5b jne 0x117a1d6a */
  if (!C.zf) goto L_117a1d6a;
  /* 117a1d5d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a1d60 push ecx */
  push32((uint32_t)(ECX));
  /* 117a1d61 call dword ptr [0x117c64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117c64c4))), 0x117a1d67u);
  /* 117a1d67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a1d6a:;
  /* 117a1d6a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a1d6d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117a1d70 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1d73 jne 0x117a1d87 */
  if (!C.zf) goto L_117a1d87;
  /* 117a1d75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1d78 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 117a1d7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a1d7e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a1d81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1d84 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_117a1d87:;
  /* 117a1d87 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a1d8a push eax */
  push32((uint32_t)(EAX));
  /* 117a1d8b call 0x1179cbd0 */
  push32(0x117a1d90u); f_1179cbd0();
  /* 117a1d90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1d93 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 117a1d96 jmp 0x117a20a7 */
  goto L_117a20a7;
L_117a1d9b:;
  /* 117a1d9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1d9e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 117a1da1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a1da4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 117a1dae jmp 0x117a1e35 */
  goto L_117a1e35;
L_117a1db3:;
  /* 117a1db3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 117a1dbd jmp 0x117a1e35 */
  goto L_117a1e35;
L_117a1dbf:;
  /* 117a1dbf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_117a1dc9:;
  /* 117a1dc9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 117a1dd3 jmp 0x117a1ddf */
  goto L_117a1ddf;
L_117a1dd5:;
  /* 117a1dd5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_117a1ddf:;
  /* 117a1ddf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 117a1de9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1dec and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 117a1df2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a1df4 je 0x117a1e13 */
  if (C.zf) goto L_117a1e13;
  /* 117a1df6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 117a1dfd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 117a1e03 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1e06 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 117a1e0c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_117a1e13:;
  /* 117a1e13 jmp 0x117a1e35 */
  goto L_117a1e35;
L_117a1e15:;
  /* 117a1e15 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 117a1e1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1e22 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 117a1e28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a1e2a je 0x117a1e35 */
  if (C.zf) goto L_117a1e35;
  /* 117a1e2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1e2f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 117a1e32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117a1e35:;
  /* 117a1e35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1e38 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 117a1e3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a1e3f je 0x117a1e5e */
  if (C.zf) goto L_117a1e5e;
  /* 117a1e41 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 117a1e44 push ecx */
  push32((uint32_t)(ECX));
  /* 117a1e45 call 0x117a24d0 */
  push32(0x117a1e4au); f_117a24d0();
  /* 117a1e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1e4d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 117a1e53 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 117a1e59 jmp 0x117a1eef */
  goto L_117a1eef;
L_117a1e5e:;
  /* 117a1e5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1e61 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 117a1e64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a1e66 je 0x117a1eb0 */
  if (C.zf) goto L_117a1eb0;
  /* 117a1e68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1e6b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 117a1e6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a1e70 je 0x117a1e90 */
  if (C.zf) goto L_117a1e90;
  /* 117a1e72 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 117a1e75 push ecx */
  push32((uint32_t)(ECX));
  /* 117a1e76 call 0x117a24b0 */
  push32(0x117a1e7bu); f_117a24b0();
  /* 117a1e7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1e7e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 117a1e81 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a1e82 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 117a1e88 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 117a1e8e jmp 0x117a1eae */
  goto L_117a1eae;
L_117a1e90:;
  /* 117a1e90 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 117a1e93 push edx */
  push32((uint32_t)(EDX));
  /* 117a1e94 call 0x117a24b0 */
  push32(0x117a1e99u); f_117a24b0();
  /* 117a1e99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1e9c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a1ea1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a1ea2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 117a1ea8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_117a1eae:;
  /* 117a1eae jmp 0x117a1eef */
  goto L_117a1eef;
L_117a1eb0:;
  /* 117a1eb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1eb3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 117a1eb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a1eb8 je 0x117a1ed5 */
  if (C.zf) goto L_117a1ed5;
  /* 117a1eba lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 117a1ebd push ecx */
  push32((uint32_t)(ECX));
  /* 117a1ebe call 0x117a24b0 */
  push32(0x117a1ec3u); f_117a24b0();
  /* 117a1ec3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1ec6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a1ec7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 117a1ecd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 117a1ed3 jmp 0x117a1eef */
  goto L_117a1eef;
L_117a1ed5:;
  /* 117a1ed5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 117a1ed8 push edx */
  push32((uint32_t)(EDX));
  /* 117a1ed9 call 0x117a24b0 */
  push32(0x117a1edeu); f_117a24b0();
  /* 117a1ede add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1ee1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a1ee3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 117a1ee9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_117a1eef:;
  /* 117a1eef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1ef2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 117a1ef5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a1ef7 je 0x117a1f37 */
  if (C.zf) goto L_117a1f37;
  /* 117a1ef9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1f00 jg 0x117a1f37 */
  if ((!C.zf&&C.sf==C.of)) goto L_117a1f37;
  /* 117a1f02 jl 0x117a1f0d */
  if ((C.sf!=C.of)) goto L_117a1f0d;
  /* 117a1f04 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1f0b jae 0x117a1f37 */
  if (!C.cf) goto L_117a1f37;
L_117a1f0d:;
  /* 117a1f0d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 117a1f13 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a1f15 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 117a1f1b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1f1e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a1f20 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 117a1f26 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 117a1f2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1f2f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 117a1f32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a1f35 jmp 0x117a1f4f */
  goto L_117a1f4f;
L_117a1f37:;
  /* 117a1f37 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 117a1f3d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 117a1f43 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 117a1f49 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_117a1f4f:;
  /* 117a1f4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1f52 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 117a1f58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a1f5a jne 0x117a1f77 */
  if (!C.zf) goto L_117a1f77;
  /* 117a1f5c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 117a1f62 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 117a1f68 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 117a1f6b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 117a1f71 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_117a1f77:;
  /* 117a1f77 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a1f7e jge 0x117a1f8c */
  if ((C.sf==C.of)) goto L_117a1f8c;
  /* 117a1f80 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 117a1f8a jmp 0x117a1f95 */
  goto L_117a1f95;
L_117a1f8c:;
  /* 117a1f8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a1f8f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 117a1f92 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117a1f95:;
  /* 117a1f95 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 117a1f9b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 117a1fa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a1fa3 jne 0x117a1fac */
  if (!C.zf) goto L_117a1fac;
  /* 117a1fa5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_117a1fac:;
  /* 117a1fac lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 117a1faf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_117a1fb2:;
  /* 117a1fb2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 117a1fb8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 117a1fbe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a1fc1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 117a1fc7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a1fc9 jg 0x117a1fdf */
  if ((!C.zf&&C.sf==C.of)) goto L_117a1fdf;
  /* 117a1fcb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 117a1fd1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 117a1fd7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a1fd9 je 0x117a2060 */
  if (C.zf) goto L_117a2060;
L_117a1fdf:;
  /* 117a1fdf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 117a1fe5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a1fe6 push edx */
  push32((uint32_t)(EDX));
  /* 117a1fe7 push eax */
  push32((uint32_t)(EAX));
  /* 117a1fe8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 117a1fee push edx */
  push32((uint32_t)(EDX));
  /* 117a1fef mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 117a1ff5 push eax */
  push32((uint32_t)(EAX));
  /* 117a1ff6 call 0x117a1370 */
  push32(0x117a1ffbu); f_117a1370();
  /* 117a1ffb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a1ffe mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 117a2004 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 117a200a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a200b push edx */
  push32((uint32_t)(EDX));
  /* 117a200c push eax */
  push32((uint32_t)(EAX));
  /* 117a200d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 117a2013 push ecx */
  push32((uint32_t)(ECX));
  /* 117a2014 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 117a201a push edx */
  push32((uint32_t)(EDX));
  /* 117a201b call 0x117a1300 */
  push32(0x117a2020u); f_117a1300();
  /* 117a2020 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 117a2026 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 117a202c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2033 jle 0x117a2047 */
  if ((C.zf||C.sf!=C.of)) goto L_117a2047;
  /* 117a2035 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 117a203b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2041 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_117a2047:;
  /* 117a2047 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a204a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 117a2050 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 117a2052 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a2055 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a2058 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117a205b jmp 0x117a1fb2 */
  goto L_117a1fb2;
L_117a2060:;
  /* 117a2060 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 117a2063 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a2066 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 117a2069 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a206c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a206f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 117a2072 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a2075 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 117a207a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a207c je 0x117a20a7 */
  if (C.zf) goto L_117a20a7;
  /* 117a207e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a2081 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117a2084 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2087 jne 0x117a208f */
  if (!C.zf) goto L_117a208f;
  /* 117a2089 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a208d jne 0x117a20a7 */
  if (!C.zf) goto L_117a20a7;
L_117a208f:;
  /* 117a208f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a2092 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a2095 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117a2098 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a209b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 117a209e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a20a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a20a4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_117a20a7:;
  /* 117a20a7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a20ae jne 0x117a2282 */
  if (!C.zf) goto L_117a2282;
  /* 117a20b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a20b7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 117a20ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a20bc je 0x117a210d */
  if (C.zf) goto L_117a210d;
  /* 117a20be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a20c1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 117a20c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a20c9 je 0x117a20db */
  if (C.zf) goto L_117a20db;
  /* 117a20cb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 117a20d2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 117a20d9 jmp 0x117a210d */
  goto L_117a210d;
L_117a20db:;
  /* 117a20db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a20de and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 117a20e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a20e3 je 0x117a20f5 */
  if (C.zf) goto L_117a20f5;
  /* 117a20e5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 117a20ec mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 117a20f3 jmp 0x117a210d */
  goto L_117a210d;
L_117a20f5:;
  /* 117a20f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a20f8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 117a20fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a20fd je 0x117a210d */
  if (C.zf) goto L_117a210d;
  /* 117a20ff mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 117a2106 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_117a210d:;
  /* 117a210d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 117a2113 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a2116 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a2119 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 117a211f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a2122 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 117a2125 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a2127 jne 0x117a2145 */
  if (!C.zf) goto L_117a2145;
  /* 117a2129 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 117a212f push eax */
  push32((uint32_t)(EAX));
  /* 117a2130 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2133 push ecx */
  push32((uint32_t)(ECX));
  /* 117a2134 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 117a213a push edx */
  push32((uint32_t)(EDX));
  /* 117a213b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 117a213d call 0x117a2420 */
  push32(0x117a2142u); f_117a2420();
  /* 117a2142 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a2145:;
  /* 117a2145 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 117a214b push eax */
  push32((uint32_t)(EAX));
  /* 117a214c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a214f push ecx */
  push32((uint32_t)(ECX));
  /* 117a2150 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a2153 push edx */
  push32((uint32_t)(EDX));
  /* 117a2154 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 117a215a push eax */
  push32((uint32_t)(EAX));
  /* 117a215b call 0x117a2460 */
  push32(0x117a2160u); f_117a2460();
  /* 117a2160 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2163 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a2166 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 117a2169 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a216b je 0x117a2193 */
  if (C.zf) goto L_117a2193;
  /* 117a216d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a2170 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 117a2173 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a2175 jne 0x117a2193 */
  if (!C.zf) goto L_117a2193;
  /* 117a2177 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 117a217d push eax */
  push32((uint32_t)(EAX));
  /* 117a217e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2181 push ecx */
  push32((uint32_t)(ECX));
  /* 117a2182 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 117a2188 push edx */
  push32((uint32_t)(EDX));
  /* 117a2189 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 117a218b call 0x117a2420 */
  push32(0x117a2190u); f_117a2420();
  /* 117a2190 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a2193:;
  /* 117a2193 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2197 je 0x117a2241 */
  if (C.zf) goto L_117a2241;
  /* 117a219d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a21a1 jle 0x117a2241 */
  if ((C.zf||C.sf!=C.of)) goto L_117a2241;
  /* 117a21a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a21aa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 117a21b0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a21b3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_117a21b9:;
  /* 117a21b9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 117a21bf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 117a21c5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a21c8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 117a21ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a21d0 je 0x117a223f */
  if (C.zf) goto L_117a223f;
  /* 117a21d2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 117a21d8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 117a21db mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 117a21e2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 117a21e9 push eax */
  push32((uint32_t)(EAX));
  /* 117a21ea lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 117a21f0 push ecx */
  push32((uint32_t)(ECX));
  /* 117a21f1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 117a21f7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a21fa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 117a2200 call 0x117a39b0 */
  push32(0x117a2205u); f_117a39b0();
  /* 117a2205 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2208 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 117a220e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2215 jg 0x117a2219 */
  if ((!C.zf&&C.sf==C.of)) goto L_117a2219;
  /* 117a2217 jmp 0x117a223f */
  goto L_117a223f;
L_117a2219:;
  /* 117a2219 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 117a221f push eax */
  push32((uint32_t)(EAX));
  /* 117a2220 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2223 push ecx */
  push32((uint32_t)(ECX));
  /* 117a2224 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 117a222a push edx */
  push32((uint32_t)(EDX));
  /* 117a222b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 117a2231 push eax */
  push32((uint32_t)(EAX));
  /* 117a2232 call 0x117a2460 */
  push32(0x117a2237u); f_117a2460();
  /* 117a2237 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a223a jmp 0x117a21b9 */
  goto L_117a21b9;
L_117a223f:;
  /* 117a223f jmp 0x117a225c */
  goto L_117a225c;
L_117a2241:;
  /* 117a2241 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 117a2247 push ecx */
  push32((uint32_t)(ECX));
  /* 117a2248 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a224b push edx */
  push32((uint32_t)(EDX));
  /* 117a224c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a224f push eax */
  push32((uint32_t)(EAX));
  /* 117a2250 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a2253 push ecx */
  push32((uint32_t)(ECX));
  /* 117a2254 call 0x117a2460 */
  push32(0x117a2259u); f_117a2460();
  /* 117a2259 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a225c:;
  /* 117a225c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a225f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 117a2262 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a2264 je 0x117a2282 */
  if (C.zf) goto L_117a2282;
  /* 117a2266 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 117a226c push eax */
  push32((uint32_t)(EAX));
  /* 117a226d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2270 push ecx */
  push32((uint32_t)(ECX));
  /* 117a2271 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 117a2277 push edx */
  push32((uint32_t)(EDX));
  /* 117a2278 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 117a227a call 0x117a2420 */
  push32(0x117a227fu); f_117a2420();
  /* 117a227f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a2282:;
  /* 117a2282 jmp 0x117a1694 */
  goto L_117a1694;
L_117a2287:;
  /* 117a2287 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 117a228d pop edi */
  EDI = (pop32());
  /* 117a228e pop esi */
  ESI = (pop32());
  /* 117a228f pop ebx */
  EBX = (pop32());
  /* 117a2290 mov esp, ebp */
  ESP = (EBP);
  /* 117a2292 pop ebp */
  EBP = (pop32());
  /* 117a2293 ret  */
  ESPCHK(0x117a1670u, _esp0);
  ESP += 4; return;
}

/* FUN_100123a0 @ 0x117a23a0 (119 bytes, 44 insns) */
void f_117a23a0(void) {
  FTRACE(0x117a23a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a23a0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a23a1 mov ebp, esp */
  EBP = (ESP);
  /* 117a23a3 push ecx */
  push32((uint32_t)(ECX));
  /* 117a23a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a23a7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117a23aa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a23ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a23b0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 117a23b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a23b6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a23ba jl 0x117a23e2 */
  if ((C.sf!=C.of)) goto L_117a23e2;
  /* 117a23bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a23bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a23c1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 117a23c4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 117a23c6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 117a23ca and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117a23d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a23d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a23d6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a23d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a23db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a23de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117a23e0 jmp 0x117a23f5 */
  goto L_117a23f5;
L_117a23e2:;
  /* 117a23e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a23e5 push edx */
  push32((uint32_t)(EDX));
  /* 117a23e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a23e9 push eax */
  push32((uint32_t)(EAX));
  /* 117a23ea call 0x117a13f0 */
  push32(0x117a23efu); f_117a13f0();
  /* 117a23ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a23f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117a23f5:;
  /* 117a23f5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a23f9 jne 0x117a2406 */
  if (!C.zf) goto L_117a2406;
  /* 117a23fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a23fe mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 117a2404 jmp 0x117a2413 */
  goto L_117a2413;
L_117a2406:;
  /* 117a2406 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a2409 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a240b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a240e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a2411 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_117a2413:;
  /* 117a2413 mov esp, ebp */
  ESP = (EBP);
  /* 117a2415 pop ebp */
  EBP = (pop32());
  /* 117a2416 ret  */
  ESPCHK(0x117a23a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012420 @ 0x117a2420 (53 bytes, 23 insns) */
void f_117a2420(void) {
  FTRACE(0x117a2420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a2420 push ebp */
  push32((uint32_t)(EBP));
  /* 117a2421 mov ebp, esp */
  EBP = (ESP);
L_117a2423:;
  /* 117a2423 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a2426 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a2429 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a242c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 117a242f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a2431 jle 0x117a2453 */
  if ((C.zf||C.sf!=C.of)) goto L_117a2453;
  /* 117a2433 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a2436 push edx */
  push32((uint32_t)(EDX));
  /* 117a2437 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a243a push eax */
  push32((uint32_t)(EAX));
  /* 117a243b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a243e push ecx */
  push32((uint32_t)(ECX));
  /* 117a243f call 0x117a23a0 */
  push32(0x117a2444u); f_117a23a0();
  /* 117a2444 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2447 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a244a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a244d jne 0x117a2451 */
  if (!C.zf) goto L_117a2451;
  /* 117a244f jmp 0x117a2453 */
  goto L_117a2453;
L_117a2451:;
  /* 117a2451 jmp 0x117a2423 */
  goto L_117a2423;
L_117a2453:;
  /* 117a2453 pop ebp */
  EBP = (pop32());
  /* 117a2454 ret  */
  ESPCHK(0x117a2420u, _esp0);
  ESP += 4; return;
}

/* FUN_10012460 @ 0x117a2460 (74 bytes, 31 insns) */
void f_117a2460(void) {
  FTRACE(0x117a2460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a2460 push ebp */
  push32((uint32_t)(EBP));
  /* 117a2461 mov ebp, esp */
  EBP = (ESP);
  /* 117a2463 push ecx */
  push32((uint32_t)(ECX));
L_117a2464:;
  /* 117a2464 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a2467 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a246a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a246d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 117a2470 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a2472 jle 0x117a24a6 */
  if ((C.zf||C.sf!=C.of)) goto L_117a24a6;
  /* 117a2474 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a2477 push edx */
  push32((uint32_t)(EDX));
  /* 117a2478 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a247b push eax */
  push32((uint32_t)(EAX));
  /* 117a247c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a247f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117a2482 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a2485 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a2488 push eax */
  push32((uint32_t)(EAX));
  /* 117a2489 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a248c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a248f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 117a2492 call 0x117a23a0 */
  push32(0x117a2497u); f_117a23a0();
  /* 117a2497 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a249a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a249d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a24a0 jne 0x117a24a4 */
  if (!C.zf) goto L_117a24a4;
  /* 117a24a2 jmp 0x117a24a6 */
  goto L_117a24a6;
L_117a24a4:;
  /* 117a24a4 jmp 0x117a2464 */
  goto L_117a2464;
L_117a24a6:;
  /* 117a24a6 mov esp, ebp */
  ESP = (EBP);
  /* 117a24a8 pop ebp */
  EBP = (pop32());
  /* 117a24a9 ret  */
  ESPCHK(0x117a2460u, _esp0);
  ESP += 4; return;
}

/* FUN_100124b0 @ 0x117a24b0 (26 bytes, 12 insns) */
void f_117a24b0(void) {
  FTRACE(0x117a24b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a24b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a24b1 mov ebp, esp */
  EBP = (ESP);
  /* 117a24b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a24b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a24b8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a24bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a24be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117a24c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a24c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a24c5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 117a24c8 pop ebp */
  EBP = (pop32());
  /* 117a24c9 ret  */
  ESPCHK(0x117a24b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124d0 @ 0x117a24d0 (31 bytes, 14 insns) */
void f_117a24d0(void) {
  FTRACE(0x117a24d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a24d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a24d1 mov ebp, esp */
  EBP = (ESP);
  /* 117a24d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a24d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a24d8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a24db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a24de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117a24e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a24e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a24e5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a24e8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 117a24ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117a24ed pop ebp */
  EBP = (pop32());
  /* 117a24ee ret  */
  ESPCHK(0x117a24d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124f0 @ 0x117a24f0 (27 bytes, 12 insns) */
void f_117a24f0(void) {
  FTRACE(0x117a24f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a24f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a24f1 mov ebp, esp */
  EBP = (ESP);
  /* 117a24f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a24f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a24f8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a24fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a24fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117a2500 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2503 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a2505 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 117a2509 pop ebp */
  EBP = (pop32());
  /* 117a250a ret  */
  ESPCHK(0x117a24f0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x117a2510 (145 bytes, 42 insns) */
void f_117a2510(void) {
  FTRACE(0x117a2510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a2510 push ebp */
  push32((uint32_t)(EBP));
  /* 117a2511 mov ebp, esp */
  EBP = (ESP);
  /* 117a2513 push ecx */
  push32((uint32_t)(ECX));
  /* 117a2514 call 0x117a25c0 */
  push32(0x117a2519u); f_117a25c0();
  /* 117a2519 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a251c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117a251e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a2525 jmp 0x117a2530 */
  goto L_117a2530;
L_117a2527:;
  /* 117a2527 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a252a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a252d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117a2530:;
  /* 117a2530 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2534 jae 0x117a255a */
  if (!C.cf) goto L_117a255a;
  /* 117a2536 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a2539 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a253c cmp ecx, dword ptr [eax*8 + 0x117c60d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x117c60d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2543 jne 0x117a2558 */
  if (!C.zf) goto L_117a2558;
  /* 117a2545 call 0x117a25b0 */
  push32(0x117a254au); f_117a25b0();
  /* 117a254a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a254d mov ecx, dword ptr [edx*8 + 0x117c60dc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x117c60dc)));
  /* 117a2554 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117a2556 jmp 0x117a259d */
  goto L_117a259d;
L_117a2558:;
  /* 117a2558 jmp 0x117a2527 */
  goto L_117a2527;
L_117a255a:;
  /* 117a255a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a255e jb 0x117a2573 */
  if (C.cf) goto L_117a2573;
  /* 117a2560 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2564 ja 0x117a2573 */
  if ((!C.cf&&!C.zf)) goto L_117a2573;
  /* 117a2566 call 0x117a25b0 */
  push32(0x117a256bu); f_117a25b0();
  /* 117a256b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 117a2571 jmp 0x117a259d */
  goto L_117a259d;
L_117a2573:;
  /* 117a2573 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a257a jb 0x117a2592 */
  if (C.cf) goto L_117a2592;
  /* 117a257c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2583 ja 0x117a2592 */
  if ((!C.cf&&!C.zf)) goto L_117a2592;
  /* 117a2585 call 0x117a25b0 */
  push32(0x117a258au); f_117a25b0();
  /* 117a258a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 117a2590 jmp 0x117a259d */
  goto L_117a259d;
L_117a2592:;
  /* 117a2592 call 0x117a25b0 */
  push32(0x117a2597u); f_117a25b0();
  /* 117a2597 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_117a259d:;
  /* 117a259d mov esp, ebp */
  ESP = (EBP);
  /* 117a259f pop ebp */
  EBP = (pop32());
  /* 117a25a0 ret  */
  ESPCHK(0x117a2510u, _esp0);
  ESP += 4; return;
}

/* FUN_100125b0 @ 0x117a25b0 (13 bytes, 6 insns) */
void f_117a25b0(void) {
  FTRACE(0x117a25b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a25b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a25b1 mov ebp, esp */
  EBP = (ESP);
  /* 117a25b3 call 0x117994f0 */
  push32(0x117a25b8u); f_117994f0();
  /* 117a25b8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a25bb pop ebp */
  EBP = (pop32());
  /* 117a25bc ret  */
  ESPCHK(0x117a25b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125c0 @ 0x117a25c0 (13 bytes, 6 insns) */
void f_117a25c0(void) {
  FTRACE(0x117a25c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a25c0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a25c1 mov ebp, esp */
  EBP = (ESP);
  /* 117a25c3 call 0x117994f0 */
  push32(0x117a25c8u); f_117994f0();
  /* 117a25c8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a25cb pop ebp */
  EBP = (pop32());
  /* 117a25cc ret  */
  ESPCHK(0x117a25c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125d0 @ 0x117a25d0 (255 bytes, 88 insns) */
void f_117a25d0(void) {
  FTRACE(0x117a25d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a25d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a25d1 mov ebp, esp */
  EBP = (ESP);
  /* 117a25d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_117a25d6:;
  /* 117a25d6 cmp dword ptr [0x117c5fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117c5fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a25dd jle 0x117a25f6 */
  if ((C.zf||C.sf!=C.of)) goto L_117a25f6;
  /* 117a25df push 8 */
  push32((uint32_t)(0x8u));
  /* 117a25e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a25e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a25e6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117a25e8 push ecx */
  push32((uint32_t)(ECX));
  /* 117a25e9 call 0x117a06f0 */
  push32(0x117a25eeu); f_117a06f0();
  /* 117a25ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a25f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117a25f4 jmp 0x117a260f */
  goto L_117a260f;
L_117a25f6:;
  /* 117a25f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a25f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a25fb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a25fd mov ecx, dword ptr [0x117c5db8] */
  ECX = (r32((uint32_t)(0x117c5db8)));
  /* 117a2603 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a2605 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 117a2609 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 117a260c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_117a260f:;
  /* 117a260f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2613 je 0x117a2620 */
  if (C.zf) goto L_117a2620;
  /* 117a2615 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2618 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a261b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117a261e jmp 0x117a25d6 */
  goto L_117a25d6;
L_117a2620:;
  /* 117a2620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2623 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a2625 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117a2627 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a262a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a262d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2630 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117a2633 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a2636 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a2639 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a263d je 0x117a2645 */
  if (C.zf) goto L_117a2645;
  /* 117a263f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2643 jne 0x117a2658 */
  if (!C.zf) goto L_117a2658;
L_117a2645:;
  /* 117a2645 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2648 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a264a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a264c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a264f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2652 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2655 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_117a2658:;
  /* 117a2658 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_117a265f:;
  /* 117a265f cmp dword ptr [0x117c5fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117c5fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2666 jle 0x117a267b */
  if ((C.zf||C.sf!=C.of)) goto L_117a267b;
  /* 117a2668 push 4 */
  push32((uint32_t)(0x4u));
  /* 117a266a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a266d push edx */
  push32((uint32_t)(EDX));
  /* 117a266e call 0x117a06f0 */
  push32(0x117a2673u); f_117a06f0();
  /* 117a2673 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2676 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 117a2679 jmp 0x117a2690 */
  goto L_117a2690;
L_117a267b:;
  /* 117a267b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a267e mov ecx, dword ptr [0x117c5db8] */
  ECX = (r32((uint32_t)(0x117c5db8)));
  /* 117a2684 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a2686 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 117a268a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 117a268d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_117a2690:;
  /* 117a2690 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2694 je 0x117a26bb */
  if (C.zf) goto L_117a26bb;
  /* 117a2696 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a2699 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a269c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a269f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 117a26a3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117a26a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a26a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a26ab mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117a26ad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a26b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a26b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a26b6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 117a26b9 jmp 0x117a265f */
  goto L_117a265f;
L_117a26bb:;
  /* 117a26bb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a26bf jne 0x117a26c8 */
  if (!C.zf) goto L_117a26c8;
  /* 117a26c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a26c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a26c6 jmp 0x117a26cb */
  goto L_117a26cb;
L_117a26c8:;
  /* 117a26c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_117a26cb:;
  /* 117a26cb mov esp, ebp */
  ESP = (EBP);
  /* 117a26cd pop ebp */
  EBP = (pop32());
  /* 117a26ce ret  */
  ESPCHK(0x117a25d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100126d0 @ 0x117a26d0 (17 bytes, 8 insns) */
void f_117a26d0(void) {
  FTRACE(0x117a26d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a26d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a26d1 mov ebp, esp */
  EBP = (ESP);
  /* 117a26d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a26d6 push eax */
  push32((uint32_t)(EAX));
  /* 117a26d7 call 0x117a25d0 */
  push32(0x117a26dcu); f_117a25d0();
  /* 117a26dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a26df pop ebp */
  EBP = (pop32());
  /* 117a26e0 ret  */
  ESPCHK(0x117a26d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100126f0 @ 0x117a26f0 (297 bytes, 106 insns) */
void f_117a26f0(void) {
  FTRACE(0x117a26f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a26f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a26f1 mov ebp, esp */
  EBP = (ESP);
  /* 117a26f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a26f6 push esi */
  push32((uint32_t)(ESI));
L_117a26f7:;
  /* 117a26f7 cmp dword ptr [0x117c5fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117c5fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a26fe jle 0x117a2717 */
  if ((C.zf||C.sf!=C.of)) goto L_117a2717;
  /* 117a2700 push 8 */
  push32((uint32_t)(0x8u));
  /* 117a2702 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2705 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a2707 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117a2709 push ecx */
  push32((uint32_t)(ECX));
  /* 117a270a call 0x117a06f0 */
  push32(0x117a270fu); f_117a06f0();
  /* 117a270f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2712 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 117a2715 jmp 0x117a2730 */
  goto L_117a2730;
L_117a2717:;
  /* 117a2717 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a271a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a271c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a271e mov ecx, dword ptr [0x117c5db8] */
  ECX = (r32((uint32_t)(0x117c5db8)));
  /* 117a2724 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a2726 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 117a272a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 117a272d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_117a2730:;
  /* 117a2730 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2734 je 0x117a2741 */
  if (C.zf) goto L_117a2741;
  /* 117a2736 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2739 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a273c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117a273f jmp 0x117a26f7 */
  goto L_117a26f7;
L_117a2741:;
  /* 117a2741 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2744 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a2746 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117a2748 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a274b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a274e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2751 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117a2754 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a2757 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117a275a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a275e je 0x117a2766 */
  if (C.zf) goto L_117a2766;
  /* 117a2760 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2764 jne 0x117a2779 */
  if (!C.zf) goto L_117a2779;
L_117a2766:;
  /* 117a2766 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2769 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a276b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a276d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a2770 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2773 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2776 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_117a2779:;
  /* 117a2779 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117a2780 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_117a2787:;
  /* 117a2787 cmp dword ptr [0x117c5fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117c5fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a278e jle 0x117a27a3 */
  if ((C.zf||C.sf!=C.of)) goto L_117a27a3;
  /* 117a2790 push 4 */
  push32((uint32_t)(0x4u));
  /* 117a2792 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a2795 push edx */
  push32((uint32_t)(EDX));
  /* 117a2796 call 0x117a06f0 */
  push32(0x117a279bu); f_117a06f0();
  /* 117a279b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a279e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117a27a1 jmp 0x117a27b8 */
  goto L_117a27b8;
L_117a27a3:;
  /* 117a27a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a27a6 mov ecx, dword ptr [0x117c5db8] */
  ECX = (r32((uint32_t)(0x117c5db8)));
  /* 117a27ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a27ae mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 117a27b2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 117a27b5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_117a27b8:;
  /* 117a27b8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a27bc je 0x117a27f9 */
  if (C.zf) goto L_117a27f9;
  /* 117a27be push 0 */
  push32((uint32_t)(0x0u));
  /* 117a27c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 117a27c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a27c5 push eax */
  push32((uint32_t)(EAX));
  /* 117a27c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a27c9 push ecx */
  push32((uint32_t)(ECX));
  /* 117a27ca call 0x117a3ad0 */
  push32(0x117a27cfu); f_117a3ad0();
  /* 117a27cf mov ecx, eax */
  ECX = (EAX);
  /* 117a27d1 mov esi, edx */
  ESI = (EDX);
  /* 117a27d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a27d6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a27d9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a27da add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a27dc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117a27de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a27e1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 117a27e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a27e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a27e9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a27eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a27ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a27f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a27f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 117a27f7 jmp 0x117a2787 */
  goto L_117a2787;
L_117a27f9:;
  /* 117a27f9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a27fd jne 0x117a280e */
  if (!C.zf) goto L_117a280e;
  /* 117a27ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a2802 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a2804 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a2807 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a280a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a280c jmp 0x117a2814 */
  goto L_117a2814;
L_117a280e:;
  /* 117a280e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a2811 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_117a2814:;
  /* 117a2814 pop esi */
  ESI = (pop32());
  /* 117a2815 mov esp, ebp */
  ESP = (EBP);
  /* 117a2817 pop ebp */
  EBP = (pop32());
  /* 117a2818 ret  */
  ESPCHK(0x117a26f0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x117a2820 (129 bytes, 56 insns) */
void f_117a2820(void) {
  FTRACE(0x117a2820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a2820 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 117a2824 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 117a2828 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 117a282e jne 0x117a286c */
  if (!C.zf) goto L_117a286c;
L_117a2830:;
  /* 117a2830 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a2832 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a2834 jne 0x117a2864 */
  if (!C.zf) goto L_117a2864;
  /* 117a2836 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 117a2838 je 0x117a2860 */
  if (C.zf) goto L_117a2860;
  /* 117a283a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a283d jne 0x117a2864 */
  if (!C.zf) goto L_117a2864;
  /* 117a283f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 117a2841 je 0x117a2860 */
  if (C.zf) goto L_117a2860;
  /* 117a2843 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 117a2846 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a2849 jne 0x117a2864 */
  if (!C.zf) goto L_117a2864;
  /* 117a284b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 117a284d je 0x117a2860 */
  if (C.zf) goto L_117a2860;
  /* 117a284f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a2852 jne 0x117a2864 */
  if (!C.zf) goto L_117a2864;
  /* 117a2854 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2857 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a285a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 117a285c jne 0x117a2830 */
  if (!C.zf) goto L_117a2830;
  /* 117a285e mov edi, edi */
  EDI = (EDI);
L_117a2860:;
  /* 117a2860 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a2862 ret  */
  ESPCHK(0x117a2820u, _esp0);
  ESP += 4; return;
  /* 117a2863 nop  */
  /* nop */
L_117a2864:;
  /* 117a2864 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a2866 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117a2868 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117a2869 ret  */
  ESPCHK(0x117a2820u, _esp0);
  ESP += 4; return;
  /* 117a286a mov edi, edi */
  EDI = (EDI);
L_117a286c:;
  /* 117a286c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 117a2872 je 0x117a2888 */
  if (C.zf) goto L_117a2888;
  /* 117a2874 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a2876 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 117a2877 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a2879 jne 0x117a2864 */
  if (!C.zf) goto L_117a2864;
  /* 117a287b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117a287c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 117a287e je 0x117a2860 */
  if (C.zf) goto L_117a2860;
  /* 117a2880 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 117a2886 je 0x117a2830 */
  if (C.zf) goto L_117a2830;
L_117a2888:;
  /* 117a2888 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 117a288b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a288e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a2890 jne 0x117a2864 */
  if (!C.zf) goto L_117a2864;
  /* 117a2892 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 117a2894 je 0x117a2860 */
  if (C.zf) goto L_117a2860;
  /* 117a2896 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117a2899 jne 0x117a2864 */
  if (!C.zf) goto L_117a2864;
  /* 117a289b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 117a289d je 0x117a2860 */
  if (C.zf) goto L_117a2860;
  /* 117a289f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a28a2 jmp 0x117a2830 */
  goto L_117a2830;
}

/* FUN_100128b0 @ 0x117a28b0 (46 bytes, 18 insns) */
void f_117a28b0(void) {
  FTRACE(0x117a28b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a28b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a28b1 mov ebp, esp */
  EBP = (ESP);
  /* 117a28b3 push ecx */
  push32((uint32_t)(ECX));
  /* 117a28b4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 117a28b6 call 0x1179d7a0 */
  push32(0x117a28bbu); f_1179d7a0();
  /* 117a28bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a28be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a28c1 push eax */
  push32((uint32_t)(EAX));
  /* 117a28c2 call 0x117a28e0 */
  push32(0x117a28c7u); f_117a28e0();
  /* 117a28c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a28ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a28cd push 0xc */
  push32((uint32_t)(0xcu));
  /* 117a28cf call 0x1179d840 */
  push32(0x117a28d4u); f_1179d840();
  /* 117a28d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a28d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a28da mov esp, ebp */
  ESP = (EBP);
  /* 117a28dc pop ebp */
  EBP = (pop32());
  /* 117a28dd ret  */
  ESPCHK(0x117a28b0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x117a28e0 (198 bytes, 69 insns) */
void f_117a28e0(void) {
  FTRACE(0x117a28e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a28e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a28e1 mov ebp, esp */
  EBP = (ESP);
  /* 117a28e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a28e6 mov eax, dword ptr [0x117c7bd8] */
  EAX = (r32((uint32_t)(0x117c7bd8)));
  /* 117a28eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a28ee cmp dword ptr [0x117c96e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c96e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a28f5 jne 0x117a28fe */
  if (!C.zf) goto L_117a28fe;
  /* 117a28f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a28f9 jmp 0x117a29a2 */
  goto L_117a29a2;
L_117a28fe:;
  /* 117a28fe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2902 jne 0x117a2926 */
  if (!C.zf) goto L_117a2926;
  /* 117a2904 cmp dword ptr [0x117c7be0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7be0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a290b je 0x117a2926 */
  if (C.zf) goto L_117a2926;
  /* 117a290d call 0x117a3b60 */
  push32(0x117a2912u); f_117a3b60();
  /* 117a2912 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a2914 je 0x117a291d */
  if (C.zf) goto L_117a291d;
  /* 117a2916 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a2918 jmp 0x117a29a2 */
  goto L_117a29a2;
L_117a291d:;
  /* 117a291d mov ecx, dword ptr [0x117c7bd8] */
  ECX = (r32((uint32_t)(0x117c7bd8)));
  /* 117a2923 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_117a2926:;
  /* 117a2926 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a292a je 0x117a29a0 */
  if (C.zf) goto L_117a29a0;
  /* 117a292c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2930 je 0x117a29a0 */
  if (C.zf) goto L_117a29a0;
  /* 117a2932 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2935 push edx */
  push32((uint32_t)(EDX));
  /* 117a2936 call 0x1179cbd0 */
  push32(0x117a293bu); f_1179cbd0();
  /* 117a293b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a293e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117a2941:;
  /* 117a2941 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a2944 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2947 je 0x117a29a0 */
  if (C.zf) goto L_117a29a0;
  /* 117a2949 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a294c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a294e push edx */
  push32((uint32_t)(EDX));
  /* 117a294f call 0x1179cbd0 */
  push32(0x117a2954u); f_1179cbd0();
  /* 117a2954 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2957 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a295a jbe 0x117a2995 */
  if ((C.cf||C.zf)) goto L_117a2995;
  /* 117a295c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a295f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a2961 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a2964 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 117a2968 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a296b jne 0x117a2995 */
  if (!C.zf) goto L_117a2995;
  /* 117a296d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a2970 push ecx */
  push32((uint32_t)(ECX));
  /* 117a2971 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2974 push edx */
  push32((uint32_t)(EDX));
  /* 117a2975 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a2978 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a297a push ecx */
  push32((uint32_t)(ECX));
  /* 117a297b call 0x117a3b10 */
  push32(0x117a2980u); f_117a3b10();
  /* 117a2980 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2983 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a2985 jne 0x117a2995 */
  if (!C.zf) goto L_117a2995;
  /* 117a2987 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a298a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a298c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a298f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 117a2993 jmp 0x117a29a2 */
  goto L_117a29a2;
L_117a2995:;
  /* 117a2995 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a2998 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a299b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117a299e jmp 0x117a2941 */
  goto L_117a2941;
L_117a29a0:;
  /* 117a29a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a29a2:;
  /* 117a29a2 mov esp, ebp */
  ESP = (EBP);
  /* 117a29a4 pop ebp */
  EBP = (pop32());
  /* 117a29a5 ret  */
  ESPCHK(0x117a28e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100129b0 @ 0x117a29b0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_117a29b0(void) {
  FTRACE(0x117a29b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a29b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a29b1 mov ebp, esp */
  EBP = (ESP);
  /* 117a29b3 push edi */
  push32((uint32_t)(EDI));
  /* 117a29b4 push esi */
  push32((uint32_t)(ESI));
  /* 117a29b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 117a29b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a29bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 117a29be mov eax, ecx */
  EAX = (ECX);
  /* 117a29c0 mov edx, ecx */
  EDX = (ECX);
  /* 117a29c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a29c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a29c6 jbe 0x117a29d0 */
  if ((C.cf||C.zf)) goto L_117a29d0;
  /* 117a29c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a29ca jb 0x117a2b48 */
  if (C.cf) goto L_117a2b48;
L_117a29d0:;
  /* 117a29d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117a29d6 jne 0x117a29ec */
  if (!C.zf) goto L_117a29ec;
  /* 117a29d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117a29db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117a29de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a29e1 jb 0x117a2a0c */
  if (C.cf) goto L_117a2a0c;
  /* 117a29e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117a29e5 jmp dword ptr [edx*4 + 0x117a2af8] */
  switch (EDX) {
    case 0: goto L_117a2b08;
    case 1: goto L_117a2b10;
    case 2: goto L_117a2b1c;
    case 3: goto L_117a2b30;
    default: x86_unimpl("switch@0x117a29e5 out of table"); return;
  }
L_117a29ec:;
  /* 117a29ec mov eax, edi */
  EAX = (EDI);
  /* 117a29ee mov edx, 3 */
  EDX = (0x3u);
  /* 117a29f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a29f6 jb 0x117a2a04 */
  if (C.cf) goto L_117a2a04;
  /* 117a29f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 117a29fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a29fd jmp dword ptr [eax*4 + 0x117a2a10] */
  switch (EAX) {
    case 1: goto L_117a2a20;
    case 2: goto L_117a2a4c;
    case 3: goto L_117a2a70;
    default: x86_unimpl("switch@0x117a29fd out of table"); return;
  }
L_117a2a04:;
  /* 117a2a04 jmp dword ptr [ecx*4 + 0x117a2b08] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x117a2b08)))); return;
  /* 117a2a0b nop  */
  /* nop */
L_117a2a0c:;
  /* 117a2a0c jmp dword ptr [ecx*4 + 0x117a2a8c] */
  switch (ECX) {
    case 0: goto L_117a2aef;
    case 1: goto L_117a2adc;
    case 2: goto L_117a2ad4;
    case 3: goto L_117a2acc;
    case 4: goto L_117a2ac4;
    case 5: goto L_117a2abc;
    case 6: goto L_117a2ab4;
    case 7: goto L_117a2aac;
    default: x86_unimpl("switch@0x117a2a0c out of table"); return;
  }
  /* 117a2a13 nop  */
  /* nop */
L_117a2a20:;
  /* 117a2a20 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117a2a22 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117a2a24 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117a2a26 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117a2a29 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117a2a2c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117a2a2f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117a2a32 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117a2a35 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2a38 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2a3b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2a3e jb 0x117a2a0c */
  if (C.cf) goto L_117a2a0c;
  /* 117a2a40 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117a2a42 jmp dword ptr [edx*4 + 0x117a2af8] */
  switch (EDX) {
    case 0: goto L_117a2b08;
    case 1: goto L_117a2b10;
    case 2: goto L_117a2b1c;
    case 3: goto L_117a2b30;
    default: x86_unimpl("switch@0x117a2a42 out of table"); return;
  }
  /* 117a2a49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117a2a4c:;
  /* 117a2a4c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117a2a4e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117a2a50 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117a2a52 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117a2a55 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117a2a58 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117a2a5b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2a5e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2a61 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2a64 jb 0x117a2a0c */
  if (C.cf) goto L_117a2a0c;
  /* 117a2a66 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117a2a68 jmp dword ptr [edx*4 + 0x117a2af8] */
  switch (EDX) {
    case 0: goto L_117a2b08;
    case 1: goto L_117a2b10;
    case 2: goto L_117a2b1c;
    case 3: goto L_117a2b30;
    default: x86_unimpl("switch@0x117a2a68 out of table"); return;
  }
  /* 117a2a6f nop  */
  /* nop */
L_117a2a70:;
  /* 117a2a70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117a2a72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117a2a74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117a2a76 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117a2a77 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117a2a7a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117a2a7b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2a7e jb 0x117a2a0c */
  if (C.cf) goto L_117a2a0c;
  /* 117a2a80 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117a2a82 jmp dword ptr [edx*4 + 0x117a2af8] */
  switch (EDX) {
    case 0: goto L_117a2b08;
    case 1: goto L_117a2b10;
    case 2: goto L_117a2b1c;
    case 3: goto L_117a2b30;
    default: x86_unimpl("switch@0x117a2a82 out of table"); return;
  }
  /* 117a2a89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117a2aac:;
  /* 117a2aac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 117a2ab0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_117a2ab4:;
  /* 117a2ab4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 117a2ab8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_117a2abc:;
  /* 117a2abc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 117a2ac0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_117a2ac4:;
  /* 117a2ac4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 117a2ac8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_117a2acc:;
  /* 117a2acc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 117a2ad0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_117a2ad4:;
  /* 117a2ad4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 117a2ad8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_117a2adc:;
  /* 117a2adc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 117a2ae0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 117a2ae4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117a2aeb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2aed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117a2aef:;
  /* 117a2aef jmp dword ptr [edx*4 + 0x117a2af8] */
  switch (EDX) {
    case 0: goto L_117a2b08;
    case 1: goto L_117a2b10;
    case 2: goto L_117a2b1c;
    case 3: goto L_117a2b30;
    default: x86_unimpl("switch@0x117a2aef out of table"); return;
  }
  /* 117a2af6 mov edi, edi */
  EDI = (EDI);
L_117a2b08:;
  /* 117a2b08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2b0b pop esi */
  ESI = (pop32());
  /* 117a2b0c pop edi */
  EDI = (pop32());
  /* 117a2b0d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a2b0e ret  */
  ESPCHK(0x117a29b0u, _esp0);
  ESP += 4; return;
  /* 117a2b0f nop  */
  /* nop */
L_117a2b10:;
  /* 117a2b10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117a2b12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117a2b14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2b17 pop esi */
  ESI = (pop32());
  /* 117a2b18 pop edi */
  EDI = (pop32());
  /* 117a2b19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a2b1a ret  */
  ESPCHK(0x117a29b0u, _esp0);
  ESP += 4; return;
  /* 117a2b1b nop  */
  /* nop */
L_117a2b1c:;
  /* 117a2b1c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117a2b1e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117a2b20 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117a2b23 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117a2b26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2b29 pop esi */
  ESI = (pop32());
  /* 117a2b2a pop edi */
  EDI = (pop32());
  /* 117a2b2b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a2b2c ret  */
  ESPCHK(0x117a29b0u, _esp0);
  ESP += 4; return;
  /* 117a2b2d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117a2b30:;
  /* 117a2b30 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117a2b32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117a2b34 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117a2b37 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117a2b3a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117a2b3d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117a2b40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2b43 pop esi */
  ESI = (pop32());
  /* 117a2b44 pop edi */
  EDI = (pop32());
  /* 117a2b45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a2b46 ret  */
  ESPCHK(0x117a29b0u, _esp0);
  ESP += 4; return;
  /* 117a2b47 nop  */
  /* nop */
L_117a2b48:;
  /* 117a2b48 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 117a2b4c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 117a2b50 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117a2b56 jne 0x117a2b7c */
  if (!C.zf) goto L_117a2b7c;
  /* 117a2b58 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117a2b5b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117a2b5e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2b61 jb 0x117a2b70 */
  if (C.cf) goto L_117a2b70;
  /* 117a2b63 std  */
  C.df=1;
  /* 117a2b64 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117a2b66 cld  */
  C.df=0;
  /* 117a2b67 jmp dword ptr [edx*4 + 0x117a2c90] */
  switch (EDX) {
    case 0: goto L_117a2ca0;
    case 1: goto L_117a2ca8;
    case 2: goto L_117a2cb8;
    case 3: goto L_117a2ccc;
    default: x86_unimpl("switch@0x117a2b67 out of table"); return;
  }
  /* 117a2b6e mov edi, edi */
  EDI = (EDI);
L_117a2b70:;
  /* 117a2b70 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a2b72 jmp dword ptr [ecx*4 + 0x117a2c40] */
  switch (ECX) {
    case 0: goto L_117a2c87;
    default: x86_unimpl("switch@0x117a2b72 out of table"); return;
  }
  /* 117a2b79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117a2b7c:;
  /* 117a2b7c mov eax, edi */
  EAX = (EDI);
  /* 117a2b7e mov edx, 3 */
  EDX = (0x3u);
  /* 117a2b83 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2b86 jb 0x117a2b94 */
  if (C.cf) goto L_117a2b94;
  /* 117a2b88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 117a2b8b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a2b8d jmp dword ptr [eax*4 + 0x117a2b98] */
  switch (EAX) {
    case 1: goto L_117a2ba8;
    case 2: goto L_117a2bc8;
    case 3: goto L_117a2bf0;
    default: x86_unimpl("switch@0x117a2b8d out of table"); return;
  }
L_117a2b94:;
  /* 117a2b94 jmp dword ptr [ecx*4 + 0x117a2c90] */
  switch (ECX) {
    case 0: goto L_117a2ca0;
    case 1: goto L_117a2ca8;
    case 2: goto L_117a2cb8;
    case 3: goto L_117a2ccc;
    default: x86_unimpl("switch@0x117a2b94 out of table"); return;
  }
  /* 117a2b9b nop  */
  /* nop */
L_117a2ba8:;
  /* 117a2ba8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117a2bab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117a2bad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117a2bb0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 117a2bb1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117a2bb4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 117a2bb5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2bb8 jb 0x117a2b70 */
  if (C.cf) goto L_117a2b70;
  /* 117a2bba std  */
  C.df=1;
  /* 117a2bbb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117a2bbd cld  */
  C.df=0;
  /* 117a2bbe jmp dword ptr [edx*4 + 0x117a2c90] */
  switch (EDX) {
    case 0: goto L_117a2ca0;
    case 1: goto L_117a2ca8;
    case 2: goto L_117a2cb8;
    case 3: goto L_117a2ccc;
    default: x86_unimpl("switch@0x117a2bbe out of table"); return;
  }
  /* 117a2bc5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117a2bc8:;
  /* 117a2bc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117a2bcb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117a2bcd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117a2bd0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117a2bd3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117a2bd6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117a2bd9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a2bdc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a2bdf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2be2 jb 0x117a2b70 */
  if (C.cf) goto L_117a2b70;
  /* 117a2be4 std  */
  C.df=1;
  /* 117a2be5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117a2be7 cld  */
  C.df=0;
  /* 117a2be8 jmp dword ptr [edx*4 + 0x117a2c90] */
  switch (EDX) {
    case 0: goto L_117a2ca0;
    case 1: goto L_117a2ca8;
    case 2: goto L_117a2cb8;
    case 3: goto L_117a2ccc;
    default: x86_unimpl("switch@0x117a2be8 out of table"); return;
  }
  /* 117a2bef nop  */
  /* nop */
L_117a2bf0:;
  /* 117a2bf0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117a2bf3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117a2bf5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117a2bf8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117a2bfb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117a2bfe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117a2c01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117a2c04 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117a2c07 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a2c0a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a2c0d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2c10 jb 0x117a2b70 */
  if (C.cf) goto L_117a2b70;
  /* 117a2c16 std  */
  C.df=1;
  /* 117a2c17 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117a2c19 cld  */
  C.df=0;
  /* 117a2c1a jmp dword ptr [edx*4 + 0x117a2c90] */
  switch (EDX) {
    case 0: goto L_117a2ca0;
    case 1: goto L_117a2ca8;
    case 2: goto L_117a2cb8;
    case 3: goto L_117a2ccc;
    default: x86_unimpl("switch@0x117a2c1a out of table"); return;
  }
  /* 117a2c21 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 117a2c24 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 117a2c25 sub al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117a2c27 adc dword ptr [esp + ebp + 0x7a], ecx */
  { uint32_t _a=(r32((uint32_t)(ESP + EBP*1 + 0x7a))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + EBP*1 + 0x7a), (_r)); fl_add(_a,_b,_r,32); }
  /* 117a2c2b adc dword ptr [esp + ebp + 0x7a], edx */
  { uint32_t _a=(r32((uint32_t)(ESP + EBP*1 + 0x7a))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + EBP*1 + 0x7a), (_r)); fl_add(_a,_b,_r,32); }
  /* 117a2c2f adc dword ptr [esp + ebp + 0x7a], ebx */
  { uint32_t _a=(r32((uint32_t)(ESP + EBP*1 + 0x7a))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + EBP*1 + 0x7a), (_r)); fl_add(_a,_b,_r,32); }
  /* 117a2c33 adc dword ptr [esp + ebp + 0x7a], esp */
  { uint32_t _a=(r32((uint32_t)(ESP + EBP*1 + 0x7a))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(ESP + EBP*1 + 0x7a), (_r)); fl_add(_a,_b,_r,32); }
  /* 117a2c37 adc dword ptr [esp + ebp + 0x7a], ebp */
  { uint32_t _a=(r32((uint32_t)(ESP + EBP*1 + 0x7a))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(ESP + EBP*1 + 0x7a), (_r)); fl_add(_a,_b,_r,32); }
  /* 117a2c3b adc dword ptr [esp + ebp + 0x7a], esi */
  { uint32_t _a=(r32((uint32_t)(ESP + EBP*1 + 0x7a))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(ESP + EBP*1 + 0x7a), (_r)); fl_add(_a,_b,_r,32); }
  /* 117a2c44 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 117a2c48 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 117a2c4c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 117a2c50 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 117a2c54 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 117a2c58 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 117a2c5c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 117a2c60 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 117a2c64 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 117a2c68 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 117a2c6c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 117a2c70 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 117a2c74 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 117a2c78 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 117a2c7c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117a2c83 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2c85 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117a2c87:;
  /* 117a2c87 jmp dword ptr [edx*4 + 0x117a2c90] */
  switch (EDX) {
    case 0: goto L_117a2ca0;
    case 1: goto L_117a2ca8;
    case 2: goto L_117a2cb8;
    case 3: goto L_117a2ccc;
    default: x86_unimpl("switch@0x117a2c87 out of table"); return;
  }
  /* 117a2c8e mov edi, edi */
  EDI = (EDI);
L_117a2ca0:;
  /* 117a2ca0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2ca3 pop esi */
  ESI = (pop32());
  /* 117a2ca4 pop edi */
  EDI = (pop32());
  /* 117a2ca5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a2ca6 ret  */
  ESPCHK(0x117a29b0u, _esp0);
  ESP += 4; return;
  /* 117a2ca7 nop  */
  /* nop */
L_117a2ca8:;
  /* 117a2ca8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117a2cab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117a2cae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2cb1 pop esi */
  ESI = (pop32());
  /* 117a2cb2 pop edi */
  EDI = (pop32());
  /* 117a2cb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a2cb4 ret  */
  ESPCHK(0x117a29b0u, _esp0);
  ESP += 4; return;
  /* 117a2cb5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117a2cb8:;
  /* 117a2cb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117a2cbb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117a2cbe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117a2cc1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117a2cc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2cc7 pop esi */
  ESI = (pop32());
  /* 117a2cc8 pop edi */
  EDI = (pop32());
  /* 117a2cc9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a2cca ret  */
  ESPCHK(0x117a29b0u, _esp0);
  ESP += 4; return;
  /* 117a2ccb nop  */
  /* nop */
L_117a2ccc:;
  /* 117a2ccc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117a2ccf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117a2cd2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117a2cd5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117a2cd8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117a2cdb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117a2cde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2ce1 pop esi */
  ESI = (pop32());
  /* 117a2ce2 pop edi */
  EDI = (pop32());
  /* 117a2ce3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117a2ce4 ret  */
  ESPCHK(0x117a29b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cf0 @ 0x117a2cf0 (421 bytes, 148 insns) */
void f_117a2cf0(void) {
  FTRACE(0x117a2cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a2cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a2cf1 mov ebp, esp */
  EBP = (ESP);
  /* 117a2cf3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117a2cf5 push 0x117c2df0 */
  push32((uint32_t)(0x117c2df0u));
  /* 117a2cfa push 0x117a3d08 */
  push32((uint32_t)(0x117a3d08u));
  /* 117a2cff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 117a2d05 push eax */
  push32((uint32_t)(EAX));
  /* 117a2d06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 117a2d0d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2d10 push ebx */
  push32((uint32_t)(EBX));
  /* 117a2d11 push esi */
  push32((uint32_t)(ESI));
  /* 117a2d12 push edi */
  push32((uint32_t)(EDI));
  /* 117a2d13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117a2d16 cmp dword ptr [0x117c7e88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2d1d jne 0x117a2d6e */
  if (!C.zf) goto L_117a2d6e;
  /* 117a2d1f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 117a2d22 push eax */
  push32((uint32_t)(EAX));
  /* 117a2d23 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a2d25 push 0x117c2de8 */
  push32((uint32_t)(0x117c2de8u));
  /* 117a2d2a push 1 */
  push32((uint32_t)(0x1u));
  /* 117a2d2c call dword ptr [0x117ca320] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca320))), 0x117a2d32u);
  /* 117a2d32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a2d34 je 0x117a2d42 */
  if (C.zf) goto L_117a2d42;
  /* 117a2d36 mov dword ptr [0x117c7e88], 1 */
  w32((uint32_t)(0x117c7e88), (0x1u));
  /* 117a2d40 jmp 0x117a2d6e */
  goto L_117a2d6e;
L_117a2d42:;
  /* 117a2d42 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 117a2d45 push ecx */
  push32((uint32_t)(ECX));
  /* 117a2d46 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a2d48 push 0x117c2de4 */
  push32((uint32_t)(0x117c2de4u));
  /* 117a2d4d push 1 */
  push32((uint32_t)(0x1u));
  /* 117a2d4f push 0 */
  push32((uint32_t)(0x0u));
  /* 117a2d51 call dword ptr [0x117ca324] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca324))), 0x117a2d57u);
  /* 117a2d57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a2d59 je 0x117a2d67 */
  if (C.zf) goto L_117a2d67;
  /* 117a2d5b mov dword ptr [0x117c7e88], 2 */
  w32((uint32_t)(0x117c7e88), (0x2u));
  /* 117a2d65 jmp 0x117a2d6e */
  goto L_117a2d6e;
L_117a2d67:;
  /* 117a2d67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a2d69 jmp 0x117a2e98 */
  goto L_117a2e98;
L_117a2d6e:;
  /* 117a2d6e cmp dword ptr [0x117c7e88], 2 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2d75 jne 0x117a2da5 */
  if (!C.zf) goto L_117a2da5;
  /* 117a2d77 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2d7b jne 0x117a2d86 */
  if (!C.zf) goto L_117a2d86;
  /* 117a2d7d mov edx, dword ptr [0x117c7e70] */
  EDX = (r32((uint32_t)(0x117c7e70)));
  /* 117a2d83 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_117a2d86:;
  /* 117a2d86 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a2d89 push eax */
  push32((uint32_t)(EAX));
  /* 117a2d8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a2d8d push ecx */
  push32((uint32_t)(ECX));
  /* 117a2d8e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a2d91 push edx */
  push32((uint32_t)(EDX));
  /* 117a2d92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2d95 push eax */
  push32((uint32_t)(EAX));
  /* 117a2d96 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 117a2d99 push ecx */
  push32((uint32_t)(ECX));
  /* 117a2d9a call dword ptr [0x117ca324] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca324))), 0x117a2da0u);
  /* 117a2da0 jmp 0x117a2e98 */
  goto L_117a2e98;
L_117a2da5:;
  /* 117a2da5 cmp dword ptr [0x117c7e88], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e88))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2dac jne 0x117a2e96 */
  if (!C.zf) goto L_117a2e96;
  /* 117a2db2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2db6 jne 0x117a2dc1 */
  if (!C.zf) goto L_117a2dc1;
  /* 117a2db8 mov edx, dword ptr [0x117c7e80] */
  EDX = (r32((uint32_t)(0x117c7e80)));
  /* 117a2dbe mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_117a2dc1:;
  /* 117a2dc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a2dc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a2dc5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a2dc8 push eax */
  push32((uint32_t)(EAX));
  /* 117a2dc9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a2dcc push ecx */
  push32((uint32_t)(ECX));
  /* 117a2dcd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 117a2dd0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a2dd2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a2dd4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 117a2dd7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2dda push edx */
  push32((uint32_t)(EDX));
  /* 117a2ddb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a2dde push eax */
  push32((uint32_t)(EAX));
  /* 117a2ddf call dword ptr [0x117ca328] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca328))), 0x117a2de5u);
  /* 117a2de5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117a2de8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2dec jne 0x117a2df5 */
  if (!C.zf) goto L_117a2df5;
  /* 117a2dee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a2df0 jmp 0x117a2e98 */
  goto L_117a2e98;
L_117a2df5:;
  /* 117a2df5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a2dfc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a2dff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117a2e01 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2e04 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117a2e06 call 0x1179cf40 */
  push32(0x117a2e0bu); f_1179cf40();
  /* 117a2e0b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 117a2e0e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117a2e11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117a2e14 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 117a2e17 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a2e1a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 117a2e1c push edx */
  push32((uint32_t)(EDX));
  /* 117a2e1d push 0 */
  push32((uint32_t)(0x0u));
  /* 117a2e1f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a2e22 push eax */
  push32((uint32_t)(EAX));
  /* 117a2e23 call 0x1179e450 */
  push32(0x117a2e28u); f_1179e450();
  /* 117a2e28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2e2b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 117a2e32 jmp 0x117a2e4b */
  goto L_117a2e4b;
  /* 117a2e34 mov eax, 1 */
  EAX = (0x1u);
  /* 117a2e39 ret  */
  ESPCHK(0x117a2cf0u, _esp0);
  ESP += 4; return;
  /* 117a2e3a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117a2e3d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 117a2e44 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_117a2e4b:;
  /* 117a2e4b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2e4f jne 0x117a2e55 */
  if (!C.zf) goto L_117a2e55;
  /* 117a2e51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a2e53 jmp 0x117a2e98 */
  goto L_117a2e98;
L_117a2e55:;
  /* 117a2e55 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a2e58 push ecx */
  push32((uint32_t)(ECX));
  /* 117a2e59 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a2e5c push edx */
  push32((uint32_t)(EDX));
  /* 117a2e5d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a2e60 push eax */
  push32((uint32_t)(EAX));
  /* 117a2e61 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a2e64 push ecx */
  push32((uint32_t)(ECX));
  /* 117a2e65 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a2e67 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a2e6a push edx */
  push32((uint32_t)(EDX));
  /* 117a2e6b call dword ptr [0x117ca328] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca328))), 0x117a2e71u);
  /* 117a2e71 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117a2e74 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2e78 jne 0x117a2e7e */
  if (!C.zf) goto L_117a2e7e;
  /* 117a2e7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a2e7c jmp 0x117a2e98 */
  goto L_117a2e98;
L_117a2e7e:;
  /* 117a2e7e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a2e81 push eax */
  push32((uint32_t)(EAX));
  /* 117a2e82 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a2e85 push ecx */
  push32((uint32_t)(ECX));
  /* 117a2e86 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a2e89 push edx */
  push32((uint32_t)(EDX));
  /* 117a2e8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2e8d push eax */
  push32((uint32_t)(EAX));
  /* 117a2e8e call dword ptr [0x117ca320] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca320))), 0x117a2e94u);
  /* 117a2e94 jmp 0x117a2e98 */
  goto L_117a2e98;
L_117a2e96:;
  /* 117a2e96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a2e98:;
  /* 117a2e98 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 117a2e9b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a2e9e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 117a2ea5 pop edi */
  EDI = (pop32());
  /* 117a2ea6 pop esi */
  ESI = (pop32());
  /* 117a2ea7 pop ebx */
  EBX = (pop32());
  /* 117a2ea8 mov esp, ebp */
  ESP = (EBP);
  /* 117a2eaa pop ebp */
  EBP = (pop32());
  /* 117a2eab ret  */
  ESPCHK(0x117a2cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012eb0 @ 0x117a2eb0 (727 bytes, 263 insns) */
void f_117a2eb0(void) {
  FTRACE(0x117a2eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a2eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a2eb1 mov ebp, esp */
  EBP = (ESP);
  /* 117a2eb3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117a2eb5 push 0x117c2e00 */
  push32((uint32_t)(0x117c2e00u));
  /* 117a2eba push 0x117a3d08 */
  push32((uint32_t)(0x117a3d08u));
  /* 117a2ebf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 117a2ec5 push eax */
  push32((uint32_t)(EAX));
  /* 117a2ec6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 117a2ecd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2ed0 push ebx */
  push32((uint32_t)(EBX));
  /* 117a2ed1 push esi */
  push32((uint32_t)(ESI));
  /* 117a2ed2 push edi */
  push32((uint32_t)(EDI));
  /* 117a2ed3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117a2ed6 cmp dword ptr [0x117c7e8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2edd jne 0x117a2f36 */
  if (!C.zf) goto L_117a2f36;
  /* 117a2edf push 0 */
  push32((uint32_t)(0x0u));
  /* 117a2ee1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a2ee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a2ee5 push 0x117c2de8 */
  push32((uint32_t)(0x117c2de8u));
  /* 117a2eea push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117a2eef push 0 */
  push32((uint32_t)(0x0u));
  /* 117a2ef1 call dword ptr [0x117ca318] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca318))), 0x117a2ef7u);
  /* 117a2ef7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a2ef9 je 0x117a2f07 */
  if (C.zf) goto L_117a2f07;
  /* 117a2efb mov dword ptr [0x117c7e8c], 1 */
  w32((uint32_t)(0x117c7e8c), (0x1u));
  /* 117a2f05 jmp 0x117a2f36 */
  goto L_117a2f36;
L_117a2f07:;
  /* 117a2f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a2f09 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a2f0b push 1 */
  push32((uint32_t)(0x1u));
  /* 117a2f0d push 0x117c2de4 */
  push32((uint32_t)(0x117c2de4u));
  /* 117a2f12 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117a2f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a2f19 call dword ptr [0x117ca31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca31c))), 0x117a2f1fu);
  /* 117a2f1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a2f21 je 0x117a2f2f */
  if (C.zf) goto L_117a2f2f;
  /* 117a2f23 mov dword ptr [0x117c7e8c], 2 */
  w32((uint32_t)(0x117c7e8c), (0x2u));
  /* 117a2f2d jmp 0x117a2f36 */
  goto L_117a2f36;
L_117a2f2f:;
  /* 117a2f2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a2f31 jmp 0x117a31a1 */
  goto L_117a31a1;
L_117a2f36:;
  /* 117a2f36 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2f3a jle 0x117a2f4f */
  if ((C.zf||C.sf!=C.of)) goto L_117a2f4f;
  /* 117a2f3c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a2f3f push eax */
  push32((uint32_t)(EAX));
  /* 117a2f40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a2f43 push ecx */
  push32((uint32_t)(ECX));
  /* 117a2f44 call 0x117a31c0 */
  push32(0x117a2f49u); f_117a31c0();
  /* 117a2f49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2f4c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_117a2f4f:;
  /* 117a2f4f cmp dword ptr [0x117c7e8c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e8c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2f56 jne 0x117a2f7b */
  if (!C.zf) goto L_117a2f7b;
  /* 117a2f58 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 117a2f5b push edx */
  push32((uint32_t)(EDX));
  /* 117a2f5c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a2f5f push eax */
  push32((uint32_t)(EAX));
  /* 117a2f60 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a2f63 push ecx */
  push32((uint32_t)(ECX));
  /* 117a2f64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a2f67 push edx */
  push32((uint32_t)(EDX));
  /* 117a2f68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a2f6b push eax */
  push32((uint32_t)(EAX));
  /* 117a2f6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a2f6f push ecx */
  push32((uint32_t)(ECX));
  /* 117a2f70 call dword ptr [0x117ca31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca31c))), 0x117a2f76u);
  /* 117a2f76 jmp 0x117a31a1 */
  goto L_117a31a1;
L_117a2f7b:;
  /* 117a2f7b cmp dword ptr [0x117c7e8c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e8c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2f82 jne 0x117a319f */
  if (!C.zf) goto L_117a319f;
  /* 117a2f88 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2f8c jne 0x117a2f97 */
  if (!C.zf) goto L_117a2f97;
  /* 117a2f8e mov edx, dword ptr [0x117c7e80] */
  EDX = (r32((uint32_t)(0x117c7e80)));
  /* 117a2f94 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_117a2f97:;
  /* 117a2f97 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a2f99 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a2f9b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a2f9e push eax */
  push32((uint32_t)(EAX));
  /* 117a2f9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a2fa2 push ecx */
  push32((uint32_t)(ECX));
  /* 117a2fa3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 117a2fa6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a2fa8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a2faa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 117a2fad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2fb0 push edx */
  push32((uint32_t)(EDX));
  /* 117a2fb1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 117a2fb4 push eax */
  push32((uint32_t)(EAX));
  /* 117a2fb5 call dword ptr [0x117ca328] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca328))), 0x117a2fbbu);
  /* 117a2fbb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 117a2fbe cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a2fc2 jne 0x117a2fcb */
  if (!C.zf) goto L_117a2fcb;
  /* 117a2fc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a2fc6 jmp 0x117a31a1 */
  goto L_117a31a1;
L_117a2fcb:;
  /* 117a2fcb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a2fd2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117a2fd5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117a2fd7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a2fda and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117a2fdc call 0x1179cf40 */
  push32(0x117a2fe1u); f_1179cf40();
  /* 117a2fe1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 117a2fe4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117a2fe7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117a2fea mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 117a2fed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 117a2ff4 jmp 0x117a300d */
  goto L_117a300d;
  /* 117a2ff6 mov eax, 1 */
  EAX = (0x1u);
  /* 117a2ffb ret  */
  ESPCHK(0x117a2eb0u, _esp0);
  ESP += 4; return;
  /* 117a2ffc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117a2fff mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 117a3006 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_117a300d:;
  /* 117a300d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3011 jne 0x117a301a */
  if (!C.zf) goto L_117a301a;
  /* 117a3013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a3015 jmp 0x117a31a1 */
  goto L_117a31a1;
L_117a301a:;
  /* 117a301a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117a301d push edx */
  push32((uint32_t)(EDX));
  /* 117a301e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a3021 push eax */
  push32((uint32_t)(EAX));
  /* 117a3022 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a3025 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3026 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a3029 push edx */
  push32((uint32_t)(EDX));
  /* 117a302a push 1 */
  push32((uint32_t)(0x1u));
  /* 117a302c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 117a302f push eax */
  push32((uint32_t)(EAX));
  /* 117a3030 call dword ptr [0x117ca328] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca328))), 0x117a3036u);
  /* 117a3036 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a3038 jne 0x117a3041 */
  if (!C.zf) goto L_117a3041;
  /* 117a303a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a303c jmp 0x117a31a1 */
  goto L_117a31a1;
L_117a3041:;
  /* 117a3041 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3043 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3045 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117a3048 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3049 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a304c push edx */
  push32((uint32_t)(EDX));
  /* 117a304d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a3050 push eax */
  push32((uint32_t)(EAX));
  /* 117a3051 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3054 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3055 call dword ptr [0x117ca318] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca318))), 0x117a305bu);
  /* 117a305b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117a305e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3062 jne 0x117a306b */
  if (!C.zf) goto L_117a306b;
  /* 117a3064 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a3066 jmp 0x117a31a1 */
  goto L_117a31a1;
L_117a306b:;
  /* 117a306b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a306e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 117a3074 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a3076 je 0x117a30bb */
  if (C.zf) goto L_117a30bb;
  /* 117a3078 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a307c je 0x117a30b6 */
  if (C.zf) goto L_117a30b6;
  /* 117a307e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a3081 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3084 jle 0x117a308d */
  if ((C.zf||C.sf!=C.of)) goto L_117a308d;
  /* 117a3086 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a3088 jmp 0x117a31a1 */
  goto L_117a31a1;
L_117a308d:;
  /* 117a308d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 117a3090 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3091 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a3094 push edx */
  push32((uint32_t)(EDX));
  /* 117a3095 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117a3098 push eax */
  push32((uint32_t)(EAX));
  /* 117a3099 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a309c push ecx */
  push32((uint32_t)(ECX));
  /* 117a309d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a30a0 push edx */
  push32((uint32_t)(EDX));
  /* 117a30a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a30a4 push eax */
  push32((uint32_t)(EAX));
  /* 117a30a5 call dword ptr [0x117ca318] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca318))), 0x117a30abu);
  /* 117a30ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a30ad jne 0x117a30b6 */
  if (!C.zf) goto L_117a30b6;
  /* 117a30af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a30b1 jmp 0x117a31a1 */
  goto L_117a31a1;
L_117a30b6:;
  /* 117a30b6 jmp 0x117a319a */
  goto L_117a319a;
L_117a30bb:;
  /* 117a30bb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a30be mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 117a30c1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117a30c8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117a30cb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117a30cd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a30d0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117a30d2 call 0x1179cf40 */
  push32(0x117a30d7u); f_1179cf40();
  /* 117a30d7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 117a30da mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117a30dd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 117a30e0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 117a30e3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 117a30ea jmp 0x117a3103 */
  goto L_117a3103;
  /* 117a30ec mov eax, 1 */
  EAX = (0x1u);
  /* 117a30f1 ret  */
  ESPCHK(0x117a2eb0u, _esp0);
  ESP += 4; return;
  /* 117a30f2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117a30f5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 117a30fc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_117a3103:;
  /* 117a3103 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3107 jne 0x117a3110 */
  if (!C.zf) goto L_117a3110;
  /* 117a3109 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a310b jmp 0x117a31a1 */
  goto L_117a31a1;
L_117a3110:;
  /* 117a3110 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117a3113 push eax */
  push32((uint32_t)(EAX));
  /* 117a3114 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a3117 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3118 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117a311b push edx */
  push32((uint32_t)(EDX));
  /* 117a311c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a311f push eax */
  push32((uint32_t)(EAX));
  /* 117a3120 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a3123 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3124 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3127 push edx */
  push32((uint32_t)(EDX));
  /* 117a3128 call dword ptr [0x117ca318] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca318))), 0x117a312eu);
  /* 117a312e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a3130 jne 0x117a3136 */
  if (!C.zf) goto L_117a3136;
  /* 117a3132 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a3134 jmp 0x117a31a1 */
  goto L_117a31a1;
L_117a3136:;
  /* 117a3136 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a313a jne 0x117a316a */
  if (!C.zf) goto L_117a316a;
  /* 117a313c push 0 */
  push32((uint32_t)(0x0u));
  /* 117a313e push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3140 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3142 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3144 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117a3147 push eax */
  push32((uint32_t)(EAX));
  /* 117a3148 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a314b push ecx */
  push32((uint32_t)(ECX));
  /* 117a314c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 117a3151 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 117a3154 push edx */
  push32((uint32_t)(EDX));
  /* 117a3155 call dword ptr [0x117ca374] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca374))), 0x117a315bu);
  /* 117a315b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117a315e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3162 jne 0x117a3168 */
  if (!C.zf) goto L_117a3168;
  /* 117a3164 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a3166 jmp 0x117a31a1 */
  goto L_117a31a1;
L_117a3168:;
  /* 117a3168 jmp 0x117a319a */
  goto L_117a319a;
L_117a316a:;
  /* 117a316a push 0 */
  push32((uint32_t)(0x0u));
  /* 117a316c push 0 */
  push32((uint32_t)(0x0u));
  /* 117a316e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 117a3171 push eax */
  push32((uint32_t)(EAX));
  /* 117a3172 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a3175 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3176 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117a3179 push edx */
  push32((uint32_t)(EDX));
  /* 117a317a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a317d push eax */
  push32((uint32_t)(EAX));
  /* 117a317e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 117a3183 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 117a3186 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3187 call dword ptr [0x117ca374] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca374))), 0x117a318du);
  /* 117a318d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117a3190 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3194 jne 0x117a319a */
  if (!C.zf) goto L_117a319a;
  /* 117a3196 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a3198 jmp 0x117a31a1 */
  goto L_117a31a1;
L_117a319a:;
  /* 117a319a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a319d jmp 0x117a31a1 */
  goto L_117a31a1;
L_117a319f:;
  /* 117a319f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a31a1:;
  /* 117a31a1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 117a31a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a31a7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 117a31ae pop edi */
  EDI = (pop32());
  /* 117a31af pop esi */
  ESI = (pop32());
  /* 117a31b0 pop ebx */
  EBX = (pop32());
  /* 117a31b1 mov esp, ebp */
  ESP = (EBP);
  /* 117a31b3 pop ebp */
  EBP = (pop32());
  /* 117a31b4 ret  */
  ESPCHK(0x117a2eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100131c0 @ 0x117a31c0 (80 bytes, 32 insns) */
void f_117a31c0(void) {
  FTRACE(0x117a31c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a31c0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a31c1 mov ebp, esp */
  EBP = (ESP);
  /* 117a31c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a31c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a31c9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a31cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a31cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117a31d2:;
  /* 117a31d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a31d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a31d8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a31db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a31de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a31e0 je 0x117a31f7 */
  if (C.zf) goto L_117a31f7;
  /* 117a31e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a31e5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117a31e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a31ea je 0x117a31f7 */
  if (C.zf) goto L_117a31f7;
  /* 117a31ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a31ef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a31f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a31f5 jmp 0x117a31d2 */
  goto L_117a31d2;
L_117a31f7:;
  /* 117a31f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a31fa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117a31fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a31ff jne 0x117a3209 */
  if (!C.zf) goto L_117a3209;
  /* 117a3201 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3204 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a3207 jmp 0x117a320c */
  goto L_117a320c;
L_117a3209:;
  /* 117a3209 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_117a320c:;
  /* 117a320c mov esp, ebp */
  ESP = (EBP);
  /* 117a320e pop ebp */
  EBP = (pop32());
  /* 117a320f ret  */
  ESPCHK(0x117a31c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013210 @ 0x117a3210 (130 bytes, 43 insns) */
void f_117a3210(void) {
  FTRACE(0x117a3210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a3210 push ebp */
  push32((uint32_t)(EBP));
  /* 117a3211 mov ebp, esp */
  EBP = (ESP);
  /* 117a3213 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3217 cmp eax, dword ptr [0x117c96dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c96dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a321d jae 0x117a3241 */
  if (!C.cf) goto L_117a3241;
  /* 117a321f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3222 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117a3225 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3228 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117a322b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a322e mov eax, dword ptr [ecx*4 + 0x117c95a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117c95a0)));
  /* 117a3235 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 117a323a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117a323d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a323f jne 0x117a325c */
  if (!C.zf) goto L_117a325c;
L_117a3241:;
  /* 117a3241 call 0x117a25b0 */
  push32(0x117a3246u); f_117a25b0();
  /* 117a3246 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 117a324c call 0x117a25c0 */
  push32(0x117a3251u); f_117a25c0();
  /* 117a3251 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117a3257 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a325a jmp 0x117a328e */
  goto L_117a328e;
L_117a325c:;
  /* 117a325c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a325f push edx */
  push32((uint32_t)(EDX));
  /* 117a3260 call 0x117a42f0 */
  push32(0x117a3265u); f_117a42f0();
  /* 117a3265 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3268 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a326b push eax */
  push32((uint32_t)(EAX));
  /* 117a326c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a326f push ecx */
  push32((uint32_t)(ECX));
  /* 117a3270 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3273 push edx */
  push32((uint32_t)(EDX));
  /* 117a3274 call 0x117a32a0 */
  push32(0x117a3279u); f_117a32a0();
  /* 117a3279 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a327c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a327f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3282 push eax */
  push32((uint32_t)(EAX));
  /* 117a3283 call 0x117a4380 */
  push32(0x117a3288u); f_117a4380();
  /* 117a3288 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a328b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117a328e:;
  /* 117a328e mov esp, ebp */
  ESP = (EBP);
  /* 117a3290 pop ebp */
  EBP = (pop32());
  /* 117a3291 ret  */
  ESPCHK(0x117a3210u, _esp0);
  ESP += 4; return;
}

/* FUN_100132a0 @ 0x117a32a0 (178 bytes, 56 insns) */
void f_117a32a0(void) {
  FTRACE(0x117a32a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a32a0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a32a1 mov ebp, esp */
  EBP = (ESP);
  /* 117a32a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a32a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a32a9 push eax */
  push32((uint32_t)(EAX));
  /* 117a32aa call 0x117a4170 */
  push32(0x117a32afu); f_117a4170();
  /* 117a32af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a32b2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117a32b5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a32b9 jne 0x117a32ce */
  if (!C.zf) goto L_117a32ce;
  /* 117a32bb call 0x117a25b0 */
  push32(0x117a32c0u); f_117a25b0();
  /* 117a32c0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 117a32c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a32c9 jmp 0x117a334e */
  goto L_117a334e;
L_117a32ce:;
  /* 117a32ce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a32d1 push ecx */
  push32((uint32_t)(ECX));
  /* 117a32d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a32d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a32d7 push edx */
  push32((uint32_t)(EDX));
  /* 117a32d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a32db push eax */
  push32((uint32_t)(EAX));
  /* 117a32dc call dword ptr [0x117ca314] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca314))), 0x117a32e2u);
  /* 117a32e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a32e5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a32e9 jne 0x117a32f6 */
  if (!C.zf) goto L_117a32f6;
  /* 117a32eb call dword ptr [0x117ca3d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3d8))), 0x117a32f1u);
  /* 117a32f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a32f4 jmp 0x117a32fd */
  goto L_117a32fd;
L_117a32f6:;
  /* 117a32f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_117a32fd:;
  /* 117a32fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3301 je 0x117a3314 */
  if (C.zf) goto L_117a3314;
  /* 117a3303 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3306 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3307 call 0x117a2510 */
  push32(0x117a330cu); f_117a2510();
  /* 117a330c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a330f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a3312 jmp 0x117a334e */
  goto L_117a334e;
L_117a3314:;
  /* 117a3314 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3317 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 117a331a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a331d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 117a3320 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a3323 mov ecx, dword ptr [edx*4 + 0x117c95a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x117c95a0)));
  /* 117a332a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 117a332e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 117a3331 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3334 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117a3337 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a333a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117a333d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a3340 mov eax, dword ptr [eax*4 + 0x117c95a0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x117c95a0)));
  /* 117a3347 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 117a334b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_117a334e:;
  /* 117a334e mov esp, ebp */
  ESP = (EBP);
  /* 117a3350 pop ebp */
  EBP = (pop32());
  /* 117a3351 ret  */
  ESPCHK(0x117a32a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013360 @ 0x117a3360 (130 bytes, 43 insns) */
void f_117a3360(void) {
  FTRACE(0x117a3360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a3360 push ebp */
  push32((uint32_t)(EBP));
  /* 117a3361 mov ebp, esp */
  EBP = (ESP);
  /* 117a3363 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3367 cmp eax, dword ptr [0x117c96dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c96dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a336d jae 0x117a3391 */
  if (!C.cf) goto L_117a3391;
  /* 117a336f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3372 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117a3375 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3378 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117a337b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a337e mov eax, dword ptr [ecx*4 + 0x117c95a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117c95a0)));
  /* 117a3385 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 117a338a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117a338d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a338f jne 0x117a33ac */
  if (!C.zf) goto L_117a33ac;
L_117a3391:;
  /* 117a3391 call 0x117a25b0 */
  push32(0x117a3396u); f_117a25b0();
  /* 117a3396 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 117a339c call 0x117a25c0 */
  push32(0x117a33a1u); f_117a25c0();
  /* 117a33a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117a33a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a33aa jmp 0x117a33de */
  goto L_117a33de;
L_117a33ac:;
  /* 117a33ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a33af push edx */
  push32((uint32_t)(EDX));
  /* 117a33b0 call 0x117a42f0 */
  push32(0x117a33b5u); f_117a42f0();
  /* 117a33b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a33b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a33bb push eax */
  push32((uint32_t)(EAX));
  /* 117a33bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a33bf push ecx */
  push32((uint32_t)(ECX));
  /* 117a33c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a33c3 push edx */
  push32((uint32_t)(EDX));
  /* 117a33c4 call 0x117a33f0 */
  push32(0x117a33c9u); f_117a33f0();
  /* 117a33c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a33cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a33cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a33d2 push eax */
  push32((uint32_t)(EAX));
  /* 117a33d3 call 0x117a4380 */
  push32(0x117a33d8u); f_117a4380();
  /* 117a33d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a33db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117a33de:;
  /* 117a33de mov esp, ebp */
  ESP = (EBP);
  /* 117a33e0 pop ebp */
  EBP = (pop32());
  /* 117a33e1 ret  */
  ESPCHK(0x117a3360u, _esp0);
  ESP += 4; return;
}

/* FUN_100133f0 @ 0x117a33f0 (627 bytes, 182 insns) */
void f_117a33f0(void) {
  FTRACE(0x117a33f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a33f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a33f1 mov ebp, esp */
  EBP = (ESP);
  /* 117a33f3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a33f9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 117a3400 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a3403 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 117a3409 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a340d jne 0x117a3416 */
  if (!C.zf) goto L_117a3416;
  /* 117a340f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a3411 jmp 0x117a365f */
  goto L_117a365f;
L_117a3416:;
  /* 117a3416 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3419 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117a341c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a341f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117a3422 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a3425 mov eax, dword ptr [ecx*4 + 0x117c95a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117c95a0)));
  /* 117a342c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 117a3431 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 117a3434 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a3436 je 0x117a3448 */
  if (C.zf) goto L_117a3448;
  /* 117a3438 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a343a push 0 */
  push32((uint32_t)(0x0u));
  /* 117a343c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a343f push edx */
  push32((uint32_t)(EDX));
  /* 117a3440 call 0x117a32a0 */
  push32(0x117a3445u); f_117a32a0();
  /* 117a3445 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a3448:;
  /* 117a3448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a344b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117a344e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3451 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117a3454 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a3457 mov edx, dword ptr [eax*4 + 0x117c95a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117c95a0)));
  /* 117a345e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 117a3463 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 117a3468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a346a je 0x117a357c */
  if (C.zf) goto L_117a357c;
  /* 117a3470 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a3473 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a3476 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_117a347d:;
  /* 117a347d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3480 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a3483 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3486 jae 0x117a357a */
  if (!C.cf) goto L_117a357a;
  /* 117a348c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 117a3492 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117a3495:;
  /* 117a3495 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a3498 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 117a349e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a34a0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a34a6 jge 0x117a3507 */
  if ((C.sf==C.of)) goto L_117a3507;
  /* 117a34a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a34ab sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a34ae cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a34b1 jae 0x117a3507 */
  if (!C.cf) goto L_117a3507;
  /* 117a34b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a34b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117a34b8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 117a34be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a34c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a34c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a34c7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 117a34ce cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a34d1 jne 0x117a34f1 */
  if (!C.zf) goto L_117a34f1;
  /* 117a34d3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 117a34d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a34dc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 117a34e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a34e5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 117a34e8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a34eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a34ee mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_117a34f1:;
  /* 117a34f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a34f4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 117a34fa mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 117a34fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a34ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3502 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a3505 jmp 0x117a3495 */
  goto L_117a3495;
L_117a3507:;
  /* 117a3507 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3509 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 117a350f push edx */
  push32((uint32_t)(EDX));
  /* 117a3510 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a3513 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 117a3519 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a351b push eax */
  push32((uint32_t)(EAX));
  /* 117a351c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 117a3522 push edx */
  push32((uint32_t)(EDX));
  /* 117a3523 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3526 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117a3529 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a352c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117a352f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a3532 mov edx, dword ptr [eax*4 + 0x117c95a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117c95a0)));
  /* 117a3539 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 117a353c push eax */
  push32((uint32_t)(EAX));
  /* 117a353d call dword ptr [0x117ca3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3a4))), 0x117a3543u);
  /* 117a3543 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a3545 je 0x117a356a */
  if (C.zf) goto L_117a356a;
  /* 117a3547 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a354a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3550 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117a3553 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a3556 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 117a355c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a355e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3564 jge 0x117a3568 */
  if ((C.sf==C.of)) goto L_117a3568;
  /* 117a3566 jmp 0x117a357a */
  goto L_117a357a;
L_117a3568:;
  /* 117a3568 jmp 0x117a3575 */
  goto L_117a3575;
L_117a356a:;
  /* 117a356a call dword ptr [0x117ca3d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3d8))), 0x117a3570u);
  /* 117a3570 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117a3573 jmp 0x117a357a */
  goto L_117a357a;
L_117a3575:;
  /* 117a3575 jmp 0x117a347d */
  goto L_117a347d;
L_117a357a:;
  /* 117a357a jmp 0x117a35cc */
  goto L_117a35cc;
L_117a357c:;
  /* 117a357c push 0 */
  push32((uint32_t)(0x0u));
  /* 117a357e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 117a3584 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3585 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a3588 push edx */
  push32((uint32_t)(EDX));
  /* 117a3589 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a358c push eax */
  push32((uint32_t)(EAX));
  /* 117a358d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3590 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117a3593 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3596 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117a3599 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a359c mov eax, dword ptr [ecx*4 + 0x117c95a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117c95a0)));
  /* 117a35a3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 117a35a6 push ecx */
  push32((uint32_t)(ECX));
  /* 117a35a7 call dword ptr [0x117ca3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3a4))), 0x117a35adu);
  /* 117a35ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a35af je 0x117a35c3 */
  if (C.zf) goto L_117a35c3;
  /* 117a35b1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117a35b8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 117a35be mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 117a35c1 jmp 0x117a35cc */
  goto L_117a35cc;
L_117a35c3:;
  /* 117a35c3 call dword ptr [0x117ca3d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3d8))), 0x117a35c9u);
  /* 117a35c9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_117a35cc:;
  /* 117a35cc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a35d0 jne 0x117a3656 */
  if (!C.zf) goto L_117a3656;
  /* 117a35d6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a35da je 0x117a360a */
  if (C.zf) goto L_117a360a;
  /* 117a35dc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a35e0 jne 0x117a35f9 */
  if (!C.zf) goto L_117a35f9;
  /* 117a35e2 call 0x117a25b0 */
  push32(0x117a35e7u); f_117a25b0();
  /* 117a35e7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 117a35ed call 0x117a25c0 */
  push32(0x117a35f2u); f_117a25c0();
  /* 117a35f2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a35f5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117a35f7 jmp 0x117a3605 */
  goto L_117a3605;
L_117a35f9:;
  /* 117a35f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a35fc push edx */
  push32((uint32_t)(EDX));
  /* 117a35fd call 0x117a2510 */
  push32(0x117a3602u); f_117a2510();
  /* 117a3602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a3605:;
  /* 117a3605 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a3608 jmp 0x117a365f */
  goto L_117a365f;
L_117a360a:;
  /* 117a360a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a360d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117a3610 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3613 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117a3616 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a3619 mov edx, dword ptr [eax*4 + 0x117c95a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117c95a0)));
  /* 117a3620 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 117a3625 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 117a3628 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a362a je 0x117a363b */
  if (C.zf) goto L_117a363b;
  /* 117a362c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a362f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117a3632 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3635 jne 0x117a363b */
  if (!C.zf) goto L_117a363b;
  /* 117a3637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a3639 jmp 0x117a365f */
  goto L_117a365f;
L_117a363b:;
  /* 117a363b call 0x117a25b0 */
  push32(0x117a3640u); f_117a25b0();
  /* 117a3640 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 117a3646 call 0x117a25c0 */
  push32(0x117a364bu); f_117a25c0();
  /* 117a364b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117a3651 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a3654 jmp 0x117a365f */
  goto L_117a365f;
L_117a3656:;
  /* 117a3656 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a3659 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_117a365f:;
  /* 117a365f mov esp, ebp */
  ESP = (EBP);
  /* 117a3661 pop ebp */
  EBP = (pop32());
  /* 117a3662 ret  */
  ESPCHK(0x117a33f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013670 @ 0x117a3670 (199 bytes, 68 insns) */
void f_117a3670(void) {
  FTRACE(0x117a3670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a3670 push ebp */
  push32((uint32_t)(EBP));
  /* 117a3671 mov ebp, esp */
  EBP = (ESP);
  /* 117a3673 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3674 push ebx */
  push32((uint32_t)(EBX));
  /* 117a3675 push esi */
  push32((uint32_t)(ESI));
  /* 117a3676 push edi */
  push32((uint32_t)(EDI));
L_117a3677:;
  /* 117a3677 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a367b jne 0x117a369b */
  if (!C.zf) goto L_117a369b;
  /* 117a367d push 0x117c2d48 */
  push32((uint32_t)(0x117c2d48u));
  /* 117a3682 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3684 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 117a3686 push 0x117c2e18 */
  push32((uint32_t)(0x117c2e18u));
  /* 117a368b push 2 */
  push32((uint32_t)(0x2u));
  /* 117a368d call 0x11798d70 */
  push32(0x117a3692u); f_11798d70();
  /* 117a3692 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3695 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3698 jne 0x117a369b */
  if (!C.zf) goto L_117a369b;
  /* 117a369a int3  */
  x86_unimpl("int3 @ 0x117a369a");
L_117a369b:;
  /* 117a369b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a369d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a369f jne 0x117a3677 */
  if (!C.zf) goto L_117a3677;
  /* 117a36a1 mov ecx, dword ptr [0x117c7e90] */
  ECX = (r32((uint32_t)(0x117c7e90)));
  /* 117a36a7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a36aa mov dword ptr [0x117c7e90], ecx */
  w32((uint32_t)(0x117c7e90), (ECX));
  /* 117a36b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a36b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a36b6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 117a36b8 push 0x117c2e18 */
  push32((uint32_t)(0x117c2e18u));
  /* 117a36bd push 2 */
  push32((uint32_t)(0x2u));
  /* 117a36bf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 117a36c4 call 0x11799da0 */
  push32(0x117a36c9u); f_11799da0();
  /* 117a36c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a36cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a36cf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 117a36d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a36d5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a36d9 je 0x117a36f6 */
  if (C.zf) goto L_117a36f6;
  /* 117a36db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a36de mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 117a36e1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 117a36e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a36e7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 117a36ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a36ed mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 117a36f4 jmp 0x117a371b */
  goto L_117a371b;
L_117a36f6:;
  /* 117a36f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a36f9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117a36fc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 117a36ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3702 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 117a3705 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3708 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a370b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a370e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 117a3711 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3714 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_117a371b:;
  /* 117a371b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a371e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3721 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117a3724 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117a3726 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3729 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 117a3730 pop edi */
  EDI = (pop32());
  /* 117a3731 pop esi */
  ESI = (pop32());
  /* 117a3732 pop ebx */
  EBX = (pop32());
  /* 117a3733 mov esp, ebp */
  ESP = (EBP);
  /* 117a3735 pop ebp */
  EBP = (pop32());
  /* 117a3736 ret  */
  ESPCHK(0x117a3670u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x117a3740 (50 bytes, 17 insns) */
void f_117a3740(void) {
  FTRACE(0x117a3740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a3740 push ebp */
  push32((uint32_t)(EBP));
  /* 117a3741 mov ebp, esp */
  EBP = (ESP);
  /* 117a3743 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3746 cmp eax, dword ptr [0x117c96dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c96dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a374c jb 0x117a3752 */
  if (C.cf) goto L_117a3752;
  /* 117a374e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a3750 jmp 0x117a3770 */
  goto L_117a3770;
L_117a3752:;
  /* 117a3752 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3755 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117a3758 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a375b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117a375e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a3761 mov eax, dword ptr [ecx*4 + 0x117c95a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117c95a0)));
  /* 117a3768 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 117a376d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_117a3770:;
  /* 117a3770 pop ebp */
  EBP = (pop32());
  /* 117a3771 ret  */
  ESPCHK(0x117a3740u, _esp0);
  ESP += 4; return;
}

/* FUN_10013780 @ 0x117a3780 (300 bytes, 80 insns) */
void f_117a3780(void) {
  FTRACE(0x117a3780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a3780 push ebp */
  push32((uint32_t)(EBP));
  /* 117a3781 mov ebp, esp */
  EBP = (ESP);
  /* 117a3783 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3784 cmp dword ptr [0x117c92a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c92a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a378b jne 0x117a3799 */
  if (!C.zf) goto L_117a3799;
  /* 117a378d mov dword ptr [0x117c92a0], 0x200 */
  w32((uint32_t)(0x117c92a0), (0x200u));
  /* 117a3797 jmp 0x117a37ac */
  goto L_117a37ac;
L_117a3799:;
  /* 117a3799 cmp dword ptr [0x117c92a0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x117c92a0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a37a0 jge 0x117a37ac */
  if ((C.sf==C.of)) goto L_117a37ac;
  /* 117a37a2 mov dword ptr [0x117c92a0], 0x14 */
  w32((uint32_t)(0x117c92a0), (0x14u));
L_117a37ac:;
  /* 117a37ac push 0x83 */
  push32((uint32_t)(0x83u));
  /* 117a37b1 push 0x117c2e24 */
  push32((uint32_t)(0x117c2e24u));
  /* 117a37b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a37b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 117a37ba mov eax, dword ptr [0x117c92a0] */
  EAX = (r32((uint32_t)(0x117c92a0)));
  /* 117a37bf push eax */
  push32((uint32_t)(EAX));
  /* 117a37c0 call 0x1179a1b0 */
  push32(0x117a37c5u); f_1179a1b0();
  /* 117a37c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a37c8 mov dword ptr [0x117c7f48], eax */
  w32((uint32_t)(0x117c7f48), (EAX));
  /* 117a37cd cmp dword ptr [0x117c7f48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a37d4 jne 0x117a3815 */
  if (!C.zf) goto L_117a3815;
  /* 117a37d6 mov dword ptr [0x117c92a0], 0x14 */
  w32((uint32_t)(0x117c92a0), (0x14u));
  /* 117a37e0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 117a37e5 push 0x117c2e24 */
  push32((uint32_t)(0x117c2e24u));
  /* 117a37ea push 2 */
  push32((uint32_t)(0x2u));
  /* 117a37ec push 4 */
  push32((uint32_t)(0x4u));
  /* 117a37ee mov ecx, dword ptr [0x117c92a0] */
  ECX = (r32((uint32_t)(0x117c92a0)));
  /* 117a37f4 push ecx */
  push32((uint32_t)(ECX));
  /* 117a37f5 call 0x1179a1b0 */
  push32(0x117a37fau); f_1179a1b0();
  /* 117a37fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a37fd mov dword ptr [0x117c7f48], eax */
  w32((uint32_t)(0x117c7f48), (EAX));
  /* 117a3802 cmp dword ptr [0x117c7f48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3809 jne 0x117a3815 */
  if (!C.zf) goto L_117a3815;
  /* 117a380b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 117a380d call 0x11798c20 */
  push32(0x117a3812u); f_11798c20();
  /* 117a3812 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a3815:;
  /* 117a3815 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a381c jmp 0x117a3827 */
  goto L_117a3827;
L_117a381e:;
  /* 117a381e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3821 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3824 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117a3827:;
  /* 117a3827 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a382b jge 0x117a3846 */
  if ((C.sf==C.of)) goto L_117a3846;
  /* 117a382d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3830 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117a3833 add eax, 0x117c6240 */
  { uint32_t _a=(EAX),_b=(0x117c6240u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3838 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a383b mov edx, dword ptr [0x117c7f48] */
  EDX = (r32((uint32_t)(0x117c7f48)));
  /* 117a3841 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 117a3844 jmp 0x117a381e */
  goto L_117a381e;
L_117a3846:;
  /* 117a3846 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a384d jmp 0x117a3858 */
  goto L_117a3858;
L_117a384f:;
  /* 117a384f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3852 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3855 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117a3858:;
  /* 117a3858 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a385c jge 0x117a38a8 */
  if ((C.sf==C.of)) goto L_117a38a8;
  /* 117a385e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3861 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117a3864 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3867 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117a386a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a386d mov eax, dword ptr [ecx*4 + 0x117c95a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117c95a0)));
  /* 117a3874 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3878 je 0x117a3896 */
  if (C.zf) goto L_117a3896;
  /* 117a387a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a387d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117a3880 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3883 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117a3886 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a3889 mov eax, dword ptr [ecx*4 + 0x117c95a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117c95a0)));
  /* 117a3890 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3894 jne 0x117a38a6 */
  if (!C.zf) goto L_117a38a6;
L_117a3896:;
  /* 117a3896 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3899 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117a389c mov dword ptr [ecx + 0x117c6250], 0xffffffff */
  w32((uint32_t)(ECX + 0x117c6250), (0xffffffffu));
L_117a38a6:;
  /* 117a38a6 jmp 0x117a384f */
  goto L_117a384f;
L_117a38a8:;
  /* 117a38a8 mov esp, ebp */
  ESP = (EBP);
  /* 117a38aa pop ebp */
  EBP = (pop32());
  /* 117a38ab ret  */
  ESPCHK(0x117a3780u, _esp0);
  ESP += 4; return;
}

/* FUN_100138b0 @ 0x117a38b0 (26 bytes, 9 insns) */
void f_117a38b0(void) {
  FTRACE(0x117a38b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a38b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a38b1 mov ebp, esp */
  EBP = (ESP);
  /* 117a38b3 call 0x117a45f0 */
  push32(0x117a38b8u); f_117a45f0();
  /* 117a38b8 movsx eax, byte ptr [0x117c7bf0] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x117c7bf0))));
  /* 117a38bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a38c1 je 0x117a38c8 */
  if (C.zf) goto L_117a38c8;
  /* 117a38c3 call 0x117a43b0 */
  push32(0x117a38c8u); f_117a43b0();
L_117a38c8:;
  /* 117a38c8 pop ebp */
  EBP = (pop32());
  /* 117a38c9 ret  */
  ESPCHK(0x117a38b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100138d0 @ 0x117a38d0 (61 bytes, 20 insns) */
void f_117a38d0(void) {
  FTRACE(0x117a38d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a38d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a38d1 mov ebp, esp */
  EBP = (ESP);
  /* 117a38d3 cmp dword ptr [ebp + 8], 0x117c6240 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x117c6240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a38da jb 0x117a38fe */
  if (C.cf) goto L_117a38fe;
  /* 117a38dc cmp dword ptr [ebp + 8], 0x117c64a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x117c64a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a38e3 ja 0x117a38fe */
  if ((!C.cf&&!C.zf)) goto L_117a38fe;
  /* 117a38e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a38e8 sub eax, 0x117c6240 */
  { uint32_t _a=(EAX),_b=(0x117c6240u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a38ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117a38f0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a38f3 push eax */
  push32((uint32_t)(EAX));
  /* 117a38f4 call 0x1179d7a0 */
  push32(0x117a38f9u); f_1179d7a0();
  /* 117a38f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a38fc jmp 0x117a390b */
  goto L_117a390b;
L_117a38fe:;
  /* 117a38fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3901 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3904 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3905 call dword ptr [0x117ca350] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca350))), 0x117a390bu);
L_117a390b:;
  /* 117a390b pop ebp */
  EBP = (pop32());
  /* 117a390c ret  */
  ESPCHK(0x117a38d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013910 @ 0x117a3910 (41 bytes, 16 insns) */
void f_117a3910(void) {
  FTRACE(0x117a3910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a3910 push ebp */
  push32((uint32_t)(EBP));
  /* 117a3911 mov ebp, esp */
  EBP = (ESP);
  /* 117a3913 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3917 jge 0x117a392a */
  if ((C.sf==C.of)) goto L_117a392a;
  /* 117a3919 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a391c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a391f push eax */
  push32((uint32_t)(EAX));
  /* 117a3920 call 0x1179d7a0 */
  push32(0x117a3925u); f_1179d7a0();
  /* 117a3925 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3928 jmp 0x117a3937 */
  goto L_117a3937;
L_117a392a:;
  /* 117a392a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a392d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3930 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3931 call dword ptr [0x117ca350] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca350))), 0x117a3937u);
L_117a3937:;
  /* 117a3937 pop ebp */
  EBP = (pop32());
  /* 117a3938 ret  */
  ESPCHK(0x117a3910u, _esp0);
  ESP += 4; return;
}

/* FUN_10013940 @ 0x117a3940 (61 bytes, 20 insns) */
void f_117a3940(void) {
  FTRACE(0x117a3940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a3940 push ebp */
  push32((uint32_t)(EBP));
  /* 117a3941 mov ebp, esp */
  EBP = (ESP);
  /* 117a3943 cmp dword ptr [ebp + 8], 0x117c6240 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x117c6240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a394a jb 0x117a396e */
  if (C.cf) goto L_117a396e;
  /* 117a394c cmp dword ptr [ebp + 8], 0x117c64a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x117c64a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3953 ja 0x117a396e */
  if ((!C.cf&&!C.zf)) goto L_117a396e;
  /* 117a3955 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3958 sub eax, 0x117c6240 */
  { uint32_t _a=(EAX),_b=(0x117c6240u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a395d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117a3960 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3963 push eax */
  push32((uint32_t)(EAX));
  /* 117a3964 call 0x1179d840 */
  push32(0x117a3969u); f_1179d840();
  /* 117a3969 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a396c jmp 0x117a397b */
  goto L_117a397b;
L_117a396e:;
  /* 117a396e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3971 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3974 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3975 call dword ptr [0x117ca34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca34c))), 0x117a397bu);
L_117a397b:;
  /* 117a397b pop ebp */
  EBP = (pop32());
  /* 117a397c ret  */
  ESPCHK(0x117a3940u, _esp0);
  ESP += 4; return;
}

/* FUN_10013980 @ 0x117a3980 (41 bytes, 16 insns) */
void f_117a3980(void) {
  FTRACE(0x117a3980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a3980 push ebp */
  push32((uint32_t)(EBP));
  /* 117a3981 mov ebp, esp */
  EBP = (ESP);
  /* 117a3983 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3987 jge 0x117a399a */
  if ((C.sf==C.of)) goto L_117a399a;
  /* 117a3989 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a398c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a398f push eax */
  push32((uint32_t)(EAX));
  /* 117a3990 call 0x1179d840 */
  push32(0x117a3995u); f_1179d840();
  /* 117a3995 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3998 jmp 0x117a39a7 */
  goto L_117a39a7;
L_117a399a:;
  /* 117a399a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a399d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a39a0 push ecx */
  push32((uint32_t)(ECX));
  /* 117a39a1 call dword ptr [0x117ca34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca34c))), 0x117a39a7u);
L_117a39a7:;
  /* 117a39a7 pop ebp */
  EBP = (pop32());
  /* 117a39a8 ret  */
  ESPCHK(0x117a3980u, _esp0);
  ESP += 4; return;
}

/* FUN_100139b0 @ 0x117a39b0 (119 bytes, 34 insns) */
void f_117a39b0(void) {
  FTRACE(0x117a39b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a39b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a39b1 mov ebp, esp */
  EBP = (ESP);
  /* 117a39b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a39b6 push 0x117c7f44 */
  push32((uint32_t)(0x117c7f44u));
  /* 117a39bb call dword ptr [0x117ca3b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3b8))), 0x117a39c1u);
  /* 117a39c1 cmp dword ptr [0x117c7f34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a39c8 je 0x117a39e8 */
  if (C.zf) goto L_117a39e8;
  /* 117a39ca push 0x117c7f44 */
  push32((uint32_t)(0x117c7f44u));
  /* 117a39cf call dword ptr [0x117ca3a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3a8))), 0x117a39d5u);
  /* 117a39d5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117a39d7 call 0x1179d7a0 */
  push32(0x117a39dcu); f_1179d7a0();
  /* 117a39dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a39df mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117a39e6 jmp 0x117a39ef */
  goto L_117a39ef;
L_117a39e8:;
  /* 117a39e8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_117a39ef:;
  /* 117a39ef mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 117a39f3 push eax */
  push32((uint32_t)(EAX));
  /* 117a39f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a39f7 push ecx */
  push32((uint32_t)(ECX));
  /* 117a39f8 call 0x117a3a30 */
  push32(0x117a39fdu); f_117a3a30();
  /* 117a39fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3a00 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a3a03 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3a07 je 0x117a3a15 */
  if (C.zf) goto L_117a3a15;
  /* 117a3a09 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117a3a0b call 0x1179d840 */
  push32(0x117a3a10u); f_1179d840();
  /* 117a3a10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3a13 jmp 0x117a3a20 */
  goto L_117a3a20;
L_117a3a15:;
  /* 117a3a15 push 0x117c7f44 */
  push32((uint32_t)(0x117c7f44u));
  /* 117a3a1a call dword ptr [0x117ca3a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3a8))), 0x117a3a20u);
L_117a3a20:;
  /* 117a3a20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a3a23 mov esp, ebp */
  ESP = (EBP);
  /* 117a3a25 pop ebp */
  EBP = (pop32());
  /* 117a3a26 ret  */
  ESPCHK(0x117a39b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a30 @ 0x117a3a30 (160 bytes, 50 insns) */
void f_117a3a30(void) {
  FTRACE(0x117a3a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a3a30 push ebp */
  push32((uint32_t)(EBP));
  /* 117a3a31 mov ebp, esp */
  EBP = (ESP);
  /* 117a3a33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a3a36 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3a3a jne 0x117a3a43 */
  if (!C.zf) goto L_117a3a43;
  /* 117a3a3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a3a3e jmp 0x117a3acc */
  goto L_117a3acc;
L_117a3a43:;
  /* 117a3a43 cmp dword ptr [0x117c7e70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3a4a jne 0x117a3a7a */
  if (!C.zf) goto L_117a3a7a;
  /* 117a3a4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a3a4f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a3a54 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3a59 jle 0x117a3a6b */
  if ((C.zf||C.sf!=C.of)) goto L_117a3a6b;
  /* 117a3a5b call 0x117a25b0 */
  push32(0x117a3a60u); f_117a25b0();
  /* 117a3a60 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 117a3a66 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a3a69 jmp 0x117a3acc */
  goto L_117a3acc;
L_117a3a6b:;
  /* 117a3a6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3a6e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 117a3a71 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 117a3a73 mov eax, 1 */
  EAX = (0x1u);
  /* 117a3a78 jmp 0x117a3acc */
  goto L_117a3acc;
L_117a3a7a:;
  /* 117a3a7a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117a3a81 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 117a3a84 push eax */
  push32((uint32_t)(EAX));
  /* 117a3a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3a87 mov ecx, dword ptr [0x117c5fc4] */
  ECX = (r32((uint32_t)(0x117c5fc4)));
  /* 117a3a8d push ecx */
  push32((uint32_t)(ECX));
  /* 117a3a8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3a91 push edx */
  push32((uint32_t)(EDX));
  /* 117a3a92 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a3a94 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 117a3a97 push eax */
  push32((uint32_t)(EAX));
  /* 117a3a98 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 117a3a9d mov ecx, dword ptr [0x117c7e80] */
  ECX = (r32((uint32_t)(0x117c7e80)));
  /* 117a3aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3aa4 call dword ptr [0x117ca374] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca374))), 0x117a3aaau);
  /* 117a3aaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a3aad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3ab1 je 0x117a3ab9 */
  if (C.zf) goto L_117a3ab9;
  /* 117a3ab3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3ab7 je 0x117a3ac9 */
  if (C.zf) goto L_117a3ac9;
L_117a3ab9:;
  /* 117a3ab9 call 0x117a25b0 */
  push32(0x117a3abeu); f_117a25b0();
  /* 117a3abe mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 117a3ac4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a3ac7 jmp 0x117a3acc */
  goto L_117a3acc;
L_117a3ac9:;
  /* 117a3ac9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117a3acc:;
  /* 117a3acc mov esp, ebp */
  ESP = (EBP);
  /* 117a3ace pop ebp */
  EBP = (pop32());
  /* 117a3acf ret  */
  ESPCHK(0x117a3a30u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x117a3ad0 (52 bytes, 19 insns) */
void f_117a3ad0(void) {
  FTRACE(0x117a3ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a3ad0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117a3ad4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 117a3ad8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a3ada mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 117a3ade jne 0x117a3ae9 */
  if (!C.zf) goto L_117a3ae9;
  /* 117a3ae0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 117a3ae4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 117a3ae6 ret 0x10 */
  ESPCHK(0x117a3ad0u, _esp0);
  ESP += 20; return;
L_117a3ae9:;
  /* 117a3ae9 push ebx */
  push32((uint32_t)(EBX));
  /* 117a3aea mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 117a3aec mov ebx, eax */
  EBX = (EAX);
  /* 117a3aee mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117a3af2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 117a3af6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3af8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117a3afc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 117a3afe add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3b00 pop ebx */
  EBX = (pop32());
  /* 117a3b01 ret 0x10 */
  ESPCHK(0x117a3ad0u, _esp0);
  ESP += 20; return;
}

/* __mbsnbicoll @ 0x117a3b10 (79 bytes, 32 insns) */
void f_117a3b10(void) {
  FTRACE(0x117a3b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a3b10 push ebp */
  push32((uint32_t)(EBP));
  /* 117a3b11 mov ebp, esp */
  EBP = (ESP);
  /* 117a3b13 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3b14 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3b18 jne 0x117a3b1e */
  if (!C.zf) goto L_117a3b1e;
  /* 117a3b1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a3b1c jmp 0x117a3b5b */
  goto L_117a3b5b;
L_117a3b1e:;
  /* 117a3b1e mov eax, dword ptr [0x117c92a4] */
  EAX = (r32((uint32_t)(0x117c92a4)));
  /* 117a3b23 push eax */
  push32((uint32_t)(EAX));
  /* 117a3b24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a3b27 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3b28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a3b2b push edx */
  push32((uint32_t)(EDX));
  /* 117a3b2c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a3b2f push eax */
  push32((uint32_t)(EAX));
  /* 117a3b30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3b33 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3b34 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a3b36 mov edx, dword ptr [0x117c9544] */
  EDX = (r32((uint32_t)(0x117c9544)));
  /* 117a3b3c push edx */
  push32((uint32_t)(EDX));
  /* 117a3b3d call 0x117a51a0 */
  push32(0x117a3b42u); f_117a51a0();
  /* 117a3b42 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3b45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a3b48 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3b4c jne 0x117a3b55 */
  if (!C.zf) goto L_117a3b55;
  /* 117a3b4e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 117a3b53 jmp 0x117a3b5b */
  goto L_117a3b5b;
L_117a3b55:;
  /* 117a3b55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3b58 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_117a3b5b:;
  /* 117a3b5b mov esp, ebp */
  ESP = (EBP);
  /* 117a3b5d pop ebp */
  EBP = (pop32());
  /* 117a3b5e ret  */
  ESPCHK(0x117a3b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b60 @ 0x117a3b60 (174 bytes, 66 insns) */
void f_117a3b60(void) {
  FTRACE(0x117a3b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a3b60 push ebp */
  push32((uint32_t)(EBP));
  /* 117a3b61 mov ebp, esp */
  EBP = (ESP);
  /* 117a3b63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a3b66 mov eax, dword ptr [0x117c7be0] */
  EAX = (r32((uint32_t)(0x117c7be0)));
  /* 117a3b6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117a3b6e:;
  /* 117a3b6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3b71 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3b74 je 0x117a3c08 */
  if (C.zf) goto L_117a3c08;
  /* 117a3b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3b7c push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3b80 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3b82 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117a3b84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3b87 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a3b89 push eax */
  push32((uint32_t)(EAX));
  /* 117a3b8a push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3b8c push 1 */
  push32((uint32_t)(0x1u));
  /* 117a3b8e call dword ptr [0x117ca374] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca374))), 0x117a3b94u);
  /* 117a3b94 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117a3b97 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3b9b jne 0x117a3ba2 */
  if (!C.zf) goto L_117a3ba2;
  /* 117a3b9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a3ba0 jmp 0x117a3c0a */
  goto L_117a3c0a;
L_117a3ba2:;
  /* 117a3ba2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 117a3ba4 push 0x117c2e2c */
  push32((uint32_t)(0x117c2e2cu));
  /* 117a3ba9 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a3bab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a3bae push ecx */
  push32((uint32_t)(ECX));
  /* 117a3baf call 0x11799da0 */
  push32(0x117a3bb4u); f_11799da0();
  /* 117a3bb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3bb7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a3bba cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3bbe jne 0x117a3bc5 */
  if (!C.zf) goto L_117a3bc5;
  /* 117a3bc0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a3bc3 jmp 0x117a3c0a */
  goto L_117a3c0a;
L_117a3bc5:;
  /* 117a3bc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3bc9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a3bcc push edx */
  push32((uint32_t)(EDX));
  /* 117a3bcd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a3bd0 push eax */
  push32((uint32_t)(EAX));
  /* 117a3bd1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117a3bd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3bd6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a3bd8 push edx */
  push32((uint32_t)(EDX));
  /* 117a3bd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3bdb push 1 */
  push32((uint32_t)(0x1u));
  /* 117a3bdd call dword ptr [0x117ca374] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca374))), 0x117a3be3u);
  /* 117a3be3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a3be5 jne 0x117a3bec */
  if (!C.zf) goto L_117a3bec;
  /* 117a3be7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a3bea jmp 0x117a3c0a */
  goto L_117a3c0a;
L_117a3bec:;
  /* 117a3bec push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3bee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a3bf1 push eax */
  push32((uint32_t)(EAX));
  /* 117a3bf2 call 0x117a55f0 */
  push32(0x117a3bf7u); f_117a55f0();
  /* 117a3bf7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3bfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3bfd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3c00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a3c03 jmp 0x117a3b6e */
  goto L_117a3b6e;
L_117a3c08:;
  /* 117a3c08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a3c0a:;
  /* 117a3c0a mov esp, ebp */
  ESP = (EBP);
  /* 117a3c0c pop ebp */
  EBP = (pop32());
  /* 117a3c0d ret  */
  ESPCHK(0x117a3b60u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x117a3c10 (32 bytes, 18 insns) */
void f_117a3c10(void) {
  FTRACE(0x117a3c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a3c10 push ebp */
  push32((uint32_t)(EBP));
  /* 117a3c11 mov ebp, esp */
  EBP = (ESP);
  /* 117a3c13 push ebx */
  push32((uint32_t)(EBX));
  /* 117a3c14 push esi */
  push32((uint32_t)(ESI));
  /* 117a3c15 push edi */
  push32((uint32_t)(EDI));
  /* 117a3c16 push ebp */
  push32((uint32_t)(EBP));
  /* 117a3c17 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3c19 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a3c1b push 0x117a3c28 */
  push32((uint32_t)(0x117a3c28u));
  /* 117a3c20 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117a3c23 call 0x117aa50e */
  push32(0x117a3c28u); f_117aa50e();
  /* 117a3c28 pop ebp */
  EBP = (pop32());
  /* 117a3c29 pop edi */
  EDI = (pop32());
  /* 117a3c2a pop esi */
  ESI = (pop32());
  /* 117a3c2b pop ebx */
  EBX = (pop32());
  /* 117a3c2c mov esp, ebp */
  ESP = (EBP);
  /* 117a3c2e pop ebp */
  EBP = (pop32());
  /* 117a3c2f ret  */
  ESPCHK(0x117a3c10u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x117a3c52 (104 bytes, 33 insns) */
void f_117a3c52(void) {
  FTRACE(0x117a3c52u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a3c52 push ebx */
  push32((uint32_t)(EBX));
  /* 117a3c53 push esi */
  push32((uint32_t)(ESI));
  /* 117a3c54 push edi */
  push32((uint32_t)(EDI));
  /* 117a3c55 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 117a3c59 push eax */
  push32((uint32_t)(EAX));
  /* 117a3c5a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 117a3c5c push 0x117a3c30 */
  push32((uint32_t)(0x117a3c30u));
  /* 117a3c61 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 117a3c68 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_117a3c6f:;
  /* 117a3c6f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 117a3c73 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 117a3c76 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 117a3c79 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3c7c je 0x117a3cac */
  if (C.zf) goto L_117a3cac;
  /* 117a3c7e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3c82 je 0x117a3cac */
  if (C.zf) goto L_117a3cac;
  /* 117a3c84 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 117a3c87 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 117a3c8a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 117a3c8e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 117a3c91 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3c96 jne 0x117a3caa */
  if (!C.zf) goto L_117a3caa;
  /* 117a3c98 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 117a3c9d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 117a3ca1 call 0x117a3ce6 */
  push32(0x117a3ca6u); f_117a3ce6();
  /* 117a3ca6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x117a3caau);
L_117a3caa:;
  /* 117a3caa jmp 0x117a3c6f */
  goto L_117a3c6f;
L_117a3cac:;
  /* 117a3cac pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 117a3cb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3cb6 pop edi */
  EDI = (pop32());
  /* 117a3cb7 pop esi */
  ESI = (pop32());
  /* 117a3cb8 pop ebx */
  EBX = (pop32());
  /* 117a3cb9 ret  */
  ESPCHK(0x117a3c52u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ce6 @ 0x117a3ce6 (24 bytes, 10 insns) */
void f_117a3ce6(void) {
  FTRACE(0x117a3ce6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a3ce6 push ebx */
  push32((uint32_t)(EBX));
  /* 117a3ce7 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3ce8 mov ebx, 0x117c64e0 */
  EBX = (0x117c64e0u);
  /* 117a3ced mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3cf0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 117a3cf3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 117a3cf6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 117a3cf9 pop ecx */
  ECX = (pop32());
  /* 117a3cfa pop ebx */
  EBX = (pop32());
  /* 117a3cfb ret 4 */
  ESPCHK(0x117a3ce6u, _esp0);
  ESP += 8; return;
}

/* FUN_10013dc5 @ 0x117a3dc5 (27 bytes, 11 insns) */
void f_117a3dc5(void) {
  FTRACE(0x117a3dc5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a3dc5 push ebp */
  push32((uint32_t)(EBP));
  /* 117a3dc6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 117a3dca mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 117a3dcc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 117a3dcf push eax */
  push32((uint32_t)(EAX));
  /* 117a3dd0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 117a3dd3 push eax */
  push32((uint32_t)(EAX));
  /* 117a3dd4 call 0x117a3c52 */
  push32(0x117a3dd9u); f_117a3c52();
  /* 117a3dd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3ddc pop ebp */
  EBP = (pop32());
  /* 117a3ddd ret 4 */
  ESPCHK(0x117a3dc5u, _esp0);
  ESP += 8; return;
}

/* FUN_10013de0 @ 0x117a3de0 (482 bytes, 138 insns) */
void f_117a3de0(void) {
  FTRACE(0x117a3de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a3de0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a3de1 mov ebp, esp */
  EBP = (ESP);
  /* 117a3de3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a3de6 push esi */
  push32((uint32_t)(ESI));
  /* 117a3de7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 117a3dee push 0x12 */
  push32((uint32_t)(0x12u));
  /* 117a3df0 call 0x1179d7a0 */
  push32(0x117a3df5u); f_1179d7a0();
  /* 117a3df5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3df8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117a3dff jmp 0x117a3e0a */
  goto L_117a3e0a;
L_117a3e01:;
  /* 117a3e01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a3e04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3e07 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_117a3e0a:;
  /* 117a3e0a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3e0e jge 0x117a3fb0 */
  if ((C.sf==C.of)) goto L_117a3fb0;
  /* 117a3e14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a3e17 cmp dword ptr [ecx*4 + 0x117c95a0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x117c95a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3e1f je 0x117a3f16 */
  if (C.zf) goto L_117a3f16;
  /* 117a3e25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a3e28 mov eax, dword ptr [edx*4 + 0x117c95a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x117c95a0)));
  /* 117a3e2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a3e32 jmp 0x117a3e3d */
  goto L_117a3e3d;
L_117a3e34:;
  /* 117a3e34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3e37 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3e3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117a3e3d:;
  /* 117a3e3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a3e40 mov eax, dword ptr [edx*4 + 0x117c95a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x117c95a0)));
  /* 117a3e47 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3e4c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3e4f jae 0x117a3f06 */
  if (!C.cf) goto L_117a3f06;
  /* 117a3e55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3e58 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 117a3e5c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 117a3e5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a3e61 jne 0x117a3f01 */
  if (!C.zf) goto L_117a3f01;
  /* 117a3e67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3e6a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3e6e jne 0x117a3ea9 */
  if (!C.zf) goto L_117a3ea9;
  /* 117a3e70 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117a3e72 call 0x1179d7a0 */
  push32(0x117a3e77u); f_1179d7a0();
  /* 117a3e77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3e7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3e7d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3e81 jne 0x117a3e9f */
  if (!C.zf) goto L_117a3e9f;
  /* 117a3e83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3e86 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3e89 push edx */
  push32((uint32_t)(EDX));
  /* 117a3e8a call dword ptr [0x117ca354] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca354))), 0x117a3e90u);
  /* 117a3e90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3e93 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117a3e96 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3e99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3e9c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_117a3e9f:;
  /* 117a3e9f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117a3ea1 call 0x1179d840 */
  push32(0x117a3ea6u); f_1179d840();
  /* 117a3ea6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a3ea9:;
  /* 117a3ea9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3eac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3eaf push eax */
  push32((uint32_t)(EAX));
  /* 117a3eb0 call dword ptr [0x117ca350] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca350))), 0x117a3eb6u);
  /* 117a3eb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3eb9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 117a3ebd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 117a3ec0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a3ec2 je 0x117a3ed6 */
  if (C.zf) goto L_117a3ed6;
  /* 117a3ec4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3ec7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3eca push eax */
  push32((uint32_t)(EAX));
  /* 117a3ecb call dword ptr [0x117ca34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca34c))), 0x117a3ed1u);
  /* 117a3ed1 jmp 0x117a3e34 */
  goto L_117a3e34;
L_117a3ed6:;
  /* 117a3ed6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3ed9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 117a3edf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a3ee2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117a3ee5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a3ee8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3eeb sub eax, dword ptr [edx*4 + 0x117c95a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x117c95a0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a3ef2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117a3ef3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 117a3ef8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117a3efa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3efc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a3eff jmp 0x117a3f06 */
  goto L_117a3f06;
L_117a3f01:;
  /* 117a3f01 jmp 0x117a3e34 */
  goto L_117a3e34;
L_117a3f06:;
  /* 117a3f06 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3f0a je 0x117a3f11 */
  if (C.zf) goto L_117a3f11;
  /* 117a3f0c jmp 0x117a3fb0 */
  goto L_117a3fb0;
L_117a3f11:;
  /* 117a3f11 jmp 0x117a3fab */
  goto L_117a3fab;
L_117a3f16:;
  /* 117a3f16 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 117a3f18 push 0x117c2e38 */
  push32((uint32_t)(0x117c2e38u));
  /* 117a3f1d push 2 */
  push32((uint32_t)(0x2u));
  /* 117a3f1f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 117a3f24 call 0x11799da0 */
  push32(0x117a3f29u); f_11799da0();
  /* 117a3f29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3f2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a3f2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3f33 je 0x117a3fa9 */
  if (C.zf) goto L_117a3fa9;
  /* 117a3f35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a3f38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3f3b mov dword ptr [eax*4 + 0x117c95a0], ecx */
  w32((uint32_t)(EAX*4 + 0x117c95a0), (ECX));
  /* 117a3f42 mov edx, dword ptr [0x117c96dc] */
  EDX = (r32((uint32_t)(0x117c96dc)));
  /* 117a3f48 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3f4b mov dword ptr [0x117c96dc], edx */
  w32((uint32_t)(0x117c96dc), (EDX));
  /* 117a3f51 jmp 0x117a3f5c */
  goto L_117a3f5c;
L_117a3f53:;
  /* 117a3f53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3f56 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3f59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117a3f5c:;
  /* 117a3f5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a3f5f mov edx, dword ptr [ecx*4 + 0x117c95a0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x117c95a0)));
  /* 117a3f66 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3f6c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3f6f jae 0x117a3f94 */
  if (!C.cf) goto L_117a3f94;
  /* 117a3f71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3f74 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 117a3f78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3f7b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 117a3f81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3f84 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 117a3f88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a3f8b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 117a3f92 jmp 0x117a3f53 */
  goto L_117a3f53;
L_117a3f94:;
  /* 117a3f94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a3f97 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117a3f9a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a3f9d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a3fa0 push edx */
  push32((uint32_t)(EDX));
  /* 117a3fa1 call 0x117a42f0 */
  push32(0x117a3fa6u); f_117a42f0();
  /* 117a3fa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a3fa9:;
  /* 117a3fa9 jmp 0x117a3fb0 */
  goto L_117a3fb0;
L_117a3fab:;
  /* 117a3fab jmp 0x117a3e01 */
  goto L_117a3e01;
L_117a3fb0:;
  /* 117a3fb0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 117a3fb2 call 0x1179d840 */
  push32(0x117a3fb7u); f_1179d840();
  /* 117a3fb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a3fba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a3fbd pop esi */
  ESI = (pop32());
  /* 117a3fbe mov esp, ebp */
  ESP = (EBP);
  /* 117a3fc0 pop ebp */
  EBP = (pop32());
  /* 117a3fc1 ret  */
  ESPCHK(0x117a3de0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x117a3fd0 (183 bytes, 57 insns) */
void f_117a3fd0(void) {
  FTRACE(0x117a3fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a3fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a3fd1 mov ebp, esp */
  EBP = (ESP);
  /* 117a3fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 117a3fd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3fd7 cmp eax, dword ptr [0x117c96dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c96dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3fdd jae 0x117a406a */
  if (!C.cf) goto L_117a406a;
  /* 117a3fe3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3fe6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117a3fe9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a3fec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117a3fef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a3ff2 mov eax, dword ptr [ecx*4 + 0x117c95a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117c95a0)));
  /* 117a3ff9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a3ffd jne 0x117a406a */
  if (!C.zf) goto L_117a406a;
  /* 117a3fff cmp dword ptr [0x117c7bb0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117c7bb0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4006 jne 0x117a404a */
  if (!C.zf) goto L_117a404a;
  /* 117a4008 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a400b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a400e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4012 je 0x117a4022 */
  if (C.zf) goto L_117a4022;
  /* 117a4014 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4018 je 0x117a4030 */
  if (C.zf) goto L_117a4030;
  /* 117a401a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a401e je 0x117a403e */
  if (C.zf) goto L_117a403e;
  /* 117a4020 jmp 0x117a404a */
  goto L_117a404a;
L_117a4022:;
  /* 117a4022 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a4025 push edx */
  push32((uint32_t)(EDX));
  /* 117a4026 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 117a4028 call dword ptr [0x117ca30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca30c))), 0x117a402eu);
  /* 117a402e jmp 0x117a404a */
  goto L_117a404a;
L_117a4030:;
  /* 117a4030 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a4033 push eax */
  push32((uint32_t)(EAX));
  /* 117a4034 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 117a4036 call dword ptr [0x117ca30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca30c))), 0x117a403cu);
  /* 117a403c jmp 0x117a404a */
  goto L_117a404a;
L_117a403e:;
  /* 117a403e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a4041 push ecx */
  push32((uint32_t)(ECX));
  /* 117a4042 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 117a4044 call dword ptr [0x117ca30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca30c))), 0x117a404au);
L_117a404a:;
  /* 117a404a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a404d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 117a4050 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4053 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 117a4056 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a4059 mov ecx, dword ptr [edx*4 + 0x117c95a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x117c95a0)));
  /* 117a4060 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a4063 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 117a4066 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a4068 jmp 0x117a4083 */
  goto L_117a4083;
L_117a406a:;
  /* 117a406a call 0x117a25b0 */
  push32(0x117a406fu); f_117a25b0();
  /* 117a406f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 117a4075 call 0x117a25c0 */
  push32(0x117a407au); f_117a25c0();
  /* 117a407a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117a4080 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_117a4083:;
  /* 117a4083 mov esp, ebp */
  ESP = (EBP);
  /* 117a4085 pop ebp */
  EBP = (pop32());
  /* 117a4086 ret  */
  ESPCHK(0x117a3fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014090 @ 0x117a4090 (216 bytes, 63 insns) */
void f_117a4090(void) {
  FTRACE(0x117a4090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a4090 push ebp */
  push32((uint32_t)(EBP));
  /* 117a4091 mov ebp, esp */
  EBP = (ESP);
  /* 117a4093 push ecx */
  push32((uint32_t)(ECX));
  /* 117a4094 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4097 cmp eax, dword ptr [0x117c96dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c96dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a409d jae 0x117a414b */
  if (!C.cf) goto L_117a414b;
  /* 117a40a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a40a6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117a40a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a40ac and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117a40af imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a40b2 mov eax, dword ptr [ecx*4 + 0x117c95a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117c95a0)));
  /* 117a40b9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 117a40be and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117a40c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a40c3 je 0x117a414b */
  if (C.zf) goto L_117a414b;
  /* 117a40c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a40cc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 117a40cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a40d2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 117a40d5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a40d8 mov ecx, dword ptr [edx*4 + 0x117c95a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x117c95a0)));
  /* 117a40df cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a40e3 je 0x117a414b */
  if (C.zf) goto L_117a414b;
  /* 117a40e5 cmp dword ptr [0x117c7bb0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117c7bb0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a40ec jne 0x117a412a */
  if (!C.zf) goto L_117a412a;
  /* 117a40ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a40f1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a40f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a40f8 je 0x117a4108 */
  if (C.zf) goto L_117a4108;
  /* 117a40fa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a40fe je 0x117a4114 */
  if (C.zf) goto L_117a4114;
  /* 117a4100 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4104 je 0x117a4120 */
  if (C.zf) goto L_117a4120;
  /* 117a4106 jmp 0x117a412a */
  goto L_117a412a;
L_117a4108:;
  /* 117a4108 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a410a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 117a410c call dword ptr [0x117ca30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca30c))), 0x117a4112u);
  /* 117a4112 jmp 0x117a412a */
  goto L_117a412a;
L_117a4114:;
  /* 117a4114 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a4116 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 117a4118 call dword ptr [0x117ca30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca30c))), 0x117a411eu);
  /* 117a411e jmp 0x117a412a */
  goto L_117a412a;
L_117a4120:;
  /* 117a4120 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a4122 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 117a4124 call dword ptr [0x117ca30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca30c))), 0x117a412au);
L_117a412a:;
  /* 117a412a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a412d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117a4130 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4133 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117a4136 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a4139 mov edx, dword ptr [eax*4 + 0x117c95a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117c95a0)));
  /* 117a4140 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 117a4147 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a4149 jmp 0x117a4164 */
  goto L_117a4164;
L_117a414b:;
  /* 117a414b call 0x117a25b0 */
  push32(0x117a4150u); f_117a25b0();
  /* 117a4150 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 117a4156 call 0x117a25c0 */
  push32(0x117a415bu); f_117a25c0();
  /* 117a415b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117a4161 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_117a4164:;
  /* 117a4164 mov esp, ebp */
  ESP = (EBP);
  /* 117a4166 pop ebp */
  EBP = (pop32());
  /* 117a4167 ret  */
  ESPCHK(0x117a4090u, _esp0);
  ESP += 4; return;
}

/* FUN_10014170 @ 0x117a4170 (102 bytes, 30 insns) */
void f_117a4170(void) {
  FTRACE(0x117a4170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a4170 push ebp */
  push32((uint32_t)(EBP));
  /* 117a4171 mov ebp, esp */
  EBP = (ESP);
  /* 117a4173 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4176 cmp eax, dword ptr [0x117c96dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c96dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a417c jae 0x117a41bb */
  if (!C.cf) goto L_117a41bb;
  /* 117a417e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4181 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117a4184 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4187 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117a418a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a418d mov eax, dword ptr [ecx*4 + 0x117c95a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117c95a0)));
  /* 117a4194 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 117a4199 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117a419c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a419e je 0x117a41bb */
  if (C.zf) goto L_117a41bb;
  /* 117a41a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a41a3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 117a41a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a41a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 117a41ac imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a41af mov ecx, dword ptr [edx*4 + 0x117c95a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x117c95a0)));
  /* 117a41b6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 117a41b9 jmp 0x117a41d4 */
  goto L_117a41d4;
L_117a41bb:;
  /* 117a41bb call 0x117a25b0 */
  push32(0x117a41c0u); f_117a25b0();
  /* 117a41c0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 117a41c6 call 0x117a25c0 */
  push32(0x117a41cbu); f_117a25c0();
  /* 117a41cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117a41d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_117a41d4:;
  /* 117a41d4 pop ebp */
  EBP = (pop32());
  /* 117a41d5 ret  */
  ESPCHK(0x117a4170u, _esp0);
  ESP += 4; return;
}

/* FUN_100141e0 @ 0x117a41e0 (260 bytes, 83 insns) */
void f_117a41e0(void) {
  FTRACE(0x117a41e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a41e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a41e1 mov ebp, esp */
  EBP = (ESP);
  /* 117a41e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a41e6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 117a41ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a41ed and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 117a41f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a41f2 je 0x117a41fd */
  if (C.zf) goto L_117a41fd;
  /* 117a41f4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 117a41f7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 117a41fa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_117a41fd:;
  /* 117a41fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a4200 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 117a4206 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a4208 je 0x117a4212 */
  if (C.zf) goto L_117a4212;
  /* 117a420a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 117a420d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 117a420f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_117a4212:;
  /* 117a4212 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a4215 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 117a421b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a421d je 0x117a4228 */
  if (C.zf) goto L_117a4228;
  /* 117a421f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 117a4222 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 117a4225 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_117a4228:;
  /* 117a4228 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a422b push eax */
  push32((uint32_t)(EAX));
  /* 117a422c call dword ptr [0x117ca3ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3ec))), 0x117a4232u);
  /* 117a4232 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a4235 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4239 jne 0x117a4252 */
  if (!C.zf) goto L_117a4252;
  /* 117a423b call dword ptr [0x117ca3d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3d8))), 0x117a4241u);
  /* 117a4241 push eax */
  push32((uint32_t)(EAX));
  /* 117a4242 call 0x117a2510 */
  push32(0x117a4247u); f_117a2510();
  /* 117a4247 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a424a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a424d jmp 0x117a42e0 */
  goto L_117a42e0;
L_117a4252:;
  /* 117a4252 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4256 jne 0x117a4263 */
  if (!C.zf) goto L_117a4263;
  /* 117a4258 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 117a425b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 117a425e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 117a4261 jmp 0x117a4272 */
  goto L_117a4272;
L_117a4263:;
  /* 117a4263 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4267 jne 0x117a4272 */
  if (!C.zf) goto L_117a4272;
  /* 117a4269 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 117a426c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 117a426f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_117a4272:;
  /* 117a4272 call 0x117a3de0 */
  push32(0x117a4277u); f_117a3de0();
  /* 117a4277 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a427a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a427e jne 0x117a429b */
  if (!C.zf) goto L_117a429b;
  /* 117a4280 call 0x117a25b0 */
  push32(0x117a4285u); f_117a25b0();
  /* 117a4285 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 117a428b call 0x117a25c0 */
  push32(0x117a4290u); f_117a25c0();
  /* 117a4290 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117a4296 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a4299 jmp 0x117a42e0 */
  goto L_117a42e0;
L_117a429b:;
  /* 117a429b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a429e push eax */
  push32((uint32_t)(EAX));
  /* 117a429f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a42a2 push ecx */
  push32((uint32_t)(ECX));
  /* 117a42a3 call 0x117a3fd0 */
  push32(0x117a42a8u); f_117a3fd0();
  /* 117a42a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a42ab mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 117a42ae or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 117a42b1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 117a42b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a42b7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117a42ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a42bd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117a42c0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a42c3 mov edx, dword ptr [eax*4 + 0x117c95a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117c95a0)));
  /* 117a42ca mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 117a42cd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 117a42d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a42d4 push ecx */
  push32((uint32_t)(ECX));
  /* 117a42d5 call 0x117a4380 */
  push32(0x117a42dau); f_117a4380();
  /* 117a42da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a42dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_117a42e0:;
  /* 117a42e0 mov esp, ebp */
  ESP = (EBP);
  /* 117a42e2 pop ebp */
  EBP = (pop32());
  /* 117a42e3 ret  */
  ESPCHK(0x117a41e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100142f0 @ 0x117a42f0 (134 bytes, 44 insns) */
void f_117a42f0(void) {
  FTRACE(0x117a42f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a42f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a42f1 mov ebp, esp */
  EBP = (ESP);
  /* 117a42f3 push ecx */
  push32((uint32_t)(ECX));
  /* 117a42f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a42f7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117a42fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a42fd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117a4300 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a4303 mov edx, dword ptr [eax*4 + 0x117c95a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117c95a0)));
  /* 117a430a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a430c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a430f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a4312 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4316 jne 0x117a4351 */
  if (!C.zf) goto L_117a4351;
  /* 117a4318 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117a431a call 0x1179d7a0 */
  push32(0x117a431fu); f_1179d7a0();
  /* 117a431f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4322 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a4325 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4329 jne 0x117a4347 */
  if (!C.zf) goto L_117a4347;
  /* 117a432b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a432e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4331 push edx */
  push32((uint32_t)(EDX));
  /* 117a4332 call dword ptr [0x117ca354] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca354))), 0x117a4338u);
  /* 117a4338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a433b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117a433e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4341 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a4344 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_117a4347:;
  /* 117a4347 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117a4349 call 0x1179d840 */
  push32(0x117a434eu); f_1179d840();
  /* 117a434e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a4351:;
  /* 117a4351 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4354 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117a4357 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a435a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117a435d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a4360 mov edx, dword ptr [eax*4 + 0x117c95a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117c95a0)));
  /* 117a4367 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 117a436b push eax */
  push32((uint32_t)(EAX));
  /* 117a436c call dword ptr [0x117ca350] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca350))), 0x117a4372u);
  /* 117a4372 mov esp, ebp */
  ESP = (EBP);
  /* 117a4374 pop ebp */
  EBP = (pop32());
  /* 117a4375 ret  */
  ESPCHK(0x117a42f0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x117a4380 (38 bytes, 13 insns) */
void f_117a4380(void) {
  FTRACE(0x117a4380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a4380 push ebp */
  push32((uint32_t)(EBP));
  /* 117a4381 mov ebp, esp */
  EBP = (ESP);
  /* 117a4383 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4386 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117a4389 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a438c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117a438f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a4392 mov edx, dword ptr [eax*4 + 0x117c95a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117c95a0)));
  /* 117a4399 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 117a439d push eax */
  push32((uint32_t)(EAX));
  /* 117a439e call dword ptr [0x117ca34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca34c))), 0x117a43a4u);
  /* 117a43a4 pop ebp */
  EBP = (pop32());
  /* 117a43a5 ret  */
  ESPCHK(0x117a4380u, _esp0);
  ESP += 4; return;
}

/* FUN_100143b0 @ 0x117a43b0 (218 bytes, 63 insns) */
void f_117a43b0(void) {
  FTRACE(0x117a43b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a43b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a43b1 mov ebp, esp */
  EBP = (ESP);
  /* 117a43b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a43b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a43bd push 2 */
  push32((uint32_t)(0x2u));
  /* 117a43bf call 0x1179d7a0 */
  push32(0x117a43c4u); f_1179d7a0();
  /* 117a43c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a43c7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 117a43ce jmp 0x117a43d9 */
  goto L_117a43d9;
L_117a43d0:;
  /* 117a43d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a43d3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a43d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117a43d9:;
  /* 117a43d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a43dc cmp ecx, dword ptr [0x117c92a0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117c92a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a43e2 jge 0x117a4479 */
  if ((C.sf==C.of)) goto L_117a4479;
  /* 117a43e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a43eb mov eax, dword ptr [0x117c7f48] */
  EAX = (r32((uint32_t)(0x117c7f48)));
  /* 117a43f0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a43f4 je 0x117a4474 */
  if (C.zf) goto L_117a4474;
  /* 117a43f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a43f9 mov edx, dword ptr [0x117c7f48] */
  EDX = (r32((uint32_t)(0x117c7f48)));
  /* 117a43ff mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 117a4402 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 117a4405 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 117a440b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a440d je 0x117a4431 */
  if (C.zf) goto L_117a4431;
  /* 117a440f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a4412 mov eax, dword ptr [0x117c7f48] */
  EAX = (r32((uint32_t)(0x117c7f48)));
  /* 117a4417 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 117a441a push ecx */
  push32((uint32_t)(ECX));
  /* 117a441b call 0x117a5a40 */
  push32(0x117a4420u); f_117a5a40();
  /* 117a4420 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4423 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4426 je 0x117a4431 */
  if (C.zf) goto L_117a4431;
  /* 117a4428 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a442b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a442e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117a4431:;
  /* 117a4431 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4435 jl 0x117a4474 */
  if ((C.sf!=C.of)) goto L_117a4474;
  /* 117a4437 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a443a mov ecx, dword ptr [0x117c7f48] */
  ECX = (r32((uint32_t)(0x117c7f48)));
  /* 117a4440 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 117a4443 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4446 push edx */
  push32((uint32_t)(EDX));
  /* 117a4447 call dword ptr [0x117ca3f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3f4))), 0x117a444du);
  /* 117a444d push 2 */
  push32((uint32_t)(0x2u));
  /* 117a444f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a4452 mov ecx, dword ptr [0x117c7f48] */
  ECX = (r32((uint32_t)(0x117c7f48)));
  /* 117a4458 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 117a445b push edx */
  push32((uint32_t)(EDX));
  /* 117a445c call 0x1179a830 */
  push32(0x117a4461u); f_1179a830();
  /* 117a4461 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4464 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a4467 mov ecx, dword ptr [0x117c7f48] */
  ECX = (r32((uint32_t)(0x117c7f48)));
  /* 117a446d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_117a4474:;
  /* 117a4474 jmp 0x117a43d0 */
  goto L_117a43d0;
L_117a4479:;
  /* 117a4479 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a447b call 0x1179d840 */
  push32(0x117a4480u); f_1179d840();
  /* 117a4480 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4483 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a4486 mov esp, ebp */
  ESP = (EBP);
  /* 117a4488 pop ebp */
  EBP = (pop32());
  /* 117a4489 ret  */
  ESPCHK(0x117a43b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014490 @ 0x117a4490 (68 bytes, 26 insns) */
void f_117a4490(void) {
  FTRACE(0x117a4490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a4490 push ebp */
  push32((uint32_t)(EBP));
  /* 117a4491 mov ebp, esp */
  EBP = (ESP);
  /* 117a4493 push ecx */
  push32((uint32_t)(ECX));
  /* 117a4494 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4498 jne 0x117a44a6 */
  if (!C.zf) goto L_117a44a6;
  /* 117a449a push 0 */
  push32((uint32_t)(0x0u));
  /* 117a449c call 0x117a4600 */
  push32(0x117a44a1u); f_117a4600();
  /* 117a44a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a44a4 jmp 0x117a44d0 */
  goto L_117a44d0;
L_117a44a6:;
  /* 117a44a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a44a9 push eax */
  push32((uint32_t)(EAX));
  /* 117a44aa call 0x117a38d0 */
  push32(0x117a44afu); f_117a38d0();
  /* 117a44af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a44b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a44b5 push ecx */
  push32((uint32_t)(ECX));
  /* 117a44b6 call 0x117a44e0 */
  push32(0x117a44bbu); f_117a44e0();
  /* 117a44bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a44be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a44c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a44c4 push edx */
  push32((uint32_t)(EDX));
  /* 117a44c5 call 0x117a3940 */
  push32(0x117a44cau); f_117a3940();
  /* 117a44ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a44cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117a44d0:;
  /* 117a44d0 mov esp, ebp */
  ESP = (EBP);
  /* 117a44d2 pop ebp */
  EBP = (pop32());
  /* 117a44d3 ret  */
  ESPCHK(0x117a4490u, _esp0);
  ESP += 4; return;
}

/* FUN_100144e0 @ 0x117a44e0 (65 bytes, 26 insns) */
void f_117a44e0(void) {
  FTRACE(0x117a44e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a44e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a44e1 mov ebp, esp */
  EBP = (ESP);
  /* 117a44e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a44e6 push eax */
  push32((uint32_t)(EAX));
  /* 117a44e7 call 0x117a4530 */
  push32(0x117a44ecu); f_117a4530();
  /* 117a44ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a44ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a44f1 je 0x117a44f8 */
  if (C.zf) goto L_117a44f8;
  /* 117a44f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a44f6 jmp 0x117a451f */
  goto L_117a451f;
L_117a44f8:;
  /* 117a44f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a44fb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117a44fe and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 117a4504 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a4506 je 0x117a451d */
  if (C.zf) goto L_117a451d;
  /* 117a4508 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a450b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117a450e push ecx */
  push32((uint32_t)(ECX));
  /* 117a450f call 0x117a5b90 */
  push32(0x117a4514u); f_117a5b90();
  /* 117a4514 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4517 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a4519 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a451b jmp 0x117a451f */
  goto L_117a451f;
L_117a451d:;
  /* 117a451d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a451f:;
  /* 117a451f pop ebp */
  EBP = (pop32());
  /* 117a4520 ret  */
  ESPCHK(0x117a44e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014530 @ 0x117a4530 (183 bytes, 62 insns) */
void f_117a4530(void) {
  FTRACE(0x117a4530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a4530 push ebp */
  push32((uint32_t)(EBP));
  /* 117a4531 mov ebp, esp */
  EBP = (ESP);
  /* 117a4533 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a4536 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a453d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4540 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a4543 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a4546 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117a4549 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117a454c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a454f jne 0x117a45cb */
  if (!C.zf) goto L_117a45cb;
  /* 117a4551 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a4554 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 117a4557 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 117a455d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a455f je 0x117a45cb */
  if (C.zf) goto L_117a45cb;
  /* 117a4561 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a4564 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a4567 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 117a4569 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a456c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a456f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4573 jle 0x117a45cb */
  if ((C.zf||C.sf!=C.of)) goto L_117a45cb;
  /* 117a4575 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a4578 push edx */
  push32((uint32_t)(EDX));
  /* 117a4579 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a457c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117a457f push ecx */
  push32((uint32_t)(ECX));
  /* 117a4580 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a4583 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 117a4586 push eax */
  push32((uint32_t)(EAX));
  /* 117a4587 call 0x117a3360 */
  push32(0x117a458cu); f_117a3360();
  /* 117a458c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a458f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4592 jne 0x117a45b5 */
  if (!C.zf) goto L_117a45b5;
  /* 117a4594 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a4597 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117a459a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 117a45a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a45a2 je 0x117a45b3 */
  if (C.zf) goto L_117a45b3;
  /* 117a45a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a45a7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 117a45aa and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 117a45ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a45b0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_117a45b3:;
  /* 117a45b3 jmp 0x117a45cb */
  goto L_117a45cb;
L_117a45b5:;
  /* 117a45b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a45b8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 117a45bb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 117a45be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a45c1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 117a45c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_117a45cb:;
  /* 117a45cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a45ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a45d1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117a45d4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117a45d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a45d9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 117a45e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a45e3 mov esp, ebp */
  ESP = (EBP);
  /* 117a45e5 pop ebp */
  EBP = (pop32());
  /* 117a45e6 ret  */
  ESPCHK(0x117a4530u, _esp0);
  ESP += 4; return;
}

/* FUN_100145f0 @ 0x117a45f0 (15 bytes, 7 insns) */
void f_117a45f0(void) {
  FTRACE(0x117a45f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a45f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a45f1 mov ebp, esp */
  EBP = (ESP);
  /* 117a45f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a45f5 call 0x117a4600 */
  push32(0x117a45fau); f_117a4600();
  /* 117a45fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a45fd pop ebp */
  EBP = (pop32());
  /* 117a45fe ret  */
  ESPCHK(0x117a45f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014600 @ 0x117a4600 (319 bytes, 94 insns) */
void f_117a4600(void) {
  FTRACE(0x117a4600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a4600 push ebp */
  push32((uint32_t)(EBP));
  /* 117a4601 mov ebp, esp */
  EBP = (ESP);
  /* 117a4603 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a4606 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a460d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117a4614 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a4616 call 0x1179d7a0 */
  push32(0x117a461bu); f_1179d7a0();
  /* 117a461b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a461e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117a4625 jmp 0x117a4630 */
  goto L_117a4630;
L_117a4627:;
  /* 117a4627 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a462a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a462d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_117a4630:;
  /* 117a4630 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a4633 cmp ecx, dword ptr [0x117c92a0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117c92a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4639 jge 0x117a4723 */
  if ((C.sf==C.of)) goto L_117a4723;
  /* 117a463f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a4642 mov eax, dword ptr [0x117c7f48] */
  EAX = (r32((uint32_t)(0x117c7f48)));
  /* 117a4647 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a464b je 0x117a471e */
  if (C.zf) goto L_117a471e;
  /* 117a4651 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a4654 mov edx, dword ptr [0x117c7f48] */
  EDX = (r32((uint32_t)(0x117c7f48)));
  /* 117a465a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 117a465d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 117a4660 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 117a4666 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a4668 je 0x117a471e */
  if (C.zf) goto L_117a471e;
  /* 117a466e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a4671 mov eax, dword ptr [0x117c7f48] */
  EAX = (r32((uint32_t)(0x117c7f48)));
  /* 117a4676 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 117a4679 push ecx */
  push32((uint32_t)(ECX));
  /* 117a467a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a467d push edx */
  push32((uint32_t)(EDX));
  /* 117a467e call 0x117a3910 */
  push32(0x117a4683u); f_117a3910();
  /* 117a4683 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4686 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a4689 mov ecx, dword ptr [0x117c7f48] */
  ECX = (r32((uint32_t)(0x117c7f48)));
  /* 117a468f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 117a4692 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 117a4695 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 117a469a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a469c je 0x117a4705 */
  if (C.zf) goto L_117a4705;
  /* 117a469e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a46a2 jne 0x117a46c9 */
  if (!C.zf) goto L_117a46c9;
  /* 117a46a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a46a7 mov edx, dword ptr [0x117c7f48] */
  EDX = (r32((uint32_t)(0x117c7f48)));
  /* 117a46ad mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 117a46b0 push eax */
  push32((uint32_t)(EAX));
  /* 117a46b1 call 0x117a44e0 */
  push32(0x117a46b6u); f_117a44e0();
  /* 117a46b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a46b9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a46bc je 0x117a46c7 */
  if (C.zf) goto L_117a46c7;
  /* 117a46be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a46c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a46c4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117a46c7:;
  /* 117a46c7 jmp 0x117a4705 */
  goto L_117a4705;
L_117a46c9:;
  /* 117a46c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a46cd jne 0x117a4705 */
  if (!C.zf) goto L_117a4705;
  /* 117a46cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a46d2 mov eax, dword ptr [0x117c7f48] */
  EAX = (r32((uint32_t)(0x117c7f48)));
  /* 117a46d7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 117a46da mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117a46dd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 117a46e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a46e2 je 0x117a4705 */
  if (C.zf) goto L_117a4705;
  /* 117a46e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a46e7 mov ecx, dword ptr [0x117c7f48] */
  ECX = (r32((uint32_t)(0x117c7f48)));
  /* 117a46ed mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 117a46f0 push edx */
  push32((uint32_t)(EDX));
  /* 117a46f1 call 0x117a44e0 */
  push32(0x117a46f6u); f_117a44e0();
  /* 117a46f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a46f9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a46fc jne 0x117a4705 */
  if (!C.zf) goto L_117a4705;
  /* 117a46fe mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_117a4705:;
  /* 117a4705 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a4708 mov ecx, dword ptr [0x117c7f48] */
  ECX = (r32((uint32_t)(0x117c7f48)));
  /* 117a470e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 117a4711 push edx */
  push32((uint32_t)(EDX));
  /* 117a4712 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a4715 push eax */
  push32((uint32_t)(EAX));
  /* 117a4716 call 0x117a3980 */
  push32(0x117a471bu); f_117a3980();
  /* 117a471b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a471e:;
  /* 117a471e jmp 0x117a4627 */
  goto L_117a4627;
L_117a4723:;
  /* 117a4723 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a4725 call 0x1179d840 */
  push32(0x117a472au); f_1179d840();
  /* 117a472a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a472d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4731 jne 0x117a4738 */
  if (!C.zf) goto L_117a4738;
  /* 117a4733 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a4736 jmp 0x117a473b */
  goto L_117a473b;
L_117a4738:;
  /* 117a4738 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_117a473b:;
  /* 117a473b mov esp, ebp */
  ESP = (EBP);
  /* 117a473d pop ebp */
  EBP = (pop32());
  /* 117a473e ret  */
  ESPCHK(0x117a4600u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x117a4740 (15 bytes, 7 insns) */
void f_117a4740(void) {
  FTRACE(0x117a4740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a4740 push ebp */
  push32((uint32_t)(EBP));
  /* 117a4741 mov ebp, esp */
  EBP = (ESP);
  /* 117a4743 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a4745 call 0x11798c20 */
  push32(0x117a474au); f_11798c20();
  /* 117a474a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a474d pop ebp */
  EBP = (pop32());
  /* 117a474e ret  */
  ESPCHK(0x117a4740u, _esp0);
  ESP += 4; return;
}

/* FUN_10014750 @ 0x117a4750 (1007 bytes, 269 insns) */
void f_117a4750(void) {
  FTRACE(0x117a4750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a4750 push ebp */
  push32((uint32_t)(EBP));
  /* 117a4751 mov ebp, esp */
  EBP = (ESP);
  /* 117a4753 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a4759 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a475d jl 0x117a4765 */
  if ((C.sf!=C.of)) goto L_117a4765;
  /* 117a475f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4763 jle 0x117a476c */
  if ((C.zf||C.sf!=C.of)) goto L_117a476c;
L_117a4765:;
  /* 117a4765 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a4767 jmp 0x117a4b3b */
  goto L_117a4b3b;
L_117a476c:;
  /* 117a476c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117a476e call 0x1179d7a0 */
  push32(0x117a4773u); f_1179d7a0();
  /* 117a4773 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4776 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117a477d mov eax, dword ptr [0x117c7f34] */
  EAX = (r32((uint32_t)(0x117c7f34)));
  /* 117a4782 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4785 mov dword ptr [0x117c7f34], eax */
  w32((uint32_t)(0x117c7f34), (EAX));
L_117a478a:;
  /* 117a478a cmp dword ptr [0x117c7f44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7f44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4791 je 0x117a479d */
  if (C.zf) goto L_117a479d;
  /* 117a4793 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a4795 call dword ptr [0x117ca308] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca308))), 0x117a479bu);
  /* 117a479b jmp 0x117a478a */
  goto L_117a478a;
L_117a479d:;
  /* 117a479d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a47a1 je 0x117a47e1 */
  if (C.zf) goto L_117a47e1;
  /* 117a47a3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a47a7 je 0x117a47c1 */
  if (C.zf) goto L_117a47c1;
  /* 117a47a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a47ac push ecx */
  push32((uint32_t)(ECX));
  /* 117a47ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a47b0 push edx */
  push32((uint32_t)(EDX));
  /* 117a47b1 call 0x117a4b40 */
  push32(0x117a47b6u); f_117a4b40();
  /* 117a47b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a47b9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 117a47bf jmp 0x117a47d3 */
  goto L_117a47d3;
L_117a47c1:;
  /* 117a47c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a47c4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a47c7 mov ecx, dword ptr [eax + 0x117c6604] */
  ECX = (r32((uint32_t)(EAX + 0x117c6604)));
  /* 117a47cd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_117a47d3:;
  /* 117a47d3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 117a47d9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117a47dc jmp 0x117a4b1b */
  goto L_117a4b1b;
L_117a47e1:;
  /* 117a47e1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 117a47e8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117a47ef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a47f3 je 0x117a4b13 */
  if (C.zf) goto L_117a4b13;
  /* 117a47f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a47fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a47ff cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4802 jne 0x117a4a24 */
  if (!C.zf) goto L_117a4a24;
  /* 117a4808 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a480b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 117a480f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4812 jne 0x117a4a24 */
  if (!C.zf) goto L_117a4a24;
  /* 117a4818 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a481b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 117a481f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4822 jne 0x117a4a24 */
  if (!C.zf) goto L_117a4a24;
  /* 117a4828 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a482b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_117a4831:;
  /* 117a4831 push 0x117c2e88 */
  push32((uint32_t)(0x117c2e88u));
  /* 117a4836 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 117a483c push ecx */
  push32((uint32_t)(ECX));
  /* 117a483d call 0x117a71b0 */
  push32(0x117a4842u); f_117a71b0();
  /* 117a4842 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4845 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 117a484b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4852 je 0x117a487d */
  if (C.zf) goto L_117a487d;
  /* 117a4854 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 117a485a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a4860 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 117a4866 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a486d je 0x117a487d */
  if (C.zf) goto L_117a487d;
  /* 117a486f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 117a4875 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a4878 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a487b jne 0x117a48a3 */
  if (!C.zf) goto L_117a48a3;
L_117a487d:;
  /* 117a487d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4881 je 0x117a489c */
  if (C.zf) goto L_117a489c;
  /* 117a4883 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117a4885 call 0x1179d840 */
  push32(0x117a488au); f_1179d840();
  /* 117a488a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a488d mov edx, dword ptr [0x117c7f34] */
  EDX = (r32((uint32_t)(0x117c7f34)));
  /* 117a4893 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a4896 mov dword ptr [0x117c7f34], edx */
  w32((uint32_t)(0x117c7f34), (EDX));
L_117a489c:;
  /* 117a489c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a489e jmp 0x117a4b3b */
  goto L_117a4b3b;
L_117a48a3:;
  /* 117a48a3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 117a48aa jmp 0x117a48b5 */
  goto L_117a48b5;
L_117a48ac:;
  /* 117a48ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a48af add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a48b2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_117a48b5:;
  /* 117a48b5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a48b9 jg 0x117a4903 */
  if ((!C.zf&&C.sf==C.of)) goto L_117a4903;
  /* 117a48bb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 117a48c1 push ecx */
  push32((uint32_t)(ECX));
  /* 117a48c2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 117a48c8 push edx */
  push32((uint32_t)(EDX));
  /* 117a48c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a48cc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a48cf mov ecx, dword ptr [eax + 0x117c6600] */
  ECX = (r32((uint32_t)(EAX + 0x117c6600)));
  /* 117a48d5 push ecx */
  push32((uint32_t)(ECX));
  /* 117a48d6 call 0x117a7170 */
  push32(0x117a48dbu); f_117a7170();
  /* 117a48db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a48de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a48e0 jne 0x117a4901 */
  if (!C.zf) goto L_117a4901;
  /* 117a48e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a48e5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a48e8 mov eax, dword ptr [edx + 0x117c6600] */
  EAX = (r32((uint32_t)(EDX + 0x117c6600)));
  /* 117a48ee push eax */
  push32((uint32_t)(EAX));
  /* 117a48ef call 0x1179cbd0 */
  push32(0x117a48f4u); f_1179cbd0();
  /* 117a48f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a48f7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a48fd jne 0x117a4901 */
  if (!C.zf) goto L_117a4901;
  /* 117a48ff jmp 0x117a4903 */
  goto L_117a4903;
L_117a4901:;
  /* 117a4901 jmp 0x117a48ac */
  goto L_117a48ac;
L_117a4903:;
  /* 117a4903 push 0x117c2e84 */
  push32((uint32_t)(0x117c2e84u));
  /* 117a4908 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 117a490e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4911 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 117a4917 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 117a491d push edx */
  push32((uint32_t)(EDX));
  /* 117a491e call 0x117a7130 */
  push32(0x117a4923u); f_117a7130();
  /* 117a4923 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4926 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 117a492c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4933 jne 0x117a4969 */
  if (!C.zf) goto L_117a4969;
  /* 117a4935 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 117a493b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a493e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4941 je 0x117a4969 */
  if (C.zf) goto L_117a4969;
  /* 117a4943 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4947 je 0x117a4962 */
  if (C.zf) goto L_117a4962;
  /* 117a4949 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117a494b call 0x1179d840 */
  push32(0x117a4950u); f_1179d840();
  /* 117a4950 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4953 mov edx, dword ptr [0x117c7f34] */
  EDX = (r32((uint32_t)(0x117c7f34)));
  /* 117a4959 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a495c mov dword ptr [0x117c7f34], edx */
  w32((uint32_t)(0x117c7f34), (EDX));
L_117a4962:;
  /* 117a4962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a4964 jmp 0x117a4b3b */
  goto L_117a4b3b;
L_117a4969:;
  /* 117a4969 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a496d jg 0x117a49ba */
  if ((!C.zf&&C.sf==C.of)) goto L_117a49ba;
  /* 117a496f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 117a4975 push eax */
  push32((uint32_t)(EAX));
  /* 117a4976 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 117a497c push ecx */
  push32((uint32_t)(ECX));
  /* 117a497d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 117a4983 push edx */
  push32((uint32_t)(EDX));
  /* 117a4984 call 0x1179d5c0 */
  push32(0x117a4989u); f_1179d5c0();
  /* 117a4989 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a498c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 117a4992 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 117a499a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 117a49a0 push ecx */
  push32((uint32_t)(ECX));
  /* 117a49a1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a49a4 push edx */
  push32((uint32_t)(EDX));
  /* 117a49a5 call 0x117a4b40 */
  push32(0x117a49aau); f_117a4b40();
  /* 117a49aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a49ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a49af je 0x117a49ba */
  if (C.zf) goto L_117a49ba;
  /* 117a49b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a49b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a49b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_117a49ba:;
  /* 117a49ba mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 117a49c0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a49c6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 117a49cc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 117a49d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117a49d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a49d7 je 0x117a49e8 */
  if (C.zf) goto L_117a49e8;
  /* 117a49d9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 117a49df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a49e2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_117a49e8:;
  /* 117a49e8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 117a49ee movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117a49f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a49f3 jne 0x117a4831 */
  if (!C.zf) goto L_117a4831;
  /* 117a49f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a49fd je 0x117a4a0c */
  if (C.zf) goto L_117a4a0c;
  /* 117a49ff call 0x117a4ce0 */
  push32(0x117a4a04u); f_117a4ce0();
  /* 117a4a04 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 117a4a0a jmp 0x117a4a16 */
  goto L_117a4a16;
L_117a4a0c:;
  /* 117a4a0c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_117a4a16:;
  /* 117a4a16 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 117a4a1c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a4a1f jmp 0x117a4b11 */
  goto L_117a4b11;
L_117a4a24:;
  /* 117a4a24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4a27 push edx */
  push32((uint32_t)(EDX));
  /* 117a4a28 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a4a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 117a4a2c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 117a4a32 push eax */
  push32((uint32_t)(EAX));
  /* 117a4a33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a4a36 push ecx */
  push32((uint32_t)(ECX));
  /* 117a4a37 call 0x117a4de0 */
  push32(0x117a4a3cu); f_117a4de0();
  /* 117a4a3c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4a3f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a4a42 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4a46 je 0x117a4b11 */
  if (C.zf) goto L_117a4b11;
  /* 117a4a4c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 117a4a53 jmp 0x117a4a5e */
  goto L_117a4a5e;
L_117a4a55:;
  /* 117a4a55 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a4a58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4a5b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_117a4a5e:;
  /* 117a4a5e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4a62 jg 0x117a4ac0 */
  if ((!C.zf&&C.sf==C.of)) goto L_117a4ac0;
  /* 117a4a64 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4a68 je 0x117a4abe */
  if (C.zf) goto L_117a4abe;
  /* 117a4a6a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a4a6d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a4a70 mov ecx, dword ptr [eax + 0x117c6604] */
  ECX = (r32((uint32_t)(EAX + 0x117c6604)));
  /* 117a4a76 push ecx */
  push32((uint32_t)(ECX));
  /* 117a4a77 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 117a4a7d push edx */
  push32((uint32_t)(EDX));
  /* 117a4a7e call 0x117a2820 */
  push32(0x117a4a83u); f_117a2820();
  /* 117a4a83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4a86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a4a88 je 0x117a4ab5 */
  if (C.zf) goto L_117a4ab5;
  /* 117a4a8a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 117a4a90 push eax */
  push32((uint32_t)(EAX));
  /* 117a4a91 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a4a94 push ecx */
  push32((uint32_t)(ECX));
  /* 117a4a95 call 0x117a4b40 */
  push32(0x117a4a9au); f_117a4b40();
  /* 117a4a9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4a9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a4a9f je 0x117a4aac */
  if (C.zf) goto L_117a4aac;
  /* 117a4aa1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a4aa4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4aa7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 117a4aaa jmp 0x117a4ab3 */
  goto L_117a4ab3;
L_117a4aac:;
  /* 117a4aac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_117a4ab3:;
  /* 117a4ab3 jmp 0x117a4abe */
  goto L_117a4abe;
L_117a4ab5:;
  /* 117a4ab5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a4ab8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4abb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_117a4abe:;
  /* 117a4abe jmp 0x117a4a55 */
  goto L_117a4a55;
L_117a4ac0:;
  /* 117a4ac0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4ac4 je 0x117a4aeb */
  if (C.zf) goto L_117a4aeb;
  /* 117a4ac6 call 0x117a4ce0 */
  push32(0x117a4acbu); f_117a4ce0();
  /* 117a4acb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a4ace push 2 */
  push32((uint32_t)(0x2u));
  /* 117a4ad0 mov ecx, dword ptr [0x117c6604] */
  ECX = (r32((uint32_t)(0x117c6604)));
  /* 117a4ad6 push ecx */
  push32((uint32_t)(ECX));
  /* 117a4ad7 call 0x1179a830 */
  push32(0x117a4adcu); f_1179a830();
  /* 117a4adc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4adf mov dword ptr [0x117c6604], 0 */
  w32((uint32_t)(0x117c6604), (0x0u));
  /* 117a4ae9 jmp 0x117a4b11 */
  goto L_117a4b11;
L_117a4aeb:;
  /* 117a4aeb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4aef je 0x117a4afe */
  if (C.zf) goto L_117a4afe;
  /* 117a4af1 call 0x117a4ce0 */
  push32(0x117a4af6u); f_117a4ce0();
  /* 117a4af6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 117a4afc jmp 0x117a4b08 */
  goto L_117a4b08;
L_117a4afe:;
  /* 117a4afe mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_117a4b08:;
  /* 117a4b08 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 117a4b0e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_117a4b11:;
  /* 117a4b11 jmp 0x117a4b1b */
  goto L_117a4b1b;
L_117a4b13:;
  /* 117a4b13 call 0x117a4ce0 */
  push32(0x117a4b18u); f_117a4ce0();
  /* 117a4b18 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117a4b1b:;
  /* 117a4b1b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4b1f je 0x117a4b38 */
  if (C.zf) goto L_117a4b38;
  /* 117a4b21 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117a4b23 call 0x1179d840 */
  push32(0x117a4b28u); f_1179d840();
  /* 117a4b28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4b2b mov eax, dword ptr [0x117c7f34] */
  EAX = (r32((uint32_t)(0x117c7f34)));
  /* 117a4b30 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a4b33 mov dword ptr [0x117c7f34], eax */
  w32((uint32_t)(0x117c7f34), (EAX));
L_117a4b38:;
  /* 117a4b38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_117a4b3b:;
  /* 117a4b3b mov esp, ebp */
  ESP = (EBP);
  /* 117a4b3d pop ebp */
  EBP = (pop32());
  /* 117a4b3e ret  */
  ESPCHK(0x117a4750u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b40 @ 0x117a4b40 (403 bytes, 117 insns) */
void f_117a4b40(void) {
  FTRACE(0x117a4b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a4b40 push ebp */
  push32((uint32_t)(EBP));
  /* 117a4b41 mov ebp, esp */
  EBP = (ESP);
  /* 117a4b43 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a4b49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4b4c push eax */
  push32((uint32_t)(EAX));
  /* 117a4b4d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 117a4b53 push ecx */
  push32((uint32_t)(ECX));
  /* 117a4b54 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 117a4b5a push edx */
  push32((uint32_t)(EDX));
  /* 117a4b5b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 117a4b61 push eax */
  push32((uint32_t)(EAX));
  /* 117a4b62 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a4b65 push ecx */
  push32((uint32_t)(ECX));
  /* 117a4b66 call 0x117a4de0 */
  push32(0x117a4b6bu); f_117a4de0();
  /* 117a4b6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4b6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a4b70 jne 0x117a4b79 */
  if (!C.zf) goto L_117a4b79;
  /* 117a4b72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a4b74 jmp 0x117a4ccf */
  goto L_117a4ccf;
L_117a4b79:;
  /* 117a4b79 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 117a4b7e push 0x117c2e8c */
  push32((uint32_t)(0x117c2e8cu));
  /* 117a4b83 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a4b85 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 117a4b8b push edx */
  push32((uint32_t)(EDX));
  /* 117a4b8c call 0x1179cbd0 */
  push32(0x117a4b91u); f_1179cbd0();
  /* 117a4b91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4b94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4b97 push eax */
  push32((uint32_t)(EAX));
  /* 117a4b98 call 0x11799da0 */
  push32(0x117a4b9du); f_11799da0();
  /* 117a4b9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4ba0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a4ba3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4ba7 jne 0x117a4bb0 */
  if (!C.zf) goto L_117a4bb0;
  /* 117a4ba9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a4bab jmp 0x117a4ccf */
  goto L_117a4ccf;
L_117a4bb0:;
  /* 117a4bb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4bb3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a4bb6 mov ecx, dword ptr [eax + 0x117c6604] */
  ECX = (r32((uint32_t)(EAX + 0x117c6604)));
  /* 117a4bbc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a4bbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4bc2 mov eax, dword ptr [edx*4 + 0x117c7e68] */
  EAX = (r32((uint32_t)(EDX*4 + 0x117c7e68)));
  /* 117a4bc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a4bcc push 6 */
  push32((uint32_t)(0x6u));
  /* 117a4bce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4bd1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a4bd4 add ecx, 0x117c7ec0 */
  { uint32_t _a=(ECX),_b=(0x117c7ec0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4bda push ecx */
  push32((uint32_t)(ECX));
  /* 117a4bdb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 117a4bde push edx */
  push32((uint32_t)(EDX));
  /* 117a4bdf call 0x117a0fc0 */
  push32(0x117a4be4u); f_117a0fc0();
  /* 117a4be4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4be7 mov eax, dword ptr [0x117c7e80] */
  EAX = (r32((uint32_t)(0x117c7e80)));
  /* 117a4bec mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117a4bef lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 117a4bf5 push ecx */
  push32((uint32_t)(ECX));
  /* 117a4bf6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a4bf9 push edx */
  push32((uint32_t)(EDX));
  /* 117a4bfa call 0x1179cd50 */
  push32(0x117a4bffu); f_1179cd50();
  /* 117a4bff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4c02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4c05 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a4c08 mov dword ptr [ecx + 0x117c6604], eax */
  w32((uint32_t)(ECX + 0x117c6604), (EAX));
  /* 117a4c0e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 117a4c14 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117a4c1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4c1d mov dword ptr [eax*4 + 0x117c7e68], edx */
  w32((uint32_t)(EAX*4 + 0x117c7e68), (EDX));
  /* 117a4c24 push 6 */
  push32((uint32_t)(0x6u));
  /* 117a4c26 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 117a4c2c push ecx */
  push32((uint32_t)(ECX));
  /* 117a4c2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4c30 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a4c33 add edx, 0x117c7ec0 */
  { uint32_t _a=(EDX),_b=(0x117c7ec0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4c39 push edx */
  push32((uint32_t)(EDX));
  /* 117a4c3a call 0x117a0fc0 */
  push32(0x117a4c3fu); f_117a0fc0();
  /* 117a4c3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4c42 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4c46 jne 0x117a4c53 */
  if (!C.zf) goto L_117a4c53;
  /* 117a4c48 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 117a4c4e mov dword ptr [0x117c7e80], eax */
  w32((uint32_t)(0x117c7e80), (EAX));
L_117a4c53:;
  /* 117a4c53 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4c57 jne 0x117a4c65 */
  if (!C.zf) goto L_117a4c65;
  /* 117a4c59 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 117a4c5f mov dword ptr [0x117c7e84], ecx */
  w32((uint32_t)(0x117c7e84), (ECX));
L_117a4c65:;
  /* 117a4c65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4c68 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a4c6b call dword ptr [edx + 0x117c6608] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x117c6608))), 0x117a4c71u);
  /* 117a4c71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a4c73 je 0x117a4cac */
  if (C.zf) goto L_117a4cac;
  /* 117a4c75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4c78 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a4c7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a4c7e mov dword ptr [eax + 0x117c6604], ecx */
  w32((uint32_t)(EAX + 0x117c6604), (ECX));
  /* 117a4c84 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a4c86 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a4c89 push edx */
  push32((uint32_t)(EDX));
  /* 117a4c8a call 0x1179a830 */
  push32(0x117a4c8fu); f_1179a830();
  /* 117a4c8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4c92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4c95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a4c98 mov dword ptr [eax*4 + 0x117c7e68], ecx */
  w32((uint32_t)(EAX*4 + 0x117c7e68), (ECX));
  /* 117a4c9f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a4ca2 mov dword ptr [0x117c7e80], edx */
  w32((uint32_t)(0x117c7e80), (EDX));
  /* 117a4ca8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a4caa jmp 0x117a4ccf */
  goto L_117a4ccf;
L_117a4cac:;
  /* 117a4cac cmp dword ptr [ebp - 0xc], 0x117c64f0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x117c64f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4cb3 je 0x117a4cc3 */
  if (C.zf) goto L_117a4cc3;
  /* 117a4cb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a4cb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a4cba push eax */
  push32((uint32_t)(EAX));
  /* 117a4cbb call 0x1179a830 */
  push32(0x117a4cc0u); f_1179a830();
  /* 117a4cc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a4cc3:;
  /* 117a4cc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4cc6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a4cc9 mov eax, dword ptr [ecx + 0x117c6604] */
  EAX = (r32((uint32_t)(ECX + 0x117c6604)));
L_117a4ccf:;
  /* 117a4ccf mov esp, ebp */
  ESP = (EBP);
  /* 117a4cd1 pop ebp */
  EBP = (pop32());
  /* 117a4cd2 ret  */
  ESPCHK(0x117a4b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ce0 @ 0x117a4ce0 (256 bytes, 72 insns) */
void f_117a4ce0(void) {
  FTRACE(0x117a4ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a4ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a4ce1 mov ebp, esp */
  EBP = (ESP);
  /* 117a4ce3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a4ce6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 117a4ced cmp dword ptr [0x117c6604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c6604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4cf4 jne 0x117a4d14 */
  if (!C.zf) goto L_117a4d14;
  /* 117a4cf6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 117a4cfb push 0x117c2e8c */
  push32((uint32_t)(0x117c2e8cu));
  /* 117a4d00 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a4d02 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 117a4d07 call 0x11799da0 */
  push32(0x117a4d0cu); f_11799da0();
  /* 117a4d0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4d0f mov dword ptr [0x117c6604], eax */
  w32((uint32_t)(0x117c6604), (EAX));
L_117a4d14:;
  /* 117a4d14 mov eax, dword ptr [0x117c6604] */
  EAX = (r32((uint32_t)(0x117c6604)));
  /* 117a4d19 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 117a4d1c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117a4d23 jmp 0x117a4d2e */
  goto L_117a4d2e;
L_117a4d25:;
  /* 117a4d25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a4d28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4d2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117a4d2e:;
  /* 117a4d2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a4d31 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a4d34 mov eax, dword ptr [edx + 0x117c6604] */
  EAX = (r32((uint32_t)(EDX + 0x117c6604)));
  /* 117a4d3a push eax */
  push32((uint32_t)(EAX));
  /* 117a4d3b push 0x117c2e98 */
  push32((uint32_t)(0x117c2e98u));
  /* 117a4d40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a4d43 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a4d46 mov edx, dword ptr [ecx + 0x117c6600] */
  EDX = (r32((uint32_t)(ECX + 0x117c6600)));
  /* 117a4d4c push edx */
  push32((uint32_t)(EDX));
  /* 117a4d4d push 3 */
  push32((uint32_t)(0x3u));
  /* 117a4d4f mov eax, dword ptr [0x117c6604] */
  EAX = (r32((uint32_t)(0x117c6604)));
  /* 117a4d54 push eax */
  push32((uint32_t)(EAX));
  /* 117a4d55 call 0x117a4f80 */
  push32(0x117a4d5au); f_117a4f80();
  /* 117a4d5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4d5d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4d61 jge 0x117a4da9 */
  if ((C.sf==C.of)) goto L_117a4da9;
  /* 117a4d63 push 0x117c2e84 */
  push32((uint32_t)(0x117c2e84u));
  /* 117a4d68 mov ecx, dword ptr [0x117c6604] */
  ECX = (r32((uint32_t)(0x117c6604)));
  /* 117a4d6e push ecx */
  push32((uint32_t)(ECX));
  /* 117a4d6f call 0x1179cd60 */
  push32(0x117a4d74u); f_1179cd60();
  /* 117a4d74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4d77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a4d7a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4d7d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a4d80 mov eax, dword ptr [edx + 0x117c6604] */
  EAX = (r32((uint32_t)(EDX + 0x117c6604)));
  /* 117a4d86 push eax */
  push32((uint32_t)(EAX));
  /* 117a4d87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a4d8a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a4d8d mov edx, dword ptr [ecx + 0x117c6604] */
  EDX = (r32((uint32_t)(ECX + 0x117c6604)));
  /* 117a4d93 push edx */
  push32((uint32_t)(EDX));
  /* 117a4d94 call 0x117a2820 */
  push32(0x117a4d99u); f_117a2820();
  /* 117a4d99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4d9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a4d9e je 0x117a4da7 */
  if (C.zf) goto L_117a4da7;
  /* 117a4da0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_117a4da7:;
  /* 117a4da7 jmp 0x117a4dd7 */
  goto L_117a4dd7;
L_117a4da9:;
  /* 117a4da9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4dad jne 0x117a4db6 */
  if (!C.zf) goto L_117a4db6;
  /* 117a4daf mov eax, dword ptr [0x117c6604] */
  EAX = (r32((uint32_t)(0x117c6604)));
  /* 117a4db4 jmp 0x117a4ddc */
  goto L_117a4ddc;
L_117a4db6:;
  /* 117a4db6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a4db8 mov eax, dword ptr [0x117c6604] */
  EAX = (r32((uint32_t)(0x117c6604)));
  /* 117a4dbd push eax */
  push32((uint32_t)(EAX));
  /* 117a4dbe call 0x1179a830 */
  push32(0x117a4dc3u); f_1179a830();
  /* 117a4dc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4dc6 mov dword ptr [0x117c6604], 0 */
  w32((uint32_t)(0x117c6604), (0x0u));
  /* 117a4dd0 mov eax, dword ptr [0x117c661c] */
  EAX = (r32((uint32_t)(0x117c661c)));
  /* 117a4dd5 jmp 0x117a4ddc */
  goto L_117a4ddc;
L_117a4dd7:;
  /* 117a4dd7 jmp 0x117a4d25 */
  goto L_117a4d25;
L_117a4ddc:;
  /* 117a4ddc mov esp, ebp */
  ESP = (EBP);
  /* 117a4dde pop ebp */
  EBP = (pop32());
  /* 117a4ddf ret  */
  ESPCHK(0x117a4ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014de0 @ 0x117a4de0 (388 bytes, 115 insns) */
void f_117a4de0(void) {
  FTRACE(0x117a4de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a4de0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a4de1 mov ebp, esp */
  EBP = (ESP);
  /* 117a4de3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a4de9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4ded jne 0x117a4df6 */
  if (!C.zf) goto L_117a4df6;
  /* 117a4def xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a4df1 jmp 0x117a4f60 */
  goto L_117a4f60;
L_117a4df6:;
  /* 117a4df6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4df9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a4dfc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4dff jne 0x117a4e50 */
  if (!C.zf) goto L_117a4e50;
  /* 117a4e01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4e04 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 117a4e08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a4e0a jne 0x117a4e50 */
  if (!C.zf) goto L_117a4e50;
  /* 117a4e0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a4e0f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 117a4e12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a4e15 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 117a4e19 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4e1d je 0x117a4e39 */
  if (C.zf) goto L_117a4e39;
  /* 117a4e1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a4e22 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 117a4e27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a4e2a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 117a4e30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a4e33 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_117a4e39:;
  /* 117a4e39 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4e3d je 0x117a4e48 */
  if (C.zf) goto L_117a4e48;
  /* 117a4e3f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a4e42 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_117a4e48:;
  /* 117a4e48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a4e4b jmp 0x117a4f60 */
  goto L_117a4f60;
L_117a4e50:;
  /* 117a4e50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4e53 push ecx */
  push32((uint32_t)(ECX));
  /* 117a4e54 push 0x117c6578 */
  push32((uint32_t)(0x117c6578u));
  /* 117a4e59 call 0x117a2820 */
  push32(0x117a4e5eu); f_117a2820();
  /* 117a4e5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4e61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a4e63 je 0x117a4f18 */
  if (C.zf) goto L_117a4f18;
  /* 117a4e69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4e6c push edx */
  push32((uint32_t)(EDX));
  /* 117a4e6d push 0x117c64f4 */
  push32((uint32_t)(0x117c64f4u));
  /* 117a4e72 call 0x117a2820 */
  push32(0x117a4e77u); f_117a2820();
  /* 117a4e77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4e7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a4e7c je 0x117a4f18 */
  if (C.zf) goto L_117a4f18;
  /* 117a4e82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4e85 push eax */
  push32((uint32_t)(EAX));
  /* 117a4e86 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 117a4e8c push ecx */
  push32((uint32_t)(ECX));
  /* 117a4e8d call 0x117a4fd0 */
  push32(0x117a4e92u); f_117a4fd0();
  /* 117a4e92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4e95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a4e97 je 0x117a4ea0 */
  if (C.zf) goto L_117a4ea0;
  /* 117a4e99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a4e9b jmp 0x117a4f60 */
  goto L_117a4f60;
L_117a4ea0:;
  /* 117a4ea0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 117a4ea6 push edx */
  push32((uint32_t)(EDX));
  /* 117a4ea7 push 0x117c7e94 */
  push32((uint32_t)(0x117c7e94u));
  /* 117a4eac lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 117a4eb2 push eax */
  push32((uint32_t)(EAX));
  /* 117a4eb3 call 0x117a71f0 */
  push32(0x117a4eb8u); f_117a71f0();
  /* 117a4eb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4ebb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a4ebd jne 0x117a4ec6 */
  if (!C.zf) goto L_117a4ec6;
  /* 117a4ebf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a4ec1 jmp 0x117a4f60 */
  goto L_117a4f60;
L_117a4ec6:;
  /* 117a4ec6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a4ec8 mov cx, word ptr [0x117c7e98] */
  CX = (r16((uint32_t)(0x117c7e98)));
  /* 117a4ecf mov dword ptr [0x117c7e9c], ecx */
  w32((uint32_t)(0x117c7e9c), (ECX));
  /* 117a4ed5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 117a4edb push edx */
  push32((uint32_t)(EDX));
  /* 117a4edc push 0x117c6578 */
  push32((uint32_t)(0x117c6578u));
  /* 117a4ee1 call 0x117a5130 */
  push32(0x117a4ee6u); f_117a5130();
  /* 117a4ee6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4ee9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4eec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a4eef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a4ef1 je 0x117a4f06 */
  if (C.zf) goto L_117a4f06;
  /* 117a4ef3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4ef6 push edx */
  push32((uint32_t)(EDX));
  /* 117a4ef7 push 0x117c64f4 */
  push32((uint32_t)(0x117c64f4u));
  /* 117a4efc call 0x1179cd50 */
  push32(0x117a4f01u); f_1179cd50();
  /* 117a4f01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4f04 jmp 0x117a4f18 */
  goto L_117a4f18;
L_117a4f06:;
  /* 117a4f06 push 0x117c6578 */
  push32((uint32_t)(0x117c6578u));
  /* 117a4f0b push 0x117c64f4 */
  push32((uint32_t)(0x117c64f4u));
  /* 117a4f10 call 0x1179cd50 */
  push32(0x117a4f15u); f_1179cd50();
  /* 117a4f15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a4f18:;
  /* 117a4f18 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4f1c je 0x117a4f31 */
  if (C.zf) goto L_117a4f31;
  /* 117a4f1e push 6 */
  push32((uint32_t)(0x6u));
  /* 117a4f20 push 0x117c7e94 */
  push32((uint32_t)(0x117c7e94u));
  /* 117a4f25 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a4f28 push eax */
  push32((uint32_t)(EAX));
  /* 117a4f29 call 0x117a0fc0 */
  push32(0x117a4f2eu); f_117a0fc0();
  /* 117a4f2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a4f31:;
  /* 117a4f31 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4f35 je 0x117a4f4a */
  if (C.zf) goto L_117a4f4a;
  /* 117a4f37 push 4 */
  push32((uint32_t)(0x4u));
  /* 117a4f39 push 0x117c7e9c */
  push32((uint32_t)(0x117c7e9cu));
  /* 117a4f3e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a4f41 push ecx */
  push32((uint32_t)(ECX));
  /* 117a4f42 call 0x117a0fc0 */
  push32(0x117a4f47u); f_117a0fc0();
  /* 117a4f47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a4f4a:;
  /* 117a4f4a push 0x117c6578 */
  push32((uint32_t)(0x117c6578u));
  /* 117a4f4f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a4f52 push edx */
  push32((uint32_t)(EDX));
  /* 117a4f53 call 0x1179cd50 */
  push32(0x117a4f58u); f_1179cd50();
  /* 117a4f58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4f5b mov eax, 0x117c6578 */
  EAX = (0x117c6578u);
L_117a4f60:;
  /* 117a4f60 mov esp, ebp */
  ESP = (EBP);
  /* 117a4f62 pop ebp */
  EBP = (pop32());
  /* 117a4f63 ret  */
  ESPCHK(0x117a4de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f70 @ 0x117a4f70 (7 bytes, 5 insns) */
void f_117a4f70(void) {
  FTRACE(0x117a4f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a4f70 push ebp */
  push32((uint32_t)(EBP));
  /* 117a4f71 mov ebp, esp */
  EBP = (ESP);
  /* 117a4f73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a4f75 pop ebp */
  EBP = (pop32());
  /* 117a4f76 ret  */
  ESPCHK(0x117a4f70u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x117a4f80 (79 bytes, 28 insns) */
void f_117a4f80(void) {
  FTRACE(0x117a4f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a4f80 push ebp */
  push32((uint32_t)(EBP));
  /* 117a4f81 mov ebp, esp */
  EBP = (ESP);
  /* 117a4f83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a4f86 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 117a4f89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a4f8c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117a4f93 jmp 0x117a4f9e */
  goto L_117a4f9e;
L_117a4f95:;
  /* 117a4f95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a4f98 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4f9b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_117a4f9e:;
  /* 117a4f9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a4fa1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a4fa4 jge 0x117a4fc4 */
  if ((C.sf==C.of)) goto L_117a4fc4;
  /* 117a4fa6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a4fa9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4fac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a4faf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a4fb2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 117a4fb5 push edx */
  push32((uint32_t)(EDX));
  /* 117a4fb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4fb9 push eax */
  push32((uint32_t)(EAX));
  /* 117a4fba call 0x1179cd60 */
  push32(0x117a4fbfu); f_1179cd60();
  /* 117a4fbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4fc2 jmp 0x117a4f95 */
  goto L_117a4f95;
L_117a4fc4:;
  /* 117a4fc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a4fcb mov esp, ebp */
  ESP = (EBP);
  /* 117a4fcd pop ebp */
  EBP = (pop32());
  /* 117a4fce ret  */
  ESPCHK(0x117a4f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10014fd0 @ 0x117a4fd0 (349 bytes, 122 insns) */
void f_117a4fd0(void) {
  FTRACE(0x117a4fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a4fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a4fd1 mov ebp, esp */
  EBP = (ESP);
  /* 117a4fd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a4fd6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 117a4fdb push 0 */
  push32((uint32_t)(0x0u));
  /* 117a4fdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a4fe0 push eax */
  push32((uint32_t)(EAX));
  /* 117a4fe1 call 0x1179e450 */
  push32(0x117a4fe6u); f_1179e450();
  /* 117a4fe6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a4fe9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a4fec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117a4fef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a4ff1 jne 0x117a4ffa */
  if (!C.zf) goto L_117a4ffa;
  /* 117a4ff3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a4ff5 jmp 0x117a5129 */
  goto L_117a5129;
L_117a4ffa:;
  /* 117a4ffa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a4ffd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117a5000 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5003 jne 0x117a5030 */
  if (!C.zf) goto L_117a5030;
  /* 117a5005 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a5008 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 117a500c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a500e je 0x117a5030 */
  if (C.zf) goto L_117a5030;
  /* 117a5010 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a5013 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5016 push ecx */
  push32((uint32_t)(ECX));
  /* 117a5017 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a501a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5020 push edx */
  push32((uint32_t)(EDX));
  /* 117a5021 call 0x1179cd50 */
  push32(0x117a5026u); f_1179cd50();
  /* 117a5026 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5029 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a502b jmp 0x117a5129 */
  goto L_117a5129;
L_117a5030:;
  /* 117a5030 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a5037 jmp 0x117a5042 */
  goto L_117a5042;
L_117a5039:;
  /* 117a5039 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a503c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a503f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117a5042:;
  /* 117a5042 push 0x117c2e9c */
  push32((uint32_t)(0x117c2e9cu));
  /* 117a5047 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a504a push ecx */
  push32((uint32_t)(ECX));
  /* 117a504b call 0x117a7130 */
  push32(0x117a5050u); f_117a7130();
  /* 117a5050 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5053 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117a5056 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a505a jne 0x117a5064 */
  if (!C.zf) goto L_117a5064;
  /* 117a505c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a505f jmp 0x117a5129 */
  goto L_117a5129;
L_117a5064:;
  /* 117a5064 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a5067 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a506a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a506c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 117a506f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5073 jne 0x117a509a */
  if (!C.zf) goto L_117a509a;
  /* 117a5075 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5079 jge 0x117a509a */
  if ((C.sf==C.of)) goto L_117a509a;
  /* 117a507b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 117a507f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5082 je 0x117a509a */
  if (C.zf) goto L_117a509a;
  /* 117a5084 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5087 push edx */
  push32((uint32_t)(EDX));
  /* 117a5088 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a508b push eax */
  push32((uint32_t)(EAX));
  /* 117a508c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a508f push ecx */
  push32((uint32_t)(ECX));
  /* 117a5090 call 0x1179d5c0 */
  push32(0x117a5095u); f_1179d5c0();
  /* 117a5095 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5098 jmp 0x117a5100 */
  goto L_117a5100;
L_117a509a:;
  /* 117a509a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a509e jne 0x117a50c8 */
  if (!C.zf) goto L_117a50c8;
  /* 117a50a0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a50a4 jge 0x117a50c8 */
  if ((C.sf==C.of)) goto L_117a50c8;
  /* 117a50a6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 117a50aa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a50ad je 0x117a50c8 */
  if (C.zf) goto L_117a50c8;
  /* 117a50af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a50b2 push eax */
  push32((uint32_t)(EAX));
  /* 117a50b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a50b6 push ecx */
  push32((uint32_t)(ECX));
  /* 117a50b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a50ba add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a50bd push edx */
  push32((uint32_t)(EDX));
  /* 117a50be call 0x1179d5c0 */
  push32(0x117a50c3u); f_1179d5c0();
  /* 117a50c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a50c6 jmp 0x117a5100 */
  goto L_117a5100;
L_117a50c8:;
  /* 117a50c8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a50cc jne 0x117a50fb */
  if (!C.zf) goto L_117a50fb;
  /* 117a50ce movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 117a50d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a50d4 je 0x117a50df */
  if (C.zf) goto L_117a50df;
  /* 117a50d6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 117a50da cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a50dd jne 0x117a50fb */
  if (!C.zf) goto L_117a50fb;
L_117a50df:;
  /* 117a50df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a50e2 push edx */
  push32((uint32_t)(EDX));
  /* 117a50e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a50e6 push eax */
  push32((uint32_t)(EAX));
  /* 117a50e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a50ea add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a50f0 push ecx */
  push32((uint32_t)(ECX));
  /* 117a50f1 call 0x1179d5c0 */
  push32(0x117a50f6u); f_1179d5c0();
  /* 117a50f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a50f9 jmp 0x117a5100 */
  goto L_117a5100;
L_117a50fb:;
  /* 117a50fb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a50fe jmp 0x117a5129 */
  goto L_117a5129;
L_117a5100:;
  /* 117a5100 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 117a5104 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5107 jne 0x117a510b */
  if (!C.zf) goto L_117a510b;
  /* 117a5109 jmp 0x117a5127 */
  goto L_117a5127;
L_117a510b:;
  /* 117a510b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 117a510f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a5111 jne 0x117a5115 */
  if (!C.zf) goto L_117a5115;
  /* 117a5113 jmp 0x117a5127 */
  goto L_117a5127;
L_117a5115:;
  /* 117a5115 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5118 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a511b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 117a511f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 117a5122 jmp 0x117a5039 */
  goto L_117a5039;
L_117a5127:;
  /* 117a5127 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a5129:;
  /* 117a5129 mov esp, ebp */
  ESP = (EBP);
  /* 117a512b pop ebp */
  EBP = (pop32());
  /* 117a512c ret  */
  ESPCHK(0x117a4fd0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x117a5130 (101 bytes, 36 insns) */
void f_117a5130(void) {
  FTRACE(0x117a5130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a5130 push ebp */
  push32((uint32_t)(EBP));
  /* 117a5131 mov ebp, esp */
  EBP = (ESP);
  /* 117a5133 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a5136 push eax */
  push32((uint32_t)(EAX));
  /* 117a5137 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a513a push ecx */
  push32((uint32_t)(ECX));
  /* 117a513b call 0x1179cd50 */
  push32(0x117a5140u); f_1179cd50();
  /* 117a5140 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5143 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a5146 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 117a514a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a514c je 0x117a5168 */
  if (C.zf) goto L_117a5168;
  /* 117a514e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a5151 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5154 push ecx */
  push32((uint32_t)(ECX));
  /* 117a5155 push 0x117c2ea4 */
  push32((uint32_t)(0x117c2ea4u));
  /* 117a515a push 2 */
  push32((uint32_t)(0x2u));
  /* 117a515c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a515f push edx */
  push32((uint32_t)(EDX));
  /* 117a5160 call 0x117a4f80 */
  push32(0x117a5165u); f_117a4f80();
  /* 117a5165 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a5168:;
  /* 117a5168 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a516b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 117a5172 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a5174 je 0x117a5193 */
  if (C.zf) goto L_117a5193;
  /* 117a5176 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a5179 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a517f push edx */
  push32((uint32_t)(EDX));
  /* 117a5180 push 0x117c2ea0 */
  push32((uint32_t)(0x117c2ea0u));
  /* 117a5185 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a5187 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a518a push eax */
  push32((uint32_t)(EAX));
  /* 117a518b call 0x117a4f80 */
  push32(0x117a5190u); f_117a4f80();
  /* 117a5190 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a5193:;
  /* 117a5193 pop ebp */
  EBP = (pop32());
  /* 117a5194 ret  */
  ESPCHK(0x117a5130u, _esp0);
  ESP += 4; return;
}

/* FUN_100151a0 @ 0x117a51a0 (970 bytes, 340 insns) */
void f_117a51a0(void) {
  FTRACE(0x117a51a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a51a0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a51a1 mov ebp, esp */
  EBP = (ESP);
  /* 117a51a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117a51a5 push 0x117c2ef0 */
  push32((uint32_t)(0x117c2ef0u));
  /* 117a51aa push 0x117a3d08 */
  push32((uint32_t)(0x117a3d08u));
  /* 117a51af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 117a51b5 push eax */
  push32((uint32_t)(EAX));
  /* 117a51b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 117a51bd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a51c0 push ebx */
  push32((uint32_t)(EBX));
  /* 117a51c1 push esi */
  push32((uint32_t)(ESI));
  /* 117a51c2 push edi */
  push32((uint32_t)(EDI));
  /* 117a51c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117a51c6 cmp dword ptr [0x117c7ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a51cd jne 0x117a5226 */
  if (!C.zf) goto L_117a5226;
  /* 117a51cf push 1 */
  push32((uint32_t)(0x1u));
  /* 117a51d1 push 0x117c2de8 */
  push32((uint32_t)(0x117c2de8u));
  /* 117a51d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a51d8 push 0x117c2de8 */
  push32((uint32_t)(0x117c2de8u));
  /* 117a51dd push 0 */
  push32((uint32_t)(0x0u));
  /* 117a51df push 0 */
  push32((uint32_t)(0x0u));
  /* 117a51e1 call dword ptr [0x117ca300] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca300))), 0x117a51e7u);
  /* 117a51e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a51e9 je 0x117a51f7 */
  if (C.zf) goto L_117a51f7;
  /* 117a51eb mov dword ptr [0x117c7ea0], 1 */
  w32((uint32_t)(0x117c7ea0), (0x1u));
  /* 117a51f5 jmp 0x117a5226 */
  goto L_117a5226;
L_117a51f7:;
  /* 117a51f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a51f9 push 0x117c2de4 */
  push32((uint32_t)(0x117c2de4u));
  /* 117a51fe push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5200 push 0x117c2de4 */
  push32((uint32_t)(0x117c2de4u));
  /* 117a5205 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a5207 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a5209 call dword ptr [0x117ca304] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca304))), 0x117a520fu);
  /* 117a520f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a5211 je 0x117a521f */
  if (C.zf) goto L_117a521f;
  /* 117a5213 mov dword ptr [0x117c7ea0], 2 */
  w32((uint32_t)(0x117c7ea0), (0x2u));
  /* 117a521d jmp 0x117a5226 */
  goto L_117a5226;
L_117a521f:;
  /* 117a521f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a5221 jmp 0x117a5584 */
  goto L_117a5584;
L_117a5226:;
  /* 117a5226 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a522a jle 0x117a523f */
  if ((C.zf||C.sf!=C.of)) goto L_117a523f;
  /* 117a522c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a522f push eax */
  push32((uint32_t)(EAX));
  /* 117a5230 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a5233 push ecx */
  push32((uint32_t)(ECX));
  /* 117a5234 call 0x117a55a0 */
  push32(0x117a5239u); f_117a55a0();
  /* 117a5239 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a523c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_117a523f:;
  /* 117a523f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5243 jle 0x117a5258 */
  if ((C.zf||C.sf!=C.of)) goto L_117a5258;
  /* 117a5245 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 117a5248 push edx */
  push32((uint32_t)(EDX));
  /* 117a5249 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a524c push eax */
  push32((uint32_t)(EAX));
  /* 117a524d call 0x117a55a0 */
  push32(0x117a5252u); f_117a55a0();
  /* 117a5252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5255 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_117a5258:;
  /* 117a5258 cmp dword ptr [0x117c7ea0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ea0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a525f jne 0x117a5284 */
  if (!C.zf) goto L_117a5284;
  /* 117a5261 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 117a5264 push ecx */
  push32((uint32_t)(ECX));
  /* 117a5265 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a5268 push edx */
  push32((uint32_t)(EDX));
  /* 117a5269 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a526c push eax */
  push32((uint32_t)(EAX));
  /* 117a526d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a5270 push ecx */
  push32((uint32_t)(ECX));
  /* 117a5271 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a5274 push edx */
  push32((uint32_t)(EDX));
  /* 117a5275 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5278 push eax */
  push32((uint32_t)(EAX));
  /* 117a5279 call dword ptr [0x117ca304] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca304))), 0x117a527fu);
  /* 117a527f jmp 0x117a5584 */
  goto L_117a5584;
L_117a5284:;
  /* 117a5284 cmp dword ptr [0x117c7ea0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117c7ea0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a528b jne 0x117a5582 */
  if (!C.zf) goto L_117a5582;
  /* 117a5291 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5295 jne 0x117a52a0 */
  if (!C.zf) goto L_117a52a0;
  /* 117a5297 mov ecx, dword ptr [0x117c7e80] */
  ECX = (r32((uint32_t)(0x117c7e80)));
  /* 117a529d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_117a52a0:;
  /* 117a52a0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a52a4 je 0x117a52b0 */
  if (C.zf) goto L_117a52b0;
  /* 117a52a6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a52aa jne 0x117a542c */
  if (!C.zf) goto L_117a542c;
L_117a52b0:;
  /* 117a52b0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a52b3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a52b6 jne 0x117a52c2 */
  if (!C.zf) goto L_117a52c2;
  /* 117a52b8 mov eax, 2 */
  EAX = (0x2u);
  /* 117a52bd jmp 0x117a5584 */
  goto L_117a5584;
L_117a52c2:;
  /* 117a52c2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a52c6 jle 0x117a52d2 */
  if ((C.zf||C.sf!=C.of)) goto L_117a52d2;
  /* 117a52c8 mov eax, 1 */
  EAX = (0x1u);
  /* 117a52cd jmp 0x117a5584 */
  goto L_117a5584;
L_117a52d2:;
  /* 117a52d2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a52d6 jle 0x117a52e2 */
  if ((C.zf||C.sf!=C.of)) goto L_117a52e2;
  /* 117a52d8 mov eax, 3 */
  EAX = (0x3u);
  /* 117a52dd jmp 0x117a5584 */
  goto L_117a5584;
L_117a52e2:;
  /* 117a52e2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 117a52e5 push eax */
  push32((uint32_t)(EAX));
  /* 117a52e6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 117a52e9 push ecx */
  push32((uint32_t)(ECX));
  /* 117a52ea call dword ptr [0x117ca334] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca334))), 0x117a52f0u);
  /* 117a52f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a52f2 jne 0x117a52fb */
  if (!C.zf) goto L_117a52fb;
  /* 117a52f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a52f6 jmp 0x117a5584 */
  goto L_117a5584;
L_117a52fb:;
  /* 117a52fb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a52ff jne 0x117a5307 */
  if (!C.zf) goto L_117a5307;
  /* 117a5301 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5305 je 0x117a5334 */
  if (C.zf) goto L_117a5334;
L_117a5307:;
  /* 117a5307 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a530b jne 0x117a5313 */
  if (!C.zf) goto L_117a5313;
  /* 117a530d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5311 je 0x117a5334 */
  if (C.zf) goto L_117a5334;
L_117a5313:;
  /* 117a5313 push 0x117c2eb0 */
  push32((uint32_t)(0x117c2eb0u));
  /* 117a5318 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a531a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 117a531f push 0x117c2ea8 */
  push32((uint32_t)(0x117c2ea8u));
  /* 117a5324 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a5326 call 0x11798d70 */
  push32(0x117a532bu); f_11798d70();
  /* 117a532b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a532e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5331 jne 0x117a5334 */
  if (!C.zf) goto L_117a5334;
  /* 117a5333 int3  */
  x86_unimpl("int3 @ 0x117a5333");
L_117a5334:;
  /* 117a5334 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a5336 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a5338 jne 0x117a52fb */
  if (!C.zf) goto L_117a52fb;
  /* 117a533a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a533e jle 0x117a53b3 */
  if ((C.zf||C.sf!=C.of)) goto L_117a53b3;
  /* 117a5340 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5344 jae 0x117a5350 */
  if (!C.cf) goto L_117a5350;
  /* 117a5346 mov eax, 3 */
  EAX = (0x3u);
  /* 117a534b jmp 0x117a5584 */
  goto L_117a5584;
L_117a5350:;
  /* 117a5350 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 117a5353 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 117a5356 jmp 0x117a5361 */
  goto L_117a5361;
L_117a5358:;
  /* 117a5358 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 117a535b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a535e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_117a5361:;
  /* 117a5361 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 117a5364 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a5366 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a5368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a536a je 0x117a53a9 */
  if (C.zf) goto L_117a53a9;
  /* 117a536c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 117a536f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a5371 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 117a5374 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a5376 je 0x117a53a9 */
  if (C.zf) goto L_117a53a9;
  /* 117a5378 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a537b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a537d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117a537f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 117a5382 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a5384 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a5386 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5388 jl 0x117a53a7 */
  if ((C.sf!=C.of)) goto L_117a53a7;
  /* 117a538a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a538d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a538f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117a5391 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 117a5394 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5396 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 117a5399 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a539b jg 0x117a53a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_117a53a7;
  /* 117a539d mov eax, 2 */
  EAX = (0x2u);
  /* 117a53a2 jmp 0x117a5584 */
  goto L_117a5584;
L_117a53a7:;
  /* 117a53a7 jmp 0x117a5358 */
  goto L_117a5358;
L_117a53a9:;
  /* 117a53a9 mov eax, 3 */
  EAX = (0x3u);
  /* 117a53ae jmp 0x117a5584 */
  goto L_117a5584;
L_117a53b3:;
  /* 117a53b3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a53b7 jle 0x117a542c */
  if ((C.zf||C.sf!=C.of)) goto L_117a542c;
  /* 117a53b9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a53bd jae 0x117a53c9 */
  if (!C.cf) goto L_117a53c9;
  /* 117a53bf mov eax, 1 */
  EAX = (0x1u);
  /* 117a53c4 jmp 0x117a5584 */
  goto L_117a5584;
L_117a53c9:;
  /* 117a53c9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 117a53cc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 117a53cf jmp 0x117a53da */
  goto L_117a53da;
L_117a53d1:;
  /* 117a53d1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 117a53d4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a53d7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_117a53da:;
  /* 117a53da mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 117a53dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a53df mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117a53e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a53e3 je 0x117a5422 */
  if (C.zf) goto L_117a5422;
  /* 117a53e5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 117a53e8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a53ea mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 117a53ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a53ef je 0x117a5422 */
  if (C.zf) goto L_117a5422;
  /* 117a53f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a53f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a53f6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117a53f8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 117a53fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117a53fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117a53ff cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5401 jl 0x117a5420 */
  if ((C.sf!=C.of)) goto L_117a5420;
  /* 117a5403 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a5406 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5408 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117a540a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 117a540d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a540f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 117a5412 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5414 jg 0x117a5420 */
  if ((!C.zf&&C.sf==C.of)) goto L_117a5420;
  /* 117a5416 mov eax, 2 */
  EAX = (0x2u);
  /* 117a541b jmp 0x117a5584 */
  goto L_117a5584;
L_117a5420:;
  /* 117a5420 jmp 0x117a53d1 */
  goto L_117a53d1;
L_117a5422:;
  /* 117a5422 mov eax, 1 */
  EAX = (0x1u);
  /* 117a5427 jmp 0x117a5584 */
  goto L_117a5584;
L_117a542c:;
  /* 117a542c push 0 */
  push32((uint32_t)(0x0u));
  /* 117a542e push 0 */
  push32((uint32_t)(0x0u));
  /* 117a5430 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a5433 push ecx */
  push32((uint32_t)(ECX));
  /* 117a5434 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a5437 push edx */
  push32((uint32_t)(EDX));
  /* 117a5438 push 9 */
  push32((uint32_t)(0x9u));
  /* 117a543a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 117a543d push eax */
  push32((uint32_t)(EAX));
  /* 117a543e call dword ptr [0x117ca328] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca328))), 0x117a5444u);
  /* 117a5444 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 117a5447 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a544b jne 0x117a5454 */
  if (!C.zf) goto L_117a5454;
  /* 117a544d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a544f jmp 0x117a5584 */
  goto L_117a5584;
L_117a5454:;
  /* 117a5454 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117a545b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117a545e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117a5460 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5463 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117a5465 call 0x1179cf40 */
  push32(0x117a546au); f_1179cf40();
  /* 117a546a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 117a546d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117a5470 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 117a5473 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 117a5476 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 117a547d jmp 0x117a5496 */
  goto L_117a5496;
  /* 117a547f mov eax, 1 */
  EAX = (0x1u);
  /* 117a5484 ret  */
  ESPCHK(0x117a51a0u, _esp0);
  ESP += 4; return;
  /* 117a5485 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117a5488 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 117a548f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_117a5496:;
  /* 117a5496 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a549a jne 0x117a54a3 */
  if (!C.zf) goto L_117a54a3;
  /* 117a549c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a549e jmp 0x117a5584 */
  goto L_117a5584;
L_117a54a3:;
  /* 117a54a3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117a54a6 push edx */
  push32((uint32_t)(EDX));
  /* 117a54a7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a54aa push eax */
  push32((uint32_t)(EAX));
  /* 117a54ab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117a54ae push ecx */
  push32((uint32_t)(ECX));
  /* 117a54af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117a54b2 push edx */
  push32((uint32_t)(EDX));
  /* 117a54b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a54b5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 117a54b8 push eax */
  push32((uint32_t)(EAX));
  /* 117a54b9 call dword ptr [0x117ca328] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca328))), 0x117a54bfu);
  /* 117a54bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a54c1 jne 0x117a54ca */
  if (!C.zf) goto L_117a54ca;
  /* 117a54c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a54c5 jmp 0x117a5584 */
  goto L_117a5584;
L_117a54ca:;
  /* 117a54ca push 0 */
  push32((uint32_t)(0x0u));
  /* 117a54cc push 0 */
  push32((uint32_t)(0x0u));
  /* 117a54ce mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 117a54d1 push ecx */
  push32((uint32_t)(ECX));
  /* 117a54d2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a54d5 push edx */
  push32((uint32_t)(EDX));
  /* 117a54d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 117a54d8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 117a54db push eax */
  push32((uint32_t)(EAX));
  /* 117a54dc call dword ptr [0x117ca328] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca328))), 0x117a54e2u);
  /* 117a54e2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117a54e5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a54e9 jne 0x117a54f2 */
  if (!C.zf) goto L_117a54f2;
  /* 117a54eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a54ed jmp 0x117a5584 */
  goto L_117a5584;
L_117a54f2:;
  /* 117a54f2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117a54f9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a54fc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117a54fe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5501 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117a5503 call 0x1179cf40 */
  push32(0x117a5508u); f_1179cf40();
  /* 117a5508 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 117a550b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117a550e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 117a5511 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 117a5514 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 117a551b jmp 0x117a5534 */
  goto L_117a5534;
  /* 117a551d mov eax, 1 */
  EAX = (0x1u);
  /* 117a5522 ret  */
  ESPCHK(0x117a51a0u, _esp0);
  ESP += 4; return;
  /* 117a5523 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117a5526 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 117a552d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_117a5534:;
  /* 117a5534 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5538 jne 0x117a553e */
  if (!C.zf) goto L_117a553e;
  /* 117a553a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a553c jmp 0x117a5584 */
  goto L_117a5584;
L_117a553e:;
  /* 117a553e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a5541 push edx */
  push32((uint32_t)(EDX));
  /* 117a5542 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a5545 push eax */
  push32((uint32_t)(EAX));
  /* 117a5546 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 117a5549 push ecx */
  push32((uint32_t)(ECX));
  /* 117a554a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117a554d push edx */
  push32((uint32_t)(EDX));
  /* 117a554e push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5550 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 117a5553 push eax */
  push32((uint32_t)(EAX));
  /* 117a5554 call dword ptr [0x117ca328] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca328))), 0x117a555au);
  /* 117a555a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a555c jne 0x117a5562 */
  if (!C.zf) goto L_117a5562;
  /* 117a555e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a5560 jmp 0x117a5584 */
  goto L_117a5584;
L_117a5562:;
  /* 117a5562 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117a5565 push ecx */
  push32((uint32_t)(ECX));
  /* 117a5566 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 117a5569 push edx */
  push32((uint32_t)(EDX));
  /* 117a556a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117a556d push eax */
  push32((uint32_t)(EAX));
  /* 117a556e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117a5571 push ecx */
  push32((uint32_t)(ECX));
  /* 117a5572 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a5575 push edx */
  push32((uint32_t)(EDX));
  /* 117a5576 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5579 push eax */
  push32((uint32_t)(EAX));
  /* 117a557a call dword ptr [0x117ca300] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca300))), 0x117a5580u);
  /* 117a5580 jmp 0x117a5584 */
  goto L_117a5584;
L_117a5582:;
  /* 117a5582 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a5584:;
  /* 117a5584 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 117a5587 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a558a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 117a5591 pop edi */
  EDI = (pop32());
  /* 117a5592 pop esi */
  ESI = (pop32());
  /* 117a5593 pop ebx */
  EBX = (pop32());
  /* 117a5594 mov esp, ebp */
  ESP = (EBP);
  /* 117a5596 pop ebp */
  EBP = (pop32());
  /* 117a5597 ret  */
  ESPCHK(0x117a51a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100155a0 @ 0x117a55a0 (80 bytes, 32 insns) */
void f_117a55a0(void) {
  FTRACE(0x117a55a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a55a0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a55a1 mov ebp, esp */
  EBP = (ESP);
  /* 117a55a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a55a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a55a9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a55ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a55af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117a55b2:;
  /* 117a55b2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a55b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a55b8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a55bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a55be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a55c0 je 0x117a55d7 */
  if (C.zf) goto L_117a55d7;
  /* 117a55c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a55c5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117a55c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a55ca je 0x117a55d7 */
  if (C.zf) goto L_117a55d7;
  /* 117a55cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a55cf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a55d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a55d5 jmp 0x117a55b2 */
  goto L_117a55b2;
L_117a55d7:;
  /* 117a55d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a55da movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117a55dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a55df jne 0x117a55e9 */
  if (!C.zf) goto L_117a55e9;
  /* 117a55e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a55e4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a55e7 jmp 0x117a55ec */
  goto L_117a55ec;
L_117a55e9:;
  /* 117a55e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_117a55ec:;
  /* 117a55ec mov esp, ebp */
  ESP = (EBP);
  /* 117a55ee pop ebp */
  EBP = (pop32());
  /* 117a55ef ret  */
  ESPCHK(0x117a55a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100155f0 @ 0x117a55f0 (736 bytes, 224 insns) */
void f_117a55f0(void) {
  FTRACE(0x117a55f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a55f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a55f1 mov ebp, esp */
  EBP = (ESP);
  /* 117a55f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a55f6 push esi */
  push32((uint32_t)(ESI));
  /* 117a55f7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a55fb je 0x117a561c */
  if (C.zf) goto L_117a561c;
  /* 117a55fd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 117a55ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5602 push eax */
  push32((uint32_t)(EAX));
  /* 117a5603 call 0x117a7f90 */
  push32(0x117a5608u); f_117a7f90();
  /* 117a5608 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a560b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117a560e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5612 je 0x117a561c */
  if (C.zf) goto L_117a561c;
  /* 117a5614 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5617 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a561a jne 0x117a5624 */
  if (!C.zf) goto L_117a5624;
L_117a561c:;
  /* 117a561c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a561f jmp 0x117a58cb */
  goto L_117a58cb;
L_117a5624:;
  /* 117a5624 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a5627 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 117a562b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a562d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a562f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117a5630 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 117a5633 mov ecx, dword ptr [0x117c7bd8] */
  ECX = (r32((uint32_t)(0x117c7bd8)));
  /* 117a5639 cmp ecx, dword ptr [0x117c7bdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117c7bdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a563f jne 0x117a5655 */
  if (!C.zf) goto L_117a5655;
  /* 117a5641 mov edx, dword ptr [0x117c7bd8] */
  EDX = (r32((uint32_t)(0x117c7bd8)));
  /* 117a5647 push edx */
  push32((uint32_t)(EDX));
  /* 117a5648 call 0x117a5950 */
  push32(0x117a564du); f_117a5950();
  /* 117a564d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5650 mov dword ptr [0x117c7bd8], eax */
  w32((uint32_t)(0x117c7bd8), (EAX));
L_117a5655:;
  /* 117a5655 cmp dword ptr [0x117c7bd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7bd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a565c jne 0x117a5715 */
  if (!C.zf) goto L_117a5715;
  /* 117a5662 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5666 je 0x117a5687 */
  if (C.zf) goto L_117a5687;
  /* 117a5668 cmp dword ptr [0x117c7be0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7be0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a566f je 0x117a5687 */
  if (C.zf) goto L_117a5687;
  /* 117a5671 call 0x117a3b60 */
  push32(0x117a5676u); f_117a3b60();
  /* 117a5676 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a5678 je 0x117a5682 */
  if (C.zf) goto L_117a5682;
  /* 117a567a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a567d jmp 0x117a58cb */
  goto L_117a58cb;
L_117a5682:;
  /* 117a5682 jmp 0x117a5715 */
  goto L_117a5715;
L_117a5687:;
  /* 117a5687 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a568b je 0x117a5694 */
  if (C.zf) goto L_117a5694;
  /* 117a568d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a568f jmp 0x117a58cb */
  goto L_117a58cb;
L_117a5694:;
  /* 117a5694 cmp dword ptr [0x117c7bd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7bd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a569b jne 0x117a56d4 */
  if (!C.zf) goto L_117a56d4;
  /* 117a569d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 117a56a2 push 0x117c2f08 */
  push32((uint32_t)(0x117c2f08u));
  /* 117a56a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a56a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 117a56ab call 0x11799da0 */
  push32(0x117a56b0u); f_11799da0();
  /* 117a56b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a56b3 mov dword ptr [0x117c7bd8], eax */
  w32((uint32_t)(0x117c7bd8), (EAX));
  /* 117a56b8 cmp dword ptr [0x117c7bd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7bd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a56bf jne 0x117a56c9 */
  if (!C.zf) goto L_117a56c9;
  /* 117a56c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a56c4 jmp 0x117a58cb */
  goto L_117a58cb;
L_117a56c9:;
  /* 117a56c9 mov eax, dword ptr [0x117c7bd8] */
  EAX = (r32((uint32_t)(0x117c7bd8)));
  /* 117a56ce mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_117a56d4:;
  /* 117a56d4 cmp dword ptr [0x117c7be0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7be0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a56db jne 0x117a5715 */
  if (!C.zf) goto L_117a5715;
  /* 117a56dd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 117a56e2 push 0x117c2f08 */
  push32((uint32_t)(0x117c2f08u));
  /* 117a56e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a56e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 117a56eb call 0x11799da0 */
  push32(0x117a56f0u); f_11799da0();
  /* 117a56f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a56f3 mov dword ptr [0x117c7be0], eax */
  w32((uint32_t)(0x117c7be0), (EAX));
  /* 117a56f8 cmp dword ptr [0x117c7be0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7be0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a56ff jne 0x117a5709 */
  if (!C.zf) goto L_117a5709;
  /* 117a5701 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a5704 jmp 0x117a58cb */
  goto L_117a58cb;
L_117a5709:;
  /* 117a5709 mov ecx, dword ptr [0x117c7be0] */
  ECX = (r32((uint32_t)(0x117c7be0)));
  /* 117a570f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_117a5715:;
  /* 117a5715 mov edx, dword ptr [0x117c7bd8] */
  EDX = (r32((uint32_t)(0x117c7bd8)));
  /* 117a571b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 117a571e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a5721 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a5724 push eax */
  push32((uint32_t)(EAX));
  /* 117a5725 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5728 push ecx */
  push32((uint32_t)(ECX));
  /* 117a5729 call 0x117a58d0 */
  push32(0x117a572eu); f_117a58d0();
  /* 117a572e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5731 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a5734 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5738 jl 0x117a57d1 */
  if ((C.sf!=C.of)) goto L_117a57d1;
  /* 117a573e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5741 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5744 je 0x117a57d1 */
  if (C.zf) goto L_117a57d1;
  /* 117a574a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a574e je 0x117a57c3 */
  if (C.zf) goto L_117a57c3;
  /* 117a5750 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a5752 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a5755 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5758 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 117a575b push edx */
  push32((uint32_t)(EDX));
  /* 117a575c call 0x1179a830 */
  push32(0x117a5761u); f_1179a830();
  /* 117a5761 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5764 jmp 0x117a576f */
  goto L_117a576f;
L_117a5766:;
  /* 117a5766 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a5769 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a576c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117a576f:;
  /* 117a576f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a5772 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5775 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5779 je 0x117a5790 */
  if (C.zf) goto L_117a5790;
  /* 117a577b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a577e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5781 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a5784 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5787 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 117a578b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 117a578e jmp 0x117a5766 */
  goto L_117a5766;
L_117a5790:;
  /* 117a5790 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 117a5795 push 0x117c2f08 */
  push32((uint32_t)(0x117c2f08u));
  /* 117a579a push 2 */
  push32((uint32_t)(0x2u));
  /* 117a579c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a579f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 117a57a2 push eax */
  push32((uint32_t)(EAX));
  /* 117a57a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a57a6 push ecx */
  push32((uint32_t)(ECX));
  /* 117a57a7 call 0x1179a230 */
  push32(0x117a57acu); f_1179a230();
  /* 117a57ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a57af mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117a57b2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a57b6 je 0x117a57c1 */
  if (C.zf) goto L_117a57c1;
  /* 117a57b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a57bb mov dword ptr [0x117c7bd8], edx */
  w32((uint32_t)(0x117c7bd8), (EDX));
L_117a57c1:;
  /* 117a57c1 jmp 0x117a57cf */
  goto L_117a57cf;
L_117a57c3:;
  /* 117a57c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a57c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a57c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a57cc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_117a57cf:;
  /* 117a57cf jmp 0x117a5844 */
  goto L_117a5844;
L_117a57d1:;
  /* 117a57d1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a57d5 jne 0x117a583d */
  if (!C.zf) goto L_117a583d;
  /* 117a57d7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a57db jge 0x117a57e5 */
  if ((C.sf==C.of)) goto L_117a57e5;
  /* 117a57dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a57e0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a57e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117a57e5:;
  /* 117a57e5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 117a57ea push 0x117c2f08 */
  push32((uint32_t)(0x117c2f08u));
  /* 117a57ef push 2 */
  push32((uint32_t)(0x2u));
  /* 117a57f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a57f4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 117a57fb push edx */
  push32((uint32_t)(EDX));
  /* 117a57fc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a57ff push eax */
  push32((uint32_t)(EAX));
  /* 117a5800 call 0x1179a230 */
  push32(0x117a5805u); f_1179a230();
  /* 117a5805 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5808 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117a580b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a580f jne 0x117a5819 */
  if (!C.zf) goto L_117a5819;
  /* 117a5811 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a5814 jmp 0x117a58cb */
  goto L_117a58cb;
L_117a5819:;
  /* 117a5819 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a581c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a581f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5822 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 117a5825 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a5828 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a582b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 117a5833 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5836 mov dword ptr [0x117c7bd8], eax */
  w32((uint32_t)(0x117c7bd8), (EAX));
  /* 117a583b jmp 0x117a5844 */
  goto L_117a5844;
L_117a583d:;
  /* 117a583d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a583f jmp 0x117a58cb */
  goto L_117a58cb;
L_117a5844:;
  /* 117a5844 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5848 je 0x117a58c9 */
  if (C.zf) goto L_117a58c9;
  /* 117a584a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 117a584f push 0x117c2f08 */
  push32((uint32_t)(0x117c2f08u));
  /* 117a5854 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a5856 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5859 push ecx */
  push32((uint32_t)(ECX));
  /* 117a585a call 0x1179cbd0 */
  push32(0x117a585fu); f_1179cbd0();
  /* 117a585f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5862 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5865 push eax */
  push32((uint32_t)(EAX));
  /* 117a5866 call 0x11799da0 */
  push32(0x117a586bu); f_11799da0();
  /* 117a586b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a586e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117a5871 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5875 je 0x117a58c9 */
  if (C.zf) goto L_117a58c9;
  /* 117a5877 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a587a push edx */
  push32((uint32_t)(EDX));
  /* 117a587b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a587e push eax */
  push32((uint32_t)(EAX));
  /* 117a587f call 0x1179cd50 */
  push32(0x117a5884u); f_1179cd50();
  /* 117a5884 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5887 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117a588a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a588d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a5890 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5892 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117a5895 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5898 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 117a589b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a589e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a58a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a58a4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117a58a7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 117a58a9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a58ab not edx */
  EDX = (~(EDX));
  /* 117a58ad and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 117a58b0 push edx */
  push32((uint32_t)(EDX));
  /* 117a58b1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a58b4 push eax */
  push32((uint32_t)(EAX));
  /* 117a58b5 call dword ptr [0x117ca2fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2fc))), 0x117a58bbu);
  /* 117a58bb push 2 */
  push32((uint32_t)(0x2u));
  /* 117a58bd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a58c0 push ecx */
  push32((uint32_t)(ECX));
  /* 117a58c1 call 0x1179a830 */
  push32(0x117a58c6u); f_1179a830();
  /* 117a58c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a58c9:;
  /* 117a58c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a58cb:;
  /* 117a58cb pop esi */
  ESI = (pop32());
  /* 117a58cc mov esp, ebp */
  ESP = (EBP);
  /* 117a58ce pop ebp */
  EBP = (pop32());
  /* 117a58cf ret  */
  ESPCHK(0x117a55f0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x117a58d0 (124 bytes, 47 insns) */
void f_117a58d0(void) {
  FTRACE(0x117a58d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a58d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a58d1 mov ebp, esp */
  EBP = (ESP);
  /* 117a58d3 push ecx */
  push32((uint32_t)(ECX));
  /* 117a58d4 mov eax, dword ptr [0x117c7bd8] */
  EAX = (r32((uint32_t)(0x117c7bd8)));
  /* 117a58d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a58dc jmp 0x117a58e7 */
  goto L_117a58e7;
L_117a58de:;
  /* 117a58de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a58e1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a58e4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117a58e7:;
  /* 117a58e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a58ea cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a58ed je 0x117a593a */
  if (C.zf) goto L_117a593a;
  /* 117a58ef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a58f2 push eax */
  push32((uint32_t)(EAX));
  /* 117a58f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a58f6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a58f8 push edx */
  push32((uint32_t)(EDX));
  /* 117a58f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a58fc push eax */
  push32((uint32_t)(EAX));
  /* 117a58fd call 0x117a3b10 */
  push32(0x117a5902u); f_117a3b10();
  /* 117a5902 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5905 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a5907 jne 0x117a5938 */
  if (!C.zf) goto L_117a5938;
  /* 117a5909 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a590c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a590e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a5911 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 117a5915 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5918 je 0x117a592a */
  if (C.zf) goto L_117a592a;
  /* 117a591a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a591d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a591f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117a5922 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 117a5926 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a5928 jne 0x117a5938 */
  if (!C.zf) goto L_117a5938;
L_117a592a:;
  /* 117a592a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a592d sub eax, dword ptr [0x117c7bd8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c7bd8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a5933 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 117a5936 jmp 0x117a5948 */
  goto L_117a5948;
L_117a5938:;
  /* 117a5938 jmp 0x117a58de */
  goto L_117a58de;
L_117a593a:;
  /* 117a593a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a593d sub eax, dword ptr [0x117c7bd8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c7bd8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a5943 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 117a5946 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_117a5948:;
  /* 117a5948 mov esp, ebp */
  ESP = (EBP);
  /* 117a594a pop ebp */
  EBP = (pop32());
  /* 117a594b ret  */
  ESPCHK(0x117a58d0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x117a5950 (238 bytes, 80 insns) */
void f_117a5950(void) {
  FTRACE(0x117a5950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a5950 push ebp */
  push32((uint32_t)(EBP));
  /* 117a5951 mov ebp, esp */
  EBP = (ESP);
  /* 117a5953 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a5956 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 117a595d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5960 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117a5963 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5967 jne 0x117a5970 */
  if (!C.zf) goto L_117a5970;
  /* 117a5969 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a596b jmp 0x117a5a3a */
  goto L_117a5a3a;
L_117a5970:;
  /* 117a5970 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5973 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a5975 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5978 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a597b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117a597e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a5980 je 0x117a598d */
  if (C.zf) goto L_117a598d;
  /* 117a5982 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a5985 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5988 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117a598b jmp 0x117a5970 */
  goto L_117a5970;
L_117a598d:;
  /* 117a598d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 117a5992 push 0x117c2f08 */
  push32((uint32_t)(0x117c2f08u));
  /* 117a5997 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a5999 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117a599c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 117a59a3 push eax */
  push32((uint32_t)(EAX));
  /* 117a59a4 call 0x11799da0 */
  push32(0x117a59a9u); f_11799da0();
  /* 117a59a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a59ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117a59af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a59b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117a59b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a59b9 jne 0x117a59c5 */
  if (!C.zf) goto L_117a59c5;
  /* 117a59bb push 9 */
  push32((uint32_t)(0x9u));
  /* 117a59bd call 0x11798c20 */
  push32(0x117a59c2u); f_11798c20();
  /* 117a59c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a59c5:;
  /* 117a59c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a59c8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_117a59cb:;
  /* 117a59cb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a59ce cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a59d1 je 0x117a5a2e */
  if (C.zf) goto L_117a5a2e;
  /* 117a59d3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 117a59d8 push 0x117c2f08 */
  push32((uint32_t)(0x117c2f08u));
  /* 117a59dd push 2 */
  push32((uint32_t)(0x2u));
  /* 117a59df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a59e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117a59e4 push edx */
  push32((uint32_t)(EDX));
  /* 117a59e5 call 0x1179cbd0 */
  push32(0x117a59eau); f_1179cbd0();
  /* 117a59ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a59ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a59f0 push eax */
  push32((uint32_t)(EAX));
  /* 117a59f1 call 0x11799da0 */
  push32(0x117a59f6u); f_11799da0();
  /* 117a59f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a59f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a59fc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117a59fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a5a01 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5a04 je 0x117a5a1a */
  if (C.zf) goto L_117a5a1a;
  /* 117a5a06 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5a09 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117a5a0b push ecx */
  push32((uint32_t)(ECX));
  /* 117a5a0c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a5a0f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117a5a11 push eax */
  push32((uint32_t)(EAX));
  /* 117a5a12 call 0x1179cd50 */
  push32(0x117a5a17u); f_1179cd50();
  /* 117a5a17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a5a1a:;
  /* 117a5a1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5a1d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5a20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5a23 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a5a26 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5a29 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117a5a2c jmp 0x117a59cb */
  goto L_117a59cb;
L_117a5a2e:;
  /* 117a5a2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a5a31 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117a5a37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117a5a3a:;
  /* 117a5a3a mov esp, ebp */
  ESP = (EBP);
  /* 117a5a3c pop ebp */
  EBP = (pop32());
  /* 117a5a3d ret  */
  ESPCHK(0x117a5950u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a40 @ 0x117a5a40 (130 bytes, 50 insns) */
void f_117a5a40(void) {
  FTRACE(0x117a5a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a5a40 push ebp */
  push32((uint32_t)(EBP));
  /* 117a5a41 mov ebp, esp */
  EBP = (ESP);
  /* 117a5a43 push ecx */
  push32((uint32_t)(ECX));
  /* 117a5a44 push ebx */
  push32((uint32_t)(EBX));
  /* 117a5a45 push esi */
  push32((uint32_t)(ESI));
  /* 117a5a46 push edi */
  push32((uint32_t)(EDI));
  /* 117a5a47 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_117a5a4e:;
  /* 117a5a4e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5a52 jne 0x117a5a72 */
  if (!C.zf) goto L_117a5a72;
  /* 117a5a54 push 0x117c2f20 */
  push32((uint32_t)(0x117c2f20u));
  /* 117a5a59 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a5a5b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 117a5a5d push 0x117c2f14 */
  push32((uint32_t)(0x117c2f14u));
  /* 117a5a62 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a5a64 call 0x11798d70 */
  push32(0x117a5a69u); f_11798d70();
  /* 117a5a69 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5a6c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5a6f jne 0x117a5a72 */
  if (!C.zf) goto L_117a5a72;
  /* 117a5a71 int3  */
  x86_unimpl("int3 @ 0x117a5a71");
L_117a5a72:;
  /* 117a5a72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a5a74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a5a76 jne 0x117a5a4e */
  if (!C.zf) goto L_117a5a4e;
  /* 117a5a78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5a7b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117a5a7e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 117a5a81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117a5a83 je 0x117a5a91 */
  if (C.zf) goto L_117a5a91;
  /* 117a5a85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5a88 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 117a5a8f jmp 0x117a5ab8 */
  goto L_117a5ab8;
L_117a5a91:;
  /* 117a5a91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5a94 push ecx */
  push32((uint32_t)(ECX));
  /* 117a5a95 call 0x117a38d0 */
  push32(0x117a5a9au); f_117a38d0();
  /* 117a5a9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5a9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5aa0 push edx */
  push32((uint32_t)(EDX));
  /* 117a5aa1 call 0x117a5ad0 */
  push32(0x117a5aa6u); f_117a5ad0();
  /* 117a5aa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5aa9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a5aac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5aaf push eax */
  push32((uint32_t)(EAX));
  /* 117a5ab0 call 0x117a3940 */
  push32(0x117a5ab5u); f_117a3940();
  /* 117a5ab5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117a5ab8:;
  /* 117a5ab8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5abb pop edi */
  EDI = (pop32());
  /* 117a5abc pop esi */
  ESI = (pop32());
  /* 117a5abd pop ebx */
  EBX = (pop32());
  /* 117a5abe mov esp, ebp */
  ESP = (EBP);
  /* 117a5ac0 pop ebp */
  EBP = (pop32());
  /* 117a5ac1 ret  */
  ESPCHK(0x117a5a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ad0 @ 0x117a5ad0 (190 bytes, 67 insns) */
void f_117a5ad0(void) {
  FTRACE(0x117a5ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a5ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 117a5ad1 mov ebp, esp */
  EBP = (ESP);
  /* 117a5ad3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a5ad6 push ebx */
  push32((uint32_t)(EBX));
  /* 117a5ad7 push esi */
  push32((uint32_t)(ESI));
  /* 117a5ad8 push edi */
  push32((uint32_t)(EDI));
  /* 117a5ad9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 117a5ae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5ae3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117a5ae6:;
  /* 117a5ae6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5aea jne 0x117a5b0a */
  if (!C.zf) goto L_117a5b0a;
  /* 117a5aec push 0x117c2d48 */
  push32((uint32_t)(0x117c2d48u));
  /* 117a5af1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117a5af3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 117a5af5 push 0x117c2f14 */
  push32((uint32_t)(0x117c2f14u));
  /* 117a5afa push 2 */
  push32((uint32_t)(0x2u));
  /* 117a5afc call 0x11798d70 */
  push32(0x117a5b01u); f_11798d70();
  /* 117a5b01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5b04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5b07 jne 0x117a5b0a */
  if (!C.zf) goto L_117a5b0a;
  /* 117a5b09 int3  */
  x86_unimpl("int3 @ 0x117a5b09");
L_117a5b0a:;
  /* 117a5b0a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5b0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a5b0e jne 0x117a5ae6 */
  if (!C.zf) goto L_117a5ae6;
  /* 117a5b10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a5b13 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 117a5b16 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 117a5b1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a5b1d je 0x117a5b7a */
  if (C.zf) goto L_117a5b7a;
  /* 117a5b1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a5b22 push ecx */
  push32((uint32_t)(ECX));
  /* 117a5b23 call 0x117a4530 */
  push32(0x117a5b28u); f_117a4530();
  /* 117a5b28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5b2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a5b2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a5b31 push edx */
  push32((uint32_t)(EDX));
  /* 117a5b32 call 0x117a81b0 */
  push32(0x117a5b37u); f_117a81b0();
  /* 117a5b37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5b3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a5b3d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117a5b40 push ecx */
  push32((uint32_t)(ECX));
  /* 117a5b41 call 0x117a8080 */
  push32(0x117a5b46u); f_117a8080();
  /* 117a5b46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5b49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a5b4b jge 0x117a5b56 */
  if ((C.sf==C.of)) goto L_117a5b56;
  /* 117a5b4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 117a5b54 jmp 0x117a5b7a */
  goto L_117a5b7a;
L_117a5b56:;
  /* 117a5b56 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a5b59 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5b5d je 0x117a5b7a */
  if (C.zf) goto L_117a5b7a;
  /* 117a5b5f push 2 */
  push32((uint32_t)(0x2u));
  /* 117a5b61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a5b64 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 117a5b67 push ecx */
  push32((uint32_t)(ECX));
  /* 117a5b68 call 0x1179a830 */
  push32(0x117a5b6du); f_1179a830();
  /* 117a5b6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5b70 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a5b73 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_117a5b7a:;
  /* 117a5b7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a5b7d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 117a5b84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5b87 pop edi */
  EDI = (pop32());
  /* 117a5b88 pop esi */
  ESI = (pop32());
  /* 117a5b89 pop ebx */
  EBX = (pop32());
  /* 117a5b8a mov esp, ebp */
  ESP = (EBP);
  /* 117a5b8c pop ebp */
  EBP = (pop32());
  /* 117a5b8d ret  */
  ESPCHK(0x117a5ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b90 @ 0x117a5b90 (210 bytes, 63 insns) */
void f_117a5b90(void) {
  FTRACE(0x117a5b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a5b90 push ebp */
  push32((uint32_t)(EBP));
  /* 117a5b91 mov ebp, esp */
  EBP = (ESP);
  /* 117a5b93 push ecx */
  push32((uint32_t)(ECX));
  /* 117a5b94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5b97 cmp eax, dword ptr [0x117c96dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117c96dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5b9d jae 0x117a5bc1 */
  if (!C.cf) goto L_117a5bc1;
  /* 117a5b9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5ba2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117a5ba5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5ba8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117a5bab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a5bae mov eax, dword ptr [ecx*4 + 0x117c95a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117c95a0)));
  /* 117a5bb5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 117a5bba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117a5bbd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117a5bbf jne 0x117a5bd4 */
  if (!C.zf) goto L_117a5bd4;
L_117a5bc1:;
  /* 117a5bc1 call 0x117a25b0 */
  push32(0x117a5bc6u); f_117a25b0();
  /* 117a5bc6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 117a5bcc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a5bcf jmp 0x117a5c5e */
  goto L_117a5c5e;
L_117a5bd4:;
  /* 117a5bd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5bd7 push edx */
  push32((uint32_t)(EDX));
  /* 117a5bd8 call 0x117a42f0 */
  push32(0x117a5bddu); f_117a42f0();
  /* 117a5bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5be0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5be3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117a5be6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5be9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117a5bec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117a5bef mov edx, dword ptr [eax*4 + 0x117c95a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117c95a0)));
  /* 117a5bf6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 117a5bfb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 117a5bfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a5c00 je 0x117a5c3d */
  if (C.zf) goto L_117a5c3d;
  /* 117a5c02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5c05 push ecx */
  push32((uint32_t)(ECX));
  /* 117a5c06 call 0x117a4170 */
  push32(0x117a5c0bu); f_117a4170();
  /* 117a5c0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5c0e push eax */
  push32((uint32_t)(EAX));
  /* 117a5c0f call dword ptr [0x117ca2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca2f8))), 0x117a5c15u);
  /* 117a5c15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a5c17 jne 0x117a5c24 */
  if (!C.zf) goto L_117a5c24;
  /* 117a5c19 call dword ptr [0x117ca3d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117ca3d8))), 0x117a5c1fu);
  /* 117a5c1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a5c22 jmp 0x117a5c2b */
  goto L_117a5c2b;
L_117a5c24:;
  /* 117a5c24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_117a5c2b:;
  /* 117a5c2b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5c2f jne 0x117a5c33 */
  if (!C.zf) goto L_117a5c33;
  /* 117a5c31 jmp 0x117a5c4f */
  goto L_117a5c4f;
L_117a5c33:;
  /* 117a5c33 call 0x117a25c0 */
  push32(0x117a5c38u); f_117a25c0();
  /* 117a5c38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5c3b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_117a5c3d:;
  /* 117a5c3d call 0x117a25b0 */
  push32(0x117a5c42u); f_117a25b0();
  /* 117a5c42 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 117a5c48 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_117a5c4f:;
  /* 117a5c4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5c52 push eax */
  push32((uint32_t)(EAX));
  /* 117a5c53 call 0x117a4380 */
  push32(0x117a5c58u); f_117a4380();
  /* 117a5c58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5c5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117a5c5e:;
  /* 117a5c5e mov esp, ebp */
  ESP = (EBP);
  /* 117a5c60 pop ebp */
  EBP = (pop32());
  /* 117a5c61 ret  */
  ESPCHK(0x117a5b90u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x117a5c70 (219 bytes, 64 insns) */
void f_117a5c70(void) {
  FTRACE(0x117a5c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a5c70 push ebp */
  push32((uint32_t)(EBP));
  /* 117a5c71 mov ebp, esp */
  EBP = (ESP);
  /* 117a5c73 push ecx */
  push32((uint32_t)(ECX));
  /* 117a5c74 cmp dword ptr [0x117c7e7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117c7e7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5c7b je 0x117a5d11 */
  if (C.zf) goto L_117a5d11;
  /* 117a5c81 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 117a5c83 push 0x117c2f30 */
  push32((uint32_t)(0x117c2f30u));
  /* 117a5c88 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a5c8a push 0xac */
  push32((uint32_t)(0xacu));
  /* 117a5c8f push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5c91 call 0x1179a1b0 */
  push32(0x117a5c96u); f_1179a1b0();
  /* 117a5c96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5c99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a5c9c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5ca0 jne 0x117a5cac */
  if (!C.zf) goto L_117a5cac;
  /* 117a5ca2 mov eax, 1 */
  EAX = (0x1u);
  /* 117a5ca7 jmp 0x117a5d47 */
  goto L_117a5d47;
L_117a5cac:;
  /* 117a5cac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5caf push eax */
  push32((uint32_t)(EAX));
  /* 117a5cb0 call 0x117a5d50 */
  push32(0x117a5cb5u); f_117a5d50();
  /* 117a5cb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5cb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117a5cba je 0x117a5cdd */
  if (C.zf) goto L_117a5cdd;
  /* 117a5cbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5cbf push ecx */
  push32((uint32_t)(ECX));
  /* 117a5cc0 call 0x117a62e0 */
  push32(0x117a5cc5u); f_117a62e0();
  /* 117a5cc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5cc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a5cca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5ccd push edx */
  push32((uint32_t)(EDX));
  /* 117a5cce call 0x1179a830 */
  push32(0x117a5cd3u); f_1179a830();
  /* 117a5cd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5cd6 mov eax, 1 */
  EAX = (0x1u);
  /* 117a5cdb jmp 0x117a5d47 */
  goto L_117a5d47;
L_117a5cdd:;
  /* 117a5cdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5ce0 mov dword ptr [0x117c6dc8], eax */
  w32((uint32_t)(0x117c6dc8), (EAX));
  /* 117a5ce5 mov ecx, dword ptr [0x117c7ea4] */
  ECX = (r32((uint32_t)(0x117c7ea4)));
  /* 117a5ceb push ecx */
  push32((uint32_t)(ECX));
  /* 117a5cec call 0x117a62e0 */
  push32(0x117a5cf1u); f_117a62e0();
  /* 117a5cf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5cf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 117a5cf6 mov edx, dword ptr [0x117c7ea4] */
  EDX = (r32((uint32_t)(0x117c7ea4)));
  /* 117a5cfc push edx */
  push32((uint32_t)(EDX));
  /* 117a5cfd call 0x1179a830 */
  push32(0x117a5d02u); f_1179a830();
  /* 117a5d02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5d05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5d08 mov dword ptr [0x117c7ea4], eax */
  w32((uint32_t)(0x117c7ea4), (EAX));
  /* 117a5d0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a5d0f jmp 0x117a5d47 */
  goto L_117a5d47;
L_117a5d11:;
  /* 117a5d11 mov dword ptr [0x117c6dc8], 0x117c6dd0 */
  w32((uint32_t)(0x117c6dc8), (0x117c6dd0u));
  /* 117a5d1b mov ecx, dword ptr [0x117c7ea4] */
  ECX = (r32((uint32_t)(0x117c7ea4)));
  /* 117a5d21 push ecx */
  push32((uint32_t)(ECX));
  /* 117a5d22 call 0x117a62e0 */
  push32(0x117a5d27u); f_117a62e0();
  /* 117a5d27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5d2a push 2 */
  push32((uint32_t)(0x2u));
  /* 117a5d2c mov edx, dword ptr [0x117c7ea4] */
  EDX = (r32((uint32_t)(0x117c7ea4)));
  /* 117a5d32 push edx */
  push32((uint32_t)(EDX));
  /* 117a5d33 call 0x1179a830 */
  push32(0x117a5d38u); f_1179a830();
  /* 117a5d38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5d3b mov dword ptr [0x117c7ea4], 0 */
  w32((uint32_t)(0x117c7ea4), (0x0u));
  /* 117a5d45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117a5d47:;
  /* 117a5d47 mov esp, ebp */
  ESP = (EBP);
  /* 117a5d49 pop ebp */
  EBP = (pop32());
  /* 117a5d4a ret  */
  ESPCHK(0x117a5c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d50 @ 0x117a5d50 (1423 bytes, 533 insns) */
void f_117a5d50(void) {
  FTRACE(0x117a5d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117a5d50 push ebp */
  push32((uint32_t)(EBP));
  /* 117a5d51 mov ebp, esp */
  EBP = (ESP);
  /* 117a5d53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117a5d56 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117a5d5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117a5d5f mov ax, word ptr [0x117c7ede] */
  AX = (r16((uint32_t)(0x117c7ede)));
  /* 117a5d65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117a5d68 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5d6a mov cx, word ptr [0x117c7ee0] */
  CX = (r16((uint32_t)(0x117c7ee0)));
  /* 117a5d71 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117a5d74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117a5d78 jne 0x117a5d82 */
  if (!C.zf) goto L_117a5d82;
  /* 117a5d7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117a5d7d jmp 0x117a62db */
  goto L_117a62db;
L_117a5d82:;
  /* 117a5d82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5d85 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5d88 push edx */
  push32((uint32_t)(EDX));
  /* 117a5d89 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 117a5d8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5d8e push eax */
  push32((uint32_t)(EAX));
  /* 117a5d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5d91 call 0x117a96c0 */
  push32(0x117a5d96u); f_117a96c0();
  /* 117a5d96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5d99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5d9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5d9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5da1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5da4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5da7 push edx */
  push32((uint32_t)(EDX));
  /* 117a5da8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 117a5daa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5dad push eax */
  push32((uint32_t)(EAX));
  /* 117a5dae push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5db0 call 0x117a96c0 */
  push32(0x117a5db5u); f_117a96c0();
  /* 117a5db5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5db8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5dbb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5dbd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5dc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5dc3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5dc6 push edx */
  push32((uint32_t)(EDX));
  /* 117a5dc7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 117a5dc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5dcc push eax */
  push32((uint32_t)(EAX));
  /* 117a5dcd push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5dcf call 0x117a96c0 */
  push32(0x117a5dd4u); f_117a96c0();
  /* 117a5dd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5dd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5dda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5ddc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5ddf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5de2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5de5 push edx */
  push32((uint32_t)(EDX));
  /* 117a5de6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 117a5de8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5deb push eax */
  push32((uint32_t)(EAX));
  /* 117a5dec push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5dee call 0x117a96c0 */
  push32(0x117a5df3u); f_117a96c0();
  /* 117a5df3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5df6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5df9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5dfb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5dfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5e01 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5e04 push edx */
  push32((uint32_t)(EDX));
  /* 117a5e05 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 117a5e07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5e0a push eax */
  push32((uint32_t)(EAX));
  /* 117a5e0b push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5e0d call 0x117a96c0 */
  push32(0x117a5e12u); f_117a96c0();
  /* 117a5e12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5e15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5e18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5e1a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5e1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5e20 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5e23 push edx */
  push32((uint32_t)(EDX));
  /* 117a5e24 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 117a5e26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5e29 push eax */
  push32((uint32_t)(EAX));
  /* 117a5e2a push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5e2c call 0x117a96c0 */
  push32(0x117a5e31u); f_117a96c0();
  /* 117a5e31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5e34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5e37 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5e39 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5e3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5e3f push edx */
  push32((uint32_t)(EDX));
  /* 117a5e40 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 117a5e42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5e45 push eax */
  push32((uint32_t)(EAX));
  /* 117a5e46 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5e48 call 0x117a96c0 */
  push32(0x117a5e4du); f_117a96c0();
  /* 117a5e4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5e50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5e53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5e55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5e58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5e5b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5e5e push edx */
  push32((uint32_t)(EDX));
  /* 117a5e5f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 117a5e61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5e64 push eax */
  push32((uint32_t)(EAX));
  /* 117a5e65 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5e67 call 0x117a96c0 */
  push32(0x117a5e6cu); f_117a96c0();
  /* 117a5e6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5e6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5e72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5e74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5e77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5e7a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5e7d push edx */
  push32((uint32_t)(EDX));
  /* 117a5e7e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 117a5e80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5e83 push eax */
  push32((uint32_t)(EAX));
  /* 117a5e84 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5e86 call 0x117a96c0 */
  push32(0x117a5e8bu); f_117a96c0();
  /* 117a5e8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5e8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5e91 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5e93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5e96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5e99 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5e9c push edx */
  push32((uint32_t)(EDX));
  /* 117a5e9d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 117a5e9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5ea2 push eax */
  push32((uint32_t)(EAX));
  /* 117a5ea3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5ea5 call 0x117a96c0 */
  push32(0x117a5eaau); f_117a96c0();
  /* 117a5eaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5ead mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5eb0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5eb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5eb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5eb8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5ebb push edx */
  push32((uint32_t)(EDX));
  /* 117a5ebc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 117a5ebe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5ec1 push eax */
  push32((uint32_t)(EAX));
  /* 117a5ec2 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5ec4 call 0x117a96c0 */
  push32(0x117a5ec9u); f_117a96c0();
  /* 117a5ec9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5ecc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5ecf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5ed1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5ed4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5ed7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5eda push edx */
  push32((uint32_t)(EDX));
  /* 117a5edb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 117a5edd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5ee0 push eax */
  push32((uint32_t)(EAX));
  /* 117a5ee1 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5ee3 call 0x117a96c0 */
  push32(0x117a5ee8u); f_117a96c0();
  /* 117a5ee8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5eeb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5eee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5ef0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5ef3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5ef6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5ef9 push edx */
  push32((uint32_t)(EDX));
  /* 117a5efa push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 117a5efc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5eff push eax */
  push32((uint32_t)(EAX));
  /* 117a5f00 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5f02 call 0x117a96c0 */
  push32(0x117a5f07u); f_117a96c0();
  /* 117a5f07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5f0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5f0d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5f0f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5f12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5f15 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5f18 push edx */
  push32((uint32_t)(EDX));
  /* 117a5f19 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 117a5f1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5f1e push eax */
  push32((uint32_t)(EAX));
  /* 117a5f1f push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5f21 call 0x117a96c0 */
  push32(0x117a5f26u); f_117a96c0();
  /* 117a5f26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5f29 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5f2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5f2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5f31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5f34 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5f37 push edx */
  push32((uint32_t)(EDX));
  /* 117a5f38 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 117a5f3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5f3d push eax */
  push32((uint32_t)(EAX));
  /* 117a5f3e push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5f40 call 0x117a96c0 */
  push32(0x117a5f45u); f_117a96c0();
  /* 117a5f45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5f48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5f4b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5f4d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5f50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5f53 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5f56 push edx */
  push32((uint32_t)(EDX));
  /* 117a5f57 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 117a5f59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5f5c push eax */
  push32((uint32_t)(EAX));
  /* 117a5f5d push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5f5f call 0x117a96c0 */
  push32(0x117a5f64u); f_117a96c0();
  /* 117a5f64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5f67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5f6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5f6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5f6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5f72 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5f75 push edx */
  push32((uint32_t)(EDX));
  /* 117a5f76 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 117a5f78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5f7b push eax */
  push32((uint32_t)(EAX));
  /* 117a5f7c push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5f7e call 0x117a96c0 */
  push32(0x117a5f83u); f_117a96c0();
  /* 117a5f83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5f86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5f89 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5f8b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5f8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5f91 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5f94 push edx */
  push32((uint32_t)(EDX));
  /* 117a5f95 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 117a5f97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5f9a push eax */
  push32((uint32_t)(EAX));
  /* 117a5f9b push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5f9d call 0x117a96c0 */
  push32(0x117a5fa2u); f_117a96c0();
  /* 117a5fa2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5fa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5fa8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5faa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5fad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5fb0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5fb3 push edx */
  push32((uint32_t)(EDX));
  /* 117a5fb4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 117a5fb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5fb9 push eax */
  push32((uint32_t)(EAX));
  /* 117a5fba push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5fbc call 0x117a96c0 */
  push32(0x117a5fc1u); f_117a96c0();
  /* 117a5fc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5fc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5fc7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5fc9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5fcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5fcf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5fd2 push edx */
  push32((uint32_t)(EDX));
  /* 117a5fd3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 117a5fd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5fd8 push eax */
  push32((uint32_t)(EAX));
  /* 117a5fd9 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5fdb call 0x117a96c0 */
  push32(0x117a5fe0u); f_117a96c0();
  /* 117a5fe0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5fe3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a5fe6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a5fe8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a5feb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a5fee add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a5ff1 push edx */
  push32((uint32_t)(EDX));
  /* 117a5ff2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 117a5ff4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a5ff7 push eax */
  push32((uint32_t)(EAX));
  /* 117a5ff8 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a5ffa call 0x117a96c0 */
  push32(0x117a5fffu); f_117a96c0();
  /* 117a5fff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6002 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a6005 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6007 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a600a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a600d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6010 push edx */
  push32((uint32_t)(EDX));
  /* 117a6011 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 117a6013 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6016 push eax */
  push32((uint32_t)(EAX));
  /* 117a6017 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6019 call 0x117a96c0 */
  push32(0x117a601eu); f_117a96c0();
  /* 117a601e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6021 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a6024 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6026 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a6029 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a602c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a602f push edx */
  push32((uint32_t)(EDX));
  /* 117a6030 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 117a6032 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6035 push eax */
  push32((uint32_t)(EAX));
  /* 117a6036 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6038 call 0x117a96c0 */
  push32(0x117a603du); f_117a96c0();
  /* 117a603d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6040 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a6043 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6045 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a6048 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a604b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a604e push edx */
  push32((uint32_t)(EDX));
  /* 117a604f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 117a6051 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6054 push eax */
  push32((uint32_t)(EAX));
  /* 117a6055 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6057 call 0x117a96c0 */
  push32(0x117a605cu); f_117a96c0();
  /* 117a605c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a605f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a6062 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6064 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a6067 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a606a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a606d push edx */
  push32((uint32_t)(EDX));
  /* 117a606e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 117a6070 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6073 push eax */
  push32((uint32_t)(EAX));
  /* 117a6074 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6076 call 0x117a96c0 */
  push32(0x117a607bu); f_117a96c0();
  /* 117a607b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a607e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a6081 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6083 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a6086 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6089 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a608c push edx */
  push32((uint32_t)(EDX));
  /* 117a608d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 117a608f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6092 push eax */
  push32((uint32_t)(EAX));
  /* 117a6093 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6095 call 0x117a96c0 */
  push32(0x117a609au); f_117a96c0();
  /* 117a609a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a609d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a60a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a60a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a60a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a60a8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a60ab push edx */
  push32((uint32_t)(EDX));
  /* 117a60ac push 0x38 */
  push32((uint32_t)(0x38u));
  /* 117a60ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a60b1 push eax */
  push32((uint32_t)(EAX));
  /* 117a60b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a60b4 call 0x117a96c0 */
  push32(0x117a60b9u); f_117a96c0();
  /* 117a60b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a60bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a60bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a60c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a60c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a60c7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a60ca push edx */
  push32((uint32_t)(EDX));
  /* 117a60cb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 117a60cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a60d0 push eax */
  push32((uint32_t)(EAX));
  /* 117a60d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a60d3 call 0x117a96c0 */
  push32(0x117a60d8u); f_117a96c0();
  /* 117a60d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a60db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a60de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a60e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a60e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a60e6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a60e9 push edx */
  push32((uint32_t)(EDX));
  /* 117a60ea push 0x3a */
  push32((uint32_t)(0x3au));
  /* 117a60ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a60ef push eax */
  push32((uint32_t)(EAX));
  /* 117a60f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a60f2 call 0x117a96c0 */
  push32(0x117a60f7u); f_117a96c0();
  /* 117a60f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a60fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a60fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a60ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a6102 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6105 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6108 push edx */
  push32((uint32_t)(EDX));
  /* 117a6109 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 117a610b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a610e push eax */
  push32((uint32_t)(EAX));
  /* 117a610f push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6111 call 0x117a96c0 */
  push32(0x117a6116u); f_117a96c0();
  /* 117a6116 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6119 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a611c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a611e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a6121 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6124 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6127 push edx */
  push32((uint32_t)(EDX));
  /* 117a6128 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 117a612a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a612d push eax */
  push32((uint32_t)(EAX));
  /* 117a612e push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6130 call 0x117a96c0 */
  push32(0x117a6135u); f_117a96c0();
  /* 117a6135 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6138 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a613b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a613d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a6140 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6143 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6146 push edx */
  push32((uint32_t)(EDX));
  /* 117a6147 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 117a6149 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a614c push eax */
  push32((uint32_t)(EAX));
  /* 117a614d push 1 */
  push32((uint32_t)(0x1u));
  /* 117a614f call 0x117a96c0 */
  push32(0x117a6154u); f_117a96c0();
  /* 117a6154 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6157 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a615a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a615c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a615f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6162 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6168 push edx */
  push32((uint32_t)(EDX));
  /* 117a6169 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 117a616b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a616e push eax */
  push32((uint32_t)(EAX));
  /* 117a616f push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6171 call 0x117a96c0 */
  push32(0x117a6176u); f_117a96c0();
  /* 117a6176 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6179 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a617c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a617e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a6181 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6184 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a618a push edx */
  push32((uint32_t)(EDX));
  /* 117a618b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 117a618d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6190 push eax */
  push32((uint32_t)(EAX));
  /* 117a6191 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6193 call 0x117a96c0 */
  push32(0x117a6198u); f_117a96c0();
  /* 117a6198 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a619b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a619e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a61a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a61a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a61a6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a61ac push edx */
  push32((uint32_t)(EDX));
  /* 117a61ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 117a61af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a61b2 push eax */
  push32((uint32_t)(EAX));
  /* 117a61b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a61b5 call 0x117a96c0 */
  push32(0x117a61bau); f_117a96c0();
  /* 117a61ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a61bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a61c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a61c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a61c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a61c8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a61ce push edx */
  push32((uint32_t)(EDX));
  /* 117a61cf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 117a61d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a61d4 push eax */
  push32((uint32_t)(EAX));
  /* 117a61d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a61d7 call 0x117a96c0 */
  push32(0x117a61dcu); f_117a96c0();
  /* 117a61dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a61df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a61e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a61e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a61e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a61ea add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a61f0 push edx */
  push32((uint32_t)(EDX));
  /* 117a61f1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 117a61f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a61f6 push eax */
  push32((uint32_t)(EAX));
  /* 117a61f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a61f9 call 0x117a96c0 */
  push32(0x117a61feu); f_117a96c0();
  /* 117a61fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6201 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a6204 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6206 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a6209 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a620c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6212 push edx */
  push32((uint32_t)(EDX));
  /* 117a6213 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 117a6215 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a6218 push eax */
  push32((uint32_t)(EAX));
  /* 117a6219 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a621b call 0x117a96c0 */
  push32(0x117a6220u); f_117a96c0();
  /* 117a6220 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6223 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a6226 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a6228 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a622b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a622e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6234 push edx */
  push32((uint32_t)(EDX));
  /* 117a6235 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 117a6237 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a623a push eax */
  push32((uint32_t)(EAX));
  /* 117a623b push 1 */
  push32((uint32_t)(0x1u));
  /* 117a623d call 0x117a96c0 */
  push32(0x117a6242u); f_117a96c0();
  /* 117a6242 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6245 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a6248 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a624a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a624d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6250 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6256 push edx */
  push32((uint32_t)(EDX));
  /* 117a6257 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 117a6259 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117a625c push eax */
  push32((uint32_t)(EAX));
  /* 117a625d push 1 */
  push32((uint32_t)(0x1u));
  /* 117a625f call 0x117a96c0 */
  push32(0x117a6264u); f_117a96c0();
  /* 117a6264 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6267 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a626a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a626c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a626f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6272 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6278 push edx */
  push32((uint32_t)(EDX));
  /* 117a6279 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 117a627b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a627e push eax */
  push32((uint32_t)(EAX));
  /* 117a627f push 1 */
  push32((uint32_t)(0x1u));
  /* 117a6281 call 0x117a96c0 */
  push32(0x117a6286u); f_117a96c0();
  /* 117a6286 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a6289 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a628c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a628e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a6291 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a6294 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a629a push edx */
  push32((uint32_t)(EDX));
  /* 117a629b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 117a629d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a62a0 push eax */
  push32((uint32_t)(EAX));
  /* 117a62a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a62a3 call 0x117a96c0 */
  push32(0x117a62a8u); f_117a96c0();
  /* 117a62a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a62ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a62ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a62b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a62b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117a62b6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117a62bc push edx */
  push32((uint32_t)(EDX));
  /* 117a62bd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 117a62c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117a62c5 push eax */
  push32((uint32_t)(EAX));
  /* 117a62c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 117a62c8 call 0x117a96c0 */
  push32(0x117a62cdu); f_117a96c0();
  /* 117a62cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117a62d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117a62d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117a62d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117a62d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_117a62db:;
  /* 117a62db mov esp, ebp */
  ESP = (EBP);
  /* 117a62dd pop ebp */
  EBP = (pop32());
  /* 117a62de ret  */
  ESPCHK(0x117a5d50u, _esp0);
  ESP += 4; return;
}

